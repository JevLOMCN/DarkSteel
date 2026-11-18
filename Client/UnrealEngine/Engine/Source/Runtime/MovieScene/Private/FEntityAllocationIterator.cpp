// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 9

// FEntityAllocationIterator @ 146092d40

/* WARNING: Enum "Type": Some values do not have unique names */

FEntityAllocationIterator * __thiscall
UE::MovieScene::FEntityAllocationIterator::FEntityAllocationIterator
          (FEntityAllocationIterator *this,FEntityAllocationIterator *param_1)

{
  this->Manager = param_1->Manager;
  this->Filter = param_1->Filter;
  this->AllocationIndex = param_1->AllocationIndex;
  param_1->Filter = (FEntityComponentFilter *)0x0;
  return this;
}

// FEntityAllocationIterator @ 146092d70

/* WARNING: Enum "Type": Some values do not have unique names */

FEntityAllocationIterator * __thiscall
UE::MovieScene::FEntityAllocationIterator::FEntityAllocationIterator
          (FEntityAllocationIterator *this,FEntityManager *param_1)

{
  this->Filter = (FEntityComponentFilter *)0x0;
  this->Manager = param_1;
  this->AllocationIndex = *(int *)&(param_1->EntityAllocationMasks).field_0x8;
  return this;
}

// FEntityAllocationIterator @ 146092d90

/* WARNING: Enum "Type": Some values do not have unique names */

FEntityAllocationIterator * __thiscall
UE::MovieScene::FEntityAllocationIterator::FEntityAllocationIterator
          (FEntityAllocationIterator *this,FEntityManager *param_1,FEntityComponentFilter *param_2)

{
  int iVar1;
  
  this->Filter = param_2;
  this->Manager = param_1;
  FEntityManager::EnterIteration(param_1);
  iVar1 = FindMatchingAllocationStartingAt(this,0);
  this->AllocationIndex = iVar1;
  return this;
}

// ~FEntityAllocationIterator @ 1460976e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityAllocationIterator::~FEntityAllocationIterator
          (FEntityAllocationIterator *this)

{
  if (this->Filter != (FEntityComponentFilter *)0x0) {
    FEntityManager::ExitIteration(this->Manager);
    return;
  }
  return;
}

// operator= @ 146099970

/* WARNING: Enum "Type": Some values do not have unique names */

FEntityAllocationIterator * __thiscall
UE::MovieScene::FEntityAllocationIterator::operator=
          (FEntityAllocationIterator *this,FEntityAllocationIterator *param_1)

{
  this->Manager = param_1->Manager;
  this->Filter = param_1->Filter;
  this->AllocationIndex = param_1->AllocationIndex;
  param_1->Filter = (FEntityComponentFilter *)0x0;
  return this;
}

// operator!= @ 14609b140

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FEntityAllocationIterator::operator!=
          (FEntityAllocationIterator *this,FEntityAllocationIterator *param_1)

{
  return this->AllocationIndex != param_1->AllocationIndex;
}

// operator* @ 14609b6d0

/* WARNING: Enum "Type": Some values do not have unique names */

FEntityAllocationProxy * __thiscall
UE::MovieScene::FEntityAllocationIterator::operator*
          (FEntityAllocationIterator *this,FEntityAllocationProxy *__return_storage_ptr__)

{
  __return_storage_ptr__->Manager = this->Manager;
  __return_storage_ptr__->AllocationIndex = this->AllocationIndex;
  return __return_storage_ptr__;
}

// operator++ @ 14609bc10

/* WARNING: Enum "Type": Some values do not have unique names */

FEntityAllocationIterator * __thiscall
UE::MovieScene::FEntityAllocationIterator::operator++(FEntityAllocationIterator *this)

{
  int iVar1;
  
  iVar1 = FindMatchingAllocationStartingAt(this,this->AllocationIndex + 1);
  this->AllocationIndex = iVar1;
  return this;
}

// FindMatchingAllocationStartingAt @ 1460c5c70

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::MovieScene::FEntityAllocationIterator::FindMatchingAllocationStartingAt
          (FEntityAllocationIterator *this,int param_1)

{
  FEntityManager *pFVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  FEntityManager *pFVar12;
  
  pFVar1 = this->Manager;
  uVar9 = (ulonglong)param_1;
  bVar4 = FEntityComponentFilter::IsValid(&pFVar1->GlobalIterationFilter);
  pFVar12 = this->Manager;
  if (param_1 < *(int *)&(pFVar12->EntityAllocationMasks).field_0x8) {
    lVar10 = uVar9 * 8;
    do {
      uVar8 = (uint)uVar9;
      if ((((int)uVar8 < 0) || (*(int *)&(pFVar12->EntityAllocationMasks).field_0x28 <= (int)uVar8))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5c6,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      puVar2 = *(undefined1 **)&(pFVar12->EntityAllocationMasks).field_0x20;
      puVar11 = &(pFVar12->EntityAllocationMasks).field_0x10;
      if (puVar2 != (undefined1 *)0x0) {
        puVar11 = puVar2;
      }
      uVar7 = uVar8;
      if ((int)uVar8 < 0) {
        uVar7 = uVar8 + 0x1f;
      }
      if (((((*(uint *)(puVar11 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar8 & 0x1f) & 1) != 0) &&
           ((!bVar4 ||
            (bVar5 = FEntityComponentFilter::Match
                               (&pFVar1->GlobalIterationFilter,
                                (FComponentMask *)
                                ((longlong)(int)uVar8 * 0x38 +
                                *(longlong *)&this->Manager->EntityAllocationMasks)), bVar5)))) &&
          (bVar5 = FEntityComponentFilter::Match
                             (this->Filter,
                              (FComponentMask *)
                              ((longlong)(int)uVar8 * 0x38 +
                              *(longlong *)&this->Manager->EntityAllocationMasks)), bVar5)) &&
         (*(short *)(*(longlong *)(*(longlong *)&this->Manager->EntityAllocations + lVar10) + 0xe)
          != 0)) {
        return uVar8;
      }
      pFVar12 = this->Manager;
      param_1 = uVar8 + 1;
      uVar9 = (ulonglong)(uint)param_1;
      lVar10 = lVar10 + 8;
    } while (param_1 < *(int *)&(pFVar12->EntityAllocationMasks).field_0x8);
  }
  return param_1;
}

