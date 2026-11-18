// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 4

// operator== @ 14a8e49a0

bool __thiscall UE::PoseSearch::FEventData::operator==(FEventData *this,FEventData *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (this->Data).ArrayNum;
  if (iVar1 == (param_1->Data).ArrayNum) {
    bVar2 = CompareItems<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
                      ((TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_> *)
                       (this->Data).AllocatorInstance.Data,
                       (TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_> *)
                       (param_1->Data).AllocatorInstance.Data,iVar1);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// GetPosesWithEvent @ 14a8fbf70

TArrayView<int_const_,int> * __thiscall
UE::PoseSearch::FEventData::GetPosesWithEvent
          (FEventData *this,TArrayView<int_const_,int> *__return_storage_ptr__,FGameplayTag *param_1
          )

{
  FName *pFVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  TArrayView<int_const_,int> *pTVar6;
  FName *pFVar7;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Data).ArrayNum;
  pFVar7 = (FName *)(this->Data).AllocatorInstance.Data;
  pFVar1 = pFVar7 + (longlong)iVar2 * 3;
  while( true ) {
    if ((this->Data).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) break;
    if (*pFVar7 == param_1->TagName) {
      uVar3 = pFVar7[2].ComparisonIndex.Value;
      __return_storage_ptr__->DataPtr = (int *)pFVar7[1];
      if (((int)uVar3 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TArrayView<int_const_,int> *)(*pcVar4)();
        return pTVar6;
      }
      __return_storage_ptr__->ArrayNum = uVar3;
      return __return_storage_ptr__;
    }
    pFVar7 = pFVar7 + 3;
  }
  __return_storage_ptr__->DataPtr = (int *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// IsPoseFromEventTag @ 14a9023c0

bool __thiscall
UE::PoseSearch::FEventData::IsPoseFromEventTag(FEventData *this,int param_1,FGameplayTag *param_2)

{
  int iVar1;
  FName *pFVar2;
  uint uVar3;
  FName FVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  FName *pFVar10;
  int iVar11;
  undefined1 local_res8 [8];
  
  iVar11 = (this->Data).ArrayNum;
  pFVar10 = (FName *)(this->Data).AllocatorInstance.Data;
  pFVar2 = pFVar10 + (longlong)iVar11 * 3;
  while( true ) {
    if ((this->Data).ArrayNum != iVar11) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar2) goto LAB_14a902490;
    if (*pFVar10 == param_2->TagName) break;
    pFVar10 = pFVar10 + 3;
  }
  FVar4 = pFVar10[1];
  uVar3 = pFVar10[2].ComparisonIndex.Value;
  if (((int)uVar3 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  iVar11 = 0;
  uVar9 = uVar3;
  if (0 < (int)uVar3) {
    do {
      iVar1 = (uVar9 >> 1) + iVar11;
      if (*(int *)((longlong)FVar4 + (longlong)iVar1 * 4) < param_1) {
        iVar11 = iVar1 + (uVar9 & 1);
      }
      uVar6 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar6 != 0);
  }
  if (((int)uVar3 <= iVar11) || (param_1 < *(int *)((longlong)FVar4 + (longlong)iVar11 * 4))) {
LAB_14a902490:
    iVar11 = -1;
  }
  return iVar11 != -1;
}

// Reset @ 14a9072c0

void __thiscall UE::PoseSearch::FEventData::Reset(FEventData *this)

{
  int *piVar1;
  int iVar2;
  TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar3;
  
  piVar1 = &(this->Data).ArrayMax;
  pTVar3 = (TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_> *)
           (this->Data).AllocatorInstance.Data;
  iVar2 = (this->Data).ArrayNum;
  if (-1 < (this->Data).ArrayMax) {
    DestructItems<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,int>(pTVar3,iVar2);
    (this->Data).ArrayNum = 0;
    return;
  }
  DestructItems<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,int>(pTVar3,iVar2);
  (this->Data).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

