// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 4

// TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int><TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>_const_&,TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>_> @ 1471b97a0

TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> * __thiscall
TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int><TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>_const_&,TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *this,
          TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *pTVar4;
  
  this->DataPtr = (FArchetypeEntityRange *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *)
             (*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FMassFragmentRequirementDescription_const_,int><TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_const_&,TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_> @ 1471b9810

TArrayView<FMassFragmentRequirementDescription_const_,int> * __thiscall
TArrayView<FMassFragmentRequirementDescription_const_,int>::
TArrayView<FMassFragmentRequirementDescription_const_,int><TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_const_&,TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FMassFragmentRequirementDescription_const_,int> *this,
          TArray<FMassFragmentRequirementDescription,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMassFragmentRequirementDescription_const_,int> *pTVar4;
  
  this->DataPtr = (FMassFragmentRequirementDescription *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FMassFragmentRequirementDescription_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 1471e27d0

TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_> * __thiscall
TArrayView<TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_>_const_,int>::operator[]
          (TArrayView<TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_>_const_,int>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<UE::Mass::FArchetypeGroupID,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1471e2850

UScriptStruct ** __thiscall
TArrayView<UScriptStruct_const_*,int>::operator[]
          (TArrayView<UScriptStruct_const_*,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UScriptStruct **ppUVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      ppUVar4 = (UScriptStruct **)(*pcVar1)();
      return ppUVar4;
    }
  }
  return this->DataPtr + param_1;
}

