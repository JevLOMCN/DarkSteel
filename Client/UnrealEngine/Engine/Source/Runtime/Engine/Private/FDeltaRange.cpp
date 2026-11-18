// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetIterator @ 147d08980

FConstIterator * __thiscall
FInstanceAttributeTracker::FDeltaRange<1>::GetIterator
          (FDeltaRange<1> *this,FConstIterator *__return_storage_ptr__)

{
  int iVar1;
  FInstanceAttributeTracker *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FConstIterator *pFVar7;
  uint uVar8;
  FAnyValidIterator<3> local_28;
  
  if (this->bFullUpdate != false) {
    __return_storage_ptr__->MaxNum = this->NumItems;
    __return_storage_ptr__->ItemIndex = 0;
    __return_storage_ptr__->bUseIterator = false;
    (__return_storage_ptr__->It).Tracker = (FInstanceAttributeTracker *)0x0;
    (__return_storage_ptr__->It).ElementIndex = 0;
    (__return_storage_ptr__->It).ElementOffset = 0;
    return __return_storage_ptr__;
  }
  pFVar2 = this->Tracker;
  iVar6 = pFVar2->FirstChangedIndex;
  if (pFVar2->MaxIndex < pFVar2->FirstChangedIndex) {
    iVar6 = pFVar2->MaxIndex;
  }
  uVar8 = iVar6 >> 0x1f & 7;
  uVar5 = iVar6 + uVar8;
  iVar6 = (uVar5 & 7) - uVar8;
  uVar5 = (int)uVar5 >> 3;
  local_28.Tracker = pFVar2;
  local_28.ElementIndex = uVar5;
  local_28.ElementOffset = iVar6;
  if (-1 < (int)uVar5) {
    iVar1 = (pFVar2->Data).ArrayNum;
    if ((int)uVar5 < iVar1) {
      uVar8 = 0;
      if ((int)uVar5 < iVar1) {
        uVar8 = ~uVar5 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FConstIterator *)(*pcVar3)();
          return pFVar7;
        }
      }
      local_28.CurrentElement =
           *(uint *)((pFVar2->Data).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) & 0x33333333;
      goto LAB_147d08a63;
    }
  }
  local_28.CurrentElement = 0;
LAB_147d08a63:
  local_28.CurrentElement = local_28.CurrentElement >> ((char)iVar6 * '\x04' & 0x1fU);
  FAnyValidIterator<3>::AdvanceUntilAny(&local_28);
  (__return_storage_ptr__->It).Tracker = local_28.Tracker;
  (__return_storage_ptr__->It).ElementIndex = local_28.ElementIndex;
  (__return_storage_ptr__->It).CurrentElement = local_28.CurrentElement;
  __return_storage_ptr__->bUseIterator = true;
  *(ulonglong *)&(__return_storage_ptr__->It).ElementOffset =
       CONCAT44(local_28._20_4_,local_28.ElementOffset);
  __return_storage_ptr__->ItemIndex = 0;
  __return_storage_ptr__->MaxNum = 0;
  return __return_storage_ptr__;
}

// GetIterator @ 147d08ac0

FConstIterator * __thiscall
FInstanceAttributeTracker::FDeltaRange<2>::GetIterator
          (FDeltaRange<2> *this,FConstIterator *__return_storage_ptr__)

{
  int iVar1;
  FInstanceAttributeTracker *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FConstIterator *pFVar7;
  uint uVar8;
  FAnyValidIterator<5> local_28;
  
  if (this->bFullUpdate != false) {
    __return_storage_ptr__->MaxNum = this->NumItems;
    __return_storage_ptr__->ItemIndex = 0;
    __return_storage_ptr__->bUseIterator = false;
    (__return_storage_ptr__->It).Tracker = (FInstanceAttributeTracker *)0x0;
    (__return_storage_ptr__->It).ElementIndex = 0;
    (__return_storage_ptr__->It).ElementOffset = 0;
    return __return_storage_ptr__;
  }
  pFVar2 = this->Tracker;
  iVar6 = pFVar2->FirstChangedIndex;
  if (pFVar2->MaxIndex < pFVar2->FirstChangedIndex) {
    iVar6 = pFVar2->MaxIndex;
  }
  uVar8 = iVar6 >> 0x1f & 7;
  uVar5 = iVar6 + uVar8;
  iVar6 = (uVar5 & 7) - uVar8;
  uVar5 = (int)uVar5 >> 3;
  local_28.Tracker = pFVar2;
  local_28.ElementIndex = uVar5;
  local_28.ElementOffset = iVar6;
  if (-1 < (int)uVar5) {
    iVar1 = (pFVar2->Data).ArrayNum;
    if ((int)uVar5 < iVar1) {
      uVar8 = 0;
      if ((int)uVar5 < iVar1) {
        uVar8 = ~uVar5 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FConstIterator *)(*pcVar3)();
          return pFVar7;
        }
      }
      local_28.CurrentElement =
           *(uint *)((pFVar2->Data).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) & 0x55555555;
      goto LAB_147d08ba3;
    }
  }
  local_28.CurrentElement = 0;
LAB_147d08ba3:
  local_28.CurrentElement = local_28.CurrentElement >> ((char)iVar6 * '\x04' & 0x1fU);
  FAnyValidIterator<5>::AdvanceUntilAny(&local_28);
  (__return_storage_ptr__->It).Tracker = local_28.Tracker;
  (__return_storage_ptr__->It).ElementIndex = local_28.ElementIndex;
  (__return_storage_ptr__->It).CurrentElement = local_28.CurrentElement;
  __return_storage_ptr__->bUseIterator = true;
  *(ulonglong *)&(__return_storage_ptr__->It).ElementOffset =
       CONCAT44(local_28._20_4_,local_28.ElementOffset);
  __return_storage_ptr__->ItemIndex = 0;
  __return_storage_ptr__->MaxNum = 0;
  return __return_storage_ptr__;
}

// GetIterator @ 147d08c00

FConstIterator * __thiscall
FInstanceAttributeTracker::FDeltaRange<3>::GetIterator
          (FDeltaRange<3> *this,FConstIterator *__return_storage_ptr__)

{
  int iVar1;
  FInstanceAttributeTracker *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FConstIterator *pFVar7;
  uint uVar8;
  FAnyValidIterator<9> local_28;
  
  if (this->bFullUpdate != false) {
    __return_storage_ptr__->MaxNum = this->NumItems;
    __return_storage_ptr__->ItemIndex = 0;
    __return_storage_ptr__->bUseIterator = false;
    (__return_storage_ptr__->It).Tracker = (FInstanceAttributeTracker *)0x0;
    (__return_storage_ptr__->It).ElementIndex = 0;
    (__return_storage_ptr__->It).ElementOffset = 0;
    return __return_storage_ptr__;
  }
  pFVar2 = this->Tracker;
  iVar6 = pFVar2->FirstChangedIndex;
  if (pFVar2->MaxIndex < pFVar2->FirstChangedIndex) {
    iVar6 = pFVar2->MaxIndex;
  }
  uVar8 = iVar6 >> 0x1f & 7;
  uVar5 = iVar6 + uVar8;
  iVar6 = (uVar5 & 7) - uVar8;
  uVar5 = (int)uVar5 >> 3;
  local_28.Tracker = pFVar2;
  local_28.ElementIndex = uVar5;
  local_28.ElementOffset = iVar6;
  if (-1 < (int)uVar5) {
    iVar1 = (pFVar2->Data).ArrayNum;
    if ((int)uVar5 < iVar1) {
      uVar8 = 0;
      if ((int)uVar5 < iVar1) {
        uVar8 = ~uVar5 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FConstIterator *)(*pcVar3)();
          return pFVar7;
        }
      }
      local_28.CurrentElement =
           *(uint *)((pFVar2->Data).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) & 0x99999999;
      goto LAB_147d08ce3;
    }
  }
  local_28.CurrentElement = 0;
LAB_147d08ce3:
  local_28.CurrentElement = local_28.CurrentElement >> ((char)iVar6 * '\x04' & 0x1fU);
  FAnyValidIterator<9>::AdvanceUntilAny(&local_28);
  (__return_storage_ptr__->It).Tracker = local_28.Tracker;
  (__return_storage_ptr__->It).ElementIndex = local_28.ElementIndex;
  (__return_storage_ptr__->It).CurrentElement = local_28.CurrentElement;
  __return_storage_ptr__->bUseIterator = true;
  *(ulonglong *)&(__return_storage_ptr__->It).ElementOffset =
       CONCAT44(local_28._20_4_,local_28.ElementOffset);
  __return_storage_ptr__->ItemIndex = 0;
  __return_storage_ptr__->MaxNum = 0;
  return __return_storage_ptr__;
}

