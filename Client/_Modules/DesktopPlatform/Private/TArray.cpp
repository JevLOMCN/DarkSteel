// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DesktopPlatform
// Functions: 1

// RemoveAtImpl @ 142d31790

void __thiscall
TArray<FTargetInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FTargetInfo,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FTargetInfo *_Dst;
  int iVar1;
  
  _Dst = (FTargetInfo *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x28);
  DestructItems<FTargetInfo,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x28);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

