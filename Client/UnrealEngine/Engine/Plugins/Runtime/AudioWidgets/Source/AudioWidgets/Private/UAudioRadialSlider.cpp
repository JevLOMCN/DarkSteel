// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 40

// StaticClass @ 14d8940c0

UClass * __cdecl UAudioRadialSlider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioRadialSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioRadialSlider",
               &Z_Registration_Info_UClass_UAudioRadialSlider.InnerSingleton,
               StaticRegisterNativesUAudioRadialSlider,0x3c0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioRadialSlider>,
               InternalVTableHelperCtorCaller<UAudioRadialSlider>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioRadialSlider.InnerSingleton;
}

// UAudioRadialSlider @ 14d8b9bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UAudioRadialSlider * __thiscall
UAudioRadialSlider::UAudioRadialSlider(UAudioRadialSlider *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  *(undefined8 *)&this->ValueDelegate = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&(this->ValueDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ValueDelegate).field_0x10 = 0;
  FText::FText(&this->UnitsText);
  *(undefined8 *)&this->OnValueChanged = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x10 = 0;
  FAudioRadialSliderStyle::FAudioRadialSliderStyle(&this->WidgetStyle);
  (this->MyAudioRadialSlider).Object = (SAudioRadialSlider *)0x0;
  (this->MyAudioRadialSlider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UAudioRadialSlider @ 14d8b9c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UAudioRadialSlider * __thiscall
UAudioRadialSlider::UAudioRadialSlider(UAudioRadialSlider *this,FObjectInitializer *param_1)

{
  FAudioRadialSliderStyle *pFVar1;
  FAudioRadialSliderStyle *this_00;
  FAudioRadialSliderStyle *pFVar2;
  FLinearColor *pFVar3;
  FText *pFVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  FText local_18;
  
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  *(undefined8 *)&this->ValueDelegate = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&(this->ValueDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ValueDelegate).field_0x10 = 0;
  FText::FText(&this->UnitsText);
  *(undefined8 *)&this->OnValueChanged = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x10 = 0;
  FAudioRadialSliderStyle::FAudioRadialSliderStyle(&this->WidgetStyle);
  pFVar2 = DefaultAudioRadialSliderStyle;
  (this->MyAudioRadialSlider).Object = (SAudioRadialSlider *)0x0;
  (this->MyAudioRadialSlider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar1 = DefaultAudioRadialSliderStyle;
  if ((pFVar2 == (FAudioRadialSliderStyle *)0x0) &&
     (this_00 = ::operator_new(0x140), pFVar2 = (FAudioRadialSliderStyle *)0x0,
     pFVar1 = (FAudioRadialSliderStyle *)0x0, this_00 != (FAudioRadialSliderStyle *)0x0)) {
    pFVar2 = FAudioRadialSliderStyle::GetDefault();
    pFVar2 = FAudioRadialSliderStyle::FAudioRadialSliderStyle(this_00,pFVar2);
    pFVar1 = pFVar2;
  }
  DefaultAudioRadialSliderStyle = pFVar1;
  FAudioRadialSliderStyle::operator=(&this->WidgetStyle,pFVar2);
  this->Value = 0.0;
  (this->WidgetLayout).Value = '\x02';
  if (FStyleColors::Recessed.ColorUseRule == UseColor_ColorTable) {
    pFVar3 = FSlateColor::GetColorFromTable(&FStyleColors::Recessed);
    fVar5 = (pFVar3->field0_0x0)._s_0.R;
    fVar6 = (pFVar3->field0_0x0)._s_0.G;
    fVar7 = (pFVar3->field0_0x0)._s_0.B;
    fVar8 = (pFVar3->field0_0x0)._s_0.A;
  }
  else {
    fVar5 = FStyleColors::Recessed.SpecifiedColor.field0_0x0._0_4_;
    fVar6 = FStyleColors::Recessed.SpecifiedColor.field0_0x0._4_4_;
    fVar7 = FStyleColors::Recessed.SpecifiedColor.field0_0x0._8_4_;
    fVar8 = FStyleColors::Recessed.SpecifiedColor.field0_0x0._12_4_;
  }
  (this->CenterBackgroundColor).field0_0x0._s_0.R = fVar5;
  (this->CenterBackgroundColor).field0_0x0._s_0.G = fVar6;
  (this->CenterBackgroundColor).field0_0x0._s_0.B = fVar7;
  (this->CenterBackgroundColor).field0_0x0._s_0.A = fVar8;
  if (FStyleColors::White.ColorUseRule == UseColor_ColorTable) {
    pFVar3 = FSlateColor::GetColorFromTable(&FStyleColors::White);
    fVar5 = (pFVar3->field0_0x0)._s_0.R;
    fVar6 = (pFVar3->field0_0x0)._s_0.G;
    fVar7 = (pFVar3->field0_0x0)._s_0.B;
    fVar8 = (pFVar3->field0_0x0)._s_0.A;
  }
  else {
    fVar5 = FStyleColors::White.SpecifiedColor.field0_0x0._0_4_;
    fVar6 = FStyleColors::White.SpecifiedColor.field0_0x0._4_4_;
    fVar7 = FStyleColors::White.SpecifiedColor.field0_0x0._8_4_;
    fVar8 = FStyleColors::White.SpecifiedColor.field0_0x0._12_4_;
  }
  (this->SliderProgressColor).field0_0x0._s_0.R = fVar5;
  (this->SliderProgressColor).field0_0x0._s_0.G = fVar6;
  (this->SliderProgressColor).field0_0x0._s_0.B = fVar7;
  (this->SliderProgressColor).field0_0x0._s_0.A = fVar8;
  if (FStyleColors::AccentGray.ColorUseRule == UseColor_ColorTable) {
    pFVar3 = FSlateColor::GetColorFromTable(&FStyleColors::AccentGray);
    fVar5 = (pFVar3->field0_0x0)._s_0.R;
    fVar6 = (pFVar3->field0_0x0)._s_0.G;
    fVar7 = (pFVar3->field0_0x0)._s_0.B;
    fVar8 = (pFVar3->field0_0x0)._s_0.A;
  }
  else {
    fVar5 = FStyleColors::AccentGray.SpecifiedColor.field0_0x0._0_4_;
    fVar6 = FStyleColors::AccentGray.SpecifiedColor.field0_0x0._4_4_;
    fVar7 = FStyleColors::AccentGray.SpecifiedColor.field0_0x0._8_4_;
    fVar8 = FStyleColors::AccentGray.SpecifiedColor.field0_0x0._12_4_;
  }
  (this->SliderBarColor).field0_0x0._s_0.R = fVar5;
  (this->SliderBarColor).field0_0x0._s_0.G = fVar6;
  (this->SliderBarColor).field0_0x0._s_0.B = fVar7;
  (this->SliderBarColor).field0_0x0._s_0.A = fVar8;
  if (FStyleColors::Recessed.ColorUseRule == UseColor_ColorTable) {
    pFVar3 = FSlateColor::GetColorFromTable(&FStyleColors::Recessed);
    fVar5 = (pFVar3->field0_0x0)._s_0.R;
    fVar6 = (pFVar3->field0_0x0)._s_0.G;
    fVar7 = (pFVar3->field0_0x0)._s_0.B;
    fVar8 = (pFVar3->field0_0x0)._s_0.A;
  }
  else {
    fVar5 = FStyleColors::Recessed.SpecifiedColor.field0_0x0._0_4_;
    fVar6 = FStyleColors::Recessed.SpecifiedColor.field0_0x0._4_4_;
    fVar7 = FStyleColors::Recessed.SpecifiedColor.field0_0x0._8_4_;
    fVar8 = FStyleColors::Recessed.SpecifiedColor.field0_0x0._12_4_;
  }
  (this->TextLabelBackgroundColor).field0_0x0._s_0.R = fVar5;
  (this->TextLabelBackgroundColor).field0_0x0._s_0.G = fVar6;
  (this->TextLabelBackgroundColor).field0_0x0._s_0.B = fVar7;
  (this->TextLabelBackgroundColor).field0_0x0._s_0.A = fVar8;
  pFVar4 = FText::FromString(&local_18,"units");
  FText::operator=(&this->UnitsText,pFVar4);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  (this->HandStartEndRatio).field0_0x0._s_0.X = 0.0;
  (this->HandStartEndRatio).field0_0x0._s_0.Y = 1.0;
  this->ShowLabelOnlyOnHover = false;
  this->ShowUnitsText = true;
  this->IsUnitsTextReadOnly = true;
  this->IsValueTextReadOnly = false;
  this->SliderThickness = 5.0;
  (this->OutputRange).field0_0x0._s_0.X = 0.0;
  (this->OutputRange).field0_0x0._s_0.Y = 1.0;
  return this;
}

// ~UAudioRadialSlider @ 14d8c15f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UAudioRadialSlider::~UAudioRadialSlider(UAudioRadialSlider *this)

{
  TReferenceControllerBase<1> *pTVar1;
  void *pvVar2;
  ITextData *pIVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyAudioRadialSlider).SharedReferenceCount.ReferenceController);
  pTVar1 = (this->WidgetStyle).TextBoxStyle.BackgroundImage.ResourceHandle.Data.SharedReferenceCount
           .ReferenceController;
  *(undefined ***)&this->WidgetStyle = &___7FAudioRadialSliderStyle__6B_;
  *(undefined ***)&(this->WidgetStyle).TextBoxStyle = &___7FAudioTextBoxStyle__6B_;
  (this->WidgetStyle).TextBoxStyle.BackgroundImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&(this->WidgetStyle).TextBoxStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->WidgetStyle);
  pvVar2 = *(void **)&(this->OnValueChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChanged);
  pIVar3 = (this->UnitsText).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ValueDelegate);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetOutputValue @ 14d932900

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UAudioRadialSlider::GetOutputValue(UAudioRadialSlider *this,float param_1)

{
  SAudioRadialSlider *pSVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  
  if ((this->MyAudioRadialSlider).Object == (SAudioRadialSlider *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar4 = (float)(*pcVar2)();
      return fVar4;
    }
  }
  pSVar1 = (this->MyAudioRadialSlider).Object;
                    /* WARNING: Could not recover jumptable at 0x00014d932958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar4 = (float)(**(code **)(pSVar1->_padding_ + 0x248))(pSVar1,param_1);
  return fVar4;
}

// GetPrivateStaticClass @ 14d933d20

UClass * __cdecl UAudioRadialSlider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioRadialSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioRadialSlider",
               &Z_Registration_Info_UClass_UAudioRadialSlider.InnerSingleton,
               StaticRegisterNativesUAudioRadialSlider,0x3c0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioRadialSlider>,
               InternalVTableHelperCtorCaller<UAudioRadialSlider>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioRadialSlider.InnerSingleton;
}

// GetSliderValue @ 14d936250

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UAudioRadialSlider::GetSliderValue(UAudioRadialSlider *this,float param_1)

{
  SAudioRadialSlider *pSVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  
  if ((this->MyAudioRadialSlider).Object == (SAudioRadialSlider *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar4 = (float)(*pcVar2)();
      return fVar4;
    }
  }
  pSVar1 = (this->MyAudioRadialSlider).Object;
                    /* WARNING: Could not recover jumptable at 0x00014d9362a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar4 = (float)(**(code **)(pSVar1->_padding_ + 0x250))(pSVar1,param_1);
  return fVar4;
}

// HandleOnValueChanged @ 14d938cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioRadialSlider::HandleOnValueChanged(UAudioRadialSlider *this,float param_1)

{
  float local_res10 [6];
  
  local_res10[0] = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnValueChanged,
             local_res10);
  return;
}

// RebuildWidget @ 14d960a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UAudioRadialSlider::RebuildWidget
          (UAudioRadialSlider *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  SAudioRadialSlider *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FArguments *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TSharedRef<SAudioRadialSlider,1> *pTVar8;
  TSharedRef<SWidget,1> *pTVar9;
  TSharedPtr<SAudioRadialSlider,1> *pTVar10;
  undefined1 auStackY_518 [32];
  T0RequiredArgs local_4e8 [4];
  FLLMScope local_4e4;
  undefined1 local_4e0 [8];
  FDelegateAllocation local_4d8;
  FMemScope local_4c8;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  SAudioRadialSlider *local_4b8;
  FSharedReferencer<1> local_4b0;
  UAudioRadialSlider *local_4a8;
  FName local_4a0;
  TSharedRef<SAudioRadialSlider,1> local_498;
  FDestructionSentinel local_488;
  FDestructionSentinel local_470;
  FDelegateAllocation *local_458;
  TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs> local_450;
  FArguments local_438;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_518;
  pFVar5 = SAudioRadialSlider::FArguments::FArguments(&local_438);
  uStack_4c0 = 0;
  pFVar5->_Style = &this->WidgetStyle;
  local_4c8 = (FMemScope)HandleOnValueChanged;
  uStack_4bc = local_498.SharedReferenceCount.ReferenceController._4_4_;
  local_4e0 = (undefined1  [8])0x0;
  local_4d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_4d8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4e0,
             (FWriteAccessScope *)&local_470);
  local_458 = &local_4d8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_4d8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAudioRadialSlider____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UAudioRadialSlider *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar6[3] = 0;
    local_4a8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UAudioRadialSlider *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_4a8);
    *(FMemScope *)(puVar6 + 4) = local_4c8;
    puVar6[5] = CONCAT44(uStack_4bc,uStack_4c0);
  }
  if (local_470.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_470.Accessor,&local_470);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar5->_OnValueChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4e0);
  FLLMScope::FLLMScope(&local_4e4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4a0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4c8,&local_4a0,true);
  TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs>
            (&local_450,"SAudioRadialSlider",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioRadialSlider.cpp"
             ,0xe7,local_4e8);
  FMemScope::~FMemScope(&local_4c8);
  FLLMScope::~FLLMScope(&local_4e4);
  pTVar8 = TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_450,&local_498,pFVar5);
  local_4b0.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
  local_4b8 = pTVar8->Object;
  if (local_4b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4b0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4b0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = &this->MyAudioRadialSlider;
  if (pTVar10 != (TSharedPtr<SAudioRadialSlider,1> *)&local_4b8) {
    pTVar10->Object = local_4b8;
    local_4b8 = (SAudioRadialSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyAudioRadialSlider).SharedReferenceCount,&local_4b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4b0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_498.SharedReferenceCount.ReferenceController._4_4_,
                      local_498.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_450._Widget.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4e0,
             (FWriteAccessScope *)&local_488);
  if ((local_4d8.DelegateSize != 0) &&
     (local_4d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_4d8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_4d8,0,0,0x10);
    local_4d8.DelegateSize = 0;
  }
  if (local_488.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_488.Accessor,&local_488);
  }
  if (local_4d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_4d8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4e0);
  SAudioRadialSlider::FArguments::~FArguments(&local_438);
  if (pTVar10->Object == (SAudioRadialSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar9;
    }
  }
  pSVar1 = pTVar10->Object;
  pTVar2 = (this->MyAudioRadialSlider).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar1 == (SAudioRadialSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar9;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar1;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 14d963b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioRadialSlider::ReleaseSlateResources(UAudioRadialSlider *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UVisual::ReleaseSlateResources((UVisual *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyAudioRadialSlider != (TSharedPtr<SAudioRadialSlider,1> *)&local_18) {
    (this->MyAudioRadialSlider).Object = (SAudioRadialSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyAudioRadialSlider).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetCenterBackgroundColor @ 14d9684c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioRadialSlider::SetCenterBackgroundColor(UAudioRadialSlider *this,FLinearColor *param_1)

{
  SAudioRadialSlider *this_00;
  FLinearColor_u_0 local_48;
  uint local_38;
  uint local_18;
  
  local_48._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_48._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->CenterBackgroundColor).field0_0x0 = local_48._0_8_;
  *(undefined8 *)((longlong)&(this->CenterBackgroundColor).field0_0x0 + 8) = local_48._8_8_;
  this_00 = (this->MyAudioRadialSlider).Object;
  if (this_00 != (SAudioRadialSlider *)0x0) {
    local_18 = local_18 & 0xffffff00;
    local_38 = local_18;
    SAudioRadialSlider::SetCenterBackgroundColor(this_00,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// SetHandStartEndRatio @ 14d9696d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioRadialSlider::SetHandStartEndRatio(UAudioRadialSlider *this,TVector2<double> *param_1)

{
  SAudioRadialSlider *this_00;
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_18._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  (this->HandStartEndRatio).field0_0x0._s_0.X = local_18._s_0.X;
  (this->HandStartEndRatio).field0_0x0._s_0.Y = local_18._s_0.Y;
  this_00 = (this->MyAudioRadialSlider).Object;
  if (this_00 != (SAudioRadialSlider *)0x0) {
    SAudioRadialSlider::SetHandStartEndRatio(this_00,(TVector2<double> *)&local_18._s_0);
  }
  return;
}

// SetOutputRange @ 14d96ba80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioRadialSlider::SetOutputRange(UAudioRadialSlider *this,TVector2<double> *param_1)

{
  SAudioRadialSlider *pSVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->field0_0x0;
  uStack_14 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uStack_10 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uStack_c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  *(undefined4 *)&(this->OutputRange).field0_0x0 = local_18;
  *(undefined4 *)((longlong)&(this->OutputRange).field0_0x0 + 4) = uStack_14;
  *(undefined4 *)((longlong)&(this->OutputRange).field0_0x0 + 8) = uStack_10;
  *(undefined4 *)((longlong)&(this->OutputRange).field0_0x0 + 0xc) = uStack_c;
  pSVar1 = (this->MyAudioRadialSlider).Object;
  if (pSVar1 != (SAudioRadialSlider *)0x0) {
    (**(code **)(pSVar1->_padding_ + 0x260))(pSVar1,&local_18);
  }
  return;
}

// SetShowLabelOnlyOnHover @ 14d96c580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioRadialSlider::SetShowLabelOnlyOnHover(UAudioRadialSlider *this,bool param_1)

{
  SAudioRadialSlider *pSVar1;
  code *pcVar2;
  bool bVar3;
  
  pSVar1 = (this->MyAudioRadialSlider).Object;
  this->ShowLabelOnlyOnHover = param_1;
  if (pSVar1 != (SAudioRadialSlider *)0x0) {
    if ((pSVar1->Label).Object == (SAudioTextBox *)0x0) {
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
    SAudioTextBox::SetShowLabelOnlyOnHover((pSVar1->Label).Object,param_1);
  }
  return;
}

// SetShowUnitsText @ 14d96ca60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioRadialSlider::SetShowUnitsText(UAudioRadialSlider *this,bool param_1)

{
  SAudioRadialSlider *pSVar1;
  
  this->ShowUnitsText = param_1;
  pSVar1 = (this->MyAudioRadialSlider).Object;
  if (pSVar1 != (SAudioRadialSlider *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d96ca75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pSVar1->_padding_ + 0x280))();
    return;
  }
  return;
}

// SetSliderBarColor @ 14d96d0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioRadialSlider::SetSliderBarColor(UAudioRadialSlider *this,FLinearColor *param_1)

{
  SAudioRadialSlider *this_00;
  FLinearColor_u_0 local_48;
  uint local_38;
  uint local_18;
  
  local_48._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_48._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->SliderBarColor).field0_0x0 = local_48._0_8_;
  *(undefined8 *)((longlong)&(this->SliderBarColor).field0_0x0 + 8) = local_48._8_8_;
  this_00 = (this->MyAudioRadialSlider).Object;
  if (this_00 != (SAudioRadialSlider *)0x0) {
    local_18 = local_18 & 0xffffff00;
    local_38 = local_18;
    SAudioRadialSlider::SetSliderBarColor(this_00,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// SetSliderProgressColor @ 14d96d270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioRadialSlider::SetSliderProgressColor(UAudioRadialSlider *this,FLinearColor *param_1)

{
  SAudioRadialSlider *this_00;
  FLinearColor_u_0 local_48;
  uint local_38;
  uint local_18;
  
  local_48._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_48._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->SliderProgressColor).field0_0x0 = local_48._0_8_;
  *(undefined8 *)((longlong)&(this->SliderProgressColor).field0_0x0 + 8) = local_48._8_8_;
  this_00 = (this->MyAudioRadialSlider).Object;
  if (this_00 != (SAudioRadialSlider *)0x0) {
    local_18 = local_18 & 0xffffff00;
    local_38 = local_18;
    SAudioRadialSlider::SetSliderProgressColor(this_00,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// SetSliderThickness @ 14d96d330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioRadialSlider::SetSliderThickness(UAudioRadialSlider *this,float param_1)

{
  SAudioRadialSlider *pSVar1;
  code *pcVar2;
  bool bVar3;
  
  this->SliderThickness = param_1;
  pSVar1 = (this->MyAudioRadialSlider).Object;
  if (pSVar1 == (SAudioRadialSlider *)0x0) {
    return;
  }
  if ((pSVar1->RadialSlider).Object == (SRadialSlider *)0x0) {
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
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  SRadialSlider::SetThickness((pSVar1->RadialSlider).Object,param_1);
  return;
}

// SetTextLabelBackgroundColor @ 14d96dcd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioRadialSlider::SetTextLabelBackgroundColor(UAudioRadialSlider *this,FSlateColor *param_1)

{
  SAudioRadialSlider *pSVar1;
  FLinearColor *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 local_18;
  
  if (param_1->ColorUseRule == UseColor_ColorTable) {
    pFVar2 = FSlateColor::GetColorFromTable(param_1);
    fVar3 = (pFVar2->field0_0x0)._s_0.R;
    fVar4 = (pFVar2->field0_0x0)._s_0.G;
    fVar5 = (pFVar2->field0_0x0)._s_0.B;
    fVar6 = (pFVar2->field0_0x0)._s_0.A;
  }
  else {
    fVar3 = (param_1->SpecifiedColor).field0_0x0._s_0.R;
    fVar4 = (param_1->SpecifiedColor).field0_0x0._s_0.G;
    fVar5 = (param_1->SpecifiedColor).field0_0x0._s_0.B;
    fVar6 = (param_1->SpecifiedColor).field0_0x0._s_0.A;
  }
  pSVar1 = (this->MyAudioRadialSlider).Object;
  (this->TextLabelBackgroundColor).field0_0x0._s_0.R = fVar3;
  (this->TextLabelBackgroundColor).field0_0x0._s_0.G = fVar4;
  (this->TextLabelBackgroundColor).field0_0x0._s_0.B = fVar5;
  (this->TextLabelBackgroundColor).field0_0x0._s_0.A = fVar6;
  if (pSVar1 != (SAudioRadialSlider *)0x0) {
    local_18._0_1_ = param_1->ColorUseRule;
    local_18._1_1_ = param_1->ColorTableId;
    local_18._2_2_ = *(undefined2 *)&param_1->field_0x12;
    local_28 = (param_1->SpecifiedColor).field0_0x0._s_0.R;
    fStack_24 = (param_1->SpecifiedColor).field0_0x0._s_0.G;
    fStack_20 = (param_1->SpecifiedColor).field0_0x0._s_0.B;
    fStack_1c = (param_1->SpecifiedColor).field0_0x0._s_0.A;
    (**(code **)(pSVar1->_padding_ + 0x268))(pSVar1,&local_28);
  }
  return;
}

// SetUnitsText @ 14d96e760

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioRadialSlider::SetUnitsText(UAudioRadialSlider *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  SAudioRadialSlider *pSVar3;
  code *pcVar4;
  undefined1 local_res8 [8];
  ITextData *local_18;
  uint local_10;
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->UnitsText).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->UnitsText).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->UnitsText).Flags = param_1->Flags;
  pSVar3 = (this->MyAudioRadialSlider).Object;
  if (pSVar3 != (SAudioRadialSlider *)0x0) {
    local_18 = (param_1->TextData).Reference;
    pcVar4 = *(code **)(pSVar3->_padding_ + 0x270);
    if (local_18 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18 + 8))(local_18,local_res8);
    }
    local_10 = param_1->Flags;
    (*pcVar4)(pSVar3,&local_18);
  }
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return;
}

// SetUnitsTextReadOnly @ 14d96eae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioRadialSlider::SetUnitsTextReadOnly(UAudioRadialSlider *this,bool param_1)

{
  SAudioRadialSlider *pSVar1;
  
  this->IsUnitsTextReadOnly = param_1;
  pSVar1 = (this->MyAudioRadialSlider).Object;
  if (pSVar1 != (SAudioRadialSlider *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d96eaf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pSVar1->_padding_ + 0x278))();
    return;
  }
  return;
}

// SetValueTextReadOnly @ 14d96f440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioRadialSlider::SetValueTextReadOnly(UAudioRadialSlider *this,bool param_1)

{
  SAudioRadialSlider *pSVar1;
  code *pcVar2;
  bool bVar3;
  
  pSVar1 = (this->MyAudioRadialSlider).Object;
  this->IsValueTextReadOnly = param_1;
  if (pSVar1 != (SAudioRadialSlider *)0x0) {
    if ((pSVar1->Label).Object == (SAudioTextBox *)0x0) {
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
    SAudioTextBox::SetValueTextReadOnly((pSVar1->Label).Object,param_1);
  }
  return;
}

// SetWidgetLayout @ 14d96f8a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioRadialSlider::SetWidgetLayout(UAudioRadialSlider *this,EAudioRadialSliderLayout param_1)

{
  SAudioRadialSlider *pSVar1;
  code *pcVar2;
  bool bVar3;
  FDestructionSentinel FStack_48;
  undefined1 auStack_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_28;
  ForAnyElementType FStack_20;
  ulonglong uStack_18;
  
  (this->WidgetLayout).Value = (uchar)param_1;
  pSVar1 = (this->MyAudioRadialSlider).Object;
  if (pSVar1 == (SAudioRadialSlider *)0x0) {
    return;
  }
  uStack_18 = 0;
  auStack_30[4] = true;
  TStack_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  auStack_30._0_4_ = param_1;
  SetWidgetAttribute<enum_EAudioRadialSliderLayout,enum_EAudioRadialSliderLayout>
            ((SWidget *)pSVar1,&pSVar1->WidgetLayout,
             (TAttribute<EAudioRadialSliderLayout> *)auStack_30,Layout);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_28,(FWriteAccessScope *)&FStack_48);
  if (((int)uStack_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_28.AccessDetector);
  if ((pSVar1->LayoutWidgetSwitcher).Object == (SWidgetSwitcher *)0x0) {
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
  SWidgetSwitcher::SetActiveWidgetIndex((pSVar1->LayoutWidgetSwitcher).Object,param_1);
  return;
}

// StaticRegisterNativesUAudioRadialSlider @ 14d971d40

void __cdecl UAudioRadialSlider::StaticRegisterNativesUAudioRadialSlider(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xf;
  local_18.DataPtr = Z_Construct_UClass_UAudioRadialSlider_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 14d974250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UAudioRadialSlider::SynchronizeProperties(UAudioRadialSlider *this)

{
  SAudioRadialSlider *pSVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  undefined1 local_res8 [8];
  ITextData *local_148;
  uint local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  FLinearColor_u_0 local_118;
  uint local_108;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  uint local_e8;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  uint local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uint local_a8;
  FLinearColor_u_0 local_98;
  uint local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  FLinearColor_u_0 local_58;
  uint local_48;
  TVector2<double>_u_0 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  if ((this->MyAudioRadialSlider).Object == (SAudioRadialSlider *)0x0) {
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
  local_138 = *(undefined8 *)&(this->CenterBackgroundColor).field0_0x0;
  uStack_130 = *(undefined8 *)((longlong)&(this->CenterBackgroundColor).field0_0x0 + 8);
  local_128 = local_128 & 0xffffff00;
  local_108 = local_128;
  local_118._0_8_ = local_138;
  local_118._8_8_ = uStack_130;
  SAudioRadialSlider::SetCenterBackgroundColor
            ((this->MyAudioRadialSlider).Object,(FSlateColor *)&local_118._s_0);
  if ((this->MyAudioRadialSlider).Object == (SAudioRadialSlider *)0x0) {
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
  SAudioRadialSlider::SetWidgetLayout
            ((this->MyAudioRadialSlider).Object,(uint)(this->WidgetLayout).Value);
  if ((this->MyAudioRadialSlider).Object == (SAudioRadialSlider *)0x0) {
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
  local_f8 = (this->TextLabelBackgroundColor).field0_0x0._s_0.R;
  fStack_f4 = (this->TextLabelBackgroundColor).field0_0x0._s_0.G;
  fStack_f0 = (this->TextLabelBackgroundColor).field0_0x0._s_0.B;
  fStack_ec = (this->TextLabelBackgroundColor).field0_0x0._s_0.A;
  pSVar1 = (this->MyAudioRadialSlider).Object;
  local_e8 = local_e8 & 0xffffff00;
  local_c8 = local_e8;
  local_d8 = local_f8;
  fStack_d4 = fStack_f4;
  fStack_d0 = fStack_f0;
  fStack_cc = fStack_ec;
  (**(code **)(pSVar1->_padding_ + 0x268))(pSVar1,&local_d8);
  if ((this->MyAudioRadialSlider).Object == (SAudioRadialSlider *)0x0) {
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
  local_b8 = *(undefined8 *)&(this->SliderProgressColor).field0_0x0;
  uStack_b0 = *(undefined8 *)((longlong)&(this->SliderProgressColor).field0_0x0 + 8);
  local_a8 = local_a8 & 0xffffff00;
  local_88 = local_a8;
  local_98._0_8_ = local_b8;
  local_98._8_8_ = uStack_b0;
  SAudioRadialSlider::SetSliderProgressColor
            ((this->MyAudioRadialSlider).Object,(FSlateColor *)&local_98._s_0);
  if ((this->MyAudioRadialSlider).Object == (SAudioRadialSlider *)0x0) {
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
  local_78 = *(undefined8 *)&(this->SliderBarColor).field0_0x0;
  uStack_70 = *(undefined8 *)((longlong)&(this->SliderBarColor).field0_0x0 + 8);
  local_68 = local_68 & 0xffffff00;
  local_48 = local_68;
  local_58._0_8_ = local_78;
  local_58._8_8_ = uStack_70;
  SAudioRadialSlider::SetSliderBarColor
            ((this->MyAudioRadialSlider).Object,(FSlateColor *)&local_58._s_0);
  if ((this->MyAudioRadialSlider).Object == (SAudioRadialSlider *)0x0) {
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
  local_38._s_0.X = (this->HandStartEndRatio).field0_0x0._s_0.X;
  local_38._s_0.Y = (this->HandStartEndRatio).field0_0x0._s_0.Y;
  SAudioRadialSlider::SetHandStartEndRatio
            ((this->MyAudioRadialSlider).Object,(TVector2<double> *)&local_38._s_0);
  if ((this->MyAudioRadialSlider).Object == (SAudioRadialSlider *)0x0) {
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
  local_148 = (this->UnitsText).TextData.Reference;
  pSVar1 = (this->MyAudioRadialSlider).Object;
  pcVar2 = *(code **)(pSVar1->_padding_ + 0x270);
  if (local_148 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_148 + 8))(local_148,local_res8);
  }
  local_140 = (this->UnitsText).Flags;
  (*pcVar2)(pSVar1,&local_148);
  if ((this->MyAudioRadialSlider).Object == (SAudioRadialSlider *)0x0) {
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
  pSVar1 = (this->MyAudioRadialSlider).Object;
  (**(code **)(pSVar1->_padding_ + 0x278))(pSVar1,this->IsUnitsTextReadOnly);
  if ((this->MyAudioRadialSlider).Object == (SAudioRadialSlider *)0x0) {
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
  pSVar1 = (this->MyAudioRadialSlider).Object;
  bVar3 = this->IsValueTextReadOnly;
  if ((pSVar1->Label).Object == (SAudioTextBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SAudioTextBox::SetValueTextReadOnly((pSVar1->Label).Object,bVar3);
  if ((this->MyAudioRadialSlider).Object == (SAudioRadialSlider *)0x0) {
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
  pSVar1 = (this->MyAudioRadialSlider).Object;
  bVar3 = this->ShowLabelOnlyOnHover;
  if ((pSVar1->Label).Object == (SAudioTextBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SAudioTextBox::SetShowLabelOnlyOnHover((pSVar1->Label).Object,bVar3);
  if ((this->MyAudioRadialSlider).Object == (SAudioRadialSlider *)0x0) {
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
  pSVar1 = (this->MyAudioRadialSlider).Object;
  (**(code **)(pSVar1->_padding_ + 0x280))(pSVar1,this->ShowUnitsText);
  if ((this->MyAudioRadialSlider).Object == (SAudioRadialSlider *)0x0) {
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
  pSVar1 = (this->MyAudioRadialSlider).Object;
  fVar5 = this->SliderThickness;
  if ((pSVar1->RadialSlider).Object == (SRadialSlider *)0x0) {
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
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  SRadialSlider::SetThickness((pSVar1->RadialSlider).Object,fVar5);
  if ((this->MyAudioRadialSlider).Object == (SAudioRadialSlider *)0x0) {
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
  pSVar1 = (this->MyAudioRadialSlider).Object;
  local_28 = *(undefined4 *)&(this->OutputRange).field0_0x0;
  uStack_24 = *(undefined4 *)((longlong)&(this->OutputRange).field0_0x0 + 4);
  uStack_20 = *(undefined4 *)((longlong)&(this->OutputRange).field0_0x0 + 8);
  uStack_1c = *(undefined4 *)((longlong)&(this->OutputRange).field0_0x0 + 0xc);
  (**(code **)(pSVar1->_padding_ + 0x260))(pSVar1,&local_28);
  return;
}

// execGetOutputValue @ 14d97e500

void __cdecl UAudioRadialSlider::execGetOutputValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
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
  uVar4 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x17].field_0x18 == 0) {
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
  uVar4 = (**(code **)(**(longlong **)&param_1[0x17].field_0x18 + 0x248))
                    (*(longlong **)&param_1[0x17].field_0x18,uVar4);
  *(undefined4 *)param_3 = uVar4;
  return;
}

// execGetSliderValue @ 14d97e6c0

void __cdecl UAudioRadialSlider::execGetSliderValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
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
  uVar4 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x17].field_0x18 == 0) {
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
  uVar4 = (**(code **)(**(longlong **)&param_1[0x17].field_0x18 + 0x250))
                    (*(longlong **)&param_1[0x17].field_0x18,uVar4);
  *(undefined4 *)param_3 = uVar4;
  return;
}

// execSetCenterBackgroundColor @ 14d97eab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioRadialSlider::execSetCenterBackgroundColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SAudioRadialSlider *this;
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
  this = *(SAudioRadialSlider **)&param_1[0x17].field_0x18;
  *(undefined8 *)&param_1[0xb].field_0x1c = local_58;
  *(undefined8 *)&param_1[0xb].field_0x24 = uStack_50;
  if (this != (SAudioRadialSlider *)0x0) {
    local_18 = local_18 & 0xffffff00;
    local_38 = local_18;
    local_48._0_8_ = local_58;
    local_48._8_8_ = uStack_50;
    SAudioRadialSlider::SetCenterBackgroundColor(this,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// execSetHandStartEndRatio @ 14d97ed00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioRadialSlider::execSetHandStartEndRatio(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SAudioRadialSlider *this;
  double local_28;
  double dStack_20;
  TVector2<double>_u_0 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SAudioRadialSlider **)&param_1[0x17].field_0x18;
  *(double *)(param_1 + 0xd) = local_28;
  *(double *)&param_1[0xd].field_0x8 = dStack_20;
  if (this != (SAudioRadialSlider *)0x0) {
    local_18._s_0.X = local_28;
    local_18._s_0.Y = dStack_20;
    SAudioRadialSlider::SetHandStartEndRatio(this,(TVector2<double> *)&local_18._s_0);
  }
  return;
}

// execSetOutputRange @ 14d97fba0

void __cdecl UAudioRadialSlider::execSetOutputRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[0x17].field_0x18;
  *(undefined4 *)&param_1[0xe].field_0x10 = local_28;
  *(undefined4 *)&param_1[0xe].field_0x14 = uStack_24;
  *(undefined4 *)&param_1[0xe].field_0x18 = uStack_20;
  *(undefined4 *)&param_1[0xe].field_0x1c = uStack_1c;
  if (plVar2 != (longlong *)0x0) {
    local_18 = local_28;
    uStack_14 = uStack_24;
    uStack_10 = uStack_20;
    uStack_c = uStack_1c;
    (**(code **)(*plVar2 + 0x260))(plVar2,&local_18);
  }
  return;
}

// execSetShowLabelOnlyOnHover @ 14d97fc40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioRadialSlider::execSetShowLabelOnlyOnHover(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
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
  bVar5 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x17].field_0x18;
  param_1[0xe].field_0x8 = bVar5;
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x518) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    SAudioTextBox::SetShowLabelOnlyOnHover(*(SAudioTextBox **)(lVar2 + 0x518),bVar5);
  }
  return;
}

// execSetShowUnitsText @ 14d97fe20

void __cdecl
UAudioRadialSlider::execSetShowUnitsText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
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
  plVar2 = *(longlong **)&param_1[0x17].field_0x18;
  param_1[0xe].field_0x9 = local_res8[0] != 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x280))();
  }
  return;
}

// execSetSliderBarColor @ 14d980010

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioRadialSlider::execSetSliderBarColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SAudioRadialSlider *this;
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
  this = *(SAudioRadialSlider **)&param_1[0x17].field_0x18;
  *(undefined8 *)&param_1[0xc].field_0x14 = local_58;
  *(undefined8 *)&param_1[0xc].field_0x1c = uStack_50;
  if (this != (SAudioRadialSlider *)0x0) {
    local_18 = local_18 & 0xffffff00;
    local_38 = local_18;
    local_48._0_8_ = local_58;
    local_48._8_8_ = uStack_50;
    SAudioRadialSlider::SetSliderBarColor(this,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// execSetSliderProgressColor @ 14d980170

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioRadialSlider::execSetSliderProgressColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SAudioRadialSlider *this;
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
  this = *(SAudioRadialSlider **)&param_1[0x17].field_0x18;
  *(undefined8 *)&param_1[0xc].field_0x4 = local_58;
  *(undefined8 *)&param_1[0xc].field_0xc = uStack_50;
  if (this != (SAudioRadialSlider *)0x0) {
    local_18 = local_18 & 0xffffff00;
    local_38 = local_18;
    local_48._0_8_ = local_58;
    local_48._8_8_ = uStack_50;
    SAudioRadialSlider::SetSliderProgressColor(this,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// execSetSliderThickness @ 14d980220

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioRadialSlider::execSetSliderThickness(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SAudioRadialSlider *this;
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
  this = *(SAudioRadialSlider **)&param_1[0x17].field_0x18;
  *(float *)&param_1[0xe].field_0xc = local_res8[0];
  if (this != (SAudioRadialSlider *)0x0) {
    SAudioRadialSlider::SetSliderThickness(this,local_res8[0]);
  }
  return;
}

// execSetTextLabelBackgroundColor @ 14d9804f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UAudioRadialSlider::execSetTextLabelBackgroundColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  FLinearColor *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  FLinearColor_u_0 local_48;
  uint local_38;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  uint local_18;
  
  local_68 = ___xmm_3f8000003f800000000000003f800000;
  uStack_60 = _UNK_15090c6d8;
  local_58 = local_58 & 0xffffff00;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_48._s_0.R = (float)local_68;
  local_48._s_0.G = local_68._4_4_;
  local_48._s_0.B = (float)uStack_60;
  local_48._s_0.A = uStack_60._4_4_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = local_58;
  fVar4 = (float)local_68;
  fVar5 = local_68._4_4_;
  fVar6 = (float)uStack_60;
  fVar7 = uStack_60._4_4_;
  if ((char)local_58 == '\x01') {
    pFVar3 = FSlateColor::GetColorFromTable((FSlateColor *)&local_48._s_0);
    fVar4 = (pFVar3->field0_0x0)._s_0.R;
    fVar5 = (pFVar3->field0_0x0)._s_0.G;
    fVar6 = (pFVar3->field0_0x0)._s_0.B;
    fVar7 = (pFVar3->field0_0x0)._s_0.A;
  }
  plVar2 = *(longlong **)&param_1[0x17].field_0x18;
  *(float *)&param_1[0xd].field_0x20 = fVar4;
  *(float *)&param_1[0xd].field_0x24 = fVar5;
  *(float *)(param_1 + 0xe) = fVar6;
  *(float *)&param_1[0xe].field_0x4 = fVar7;
  if (plVar2 != (longlong *)0x0) {
    local_28 = local_48._s_0.R;
    fStack_24 = local_48._s_0.G;
    fStack_20 = local_48._s_0.B;
    fStack_1c = local_48._s_0.A;
    local_18 = local_38;
    (**(code **)(*plVar2 + 0x268))(plVar2,&local_28);
  }
  return;
}

// execSetUnitsText @ 14d980870

void __cdecl UAudioRadialSlider::execSetUnitsText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ITextData *pIVar2;
  longlong *plVar3;
  code *pcVar4;
  TRefCountPtr<ITextData> TVar5;
  undefined1 local_res8 [8];
  FText local_28;
  ITextData *local_18;
  uint local_10;
  
  FText::FText(&local_28);
  FTextProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  TVar5.Reference = local_28.TextData.Reference;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 8))
              (local_28.TextData.Reference,local_res8);
  }
  pIVar2 = *(ITextData **)&param_1[0xd].field_0x10;
  if (pIVar2 != TVar5.Reference) {
    *(ITextData **)&param_1[0xd].field_0x10 = TVar5.Reference;
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  *(uint *)&param_1[0xd].field_0x18 = local_28.Flags;
  plVar3 = *(longlong **)&param_1[0x17].field_0x18;
  if (plVar3 != (longlong *)0x0) {
    local_18 = TVar5.Reference;
    pcVar4 = *(code **)(*plVar3 + 0x270);
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,local_res8);
    }
    local_10 = local_28.Flags;
    (*pcVar4)(plVar3,&local_18);
  }
  if (TVar5.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar5.Reference + 0x10))(TVar5.Reference);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// execSetUnitsTextReadOnly @ 14d980b30

void __cdecl
UAudioRadialSlider::execSetUnitsTextReadOnly(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
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
  plVar2 = *(longlong **)&param_1[0x17].field_0x18;
  param_1[0xe].field_0xa = local_res8[0] != 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x278))();
  }
  return;
}

// execSetValueTextReadOnly @ 14d980f80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioRadialSlider::execSetValueTextReadOnly(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
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
  bVar5 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x17].field_0x18;
  param_1[0xe].field_0xb = bVar5;
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x518) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    SAudioTextBox::SetValueTextReadOnly(*(SAudioTextBox **)(lVar2 + 0x518),bVar5);
  }
  return;
}

// execSetWidgetLayout @ 14d981210

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UAudioRadialSlider::execSetWidgetLayout(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xb].field_0x18 = local_res8[0];
  if (*(SAudioRadialSlider **)&param_1[0x17].field_0x18 != (SAudioRadialSlider *)0x0) {
    SAudioRadialSlider::SetWidgetLayout
              (*(SAudioRadialSlider **)&param_1[0x17].field_0x18,(uint)local_res8[0]);
  }
  return;
}

