// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplay
// Functions: 8

// AddTagFiltered @ 14d989af0

bool __thiscall
FFilteredGameplayTagContainer::AddTagFiltered
          (FFilteredGameplayTagContainer *this,TTuple<FGameplayTag,FGameplayTagQuery> *param_1)

{
  int *piVar1;
  TTuple<FGameplayTag,FGameplayTagQuery> *pTVar2;
  FGameplayTag FVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  
  if (*(longlong *)param_1 != 0) {
    pFVar8 = (this->TagContainer).GameplayTags.AllocatorInstance.Data;
    pFVar9 = pFVar8 + (longlong)(this->TagContainer).GameplayTags.ArrayNum * 8;
    for (; pFVar8 != pFVar9; pFVar8 = pFVar8 + 8) {
      if (*(longlong *)pFVar8 == *(longlong *)param_1) goto LAB_14d989b50;
    }
  }
  bVar5 = FGameplayTagQuery::IsEmpty((FGameplayTagQuery *)&param_1->field_0x8);
  if ((bVar5) ||
     (bVar5 = FGameplayTagContainer::MatchesQuery
                        (&this->TagContainer,(FGameplayTagQuery *)&param_1->field_0x8), bVar5)) {
    pTVar2 = (TTuple<FGameplayTag,FGameplayTagQuery> *)
             (this->GPTagQueryPairContainer).AllocatorInstance.Data;
    if (((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->GPTagQueryPairContainer).ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar7 = (this->GPTagQueryPairContainer).ArrayNum;
    piVar1 = &(this->GPTagQueryPairContainer).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&(this->GPTagQueryPairContainer).AllocatorInstance,piVar1);
    }
    (this->GPTagQueryPairContainer).ArrayNum = iVar7 + 1;
    pFVar9 = (this->GPTagQueryPairContainer).AllocatorInstance.Data + (longlong)iVar7 * 0x50;
    *(undefined8 *)pFVar9 = *(undefined8 *)param_1;
    FGameplayTagQuery::FGameplayTagQuery
              ((FGameplayTagQuery *)(pFVar9 + 8),(FGameplayTagQuery *)&param_1->field_0x8);
    FGameplayTagContainer::AddTagFast(&this->TagContainer,(FGameplayTag *)param_1);
    FVar3.TagName.ComparisonIndex.Value = *(uint *)&param_1->field_0x0;
    FVar3.TagName.Number = *(uint *)&param_1->field_0x4;
    TMulticastDelegate<void___cdecl(FGameplayTag),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnGameplayTagAdded,FVar3);
    FilterTags(this);
    bVar5 = true;
  }
  else {
LAB_14d989b50:
    bVar5 = false;
  }
  return bVar5;
}

// AddTagFiltered @ 14d989c50

bool __thiscall
FFilteredGameplayTagContainer::AddTagFiltered
          (FFilteredGameplayTagContainer *this,FGameplayTag *param_1,FGameplayTagQuery *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FName *pFVar6;
  FName *pFVar7;
  FName local_58;
  FGameplayTagQuery local_50;
  
  local_58 = param_1->TagName;
  FGameplayTagQuery::FGameplayTagQuery(&local_50,param_2);
  if (local_58 != (FName)0x0) {
    pFVar7 = (FName *)(this->TagContainer).GameplayTags.AllocatorInstance.Data;
    pFVar6 = pFVar7 + (this->TagContainer).GameplayTags.ArrayNum;
    for (; pFVar7 != pFVar6; pFVar7 = pFVar7 + 1) {
      if (*pFVar7 == local_58) goto LAB_14d989cc2;
    }
  }
  bVar3 = FGameplayTagQuery::IsEmpty(&local_50);
  if ((bVar3) || (bVar3 = FGameplayTagContainer::MatchesQuery(&this->TagContainer,&local_50), bVar3)
     ) {
    pFVar6 = (FName *)(this->GPTagQueryPairContainer).AllocatorInstance.Data;
    if (((pFVar6 <= &local_58) &&
        (&local_58 < pFVar6 + (longlong)(this->GPTagQueryPairContainer).ArrayMax * 10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    iVar5 = (this->GPTagQueryPairContainer).ArrayNum;
    piVar1 = &(this->GPTagQueryPairContainer).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&(this->GPTagQueryPairContainer).AllocatorInstance,piVar1);
    }
    (this->GPTagQueryPairContainer).ArrayNum = iVar5 + 1;
    pFVar6 = (FName *)((this->GPTagQueryPairContainer).AllocatorInstance.Data +
                      (longlong)iVar5 * 0x50);
    *pFVar6 = local_58;
    FGameplayTagQuery::FGameplayTagQuery((FGameplayTagQuery *)(pFVar6 + 1),&local_50);
    FGameplayTagContainer::AddTagFast(&this->TagContainer,(FGameplayTag *)&local_58);
    TMulticastDelegate<void___cdecl(FGameplayTag),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnGameplayTagAdded,(FGameplayTag)local_58);
    FilterTags(this);
    bVar3 = true;
  }
  else {
LAB_14d989cc2:
    bVar3 = false;
  }
  if (local_50.AutoDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AutoDescription.Data.AllocatorInstance.Data);
  }
  if (local_50.UserDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.UserDescription.Data.AllocatorInstance.Data);
  }
  if (local_50.QueryTokenStream.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.QueryTokenStream.AllocatorInstance.Data);
  }
  if (local_50.TagDictionary.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.TagDictionary.AllocatorInstance.Data);
  }
  return bVar3;
}

// AddTagToContainers @ 14d989e10

bool __thiscall
FFilteredGameplayTagContainer::AddTagToContainers
          (FFilteredGameplayTagContainer *this,TTuple<FGameplayTag,FGameplayTagQuery> *param_1)

{
  int *piVar1;
  TTuple<FGameplayTag,FGameplayTagQuery> *pTVar2;
  FGameplayTag FVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  
  if (*(longlong *)param_1 != 0) {
    pFVar8 = (this->TagContainer).GameplayTags.AllocatorInstance.Data;
    pFVar9 = pFVar8 + (longlong)(this->TagContainer).GameplayTags.ArrayNum * 8;
    for (; pFVar8 != pFVar9; pFVar8 = pFVar8 + 8) {
      if (*(longlong *)pFVar8 == *(longlong *)param_1) goto LAB_14d989e70;
    }
  }
  bVar5 = FGameplayTagQuery::IsEmpty((FGameplayTagQuery *)&param_1->field_0x8);
  if ((bVar5) ||
     (bVar5 = FGameplayTagContainer::MatchesQuery
                        (&this->TagContainer,(FGameplayTagQuery *)&param_1->field_0x8), bVar5)) {
    pTVar2 = (TTuple<FGameplayTag,FGameplayTagQuery> *)
             (this->GPTagQueryPairContainer).AllocatorInstance.Data;
    if (((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->GPTagQueryPairContainer).ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar7 = (this->GPTagQueryPairContainer).ArrayNum;
    piVar1 = &(this->GPTagQueryPairContainer).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&(this->GPTagQueryPairContainer).AllocatorInstance,piVar1);
    }
    (this->GPTagQueryPairContainer).ArrayNum = iVar7 + 1;
    pFVar9 = (this->GPTagQueryPairContainer).AllocatorInstance.Data + (longlong)iVar7 * 0x50;
    *(undefined8 *)pFVar9 = *(undefined8 *)param_1;
    FGameplayTagQuery::FGameplayTagQuery
              ((FGameplayTagQuery *)(pFVar9 + 8),(FGameplayTagQuery *)&param_1->field_0x8);
    FGameplayTagContainer::AddTagFast(&this->TagContainer,(FGameplayTag *)param_1);
    FVar3.TagName.ComparisonIndex.Value = *(uint *)&param_1->field_0x0;
    FVar3.TagName.Number = *(uint *)&param_1->field_0x4;
    TMulticastDelegate<void___cdecl(FGameplayTag),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnGameplayTagAdded,FVar3);
    bVar5 = true;
  }
  else {
LAB_14d989e70:
    bVar5 = false;
  }
  return bVar5;
}

// CheckContainersConsistency @ 14d98a740

void __thiscall
FFilteredGameplayTagContainer::CheckContainersConsistency(FFilteredGameplayTagContainer *this)

{
  FFilteredGameplayTagContainer *local_res8 [4];
  
  if ((this->GPTagQueryPairContainer).ArrayNum != (this->TagContainer).GameplayTags.ArrayNum) {
    local_res8[0] = this;
    `FFilteredGameplayTagContainer::CheckContainersConsistency'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  return;
}

// FilterTags @ 14d98c5f0

void __thiscall FFilteredGameplayTagContainer::FilterTags(FFilteredGameplayTagContainer *this)

{
  TArray<TTuple<FGameplayTag,FGameplayTagQuery>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  FName local_res20;
  FFilteredGameplayTagContainer *local_68;
  FDestructionSentinel local_60;
  
  uVar16 = (this->GPTagQueryPairContainer).ArrayNum - 1;
  if (-1 < (int)uVar16) {
    pTVar1 = &this->GPTagQueryPairContainer;
    lVar13 = (longlong)(int)uVar16 * 0x50;
    do {
      uVar11 = ~uVar16 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar16 < (this->GPTagQueryPairContainer).ArrayNum) {
        uVar15 = uVar11;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar12 = (pTVar1->AllocatorInstance).Data;
      bVar7 = FGameplayTagQuery::IsEmpty((FGameplayTagQuery *)(pFVar12 + lVar13 + 8));
      if ((!bVar7) &&
         (bVar7 = FGameplayTagContainer::MatchesQuery
                            (&this->TagContainer,(FGameplayTagQuery *)(pFVar12 + lVar13 + 8)),
         !bVar7)) {
        local_res20 = *(FName *)(pFVar12 + lVar13);
        uVar15 = 0;
        if ((int)uVar16 < (this->GPTagQueryPairContainer).ArrayNum) {
          uVar15 = uVar11;
        }
        if ((uVar15 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar12 = (pTVar1->AllocatorInstance).Data + lVar13;
        if (*(void **)(pFVar12 + 0x40) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar12 + 0x40));
        }
        if (*(void **)(pFVar12 + 0x30) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar12 + 0x30));
        }
        if (*(void **)(pFVar12 + 0x20) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar12 + 0x20));
        }
        if (*(void **)(pFVar12 + 0x10) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar12 + 0x10));
        }
        iVar10 = (this->GPTagQueryPairContainer).ArrayNum + ~uVar16;
        if (iVar10 != 0) {
          memmove(pFVar12,pFVar12 + 0x50,(longlong)iVar10 * 0x50);
        }
        piVar2 = &(this->GPTagQueryPairContainer).ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,&pTVar1->AllocatorInstance,(this->GPTagQueryPairContainer).ArrayNum,
                   &(this->GPTagQueryPairContainer).ArrayMax);
        FGameplayTagContainer::RemoveTag(&this->TagContainer,(FGameplayTag *)&local_res20,false);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnGameplayTagRemoved,(FWriteAccessScope *)&local_60);
        puVar3 = &(this->OnGameplayTagRemoved).field_0x1c;
        *(int *)puVar3 = *(int *)puVar3 + 1;
        bVar7 = false;
        uVar15 = *(int *)&(this->OnGameplayTagRemoved).field_0x10 - 1;
        if (-1 < (int)uVar15) {
          lVar14 = (longlong)(int)uVar15 << 4;
          bVar7 = false;
          do {
            uVar11 = 0;
            if ((int)uVar15 < *(int *)&(this->OnGameplayTagRemoved).field_0x10) {
              uVar11 = ~uVar15 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar4 = *(longlong *)&(this->OnGameplayTagRemoved).field_0x8;
            if (((*(int *)(lVar14 + 8 + lVar4) == 0) ||
                (plVar5 = *(longlong **)(lVar14 + lVar4), plVar5 == (longlong *)0x0)) ||
               (cVar9 = (**(code **)(*plVar5 + 0x68))(), cVar9 == '\0')) {
              bVar7 = true;
            }
            lVar14 = lVar14 + -0x10;
            uVar15 = uVar15 - 1;
          } while (-1 < (int)uVar15);
        }
        puVar3 = &(this->OnGameplayTagRemoved).field_0x1c;
        *(int *)puVar3 = *(int *)puVar3 + -1;
        if (bVar7) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &this->OnGameplayTagRemoved,false);
        }
        if (local_60.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
        }
      }
      lVar13 = lVar13 + -0x50;
      uVar16 = uVar16 - 1;
    } while (-1 < (int)uVar16);
  }
  if ((this->GPTagQueryPairContainer).ArrayNum != (this->TagContainer).GameplayTags.ArrayNum) {
    local_68 = this;
    `FFilteredGameplayTagContainer::CheckContainersConsistency'::__l2::<lambda_1>::operator()
              (&local_68);
  }
  return;
}

// RemoveTagFiltered @ 14d990490

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FFilteredGameplayTagContainer::RemoveTagFiltered
          (FFilteredGameplayTagContainer *this,FGameplayTag *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = (this->GPTagQueryPairContainer).ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar5 * 0x50;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->GPTagQueryPairContainer).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(FName *)((this->GPTagQueryPairContainer).AllocatorInstance.Data + lVar6) ==
          param_1->TagName) {
        TArray<TTuple<FGameplayTag,FGameplayTagQuery>,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&this->GPTagQueryPairContainer,uVar5,Default);
        FGameplayTagContainer::RemoveTag(&this->TagContainer,param_1,false);
        TMulticastDelegate<void___cdecl(FGameplayTag),FDefaultDelegateUserPolicy>::Broadcast
                  (&this->OnGameplayTagRemoved,(FGameplayTag)param_1->TagName);
        FilterTags(this);
        return true;
      }
      lVar6 = lVar6 + -0x50;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  return false;
}

// RemoveTagFromContainers @ 14d990580

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FFilteredGameplayTagContainer::RemoveTagFromContainers
          (FFilteredGameplayTagContainer *this,FGameplayTag *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = (this->GPTagQueryPairContainer).ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar5 * 0x50;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->GPTagQueryPairContainer).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(FName *)((this->GPTagQueryPairContainer).AllocatorInstance.Data + lVar6) ==
          param_1->TagName) {
        TArray<TTuple<FGameplayTag,FGameplayTagQuery>,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&this->GPTagQueryPairContainer,uVar5,Default);
        FGameplayTagContainer::RemoveTag(&this->TagContainer,param_1,false);
        TMulticastDelegate<void___cdecl(FGameplayTag),FDefaultDelegateUserPolicy>::Broadcast
                  (&this->OnGameplayTagRemoved,(FGameplayTag)param_1->TagName);
        return true;
      }
      lVar6 = lVar6 + -0x50;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  return false;
}

// operator() @ 150587d40

bool __thiscall
`FFilteredGameplayTagContainer::CheckContainersConsistency'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1364101675001839528>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1364101675001839528>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

