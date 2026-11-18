// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 1

// Append @ 14fbad700

/* public: void __cdecl google::protobuf::io::zc_sink_internal::ZeroCopyStreamByteSink::Append(char
   const * __ptr64,unsigned __int64) __ptr64 */

void __thiscall
google::protobuf::io::zc_sink_internal::ZeroCopyStreamByteSink::Append
          (ZeroCopyStreamByteSink *this,char *param_1,__uint64 param_2)

{
  ZeroCopyStreamByteSink ZVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong _Size;
  uint local_res8 [2];
  
  ZVar1 = this[0x20];
  while( true ) {
    if (ZVar1 != (ZeroCopyStreamByteSink)0x0) {
      return;
    }
    if (param_2 == 0) break;
    uVar3 = *(ulonglong *)(this + 0x10);
    if (uVar3 == 0) {
      cVar2 = (**(code **)(**(longlong **)this + 8))(*(longlong **)this,this + 8,local_res8);
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0x10) = 0;
        this[0x20] = (ZeroCopyStreamByteSink)0x1;
        return;
      }
      uVar3 = (ulonglong)local_res8[0];
      *(ulonglong *)(this + 0x10) = uVar3;
    }
    _Size = param_2;
    if (uVar3 < param_2) {
      _Size = uVar3;
    }
    memcpy(*(void **)(this + 8),param_1,_Size);
    *(ulonglong *)(this + 8) = *(longlong *)(this + 8) + _Size;
    param_1 = param_1 + _Size;
    *(ulonglong *)(this + 0x10) = *(longlong *)(this + 0x10) - _Size;
    param_2 = param_2 - _Size;
    *(ulonglong *)(this + 0x18) = *(longlong *)(this + 0x18) + _Size;
    ZVar1 = this[0x20];
  }
  return;
}

