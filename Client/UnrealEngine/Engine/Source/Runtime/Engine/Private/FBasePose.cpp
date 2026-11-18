// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// operator[] @ 1473dc7b0

TTransform<double> * __thiscall
FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::operator[]
          (FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this,
          FCompactPoseBoneIndex *param_1)

{
  FCompactPoseBoneIndex FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TTransform<double> *pTVar5;
  
  FVar1 = *param_1;
  uVar4 = 0;
  if ((int)FVar1 < (this->Bones).ArrayNum) {
    uVar4 = ~(uint)FVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTransform<double> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (this->Bones).AllocatorInstance.Data + (int)FVar1;
}

// GetMutableBones @ 147402cb0

TArrayView<UE::Math::TTransform<double>,int> * __thiscall
FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::GetMutableBones
          (FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this,
          TArrayView<UE::Math::TTransform<double>,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TTransform<double>,int> *pTVar4;
  
  iVar1 = (this->Bones).ArrayNum;
  __return_storage_ptr__->DataPtr = (this->Bones).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UE::Math::TTransform<double>,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

