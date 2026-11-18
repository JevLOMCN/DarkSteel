// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// Compare @ 14ebbf410

bool __thiscall IOnlinePlatformData::Compare(IOnlinePlatformData *this,IOnlinePlatformData *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *_Buf2;
  void *_Buf1;
  
  pcVar1 = *(code **)((longlong)*param_1 + 0x18);
  iVar2 = (**(code **)((longlong)*this + 0x18))();
  iVar3 = (*pcVar1)(param_1);
  if (iVar2 == iVar3) {
    iVar2 = (**(code **)((longlong)*this + 0x18))(this);
    _Buf2 = (void *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
    _Buf1 = (void *)(**(code **)((longlong)*this + 0x10))(this);
    iVar2 = memcmp(_Buf1,_Buf2,(longlong)iVar2);
    if (iVar2 == 0) {
      return true;
    }
  }
  return false;
}

