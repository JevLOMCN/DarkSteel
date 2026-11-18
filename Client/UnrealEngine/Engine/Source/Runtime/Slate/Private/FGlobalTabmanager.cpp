// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 44

// ~FGlobalTabmanager @ 142700a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGlobalTabmanager::~FGlobalTabmanager(FGlobalTabmanager *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  ITextData *pIVar5;
  FScriptContainerElement *pFVar6;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InitialLayoutSP).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ProxyTabManager).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->LegacyTabTypeRedirectionMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->LegacyTabTypeRedirectionMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LegacyTabTypeRedirectionMap);
  pTVar4 = (this->RootWindowPtr).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  pIVar5 = (this->AppTitle).TextData.Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->TabForegrounded).field_0x8,*(int *)&(this->TabForegrounded).field_0x10);
  pvVar3 = *(void **)&(this->TabForegrounded).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TabForegrounded);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnActiveTabChanged).field_0x8,*(int *)&(this->OnActiveTabChanged).field_0x10);
  pvVar3 = *(void **)&(this->OnActiveTabChanged).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnActiveTabChanged);
  pTVar4 = (this->ActiveTabPtr).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  DestructItems<FGlobalTabmanager::FSubTabManager,int>
            ((FSubTabManager *)(this->SubTabManagers).AllocatorInstance.Data,
             (this->SubTabManagers).ArrayNum);
  pFVar6 = (this->SubTabManagers).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnOverrideDockableAreaRestore_Handler);
  pvVar3 = *(void **)&(this->OnOverrideDockableAreaRestore_Handler).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOverrideDockableAreaRestore_Handler);
  FTabManager::~FTabManager((FTabManager *)this);
  return;
}

// operator() @ 142704070

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGlobalTabmanager::FindByManager::operator()(FindByManager *this,FSubTabManager *param_1)

{
  TSharedRef<FTabManager,1> *pTVar1;
  FTabManager *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  uint uStackX_14;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if ((((((param_1->TabManager).Object == (FTabManager *)0x0) ||
        (pTVar5 = (param_1->TabManager).WeakReferenceCount.ReferenceController,
        pTVar5 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar5->SharedReferenceCount < 1))
      || (((param_1->MajorTab).Object == (SDockTab *)0x0 ||
          (pTVar5 = (param_1->MajorTab).WeakReferenceCount.ReferenceController,
          pTVar5 == (TReferenceControllerBase<1> *)0x0)))) ||
     ((int)pTVar5->SharedReferenceCount < 1)) {
    pTVar5 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_14 << 0x20);
  }
  else {
    pTVar6 = (param_1->TabManager).WeakReferenceCount.ReferenceController;
    pTVar1 = this->ManagerToFind;
    pTVar5 = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar6->SharedReferenceCount;
      do {
        pTVar5 = pTVar7;
        if (aVar3 == (atomic<int>)0x0) goto LAB_1427040d1;
        LOCK();
        aVar4 = pTVar6->SharedReferenceCount;
        bVar8 = aVar3 == aVar4;
        if (bVar8) {
          pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar4 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar4;
      } while (!bVar8);
      pFVar2 = (param_1->TabManager).Object;
      pTVar5 = pTVar6;
      if ((pFVar2 != (FTabManager *)0x0) && (pFVar2 == pTVar1->Object)) {
        bVar8 = true;
        pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000001;
        goto LAB_1427040f8;
      }
    }
LAB_1427040d1:
    pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000001;
  }
  bVar8 = false;
  pTVar6 = pTVar5;
LAB_1427040f8:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return bVar8;
}

// operator() @ 142704120

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FGlobalTabmanager::FindByTab::operator()(FindByTab *this,FSubTabManager *param_1)

{
  TSharedRef<SDockTab,1> *pTVar1;
  SDockTab *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  uint uStackX_14;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if ((((((param_1->TabManager).Object == (FTabManager *)0x0) ||
        (pTVar5 = (param_1->TabManager).WeakReferenceCount.ReferenceController,
        pTVar5 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar5->SharedReferenceCount < 1))
      || (((param_1->MajorTab).Object == (SDockTab *)0x0 ||
          (pTVar5 = (param_1->MajorTab).WeakReferenceCount.ReferenceController,
          pTVar5 == (TReferenceControllerBase<1> *)0x0)))) ||
     ((int)pTVar5->SharedReferenceCount < 1)) {
    pTVar5 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_14 << 0x20);
  }
  else {
    pTVar6 = (param_1->MajorTab).WeakReferenceCount.ReferenceController;
    pTVar1 = this->TabToFind;
    pTVar5 = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar6->SharedReferenceCount;
      do {
        pTVar5 = pTVar7;
        if (aVar3 == (atomic<int>)0x0) goto LAB_142704181;
        LOCK();
        aVar4 = pTVar6->SharedReferenceCount;
        bVar8 = aVar3 == aVar4;
        if (bVar8) {
          pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar4 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar4;
      } while (!bVar8);
      pSVar2 = (param_1->MajorTab).Object;
      pTVar5 = pTVar6;
      if ((pSVar2 != (SDockTab *)0x0) && (pSVar2 == pTVar1->Object)) {
        bVar8 = true;
        pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000001;
        goto LAB_1427041a7;
      }
    }
LAB_142704181:
    pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000001;
  }
  bVar8 = false;
  pTVar6 = pTVar5;
LAB_1427041a7:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return bVar8;
}

// AddLegacyTabType @ 14270ae40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGlobalTabmanager::AddLegacyTabType(FGlobalTabmanager *this,FName param_1,FName param_2)

{
  code *pcVar1;
  FName *pFVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  TPairInitializer<FName_const_&,FName_const_&> local_res8;
  FName local_res18 [2];
  FName **local_28;
  FName *local_20;
  
  local_res8.Value = (FName *)param_1;
  local_res18[0] = param_2;
  uVar4 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar6 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar6 = &this->_padding_;
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)((int)this->_padding_ - 1U & param_1.Number + uVar4) * 4);
    if (iVar5 != -1) {
      do {
        if (*(FName *)((longlong)iVar5 * 0x20 + this->_padding_) == param_1) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6813193255430124105>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                             ,0xdb7,"!TabSpawner.Contains(InLegacyTabType)");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + this->_padding_);
      } while (iVar5 != -1);
    }
  }
  pFVar2 = local_res8.Value;
  plVar6 = (longlong *)this->_padding_;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)local_res8.Value);
  if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
    plVar7 = (longlong *)plVar6[8];
    if ((longlong *)plVar6[8] == (longlong *)0x0) {
      plVar7 = plVar6 + 7;
    }
    iVar5 = *(int *)((longlong)plVar7 +
                    (ulonglong)((int)plVar6[9] - 1U & (uint)((ulonglong)pFVar2 >> 0x20) + uVar4) * 4
                    );
    if (iVar5 != -1) {
      do {
        if (*(FName *)((longlong)iVar5 * 0x20 + *plVar6) == (FName)pFVar2) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6813193255430124104>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                             ,0xdb8,"!NomadTabSpawner->Contains(InLegacyTabType)");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *plVar6);
      } while (iVar5 != -1);
    }
  }
  local_28 = &local_res8.Value;
  local_20 = local_res18;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)&this->LegacyTabTypeRedirectionMap,&local_res8,(bool *)&local_28);
  return;
}

// CanCloseManager @ 14270f980

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGlobalTabmanager::CanCloseManager
          (FGlobalTabmanager *this,
          TSet<TSharedRef<SDockTab,1>,DefaultKeyFuncs<TSharedRef<SDockTab,1>,0>,FDefaultSetAllocator>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  atomic<int> aVar8;
  TReferenceControllerBase<1> *pTVar9;
  longlong lVar10;
  int iVar11;
  
  bVar5 = FTabManager::CanCloseManager((FTabManager *)this,param_1);
  iVar11 = 0;
  if (bVar5) {
    lVar10 = 0;
    cVar7 = '\x01';
    do {
      if ((this->SubTabManagers).ArrayNum <= iVar11) {
        return (bool)cVar7;
      }
      if ((iVar11 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar1 = (this->SubTabManagers).AllocatorInstance.Data;
      pTVar9 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar10 + 0x18);
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        aVar4 = pTVar9->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            pTVar9 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14270fa23;
          }
          LOCK();
          aVar8 = pTVar9->SharedReferenceCount;
          bVar5 = aVar4 == aVar8;
          if (bVar5) {
            pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar8 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar8;
        } while (!bVar5);
        plVar2 = *(longlong **)(pFVar1 + lVar10 + 0x10);
        if (plVar2 != (longlong *)0x0) {
          cVar7 = (**(code **)(*plVar2 + 0x48))(plVar2,param_1);
        }
      }
LAB_14270fa23:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      iVar11 = iVar11 + 1;
      lVar10 = lVar10 + 0x20;
    } while (cVar7 != '\0');
  }
  return false;
}

// CanSavePersistentLayouts @ 142711430

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FGlobalTabmanager::CanSavePersistentLayouts(FGlobalTabmanager *this)

{
  return this->bCanSavePersistentLayouts;
}

// CanSetAsActiveTab @ 142711440

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGlobalTabmanager::CanSetAsActiveTab(FGlobalTabmanager *this,TSharedPtr<SDockTab,1> *param_1)

{
  ETabRole EVar1;
  
  if (param_1->Object != (SDockTab *)0x0) {
    EVar1 = SDockTab::GetVisualTabRole(param_1->Object);
    if (EVar1 == MajorTab) {
      return false;
    }
  }
  return true;
}

// DrawAttentionToTabManager @ 14272d2e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGlobalTabmanager::DrawAttentionToTabManager
          (FGlobalTabmanager *this,TSharedRef<FTabManager,1> *param_1)

{
  code *pcVar1;
  SDockTab *this_00;
  bool bVar2;
  FTabId *pFVar3;
  FProxyTabmanager *pFVar4;
  FSharedReferencer<1> FVar5;
  TSharedPtr<SDockTab,1> local_58;
  SDockTab *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  SDockTab *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  FTabId local_28;
  FTabId local_18;
  
  GetMajorTabForTabManager(this,&local_58,param_1);
  this_00 = local_58.Object;
  FVar5.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
  if (local_58.Object != (SDockTab *)0x0) {
    pcVar1 = *(code **)this->_padding_;
    if ((local_58.Object == (SDockTab *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar5.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
    local_48 = local_58.Object;
    pTStack_40 = local_58.SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_58.Object == (SDockTab *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (*pcVar1)(this,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
    pFVar4 = (this->ProxyTabManager).Object;
    if (pFVar4 != (FProxyTabmanager *)0x0) {
      if ((this_00 == (SDockTab *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar3 = SDockTab::GetLayoutIdentifier(this_00,&local_18);
      local_28.TabType = pFVar3->TabType;
      local_28.InstanceId = pFVar3->InstanceId;
      local_28.Flags = pFVar3->Flags;
      local_28._13_3_ = *(undefined3 *)&pFVar3->field_0xd;
      bVar2 = FProxyTabmanager::IsTabSupported(pFVar4,&local_28);
      if (bVar2) {
        pFVar4 = TSharedPtr<FProxyTabmanager,1>::operator->(&this->ProxyTabManager);
        pcVar1 = *(code **)pFVar4->_padding_;
        if ((this_00 == (SDockTab *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_38 = local_58.Object;
        pTStack_30 = local_58.SharedReferenceCount.ReferenceController;
        if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar5.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_58.Object == (SDockTab *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (*pcVar1)(pFVar4,&local_38);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_30);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return;
}

// FinishRestore @ 142736ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGlobalTabmanager::FinishRestore(FGlobalTabmanager *this)

{
  int iVar1;
  FTabManager *this_00;
  code *pcVar2;
  atomic<int> aVar3;
  SDockingArea *this_01;
  atomic<int> aVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  TSharedPtr<SDockingArea,1> local_68;
  TSharedPtr<SDockTab,1> local_58;
  TSharedPtr<SWindow,1> local_48;
  TSharedPtr<UE::Slate::Private::SPanelDrawerArea,1> local_38;
  
  iVar1 = (this->SubTabManagers).ArrayNum;
  pFVar5 = (this->SubTabManagers).AllocatorInstance.Data;
  pFVar8 = pFVar5 + (longlong)iVar1 * 0x20;
  do {
    while( true ) {
      if ((this->SubTabManagers).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FGlobalTabmanager::FSubTabManager,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar8) {
        return;
      }
      pTVar6 = *(TReferenceControllerBase<1> **)(pFVar5 + 0x18);
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) break;
LAB_142736d20:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      pFVar5 = pFVar5 + 0x20;
    }
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142736d20;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar9 = aVar3 == aVar4;
      if (bVar9) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar9);
    this_00 = *(FTabManager **)(pFVar5 + 0x10);
    if (this_00 == (FTabManager *)0x0) goto LAB_142736d20;
    local_58.Object = (SDockTab *)0x0;
    local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FTabManager::UpdateMainMenu(this_00,&local_58,false);
    pTVar7 = *(TReferenceControllerBase<1> **)(pFVar5 + 8);
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar7->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar7 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142736d70;
        }
        LOCK();
        aVar4 = pTVar7->SharedReferenceCount;
        bVar9 = aVar3 == aVar4;
        if (bVar9) {
          pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar4 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar4;
      } while (!bVar9);
      if (*(longlong *)pFVar5 != 0) {
        local_48.Object = (SWindow *)0x0;
        local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        FTabManager::GetDockingAreaForPanelDrawer(this_00,&local_68,&local_48);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        this_01 = local_68.Object;
        if (local_68.Object != (SDockingArea *)0x0) {
          if ((local_68.Object == (SDockingArea *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          bVar9 = SDockingArea::IsPanelDrawerOpen(this_01);
          if (!bVar9) {
            if ((this_01 == (SDockingArea *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_38.Object = (SPanelDrawerArea *)0x0;
            local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            SDockingArea::RestorePanelDrawerArea(this_01,&local_38);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
      }
    }
LAB_142736d70:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    pFVar5 = pFVar5 + 0x20;
  } while( true );
}

// Get @ 1427392c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FGlobalTabmanager,1> * __cdecl FGlobalTabmanager::Get(void)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      New(&::Instance);
      atexit(`FGlobalTabmanager::Get'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      NeverDestroyGlobalTabManager = ::operator_new(0x10);
      if (NeverDestroyGlobalTabManager != (TSharedRef<FGlobalTabmanager,1> *)0x0) {
        NeverDestroyGlobalTabManager->Object = ::Instance.Object;
        FVar2 = ::Instance.SharedReferenceCount;
        (NeverDestroyGlobalTabManager->SharedReferenceCount).ReferenceController =
             ::Instance.SharedReferenceCount.ReferenceController;
        if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
          *paVar1 = (atomic<int>)((int)*paVar1 + 1);
          UNLOCK();
        }
      }
      _Init_thread_footer(&::_TSS1);
      return &::Instance;
    }
  }
  return &::Instance;
}

// GetActiveTab @ 142739b40

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockTab,1> * __thiscall
FGlobalTabmanager::GetActiveTab
          (FGlobalTabmanager *this,TSharedPtr<SDockTab,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  __return_storage_ptr__->Object = (SDockTab *)0x0;
  pTVar1 = (this->ActiveTabPtr).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (this->ActiveTabPtr).Object;
  }
  return __return_storage_ptr__;
}

// GetApplicationTitle @ 14273a750

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall FGlobalTabmanager::GetApplicationTitle(FGlobalTabmanager *this)

{
  return &this->AppTitle;
}

// GetInitialLayoutSP @ 14273ee10

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FTabManager::FLayout,1> * __thiscall
FGlobalTabmanager::GetInitialLayoutSP
          (FGlobalTabmanager *this,TSharedPtr<FTabManager::FLayout,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->InitialLayoutSP).Object;
  pTVar1 = (this->InitialLayoutSP).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetMajorTabForTabManager @ 14273f930

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockTab,1> * __thiscall
FGlobalTabmanager::GetMajorTabForTabManager
          (FGlobalTabmanager *this,TSharedPtr<SDockTab,1> *__return_storage_ptr__,
          TSharedRef<FTabManager,1> *param_1)

{
  int iVar1;
  FSubTabManager *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  uint uVar7;
  atomic<int> aVar8;
  TSharedPtr<SDockTab,1> *pTVar9;
  uint uVar10;
  FSubTabManager *pFVar11;
  FScriptContainerElement *pFVar12;
  FindByManager local_res8;
  
  pFVar2 = (FSubTabManager *)(this->SubTabManagers).AllocatorInstance.Data;
  iVar1 = (this->SubTabManagers).ArrayNum;
  pFVar11 = pFVar2;
  local_res8.ManagerToFind = param_1;
  do {
    if (pFVar11 == pFVar2 + iVar1) {
LAB_14273f98a:
      __return_storage_ptr__->Object = (SDockTab *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    bVar6 = FindByManager::operator()(&local_res8,pFVar11);
    if (bVar6) {
      uVar10 = (uint)((longlong)pFVar11 - (longlong)pFVar2 >> 5);
      if (uVar10 != 0xffffffff) {
        uVar7 = 0;
        if ((int)uVar10 < (this->SubTabManagers).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TSharedPtr<SDockTab,1> *)(*pcVar4)();
          return pTVar9;
        }
        pFVar12 = (this->SubTabManagers).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20;
        __return_storage_ptr__->Object = (SDockTab *)0x0;
        pTVar3 = *(TReferenceControllerBase<1> **)(pFVar12 + 8);
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
        if (pTVar3 == (TReferenceControllerBase<1> *)0x0) goto LAB_14273fa42;
        aVar5 = pTVar3->SharedReferenceCount;
        break;
      }
      goto LAB_14273f98a;
    }
    pFVar11 = pFVar11 + 1;
  } while( true );
  while( true ) {
    LOCK();
    aVar8 = pTVar3->SharedReferenceCount;
    bVar6 = aVar5 == aVar8;
    if (bVar6) {
      pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
      aVar8 = aVar5;
    }
    UNLOCK();
    aVar5 = aVar8;
    if (bVar6) break;
    if (aVar5 == (atomic<int>)0x0) {
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      break;
    }
  }
LAB_14273fa42:
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = *(SDockTab **)pFVar12;
  }
  return __return_storage_ptr__;
}

// GetRootWindow @ 142743c40

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWindow,1> * __thiscall
FGlobalTabmanager::GetRootWindow
          (FGlobalTabmanager *this,TSharedPtr<SWindow,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  __return_storage_ptr__->Object = (SWindow *)0x0;
  pTVar1 = (this->RootWindowPtr).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (this->RootWindowPtr).Object;
  }
  return __return_storage_ptr__;
}

// GetShouldUseMiddleEllipsisForDockTabLabel @ 142743c90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGlobalTabmanager::GetShouldUseMiddleEllipsisForDockTabLabel(FGlobalTabmanager *this)

{
  return this->bShouldUseMiddleEllipsisForDockTabLabel;
}

// GetSubTabManagerForWindow @ 142743fc0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FTabManager,1> * __thiscall
FGlobalTabmanager::GetSubTabManagerForWindow
          (FGlobalTabmanager *this,TSharedPtr<FTabManager,1> *__return_storage_ptr__,
          TSharedRef<SWindow,1> *param_1)

{
  EWindowType EVar1;
  FSharedReferencer<1> FVar2;
  SWindow *this_00;
  SDockTab *this_01;
  FTabManager *this_02;
  code *pcVar3;
  bool bVar4;
  atomic<int> aVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  atomic<int> aVar8;
  TSharedPtr<FTabManager,1> *pTVar9;
  ulonglong uVar10;
  TSharedPtr<SWindow,1> *pTVar11;
  TSharedPtr<SDockingArea,1> *pTVar12;
  SWindow *pSVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  SWindow *pSVar16;
  undefined4 local_res18 [2];
  uint local_res20;
  TSharedPtr<SWindow,1> local_88;
  TSharedRef<SWindow,1> local_78;
  TSharedPtr<SDockingArea,1> local_68;
  TSharedPtr<SWindow,1> local_58;
  
  bVar4 = false;
  local_res18[0] = 0;
  FVar2.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  this_00 = param_1->Object;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar2.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EVar1 = this_00->Type;
  local_78.SharedReferenceCount.ReferenceController = FVar2.ReferenceController;
  local_78.Object = this_00;
  while( true ) {
    if ((EVar1 == Normal) || (EVar1 == GameWindow)) goto LAB_1427440eb;
    SWindow::GetParentWindow(this_00,&local_88);
    if (local_88.Object == (SWindow *)0x0) break;
    if ((local_88.Object == (SWindow *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TSharedPtr<FTabManager,1> *)(*pcVar3)();
      return pTVar9;
    }
    FVar2.ReferenceController = local_88.SharedReferenceCount.ReferenceController;
    this_00 = local_88.Object;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_88.Object == (SWindow *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TSharedPtr<FTabManager,1> *)(*pcVar3)();
      return pTVar9;
    }
    FVar6.ReferenceController = local_78.SharedReferenceCount.ReferenceController;
    local_78.Object = this_00;
    local_78.SharedReferenceCount.ReferenceController = FVar2.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar6.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    EVar1 = this_00->Type;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
LAB_1427440eb:
  local_res20 = (this->SubTabManagers).ArrayNum;
  uVar10 = (ulonglong)(int)local_res20;
  pSVar16 = (SWindow *)(this->SubTabManagers).AllocatorInstance.Data;
  pSVar13 = (SWindow *)(&pSVar16->_padding_ + uVar10 * 4);
  local_88.Object = pSVar13;
  do {
    if ((this->SubTabManagers).ArrayNum != (int)uVar10) {
      `TCheckedPointerIterator<FGlobalTabmanager::FSubTabManager_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pSVar16 == pSVar13) {
      __return_storage_ptr__->Object = (FTabManager *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar2.ReferenceController);
      return __return_storage_ptr__;
    }
    pTVar15 = (TReferenceControllerBase<1> *)pSVar16->_padding_;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = pTVar15->SharedReferenceCount;
      do {
        if (aVar5 == (atomic<int>)0x0) {
          pTVar15 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142744160;
        }
        LOCK();
        aVar8 = pTVar15->SharedReferenceCount;
        bVar7 = aVar5 == aVar8;
        if (bVar7) {
          pTVar15->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar8 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar8;
      } while (!bVar7);
      this_01 = (SDockTab *)pSVar16->_padding_;
      if ((this_01 != (SDockTab *)0x0) && (bVar7 = SDockTab::IsForeground(this_01), bVar7)) {
        pTVar14 = (TReferenceControllerBase<1> *)pSVar16->_padding_;
        if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
          aVar5 = pTVar14->SharedReferenceCount;
          do {
            if (aVar5 == (atomic<int>)0x0) {
              pTVar14 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_1427441b1;
            }
            LOCK();
            aVar8 = pTVar14->SharedReferenceCount;
            bVar7 = aVar5 == aVar8;
            if (bVar7) {
              pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
              aVar8 = aVar5;
            }
            UNLOCK();
            aVar5 = aVar8;
          } while (!bVar7);
          this_02 = (FTabManager *)pSVar16->_padding_;
          if (this_02 != (FTabManager *)0x0) {
            pTVar11 = SDockTab::GetParentWindow(this_01,&local_58);
            if ((pTVar11->Object == (SWindow *)0x0) || (pTVar11->Object != this_00)) {
              bVar4 = true;
              pTVar12 = FTabManager::GetDockingAreaForWindow(this_02,&local_68,&local_78);
              if (pTVar12->Object != (SDockingArea *)0x0) goto LAB_142744208;
              bVar7 = false;
            }
            else {
LAB_142744208:
              bVar7 = true;
            }
            if (bVar4) {
              bVar4 = false;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_68.SharedReferenceCount.ReferenceController);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_58.SharedReferenceCount.ReferenceController);
            if (bVar7) {
              __return_storage_ptr__->Object = this_02;
              (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar14;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar15);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FVar2.ReferenceController);
              return __return_storage_ptr__;
            }
          }
        }
LAB_1427441b1:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
        pSVar13 = local_88.Object;
      }
    }
LAB_142744160:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    uVar10 = (ulonglong)local_res20;
    pSVar16 = (SWindow *)&pSVar16->_padding_;
  } while( true );
}

// GetTabManagerForMajorTab @ 142744630

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FTabManager,1> * __thiscall
FGlobalTabmanager::GetTabManagerForMajorTab
          (FGlobalTabmanager *this,TSharedPtr<FTabManager,1> *__return_storage_ptr__,
          TSharedPtr<SDockTab,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  atomic<int> aVar8;
  TSharedPtr<FTabManager,1> *pTVar9;
  SDockTab *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if ((param_1->Object == (SDockTab *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TSharedPtr<FTabManager,1> *)(*pcVar3)();
    return pTVar9;
  }
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  local_18 = param_1->Object;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_18 == (SDockTab *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TSharedPtr<FTabManager,1> *)(*pcVar3)();
    return pTVar9;
  }
  uVar6 = TArray<FGlobalTabmanager::FSubTabManager,TSizedDefaultAllocator<32>_>::
          IndexOfByPredicate<FGlobalTabmanager::FindByTab>
                    (&this->SubTabManagers,(TSharedRef<SDockTab,1> *)&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  if (uVar6 == 0xffffffff) {
    __return_storage_ptr__->Object = (FTabManager *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    uVar7 = 0;
    if ((int)uVar6 < (this->SubTabManagers).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TSharedPtr<FTabManager,1> *)(*pcVar3)();
      return pTVar9;
    }
    pFVar1 = (this->SubTabManagers).AllocatorInstance.Data;
    __return_storage_ptr__->Object = (FTabManager *)0x0;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)(int)uVar6 * 0x20 + 0x18);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = pTVar2->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar8 = pTVar2->SharedReferenceCount;
        bVar5 = aVar4 == aVar8;
        if (bVar5) {
          pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar8 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar8;
      } while (!bVar5);
    }
    if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object =
           *(FTabManager **)(pFVar1 + (longlong)(int)uVar6 * 0x20 + 0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetTabTypeForPotentiallyLegacyTab @ 142744bc0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
FGlobalTabmanager::GetTabTypeForPotentiallyLegacyTab(FGlobalTabmanager *this,FName param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  FName in_R8;
  FName local_res18 [2];
  
  pFVar1 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
           Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 *)&this->LegacyTabTypeRedirectionMap,in_R8);
  pFVar2 = local_res18;
  if (pFVar1 != (FName *)0x0) {
    pFVar2 = pFVar1;
  }
  *(FName *)param_1 = *pFVar2;
  return param_1;
}

// IsLegacyTabType @ 14274d1a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FGlobalTabmanager::IsLegacyTabType(FGlobalTabmanager *this,FName param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->LegacyTabTypeRedirectionMap).field_0x8 !=
      *(int *)&(this->LegacyTabTypeRedirectionMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->LegacyTabTypeRedirectionMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->LegacyTabTypeRedirectionMap).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->LegacyTabTypeRedirectionMap).field_0x48 - 1U &
                              param_1.Number + uVar1) * 4);
    if (iVar2 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->LegacyTabTypeRedirectionMap + (longlong)iVar2 * 0x18) ==
            param_1) goto LAB_14274d21d;
        iVar2 = *(int *)(*(longlong *)&this->LegacyTabTypeRedirectionMap + 0x10 +
                        (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_14274d21d:
  return iVar2 != -1;
}

// New @ 14275cbd0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FGlobalTabmanager,1> * __cdecl
FGlobalTabmanager::New(TSharedRef<FGlobalTabmanager,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalTabmanager *this;
  TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
  *pTVar3;
  TSharedRef<FGlobalTabmanager,1> *pTVar4;
  TRawPtrProxy<TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>_>
  local_res8;
  TRawPtrProxy<FGlobalTabmanager> local_res10;
  TSharedRef<TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>,1>
  local_28;
  TSharedPtr<SDockTab,1> local_18;
  
  this = ::operator_new(0x348);
  if (this == (FGlobalTabmanager *)0x0) {
    this = (FGlobalTabmanager *)0x0;
  }
  else {
    pTVar3 = ::operator_new(0x50);
    local_res8.Object =
         (TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
          *)0x0;
    if (pTVar3 != (TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                   *)0x0) {
      *(undefined8 *)&pTVar3->field_0x10 = 0;
      *(undefined8 *)&pTVar3->field_0x18 = 0;
      *(undefined8 *)&pTVar3->field_0x38 = 0;
      *(undefined8 *)&pTVar3->field_0x48 = 0;
      *(undefined8 *)pTVar3 = 0;
      *(undefined8 *)&pTVar3->field_0x8 = 0;
      *(undefined8 *)&pTVar3->field_0x20 = 0;
      *(undefined4 *)&pTVar3->field_0x28 = 0;
      *(undefined4 *)&pTVar3->field_0x2c = 0x80;
      *(undefined4 *)&pTVar3->field_0x30 = 0xffffffff;
      *(undefined4 *)&pTVar3->field_0x34 = 0;
      *(undefined8 *)&pTVar3->field_0x40 = 0;
      local_res8.Object = pTVar3;
    }
    TSharedRef<TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>,1>
    ::
    TSharedRef<TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>,1><TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>_>
              (&local_28,&local_res8);
    local_18.Object = (SDockTab *)0x0;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FTabManager::FTabManager((FTabManager *)this,&local_18,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    this->bShouldUseMiddleEllipsisForDockTabLabel = false;
    this->_padding_ = (longlong)&___7FGlobalTabmanager__6B_;
    *(undefined8 *)&(this->OnOverrideDockableAreaRestore_Handler).field_0x0 = 0;
    *(undefined8 *)&(this->OnOverrideDockableAreaRestore_Handler).field_0x8 = 0;
    *(undefined4 *)&(this->OnOverrideDockableAreaRestore_Handler).field_0x10 = 0;
    (this->SubTabManagers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SubTabManagers).ArrayNum = 0;
    (this->SubTabManagers).ArrayMax = 0;
    (this->ActiveTabPtr).Object = (SDockTab *)0x0;
    (this->ActiveTabPtr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    *(undefined8 *)&this->OnActiveTabChanged = 0;
    *(undefined8 *)&(this->OnActiveTabChanged).field_0x8 = 0;
    *(undefined8 *)&(this->OnActiveTabChanged).field_0x10 = 0;
    *(undefined8 *)&(this->OnActiveTabChanged).field_0x18 = 2;
    *(undefined8 *)&this->TabForegrounded = 0;
    *(undefined8 *)&(this->TabForegrounded).field_0x8 = 0;
    *(undefined8 *)&(this->TabForegrounded).field_0x10 = 0;
    *(undefined8 *)&(this->TabForegrounded).field_0x18 = 2;
    FText::FText(&this->AppTitle);
    (this->RootWindowPtr).Object = (SWindow *)0x0;
    (this->RootWindowPtr).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)&this->LegacyTabTypeRedirectionMap = 0;
    *(undefined8 *)&(this->LegacyTabTypeRedirectionMap).field_0x8 = 0;
    *(undefined8 *)&(this->LegacyTabTypeRedirectionMap).field_0x20 = 0;
    *(undefined4 *)&(this->LegacyTabTypeRedirectionMap).field_0x28 = 0;
    *(undefined4 *)&(this->LegacyTabTypeRedirectionMap).field_0x2c = 0x80;
    *(undefined4 *)&(this->LegacyTabTypeRedirectionMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->LegacyTabTypeRedirectionMap).field_0x34 = 0;
    *(undefined8 *)&(this->LegacyTabTypeRedirectionMap).field_0x40 = 0;
    *(undefined4 *)&(this->LegacyTabTypeRedirectionMap).field_0x48 = 0;
    this->AllTabsMaxCount = 0;
    this->AllAreasWindowMaxCount = 0;
    this->bCanSavePersistentLayouts = true;
    (this->ProxyTabManager).Object = (FProxyTabmanager *)0x0;
    (this->ProxyTabManager).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (this->InitialLayoutSP).Object = (FLayout *)0x0;
    (this->InitialLayoutSP).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if ((((this->_padding_ != 0) && (this->_padding_ != 0)) && (0 < *(int *)(this->_padding_ + 8)))
       && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InObject || !InObject->DoesSharedInstanceExist()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedRef<FGlobalTabmanager,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  local_res10.Object = this;
  TSharedRef<FGlobalTabmanager,1>::TSharedRef<FGlobalTabmanager,1><FGlobalTabmanager>
            (__return_storage_ptr__,&local_res10);
  return __return_storage_ptr__;
}

// NewTabManager @ 14275f910

/* WARNING: Removing unreachable block (ram,0x00014275fc4b) */
/* WARNING: Removing unreachable block (ram,0x00014275fc5a) */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FTabManager,1> * __thiscall
FGlobalTabmanager::NewTabManager
          (FGlobalTabmanager *this,TSharedRef<FTabManager,1> *__return_storage_ptr__,
          TSharedRef<SDockTab,1> *param_1)

{
  int *piVar1;
  TArray<FGlobalTabmanager::FSubTabManager,TSizedDefaultAllocator<32>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  TRawPtrProxy<FTabManager> TVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  FTabManager *pFVar8;
  TSharedRef<FTabManager,1> *pTVar9;
  byte bVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  byte bVar17;
  int iVar18;
  TRawPtrProxy<FTabManager> local_res18 [2];
  TSharedPtr<SDockTab,1> local_68;
  SDockTab *local_58;
  TReferenceControllerBase<1> *local_50;
  FTabManager *local_48;
  TReferenceControllerBase<1> *local_40;
  
  iVar18 = (this->SubTabManagers).ArrayNum;
  lVar16 = (longlong)iVar18;
  local_res18[0].Object = (FTabManager *)param_1;
  if (iVar18 != 0) {
    pFVar11 = (this->SubTabManagers).AllocatorInstance.Data;
    iVar18 = 0;
    if (((*(longlong *)pFVar11 == 0) || (*(longlong *)(pFVar11 + 8) == 0)) ||
       (*(int *)(*(longlong *)(pFVar11 + 8) + 8) < 1)) {
      bVar17 = 0;
    }
    else {
      bVar17 = 1;
    }
    lVar12 = 0;
    iVar14 = 0;
    do {
      lVar12 = lVar12 + 1;
      iVar15 = iVar14 + 1;
      if (lVar12 < lVar16) {
        pFVar7 = pFVar11 + lVar12 * 0x20;
        do {
          if (((*(longlong *)pFVar7 == 0) || (*(longlong *)(pFVar7 + 8) == 0)) ||
             (*(int *)(*(longlong *)(pFVar7 + 8) + 8) < 1)) {
            bVar10 = 0;
          }
          else {
            bVar10 = 1;
          }
          if (bVar17 != bVar10) break;
          iVar15 = iVar15 + 1;
          lVar12 = lVar12 + 1;
          pFVar7 = pFVar7 + 0x20;
        } while (lVar12 < lVar16);
      }
      iVar13 = iVar15 - iVar14;
      if (bVar17 == 0) {
        DestructItems<FGlobalTabmanager::FSubTabManager,int>
                  ((FSubTabManager *)(pFVar11 + (longlong)iVar14 * 0x20),iVar13);
      }
      else {
        if (iVar18 != iVar14) {
          memmove(pFVar11 + (longlong)iVar18 * 0x20,pFVar11 + (longlong)iVar14 * 0x20,
                  (longlong)iVar13 << 5);
        }
        iVar18 = iVar18 + iVar13;
      }
      bVar17 = bVar17 ^ 1;
      iVar14 = iVar15;
    } while (lVar12 < lVar16);
    (this->SubTabManagers).ArrayNum = iVar18;
  }
  TVar5.Object = local_res18[0].Object;
  pTVar3 = ((FSharedReferencer<1> *)&(local_res18[0].Object)->_padding_)->ReferenceController;
  local_68.Object = (SDockTab *)(local_res18[0].Object)->_padding_;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68.SharedReferenceCount.ReferenceController = pTVar3;
  pFVar8 = ::operator_new(0x228);
  if (pFVar8 == (FTabManager *)0x0) {
    pFVar8 = (FTabManager *)0x0;
  }
  else {
    pFVar8 = FTabManager::FTabManager
                       (pFVar8,&local_68,
                        (TSharedRef<TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>,1>
                         *)&this->_padding_);
    if (((pFVar8 != (FTabManager *)0x0) && (pFVar8->_padding_ != 0)) &&
       ((pFVar8->_padding_ != 0 &&
        ((0 < *(int *)(pFVar8->_padding_ + 8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InObject || !InObject->DoesSharedInstanceExist()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x7a5,L"Trying to share an already-shared object"), bVar6)))))) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TSharedRef<FTabManager,1> *)(*pcVar4)();
      return pTVar9;
    }
  }
  local_res18[0].Object = pFVar8;
  TSharedRef<FTabManager,1>::TSharedRef<FTabManager,1><FTabManager>
            (__return_storage_ptr__,local_res18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_58 = (SDockTab *)(TVar5.Object)->_padding_;
  pTVar2 = &this->SubTabManagers;
  local_50 = ((FSharedReferencer<1> *)&(TVar5.Object)->_padding_)->ReferenceController;
  if (local_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_50->WeakReferenceCount = (atomic<int>)((int)local_50->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_48 = __return_storage_ptr__->Object;
  local_40 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_40->WeakReferenceCount = (atomic<int>)((int)local_40->WeakReferenceCount + 1);
    UNLOCK();
  }
  pFVar11 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar11 <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 <
       pFVar11 + (longlong)(this->SubTabManagers).ArrayMax * 0x20)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TSharedRef<FTabManager,1> *)(*pcVar4)();
    return pTVar9;
  }
  iVar18 = (this->SubTabManagers).ArrayNum;
  piVar1 = &(this->SubTabManagers).ArrayMax;
  if (iVar18 == *piVar1) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->SubTabManagers).ArrayNum = iVar18 + 1;
  pFVar11 = (pTVar2->AllocatorInstance).Data + (longlong)iVar18 * 0x20;
  *(SDockTab **)pFVar11 = local_58;
  *(TReferenceControllerBase<1> **)(pFVar11 + 8) = local_50;
  *(FTabManager **)(pFVar11 + 0x10) = local_48;
  *(TReferenceControllerBase<1> **)(pFVar11 + 0x18) = local_40;
  local_40 = (TReferenceControllerBase<1> *)0x0;
  local_48 = (FTabManager *)0x0;
  local_50 = (TReferenceControllerBase<1> *)0x0;
  local_58 = (SDockTab *)0x0;
  (**(code **)(this->_padding_ + 0x50))(this);
  return __return_storage_ptr__;
}

// OnActiveTabChanged_Subscribe @ 142760b90

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
FGlobalTabmanager::OnActiveTabChanged_Subscribe
          (FGlobalTabmanager *this,
          TDelegate<void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>
          *param_1)

{
  TMulticastDelegateRegistration<void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>
         *)&this->OnActiveTabChanged,param_1);
  return (FDelegateHandle)(ulong64)param_1;
}

// OnActiveTabChanged_Unsubscribe @ 142760bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGlobalTabmanager::OnActiveTabChanged_Unsubscribe(FGlobalTabmanager *this,FDelegateHandle param_1)

{
  if (param_1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnActiveTabChanged,
               param_1);
    return;
  }
  return;
}

// OnTabClosing @ 14276a5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGlobalTabmanager::OnTabClosing(FGlobalTabmanager *this,TSharedRef<SDockTab,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  uint uVar5;
  atomic<int> aVar6;
  uint uVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  
  FTabManager::RequestSavePersistentLayout((FTabManager *)this);
  uVar5 = TArray<FGlobalTabmanager::FSubTabManager,TSizedDefaultAllocator<32>_>::
          IndexOfByPredicate<FGlobalTabmanager::FindByTab>(&this->SubTabManagers,(FindByTab)param_1)
  ;
  if (uVar5 == 0xffffffff) {
    return;
  }
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  uVar7 = 0;
  if ((int)uVar5 < (this->SubTabManagers).ArrayNum) {
    uVar7 = ~uVar5 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->SubTabManagers).AllocatorInstance.Data;
  pTVar9 = *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)(int)uVar5 * 0x20 + 0x18);
  pTVar8 = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar9->SharedReferenceCount;
    do {
      pTVar8 = pTVar10;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14276a665;
      LOCK();
      aVar6 = pTVar9->SharedReferenceCount;
      bVar4 = aVar3 == aVar6;
      if (bVar4) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar4);
    pTVar10 = *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)(int)uVar5 * 0x20 + 0x10);
    pTVar8 = pTVar9;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) goto LAB_14276a6b6;
  }
LAB_14276a665:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x416,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar9 = pTVar8;
  if ((pTVar10 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14276a6b6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (**(code **)(*(longlong *)**(undefined8 **)&pTVar10[0xe].SharedReferenceCount + 0x40))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// OnTabForegrounded @ 14276aa80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGlobalTabmanager::OnTabForegrounded
          (FGlobalTabmanager *this,TSharedPtr<SDockTab,1> *param_1,TSharedPtr<SDockTab,1> *param_2)

{
  TArray<FGlobalTabmanager::FSubTabManager,TSizedDefaultAllocator<32>_> *this_00;
  SDockTab *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  SDockTab *pSVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  SDockTab *pSVar6;
  code *pcVar7;
  atomic<int> aVar8;
  bool bVar9;
  uint uVar10;
  atomic<int> aVar11;
  uint uVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  SDockTab *local_118;
  TReferenceControllerBase<1> *local_110;
  SDockTab *local_108;
  TReferenceControllerBase<1> *local_100;
  TSharedPtr<SDockTab,1> local_f8;
  TSharedPtr<SDockTab,1> local_e8 [2];
  TReferenceControllerBase<1> *local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  SDockTab *local_b8;
  TReferenceControllerBase<1> *local_b0;
  TReferenceControllerBase<1> *local_a8;
  TReferenceControllerBase<1> *local_a0;
  SDockTab *local_98;
  TReferenceControllerBase<1> *local_90;
  TReferenceControllerBase<1> *local_88;
  TReferenceControllerBase<1> *local_80;
  TReferenceControllerBase<1> *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  TReferenceControllerBase<1> *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  
  pSVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  local_c8 = (TReferenceControllerBase<1> *)0x0;
  pTStack_c0 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pSVar3 = param_1->Object;
  this_00 = &this->SubTabManagers;
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  if (pSVar3 != (SDockTab *)0x0) {
    local_110 = (param_1->SharedReferenceCount).ReferenceController;
    if (local_110 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_110->SharedReferenceCount = (atomic<int>)((int)local_110->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_118 = pSVar3;
    if ((pSVar3 == (SDockTab *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar10 = TArray<FGlobalTabmanager::FSubTabManager,TSizedDefaultAllocator<32>_>::
             IndexOfByPredicate<FGlobalTabmanager::FindByTab>
                       (this_00,(TSharedRef<SDockTab,1> *)&local_118);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_110);
    if (uVar10 != 0xffffffff) {
      uVar12 = 0;
      if ((int)uVar10 < (this->SubTabManagers).ArrayNum) {
        uVar12 = ~uVar10 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = (this_00->AllocatorInstance).Data;
      pTVar14 = *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)(int)uVar10 * 0x20 + 0x18);
      pTVar13 = pTVar16;
      pTVar15 = pTVar14;
      if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
LAB_14276abd5:
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        pTVar14 = pTVar15;
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else {
        aVar8 = pTVar14->SharedReferenceCount;
        do {
          pTVar15 = pTVar16;
          if (aVar8 == (atomic<int>)0x0) goto LAB_14276abd5;
          LOCK();
          aVar11 = pTVar14->SharedReferenceCount;
          bVar9 = aVar8 == aVar11;
          if (bVar9) {
            pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
            aVar11 = aVar8;
          }
          UNLOCK();
          aVar8 = aVar11;
        } while (!bVar9);
        pTVar13 = *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)(int)uVar10 * 0x20 + 0x10);
        pTVar15 = pTVar14;
        if (pTVar13 == (TReferenceControllerBase<1> *)0x0) goto LAB_14276abd5;
      }
      plVar5 = *(longlong **)&pTVar13[0xe].SharedReferenceCount;
      CleanupPointerArray<SDockingArea>
                ((TArray<TWeakPtr<SDockingArea,1>,TSizedDefaultAllocator<32>_> *)(*plVar5 + 0x78));
      SetWindowVisibility((TArray<TWeakPtr<SDockingArea,1>,TSizedDefaultAllocator<32>_> *)
                          (*plVar5 + 0x78),true);
      pTVar15 = pTStack_c0;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58 = local_c8;
      pTStack_50 = pTStack_c0;
      local_c8 = pTVar13;
      pTStack_c0 = pTVar14;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    }
    if ((param_1->Object == (SDockTab *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    SDockTab::UpdateActivationTime(param_1->Object);
  }
  pTVar14 = (param_2->SharedReferenceCount).ReferenceController;
  pSVar3 = param_2->Object;
  local_68 = (TReferenceControllerBase<1> *)0x0;
  pTStack_60 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pSVar6 = param_2->Object;
  local_a0 = pTStack_60;
  local_a8 = local_68;
  if (pSVar6 == (SDockTab *)0x0) goto LAB_14276ae2a;
  local_100 = (param_2->SharedReferenceCount).ReferenceController;
  if (local_100 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_100->SharedReferenceCount = (atomic<int>)((int)local_100->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_108 = pSVar6;
  if ((pSVar6 == (SDockTab *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar10 = TArray<FGlobalTabmanager::FSubTabManager,TSizedDefaultAllocator<32>_>::
           IndexOfByPredicate<FGlobalTabmanager::FindByTab>
                     (this_00,(TSharedRef<SDockTab,1> *)&local_108);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100);
  local_a0 = pTStack_60;
  local_a8 = local_68;
  if (uVar10 == 0xffffffff) goto LAB_14276ae2a;
  uVar12 = 0;
  if ((int)uVar10 < (this->SubTabManagers).ArrayNum) {
    uVar12 = ~uVar10 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar4 = (this_00->AllocatorInstance).Data;
  pTVar13 = *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)(int)uVar10 * 0x20 + 0x18);
  pTVar15 = pTVar13;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
LAB_14276ad95:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pTVar13 = pTVar15;
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    aVar8 = pTVar13->SharedReferenceCount;
    do {
      pTVar15 = pTVar16;
      if (aVar8 == (atomic<int>)0x0) goto LAB_14276ad95;
      LOCK();
      aVar11 = pTVar13->SharedReferenceCount;
      bVar9 = aVar8 == aVar11;
      if (bVar9) {
        pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
        aVar11 = aVar8;
      }
      UNLOCK();
      aVar8 = aVar11;
    } while (!bVar9);
    pTVar16 = *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)(int)uVar10 * 0x20 + 0x10);
    pTVar15 = pTVar13;
    if (pTVar16 == (TReferenceControllerBase<1> *)0x0) goto LAB_14276ad95;
  }
  plVar5 = *(longlong **)&pTVar16[0xe].SharedReferenceCount;
  CleanupPointerArray<SDockingArea>
            ((TArray<TWeakPtr<SDockingArea,1>,TSizedDefaultAllocator<32>_> *)(*plVar5 + 0x78));
  SetWindowVisibility((TArray<TWeakPtr<SDockingArea,1>,TSizedDefaultAllocator<32>_> *)
                      (*plVar5 + 0x78),false);
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  local_a0 = pTVar13;
  local_a8 = pTVar16;
LAB_14276ae2a:
  local_88 = local_c8;
  local_80 = pTStack_c0;
  local_b8 = pSVar3;
  local_b0 = pTVar14;
  local_98 = pSVar1;
  local_90 = pTVar2;
  RelocatePanelDrawerNomadTab
            (this,(TTuple<TSharedPtr<SDockTab,1>,TSharedPtr<FTabManager,1>_> *)&local_98,
             (TTuple<TSharedPtr<SDockTab,1>,TSharedPtr<FTabManager,1>_> *)&local_b8);
  local_f8.Object = param_2->Object;
  local_f8.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e8[0].Object = param_1->Object;
  local_e8[0].SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_e8[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TMulticastDelegate<void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->TabForegrounded,local_e8,&local_f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// OnTabForegrounded_Subscribe @ 14276af20

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
FGlobalTabmanager::OnTabForegrounded_Subscribe
          (FGlobalTabmanager *this,
          TDelegate<void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>
          *param_1)

{
  TMulticastDelegateRegistration<void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>
         *)&this->TabForegrounded,param_1);
  return (FDelegateHandle)(ulong64)param_1;
}

// OnTabForegrounded_Unsubscribe @ 14276af50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGlobalTabmanager::OnTabForegrounded_Unsubscribe(FGlobalTabmanager *this,FDelegateHandle param_1)

{
  if (param_1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->TabForegrounded,param_1)
    ;
    return;
  }
  return;
}

// OnTabManagerClosing @ 14276b0f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGlobalTabmanager::OnTabManagerClosing(FGlobalTabmanager *this)

{
  FScriptContainerElement *pFVar1;
  SDockTab *this_00;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  uint uVar5;
  atomic<int> aVar6;
  TReferenceControllerBase<1> *pTVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < (this->SubTabManagers).ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->SubTabManagers).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->SubTabManagers).AllocatorInstance.Data;
      pTVar7 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar9 + 8);
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = pTVar7->SharedReferenceCount;
        do {
          if (aVar3 == (atomic<int>)0x0) {
            pTVar7 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14276b194;
          }
          LOCK();
          aVar6 = pTVar7->SharedReferenceCount;
          bVar4 = aVar3 == aVar6;
          if (bVar4) {
            pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar6 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar6;
        } while (!bVar4);
        this_00 = *(SDockTab **)(pFVar1 + lVar9);
        if (this_00 != (SDockTab *)0x0) {
          SDockTab::RemoveTabFromParent(this_00);
        }
      }
LAB_14276b194:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x20;
    } while ((int)uVar8 < (this->SubTabManagers).ArrayNum);
  }
  return;
}

// OnTabRelocated @ 14276b4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGlobalTabmanager::OnTabRelocated
          (FGlobalTabmanager *this,TSharedRef<SDockTab,1> *param_1,TSharedPtr<SWindow,1> *param_2)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  atomic<int> aVar9;
  FSharedReferencer<1> FVar10;
  ETabRole EVar11;
  bool bVar12;
  uint uVar13;
  atomic<int> aVar14;
  SWindow **ppSVar15;
  FArguments *pFVar16;
  FDeprecateSlateVector2D FVar17;
  FSlateApplication *pFVar18;
  TSharedRef<SWindow,1> *pTVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  SWindow *pSVar23;
  SWindow *pSVar24;
  SWindow *this_00;
  SWindow *this_01;
  undefined4 local_res20 [2];
  uint local_418;
  FLLMScope local_414;
  longlong local_410;
  TReferenceControllerBase<1> *local_408;
  SWindow *local_400;
  TReferenceControllerBase<1> *local_3f8;
  SWidget *local_3f0;
  TReferenceControllerBase<1> *pTStack_3e8;
  FName local_3e0;
  FMemScope local_3d8;
  longlong *local_3d0;
  TSharedRef<SWindow,1> local_3c8;
  SWindow *local_3b8;
  SWindow *local_3b0;
  SWindow *local_3a8;
  TReferenceControllerBase<1> *local_3a0;
  TSharedRef<SWindow,1> local_388;
  TSharedRef<SWindow,1> local_378;
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> local_368;
  TSharedRef<SWindow,1> local_350;
  FArguments local_340;
  
  bVar8 = false;
  bVar7 = false;
  local_res20[0] = 0;
  EVar11 = SDockTab::GetTabRole(param_1->Object);
  if ((EVar11 == MajorTab) || (EVar11 = SDockTab::GetTabRole(param_1->Object), EVar11 == NomadTab))
  {
    this->_padding_ = (longlong)param_2->Object;
    pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)this->_padding_) {
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)this->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar21 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar21 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      this->_padding_ = (longlong)pTVar2;
    }
  }
  if ((param_2->Object == (SWindow *)0x0) ||
     (uVar13 = TArray<FGlobalTabmanager::FSubTabManager,TSizedDefaultAllocator<32>_>::
               IndexOfByPredicate<FGlobalTabmanager::FindByTab>
                         (&this->SubTabManagers,(FindByTab)param_1), uVar13 == 0xffffffff))
  goto LAB_14276babc;
  uVar20 = 0;
  if ((int)uVar13 < (this->SubTabManagers).ArrayNum) {
    uVar20 = ~uVar13 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar22 = 0;
  pFVar4 = (this->SubTabManagers).AllocatorInstance.Data;
  local_408 = *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)(int)uVar13 * 0x20 + 0x18);
  if (local_408 == (TReferenceControllerBase<1> *)0x0) {
LAB_14276b5f7:
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar12) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((lVar22 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    aVar9 = local_408->SharedReferenceCount;
    do {
      if (aVar9 == (atomic<int>)0x0) {
        local_408 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14276b5f7;
      }
      LOCK();
      aVar14 = local_408->SharedReferenceCount;
      bVar12 = aVar9 == aVar14;
      if (bVar12) {
        local_408->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
        aVar14 = aVar9;
      }
      UNLOCK();
      aVar9 = aVar14;
    } while (!bVar12);
    lVar22 = *(longlong *)(pFVar4 + (longlong)(int)uVar13 * 0x20 + 0x10);
    if (lVar22 == 0) goto LAB_14276b5f7;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_418 = 0;
  local_3d0 = (longlong *)(**(longlong **)(lVar22 + 0xe8) + 0x78);
  iVar21 = *(int *)(**(longlong **)(lVar22 + 0xe8) + 0x80);
  if (0 < iVar21) {
    local_410 = 0;
    do {
      plVar3 = local_3d0;
      lVar22 = local_410;
      this_01 = (SWindow *)0x0;
      uVar13 = 0;
      if ((int)local_418 < iVar21) {
        uVar13 = ~local_418 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = *plVar3;
      pSVar24 = (SWindow *)((longlong *)(lVar5 + lVar22))[1];
      pSVar23 = pSVar24;
      this_00 = this_01;
      if (pSVar24 == (SWindow *)0x0) {
LAB_14276b715:
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L"");
        if (bVar12) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pSVar24 = pSVar23;
        if ((this_00 == (SWindow *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x26c,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        aVar9 = *(atomic<int> *)&pSVar24->_padding_;
        do {
          pSVar23 = this_01;
          if (aVar9 == (atomic<int>)0x0) goto LAB_14276b715;
          LOCK();
          aVar14 = *(atomic<int> *)&pSVar24->_padding_;
          bVar12 = aVar9 == aVar14;
          if (bVar12) {
            *(atomic<int> *)&pSVar24->_padding_ = (atomic<int>)((int)aVar9 + 1);
            aVar14 = aVar9;
          }
          UNLOCK();
          aVar9 = aVar14;
        } while (!bVar12);
        this_00 = *(SWindow **)(lVar5 + lVar22);
        pSVar23 = pSVar24;
        if (this_00 == (SWindow *)0x0) goto LAB_14276b715;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (((((TWeakPtr<SWindow,1> *)&this_00->_padding_)->Object == (SWindow *)0x0) ||
          (pTVar2 = ((FWeakReferencer<1> *)&this_00->_padding_)->ReferenceController,
          pTVar2 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar2->SharedReferenceCount < 1))
      {
        bVar7 = true;
        local_3a0 = (TReferenceControllerBase<1> *)0x0;
        ppSVar15 = &local_3a8;
        this_01 = (SWindow *)0x0;
      }
      else {
        local_3f8 = ((FWeakReferencer<1> *)&this_00->_padding_)->ReferenceController;
        bVar8 = true;
        local_400 = (SWindow *)0x0;
        if (local_3f8 == (TReferenceControllerBase<1> *)0x0) {
LAB_14276b7c5:
          ppSVar15 = &local_400;
        }
        else {
          aVar9 = local_3f8->SharedReferenceCount;
          do {
            if (aVar9 == (atomic<int>)0x0) {
              local_3f8 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_14276b7c5;
            }
            LOCK();
            aVar14 = local_3f8->SharedReferenceCount;
            bVar12 = aVar9 == aVar14;
            if (bVar12) {
              local_3f8->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
              aVar14 = aVar9;
            }
            UNLOCK();
            aVar9 = aVar14;
          } while (!bVar12);
          this_01 = ((TWeakPtr<SWindow,1> *)&this_00->_padding_)->Object;
          ppSVar15 = &local_400;
          local_400 = this_01;
        }
      }
      pSVar23 = ppSVar15[1];
      ppSVar15[1] = (SWindow *)0x0;
      *ppSVar15 = (SWindow *)0x0;
      if (bVar7) {
        bVar7 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3a0);
      }
      if (bVar8) {
        bVar8 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3f8);
      }
      if (this_01 != (SWindow *)0x0) {
        pFVar16 = SWindow::FArguments::FArguments(&local_340);
        pFVar16->_AutoCenter = None;
        FVar17 = SWindow::GetPositionInScreen(this_01);
        pFVar16->_ScreenPosition = *(FDeprecateVector2DParameter *)FVar17;
        FVar17 = SWindow::GetSizeInScreen(this_01);
        pFVar16->_ClientSize = *(FDeprecateVector2DParameter *)FVar17;
        pFVar16->_SupportsMaximize = false;
        pFVar16->_SupportsMinimize = false;
        pFVar16->_CreateTitleBar = false;
        pFVar16->_AdjustInitialSizeAndPositionForDPIScale = false;
        if (pSVar24 != (SWindow *)0x0) {
          LOCK();
          *(atomic<int> *)&pSVar24->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&pSVar24->_padding_ + 1);
          UNLOCK();
          LOCK();
          *(atomic<int> *)&pSVar24->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&pSVar24->_padding_ + 1);
          UNLOCK();
        }
        local_3f0 = (pFVar16->_Content).Widget.Object;
        pTStack_3e8 = (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController;
        (pFVar16->_Content).Widget.Object = (SWidget *)this_00;
        (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)pSVar24;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_3e8);
        FLLMScope::FLLMScope
                  (&local_414,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
        local_3e0 = LLMTagDeclaration_UI_Slate.UniqueName;
        FMemScope::FMemScope(&local_3d8,&local_3e0,true);
        TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::
        TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>
                  (&local_368,"SWindow",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                   ,0xe1c,(T0RequiredArgs *)local_res20);
        FMemScope::~FMemScope(&local_3d8);
        FLLMScope::~FLLMScope(&local_414);
        TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::operator<<=(&local_368,&local_3c8,pFVar16)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_368._Widget.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pSVar24);
        SWindow::FArguments::~FArguments(&local_340);
        SDockingArea::SetParentWindow((SDockingArea *)this_00,&local_3c8);
        pFVar18 = FSlateApplication::Get();
        pTVar19 = TSharedPtr<SWindow,1>::ToSharedRef(param_2,&local_350);
        FVar10.ReferenceController = local_3c8.SharedReferenceCount.ReferenceController;
        local_388.Object = local_3c8.Object;
        local_388.SharedReferenceCount.ReferenceController =
             local_3c8.SharedReferenceCount.ReferenceController;
        if (local_3c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_3c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_3c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        FSlateApplication::AddWindowAsNativeChild(pFVar18,&local_378,&local_388,pTVar19,true);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_378.SharedReferenceCount.ReferenceController);
        pFVar18 = FSlateApplication::Get();
        pcVar6 = *(code **)(*(longlong *)pFVar18 + 0x140);
        if (pSVar23 != (SWindow *)0x0) {
          LOCK();
          *(atomic<int> *)&pSVar23->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&pSVar23->_padding_ + 1);
          UNLOCK();
        }
        local_3b8 = this_01;
        local_3b0 = pSVar23;
        if ((this_01 == (SWindow *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (*pcVar6)(pFVar18,&local_3b8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar10.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar23);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar24);
      local_418 = local_418 + 1;
      local_410 = local_410 + 0x10;
      iVar21 = (int)local_3d0[1];
    } while ((int)local_418 < iVar21);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_408);
LAB_14276babc:
  FTabManager::OnTabRelocated((FTabManager *)this,param_1,param_2);
  return;
}

// OpenUnmanagedTab @ 14276f780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGlobalTabmanager::OpenUnmanagedTab
          (FGlobalTabmanager *this,FName param_1,FSearchPreference *param_2,
          TSharedRef<SDockTab,1> *param_3)

{
  FProxyTabmanager *pFVar1;
  code *pcVar2;
  bool bVar3;
  FTabId *pFVar4;
  FTabId local_28;
  FTabId local_18;
  
  pFVar1 = (this->ProxyTabManager).Object;
  if (pFVar1 != (FProxyTabmanager *)0x0) {
    pFVar4 = SDockTab::GetLayoutIdentifier(param_3->Object,&local_18);
    local_28.TabType = pFVar4->TabType;
    local_28.InstanceId = pFVar4->InstanceId;
    local_28.Flags = pFVar4->Flags;
    local_28._13_3_ = *(undefined3 *)&pFVar4->field_0xd;
    bVar3 = FProxyTabmanager::IsTabSupported(pFVar1,&local_28);
    if (bVar3) {
      if (((this->ProxyTabManager).Object == (FProxyTabmanager *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->ProxyTabManager).Object;
      (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,param_1,param_2,param_3);
      return;
    }
  }
  FTabManager::OpenUnmanagedTab((FTabManager *)this,param_1,param_2,param_3);
  return;
}

// RegisterNomadTabSpawner @ 142777b40

/* WARNING: Enum "Type": Some values do not have unique names */

FTabSpawnerEntry * __thiscall
FGlobalTabmanager::RegisterNomadTabSpawner
          (FGlobalTabmanager *this,FName param_1,
          TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
          *param_2,TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                   *param_3)

{
  longlong *plVar1;
  TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
  *this_00;
  code *pcVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FTabSpawnerEntry *pFVar8;
  longlong *plVar9;
  FLLMScope local_res8 [2];
  FName local_res10;
  TPairInitializer<FName_const_&,TSharedRef<FTabSpawnerEntry,1>_const_&> local_68;
  FName local_58;
  TRawPtrProxy<FTabSpawnerEntry> local_50;
  FMemScope local_48;
  TSharedRef<FTabSpawnerEntry,1> local_40;
  FName *local_30;
  TSharedRef<FTabSpawnerEntry,1> *local_28;
  
  local_res10 = param_1;
  bVar5 = IsLegacyTabType(this,param_1);
  if ((bVar5) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6813193255430124288>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                         ,0xd00,"!IsLegacyTabType(TabId)"), bVar5)) {
    pcVar2 = (code *)swi(3);
    pFVar8 = (FTabSpawnerEntry *)(*pcVar2)();
    return pFVar8;
  }
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_68._4_8_ = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_48,(FName *)((longlong)&local_68.Key + 4),true);
  FVar3 = local_res10;
  plVar1 = (longlong *)this->_padding_;
  uVar6 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  FVar4 = local_res10;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar9 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar9 = plVar1 + 7;
    }
    iVar7 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar1[9] - 1U & FVar3.Number + uVar6) * 4)
    ;
    if (iVar7 != -1) {
      do {
        if (*(FName *)((longlong)iVar7 * 0x20 + *plVar1) == FVar3) {
          this_00 = (TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
                     *)this->_padding_;
          local_58 = local_res10;
          if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
            uVar6 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
            TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>(this_00,FVar4.Number + uVar6,&local_58);
          }
          break;
        }
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *plVar1);
      } while (iVar7 != -1);
    }
  }
  pFVar8 = ::operator_new(0x198);
  if (pFVar8 == (FTabSpawnerEntry *)0x0) {
    local_50.Object = (FTabSpawnerEntry *)0x0;
  }
  else {
    local_50.Object = FTabSpawnerEntry::FTabSpawnerEntry(pFVar8,&local_res10,param_2,param_3);
    if ((((local_50.Object != (FTabSpawnerEntry *)0x0) && ((local_50.Object)->_padding_ != 0)) &&
        ((local_50.Object)->_padding_ != 0)) &&
       ((0 < *(int *)((local_50.Object)->_padding_ + 8) &&
        (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InObject || !InObject->DoesSharedInstanceExist()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x7a5,L"Trying to share an already-shared object"), bVar5)))) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FTabSpawnerEntry *)(*pcVar2)();
      return pFVar8;
    }
  }
  TSharedRef<FTabSpawnerEntry,1>::TSharedRef<FTabSpawnerEntry,1><FTabSpawnerEntry>
            (&local_40,&local_50);
  local_30 = &local_res10;
  local_28 = &local_40;
  TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TSharedRef<FTabSpawnerEntry,1>_const_&>_>
            ((TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
              *)this->_padding_,&local_68,(bool *)&local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return local_40.Object;
}

// RelocatePanelDrawerNomadTab @ 14277a910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGlobalTabmanager::RelocatePanelDrawerNomadTab
          (FGlobalTabmanager *this,
          TTuple<TSharedPtr<SDockTab,1>,TSharedPtr<FTabManager,1>_> *param_1,
          TTuple<TSharedPtr<SDockTab,1>,TSharedPtr<FTabManager,1>_> *param_2)

{
  SDockTab *this_00;
  FTabManager *this_01;
  code *pcVar1;
  atomic<int> aVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  atomic<int> aVar5;
  TSharedPtr<SDockingArea,1> *pTVar6;
  TSharedPtr<SWindow,1> *pTVar7;
  SDockingArea *this_02;
  TSharedPtr<UE::Slate::Private::SPanelDrawerArea,1> local_78;
  TSharedPtr<SDockingArea,1> local_68;
  TSharedPtr<UE::Slate::Private::SPanelDrawerArea,1> local_58;
  TSharedPtr<SDockingArea,1> local_48;
  TSharedPtr<SWindow,1> local_38;
  TSharedPtr<SDockingArea,1> local_28;
  
  if ((*(longlong *)&param_2->field_0x10 != 0) && (*(SDockTab **)param_2 != (SDockTab *)0x0)) {
    pTVar6 = SDockTab::GetDockArea(*(SDockTab **)param_2,&local_48);
    if ((pTVar6->Object == (SDockingArea *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_58.Object = (SPanelDrawerArea *)0x0;
    local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    SDockingArea::SetPanelDrawerArea(pTVar6->Object,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  this_00 = *(SDockTab **)param_1;
  if ((this_00 != (SDockTab *)0x0) &&
     (this_01 = *(FTabManager **)&param_1->field_0x10, this_01 != (FTabManager *)0x0)) {
    pTVar7 = SDockTab::GetParentWindow(this_00,&local_38);
    FTabManager::GetDockingAreaForPanelDrawer(this_01,&local_68,pTVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    if (local_68.Object != (SDockingArea *)0x0) {
      pTVar6 = SDockTab::GetDockArea(this_00,&local_28);
      this_02 = TSharedPtr<SDockingArea,1>::operator->(pTVar6);
      if ((local_68.Object == (SDockingArea *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_78.SharedReferenceCount.ReferenceController =
           ((local_68.Object)->PanelDrawerPtr).WeakReferenceCount.ReferenceController;
      local_78.Object = (SPanelDrawerArea *)0x0;
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        aVar2 = (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        do {
          if (aVar2 == (atomic<int>)0x0) {
            local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14277aa85;
          }
          LOCK();
          aVar5 = (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          bVar4 = aVar2 == aVar5;
          if (bVar4) {
            (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)aVar2 + 1);
            aVar5 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar5;
        } while (!bVar4);
        local_78.Object = ((local_68.Object)->PanelDrawerPtr).Object;
      }
LAB_14277aa85:
      FVar3.ReferenceController = local_78.SharedReferenceCount.ReferenceController;
      SDockingArea::SetPanelDrawerArea(this_02,&local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar3.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&param_1->field_0x18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&param_1->field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&param_2->field_0x18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&param_2->field_0x8);
  return;
}

// SaveAllVisualState @ 142781e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGlobalTabmanager::SaveAllVisualState(FGlobalTabmanager *this)

{
  FScriptContainerElement *pFVar1;
  FTabManager *this_00;
  longlong *plVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  uint uVar6;
  atomic<int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uVar9;
  longlong lVar10;
  TSharedRef<FTabManager::FLayout,1> local_38;
  FReadAccessScope local_28;
  
  FTabManager::SavePersistentLayout((FTabManager *)this);
  uVar9 = 0;
  if (0 < (this->SubTabManagers).ArrayNum) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (this->SubTabManagers).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->SubTabManagers).AllocatorInstance.Data;
      pTVar8 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar10 + 0x18);
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        aVar4 = pTVar8->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            pTVar8 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_142781f24;
          }
          LOCK();
          aVar7 = pTVar8->SharedReferenceCount;
          bVar5 = aVar4 == aVar7;
          if (bVar5) {
            pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar7 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar7;
        } while (!bVar5);
        this_00 = *(FTabManager **)(pFVar1 + lVar10 + 0x10);
        if (this_00 != (FTabManager *)0x0) {
          FTabManager::ClearPendingLayoutSave(this_00);
          FTabManager::PersistLayout(this_00,&local_38);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &this_00->OnPersistLayout_Handler,&local_28);
          if ((*(int *)&(this_00->OnPersistLayout_Handler).field_0x10 != 0) &&
             (plVar2 = *(longlong **)&(this_00->OnPersistLayout_Handler).field_0x8,
             plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x68))(plVar2,&local_38);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_28);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_38.SharedReferenceCount.ReferenceController);
        }
      }
LAB_142781f24:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x20;
    } while ((int)uVar9 < (this->SubTabManagers).ArrayNum);
  }
  return;
}

// SetActiveTab @ 142783dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGlobalTabmanager::SetActiveTab(FGlobalTabmanager *this,TSharedPtr<SDockTab,1> *param_1)

{
  SDockTab *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  int iVar4;
  ETabRole EVar5;
  int iVar6;
  longlong *plVar7;
  atomic<int> *paVar8;
  SDockTab *pSVar9;
  SDockTab *pSVar10;
  bool bVar11;
  TSharedPtr<SDockTab,1> local_28;
  TSharedPtr<SDockTab,1> local_18;
  
  if ((param_1->Object == (SDockTab *)0x0) ||
     (EVar5 = SDockTab::GetVisualTabRole(param_1->Object), EVar5 != MajorTab)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  pSVar1 = (SDockTab *)(this->ActiveTabPtr).WeakReferenceCount.ReferenceController;
  pSVar10 = (SDockTab *)0x0;
  pSVar9 = pSVar1;
  if (pSVar1 != (SDockTab *)0x0) {
    iVar4 = (int)pSVar1->_padding_;
    do {
      pSVar9 = pSVar10;
      if (iVar4 == 0) goto LAB_142783e31;
      LOCK();
      iVar6 = (int)pSVar1->_padding_;
      bVar11 = iVar4 == iVar6;
      if (bVar11) {
        *(int *)&pSVar1->_padding_ = iVar4 + 1;
        iVar6 = iVar4;
      }
      UNLOCK();
      iVar4 = iVar6;
    } while (!bVar11);
    pSVar10 = (this->ActiveTabPtr).Object;
    pSVar9 = pSVar1;
  }
LAB_142783e31:
  if ((bVar3) && (pSVar1 = param_1->Object, pSVar10 != pSVar1)) {
    if (pSVar1 != (SDockTab *)0x0) {
      SDockTab::UpdateActivationTime(pSVar1);
    }
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    plVar7 = (longlong *)&DAT_00000008;
    local_28.Object = param_1->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar8 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar8 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
    }
    if (pSVar9 != (SDockTab *)0x0) {
      plVar7 = &pSVar9->_padding_;
      LOCK();
      *(int *)plVar7 = (int)*plVar7 + 1;
      UNLOCK();
    }
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
    }
    if (pSVar9 != (SDockTab *)0x0) {
      LOCK();
      *(int *)plVar7 = (int)*plVar7 + 1;
      UNLOCK();
    }
    local_28.SharedReferenceCount.ReferenceController = pTVar2;
    local_18.Object = pSVar10;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar9;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    Broadcast<IBaseDelegateInstance<void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>,TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnActiveTabChanged,
               &local_18,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    TWeakPtr<SDockTab,1>::operator=<SDockTab>(&this->ActiveTabPtr,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar9);
  return;
}

// SetApplicationTitle @ 142784040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGlobalTabmanager::SetApplicationTitle(FGlobalTabmanager *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  longlong lVar3;
  SWindow *pSVar4;
  FGlobalTabmanager *pFVar5;
  FGenericWindow *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  atomic<int> aVar11;
  FText *pFVar12;
  bool bVar13;
  uint uVar14;
  atomic<int> aVar15;
  SWindow **ppSVar16;
  TSharedRef<FGlobalTabmanager,1> *pTVar17;
  FString *pFVar18;
  longlong *plVar19;
  wchar_t *pwVar20;
  TReferenceControllerBase<1> *pTVar21;
  SWindow *pSVar22;
  longlong lVar23;
  uint uVar24;
  FGlobalTabmanager *pFVar25;
  FGlobalTabmanager *pFVar26;
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  FText *local_res20;
  longlong local_b8;
  SWindow *local_b0;
  TReferenceControllerBase<1> *local_a8;
  SWindow *local_a0;
  TReferenceControllerBase<1> *local_98;
  FDestructionSentinel local_90;
  FText local_78;
  bool local_68;
  undefined1 local_60 [8];
  ForAnyElementType FStack_58;
  ulonglong local_50;
  
  local_res20 = &this->AppTitle;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  local_res10[0] = 0;
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (local_res20->TextData).Reference;
  if (pIVar2 != pIVar1) {
    (local_res20->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  uVar24 = 0;
  (this->AppTitle).Flags = param_1->Flags;
  if (0 < (int)this->_padding_) {
    local_b8 = 0;
    pFVar26 = this;
    do {
      lVar23 = 0;
      uVar14 = 0;
      if ((int)uVar24 < (int)this->_padding_) {
        uVar14 = ~uVar24 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (((*(longlong *)(local_b8 + this->_padding_) != 0) &&
          (lVar3 = *(longlong *)(local_b8 + 8 + this->_padding_), lVar3 != 0)) &&
         (0 < *(int *)(lVar3 + 8))) {
        uVar14 = 0;
        if ((int)uVar24 < (int)this->_padding_) {
          uVar14 = ~uVar24 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        plVar19 = (longlong *)(this->_padding_ + local_b8);
        pTVar21 = (TReferenceControllerBase<1> *)plVar19[1];
        if (pTVar21 == (TReferenceControllerBase<1> *)0x0) {
LAB_1427841c4:
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar13) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else {
          aVar11 = pTVar21->SharedReferenceCount;
          do {
            if (aVar11 == (atomic<int>)0x0) {
              pTVar21 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_1427841c4;
            }
            LOCK();
            aVar15 = pTVar21->SharedReferenceCount;
            bVar13 = aVar11 == aVar15;
            if (bVar13) {
              pTVar21->SharedReferenceCount = (atomic<int>)((int)aVar11 + 1);
              aVar15 = aVar11;
            }
            UNLOCK();
            aVar11 = aVar15;
          } while (!bVar13);
          lVar23 = *plVar19;
          if (lVar23 == 0) goto LAB_1427841c4;
        }
        if (((*(longlong *)(lVar23 + 0x300) == 0) || (*(longlong *)(lVar23 + 0x308) == 0)) ||
           (*(int *)(*(longlong *)(lVar23 + 0x308) + 8) < 1)) {
          bVar8 = true;
          ppSVar16 = &local_a0;
          pSVar22 = (SWindow *)0x0;
          local_98 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          local_a8 = *(TReferenceControllerBase<1> **)(lVar23 + 0x308);
          bVar9 = true;
          local_b0 = (SWindow *)0x0;
          if (local_a8 != (TReferenceControllerBase<1> *)0x0) {
            aVar11 = local_a8->SharedReferenceCount;
            do {
              if (aVar11 == (atomic<int>)0x0) {
                ppSVar16 = &local_b0;
                local_a8 = (TReferenceControllerBase<1> *)0x0;
                pSVar22 = (SWindow *)0x0;
                goto LAB_14278427a;
              }
              LOCK();
              aVar15 = local_a8->SharedReferenceCount;
              bVar13 = aVar11 == aVar15;
              if (bVar13) {
                local_a8->SharedReferenceCount = (atomic<int>)((int)aVar11 + 1);
                aVar15 = aVar11;
              }
              UNLOCK();
              aVar11 = aVar15;
            } while (!bVar13);
            local_b0 = *(SWindow **)(lVar23 + 0x300);
          }
          ppSVar16 = &local_b0;
          pSVar22 = local_b0;
        }
LAB_14278427a:
        pSVar4 = ppSVar16[1];
        ppSVar16[1] = (SWindow *)0x0;
        *ppSVar16 = (SWindow *)0x0;
        if (bVar8) {
          bVar8 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_98);
        }
        if (bVar9) {
          bVar9 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21)
        ;
        pFVar25 = pFVar26;
        if (pSVar22 == (SWindow *)0x0) {
LAB_1427842f6:
          bVar13 = false;
          pFVar26 = pFVar25;
        }
        else {
          bVar10 = true;
          pTVar17 = Get();
          pFVar5 = pTVar17->Object;
          pFVar26 = (FGlobalTabmanager *)
                    (pFVar5->RootWindowPtr).WeakReferenceCount.ReferenceController;
          pFVar25 = pFVar26;
          if (pFVar26 == (FGlobalTabmanager *)0x0) goto LAB_1427842f6;
          aVar11 = *(atomic<int> *)&pFVar26->_padding_;
          do {
            pFVar25 = (FGlobalTabmanager *)0x0;
            if (aVar11 == (atomic<int>)0x0) goto LAB_1427842f6;
            LOCK();
            aVar15 = *(atomic<int> *)&pFVar26->_padding_;
            bVar13 = aVar11 == aVar15;
            if (bVar13) {
              *(atomic<int> *)&pFVar26->_padding_ = (atomic<int>)((int)aVar11 + 1);
              aVar15 = aVar11;
            }
            UNLOCK();
            aVar11 = aVar15;
          } while (!bVar13);
          pFVar25 = pFVar26;
          if (pSVar22 != (pFVar5->RootWindowPtr).Object) goto LAB_1427842f6;
          bVar13 = true;
        }
        if (bVar10) {
          bVar10 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar26);
        }
        if (bVar13) {
          if ((pSVar22 == (SWindow *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar12 = local_res20;
          local_78.TextData.Reference = (local_res20->TextData).Reference;
          if (local_78.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_78.TextData.Reference + 8))
                      (local_78.TextData.Reference,local_res18);
          }
          local_78.Flags = pFVar12->Flags;
          local_68 = true;
          local_50 = 0;
          local_60 = (undefined1  [8])0x0;
          FStack_58.Data = (FScriptContainerElement *)0x0;
          FText::operator=(&(pSVar22->Title).Value,&local_78);
          (pSVar22->Title).bIsSet = local_68;
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pSVar22->Title).Getter,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
                     (FWriteAccessScope *)&local_90);
          if (((int)local_50 != 0) && (FStack_58.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_58.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_58,0,0,0x10);
            local_50 = local_50 & 0xffffffff00000000;
          }
          if (local_90.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
          }
          if (FStack_58.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_58.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_60);
          if (local_78.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
          }
          pFVar6 = (pSVar22->NativeWindow).Object;
          if (pFVar6 != (FGenericWindow *)0x0) {
            pcVar7 = *(code **)(pFVar6->_padding_ + 0xd8);
            pFVar18 = FText::ToString(local_res20);
            if ((pFVar18->Data).ArrayNum == 0) {
              pwVar20 = L"";
            }
            else {
              pwVar20 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
            }
            (*pcVar7)(pFVar6,pwVar20);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pSVar4);
      }
      local_b8 = local_b8 + 0x10;
      uVar24 = uVar24 + 1;
    } while ((int)uVar24 < (int)this->_padding_);
  }
  return;
}

// SetCanSavePersistentLayouts @ 142784520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGlobalTabmanager::SetCanSavePersistentLayouts(FGlobalTabmanager *this,bool param_1)

{
  this->bCanSavePersistentLayouts = param_1;
  return;
}

// SetInitialLayoutSP @ 1427850d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGlobalTabmanager::SetInitialLayoutSP
          (FGlobalTabmanager *this,TSharedPtr<FTabManager::FLayout,1> *param_1)

{
  FLayout *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->InitialLayoutSP).SharedReferenceCount.ReferenceController;
  (this->InitialLayoutSP).Object = pFVar1;
  (this->InitialLayoutSP).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetProxyTabManager @ 142786a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGlobalTabmanager::SetProxyTabManager
          (FGlobalTabmanager *this,TSharedPtr<FProxyTabmanager,1> *param_1)

{
  FProxyTabmanager *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->ProxyTabManager).SharedReferenceCount.ReferenceController;
  (this->ProxyTabManager).Object = pFVar1;
  (this->ProxyTabManager).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetRootWindow @ 142786bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGlobalTabmanager::SetRootWindow(FGlobalTabmanager *this,TSharedRef<SWindow,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  (this->RootWindowPtr).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->RootWindowPtr).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->RootWindowPtr).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->RootWindowPtr).WeakReferenceCount.ReferenceController = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetShouldUseMiddleEllipsisForDockTabLabel @ 142786c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGlobalTabmanager::SetShouldUseMiddleEllipsisForDockTabLabel(FGlobalTabmanager *this,bool param_1)

{
  this->bShouldUseMiddleEllipsisForDockTabLabel = param_1;
  return;
}

// UnregisterNomadTabSpawner @ 1427908e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGlobalTabmanager::UnregisterNomadTabSpawner(FGlobalTabmanager *this,FName param_1)

{
  TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
  *this_00;
  uint uVar1;
  FName local_res8;
  FName local_res10;
  
  this_00 = (TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
             *)this->_padding_;
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    local_res8 = param_1;
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    TSet<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>(this_00,local_res10.Number + uVar1,&local_res8);
  }
  return;
}

// UpdateMainMenu @ 142791860

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGlobalTabmanager::UpdateMainMenu
          (FGlobalTabmanager *this,TSharedRef<SDockTab,1> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  uint uVar5;
  atomic<int> aVar6;
  TSharedRef<FTabManager,1> *pTVar7;
  uint uVar8;
  TSharedPtr<FTabManager,1> local_48;
  undefined8 local_38;
  FSharedReferencer<1> local_30;
  TSharedRef<FTabManager,1> local_28;
  TSharedPtr<SDockTab,1> local_18;
  
  SDockTab::GetTabManagerPtr(param_1->Object,&local_48);
  pTVar7 = TSharedFromThis<FTabManager,1>::AsShared
                     ((TSharedFromThis<FTabManager,1> *)&this->_padding_,&local_28);
  if ((local_48.Object != (FTabManager *)0x0) && (local_48.Object == pTVar7->Object)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    uVar5 = TArray<FGlobalTabmanager::FSubTabManager,TSizedDefaultAllocator<32>_>::
            IndexOfByPredicate<FGlobalTabmanager::FindByTab>
                      (&this->SubTabManagers,(FindByTab)param_1);
    if (uVar5 == 0xffffffff) goto LAB_14279198a;
    uVar8 = 0;
    if ((int)uVar5 < (this->SubTabManagers).ArrayNum) {
      uVar8 = ~uVar5 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_48.Object = (FTabManager *)0x0;
    pFVar1 = (this->SubTabManagers).AllocatorInstance.Data;
    local_30.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)(int)uVar5 * 0x20 + 0x18);
    if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = (local_30.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          local_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142791956;
        }
        LOCK();
        aVar6 = (local_30.ReferenceController)->SharedReferenceCount;
        bVar4 = aVar3 == aVar6;
        if (bVar4) {
          (local_30.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar6 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar6;
      } while (!bVar4);
      local_48.Object = *(FTabManager **)(pFVar1 + (longlong)(int)uVar5 * 0x20 + 0x10);
    }
LAB_142791956:
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_48.SharedReferenceCount,&local_30);
    local_28.SharedReferenceCount.ReferenceController = local_30.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
LAB_14279198a:
  if ((local_48.Object == (FTabManager *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FTabManager::UpdateMainMenu(local_48.Object,&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return;
}

// UpdateStats @ 142791ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGlobalTabmanager::UpdateStats(FGlobalTabmanager *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  atomic<int> aVar5;
  bool bVar6;
  uint uVar7;
  atomic<int> aVar8;
  FTabManager *pFVar9;
  FTabManager *pFVar10;
  FTabManager *this_00;
  uint uVar11;
  FTabManager *pFVar12;
  int local_res8 [2];
  int local_res10 [2];
  TArray<TSharedPtr<SWindow,1>,TSizedDefaultAllocator<32>_> local_28;
  
  pFVar12 = (FTabManager *)0x0;
  local_res8[0] = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  FTabManager::GetRecordableStats((FTabManager *)this,local_res8,&local_28);
  pFVar10 = pFVar12;
  do {
    uVar11 = (uint)pFVar10;
    if (((int)uVar11 < 0) || ((this->SubTabManagers).ArrayNum <= (int)uVar11)) {
      iVar4 = local_res8[0];
      if (local_res8[0] < this->AllTabsMaxCount) {
        iVar4 = this->AllTabsMaxCount;
      }
      this->AllTabsMaxCount = iVar4;
      iVar4 = local_28.ArrayNum;
      if (local_28.ArrayNum < this->AllAreasWindowMaxCount) {
        iVar4 = this->AllAreasWindowMaxCount;
      }
      this->AllAreasWindowMaxCount = iVar4;
      DestructItems<TSharedPtr<SWindow,1>,int>
                ((TSharedPtr<SWindow,1> *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      if ((TSharedPtr<SWindow,1> *)local_28.AllocatorInstance.Data != (TSharedPtr<SWindow,1> *)0x0)
      {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return;
    }
    if (((int)uVar11 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = (this->SubTabManagers).AllocatorInstance.Data;
    if (((*(longlong *)(pFVar1 + (longlong)(int)uVar11 * 0x20 + 0x10) != 0) &&
        (lVar2 = *(longlong *)(pFVar1 + (longlong)(int)uVar11 * 0x20 + 0x18), lVar2 != 0)) &&
       (0 < *(int *)(lVar2 + 8))) {
      local_res10[0] = 0;
      uVar7 = 0;
      if ((int)uVar11 < (this->SubTabManagers).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->SubTabManagers).AllocatorInstance.Data;
      pFVar10 = *(FTabManager **)(pFVar1 + (longlong)(int)uVar11 * 0x20 + 0x18);
      pFVar9 = pFVar10;
      this_00 = pFVar12;
      if (pFVar10 == (FTabManager *)0x0) {
LAB_142792041:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        pFVar10 = pFVar9;
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        aVar5 = *(atomic<int> *)&pFVar10->_padding_;
        do {
          pFVar9 = pFVar12;
          if (aVar5 == (atomic<int>)0x0) goto LAB_142792041;
          LOCK();
          aVar8 = *(atomic<int> *)&pFVar10->_padding_;
          bVar6 = aVar5 == aVar8;
          if (bVar6) {
            *(atomic<int> *)&pFVar10->_padding_ = (atomic<int>)((int)aVar5 + 1);
            aVar8 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar8;
        } while (!bVar6);
        this_00 = *(FTabManager **)(pFVar1 + (longlong)(int)uVar11 * 0x20 + 0x10);
        pFVar9 = pFVar10;
        if (this_00 == (FTabManager *)0x0) goto LAB_142792041;
      }
      FTabManager::GetRecordableStats(this_00,local_res10,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar10);
      local_res8[0] = local_res8[0] + local_res10[0];
    }
    pFVar10 = (FTabManager *)(ulonglong)(uVar11 + 1);
  } while( true );
}

