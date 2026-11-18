// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 9

// Call @ 14a7c3840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TSharedPtr<SObjectWidget,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UListViewBase::GenerateTypedEntry<UUserWidget,SCommonButtonTableRow<UObject_*>_>'::__l2::<lambda_1>,TSharedPtr<SObjectWidget,1>,UUserWidget_*,TSharedRef<SWidget,1>_>
::Call(TSharedPtr<SObjectWidget,1> *__return_storage_ptr__,void *param_1,UUserWidget **param_2,
      TSharedRef<SWidget,1> *param_3)

{
  TSharedRef<SWidget,1> local_28;
  TSharedRef<SCommonButtonTableRow<UObject_*>,1> local_18;
  
  local_28.Object = param_3->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  `UListViewBase::GenerateTypedEntry<UUserWidget,SCommonButtonTableRow<UObject_*>_>'::__l2::
  <lambda_1>::operator()(param_1,&local_18,*param_2,&local_28);
  __return_storage_ptr__->Object = (SObjectWidget *)local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Call @ 14a7c38b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TSharedPtr<SObjectWidget,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FUserWidgetPool::GetOrCreateInstance<UCommonActivatableWidget>'::__l2::<lambda_1>,TSharedPtr<SObjectWidget,1>,UUserWidget_*,TSharedRef<SWidget,1>_>
::Call(TSharedPtr<SObjectWidget,1> *__return_storage_ptr__,void *param_1,UUserWidget **param_2,
      TSharedRef<SWidget,1> *param_3)

{
  TSharedRef<SWidget,1> local_28;
  TSharedRef<SObjectWidget,1> local_18;
  
  local_28.Object = param_3->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  `FUserWidgetPool::GetOrCreateInstance<UCommonActivatableWidget>'::__l2::<lambda_1>::operator()
            (param_1,&local_18,*param_2,&local_28);
  __return_storage_ptr__->Object = local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Call @ 14a7c3920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TSharedPtr<SObjectWidget,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FUserWidgetPool::GetOrCreateInstance<UCommonButtonBase>'::__l2::<lambda_1>,TSharedPtr<SObjectWidget,1>,UUserWidget_*,TSharedRef<SWidget,1>_>
::Call(TSharedPtr<SObjectWidget,1> *__return_storage_ptr__,void *param_1,UUserWidget **param_2,
      TSharedRef<SWidget,1> *param_3)

{
  TSharedRef<SWidget,1> local_28;
  TSharedRef<SObjectWidget,1> local_18;
  
  local_28.Object = param_3->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  `FUserWidgetPool::GetOrCreateInstance<UCommonButtonBase>'::__l2::<lambda_1>::operator()
            (param_1,&local_18,*param_2,&local_28);
  __return_storage_ptr__->Object = local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Call @ 14a7c3990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCommonLazyWidget::SetLazyContentInternal<UUserWidget>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  FName this;
  code *pcVar1;
  bool bVar2;
  UCommonLazyWidget *this_00;
  UClass *pUVar3;
  UClass *pUVar4;
  UUserWidget *pUVar5;
  undefined8 uVar6;
  longlong *plVar7;
  FName FStackX_8;
  UClass *pUStackX_10;
  
  this_00 = (UCommonLazyWidget *)FWeakObjectPtr::Get(param_1);
  if (this_00 != (UCommonLazyWidget *)0x0) {
    this = (FName)((longlong)param_1 + 8);
    pUVar3 = TSoftClassPtr<UUserWidget>::Get((TSoftClassPtr<UUserWidget> *)this);
    if (((pUVar3 != (UClass *)0x0) ||
        (FStackX_8 = this,
        bVar2 = ``UCommonLazyWidget::SetLazyContentInternal<UUserWidget>'::__l2::<lambda_1>::
                operator()'::__l5::<lambda_1>::operator()(&FStackX_8), bVar2)) &&
       (((this_00->Content).field0_0x0.DebugPtr == (UUserWidget *)0x0 ||
        (pUVar3 = (UClass *)((this_00->Content).field0_0x0.DebugPtr)->_padding_,
        pUVar4 = TSoftClassPtr<UUserWidget>::Get((TSoftClassPtr<UUserWidget> *)this),
        pUVar3 != pUVar4)))) {
      FStackX_8.ComparisonIndex.Value = 0;
      FStackX_8.Number = 0;
      pUStackX_10 = TSoftClassPtr<UUserWidget>::Get((TSoftClassPtr<UUserWidget> *)this);
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUStackX_10 != (UClass *)0x0)) {
        GC::MarkAsReachable((UObject *)pUStackX_10);
      }
      pUVar5 = CreateWidget<UUserWidget,UCommonLazyWidget_*>
                         (this_00,(TSubclassOf<UUserWidget>)&pUStackX_10,FStackX_8);
      if ((*(void **)((longlong)param_1 + 0x30) != (void *)0x0) && (pUVar5 != (UUserWidget *)0x0)) {
        CheckCallable(*(void **)((longlong)param_1 + 0x30));
        pcVar1 = *(code **)((longlong)param_1 + 0x30);
        plVar7 = (longlong *)((longlong)param_1 + 0x40);
        if (*(longlong **)((longlong)param_1 + 0x58) != (longlong *)0x0) {
          plVar7 = *(longlong **)((longlong)param_1 + 0x58);
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        (*pcVar1)(uVar6,pUVar5);
      }
      UCommonLazyWidget::SetLoadedContent(this_00,pUVar5);
    }
  }
  return;
}

// Call @ 14a7c39a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCommonActivatableWidgetContainerBase::BP_AddWidget'::__l2::<lambda_1>,void,UCommonActivatableWidget_&>
::Call(void *param_1,UCommonActivatableWidget *param_2)

{
  return;
}

// Call @ 14a7c39b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCommonLoadGuard::BP_GuardAndLoadAsset'::__l2::<lambda_1>,void,UObject_*>::Call
          (void *param_1,UObject **param_2)

{
  UObject *pUVar1;
  bool bVar2;
  UObject *local_res8;
  
  pUVar1 = *param_2;
  bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(param_1);
  if (bVar2) {
    local_res8 = pUVar1;
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_res8);
  }
  return;
}

// Call @ 14a7c39f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCommonButtonBase::HandleImplicitFocusLost'::__l2::<lambda_1>,void,FSlateUser_&>
::Call(void *param_1,FSlateUser *param_2)

{
  SWidget *pSVar1;
  code *pcVar2;
  bool bVar3;
  EUINavigation EVar4;
  FSlateApplication *this;
  ULocalPlayer *this_00;
  UCommonUIActionRouterBase *this_01;
  TSharedPtr<FActivatableTreeRoot,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FActivatableTreeRoot *this_02;
  undefined4 auStackX_8 [2];
  TArray<EUINavigation,TSizedDefaultAllocator<32>_> TStack_58;
  TSharedPtr<SWidget_const_,1> TStack_48;
  TSharedPtr<SWidget,1> TStack_38;
  TSharedPtr<FActivatableTreeRoot,1> TStack_28;
  
  if ((*(longlong *)param_1 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  pSVar1 = *(SWidget **)param_1;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar1 == (SWidget *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  TStack_48.Object = pSVar1;
  TStack_48.SharedReferenceCount.ReferenceController = pTVar6;
  bVar3 = FSlateUser::IsWidgetInFocusPath(param_2,&TStack_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (!bVar3) {
    return;
  }
  auStackX_8[0] = 0x2000301;
  TStack_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_58.ArrayNum = 4;
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,4,0,&TStack_58.AllocatorInstance,4,&TStack_58.ArrayMax);
  memcpy(TStack_58.AllocatorInstance.Data,auStackX_8,4);
  this = FSlateApplication::Get();
  TStack_38.Object = *(SWidget **)param_1;
  TStack_38.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (TStack_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EVar4 = FSlateApplication::NavigateFromWidget(this,param_2->UserIndex,&TStack_38,&TStack_58);
  if (((EVar4 != Invalid) ||
      (this_00 = (ULocalPlayer *)(**(code **)(**(longlong **)((longlong)param_1 + 0x10) + 0x2e0))(),
      this_00 == (ULocalPlayer *)0x0)) ||
     (this_01 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(this_00),
     this_01 == (UCommonUIActionRouterBase *)0x0)) goto LAB_14a7b6126;
  this_02 = (this_01->ActiveRootNode).Object;
  if (this_02 == (FActivatableTreeRoot *)0x0) {
    pTVar5 = UCommonUIActionRouterBase::FindActiveActionDomainRootNode(this_01,&TStack_28);
    this_02 = pTVar5->Object;
    pTVar6 = (pTVar5->SharedReferenceCount).ReferenceController;
    (pTVar5->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar5->Object = (FActivatableTreeRoot *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_28.SharedReferenceCount.ReferenceController);
    if (this_02 != (FActivatableTreeRoot *)0x0) goto LAB_14a7b6116;
  }
  else {
    pTVar6 = (this_01->ActiveRootNode).SharedReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
LAB_14a7b6116:
    FActivatableTreeRoot::FocusLeafmostNode(this_02);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_14a7b6126:
  if (TStack_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_58.AllocatorInstance.Data);
  }
  return;
}

// Call @ 14a7c3a00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCommonLazyWidget::SetLazyContentWithCallback'::__l2::<lambda_1>,void,UUserWidget_&>
::Call(void *param_1,UUserWidget *param_2)

{
  bool bVar1;
  UUserWidget *local_res8;
  
  bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(param_1);
  if (bVar1) {
    local_res8 = param_2;
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_res8);
  }
  return;
}

// Call @ 14a7c3a40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCommonLazyImage::SetBrushFromLazyDisplayAsset'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  TPersistentObjectPtr<FSoftObjectPath> *this;
  int iVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  TPersistentObjectPtr<FSoftObjectPath> *pTStackX_8;
  
  pUVar2 = FWeakObjectPtr::Get(param_1);
  if (pUVar2 != (UObject *)0x0) {
    this = (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 8);
    pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get(this);
    if (pUVar3 == (UObject *)0x0) {
      pTStackX_8 = this;
      ``UCommonLazyImage::SetBrushFromLazyDisplayAsset'::__l5::<lambda_1>::operator()'::__l5::
      <lambda_1>::operator()(&pTStackX_8);
    }
    pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get(this);
    if (pUVar3 != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UTexture2D_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        (**(code **)(*(longlong *)pUVar2 + 800))
                  (pUVar2,pUVar3,*(undefined1 *)((longlong)param_1 + 0x30));
        return;
      }
    }
    pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get(this);
    if (pUVar3 != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UMaterialInterface_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        (**(code **)(*(longlong *)pUVar2 + 0x338))(pUVar2,pUVar3);
      }
    }
  }
  return;
}

