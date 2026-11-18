// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 14

// StaticClass @ 14d88f570

UClass * __cdecl UAudioMaterialButton::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialButton",
               &Z_Registration_Info_UClass_UAudioMaterialButton.InnerSingleton,
               StaticRegisterNativesUAudioMaterialButton,0x268,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioMaterialButton>,
               InternalVTableHelperCtorCaller<UAudioMaterialButton>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialButton.InnerSingleton;
}

// UAudioMaterialButton @ 14d8b8750

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UAudioMaterialButton * __thiscall
UAudioMaterialButton::UAudioMaterialButton(UAudioMaterialButton *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FAudioMaterialButtonStyle::FAudioMaterialButtonStyle(&this->WidgetStyle);
  *(undefined8 *)&this->OnButtonPressedChangedEvent = 0;
  *(undefined8 *)&(this->OnButtonPressedChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonPressedChangedEvent).field_0x10 = 0;
  this->bIsPressed = false;
  (this->Button).Object = (SAudioMaterialButton *)0x0;
  (this->Button).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UAudioMaterialButton @ 14d8b87c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UAudioMaterialButton * __thiscall
UAudioMaterialButton::UAudioMaterialButton(UAudioMaterialButton *this)

{
  FObjectInitializer *pFVar1;
  FAudioWidgetsStyle *pFVar2;
  FName *pFVar3;
  FAudioMaterialButtonStyle *pFVar4;
  FName local_res8;
  
  pFVar1 = FObjectInitializer::Get();
  UWidget::UWidget((UWidget *)this,pFVar1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FAudioMaterialButtonStyle::FAudioMaterialButtonStyle(&this->WidgetStyle);
  *(undefined8 *)&this->OnButtonPressedChangedEvent = 0;
  *(undefined8 *)&(this->OnButtonPressedChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonPressedChangedEvent).field_0x10 = 0;
  this->bIsPressed = false;
  (this->Button).Object = (SAudioMaterialButton *)0x0;
  (this->Button).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar2 = FAudioWidgetsStyle::Get();
  pFVar3 = ::FName::FName(&local_res8,"AudioMaterialButton.Style");
  pFVar4 = (FAudioMaterialButtonStyle *)
           (**(code **)(*(longlong *)pFVar2 + 0xa0))
                     (pFVar2,FAudioMaterialButtonStyle::TypeName,*pFVar3,0,1);
  if ((pFVar4 == (FAudioMaterialButtonStyle *)0x0) &&
     (pFVar4 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9d4c) < ::_TSS0)) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAudioMaterialButtonStyle::FAudioMaterialButtonStyle(&::Default);
      atexit(`FAudioMaterialButtonStyle::GetDefault'::__l2::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FAudioMaterialButtonStyle::operator=(&this->WidgetStyle,pFVar4);
  return this;
}

// ~UAudioMaterialButton @ 14d8c10c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioMaterialButton::~UAudioMaterialButton(UAudioMaterialButton *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Button).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnButtonPressedChangedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnButtonPressedChangedEvent);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->WidgetStyle);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetIsPressed @ 14d92f650

bool __thiscall UAudioMaterialButton::GetIsPressed(UAudioMaterialButton *this)

{
  return this->bIsPressed;
}

// GetPrivateStaticClass @ 14d9334e0

UClass * __cdecl UAudioMaterialButton::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialButton",
               &Z_Registration_Info_UClass_UAudioMaterialButton.InnerSingleton,
               StaticRegisterNativesUAudioMaterialButton,0x268,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioMaterialButton>,
               InternalVTableHelperCtorCaller<UAudioMaterialButton>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialButton.InnerSingleton;
}

// HandleOnPressedValueChanged @ 14d938c80

void __thiscall
UAudioMaterialButton::HandleOnPressedValueChanged(UAudioMaterialButton *this,bool param_1)

{
  undefined1 local_res10 [24];
  
  this->bIsPressed = param_1;
  local_res10[0] = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->OnButtonPressedChangedEvent,local_res10);
  return;
}

// RebuildWidget @ 14d95ec20

TSharedRef<SWidget,1> * __thiscall
UAudioMaterialButton::RebuildWidget
          (UAudioMaterialButton *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  SAudioMaterialButton *pSVar3;
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
  FWeakObjectPtr local_res18;
  UAudioMaterialButton *local_res20;
  undefined1 local_368 [8];
  FDelegateAllocation local_360;
  undefined1 local_350;
  undefined1 local_34f;
  undefined1 local_348 [8];
  ForAnyElementType FStack_340;
  ulonglong local_338;
  FMemScope local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  TSlateDecl<SAudioMaterialButton,RequiredArgs::T0RequiredArgs> local_318;
  SAudioMaterialButton *local_300;
  FSharedReferencer<1> local_2f8;
  UAudioMaterialButton *local_2f0;
  FName local_2e8;
  FDestructionSentinel local_2e0;
  FDestructionSentinel local_2c8;
  FDestructionSentinel local_2b0;
  FDelegateAllocation *local_298;
  undefined1 local_290 [520];
  undefined1 local_88 [32];
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  
  pFVar9 = SAudioMaterialButton::FArguments::FArguments((FArguments *)local_290);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UAudioMaterialButton *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UAudioMaterialButton *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  (pFVar9->_Owner).WeakPtr = local_res18;
  pFVar9->_AudioMaterialButtonStyle = &this->WidgetStyle;
  local_350 = this->bIsPressed;
  local_34f = 1;
  local_348 = (undefined1  [8])0x0;
  FStack_340.Data = (FScriptContainerElement *)0x0;
  local_338 = 0;
  (pFVar9->_bIsPressedAttribute).Value = (bool)local_350;
  (pFVar9->_bIsPressedAttribute).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_bIsPressedAttribute).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_348);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_348,
             (FWriteAccessScope *)&local_2e0);
  if (((int)local_338 != 0) && (FStack_340.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_340.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_340,0,0,0x10);
    local_338 = local_338 & 0xffffffff00000000;
  }
  if (local_2e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e0.Accessor,&local_2e0);
  }
  if (FStack_340.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_340.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_348);
  uStack_320 = 0;
  local_328 = (FMemScope)HandleOnPressedValueChanged;
  local_368 = (undefined1  [8])0x0;
  local_360.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_360.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_368,
             (FWriteAccessScope *)&local_2b0);
  local_298 = &local_360;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_360);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUAudioMaterialButton____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_2f0 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_2f0);
    *(FMemScope *)(puVar10 + 4) = local_328;
    puVar10[5] = CONCAT44(uStack_31c,uStack_320);
  }
  if (local_2b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b0.Accessor,&local_2b0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnBooleanValueChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_368);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2e8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_328,&local_2e8,true);
  TSlateDecl<SAudioMaterialButton,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioMaterialButton,RequiredArgs::T0RequiredArgs>
            (&local_318,"SAudioMaterialButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioMaterialSlate\\AudioMaterialButton.cpp"
             ,0x42,local_res8);
  FMemScope::~FMemScope(&local_328);
  FLLMScope::~FLLMScope(local_res10);
  pSVar3 = local_318._Widget.Object;
  if (local_318._Widget.Object == (SAudioMaterialButton *)0x0) {
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
  SWidget::SWidgetConstruct((SWidget *)local_318._Widget.Object,(FSlateBaseNamedArgs *)pFVar9);
  SAudioMaterialButton::Construct(local_318._Widget.Object,pFVar9);
  if (local_318._Widget.Object == (SAudioMaterialButton *)0x0) {
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
  if (((local_318._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_318._Widget.Object)->_padding_ + 0x228))(local_318._Widget.Object);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_14d95ef59;
  }
  bVar8 = 0x20;
LAB_14d95ef59:
  *(byte *)&(local_318._Widget.Object)->_padding_ =
       (byte)(local_318._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_318._Widget.Object)->_padding_ =
       (byte)(local_318._Widget.Object)->_padding_ | bVar8;
  if (local_318._Widget.Object == (SAudioMaterialButton *)0x0) {
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
  pbVar1 = (byte *)((longlong)&(local_318._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_318._Widget.Object == (SAudioMaterialButton *)0x0) {
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
  FVar5.ReferenceController = local_318._Widget.SharedReferenceCount.ReferenceController;
  local_318._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_318._Widget.Object = (SAudioMaterialButton *)0x0;
  if (pSVar3 == (SAudioMaterialButton *)0x0) {
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
  local_300 = pSVar3;
  local_2f8.ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->Button != (TSharedPtr<SAudioMaterialButton,1> *)&local_300) {
    (this->Button).Object = pSVar3;
    local_300 = (SAudioMaterialButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Button).SharedReferenceCount,&local_2f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_368,
             (FWriteAccessScope *)&local_2c8);
  if ((local_360.DelegateSize != 0) &&
     (local_360.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_360.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_360,0,0,0x10);
    local_360.DelegateSize = 0;
  }
  if (local_2c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c8.Accessor,&local_2c8);
  }
  if (local_360.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_360.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_368);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_50);
  if ((void *)local_50._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_50._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_50);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
  if ((void *)local_68._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_88);
  if ((void *)local_88._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_88);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_290);
  if ((this->Button).Object == (SAudioMaterialButton *)0x0) {
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
  pTVar2 = (this->Button).SharedReferenceCount.ReferenceController;
  pSVar3 = (this->Button).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SAudioMaterialButton *)0x0) {
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

// ReleaseSlateResources @ 14d963890

void __thiscall UAudioMaterialButton::ReleaseSlateResources(UAudioMaterialButton *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UVisual::ReleaseSlateResources((UVisual *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Button != (TSharedPtr<SAudioMaterialButton,1> *)&local_18) {
    (this->Button).Object = (SAudioMaterialButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Button).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetIsPressed @ 14d969780

void __thiscall UAudioMaterialButton::SetIsPressed(UAudioMaterialButton *this,bool param_1)

{
  undefined1 local_res8 [32];
  
  if (((this->Button).Object != (SAudioMaterialButton *)0x0) && (this->bIsPressed != param_1)) {
    this->bIsPressed = param_1;
    local_res8[0] = param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnButtonPressedChangedEvent,local_res8);
  }
  return;
}

// StaticRegisterNativesUAudioMaterialButton @ 14d971b70

void __cdecl UAudioMaterialButton::StaticRegisterNativesUAudioMaterialButton(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAudioMaterialButton_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 14d972560

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioMaterialButton::SynchronizeProperties(UAudioMaterialButton *this)

{
  SAudioMaterialButton *this_00;
  code *pcVar1;
  bool bVar2;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  this_00 = (this->Button).Object;
  if (this_00 == (SAudioMaterialButton *)0x0) {
    return;
  }
  SAudioMaterialButton::CommitNewState(this_00,this->bIsPressed);
  if ((this->Button).Object == (SAudioMaterialButton *)0x0) {
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
  SAudioMaterialButton::ApplyNewMaterial((this->Button).Object);
  return;
}

// execGetIsPressed @ 14d97e230

void __cdecl UAudioMaterialButton::execGetIsPressed(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0xe].field_0x20;
  return;
}

// execSetIsPressed @ 14d97eda0

void __cdecl UAudioMaterialButton::execSetIsPressed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)(param_1 + 0xf) != 0) && (param_1[0xe].field_0x20 != local_res8[0])) {
    param_1[0xe].field_0x20 = local_res8[0];
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1[0xe].field_0x8,
               local_res8);
  }
  return;
}

