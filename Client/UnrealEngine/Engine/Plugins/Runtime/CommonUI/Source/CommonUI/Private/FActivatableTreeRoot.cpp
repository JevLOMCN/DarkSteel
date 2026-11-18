// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 15

// ApplyLeafmostNodeConfig @ 14a7befd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FActivatableTreeRoot::ApplyLeafmostNodeConfig(FActivatableTreeRoot *this,bool param_1)

{
  FActivatableTreeNode *this_00;
  longlong *plVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  atomic<int> aVar7;
  uint uVar8;
  UObject *pUVar9;
  UCommonUIActionRouterBase *this_01;
  UCommonInputSettings *pUVar10;
  FUIInputConfig *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  uint uVar13;
  longlong lVar14;
  FUIInputConfig local_c4;
  FUIInputConfig local_bc;
  char local_b6;
  FString local_b0;
  FName local_a0;
  TReferenceControllerBase<1> *local_98;
  FName local_90;
  FName local_88;
  FString local_80;
  FString local_70;
  FDestructionSentinel local_60;
  
  bVar4 = CanSetInputConfigAndFocus(this);
  if (!bVar4) {
    if ((byte)LogUIActionRouter._0_1_ < 5) {
      return;
    }
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (pUVar9 == (UObject *)0x0) {
      ::FString::FString(&local_b0,L"None");
    }
    else {
      local_a0.ComparisonIndex.Value = *(uint *)&pUVar9->field_0x18;
      local_a0.Number = *(uint *)&pUVar9->field_0x1c;
      ::FName::ToString(&local_a0,&local_b0);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
    if (local_b0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    return;
  }
  pTVar12 = (this->LeafmostActiveNode).WeakReferenceCount.ReferenceController;
  local_98 = pTVar12;
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) goto LAB_14a7bf0d0;
  aVar3 = pTVar12->SharedReferenceCount;
  do {
    if (aVar3 == (atomic<int>)0x0) {
      pTVar12 = (TReferenceControllerBase<1> *)0x0;
      goto LAB_14a7bf0d0;
    }
    LOCK();
    aVar7 = pTVar12->SharedReferenceCount;
    bVar4 = aVar3 == aVar7;
    if (bVar4) {
      pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
      aVar7 = aVar3;
    }
    UNLOCK();
    aVar3 = aVar7;
  } while (!bVar4);
  this_00 = (this->LeafmostActiveNode).Object;
  if (this_00 == (FActivatableTreeNode *)0x0) goto LAB_14a7bf0d0;
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActionRouterPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.h"
                         ,0x48,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  FActivatableTreeNode::FindActivationMetadata(this_00);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar9[8].field_0x18,
             (FWriteAccessScope *)&local_60);
  *(int *)&pUVar9[9].field_0xc = *(int *)&pUVar9[9].field_0xc + 1;
  bVar4 = false;
  uVar13 = *(int *)(pUVar9 + 9) - 1;
  if (-1 < (int)uVar13) {
    lVar14 = (longlong)(int)uVar13 << 4;
    bVar4 = false;
    do {
      uVar8 = 0;
      if ((int)uVar13 < *(int *)(pUVar9 + 9)) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(*(longlong *)&pUVar9[8].field_0x20 + 8 + lVar14) == 0) ||
          (plVar1 = *(longlong **)(*(longlong *)&pUVar9[8].field_0x20 + lVar14),
          plVar1 == (longlong *)0x0)) || (cVar6 = (**(code **)(*plVar1 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar14 = lVar14 + -0x10;
      uVar13 = uVar13 - 1;
      pTVar12 = local_98;
    } while (-1 < (int)uVar13);
  }
  *(int *)&pUVar9[9].field_0xc = *(int *)&pUVar9[9].field_0xc + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar9[8].field_0x18,false);
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  cVar6 = (**(code **)(this_00->_padding_ + 0x18))(this_00);
  if (cVar6 == '\0') {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8809435093299889676>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                       ,0x60c,"PinnedLeafmostNode->IsReceivingInput()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (4 < (byte)LogUIActionRouter._0_1_) {
      pUVar9 = FWeakObjectPtr::Get(&(this_00->RepresentedWidget).WeakPtr);
      local_90.ComparisonIndex.Value = *(uint *)&pUVar9->field_0x18;
      local_90.Number = *(uint *)&pUVar9->field_0x1c;
      ::FName::ToString(&local_90,&local_80);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_14a7bf0d0;
  }
  if (3 < (byte)LogUIActionRouter._0_1_) {
    pUVar9 = FWeakObjectPtr::Get(&(this_00->RepresentedWidget).WeakPtr);
    local_88.ComparisonIndex.Value = *(uint *)&pUVar9->field_0x18;
    local_88.Number = *(uint *)&pUVar9->field_0x1c;
    ::FName::ToString(&local_88,&local_70);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  FActivatableTreeNode::FindDesiredInputConfig(this_00);
  if (local_b6 == '\0') {
    pUVar10 = ICommonInputModule::GetSettings();
    if (pUVar10->bEnableDefaultInputConfig != false) {
      this_01 = FActionRouterBindingCollection::GetActionRouter
                          ((FActionRouterBindingCollection *)this);
      pUVar9 = (UObject *)0x0;
      local_c4.bIgnoreMoveInput = false;
      local_c4.bIgnoreLookInput = false;
      local_c4.InputMode = Menu;
      local_c4.MouseCaptureMode = NoCapture;
      pFVar11 = &local_c4;
      local_c4.MouseLockMode = DoNotLock;
      local_c4.bHideCursorDuringViewportCapture = true;
      goto LAB_14a7bf417;
    }
  }
  else {
    this_01 = FActionRouterBindingCollection::GetActionRouter
                        ((FActionRouterBindingCollection *)this);
    pUVar9 = FWeakObjectPtr::Get(&(this_00->RepresentedWidget).WeakPtr);
    if ((local_b6 == '\0') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar11 = &local_bc;
LAB_14a7bf417:
    UCommonUIActionRouterBase::SetActiveUIInputConfig(this_01,pFVar11,pUVar9);
  }
  if ((!param_1) || (bVar4 = GamepadFocusHoveredWidget(this), !bVar4)) {
    FocusLeafmostNode(this);
  }
LAB_14a7bf0d0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return;
}

// CanSetInputConfigAndFocus @ 14a7c3c30

bool __thiscall FActivatableTreeRoot::CanSetInputConfigAndFocus(FActivatableTreeRoot *this)

{
  FActivatableTreeRoot *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UCommonUIActionRouterBase *this_00;
  TSharedPtr<FActivatableTreeRoot,1> *pTVar5;
  TSharedPtr<FActivatableTreeRoot,1> local_18;
  
  bVar3 = IsAnActionDomainRoot(this);
  if (bVar3) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActionRouterPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.h"
                         ,0x48,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    this_00 = (UCommonUIActionRouterBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pTVar5 = UCommonUIActionRouterBase::FindActiveActionDomainRootNode(this_00,&local_18);
    pFVar1 = pTVar5->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (pFVar1 != this) {
      return false;
    }
  }
  return true;
}

// Create @ 14a7c7a80

TSharedRef<FActivatableTreeRoot,1> * __cdecl
FActivatableTreeRoot::Create
          (TSharedRef<FActivatableTreeRoot,1> *__return_storage_ptr__,
          UCommonUIActionRouterBase *param_1,UCommonActivatableWidget *param_2)

{
  code *pcVar1;
  bool bVar2;
  FActivatableTreeRoot *this;
  TSharedRef<FActivatableTreeRoot,1> *pTVar3;
  TRawPtrProxy<FActivatableTreeRoot> local_res8;
  
  this = ::operator_new(0x118);
  if (this != (FActivatableTreeRoot *)0x0) {
    FActivatableTreeNode::FActivatableTreeNode((FActivatableTreeNode *)this,param_1,param_2);
    this->_padding_ = (longlong)&___7FActivatableTreeRoot__6B_;
    *(undefined8 *)&(this->OnLeafmostActiveNodeChanged).field_0x0 = 0;
    *(undefined8 *)&(this->OnLeafmostActiveNodeChanged).field_0x8 = 0;
    *(undefined4 *)&(this->OnLeafmostActiveNodeChanged).field_0x10 = 0;
    (this->LeafmostActiveNode).Object = (FActivatableTreeNode *)0x0;
    (this->LeafmostActiveNode).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if ((((this->_padding_ != 0) && (this->_padding_ != 0)) && (0 < *(int *)(this->_padding_ + 8)))
       && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InObject || !InObject->DoesSharedInstanceExist()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<FActivatableTreeRoot,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_res8.Object = this;
  TSharedRef<FActivatableTreeRoot,1>::TSharedRef<FActivatableTreeRoot,1><FActivatableTreeRoot>
            (__return_storage_ptr__,&local_res8);
  (**(code **)(__return_storage_ptr__->Object->_padding_ + 0x28))();
  return __return_storage_ptr__;
}

// DebugDump @ 14a7d2340

void __thiscall
FActivatableTreeRoot::DebugDump
          (FActivatableTreeRoot *this,FString *param_1,bool param_2,bool param_3,bool param_4)

{
  FActivatableTreeNode::DebugDumpRecursive
            ((FActivatableTreeNode *)this,param_1,0,param_2,param_3,param_4);
  return;
}

// FocusLeafmostNode @ 14a7dd720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FActivatableTreeRoot::FocusLeafmostNode(FActivatableTreeRoot *this)

{
  FActivatableTreeNode *this_00;
  UGameViewportClient *this_01;
  code *pcVar1;
  int iVar2;
  atomic<int> aVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  atomic<int> aVar7;
  UObject *pUVar8;
  UUserWidget *this_02;
  UCommonUIActionRouterBase *pUVar9;
  FSlateApplication *pFVar10;
  UWidget *this_03;
  ULocalPlayer *pUVar11;
  TSharedPtr<SViewport,1> *pTVar12;
  FStaticBasicLogRecord *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  SWidget *pSVar15;
  SWidget *pSVar16;
  SWidget *pSVar17;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  TSharedPtr<SWidget,1> local_128;
  TSharedPtr<SWidget,1> local_118;
  FString local_108;
  FName local_f8;
  FName local_f0;
  ULocalPlayer *local_e8;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  TSharedPtr<SWidget,1> local_a0;
  TSharedPtr<SWidget,1> local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  FString local_60;
  TSharedPtr<SViewport,1> local_50;
  
  pSVar17 = (SWidget *)0x0;
  bVar4 = CanSetInputConfigAndFocus(this);
  if (!bVar4) {
    if (4 < (byte)LogUIActionRouter._0_1_) {
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      if (pUVar8 == (UObject *)0x0) {
        ::FString::FString(&local_108,L"None");
      }
      else {
        local_res10.ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
        local_res10.Number = *(uint *)&pUVar8->field_0x1c;
        ::FName::ToString(&local_res10,&local_108);
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
        return;
      }
    }
    return;
  }
  if ((((this->LeafmostActiveNode).Object == (FActivatableTreeNode *)0x0) ||
      (pTVar14 = (this->LeafmostActiveNode).WeakReferenceCount.ReferenceController,
      pTVar14 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar14->SharedReferenceCount < 1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8809435093299889741>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                       ,0x64d,"LeafmostActiveNode.IsValid()");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((byte)LogUIActionRouter._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
    return;
  }
  pSVar16 = (SWidget *)(this->LeafmostActiveNode).WeakReferenceCount.ReferenceController;
  pSVar15 = pSVar16;
  if (pSVar16 == (SWidget *)0x0) {
LAB_14a7dd845:
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8809435093299889748>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                       ,0x654,"PinnedLeafmostNode");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pSVar16 = pSVar15;
    if ((byte)LogUIActionRouter._0_1_ < 2) goto LAB_14a7dd88e;
    pFVar13 = &::LOG_Static;
  }
  else {
    iVar2 = (int)pSVar16->_padding_;
    do {
      pSVar15 = pSVar17;
      if (iVar2 == 0) goto LAB_14a7dd845;
      LOCK();
      iVar5 = (int)pSVar16->_padding_;
      bVar4 = iVar2 == iVar5;
      if (bVar4) {
        *(int *)&pSVar16->_padding_ = iVar2 + 1;
        iVar5 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar5;
    } while (!bVar4);
    this_00 = (this->LeafmostActiveNode).Object;
    pSVar15 = pSVar16;
    if (this_00 == (FActivatableTreeNode *)0x0) goto LAB_14a7dd845;
    this_02 = (UUserWidget *)FWeakObjectPtr::Get(&(this_00->RepresentedWidget).WeakPtr);
    if (this_02 != (UUserWidget *)0x0) {
      uVar6 = FActionRouterBindingCollection::GetOwnerUserIndex
                        ((FActionRouterBindingCollection *)this);
      pUVar9 = FActionRouterBindingCollection::GetActionRouter
                         ((FActionRouterBindingCollection *)this);
      local_e8 = CastChecked<ULocalPlayer,UObject>((UObject *)pUVar9->_padding_);
      if ((*(char *)((longlong)&this_02[1]._padding_ + 1) == '\0') ||
         (*(char *)((longlong)&this_02[1]._padding_ + 3) == '\0')) {
        local_68 = 0;
        local_128.Object = (SWidget *)0x0;
        local_128.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_70 = 0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        local_128.SharedReferenceCount.ReferenceController =
             (this_00->FocusRestorationTarget).WeakReferenceCount.ReferenceController;
        if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          aVar3 = (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar3 == (atomic<int>)0x0) {
              local_128.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              goto LAB_14a7dd990;
            }
            LOCK();
            aVar7 = (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            bVar4 = aVar3 == aVar7;
            if (bVar4) {
              (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)aVar3 + 1);
              aVar7 = aVar3;
            }
            UNLOCK();
            aVar3 = aVar7;
          } while (!bVar4);
          pSVar17 = (this_00->FocusRestorationTarget).Object;
        }
LAB_14a7dd990:
        local_78 = 0;
        local_80 = 0;
        local_128.Object = pSVar17;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      if (local_128.Object == (SWidget *)0x0) {
        this_03 = (UWidget *)(**(code **)(this_02->_padding_ + 0x4f0))(this_02);
        if (this_03 != (UWidget *)0x0) {
          if (3 < (byte)LogUIActionRouter._0_1_) {
            local_res18 = (FName)this_03->_padding_;
            ::FName::ToString(&local_res18,&local_e0);
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
            if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e0.Data.AllocatorInstance.Data);
            }
          }
          UWidget::SetFocus(this_03);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_128.SharedReferenceCount.ReferenceController);
          goto LAB_14a7dd88e;
        }
        pFVar10 = FSlateApplication::Get();
        (**(code **)(*(longlong *)pFVar10 + 0x170))(pFVar10,&local_90,uVar6);
        pUVar9 = FActionRouterBindingCollection::GetActionRouter
                           ((FActionRouterBindingCollection *)this);
        pUVar11 = CastChecked<ULocalPlayer,UObject>((UObject *)pUVar9->_padding_);
        local_118.Object = (SWidget *)0x0;
        pTVar14 = (pUVar11->SlateOperations).FocusRecipient.WeakReferenceCount.ReferenceController;
        local_118.SharedReferenceCount.ReferenceController = pTVar14;
        if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
LAB_14a7ddbb5:
          bVar4 = FActivatableTreeNode::IsExclusiveParentOfWidget(this_00,&local_90);
          if (bVar4) goto LAB_14a7ddbc9;
          bVar4 = UUserWidget::IsFocusable(this_02);
          if (bVar4) {
            if (3 < (byte)LogUIActionRouter._0_1_) {
              local_f8 = (FName)this_02->_padding_;
              ::FName::ToString(&local_f8,&local_c0);
              UE::Logging::Private::BasicLog<4>
                        (&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
              if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c0.Data.AllocatorInstance.Data);
              }
            }
            UWidget::SetFocus((UWidget *)this_02);
            goto LAB_14a7ddc27;
          }
          pUVar9 = FActionRouterBindingCollection::GetActionRouter
                             ((FActionRouterBindingCollection *)this);
          pUVar11 = CastChecked<ULocalPlayer,UObject>((UObject *)pUVar9->_padding_);
          this_01 = (pUVar11->ViewportClient).field0_0x0.DebugPtr;
          if (this_01 == (UGameViewportClient *)0x0) goto LAB_14a7ddc27;
          if (3 < (byte)LogUIActionRouter._0_1_) {
            local_f0 = (FName)this_02->_padding_;
            ::FName::ToString(&local_f0,&local_b0);
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
            if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b0.Data.AllocatorInstance.Data);
            }
          }
          pFVar10 = FSlateApplication::Get();
          pTVar12 = UGameViewportClient::GetGameViewportWidget(this_01,&local_50);
          local_a0.Object = (SWidget *)pTVar12->Object;
          local_a0.SharedReferenceCount.ReferenceController =
               (pTVar12->SharedReferenceCount).ReferenceController;
          if (local_a0.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          bVar4 = FSlateApplication::SetUserFocus(pFVar10,uVar6,&local_a0,SetDirectly);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a0.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_50.SharedReferenceCount.ReferenceController);
        }
        else {
          aVar3 = pTVar14->SharedReferenceCount;
          do {
            if (aVar3 == (atomic<int>)0x0) {
              pTVar14 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_14a7ddbb5;
            }
            LOCK();
            aVar7 = pTVar14->SharedReferenceCount;
            bVar4 = aVar3 == aVar7;
            if (bVar4) {
              pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
              aVar7 = aVar3;
            }
            UNLOCK();
            aVar3 = aVar7;
          } while (!bVar4);
          if ((pTVar14 == (TReferenceControllerBase<1> *)0x0) ||
             (local_118.Object = (pUVar11->SlateOperations).FocusRecipient.Object,
             local_118.Object == (SWidget *)0x0)) goto LAB_14a7ddbb5;
          if ((this_00 == (FActivatableTreeNode *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          bVar4 = FActivatableTreeNode::IsExclusiveParentOfWidget(this_00,&local_118);
          if (!bVar4) {
            if ((this_00 == (FActivatableTreeNode *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            goto LAB_14a7ddbb5;
          }
LAB_14a7ddbc9:
          if (3 < (byte)LogUIActionRouter._0_1_) {
            local_res20 = (FName)this_02->_padding_;
            ::FName::ToString(&local_res20,&local_d0);
            pUVar9 = FActionRouterBindingCollection::GetActionRouter
                               ((FActionRouterBindingCollection *)this);
            UCommonUIActionRouterBase::GetLocalPlayerIndex(pUVar9);
            UE::Logging::Private::BasicLog<4>
                      ((FStaticBasicLogRecord *)&PTR_u__User__d__Leaf__152234ce8,
                       (FLogCategoryBase *)&LogUIActionRouter);
            if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d0.Data.AllocatorInstance.Data);
            }
          }
LAB_14a7ddc27:
          bVar4 = false;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_90.SharedReferenceCount.ReferenceController);
      }
      else {
        if (3 < (byte)LogUIActionRouter._0_1_) {
          FReflectionMetaData::GetWidgetDebugInfo(&local_60,local_128.Object);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
        }
        pFVar10 = FSlateApplication::Get();
        bVar4 = FSlateApplication::SetUserFocus(pFVar10,uVar6,&local_128,SetDirectly);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_128.SharedReferenceCount.ReferenceController);
      if (bVar4 != false) {
        FReply::CancelFocusRequest(&local_e8->SlateOperations);
      }
      goto LAB_14a7dd88e;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8809435093299889755>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                       ,0x65b,"LeafWidget");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((byte)LogUIActionRouter._0_1_ < 2) goto LAB_14a7dd88e;
    pFVar13 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar13,(FLogCategoryBase *)&LogUIActionRouter);
LAB_14a7dd88e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar16);
  return;
}

// GamepadFocusHoveredWidget @ 14a7debd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FActivatableTreeRoot::GamepadFocusHoveredWidget(FActivatableTreeRoot *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  code *pcVar3;
  atomic<int> aVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  uint uVar7;
  FSlateApplication *pFVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  UObject *pUVar11;
  ULocalPlayer *pUVar12;
  UCommonActivatableWidget *pUVar13;
  UCommonUIActionRouterBase *this_00;
  FArrangedWidget *pFVar14;
  uint uVar15;
  TReferenceControllerBase<1> *pTVar16;
  FActivatableTreeNode *pFVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_1f8 [32];
  ulonglong local_1d8;
  longlong local_1d0;
  TSharedRef<SWindow,1> *local_1c8;
  int local_1c0;
  TSharedPtr<SWidget,1> local_1b8;
  TSharedPtr<SWidget,1> local_1a8;
  undefined1 local_198 [8];
  undefined1 local_190 [8];
  FArrangedWidget local_188 [4];
  FArrangedWidget *local_68;
  int local_60;
  TReferenceControllerBase<1> *local_48;
  void *local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  pFVar8 = FSlateApplication::Get();
  pTVar16 = (this->LeafmostActiveNode).WeakReferenceCount.ReferenceController;
  pFVar17 = (FActivatableTreeNode *)0x0;
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar16->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar16 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14a7dec34;
      }
      LOCK();
      aVar6 = pTVar16->SharedReferenceCount;
      bVar19 = aVar4 == aVar6;
      if (bVar19) {
        pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar19);
    pFVar17 = (this->LeafmostActiveNode).Object;
  }
LAB_14a7dec34:
  lVar18 = *(longlong *)pFVar8;
  uVar9 = (**(code **)(lVar18 + 0x40))(pFVar8,&local_1c8);
  puVar10 = (undefined8 *)(**(code **)(*(longlong *)pFVar8 + 0x70))(pFVar8,local_198);
  local_1d0 = CONCAT44(local_1d0._4_4_,0xffffffff);
  local_1d8 = local_1d8 & 0xffffffffffffff00;
  (**(code **)(lVar18 + 0x108))(pFVar8,local_190,*puVar10,uVar9);
  DestructItems<TSharedRef<SWindow,1>,int>(local_1c8,local_1c0);
  if (local_1c8 != (TSharedRef<SWindow,1> *)0x0) {
    FMemory::Free(local_1c8);
  }
  uVar15 = local_60 - 1;
  if (-1 < (int)uVar15) {
    lVar18 = (longlong)(int)uVar15 * 0x48;
    do {
      uVar7 = 0;
      if ((int)uVar15 < local_60) {
        uVar7 = ~uVar15 >> 0x1f;
      }
      if (uVar7 == 0) {
        local_1d0 = (longlong)local_60;
        local_1d8 = (ulonglong)(int)uVar15;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      pFVar14 = local_188;
      if (local_68 != (FArrangedWidget *)0x0) {
        pFVar14 = local_68;
      }
      pTVar1 = *(TReferenceControllerBase<1> **)
                ((longlong)(&pFVar14->Geometry + 1) + 0x1c + lVar18 + -0x14);
      pSVar2 = *(SWidget **)((longlong)(&pFVar14->Geometry + 1) + 0x1c + lVar18 + -0x1c);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar19 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
      if ((!bVar19) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("ActionRouterPtr.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.h"
                              ,0x48,L""), bVar19)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pUVar12 = CastChecked<ULocalPlayer,UObject>(*(UObject **)&pUVar11->field_0x20);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1a8.Object = pSVar2;
      local_1a8.SharedReferenceCount.ReferenceController = pTVar1;
      pUVar13 = UCommonUIActionRouterBase::FindActivatable(&local_1a8,pUVar12);
      if (pUVar13 != (UCommonActivatableWidget *)0x0) {
        if ((pFVar17 == (FActivatableTreeNode *)0x0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar19)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        bVar19 = IsWidgetInNodeHierarchy(pUVar13,pFVar17);
        if (bVar19) {
          pFVar8 = FSlateApplication::Get();
          if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_1b8.Object = pSVar2;
          local_1b8.SharedReferenceCount.ReferenceController = pTVar1;
          bVar19 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
          if ((!bVar19) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ActionRouterPtr.IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.h"
                                  ,0x48,L""), bVar19)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          this_00 = (UCommonUIActionRouterBase *)
                    FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          uVar15 = UCommonUIActionRouterBase::GetLocalPlayerIndex(this_00);
          bVar19 = FSlateApplication::SetUserFocus(pFVar8,uVar15,&local_1b8,SetDirectly);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1b8.SharedReferenceCount.ReferenceController);
          if (bVar19) {
            bVar19 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
            if ((!bVar19) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ActionRouterPtr.IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.h"
                                    ,0x48,L""), bVar19)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
            pUVar12 = CastChecked<ULocalPlayer,UObject>(*(UObject **)&pUVar11->field_0x20);
            FReply::CancelFocusRequest(&pUVar12->SlateOperations);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
          bVar19 = true;
          goto LAB_14a7deeea;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      lVar18 = lVar18 + -0x48;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  bVar19 = false;
LAB_14a7deeea:
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  pFVar14 = local_188;
  if (local_68 != (FArrangedWidget *)0x0) {
    pFVar14 = local_68;
  }
  DestructItems<FArrangedWidget,int>(pFVar14,local_60);
  if (local_68 != (FArrangedWidget *)0x0) {
    FMemory::Free(local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  return bVar19;
}

// GatherScrollRecipients @ 14a7df310

TArray<UWidget_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FActivatableTreeRoot::GatherScrollRecipients
          (FActivatableTreeRoot *this,
          TArray<UWidget_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FActivatableTreeNode::AppendValidScrollRecipients
            ((FActivatableTreeNode *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HandleInputMethodChanged @ 14a7ecce0

void __thiscall
FActivatableTreeRoot::HandleInputMethodChanged(FActivatableTreeRoot *this,ECommonInputType param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  TConsoleVariableData<bool> *pTVar4;
  char cVar5;
  atomic<int> aVar6;
  FActivatableTreeNode *pFVar7;
  FActivatableTreeNode *pFVar8;
  FActivatableTreeNode *pFVar9;
  char cVar10;
  FActivatableTreeNode *this_00;
  bool bVar11;
  uint uStackX_c;
  
  this_00 = (FActivatableTreeNode *)0x0;
  cVar5 = (**(code **)(this->_padding_ + 0x18))();
  if ((((cVar5 == '\0') || ((this->LeafmostActiveNode).Object == (FActivatableTreeNode *)0x0)) ||
      (pTVar1 = (this->LeafmostActiveNode).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    pFVar9 = (FActivatableTreeNode *)((ulonglong)uStackX_c << 0x20);
    pFVar8 = this_00;
LAB_14a7ecdef:
    cVar10 = (char)pFVar8;
    bVar11 = false;
  }
  else {
    pFVar9 = (FActivatableTreeNode *)
             (this->LeafmostActiveNode).WeakReferenceCount.ReferenceController;
    pFVar7 = pFVar9;
    pFVar8 = this_00;
    if (pFVar9 == (FActivatableTreeNode *)0x0) {
LAB_14a7ecd71:
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      pFVar9 = pFVar7;
      if (bVar11) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      aVar3 = *(atomic<int> *)&pFVar9->_padding_;
      do {
        pFVar7 = this_00;
        pFVar8 = (FActivatableTreeNode *)0x0;
        if (aVar3 == (atomic<int>)0x0) goto LAB_14a7ecd71;
        LOCK();
        aVar6 = *(atomic<int> *)&pFVar9->_padding_;
        bVar11 = aVar3 == aVar6;
        if (bVar11) {
          *(atomic<int> *)&pFVar9->_padding_ = (atomic<int>)((int)aVar3 + 1);
          aVar6 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar6;
      } while (!bVar11);
      pFVar8 = (this->LeafmostActiveNode).Object;
      pFVar7 = pFVar9;
      if (pFVar8 == (FActivatableTreeNode *)0x0) goto LAB_14a7ecd71;
    }
    cVar5 = (**(code **)(pFVar8->_padding_ + 0x18))(pFVar8);
    cVar10 = '\x01';
    if (cVar5 == '\0') {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<8809435093299889643>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                          ,0x5eb,"LeafmostActiveNode.Pin()->IsReceivingInput()");
      pFVar8 = (FActivatableTreeNode *)&DAT_00000001;
      if (bVar11) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_14a7ecdef;
    }
    bVar11 = true;
  }
  if (cVar10 != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar9);
  }
  pTVar4 = CVarGamepadFocusHoveredWidget.Ref;
  if (!bVar11) {
    return;
  }
  if (param_1 == Gamepad) {
    bVar11 = IsInParallelGameThread();
    if ((bVar11) ||
       (bVar11 = IsInGameThread(), pFVar9 = (FActivatableTreeNode *)&DAT_00000001, bVar11)) {
      pFVar9 = this_00;
    }
    if (pTVar4->ShadowedValue[(longlong)&pFVar9->_padding_] != false) {
      ApplyLeafmostNodeConfig(this,true);
      return;
    }
  }
  ApplyLeafmostNodeConfig(this,false);
  if (param_1 == Gamepad) {
    return;
  }
  pFVar9 = (FActivatableTreeNode *)(this->LeafmostActiveNode).WeakReferenceCount.ReferenceController
  ;
  pFVar8 = pFVar9;
  if (pFVar9 != (FActivatableTreeNode *)0x0) {
    aVar3 = *(atomic<int> *)&pFVar9->_padding_;
    do {
      pFVar8 = this_00;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14a7ece83;
      LOCK();
      aVar6 = *(atomic<int> *)&pFVar9->_padding_;
      bVar11 = aVar3 == aVar6;
      if (bVar11) {
        *(atomic<int> *)&pFVar9->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar11);
    this_00 = (this->LeafmostActiveNode).Object;
    pFVar8 = pFVar9;
    if (this_00 != (FActivatableTreeNode *)0x0) goto LAB_14a7ecea9;
  }
LAB_14a7ece83:
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pFVar9 = pFVar8;
  if (bVar11) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14a7ecea9:
  FActivatableTreeNode::CacheFocusRestorationTarget(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar9);
  return;
}

// HandleRequestRefreshLeafmostFocus @ 14a7eea30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FActivatableTreeRoot::HandleRequestRefreshLeafmostFocus(FActivatableTreeRoot *this)

{
  FActivatableTreeNode *this_00;
  UGameViewportClient *this_01;
  code *pcVar1;
  int iVar2;
  atomic<int> aVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  atomic<int> aVar7;
  UObject *pUVar8;
  UUserWidget *this_02;
  UCommonUIActionRouterBase *pUVar9;
  FSlateApplication *pFVar10;
  UWidget *this_03;
  ULocalPlayer *pUVar11;
  TSharedPtr<SViewport,1> *pTVar12;
  FStaticBasicLogRecord *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  SWidget *pSVar15;
  SWidget *pSVar16;
  SWidget *pSVar17;
  FName FStackX_10;
  FName FStackX_18;
  FName FStackX_20;
  TSharedPtr<SWidget,1> TStack_128;
  TSharedPtr<SWidget,1> TStack_118;
  FString FStack_108;
  FName FStack_f8;
  FName FStack_f0;
  ULocalPlayer *pUStack_e8;
  FString FStack_e0;
  FString FStack_d0;
  FString FStack_c0;
  FString FStack_b0;
  TSharedPtr<SWidget,1> TStack_a0;
  TSharedPtr<SWidget,1> TStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  FString FStack_60;
  TSharedPtr<SViewport,1> TStack_50;
  
  if ((char)this->_padding_ == '\0') {
    return;
  }
  pSVar17 = (SWidget *)0x0;
  bVar4 = CanSetInputConfigAndFocus(this);
  if (!bVar4) {
    if (4 < (byte)LogUIActionRouter._0_1_) {
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      if (pUVar8 == (UObject *)0x0) {
        ::FString::FString(&FStack_108,L"None");
      }
      else {
        FStackX_10.ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
        FStackX_10.Number = *(uint *)&pUVar8->field_0x1c;
        ::FName::ToString(&FStackX_10,&FStack_108);
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
      if (FStack_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_108.Data.AllocatorInstance.Data);
        return;
      }
    }
    return;
  }
  if ((((this->LeafmostActiveNode).Object == (FActivatableTreeNode *)0x0) ||
      (pTVar14 = (this->LeafmostActiveNode).WeakReferenceCount.ReferenceController,
      pTVar14 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar14->SharedReferenceCount < 1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8809435093299889741>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                       ,0x64d,"LeafmostActiveNode.IsValid()");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((byte)LogUIActionRouter._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
    return;
  }
  pSVar16 = (SWidget *)(this->LeafmostActiveNode).WeakReferenceCount.ReferenceController;
  pSVar15 = pSVar16;
  if (pSVar16 == (SWidget *)0x0) {
LAB_14a7dd845:
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8809435093299889748>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                       ,0x654,"PinnedLeafmostNode");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pSVar16 = pSVar15;
    if ((byte)LogUIActionRouter._0_1_ < 2) goto LAB_14a7dd88e;
    pFVar13 = &::LOG_Static;
  }
  else {
    iVar2 = (int)pSVar16->_padding_;
    do {
      pSVar15 = pSVar17;
      if (iVar2 == 0) goto LAB_14a7dd845;
      LOCK();
      iVar5 = (int)pSVar16->_padding_;
      bVar4 = iVar2 == iVar5;
      if (bVar4) {
        *(int *)&pSVar16->_padding_ = iVar2 + 1;
        iVar5 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar5;
    } while (!bVar4);
    this_00 = (this->LeafmostActiveNode).Object;
    pSVar15 = pSVar16;
    if (this_00 == (FActivatableTreeNode *)0x0) goto LAB_14a7dd845;
    this_02 = (UUserWidget *)FWeakObjectPtr::Get(&(this_00->RepresentedWidget).WeakPtr);
    if (this_02 != (UUserWidget *)0x0) {
      uVar6 = FActionRouterBindingCollection::GetOwnerUserIndex
                        ((FActionRouterBindingCollection *)this);
      pUVar9 = FActionRouterBindingCollection::GetActionRouter
                         ((FActionRouterBindingCollection *)this);
      pUStack_e8 = CastChecked<ULocalPlayer,UObject>((UObject *)pUVar9->_padding_);
      if ((*(char *)((longlong)&this_02[1]._padding_ + 1) == '\0') ||
         (*(char *)((longlong)&this_02[1]._padding_ + 3) == '\0')) {
        uStack_68 = 0;
        TStack_128.Object = (SWidget *)0x0;
        TStack_128.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        uStack_70 = 0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        TStack_128.SharedReferenceCount.ReferenceController =
             (this_00->FocusRestorationTarget).WeakReferenceCount.ReferenceController;
        if (TStack_128.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          aVar3 = (TStack_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar3 == (atomic<int>)0x0) {
              TStack_128.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              goto LAB_14a7dd990;
            }
            LOCK();
            aVar7 = (TStack_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            bVar4 = aVar3 == aVar7;
            if (bVar4) {
              (TStack_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)aVar3 + 1);
              aVar7 = aVar3;
            }
            UNLOCK();
            aVar3 = aVar7;
          } while (!bVar4);
          pSVar17 = (this_00->FocusRestorationTarget).Object;
        }
LAB_14a7dd990:
        uStack_78 = 0;
        uStack_80 = 0;
        TStack_128.Object = pSVar17;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      if (TStack_128.Object == (SWidget *)0x0) {
        this_03 = (UWidget *)(**(code **)(this_02->_padding_ + 0x4f0))(this_02);
        if (this_03 != (UWidget *)0x0) {
          if (3 < (byte)LogUIActionRouter._0_1_) {
            FStackX_18 = (FName)this_03->_padding_;
            ::FName::ToString(&FStackX_18,&FStack_e0);
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
            if (FStack_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_e0.Data.AllocatorInstance.Data);
            }
          }
          UWidget::SetFocus(this_03);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_128.SharedReferenceCount.ReferenceController);
          goto LAB_14a7dd88e;
        }
        pFVar10 = FSlateApplication::Get();
        (**(code **)(*(longlong *)pFVar10 + 0x170))(pFVar10,&TStack_90,uVar6);
        pUVar9 = FActionRouterBindingCollection::GetActionRouter
                           ((FActionRouterBindingCollection *)this);
        pUVar11 = CastChecked<ULocalPlayer,UObject>((UObject *)pUVar9->_padding_);
        TStack_118.Object = (SWidget *)0x0;
        pTVar14 = (pUVar11->SlateOperations).FocusRecipient.WeakReferenceCount.ReferenceController;
        TStack_118.SharedReferenceCount.ReferenceController = pTVar14;
        if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
LAB_14a7ddbb5:
          bVar4 = FActivatableTreeNode::IsExclusiveParentOfWidget(this_00,&TStack_90);
          if (bVar4) goto LAB_14a7ddbc9;
          bVar4 = UUserWidget::IsFocusable(this_02);
          if (bVar4) {
            if (3 < (byte)LogUIActionRouter._0_1_) {
              FStack_f8 = (FName)this_02->_padding_;
              ::FName::ToString(&FStack_f8,&FStack_c0);
              UE::Logging::Private::BasicLog<4>
                        (&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
              if (FStack_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_c0.Data.AllocatorInstance.Data);
              }
            }
            UWidget::SetFocus((UWidget *)this_02);
            goto LAB_14a7ddc27;
          }
          pUVar9 = FActionRouterBindingCollection::GetActionRouter
                             ((FActionRouterBindingCollection *)this);
          pUVar11 = CastChecked<ULocalPlayer,UObject>((UObject *)pUVar9->_padding_);
          this_01 = (pUVar11->ViewportClient).field0_0x0.DebugPtr;
          if (this_01 == (UGameViewportClient *)0x0) goto LAB_14a7ddc27;
          if (3 < (byte)LogUIActionRouter._0_1_) {
            FStack_f0 = (FName)this_02->_padding_;
            ::FName::ToString(&FStack_f0,&FStack_b0);
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
            if (FStack_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_b0.Data.AllocatorInstance.Data);
            }
          }
          pFVar10 = FSlateApplication::Get();
          pTVar12 = UGameViewportClient::GetGameViewportWidget(this_01,&TStack_50);
          TStack_a0.Object = (SWidget *)pTVar12->Object;
          TStack_a0.SharedReferenceCount.ReferenceController =
               (pTVar12->SharedReferenceCount).ReferenceController;
          if (TStack_a0.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (TStack_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(TStack_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          bVar4 = FSlateApplication::SetUserFocus(pFVar10,uVar6,&TStack_a0,SetDirectly);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_a0.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_50.SharedReferenceCount.ReferenceController);
        }
        else {
          aVar3 = pTVar14->SharedReferenceCount;
          do {
            if (aVar3 == (atomic<int>)0x0) {
              pTVar14 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_14a7ddbb5;
            }
            LOCK();
            aVar7 = pTVar14->SharedReferenceCount;
            bVar4 = aVar3 == aVar7;
            if (bVar4) {
              pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
              aVar7 = aVar3;
            }
            UNLOCK();
            aVar3 = aVar7;
          } while (!bVar4);
          if ((pTVar14 == (TReferenceControllerBase<1> *)0x0) ||
             (TStack_118.Object = (pUVar11->SlateOperations).FocusRecipient.Object,
             TStack_118.Object == (SWidget *)0x0)) goto LAB_14a7ddbb5;
          if ((this_00 == (FActivatableTreeNode *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          bVar4 = FActivatableTreeNode::IsExclusiveParentOfWidget(this_00,&TStack_118);
          if (!bVar4) {
            if ((this_00 == (FActivatableTreeNode *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            goto LAB_14a7ddbb5;
          }
LAB_14a7ddbc9:
          if (3 < (byte)LogUIActionRouter._0_1_) {
            FStackX_20 = (FName)this_02->_padding_;
            ::FName::ToString(&FStackX_20,&FStack_d0);
            pUVar9 = FActionRouterBindingCollection::GetActionRouter
                               ((FActionRouterBindingCollection *)this);
            UCommonUIActionRouterBase::GetLocalPlayerIndex(pUVar9);
            UE::Logging::Private::BasicLog<4>
                      ((FStaticBasicLogRecord *)&PTR_u__User__d__Leaf__152234ce8,
                       (FLogCategoryBase *)&LogUIActionRouter);
            if (FStack_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_d0.Data.AllocatorInstance.Data);
            }
          }
LAB_14a7ddc27:
          bVar4 = false;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (TStack_90.SharedReferenceCount.ReferenceController);
      }
      else {
        if (3 < (byte)LogUIActionRouter._0_1_) {
          FReflectionMetaData::GetWidgetDebugInfo(&FStack_60,TStack_128.Object);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
          if (FStack_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_60.Data.AllocatorInstance.Data);
          }
        }
        pFVar10 = FSlateApplication::Get();
        bVar4 = FSlateApplication::SetUserFocus(pFVar10,uVar6,&TStack_128,SetDirectly);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_128.SharedReferenceCount.ReferenceController);
      if (bVar4 != false) {
        FReply::CancelFocusRequest(&pUStack_e8->SlateOperations);
      }
      goto LAB_14a7dd88e;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8809435093299889755>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                       ,0x65b,"LeafWidget");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((byte)LogUIActionRouter._0_1_ < 2) goto LAB_14a7dd88e;
    pFVar13 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar13,(FLogCategoryBase *)&LogUIActionRouter);
LAB_14a7dd88e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar16);
  return;
}

// Init @ 14a7f24e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FActivatableTreeRoot::Init(FActivatableTreeRoot *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  ULocalPlayer *this_00;
  UCommonInputSubsystem *pUVar4;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddSP<FActivatableTreeNode>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pUVar3[0x1d].field_0x18,(FActivatableTreeNode *)&stack0x00000008,(pmf_04ddc356 *)this)
  ;
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddSP<FActivatableTreeNode>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pUVar3[0x1e].field_0x10,(FActivatableTreeNode *)&stack0x00000010,(pmf_04ddc356 *)this)
  ;
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar3[0x1b].field_0x20 != '\0') {
    FActivatableTreeNode::HandleWidgetActivated((FActivatableTreeNode *)this);
  }
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActionRouterPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.h"
                       ,0x48,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  this_00 = CastChecked<ULocalPlayer,UObject>(*(UObject **)&pUVar3->field_0x20);
  pUVar4 = ULocalPlayer::GetSubsystem<UCommonInputSubsystem>(this_00);
  if (pUVar4 == (UCommonInputSubsystem *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputSubsytem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\CommonUIActionRouterBase.cpp"
                       ,0x28d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMulticastDelegateRegistration<void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>::
  AddSP<FActivatableTreeRoot>
            (&pUVar4->OnInputMethodChangedNative,(FActivatableTreeRoot *)&stack0x00000018,
             (pmf_cb8babaf *)this);
  return;
}

// IsActiveActionDomainRoot @ 14a7f47c0

bool __thiscall FActivatableTreeRoot::IsActiveActionDomainRoot(FActivatableTreeRoot *this)

{
  FActivatableTreeRoot *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UCommonUIActionRouterBase *this_00;
  TSharedPtr<FActivatableTreeRoot,1> *pTVar5;
  TSharedPtr<FActivatableTreeRoot,1> local_18;
  
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActionRouterPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.h"
                       ,0x48,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  this_00 = (UCommonUIActionRouterBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pTVar5 = UCommonUIActionRouterBase::FindActiveActionDomainRootNode(this_00,&local_18);
  pFVar1 = pTVar5->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return pFVar1 == this;
}

// IsAnActionDomainRoot @ 14a7f4840

bool __thiscall FActivatableTreeRoot::IsAnActionDomainRoot(FActivatableTreeRoot *this)

{
  UObject *pUVar1;
  ulonglong uVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FActionRouterBindingCollection *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  UObject *pUVar11;
  TSharedRef<FActionRouterBindingCollection,1> *pTVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  UObject *pUVar19;
  int iVar20;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  TSharedRef<FActionRouterBindingCollection,1> local_68 [2];
  undefined4 local_3c;
  
  bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActionRouterPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.h"
                         ,0x48,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  iVar18 = 0;
  uVar9 = 1;
  iVar20 = 0;
  pUVar1 = pUVar11 + 0xb;
  iVar3 = *(int *)&pUVar11[0xb].field_0x18;
  iVar10 = 0;
  if (iVar3 != 0) {
    pUVar19 = *(UObject **)&pUVar11[0xb].field_0x10;
    if (*(UObject **)&pUVar11[0xb].field_0x10 == (UObject *)0x0) {
      pUVar19 = pUVar1;
    }
    uVar17 = *(uint *)pUVar19;
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar18;
      iVar20 = iVar20 + 0x20;
      iVar18 = iVar18 + 1;
      iVar10 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14a7f492d;
      uVar17 = *(uint *)(&pUVar19->field_0x4 + lVar14 * 4);
    }
    uVar9 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res10 = (int)lVar14;
    iVar10 = local_res10 + -1 + iVar20;
    if (iVar3 < iVar10) {
      iVar10 = iVar3;
    }
  }
LAB_14a7f492d:
  uVar17 = *(uint *)&pUVar11[0xb].field_0x18;
  uVar16 = uVar17 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uVar9,iVar18);
  TStack_90.CurrentBitIndex = iVar10;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar17 >> 5;
  TStack_90._28_4_ = local_3c;
  TStack_90.BaseBitIndex = iVar20;
  uStack_70 = CONCAT44(uStack_9c,*(int *)&pUVar11[10].field_0x20 - *(int *)&pUVar11[0xb].field_0x24)
  ;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)pUVar1;
  if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  uVar9 = *(uint *)&pUVar11[0xb].field_0x18;
  if (uVar17 != uVar9) {
    pUVar19 = *(UObject **)&pUVar11[0xb].field_0x10;
    if (*(UObject **)&pUVar11[0xb].field_0x10 == (UObject *)0x0) {
      pUVar19 = pUVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) &
             *(uint *)((longlong)&pUVar19->field_0x0 + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar18;
      uVar16 = uVar16 + 0x20;
      iVar18 = iVar18 + 1;
      uVar17 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14a7f4a30;
      uVar17 = *(uint *)(&pUVar19->field_0x4 + lVar14 * 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar17 = (int)lVar14 + -1 + uVar16;
    if ((int)uVar9 < (int)uVar17) {
      uVar17 = uVar9;
    }
  }
LAB_14a7f4a30:
  while( true ) {
    if (*(int *)&pUVar11[10].field_0x20 - *(int *)&pUVar11[0xb].field_0x24 != (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_90.CurrentBitIndex == uVar17) && ((UObject *)TStack_90.Array == pUVar1)) break;
    lVar14 = (longlong)TStack_90.CurrentBitIndex * 0x20 + *(longlong *)&pUVar11[10].field_0x18;
    pTVar12 = TSharedFromThis<FActionRouterBindingCollection,1>::AsShared
                        ((TSharedFromThis<FActionRouterBindingCollection,1> *)&this->_padding_,
                         local_68);
    pTVar4 = (pTVar12->SharedReferenceCount).ReferenceController;
    pFVar5 = pTVar12->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68[0].SharedReferenceCount.ReferenceController);
    plVar13 = *(longlong **)(lVar14 + 8);
    plVar15 = plVar13 + (longlong)*(int *)(lVar14 + 0x10) * 2;
    for (; plVar13 != plVar15; plVar13 = plVar13 + 2) {
      if ((FActionRouterBindingCollection *)*plVar13 == pFVar5) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        return true;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  return false;
}

// RefreshCachedRestorationTarget @ 14a80d1b0

void __thiscall FActivatableTreeRoot::RefreshCachedRestorationTarget(FActivatableTreeRoot *this)

{
  FActivatableTreeNode *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = (this->LeafmostActiveNode).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14a80d1e0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->LeafmostActiveNode).Object;
    if (this_00 != (FActivatableTreeNode *)0x0) {
      FActivatableTreeNode::CacheFocusRestorationTarget(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14a80d1e0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// UpdateLeafNode @ 14a8272c0

void __thiscall FActivatableTreeRoot::UpdateLeafNode(FActivatableTreeRoot *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TSharedRef<FActionRouterBindingCollection,1> *pTVar5;
  FActivatableTreeNode *pFVar6;
  FActivatableTreeNode *pFVar7;
  FActivatableTreeNode *this_00;
  bool bVar8;
  TSharedPtr<FActivatableTreeNode,1> local_38;
  TSharedRef<FActionRouterBindingCollection,1> local_28;
  TSharedPtr<FActivatableTreeNode,1> local_18;
  
  if ((char)this->_padding_ != '\0') {
    bVar8 = FActivatableTreeNode::IsWidgetActivated((FActivatableTreeNode *)this);
    if (bVar8) {
      pTVar5 = TSharedFromThis<FActionRouterBindingCollection,1>::AsShared
                         ((TSharedFromThis<FActionRouterBindingCollection,1> *)&this->_padding_,
                          &local_28);
      pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
      pFVar7 = (FActivatableTreeNode *)pTVar5->Object;
      if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38.Object = pFVar7;
      local_38.SharedReferenceCount.ReferenceController = pTVar1;
      bVar8 = UpdateLeafmostActiveNode(this,&local_38,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      if (!bVar8) {
        ApplyLeafmostNodeConfig(this,false);
      }
    }
    else {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8809435093299889554>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                         ,0x592,"IsWidgetActivated()");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    return;
  }
  if ((this->LeafmostActiveNode).Object == (FActivatableTreeNode *)0x0) {
    return;
  }
  pTVar1 = (this->LeafmostActiveNode).WeakReferenceCount.ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar1->SharedReferenceCount < 1) {
    return;
  }
  pFVar7 = (FActivatableTreeNode *)(this->LeafmostActiveNode).WeakReferenceCount.ReferenceController
  ;
  this_00 = (FActivatableTreeNode *)0x0;
  pFVar6 = pFVar7;
  if (pFVar7 != (FActivatableTreeNode *)0x0) {
    aVar3 = *(atomic<int> *)&pFVar7->_padding_;
    do {
      pFVar6 = this_00;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14a827331;
      LOCK();
      aVar4 = *(atomic<int> *)&pFVar7->_padding_;
      bVar8 = aVar3 == aVar4;
      if (bVar8) {
        *(atomic<int> *)&pFVar7->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar8);
    this_00 = (this->LeafmostActiveNode).Object;
    pFVar6 = pFVar7;
    if (this_00 != (FActivatableTreeNode *)0x0) goto LAB_14a827357;
  }
LAB_14a827331:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pFVar7 = pFVar6;
  if (bVar8) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14a827357:
  FActivatableTreeNode::CacheFocusRestorationTarget(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  local_18.Object = (FActivatableTreeNode *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UpdateLeafmostActiveNode(this,&local_18,true);
  return;
}

// UpdateLeafmostActiveNode @ 14a827510

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FActivatableTreeRoot::UpdateLeafmostActiveNode
          (FActivatableTreeRoot *this,TSharedPtr<FActivatableTreeNode,1> *param_1,bool param_2)

{
  FWeakReferencer<1> *pFVar1;
  undefined1 *puVar2;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  UObject *pUVar13;
  TSharedPtr<FActivatableTreeNode,1> *pTVar14;
  FActivatableTreeNode *pFVar15;
  FActivatableTreeNode *pFVar16;
  FActivatableTreeNode *pFVar17;
  FActivatableTreeNode *pFVar18;
  FActivatableTreeNode *pFVar19;
  FActivatableTreeNode *pFVar20;
  FName local_res10;
  char local_res18;
  undefined1 local_c8 [32];
  TSharedRef<FActivatableTreeNode,1> local_a8;
  TSharedPtr<FActivatableTreeNode,1> local_98;
  longlong local_88;
  longlong local_80;
  code *local_78;
  FActivatableTreeNode *pFStack_70;
  FReadAccessScope local_68;
  
  pFVar17 = (FActivatableTreeNode *)0x0;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  local_res18 = param_2;
  if ((param_1->Object != (FActivatableTreeNode *)0x0) &&
     (cVar9 = (**(code **)(param_1->Object->_padding_ + 0x18))(), cVar9 == '\0')) {
    if ((param_1->Object == (FActivatableTreeNode *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    pUVar13 = FWeakObjectPtr::Get(&(param_1->Object->RepresentedWidget).WeakPtr);
    if (4 < (byte)LogUIActionRouter._0_1_) {
      if (pUVar13 != (UObject *)0x0) {
        local_res10.ComparisonIndex.Value = *(uint *)&pUVar13->field_0x18;
        local_res10.Number = *(uint *)&pUVar13->field_0x1c;
        ::FName::ToString(&local_res10,(FString *)(local_c8 + 8));
        pFVar17 = (FActivatableTreeNode *)&DAT_00000001;
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
      if ((pFVar17 != (FActivatableTreeNode *)0x0) && ((void *)local_c8._8_8_ != (void *)0x0)) {
        FMemory::Free((void *)local_c8._8_8_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return false;
  }
  pFVar19 = param_1->Object;
  if (pFVar19 == (FActivatableTreeNode *)0x0) {
    local_80 = 0;
    local_88 = 0;
    pFVar15 = pFVar17;
    pFVar20 = pFVar17;
    pFVar19 = pFVar17;
  }
  else {
    pFVar15 = (FActivatableTreeNode *)(param_1->SharedReferenceCount).ReferenceController;
    if (pFVar15 != (FActivatableTreeNode *)0x0) {
      LOCK();
      *(int *)&pFVar15->_padding_ = (int)pFVar15->_padding_ + 1;
      UNLOCK();
    }
    local_a8.Object = pFVar19;
    local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar15;
    pTVar14 = FindLeafmostActiveChild(&local_98,&local_a8);
    pFVar19 = pTVar14->Object;
    pFVar20 = (FActivatableTreeNode *)(pTVar14->SharedReferenceCount).ReferenceController;
    (pTVar14->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar14->Object = (FActivatableTreeNode *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar15);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnLeafmostActiveNodeChanged,&local_68);
  if ((*(int *)&(this->OnLeafmostActiveNodeChanged).field_0x10 != 0) &&
     (plVar5 = *(longlong **)&(this->OnLeafmostActiveNodeChanged).field_0x8,
     plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  pFVar15 = (FActivatableTreeNode *)
            (this->LeafmostActiveNode).WeakReferenceCount.ReferenceController;
  pFVar16 = pFVar15;
  pFVar18 = pFVar17;
  if (pFVar15 != (FActivatableTreeNode *)0x0) {
    iVar8 = (int)pFVar15->_padding_;
    do {
      pFVar16 = pFVar17;
      if (iVar8 == 0) goto LAB_14a82770c;
      LOCK();
      iVar12 = (int)pFVar15->_padding_;
      bVar10 = iVar8 == iVar12;
      if (bVar10) {
        *(int *)&pFVar15->_padding_ = iVar8 + 1;
        iVar12 = iVar8;
      }
      UNLOCK();
      iVar8 = iVar12;
    } while (!bVar10);
    pFVar16 = pFVar15;
    pFVar18 = (this->LeafmostActiveNode).Object;
  }
LAB_14a82770c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar16);
  if (pFVar19 == pFVar18) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return false;
  }
  if ((((this->LeafmostActiveNode).Object != (FActivatableTreeNode *)0x0) &&
      (pTVar6 = (this->LeafmostActiveNode).WeakReferenceCount.ReferenceController,
      pTVar6 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar6->SharedReferenceCount)) {
    pFVar15 = (FActivatableTreeNode *)
              (this->LeafmostActiveNode).WeakReferenceCount.ReferenceController;
    pFVar18 = pFVar15;
    pFVar16 = pFVar17;
    if (pFVar15 == (FActivatableTreeNode *)0x0) {
LAB_14a827775:
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      pFVar15 = pFVar18;
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
    }
    else {
      iVar8 = (int)pFVar15->_padding_;
      do {
        pFVar18 = pFVar17;
        if (iVar8 == 0) goto LAB_14a827775;
        LOCK();
        iVar12 = (int)pFVar15->_padding_;
        bVar10 = iVar8 == iVar12;
        if (bVar10) {
          *(int *)&pFVar15->_padding_ = iVar8 + 1;
          iVar12 = iVar8;
        }
        UNLOCK();
        iVar8 = iVar12;
      } while (!bVar10);
      pFVar16 = (this->LeafmostActiveNode).Object;
      pFVar18 = pFVar15;
      if (pFVar16 == (FActivatableTreeNode *)0x0) goto LAB_14a827775;
    }
    FActivatableTreeNode::CacheFocusRestorationTarget(pFVar16);
    if ((pFVar16 == (FActivatableTreeNode *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    pUVar13 = FWeakObjectPtr::Get(&(pFVar16->RepresentedWidget).WeakPtr);
    if (pUVar13 != (UObject *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar13 + 0x20),this);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar15);
  }
  pFVar1 = &(this->LeafmostActiveNode).WeakReferenceCount;
  (this->LeafmostActiveNode).Object = pFVar19;
  if (pFVar20 != (FActivatableTreeNode *)pFVar1->ReferenceController) {
    if (pFVar20 != (FActivatableTreeNode *)0x0) {
      LOCK();
      puVar2 = (undefined1 *)((longlong)&pFVar20->_padding_ + 4);
      *(int *)puVar2 = *(int *)puVar2 + 1;
      UNLOCK();
    }
    pTVar6 = pFVar1->ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar3 = &pTVar6->WeakReferenceCount;
      aVar4 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))();
      }
    }
    pFVar1->ReferenceController = (TReferenceControllerBase<1> *)pFVar20;
  }
  if (local_res18 != '\0') {
    ApplyLeafmostNodeConfig(this,false);
  }
  if ((((this->LeafmostActiveNode).Object == (FActivatableTreeNode *)0x0) ||
      (pTVar6 = (this->LeafmostActiveNode).WeakReferenceCount.ReferenceController,
      pTVar6 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar6->SharedReferenceCount < 1))
  goto LAB_14a82791c;
  pFVar19 = (FActivatableTreeNode *)
            (this->LeafmostActiveNode).WeakReferenceCount.ReferenceController;
  pFVar15 = pFVar19;
  if (pFVar19 == (FActivatableTreeNode *)0x0) {
LAB_14a8278a5:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pFVar19 = pFVar15;
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
  }
  else {
    iVar8 = (int)pFVar19->_padding_;
    do {
      pFVar15 = pFVar17;
      if (iVar8 == 0) goto LAB_14a8278a5;
      LOCK();
      iVar12 = (int)pFVar19->_padding_;
      bVar10 = iVar8 == iVar12;
      if (bVar10) {
        *(int *)&pFVar19->_padding_ = iVar8 + 1;
        iVar12 = iVar8;
      }
      UNLOCK();
      iVar8 = iVar12;
    } while (!bVar10);
    pFVar17 = (this->LeafmostActiveNode).Object;
    pFVar15 = pFVar19;
    if (pFVar17 == (FActivatableTreeNode *)0x0) goto LAB_14a8278a5;
  }
  pUVar13 = FWeakObjectPtr::Get(&(pFVar17->RepresentedWidget).WeakPtr);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar19);
  if (pUVar13 != (UObject *)0x0) {
    local_a8.Object = (FActivatableTreeNode *)HandleRequestRefreshLeafmostFocus;
    local_a8.SharedReferenceCount.ReferenceController =
         local_a8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    local_78 = HandleRequestRefreshLeafmostFocus;
    pFStack_70 = (FActivatableTreeNode *)local_a8.SharedReferenceCount.ReferenceController;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddSP<FActivatableTreeRoot>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               (pUVar13 + 0x20),(FActivatableTreeRoot *)local_c8,(pmf_0f3ef076 *)this);
  }
LAB_14a82791c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

