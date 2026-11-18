// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 67

// GetValue_WrapperImpl @ 146957ec0

void __cdecl USlider::GetValue_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  
  if (*(SSlider **)((longlong)param_1 + 0x6c8) != (SSlider *)0x0) {
    fVar1 = SSlider::GetValue(*(SSlider **)((longlong)param_1 + 0x6c8));
    *(float *)param_2 = fVar1;
    return;
  }
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1b0);
  return;
}

// SetValue_WrapperImpl @ 146957f00

void __cdecl USlider::SetValue_WrapperImpl(void *param_1,void *param_2)

{
  SetValue(param_1,*(float *)param_2);
  return;
}

// GetMinValue_WrapperImpl @ 146957f50

void __cdecl USlider::GetMinValue_WrapperImpl(void *param_1,void *param_2)

{
  if (*(longlong *)((longlong)param_1 + 0x6c8) != 0) {
    *(undefined4 *)param_2 = *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x6c8) + 0x250);
    return;
  }
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1d0);
  return;
}

// SetMinValue_WrapperImpl @ 146957f80

void __cdecl USlider::SetMinValue_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)param_2;
  *(float *)((longlong)param_1 + 0x1d0) = fVar1;
  if (*(SSlider **)((longlong)param_1 + 0x6c8) != (SSlider *)0x0) {
    SSlider::SetMinAndMaxValues
              (*(SSlider **)((longlong)param_1 + 0x6c8),fVar1,*(float *)((longlong)param_1 + 0x1d4))
    ;
    return;
  }
  return;
}

// GetMaxValue_WrapperImpl @ 146957fb0

void __cdecl USlider::GetMaxValue_WrapperImpl(void *param_1,void *param_2)

{
  if (*(longlong *)((longlong)param_1 + 0x6c8) != 0) {
    *(undefined4 *)param_2 = *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x6c8) + 0x254);
    return;
  }
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1d4);
  return;
}

// SetMaxValue_WrapperImpl @ 146958020

void __cdecl USlider::SetMaxValue_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)param_2;
  *(float *)((longlong)param_1 + 0x1d4) = fVar1;
  if (*(SSlider **)((longlong)param_1 + 0x6c8) != (SSlider *)0x0) {
    SSlider::SetMinAndMaxValues
              (*(SSlider **)((longlong)param_1 + 0x6c8),*(float *)((longlong)param_1 + 0x1d0),fVar1)
    ;
    return;
  }
  return;
}

// GetWidgetStyle_WrapperImpl @ 146958050

void __cdecl USlider::GetWidgetStyle_WrapperImpl(void *param_1,void *param_2)

{
  FSliderStyle *pFVar1;
  FSliderStyle local_448;
  
  pFVar1 = FSliderStyle::FSliderStyle(&local_448,(FSliderStyle *)((longlong)param_1 + 0x1e0));
  FSliderStyle::operator=(param_2,pFVar1);
  FSliderStyle::~FSliderStyle(&local_448);
  return;
}

// SetWidgetStyle_WrapperImpl @ 1469580a0

void __cdecl USlider::SetWidgetStyle_WrapperImpl(void *param_1,void *param_2)

{
  FSliderStyle::operator=((FSliderStyle *)((longlong)param_1 + 0x1e0),param_2);
  if (*(SSlider **)((longlong)param_1 + 0x6c8) != (SSlider *)0x0) {
    SSlider::SetStyle(*(SSlider **)((longlong)param_1 + 0x6c8),
                      (FSliderStyle *)((longlong)param_1 + 0x1e0));
  }
  return;
}

// GetOrientation_WrapperImpl @ 1469580f0

void __cdecl USlider::GetOrientation_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x620);
  return;
}

// SetOrientation_WrapperImpl @ 146958100

void __cdecl USlider::SetOrientation_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x620) = bVar1;
  if (*(SSlider **)((longlong)param_1 + 0x6c8) != (SSlider *)0x0) {
    SSlider::SetOrientation(*(SSlider **)((longlong)param_1 + 0x6c8),(uint)bVar1);
    return;
  }
  return;
}

// GetSliderBarColor_WrapperImpl @ 146958130

void __cdecl USlider::GetSliderBarColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x62c);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x624);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetSliderBarColor_WrapperImpl @ 146958190

void __cdecl USlider::SetSliderBarColor_WrapperImpl(void *param_1,void *param_2)

{
  FLinearColor_u_0 local_38;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_38._0_8_ = *(undefined8 *)param_2;
  local_38._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x624) = local_38._0_8_;
  *(undefined8 *)((longlong)param_1 + 0x62c) = local_38._8_8_;
  if (*(SSlider **)((longlong)param_1 + 0x6c8) != (SSlider *)0x0) {
    local_28 = 0;
    local_10 = 0;
    local_20 = 0;
    uStack_18 = 0;
    local_24 = 1;
    SSlider::SetSliderBarColor
              (*(SSlider **)((longlong)param_1 + 0x6c8),(TAttribute<FSlateColor> *)&local_38._s_0);
  }
  return;
}

// GetSliderHandleColor_WrapperImpl @ 1469581f0

void __cdecl USlider::GetSliderHandleColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x63c);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x634);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetSliderHandleColor_WrapperImpl @ 146958210

void __cdecl USlider::SetSliderHandleColor_WrapperImpl(void *param_1,void *param_2)

{
  FLinearColor_u_0 local_38;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_38._0_8_ = *(undefined8 *)param_2;
  local_38._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x634) = local_38._0_8_;
  *(undefined8 *)((longlong)param_1 + 0x63c) = local_38._8_8_;
  if (*(SSlider **)((longlong)param_1 + 0x6c8) != (SSlider *)0x0) {
    local_28 = 0;
    local_10 = 0;
    local_20 = 0;
    uStack_18 = 0;
    local_24 = 1;
    SSlider::SetSliderHandleColor
              (*(SSlider **)((longlong)param_1 + 0x6c8),(TAttribute<FSlateColor> *)&local_38._s_0);
  }
  return;
}

// GetIndentHandle_WrapperImpl @ 146958270

void __cdecl USlider::GetIndentHandle_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x644);
  return;
}

// SetIndentHandle_WrapperImpl @ 146958280

void __cdecl USlider::SetIndentHandle_WrapperImpl(void *param_1,void *param_2)

{
  TAttribute<bool> local_28;
  
  local_28.Value = *(bool *)param_2;
  *(bool *)((longlong)param_1 + 0x644) = local_28.Value;
  if (*(SSlider **)((longlong)param_1 + 0x6c8) != (SSlider *)0x0) {
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SSlider::SetIndentHandle(*(SSlider **)((longlong)param_1 + 0x6c8),&local_28);
  }
  return;
}

// GetLocked_WrapperImpl @ 1469582d0

void __cdecl USlider::GetLocked_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x645);
  return;
}

// SetLocked_WrapperImpl @ 146958320

void __cdecl USlider::SetLocked_WrapperImpl(void *param_1,void *param_2)

{
  TAttribute<bool> local_28;
  
  local_28.Value = *(bool *)param_2;
  *(bool *)((longlong)param_1 + 0x645) = local_28.Value;
  if (*(SSlider **)((longlong)param_1 + 0x6c8) != (SSlider *)0x0) {
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SSlider::SetLocked(*(SSlider **)((longlong)param_1 + 0x6c8),&local_28);
  }
  return;
}

// GetStepSize_WrapperImpl @ 146958370

void __cdecl USlider::GetStepSize_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  
  if (*(SSlider **)((longlong)param_1 + 0x6c8) != (SSlider *)0x0) {
    fVar1 = SSlider::GetStepSize(*(SSlider **)((longlong)param_1 + 0x6c8));
    *(float *)param_2 = fVar1;
    return;
  }
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x648);
  return;
}

// SetStepSize_WrapperImpl @ 1469583b0

void __cdecl USlider::SetStepSize_WrapperImpl(void *param_1,void *param_2)

{
  TAttribute<float> local_28;
  
  local_28.Value = *(float *)param_2;
  *(float *)((longlong)param_1 + 0x648) = local_28.Value;
  if (*(SSlider **)((longlong)param_1 + 0x6c8) != (SSlider *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SSlider::SetStepSize(*(SSlider **)((longlong)param_1 + 0x6c8),&local_28);
  }
  return;
}

// StaticClass @ 146958450

UClass * __cdecl USlider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"Slider",&Z_Registration_Info_UClass_USlider.InnerSingleton,
               StaticRegisterNativesUSlider,0x6e0,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USlider>,InternalVTableHelperCtorCaller<USlider>,local_res8,
               UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlider.InnerSingleton;
}

// USlider @ 14698d7e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

USlider * __thiscall USlider::USlider(USlider *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined8 *)&this->ValueDelegate = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&(this->ValueDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ValueDelegate).field_0x10 = 0;
  FSliderStyle::FSliderStyle(&this->WidgetStyle);
  this->bPreventThrottling = false;
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
  (this->MySlider).Object = (SSlider *)0x0;
  (this->MySlider).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// USlider @ 14698d8c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

USlider * __thiscall USlider::USlider(USlider *this,FObjectInitializer *param_1)

{
  FLinearColor FVar1;
  FDefaultStyleCache *pFVar2;
  
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined8 *)&this->ValueDelegate = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&(this->ValueDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ValueDelegate).field_0x10 = 0;
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
  (this->MySlider).Object = (SSlider *)0x0;
  (this->MySlider).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Orientation).Value = '\0';
  this->bPreventThrottling = false;
  this->MinValue = 0.0;
  this->MaxValue = 1.0;
  (this->SliderBarColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  FVar1 = FLinearColor::White;
  this->StepSize = 0.01;
  this->IsFocusable = true;
  (this->SliderHandleColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  this->MouseUsesStep = false;
  this->RequiresControllerLock = true;
  pFVar2 = UE::Slate::Private::FDefaultStyleCache::Get();
  FSliderStyle::operator=(&this->WidgetStyle,&(pFVar2->Runtime).SliderStyle);
  return this;
}

// ~USlider @ 146994320

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USlider::~USlider(USlider *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MySlider).SharedReferenceCount.ReferenceController);
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
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ValueDelegate);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetAccessibleWidget @ 1469cce20

TSharedPtr<SWidget,1> * __thiscall
USlider::GetAccessibleWidget(USlider *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (SWidget *)(this->MySlider).Object;
  pTVar1 = (this->MySlider).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetFieldNotificationDescriptor @ 1469d07f0

IClassDescriptor * __thiscall USlider::GetFieldNotificationDescriptor(USlider *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`USlider::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetMaxValue @ 1469d1d00

float __thiscall USlider::GetMaxValue(USlider *this)

{
  SSlider *pSVar1;
  
  pSVar1 = (this->MySlider).Object;
  if (pSVar1 != (SSlider *)0x0) {
    return pSVar1->MaxValue;
  }
  return this->MaxValue;
}

// GetMinValue @ 1469d1e90

float __thiscall USlider::GetMinValue(USlider *this)

{
  SSlider *pSVar1;
  
  pSVar1 = (this->MySlider).Object;
  if (pSVar1 != (SSlider *)0x0) {
    return pSVar1->MinValue;
  }
  return this->MinValue;
}

// GetNormalizedValue @ 1469d1f60

float __thiscall USlider::GetNormalizedValue(USlider *this)

{
  SSlider *this_00;
  float fVar1;
  
  this_00 = (this->MySlider).Object;
  if (this_00 != (SSlider *)0x0) {
    fVar1 = SSlider::GetNormalizedValue(this_00);
    return fVar1;
  }
  fVar1 = this->MinValue;
  if (fVar1 == this->MaxValue) {
    return __real_3f800000;
  }
  return (this->Value - fVar1) / (this->MaxValue - fVar1);
}

// GetOrientation @ 1469d2e40

EOrientation __thiscall USlider::GetOrientation(USlider *this)

{
  return (EOrientation)(this->Orientation).Value;
}

// GetPrivateStaticClass @ 1469d5e10

UClass * __cdecl USlider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"Slider",&Z_Registration_Info_UClass_USlider.InnerSingleton,
               StaticRegisterNativesUSlider,0x6e0,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USlider>,InternalVTableHelperCtorCaller<USlider>,local_res8,
               UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlider.InnerSingleton;
}

// GetSliderBarColor @ 1469d86c0

FLinearColor * __thiscall
USlider::GetSliderBarColor(USlider *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->SliderBarColor).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(this->SliderBarColor).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// GetSliderHandleColor @ 1469d86f0

FLinearColor * __thiscall
USlider::GetSliderHandleColor(USlider *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->SliderHandleColor).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(this->SliderHandleColor).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// GetStepSize @ 1469d8a00

float __thiscall USlider::GetStepSize(USlider *this)

{
  SSlider *this_00;
  float fVar1;
  
  this_00 = (this->MySlider).Object;
  if (this_00 != (SSlider *)0x0) {
    fVar1 = SSlider::GetStepSize(this_00);
    return fVar1;
  }
  return this->StepSize;
}

// GetValue @ 1469d9b80

float __thiscall USlider::GetValue(USlider *this)

{
  SSlider *this_00;
  float fVar1;
  
  this_00 = (this->MySlider).Object;
  if (this_00 != (SSlider *)0x0) {
    fVar1 = SSlider::GetValue(this_00);
    return fVar1;
  }
  return this->Value;
}

// GetWidgetStyle @ 1469da3c0

FSliderStyle * __thiscall USlider::GetWidgetStyle(USlider *this)

{
  return &this->WidgetStyle;
}

// HandleOnControllerCaptureBegin @ 1469dcf40

void __thiscall USlider::HandleOnControllerCaptureBegin(USlider *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnControllerCaptureBegin
             ,(void *)0x0);
  return;
}

// HandleOnControllerCaptureEnd @ 1469dcf60

void __thiscall USlider::HandleOnControllerCaptureEnd(USlider *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnControllerCaptureEnd,
             (void *)0x0);
  return;
}

// HandleOnMouseCaptureBegin @ 1469dd090

void __thiscall USlider::HandleOnMouseCaptureBegin(USlider *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureBegin,
             (void *)0x0);
  return;
}

// HandleOnMouseCaptureEnd @ 1469dd0b0

void __thiscall USlider::HandleOnMouseCaptureEnd(USlider *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd,
             (void *)0x0);
  return;
}

// HandleOnValueChanged @ 1469dd710

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USlider::HandleOnValueChanged(USlider *this,float param_1)

{
  float local_res10 [6];
  FFieldId local_18;
  
  this->Value = param_1;
  local_res10[0] = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnValueChanged,
             local_res10);
  local_18.FieldName = FFieldNotificationClassDescriptor::Value.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::Value.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->field_0x28,&local_18);
  return;
}

// HasIndentHandle @ 1469de180

bool __thiscall USlider::HasIndentHandle(USlider *this)

{
  return this->IndentHandle;
}

// IsLocked @ 1469e2360

bool __thiscall USlider::IsLocked(USlider *this)

{
  return this->Locked;
}

// RebuildWidget @ 146a059f0

TSharedRef<SWidget,1> * __thiscall
USlider::RebuildWidget(USlider *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  SSlider *pSVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  FArguments *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  TSharedRef<SWidget,1> *pTVar12;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  USlider *local_res18;
  USlider *local_res20;
  FMemScope local_5b8;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined1 local_5a8 [8];
  FDelegateAllocation local_5a0;
  undefined1 local_590 [8];
  FDelegateAllocation local_588;
  undefined1 local_578 [8];
  FDelegateAllocation local_570;
  undefined1 local_560 [8];
  FDelegateAllocation local_558;
  undefined1 local_548 [8];
  FDelegateAllocation local_540;
  TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs> local_530;
  SSlider *local_518;
  FSharedReferencer<1> local_510;
  USlider *local_508;
  USlider *local_500;
  USlider *local_4f8;
  FName local_4f0;
  FDestructionSentinel local_4e8;
  FDestructionSentinel local_4d0;
  FDestructionSentinel local_4b8;
  FDestructionSentinel local_4a0;
  FDestructionSentinel local_488;
  FDestructionSentinel local_470;
  FDelegateAllocation *local_458;
  FDestructionSentinel local_450;
  FDelegateAllocation *local_438;
  FDestructionSentinel local_430;
  FDelegateAllocation *local_418;
  FDestructionSentinel local_410;
  FDelegateAllocation *local_3f8;
  FDestructionSentinel local_3f0;
  FDelegateAllocation *local_3d8;
  FArguments local_3d0;
  
  pFVar9 = SSlider::FArguments::FArguments(&local_3d0);
  uStack_5b0 = 0;
  pFVar9->_Style = &this->WidgetStyle;
  pFVar9->_IsFocusable = this->IsFocusable;
  local_5b8 = (FMemScope)HandleOnMouseCaptureBegin;
  local_548 = (undefined1  [8])0x0;
  local_540.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_540.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_548,
             (FWriteAccessScope *)&local_470);
  local_458 = &local_540;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_540);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUSlider____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_res18 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res18);
    *(FMemScope *)(puVar10 + 4) = local_5b8;
    puVar10[5] = CONCAT44(uStack_5ac,uStack_5b0);
  }
  if (local_470.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_470.Accessor,&local_470);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnMouseCaptureBegin,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_548);
  uStack_5b0 = 0;
  local_5b8 = (FMemScope)HandleOnMouseCaptureEnd;
  local_560 = (undefined1  [8])0x0;
  local_558.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_558.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_560,
             (FWriteAccessScope *)&local_450);
  local_438 = &local_558;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_558);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUSlider____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res20);
    *(FMemScope *)(puVar10 + 4) = local_5b8;
    puVar10[5] = CONCAT44(uStack_5ac,uStack_5b0);
  }
  if (local_450.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_450.Accessor,&local_450);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnMouseCaptureEnd,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_560);
  uStack_5b0 = 0;
  local_5b8 = (FMemScope)HandleOnControllerCaptureBegin;
  local_578 = (undefined1  [8])0x0;
  local_570.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_570.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_578,
             (FWriteAccessScope *)&local_430);
  local_418 = &local_570;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_570);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUSlider____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_508 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_508);
    *(FMemScope *)(puVar10 + 4) = local_5b8;
    puVar10[5] = CONCAT44(uStack_5ac,uStack_5b0);
  }
  if (local_430.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_430.Accessor,&local_430);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnControllerCaptureBegin,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_578);
  uStack_5b0 = 0;
  local_5b8 = (FMemScope)HandleOnControllerCaptureEnd;
  local_590 = (undefined1  [8])0x0;
  local_588.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_588.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_590,
             (FWriteAccessScope *)&local_410);
  local_3f8 = &local_588;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_588);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUSlider____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_500 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_500);
    *(FMemScope *)(puVar10 + 4) = local_5b8;
    puVar10[5] = CONCAT44(uStack_5ac,uStack_5b0);
  }
  if (local_410.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_410.Accessor,&local_410);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnControllerCaptureEnd,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_590);
  uStack_5b0 = 0;
  local_5b8 = (FMemScope)HandleOnValueChanged;
  local_5a8 = (undefined1  [8])0x0;
  local_5a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_5a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5a8,
             (FWriteAccessScope *)&local_3f0);
  local_3d8 = &local_5a0;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_5a0);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUSlider____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_4f8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_4f8);
    *(FMemScope *)(puVar10 + 4) = local_5b8;
    puVar10[5] = CONCAT44(uStack_5ac,uStack_5b0);
  }
  if (local_3f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3f0.Accessor,&local_3f0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnValueChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5a8);
  pFVar9->_PreventThrottling = this->bPreventThrottling;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5b8,&local_4f0,true);
  TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs>::TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs>
            (&local_530,"SSlider",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Slider.cpp"
             ,0x32,local_res8);
  FMemScope::~FMemScope(&local_5b8);
  FLLMScope::~FLLMScope(local_res10);
  pSVar3 = local_530._Widget.Object;
  if (local_530._Widget.Object == (SSlider *)0x0) {
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
  SWidget::SWidgetConstruct((SWidget *)local_530._Widget.Object,(FSlateBaseNamedArgs *)pFVar9);
  SSlider::Construct(local_530._Widget.Object,pFVar9);
  if (local_530._Widget.Object == (SSlider *)0x0) {
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
  if (((local_530._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_530._Widget.Object)->_padding_ + 0x228))(local_530._Widget.Object);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_146a05fbd;
  }
  bVar8 = 0x20;
LAB_146a05fbd:
  *(byte *)&(local_530._Widget.Object)->_padding_ =
       (byte)(local_530._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_530._Widget.Object)->_padding_ =
       (byte)(local_530._Widget.Object)->_padding_ | bVar8;
  if (local_530._Widget.Object == (SSlider *)0x0) {
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
  pbVar1 = (byte *)((longlong)&(local_530._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_530._Widget.Object == (SSlider *)0x0) {
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
  FVar5.ReferenceController = local_530._Widget.SharedReferenceCount.ReferenceController;
  local_530._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_530._Widget.Object = (SSlider *)0x0;
  if (pSVar3 == (SSlider *)0x0) {
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
  local_518 = pSVar3;
  local_510.ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MySlider != (TSharedPtr<SSlider,1> *)&local_518) {
    (this->MySlider).Object = pSVar3;
    local_518 = (SSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MySlider).SharedReferenceCount,&local_510);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_510.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5a8,
             (FWriteAccessScope *)&local_4e8);
  if ((local_5a0.DelegateSize != 0) &&
     (local_5a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_5a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_5a0,0,0,0x10);
    local_5a0.DelegateSize = 0;
  }
  if (local_4e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4e8.Accessor,&local_4e8);
  }
  if (local_5a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_5a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_590,
             (FWriteAccessScope *)&local_4d0);
  if ((local_588.DelegateSize != 0) &&
     (local_588.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_588.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_588,0,0,0x10);
    local_588.DelegateSize = 0;
  }
  if (local_4d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4d0.Accessor,&local_4d0);
  }
  if (local_588.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_588.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_590);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_578,
             (FWriteAccessScope *)&local_4b8);
  if ((local_570.DelegateSize != 0) &&
     (local_570.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_570.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_570,0,0,0x10);
    local_570.DelegateSize = 0;
  }
  if (local_4b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4b8.Accessor,&local_4b8);
  }
  if (local_570.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_570.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_578);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_560,
             (FWriteAccessScope *)&local_4a0);
  if ((local_558.DelegateSize != 0) &&
     (local_558.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_558.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_558,0,0,0x10);
    local_558.DelegateSize = 0;
  }
  if (local_4a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4a0.Accessor,&local_4a0);
  }
  if (local_558.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_558.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_560);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_548,
             (FWriteAccessScope *)&local_488);
  if ((local_540.DelegateSize != 0) &&
     (local_540.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_540.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_540,0,0,0x10);
    local_540.DelegateSize = 0;
  }
  if (local_488.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_488.Accessor,&local_488);
  }
  if (local_540.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_540.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_548);
  SSlider::FArguments::~FArguments(&local_3d0);
  if ((this->MySlider).Object == (SSlider *)0x0) {
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
  pTVar2 = (this->MySlider).SharedReferenceCount.ReferenceController;
  pSVar3 = (this->MySlider).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SSlider *)0x0) {
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

// ReleaseSlateResources @ 146a0b450

void __thiscall USlider::ReleaseSlateResources(USlider *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MySlider != (TSharedPtr<SSlider,1> *)&local_18) {
    (this->MySlider).Object = (SSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MySlider).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// SetIndentHandle @ 146a15680

void __thiscall USlider::SetIndentHandle(USlider *this,bool param_1)

{
  SSlider *this_00;
  TAttribute<bool> local_28;
  
  this->IndentHandle = param_1;
  this_00 = (this->MySlider).Object;
  if (this_00 != (SSlider *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.Value = param_1;
    SSlider::SetIndentHandle(this_00,&local_28);
  }
  return;
}

// SetLocked @ 146a169c0

void __thiscall USlider::SetLocked(USlider *this,bool param_1)

{
  SSlider *this_00;
  TAttribute<bool> local_28;
  
  this->Locked = param_1;
  this_00 = (this->MySlider).Object;
  if (this_00 != (SSlider *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.Value = param_1;
    SSlider::SetLocked(this_00,&local_28);
  }
  return;
}

// SetMaxValue @ 146a170f0

void __thiscall USlider::SetMaxValue(USlider *this,float param_1)

{
  SSlider *this_00;
  
  this_00 = (this->MySlider).Object;
  this->MaxValue = param_1;
  if (this_00 != (SSlider *)0x0) {
    SSlider::SetMinAndMaxValues(this_00,this->MinValue,param_1);
    return;
  }
  return;
}

// SetMinValue @ 146a17a10

void __thiscall USlider::SetMinValue(USlider *this,float param_1)

{
  SSlider *this_00;
  
  this_00 = (this->MySlider).Object;
  this->MinValue = param_1;
  if (this_00 != (SSlider *)0x0) {
    SSlider::SetMinAndMaxValues(this_00,param_1,this->MaxValue);
    return;
  }
  return;
}

// SetOrientation @ 146a184b0

void __thiscall USlider::SetOrientation(USlider *this,EOrientation param_1)

{
  SSlider *this_00;
  
  (this->Orientation).Value = (uchar)param_1;
  this_00 = (this->MySlider).Object;
  if (this_00 != (SSlider *)0x0) {
    SSlider::SetOrientation(this_00,param_1 & 0xff);
    return;
  }
  return;
}

// SetSliderBarColor @ 146a1b790

void __thiscall USlider::SetSliderBarColor(USlider *this,FLinearColor *param_1)

{
  SSlider *this_00;
  FLinearColor_u_0 local_38;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_38._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_38._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->SliderBarColor).field0_0x0 = local_38._0_8_;
  *(undefined8 *)((longlong)&(this->SliderBarColor).field0_0x0 + 8) = local_38._8_8_;
  this_00 = (this->MySlider).Object;
  if (this_00 != (SSlider *)0x0) {
    local_28 = 0;
    local_10 = 0;
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    SSlider::SetSliderBarColor(this_00,(TAttribute<FSlateColor> *)&local_38._s_0);
  }
  return;
}

// SetSliderHandleColor @ 146a1b8c0

void __thiscall USlider::SetSliderHandleColor(USlider *this,FLinearColor *param_1)

{
  SSlider *this_00;
  FLinearColor_u_0 local_38;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_38._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_38._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->SliderHandleColor).field0_0x0 = local_38._0_8_;
  *(undefined8 *)((longlong)&(this->SliderHandleColor).field0_0x0 + 8) = local_38._8_8_;
  this_00 = (this->MySlider).Object;
  if (this_00 != (SSlider *)0x0) {
    local_28 = 0;
    local_10 = 0;
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    SSlider::SetSliderHandleColor(this_00,(TAttribute<FSlateColor> *)&local_38._s_0);
  }
  return;
}

// SetStepSize @ 146a1b990

void __thiscall USlider::SetStepSize(USlider *this,float param_1)

{
  SSlider *this_00;
  TAttribute<float> local_28;
  
  this->StepSize = param_1;
  this_00 = (this->MySlider).Object;
  if (this_00 != (SSlider *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Value = param_1;
    SSlider::SetStepSize(this_00,&local_28);
  }
  return;
}

// SetValue @ 146a1d320

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USlider::SetValue(USlider *this,float param_1)

{
  SSlider *this_00;
  float local_res10 [6];
  FFieldId local_48;
  TAttribute<float> local_38;
  
  this_00 = (this->MySlider).Object;
  if (this_00 != (SSlider *)0x0) {
    local_38.Getter._16_8_ = 0;
    local_38.bIsSet = true;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    local_38.Value = param_1;
    SSlider::SetValue(this_00,&local_38);
  }
  if (param_1 != this->Value) {
    this->Value = param_1;
    local_res10[0] = param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnValueChanged,
               local_res10);
    local_48.FieldName = FFieldNotificationClassDescriptor::Value.FieldName;
    local_48.BitNumber = FFieldNotificationClassDescriptor::Value.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->field_0x28,&local_48);
  }
  return;
}

// SetWidgetStyle @ 146a1df60

void __thiscall USlider::SetWidgetStyle(USlider *this,FSliderStyle *param_1)

{
  SSlider *this_00;
  
  FSliderStyle::operator=(&this->WidgetStyle,param_1);
  this_00 = (this->MySlider).Object;
  if (this_00 != (SSlider *)0x0) {
    SSlider::SetStyle(this_00,&this->WidgetStyle);
  }
  return;
}

// StaticRegisterNativesUSlider @ 146a1f010

void __cdecl USlider::StaticRegisterNativesUSlider(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_USlider_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a258f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USlider::SynchronizeProperties(USlider *this)

{
  SSlider *this_00;
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  TAttribute<float> *pTVar4;
  FName local_res8;
  undefined1 local_188 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_180;
  ForAnyElementType FStack_178;
  ulonglong local_170;
  float local_168;
  undefined1 local_164;
  undefined1 local_160 [24];
  TAttribute<bool> local_148;
  TAttribute<bool> local_128;
  TAttribute<float> local_108;
  FDestructionSentinel local_e8;
  FLinearColor_u_0 local_d0;
  undefined1 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  FLinearColor_u_0 local_a0;
  undefined1 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined1 local_68 [24];
  TAttribute<float> local_50;
  FReadAccessScope local_30;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  if ((this->MySlider).Object != (SSlider *)0x0) {
    bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->ValueDelegate);
    bVar2 = !bVar2;
    if (bVar2) {
      pTVar4 = (TAttribute<float> *)local_188;
      local_188._0_4_ = this->Value;
      local_180.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_178.Data = (FScriptContainerElement *)0x0;
      local_188[4] = true;
      local_170 = 0;
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ValueDelegate,
                 &local_30);
      local_res8.ComparisonIndex.Value = *(uint *)&(this->ValueDelegate).field_0x10;
      local_res8.Number = *(uint *)&(this->ValueDelegate).field_0x14;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_30);
      pUVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->ValueDelegate);
      pTVar4 = TAttribute<float>::Create<UObject>((TAttribute<float> *)local_70,pUVar3,&local_res8);
    }
    local_168 = pTVar4->Value;
    local_164 = pTVar4->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_160,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar4->Getter);
    if (bVar2) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_180,(FWriteAccessScope *)&local_e8);
      if (((int)local_170 != 0) && (FStack_178.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_178.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_178,0,0,0x10);
        local_170 = local_170 & 0xffffffff00000000;
      }
      if (local_e8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
      }
      if (FStack_178.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_178.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_180.AccessDetector);
    }
    if (!bVar2) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
      if ((void *)local_68._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
    if ((this->MySlider).Object == (SSlider *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    SSlider::SetOrientation((this->MySlider).Object,(uint)(this->Orientation).Value);
    if ((this->MySlider).Object == (SSlider *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    SSlider::SetMouseUsesStep((this->MySlider).Object,this->MouseUsesStep);
    if ((this->MySlider).Object == (SSlider *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    SSlider::SetRequiresControllerLock((this->MySlider).Object,this->RequiresControllerLock);
    if ((this->MySlider).Object == (SSlider *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_d0._0_8_ = *(undefined8 *)&(this->SliderBarColor).field0_0x0;
    local_d0._8_8_ = *(undefined8 *)((longlong)&(this->SliderBarColor).field0_0x0 + 8);
    local_c0 = 0;
    local_bc = 1;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    SSlider::SetSliderBarColor((this->MySlider).Object,(TAttribute<FSlateColor> *)&local_d0._s_0);
    if ((this->MySlider).Object == (SSlider *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_a0._0_8_ = *(undefined8 *)&(this->SliderHandleColor).field0_0x0;
    local_a0._8_8_ = *(undefined8 *)((longlong)&(this->SliderHandleColor).field0_0x0 + 8);
    local_90 = 0;
    local_8c = 1;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    SSlider::SetSliderHandleColor((this->MySlider).Object,(TAttribute<FSlateColor> *)&local_a0._s_0)
    ;
    if ((this->MySlider).Object == (SSlider *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this_00 = (this->MySlider).Object;
    local_50.Value = local_168;
    local_50.bIsSet = (bool)local_164;
    TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_50.Getter,
               (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_160);
    SSlider::SetValue(this_00,&local_50);
    if ((this->MySlider).Object == (SSlider *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    SSlider::SetMinAndMaxValues((this->MySlider).Object,this->MinValue,this->MaxValue);
    if ((this->MySlider).Object == (SSlider *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_148.Value = this->Locked;
    local_148.Getter._16_8_ = 0;
    local_148.bIsSet = true;
    local_148.Getter._0_8_ = 0;
    local_148.Getter._8_8_ = 0;
    SSlider::SetLocked((this->MySlider).Object,&local_148);
    if ((this->MySlider).Object == (SSlider *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_128.Value = this->IndentHandle;
    local_128.Getter._16_8_ = 0;
    local_128.bIsSet = true;
    local_128.Getter._0_8_ = 0;
    local_128.Getter._8_8_ = 0;
    SSlider::SetIndentHandle((this->MySlider).Object,&local_128);
    if ((this->MySlider).Object == (SSlider *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_108.Value = this->StepSize;
    local_108.Getter._0_8_ = 0;
    local_108.Getter._8_8_ = 0;
    local_108.bIsSet = true;
    local_108.Getter._16_8_ = 0;
    SSlider::SetStepSize((this->MySlider).Object,&local_108);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_160);
    if ((void *)local_160._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_160._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_160);
  }
  return;
}

// execGetNormalizedValue @ 146a359a0

void __cdecl USlider::execGetNormalizedValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SSlider **)&param_1[0x2b].field_0x10 != (SSlider *)0x0) {
    fVar1 = SSlider::GetNormalizedValue(*(SSlider **)&param_1[0x2b].field_0x10);
    *(float *)param_3 = fVar1;
    return;
  }
  fVar1 = *(float *)&param_1[0xb].field_0x18;
  if (fVar1 == *(float *)&param_1[0xb].field_0x1c) {
    *(undefined4 *)param_3 = __real_3f800000;
    return;
  }
  *(float *)param_3 =
       (*(float *)&param_1[10].field_0x20 - fVar1) / (*(float *)&param_1[0xb].field_0x1c - fVar1);
  return;
}

// execGetValue @ 146a36650

void __cdecl USlider::execGetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SSlider **)&param_1[0x2b].field_0x10 != (SSlider *)0x0) {
    fVar1 = SSlider::GetValue(*(SSlider **)&param_1[0x2b].field_0x10);
    *(float *)param_3 = fVar1;
    return;
  }
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[10].field_0x20;
  return;
}

// execSetIndentHandle @ 146a3dc90

void __cdecl USlider::execSetIndentHandle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SSlider *this;
  int local_res8 [2];
  TAttribute<bool> local_28;
  
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
  local_28.Value = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SSlider **)&param_1[0x2b].field_0x10;
  param_1[0x28].field_0x4 = local_28.Value;
  if (this != (SSlider *)0x0) {
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SSlider::SetIndentHandle(this,&local_28);
  }
  return;
}

// execSetLocked @ 146a3ecc0

void __cdecl USlider::execSetLocked(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SSlider *this;
  int local_res8 [2];
  TAttribute<bool> local_28;
  
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
  local_28.Value = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SSlider **)&param_1[0x2b].field_0x10;
  param_1[0x28].field_0x5 = local_28.Value;
  if (this != (SSlider *)0x0) {
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SSlider::SetLocked(this,&local_28);
  }
  return;
}

// execSetMaxValue @ 146a3f110

void __cdecl USlider::execSetMaxValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SSlider *this;
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
  this = *(SSlider **)&param_1[0x2b].field_0x10;
  *(float *)&param_1[0xb].field_0x1c = local_res8[0];
  if (this != (SSlider *)0x0) {
    SSlider::SetMinAndMaxValues(this,*(float *)&param_1[0xb].field_0x18,local_res8[0]);
  }
  return;
}

// execSetMinValue @ 146a3f8a0

void __cdecl USlider::execSetMinValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SSlider *this;
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
  this = *(SSlider **)&param_1[0x2b].field_0x10;
  *(float *)&param_1[0xb].field_0x18 = local_res8[0];
  if (this != (SSlider *)0x0) {
    SSlider::SetMinAndMaxValues(this,local_res8[0],*(float *)&param_1[0xb].field_0x1c);
  }
  return;
}

// execSetSliderBarColor @ 146a42be0

void __cdecl USlider::execSetSliderBarColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SSlider *this;
  undefined8 local_48;
  undefined8 uStack_40;
  FLinearColor_u_0 local_38;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SSlider **)&param_1[0x2b].field_0x10;
  *(undefined8 *)&param_1[0x27].field_0xc = local_48;
  *(undefined8 *)&param_1[0x27].field_0x14 = uStack_40;
  if (this != (SSlider *)0x0) {
    local_28 = 0;
    local_10 = 0;
    local_38._0_8_ = local_48;
    local_38._8_8_ = uStack_40;
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    SSlider::SetSliderBarColor(this,(TAttribute<FSlateColor> *)&local_38._s_0);
  }
  return;
}

// execSetSliderHandleColor @ 146a42ca0

void __cdecl USlider::execSetSliderHandleColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SSlider *this;
  undefined8 local_48;
  undefined8 uStack_40;
  FLinearColor_u_0 local_38;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SSlider **)&param_1[0x2b].field_0x10;
  *(undefined8 *)&param_1[0x27].field_0x1c = local_48;
  *(undefined8 *)&param_1[0x27].field_0x24 = uStack_40;
  if (this != (SSlider *)0x0) {
    local_28 = 0;
    local_10 = 0;
    local_38._0_8_ = local_48;
    local_38._8_8_ = uStack_40;
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    SSlider::SetSliderHandleColor(this,(TAttribute<FSlateColor> *)&local_38._s_0);
  }
  return;
}

// execSetStepSize @ 146a42f00

void __cdecl USlider::execSetStepSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SSlider *this;
  float local_res8 [2];
  TAttribute<float> local_28;
  
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
  this = *(SSlider **)&param_1[0x2b].field_0x10;
  *(float *)&param_1[0x28].field_0x8 = local_res8[0];
  if (this != (SSlider *)0x0) {
    local_28.Value = local_res8[0];
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SSlider::SetStepSize(this,&local_28);
  }
  return;
}

// execSetValue @ 146a44060

void __cdecl USlider::execSetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetValue((USlider *)param_1,local_res10[0]);
  return;
}

