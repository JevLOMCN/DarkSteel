// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 36

// StaticClass @ 14d891b40

UClass * __cdecl UAudioSliderBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioSliderBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioSliderBase",
               &Z_Registration_Info_UClass_UAudioSliderBase.InnerSingleton,
               StaticRegisterNativesUAudioSliderBase,0x930,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioSliderBase>,
               InternalVTableHelperCtorCaller<UAudioSliderBase>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioSliderBase.InnerSingleton;
}

// UAudioSliderBase @ 14d8b9ef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UAudioSliderBase * __thiscall
UAudioSliderBase::UAudioSliderBase(UAudioSliderBase *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FText::FText(&this->UnitsText);
  *(undefined8 *)&this->TextLabelBackgroundColorDelegate = 0;
  *(undefined8 *)&(this->TextLabelBackgroundColorDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->TextLabelBackgroundColorDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ValueDelegate = 0;
  *(undefined8 *)&(this->ValueDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ValueDelegate).field_0x10 = 0;
  *(undefined8 *)&this->SliderBackgroundColorDelegate = 0;
  *(undefined8 *)&(this->SliderBackgroundColorDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->SliderBackgroundColorDelegate).field_0x10 = 0;
  *(undefined8 *)&this->SliderBarColorDelegate = 0;
  *(undefined8 *)&(this->SliderBarColorDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->SliderBarColorDelegate).field_0x10 = 0;
  *(undefined8 *)&this->SliderThumbColorDelegate = 0;
  *(undefined8 *)&(this->SliderThumbColorDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->SliderThumbColorDelegate).field_0x10 = 0;
  *(undefined8 *)&this->WidgetBackgroundColorDelegate = 0;
  *(undefined8 *)&(this->WidgetBackgroundColorDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->WidgetBackgroundColorDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnValueChanged = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x10 = 0;
  FAudioSliderStyle::FAudioSliderStyle(&this->WidgetStyle);
  (this->MyAudioSlider).Object = (SAudioSliderBase *)0x0;
  (this->MyAudioSlider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UAudioSliderBase @ 14d8b9ff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UAudioSliderBase * __thiscall
UAudioSliderBase::UAudioSliderBase(UAudioSliderBase *this,FObjectInitializer *param_1)

{
  FSlateColor *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  FAudioSliderStyle *pFVar3;
  FAudioSliderStyle *pFVar4;
  FLinearColor *pFVar5;
  FText *pFVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  FText local_18;
  
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FText::FText(&this->UnitsText);
  pFVar4 = (FAudioSliderStyle *)0x0;
  *(undefined8 *)&this->TextLabelBackgroundColorDelegate = 0;
  *(undefined8 *)&(this->TextLabelBackgroundColorDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->TextLabelBackgroundColorDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ValueDelegate = 0;
  *(undefined8 *)&(this->ValueDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ValueDelegate).field_0x10 = 0;
  *(undefined8 *)&this->SliderBackgroundColorDelegate = 0;
  *(undefined8 *)&(this->SliderBackgroundColorDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->SliderBackgroundColorDelegate).field_0x10 = 0;
  *(undefined8 *)&this->SliderBarColorDelegate = 0;
  *(undefined8 *)&(this->SliderBarColorDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->SliderBarColorDelegate).field_0x10 = 0;
  *(undefined8 *)&this->SliderThumbColorDelegate = 0;
  *(undefined8 *)&(this->SliderThumbColorDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->SliderThumbColorDelegate).field_0x10 = 0;
  *(undefined8 *)&this->WidgetBackgroundColorDelegate = 0;
  *(undefined8 *)&(this->WidgetBackgroundColorDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->WidgetBackgroundColorDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnValueChanged = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x10 = 0;
  FAudioSliderStyle::FAudioSliderStyle(&this->WidgetStyle);
  pFVar3 = DefaultAudioSliderStyle;
  (this->MyAudioSlider).Object = (SAudioSliderBase *)0x0;
  (this->MyAudioSlider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (pFVar3 == (FAudioSliderStyle *)0x0) {
    pFVar3 = ::operator_new(0x650);
    if (pFVar3 != (FAudioSliderStyle *)0x0) {
      pFVar4 = FAudioSliderStyle::GetDefault();
      pFVar4 = FAudioSliderStyle::FAudioSliderStyle(pFVar3,pFVar4);
    }
    this_00 = &(pFVar4->WidgetBackgroundImage).TintColor;
    pFVar3 = pFVar4;
    DefaultAudioSliderStyle = pFVar4;
    if ((pFVar4->WidgetBackgroundImage).TintColor.ColorUseRule == UseColor_ColorTable) {
      pFVar5 = FSlateColor::GetColorFromTable(this_00);
      pFVar3 = DefaultAudioSliderStyle;
      uVar1 = *(undefined8 *)&pFVar5->field0_0x0;
      uVar2 = *(undefined8 *)((longlong)&pFVar5->field0_0x0 + 8);
      (pFVar4->WidgetBackgroundImage).TintColor.ColorUseRule = UseColor_Specified;
      *(undefined8 *)&(this_00->SpecifiedColor).field0_0x0 = uVar1;
      *(undefined8 *)
       ((longlong)&(pFVar4->WidgetBackgroundImage).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar2;
    }
  }
  FAudioSliderStyle::operator=(&this->WidgetStyle,pFVar3);
  this->Value = 0.0;
  pFVar6 = FText::FromString(&local_18,"units");
  FText::operator=(&this->UnitsText,pFVar6);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  this->ShowLabelOnlyOnHover = false;
  this->ShowUnitsText = true;
  this->IsUnitsTextReadOnly = true;
  this->IsValueTextReadOnly = false;
  (this->Orientation).Value = '\x01';
  if (FStyleColors::Recessed.ColorUseRule == UseColor_ColorTable) {
    pFVar5 = FSlateColor::GetColorFromTable(&FStyleColors::Recessed);
    fVar7 = (pFVar5->field0_0x0)._s_0.R;
    fVar8 = (pFVar5->field0_0x0)._s_0.G;
    fVar9 = (pFVar5->field0_0x0)._s_0.B;
    fVar10 = (pFVar5->field0_0x0)._s_0.A;
  }
  else {
    fVar7 = FStyleColors::Recessed.SpecifiedColor.field0_0x0._0_4_;
    fVar8 = FStyleColors::Recessed.SpecifiedColor.field0_0x0._4_4_;
    fVar9 = FStyleColors::Recessed.SpecifiedColor.field0_0x0._8_4_;
    fVar10 = FStyleColors::Recessed.SpecifiedColor.field0_0x0._12_4_;
  }
  (this->TextLabelBackgroundColor).field0_0x0._s_0.R = fVar7;
  (this->TextLabelBackgroundColor).field0_0x0._s_0.G = fVar8;
  (this->TextLabelBackgroundColor).field0_0x0._s_0.B = fVar9;
  (this->TextLabelBackgroundColor).field0_0x0._s_0.A = fVar10;
  if (FStyleColors::Recessed.ColorUseRule == UseColor_ColorTable) {
    pFVar5 = FSlateColor::GetColorFromTable(&FStyleColors::Recessed);
    fVar7 = (pFVar5->field0_0x0)._s_0.R;
    fVar8 = (pFVar5->field0_0x0)._s_0.G;
    fVar9 = (pFVar5->field0_0x0)._s_0.B;
    fVar10 = (pFVar5->field0_0x0)._s_0.A;
  }
  else {
    fVar7 = FStyleColors::Recessed.SpecifiedColor.field0_0x0._0_4_;
    fVar8 = FStyleColors::Recessed.SpecifiedColor.field0_0x0._4_4_;
    fVar9 = FStyleColors::Recessed.SpecifiedColor.field0_0x0._8_4_;
    fVar10 = FStyleColors::Recessed.SpecifiedColor.field0_0x0._12_4_;
  }
  (this->SliderBackgroundColor).field0_0x0._s_0.R = fVar7;
  (this->SliderBackgroundColor).field0_0x0._s_0.G = fVar8;
  (this->SliderBackgroundColor).field0_0x0._s_0.B = fVar9;
  (this->SliderBackgroundColor).field0_0x0._s_0.A = fVar10;
  if (FStyleColors::Black.ColorUseRule == UseColor_ColorTable) {
    pFVar5 = FSlateColor::GetColorFromTable(&FStyleColors::Black);
    fVar7 = (pFVar5->field0_0x0)._s_0.R;
    fVar8 = (pFVar5->field0_0x0)._s_0.G;
    fVar9 = (pFVar5->field0_0x0)._s_0.B;
    fVar10 = (pFVar5->field0_0x0)._s_0.A;
  }
  else {
    fVar7 = FStyleColors::Black.SpecifiedColor.field0_0x0._0_4_;
    fVar8 = FStyleColors::Black.SpecifiedColor.field0_0x0._4_4_;
    fVar9 = FStyleColors::Black.SpecifiedColor.field0_0x0._8_4_;
    fVar10 = FStyleColors::Black.SpecifiedColor.field0_0x0._12_4_;
  }
  (this->SliderBarColor).field0_0x0._s_0.R = fVar7;
  (this->SliderBarColor).field0_0x0._s_0.G = fVar8;
  (this->SliderBarColor).field0_0x0._s_0.B = fVar9;
  (this->SliderBarColor).field0_0x0._s_0.A = fVar10;
  if (FStyleColors::AccentGray.ColorUseRule == UseColor_ColorTable) {
    pFVar5 = FSlateColor::GetColorFromTable(&FStyleColors::AccentGray);
    fVar7 = (pFVar5->field0_0x0)._s_0.R;
    fVar8 = (pFVar5->field0_0x0)._s_0.G;
    fVar9 = (pFVar5->field0_0x0)._s_0.B;
    fVar10 = (pFVar5->field0_0x0)._s_0.A;
  }
  else {
    fVar7 = FStyleColors::AccentGray.SpecifiedColor.field0_0x0._0_4_;
    fVar8 = FStyleColors::AccentGray.SpecifiedColor.field0_0x0._4_4_;
    fVar9 = FStyleColors::AccentGray.SpecifiedColor.field0_0x0._8_4_;
    fVar10 = FStyleColors::AccentGray.SpecifiedColor.field0_0x0._12_4_;
  }
  (this->SliderThumbColor).field0_0x0._s_0.R = fVar7;
  (this->SliderThumbColor).field0_0x0._s_0.G = fVar8;
  (this->SliderThumbColor).field0_0x0._s_0.B = fVar9;
  (this->SliderThumbColor).field0_0x0._s_0.A = fVar10;
  if (FStyleColors::Transparent.ColorUseRule != UseColor_ColorTable) {
    (this->WidgetBackgroundColor).field0_0x0._s_0 =
         (FLinearColor_u_0_s_0)FStyleColors::Transparent.SpecifiedColor.field0_0x0;
    return this;
  }
  pFVar5 = FSlateColor::GetColorFromTable(&FStyleColors::Transparent);
  uVar1 = *(undefined8 *)((longlong)&pFVar5->field0_0x0 + 8);
  *(undefined8 *)&(this->WidgetBackgroundColor).field0_0x0 = *(undefined8 *)&pFVar5->field0_0x0;
  *(undefined8 *)((longlong)&(this->WidgetBackgroundColor).field0_0x0 + 8) = uVar1;
  return this;
}

// ~UAudioSliderBase @ 14d8c16e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UAudioSliderBase::~UAudioSliderBase(UAudioSliderBase *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyAudioSlider).SharedReferenceCount.ReferenceController);
  FAudioSliderStyle::~FAudioSliderStyle(&this->WidgetStyle);
  pvVar1 = *(void **)&(this->OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChanged);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->WidgetBackgroundColorDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SliderThumbColorDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SliderBarColorDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SliderBackgroundColorDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ValueDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TextLabelBackgroundColorDelegate);
  pIVar2 = (this->UnitsText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetLinValue @ 14d92f8e0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UAudioSliderBase::GetLinValue(UAudioSliderBase *this,float param_1)

{
  SAudioSliderBase *pSVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  
  if ((this->MyAudioSlider).Object == (SAudioSliderBase *)0x0) {
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
  pSVar1 = (this->MyAudioSlider).Object;
                    /* WARNING: Could not recover jumptable at 0x00014d92f938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar4 = (float)(**(code **)(pSVar1->_padding_ + 0x250))(pSVar1,param_1);
  return fVar4;
}

// GetOutputValue @ 14d932970

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UAudioSliderBase::GetOutputValue(UAudioSliderBase *this,float param_1)

{
  SAudioSliderBase *pSVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  
  if ((this->MyAudioSlider).Object == (SAudioSliderBase *)0x0) {
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
  pSVar1 = (this->MyAudioSlider).Object;
                    /* WARNING: Could not recover jumptable at 0x00014d9329c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar4 = (float)(**(code **)(pSVar1->_padding_ + 0x248))(pSVar1,param_1);
  return fVar4;
}

// GetPrivateStaticClass @ 14d933ea0

UClass * __cdecl UAudioSliderBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioSliderBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioSliderBase",
               &Z_Registration_Info_UClass_UAudioSliderBase.InnerSingleton,
               StaticRegisterNativesUAudioSliderBase,0x930,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioSliderBase>,
               InternalVTableHelperCtorCaller<UAudioSliderBase>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioSliderBase.InnerSingleton;
}

// GetSliderValue @ 14d9362c0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UAudioSliderBase::GetSliderValue(UAudioSliderBase *this,float param_1)

{
  SAudioSliderBase *pSVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  
  if ((this->MyAudioSlider).Object == (SAudioSliderBase *)0x0) {
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
  pSVar1 = (this->MyAudioSlider).Object;
                    /* WARNING: Could not recover jumptable at 0x00014d936318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar4 = (float)(**(code **)(pSVar1->_padding_ + 0x250))(pSVar1,param_1);
  return fVar4;
}

// HandleOnValueChanged @ 14d938d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioSliderBase::HandleOnValueChanged(UAudioSliderBase *this,float param_1)

{
  this->Value = param_1;
  FOnFloatValueChangedEvent_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnValueChanged,param_1);
  return;
}

// RebuildWidget @ 14d9611f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UAudioSliderBase::RebuildWidget
          (UAudioSliderBase *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  SAudioSliderBase *pSVar3;
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
  UAudioSliderBase *local_res18;
  FName local_res20;
  undefined1 local_438 [8];
  FDelegateAllocation local_430;
  FMemScope local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  TSlateDecl<SAudioSliderBase,RequiredArgs::T0RequiredArgs> local_408;
  SAudioSliderBase *local_3f0;
  FSharedReferencer<1> local_3e8;
  FDestructionSentinel local_3e0;
  FDestructionSentinel local_3c8;
  FDelegateAllocation *local_3b0;
  FArguments local_3a8;
  
  pFVar9 = SAudioSliderBase::FArguments::FArguments(&local_3a8);
  uStack_410 = 0;
  pFVar9->_Style = &this->WidgetStyle;
  local_418 = (FMemScope)HandleOnValueChanged;
  local_438 = (undefined1  [8])0x0;
  local_430.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_430.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_438,
             (FWriteAccessScope *)&local_3c8);
  local_3b0 = &local_430;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_430);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUAudioSliderBase____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UAudioSliderBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_res18 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UAudioSliderBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res18);
    *(FMemScope *)(puVar10 + 4) = local_418;
    puVar10[5] = CONCAT44(uStack_40c,uStack_410);
  }
  if (local_3c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3c8.Accessor,&local_3c8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnValueChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_438);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_418,&local_res20,true);
  TSlateDecl<SAudioSliderBase,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioSliderBase,RequiredArgs::T0RequiredArgs>
            (&local_408,"SAudioSliderBase",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSlider.cpp"
             ,0xd8,local_res8);
  FMemScope::~FMemScope(&local_418);
  FLLMScope::~FLLMScope(local_res10);
  pSVar3 = local_408._Widget.Object;
  if (local_408._Widget.Object == (SAudioSliderBase *)0x0) {
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
  SWidget::SWidgetConstruct((SWidget *)local_408._Widget.Object,(FSlateBaseNamedArgs *)pFVar9);
  (**(code **)((local_408._Widget.Object)->_padding_ + 0x290))(local_408._Widget.Object,pFVar9);
  if (local_408._Widget.Object == (SAudioSliderBase *)0x0) {
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
  if (((local_408._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_408._Widget.Object)->_padding_ + 0x228))(local_408._Widget.Object);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_14d961432;
  }
  bVar8 = 0x20;
LAB_14d961432:
  *(byte *)&(local_408._Widget.Object)->_padding_ =
       (byte)(local_408._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_408._Widget.Object)->_padding_ =
       (byte)(local_408._Widget.Object)->_padding_ | bVar8;
  if (local_408._Widget.Object == (SAudioSliderBase *)0x0) {
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
  pbVar1 = (byte *)((longlong)&(local_408._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_408._Widget.Object == (SAudioSliderBase *)0x0) {
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
  FVar5.ReferenceController = local_408._Widget.SharedReferenceCount.ReferenceController;
  local_408._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_408._Widget.Object = (SAudioSliderBase *)0x0;
  if (pSVar3 == (SAudioSliderBase *)0x0) {
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
  local_3f0 = pSVar3;
  local_3e8.ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyAudioSlider != (TSharedPtr<SAudioSliderBase,1> *)&local_3f0) {
    (this->MyAudioSlider).Object = pSVar3;
    local_3f0 = (SAudioSliderBase *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyAudioSlider).SharedReferenceCount,&local_3e8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3e8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_438,
             (FWriteAccessScope *)&local_3e0);
  if ((local_430.DelegateSize != 0) &&
     (local_430.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_430.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_430,0,0,0x10);
    local_430.DelegateSize = 0;
  }
  if (local_3e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e0.Accessor,&local_3e0);
  }
  if (local_430.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_430.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_438);
  SAudioSliderBase::FArguments::~FArguments(&local_3a8);
  if ((this->MyAudioSlider).Object == (SAudioSliderBase *)0x0) {
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
  pTVar2 = (this->MyAudioSlider).SharedReferenceCount.ReferenceController;
  pSVar3 = (this->MyAudioSlider).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SAudioSliderBase *)0x0) {
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

// ReleaseSlateResources @ 14d963b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioSliderBase::ReleaseSlateResources(UAudioSliderBase *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UVisual::ReleaseSlateResources((UVisual *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyAudioSlider != (TSharedPtr<SAudioSliderBase,1> *)&local_18) {
    (this->MyAudioSlider).Object = (SAudioSliderBase *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyAudioSlider).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetShowLabelOnlyOnHover @ 14d96c5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioSliderBase::SetShowLabelOnlyOnHover(UAudioSliderBase *this,bool param_1)

{
  SAudioSliderBase *pSVar1;
  code *pcVar2;
  bool bVar3;
  
  pSVar1 = (this->MyAudioSlider).Object;
  this->ShowLabelOnlyOnHover = param_1;
  if (pSVar1 != (SAudioSliderBase *)0x0) {
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

// SetShowUnitsText @ 14d96ca90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioSliderBase::SetShowUnitsText(UAudioSliderBase *this,bool param_1)

{
  SAudioSliderBase *pSVar1;
  
  this->ShowUnitsText = param_1;
  pSVar1 = (this->MyAudioSlider).Object;
  if (pSVar1 != (SAudioSliderBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d96caa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pSVar1->_padding_ + 0x280))();
    return;
  }
  return;
}

// SetSliderBackgroundColor @ 14d96ccf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioSliderBase::SetSliderBackgroundColor(UAudioSliderBase *this,FLinearColor *param_1)

{
  SAudioSliderBase *this_00;
  FLinearColor_u_0 local_48;
  uint local_38;
  uint local_18;
  
  local_48._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_48._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->SliderBackgroundColor).field0_0x0 = local_48._0_8_;
  *(undefined8 *)((longlong)&(this->SliderBackgroundColor).field0_0x0 + 8) = local_48._8_8_;
  this_00 = (this->MyAudioSlider).Object;
  if (this_00 != (SAudioSliderBase *)0x0) {
    local_18 = local_18 & 0xffffff00;
    local_38 = local_18;
    SAudioSliderBase::SetSliderBackgroundColor(this_00,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// SetSliderBarColor @ 14d96d0f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioSliderBase::SetSliderBarColor(UAudioSliderBase *this,FLinearColor *param_1)

{
  SAudioSliderBase *this_00;
  FLinearColor_u_0 local_48;
  uint local_38;
  uint local_18;
  
  local_48._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_48._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->SliderBarColor).field0_0x0 = local_48._0_8_;
  *(undefined8 *)((longlong)&(this->SliderBarColor).field0_0x0 + 8) = local_48._8_8_;
  this_00 = (this->MyAudioSlider).Object;
  if (this_00 != (SAudioSliderBase *)0x0) {
    local_18 = local_18 & 0xffffff00;
    local_38 = local_18;
    SAudioSliderBase::SetSliderBarColor(this_00,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// SetSliderThumbColor @ 14d96d4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioSliderBase::SetSliderThumbColor(UAudioSliderBase *this,FLinearColor *param_1)

{
  SAudioSliderBase *this_00;
  FLinearColor_u_0 local_48;
  uint local_38;
  uint local_18;
  
  local_48._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_48._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->SliderThumbColor).field0_0x0 = local_48._0_8_;
  *(undefined8 *)((longlong)&(this->SliderThumbColor).field0_0x0 + 8) = local_48._8_8_;
  this_00 = (this->MyAudioSlider).Object;
  if (this_00 != (SAudioSliderBase *)0x0) {
    local_18 = local_18 & 0xffffff00;
    local_38 = local_18;
    SAudioSliderBase::SetSliderThumbColor(this_00,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// SetTextLabelBackgroundColor @ 14d96dd40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioSliderBase::SetTextLabelBackgroundColor(UAudioSliderBase *this,FSlateColor *param_1)

{
  SAudioSliderBase *pSVar1;
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
  pSVar1 = (this->MyAudioSlider).Object;
  (this->TextLabelBackgroundColor).field0_0x0._s_0.R = fVar3;
  (this->TextLabelBackgroundColor).field0_0x0._s_0.G = fVar4;
  (this->TextLabelBackgroundColor).field0_0x0._s_0.B = fVar5;
  (this->TextLabelBackgroundColor).field0_0x0._s_0.A = fVar6;
  if (pSVar1 != (SAudioSliderBase *)0x0) {
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

// SetUnitsText @ 14d96e820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioSliderBase::SetUnitsText(UAudioSliderBase *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  SAudioSliderBase *pSVar3;
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
  pSVar3 = (this->MyAudioSlider).Object;
  if (pSVar3 != (SAudioSliderBase *)0x0) {
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

// SetUnitsTextReadOnly @ 14d96eb10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioSliderBase::SetUnitsTextReadOnly(UAudioSliderBase *this,bool param_1)

{
  SAudioSliderBase *pSVar1;
  
  this->IsUnitsTextReadOnly = param_1;
  pSVar1 = (this->MyAudioSlider).Object;
  if (pSVar1 != (SAudioSliderBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d96eb25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pSVar1->_padding_ + 0x278))();
    return;
  }
  return;
}

// SetValueTextReadOnly @ 14d96f4b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioSliderBase::SetValueTextReadOnly(UAudioSliderBase *this,bool param_1)

{
  SAudioSliderBase *pSVar1;
  code *pcVar2;
  bool bVar3;
  
  pSVar1 = (this->MyAudioSlider).Object;
  this->IsValueTextReadOnly = param_1;
  if (pSVar1 != (SAudioSliderBase *)0x0) {
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

// SetWidgetBackgroundColor @ 14d96f740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioSliderBase::SetWidgetBackgroundColor(UAudioSliderBase *this,FLinearColor *param_1)

{
  SAudioSliderBase *this_00;
  FLinearColor_u_0 local_48;
  uint local_38;
  uint local_18;
  
  local_48._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_48._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->WidgetBackgroundColor).field0_0x0 = local_48._0_8_;
  *(undefined8 *)((longlong)&(this->WidgetBackgroundColor).field0_0x0 + 8) = local_48._8_8_;
  this_00 = (this->MyAudioSlider).Object;
  if (this_00 != (SAudioSliderBase *)0x0) {
    local_18 = local_18 & 0xffffff00;
    local_38 = local_18;
    SAudioSliderBase::SetWidgetBackgroundColor(this_00,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// StaticRegisterNativesUAudioSliderBase @ 14d971d90

void __cdecl UAudioSliderBase::StaticRegisterNativesUAudioSliderBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UAudioSliderBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 14d9748d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UAudioSliderBase::SynchronizeProperties(UAudioSliderBase *this)

{
  TAttribute<float> *this_00;
  SAudioSliderBase *pSVar1;
  FName FVar2;
  SSlider *this_01;
  SAudioTextBox *this_02;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  UObject *pUVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  UFunction *pUVar10;
  float *pfVar11;
  FMRSWRecursiveAccessDetector *this_03;
  float fVar12;
  undefined1 local_res8 [8];
  UObject *local_res10;
  undefined1 local_280 [8];
  ForAnyElementType FStack_278;
  ulonglong local_270;
  float local_268;
  undefined1 local_264;
  undefined1 local_260 [8];
  FDelegateAllocation FStack_258;
  float local_248;
  undefined1 local_244;
  undefined1 local_240 [16];
  int local_230;
  float local_228;
  bool local_224;
  undefined1 local_220 [8];
  void *pvStack_218;
  undefined4 local_210;
  ITextData *local_208;
  uint local_200;
  TAttribute<float> local_1f8;
  FDestructionSentinel local_1d8;
  FDestructionSentinel local_1c0;
  FDelegateAllocation *local_1a8;
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  uint local_190;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  uint local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  uint local_158;
  FLinearColor_u_0 local_148;
  uint local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  uint local_118;
  FLinearColor_u_0 local_108;
  uint local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  uint local_d8;
  FLinearColor_u_0 local_c8;
  uint local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  FLinearColor_u_0 local_88;
  uint local_78;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  pSVar1 = (this->MyAudioSlider).Object;
  if (pSVar1 == (SAudioSliderBase *)0x0) {
    return;
  }
  local_1a0 = (this->TextLabelBackgroundColor).field0_0x0._s_0.R;
  fStack_19c = (this->TextLabelBackgroundColor).field0_0x0._s_0.G;
  fStack_198 = (this->TextLabelBackgroundColor).field0_0x0._s_0.B;
  fStack_194 = (this->TextLabelBackgroundColor).field0_0x0._s_0.A;
  local_190 = local_190 & 0xffffff00;
  local_178 = local_190;
  local_188 = local_1a0;
  fStack_184 = fStack_19c;
  fStack_180 = fStack_198;
  fStack_17c = fStack_194;
  (**(code **)(pSVar1->_padding_ + 0x268))(pSVar1,&local_188);
  if (((this->MyAudioSlider).Object == (SAudioSliderBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_208 = (this->UnitsText).TextData.Reference;
  pSVar1 = (this->MyAudioSlider).Object;
  pcVar3 = *(code **)(pSVar1->_padding_ + 0x270);
  if (local_208 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_208 + 8))(local_208,local_res8);
  }
  local_200 = (this->UnitsText).Flags;
  (*pcVar3)(pSVar1,&local_208);
  if (((this->MyAudioSlider).Object == (SAudioSliderBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pSVar1 = (this->MyAudioSlider).Object;
  (**(code **)(pSVar1->_padding_ + 0x278))(pSVar1,this->IsUnitsTextReadOnly);
  if (((this->MyAudioSlider).Object == (SAudioSliderBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pSVar1 = (this->MyAudioSlider).Object;
  bVar4 = this->IsValueTextReadOnly;
  if (((pSVar1->Label).Object == (SAudioTextBox *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  SAudioTextBox::SetValueTextReadOnly((pSVar1->Label).Object,bVar4);
  if (((this->MyAudioSlider).Object == (SAudioSliderBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pSVar1 = (this->MyAudioSlider).Object;
  bVar4 = this->ShowLabelOnlyOnHover;
  if (((pSVar1->Label).Object == (SAudioTextBox *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  SAudioTextBox::SetShowLabelOnlyOnHover((pSVar1->Label).Object,bVar4);
  if (((this->MyAudioSlider).Object == (SAudioSliderBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pSVar1 = (this->MyAudioSlider).Object;
  (**(code **)(pSVar1->_padding_ + 0x280))(pSVar1,this->ShowUnitsText);
  if (((this->MyAudioSlider).Object == (SAudioSliderBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  SAudioSliderBase::SetOrientation((this->MyAudioSlider).Object,(uint)(this->Orientation).Value);
  if (((this->MyAudioSlider).Object == (SAudioSliderBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_168 = *(undefined8 *)&(this->SliderBackgroundColor).field0_0x0;
  uStack_160 = *(undefined8 *)((longlong)&(this->SliderBackgroundColor).field0_0x0 + 8);
  local_158 = local_158 & 0xffffff00;
  local_138 = local_158;
  local_148._0_8_ = local_168;
  local_148._8_8_ = uStack_160;
  SAudioSliderBase::SetSliderBackgroundColor
            ((this->MyAudioSlider).Object,(FSlateColor *)&local_148._s_0);
  if (((this->MyAudioSlider).Object == (SAudioSliderBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_128 = *(undefined8 *)&(this->SliderBarColor).field0_0x0;
  uStack_120 = *(undefined8 *)((longlong)&(this->SliderBarColor).field0_0x0 + 8);
  local_118 = local_118 & 0xffffff00;
  local_f8 = local_118;
  local_108._0_8_ = local_128;
  local_108._8_8_ = uStack_120;
  SAudioSliderBase::SetSliderBarColor((this->MyAudioSlider).Object,(FSlateColor *)&local_108._s_0);
  if (((this->MyAudioSlider).Object == (SAudioSliderBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_e8 = *(undefined8 *)&(this->SliderThumbColor).field0_0x0;
  uStack_e0 = *(undefined8 *)((longlong)&(this->SliderThumbColor).field0_0x0 + 8);
  local_d8 = local_d8 & 0xffffff00;
  local_b8 = local_d8;
  local_c8._0_8_ = local_e8;
  local_c8._8_8_ = uStack_e0;
  SAudioSliderBase::SetSliderThumbColor((this->MyAudioSlider).Object,(FSlateColor *)&local_c8._s_0);
  if (((this->MyAudioSlider).Object == (SAudioSliderBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_a8 = *(undefined8 *)&(this->WidgetBackgroundColor).field0_0x0;
  uStack_a0 = *(undefined8 *)((longlong)&(this->WidgetBackgroundColor).field0_0x0 + 8);
  local_98 = local_98 & 0xffffff00;
  local_78 = local_98;
  local_88._0_8_ = local_a8;
  local_88._8_8_ = uStack_a0;
  SAudioSliderBase::SetWidgetBackgroundColor
            ((this->MyAudioSlider).Object,(FSlateColor *)&local_88._s_0);
  bVar4 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->ValueDelegate);
  if (bVar4) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ValueDelegate,
               &local_68);
    FVar2.ComparisonIndex.Value = *(uint *)&(this->ValueDelegate).field_0x10;
    FVar2.Number = *(uint *)&(this->ValueDelegate).field_0x14;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    pUVar7 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                       ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->ValueDelegate);
    local_268 = 0.0;
    local_264 = 1;
    FStack_258.DelegateSize = 0;
    FStack_258._12_4_ = 0;
    local_260 = (undefined1  [8])0x0;
    FStack_258.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_260,
               (FWriteAccessScope *)&local_1c0);
    local_1a8 = &FStack_258;
    puVar8 = UE::Core::Private::DelegateAllocate(0x30,&FStack_258);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseUFunctionDelegateInstance_VUObject____A6AMXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      *(FName *)(puVar8 + 4) = FVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      puVar8[5] = 0;
      local_res10 = pUVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 5),(FObjectPtr)&local_res10);
      if ((FVar2 == (FName)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InFunctionName != NAME_None",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                             ,0x56,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pUVar7 != (UObject *)0x0) {
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar8 + 5));
        pUVar10 = UObject::FindFunctionChecked(pUVar7,FVar2);
        puVar8[3] = pUVar10;
      }
    }
    if (local_1c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
    }
    local_248 = local_268;
    local_244 = local_264;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_240,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_260);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_260);
    if (FStack_258.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)FStack_258.DelegateAllocator);
    }
    this_03 = (FMRSWRecursiveAccessDetector *)local_260;
  }
  else {
    local_248 = this->Value;
    local_270 = 0;
    local_280 = (undefined1  [8])0x0;
    FStack_278.Data = (FScriptContainerElement *)0x0;
    local_244 = 1;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_240,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_280);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_280,
               (FWriteAccessScope *)&local_1d8);
    if (((int)local_270 != 0) && (FStack_278.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_278.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_278,0,0,0x10);
      local_270 = local_270 & 0xffffffff00000000;
    }
    if (local_1d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d8.Accessor,&local_1d8);
    }
    if (FStack_278.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_278.Data);
    }
    this_03 = (FMRSWRecursiveAccessDetector *)local_280;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_03);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_240,&local_50);
  if (((local_230 == 0) || ((longlong *)local_240._8_8_ == (longlong *)0x0)) ||
     (cVar6 = (**(code **)(*(longlong *)local_240._8_8_ + 0x38))(), cVar6 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  pSVar1 = (this->MyAudioSlider).Object;
  if (bVar4) {
    if ((pSVar1 == (SAudioSliderBase *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pSVar1 = (this->MyAudioSlider).Object;
    local_228 = local_248;
    local_220 = (undefined1  [8])0x0;
    pvStack_218 = (void *)0x0;
    local_224 = (bool)local_244;
    local_210 = 0;
    TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_220,
               (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_240);
    this_00 = &pSVar1->SliderValueAttribute;
    this_00->Value = local_228;
    (pSVar1->SliderValueAttribute).bIsSet = local_224;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pSVar1->SliderValueAttribute).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_220);
    this_01 = (pSVar1->Slider).Object;
    if (this_01 != (SSlider *)0x0) {
      local_1f8.Value = this_00->Value;
      local_1f8.bIsSet = (pSVar1->SliderValueAttribute).bIsSet;
      local_1f8.Getter._0_8_ = 0;
      local_1f8.Getter._8_8_ = 0;
      local_1f8.Getter._16_4_ = 0;
      TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>(&local_1f8.Getter,&(pSVar1->SliderValueAttribute).Getter)
      ;
      SSlider::SetValue(this_01,&local_1f8);
    }
    pfVar11 = TAttribute<float>::Get(this_00);
    fVar12 = *pfVar11;
    if (((pSVar1->Label).Object == (SAudioTextBox *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_02 = (pSVar1->Label).Object;
    fVar12 = (float)(**(code **)(pSVar1->_padding_ + 0x298))(pSVar1,fVar12);
    SAudioTextBox::SetValueText(this_02,fVar12);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_220);
    if (pvStack_218 != (void *)0x0) {
      FMemory::Free(pvStack_218);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_220);
  }
  else {
    if ((pSVar1 == (SAudioSliderBase *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pSVar1 = (this->MyAudioSlider).Object;
    (**(code **)(pSVar1->_padding_ + 600))(pSVar1,this->Value);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_240);
  if ((longlong *)local_240._8_8_ != (longlong *)0x0) {
    FMemory::Free((void *)local_240._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_240);
  return;
}

// execGetLinValue @ 14d97e260

void __cdecl UAudioSliderBase::execGetLinValue(UObject *param_1,FFrame *param_2,void *param_3)

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
  if (*(longlong *)&param_1[0x3a].field_0x10 == 0) {
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
  uVar4 = (**(code **)(**(longlong **)&param_1[0x3a].field_0x10 + 0x250))
                    (*(longlong **)&param_1[0x3a].field_0x10,uVar4);
  *(undefined4 *)param_3 = uVar4;
  return;
}

// execGetOutputValue @ 14d97e5e0

void __cdecl UAudioSliderBase::execGetOutputValue(UObject *param_1,FFrame *param_2,void *param_3)

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
  if (*(longlong *)&param_1[0x3a].field_0x10 == 0) {
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
  uVar4 = (**(code **)(**(longlong **)&param_1[0x3a].field_0x10 + 0x248))
                    (*(longlong **)&param_1[0x3a].field_0x10,uVar4);
  *(undefined4 *)param_3 = uVar4;
  return;
}

// execGetSliderValue @ 14d97e7a0

void __cdecl UAudioSliderBase::execGetSliderValue(UObject *param_1,FFrame *param_2,void *param_3)

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
  if (*(longlong *)&param_1[0x3a].field_0x10 == 0) {
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
  uVar4 = (**(code **)(**(longlong **)&param_1[0x3a].field_0x10 + 0x250))
                    (*(longlong **)&param_1[0x3a].field_0x10,uVar4);
  *(undefined4 *)param_3 = uVar4;
  return;
}

// execSetShowLabelOnlyOnHover @ 14d97fd30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioSliderBase::execSetShowLabelOnlyOnHover(UObject *param_1,FFrame *param_2,void *param_3)

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
  lVar2 = *(longlong *)&param_1[0x3a].field_0x10;
  param_1[0xc].field_0x10 = bVar5;
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x458) == 0) {
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
    SAudioTextBox::SetShowLabelOnlyOnHover(*(SAudioTextBox **)(lVar2 + 0x458),bVar5);
  }
  return;
}

// execSetShowUnitsText @ 14d97fec0

void __cdecl UAudioSliderBase::execSetShowUnitsText(UObject *param_1,FFrame *param_2,void *param_3)

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
  plVar2 = *(longlong **)&param_1[0x3a].field_0x10;
  param_1[0xc].field_0x11 = local_res8[0] != 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x280))();
  }
  return;
}

// execSetSliderBackgroundColor @ 14d97ff60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioSliderBase::execSetSliderBackgroundColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SAudioSliderBase *this;
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
  this = *(SAudioSliderBase **)&param_1[0x3a].field_0x10;
  *(undefined8 *)&param_1[0xd].field_0x8 = local_58;
  *(undefined8 *)&param_1[0xd].field_0x10 = uStack_50;
  if (this != (SAudioSliderBase *)0x0) {
    local_18 = local_18 & 0xffffff00;
    local_38 = local_18;
    local_48._0_8_ = local_58;
    local_48._8_8_ = uStack_50;
    SAudioSliderBase::SetSliderBackgroundColor(this,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// execSetSliderBarColor @ 14d9800c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UAudioSliderBase::execSetSliderBarColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SAudioSliderBase *this;
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
  this = *(SAudioSliderBase **)&param_1[0x3a].field_0x10;
  *(undefined8 *)&param_1[0xe].field_0x8 = local_58;
  *(undefined8 *)&param_1[0xe].field_0x10 = uStack_50;
  if (this != (SAudioSliderBase *)0x0) {
    local_18 = local_18 & 0xffffff00;
    local_38 = local_18;
    local_48._0_8_ = local_58;
    local_48._8_8_ = uStack_50;
    SAudioSliderBase::SetSliderBarColor(this,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// execSetSliderThumbColor @ 14d9802c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioSliderBase::execSetSliderThumbColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SAudioSliderBase *this;
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
  this = *(SAudioSliderBase **)&param_1[0x3a].field_0x10;
  *(undefined8 *)&param_1[0xf].field_0x8 = local_58;
  *(undefined8 *)&param_1[0xf].field_0x10 = uStack_50;
  if (this != (SAudioSliderBase *)0x0) {
    local_18 = local_18 & 0xffffff00;
    local_38 = local_18;
    local_48._0_8_ = local_58;
    local_48._8_8_ = uStack_50;
    SAudioSliderBase::SetSliderThumbColor(this,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// execSetTextLabelBackgroundColor @ 14d9805e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UAudioSliderBase::execSetTextLabelBackgroundColor(UObject *param_1,FFrame *param_2,void *param_3)

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
  plVar2 = *(longlong **)&param_1[0x3a].field_0x10;
  *(float *)&param_1[0xb].field_0x10 = fVar4;
  *(float *)&param_1[0xb].field_0x14 = fVar5;
  *(float *)&param_1[0xb].field_0x18 = fVar6;
  *(float *)&param_1[0xb].field_0x1c = fVar7;
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

// execSetUnitsText @ 14d9809d0

void __cdecl UAudioSliderBase::execSetUnitsText(UObject *param_1,FFrame *param_2,void *param_3)

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
  pIVar2 = *(ITextData **)(param_1 + 0xb);
  if (pIVar2 != TVar5.Reference) {
    *(ITextData **)(param_1 + 0xb) = TVar5.Reference;
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  *(uint *)&param_1[0xb].field_0x8 = local_28.Flags;
  plVar3 = *(longlong **)&param_1[0x3a].field_0x10;
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

// execSetUnitsTextReadOnly @ 14d980bd0

void __cdecl
UAudioSliderBase::execSetUnitsTextReadOnly(UObject *param_1,FFrame *param_2,void *param_3)

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
  plVar2 = *(longlong **)&param_1[0x3a].field_0x10;
  param_1[0xc].field_0x12 = local_res8[0] != 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x278))();
  }
  return;
}

// execSetValueTextReadOnly @ 14d981070

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioSliderBase::execSetValueTextReadOnly(UObject *param_1,FFrame *param_2,void *param_3)

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
  lVar2 = *(longlong *)&param_1[0x3a].field_0x10;
  param_1[0xc].field_0x13 = bVar5;
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x458) == 0) {
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
    SAudioTextBox::SetValueTextReadOnly(*(SAudioTextBox **)(lVar2 + 0x458),bVar5);
  }
  return;
}

// execSetWidgetBackgroundColor @ 14d981160

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioSliderBase::execSetWidgetBackgroundColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SAudioSliderBase *this;
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
  this = *(SAudioSliderBase **)&param_1[0x3a].field_0x10;
  *(undefined8 *)&param_1[0x10].field_0x8 = local_58;
  *(undefined8 *)&param_1[0x10].field_0x10 = uStack_50;
  if (this != (SAudioSliderBase *)0x0) {
    local_18 = local_18 & 0xffffff00;
    local_38 = local_18;
    local_48._0_8_ = local_58;
    local_48._8_8_ = uStack_50;
    SAudioSliderBase::SetWidgetBackgroundColor(this,(FSlateColor *)&local_48._s_0);
  }
  return;
}

