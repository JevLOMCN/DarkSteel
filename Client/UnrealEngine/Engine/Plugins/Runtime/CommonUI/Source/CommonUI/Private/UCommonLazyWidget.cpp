// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 31

// StaticClass @ 14a789d60

UClass * __cdecl UCommonLazyWidget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonLazyWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonLazyWidget",
               &Z_Registration_Info_UClass_UCommonLazyWidget.InnerSingleton,
               StaticRegisterNativesUCommonLazyWidget,0x3e0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonLazyWidget>,
               InternalVTableHelperCtorCaller<UCommonLazyWidget>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonLazyWidget.InnerSingleton;
}

// SetLazyContentInternal<UUserWidget> @ 14a7a4f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UCommonLazyWidget::SetLazyContentInternal<UUserWidget>
          (UCommonLazyWidget *this,TSoftClassPtr<UUserWidget> *param_1,
          TFunction<void___cdecl(UUserWidget_&)> *param_2)

{
  SLoadGuard *this_00;
  void *pvVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined1 auStack_188 [32];
  FWeakObjectPtr local_168;
  undefined1 local_160 [8];
  FDelegateAllocation local_158;
  UCommonLazyWidget *local_148;
  FDestructionSentinel local_140;
  FDelegateAllocation *local_128;
  undefined1 local_120 [24];
  void *local_108;
  undefined1 local_f8 [48];
  code *local_c8;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong *local_a0;
  FWeakObjectPtr local_98;
  longlong local_90;
  FSoftObjectPath local_88;
  longlong local_68;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  if (*(longlong *)&(param_1->SoftObjectPtr).field_0x8 == 0) {
    this_00 = (this->MyLoadGuard).Object;
    if (this_00 != (SLoadGuard *)0x0) {
      this_00->bForceShowSpinner = false;
      SLoadGuard::UpdateLoadingAppearance(this_00);
    }
    SetLoadedContent(this,(UUserWidget *)0x0);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (this != (UCommonLazyWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_168.ObjectIndex = 0;
    local_168.ObjectSerialNumber = 0;
    local_148 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UCommonLazyWidget *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_168,(FObjectPtr)&local_148);
    local_98 = local_168;
    local_90 = *(longlong *)&param_1->SoftObjectPtr;
    FSoftObjectPath::FSoftObjectPath
              (&local_88,(FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
    local_68 = *(longlong *)param_2;
    local_40 = *(longlong **)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_48 = *(longlong *)&param_2->field_0x20;
    local_58 = *(longlong *)&param_2->field_0x10;
    lStack_50 = *(longlong *)&param_2->field_0x18;
    if (local_68 != 0) {
      *(undefined8 *)param_2 = 0;
    }
    local_c8 = (code *)0x0;
    plVar2 = FMemory::Malloc(0x70,0x10);
    *plVar2 = (longlong)
              &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____SetLazyContentInternal_VUUserWidget___UCommonLazyWidget__IEAAXV__TSoftClassPtr_VUUserWidget______QEAV__TFunction___A6AXAEAVUUserWidget___Z___Z__0A__00_Function_Private_Core_UE__6B_
    ;
    *(FWeakObjectPtr *)(plVar2 + 2) = local_98;
    plVar2[3] = local_90;
    local_a0 = plVar2;
    FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(plVar2 + 4),&local_88);
    plVar2[8] = local_68;
    plVar2[0xd] = (longlong)local_40;
    local_40 = (longlong *)0x0;
    plVar2[10] = local_58;
    plVar2[0xb] = lStack_50;
    plVar2[0xc] = local_48;
    if (plVar2[8] != 0) {
      local_68 = 0;
    }
    if ((FWeakObjectPtr *)(plVar2 + 2) != (FWeakObjectPtr *)0x0) {
      local_c8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UCommonLazyWidget::SetLazyContentInternal<UUserWidget>'::__l2::<lambda_1>,void>
                 ::Call;
    }
    local_120._0_8_ = *(undefined8 *)&param_1->SoftObjectPtr;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_120 + 8),
               (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
    local_160 = (undefined1  [8])0x0;
    local_158.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_158.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_160,
               (FWriteAccessScope *)&local_140);
    local_128 = &local_158;
    puVar3 = UE::Core::Private::DelegateAllocate(0x50,&local_158);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V__TFunction___A6AXXZ____V__6B_
      ;
      puVar3[4] = local_c8;
      puVar3[9] = local_a0;
      local_a0 = (longlong *)0x0;
      puVar3[6] = local_b8;
      puVar3[7] = uStack_b0;
      puVar3[8] = local_a8;
      if (puVar3[4] != 0) {
        local_c8 = (code *)0x0;
      }
    }
    if (local_140.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_140.Accessor,&local_140);
    }
    local_f8._0_8_ = local_120._0_8_;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_f8 + 8),(FSoftObjectPath *)(local_120 + 8));
    RequestAsyncLoad(this,(TSoftClassPtr<UObject> *)local_f8,
                     (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_160);
    if (local_108 != (void *)0x0) {
      FMemory::Free(local_108);
    }
    if (local_c8 != (code *)0x0) {
      plVar2 = &local_b8;
      if (local_a0 != (longlong *)0x0) {
        plVar2 = local_a0;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    if (local_68 != 0) {
      plVar2 = &local_58;
      if (local_40 != (longlong *)0x0) {
        plVar2 = local_40;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    if (local_88.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

// UCommonLazyWidget @ 14a7add50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UCommonLazyWidget * __thiscall
UCommonLazyWidget::UCommonLazyWidget(UCommonLazyWidget *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UWidget::UWidget((UWidget *)this,param_1);
  this_00 = &(this->WidgetClass).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->WidgetClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->WidgetClass).SoftObjectPtr = 0;
  *(undefined8 *)&(this->WidgetClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->WidgetClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  FSlateBrush::FSlateBrush(&this->LoadingThrobberBrush);
  FSlateBrush::FSlateBrush(&this->LoadingBackgroundBrush);
  (this->Content).field0_0x0.DebugPtr = (UUserWidget *)0x0;
  (this->StreamingHandle).Object = (FStreamableHandle *)0x0;
  (this->StreamingHandle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->StreamingObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->StreamingObjectPath).AssetPath.PackageName.Number = 0;
  (this->StreamingObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->StreamingObjectPath).AssetPath.AssetName.Number = 0;
  (this->StreamingObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StreamingObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->StreamingObjectPath).SubPathString.Data.ArrayMax = 0;
  *(undefined8 *)&this->BP_OnLoadingStateChanged = 0;
  *(undefined8 *)&(this->BP_OnLoadingStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnLoadingStateChanged).field_0x10 = 0;
  (this->MyLoadGuard).Object = (SLoadGuard *)0x0;
  (this->MyLoadGuard).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnLoadingStateChangedEvent = 0;
  *(undefined8 *)&(this->OnLoadingStateChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnLoadingStateChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnLoadingStateChangedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnContentChangedEvent = 0;
  *(undefined8 *)&(this->OnContentChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnContentChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnContentChangedEvent).field_0x18 = 2;
  return this;
}

// UCommonLazyWidget @ 14a7ade70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UCommonLazyWidget * __thiscall
UCommonLazyWidget::UCommonLazyWidget(UCommonLazyWidget *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UWidget::UWidget((UWidget *)this,param_1);
  this_00 = &(this->WidgetClass).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->WidgetClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->WidgetClass).SoftObjectPtr = 0;
  *(undefined8 *)&(this->WidgetClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->WidgetClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  FSlateBrush::FSlateBrush(&this->LoadingThrobberBrush);
  FSlateBrush::FSlateBrush(&this->LoadingBackgroundBrush);
  (this->Content).field0_0x0.DebugPtr = (UUserWidget *)0x0;
  (this->StreamingHandle).Object = (FStreamableHandle *)0x0;
  (this->StreamingHandle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->StreamingObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->StreamingObjectPath).AssetPath.PackageName.Number = 0;
  (this->StreamingObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->StreamingObjectPath).AssetPath.AssetName.Number = 0;
  (this->StreamingObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StreamingObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->StreamingObjectPath).SubPathString.Data.ArrayMax = 0;
  *(undefined8 *)&this->BP_OnLoadingStateChanged = 0;
  *(undefined8 *)&(this->BP_OnLoadingStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnLoadingStateChanged).field_0x10 = 0;
  (this->MyLoadGuard).Object = (SLoadGuard *)0x0;
  (this->MyLoadGuard).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnLoadingStateChangedEvent = 0;
  *(undefined8 *)&(this->OnLoadingStateChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnLoadingStateChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnLoadingStateChangedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnContentChangedEvent = 0;
  *(undefined8 *)&(this->OnContentChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnContentChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnContentChangedEvent).field_0x18 = 2;
  (this->LoadingBackgroundBrush).DrawAs.Value = '\0';
  (this->LoadingThrobberBrush).DrawAs.Value = '\0';
  UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
  return this;
}

// ~UCommonLazyWidget @ 14a7b2e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UCommonLazyWidget::~UCommonLazyWidget(UCommonLazyWidget *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnContentChangedEvent).field_0x8,
             *(int *)&(this->OnContentChangedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnContentChangedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnContentChangedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLoadingStateChangedEvent).field_0x8,
             *(int *)&(this->OnLoadingStateChangedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnLoadingStateChangedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLoadingStateChangedEvent);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyLoadGuard).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->BP_OnLoadingStateChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BP_OnLoadingStateChanged);
  pFVar2 = (this->StreamingObjectPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StreamingHandle).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->LoadingBackgroundBrush).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->LoadingBackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (this->LoadingThrobberBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController
  ;
  (this->LoadingThrobberBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pvVar1 = *(void **)&(this->WidgetClass).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// operator() @ 14a7b58d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
`UCommonLazyWidget::SetLazyContentInternal<UUserWidget>'::__l2::<lambda_1>::operator()(void *this)

{
  FName this_00;
  code *pcVar1;
  bool bVar2;
  UCommonLazyWidget *this_01;
  UClass *pUVar3;
  UClass *pUVar4;
  UUserWidget *pUVar5;
  undefined8 uVar6;
  longlong *plVar7;
  FName local_res8;
  UClass *local_res10;
  
  this_01 = (UCommonLazyWidget *)FWeakObjectPtr::Get(this);
  if (this_01 != (UCommonLazyWidget *)0x0) {
    this_00 = (FName)((longlong)this + 8);
    pUVar3 = TSoftClassPtr<UUserWidget>::Get((TSoftClassPtr<UUserWidget> *)this_00);
    if (((pUVar3 != (UClass *)0x0) ||
        (local_res8 = this_00,
        bVar2 = ``UCommonLazyWidget::SetLazyContentInternal<UUserWidget>'::__l2::<lambda_1>::
                operator()'::__l5::<lambda_1>::operator()(&local_res8), bVar2)) &&
       (((this_01->Content).field0_0x0.DebugPtr == (UUserWidget *)0x0 ||
        (pUVar3 = (UClass *)((this_01->Content).field0_0x0.DebugPtr)->_padding_,
        pUVar4 = TSoftClassPtr<UUserWidget>::Get((TSoftClassPtr<UUserWidget> *)this_00),
        pUVar3 != pUVar4)))) {
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      local_res10 = TSoftClassPtr<UUserWidget>::Get((TSoftClassPtr<UUserWidget> *)this_00);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      pUVar5 = CreateWidget<UUserWidget,UCommonLazyWidget_*>
                         (this_01,(TSubclassOf<UUserWidget>)&local_res10,local_res8);
      if ((*(void **)((longlong)this + 0x30) != (void *)0x0) && (pUVar5 != (UUserWidget *)0x0)) {
        UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x30));
        pcVar1 = *(code **)((longlong)this + 0x30);
        plVar7 = (longlong *)((longlong)this + 0x40);
        if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
          plVar7 = *(longlong **)((longlong)this + 0x58);
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        (*pcVar1)(uVar6,pUVar5);
      }
      UCommonLazyWidget::SetLoadedContent(this_01,pUVar5);
    }
  }
  return;
}

// operator() @ 14a7b62b0

void __thiscall `UCommonLazyWidget::RequestAsyncLoad'::__l2::<lambda_1>::operator()(void *this)

{
  SLoadGuard *this_00;
  bool bVar1;
  UObject *pUVar2;
  FSoftObjectPath local_30;
  
  pUVar2 = FWeakObjectPtr::Get(this);
  if ((pUVar2 != (UObject *)0x0) &&
     (bVar1 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)&pUVar2[0x15].field_0x10,
                         (FSoftObjectPath *)((longlong)this + 0x28)), bVar1)) {
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 8));
    FSoftObjectPath::FSoftObjectPath(&local_30,(FSoftObjectPath *)((longlong)this + 0x28));
    this_00 = *(SLoadGuard **)&pUVar2[0x16].field_0x20;
    if (this_00 != (SLoadGuard *)0x0) {
      this_00->bForceShowSpinner = false;
      SLoadGuard::UpdateLoadingAppearance(this_00);
    }
    if (local_30.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// CancelStreaming @ 14a7c3f00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UCommonLazyWidget::CancelStreaming(UCommonLazyWidget *this)

{
  SLoadGuard *this_00;
  
  this_00 = (this->MyLoadGuard).Object;
  if (this_00 != (SLoadGuard *)0x0) {
    this_00->bForceShowSpinner = false;
    SLoadGuard::UpdateLoadingAppearance(this_00);
    return;
  }
  return;
}

// FOnWidgetCreated_DelegateWrapper @ 14a7db6e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UCommonLazyWidget::FOnWidgetCreated_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UUserWidget *param_2)

{
  UUserWidget *local_res10 [3];
  
  local_res10[0] = param_2;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,local_res10);
  return;
}

// GetPrivateStaticClass @ 14a7e5a40

UClass * __cdecl UCommonLazyWidget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonLazyWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonLazyWidget",
               &Z_Registration_Info_UClass_UCommonLazyWidget.InnerSingleton,
               StaticRegisterNativesUCommonLazyWidget,0x3e0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonLazyWidget>,
               InternalVTableHelperCtorCaller<UCommonLazyWidget>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonLazyWidget.InnerSingleton;
}

// HandleLoadGuardStateChanged @ 14a7ed980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UCommonLazyWidget::HandleLoadGuardStateChanged(UCommonLazyWidget *this,bool param_1)

{
  undefined1 local_res10 [24];
  
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnLoadingStateChangedEvent,param_1);
  local_res10[0] = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->BP_OnLoadingStateChanged
             ,local_res10);
  return;
}

// IsLoading @ 14a7f6290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UCommonLazyWidget::IsLoading(UCommonLazyWidget *this)

{
  SLoadGuard *pSVar1;
  
  pSVar1 = (this->MyLoadGuard).Object;
  if ((pSVar1 != (SLoadGuard *)0x0) && (pSVar1->bIsShowingSpinner != false)) {
    return true;
  }
  return false;
}

// LoadLazyContent @ 14a7f83c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UCommonLazyWidget::LoadLazyContent(UCommonLazyWidget *this)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [48];
  undefined1 local_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  puVar1 = &(this->WidgetClass).SoftObjectPtr.field_0x8;
  local_48._0_8_ = 0;
  local_20 = (longlong *)0x0;
  if (*(longlong *)puVar1 != 0) {
    local_78._0_8_ = *(undefined8 *)&(this->WidgetClass).SoftObjectPtr;
    FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(local_78 + 8),(FSoftObjectPath *)puVar1);
    SetLazyContentInternal<UUserWidget>
              (this,(TSoftClassPtr<UUserWidget> *)local_78,
               (TFunction<void___cdecl(UUserWidget_&)> *)local_48);
    if (local_48._0_8_ != 0) {
      plVar2 = (longlong *)(local_48 + 0x10);
      if (local_20 != (longlong *)0x0) {
        plVar2 = local_20;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  return;
}

// OnStreamingComplete @ 14a7ff670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UCommonLazyWidget::OnStreamingComplete(UCommonLazyWidget *this,TSoftClassPtr<UObject> *param_1)

{
  SLoadGuard *this_00;
  void *pvVar1;
  
  this_00 = (this->MyLoadGuard).Object;
  if (this_00 != (SLoadGuard *)0x0) {
    this_00->bForceShowSpinner = false;
    SLoadGuard::UpdateLoadingAppearance(this_00);
  }
  pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// OnStreamingStarted @ 14a7ff6b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UCommonLazyWidget::OnStreamingStarted(UCommonLazyWidget *this,TSoftClassPtr<UObject> *param_1)

{
  SLoadGuard *this_00;
  void *pvVar1;
  
  this_00 = (this->MyLoadGuard).Object;
  if (this_00 != (SLoadGuard *)0x0) {
    this_00->bForceShowSpinner = true;
    SLoadGuard::UpdateLoadingAppearance(this_00);
  }
  pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// OnWidgetRebuilt @ 14a800f40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UCommonLazyWidget::OnWidgetRebuilt(UCommonLazyWidget *this)

{
  FStreamableHandle *pFVar1;
  SLoadGuard *this_00;
  code *pcVar2;
  bool bVar3;
  
  UWidget::OnWidgetRebuilt((UWidget *)this);
  pFVar1 = (this->StreamingHandle).Object;
  if (((pFVar1 != (FStreamableHandle *)0x0) && (pFVar1->bLoadCompleted == false)) &&
     (pFVar1->bCanceled == false)) {
    if ((this->MyLoadGuard).Object == (SLoadGuard *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = (this->MyLoadGuard).Object;
    this_00->bForceShowSpinner = true;
    SLoadGuard::UpdateLoadingAppearance(this_00);
    return;
  }
  return;
}

// RebuildWidget @ 14a80a4a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UCommonLazyWidget::RebuildWidget
          (UCommonLazyWidget *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  UUserWidget *this_00;
  SLoadGuard *pSVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FArguments *pFVar11;
  FArguments *pFVar12;
  TSharedRef<SImage,1> *pTVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  TSharedRef<SWidget,1> *pTVar16;
  TSharedRef<SLoadGuard,1> *pTVar17;
  SWidget *pSVar18;
  SImage *pSVar19;
  TSharedPtr<SLoadGuard,1> *pTVar20;
  undefined4 local_res8 [2];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  FName local_688;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  SLoadGuard *local_678;
  FSharedReferencer<1> local_670;
  FName local_668;
  FMemScope local_660;
  UCommonLazyWidget *local_658;
  FMemScope local_650;
  TSharedRef<SWidget,1> local_648;
  undefined8 local_638;
  TReferenceControllerBase<1> *local_630;
  undefined8 local_628;
  TReferenceControllerBase<1> *local_620;
  TSharedRef<SImage,1> local_618;
  TAttribute<FSlateBrush_const_*> local_608;
  FDestructionSentinel local_5e0;
  undefined1 *local_5c8;
  SWidget *local_5c0;
  TReferenceControllerBase<1> *pTStack_5b8;
  SWidget *local_5b0;
  TReferenceControllerBase<1> *pTStack_5a8;
  TSharedRef<SLoadGuard,1> local_5a0;
  TSharedRef<SWidget,1> local_590;
  TSlateDecl<SLoadGuard,RequiredArgs::T0RequiredArgs> local_580;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_568;
  undefined1 local_550 [576];
  undefined1 local_310 [24];
  FArguments local_2f8;
  
  pSVar19 = (SImage *)0x0;
  local_res8[0] = 0;
  pFVar11 = SLoadGuard::FArguments::FArguments((FArguments *)local_550);
  if ((this->LoadingThrobberBrush).DrawAs.Value == '\0') {
    local_630 = (TReferenceControllerBase<1> *)0x0;
    puVar14 = &local_638;
    bVar9 = false;
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar10 = true;
  }
  else {
    pFVar12 = SImage::FArguments::FArguments(&local_2f8);
    local_608.bIsSet = true;
    local_608.Getter._16_8_ = 0;
    local_608.Getter._0_8_ = 0;
    local_608.Getter._8_8_ = 0;
    local_608.Value = &this->LoadingThrobberBrush;
    pFVar12 = SImage::FArguments::Image(pFVar12,&local_608);
    FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_668 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_660,&local_668,true);
    TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
              (&local_568,"SImage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonLazyWidget.cpp"
               ,0x25,(T0RequiredArgs *)local_res8);
    FMemScope::~FMemScope(&local_660);
    FLLMScope::~FLLMScope(local_res18);
    pTVar13 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_568,&local_618,pFVar12);
    local_620 = (pTVar13->SharedReferenceCount).ReferenceController;
    pSVar19 = pTVar13->Object;
    if (local_620 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_620->SharedReferenceCount = (atomic<int>)((int)local_620->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar14 = &local_628;
    bVar9 = true;
    bVar8 = true;
    bVar7 = true;
    bVar6 = true;
    bVar10 = false;
  }
  pTVar1 = (TReferenceControllerBase<1> *)puVar14[1];
  puVar14[1] = 0;
  *puVar14 = 0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_5c0 = (pFVar11->_Throbber).Object;
  pTStack_5b8 = (pFVar11->_Throbber).SharedReferenceCount.ReferenceController;
  (pFVar11->_Throbber).Object = (SWidget *)pSVar19;
  (pFVar11->_Throbber).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_5b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  uStack_680 = 0;
  pFVar11->_GuardBackgroundBrush = &this->LoadingBackgroundBrush;
  local_688 = (FName)HandleLoadGuardStateChanged;
  uStack_67c = local_618.SharedReferenceCount.ReferenceController._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar11->_OnLoadingStateChanged,(FWriteAccessScope *)&local_5e0);
  local_5c8 = &(pFVar11->_OnLoadingStateChanged).field_0x8;
  puVar14 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_5c8);
  if (puVar14 != (undefined8 *)0x0) {
    *puVar14 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar15 = FDelegateHandle::GenerateNewID();
    puVar14[2] = uVar15;
    *puVar14 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonLazyWidget____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UCommonLazyWidget *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar14[3] = 0;
    local_658 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UCommonLazyWidget *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 3),(FObjectPtr)&local_658);
    *(FName *)(puVar14 + 4) = local_688;
    puVar14[5] = CONCAT44(uStack_67c,uStack_680);
  }
  if (local_5e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5e0.Accessor,&local_5e0);
  }
  pSVar18 = SNullWidget::NullWidget.Object;
  this_00 = (this->Content).field0_0x0.DebugPtr;
  if (this_00 == (UUserWidget *)0x0) {
    local_648.Object = SNullWidget::NullWidget.Object;
    local_648.SharedReferenceCount.ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar16 = &local_648;
    bVar5 = false;
    bVar4 = true;
  }
  else {
    pTVar16 = UWidget::TakeWidget((UWidget *)this_00,&local_590);
    bVar5 = true;
    bVar4 = false;
    pSVar18 = pTVar16->Object;
  }
  pTVar1 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_5b0 = (pFVar11->_Content).Widget.Object;
  pTStack_5a8 = (pFVar11->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar11->_Content).Widget.Object = pSVar18;
  (pFVar11->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_5a8);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_688 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_650,&local_688,true);
  TSlateDecl<SLoadGuard,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SLoadGuard,RequiredArgs::T0RequiredArgs>
            (&local_580,"SLoadGuard",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonLazyWidget.cpp"
             ,0x24,local_res10);
  FMemScope::~FMemScope(&local_650);
  FLLMScope::~FLLMScope(local_res20);
  pTVar17 = TSlateDecl<SLoadGuard,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_580,&local_5a0,pFVar11);
  local_670.ReferenceController = (pTVar17->SharedReferenceCount).ReferenceController;
  local_678 = pTVar17->Object;
  if (local_670.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_670.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_670.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar20 = &this->MyLoadGuard;
  if (pTVar20 != (TSharedPtr<SLoadGuard,1> *)&local_678) {
    pTVar20->Object = local_678;
    local_678 = (SLoadGuard *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyLoadGuard).SharedReferenceCount,&local_670);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_670.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_580._Widget.SharedReferenceCount.ReferenceController);
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_648.SharedReferenceCount.ReferenceController);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_590.SharedReferenceCount.ReferenceController);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_630);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_620);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_618.SharedReferenceCount.ReferenceController._4_4_,
                        local_618.SharedReferenceCount.ReferenceController._0_4_));
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_568._Widget.SharedReferenceCount.ReferenceController);
  }
  if (bVar9) {
    SImage::FArguments::~FArguments(&local_2f8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_310);
  if ((void *)local_310._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_310._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_310);
  if ((ITextData *)local_550._544_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_550._544_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_550._536_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_550._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_550);
  if (pTVar20->Object == (SLoadGuard *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x408,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar16;
    }
  }
  pTVar1 = (this->MyLoadGuard).SharedReferenceCount.ReferenceController;
  pSVar2 = pTVar20->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SLoadGuard *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x25d,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar16;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar2;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 14a811ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UCommonLazyWidget::ReleaseSlateResources(UCommonLazyWidget *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UVisual::ReleaseSlateResources((UVisual *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyLoadGuard != (TSharedPtr<SLoadGuard,1> *)&local_18) {
    (this->MyLoadGuard).Object = (SLoadGuard *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyLoadGuard).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// RequestAsyncLoad @ 14a8145d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UCommonLazyWidget::RequestAsyncLoad
          (UCommonLazyWidget *this,TSoftClassPtr<UObject> *param_1,
          TFunction<void___cdecl(void)> *param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  undefined1 local_30 [40];
  
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x50,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V__TFunction___A6AXXZ____V__6B_
    ;
    puVar3[4] = *(undefined8 *)param_2;
    puVar3[9] = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    uVar2 = *(undefined8 *)&param_2->field_0x18;
    puVar3[6] = *(undefined8 *)&param_2->field_0x10;
    puVar3[7] = uVar2;
    puVar3[8] = *(undefined8 *)&param_2->field_0x20;
    if (puVar3[4] != 0) {
      *(undefined8 *)param_2 = 0;
    }
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  local_30._0_8_ = *(undefined8 *)&param_1->SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_30 + 8),
             (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
  RequestAsyncLoad(this,(TSoftClassPtr<UObject> *)local_30,
                   (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_68);
  pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

// RequestAsyncLoad @ 14a8146f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UCommonLazyWidget::RequestAsyncLoad
          (UCommonLazyWidget *this,TSoftClassPtr<UObject> *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  int iVar1;
  SLoadGuard *pSVar2;
  void *pvVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UAssetManager *pUVar7;
  TSharedPtr<FStreamableHandle,1> *pTVar8;
  FWeakObjectPtr local_res8;
  UCommonLazyWidget *local_res10;
  undefined1 local_e8 [24];
  FString local_d0;
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  ForAnyElementType local_b0;
  int local_a8;
  undefined1 local_a0 [24];
  void *local_88;
  undefined1 local_78 [16];
  char *local_68;
  void *local_60;
  TSharedPtr<FStreamableHandle,1> local_48;
  
  if ((this->MyLoadGuard).Object != (SLoadGuard *)0x0) {
    pSVar2 = (this->MyLoadGuard).Object;
    pSVar2->bForceShowSpinner = false;
    SLoadGuard::UpdateLoadingAppearance(pSVar2);
  }
  pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) {
      pUVar6 = Z_Construct_UClass_UObject_NoRegister();
      if (pUVar6 != (UClass *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)&pUVar5[1].field_0x10 < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
                     (FReadAccessScope *)local_e8);
          if ((*(int *)&param_2->field_0x10 != 0) &&
             (*(longlong **)&param_2->field_0x8 != (longlong *)0x0)) {
            (**(code **)(**(longlong **)&param_2->field_0x8 + 0x68))();
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope((FReadAccessScope *)local_e8);
          goto LAB_14a8149e3;
        }
      }
    }
  }
  local_78._0_4_ = *(uint *)&(param_1->SoftObjectPtr).field_0x0;
  local_78._4_4_ = *(uint *)&(param_1->SoftObjectPtr).field_0x4;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_78 + 8),
             (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
  if ((this->MyLoadGuard).Object != (SLoadGuard *)0x0) {
    pSVar2 = (this->MyLoadGuard).Object;
    pSVar2->bForceShowSpinner = true;
    SLoadGuard::UpdateLoadingAppearance(pSVar2);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  FSoftObjectPath::operator=
            (&this->StreamingObjectPath,(FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
  pUVar7 = UAssetManager::Get();
  local_e8._0_4_ = 0xa7;
  local_e8._4_4_ = 0x3a;
  local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.Data.ArrayNum = 0;
  local_d0.Data.ArrayMax = 0;
  local_b8 = (undefined1  [8])0x0;
  local_e8._8_8_ =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonLazyWidget.cpp"
  ;
  local_e8._16_8_ =
       "void __cdecl UCommonLazyWidget::RequestAsyncLoad(class TSoftClassPtr<class UObject>,class TDelegate<void __cdecl(void),struct FDefaultDelegateUserPolicy>)"
  ;
  local_c0._0_4_ = local_res8.ObjectIndex;
  local_c0._4_4_ = local_res8.ObjectSerialNumber;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_b8,param_2);
  local_a0._0_8_ = *(undefined8 *)&param_1->SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_a0 + 8),
             (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
  local_78._4_4_ = local_e8._4_4_;
  local_78._0_4_ = local_e8._0_4_;
  local_78._8_8_ = local_e8._8_8_;
  local_68 = (char *)local_e8._16_8_;
  pTVar8 = FStreamableManager::
           RequestAsyncLoad<FSoftObjectPath_&,_UCommonLazyWidget::RequestAsyncLoad_::__l2::<lambda_1>,void>
                     (&pUVar7->StreamableManager,&local_48,&this->StreamingObjectPath,
                      (<lambda_1> *)local_c0,100,false,false,&local_d0,(FSourceLocation *)local_78);
  if (&this->StreamingHandle != pTVar8) {
    (this->StreamingHandle).Object = pTVar8->Object;
    pTVar8->Object = (FStreamableHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->StreamingHandle).SharedReferenceCount,&pTVar8->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
             (FWriteAccessScope *)local_e8);
  if ((local_a8 != 0) && (local_b0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b0,0,0,0x10);
    local_a8 = 0;
  }
  if (local_e8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
  }
  if (local_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b8);
LAB_14a8149e3:
  pvVar3 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// SetForceShowSpinner @ 14a818230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UCommonLazyWidget::SetForceShowSpinner(UCommonLazyWidget *this,bool param_1)

{
  SLoadGuard *this_00;
  
  this_00 = (this->MyLoadGuard).Object;
  if (this_00 != (SLoadGuard *)0x0) {
    this_00->bForceShowSpinner = param_1;
    SLoadGuard::UpdateLoadingAppearance(this_00);
    return;
  }
  return;
}

// SetLazyContent @ 14a8197a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UCommonLazyWidget::SetLazyContent(UCommonLazyWidget *this,TSoftClassPtr<UUserWidget> *param_1)

{
  void *pvVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [48];
  undefined1 local_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_48._0_8_ = 0;
  local_20 = (longlong *)0x0;
  local_78._0_8_ = *(undefined8 *)&param_1->SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_78 + 8),
             (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
  SetLazyContentInternal<UUserWidget>
            (this,(TSoftClassPtr<UUserWidget> *)local_78,
             (TFunction<void___cdecl(UUserWidget_&)> *)local_48);
  if (local_48._0_8_ != 0) {
    plVar2 = (longlong *)(local_48 + 0x10);
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

// SetLazyContentWithCallback @ 14a819850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UCommonLazyWidget::SetLazyContentWithCallback
          (UCommonLazyWidget *this,TSoftClassPtr<UUserWidget> *param_1,FOnWidgetCreated *param_2)

{
  void *pvVar1;
  code **ppcVar2;
  undefined1 auStack_d8 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  code *local_b0;
  code *local_a8;
  FReadAccessScope local_a0;
  undefined1 local_88 [48];
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_a0);
  local_b0 = *(code **)&param_2->field_0x8;
  local_a8 = *(code **)&param_2->field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a0);
  local_58[0] = (code *)0x0;
  ppcVar2 = FMemory::Malloc(0x20,8);
  ppcVar2[1] = (code *)0x0;
  ppcVar2[2] = (code *)0x0;
  *ppcVar2 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`UCommonLazyWidget::SetLazyContentWithCallback'::`2'::<lambda_1>,0,1>
                      ::_vftable_;
  ppcVar2[3] = (code *)0x0;
  local_30 = ppcVar2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_a0);
  ppcVar2[2] = local_b0;
  ppcVar2[3] = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a0);
  if (ppcVar2 != (code **)&DAT_fffffffffffffff8) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UCommonLazyWidget::SetLazyContentWithCallback'::__l2::<lambda_1>,void,UUserWidget_&>
                  ::Call;
  }
  local_88._0_8_ = *(undefined8 *)&param_1->SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_88 + 8),
             (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
  SetLazyContentInternal<UUserWidget>
            (this,(TSoftClassPtr<UUserWidget> *)local_88,
             (TFunction<void___cdecl(UUserWidget_&)> *)local_58);
  if (local_58[0] != (code *)0x0) {
    ppcVar2 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar2 = local_30;
    }
    (**(code **)(*ppcVar2 + 0x10))();
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

// SetLoadedContent @ 14a819d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UCommonLazyWidget::SetLoadedContent(UCommonLazyWidget *this,UUserWidget *param_1)

{
  undefined1 *puVar1;
  TObjectPtr<UUserWidget> *this_00;
  UUserWidget *pUVar2;
  SLoadGuard *this_01;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  UClass *pUVar10;
  TSharedRef<SWidget,1> *pTVar11;
  FSharedReferencer<1> FVar12;
  uint uVar13;
  longlong lVar14;
  TSharedRef<SWidget,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  
  this_00 = &this->Content;
  if ((this_00->field0_0x0).DebugPtr != (UUserWidget *)0x0) {
    pUVar10 = UCommonActivatableWidget::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar10);
    if (((bVar6) && (pUVar2 = (this_00->field0_0x0).DebugPtr, pUVar2 != (UUserWidget *)0x0)) &&
       ((char)pUVar2[1]._padding_ != '\0')) {
      (**(code **)(pUVar2->_padding_ + 0x528))();
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this_00->field0_0x0).DebugPtr = param_1;
  FVar12 = SNullWidget::NullWidget.SharedReferenceCount;
  this_01 = (this->MyLoadGuard).Object;
  if (this_01 != (SLoadGuard *)0x0) {
    if (param_1 == (UUserWidget *)0x0) {
      local_58.Object = SNullWidget::NullWidget.Object;
      local_58.SharedReferenceCount.ReferenceController =
           SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
      if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      SLoadGuard::SetContent(this_01,&local_58);
    }
    else {
      pTVar11 = UWidget::TakeWidget((UWidget *)param_1,&local_48);
      SLoadGuard::SetContent(this_01,pTVar11);
      FVar12.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar12.ReferenceController);
  }
  if ((this_00->field0_0x0).DebugPtr != (UUserWidget *)0x0) {
    pUVar10 = UCommonActivatableWidget::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar10);
    if (((bVar6) && (pUVar2 = (this_00->field0_0x0).DebugPtr, pUVar2 != (UUserWidget *)0x0)) &&
       ((char)pUVar2[1]._padding_ == '\0')) {
      (**(code **)(pUVar2->_padding_ + 0x520))();
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnContentChangedEvent,
             (FWriteAccessScope *)&local_38);
  puVar1 = &(this->OnContentChangedEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar6 = false;
  uVar13 = *(int *)&(this->OnContentChangedEvent).field_0x10 - 1;
  if (-1 < (int)uVar13) {
    lVar14 = (longlong)(int)uVar13 << 4;
    bVar6 = false;
    do {
      uVar9 = 0;
      if ((int)uVar13 < *(int *)&(this->OnContentChangedEvent).field_0x10) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar3 = *(longlong *)&(this->OnContentChangedEvent).field_0x8;
      if ((*(int *)(lVar3 + 8 + lVar14) == 0) ||
         (plVar4 = *(longlong **)(lVar3 + lVar14), plVar4 == (longlong *)0x0)) {
LAB_14a819ea7:
        bVar6 = true;
      }
      else {
        cVar8 = (**(code **)(*plVar4 + 0x68))();
        if (cVar8 == '\0') goto LAB_14a819ea7;
      }
      lVar14 = lVar14 + -0x10;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  puVar1 = &(this->OnContentChangedEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar6) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnContentChangedEvent,
               false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// StaticRegisterNativesUCommonLazyWidget @ 14a81e620

void __cdecl UCommonLazyWidget::StaticRegisterNativesUCommonLazyWidget(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UCommonLazyWidget_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 14a820150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UCommonLazyWidget::SynchronizeProperties(UCommonLazyWidget *this)

{
  SLoadGuard *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FArguments *pFVar2;
  TSharedRef<SImage,1> *pTVar3;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_338;
  TSharedPtr<SWidget,1> local_320;
  TAttribute<FSlateBrush_const_*> local_310;
  TSharedRef<SImage,1> local_2e8;
  FArguments local_2d8;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  this_00 = (this->MyLoadGuard).Object;
  if (this_00 != (SLoadGuard *)0x0) {
    if ((this->LoadingThrobberBrush).DrawAs.Value != '\0') {
      pFVar2 = SImage::FArguments::FArguments(&local_2d8);
      local_310.Getter._16_8_ = 0;
      local_310.bIsSet = true;
      local_310.Getter._0_8_ = 0;
      local_310.Getter._8_8_ = 0;
      local_310.Value = &this->LoadingThrobberBrush;
      pFVar2 = SImage::FArguments::Image(pFVar2,&local_310);
      FLLMScope::FLLMScope
                (local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_res20,&local_res18,true);
      TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
                (&local_338,"SImage",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonLazyWidget.cpp"
                 ,0x3f,local_res8);
      FMemScope::~FMemScope(&local_res20);
      FLLMScope::~FLLMScope(local_res10);
      pTVar3 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                         (&local_338,&local_2e8,pFVar2);
      pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
      local_320.Object = (SWidget *)pTVar3->Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_320.SharedReferenceCount.ReferenceController = pTVar1;
      SLoadGuard::SetThrobber(this_00,&local_320);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2e8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_338._Widget.SharedReferenceCount.ReferenceController);
      SImage::FArguments::~FArguments(&local_2d8);
      return;
    }
    local_338._Widget.Object = (SImage *)0x0;
    local_338._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    SLoadGuard::SetThrobber(this_00,(TSharedPtr<SWidget,1> *)&local_338);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  return;
}

// execGetContent @ 14a82d800

void __cdecl UCommonLazyWidget::execGetContent(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x14].field_0x20;
  return;
}

// execIsLoading @ 14a830550

void __cdecl UCommonLazyWidget::execIsLoading(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[0x16].field_0x20 != 0) &&
     (*(char *)(*(longlong *)&param_1[0x16].field_0x20 + 0x331) != '\0')) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execLoadLazyContent @ 14a8307a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UCommonLazyWidget::execLoadLazyContent(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  undefined1 local_68 [48];
  undefined1 local_38 [40];
  longlong *local_10;
  
  local_38._0_8_ = 0;
  local_10 = (longlong *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)(param_1 + 0xb) != 0) {
    local_68._0_8_ = *(undefined8 *)&param_1[10].field_0x20;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_68 + 8),(FSoftObjectPath *)(param_1 + 0xb));
    SetLazyContentInternal<UUserWidget>
              ((UCommonLazyWidget *)param_1,(TSoftClassPtr<UUserWidget> *)local_68,
               (TFunction<void___cdecl(UUserWidget_&)> *)local_38);
    if (local_38._0_8_ != 0) {
      plVar1 = (longlong *)(local_38 + 0x10);
      if (local_10 != (longlong *)0x0) {
        plVar1 = local_10;
      }
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return;
}

// execSetLazyContent @ 14a833ec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UCommonLazyWidget::execSetLazyContent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  int iVar3;
  longlong *plVar4;
  size_t _Size;
  undefined1 local_c8 [24];
  FUtf8String local_b0;
  undefined1 local_a0 [24];
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  undefined1 local_78 [24];
  ForAnyElementType local_60;
  int local_58;
  int local_54 [3];
  undefined1 local_48 [40];
  longlong *local_20;
  
  local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.Data.ArrayNum = 0;
  local_b0.Data.ArrayMax = 0;
  local_c8._0_8_ = 0;
  local_c8._16_8_ = 0;
  local_c8._8_8_ = 0;
  FUtf8String::Reset(&local_b0,0);
  FSoftClassProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  FVar2.Data = local_b0.Data.AllocatorInstance.Data;
  local_88.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Size = (size_t)local_b0.Data.ArrayNum;
  local_a0._0_8_ = local_c8._0_8_;
  local_80 = local_b0.Data.ArrayNum;
  local_a0._8_4_ = local_c8._8_4_;
  local_a0._12_4_ = local_c8._12_4_;
  local_a0._16_4_ = local_c8._16_4_;
  local_a0._20_4_ = local_c8._20_4_;
  if (local_b0.Data.ArrayNum == 0) {
    local_7c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_b0.Data.ArrayNum,0,&local_88,local_b0.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar2.Data,_Size);
  }
  iVar3 = local_80;
  FVar2.Data = local_88.Data;
  local_48._0_8_ = 0;
  local_20 = (longlong *)0x0;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_78._0_8_ = local_a0._0_8_;
  local_78._8_4_ = local_a0._8_4_;
  local_78._12_4_ = local_a0._12_4_;
  local_78._16_4_ = local_a0._16_4_;
  local_78._20_4_ = local_a0._20_4_;
  local_58 = local_80;
  if (local_80 == 0) {
    local_54[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_80,0,&local_60,local_80,local_54);
    memcpy(local_60.Data,FVar2.Data,(longlong)iVar3);
  }
  SetLazyContentInternal<UUserWidget>
            ((UCommonLazyWidget *)param_1,(TSoftClassPtr<UUserWidget> *)local_78,
             (TFunction<void___cdecl(UUserWidget_&)> *)local_48);
  if (local_48._0_8_ != 0) {
    plVar4 = (longlong *)(local_48 + 0x10);
    if (local_20 != (longlong *)0x0) {
      plVar4 = local_20;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetLazyContentWithCallback @ 14a834090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UCommonLazyWidget::execSetLazyContentWithCallback(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  code **ppcVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  size_t sVar4;
  undefined1 auStackY_178 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120 [24];
  undefined1 local_108 [24];
  FUtf8String local_f0;
  undefined1 local_e0 [24];
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  atomic<unsigned___int64> local_b0;
  atomic<unsigned___int64> local_a8;
  undefined1 local_a0 [24];
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  FReadAccessScope local_78;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.Data.ArrayNum = 0;
  local_f0.Data.ArrayMax = 0;
  local_108._0_8_ = 0;
  local_108._16_8_ = 0;
  local_108._8_8_ = 0;
  FUtf8String::Reset(&local_f0,0);
  FSoftClassProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  local_138.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_130 = 0;
  local_128 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  this = &local_138;
  if ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2->MostRecentPropertyAddress
      != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (this,(FReadAccessScope *)local_120);
  local_b0 = this[1].AccessDetector.State;
  local_a8 = this[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_120);
  FVar2.Data = local_f0.Data.AllocatorInstance.Data;
  sVar4 = (size_t)local_f0.Data.ArrayNum;
  local_e0._0_8_ = local_108._0_8_;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = local_f0.Data.ArrayNum;
  local_e0._8_8_ = local_108._8_8_;
  local_e0._16_8_ = local_108._16_8_;
  if (local_f0.Data.ArrayNum == 0) {
    local_bc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_f0.Data.ArrayNum,0,&local_c8,local_f0.Data.ArrayNum,&local_bc);
    memcpy(local_c8.Data,FVar2.Data,sVar4);
  }
  local_120._0_8_ = (atomic<unsigned___int64>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_78);
  local_120._8_8_ = local_b0;
  local_120._16_8_ = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_78);
  local_58[0] = (code *)0x0;
  ppcVar3 = FMemory::Malloc(0x20,8);
  ppcVar3[1] = (code *)0x0;
  ppcVar3[2] = (code *)0x0;
  *ppcVar3 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`UCommonLazyWidget::SetLazyContentWithCallback'::`2'::<lambda_1>,0,1>
                      ::_vftable_;
  ppcVar3[3] = (code *)0x0;
  local_30 = ppcVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_120,&local_78);
  *(undefined8 *)(ppcVar3 + 2) = local_120._8_8_;
  *(undefined8 *)(ppcVar3 + 3) = local_120._16_8_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_78);
  FVar2.Data = local_c8.Data;
  sVar4 = (size_t)local_c0;
  if (ppcVar3 != (code **)&DAT_fffffffffffffff8) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UCommonLazyWidget::SetLazyContentWithCallback'::__l2::<lambda_1>,void,UUserWidget_&>
                  ::Call;
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  local_a0._0_8_ = local_e0._0_8_;
  local_80 = local_c0;
  local_a0._8_8_ = local_e0._8_8_;
  local_a0._16_8_ = local_e0._16_8_;
  if (local_c0 == 0) {
    local_7c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_c0,0,&local_88,local_c0,&local_7c);
    memcpy(local_88.Data,FVar2.Data,sVar4);
  }
  SetLazyContentInternal<UUserWidget>
            ((UCommonLazyWidget *)param_1,(TSoftClassPtr<UUserWidget> *)local_a0,
             (TFunction<void___cdecl(UUserWidget_&)> *)local_58);
  if (local_58[0] != (code *)0x0) {
    ppcVar3 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar3 = local_30;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_120);
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_138.AccessDetector);
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  return;
}

