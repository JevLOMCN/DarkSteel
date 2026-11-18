// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 58

// StaticClass @ 146959da0

UClass * __cdecl UListViewBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UListViewBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ListViewBase",
               &Z_Registration_Info_UClass_UListViewBase.InnerSingleton,
               StaticRegisterNativesUListViewBase,0x348,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UListViewBase>,
               InternalVTableHelperCtorCaller<UListViewBase>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UListViewBase.InnerSingleton;
}

// UListViewBase @ 14698b600

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UListViewBase * __thiscall UListViewBase::UListViewBase(UListViewBase *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->WheelScrollMultiplier = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&this->BP_OnEntryGenerated = 0;
  *(undefined8 *)&(this->BP_OnEntryGenerated).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnEntryGenerated).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnEntriesGenerated = 0;
  *(undefined8 *)&(this->BP_OnEntriesGenerated).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnEntriesGenerated).field_0x10 = 0;
  (this->GeneratedEntriesToAnnounce).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedEntriesToAnnounce).ArrayNum = 0;
  (this->GeneratedEntriesToAnnounce).ArrayMax = 0;
  (this->EntryWidgetClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->bEnableScrollAnimation = false;
  this->bEnableFixedLineOffset = false;
  this->FixedLineScrollOffset = 0.0;
  (this->DragDropVisualEntryClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DragDropOperationClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DragVisualWidget).field0_0x0.DebugPtr = (UWidget *)0x0;
  *(undefined8 *)&this->BP_OnEntryReleased = 0;
  *(undefined8 *)&(this->BP_OnEntryReleased).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnEntryReleased).field_0x10 = 0;
  (this->EntryWidgetPool).ActiveWidgets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntryWidgetPool).ActiveWidgets.ArrayNum = 0;
  (this->EntryWidgetPool).ActiveWidgets.ArrayMax = 0;
  (this->EntryWidgetPool).InactiveWidgets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntryWidgetPool).InactiveWidgets.ArrayNum = 0;
  (this->EntryWidgetPool).InactiveWidgets.ArrayMax = 0;
  (this->EntryWidgetPool).OwningWidget.WeakPtr = (FWeakObjectPtr)0x0;
  (this->EntryWidgetPool).OwningWorld.WeakPtr = (FWeakObjectPtr)0x0;
  (this->EntryWidgetPool).DefaultPlayerController.WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->EntryWidgetPool).CachedSlateByWidgetObject = 0;
  *(undefined8 *)&(this->EntryWidgetPool).CachedSlateByWidgetObject.field_0x8 = 0;
  *(undefined8 *)&(this->EntryWidgetPool).CachedSlateByWidgetObject.field_0x20 = 0;
  this->ScrollingAnimationInterpolationSpeed = 12.0;
  this->bInEnableTouchAnimatedScrolling = false;
  this->AllowOverscroll = true;
  this->bEnableRightClickScrolling = true;
  this->bEnableTouchScrolling = true;
  this->bIsPointerScrollingEnabled = true;
  this->bIsGamepadScrollingEnabled = true;
  this->bAllowDragging = true;
  this->bAllowDragDrop = false;
  this->DragDropVisualPivot = CenterCenter;
  this->bIsDragging = false;
  this->bSelectItemOnNavigation = true;
  this->bAllowKeepPreselectedItems = true;
  (this->DragDropVisualOffset).field0_0x0._s_0.X = 0.0;
  (this->DragDropVisualOffset).field0_0x0._s_0.Y = 0.0;
  *(undefined4 *)&(this->EntryWidgetPool).CachedSlateByWidgetObject.field_0x28 = 0;
  *(undefined4 *)&(this->EntryWidgetPool).CachedSlateByWidgetObject.field_0x2c = 0x80;
  *(undefined4 *)&(this->EntryWidgetPool).CachedSlateByWidgetObject.field_0x34 = 0;
  *(undefined4 *)&(this->EntryWidgetPool).CachedSlateByWidgetObject.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EntryWidgetPool).CachedSlateByWidgetObject.field_0x40 = 0;
  *(undefined4 *)&(this->EntryWidgetPool).CachedSlateByWidgetObject.field_0x48 = 0;
  (this->EntryGenAnnouncementDelegateHandle).Object = (FElement *)0x0;
  (this->EntryGenAnnouncementDelegateHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnListEntryGeneratedEvent = 0;
  *(undefined8 *)&(this->OnListEntryGeneratedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnListEntryGeneratedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnEntryWidgetReleasedEvent = 0;
  *(undefined8 *)&(this->OnEntryWidgetReleasedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnEntryWidgetReleasedEvent).field_0x10 = 0;
  (this->MyTableViewBase).Object = (STableViewBase *)0x0;
  (this->MyTableViewBase).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->OnListEntryGeneratedEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnEntryWidgetReleasedEvent).field_0x18 = 2;
  return this;
}

// UListViewBase @ 14698b7e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UListViewBase * __thiscall
UListViewBase::UListViewBase(UListViewBase *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UWidget::UWidget((UWidget *)this,param_1);
  this->WheelScrollMultiplier = 1.0;
  this->bEnableScrollAnimation = false;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  *(undefined8 *)&this->BP_OnEntryGenerated = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&(this->BP_OnEntryGenerated).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnEntryGenerated).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnEntriesGenerated = 0;
  *(undefined8 *)&(this->BP_OnEntriesGenerated).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnEntriesGenerated).field_0x10 = 0;
  (this->GeneratedEntriesToAnnounce).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedEntriesToAnnounce).ArrayNum = 0;
  (this->GeneratedEntriesToAnnounce).ArrayMax = 0;
  (this->EntryWidgetClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->ScrollingAnimationInterpolationSpeed = 12.0;
  this->bInEnableTouchAnimatedScrolling = false;
  this->AllowOverscroll = true;
  this->bEnableRightClickScrolling = true;
  this->bEnableTouchScrolling = true;
  this->bIsPointerScrollingEnabled = true;
  this->bIsGamepadScrollingEnabled = true;
  this->bEnableFixedLineOffset = false;
  this->FixedLineScrollOffset = 0.0;
  this->bAllowDragging = true;
  this->bAllowDragDrop = false;
  this->DragDropVisualPivot = CenterCenter;
  (this->DragDropVisualOffset).field0_0x0._s_0.X = 0.0;
  (this->DragDropVisualOffset).field0_0x0._s_0.Y = 0.0;
  (this->DragDropVisualEntryClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DragDropOperationClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DragVisualWidget).field0_0x0.DebugPtr = (UWidget *)0x0;
  this->bIsDragging = false;
  this->bSelectItemOnNavigation = true;
  this->bAllowKeepPreselectedItems = true;
  *(undefined8 *)&this->BP_OnEntryReleased = 0;
  *(undefined8 *)&(this->BP_OnEntryReleased).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnEntryReleased).field_0x10 = 0;
  FUserWidgetPool::FUserWidgetPool(&this->EntryWidgetPool,(UWidget *)this);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 1;
  (this->EntryGenAnnouncementDelegateHandle).Object = (FElement *)0x0;
  (this->EntryGenAnnouncementDelegateHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnListEntryGeneratedEvent = 0;
  *(undefined8 *)&(this->OnListEntryGeneratedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnListEntryGeneratedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnListEntryGeneratedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnEntryWidgetReleasedEvent = 0;
  *(undefined8 *)&(this->OnEntryWidgetReleasedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnEntryWidgetReleasedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnEntryWidgetReleasedEvent).field_0x18 = 2;
  (this->MyTableViewBase).Object = (STableViewBase *)0x0;
  (this->MyTableViewBase).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  UWidget::SetClipping((UWidget *)this,ClipToBounds);
  return this;
}

// ~UListViewBase @ 146993670

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListViewBase::~UListViewBase(UListViewBase *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyTableViewBase).SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnEntryWidgetReleasedEvent).field_0x8,
             *(int *)&(this->OnEntryWidgetReleasedEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnEntryWidgetReleasedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEntryWidgetReleasedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnListEntryGeneratedEvent).field_0x8,
             *(int *)&(this->OnListEntryGeneratedEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnListEntryGeneratedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnListEntryGeneratedEvent);
  pTVar4 = (this->EntryGenAnnouncementDelegateHandle).WeakReferenceCount.ReferenceController;
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
  FUserWidgetPool::~FUserWidgetPool(&this->EntryWidgetPool);
  pvVar3 = *(void **)&(this->BP_OnEntryReleased).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BP_OnEntryReleased);
  pFVar5 = (this->GeneratedEntriesToAnnounce).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pvVar3 = *(void **)&(this->BP_OnEntriesGenerated).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BP_OnEntriesGenerated);
  pvVar3 = *(void **)&(this->BP_OnEntryGenerated).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BP_OnEntryGenerated);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// operator() @ 146996560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TSharedRef<SObjectTableRow<UObject_*>,1> * __thiscall
`UListViewBase::GenerateTypedEntry<UUserWidget,SObjectTableRow<UObject_*>_>'::__l2::<lambda_1>::
operator()(void *this,TSharedRef<SObjectTableRow<UObject_*>,1> *__return_storage_ptr__,
          UUserWidget *param_1,TSharedRef<SWidget,1> *param_2)

{
  byte *pbVar1;
  UObject *pUVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  code *pcVar5;
  TSharedRef<SWidget,1> *pTVar6;
  SObjectTableRow<UObject_*> *pSVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  FArguments *pFVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  TSharedRef<SObjectTableRow<UObject_*>,1> *pTVar14;
  UObject *local_res8;
  UObject *local_res10;
  UUserWidget *local_res18;
  TSharedRef<SWidget,1> *local_res20;
  FMemScope local_4a8;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  SWidget *local_498;
  undefined8 uStack_490;
  TSlateDecl<SObjectTableRow<UObject_*>,RequiredArgs::T3RequiredArgs<TSharedRef<STableViewBase,1>_const_&,UUserWidget_&,UListViewBase_*_const_&&>_>
  local_488;
  UObject *local_470;
  UObject *local_468;
  UObject *local_460;
  UObject *local_458;
  UObject *local_450;
  UObject *local_448;
  FName local_440;
  T3RequiredArgs<TSharedRef<STableViewBase,1>_const_&,UUserWidget_&,UListViewBase_*_const_&&>
  local_438;
  FDestructionSentinel local_420;
  undefined1 *local_408;
  FDestructionSentinel local_400;
  undefined1 *local_3e8;
  FDestructionSentinel local_3e0;
  undefined1 *local_3c8;
  FDestructionSentinel local_3c0;
  undefined1 *local_3a8;
  FDestructionSentinel local_3a0;
  undefined1 *local_388;
  FDestructionSentinel local_380;
  undefined1 *local_368;
  FDestructionSentinel local_360;
  undefined1 *local_348;
  FDestructionSentinel local_340;
  undefined1 *local_328;
  undefined1 local_320 [528];
  undefined1 local_110 [24];
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68 [40];
  
  local_res18 = param_1;
  local_res20 = param_2;
  pFVar11 = SObjectTableRow<UObject_*>::FArguments::FArguments((FArguments *)local_320);
  uStack_4a0 = 0;
  pFVar11->_bAllowDragging = *(bool *)(*(longlong *)this + 0x210);
  pFVar11->_bAllowDragDrop = *(bool *)(*(longlong *)this + 0x211);
  pFVar11->_bAllowKeepPreselectedItems = *(bool *)(*(longlong *)this + 0x242);
  pUVar2 = *(UObject **)this;
  local_4a8 = (FMemScope)UListViewBase::_vcall__800__flat______;
  uStack_49c = uStack_490._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar11->_OnHovered,
             (FWriteAccessScope *)&local_420);
  local_408 = &(pFVar11->_OnHovered).field_0x8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_408);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXAEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListViewBase____A6AXAEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    puVar12[3] = 0;
    local_res8 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_res8);
    *(FMemScope *)(puVar12 + 4) = local_4a8;
    puVar12[5] = CONCAT44(uStack_49c,uStack_4a0);
  }
  if (local_420.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_420.Accessor,&local_420);
  }
  pUVar2 = *(UObject **)this;
  local_4a8 = (FMemScope)UListViewBase::_vcall__808__flat______;
  uStack_49c = uStack_490._4_4_;
  uStack_4a0 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar11->_OnUnhovered,
             (FWriteAccessScope *)&local_400);
  local_3e8 = &(pFVar11->_OnUnhovered).field_0x8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_3e8);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXAEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListViewBase____A6AXAEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    puVar12[3] = 0;
    local_res10 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_res10);
    *(FMemScope *)(puVar12 + 4) = local_4a8;
    puVar12[5] = CONCAT44(uStack_49c,uStack_4a0);
  }
  if (local_400.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_400.Accessor,&local_400);
  }
  pUVar2 = *(UObject **)this;
  local_4a8 = (FMemScope)UListViewBase::_vcall__816__flat______;
  uStack_49c = uStack_490._4_4_;
  uStack_4a0 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar11->_OnRowDragDetected,
             (FWriteAccessScope *)&local_3e0);
  local_3c8 = &(pFVar11->_OnRowDragDetected).field_0x8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_3c8);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6APEAVUDragDropOperation__AEBUFGeometry__AEBUFPointerEvent__AEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListViewBase____A6APEAVUDragDropOperation__AEBUFGeometry__AEBUFPointerEvent__AEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    puVar12[3] = 0;
    local_470 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_470);
    *(FMemScope *)(puVar12 + 4) = local_4a8;
    puVar12[5] = CONCAT44(uStack_49c,uStack_4a0);
  }
  if (local_3e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e0.Accessor,&local_3e0);
  }
  pUVar2 = *(UObject **)this;
  local_4a8 = (FMemScope)UListViewBase::_vcall__824__flat______;
  uStack_49c = uStack_490._4_4_;
  uStack_4a0 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar11->_OnRowCanAcceptDrop
             ,(FWriteAccessScope *)&local_3c0);
  local_3a8 = &(pFVar11->_OnRowCanAcceptDrop).field_0x8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_3a8);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_W4EItemDropZone____AEBVFDragDropEvent__W4EItemDropZone__AEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListViewBase____A6A_AU__TOptional_W4EItemDropZone____AEBVFDragDropEvent__W4EItemDropZone__AEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    puVar12[3] = 0;
    local_468 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_468);
    *(FMemScope *)(puVar12 + 4) = local_4a8;
    puVar12[5] = CONCAT44(uStack_49c,uStack_4a0);
  }
  if (local_3c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3c0.Accessor,&local_3c0);
  }
  pUVar2 = *(UObject **)this;
  local_4a8 = (FMemScope)UListViewBase::_vcall__832__flat______;
  uStack_49c = uStack_490._4_4_;
  uStack_4a0 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar11->_OnRowAcceptDrop,
             (FWriteAccessScope *)&local_3a0);
  local_388 = &(pFVar11->_OnRowAcceptDrop).field_0x8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_388);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBVFDragDropEvent__W4EItemDropZone__AEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListViewBase____A6A_AVFReply__AEBVFDragDropEvent__W4EItemDropZone__AEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    puVar12[3] = 0;
    local_460 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_460);
    *(FMemScope *)(puVar12 + 4) = local_4a8;
    puVar12[5] = CONCAT44(uStack_49c,uStack_4a0);
  }
  if (local_3a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a0.Accessor,&local_3a0);
  }
  pUVar2 = *(UObject **)this;
  local_4a8 = (FMemScope)UListViewBase::_vcall__840__flat______;
  uStack_49c = uStack_490._4_4_;
  uStack_4a0 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar11->_OnRowDragEnter,
             (FWriteAccessScope *)&local_380);
  local_368 = &(pFVar11->_OnRowDragEnter).field_0x8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_368);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFDragDropEvent__AEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListViewBase____A6AXAEBVFDragDropEvent__AEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    puVar12[3] = 0;
    local_458 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_458);
    *(FMemScope *)(puVar12 + 4) = local_4a8;
    puVar12[5] = CONCAT44(uStack_49c,uStack_4a0);
  }
  if (local_380.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_380.Accessor,&local_380);
  }
  pUVar2 = *(UObject **)this;
  local_4a8 = (FMemScope)UListViewBase::_vcall__848__flat______;
  uStack_49c = uStack_490._4_4_;
  uStack_4a0 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar11->_OnRowDragLeave,
             (FWriteAccessScope *)&local_360);
  local_348 = &(pFVar11->_OnRowDragLeave).field_0x8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_348);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFDragDropEvent__AEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListViewBase____A6AXAEBVFDragDropEvent__AEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    puVar12[3] = 0;
    local_450 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_450);
    *(FMemScope *)(puVar12 + 4) = local_4a8;
    puVar12[5] = CONCAT44(uStack_49c,uStack_4a0);
  }
  if (local_360.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_360.Accessor,&local_360);
  }
  pUVar2 = *(UObject **)this;
  local_4a8 = (FMemScope)UListViewBase::_vcall__856__flat______;
  uStack_49c = uStack_490._4_4_;
  uStack_4a0 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar11->_OnRowDragCancelled
             ,(FWriteAccessScope *)&local_340);
  local_328 = &(pFVar11->_OnRowDragCancelled).field_0x8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_328);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListViewBase____A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    puVar12[3] = 0;
    local_448 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_448);
    *(FMemScope *)(puVar12 + 4) = local_4a8;
    puVar12[5] = CONCAT44(uStack_49c,uStack_4a0);
  }
  if (local_340.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_340.Accessor,&local_340);
  }
  pTVar6 = local_res20;
  pTVar3 = (local_res20->SharedReferenceCount).ReferenceController;
  pSVar4 = local_res20->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_498 = (pFVar11->_Content).Widget.Object;
  uStack_490 = (pFVar11->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar11->_Content).Widget.Object = pSVar4;
  (pFVar11->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_490);
  local_438.Arg0 = *(TSharedRef<STableViewBase,1> **)((longlong)this + 8);
  local_438.Arg1 = local_res18;
  local_438.Arg2 = this;
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true
            );
  local_440 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4a8,&local_440,true);
  TSlateDecl<SObjectTableRow<UObject_*>,RequiredArgs::T3RequiredArgs<TSharedRef<STableViewBase,1>_const_&,UUserWidget_&,UListViewBase_*_const_&&>_>
  ::
  TSlateDecl<SObjectTableRow<UObject_*>,RequiredArgs::T3RequiredArgs<TSharedRef<STableViewBase,1>_const_&,UUserWidget_&,UListViewBase_*_const_&&>_>
            (&local_488,"ObjectTableRowT",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Components\\ListViewBase.h"
             ,0x2ae,&local_438);
  FMemScope::~FMemScope(&local_4a8);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res20);
  pSVar7 = local_488._Widget.Object;
  if (local_488._Widget.Object == (SObjectTableRow<UObject_*> *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TSharedRef<SObjectTableRow<UObject_*>,1> *)(*pcVar5)();
      return pTVar14;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_488._Widget.Object,(FSlateBaseNamedArgs *)pFVar11);
  SObjectTableRow<UObject_*>::Construct
            (local_488._Widget.Object,pFVar11,(local_488._RequiredArgs)->Arg0,
             (local_488._RequiredArgs)->Arg1,*(local_488._RequiredArgs)->Arg2);
  if (local_488._Widget.Object == (SObjectTableRow<UObject_*> *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TSharedRef<SObjectTableRow<UObject_*>,1> *)(*pcVar5)();
      return pTVar14;
    }
  }
  if (((local_488._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar9 = (**(code **)((local_488._Widget.Object)->_padding_ + 0x228))(local_488._Widget.Object);
    bVar10 = 0;
    if (cVar9 == '\0') goto LAB_146996d91;
  }
  bVar10 = 0x20;
LAB_146996d91:
  *(byte *)&(local_488._Widget.Object)->_padding_ =
       (byte)(local_488._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_488._Widget.Object)->_padding_ =
       (byte)(local_488._Widget.Object)->_padding_ | bVar10;
  if (local_488._Widget.Object == (SObjectTableRow<UObject_*> *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TSharedRef<SObjectTableRow<UObject_*>,1> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_488._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_488._Widget.Object == (SObjectTableRow<UObject_*> *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TSharedRef<SObjectTableRow<UObject_*>,1> *)(*pcVar5)();
      return pTVar14;
    }
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_488._Widget.SharedReferenceCount.ReferenceController;
  __return_storage_ptr__->Object = local_488._Widget.Object;
  local_488._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_488._Widget.Object = (SObjectTableRow<UObject_*> *)0x0;
  if (pSVar7 == (SObjectTableRow<UObject_*> *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TSharedRef<SObjectTableRow<UObject_*>,1> *)(*pcVar5)();
      return pTVar14;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
  if ((void *)local_68._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_80);
  if ((void *)local_80._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_80._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_80);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
  if ((void *)local_98._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_98);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
  if ((void *)local_b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
  if ((void *)local_c8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
  if ((void *)local_e0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
  if ((void *)local_f8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_110);
  if ((void *)local_110._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_110._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_110);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_320._520_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_320);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar6->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// CancelListViewDragDrop @ 1469a6100

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListViewBase::CancelListViewDragDrop(UListViewBase *this)

{
  bool bVar1;
  FSlateApplication *pFVar2;
  
  if (this->bIsDragging != false) {
    this->bIsDragging = false;
    pFVar2 = FSlateApplication::Get();
    bVar1 = FSlateApplication::IsDragDropping(pFVar2);
    if (bVar1) {
      pFVar2 = FSlateApplication::Get();
      FSlateApplication::CancelDragDrop(pFVar2);
      return;
    }
  }
  return;
}

// CreateDragDropOperation @ 1469bd340

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDragDropOperation * __thiscall
UListViewBase::CreateDragDropOperation(UListViewBase *this,UObject *param_1)

{
  int iVar1;
  UWidget *pUVar2;
  UObject *pUVar3;
  double dVar4;
  bool bVar5;
  UClass *pUVar6;
  UDragDropOperation *pUVar7;
  UClass *pUVar8;
  UWorld *pUVar9;
  UUserWidget *pUVar10;
  longlong lVar11;
  FName local_res8;
  UObject *local_res18;
  
  pUVar8 = (this->DragDropOperationClass).Class.field0_0x0.DebugPtr;
  if (pUVar8 == (UClass *)0x0) {
    return (UDragDropOperation *)0x0;
  }
  pUVar6 = Z_Construct_UClass_UDragDropOperation_NoRegister();
  if (pUVar6 == (UClass *)0x0) {
    return (UDragDropOperation *)0x0;
  }
  iVar1 = (int)pUVar6->_padding_;
  if (((int)pUVar8->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_))
  {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return (UDragDropOperation *)0x0;
  }
  local_res8 = (FName)(this->DragDropOperationClass).Class.field0_0x0.DebugPtr;
  if (local_res8 == (FName)0x0) {
    return (UDragDropOperation *)0x0;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar7 = UWidgetBlueprintLibrary::CreateDragDropOperation
                     ((TSubclassOf<UDragDropOperation>)&local_res8);
  pUVar7->Pivot = this->DragDropVisualPivot;
  dVar4 = (this->DragDropVisualOffset).field0_0x0._s_0.Y;
  (pUVar7->Offset).field0_0x0._s_0.X = (this->DragDropVisualOffset).field0_0x0._s_0.X;
  (pUVar7->Offset).field0_0x0._s_0.Y = dVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  (pUVar7->Payload).field0_0x0.DebugPtr = param_1;
  pUVar2 = (this->DragVisualWidget).field0_0x0.DebugPtr;
  if (pUVar2 != (UWidget *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (pUVar7->DefaultDragVisual).field0_0x0 = (this->DragVisualWidget).field0_0x0;
    return pUVar7;
  }
  pUVar8 = (this->DragDropVisualEntryClass).Class.field0_0x0.DebugPtr;
  if ((pUVar8 != (UClass *)0x0) &&
     (pUVar6 = Z_Construct_UClass_UUserWidget_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar8->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pUVar8 = (this->DragDropVisualEntryClass).Class.field0_0x0.DebugPtr;
      goto LAB_1469bd477;
    }
  }
  pUVar8 = (UClass *)0x0;
LAB_1469bd477:
  lVar11 = 0x228;
  if (pUVar8 == (UClass *)0x0) {
    lVar11 = 0x1f0;
  }
  pUVar3 = *(UObject **)((longlong)&this->_padding_ + lVar11);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res18 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  pUVar9 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  pUVar10 = CreateWidget<UUserWidget,UWorld_*>
                      (pUVar9,(TSubclassOf<UUserWidget>)&local_res18,local_res8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UUserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (pUVar7->DefaultDragVisual).field0_0x0.DebugPtr = (UWidget *)pUVar10;
  return pUVar7;
}

// EndInertialScrolling @ 1469bf2e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListViewBase::EndInertialScrolling(UListViewBase *this)

{
  STableViewBase *this_00;
  
  this_00 = (this->MyTableViewBase).Object;
  if (this_00 != (STableViewBase *)0x0) {
    STableViewBase::EndInertialScrolling(this_00,false);
    return;
  }
  return;
}

// FinishGeneratingEntry @ 1469c9250

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListViewBase::FinishGeneratingEntry(UListViewBase *this,UUserWidget *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  FTSTicker *this_00;
  undefined8 *puVar5;
  ulong64 uVar6;
  TWeakPtr<FTSTicker::FElement,1> *pTVar7;
  FWeakObjectPtr local_res18;
  UUserWidget *local_res20;
  TWeakPtr<FTSTicker::FElement,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UUserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  TArray<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>_>
            (&this->GeneratedEntriesToAnnounce,
             (TWeakObjectPtr<UUserWidget,FWeakObjectPtr> *)&local_res18);
  if ((((this->EntryGenAnnouncementDelegateHandle).Object == (FElement *)0x0) ||
      (pTVar3 = (this->EntryGenAnnouncementDelegateHandle).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    lVar4 = (**(code **)(this->_padding_ + 0x180))(this);
    if (lVar4 != 0) {
      this_00 = FTSTicker::GetCoreTicker();
      local_68 = (undefined1  [8])0x0;
      local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_60.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_50);
      local_38 = &local_60;
      puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &
                  ___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[2] = uVar6;
        *puVar5 = &TWeakBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UListViewBase::FinishGeneratingEntry'::`11'::<lambda_1>_>
                   ::_vftable_;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar5[3] = 0;
        local_res18 = (FWeakObjectPtr)this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res18);
        puVar5[4] = this;
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      pTVar7 = FTSTicker::AddTicker
                         (this_00,&local_78,
                          (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_68,0.0)
      ;
      TWeakPtr<FTSTicker::FElement,1>::operator=(&this->EntryGenAnnouncementDelegateHandle,pTVar7);
      if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_78.WeakReferenceCount.ReferenceController,1);
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_50);
      if ((local_60.DelegateSize != 0) &&
         (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_60,0,0,0x10);
        local_60.DelegateSize = 0;
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_60.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
  }
  return;
}

// GetDisplayedEntryWidgets @ 1469cfeb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UUserWidget_*,TSizedDefaultAllocator<32>_> * __thiscall
UListViewBase::GetDisplayedEntryWidgets(UListViewBase *this)

{
  return (TArray<UUserWidget_*,TSizedDefaultAllocator<32>_> *)&this->EntryWidgetPool;
}

// GetListObjectFromEntry @ 1469d1c00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall UListViewBase::GetListObjectFromEntry(UListViewBase *this,UUserWidget *param_1)

{
  return (UObject *)0x0;
}

// GetPrivateStaticClass @ 1469d46f0

UClass * __cdecl UListViewBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UListViewBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ListViewBase",
               &Z_Registration_Info_UClass_UListViewBase.InnerSingleton,
               StaticRegisterNativesUListViewBase,0x348,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UListViewBase>,
               InternalVTableHelperCtorCaller<UListViewBase>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UListViewBase.InnerSingleton;
}

// GetScrollOffset @ 1469d70c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UListViewBase::GetScrollOffset(UListViewBase *this)

{
  STableViewBase *pSVar1;
  
  pSVar1 = (this->MyTableViewBase).Object;
  if (pSVar1 == (STableViewBase *)0x0) {
    return 0.0;
  }
  return (float)pSVar1->DesiredScrollOffset;
}

// HandleAnnounceGeneratedEntries @ 1469da910

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListViewBase::HandleAnnounceGeneratedEntries(UListViewBase *this)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  int *piVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  UObject *pUVar13;
  ulonglong uVar14;
  uint uVar15;
  FWeakObjectPtr *pFVar16;
  longlong lVar17;
  FWeakObjectPtr *pFVar18;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18 [2];
  FWeakObjectPtr local_res20;
  UObject *local_88;
  FWeakObjectPtr *local_80;
  undefined8 local_78 [2];
  FDestructionSentinel local_68;
  
  if (&this->EntryGenAnnouncementDelegateHandle != (TWeakPtr<FTSTicker::FElement,1> *)local_78) {
    pTVar5 = (this->EntryGenAnnouncementDelegateHandle).WeakReferenceCount.ReferenceController;
    (this->EntryGenAnnouncementDelegateHandle).Object = (FElement *)0x0;
    (this->EntryGenAnnouncementDelegateHandle).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  local_res10 = (this->GeneratedEntriesToAnnounce).ArrayNum;
  uVar14 = (ulonglong)(int)local_res10;
  pFVar18 = (FWeakObjectPtr *)(this->GeneratedEntriesToAnnounce).AllocatorInstance.Data;
  pFVar16 = pFVar18 + uVar14;
  local_80 = pFVar16;
  do {
    if ((this->GeneratedEntriesToAnnounce).ArrayNum != (int)uVar14) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UUserWidget,FWeakObjectPtr>,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar18 == pFVar16) {
      piVar3 = &(this->GeneratedEntriesToAnnounce).ArrayMax;
      (this->GeneratedEntriesToAnnounce).ArrayNum = 0;
      if (*piVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&(this->GeneratedEntriesToAnnounce).AllocatorInstance,0,piVar3);
      }
      (**(code **)(this->_padding_ + 0x370))(this);
      local_res18[0] = (this->EntryWidgetPool).ActiveWidgets.ArrayNum;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &this->BP_OnEntriesGenerated,local_res18);
      return;
    }
    local_res20 = *pFVar18;
    bVar9 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar9) {
      FWeakObjectPtr::Get(&local_res20);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnListEntryGeneratedEvent,(FWriteAccessScope *)&local_68);
      puVar2 = &(this->OnListEntryGeneratedEvent).field_0x1c;
      *(int *)puVar2 = *(int *)puVar2 + 1;
      bVar9 = false;
      uVar15 = *(int *)&(this->OnListEntryGeneratedEvent).field_0x10 - 1;
      if (-1 < (int)uVar15) {
        lVar17 = (longlong)(int)uVar15 << 4;
        do {
          uVar12 = 0;
          if ((int)uVar15 < *(int *)&(this->OnListEntryGeneratedEvent).field_0x10) {
            uVar12 = ~uVar15 >> 0x1f;
          }
          if (uVar12 == 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          lVar6 = *(longlong *)&(this->OnListEntryGeneratedEvent).field_0x8;
          if ((*(int *)(lVar17 + 8 + lVar6) == 0) ||
             (plVar7 = *(longlong **)(lVar17 + lVar6), plVar7 == (longlong *)0x0)) {
LAB_1469daa77:
            bVar9 = true;
          }
          else {
            cVar11 = (**(code **)(*plVar7 + 0x68))();
            if (cVar11 == '\0') goto LAB_1469daa77;
          }
          lVar17 = lVar17 + -0x10;
          uVar15 = uVar15 - 1;
        } while (-1 < (int)uVar15);
      }
      puVar2 = &(this->OnListEntryGeneratedEvent).field_0x1c;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      if (bVar9) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this->OnListEntryGeneratedEvent,false);
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
      pcVar8 = *(code **)(this->_padding_ + 0x368);
      pUVar13 = FWeakObjectPtr::Get(&local_res20);
      (*pcVar8)(this,pUVar13);
      local_88 = FWeakObjectPtr::Get(&local_res20);
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->BP_OnEntryGenerated,
                 &local_88);
      pFVar16 = local_80;
    }
    uVar14 = (ulonglong)local_res10;
    pFVar18 = pFVar18 + 1;
  } while( true );
}

// HandleListEntryAcceptDrop @ 1469dc4f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UListViewBase::HandleListEntryAcceptDrop
          (UListViewBase *this,FReply *__return_storage_ptr__,FDragDropEvent *param_1,
          EItemDropZone param_2,UUserWidget *param_3)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// HandleListEntryCanAcceptDrop @ 1469dc5d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<EItemDropZone> __thiscall
UListViewBase::HandleListEntryCanAcceptDrop
          (UListViewBase *this,FDragDropEvent *param_1,EItemDropZone param_2,UUserWidget *param_3)

{
  *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 0;
  return (TOptional<EItemDropZone>)param_1;
}

// HandleListEntryDragCancelled @ 1469dc7d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UListViewBase::HandleListEntryDragCancelled(UListViewBase *this,FDragDropEvent *param_1)

{
  return;
}

// HandleListEntryDragDetected @ 1469dc8f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDragDropOperation * __thiscall
UListViewBase::HandleListEntryDragDetected
          (UListViewBase *this,FGeometry *param_1,FPointerEvent *param_2,UUserWidget *param_3)

{
  return (UDragDropOperation *)0x0;
}

// HandleListEntryDragEnter @ 1469dca20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UListViewBase::HandleListEntryDragEnter
          (UListViewBase *this,FDragDropEvent *param_1,UUserWidget *param_2)

{
  return;
}

// HandleListEntryDragLeave @ 1469dcb50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UListViewBase::HandleListEntryDragLeave
          (UListViewBase *this,FDragDropEvent *param_1,UUserWidget *param_2)

{
  return;
}

// HandleListEntryHovered @ 1469dcbe0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListViewBase::HandleListEntryHovered(UListViewBase *this,UUserWidget *param_1)

{
  return;
}

// HandleListEntryUnhovered @ 1469dcc70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListViewBase::HandleListEntryUnhovered(UListViewBase *this,UUserWidget *param_1)

{
  return;
}

// HandleRowReleased @ 1469dd970

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UListViewBase::HandleRowReleased(UListViewBase *this,TSharedRef<ITableRow,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  ITableRow *pIVar3;
  FWeakObjectPtr *pFVar4;
  FScriptContainerElement *this_00;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  UUserWidget *pUVar9;
  int iVar10;
  int iVar11;
  UUserWidget *local_res10;
  UUserWidget *local_res18;
  UUserWidget *local_res20;
  FWeakObjectPtr local_48 [2];
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar3 = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pUVar9 = (UUserWidget *)(**(code **)((longlong)*pIVar3 + 0x88))();
  local_res18 = pUVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (pUVar9 == (UUserWidget *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6932706540122013412>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ListViewBase.cpp"
                       ,0x11c,"EntryWidget");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    FUserWidgetPool::Release(&this->EntryWidgetPool,pUVar9,false);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    iVar11 = 0;
    local_48[0].ObjectIndex = 0;
    local_48[0].ObjectSerialNumber = 0;
    local_res10 = pUVar9;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    FWeakObjectPtr::operator=(local_48,(FObjectPtr)&local_res10);
    pFVar4 = (FWeakObjectPtr *)(this->GeneratedEntriesToAnnounce).AllocatorInstance.Data;
    if (((pFVar4 <= local_48) && (local_48 < pFVar4 + (this->GeneratedEntriesToAnnounce).ArrayMax))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar1 = (this->GeneratedEntriesToAnnounce).ArrayNum;
    if (iVar1 != 0) {
      this_00 = (this->GeneratedEntriesToAnnounce).AllocatorInstance.Data;
      bVar7 = TWeakObjectPtr<UUserWidget,FWeakObjectPtr>::UEOpEquals<UUserWidget,bool>
                        ((TWeakObjectPtr<UUserWidget,FWeakObjectPtr> *)this_00,
                         (TWeakObjectPtr<UUserWidget,FWeakObjectPtr> *)local_48);
      bVar7 = !bVar7;
      iVar10 = iVar11;
      do {
        iVar6 = iVar10;
        do {
          iVar6 = iVar6 + 1;
          if (iVar1 <= iVar6) break;
          bVar8 = TWeakObjectPtr<UUserWidget,FWeakObjectPtr>::UEOpEquals<UUserWidget,bool>
                            ((TWeakObjectPtr<UUserWidget,FWeakObjectPtr> *)
                             (this_00 + (longlong)iVar6 * 8),
                             (TWeakObjectPtr<UUserWidget,FWeakObjectPtr> *)local_48);
        } while (bVar7 == !bVar8);
        if (bVar7 != false) {
          if (iVar11 != iVar10) {
            memmove(this_00 + (longlong)iVar11 * 8,this_00 + (longlong)iVar10 * 8,
                    (longlong)(iVar6 - iVar10) << 3);
          }
          iVar11 = iVar11 + (iVar6 - iVar10);
        }
        bVar7 = (bool)(bVar7 ^ 1);
        iVar10 = iVar6;
      } while (iVar6 < iVar1);
      (this->GeneratedEntriesToAnnounce).ArrayNum = iVar11;
      pUVar9 = local_res18;
    }
    TMulticastDelegate<void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy> *)
               &this->OnEntryWidgetReleasedEvent,pUVar9);
    (**(code **)(this->_padding_ + 0x378))(this,pUVar9);
    local_res20 = pUVar9;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->BP_OnEntryReleased,
               &local_res20);
  }
  return;
}

// NativeOnEntriesGenerated @ 1469e4600

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListViewBase::NativeOnEntriesGenerated(UListViewBase *this)

{
  return;
}

// NativeOnEntryGenerated @ 1469e4610

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListViewBase::NativeOnEntryGenerated(UListViewBase *this,UUserWidget *param_1)

{
  return;
}

// NativeOnEntryReleased @ 1469e4620

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListViewBase::NativeOnEntryReleased(UListViewBase *this,UUserWidget *param_1)

{
  return;
}

// RebuildListWidget @ 1469f8cf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<STableViewBase,1> * __thiscall
UListViewBase::RebuildListWidget
          (UListViewBase *this,TSharedRef<STableViewBase,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FArguments *pFVar2;
  TSharedRef<SListView<TSharedPtr<FString,1>_>,1> *pTVar3;
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  FMemScope local_518;
  TSharedRef<SListView<TSharedPtr<FString,1>_>,1> local_510;
  TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs> local_500;
  FArguments local_4e8;
  
  `UListViewBase::RebuildListWidget'::__l2::<lambda_1>::operator()(local_res10);
  pFVar2 = SListView<TSharedPtr<FString,1>_>::FArguments::FArguments(&local_4e8);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_518,&local_res20,true);
  TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_500,"SListView<TSharedPtr<FString>>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ListViewBase.cpp"
             ,0x10c,local_res10);
  FMemScope::~FMemScope(&local_518);
  FLLMScope::~FLLMScope(local_res18);
  pTVar3 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_500,&local_510,pFVar2);
  __return_storage_ptr__->Object = (STableViewBase *)pTVar3->Object;
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_510.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_500._Widget.SharedReferenceCount.ReferenceController);
  SListView<TSharedPtr<FString,1>_>::FArguments::~FArguments(&local_4e8);
  return __return_storage_ptr__;
}

// RebuildWidget @ 146a004e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UListViewBase::RebuildWidget(UListViewBase *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedPtr<STableViewBase,1> *pTVar1;
  int iVar2;
  UClass *pUVar3;
  TReferenceControllerBase<1> *pTVar4;
  STableViewBase *pSVar5;
  code *pcVar6;
  TConsoleVariableData<float> *pTVar7;
  bool bVar8;
  UClass *pUVar9;
  FText *pFVar10;
  FArguments *pFVar11;
  TSharedRef<STextBlock,1> *pTVar12;
  undefined8 *puVar13;
  TSharedRef<SWidget,1> *pTVar14;
  longlong lVar15;
  T0RequiredArgs local_res8 [16];
  FLLMScope local_res18 [2];
  undefined1 local_res20 [8];
  FText local_668;
  FText local_658;
  bool local_648;
  undefined1 local_640 [8];
  ForAnyElementType FStack_638;
  ulonglong local_630;
  STableViewBase *local_628;
  FSharedReferencer<1> local_620;
  FName local_618;
  FMemScope local_610;
  TOptional<double> local_608;
  FDestructionSentinel local_5f8;
  FText local_5e0;
  TSharedRef<STextBlock,1> local_5d0;
  undefined1 local_5c0 [8];
  TReferenceControllerBase<1> *local_5b8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5b0;
  FArguments local_598;
  
  FText::FText(&local_668);
  pUVar3 = (this->EntryWidgetClass).Class.field0_0x0.DebugPtr;
  if ((pUVar3 != (UClass *)0x0) &&
     (pUVar9 = Z_Construct_UClass_UUserWidget_NoRegister(), pUVar9 != (UClass *)0x0)) {
    iVar2 = (int)pUVar9->_padding_;
    if (((int)pUVar3->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar2 * 8) != &pUVar9->_padding_)
       ) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if ((bVar8) && ((this->EntryWidgetClass).Class.field0_0x0.DebugPtr != (UClass *)0x0))
    goto LAB_146a00582;
  }
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_5e0,L"UMG",L"Error_MissingEntryWidgetClass",
                       L"No EntryWidgetClass specified on this list.\nEven if doing custom stuff, this is always required as a fallback."
                      );
  FText::operator=(&local_668,pFVar10);
  if (local_5e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_5e0.TextData.Reference + 0x10))();
  }
LAB_146a00582:
  bVar8 = FText::IsEmpty(&local_668);
  if (bVar8) {
    puVar13 = (undefined8 *)(**(code **)(this->_padding_ + 0x318))(this,local_5c0);
    local_620.ReferenceController = (TReferenceControllerBase<1> *)puVar13[1];
    local_628 = (STableViewBase *)*puVar13;
    if (local_620.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_620.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_620.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar1 = &this->MyTableViewBase;
    lVar15 = 0;
    if (pTVar1 != (TSharedPtr<STableViewBase,1> *)&local_628) {
      pTVar1->Object = local_628;
      local_628 = (STableViewBase *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MyTableViewBase).SharedReferenceCount,&local_620);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_620.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5b8);
    if ((pTVar1->Object == (STableViewBase *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar14;
    }
    STableViewBase::SetIsScrollAnimationEnabled(pTVar1->Object,this->bEnableScrollAnimation);
    if ((pTVar1->Object == (STableViewBase *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar14;
    }
    STableViewBase::SetScrollingAnimationInterpolationSpeed
              (pTVar1->Object,this->ScrollingAnimationInterpolationSpeed);
    if ((pTVar1->Object == (STableViewBase *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar14;
    }
    STableViewBase::SetEnableTouchAnimatedScrolling
              (pTVar1->Object,this->bInEnableTouchAnimatedScrolling);
    if ((pTVar1->Object == (STableViewBase *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar14;
    }
    STableViewBase::SetIsRightClickScrollingEnabled(pTVar1->Object,this->bEnableRightClickScrolling)
    ;
    if ((pTVar1->Object == (STableViewBase *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar14;
    }
    STableViewBase::SetIsTouchScrollingEnabled(pTVar1->Object,this->bEnableTouchScrolling);
    if ((pTVar1->Object == (STableViewBase *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar14;
    }
    STableViewBase::SetIsPointerScrollingEnabled(pTVar1->Object,this->bIsPointerScrollingEnabled);
    if ((pTVar1->Object == (STableViewBase *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar14;
    }
    local_608.bIsSet = this->bEnableFixedLineOffset != false;
    if (local_608.bIsSet) {
      local_608.TypedValue = (double)this->FixedLineScrollOffset;
    }
    STableViewBase::SetFixedLineScrollOffset(pTVar1->Object,&local_608);
    if ((pTVar1->Object == (STableViewBase *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar14;
    }
    pTVar7 = GlobalScrollAmount.Ref;
    pSVar5 = pTVar1->Object;
    bVar8 = IsInParallelGameThread();
    if ((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) {
      lVar15 = 4;
    }
    STableViewBase::SetWheelScrollMultiplier
              (pSVar5,*(float *)((longlong)pTVar7->ShadowedValue + lVar15) *
                      this->WheelScrollMultiplier);
    if ((pTVar1->Object == (STableViewBase *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar14;
    }
    pSVar5 = pTVar1->Object;
    pTVar4 = (this->MyTableViewBase).SharedReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pSVar5 == (STableViewBase *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar14;
    }
    __return_storage_ptr__->Object = (SWidget *)pSVar5;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    pFVar11 = STextBlock::FArguments::FArguments(&local_598);
    local_658.TextData.Reference = local_668.TextData.Reference;
    if (local_668.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_668.TextData.Reference + 8))
                (local_668.TextData.Reference,local_res20);
    }
    local_658.Flags = local_668.Flags;
    local_648 = true;
    local_630 = 0;
    local_640 = (undefined1  [8])0x0;
    FStack_638.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar11->_Text).Value,&local_658);
    (pFVar11->_Text).bIsSet = local_648;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_640);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_640,
               (FWriteAccessScope *)&local_5f8);
    if (((int)local_630 != 0) && (FStack_638.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_638.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_638,0,0,0x10);
      local_630 = local_630 & 0xffffffff00000000;
    }
    if (local_5f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5f8.Accessor,&local_5f8);
    }
    if (FStack_638.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_638.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_640);
    if (local_658.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_658.TextData.Reference + 0x10))();
    }
    FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_618 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_610,&local_618,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_5b0,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ListViewBase.cpp"
               ,0xcf,local_res8);
    FMemScope::~FMemScope(&local_610);
    FLLMScope::~FLLMScope(local_res18);
    pTVar12 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_5b0,&local_5d0,pFVar11);
    __return_storage_ptr__->Object = (SWidget *)pTVar12->Object;
    pTVar4 = (pTVar12->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5d0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5b0._Widget.SharedReferenceCount.ReferenceController);
    STextBlock::FArguments::~FArguments(&local_598);
  }
  if (local_668.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_668.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// RegenerateAllEntries @ 146a09230

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListViewBase::RegenerateAllEntries(UListViewBase *this)

{
  STableViewBase *pSVar1;
  bool bVar2;
  FSlateApplication *pFVar3;
  
  FUserWidgetPool::ReleaseAll(&this->EntryWidgetPool,false);
  (this->GeneratedEntriesToAnnounce).ArrayNum = 0;
  if ((this->GeneratedEntriesToAnnounce).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->GeneratedEntriesToAnnounce).AllocatorInstance,0,
               &(this->GeneratedEntriesToAnnounce).ArrayMax);
  }
  pSVar1 = (this->MyTableViewBase).Object;
  if (pSVar1 != (STableViewBase *)0x0) {
    (**(code **)(*(longlong *)pSVar1 + 0x250))();
  }
  if (this->bIsDragging != false) {
    this->bIsDragging = false;
    pFVar3 = FSlateApplication::Get();
    bVar2 = FSlateApplication::IsDragDropping(pFVar3);
    if (bVar2) {
      pFVar3 = FSlateApplication::Get();
      FSlateApplication::CancelDragDrop(pFVar3);
      return;
    }
  }
  return;
}

// ReleaseSlateResources @ 146a0a8d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListViewBase::ReleaseSlateResources(UListViewBase *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyTableViewBase != (TSharedPtr<STableViewBase,1> *)&local_18) {
    (this->MyTableViewBase).Object = (STableViewBase *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyTableViewBase).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  FUserWidgetPool::ResetPool(&this->EntryWidgetPool);
  (this->GeneratedEntriesToAnnounce).ArrayNum = 0;
  if ((this->GeneratedEntriesToAnnounce).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->GeneratedEntriesToAnnounce).AllocatorInstance,0,
               &(this->GeneratedEntriesToAnnounce).ArrayMax);
  }
  return;
}

// RequestRefresh @ 146a0d910

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListViewBase::RequestRefresh(UListViewBase *this)

{
  STableViewBase *pSVar1;
  bool bVar2;
  FSlateApplication *pFVar3;
  
  pSVar1 = (this->MyTableViewBase).Object;
  if (pSVar1 != (STableViewBase *)0x0) {
    (**(code **)(*(longlong *)pSVar1 + 0x248))();
  }
  if (this->bIsDragging != false) {
    this->bIsDragging = false;
    pFVar3 = FSlateApplication::Get();
    bVar2 = FSlateApplication::IsDragDropping(pFVar3);
    if (bVar2) {
      pFVar3 = FSlateApplication::Get();
      FSlateApplication::CancelDragDrop(pFVar3);
      return;
    }
  }
  return;
}

// ScrollToBottom @ 146a10150

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListViewBase::ScrollToBottom(UListViewBase *this)

{
  STableViewBase *this_00;
  int iVar1;
  
  this_00 = (this->MyTableViewBase).Object;
  if (this_00 == (STableViewBase *)0x0) {
    return;
  }
  FInertialScrollManager::ClearScrollVelocity(&this_00->InertialScrollManager,false);
  this_00->bIsInertialScroll = false;
  iVar1 = (**(code **)(*(longlong *)this_00 + 0x2a0))(this_00);
  STableViewBase::SetScrollOffset(this_00,(float)iVar1);
  STableViewBase::RequestLayoutRefresh(this_00);
  return;
}

// ScrollToTop @ 146a101b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListViewBase::ScrollToTop(UListViewBase *this)

{
  STableViewBase *this_00;
  
  this_00 = (this->MyTableViewBase).Object;
  if (this_00 == (STableViewBase *)0x0) {
    return;
  }
  FInertialScrollManager::ClearScrollVelocity(&this_00->InertialScrollManager,false);
  this_00->bIsInertialScroll = false;
  STableViewBase::SetScrollOffset(this_00,0.0);
  STableViewBase::RequestLayoutRefresh(this_00);
  return;
}

// SetAllowOverScroll @ 146a10d20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListViewBase::SetAllowOverScroll(UListViewBase *this,bool param_1)

{
  STableViewBase *this_00;
  
  this_00 = (this->MyTableViewBase).Object;
  if (this_00 != (STableViewBase *)0x0) {
    this->AllowOverscroll = param_1;
    STableViewBase::SetAllowOverscroll(this_00,!param_1);
    return;
  }
  return;
}

// SetIsGamepadScrollingEnabled @ 146a15e20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListViewBase::SetIsGamepadScrollingEnabled(UListViewBase *this,bool param_1)

{
  STableViewBase *pSVar1;
  
  this->bIsGamepadScrollingEnabled = param_1;
  pSVar1 = (this->MyTableViewBase).Object;
  if (pSVar1 == (STableViewBase *)0x0) {
    return;
  }
  pSVar1->bIsGamepadScrollingEnabled = param_1;
  return;
}

// SetIsPointerScrollingEnabled @ 146a15f50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListViewBase::SetIsPointerScrollingEnabled(UListViewBase *this,bool param_1)

{
  STableViewBase *pSVar1;
  
  this->bIsPointerScrollingEnabled = param_1;
  pSVar1 = (this->MyTableViewBase).Object;
  if (pSVar1 == (STableViewBase *)0x0) {
    return;
  }
  pSVar1->bIsPointerScrollingEnabled = param_1;
  return;
}

// SetScrollOffset @ 146a19ed0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListViewBase::SetScrollOffset(UListViewBase *this,float param_1)

{
  longlong *plVar1;
  STableViewBase *this_00;
  double dVar2;
  FReadAccessScope aFStack_38 [2];
  
  this_00 = (this->MyTableViewBase).Object;
  if (this_00 == (STableViewBase *)0x0) {
    return;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  dVar2 = (double)param_1;
  if (dVar2 != this_00->DesiredScrollOffset) {
    this_00->DesiredScrollOffset = dVar2;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this_00->OnTableViewScrolled,aFStack_38);
    if ((*(int *)&(this_00->OnTableViewScrolled).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this_00->OnTableViewScrolled).field_0x8, plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x68))(plVar1,SUB84(dVar2,0));
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (aFStack_38);
    STableViewBase::RequestLayoutRefresh(this_00);
  }
  return;
}

// SetScrollbarVisibility @ 146a19fb0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListViewBase::SetScrollbarVisibility(UListViewBase *this,ESlateVisibility param_1)

{
  STableViewBase *this_00;
  EVisibility EVar1;
  undefined7 extraout_var;
  
  this_00 = (this->MyTableViewBase).Object;
  if (this_00 != (STableViewBase *)0x0) {
    EVar1 = UWidget::ConvertSerializedVisibilityToRuntime(8);
    STableViewBase::SetScrollbarVisibility
              (this_00,(EVisibility)
                       ((TEnumAsByte<EVisibility::Private> *)
                       CONCAT71(extraout_var,EVar1.Value.Value))->Value);
  }
  return;
}

// SetWheelScrollMultiplier @ 146a1dbb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListViewBase::SetWheelScrollMultiplier(UListViewBase *this,float param_1)

{
  STableViewBase *this_00;
  TConsoleVariableData<float> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  this_00 = (this->MyTableViewBase).Object;
  this->WheelScrollMultiplier = param_1;
  pTVar1 = GlobalScrollAmount.Ref;
  if (this_00 != (STableViewBase *)0x0) {
    bVar2 = IsInParallelGameThread();
    if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
      lVar3 = 0;
    }
    else {
      lVar3 = 4;
    }
    STableViewBase::SetWheelScrollMultiplier
              (this_00,param_1 * *(float *)((longlong)pTVar1->ShadowedValue + lVar3));
    return;
  }
  return;
}

// StaticRegisterNativesUListViewBase @ 146a1ea60

void __cdecl UListViewBase::StaticRegisterNativesUListViewBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x10;
  local_18.DataPtr = Z_Construct_UClass_UListViewBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a22620

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListViewBase::SynchronizeProperties(UListViewBase *this)

{
  STableViewBase *pSVar1;
  code *pcVar2;
  TConsoleVariableData<float> *pTVar3;
  bool bVar4;
  longlong lVar5;
  TOptional<double> local_18;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  pSVar1 = (this->MyTableViewBase).Object;
  if (pSVar1 == (STableViewBase *)0x0) {
    return;
  }
  STableViewBase::SetIsScrollAnimationEnabled(pSVar1,this->bEnableScrollAnimation);
  if (((this->MyTableViewBase).Object == (STableViewBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  STableViewBase::SetScrollingAnimationInterpolationSpeed
            ((this->MyTableViewBase).Object,this->ScrollingAnimationInterpolationSpeed);
  if (((this->MyTableViewBase).Object == (STableViewBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  STableViewBase::SetEnableTouchAnimatedScrolling
            ((this->MyTableViewBase).Object,this->bInEnableTouchAnimatedScrolling);
  if (((this->MyTableViewBase).Object == (STableViewBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  STableViewBase::SetIsRightClickScrollingEnabled
            ((this->MyTableViewBase).Object,this->bEnableRightClickScrolling);
  if (((this->MyTableViewBase).Object == (STableViewBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  STableViewBase::SetIsTouchScrollingEnabled
            ((this->MyTableViewBase).Object,this->bEnableTouchScrolling);
  if (((this->MyTableViewBase).Object == (STableViewBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  STableViewBase::SetIsPointerScrollingEnabled
            ((this->MyTableViewBase).Object,this->bIsPointerScrollingEnabled);
  if (((this->MyTableViewBase).Object == (STableViewBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  STableViewBase::SetAllowOverscroll((this->MyTableViewBase).Object,this->AllowOverscroll == false);
  if (((this->MyTableViewBase).Object == (STableViewBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_18.bIsSet = this->bEnableFixedLineOffset != false;
  if (local_18.bIsSet) {
    local_18.TypedValue = (double)this->FixedLineScrollOffset;
  }
  STableViewBase::SetFixedLineScrollOffset((this->MyTableViewBase).Object,&local_18);
  if (((this->MyTableViewBase).Object == (STableViewBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar3 = GlobalScrollAmount.Ref;
  pSVar1 = (this->MyTableViewBase).Object;
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 4;
  }
  STableViewBase::SetWheelScrollMultiplier
            (pSVar1,*(float *)((longlong)pTVar3->ShadowedValue + lVar5) *
                    this->WheelScrollMultiplier);
  if (((this->MyTableViewBase).Object == (STableViewBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  STableViewBase::SetSelectItemOnNavigation
            ((this->MyTableViewBase).Object,this->bSelectItemOnNavigation);
  return;
}

// execCancelListViewDragDrop @ 146a32d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UListViewBase::execCancelListViewDragDrop(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  FSlateApplication *pFVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[0xe].field_0x10 != '\0') {
    param_1[0xe].field_0x10 = 0;
    pFVar2 = FSlateApplication::Get();
    bVar1 = FSlateApplication::IsDragDropping(pFVar2);
    if (bVar1) {
      pFVar2 = FSlateApplication::Get();
      FSlateApplication::CancelDragDrop(pFVar2);
      return;
    }
  }
  return;
}

// execCreateDragDropOperation @ 146a33c00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UListViewBase::execCreateDragDropOperation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDragDropOperation *pUVar2;
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = CreateDragDropOperation((UListViewBase *)param_1,local_res10);
  *(UDragDropOperation **)param_3 = pUVar2;
  return;
}

// execEndInertialScrolling @ 146a33ca0

void __cdecl UListViewBase::execEndInertialScrolling(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(STableViewBase **)&param_1[0x14].field_0x18 != (STableViewBase *)0x0) {
    STableViewBase::EndInertialScrolling(*(STableViewBase **)&param_1[0x14].field_0x18,false);
    return;
  }
  return;
}

// execGetDisplayedEntryWidgets @ 146a34dd0

void __cdecl
UListViewBase::execGetDisplayedEntryWidgets(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<UUserWidget_*,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<UUserWidget_*,TSizedDefaultAllocator<32>_> *)&param_1[0xf].field_0x8);
  return;
}

// execGetIsDraggingListItem @ 146a35590

void __cdecl
UListViewBase::execGetIsDraggingListItem(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0xe].field_0x10;
  return;
}

// execGetScrollOffset @ 146a35f50

void __cdecl UListViewBase::execGetScrollOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(STableViewBase **)&param_1[0x14].field_0x18 != (STableViewBase *)0x0) {
    fVar1 = STableViewBase::GetScrollOffset(*(STableViewBase **)&param_1[0x14].field_0x18);
    *(float *)param_3 = fVar1;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execRegenerateAllEntries @ 146a38250

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UListViewBase::execRegenerateAllEntries(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  FSlateApplication *pFVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FUserWidgetPool::ReleaseAll((FUserWidgetPool *)&param_1[0xf].field_0x8,false);
  *(undefined4 *)&param_1[0xc].field_0x8 = 0;
  if (*(int *)&param_1[0xc].field_0xc < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)(param_1 + 0xc),0,(int *)&param_1[0xc].field_0xc);
  }
  if (*(longlong **)&param_1[0x14].field_0x18 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&param_1[0x14].field_0x18 + 0x250))();
  }
  if (param_1[0xe].field_0x10 != '\0') {
    param_1[0xe].field_0x10 = 0;
    pFVar2 = FSlateApplication::Get();
    bVar1 = FSlateApplication::IsDragDropping(pFVar2);
    if (bVar1) {
      pFVar2 = FSlateApplication::Get();
      FSlateApplication::CancelDragDrop(pFVar2);
      return;
    }
  }
  return;
}

// execRequestRefresh @ 146a39290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UListViewBase::execRequestRefresh(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  FSlateApplication *pFVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong **)&param_1[0x14].field_0x18 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&param_1[0x14].field_0x18 + 0x248))();
  }
  if (param_1[0xe].field_0x10 != '\0') {
    param_1[0xe].field_0x10 = 0;
    pFVar2 = FSlateApplication::Get();
    bVar1 = FSlateApplication::IsDragDropping(pFVar2);
    if (bVar1) {
      pFVar2 = FSlateApplication::Get();
      FSlateApplication::CancelDragDrop(pFVar2);
      return;
    }
  }
  return;
}

// execScrollToBottom @ 146a39690

void __cdecl UListViewBase::execScrollToBottom(UObject *param_1,FFrame *param_2,void *param_3)

{
  STableViewBase *this;
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(STableViewBase **)&param_1[0x14].field_0x18;
  if (this == (STableViewBase *)0x0) {
    return;
  }
  FInertialScrollManager::ClearScrollVelocity(&this->InertialScrollManager,false);
  this->bIsInertialScroll = false;
  iVar1 = (**(code **)(*(longlong *)this + 0x2a0))(this);
  STableViewBase::SetScrollOffset(this,(float)iVar1);
  STableViewBase::RequestLayoutRefresh(this);
  return;
}

// execScrollToTop @ 146a39720

void __cdecl UListViewBase::execScrollToTop(UObject *param_1,FFrame *param_2,void *param_3)

{
  STableViewBase *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(STableViewBase **)&param_1[0x14].field_0x18;
  if (this == (STableViewBase *)0x0) {
    return;
  }
  FInertialScrollManager::ClearScrollVelocity(&this->InertialScrollManager,false);
  this->bIsInertialScroll = false;
  STableViewBase::SetScrollOffset(this,0.0);
  STableViewBase::RequestLayoutRefresh(this);
  return;
}

// execSetAllowOverScroll @ 146a39b30

void __cdecl UListViewBase::execSetAllowOverScroll(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  STableViewBase *this;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(STableViewBase **)&param_1[0x14].field_0x18;
  if (this != (STableViewBase *)0x0) {
    param_1[0xc].field_0x25 = local_res8[0] != 0;
    STableViewBase::SetAllowOverscroll(this,local_res8[0] == 0);
  }
  return;
}

// execSetIsGamepadScrollingEnabled @ 146a3e090

void __cdecl
UListViewBase::execSetIsGamepadScrollingEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  STableViewBase *this;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(STableViewBase **)&param_1[0x14].field_0x18;
  param_1[0xd].field_0x1 = local_res8[0] != 0;
  if (this != (STableViewBase *)0x0) {
    STableViewBase::SetIsGamepadScrollingEnabled(this,local_res8[0] != 0);
  }
  return;
}

// execSetIsPointerScrollingEnabled @ 146a3e390

void __cdecl
UListViewBase::execSetIsPointerScrollingEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  STableViewBase *this;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(STableViewBase **)&param_1[0x14].field_0x18;
  *(bool *)(param_1 + 0xd) = local_res8[0] != 0;
  if (this != (STableViewBase *)0x0) {
    STableViewBase::SetIsPointerScrollingEnabled(this,local_res8[0] != 0);
  }
  return;
}

// execSetScrollOffset @ 146a41b60

void __cdecl UListViewBase::execSetScrollOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(STableViewBase **)&param_1[0x14].field_0x18 != (STableViewBase *)0x0) {
    STableViewBase::SetScrollOffset(*(STableViewBase **)&param_1[0x14].field_0x18,local_res8[0]);
  }
  return;
}

// execSetScrollbarVisibility @ 146a41eb0

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UListViewBase::execSetScrollbarVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  STableViewBase *this;
  EVisibility EVar2;
  undefined7 extraout_var;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(STableViewBase **)&param_1[0x14].field_0x18;
  if (this != (STableViewBase *)0x0) {
    EVar2 = UWidget::ConvertSerializedVisibilityToRuntime((ESlateVisibility)local_res10);
    STableViewBase::SetScrollbarVisibility
              (this,(EVisibility)
                    ((TEnumAsByte<EVisibility::Private> *)CONCAT71(extraout_var,EVar2.Value.Value))
                    ->Value);
  }
  return;
}

// execSetWheelScrollMultiplier @ 146a44920

void __cdecl
UListViewBase::execSetWheelScrollMultiplier(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  STableViewBase *this;
  TConsoleVariableData<float> *pTVar2;
  float fVar3;
  bool bVar4;
  longlong lVar5;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  fVar3 = local_res8[0];
  lVar5 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(STableViewBase **)&param_1[0x14].field_0x18;
  *(float *)&param_1[0xc].field_0x18 = local_res8[0];
  pTVar2 = GlobalScrollAmount.Ref;
  if (this != (STableViewBase *)0x0) {
    bVar4 = IsInParallelGameThread();
    if (!bVar4) {
      bVar4 = IsInGameThread();
      if (!bVar4) {
        lVar5 = 4;
      }
    }
    STableViewBase::SetWheelScrollMultiplier
              (this,fVar3 * *(float *)((longlong)pTVar2->ShadowedValue + lVar5));
  }
  return;
}

// operator() @ 1504f6c90

bool __thiscall `UListViewBase::RebuildListWidget'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6932706540122013429>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6932706540122013429>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

