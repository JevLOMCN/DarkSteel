// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 34

// StaticClass @ 14d894400

UClass * __cdecl UAudioMaterialKnob::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialKnob.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialKnob",
               &Z_Registration_Info_UClass_UAudioMaterialKnob.InnerSingleton,
               StaticRegisterNativesUAudioMaterialKnob,0x3b0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioMaterialKnob>,
               InternalVTableHelperCtorCaller<UAudioMaterialKnob>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialKnob.InnerSingleton;
}

// UAudioMaterialKnob @ 14d8b8c50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UAudioMaterialKnob * __thiscall
UAudioMaterialKnob::UAudioMaterialKnob(UAudioMaterialKnob *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FAudioMaterialKnobStyle::FAudioMaterialKnobStyle(&this->WidgetStyle);
  this->Value = 1.0;
  *(undefined8 *)&this->OnKnobValueChanged = 0;
  *(undefined8 *)&(this->OnKnobValueChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnKnobValueChanged).field_0x10 = 0;
  (this->Knob).Object = (SAudioMaterialKnob *)0x0;
  (this->Knob).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UAudioMaterialKnob @ 14d8b8cc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UAudioMaterialKnob * __thiscall
UAudioMaterialKnob::UAudioMaterialKnob(UAudioMaterialKnob *this,FObjectInitializer *param_1)

{
  FAudioWidgetsStyle *pFVar1;
  FName *pFVar2;
  FAudioMaterialKnobStyle *pFVar3;
  FName local_res8;
  
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FAudioMaterialKnobStyle::FAudioMaterialKnobStyle(&this->WidgetStyle);
  this->Value = 1.0;
  *(undefined8 *)&this->OnKnobValueChanged = 0;
  *(undefined8 *)&(this->OnKnobValueChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnKnobValueChanged).field_0x10 = 0;
  this->bLocked = false;
  this->bMouseUsesStep = false;
  (this->Knob).Object = (SAudioMaterialKnob *)0x0;
  (this->Knob).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->TuneSpeed = 0.2;
  this->FineTuneSpeed = 0.05;
  this->StepSize = 0.01;
  pFVar1 = FAudioWidgetsStyle::Get();
  pFVar2 = ::FName::FName(&local_res8,"AudioMaterialKnob.Style");
  pFVar3 = (FAudioMaterialKnobStyle *)
           (**(code **)(*(longlong *)pFVar1 + 0xa0))
                     (pFVar1,FAudioMaterialKnobStyle::TypeName,*pFVar2,0,1);
  if ((pFVar3 == (FAudioMaterialKnobStyle *)0x0) &&
     (pFVar3 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9d4c) < ::_TSS0)) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAudioMaterialKnobStyle::FAudioMaterialKnobStyle(&::Default);
      atexit(`FAudioMaterialKnobStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__)
      ;
      _Init_thread_footer(&::_TSS0);
    }
  }
  FAudioMaterialKnobStyle::operator=(&this->WidgetStyle,pFVar3);
  return this;
}

// ~UAudioMaterialKnob @ 14d8c11c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioMaterialKnob::~UAudioMaterialKnob(UAudioMaterialKnob *this)

{
  void *pvVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Knob).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnKnobValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnKnobValueChanged);
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

// GetFineTuneSpeed @ 14d92d6a0

float __thiscall UAudioMaterialKnob::GetFineTuneSpeed(UAudioMaterialKnob *this)

{
  return this->FineTuneSpeed;
}

// GetIsLocked @ 14d92f630

bool __thiscall UAudioMaterialKnob::GetIsLocked(UAudioMaterialKnob *this)

{
  return this->bLocked;
}

// GetMouseUsesStep @ 14d930120

bool __thiscall UAudioMaterialKnob::GetMouseUsesStep(UAudioMaterialKnob *this)

{
  return this->bMouseUsesStep;
}

// GetPrivateStaticClass @ 14d933720

UClass * __cdecl UAudioMaterialKnob::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialKnob.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialKnob",
               &Z_Registration_Info_UClass_UAudioMaterialKnob.InnerSingleton,
               StaticRegisterNativesUAudioMaterialKnob,0x3b0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioMaterialKnob>,
               InternalVTableHelperCtorCaller<UAudioMaterialKnob>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialKnob.InnerSingleton;
}

// GetStepSize @ 14d937080

float __thiscall UAudioMaterialKnob::GetStepSize(UAudioMaterialKnob *this)

{
  return this->StepSize;
}

// GetTuneSpeed @ 14d937370

float __thiscall UAudioMaterialKnob::GetTuneSpeed(UAudioMaterialKnob *this)

{
  return this->TuneSpeed;
}

// GetValue @ 14d9383e0

float __thiscall UAudioMaterialKnob::GetValue(UAudioMaterialKnob *this)

{
  return this->Value;
}

// HandleOnKnobValueChanged @ 14d938c40

void __thiscall UAudioMaterialKnob::HandleOnKnobValueChanged(UAudioMaterialKnob *this,float param_1)

{
  float local_res10 [6];
  
  if (param_1 != this->Value) {
    this->Value = param_1;
    local_res10[0] = param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnKnobValueChanged,
               local_res10);
  }
  return;
}

// RebuildWidget @ 14d95f560

TSharedRef<SWidget,1> * __thiscall
UAudioMaterialKnob::RebuildWidget
          (UAudioMaterialKnob *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  SAudioMaterialKnob *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FArguments *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TSharedRef<SAudioMaterialKnob,1> *pTVar8;
  TSharedRef<SWidget,1> *pTVar9;
  TSharedPtr<SAudioMaterialKnob,1> *pTVar10;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FWeakObjectPtr local_res18;
  UAudioMaterialKnob *local_res20;
  undefined1 local_568 [8];
  FDelegateAllocation local_560;
  float local_550;
  undefined1 local_54c;
  undefined1 local_548 [8];
  ForAnyElementType FStack_540;
  ulonglong local_538;
  float local_530;
  undefined1 local_52c;
  undefined1 local_528 [8];
  ForAnyElementType FStack_520;
  ulonglong local_518;
  undefined1 local_510;
  undefined1 local_50f;
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
  float local_4b0;
  undefined1 local_4ac;
  undefined1 local_4a8 [8];
  ForAnyElementType FStack_4a0;
  ulonglong local_498;
  FMemScope local_488;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  SAudioMaterialKnob *local_478;
  FSharedReferencer<1> local_470;
  UAudioMaterialKnob *local_468;
  FName local_460;
  TSharedRef<SAudioMaterialKnob,1> local_458;
  FDestructionSentinel local_448;
  FDestructionSentinel local_430;
  FDestructionSentinel local_418;
  FDestructionSentinel local_400;
  FDestructionSentinel local_3e8;
  FDestructionSentinel local_3d0;
  FDestructionSentinel local_3b8;
  FDestructionSentinel local_3a0;
  FDelegateAllocation *local_388;
  TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs> local_380;
  FArguments local_368;
  
  pFVar5 = SAudioMaterialKnob::FArguments::FArguments(&local_368);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UAudioMaterialKnob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UAudioMaterialKnob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  (pFVar5->_Owner).WeakPtr = local_res18;
  pFVar5->_AudioMaterialKnobStyle = &this->WidgetStyle;
  local_550 = this->Value;
  local_54c = 1;
  local_538 = 0;
  local_548 = (undefined1  [8])0x0;
  FStack_540.Data = (FScriptContainerElement *)0x0;
  (pFVar5->_Value).Value = local_550;
  (pFVar5->_Value).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_Value).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_548);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_548,
             (FWriteAccessScope *)&local_448);
  if (((int)local_538 != 0) && (FStack_540.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_540.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_540,0,0,0x10);
    local_538 = local_538 & 0xffffffff00000000;
  }
  if (local_448.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_448.Accessor,&local_448);
  }
  if (FStack_540.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_540.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_548);
  local_530 = this->TuneSpeed;
  local_52c = 1;
  local_518 = 0;
  local_528 = (undefined1  [8])0x0;
  FStack_520.Data = (FScriptContainerElement *)0x0;
  (pFVar5->_TuneSpeed).Value = local_530;
  (pFVar5->_TuneSpeed).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_TuneSpeed).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_528);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_528,
             (FWriteAccessScope *)&local_430);
  if (((int)local_518 != 0) && (FStack_520.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_520.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_520,0,0,0x10);
    local_518 = local_518 & 0xffffffff00000000;
  }
  if (local_430.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_430.Accessor,&local_430);
  }
  if (FStack_520.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_520.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_528);
  local_510 = this->bLocked;
  local_50f = 1;
  local_4f8 = 0;
  local_508 = (undefined1  [8])0x0;
  FStack_500.Data = (FScriptContainerElement *)0x0;
  (pFVar5->_Locked).Value = (bool)local_510;
  (pFVar5->_Locked).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_Locked).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_508);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_508,
             (FWriteAccessScope *)&local_418);
  if (((int)local_4f8 != 0) && (FStack_500.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_500.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_500,0,0,0x10);
    local_4f8 = local_4f8 & 0xffffffff00000000;
  }
  if (local_418.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_418.Accessor,&local_418);
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
             (FWriteAccessScope *)&local_400);
  if (((int)local_4d8 != 0) && (FStack_4e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4e0,0,0,0x10);
    local_4d8 = local_4d8 & 0xffffffff00000000;
  }
  if (local_400.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_400.Accessor,&local_400);
  }
  if (FStack_4e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4e8);
  local_4d0 = this->bMouseUsesStep;
  local_4cf = 1;
  local_4b8 = 0;
  local_4c8 = (undefined1  [8])0x0;
  FStack_4c0.Data = (FScriptContainerElement *)0x0;
  (pFVar5->_MouseUsesStep).Value = (bool)local_4d0;
  (pFVar5->_MouseUsesStep).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_MouseUsesStep).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4c8,
             (FWriteAccessScope *)&local_3e8);
  if (((int)local_4b8 != 0) && (FStack_4c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4c0,0,0,0x10);
    local_4b8 = local_4b8 & 0xffffffff00000000;
  }
  if (local_3e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e8.Accessor,&local_3e8);
  }
  if (FStack_4c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4c8);
  local_4b0 = this->StepSize;
  local_4ac = 1;
  local_498 = 0;
  local_4a8 = (undefined1  [8])0x0;
  FStack_4a0.Data = (FScriptContainerElement *)0x0;
  (pFVar5->_StepSize).Value = local_4b0;
  (pFVar5->_StepSize).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_StepSize).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4a8,
             (FWriteAccessScope *)&local_3d0);
  if (((int)local_498 != 0) && (FStack_4a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4a0,0,0,0x10);
    local_498 = local_498 & 0xffffffff00000000;
  }
  if (local_3d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d0.Accessor,&local_3d0);
  }
  if (FStack_4a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4a8);
  uStack_480 = 0;
  local_488 = (FMemScope)HandleOnKnobValueChanged;
  uStack_47c = local_458.SharedReferenceCount.ReferenceController._4_4_;
  local_568 = (undefined1  [8])0x0;
  local_560.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_560.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_568,
             (FWriteAccessScope *)&local_3a0);
  local_388 = &local_560;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_560);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAudioMaterialKnob____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar6[3] = 0;
    local_468 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_468);
    *(FMemScope *)(puVar6 + 4) = local_488;
    puVar6[5] = CONCAT44(uStack_47c,uStack_480);
  }
  if (local_3a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a0.Accessor,&local_3a0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar5->_OnFloatValueChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_568);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_460 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_488,&local_460,true);
  TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs>
            (&local_380,"SAudioMaterialKnob",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioMaterialSlate\\AudioMaterialKnob.cpp"
             ,0x8f,local_res8);
  FMemScope::~FMemScope(&local_488);
  FLLMScope::~FLLMScope(local_res10);
  pTVar8 = TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_380,&local_458,pFVar5);
  local_470.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
  local_478 = pTVar8->Object;
  if (local_470.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_470.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_470.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = &this->Knob;
  if (pTVar10 != (TSharedPtr<SAudioMaterialKnob,1> *)&local_478) {
    pTVar10->Object = local_478;
    local_478 = (SAudioMaterialKnob *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Knob).SharedReferenceCount,&local_470);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_470.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_458.SharedReferenceCount.ReferenceController._4_4_,
                      local_458.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_380._Widget.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_568,
             (FWriteAccessScope *)&local_3b8);
  if ((local_560.DelegateSize != 0) &&
     (local_560.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_560.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_560,0,0,0x10);
    local_560.DelegateSize = 0;
  }
  if (local_3b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3b8.Accessor,&local_3b8);
  }
  if (local_560.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_560.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_568);
  SAudioMaterialKnob::FArguments::~FArguments(&local_368);
  if (pTVar10->Object == (SAudioMaterialKnob *)0x0) {
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
  pTVar2 = (this->Knob).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar1 == (SAudioMaterialKnob *)0x0) {
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

// ReleaseSlateResources @ 14d963940

void __thiscall UAudioMaterialKnob::ReleaseSlateResources(UAudioMaterialKnob *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UVisual::ReleaseSlateResources((UVisual *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Knob != (TSharedPtr<SAudioMaterialKnob,1> *)&local_18) {
    (this->Knob).Object = (SAudioMaterialKnob *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Knob).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetFineTuneSpeed @ 14d968d80

void __thiscall UAudioMaterialKnob::SetFineTuneSpeed(UAudioMaterialKnob *this,float param_1)

{
  SAudioMaterialKnob *pSVar1;
  
  pSVar1 = (this->Knob).Object;
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->FineTuneSpeed = param_1;
  if (pSVar1 != (SAudioMaterialKnob *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pSVar1->FineTuneSpeed).Getter);
    (pSVar1->FineTuneSpeed).Value = param_1;
    (pSVar1->FineTuneSpeed).bIsSet = true;
  }
  return;
}

// SetLocked @ 14d969d40

void __thiscall UAudioMaterialKnob::SetLocked(UAudioMaterialKnob *this,bool param_1)

{
  SAudioMaterialKnob *pSVar1;
  
  pSVar1 = (this->Knob).Object;
  this->bLocked = param_1;
  if (pSVar1 != (SAudioMaterialKnob *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pSVar1->bLocked).Getter);
    (pSVar1->bLocked).Value = param_1;
    (pSVar1->bLocked).bIsSet = true;
  }
  return;
}

// SetMouseUsesStep @ 14d96aac0

void __thiscall UAudioMaterialKnob::SetMouseUsesStep(UAudioMaterialKnob *this,bool param_1)

{
  SAudioMaterialKnob *pSVar1;
  
  pSVar1 = (this->Knob).Object;
  this->bMouseUsesStep = param_1;
  if (pSVar1 != (SAudioMaterialKnob *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pSVar1->bMouseUsesStep).Getter);
    (pSVar1->bMouseUsesStep).Value = param_1;
    (pSVar1->bMouseUsesStep).bIsSet = true;
  }
  return;
}

// SetStepSize @ 14d96dc30

void __thiscall UAudioMaterialKnob::SetStepSize(UAudioMaterialKnob *this,float param_1)

{
  SAudioMaterialKnob *pSVar1;
  
  pSVar1 = (this->Knob).Object;
  this->StepSize = param_1;
  if (pSVar1 != (SAudioMaterialKnob *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pSVar1->StepSize).Getter);
    (pSVar1->StepSize).Value = param_1;
    (pSVar1->StepSize).bIsSet = true;
  }
  return;
}

// SetTuneSpeed @ 14d96e2e0

void __thiscall UAudioMaterialKnob::SetTuneSpeed(UAudioMaterialKnob *this,float param_1)

{
  SAudioMaterialKnob *pSVar1;
  
  pSVar1 = (this->Knob).Object;
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->TuneSpeed = param_1;
  if (pSVar1 != (SAudioMaterialKnob *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pSVar1->TuneSpeed).Getter);
    (pSVar1->TuneSpeed).Value = param_1;
    (pSVar1->TuneSpeed).bIsSet = true;
  }
  return;
}

// SetValue @ 14d96ed60

void __thiscall UAudioMaterialKnob::SetValue(UAudioMaterialKnob *this,float param_1)

{
  SAudioMaterialKnob *pSVar1;
  float local_res10 [6];
  FDestructionSentinel local_58;
  undefined1 local_40 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType FStack_30;
  ulonglong local_28;
  
  pSVar1 = (this->Knob).Object;
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if (pSVar1 != (SAudioMaterialKnob *)0x0) {
    local_28 = 0;
    local_40[4] = true;
    local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    local_40._0_4_ = param_1;
    SetWidgetAttribute<float,float>
              ((SWidget *)pSVar1,&pSVar1->ValueAttribute,(TAttribute<float> *)local_40,Paint);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_38,(FWriteAccessScope *)&local_58);
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
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
    if (param_1 != this->Value) {
      this->Value = param_1;
      local_res10[0] = param_1;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnKnobValueChanged,
                 local_res10);
    }
  }
  return;
}

// StaticRegisterNativesUAudioMaterialKnob @ 14d971bd0

void __cdecl UAudioMaterialKnob::StaticRegisterNativesUAudioMaterialKnob(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UAudioMaterialKnob_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 14d972610

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioMaterialKnob::SynchronizeProperties(UAudioMaterialKnob *this)

{
  SAudioMaterialKnob *pSVar1;
  code *pcVar2;
  bool bVar3;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  pSVar1 = (this->Knob).Object;
  if (pSVar1 == (SAudioMaterialKnob *)0x0) {
    return;
  }
  local_30._0_4_ = this->Value;
  local_30[4] = true;
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
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
  if ((this->Knob).Object == (SAudioMaterialKnob *)0x0) {
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
  SAudioMaterialKnob::ApplyNewMaterial((this->Knob).Object);
  return;
}

// execGetFineTuneSpeed @ 14d97e170

void __cdecl
UAudioMaterialKnob::execGetFineTuneSpeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x16].field_0x20;
  return;
}

// execGetIsLocked @ 14d97e1d0

void __cdecl UAudioMaterialKnob::execGetIsLocked(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x16].field_0x24;
  return;
}

// execGetMouseUsesStep @ 14d97e4a0

void __cdecl
UAudioMaterialKnob::execGetMouseUsesStep(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x16].field_0x25;
  return;
}

// execGetStepSize @ 14d97e880

void __cdecl UAudioMaterialKnob::execGetStepSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x17);
  return;
}

// execGetTuneSpeed @ 14d97e8e0

void __cdecl UAudioMaterialKnob::execGetTuneSpeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x16].field_0x1c;
  return;
}

// execGetValue @ 14d97e940

void __cdecl UAudioMaterialKnob::execGetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x16].field_0x18;
  return;
}

// execSetFineTuneSpeed @ 14d97eb60

void __cdecl
UAudioMaterialKnob::execSetFineTuneSpeed(UObject *param_1,FFrame *param_2,void *param_3)

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
  lVar2 = *(longlong *)&param_1[0x17].field_0x8;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(float *)&param_1[0x16].field_0x20 = fVar3;
  if (lVar2 != 0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x318));
    *(float *)(lVar2 + 0x310) = fVar3;
    *(undefined1 *)(lVar2 + 0x314) = 1;
  }
  return;
}

// execSetLocked @ 14d97ee60

void __cdecl UAudioMaterialKnob::execSetLocked(UObject *param_1,FFrame *param_2,void *param_3)

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
  lVar2 = *(longlong *)&param_1[0x17].field_0x8;
  param_1[0x16].field_0x24 = bVar3;
  if (lVar2 != 0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x358));
    *(bool *)(lVar2 + 0x350) = bVar3;
    *(undefined1 *)(lVar2 + 0x351) = 1;
  }
  return;
}

// execSetMouseUsesStep @ 14d97fa20

void __cdecl
UAudioMaterialKnob::execSetMouseUsesStep(UObject *param_1,FFrame *param_2,void *param_3)

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
  lVar2 = *(longlong *)&param_1[0x17].field_0x8;
  param_1[0x16].field_0x25 = bVar3;
  if (lVar2 != 0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x378));
    *(bool *)(lVar2 + 0x370) = bVar3;
    *(undefined1 *)(lVar2 + 0x371) = 1;
  }
  return;
}

// execSetStepSize @ 14d980370

void __cdecl UAudioMaterialKnob::execSetStepSize(UObject *param_1,FFrame *param_2,void *param_3)

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
  lVar2 = *(longlong *)&param_1[0x17].field_0x8;
  *(undefined4 *)(param_1 + 0x17) = local_res8[0];
  if (lVar2 != 0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x398));
    *(undefined4 *)(lVar2 + 0x390) = uVar3;
    *(undefined1 *)(lVar2 + 0x394) = 1;
  }
  return;
}

// execSetTuneSpeed @ 14d9806d0

void __cdecl UAudioMaterialKnob::execSetTuneSpeed(UObject *param_1,FFrame *param_2,void *param_3)

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
  lVar2 = *(longlong *)&param_1[0x17].field_0x8;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(float *)&param_1[0x16].field_0x1c = fVar3;
  if (lVar2 != 0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x2f8));
    *(float *)(lVar2 + 0x2f0) = fVar3;
    *(undefined1 *)(lVar2 + 0x2f4) = 1;
  }
  return;
}

// execSetValue @ 14d980c70

void __cdecl UAudioMaterialKnob::execSetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SWidget *pSVar2;
  float fVar3;
  float local_res8 [2];
  float local_res10 [2];
  FDestructionSentinel local_68;
  undefined1 local_50 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
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
  pSVar2 = *(SWidget **)&param_1[0x17].field_0x8;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (pSVar2 != (SWidget *)0x0) {
    local_38 = 0;
    local_50[4] = true;
    local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_40.Data = (FScriptContainerElement *)0x0;
    local_50._0_4_ = fVar3;
    SetWidgetAttribute<float,float>
              (pSVar2,(TAttribute<float> *)
                      ((longlong)&pSVar2[1].PersistentState.AllottedGeometry.Position.field0_0x0 + 4
                      ),(TAttribute<float> *)local_50,Paint);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_68);
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
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
    if (fVar3 != *(float *)&param_1[0x16].field_0x18) {
      *(float *)&param_1[0x16].field_0x18 = fVar3;
      local_res10[0] = fVar3;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(param_1 + 0x16),
                 local_res10);
    }
  }
  return;
}

