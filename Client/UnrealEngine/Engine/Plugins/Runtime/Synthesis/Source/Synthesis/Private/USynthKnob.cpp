// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 22

// StaticClass @ 14f0a6f50

UClass * __cdecl USynthKnob::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynthKnob.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SynthKnob",
               &Z_Registration_Info_UClass_USynthKnob.InnerSingleton,StaticRegisterNativesUSynthKnob
               ,0x570,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<USynthKnob>,
               InternalVTableHelperCtorCaller<USynthKnob>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynthKnob.InnerSingleton;
}

// USynthKnob @ 14f0bc080

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

USynthKnob * __thiscall USynthKnob::USynthKnob(USynthKnob *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FText::FText(&this->ParameterName);
  FText::FText(&this->ParameterUnits);
  *(undefined8 *)&this->ValueDelegate = 0;
  *(undefined8 *)&(this->ValueDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ValueDelegate).field_0x10 = 0;
  FSynthKnobStyle::FSynthKnobStyle(&this->WidgetStyle);
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
  (this->MySynthKnob).Object = (SSynthKnob *)0x0;
  (this->MySynthKnob).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// USynthKnob @ 14f0bc170

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

USynthKnob * __thiscall USynthKnob::USynthKnob(USynthKnob *this,FObjectInitializer *param_1)

{
  code *pcVar1;
  FSlateStyleSet *this_00;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  USynthKnob *pUVar4;
  FSynthKnobStyle *pFVar5;
  FArguments local_3b8;
  
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FText::FText(&this->ParameterName);
  FText::FText(&this->ParameterUnits);
  *(undefined8 *)&this->ValueDelegate = 0;
  *(undefined8 *)&(this->ValueDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ValueDelegate).field_0x10 = 0;
  FSynthKnobStyle::FSynthKnobStyle(&this->WidgetStyle);
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
  (this->MySynthKnob).Object = (SSynthKnob *)0x0;
  (this->MySynthKnob).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FSynthSlateStyleSet::Initialize();
  FVar2 = FSynthSlateStyleSet::StyleInstance.SharedReferenceCount;
  this_00 = FSynthSlateStyleSet::StyleInstance.Object;
  if (FSynthSlateStyleSet::StyleInstance.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FSynthSlateStyleSet::StyleInstance.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(FSynthSlateStyleSet::StyleInstance.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (FSlateStyleSet *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (USynthKnob *)(*pcVar1)();
      return pUVar4;
    }
  }
  pFVar5 = FSynthKnobStyle::GetDefault();
  FSlateStyleSet::Set<FSynthKnobStyle>(this_00,FSynthKnobStyle::TypeName,pFVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  this->StepSize = 0.01;
  this->MouseSpeed = 1.0;
  this->MouseFineTuneSpeed = 0.2;
  SSynthKnob::FArguments::FArguments(&local_3b8);
  FSynthKnobStyle::operator=(&this->WidgetStyle,local_3b8._Style);
  this->IsFocusable = true;
  SSynthKnob::FArguments::~FArguments(&local_3b8);
  return this;
}

// ~USynthKnob @ 14f0c0a80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USynthKnob::~USynthKnob(USynthKnob *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MySynthKnob).SharedReferenceCount.ReferenceController);
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
  FSynthKnobStyle::~FSynthKnobStyle(&this->WidgetStyle);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ValueDelegate);
  pIVar2 = (this->ParameterUnits).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->ParameterName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14f0dd740

UClass * __cdecl USynthKnob::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynthKnob.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SynthKnob",
               &Z_Registration_Info_UClass_USynthKnob.InnerSingleton,StaticRegisterNativesUSynthKnob
               ,0x570,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<USynthKnob>,
               InternalVTableHelperCtorCaller<USynthKnob>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynthKnob.InnerSingleton;
}

// GetValue @ 14f0df2d0

float __thiscall USynthKnob::GetValue(USynthKnob *this)

{
  SSynthKnob *pSVar1;
  float *pfVar2;
  
  pSVar1 = (this->MySynthKnob).Object;
  if (pSVar1 != (SSynthKnob *)0x0) {
    pfVar2 = TAttribute<float>::Get(&pSVar1->ValueAttribute);
    return *pfVar2;
  }
  return this->Value;
}

// HandleOnControllerCaptureBegin @ 14f0df370

void __thiscall USynthKnob::HandleOnControllerCaptureBegin(USynthKnob *this)

{
  FOnControllerCaptureBeginEvent_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnControllerCaptureBegin
            );
  return;
}

// HandleOnControllerCaptureEnd @ 14f0df3b0

void __thiscall USynthKnob::HandleOnControllerCaptureEnd(USynthKnob *this)

{
  FOnControllerCaptureEndEvent_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnControllerCaptureEnd);
  return;
}

// HandleOnMouseCaptureBegin @ 14f0df3f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USynthKnob::HandleOnMouseCaptureBegin(USynthKnob *this)

{
  FOnMouseCaptureBeginEvent_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureBegin);
  UWidget::GetParent((UWidget *)this);
  return;
}

// HandleOnMouseCaptureEnd @ 14f0df440

void __thiscall USynthKnob::HandleOnMouseCaptureEnd(USynthKnob *this)

{
  FOnMouseCaptureEndEvent_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd);
  return;
}

// HandleOnValueChanged @ 14f0df460

void __thiscall USynthKnob::HandleOnValueChanged(USynthKnob *this,float param_1)

{
  FOnFloatValueChangedEvent_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnValueChanged,param_1);
  return;
}

// RebuildWidget @ 14f0f5750

TSharedRef<SWidget,1> * __thiscall
USynthKnob::RebuildWidget(USynthKnob *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  SSynthKnob *pSVar3;
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
  USynthKnob *local_res18;
  USynthKnob *local_res20;
  FMemScope local_5e8;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined1 local_5d8 [8];
  FDelegateAllocation local_5d0;
  undefined1 local_5c0 [8];
  FDelegateAllocation local_5b8;
  undefined1 local_5a8 [8];
  FDelegateAllocation local_5a0;
  undefined1 local_590 [8];
  FDelegateAllocation local_588;
  undefined1 local_578 [8];
  FDelegateAllocation local_570;
  TSlateDecl<SSynthKnob,RequiredArgs::T0RequiredArgs> local_560;
  SSynthKnob *local_548;
  FSharedReferencer<1> local_540;
  USynthKnob *local_538;
  USynthKnob *local_530;
  USynthKnob *local_528;
  FName local_520;
  FDestructionSentinel local_518;
  FDestructionSentinel local_500;
  FDestructionSentinel local_4e8;
  FDestructionSentinel local_4d0;
  FDestructionSentinel local_4b8;
  FDestructionSentinel local_4a0;
  FDelegateAllocation *local_488;
  FDestructionSentinel local_480;
  FDelegateAllocation *local_468;
  FDestructionSentinel local_460;
  FDelegateAllocation *local_448;
  FDestructionSentinel local_440;
  FDelegateAllocation *local_428;
  FDestructionSentinel local_420;
  FDelegateAllocation *local_408;
  FArguments local_400;
  
  pFVar9 = SSynthKnob::FArguments::FArguments(&local_400);
  uStack_5e0 = 0;
  pFVar9->_Style = &this->WidgetStyle;
  pFVar9->_IsFocusable = this->IsFocusable;
  local_5e8 = (FMemScope)HandleOnMouseCaptureBegin;
  local_578 = (undefined1  [8])0x0;
  local_570.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_570.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_578,
             (FWriteAccessScope *)&local_4a0);
  local_488 = &local_570;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_570);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUSynthKnob____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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
    *(FMemScope *)(puVar10 + 4) = local_5e8;
    puVar10[5] = CONCAT44(uStack_5dc,uStack_5e0);
  }
  if (local_4a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4a0.Accessor,&local_4a0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnMouseCaptureBegin,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_578);
  uStack_5e0 = 0;
  local_5e8 = (FMemScope)HandleOnMouseCaptureEnd;
  local_590 = (undefined1  [8])0x0;
  local_588.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_588.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_590,
             (FWriteAccessScope *)&local_480);
  local_468 = &local_588;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_588);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUSynthKnob____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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
    *(FMemScope *)(puVar10 + 4) = local_5e8;
    puVar10[5] = CONCAT44(uStack_5dc,uStack_5e0);
  }
  if (local_480.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_480.Accessor,&local_480);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnMouseCaptureEnd,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_590);
  uStack_5e0 = 0;
  local_5e8 = (FMemScope)HandleOnControllerCaptureBegin;
  local_5a8 = (undefined1  [8])0x0;
  local_5a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_5a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5a8,
             (FWriteAccessScope *)&local_460);
  local_448 = &local_5a0;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_5a0);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUSynthKnob____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_538 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_538);
    *(FMemScope *)(puVar10 + 4) = local_5e8;
    puVar10[5] = CONCAT44(uStack_5dc,uStack_5e0);
  }
  if (local_460.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_460.Accessor,&local_460);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnControllerCaptureBegin,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5a8);
  uStack_5e0 = 0;
  local_5e8 = (FMemScope)HandleOnControllerCaptureEnd;
  local_5c0 = (undefined1  [8])0x0;
  local_5b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_5b8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5c0,
             (FWriteAccessScope *)&local_440);
  local_428 = &local_5b8;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_5b8);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUSynthKnob____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_530 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_530);
    *(FMemScope *)(puVar10 + 4) = local_5e8;
    puVar10[5] = CONCAT44(uStack_5dc,uStack_5e0);
  }
  if (local_440.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_440.Accessor,&local_440);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnControllerCaptureEnd,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5c0);
  uStack_5e0 = 0;
  local_5e8 = (FMemScope)HandleOnValueChanged;
  local_5d8 = (undefined1  [8])0x0;
  local_5d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_5d0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5d8,
             (FWriteAccessScope *)&local_420);
  local_408 = &local_5d0;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_5d0);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUSynthKnob____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_528 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_528);
    *(FMemScope *)(puVar10 + 4) = local_5e8;
    puVar10[5] = CONCAT44(uStack_5dc,uStack_5e0);
  }
  if (local_420.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_420.Accessor,&local_420);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnValueChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5d8);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_520 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5e8,&local_520,true);
  TSlateDecl<SSynthKnob,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSynthKnob,RequiredArgs::T0RequiredArgs>
            (&local_560,"SSynthKnob",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\UI\\SynthKnob.cpp"
             ,0x19,local_res8);
  FMemScope::~FMemScope(&local_5e8);
  FLLMScope::~FLLMScope(local_res10);
  pSVar3 = local_560._Widget.Object;
  if (local_560._Widget.Object == (SSynthKnob *)0x0) {
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
  SWidget::SWidgetConstruct((SWidget *)local_560._Widget.Object,(FSlateBaseNamedArgs *)pFVar9);
  SSynthKnob::Construct(local_560._Widget.Object,pFVar9);
  if (local_560._Widget.Object == (SSynthKnob *)0x0) {
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
  if (((local_560._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_560._Widget.Object)->_padding_ + 0x228))(local_560._Widget.Object);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_14f0f5d0f;
  }
  bVar8 = 0x20;
LAB_14f0f5d0f:
  *(byte *)&(local_560._Widget.Object)->_padding_ =
       (byte)(local_560._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_560._Widget.Object)->_padding_ =
       (byte)(local_560._Widget.Object)->_padding_ | bVar8;
  if (local_560._Widget.Object == (SSynthKnob *)0x0) {
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
  pbVar1 = (byte *)((longlong)&(local_560._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_560._Widget.Object == (SSynthKnob *)0x0) {
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
  FVar5.ReferenceController = local_560._Widget.SharedReferenceCount.ReferenceController;
  local_560._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_560._Widget.Object = (SSynthKnob *)0x0;
  if (pSVar3 == (SSynthKnob *)0x0) {
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
  local_548 = pSVar3;
  local_540.ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MySynthKnob != (TSharedPtr<SSynthKnob,1> *)&local_548) {
    (this->MySynthKnob).Object = pSVar3;
    local_548 = (SSynthKnob *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MySynthKnob).SharedReferenceCount,&local_540);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_540.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5d8,
             (FWriteAccessScope *)&local_518);
  if ((local_5d0.DelegateSize != 0) &&
     (local_5d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_5d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_5d0,0,0,0x10);
    local_5d0.DelegateSize = 0;
  }
  if (local_518.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_518.Accessor,&local_518);
  }
  if (local_5d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_5d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5c0,
             (FWriteAccessScope *)&local_500);
  if ((local_5b8.DelegateSize != 0) &&
     (local_5b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_5b8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_5b8,0,0,0x10);
    local_5b8.DelegateSize = 0;
  }
  if (local_500.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_500.Accessor,&local_500);
  }
  if (local_5b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_5b8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5c0);
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
  SSynthKnob::FArguments::~FArguments(&local_400);
  if ((this->MySynthKnob).Object == (SSynthKnob *)0x0) {
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
  pTVar2 = (this->MySynthKnob).SharedReferenceCount.ReferenceController;
  pSVar3 = (this->MySynthKnob).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SSynthKnob *)0x0) {
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

// ReleaseSlateResources @ 14f0f7630

void __thiscall USynthKnob::ReleaseSlateResources(USynthKnob *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UVisual::ReleaseSlateResources((UVisual *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MySynthKnob != (TSharedPtr<SSynthKnob,1> *)&local_18) {
    (this->MySynthKnob).Object = (SSynthKnob *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MySynthKnob).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetLocked @ 14f0fdc20

void __thiscall USynthKnob::SetLocked(USynthKnob *this,bool param_1)

{
  SSynthKnob *pSVar1;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->Locked = param_1;
  pSVar1 = (this->MySynthKnob).Object;
  if (pSVar1 != (SSynthKnob *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    TAttribute<bool>::operator=(&pSVar1->LockedAttribute,(TAttribute<bool> *)local_30);
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

// SetStepSize @ 14f102430

void __thiscall USynthKnob::SetStepSize(USynthKnob *this,float param_1)

{
  SSynthKnob *pSVar1;
  FDestructionSentinel FStack_48;
  float fStack_30;
  undefined1 uStack_2c;
  undefined1 auStack_28 [8];
  ForAnyElementType FStack_20;
  ulonglong uStack_18;
  
  this->StepSize = param_1;
  pSVar1 = (this->MySynthKnob).Object;
  if (pSVar1 == (SSynthKnob *)0x0) {
    return;
  }
  (pSVar1->StepSize).Value = param_1;
  (pSVar1->StepSize).bIsSet = true;
  uStack_18 = 0;
  uStack_2c = 1;
  auStack_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  fStack_30 = param_1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pSVar1->StepSize).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_28,
             (FWriteAccessScope *)&FStack_48);
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
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_28);
  return;
}

// SetValue @ 14f102e80

void __thiscall USynthKnob::SetValue(USynthKnob *this,float param_1)

{
  SSynthKnob *pSVar1;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->Value = param_1;
  pSVar1 = (this->MySynthKnob).Object;
  if (pSVar1 != (SSynthKnob *)0x0) {
    local_18 = 0;
    local_30[4] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30._0_4_ = param_1;
    TAttribute<float>::operator=(&pSVar1->ValueAttribute,(TAttribute<float> *)local_30);
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

// StaticRegisterNativesUSynthKnob @ 14f103d00

void __cdecl USynthKnob::StaticRegisterNativesUSynthKnob(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_USynthKnob_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 14f104990

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USynthKnob::SynchronizeProperties(USynthKnob *this)

{
  SSynthKnob *pSVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  TAttribute<float> *pTVar5;
  int iVar6;
  int iVar7;
  FName local_res8;
  undefined1 local_168 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_160;
  ForAnyElementType FStack_158;
  ulonglong local_150;
  undefined1 local_148 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_140;
  ForAnyElementType FStack_138;
  ulonglong local_130;
  float local_128;
  undefined1 local_124;
  undefined1 local_120 [8];
  ForAnyElementType FStack_118;
  ulonglong local_110;
  float local_108;
  undefined1 local_104;
  undefined1 local_100 [8];
  ForAnyElementType FStack_f8;
  ulonglong local_f0;
  undefined1 local_e8 [8];
  undefined1 local_e0 [24];
  FDestructionSentinel local_c8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  undefined1 local_50 [8];
  undefined1 local_48 [24];
  FReadAccessScope local_30;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->ValueDelegate);
  iVar7 = 0;
  if (bVar3) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ValueDelegate,
               &local_30);
    local_res8.ComparisonIndex.Value = *(uint *)&(this->ValueDelegate).field_0x10;
    local_res8.Number = *(uint *)&(this->ValueDelegate).field_0x14;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ValueDelegate,
               (FWriteAccessScope *)&local_c8);
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(this->ValueDelegate).field_0x8);
    if (local_c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
    }
    pTVar5 = TAttribute<float>::Create<UObject>((TAttribute<float> *)local_50,pUVar4,&local_res8);
    iVar6 = iVar7;
    iVar7 = 1;
  }
  else {
    pTVar5 = (TAttribute<float> *)local_168;
    local_168._0_4_ = this->Value;
    local_160.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_158.Data = (FScriptContainerElement *)0x0;
    local_168[4] = true;
    local_150 = 0;
    iVar6 = 2;
  }
  local_e8._0_4_ = pTVar5->Value;
  local_e8[4] = pTVar5->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar5->Getter);
  if (iVar6 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_160,(FWriteAccessScope *)&local_b0);
    if (((int)local_150 != 0) && (FStack_158.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_158.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_158,0,0,0x10);
      local_150 = local_150 & 0xffffffff00000000;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (FStack_158.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_158.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_160.AccessDetector);
  }
  if (iVar7 != 0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
    if ((void *)local_48._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_48._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_48);
  }
  if ((this->MySynthKnob).Object == (SSynthKnob *)0x0) {
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
  TAttribute<float>::operator=
            (&((this->MySynthKnob).Object)->ValueAttribute,(TAttribute<float> *)local_e8);
  if ((this->MySynthKnob).Object == (SSynthKnob *)0x0) {
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
  local_148[0] = this->Locked;
  local_148[1] = true;
  local_130 = 0;
  local_140.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_138.Data = (FScriptContainerElement *)0x0;
  TAttribute<bool>::operator=
            (&((this->MySynthKnob).Object)->LockedAttribute,(TAttribute<bool> *)local_148);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_140,(FWriteAccessScope *)&local_98);
  if (((int)local_130 != 0) && (FStack_138.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_138.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_138,0,0,0x10);
    local_130 = local_130 & 0xffffffff00000000;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (FStack_138.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_138.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_140.AccessDetector);
  if ((this->MySynthKnob).Object == (SSynthKnob *)0x0) {
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
  SSynthKnob::SetStepSize((this->MySynthKnob).Object,this->StepSize);
  if ((this->MySynthKnob).Object == (SSynthKnob *)0x0) {
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
  pSVar1 = (this->MySynthKnob).Object;
  local_128 = this->MouseSpeed;
  (pSVar1->MouseSpeed).Value = local_128;
  (pSVar1->MouseSpeed).bIsSet = true;
  local_124 = 1;
  local_120 = (undefined1  [8])0x0;
  FStack_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pSVar1->MouseSpeed).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_120);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_120,
             (FWriteAccessScope *)&local_80);
  if (((int)local_110 != 0) && (FStack_118.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_118.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_118,0,0,0x10);
    local_110 = local_110 & 0xffffffff00000000;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (FStack_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_118.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_120);
  if ((this->MySynthKnob).Object == (SSynthKnob *)0x0) {
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
  pSVar1 = (this->MySynthKnob).Object;
  local_108 = this->MouseFineTuneSpeed;
  (pSVar1->MouseFineTuneSpeed).Value = local_108;
  (pSVar1->MouseFineTuneSpeed).bIsSet = true;
  local_104 = 1;
  local_100 = (undefined1  [8])0x0;
  FStack_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pSVar1->MouseFineTuneSpeed).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_100);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_100,
             (FWriteAccessScope *)&local_68);
  if (((int)local_f0 != 0) && (FStack_f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_f8,0,0,0x10);
    local_f0 = local_f0 & 0xffffffff00000000;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_100);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
  if ((void *)local_e0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e0);
  return;
}

// execGetValue @ 14f10ca50

void __cdecl USynthKnob::execGetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  float *pfVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x22].field_0x10 != 0) {
    pfVar1 = TAttribute<float>::Get
                       ((TAttribute<float> *)(*(longlong *)&param_1[0x22].field_0x10 + 0x248));
    *(float *)param_3 = *pfVar1;
    return;
  }
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[10].field_0x20;
  return;
}

// execSetLocked @ 14f112950

void __cdecl USynthKnob::execSetLocked(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
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
  lVar2 = *(longlong *)&param_1[0x22].field_0x10;
  param_1[0x1f].field_0x8 = local_30[0];
  if (lVar2 != 0) {
    local_30[1] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    TAttribute<bool>::operator=((TAttribute<bool> *)(lVar2 + 0x220),(TAttribute<bool> *)local_30);
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

// execSetStepSize @ 14f117640

void __cdecl USynthKnob::execSetStepSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SSynthKnob *this;
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
  this = *(SSynthKnob **)&param_1[0x22].field_0x10;
  *(float *)&param_1[10].field_0x24 = local_res8[0];
  if (this != (SSynthKnob *)0x0) {
    SSynthKnob::SetStepSize(this,local_res8[0]);
  }
  return;
}

// execSetValue @ 14f1181c0

void __cdecl USynthKnob::execSetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
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
  lVar2 = *(longlong *)&param_1[0x22].field_0x10;
  *(float *)&param_1[10].field_0x20 = local_res8[0];
  if (lVar2 != 0) {
    local_30._0_4_ = local_res8[0];
    local_18 = 0;
    local_30[4] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    TAttribute<float>::operator=((TAttribute<float> *)(lVar2 + 0x248),(TAttribute<float> *)local_30)
    ;
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

