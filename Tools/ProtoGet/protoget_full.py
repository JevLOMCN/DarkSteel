"""
Complete .proto extraction from ProjectDS.exe.

Why this exists: protod3.py (GetProtos.bat) misses files and truncates large ones:
  * descriptors with no `package` line (ErrorCode, _api_common, _unique_id, _vector, structs_*, ...) are never found,
    because it searches for ".proto" followed by the package tag;
  * big descriptors are cut short (client_msg.proto had 28 of 98 messages, server_msg.proto 213 of 273).
This script finds a FileDescriptorProto by its exact start (0x0A <len> <name>), walks its top-level fields to get the exact end,
parses it with google.protobuf.descriptor_pb2 and renders .proto text (proto3 syntax, `optional`, map<> and real oneofs handled).
Every file also gets `option csharp_namespace = "MirProto.<Package>"` so the generated C# (project M5.Protocol) never lands in
the global namespace and cannot clash with the legacy Mir 4 types.

Usage:   python -I protoget_full.py <ProjectDS.exe> <out dir> [seed dir with existing .proto files]
Seeds are the file names to extract (default: every .proto already in the seed dir). Imports that are missing are followed
automatically until the set is closed.
Needs:   pip install protobuf
"""
import os
import re
import sys

from google.protobuf import descriptor_pb2 as dp

EXE, OUT = sys.argv[1], sys.argv[2]
SEED = sys.argv[3] if len(sys.argv) > 3 else OUT
data = open(EXE, "rb").read()

SCALARS = {1: "double", 2: "float", 3: "int64", 4: "uint64", 5: "int32", 6: "fixed64", 7: "fixed32", 8: "bool", 9: "string",
           12: "bytes", 13: "uint32", 15: "sfixed32", 16: "sfixed64", 17: "sint32", 18: "sint64"}


def varint(b, i):
    r = s = 0
    while True:
        c = b[i]
        i += 1
        r |= (c & 0x7F) << s
        if not c & 0x80:
            return r, i
        s += 7


def extent(b, i):
    """End of a top-level FileDescriptorProto starting at i (fields 1..12 only)."""
    while True:
        try:
            tag, j = varint(b, i)
        except IndexError:
            return i
        f, w = tag >> 3, tag & 7
        if f < 1 or f > 12 or w not in (0, 2):
            return i
        if w == 0:
            _, j = varint(b, j)
        else:
            n, j = varint(b, j)
            j += n
        i = j


def type_name(f):
    return SCALARS.get(f.type) or f.type_name.lstrip(".")


def render_message(m, ind, lines, proto3):
    lines.append(f"{ind}message {m.name} {{")
    maps = {}
    for n in m.nested_type:
        if n.options.map_entry:
            maps[n.name] = n
        else:
            render_message(n, ind + "  ", lines, proto3)
    for en in m.enum_type:
        lines.append(f"{ind}  enum {en.name} {{")
        lines += [f"{ind}    {v.name} = {v.number};" for v in en.value]
        lines.append(f"{ind}  }}")
    synthetic = set()   # proto3 `optional` is encoded as a one-field synthetic oneof
    for i, _ in enumerate(m.oneof_decl):
        fs = [f for f in m.field if f.HasField("oneof_index") and f.oneof_index == i]
        if proto3 and len(fs) == 1 and fs[0].proto3_optional:
            synthetic.add(i)
    real = {}
    for f in m.field:
        if f.HasField("oneof_index") and f.oneof_index not in synthetic:
            real.setdefault(f.oneof_index, []).append(f)
            continue
        short = f.type_name.lstrip(".").split(".")[-1]
        if f.label == 3 and short in maps:
            k = [x for x in maps[short].field if x.number == 1][0]
            v = [x for x in maps[short].field if x.number == 2][0]
            lines.append(f"{ind}  map<{type_name(k)}, {type_name(v)}> {f.name} = {f.number};")
            continue
        label = "repeated " if f.label == 3 else (("optional " if f.proto3_optional else "") if proto3 else ("required " if f.label == 2 else "optional "))
        lines.append(f"{ind}  {label}{type_name(f)} {f.name} = {f.number};")
    for idx, fs in real.items():
        lines.append(f"{ind}  oneof {m.oneof_decl[idx].name} {{")
        lines += [f"{ind}    {type_name(f)} {f.name} = {f.number};" for f in fs]
        lines.append(f"{ind}  }}")
    lines.append(f"{ind}}}")


def pascal(s):
    return "".join(p[:1].upper() + p[1:] for p in s.split("_") if p)


def render(fd):
    proto3 = fd.syntax == "proto3"
    ns = "MirProto." + ".".join(pascal(p) for p in fd.package.split(".")) if fd.package else "MirProto"
    lines = []
    if proto3:
        lines.append('syntax = "proto3";')
    if fd.package:
        lines.append(f"package {fd.package};")
    lines.append(f'option csharp_namespace = "{ns}";')
    lines.append("")
    lines += [f'import "{d}";' for d in fd.dependency]
    lines.append("")
    for en in fd.enum_type:
        lines.append(f"enum {en.name} {{")
        lines += [f"  {v.name} = {v.number};" for v in en.value]
        lines.append("}")
    for m in fd.message_type:
        render_message(m, "", lines, proto3)
    return "\n".join(lines) + "\n"


def find(name):
    pat = bytes([0x0A, len(name)]) + name.encode()
    pos = 0
    while True:
        i = data.find(pat, pos)
        if i < 0:
            return None
        pos = i + 1
        fd = dp.FileDescriptorProto()
        try:
            fd.ParseFromString(data[i:extent(data, i)])
        except Exception:
            continue
        if fd.name == name and (fd.enum_type or fd.message_type):
            return fd


todo = []
for root, _, files in os.walk(SEED):
    for f in files:
        if f.endswith(".proto"):
            todo.append(os.path.relpath(os.path.join(root, f), SEED).replace("\\", "/"))
done, missing = set(), []
while todo:
    name = todo.pop()
    if name in done or name.startswith("google/"):
        continue
    done.add(name)
    fd = find(name)
    if fd is None:
        missing.append(name)
        continue
    path = os.path.join(OUT, name)
    os.makedirs(os.path.dirname(path), exist_ok=True)
    open(path, "w", newline="\n").write(render(fd))
    todo += [d for d in fd.dependency if d not in done]
print(f"wrote {len(done) - len(missing)} files; not found in exe: {missing}")
