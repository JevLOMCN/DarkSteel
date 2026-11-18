// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 11

// StaticClass @ 14a787420

UClass * __cdecl UAnalogSlider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnalogSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"AnalogSlider",
               &Z_Registration_Info_UClass_UAnalogSlider.InnerSingleton,
               StaticRegisterNativesUAnalogSlider,0x700,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAnalogSlider>,
               InternalVTableHelperCtorCaller<UAnalogSlider>,local_res8,USlider::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnalogSlider.InnerSingleton;
}

// UAnalogSlider @ 14a7ab370

UAnalogSlider * __thiscall UAnalogSlider::UAnalogSlider(UAnalogSlider *this,FVTableHelper *param_1)

{
  USlider::USlider((USlider *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&this->OnAnalogCapture = 0;
  *(undefined8 *)&(this->OnAnalogCapture).field_0x8 = 0;
  *(undefined8 *)&(this->OnAnalogCapture).field_0x10 = 0;
  (this->MyAnalogSlider).Object = (SAnalogSlider *)0x0;
  (this->MyAnalogSlider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UAnalogSlider @ 14a7ab3d0

UAnalogSlider * __thiscall
UAnalogSlider::UAnalogSlider(UAnalogSlider *this,FObjectInitializer *param_1)

{
  FLinearColor_u_0 local_18;
  
  USlider::USlider((USlider *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&this->OnAnalogCapture = 0;
  *(undefined8 *)&(this->OnAnalogCapture).field_0x8 = 0;
  *(undefined8 *)&(this->OnAnalogCapture).field_0x10 = 0;
  (this->MyAnalogSlider).Object = (SAnalogSlider *)0x0;
  (this->MyAnalogSlider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  USlider::SetOrientation((USlider *)this,Orient_Horizontal);
  local_18 = FLinearColor::White.field0_0x0;
  USlider::SetSliderBarColor((USlider *)this,(FLinearColor *)&local_18._s_0);
  local_18 = FLinearColor::White.field0_0x0;
  USlider::SetSliderHandleColor((USlider *)this,(FLinearColor *)&local_18._s_0);
  USlider::SetStepSize((USlider *)this,__real_3c23d70a);
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  return this;
}

// ~UAnalogSlider @ 14a7b1a90

void __thiscall UAnalogSlider::~UAnalogSlider(UAnalogSlider *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyAnalogSlider).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnAnalogCapture).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAnalogCapture);
  USlider::~USlider((USlider *)this);
  return;
}

// GetPrivateStaticClass @ 14a7e4640

UClass * __cdecl UAnalogSlider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnalogSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"AnalogSlider",
               &Z_Registration_Info_UClass_UAnalogSlider.InnerSingleton,
               StaticRegisterNativesUAnalogSlider,0x700,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAnalogSlider>,
               InternalVTableHelperCtorCaller<UAnalogSlider>,local_res8,USlider::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnalogSlider.InnerSingleton;
}

// HandleInputMethodChanged @ 14a7ecf40

void __thiscall
UAnalogSlider::HandleInputMethodChanged(UAnalogSlider *this,ECommonInputType param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->MyAnalogSlider).Object == (SAnalogSlider *)0x0) {
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
  ((this->MyAnalogSlider).Object)->bIsUsingGamepad = param_1 == Gamepad;
  return;
}

// HandleOnAnalogCapture @ 14a7ee260

void __thiscall UAnalogSlider::HandleOnAnalogCapture(UAnalogSlider *this,float param_1)

{
  FOnFloatValueChangedEvent_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnAnalogCapture,param_1)
  ;
  return;
}

// RebuildWidget @ 14a8051e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UAnalogSlider::RebuildWidget(UAnalogSlider *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedPtr<SAnalogSlider,1> *pTVar1;
  SAnalogSlider *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  ECommonInputType EVar8;
  FArguments *pFVar9;
  FSliderStyle *pFVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TSharedRef<SAnalogSlider,1> *pTVar13;
  ULocalPlayer *pUVar14;
  UCommonInputSubsystem *this_00;
  TSharedRef<SWidget,1> *pTVar15;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  UAnalogSlider *local_res18;
  UAnalogSlider *local_res20;
  undefined1 local_648 [24];
  FDelegateAllocation local_630;
  undefined1 local_620 [8];
  FDelegateAllocation local_618;
  undefined1 local_608 [8];
  FDelegateAllocation local_600;
  undefined1 local_5f0 [8];
  FDelegateAllocation local_5e8;
  undefined1 local_5d8 [8];
  FDelegateAllocation local_5d0;
  undefined1 local_5c0 [8];
  FDelegateAllocation local_5b8;
  TSharedRef<SAnalogSlider,1> local_5a8;
  SAnalogSlider *local_598;
  FSharedReferencer<1> local_590;
  SAnalogSlider *local_588;
  FSharedReferencer<1> local_580;
  code *local_578;
  undefined8 uStack_570;
  UAnalogSlider *local_568;
  UAnalogSlider *local_560;
  UAnalogSlider *local_558;
  UAnalogSlider *local_550;
  FName local_548;
  FMemScope local_540;
  FDestructionSentinel local_538;
  FDestructionSentinel local_520;
  FDestructionSentinel local_508;
  FDestructionSentinel local_4f0;
  FDestructionSentinel local_4d8;
  FDestructionSentinel local_4c0;
  FDestructionSentinel local_4a8;
  FDelegateAllocation *local_490;
  FDestructionSentinel local_488;
  FDelegateAllocation *local_470;
  FDestructionSentinel local_468;
  FDelegateAllocation *local_450;
  FDestructionSentinel local_448;
  FDelegateAllocation *local_430;
  FDestructionSentinel local_428;
  FDelegateAllocation *local_410;
  FDestructionSentinel local_408;
  FDelegateAllocation *local_3f0;
  TSlateDecl<SAnalogSlider,RequiredArgs::T0RequiredArgs> local_3e8;
  FArguments local_3d0;
  
  pFVar9 = SAnalogSlider::FArguments::FArguments(&local_3d0);
  pFVar10 = USlider::GetWidgetStyle((USlider *)this);
  pFVar9->_Style = pFVar10;
  pFVar9->_IsFocusable = *(bool *)((longlong)&this->_padding_ + 4);
  local_648._12_4_ = local_5a8.SharedReferenceCount.ReferenceController._4_4_;
  local_648._0_8_ = USlider::HandleOnMouseCaptureBegin;
  local_648._8_4_ = 0;
  local_5c0 = (undefined1  [8])0x0;
  local_5b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_5b8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5c0,
             (FWriteAccessScope *)&local_4a8);
  local_490 = &local_5b8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_5b8);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUAnalogSlider____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_res18 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res18);
    puVar11[4] = local_648._0_8_;
    puVar11[5] = CONCAT44(local_648._12_4_,local_648._8_4_);
  }
  if (local_4a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4a8.Accessor,&local_4a8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnMouseCaptureBegin,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5c0);
  local_648._8_4_ = 0;
  local_648._0_8_ = USlider::HandleOnMouseCaptureEnd;
  local_648._12_4_ = local_5a8.SharedReferenceCount.ReferenceController._4_4_;
  local_5d8 = (undefined1  [8])0x0;
  local_5d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_5d0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5d8,
             (FWriteAccessScope *)&local_488);
  local_470 = &local_5d0;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_5d0);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUAnalogSlider____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res20);
    puVar11[4] = local_648._0_8_;
    puVar11[5] = CONCAT44(local_648._12_4_,local_648._8_4_);
  }
  if (local_488.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_488.Accessor,&local_488);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnMouseCaptureEnd,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5d8);
  local_648._8_4_ = 0;
  local_648._0_8_ = USlider::HandleOnControllerCaptureBegin;
  local_648._12_4_ = local_5a8.SharedReferenceCount.ReferenceController._4_4_;
  local_5f0 = (undefined1  [8])0x0;
  local_5e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_5e8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5f0,
             (FWriteAccessScope *)&local_468);
  local_450 = &local_5e8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_5e8);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUAnalogSlider____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_568 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_568);
    puVar11[4] = local_648._0_8_;
    puVar11[5] = CONCAT44(local_648._12_4_,local_648._8_4_);
  }
  if (local_468.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_468.Accessor,&local_468);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnControllerCaptureBegin,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5f0);
  local_648._8_4_ = 0;
  local_648._0_8_ = USlider::HandleOnControllerCaptureEnd;
  local_648._12_4_ = local_5a8.SharedReferenceCount.ReferenceController._4_4_;
  local_608 = (undefined1  [8])0x0;
  local_600.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_600.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_608,
             (FWriteAccessScope *)&local_448);
  local_430 = &local_600;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_600);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUAnalogSlider____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_560 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_560);
    puVar11[4] = local_648._0_8_;
    puVar11[5] = CONCAT44(local_648._12_4_,local_648._8_4_);
  }
  if (local_448.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_448.Accessor,&local_448);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnControllerCaptureEnd,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_608);
  local_648._8_4_ = 0;
  local_648._0_8_ = USlider::HandleOnValueChanged;
  local_648._12_4_ = local_5a8.SharedReferenceCount.ReferenceController._4_4_;
  local_620 = (undefined1  [8])0x0;
  local_618.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_618.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_620,
             (FWriteAccessScope *)&local_428);
  local_410 = &local_618;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_618);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUAnalogSlider____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_558 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_558);
    puVar11[4] = local_648._0_8_;
    puVar11[5] = CONCAT44(local_648._12_4_,local_648._8_4_);
  }
  if (local_428.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_428.Accessor,&local_428);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnValueChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_620);
  local_648._8_4_ = 0;
  local_648._0_8_ = HandleOnAnalogCapture;
  local_648._12_4_ = local_5a8.SharedReferenceCount.ReferenceController._4_4_;
  local_648._16_8_ = 0;
  local_630.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_630.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_648 + 0x10),
             (FWriteAccessScope *)&local_408);
  local_3f0 = &local_630;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_630);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUAnalogSlider____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_550 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_550);
    puVar11[4] = local_648._0_8_;
    puVar11[5] = CONCAT44(local_648._12_4_,local_648._8_4_);
  }
  if (local_408.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_408.Accessor,&local_408);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnAnalogCapture,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)(local_648 + 0x10));
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_548 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_540,&local_548,true);
  TSlateDecl<SAnalogSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAnalogSlider,RequiredArgs::T0RequiredArgs>
            (&local_3e8,"SAnalogSlider",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\AnalogSlider.cpp"
             ,0x1b,local_res8);
  FMemScope::~FMemScope(&local_540);
  FLLMScope::~FLLMScope(local_res10);
  pTVar13 = TSlateDecl<SAnalogSlider,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3e8,&local_5a8,pFVar9);
  local_590.ReferenceController = (pTVar13->SharedReferenceCount).ReferenceController;
  local_598 = pTVar13->Object;
  if (local_590.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_590.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_590.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->MyAnalogSlider;
  if (pTVar1 != (TSharedPtr<SAnalogSlider,1> *)&local_598) {
    pTVar1->Object = local_598;
    local_598 = (SAnalogSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyAnalogSlider).SharedReferenceCount,&local_590);
  }
  FVar6.ReferenceController = local_590.ReferenceController;
  local_580.ReferenceController = (this->MyAnalogSlider).SharedReferenceCount.ReferenceController;
  local_588 = pTVar1->Object;
  if (local_580.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_580.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_580.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SAnalogSlider **)&this->_padding_ != &local_588) {
    this->_padding_ = (longlong)local_588;
    local_588 = (SAnalogSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_580);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_580.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_5a8.SharedReferenceCount.ReferenceController._4_4_,
                      local_5a8.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3e8._Widget.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_648 + 0x10),
             (FWriteAccessScope *)&local_538);
  if ((local_630.DelegateSize != 0) &&
     (local_630.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_630.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_630,0,0,0x10);
    local_630.DelegateSize = 0;
  }
  if (local_538.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_538.Accessor,&local_538);
  }
  if (local_630.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_630.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_648 + 0x10));
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_620,
             (FWriteAccessScope *)&local_520);
  if ((local_618.DelegateSize != 0) &&
     (local_618.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_618.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_618,0,0,0x10);
    local_618.DelegateSize = 0;
  }
  if (local_520.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_520.Accessor,&local_520);
  }
  if (local_618.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_618.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_620);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_608,
             (FWriteAccessScope *)&local_508);
  if ((local_600.DelegateSize != 0) &&
     (local_600.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_600.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_600,0,0,0x10);
    local_600.DelegateSize = 0;
  }
  if (local_508.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_508.Accessor,&local_508);
  }
  if (local_600.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_600.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_608);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5f0,
             (FWriteAccessScope *)&local_4f0);
  if ((local_5e8.DelegateSize != 0) &&
     (local_5e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_5e8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_5e8,0,0,0x10);
    local_5e8.DelegateSize = 0;
  }
  if (local_4f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4f0.Accessor,&local_4f0);
  }
  if (local_5e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_5e8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5d8,
             (FWriteAccessScope *)&local_4d8);
  if ((local_5d0.DelegateSize != 0) &&
     (local_5d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_5d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_5d0,0,0,0x10);
    local_5d0.DelegateSize = 0;
  }
  if (local_4d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4d8.Accessor,&local_4d8);
  }
  if (local_5d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_5d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5c0,
             (FWriteAccessScope *)&local_4c0);
  if ((local_5b8.DelegateSize != 0) &&
     (local_5b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_5b8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_5b8,0,0,0x10);
    local_5b8.DelegateSize = 0;
  }
  if (local_4c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4c0.Accessor,&local_4c0);
  }
  if (local_5b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_5b8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5c0);
  SAnalogSlider::FArguments::~FArguments(&local_3d0);
  pUVar14 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
  this_00 = UCommonInputSubsystem::Get(pUVar14);
  if (this_00 != (UCommonInputSubsystem *)0x0) {
    if ((this->MyAnalogSlider).Object == (SAnalogSlider *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar15 = (TSharedRef<SWidget,1> *)(*pcVar5)();
        return pTVar15;
      }
    }
    pSVar2 = (this->MyAnalogSlider).Object;
    EVar8 = UCommonInputSubsystem::GetCurrentInputType(this_00);
    uStack_570 = (ulonglong)uStack_570._4_4_ << 0x20;
    pSVar2->bIsUsingGamepad = EVar8 == Gamepad;
    local_578 = HandleInputMethodChanged;
    TMulticastDelegateRegistration<void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>::
    AddUObject<UAnalogSlider>
              (&this_00->OnInputMethodChangedNative,(UAnalogSlider *)local_648,(pmf_234438fb *)this)
    ;
  }
  if (this->_padding_ == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar15 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar15;
    }
  }
  pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
  pSVar4 = (SWidget *)this->_padding_;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar4 == (SWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar15 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar15;
    }
  }
  __return_storage_ptr__->Object = pSVar4;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 14a8117d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAnalogSlider::ReleaseSlateResources(UAnalogSlider *this,bool param_1)

{
  ULocalPlayer *pUVar1;
  UCommonInputSubsystem *pUVar2;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  USlider::ReleaseSlateResources((USlider *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyAnalogSlider != (TSharedPtr<SAnalogSlider,1> *)&local_18) {
    (this->MyAnalogSlider).Object = (SAnalogSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyAnalogSlider).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  pUVar1 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
  pUVar2 = UCommonInputSubsystem::Get(pUVar1);
  if (pUVar2 != (UCommonInputSubsystem *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnInputMethodChangedNative,this);
    return;
  }
  return;
}

// StaticRegisterNativesUAnalogSlider @ 14a81e230

void __cdecl UAnalogSlider::StaticRegisterNativesUAnalogSlider(void)

{
  return;
}

// SynchronizeProperties @ 14a81fca0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAnalogSlider::SynchronizeProperties(UAnalogSlider *this)

{
  SSlider *this_00;
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  TAttribute<float> *pTVar4;
  FName FStackX_8;
  undefined1 auStack_188 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_180;
  ForAnyElementType FStack_178;
  ulonglong uStack_170;
  float fStack_168;
  undefined1 uStack_164;
  undefined1 auStack_160 [24];
  TAttribute<bool> TStack_148;
  TAttribute<bool> TStack_128;
  TAttribute<float> TStack_108;
  FDestructionSentinel FStack_e8;
  FLinearColor_u_0 FStack_d0;
  undefined1 uStack_c0;
  undefined1 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  FLinearColor_u_0 FStack_a0;
  undefined1 uStack_90;
  undefined1 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  TAttribute<float> TStack_50;
  FReadAccessScope FStack_30;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  if (this->_padding_ != 0) {
    bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
    bVar2 = !bVar2;
    if (bVar2) {
      pTVar4 = (TAttribute<float> *)auStack_188;
      auStack_188._0_4_ = *(float *)&this->_padding_;
      TStack_180.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_178.Data = (FScriptContainerElement *)0x0;
      auStack_188[4] = true;
      uStack_170 = 0;
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
                 &FStack_30);
      FStackX_8 = (FName)this->_padding_;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_30);
      pUVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
      pTVar4 = TAttribute<float>::Create<UObject>((TAttribute<float> *)auStack_70,pUVar3,&FStackX_8)
      ;
    }
    fStack_168 = pTVar4->Value;
    uStack_164 = pTVar4->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_160,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar4->Getter);
    if (bVar2) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_180,(FWriteAccessScope *)&FStack_e8);
      if (((int)uStack_170 != 0) && (FStack_178.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_178.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_178,0,0,0x10);
        uStack_170 = uStack_170 & 0xffffffff00000000;
      }
      if (FStack_e8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_e8.Accessor,&FStack_e8);
      }
      if (FStack_178.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_178.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_180.AccessDetector);
    }
    if (!bVar2) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_68);
      if ((void *)auStack_68._8_8_ != (void *)0x0) {
        FMemory::Free((void *)auStack_68._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_68);
    }
    if (this->_padding_ == 0) {
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
    SSlider::SetOrientation((SSlider *)this->_padding_,(uint)(byte)this->_padding_);
    if (this->_padding_ == 0) {
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
    SSlider::SetMouseUsesStep((SSlider *)this->_padding_,*(bool *)((longlong)&this->_padding_ + 6));
    if (this->_padding_ == 0) {
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
    SSlider::SetRequiresControllerLock
              ((SSlider *)this->_padding_,*(bool *)((longlong)&this->_padding_ + 7));
    if (this->_padding_ == 0) {
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
    FStack_d0._0_8_ = *(undefined8 *)((longlong)&this->_padding_ + 4);
    FStack_d0._8_8_ = *(undefined8 *)((longlong)&this->_padding_ + 4);
    uStack_c0 = 0;
    uStack_bc = 1;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    SSlider::SetSliderBarColor
              ((SSlider *)this->_padding_,(TAttribute<FSlateColor> *)&FStack_d0._s_0);
    if (this->_padding_ == 0) {
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
    FStack_a0._0_8_ = *(undefined8 *)((longlong)&this->_padding_ + 4);
    FStack_a0._8_8_ = *(undefined8 *)((longlong)&this->_padding_ + 4);
    uStack_90 = 0;
    uStack_8c = 1;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    SSlider::SetSliderHandleColor
              ((SSlider *)this->_padding_,(TAttribute<FSlateColor> *)&FStack_a0._s_0);
    if (this->_padding_ == 0) {
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
    this_00 = (SSlider *)this->_padding_;
    TStack_50.Value = fStack_168;
    TStack_50.bIsSet = (bool)uStack_164;
    TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>
              (&TStack_50.Getter,
               (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_160);
    SSlider::SetValue(this_00,&TStack_50);
    if (this->_padding_ == 0) {
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
    SSlider::SetMinAndMaxValues
              ((SSlider *)this->_padding_,*(float *)&this->_padding_,
               *(float *)((longlong)&this->_padding_ + 4));
    if (this->_padding_ == 0) {
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
    TStack_148.Value = *(bool *)((longlong)&this->_padding_ + 5);
    TStack_148.Getter._16_8_ = 0;
    TStack_148.bIsSet = true;
    TStack_148.Getter._0_8_ = 0;
    TStack_148.Getter._8_8_ = 0;
    SSlider::SetLocked((SSlider *)this->_padding_,&TStack_148);
    if (this->_padding_ == 0) {
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
    TStack_128.Value = *(bool *)((longlong)&this->_padding_ + 4);
    TStack_128.Getter._16_8_ = 0;
    TStack_128.bIsSet = true;
    TStack_128.Getter._0_8_ = 0;
    TStack_128.Getter._8_8_ = 0;
    SSlider::SetIndentHandle((SSlider *)this->_padding_,&TStack_128);
    if (this->_padding_ == 0) {
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
    TStack_108.Value = *(float *)&this->_padding_;
    TStack_108.Getter._0_8_ = 0;
    TStack_108.Getter._8_8_ = 0;
    TStack_108.bIsSet = true;
    TStack_108.Getter._16_8_ = 0;
    SSlider::SetStepSize((SSlider *)this->_padding_,&TStack_108);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_160);
    if ((void *)auStack_160._8_8_ != (void *)0x0) {
      FMemory::Free((void *)auStack_160._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_160);
  }
  return;
}

