// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 55

// StaticClass @ 14d829760

UClass * __cdecl URadialSlider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URadialSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AdvancedWidgets",L"RadialSlider",
               &Z_Registration_Info_UClass_URadialSlider.InnerSingleton,
               StaticRegisterNativesURadialSlider,0x7b0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URadialSlider>,
               InternalVTableHelperCtorCaller<URadialSlider>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URadialSlider.InnerSingleton;
}

// URadialSlider @ 14d837d40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

URadialSlider * __thiscall URadialSlider::URadialSlider(URadialSlider *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined8 *)&this->ValueDelegate = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&(this->ValueDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ValueDelegate).field_0x10 = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->SliderRange);
  (this->ValueTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValueTags).ArrayNum = 0;
  (this->ValueTags).ArrayMax = 0;
  FSliderStyle::FSliderStyle(&this->WidgetStyle);
  *(undefined8 *)&this->OnMouseCaptureBegin = 0;
  *(undefined8 *)&(this->OnMouseCaptureBegin).field_0x8 = 0;
  *(undefined8 *)&(this->OnMouseCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->OnMouseCaptureEnd = 0;
  *(undefined8 *)&(this->OnMouseCaptureEnd).field_0x8 = 0;
  *(undefined8 *)&(this->OnMouseCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&this->OnControllerCaptureBegin = 0;
  *(undefined8 *)&(this->OnControllerCaptureBegin).field_0x8 = 0;
  *(undefined8 *)&(this->OnControllerCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->OnControllerCaptureEnd = 0;
  *(undefined8 *)&(this->OnControllerCaptureEnd).field_0x8 = 0;
  *(undefined8 *)&(this->OnControllerCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&this->OnValueChanged = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x10 = 0;
  (this->MyRadialSlider).Object = (SRadialSlider *)0x0;
  (this->MyRadialSlider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// URadialSlider @ 14d837e30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

URadialSlider * __thiscall
URadialSlider::URadialSlider(URadialSlider *this,FObjectInitializer *param_1)

{
  FLinearColor FVar1;
  FRichCurve *pFVar2;
  FKeyHandle *pFVar3;
  FSliderStyle *pFVar4;
  ISlateStyle *pIVar5;
  FName *pFVar6;
  FSliderStyle *pFVar7;
  undefined1 in_R9B;
  float in_XMM1_Da;
  FKeyHandle local_res8 [6];
  FName local_res20;
  uint in_stack_ffffffffffffffc8;
  FKeyHandle FVar8;
  uint uVar9;
  
  UWidget::UWidget((UWidget *)this,param_1);
  pFVar7 = (FSliderStyle *)0x0;
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined8 *)&this->ValueDelegate = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&(this->ValueDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ValueDelegate).field_0x10 = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->SliderRange);
  (this->ValueTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValueTags).ArrayNum = 0;
  (this->ValueTags).ArrayMax = 0;
  FSliderStyle::FSliderStyle(&this->WidgetStyle);
  *(undefined8 *)&this->OnMouseCaptureBegin = 0;
  *(undefined8 *)&(this->OnMouseCaptureBegin).field_0x8 = 0;
  *(undefined8 *)&(this->OnMouseCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->OnMouseCaptureEnd = 0;
  *(undefined8 *)&(this->OnMouseCaptureEnd).field_0x8 = 0;
  *(undefined8 *)&(this->OnMouseCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&this->OnControllerCaptureBegin = 0;
  *(undefined8 *)&(this->OnControllerCaptureBegin).field_0x8 = 0;
  *(undefined8 *)&(this->OnControllerCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->OnControllerCaptureEnd = 0;
  *(undefined8 *)&(this->OnControllerCaptureEnd).field_0x8 = 0;
  *(undefined8 *)&(this->OnControllerCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&this->OnValueChanged = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x10 = 0;
  (this->MyRadialSlider).Object = (SRadialSlider *)0x0;
  (this->MyRadialSlider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bUseCustomDefaultValue = false;
  this->CustomDefaultValue = 0.0;
  pFVar2 = FRuntimeFloatCurve::GetRichCurve(&this->SliderRange);
  FKeyHandle::FKeyHandle(local_res8);
  FVar8.Index = in_stack_ffffffffffffffc8 & 0xffffff00;
  FRichCurve::AddKey(pFVar2,in_XMM1_Da,0.0,(bool)in_R9B,FVar8);
  pFVar2 = FRuntimeFloatCurve::GetRichCurve(&this->SliderRange);
  pFVar3 = FKeyHandle::FKeyHandle(local_res8);
  uVar9 = pFVar3->Index;
  FRichCurve::AddKey(pFVar2,in_XMM1_Da,__real_3f800000,(bool)in_R9B,
                     (FKeyHandle)(FVar8.Index & 0xffffff00));
  this->SliderHandleStartAngle = 60.0;
  this->SliderHandleEndAngle = 300.0;
  this->AngularOffset = 0.0;
  (this->HandStartEndRatio).field0_0x0._s_0.X = 0.0;
  (this->HandStartEndRatio).field0_0x0._s_0.Y = 1.0;
  pFVar4 = DefaultSliderStyle;
  (this->SliderBarColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Gray.field0_0x0;
  (this->SliderProgressColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0
  ;
  (this->SliderHandleColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  FVar1 = FLinearColor::Transparent;
  this->StepSize = 0.01;
  this->IsFocusable = true;
  this->UseVerticalDrag = false;
  this->ShowSliderHandle = true;
  this->ShowSliderHand = false;
  this->MouseUsesStep = false;
  this->RequiresControllerLock = true;
  (this->CenterBackgroundColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  if (pFVar4 == (FSliderStyle *)0x0) {
    pFVar4 = ::operator_new(0x440);
    if (pFVar4 != (FSliderStyle *)0x0) {
      pIVar5 = FAppStyle::Get();
      pFVar6 = ::FName::FName(&local_res20,"Slider");
      pFVar7 = (FSliderStyle *)
               (**(code **)((longlong)*pIVar5 + 0xa0))
                         (pIVar5,FSliderStyle::TypeName,*pFVar6,0,1,uVar9);
      if (pFVar7 == (FSliderStyle *)0x0) {
        pFVar7 = FSliderStyle::GetDefault();
      }
      pFVar7 = FSliderStyle::FSliderStyle(pFVar4,pFVar7);
    }
    DefaultSliderStyle = pFVar7;
    FSliderStyle::UnlinkColors(pFVar7);
    pFVar4 = DefaultSliderStyle;
  }
  FSliderStyle::operator=(&this->WidgetStyle,pFVar4);
  return this;
}

// ~URadialSlider @ 14d83b8a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall URadialSlider::~URadialSlider(URadialSlider *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyRadialSlider).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChanged);
  pvVar1 = *(void **)&(this->OnControllerCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnControllerCaptureEnd);
  pvVar1 = *(void **)&(this->OnControllerCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnControllerCaptureBegin);
  pvVar1 = *(void **)&(this->OnMouseCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseCaptureEnd);
  pvVar1 = *(void **)&(this->OnMouseCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseCaptureBegin);
  FSliderStyle::~FSliderStyle(&this->WidgetStyle);
  pFVar2 = (this->ValueTags).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SliderRange).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->SliderRange).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar1 = (void *)(this->SliderRange).EditorCurveData._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->SliderRange).EditorCurveData._padding_ = 0;
  pvVar1 = (void *)(this->SliderRange).EditorCurveData._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->SliderRange).EditorCurveData._padding_);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ValueDelegate);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetAccessibleWidget @ 14d865960

TSharedPtr<SWidget,1> * __thiscall
URadialSlider::GetAccessibleWidget
          (URadialSlider *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (SWidget *)(this->MyRadialSlider).Object;
  pTVar1 = (this->MyRadialSlider).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetCustomDefaultValue @ 14d8671e0

float __thiscall URadialSlider::GetCustomDefaultValue(URadialSlider *this)

{
  SRadialSlider *pSVar1;
  float *pfVar2;
  
  pSVar1 = (this->MyRadialSlider).Object;
  if (pSVar1 != (SRadialSlider *)0x0) {
    pfVar2 = TAttribute<float>::Get(&pSVar1->CustomDefaultValue);
    return *pfVar2;
  }
  return this->Value;
}

// GetNormalizedSliderHandlePosition @ 14d8692d0

float __thiscall URadialSlider::GetNormalizedSliderHandlePosition(URadialSlider *this)

{
  SRadialSlider *this_00;
  float *pfVar1;
  float fVar2;
  
  this_00 = (this->MyRadialSlider).Object;
  if (this_00 != (SRadialSlider *)0x0) {
    pfVar1 = TAttribute<float>::Get(&this_00->ValueAttribute);
    fVar2 = SRadialSlider::GetNormalizedValue(this_00,*pfVar1);
    return fVar2;
  }
  return 0.0;
}

// GetPrivateStaticClass @ 14d86ac80

UClass * __cdecl URadialSlider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URadialSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AdvancedWidgets",L"RadialSlider",
               &Z_Registration_Info_UClass_URadialSlider.InnerSingleton,
               StaticRegisterNativesURadialSlider,0x7b0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URadialSlider>,
               InternalVTableHelperCtorCaller<URadialSlider>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URadialSlider.InnerSingleton;
}

// GetValue @ 14d86d850

float __thiscall URadialSlider::GetValue(URadialSlider *this)

{
  SRadialSlider *pSVar1;
  float *pfVar2;
  
  pSVar1 = (this->MyRadialSlider).Object;
  if (pSVar1 != (SRadialSlider *)0x0) {
    pfVar2 = TAttribute<float>::Get(&pSVar1->ValueAttribute);
    return *pfVar2;
  }
  return this->Value;
}

// HandleOnControllerCaptureBegin @ 14d8701a0

void __thiscall URadialSlider::HandleOnControllerCaptureBegin(URadialSlider *this)

{
  FOnControllerCaptureBeginEvent_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnControllerCaptureBegin
            );
  return;
}

// HandleOnControllerCaptureEnd @ 14d8701c0

void __thiscall URadialSlider::HandleOnControllerCaptureEnd(URadialSlider *this)

{
  FOnControllerCaptureEndEvent_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnControllerCaptureEnd);
  return;
}

// HandleOnMouseCaptureBegin @ 14d8701e0

void __thiscall URadialSlider::HandleOnMouseCaptureBegin(URadialSlider *this)

{
  FOnMouseCaptureBeginEvent_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureBegin);
  return;
}

// HandleOnMouseCaptureEnd @ 14d870200

void __thiscall URadialSlider::HandleOnMouseCaptureEnd(URadialSlider *this)

{
  FOnMouseCaptureEndEvent_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd);
  return;
}

// HandleOnValueChanged @ 14d870220

void __thiscall URadialSlider::HandleOnValueChanged(URadialSlider *this,float param_1)

{
  FOnFloatValueChangedEvent_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnValueChanged,param_1);
  return;
}

// RebuildWidget @ 14d881f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<SWidget,1> * __thiscall
URadialSlider::RebuildWidget(URadialSlider *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  SRadialSlider *pSVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  FArguments *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  TSharedRef<SWidget,1> *pTVar12;
  undefined1 auStackY_7e8 [32];
  FMemScope local_7b8;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  T0RequiredArgs local_7a8 [4];
  FLLMScope local_7a4;
  undefined1 local_7a0 [8];
  FDelegateAllocation local_798;
  undefined1 local_788 [8];
  FDelegateAllocation local_780;
  undefined1 local_770 [8];
  FDelegateAllocation local_768;
  undefined1 local_758 [8];
  FDelegateAllocation local_750;
  undefined1 local_740 [8];
  FDelegateAllocation local_738;
  TSlateDecl<SRadialSlider,RequiredArgs::T0RequiredArgs> local_728;
  SRadialSlider *local_710;
  FSharedReferencer<1> local_708;
  URadialSlider *local_700;
  URadialSlider *local_6f8;
  URadialSlider *local_6f0;
  URadialSlider *local_6e8;
  URadialSlider *local_6e0;
  FName local_6d8;
  FDestructionSentinel local_6d0;
  FDestructionSentinel local_6b8;
  FDestructionSentinel local_6a0;
  FDestructionSentinel local_688;
  FDestructionSentinel local_670;
  FDestructionSentinel local_658;
  FDelegateAllocation *local_640;
  FDestructionSentinel local_638;
  FDelegateAllocation *local_620;
  FDestructionSentinel local_618;
  FDelegateAllocation *local_600;
  FDestructionSentinel local_5f8;
  FDelegateAllocation *local_5e0;
  FDestructionSentinel local_5d8;
  FDelegateAllocation *local_5c0;
  FArguments local_5b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_7e8;
  pFVar9 = SRadialSlider::FArguments::FArguments(&local_5b8);
  uStack_7b0 = 0;
  pFVar9->_Style = &this->WidgetStyle;
  pFVar9->_IsFocusable = this->IsFocusable;
  local_7b8 = (FMemScope)HandleOnMouseCaptureBegin;
  local_740 = (undefined1  [8])0x0;
  local_738.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_738.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_740,
             (FWriteAccessScope *)&local_658);
  local_640 = &local_738;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_738);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VURadialSlider____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_700 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_700);
    *(FMemScope *)(puVar10 + 4) = local_7b8;
    puVar10[5] = CONCAT44(uStack_7ac,uStack_7b0);
  }
  if (local_658.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_658.Accessor,&local_658);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnMouseCaptureBegin,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_740);
  uStack_7b0 = 0;
  local_7b8 = (FMemScope)HandleOnMouseCaptureEnd;
  local_758 = (undefined1  [8])0x0;
  local_750.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_750.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_758,
             (FWriteAccessScope *)&local_638);
  local_620 = &local_750;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_750);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VURadialSlider____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_6f8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_6f8);
    *(FMemScope *)(puVar10 + 4) = local_7b8;
    puVar10[5] = CONCAT44(uStack_7ac,uStack_7b0);
  }
  if (local_638.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_638.Accessor,&local_638);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnMouseCaptureEnd,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_758);
  uStack_7b0 = 0;
  local_7b8 = (FMemScope)HandleOnControllerCaptureBegin;
  local_770 = (undefined1  [8])0x0;
  local_768.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_768.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_770,
             (FWriteAccessScope *)&local_618);
  local_600 = &local_768;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_768);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VURadialSlider____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_6f0 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_6f0);
    *(FMemScope *)(puVar10 + 4) = local_7b8;
    puVar10[5] = CONCAT44(uStack_7ac,uStack_7b0);
  }
  if (local_618.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_618.Accessor,&local_618);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnControllerCaptureBegin,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_770);
  uStack_7b0 = 0;
  local_7b8 = (FMemScope)HandleOnControllerCaptureEnd;
  local_788 = (undefined1  [8])0x0;
  local_780.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_780.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_788,
             (FWriteAccessScope *)&local_5f8);
  local_5e0 = &local_780;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_780);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VURadialSlider____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_6e8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_6e8);
    *(FMemScope *)(puVar10 + 4) = local_7b8;
    puVar10[5] = CONCAT44(uStack_7ac,uStack_7b0);
  }
  if (local_5f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5f8.Accessor,&local_5f8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnControllerCaptureEnd,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_788);
  uStack_7b0 = 0;
  local_7b8 = (FMemScope)HandleOnValueChanged;
  local_7a0 = (undefined1  [8])0x0;
  local_798.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_798.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7a0,
             (FWriteAccessScope *)&local_5d8);
  local_5c0 = &local_798;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_798);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VURadialSlider____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_6e0 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_6e0);
    *(FMemScope *)(puVar10 + 4) = local_7b8;
    puVar10[5] = CONCAT44(uStack_7ac,uStack_7b0);
  }
  if (local_5d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5d8.Accessor,&local_5d8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnValueChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7a0);
  FLLMScope::FLLMScope(&local_7a4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_6d8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_7b8,&local_6d8,true);
  TSlateDecl<SRadialSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SRadialSlider,RequiredArgs::T0RequiredArgs>
            (&local_728,"SRadialSlider",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Components\\RadialSlider.cpp"
             ,0x3d,local_7a8);
  FMemScope::~FMemScope(&local_7b8);
  FLLMScope::~FLLMScope(&local_7a4);
  pSVar3 = local_728._Widget.Object;
  if (local_728._Widget.Object == (SRadialSlider *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar12;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_728._Widget.Object,(FSlateBaseNamedArgs *)pFVar9);
  SRadialSlider::Construct(local_728._Widget.Object,pFVar9);
  if (local_728._Widget.Object == (SRadialSlider *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar12;
    }
  }
  if (((local_728._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_728._Widget.Object)->_padding_ + 0x228))(local_728._Widget.Object);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_14d8824c3;
  }
  bVar8 = 0x20;
LAB_14d8824c3:
  *(byte *)&(local_728._Widget.Object)->_padding_ =
       (byte)(local_728._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_728._Widget.Object)->_padding_ =
       (byte)(local_728._Widget.Object)->_padding_ | bVar8;
  if (local_728._Widget.Object == (SRadialSlider *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar12;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_728._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_728._Widget.Object == (SRadialSlider *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar12;
    }
  }
  FVar5.ReferenceController = local_728._Widget.SharedReferenceCount.ReferenceController;
  local_728._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_728._Widget.Object = (SRadialSlider *)0x0;
  if (pSVar3 == (SRadialSlider *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar12;
    }
  }
  local_710 = pSVar3;
  local_708.ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyRadialSlider != (TSharedPtr<SRadialSlider,1> *)&local_710) {
    (this->MyRadialSlider).Object = pSVar3;
    local_710 = (SRadialSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyRadialSlider).SharedReferenceCount,&local_708);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_708.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7a0,
             (FWriteAccessScope *)&local_6d0);
  if ((local_798.DelegateSize != 0) &&
     (local_798.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_798.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_798,0,0,0x10);
    local_798.DelegateSize = 0;
  }
  if (local_6d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6d0.Accessor,&local_6d0);
  }
  if (local_798.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_798.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_788,
             (FWriteAccessScope *)&local_6b8);
  if ((local_780.DelegateSize != 0) &&
     (local_780.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_780.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_780,0,0,0x10);
    local_780.DelegateSize = 0;
  }
  if (local_6b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6b8.Accessor,&local_6b8);
  }
  if (local_780.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_780.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_788);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_770,
             (FWriteAccessScope *)&local_6a0);
  if ((local_768.DelegateSize != 0) &&
     (local_768.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_768.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_768,0,0,0x10);
    local_768.DelegateSize = 0;
  }
  if (local_6a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6a0.Accessor,&local_6a0);
  }
  if (local_768.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_768.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_770);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_758,
             (FWriteAccessScope *)&local_688);
  if ((local_750.DelegateSize != 0) &&
     (local_750.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_750.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_750,0,0,0x10);
    local_750.DelegateSize = 0;
  }
  if (local_688.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_688.Accessor,&local_688);
  }
  if (local_750.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_750.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_758);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_740,
             (FWriteAccessScope *)&local_670);
  if ((local_738.DelegateSize != 0) &&
     (local_738.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_738.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_738,0,0,0x10);
    local_738.DelegateSize = 0;
  }
  if (local_670.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_670.Accessor,&local_670);
  }
  if (local_738.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_738.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_740);
  SRadialSlider::FArguments::~FArguments(&local_5b8);
  if ((this->MyRadialSlider).Object == (SRadialSlider *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar12;
    }
  }
  pTVar2 = (this->MyRadialSlider).SharedReferenceCount.ReferenceController;
  pSVar3 = (this->MyRadialSlider).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SRadialSlider *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar12;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 14d884410

void __thiscall URadialSlider::ReleaseSlateResources(URadialSlider *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UVisual::ReleaseSlateResources((UVisual *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyRadialSlider != (TSharedPtr<SRadialSlider,1> *)&local_18) {
    (this->MyRadialSlider).Object = (SRadialSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyRadialSlider).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetAngularOffset @ 14d8866b0

void __thiscall URadialSlider::SetAngularOffset(URadialSlider *this,float param_1)

{
  SRadialSlider *pSVar1;
  
  pSVar1 = (this->MyRadialSlider).Object;
  this->AngularOffset = param_1;
  if (pSVar1 != (SRadialSlider *)0x0) {
    pSVar1->AngularOffset = param_1;
  }
  return;
}

// SetCenterBackgroundColor @ 14d8867b0

void __thiscall URadialSlider::SetCenterBackgroundColor(URadialSlider *this,FLinearColor *param_1)

{
  SRadialSlider *this_00;
  FLinearColor_u_0 local_48;
  uint local_38;
  uint local_18;
  
  local_48._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_48._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->CenterBackgroundColor).field0_0x0 = local_48._0_8_;
  *(undefined8 *)((longlong)&(this->CenterBackgroundColor).field0_0x0 + 8) = local_48._8_8_;
  this_00 = (this->MyRadialSlider).Object;
  if (this_00 != (SRadialSlider *)0x0) {
    local_18 = local_18 & 0xffffff00;
    local_38 = local_18;
    SRadialSlider::SetCenterBackgroundColor(this_00,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// SetCustomDefaultValue @ 14d886910

void __thiscall URadialSlider::SetCustomDefaultValue(URadialSlider *this,float param_1)

{
  SRadialSlider *pSVar1;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->CustomDefaultValue = param_1;
  pSVar1 = (this->MyRadialSlider).Object;
  if (pSVar1 != (SRadialSlider *)0x0) {
    local_18 = 0;
    local_30[4] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30._0_4_ = param_1;
    SetWidgetAttribute<float,float>
              ((SWidget *)pSVar1,&pSVar1->CustomDefaultValue,(TAttribute<float> *)local_30,Paint);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// SetHandStartEndRatio @ 14d886d70

void __thiscall URadialSlider::SetHandStartEndRatio(URadialSlider *this,TVector2<double> *param_1)

{
  SRadialSlider *pSVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  pSVar1 = (this->MyRadialSlider).Object;
  (this->HandStartEndRatio).field0_0x0._s_0.X = dVar2;
  (this->HandStartEndRatio).field0_0x0._s_0.Y = dVar3;
  if (pSVar1 != (SRadialSlider *)0x0) {
    if (__real_3ff0000000000000 <= dVar3) {
      dVar3 = __real_3ff0000000000000;
    }
    if (__real_3ff0000000000000 <= dVar2) {
      dVar2 = __real_3ff0000000000000;
    }
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    (pSVar1->HandStartEndRatio).field0_0x0._s_0.X = dVar2;
    if (dVar3 < dVar2) {
      (pSVar1->HandStartEndRatio).field0_0x0._s_0.Y = dVar2;
      return;
    }
    (pSVar1->HandStartEndRatio).field0_0x0._s_0.Y = dVar3;
  }
  return;
}

// SetLocked @ 14d887200

void __thiscall URadialSlider::SetLocked(URadialSlider *this,bool param_1)

{
  SRadialSlider *pSVar1;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->Locked = param_1;
  pSVar1 = (this->MyRadialSlider).Object;
  if (pSVar1 != (SRadialSlider *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    SetWidgetAttribute<bool,bool>
              ((SWidget *)pSVar1,&pSVar1->LockedAttribute,(TAttribute<bool> *)local_30,Paint);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// SetShowSliderHand @ 14d887ff0

void __thiscall URadialSlider::SetShowSliderHand(URadialSlider *this,bool param_1)

{
  SRadialSlider *pSVar1;
  
  pSVar1 = (this->MyRadialSlider).Object;
  this->ShowSliderHand = param_1;
  if (pSVar1 != (SRadialSlider *)0x0) {
    pSVar1->bShowSliderHand = param_1;
  }
  return;
}

// SetShowSliderHandle @ 14d888020

void __thiscall URadialSlider::SetShowSliderHandle(URadialSlider *this,bool param_1)

{
  SRadialSlider *pSVar1;
  
  pSVar1 = (this->MyRadialSlider).Object;
  this->ShowSliderHandle = param_1;
  if (pSVar1 != (SRadialSlider *)0x0) {
    pSVar1->bShowSliderHandle = param_1;
  }
  return;
}

// SetSliderBarColor @ 14d888110

void __thiscall URadialSlider::SetSliderBarColor(URadialSlider *this,FLinearColor *param_1)

{
  SRadialSlider *this_00;
  FLinearColor_u_0 local_48;
  uint local_38;
  uint local_18;
  
  local_48._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_48._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->SliderBarColor).field0_0x0 = local_48._0_8_;
  *(undefined8 *)((longlong)&(this->SliderBarColor).field0_0x0 + 8) = local_48._8_8_;
  this_00 = (this->MyRadialSlider).Object;
  if (this_00 != (SRadialSlider *)0x0) {
    local_18 = local_18 & 0xffffff00;
    local_38 = local_18;
    SRadialSlider::SetSliderBarColor(this_00,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// SetSliderHandleColor @ 14d888230

void __thiscall URadialSlider::SetSliderHandleColor(URadialSlider *this,FLinearColor *param_1)

{
  SRadialSlider *this_00;
  FLinearColor_u_0 local_48;
  uint local_38;
  uint local_18;
  
  local_48._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_48._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->SliderHandleColor).field0_0x0 = local_48._0_8_;
  *(undefined8 *)((longlong)&(this->SliderHandleColor).field0_0x0 + 8) = local_48._8_8_;
  this_00 = (this->MyRadialSlider).Object;
  if (this_00 != (SRadialSlider *)0x0) {
    local_18 = local_18 & 0xffffff00;
    local_38 = local_18;
    SRadialSlider::SetSliderHandleColor(this_00,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// SetSliderHandleEndAngle @ 14d888280

void __thiscall URadialSlider::SetSliderHandleEndAngle(URadialSlider *this,float param_1)

{
  float fVar1;
  SRadialSlider *pSVar2;
  
  pSVar2 = (this->MyRadialSlider).Object;
  this->SliderHandleEndAngle = param_1;
  if (pSVar2 != (SRadialSlider *)0x0) {
    fVar1 = this->SliderHandleStartAngle;
    pSVar2->SliderHandleStartAngle = fVar1;
    pSVar2->SliderHandleEndAngle = param_1;
    if (param_1 < fVar1) {
      pSVar2->SliderHandleEndAngle = fVar1;
    }
  }
  return;
}

// SetSliderHandleStartAngle @ 14d8882c0

void __thiscall URadialSlider::SetSliderHandleStartAngle(URadialSlider *this,float param_1)

{
  float fVar1;
  SRadialSlider *pSVar2;
  
  pSVar2 = (this->MyRadialSlider).Object;
  this->SliderHandleStartAngle = param_1;
  if (pSVar2 != (SRadialSlider *)0x0) {
    fVar1 = this->SliderHandleEndAngle;
    pSVar2->SliderHandleStartAngle = param_1;
    pSVar2->SliderHandleEndAngle = fVar1;
    if (fVar1 < param_1) {
      pSVar2->SliderHandleEndAngle = param_1;
    }
  }
  return;
}

// SetSliderProgressColor @ 14d888400

void __thiscall URadialSlider::SetSliderProgressColor(URadialSlider *this,FLinearColor *param_1)

{
  SRadialSlider *this_00;
  FLinearColor_u_0 local_48;
  uint local_38;
  uint local_18;
  
  local_48._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_48._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->SliderProgressColor).field0_0x0 = local_48._0_8_;
  *(undefined8 *)((longlong)&(this->SliderProgressColor).field0_0x0 + 8) = local_48._8_8_;
  this_00 = (this->MyRadialSlider).Object;
  if (this_00 != (SRadialSlider *)0x0) {
    local_18 = local_18 & 0xffffff00;
    local_38 = local_18;
    SRadialSlider::SetSliderProgressColor(this_00,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// SetSliderRange @ 14d888450

void __thiscall URadialSlider::SetSliderRange(URadialSlider *this,FRuntimeFloatCurve *param_1)

{
  SRadialSlider *pSVar1;
  
  FRuntimeFloatCurve::operator=(&this->SliderRange,param_1);
  pSVar1 = (this->MyRadialSlider).Object;
  if (pSVar1 != (SRadialSlider *)0x0) {
    FRuntimeFloatCurve::operator=(&pSVar1->SliderRange,param_1);
  }
  return;
}

// SetStepSize @ 14d8884d0

void __thiscall URadialSlider::SetStepSize(URadialSlider *this,float param_1)

{
  SRadialSlider *pSVar1;
  FDestructionSentinel local_48;
  float local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->StepSize = param_1;
  pSVar1 = (this->MyRadialSlider).Object;
  if (pSVar1 != (SRadialSlider *)0x0) {
    local_2c = 1;
    local_18 = 0;
    local_28 = (undefined1  [8])0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    (pSVar1->StepSize).Value = param_1;
    (pSVar1->StepSize).bIsSet = true;
    local_30 = param_1;
    TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&(pSVar1->StepSize).Getter,
               (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  return;
}

// SetUseVerticalDrag @ 14d888780

void __thiscall URadialSlider::SetUseVerticalDrag(URadialSlider *this,bool param_1)

{
  SRadialSlider *pSVar1;
  
  pSVar1 = (this->MyRadialSlider).Object;
  this->UseVerticalDrag = param_1;
  if (pSVar1 != (SRadialSlider *)0x0) {
    pSVar1->bUseVerticalDrag = param_1;
  }
  return;
}

// SetValue @ 14d8887c0

void __thiscall URadialSlider::SetValue(URadialSlider *this,float param_1)

{
  SRadialSlider *pSVar1;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->Value = param_1;
  pSVar1 = (this->MyRadialSlider).Object;
  if (pSVar1 != (SRadialSlider *)0x0) {
    local_18 = 0;
    local_30[4] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30._0_4_ = param_1;
    SetWidgetAttribute<float,float>
              ((SWidget *)pSVar1,&pSVar1->ValueAttribute,(TAttribute<float> *)local_30,Paint);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// SetValueTags @ 14d8888a0

void __thiscall
URadialSlider::SetValueTags(URadialSlider *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  SRadialSlider *pSVar1;
  
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->ValueTags,param_1);
  pSVar1 = (this->MyRadialSlider).Object;
  if (pSVar1 != (SRadialSlider *)0x0) {
    TArray<float,TSizedDefaultAllocator<32>_>::operator=(&pSVar1->ValueTags,&this->ValueTags);
  }
  return;
}

// StaticRegisterNativesURadialSlider @ 14d888d80

void __cdecl URadialSlider::StaticRegisterNativesURadialSlider(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x14;
  local_18.DataPtr = Z_Construct_UClass_URadialSlider_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 14d888ed0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall URadialSlider::SynchronizeProperties(URadialSlider *this)

{
  FGetFloat *this_00;
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  FName FVar4;
  FName FVar5;
  SRadialSlider *pSVar6;
  code *pcVar7;
  bool bVar8;
  FRichCurve *pFVar9;
  UObject *pUVar10;
  UFunction *pUVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  uint uVar14;
  FMRSWRecursiveAccessDetector *this_01;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  double dVar21;
  double dVar22;
  UObject *local_res18;
  undefined1 local_370 [8];
  ForAnyElementType FStack_368;
  ulonglong local_360;
  undefined1 local_358 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_350;
  ForAnyElementType FStack_348;
  ulonglong local_340;
  undefined1 local_338 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_330;
  ForAnyElementType FStack_328;
  ulonglong local_320;
  undefined1 local_318 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_310;
  ForAnyElementType FStack_308;
  ulonglong local_300;
  float local_2f8;
  undefined1 local_2f4;
  undefined1 local_2f0 [8];
  FDelegateAllocation FStack_2e8;
  FLinearColor_u_0 local_2d8;
  undefined1 local_2c8;
  undefined2 local_2c7;
  undefined1 local_2c5;
  undefined1 local_2c4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2c0;
  ForAnyElementType FStack_2b8;
  ulonglong local_2b0;
  FLinearColor_u_0 local_2a8;
  undefined1 local_298;
  undefined2 local_297;
  undefined1 local_295;
  undefined1 local_294;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_290;
  ForAnyElementType FStack_288;
  ulonglong local_280;
  FLinearColor_u_0 local_278;
  undefined1 local_268;
  undefined2 local_267;
  undefined1 local_265;
  undefined1 local_264;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_260;
  ForAnyElementType FStack_258;
  ulonglong local_250;
  FLinearColor_u_0 local_248;
  undefined1 local_238;
  undefined2 local_237;
  undefined1 local_235;
  undefined1 local_234;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_230;
  ForAnyElementType FStack_228;
  ulonglong local_220;
  float local_218;
  undefined1 local_214;
  undefined1 local_210 [8];
  void *pvStack_208;
  undefined8 local_200;
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [24];
  FDestructionSentinel local_1d8;
  FDestructionSentinel local_1c0;
  FDestructionSentinel local_1a8;
  FDestructionSentinel local_190;
  FDestructionSentinel local_178;
  FDestructionSentinel local_160;
  FDestructionSentinel local_148;
  FDestructionSentinel local_130;
  FDestructionSentinel local_118;
  FDestructionSentinel local_100;
  FDelegateAllocation *local_e8;
  FReadAccessScope local_e0;
  undefined2 local_b7;
  undefined1 local_b5;
  undefined2 local_9f;
  undefined1 local_9d;
  undefined2 local_87;
  undefined1 local_85;
  undefined2 local_6f;
  undefined1 local_6d;
  FReadAccessScope local_68 [2];
  
  uVar16 = 0;
  UWidget::SynchronizeProperties((UWidget *)this);
  if ((this->MyRadialSlider).Object == (SRadialSlider *)0x0) {
    return;
  }
  pFVar9 = FRuntimeFloatCurve::GetRichCurve(&this->SliderRange);
  if (0 < (pFVar9->Keys).ArrayNum + -1) {
    iVar17 = 1;
    uVar20 = uVar16;
    do {
      uVar15 = (uint)uVar16;
      if (0 < (int)uVar15) {
        uVar14 = 0;
        if (iVar17 + -2 < (pFVar9->Keys).ArrayNum) {
          uVar14 = -uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar18 = ~uVar15 >> 0x1f;
        fVar2 = *(float *)((pFVar9->Keys).AllocatorInstance.Data + (uVar20 - 0x18));
        uVar14 = 0;
        if ((int)uVar15 < (pFVar9->Keys).ArrayNum) {
          uVar14 = uVar18;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar1 = (pFVar9->Keys).AllocatorInstance.Data + uVar20 + 4;
        uVar14 = 0;
        if (*(float *)pFVar1 <= fVar2 && fVar2 != *(float *)pFVar1) {
          uVar19 = uVar14;
          if ((int)uVar15 < (pFVar9->Keys).ArrayNum) {
            uVar19 = uVar18;
          }
          if ((uVar19 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(float *)((pFVar9->Keys).AllocatorInstance.Data + uVar20 + 4) = fVar2;
        }
        uVar19 = uVar14;
        if ((int)(uVar15 - 1) < (pFVar9->Keys).ArrayNum) {
          uVar19 = -uVar15 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar2 = *(float *)((pFVar9->Keys).AllocatorInstance.Data + (uVar20 - 0x14));
        uVar19 = uVar14;
        if ((int)uVar15 < (pFVar9->Keys).ArrayNum) {
          uVar19 = uVar18;
        }
        if ((uVar19 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar1 = (pFVar9->Keys).AllocatorInstance.Data + uVar20 + 8;
        if (*(float *)pFVar1 <= fVar2 && fVar2 != *(float *)pFVar1) {
          if ((int)uVar15 < (pFVar9->Keys).ArrayNum) {
            uVar14 = uVar18;
          }
          if ((uVar14 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(float *)((pFVar9->Keys).AllocatorInstance.Data + uVar20 + 8) = fVar2;
        }
      }
      uVar18 = uVar15 + 1;
      uVar14 = 0;
      if ((int)uVar18 < (pFVar9->Keys).ArrayNum) {
        uVar14 = ~uVar18 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar19 = ~uVar15 >> 0x1f;
      fVar2 = *(float *)((pFVar9->Keys).AllocatorInstance.Data + uVar20 + 0x20);
      uVar14 = 0;
      if ((int)uVar15 < (pFVar9->Keys).ArrayNum) {
        uVar14 = uVar19;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (fVar2 < *(float *)((pFVar9->Keys).AllocatorInstance.Data + uVar20 + 4)) {
        uVar14 = 0;
        if ((int)uVar15 < (pFVar9->Keys).ArrayNum) {
          uVar14 = uVar19;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(float *)((pFVar9->Keys).AllocatorInstance.Data + uVar20 + 4) = fVar2;
      }
      uVar14 = 0;
      if ((int)uVar18 < (pFVar9->Keys).ArrayNum) {
        uVar14 = ~uVar18 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar2 = *(float *)((pFVar9->Keys).AllocatorInstance.Data + uVar20 + 0x24);
      uVar14 = 0;
      if ((int)uVar15 < (pFVar9->Keys).ArrayNum) {
        uVar14 = uVar19;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (fVar2 < *(float *)((pFVar9->Keys).AllocatorInstance.Data + uVar20 + 8)) {
        uVar14 = 0;
        if ((int)uVar15 < (pFVar9->Keys).ArrayNum) {
          uVar14 = uVar19;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(float *)((pFVar9->Keys).AllocatorInstance.Data + uVar20 + 8) = fVar2;
      }
      iVar17 = iVar17 + 1;
      uVar16 = (ulonglong)uVar18;
      uVar20 = uVar20 + 0x1c;
    } while ((int)uVar18 < (pFVar9->Keys).ArrayNum + -1);
  }
  this_00 = &this->ValueDelegate;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_e0);
  if ((*(longlong *)&(this->ValueDelegate).field_0x10 == 0) ||
     (pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(this->ValueDelegate).field_0x8),
     pUVar10 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e0);
  }
  else {
    FVar4.ComparisonIndex.Value = *(uint *)&(this->ValueDelegate).field_0x10;
    FVar4.Number = *(uint *)&(this->ValueDelegate).field_0x14;
    pUVar11 = UObject::FindFunction(pUVar10,FVar4);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e0);
    if (pUVar11 != (UFunction *)0x0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,local_68);
      FVar5.ComparisonIndex.Value = *(uint *)&(this->ValueDelegate).field_0x10;
      FVar5.Number = *(uint *)&(this->ValueDelegate).field_0x14;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_68);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_1d8);
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(this->ValueDelegate).field_0x8);
      if (local_1d8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d8.Accessor,&local_1d8);
      }
      local_2f8 = 0.0;
      FStack_2e8.DelegateSize = 0;
      FStack_2e8._12_4_ = 0;
      local_2f4 = 1;
      local_2f0 = (undefined1  [8])0x0;
      FStack_2e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2f0,
                 (FWriteAccessScope *)&local_100);
      local_e8 = &FStack_2e8;
      puVar12 = UE::Core::Private::DelegateAllocate(0x30,&FStack_2e8);
      if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar13 = FDelegateHandle::GenerateNewID();
        puVar12[2] = uVar13;
        *puVar12 = &
                   ___7__TBaseUFunctionDelegateInstance_VUObject____A6AMXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        *(FName *)(puVar12 + 4) = FVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar10);
        }
        puVar12[5] = 0;
        local_res18 = pUVar10;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar10);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 5),(FObjectPtr)&local_res18);
        if ((FVar5 == (FName)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InFunctionName != NAME_None",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                               ,0x56,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (pUVar10 != (UObject *)0x0) {
          pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar12 + 5));
          pUVar11 = UObject::FindFunctionChecked(pUVar10,FVar5);
          puVar12[3] = pUVar11;
        }
      }
      if (local_100.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
      }
      local_1f8._0_4_ = local_2f8;
      local_1f8[4] = (bool)local_2f4;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f0,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f0);
      if (FStack_2e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_2e8.DelegateAllocator);
      }
      this_01 = (FMRSWRecursiveAccessDetector *)local_2f0;
      goto LAB_14d88968f;
    }
  }
  local_1f8._0_4_ = this->Value;
  local_360 = 0;
  local_370 = (undefined1  [8])0x0;
  FStack_368.Data = (FScriptContainerElement *)0x0;
  local_1f8[4] = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f0,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_370);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_370,
             (FWriteAccessScope *)&local_1c0);
  if (((int)local_360 != 0) && (FStack_368.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_368.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_368,0,0,0x10);
    local_360 = local_360 & 0xffffffff00000000;
  }
  if (local_1c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
  }
  if (FStack_368.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_368.Data);
  }
  this_01 = (FMRSWRecursiveAccessDetector *)local_370;
LAB_14d88968f:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_01);
  if (((this->MyRadialSlider).Object == (SRadialSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ((this->MyRadialSlider).Object)->bMouseUsesStep = this->MouseUsesStep;
  if (((this->MyRadialSlider).Object == (SRadialSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ((this->MyRadialSlider).Object)->bRequiresControllerLock = this->RequiresControllerLock;
  if (((this->MyRadialSlider).Object == (SRadialSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pSVar6 = (this->MyRadialSlider).Object;
  local_2d8._0_8_ = *(undefined8 *)&(this->SliderBarColor).field0_0x0;
  local_2d8._8_8_ = *(undefined8 *)((longlong)&(this->SliderBarColor).field0_0x0 + 8);
  local_2c7 = local_b7;
  local_2c5 = local_b5;
  local_2c8 = 0;
  local_2b0 = 0;
  local_2c4 = 1;
  local_2c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2b8.Data = (FScriptContainerElement *)0x0;
  SWidget::SetAttribute<FSlateColor,FSlateColor>
            ((SWidget *)pSVar6,&pSVar6->SliderBarColor,(TAttribute<FSlateColor> *)&local_2d8._s_0,
             Paint);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2c0,(FWriteAccessScope *)&local_1a8);
  if (((int)local_2b0 != 0) && (FStack_2b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2b8,0,0,0x10);
    local_2b0 = local_2b0 & 0xffffffff00000000;
  }
  if (local_1a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
  }
  if (FStack_2b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2c0.AccessDetector);
  if (((this->MyRadialSlider).Object == (SRadialSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pSVar6 = (this->MyRadialSlider).Object;
  local_2a8._0_8_ = *(undefined8 *)&(this->SliderProgressColor).field0_0x0;
  local_2a8._8_8_ = *(undefined8 *)((longlong)&(this->SliderProgressColor).field0_0x0 + 8);
  local_297 = local_9f;
  local_295 = local_9d;
  local_298 = 0;
  local_280 = 0;
  local_294 = 1;
  local_290.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_288.Data = (FScriptContainerElement *)0x0;
  SWidget::SetAttribute<FSlateColor,FSlateColor>
            ((SWidget *)pSVar6,&pSVar6->SliderProgressColor,
             (TAttribute<FSlateColor> *)&local_2a8._s_0,Paint);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_290,(FWriteAccessScope *)&local_190);
  if (((int)local_280 != 0) && (FStack_288.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_288.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_288,0,0,0x10);
    local_280 = local_280 & 0xffffffff00000000;
  }
  if (local_190.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
  }
  if (FStack_288.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_288.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_290.AccessDetector);
  if (((this->MyRadialSlider).Object == (SRadialSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pSVar6 = (this->MyRadialSlider).Object;
  local_278._0_8_ = *(undefined8 *)&(this->SliderHandleColor).field0_0x0;
  local_278._8_8_ = *(undefined8 *)((longlong)&(this->SliderHandleColor).field0_0x0 + 8);
  local_267 = local_87;
  local_265 = local_85;
  local_268 = 0;
  local_250 = 0;
  local_264 = 1;
  local_260.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_258.Data = (FScriptContainerElement *)0x0;
  SWidget::SetAttribute<FSlateColor,FSlateColor>
            ((SWidget *)pSVar6,&pSVar6->SliderHandleColor,(TAttribute<FSlateColor> *)&local_278._s_0
             ,Paint);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_260,(FWriteAccessScope *)&local_178);
  if (((int)local_250 != 0) && (FStack_258.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_258.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_258,0,0,0x10);
    local_250 = local_250 & 0xffffffff00000000;
  }
  if (local_178.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
  }
  if (FStack_258.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_258.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_260.AccessDetector);
  if (((this->MyRadialSlider).Object == (SRadialSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pSVar6 = (this->MyRadialSlider).Object;
  local_248._0_8_ = *(undefined8 *)&(this->CenterBackgroundColor).field0_0x0;
  local_248._8_8_ = *(undefined8 *)((longlong)&(this->CenterBackgroundColor).field0_0x0 + 8);
  local_237 = local_6f;
  local_235 = local_6d;
  local_238 = 0;
  local_220 = 0;
  local_234 = 1;
  local_230.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_228.Data = (FScriptContainerElement *)0x0;
  SWidget::SetAttribute<FSlateColor,FSlateColor>
            ((SWidget *)pSVar6,&pSVar6->CenterBackgroundColor,
             (TAttribute<FSlateColor> *)&local_248._s_0,Paint);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_230,(FWriteAccessScope *)&local_160);
  if (((int)local_220 != 0) && (FStack_228.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_228.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_228,0,0,0x10);
    local_220 = local_220 & 0xffffffff00000000;
  }
  if (local_160.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
  }
  if (FStack_228.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_228.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_230.AccessDetector);
  if (((this->MyRadialSlider).Object == (SRadialSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pSVar6 = (this->MyRadialSlider).Object;
  SetWidgetAttribute<float,float>
            ((SWidget *)pSVar6,&pSVar6->ValueAttribute,(TAttribute<float> *)local_1f8,Paint);
  if (((this->MyRadialSlider).Object == (SRadialSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_358[0] = this->bUseCustomDefaultValue;
  pSVar6 = (this->MyRadialSlider).Object;
  local_358[1] = true;
  local_340 = 0;
  local_350.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_348.Data = (FScriptContainerElement *)0x0;
  SetWidgetAttribute<bool,bool>
            ((SWidget *)pSVar6,&pSVar6->bUseCustomDefaultValue,(TAttribute<bool> *)local_358,Paint);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_350,(FWriteAccessScope *)&local_148);
  if (((int)local_340 != 0) && (FStack_348.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_348.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_348,0,0,0x10);
    local_340 = local_340 & 0xffffffff00000000;
  }
  if (local_148.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
  }
  if (FStack_348.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_348.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_350.AccessDetector);
  if (((this->MyRadialSlider).Object == (SRadialSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_338._0_4_ = this->CustomDefaultValue;
  pSVar6 = (this->MyRadialSlider).Object;
  local_338[4] = true;
  local_320 = 0;
  local_330.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_328.Data = (FScriptContainerElement *)0x0;
  SetWidgetAttribute<float,float>
            ((SWidget *)pSVar6,&pSVar6->CustomDefaultValue,(TAttribute<float> *)local_338,Paint);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_330,(FWriteAccessScope *)&local_130);
  if (((int)local_320 != 0) && (FStack_328.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_328.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_328,0,0,0x10);
    local_320 = local_320 & 0xffffffff00000000;
  }
  if (local_130.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
  }
  if (FStack_328.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_328.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_330.AccessDetector);
  if (((this->MyRadialSlider).Object == (SRadialSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FRuntimeFloatCurve::operator=(&((this->MyRadialSlider).Object)->SliderRange,&this->SliderRange);
  if (((this->MyRadialSlider).Object == (SRadialSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&((this->MyRadialSlider).Object)->ValueTags,&this->ValueTags);
  if (((this->MyRadialSlider).Object == (SRadialSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  fVar2 = this->SliderHandleEndAngle;
  fVar3 = this->SliderHandleStartAngle;
  pSVar6 = (this->MyRadialSlider).Object;
  pSVar6->SliderHandleStartAngle = fVar3;
  pSVar6->SliderHandleEndAngle = fVar2;
  if (fVar2 < fVar3) {
    pSVar6->SliderHandleEndAngle = fVar3;
  }
  if (((this->MyRadialSlider).Object == (SRadialSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ((this->MyRadialSlider).Object)->AngularOffset = this->AngularOffset;
  if (((this->MyRadialSlider).Object == (SRadialSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar21 = (this->HandStartEndRatio).field0_0x0._s_0.X;
  dVar22 = (this->HandStartEndRatio).field0_0x0._s_0.Y;
  pSVar6 = (this->MyRadialSlider).Object;
  if (__real_3ff0000000000000 <= dVar22) {
    dVar22 = __real_3ff0000000000000;
  }
  if (__real_3ff0000000000000 <= dVar21) {
    dVar21 = __real_3ff0000000000000;
  }
  if (dVar22 <= 0.0) {
    dVar22 = 0.0;
  }
  if (dVar21 <= 0.0) {
    dVar21 = 0.0;
  }
  if (dVar22 < dVar21) {
    dVar22 = dVar21;
  }
  (pSVar6->HandStartEndRatio).field0_0x0._s_0.X = dVar21;
  (pSVar6->HandStartEndRatio).field0_0x0._s_0.Y = dVar22;
  if (((this->MyRadialSlider).Object == (SRadialSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_318[0] = this->Locked;
  pSVar6 = (this->MyRadialSlider).Object;
  local_318[1] = true;
  local_300 = 0;
  local_310.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_308.Data = (FScriptContainerElement *)0x0;
  SetWidgetAttribute<bool,bool>
            ((SWidget *)pSVar6,&pSVar6->LockedAttribute,(TAttribute<bool> *)local_318,Paint);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_310,(FWriteAccessScope *)&local_118);
  if (((int)local_300 != 0) && (FStack_308.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_308.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_308,0,0,0x10);
    local_300 = local_300 & 0xffffffff00000000;
  }
  if (local_118.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
  }
  if (FStack_308.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_308.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_310.AccessDetector);
  if (((this->MyRadialSlider).Object == (SRadialSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pSVar6 = (this->MyRadialSlider).Object;
  local_218 = this->StepSize;
  local_214 = 1;
  local_210 = (undefined1  [8])0x0;
  pvStack_208 = (void *)0x0;
  local_200 = 0;
  (pSVar6->StepSize).Value = local_218;
  (pSVar6->StepSize).bIsSet = true;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pSVar6->StepSize).Getter,
             (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_210);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_210);
  if (pvStack_208 != (void *)0x0) {
    FMemory::Free(pvStack_208);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_210);
  if (((this->MyRadialSlider).Object == (SRadialSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ((this->MyRadialSlider).Object)->bUseVerticalDrag = this->UseVerticalDrag;
  if (((this->MyRadialSlider).Object == (SRadialSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ((this->MyRadialSlider).Object)->bShowSliderHandle = this->ShowSliderHandle;
  if (((this->MyRadialSlider).Object == (SRadialSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ((this->MyRadialSlider).Object)->bShowSliderHand = this->ShowSliderHand;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f0);
  if ((void *)local_1f0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1f0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1f0);
  return;
}

// execGetCustomDefaultValue @ 14d88cd60

void __cdecl
URadialSlider::execGetCustomDefaultValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  float *pfVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x30].field_0x18 != 0) {
    pfVar1 = TAttribute<float>::Get
                       ((TAttribute<float> *)(*(longlong *)&param_1[0x30].field_0x18 + 0x418));
    *(float *)param_3 = *pfVar1;
    return;
  }
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[10].field_0x20;
  return;
}

// execGetNormalizedSliderHandlePosition @ 14d88cdc0

void __cdecl
URadialSlider::execGetNormalizedSliderHandlePosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  SRadialSlider *this;
  float *pfVar1;
  float fVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SRadialSlider **)&param_1[0x30].field_0x18;
  if (this != (SRadialSlider *)0x0) {
    pfVar1 = TAttribute<float>::Get(&this->ValueAttribute);
    fVar2 = SRadialSlider::GetNormalizedValue(this,*pfVar1);
    *(float *)param_3 = fVar2;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetValue @ 14d88ce30

void __cdecl URadialSlider::execGetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  float *pfVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x30].field_0x18 != 0) {
    pfVar1 = TAttribute<float>::Get
                       ((TAttribute<float> *)(*(longlong *)&param_1[0x30].field_0x18 + 0x3d8));
    *(float *)param_3 = *pfVar1;
    return;
  }
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[10].field_0x20;
  return;
}

// execSetAngularOffset @ 14d88ce90

void __cdecl URadialSlider::execSetAngularOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
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
  lVar2 = *(longlong *)&param_1[0x30].field_0x18;
  *(undefined4 *)&param_1[0xf].field_0x20 = local_res8[0];
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x478) = local_res8[0];
  }
  return;
}

// execSetCenterBackgroundColor @ 14d88cf30

void __cdecl
URadialSlider::execSetCenterBackgroundColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SRadialSlider *this;
  undefined8 local_58;
  undefined8 uStack_50;
  FLinearColor_u_0 local_48;
  uint local_38;
  uint local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SRadialSlider **)&param_1[0x30].field_0x18;
  *(undefined8 *)&param_1[0x2c].field_0x20 = local_58;
  *(undefined8 *)(param_1 + 0x2d) = uStack_50;
  if (this != (SRadialSlider *)0x0) {
    local_18 = local_18 & 0xffffff00;
    local_38 = local_18;
    local_48._0_8_ = local_58;
    local_48._8_8_ = uStack_50;
    SRadialSlider::SetCenterBackgroundColor(this,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// execSetCustomDefaultValue @ 14d88cfe0

void __cdecl
URadialSlider::execSetCustomDefaultValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SWidget *pSVar2;
  float local_res8 [2];
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
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
  pSVar2 = *(SWidget **)&param_1[0x30].field_0x18;
  *(float *)&param_1[0xb].field_0x1c = local_res8[0];
  if (pSVar2 != (SWidget *)0x0) {
    local_30._0_4_ = local_res8[0];
    local_18 = 0;
    local_30[4] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SetWidgetAttribute<float,float>
              (pSVar2,(TAttribute<float> *)&pSVar2[1].UniqueIdentifier,(TAttribute<float> *)local_30
               ,Paint);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// execSetHandStartEndRatio @ 14d88d120

void __cdecl URadialSlider::execSetHandStartEndRatio(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  double local_18;
  double dStack_10;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x30].field_0x18;
  *(double *)(param_1 + 0x10) = local_18;
  *(double *)&param_1[0x10].field_0x8 = dStack_10;
  if (lVar2 != 0) {
    if (__real_3ff0000000000000 <= dStack_10) {
      dStack_10 = __real_3ff0000000000000;
    }
    if (__real_3ff0000000000000 <= local_18) {
      local_18 = __real_3ff0000000000000;
    }
    if (dStack_10 <= 0.0) {
      dStack_10 = 0.0;
    }
    if (local_18 <= 0.0) {
      local_18 = 0.0;
    }
    *(double *)(lVar2 + 0x480) = local_18;
    if (dStack_10 < local_18) {
      *(double *)(lVar2 + 0x488) = local_18;
      return;
    }
    *(double *)(lVar2 + 0x488) = dStack_10;
  }
  return;
}

// execSetLocked @ 14d88d200

void __cdecl URadialSlider::execSetLocked(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SWidget *pSVar2;
  int local_res8 [2];
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
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
  local_30[0] = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pSVar2 = *(SWidget **)&param_1[0x30].field_0x18;
  param_1[0x2d].field_0x8 = local_30[0];
  if (pSVar2 != (SWidget *)0x0) {
    local_30[1] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SetWidgetAttribute<bool,bool>
              (pSVar2,(TAttribute<bool> *)&pSVar2[1]._padding_,(TAttribute<bool> *)local_30,Paint);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// execSetShowSliderHand @ 14d88d340

void __cdecl URadialSlider::execSetShowSliderHand(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
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
  lVar2 = *(longlong *)&param_1[0x30].field_0x18;
  param_1[0x2d].field_0x13 = local_res8[0] != 0;
  if (lVar2 != 0) {
    *(bool *)(lVar2 + 0x52e) = local_res8[0] != 0;
  }
  return;
}

// execSetShowSliderHandle @ 14d88d3e0

void __cdecl URadialSlider::execSetShowSliderHandle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
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
  lVar2 = *(longlong *)&param_1[0x30].field_0x18;
  param_1[0x2d].field_0x12 = local_res8[0] != 0;
  if (lVar2 != 0) {
    *(bool *)(lVar2 + 0x52d) = local_res8[0] != 0;
  }
  return;
}

// execSetSliderBarColor @ 14d88d480

void __cdecl URadialSlider::execSetSliderBarColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SRadialSlider *this;
  undefined8 local_58;
  undefined8 uStack_50;
  FLinearColor_u_0 local_48;
  uint local_38;
  uint local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SRadialSlider **)&param_1[0x30].field_0x18;
  *(undefined8 *)&param_1[0x2b].field_0x18 = local_58;
  *(undefined8 *)&param_1[0x2b].field_0x20 = uStack_50;
  if (this != (SRadialSlider *)0x0) {
    local_18 = local_18 & 0xffffff00;
    local_38 = local_18;
    local_48._0_8_ = local_58;
    local_48._8_8_ = uStack_50;
    SRadialSlider::SetSliderBarColor(this,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// execSetSliderHandleColor @ 14d88d530

void __cdecl URadialSlider::execSetSliderHandleColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SRadialSlider *this;
  undefined8 local_58;
  undefined8 uStack_50;
  FLinearColor_u_0 local_48;
  uint local_38;
  uint local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SRadialSlider **)&param_1[0x30].field_0x18;
  *(undefined8 *)&param_1[0x2c].field_0x10 = local_58;
  *(undefined8 *)&param_1[0x2c].field_0x18 = uStack_50;
  if (this != (SRadialSlider *)0x0) {
    local_18 = local_18 & 0xffffff00;
    local_38 = local_18;
    local_48._0_8_ = local_58;
    local_48._8_8_ = uStack_50;
    SRadialSlider::SetSliderHandleColor(this,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// execSetSliderHandleEndAngle @ 14d88d5e0

void __cdecl
URadialSlider::execSetSliderHandleEndAngle(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  FProperty *pFVar2;
  longlong lVar3;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = *(longlong *)&param_1[0x30].field_0x18;
  *(float *)&param_1[0xf].field_0x1c = local_res8[0];
  if (lVar3 != 0) {
    fVar1 = *(float *)&param_1[0xf].field_0x18;
    *(float *)(lVar3 + 0x470) = fVar1;
    *(float *)(lVar3 + 0x474) = local_res8[0];
    if (local_res8[0] < fVar1) {
      *(float *)(lVar3 + 0x474) = fVar1;
    }
  }
  return;
}

// execSetSliderHandleStartAngle @ 14d88d6a0

void __cdecl
URadialSlider::execSetSliderHandleStartAngle(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  FProperty *pFVar2;
  longlong lVar3;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = *(longlong *)&param_1[0x30].field_0x18;
  *(float *)&param_1[0xf].field_0x18 = local_res8[0];
  if (lVar3 != 0) {
    fVar1 = *(float *)&param_1[0xf].field_0x1c;
    *(float *)(lVar3 + 0x470) = local_res8[0];
    *(float *)(lVar3 + 0x474) = fVar1;
    if (fVar1 < local_res8[0]) {
      *(float *)(lVar3 + 0x474) = local_res8[0];
    }
  }
  return;
}

// execSetSliderProgressColor @ 14d88d760

void __cdecl
URadialSlider::execSetSliderProgressColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SRadialSlider *this;
  undefined8 local_58;
  undefined8 uStack_50;
  FLinearColor_u_0 local_48;
  uint local_38;
  uint local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SRadialSlider **)&param_1[0x30].field_0x18;
  *(undefined8 *)(param_1 + 0x2c) = local_58;
  *(undefined8 *)&param_1[0x2c].field_0x8 = uStack_50;
  if (this != (SRadialSlider *)0x0) {
    local_18 = local_18 & 0xffffff00;
    local_38 = local_18;
    local_48._0_8_ = local_58;
    local_48._8_8_ = uStack_50;
    SRadialSlider::SetSliderProgressColor(this,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// execSetSliderRange @ 14d88d810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl URadialSlider::execSetSliderRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FRuntimeFloatCurve *pFVar2;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [72];
  void *local_60;
  undefined4 local_58;
  void *local_50;
  ForAnyElementType local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)local_a8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  pFVar2 = (FRuntimeFloatCurve *)local_a8;
  if ((FRuntimeFloatCurve *)param_2->MostRecentPropertyAddress != (FRuntimeFloatCurve *)0x0) {
    pFVar2 = (FRuntimeFloatCurve *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FRuntimeFloatCurve::operator=((FRuntimeFloatCurve *)&param_1[0xb].field_0x20,pFVar2);
  if (*(longlong *)&param_1[0x30].field_0x18 != 0) {
    FRuntimeFloatCurve::operator=
              ((FRuntimeFloatCurve *)(*(longlong *)&param_1[0x30].field_0x18 + 0x4a0),pFVar2);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  local_a8._0_8_ = &___7FIndexedCurve__6B_;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  local_58 = 0;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_a8 + 8));
  return;
}

// execSetStepSize @ 14d88d950

void __cdecl URadialSlider::execSetStepSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  FDestructionSentinel local_48;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_res8[0] = 0;
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
  lVar2 = *(longlong *)&param_1[0x30].field_0x18;
  *(undefined4 *)&param_1[0x2d].field_0xc = local_res8[0];
  if (lVar2 != 0) {
    local_2c = 1;
    local_18 = 0;
    local_30 = local_res8[0];
    local_28 = (undefined1  [8])0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(lVar2 + 0x450) = local_res8[0];
    *(undefined1 *)(lVar2 + 0x454) = 1;
    TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)(lVar2 + 0x458),
               (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  return;
}

// execSetUseVerticalDrag @ 14d88daa0

void __cdecl URadialSlider::execSetUseVerticalDrag(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
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
  lVar2 = *(longlong *)&param_1[0x30].field_0x18;
  param_1[0x2d].field_0x11 = local_res8[0] != 0;
  if (lVar2 != 0) {
    *(bool *)(lVar2 + 0x52c) = local_res8[0] != 0;
  }
  return;
}

// execSetValue @ 14d88db40

void __cdecl URadialSlider::execSetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SWidget *pSVar2;
  float local_res8 [2];
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
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
  pSVar2 = *(SWidget **)&param_1[0x30].field_0x18;
  *(float *)&param_1[10].field_0x20 = local_res8[0];
  if (pSVar2 != (SWidget *)0x0) {
    local_30._0_4_ = local_res8[0];
    local_18 = 0;
    local_30[4] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SetWidgetAttribute<float,float>
              (pSVar2,(TAttribute<float> *)&pSVar2[1].MetaData.ArrayNum,
               (TAttribute<float> *)local_30,Paint);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// execSetValueTags @ 14d88dc80

void __cdecl URadialSlider::execSetValueTags(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)&param_1[0xf].field_0x8,pTVar2);
  if (*(longlong *)&param_1[0x30].field_0x18 != 0) {
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<float,TSizedDefaultAllocator<32>_> *)
               (*(longlong *)&param_1[0x30].field_0x18 + 0x490),
               (TArray<float,TSizedDefaultAllocator<32>_> *)&param_1[0xf].field_0x8);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

