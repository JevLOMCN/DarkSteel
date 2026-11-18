// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 34

// StaticClass @ 14d894180

UClass * __cdecl UAudioMaterialSlider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialSlider",
               &Z_Registration_Info_UClass_UAudioMaterialSlider.InnerSingleton,
               StaticRegisterNativesUAudioMaterialSlider,0x340,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioMaterialSlider>,
               InternalVTableHelperCtorCaller<UAudioMaterialSlider>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialSlider.InnerSingleton;
}

// UAudioMaterialSlider @ 14d8b91d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UAudioMaterialSlider * __thiscall
UAudioMaterialSlider::UAudioMaterialSlider(UAudioMaterialSlider *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FAudioMaterialSliderStyle::FAudioMaterialSliderStyle(&this->WidgetStyle);
  this->Value = 1.0;
  *(undefined8 *)&this->OnValueChanged = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x10 = 0;
  (this->Orientation).Value = '\0';
  (this->Slider).Object = (SAudioMaterialSlider *)0x0;
  (this->Slider).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UAudioMaterialSlider @ 14d8b9250

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UAudioMaterialSlider * __thiscall
UAudioMaterialSlider::UAudioMaterialSlider(UAudioMaterialSlider *this,FObjectInitializer *param_1)

{
  FAudioWidgetsStyle *pFVar1;
  FName *pFVar2;
  FAudioMaterialSliderStyle *pFVar3;
  FName local_res8;
  
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FAudioMaterialSliderStyle::FAudioMaterialSliderStyle(&this->WidgetStyle);
  this->Value = 1.0;
  *(undefined8 *)&this->OnValueChanged = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x10 = 0;
  (this->Orientation).Value = '\0';
  this->bLocked = false;
  this->bMouseUsesStep = false;
  (this->Slider).Object = (SAudioMaterialSlider *)0x0;
  (this->Slider).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->TuneSpeed = 0.2;
  this->FineTuneSpeed = 0.05;
  this->StepSize = 0.01;
  pFVar1 = FAudioWidgetsStyle::Get();
  pFVar2 = ::FName::FName(&local_res8,"AudioMaterialSlider.Style");
  pFVar3 = (FAudioMaterialSliderStyle *)
           (**(code **)(*(longlong *)pFVar1 + 0xa0))
                     (pFVar1,FAudioMaterialSliderStyle::TypeName,*pFVar2,0,1);
  if ((pFVar3 == (FAudioMaterialSliderStyle *)0x0) &&
     (pFVar3 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9d4c) < ::_TSS0)) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAudioMaterialSliderStyle::FAudioMaterialSliderStyle(&::Default);
      atexit(`FAudioMaterialSliderStyle::GetDefault'::__l2::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FAudioMaterialSliderStyle::operator=(&this->WidgetStyle,pFVar3);
  return this;
}

// ~UAudioMaterialSlider @ 14d8c13d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioMaterialSlider::~UAudioMaterialSlider(UAudioMaterialSlider *this)

{
  void *pvVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Slider).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChanged);
  pTVar2 = (this->WidgetStyle).TextBoxStyle.BackgroundImage.ResourceHandle.Data.SharedReferenceCount
           .ReferenceController;
  *(undefined ***)&(this->WidgetStyle).TextBoxStyle = &___7FAudioTextBoxStyle__6B_;
  (this->WidgetStyle).TextBoxStyle.BackgroundImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&(this->WidgetStyle).TextBoxStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->WidgetStyle);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetFineTuneSpeed @ 14d92d6b0

float __thiscall UAudioMaterialSlider::GetFineTuneSpeed(UAudioMaterialSlider *this)

{
  return this->FineTuneSpeed;
}

// GetIsLocked @ 14d92f640

bool __thiscall UAudioMaterialSlider::GetIsLocked(UAudioMaterialSlider *this)

{
  return this->bLocked;
}

// GetMouseUsesStep @ 14d930130

bool __thiscall UAudioMaterialSlider::GetMouseUsesStep(UAudioMaterialSlider *this)

{
  return this->bMouseUsesStep;
}

// GetPrivateStaticClass @ 14d933a20

UClass * __cdecl UAudioMaterialSlider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialSlider",
               &Z_Registration_Info_UClass_UAudioMaterialSlider.InnerSingleton,
               StaticRegisterNativesUAudioMaterialSlider,0x340,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioMaterialSlider>,
               InternalVTableHelperCtorCaller<UAudioMaterialSlider>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialSlider.InnerSingleton;
}

// GetStepSize @ 14d937090

float __thiscall UAudioMaterialSlider::GetStepSize(UAudioMaterialSlider *this)

{
  return this->StepSize;
}

// GetTuneSpeed @ 14d937380

float __thiscall UAudioMaterialSlider::GetTuneSpeed(UAudioMaterialSlider *this)

{
  return this->TuneSpeed;
}

// GetValue @ 14d9383f0

float __thiscall UAudioMaterialSlider::GetValue(UAudioMaterialSlider *this)

{
  return this->Value;
}

// HandleOnValueChanged @ 14d938cb0

void __thiscall UAudioMaterialSlider::HandleOnValueChanged(UAudioMaterialSlider *this,float param_1)

{
  float local_res10 [6];
  
  if (param_1 != this->Value) {
    this->Value = param_1;
    local_res10[0] = param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnValueChanged,
               local_res10);
  }
  return;
}

// RebuildWidget @ 14d95ffe0

TSharedRef<SWidget,1> * __thiscall
UAudioMaterialSlider::RebuildWidget
          (UAudioMaterialSlider *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  SAudioMaterialSlider *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FArguments *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TSharedRef<SAudioMaterialSlider,1> *pTVar8;
  TSharedRef<SWidget,1> *pTVar9;
  TSharedPtr<SAudioMaterialSlider,1> *pTVar10;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FWeakObjectPtr local_res18;
  UAudioMaterialSlider *local_res20;
  undefined1 local_528 [8];
  FDelegateAllocation local_520;
  float local_510;
  undefined1 local_50c;
  undefined1 local_508 [8];
  ForAnyElementType FStack_500;
  ulonglong local_4f8;
  float local_4f0;
  undefined1 local_4ec;
  undefined1 local_4e8 [8];
  ForAnyElementType FStack_4e0;
  ulonglong local_4d8;
  undefined1 local_4d0;
  undefined1 local_4cf;
  undefined1 local_4c8 [8];
  ForAnyElementType FStack_4c0;
  ulonglong local_4b8;
  undefined1 local_4b0;
  undefined1 local_4af;
  undefined1 local_4a8 [8];
  ForAnyElementType FStack_4a0;
  ulonglong local_498;
  float local_490;
  undefined1 local_48c;
  undefined1 local_488 [8];
  ForAnyElementType FStack_480;
  ulonglong local_478;
  FMemScope local_468;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  SAudioMaterialSlider *local_458;
  FSharedReferencer<1> local_450;
  UAudioMaterialSlider *local_448;
  FName local_440;
  TSharedRef<SAudioMaterialSlider,1> local_438;
  FDestructionSentinel local_428;
  FDestructionSentinel local_410;
  FDestructionSentinel local_3f8;
  FDestructionSentinel local_3e0;
  FDestructionSentinel local_3c8;
  FDestructionSentinel local_3b0;
  FDestructionSentinel local_398;
  FDelegateAllocation *local_380;
  TSlateDecl<SAudioMaterialSlider,RequiredArgs::T0RequiredArgs> local_378;
  FArguments local_360;
  
  pFVar5 = SAudioMaterialSlider::FArguments::FArguments(&local_360);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UAudioMaterialSlider *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UAudioMaterialSlider *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  (pFVar5->_Owner).WeakPtr = local_res18;
  pFVar5->_Orientation = (uint)(this->Orientation).Value;
  local_510 = this->TuneSpeed;
  local_50c = 1;
  local_4f8 = 0;
  local_508 = (undefined1  [8])0x0;
  FStack_500.Data = (FScriptContainerElement *)0x0;
  (pFVar5->_TuneSpeed).Value = local_510;
  (pFVar5->_TuneSpeed).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_TuneSpeed).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_508);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_508,
             (FWriteAccessScope *)&local_428);
  if (((int)local_4f8 != 0) && (FStack_500.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_500.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_500,0,0,0x10);
    local_4f8 = local_4f8 & 0xffffffff00000000;
  }
  if (local_428.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_428.Accessor,&local_428);
  }
  if (FStack_500.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_500.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_508);
  local_4f0 = this->FineTuneSpeed;
  local_4ec = 1;
  local_4d8 = 0;
  local_4e8 = (undefined1  [8])0x0;
  FStack_4e0.Data = (FScriptContainerElement *)0x0;
  (pFVar5->_FineTuneSpeed).Value = local_4f0;
  (pFVar5->_FineTuneSpeed).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_FineTuneSpeed).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4e8,
             (FWriteAccessScope *)&local_410);
  if (((int)local_4d8 != 0) && (FStack_4e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4e0,0,0,0x10);
    local_4d8 = local_4d8 & 0xffffffff00000000;
  }
  if (local_410.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_410.Accessor,&local_410);
  }
  if (FStack_4e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4e8);
  local_4d0 = this->bLocked;
  local_4cf = 1;
  local_4b8 = 0;
  local_4c8 = (undefined1  [8])0x0;
  FStack_4c0.Data = (FScriptContainerElement *)0x0;
  (pFVar5->_Locked).Value = (bool)local_4d0;
  (pFVar5->_Locked).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_Locked).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4c8,
             (FWriteAccessScope *)&local_3f8);
  if (((int)local_4b8 != 0) && (FStack_4c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4c0,0,0,0x10);
    local_4b8 = local_4b8 & 0xffffffff00000000;
  }
  if (local_3f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3f8.Accessor,&local_3f8);
  }
  if (FStack_4c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4c8);
  local_4b0 = this->bMouseUsesStep;
  local_4af = 1;
  local_498 = 0;
  local_4a8 = (undefined1  [8])0x0;
  FStack_4a0.Data = (FScriptContainerElement *)0x0;
  (pFVar5->_MouseUsesStep).Value = (bool)local_4b0;
  (pFVar5->_MouseUsesStep).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_MouseUsesStep).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4a8,
             (FWriteAccessScope *)&local_3e0);
  if (((int)local_498 != 0) && (FStack_4a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4a0,0,0,0x10);
    local_498 = local_498 & 0xffffffff00000000;
  }
  if (local_3e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e0.Accessor,&local_3e0);
  }
  if (FStack_4a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4a8);
  local_490 = this->StepSize;
  local_48c = 1;
  local_478 = 0;
  local_488 = (undefined1  [8])0x0;
  FStack_480.Data = (FScriptContainerElement *)0x0;
  (pFVar5->_StepSize).Value = local_490;
  (pFVar5->_StepSize).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_StepSize).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_488);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_488,
             (FWriteAccessScope *)&local_3c8);
  if (((int)local_478 != 0) && (FStack_480.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_480.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_480,0,0,0x10);
    local_478 = local_478 & 0xffffffff00000000;
  }
  if (local_3c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3c8.Accessor,&local_3c8);
  }
  if (FStack_480.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_480.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_488);
  uStack_460 = 0;
  pFVar5->_AudioMaterialSliderStyle = &this->WidgetStyle;
  local_528 = (undefined1  [8])0x0;
  local_468 = (FMemScope)HandleOnValueChanged;
  uStack_45c = local_438.SharedReferenceCount.ReferenceController._4_4_;
  local_520.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_520.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_528,
             (FWriteAccessScope *)&local_398);
  local_380 = &local_520;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_520);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAudioMaterialSlider____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar6[3] = 0;
    local_448 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_448);
    *(FMemScope *)(puVar6 + 4) = local_468;
    puVar6[5] = CONCAT44(uStack_45c,uStack_460);
  }
  if (local_398.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_398.Accessor,&local_398);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar5->_OnValueChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_528);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_440 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_468,&local_440,true);
  TSlateDecl<SAudioMaterialSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioMaterialSlider,RequiredArgs::T0RequiredArgs>
            (&local_378,"SAudioMaterialSlider",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioMaterialSlate\\AudioMaterialSlider.cpp"
             ,0x91,local_res8);
  FMemScope::~FMemScope(&local_468);
  FLLMScope::~FLLMScope(local_res10);
  pTVar8 = TSlateDecl<SAudioMaterialSlider,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_378,&local_438,pFVar5);
  local_450.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
  local_458 = pTVar8->Object;
  if (local_450.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_450.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_450.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = &this->Slider;
  if (pTVar10 != (TSharedPtr<SAudioMaterialSlider,1> *)&local_458) {
    pTVar10->Object = local_458;
    local_458 = (SAudioMaterialSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Slider).SharedReferenceCount,&local_450);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_450.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_438.SharedReferenceCount.ReferenceController._4_4_,
                      local_438.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_378._Widget.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_528,
             (FWriteAccessScope *)&local_3b0);
  if ((local_520.DelegateSize != 0) &&
     (local_520.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_520.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_520,0,0,0x10);
    local_520.DelegateSize = 0;
  }
  if (local_3b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3b0.Accessor,&local_3b0);
  }
  if (local_520.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_520.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_528);
  SAudioMaterialSlider::FArguments::~FArguments(&local_360);
  if (pTVar10->Object == (SAudioMaterialSlider *)0x0) {
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
  pTVar2 = (this->Slider).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar1 == (SAudioMaterialSlider *)0x0) {
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

// ReleaseSlateResources @ 14d9639f0

void __thiscall UAudioMaterialSlider::ReleaseSlateResources(UAudioMaterialSlider *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Slider != (TSharedPtr<SAudioMaterialSlider,1> *)&local_18) {
    (this->Slider).Object = (SAudioMaterialSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Slider).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// SetFineTuneSpeed @ 14d968de0

void __thiscall UAudioMaterialSlider::SetFineTuneSpeed(UAudioMaterialSlider *this,float param_1)

{
  SAudioMaterialSlider *pSVar1;
  
  pSVar1 = (this->Slider).Object;
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->FineTuneSpeed = param_1;
  if (pSVar1 != (SAudioMaterialSlider *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pSVar1->FineTuneSpeed).Getter);
    (pSVar1->FineTuneSpeed).Value = param_1;
    (pSVar1->FineTuneSpeed).bIsSet = true;
  }
  return;
}

// SetLocked @ 14d969d90

void __thiscall UAudioMaterialSlider::SetLocked(UAudioMaterialSlider *this,bool param_1)

{
  SAudioMaterialSlider *pSVar1;
  
  pSVar1 = (this->Slider).Object;
  this->bLocked = param_1;
  if (pSVar1 != (SAudioMaterialSlider *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pSVar1->bLocked).Getter);
    (pSVar1->bLocked).Value = param_1;
    (pSVar1->bLocked).bIsSet = true;
  }
  return;
}

// SetMouseUsesStep @ 14d96ab10

void __thiscall UAudioMaterialSlider::SetMouseUsesStep(UAudioMaterialSlider *this,bool param_1)

{
  SAudioMaterialSlider *pSVar1;
  
  pSVar1 = (this->Slider).Object;
  this->bMouseUsesStep = param_1;
  if (pSVar1 != (SAudioMaterialSlider *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pSVar1->bMouseUsesStep).Getter);
    (pSVar1->bMouseUsesStep).Value = param_1;
    (pSVar1->bMouseUsesStep).bIsSet = true;
  }
  return;
}

// SetStepSize @ 14d96dc80

void __thiscall UAudioMaterialSlider::SetStepSize(UAudioMaterialSlider *this,float param_1)

{
  SAudioMaterialSlider *pSVar1;
  
  pSVar1 = (this->Slider).Object;
  this->StepSize = param_1;
  if (pSVar1 != (SAudioMaterialSlider *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pSVar1->StepSize).Getter);
    (pSVar1->StepSize).Value = param_1;
    (pSVar1->StepSize).bIsSet = true;
  }
  return;
}

// SetTuneSpeed @ 14d96e340

void __thiscall UAudioMaterialSlider::SetTuneSpeed(UAudioMaterialSlider *this,float param_1)

{
  SAudioMaterialSlider *pSVar1;
  
  pSVar1 = (this->Slider).Object;
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->TuneSpeed = param_1;
  if (pSVar1 != (SAudioMaterialSlider *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pSVar1->TuneSpeed).Getter);
    (pSVar1->TuneSpeed).Value = param_1;
    (pSVar1->TuneSpeed).bIsSet = true;
  }
  return;
}

// SetValue @ 14d96ee80

void __thiscall UAudioMaterialSlider::SetValue(UAudioMaterialSlider *this,float param_1)

{
  SAudioMaterialSlider *pSVar1;
  float local_res10 [6];
  FDestructionSentinel local_58;
  float local_40;
  undefined1 local_3c;
  undefined1 local_38 [8];
  ForAnyElementType FStack_30;
  ulonglong local_28;
  
  pSVar1 = (this->Slider).Object;
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if (pSVar1 != (SAudioMaterialSlider *)0x0) {
    local_3c = 1;
    local_28 = 0;
    local_38 = (undefined1  [8])0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    (pSVar1->ValueAttribute).Value = param_1;
    (pSVar1->ValueAttribute).bIsSet = true;
    local_40 = param_1;
    TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&(pSVar1->ValueAttribute).Getter,
               (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_58);
    if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28 = local_28 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
    if (param_1 != this->Value) {
      this->Value = param_1;
      local_res10[0] = param_1;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnValueChanged,
                 local_res10);
    }
  }
  return;
}

// StaticRegisterNativesUAudioMaterialSlider @ 14d971c70

void __cdecl UAudioMaterialSlider::StaticRegisterNativesUAudioMaterialSlider(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UAudioMaterialSlider_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 14d972a50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioMaterialSlider::SynchronizeProperties(UAudioMaterialSlider *this)

{
  SAudioMaterialSlider *pSVar1;
  code *pcVar2;
  bool bVar3;
  EOrientation EVar4;
  FDestructionSentinel local_48;
  float local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  pSVar1 = (this->Slider).Object;
  if (pSVar1 == (SAudioMaterialSlider *)0x0) {
    return;
  }
  local_30 = this->Value;
  local_2c = 1;
  local_18 = 0;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  (pSVar1->ValueAttribute).Value = local_30;
  (pSVar1->ValueAttribute).bIsSet = true;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pSVar1->ValueAttribute).Getter,
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
  if ((this->Slider).Object == (SAudioMaterialSlider *)0x0) {
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
  pSVar1 = (this->Slider).Object;
  EVar4 = (EOrientation)(this->Orientation).Value;
  if (pSVar1->Orientation != EVar4) {
    pSVar1->Orientation = EVar4;
    SWidget::Invalidate((SWidget *)pSVar1,Layout);
  }
  if ((this->Slider).Object == (SAudioMaterialSlider *)0x0) {
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
  SAudioMaterialSlider::ApplyNewMaterial((this->Slider).Object);
  return;
}

// execGetFineTuneSpeed @ 14d97e1a0

void __cdecl
UAudioMaterialSlider::execGetFineTuneSpeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x14].field_0x4;
  return;
}

// execGetIsLocked @ 14d97e200

void __cdecl UAudioMaterialSlider::execGetIsLocked(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x14].field_0x8;
  return;
}

// execGetMouseUsesStep @ 14d97e4d0

void __cdecl
UAudioMaterialSlider::execGetMouseUsesStep(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x14].field_0x9;
  return;
}

// execGetStepSize @ 14d97e8b0

void __cdecl UAudioMaterialSlider::execGetStepSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x14].field_0xc;
  return;
}

// execGetTuneSpeed @ 14d97e910

void __cdecl UAudioMaterialSlider::execGetTuneSpeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x14);
  return;
}

// execGetValue @ 14d97e970

void __cdecl UAudioMaterialSlider::execGetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x13].field_0x20;
  return;
}

// execSetFineTuneSpeed @ 14d97ec30

void __cdecl
UAudioMaterialSlider::execSetFineTuneSpeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  float fVar3;
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
  if (__real_3f800000 <= local_res8[0]) {
    fVar3 = __real_3f800000;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x14].field_0x10;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(float *)&param_1[0x14].field_0x4 = fVar3;
  if (lVar2 != 0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x2e8));
    *(float *)(lVar2 + 0x2e0) = fVar3;
    *(undefined1 *)(lVar2 + 0x2e4) = 1;
  }
  return;
}

// execSetLocked @ 14d97ef20

void __cdecl UAudioMaterialSlider::execSetLocked(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  bool bVar3;
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
  bVar3 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x14].field_0x10;
  param_1[0x14].field_0x8 = bVar3;
  if (lVar2 != 0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x328));
    *(bool *)(lVar2 + 800) = bVar3;
    *(undefined1 *)(lVar2 + 0x321) = 1;
  }
  return;
}

// execSetMouseUsesStep @ 14d97fae0

void __cdecl
UAudioMaterialSlider::execSetMouseUsesStep(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  bool bVar3;
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
  bVar3 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x14].field_0x10;
  param_1[0x14].field_0x9 = bVar3;
  if (lVar2 != 0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x348));
    *(bool *)(lVar2 + 0x340) = bVar3;
    *(undefined1 *)(lVar2 + 0x341) = 1;
  }
  return;
}

// execSetStepSize @ 14d980430

void __cdecl UAudioMaterialSlider::execSetStepSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  undefined4 uVar3;
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
  uVar3 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x14].field_0x10;
  *(undefined4 *)&param_1[0x14].field_0xc = local_res8[0];
  if (lVar2 != 0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x368));
    *(undefined4 *)(lVar2 + 0x360) = uVar3;
    *(undefined1 *)(lVar2 + 0x364) = 1;
  }
  return;
}

// execSetTuneSpeed @ 14d9807a0

void __cdecl UAudioMaterialSlider::execSetTuneSpeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  float fVar3;
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
  if (__real_3f800000 <= local_res8[0]) {
    fVar3 = __real_3f800000;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x14].field_0x10;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(float *)(param_1 + 0x14) = fVar3;
  if (lVar2 != 0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x2c8));
    *(float *)(lVar2 + 0x2c0) = fVar3;
    *(undefined1 *)(lVar2 + 0x2c4) = 1;
  }
  return;
}

// execSetValue @ 14d980df0

void __cdecl UAudioMaterialSlider::execSetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  float fVar3;
  float local_res8 [2];
  float local_res10 [2];
  FDestructionSentinel local_68;
  float local_50;
  undefined1 local_4c;
  undefined1 local_48 [8];
  ForAnyElementType FStack_40;
  ulonglong local_38;
  
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
  if (__real_3f800000 <= local_res8[0]) {
    fVar3 = __real_3f800000;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x14].field_0x10;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (lVar2 != 0) {
    local_4c = 1;
    local_38 = 0;
    local_48 = (undefined1  [8])0x0;
    FStack_40.Data = (FScriptContainerElement *)0x0;
    *(float *)(lVar2 + 0x2a0) = fVar3;
    *(undefined1 *)(lVar2 + 0x2a4) = 1;
    local_50 = fVar3;
    TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)(lVar2 + 0x2a8),
               (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_68);
    if (((int)local_38 != 0) && (FStack_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40,0,0,0x10);
      local_38 = local_38 & 0xffffffff00000000;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if (FStack_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_48);
    if (fVar3 != *(float *)&param_1[0x13].field_0x20) {
      *(float *)&param_1[0x13].field_0x20 = fVar3;
      local_res10[0] = fVar3;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1[0x13].field_0x8,
                 local_res10);
    }
  }
  return;
}

