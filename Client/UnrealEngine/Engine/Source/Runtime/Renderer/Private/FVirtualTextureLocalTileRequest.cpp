// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// MergeWith @ 145912a10

FVirtualTextureLocalTileRequest * __thiscall
FVirtualTextureLocalTileRequest::MergeWith
          (FVirtualTextureLocalTileRequest *this,FVirtualTextureLocalTileRequest *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = param_1->PackedValue;
  if (((byte)(param_1->PackedValue >> 0x3c) & 7) < ((byte)(*(ulonglong *)this >> 0x3c) & 7)) {
    uVar1 = *(ulonglong *)this;
  }
  uVar2 = (uVar1 & 0xf000000000000000 ^ *(ulonglong *)this) & 0x8fffffffffffffff ^
          uVar1 & 0xf000000000000000;
  *(ulonglong *)this = uVar2;
  uVar1 = param_1->PackedValue >> 0x3f;
  if (param_1->PackedValue >> 0x3f < uVar2 >> 0x3f) {
    uVar1 = uVar2 >> 0x3f;
  }
  *(ulonglong *)this = uVar1 << 0x3f | uVar2 & 0x7fffffffffffffff;
  ValidatePriorities(this);
  return (FVirtualTextureLocalTileRequest *)this;
}

