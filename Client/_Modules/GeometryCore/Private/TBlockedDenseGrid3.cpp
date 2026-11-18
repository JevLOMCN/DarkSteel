// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// Resize @ 1433c60f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TBlockedDenseGrid3<int>::Resize
          (TBlockedDenseGrid3<int> *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  longlong lVar6;
  
  TBasicBlockedDenseGrid3<int,32>::Resize
            ((TBasicBlockedDenseGrid3<int,32> *)this,param_1,param_2,param_3);
  lVar5 = this->_padding_;
  piVar1 = &(this->BlockLocks).ArrayMax;
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  pFVar4 = (this->BlockLocks).AllocatorInstance.Data;
  iVar3 = (this->BlockLocks).ArrayNum;
  lVar6 = this->_padding_;
  if (*piVar1 < 0) {
    DestructItems<UE::FWindowsRecursiveMutex,int>((FWindowsRecursiveMutex *)pFVar4,iVar3);
    (this->BlockLocks).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->BlockLocks).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::FWindowsRecursiveMutex,int>((FWindowsRecursiveMutex *)pFVar4,iVar3);
    (this->BlockLocks).ArrayNum = 0;
  }
  TArray<UE::FWindowsRecursiveMutex,TSizedDefaultAllocator<32>_>::SetNum
            (&this->BlockLocks,(int)lVar5 * iVar2 * (int)lVar6,Default);
  return;
}

// Resize @ 1433c6180

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TBlockedDenseGrid3<float>::Resize
          (TBlockedDenseGrid3<float> *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  longlong lVar6;
  
  TBasicBlockedDenseGrid3<float,32>::Resize
            ((TBasicBlockedDenseGrid3<float,32> *)this,param_1,param_2,param_3);
  lVar5 = this->_padding_;
  piVar1 = &(this->BlockLocks).ArrayMax;
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  pFVar4 = (this->BlockLocks).AllocatorInstance.Data;
  iVar3 = (this->BlockLocks).ArrayNum;
  lVar6 = this->_padding_;
  if (*piVar1 < 0) {
    DestructItems<UE::FWindowsRecursiveMutex,int>((FWindowsRecursiveMutex *)pFVar4,iVar3);
    (this->BlockLocks).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->BlockLocks).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::FWindowsRecursiveMutex,int>((FWindowsRecursiveMutex *)pFVar4,iVar3);
    (this->BlockLocks).ArrayNum = 0;
  }
  TArray<UE::FWindowsRecursiveMutex,TSizedDefaultAllocator<32>_>::SetNum
            (&this->BlockLocks,(int)lVar5 * iVar2 * (int)lVar6,Default);
  return;
}

