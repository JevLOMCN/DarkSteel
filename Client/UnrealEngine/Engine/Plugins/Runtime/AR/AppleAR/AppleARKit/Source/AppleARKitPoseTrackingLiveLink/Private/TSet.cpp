// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitPoseTrackingLiveLink
// Functions: 1

// Empty @ 14cfe5610

void __thiscall
TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::Empty
          (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
           *this,int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 1;
  if (3 < (uint)param_1) {
    uVar2 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar3 & 0x1f);
  }
  piVar1 = &this->HashSize;
  if (((param_1 < 1) || (iVar4 <= *piVar1)) && (*piVar1 <= iVar4)) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
  }
  else {
    TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
    *piVar1 = iVar4;
    Rehash(this);
  }
  return;
}

