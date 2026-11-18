// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b599540

UClass * __cdecl UDS_Slider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_Slider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_Slider",
               &Z_Registration_Info_UClass_UDS_Slider.InnerSingleton,StaticRegisterNativesUDS_Slider
               ,0x720,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDS_Slider>,
               InternalVTableHelperCtorCaller<UDS_Slider>,local_res8,USlider::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_Slider.InnerSingleton;
}

// UDS_Slider @ 14b59ca30

UDS_Slider * __thiscall UDS_Slider::UDS_Slider(UDS_Slider *this,FVTableHelper *param_1)

{
  USlider::USlider((USlider *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&(this->OnHovered).Delegate = 0;
  *(undefined8 *)&(this->OnHovered).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnHovered).Delegate.field_0x10 = 0;
  (this->OnUnhovered)._padding_ = '\0';
  (this->OnUnhovered).bIsCustomSelected = false;
  (this->OnUnhovered).bIsLacked = false;
  (this->OnUnhovered).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnUnhovered).Delegate = 0;
  *(undefined8 *)&(this->OnUnhovered).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnUnhovered).Delegate.field_0x10 = 0;
  (this->OnHovered)._padding_ = '\0';
  (this->OnHovered).bIsCustomSelected = false;
  (this->OnHovered).bIsLacked = false;
  (this->OnHovered).bIsCustomDisabled = false;
  return this;
}

// ~UDS_Slider @ 14b59d300

void __thiscall UDS_Slider::~UDS_Slider(UDS_Slider *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnUnhovered).Delegate);
  pvVar1 = *(void **)&(this->OnUnhovered).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnUnhovered).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnHovered).Delegate);
  pvVar1 = *(void **)&(this->OnHovered).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnHovered).Delegate);
  USlider::~USlider((USlider *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b59dd50

IClassDescriptor * __thiscall UDS_Slider::GetFieldNotificationDescriptor(UDS_Slider *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_Slider::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b59de80

UClass * __cdecl UDS_Slider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_Slider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_Slider",
               &Z_Registration_Info_UClass_UDS_Slider.InnerSingleton,StaticRegisterNativesUDS_Slider
               ,0x720,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDS_Slider>,
               InternalVTableHelperCtorCaller<UDS_Slider>,local_res8,USlider::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_Slider.InnerSingleton;
}

// StaticRegisterNativesUDS_Slider @ 14b59e510

void __cdecl UDS_Slider::StaticRegisterNativesUDS_Slider(void)

{
  return;
}

// UDS_Slider @ 14bc84210

UDS_Slider * __thiscall UDS_Slider::UDS_Slider(UDS_Slider *this,FObjectInitializer *param_1)

{
  USlider::USlider((USlider *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&(this->OnHovered).Delegate = 0;
  *(undefined8 *)&(this->OnHovered).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnHovered).Delegate.field_0x10 = 0;
  (this->OnUnhovered)._padding_ = '\0';
  (this->OnUnhovered).bIsCustomSelected = false;
  (this->OnUnhovered).bIsLacked = false;
  (this->OnUnhovered).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnUnhovered).Delegate = 0;
  *(undefined8 *)&(this->OnUnhovered).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnUnhovered).Delegate.field_0x10 = 0;
  (this->OnHovered)._padding_ = '\0';
  (this->OnHovered).bIsCustomSelected = false;
  (this->OnHovered).bIsLacked = false;
  (this->OnHovered).bIsCustomDisabled = false;
  return this;
}

// BeginDestroy @ 14bc87e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_Slider::BeginDestroy(UDS_Slider *this)

{
  UWorld *pUVar1;
  UGameViewportSubsystem *this_00;
  
  if ((this->field_0xf9 & 0x20) != 0) {
    pUVar1 = (UWorld *)(**(code **)(*(longlong *)this + 0x180))();
    this_00 = UGameViewportSubsystem::Get(pUVar1);
    if (this_00 != (UGameViewportSubsystem *)0x0) {
      UGameViewportSubsystem::RemoveWidget(this_00,(UWidget *)this);
    }
  }
  UObject::BeginDestroy((UObject *)this);
                    /* WARNING: Could not recover jumptable at 0x0001469a3148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2b0))(this,0);
  return;
}

// HandleMouseEnter @ 14bca2ea0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_Slider::HandleMouseEnter(UDS_Slider *this)

{
  FFieldId local_18 [2];
  
  local_18[0].FieldName = FFieldNotificationClassDescriptor::OnHovered.FieldName;
  local_18[0].BitNumber = FFieldNotificationClassDescriptor::OnHovered.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->field_0x28,local_18);
  return;
}

// HandleMouseLeave @ 14bca2ee0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_Slider::HandleMouseLeave(UDS_Slider *this)

{
  FFieldId local_18 [2];
  
  local_18[0].FieldName = FFieldNotificationClassDescriptor::OnUnhovered.FieldName;
  local_18[0].BitNumber = FFieldNotificationClassDescriptor::OnUnhovered.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->field_0x28,local_18);
  return;
}

// RebuildWidget @ 14bcc1090

TSharedRef<SWidget,1> * __thiscall
UDS_Slider::RebuildWidget(UDS_Slider *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  code *pcVar2;
  UDS_SSlider *pUVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  FArguments *pFVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  TSharedRef<SWidget,1> *pTVar11;
  atomic<int> *paVar12;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  UDS_Slider *local_res18;
  UDS_Slider *local_res20;
  UDS_Slider *local_668;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined1 local_658 [8];
  FDelegateAllocation local_650;
  undefined1 local_640 [8];
  FDelegateAllocation local_638;
  undefined1 local_628 [8];
  FDelegateAllocation local_620;
  undefined1 local_610 [8];
  FDelegateAllocation local_608;
  undefined1 local_5f8 [8];
  FDelegateAllocation local_5f0;
  undefined1 local_5e0 [8];
  FDelegateAllocation local_5d8;
  undefined1 local_5c8 [8];
  FDelegateAllocation local_5c0;
  TSlateDecl<UDS_SSlider,RequiredArgs::T0RequiredArgs> local_5b0;
  UDS_Slider *local_598;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  UDS_SSlider *local_588;
  FSharedReferencer<1> local_580;
  UDS_Slider *local_578;
  UDS_Slider *local_570;
  UDS_Slider *local_568;
  FName local_560;
  FMemScope local_558;
  FDestructionSentinel local_550;
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
  FDestructionSentinel local_3e8;
  FDelegateAllocation *local_3d0;
  FArguments local_3c8;
  
  pFVar8 = SSlider::FArguments::FArguments(&local_3c8);
  uStack_660 = 0;
  pFVar8->_Style = (FSliderStyle *)&this->field_0x1e0;
  pFVar8->_IsFocusable = (bool)this->field_0x64c;
  local_668 = (UDS_Slider *)USlider::HandleOnMouseCaptureBegin;
  local_5f8 = (undefined1  [8])0x0;
  local_5f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_5f0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5f8,
             (FWriteAccessScope *)&local_4a8);
  local_490 = &local_5f0;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_5f0);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_Slider____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_res18 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res18);
    puVar9[4] = local_668;
    puVar9[5] = CONCAT44(uStack_65c,uStack_660);
  }
  if (local_4a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4a8.Accessor,&local_4a8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar8->_OnMouseCaptureBegin,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5f8);
  uStack_660 = 0;
  local_668 = (UDS_Slider *)USlider::HandleOnMouseCaptureEnd;
  local_610 = (undefined1  [8])0x0;
  local_608.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_608.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_610,
             (FWriteAccessScope *)&local_488);
  local_470 = &local_608;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_608);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_Slider____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res20);
    puVar9[4] = local_668;
    puVar9[5] = CONCAT44(uStack_65c,uStack_660);
  }
  if (local_488.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_488.Accessor,&local_488);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar8->_OnMouseCaptureEnd,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_610);
  uStack_660 = 0;
  local_668 = (UDS_Slider *)USlider::HandleOnControllerCaptureBegin;
  local_628 = (undefined1  [8])0x0;
  local_620.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_620.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_628,
             (FWriteAccessScope *)&local_468);
  local_450 = &local_620;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_620);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_Slider____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_578 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_578);
    puVar9[4] = local_668;
    puVar9[5] = CONCAT44(uStack_65c,uStack_660);
  }
  if (local_468.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_468.Accessor,&local_468);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar8->_OnControllerCaptureBegin,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_628);
  uStack_660 = 0;
  local_668 = (UDS_Slider *)USlider::HandleOnControllerCaptureEnd;
  local_640 = (undefined1  [8])0x0;
  local_638.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_638.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_640,
             (FWriteAccessScope *)&local_448);
  local_430 = &local_638;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_638);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_Slider____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_570 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_570);
    puVar9[4] = local_668;
    puVar9[5] = CONCAT44(uStack_65c,uStack_660);
  }
  if (local_448.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_448.Accessor,&local_448);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar8->_OnControllerCaptureEnd,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_640);
  uStack_660 = 0;
  local_668 = (UDS_Slider *)USlider::HandleOnValueChanged;
  local_658 = (undefined1  [8])0x0;
  local_650.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_650.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_658,
             (FWriteAccessScope *)&local_428);
  local_410 = &local_650;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_650);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_Slider____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_568 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_568);
    puVar9[4] = local_668;
    puVar9[5] = CONCAT44(uStack_65c,uStack_660);
  }
  if (local_428.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_428.Accessor,&local_428);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar8->_OnValueChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_658);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_560 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_558,&local_560,true);
  TSlateDecl<UDS_SSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<UDS_SSlider,RequiredArgs::T0RequiredArgs>
            (&local_5b0,"UDS_SSlider",
             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\BaseWidget\\DS_Slider.cpp",
             0xe,local_res8);
  FMemScope::~FMemScope(&local_558);
  FLLMScope::~FLLMScope(local_res10);
  pUVar3 = local_5b0._Widget.Object;
  if (local_5b0._Widget.Object == (UDS_SSlider *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_5b0._Widget.Object,(FSlateBaseNamedArgs *)pFVar8);
  SSlider::Construct((SSlider *)local_5b0._Widget.Object,pFVar8);
  if (local_5b0._Widget.Object == (UDS_SSlider *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  if (((local_5b0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)((local_5b0._Widget.Object)->_padding_ + 0x228))(local_5b0._Widget.Object);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_14bcc1653;
  }
  bVar7 = 0x20;
LAB_14bcc1653:
  *(byte *)&(local_5b0._Widget.Object)->_padding_ =
       (byte)(local_5b0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_5b0._Widget.Object)->_padding_ =
       (byte)(local_5b0._Widget.Object)->_padding_ | bVar7;
  if (local_5b0._Widget.Object == (UDS_SSlider *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_5b0._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_5b0._Widget.Object == (UDS_SSlider *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  FVar4.ReferenceController = local_5b0._Widget.SharedReferenceCount.ReferenceController;
  local_5b0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_5b0._Widget.Object = (UDS_SSlider *)0x0;
  if (pUVar3 == (UDS_SSlider *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_658,
             (FWriteAccessScope *)&local_550);
  if ((local_650.DelegateSize != 0) &&
     (local_650.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_650.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_650,0,0,0x10);
    local_650.DelegateSize = 0;
  }
  if (local_550.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_550.Accessor,&local_550);
  }
  if (local_650.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_650.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_658);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_640,
             (FWriteAccessScope *)&local_538);
  if ((local_638.DelegateSize != 0) &&
     (local_638.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_638.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_638,0,0,0x10);
    local_638.DelegateSize = 0;
  }
  if (local_538.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_538.Accessor,&local_538);
  }
  if (local_638.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_638.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_640);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_628,
             (FWriteAccessScope *)&local_520);
  if ((local_620.DelegateSize != 0) &&
     (local_620.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_620.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_620,0,0,0x10);
    local_620.DelegateSize = 0;
  }
  if (local_520.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_520.Accessor,&local_520);
  }
  if (local_620.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_620.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_628);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_610,
             (FWriteAccessScope *)&local_508);
  if ((local_608.DelegateSize != 0) &&
     (local_608.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_608.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_608,0,0,0x10);
    local_608.DelegateSize = 0;
  }
  if (local_508.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_508.Accessor,&local_508);
  }
  if (local_608.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_608.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_610);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5f8,
             (FWriteAccessScope *)&local_4f0);
  if ((local_5f0.DelegateSize != 0) &&
     (local_5f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_5f0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_5f0,0,0,0x10);
    local_5f0.DelegateSize = 0;
  }
  if (local_4f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4f0.Accessor,&local_4f0);
  }
  if (local_5f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_5f0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5f8);
  SSlider::FArguments::~FArguments(&local_3c8);
  uStack_660 = 0;
  local_668 = (UDS_Slider *)HandleMouseEnter;
  local_5e0 = (undefined1  [8])0x0;
  local_5d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_5d8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5e0,
             (FWriteAccessScope *)&local_408);
  local_3f0 = &local_5d8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_5d8);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_Slider____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_598 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_598);
    puVar9[4] = local_668;
    puVar9[5] = CONCAT44(uStack_65c,uStack_660);
  }
  if (local_408.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_408.Accessor,&local_408);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pUVar3->OnMouseEnterHandler,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_5e0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5e0,
             (FWriteAccessScope *)&local_4d8);
  if ((local_5d8.DelegateSize != 0) &&
     (local_5d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_5d8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_5d8,0,0,0x10);
    local_5d8.DelegateSize = 0;
  }
  if (local_4d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4d8.Accessor,&local_4d8);
  }
  if (local_5d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_5d8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5e0);
  uStack_590 = 0;
  local_598 = (UDS_Slider *)HandleMouseLeave;
  uStack_58c = uStack_65c;
  local_5c8 = (undefined1  [8])0x0;
  local_5c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_5c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5c8,
             (FWriteAccessScope *)&local_3e8);
  local_3d0 = &local_5c0;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_5c0);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_Slider____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_668 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_668);
    puVar9[4] = local_598;
    puVar9[5] = CONCAT44(uStack_58c,uStack_590);
  }
  if (local_3e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e8.Accessor,&local_3e8);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pUVar3->OnMouseLeaveHandler,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_5c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5c8,
             (FWriteAccessScope *)&local_4c0);
  if ((local_5c0.DelegateSize != 0) &&
     (local_5c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_5c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_5c0,0,0,0x10);
    local_5c0.DelegateSize = 0;
  }
  if (local_4c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4c0.Accessor,&local_4c0);
  }
  if (local_5c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_5c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5c8);
  local_588 = pUVar3;
  local_580.ReferenceController = FVar4.ReferenceController;
  if (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    paVar12 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar12 = &(FVar4.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar12 = (atomic<int>)((int)*paVar12 + 1);
    UNLOCK();
  }
  if ((UDS_SSlider **)&this->field_0x6c8 != &local_588) {
    *(UDS_SSlider **)&this->field_0x6c8 = pUVar3;
    local_588 = (UDS_SSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x6d0,&local_580);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_580.ReferenceController);
  __return_storage_ptr__->Object = (SWidget *)pUVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar4.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar12 = (atomic<int>)((int)*paVar12 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 14bcc3c40

void __thiscall UDS_Slider::ReleaseSlateResources(UDS_Slider *this,bool param_1)

{
  undefined8 uStack_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  uStack_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)&this->field_0x6c8 != &uStack_18) {
    *(undefined8 *)&this->field_0x6c8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x6d0,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// SynchronizeProperties @ 14bccbb80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_Slider::SynchronizeProperties(UDS_Slider *this)

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
  if (*(longlong *)&this->field_0x6c8 != 0) {
    bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x1b8);
    bVar2 = !bVar2;
    if (bVar2) {
      pTVar4 = (TAttribute<float> *)auStack_188;
      auStack_188._0_4_ = *(float *)&this->field_0x1b0;
      TStack_180.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_178.Data = (FScriptContainerElement *)0x0;
      auStack_188[4] = true;
      uStack_170 = 0;
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x1b8,
                 &FStack_30);
      FStackX_8.ComparisonIndex.Value = *(uint *)&this->field_0x1c8;
      FStackX_8.Number = *(uint *)&this->field_0x1cc;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_30);
      pUVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x1b8);
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
    if (*(longlong *)&this->field_0x6c8 == 0) {
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
    SSlider::SetOrientation(*(SSlider **)&this->field_0x6c8,(uint)(byte)this->field_0x620);
    if (*(longlong *)&this->field_0x6c8 == 0) {
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
    SSlider::SetMouseUsesStep(*(SSlider **)&this->field_0x6c8,(bool)this->field_0x646);
    if (*(longlong *)&this->field_0x6c8 == 0) {
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
    SSlider::SetRequiresControllerLock(*(SSlider **)&this->field_0x6c8,(bool)this->field_0x647);
    if (*(longlong *)&this->field_0x6c8 == 0) {
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
    FStack_d0._0_8_ = *(undefined8 *)&this->field_0x624;
    FStack_d0._8_8_ = *(undefined8 *)&this->field_0x62c;
    uStack_c0 = 0;
    uStack_bc = 1;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    SSlider::SetSliderBarColor
              (*(SSlider **)&this->field_0x6c8,(TAttribute<FSlateColor> *)&FStack_d0._s_0);
    if (*(longlong *)&this->field_0x6c8 == 0) {
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
    FStack_a0._0_8_ = *(undefined8 *)&this->field_0x634;
    FStack_a0._8_8_ = *(undefined8 *)&this->field_0x63c;
    uStack_90 = 0;
    uStack_8c = 1;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    SSlider::SetSliderHandleColor
              (*(SSlider **)&this->field_0x6c8,(TAttribute<FSlateColor> *)&FStack_a0._s_0);
    if (*(longlong *)&this->field_0x6c8 == 0) {
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
    this_00 = *(SSlider **)&this->field_0x6c8;
    TStack_50.Value = fStack_168;
    TStack_50.bIsSet = (bool)uStack_164;
    TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>
              (&TStack_50.Getter,
               (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_160);
    SSlider::SetValue(this_00,&TStack_50);
    if (*(longlong *)&this->field_0x6c8 == 0) {
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
              (*(SSlider **)&this->field_0x6c8,*(float *)&this->field_0x1d0,
               *(float *)&this->field_0x1d4);
    if (*(longlong *)&this->field_0x6c8 == 0) {
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
    TStack_148.Value = (bool)this->field_0x645;
    TStack_148.Getter._16_8_ = 0;
    TStack_148.bIsSet = true;
    TStack_148.Getter._0_8_ = 0;
    TStack_148.Getter._8_8_ = 0;
    SSlider::SetLocked(*(SSlider **)&this->field_0x6c8,&TStack_148);
    if (*(longlong *)&this->field_0x6c8 == 0) {
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
    TStack_128.Value = (bool)this->field_0x644;
    TStack_128.Getter._16_8_ = 0;
    TStack_128.bIsSet = true;
    TStack_128.Getter._0_8_ = 0;
    TStack_128.Getter._8_8_ = 0;
    SSlider::SetIndentHandle(*(SSlider **)&this->field_0x6c8,&TStack_128);
    if (*(longlong *)&this->field_0x6c8 == 0) {
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
    TStack_108.Value = *(float *)&this->field_0x648;
    TStack_108.Getter._0_8_ = 0;
    TStack_108.Getter._8_8_ = 0;
    TStack_108.bIsSet = true;
    TStack_108.Getter._16_8_ = 0;
    SSlider::SetStepSize(*(SSlider **)&this->field_0x6c8,&TStack_108);
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

