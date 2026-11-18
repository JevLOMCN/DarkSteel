// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 27

// StaticClass @ 14f0a2160

UClass * __cdecl USynth2DSlider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynth2DSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"Synth2DSlider",
               &Z_Registration_Info_UClass_USynth2DSlider.InnerSingleton,
               StaticRegisterNativesUSynth2DSlider,0x640,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USynth2DSlider>,
               InternalVTableHelperCtorCaller<USynth2DSlider>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynth2DSlider.InnerSingleton;
}

// USynth2DSlider @ 14f0bbaf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

USynth2DSlider * __thiscall
USynth2DSlider::USynth2DSlider(USynth2DSlider *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  *(undefined8 *)&this->ValueXDelegate = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&(this->ValueXDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ValueXDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ValueYDelegate = 0;
  *(undefined8 *)&(this->ValueYDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ValueYDelegate).field_0x10 = 0;
  FSynth2DSliderStyle::FSynth2DSliderStyle(&this->WidgetStyle);
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
  *(undefined8 *)&this->OnValueChangedX = 0;
  *(undefined8 *)&(this->OnValueChangedX).field_0x8 = 0;
  *(undefined8 *)&(this->OnValueChangedX).field_0x10 = 0;
  *(undefined8 *)&this->OnValueChangedY = 0;
  *(undefined8 *)&(this->OnValueChangedY).field_0x8 = 0;
  *(undefined8 *)&(this->OnValueChangedY).field_0x10 = 0;
  (this->MySlider).Object = (SSynth2DSlider *)0x0;
  (this->MySlider).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// USynth2DSlider @ 14f0bbbf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

USynth2DSlider * __thiscall
USynth2DSlider::USynth2DSlider(USynth2DSlider *this,FObjectInitializer *param_1)

{
  code *pcVar1;
  FLinearColor FVar2;
  FSlateStyleSet *this_00;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  USynth2DSlider *pUVar5;
  FSynth2DSliderStyle *pFVar6;
  FArguments local_348;
  
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  *(undefined8 *)&this->ValueXDelegate = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&(this->ValueXDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ValueXDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ValueYDelegate = 0;
  *(undefined8 *)&(this->ValueYDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ValueYDelegate).field_0x10 = 0;
  FSynth2DSliderStyle::FSynth2DSliderStyle(&this->WidgetStyle);
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
  *(undefined8 *)&this->OnValueChangedX = 0;
  *(undefined8 *)&(this->OnValueChangedX).field_0x8 = 0;
  *(undefined8 *)&(this->OnValueChangedX).field_0x10 = 0;
  *(undefined8 *)&this->OnValueChangedY = 0;
  *(undefined8 *)&(this->OnValueChangedY).field_0x8 = 0;
  *(undefined8 *)&(this->OnValueChangedY).field_0x10 = 0;
  (this->MySlider).Object = (SSynth2DSlider *)0x0;
  (this->MySlider).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FSynthSlateStyleSet::Initialize();
  FVar3 = FSynthSlateStyleSet::StyleInstance.SharedReferenceCount;
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
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (USynth2DSlider *)(*pcVar1)();
      return pUVar5;
    }
  }
  pFVar6 = FSynth2DSliderStyle::GetDefault();
  FSlateStyleSet::Set<FSynth2DSliderStyle>(this_00,FSynth2DSliderStyle::TypeName,pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  FVar2 = FLinearColor::White;
  this->StepSize = 0.01;
  (this->SliderHandleColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  SSynth2DSlider::FArguments::FArguments(&local_348);
  FSynth2DSliderStyle::operator=(&this->WidgetStyle,local_348._Style);
  this->IsFocusable = true;
  SSynth2DSlider::FArguments::~FArguments(&local_348);
  return this;
}

// ~USynth2DSlider @ 14f0c08a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USynth2DSlider::~USynth2DSlider(USynth2DSlider *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MySlider).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnValueChangedY).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChangedY);
  pvVar1 = *(void **)&(this->OnValueChangedX).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChangedX);
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
  FSynth2DSliderStyle::~FSynth2DSliderStyle(&this->WidgetStyle);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ValueYDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ValueXDelegate);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14f0dd500

UClass * __cdecl USynth2DSlider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynth2DSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"Synth2DSlider",
               &Z_Registration_Info_UClass_USynth2DSlider.InnerSingleton,
               StaticRegisterNativesUSynth2DSlider,0x640,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USynth2DSlider>,
               InternalVTableHelperCtorCaller<USynth2DSlider>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynth2DSlider.InnerSingleton;
}

// GetValue @ 14f0df210

TVector2<double> * __thiscall
USynth2DSlider::GetValue(USynth2DSlider *this,TVector2<double> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  SSynth2DSlider *pSVar3;
  code *pcVar4;
  bool bVar5;
  float *pfVar6;
  TVector2<double> *pTVar7;
  
  pSVar3 = (this->MySlider).Object;
  if (pSVar3 == (SSynth2DSlider *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
    return __return_storage_ptr__;
  }
  pfVar6 = TAttribute<float>::Get(&pSVar3->ValueAttributeX);
  fVar1 = *pfVar6;
  if ((this->MySlider).Object == (SSynth2DSlider *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector2<double> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pfVar6 = TAttribute<float>::Get(&((this->MySlider).Object)->ValueAttributeY);
  fVar2 = *pfVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar2;
  return __return_storage_ptr__;
}

// HandleOnControllerCaptureBegin @ 14f0df350

void __thiscall USynth2DSlider::HandleOnControllerCaptureBegin(USynth2DSlider *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnControllerCaptureBegin
             ,(void *)0x0);
  return;
}

// HandleOnControllerCaptureEnd @ 14f0df390

void __thiscall USynth2DSlider::HandleOnControllerCaptureEnd(USynth2DSlider *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnControllerCaptureEnd,
             (void *)0x0);
  return;
}

// HandleOnMouseCaptureBegin @ 14f0df3d0

void __thiscall USynth2DSlider::HandleOnMouseCaptureBegin(USynth2DSlider *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureBegin,
             (void *)0x0);
  return;
}

// HandleOnMouseCaptureEnd @ 14f0df420

void __thiscall USynth2DSlider::HandleOnMouseCaptureEnd(USynth2DSlider *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd,
             (void *)0x0);
  return;
}

// HandleOnValueChangedX @ 14f0df480

void __thiscall USynth2DSlider::HandleOnValueChangedX(USynth2DSlider *this,float param_1)

{
  float local_res10 [6];
  
  local_res10[0] = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnValueChangedX,
             local_res10);
  return;
}

// HandleOnValueChangedY @ 14f0df4b0

void __thiscall USynth2DSlider::HandleOnValueChangedY(USynth2DSlider *this,float param_1)

{
  float local_res10 [6];
  
  local_res10[0] = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnValueChangedY,
             local_res10);
  return;
}

// RebuildWidget @ 14f0f4d90

TSharedRef<SWidget,1> * __thiscall
USynth2DSlider::RebuildWidget(USynth2DSlider *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  SSynth2DSlider *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FArguments *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TSharedRef<SSynth2DSlider,1> *pTVar8;
  TSharedRef<SWidget,1> *pTVar9;
  TSharedPtr<SSynth2DSlider,1> *pTVar10;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  USynth2DSlider *local_res18;
  USynth2DSlider *local_res20;
  FMemScope local_5d8;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined1 local_5c8 [8];
  FDelegateAllocation local_5c0;
  undefined1 local_5b0 [8];
  FDelegateAllocation local_5a8;
  undefined1 local_598 [8];
  FDelegateAllocation local_590;
  undefined1 local_580 [8];
  FDelegateAllocation local_578;
  undefined1 local_568 [8];
  FDelegateAllocation local_560;
  undefined1 local_550 [8];
  FDelegateAllocation local_548;
  TSharedRef<SSynth2DSlider,1> local_538;
  SSynth2DSlider *local_528;
  FSharedReferencer<1> local_520;
  USynth2DSlider *local_518;
  USynth2DSlider *local_510;
  USynth2DSlider *local_508;
  USynth2DSlider *local_500;
  FName local_4f8;
  FDestructionSentinel local_4f0;
  FDestructionSentinel local_4d8;
  FDestructionSentinel local_4c0;
  FDestructionSentinel local_4a8;
  FDestructionSentinel local_490;
  FDestructionSentinel local_478;
  FDestructionSentinel local_460;
  FDelegateAllocation *local_448;
  FDestructionSentinel local_440;
  FDelegateAllocation *local_428;
  FDestructionSentinel local_420;
  FDelegateAllocation *local_408;
  FDestructionSentinel local_400;
  FDelegateAllocation *local_3e8;
  FDestructionSentinel local_3e0;
  FDelegateAllocation *local_3c8;
  FDestructionSentinel local_3c0;
  FDelegateAllocation *local_3a8;
  TSlateDecl<SSynth2DSlider,RequiredArgs::T0RequiredArgs> local_3a0;
  FArguments local_388;
  
  pFVar5 = SSynth2DSlider::FArguments::FArguments(&local_388);
  uStack_5d0 = 0;
  pFVar5->_Style = &this->WidgetStyle;
  pFVar5->_IsFocusable = this->IsFocusable;
  uStack_5cc = local_538.SharedReferenceCount.ReferenceController._4_4_;
  local_5d8 = (FMemScope)HandleOnMouseCaptureBegin;
  local_550 = (undefined1  [8])0x0;
  local_548.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_548.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_550,
             (FWriteAccessScope *)&local_460);
  local_448 = &local_548;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_548);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUSynth2DSlider____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar6[3] = 0;
    local_res18 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res18);
    *(FMemScope *)(puVar6 + 4) = local_5d8;
    puVar6[5] = CONCAT44(uStack_5cc,uStack_5d0);
  }
  if (local_460.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_460.Accessor,&local_460);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar5->_OnMouseCaptureBegin,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_550);
  uStack_5d0 = 0;
  local_5d8 = (FMemScope)HandleOnMouseCaptureEnd;
  uStack_5cc = local_538.SharedReferenceCount.ReferenceController._4_4_;
  local_568 = (undefined1  [8])0x0;
  local_560.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_560.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_568,
             (FWriteAccessScope *)&local_440);
  local_428 = &local_560;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_560);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUSynth2DSlider____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar6[3] = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res20);
    *(FMemScope *)(puVar6 + 4) = local_5d8;
    puVar6[5] = CONCAT44(uStack_5cc,uStack_5d0);
  }
  if (local_440.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_440.Accessor,&local_440);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar5->_OnMouseCaptureEnd,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_568);
  uStack_5d0 = 0;
  local_5d8 = (FMemScope)HandleOnControllerCaptureBegin;
  uStack_5cc = local_538.SharedReferenceCount.ReferenceController._4_4_;
  local_580 = (undefined1  [8])0x0;
  local_578.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_578.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_580,
             (FWriteAccessScope *)&local_420);
  local_408 = &local_578;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_578);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUSynth2DSlider____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar6[3] = 0;
    local_518 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_518);
    *(FMemScope *)(puVar6 + 4) = local_5d8;
    puVar6[5] = CONCAT44(uStack_5cc,uStack_5d0);
  }
  if (local_420.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_420.Accessor,&local_420);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar5->_OnControllerCaptureBegin,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_580);
  uStack_5d0 = 0;
  local_5d8 = (FMemScope)HandleOnControllerCaptureEnd;
  uStack_5cc = local_538.SharedReferenceCount.ReferenceController._4_4_;
  local_598 = (undefined1  [8])0x0;
  local_590.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_590.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_598,
             (FWriteAccessScope *)&local_400);
  local_3e8 = &local_590;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_590);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUSynth2DSlider____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar6[3] = 0;
    local_510 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_510);
    *(FMemScope *)(puVar6 + 4) = local_5d8;
    puVar6[5] = CONCAT44(uStack_5cc,uStack_5d0);
  }
  if (local_400.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_400.Accessor,&local_400);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar5->_OnControllerCaptureEnd,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_598);
  uStack_5d0 = 0;
  local_5d8 = (FMemScope)HandleOnValueChangedX;
  uStack_5cc = local_538.SharedReferenceCount.ReferenceController._4_4_;
  local_5b0 = (undefined1  [8])0x0;
  local_5a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_5a8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5b0,
             (FWriteAccessScope *)&local_3e0);
  local_3c8 = &local_5a8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_5a8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUSynth2DSlider____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar6[3] = 0;
    local_508 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_508);
    *(FMemScope *)(puVar6 + 4) = local_5d8;
    puVar6[5] = CONCAT44(uStack_5cc,uStack_5d0);
  }
  if (local_3e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e0.Accessor,&local_3e0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar5->_OnValueChangedX,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5b0);
  uStack_5d0 = 0;
  local_5d8 = (FMemScope)HandleOnValueChangedY;
  uStack_5cc = local_538.SharedReferenceCount.ReferenceController._4_4_;
  local_5c8 = (undefined1  [8])0x0;
  local_5c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_5c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5c8,
             (FWriteAccessScope *)&local_3c0);
  local_3a8 = &local_5c0;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_5c0);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUSynth2DSlider____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar6[3] = 0;
    local_500 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_500);
    *(FMemScope *)(puVar6 + 4) = local_5d8;
    puVar6[5] = CONCAT44(uStack_5cc,uStack_5d0);
  }
  if (local_3c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3c0.Accessor,&local_3c0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar5->_OnValueChangedY,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5c8);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4f8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5d8,&local_4f8,true);
  TSlateDecl<SSynth2DSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSynth2DSlider,RequiredArgs::T0RequiredArgs>
            (&local_3a0,"SSynth2DSlider",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\UI\\Synth2DSlider.cpp"
             ,0x19,local_res8);
  FMemScope::~FMemScope(&local_5d8);
  FLLMScope::~FLLMScope(local_res10);
  pTVar8 = TSlateDecl<SSynth2DSlider,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_3a0,&local_538,pFVar5);
  local_520.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
  local_528 = pTVar8->Object;
  if (local_520.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_520.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_520.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = &this->MySlider;
  if (pTVar10 != (TSharedPtr<SSynth2DSlider,1> *)&local_528) {
    pTVar10->Object = local_528;
    local_528 = (SSynth2DSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MySlider).SharedReferenceCount,&local_520);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_520.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_538.SharedReferenceCount.ReferenceController._4_4_,
                      local_538.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3a0._Widget.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5c8,
             (FWriteAccessScope *)&local_4f0);
  if ((local_5c0.DelegateSize != 0) &&
     (local_5c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_5c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_5c0,0,0,0x10);
    local_5c0.DelegateSize = 0;
  }
  if (local_4f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4f0.Accessor,&local_4f0);
  }
  if (local_5c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_5c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5b0,
             (FWriteAccessScope *)&local_4d8);
  if ((local_5a8.DelegateSize != 0) &&
     (local_5a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_5a8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_5a8,0,0,0x10);
    local_5a8.DelegateSize = 0;
  }
  if (local_4d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4d8.Accessor,&local_4d8);
  }
  if (local_5a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_5a8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_598,
             (FWriteAccessScope *)&local_4c0);
  if ((local_590.DelegateSize != 0) &&
     (local_590.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_590.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_590,0,0,0x10);
    local_590.DelegateSize = 0;
  }
  if (local_4c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4c0.Accessor,&local_4c0);
  }
  if (local_590.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_590.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_598);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_580,
             (FWriteAccessScope *)&local_4a8);
  if ((local_578.DelegateSize != 0) &&
     (local_578.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_578.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_578,0,0,0x10);
    local_578.DelegateSize = 0;
  }
  if (local_4a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4a8.Accessor,&local_4a8);
  }
  if (local_578.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_578.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_580);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_568,
             (FWriteAccessScope *)&local_490);
  if ((local_560.DelegateSize != 0) &&
     (local_560.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_560.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_560,0,0,0x10);
    local_560.DelegateSize = 0;
  }
  if (local_490.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_490.Accessor,&local_490);
  }
  if (local_560.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_560.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_568);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_550,
             (FWriteAccessScope *)&local_478);
  if ((local_548.DelegateSize != 0) &&
     (local_548.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_548.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_548,0,0,0x10);
    local_548.DelegateSize = 0;
  }
  if (local_478.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_478.Accessor,&local_478);
  }
  if (local_548.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_548.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_550);
  SSynth2DSlider::FArguments::~FArguments(&local_388);
  if (pTVar10->Object == (SSynth2DSlider *)0x0) {
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
  pTVar2 = (this->MySlider).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar1 == (SSynth2DSlider *)0x0) {
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

// ReleaseSlateResources @ 14f0f75d0

void __thiscall USynth2DSlider::ReleaseSlateResources(USynth2DSlider *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UVisual::ReleaseSlateResources((UVisual *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MySlider != (TSharedPtr<SSynth2DSlider,1> *)&local_18) {
    (this->MySlider).Object = (SSynth2DSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MySlider).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetIndentHandle @ 14f0fcc00

void __thiscall USynth2DSlider::SetIndentHandle(USynth2DSlider *this,bool param_1)

{
  SSynth2DSlider *pSVar1;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->IndentHandle = param_1;
  pSVar1 = (this->MySlider).Object;
  if (pSVar1 != (SSynth2DSlider *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    TAttribute<bool>::operator=(&pSVar1->IndentHandle,(TAttribute<bool> *)local_30);
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

// SetLocked @ 14f0fdb50

void __thiscall USynth2DSlider::SetLocked(USynth2DSlider *this,bool param_1)

{
  SSynth2DSlider *pSVar1;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->Locked = param_1;
  pSVar1 = (this->MySlider).Object;
  if (pSVar1 != (SSynth2DSlider *)0x0) {
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

// SetSliderHandleColor @ 14f101ec0

void __thiscall USynth2DSlider::SetSliderHandleColor(USynth2DSlider *this,FLinearColor *param_1)

{
  SSynth2DSlider *this_00;
  FLinearColor_u_0 local_48;
  uint local_38;
  uint local_18;
  
  local_48._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_48._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->SliderHandleColor).field0_0x0 = local_48._0_8_;
  *(undefined8 *)((longlong)&(this->SliderHandleColor).field0_0x0 + 8) = local_48._8_8_;
  this_00 = (this->MySlider).Object;
  if (this_00 != (SSynth2DSlider *)0x0) {
    local_18 = local_18 & 0xffffff00;
    local_38 = local_18;
    SSynth2DSlider::SetSliderHandleColor(this_00,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// SetStepSize @ 14f102360

void __thiscall USynth2DSlider::SetStepSize(USynth2DSlider *this,float param_1)

{
  SSynth2DSlider *pSVar1;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->StepSize = param_1;
  pSVar1 = (this->MySlider).Object;
  if (pSVar1 != (SSynth2DSlider *)0x0) {
    local_18 = 0;
    local_30[4] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30._0_4_ = param_1;
    TAttribute<float>::operator=(&pSVar1->StepSize,(TAttribute<float> *)local_30);
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

// SetValue @ 14f102ca0

void __thiscall USynth2DSlider::SetValue(USynth2DSlider *this,TVector2<double> *param_1)

{
  double dVar1;
  SSynth2DSlider *pSVar2;
  code *pcVar3;
  bool bVar4;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  undefined1 local_48 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_40;
  ForAnyElementType FStack_38;
  ulonglong local_30;
  undefined1 local_28 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  local_48._0_4_ = (undefined4)(param_1->field0_0x0)._s_0.X;
  this->ValueX = (float)local_48._0_4_;
  this->ValueY = (float)dVar1;
  pSVar2 = (this->MySlider).Object;
  if (pSVar2 != (SSynth2DSlider *)0x0) {
    local_48[4] = true;
    local_30 = 0;
    local_40.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_38.Data = (FScriptContainerElement *)0x0;
    TAttribute<float>::operator=(&pSVar2->ValueAttributeX,(TAttribute<float> *)local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_40,(FWriteAccessScope *)&local_78);
    if (((int)local_30 != 0) && (FStack_38.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_38.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_38,0,0,0x10);
      local_30 = local_30 & 0xffffffff00000000;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (FStack_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_40.AccessDetector);
    if ((this->MySlider).Object == (SSynth2DSlider *)0x0) {
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
    local_28._0_4_ = (undefined4)(param_1->field0_0x0)._s_0.Y;
    local_28[4] = true;
    local_10 = 0;
    local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_18.Data = (FScriptContainerElement *)0x0;
    TAttribute<float>::operator=
              (&((this->MySlider).Object)->ValueAttributeY,(TAttribute<float> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_20,(FWriteAccessScope *)&local_60);
    if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_18.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
      local_10 = local_10 & 0xffffffff00000000;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (FStack_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
  }
  return;
}

// StaticRegisterNativesUSynth2DSlider @ 14f103c40

void __cdecl USynth2DSlider::StaticRegisterNativesUSynth2DSlider(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_USynth2DSlider_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 14f104260

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USynth2DSlider::SynchronizeProperties(USynth2DSlider *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  UObject *pUVar5;
  TAttribute<float> *pTVar6;
  FName local_res8;
  FName local_res10;
  undefined1 local_248 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_240;
  ForAnyElementType FStack_238;
  ulonglong local_230;
  undefined1 local_228 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_220;
  ForAnyElementType FStack_218;
  ulonglong local_210;
  undefined1 local_208 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_200;
  ForAnyElementType FStack_1f8;
  ulonglong local_1f0;
  undefined1 local_1e8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1e0;
  ForAnyElementType FStack_1d8;
  ulonglong local_1d0;
  undefined1 local_1c8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1c0;
  ForAnyElementType FStack_1b8;
  ulonglong local_1b0;
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [24];
  undefined1 local_188 [8];
  undefined1 local_180 [24];
  FDestructionSentinel local_168;
  FDestructionSentinel local_150;
  FDestructionSentinel local_138;
  FDestructionSentinel local_120;
  FDestructionSentinel local_108;
  FDestructionSentinel local_f0;
  FDestructionSentinel local_d8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  uint local_b0;
  FLinearColor_u_0 local_a8;
  uint local_98;
  undefined1 local_88 [8];
  undefined1 local_80 [24];
  undefined1 local_68 [8];
  undefined1 local_60 [24];
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  
  bVar4 = false;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  UWidget::SynchronizeProperties((UWidget *)this);
  bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->ValueXDelegate);
  if (bVar3) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ValueXDelegate,
               &local_48);
    local_res8.ComparisonIndex.Value = *(uint *)&(this->ValueXDelegate).field_0x10;
    local_res8.Number = *(uint *)&(this->ValueXDelegate).field_0x14;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ValueXDelegate,
               (FWriteAccessScope *)&local_168);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(this->ValueXDelegate).field_0x8);
    if (local_168.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
    }
    pTVar6 = TAttribute<float>::Create<UObject>((TAttribute<float> *)local_88,pUVar5,&local_res8);
    bVar2 = true;
    bVar3 = false;
  }
  else {
    pTVar6 = (TAttribute<float> *)local_248;
    local_248._0_4_ = this->ValueX;
    local_240.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_238.Data = (FScriptContainerElement *)0x0;
    local_248[4] = true;
    bVar2 = false;
    bVar3 = true;
    local_230 = 0;
  }
  local_188._0_4_ = pTVar6->Value;
  local_188[4] = pTVar6->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_180,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar6->Getter);
  if (bVar3) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_240,(FWriteAccessScope *)&local_150);
    if (((int)local_230 != 0) && (FStack_238.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_238.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_238,0,0,0x10);
      local_230 = local_230 & 0xffffffff00000000;
    }
    if (local_150.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_150.Accessor,&local_150);
    }
    if (FStack_238.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_238.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_240.AccessDetector);
  }
  if (bVar2) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_80);
    if ((void *)local_80._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_80._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_80);
  }
  bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->ValueYDelegate);
  if (bVar3) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ValueYDelegate,
               &local_30);
    local_res10.ComparisonIndex.Value = *(uint *)&(this->ValueYDelegate).field_0x10;
    local_res10.Number = *(uint *)&(this->ValueYDelegate).field_0x14;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ValueYDelegate,
               (FWriteAccessScope *)&local_138);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(this->ValueYDelegate).field_0x8);
    if (local_138.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
    }
    pTVar6 = TAttribute<float>::Create<UObject>((TAttribute<float> *)local_68,pUVar5,&local_res10);
    bVar3 = true;
  }
  else {
    pTVar6 = (TAttribute<float> *)local_228;
    local_228._0_4_ = this->ValueY;
    local_220.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_218.Data = (FScriptContainerElement *)0x0;
    local_228[4] = true;
    bVar3 = false;
    local_210 = 0;
    bVar4 = true;
  }
  local_1a8._0_4_ = pTVar6->Value;
  local_1a8[4] = pTVar6->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a0,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar6->Getter);
  if (bVar4) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_220,(FWriteAccessScope *)&local_120);
    if (((int)local_210 != 0) && (FStack_218.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_218.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_218,0,0,0x10);
      local_210 = local_210 & 0xffffffff00000000;
    }
    if (local_120.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_120.Accessor,&local_120);
    }
    if (FStack_218.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_218.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_220.AccessDetector);
  }
  if (bVar3) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
    if ((void *)local_60._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_60._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_60);
  }
  if ((this->MySlider).Object == (SSynth2DSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_c0 = *(undefined8 *)&(this->SliderHandleColor).field0_0x0;
  uStack_b8 = *(undefined8 *)((longlong)&(this->SliderHandleColor).field0_0x0 + 8);
  local_b0 = local_b0 & 0xffffff00;
  local_98 = local_b0;
  local_a8._0_8_ = local_c0;
  local_a8._8_8_ = uStack_b8;
  SSynth2DSlider::SetSliderHandleColor((this->MySlider).Object,(FSlateColor *)&local_a8._s_0);
  if ((this->MySlider).Object == (SSynth2DSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAttribute<float>::operator=
            (&((this->MySlider).Object)->ValueAttributeX,(TAttribute<float> *)local_188);
  if ((this->MySlider).Object == (SSynth2DSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAttribute<float>::operator=
            (&((this->MySlider).Object)->ValueAttributeY,(TAttribute<float> *)local_1a8);
  if ((this->MySlider).Object == (SSynth2DSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_208[0] = this->Locked;
  local_208[1] = true;
  local_1f0 = 0;
  local_200.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1f8.Data = (FScriptContainerElement *)0x0;
  TAttribute<bool>::operator=
            (&((this->MySlider).Object)->LockedAttribute,(TAttribute<bool> *)local_208);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_200,(FWriteAccessScope *)&local_108);
  if (((int)local_1f0 != 0) && (FStack_1f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1f8,0,0,0x10);
    local_1f0 = local_1f0 & 0xffffffff00000000;
  }
  if (local_108.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
  }
  if (FStack_1f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_200.AccessDetector);
  if ((this->MySlider).Object == (SSynth2DSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_1e8[0] = this->IndentHandle;
  local_1e8[1] = true;
  local_1d0 = 0;
  local_1e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1d8.Data = (FScriptContainerElement *)0x0;
  TAttribute<bool>::operator=
            (&((this->MySlider).Object)->IndentHandle,(TAttribute<bool> *)local_1e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1e0,(FWriteAccessScope *)&local_f0);
  if (((int)local_1d0 != 0) && (FStack_1d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1d8,0,0,0x10);
    local_1d0 = local_1d0 & 0xffffffff00000000;
  }
  if (local_f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
  }
  if (FStack_1d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1e0.AccessDetector);
  if ((this->MySlider).Object == (SSynth2DSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_1c8._0_4_ = this->StepSize;
  local_1c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1b8.Data = (FScriptContainerElement *)0x0;
  local_1c8[4] = true;
  local_1b0 = 0;
  TAttribute<float>::operator=(&((this->MySlider).Object)->StepSize,(TAttribute<float> *)local_1c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1c0,(FWriteAccessScope *)&local_d8);
  if (((int)local_1b0 != 0) && (FStack_1b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1b8,0,0,0x10);
    local_1b0 = local_1b0 & 0xffffffff00000000;
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  if (FStack_1b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1c0.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a0);
  if ((void *)local_1a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_180);
  if ((void *)local_180._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_180._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_180);
  return;
}

// execGetValue @ 14f10c980

void __cdecl USynth2DSlider::execGetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  float *pfVar5;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x27].field_0x18 == 0) {
    *(TVector2<double>_u_0 *)param_3 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    return;
  }
  pfVar5 = TAttribute<float>::Get
                     ((TAttribute<float> *)(*(longlong *)&param_1[0x27].field_0x18 + 0x2c8));
  fVar1 = *pfVar5;
  if (*(longlong *)&param_1[0x27].field_0x18 == 0) {
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
  pfVar5 = TAttribute<float>::Get
                     ((TAttribute<float> *)(*(longlong *)&param_1[0x27].field_0x18 + 0x2e8));
  auVar3._8_4_ = SUB84((double)*pfVar5,0);
  auVar3._0_8_ = (double)fVar1;
  auVar3._12_4_ = (int)((ulonglong)(double)*pfVar5 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar3;
  return;
}

// execSetIndentHandle @ 14f111c90

void __cdecl USynth2DSlider::execSetIndentHandle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  param_1[0x23].field_0x18 = local_30[0];
  if (*(longlong *)&param_1[0x27].field_0x18 != 0) {
    local_30[1] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    TAttribute<bool>::operator=
              ((TAttribute<bool> *)(*(longlong *)&param_1[0x27].field_0x18 + 0x220),
               (TAttribute<bool> *)local_30);
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

// execSetLocked @ 14f112810

void __cdecl USynth2DSlider::execSetLocked(UObject *param_1,FFrame *param_2,void *param_3)

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
  lVar2 = *(longlong *)&param_1[0x27].field_0x18;
  param_1[0x23].field_0x19 = local_30[0];
  if (lVar2 != 0) {
    local_30[1] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    TAttribute<bool>::operator=((TAttribute<bool> *)(lVar2 + 0x240),(TAttribute<bool> *)local_30);
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

// execSetSliderHandleColor @ 14f116e30

void __cdecl
USynth2DSlider::execSetSliderHandleColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SSynth2DSlider *this;
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
  this = *(SSynth2DSlider **)&param_1[0x27].field_0x18;
  *(undefined8 *)&param_1[0x23].field_0x8 = local_58;
  *(undefined8 *)&param_1[0x23].field_0x10 = uStack_50;
  if (this != (SSynth2DSlider *)0x0) {
    local_18 = local_18 & 0xffffff00;
    local_38 = local_18;
    local_48._0_8_ = local_58;
    local_48._8_8_ = uStack_50;
    SSynth2DSlider::SetSliderHandleColor(this,(FSlateColor *)&local_48._s_0);
  }
  return;
}

// execSetStepSize @ 14f117500

void __cdecl USynth2DSlider::execSetStepSize(UObject *param_1,FFrame *param_2,void *param_3)

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
  lVar2 = *(longlong *)&param_1[0x27].field_0x18;
  *(float *)&param_1[0x23].field_0x1c = local_res8[0];
  if (lVar2 != 0) {
    local_30._0_4_ = local_res8[0];
    local_18 = 0;
    local_30[4] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    TAttribute<float>::operator=((TAttribute<float> *)(lVar2 + 0x308),(TAttribute<float> *)local_30)
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

// execSetValue @ 14f118130

void __cdecl USynth2DSlider::execSetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  local_18._s_0.X = local_28;
  local_18._s_0.Y = dStack_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetValue((USynth2DSlider *)param_1,(TVector2<double> *)&local_18._s_0);
  return;
}

