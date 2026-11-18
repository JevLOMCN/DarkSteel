// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 7

// StaticClass @ 14d894300

UClass * __cdecl UAudioFrequencyRadialSlider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioFrequencyRadialSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioFrequencyRadialSlider",
               &Z_Registration_Info_UClass_UAudioFrequencyRadialSlider.InnerSingleton,
               StaticRegisterNativesUAudioFrequencyRadialSlider,0x3c0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioFrequencyRadialSlider>,
               InternalVTableHelperCtorCaller<UAudioFrequencyRadialSlider>,local_res8,
               UAudioRadialSlider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioFrequencyRadialSlider.InnerSingleton;
}

// UAudioFrequencyRadialSlider @ 14d8b85d0

/* WARNING: Enum "Type": Some values do not have unique names */

UAudioFrequencyRadialSlider * __thiscall
UAudioFrequencyRadialSlider::UAudioFrequencyRadialSlider
          (UAudioFrequencyRadialSlider *this,FVTableHelper *param_1)

{
  UAudioRadialSlider::UAudioRadialSlider((UAudioRadialSlider *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// UAudioFrequencyRadialSlider @ 14d8b8610

/* WARNING: Enum "Type": Some values do not have unique names */

UAudioFrequencyRadialSlider * __thiscall
UAudioFrequencyRadialSlider::UAudioFrequencyRadialSlider
          (UAudioFrequencyRadialSlider *this,FObjectInitializer *param_1)

{
  FText *pFVar1;
  FText local_18;
  
  UAudioRadialSlider::UAudioRadialSlider((UAudioRadialSlider *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  pFVar1 = FText::FromString(&local_18,"Hz");
  UAudioRadialSlider::SetUnitsText((UAudioRadialSlider *)this,pFVar1);
  *(undefined8 *)&this->field_0x240 = 0x4034000000000000;
  *(undefined8 *)&this->field_0x248 = 0x40d3880000000000;
  return this;
}

// ~UAudioFrequencyRadialSlider @ 14d8c1080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioFrequencyRadialSlider::~UAudioFrequencyRadialSlider(UAudioFrequencyRadialSlider *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UAudioRadialSlider::~UAudioRadialSlider((UAudioRadialSlider *)this);
  return;
}

// GetPrivateStaticClass @ 14d933360

UClass * __cdecl UAudioFrequencyRadialSlider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioFrequencyRadialSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioFrequencyRadialSlider",
               &Z_Registration_Info_UClass_UAudioFrequencyRadialSlider.InnerSingleton,
               StaticRegisterNativesUAudioFrequencyRadialSlider,0x3c0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioFrequencyRadialSlider>,
               InternalVTableHelperCtorCaller<UAudioFrequencyRadialSlider>,local_res8,
               UAudioRadialSlider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioFrequencyRadialSlider.InnerSingleton;
}

// RebuildWidget @ 14d95e2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UAudioFrequencyRadialSlider::RebuildWidget
          (UAudioFrequencyRadialSlider *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  code *pcVar3;
  SAudioFrequencyRadialSlider *pSVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  FArguments *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  TSharedRef<SWidget,1> *pTVar12;
  undefined1 auStackY_508 [32];
  T0RequiredArgs local_4d8 [4];
  FLLMScope local_4d4;
  undefined1 local_4d0 [8];
  FDelegateAllocation local_4c8;
  FMemScope local_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  TSlateDecl<SAudioFrequencyRadialSlider,RequiredArgs::T0RequiredArgs> local_4a8;
  SAudioFrequencyRadialSlider *local_490;
  FSharedReferencer<1> local_488;
  UAudioFrequencyRadialSlider *local_480;
  FName local_478;
  FDestructionSentinel local_470;
  FDestructionSentinel local_458;
  FDelegateAllocation *local_440;
  FArguments local_438;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_508;
  pFVar9 = SAudioRadialSlider::FArguments::FArguments(&local_438);
  uStack_4b0 = 0;
  pFVar9->_Style = (FAudioRadialSliderStyle *)&this->field_0x270;
  local_4b8 = (FMemScope)UAudioRadialSlider::HandleOnValueChanged;
  local_4d0 = (undefined1  [8])0x0;
  local_4c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_4c8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4d0,
             (FWriteAccessScope *)&local_458);
  local_440 = &local_4c8;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_4c8);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUAudioFrequencyRadialSlider____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UAudioFrequencyRadialSlider *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_480 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UAudioFrequencyRadialSlider *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_480);
    *(FMemScope *)(puVar10 + 4) = local_4b8;
    puVar10[5] = CONCAT44(uStack_4ac,uStack_4b0);
  }
  if (local_458.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_458.Accessor,&local_458);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnValueChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4d0);
  FLLMScope::FLLMScope(&local_4d4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_478 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4b8,&local_478,true);
  TSlateDecl<SAudioFrequencyRadialSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioFrequencyRadialSlider,RequiredArgs::T0RequiredArgs>
            (&local_4a8,"SAudioFrequencyRadialSlider",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioRadialSlider.cpp"
             ,0x109,local_4d8);
  FMemScope::~FMemScope(&local_4b8);
  FLLMScope::~FLLMScope(&local_4d4);
  pSVar4 = local_4a8._Widget.Object;
  if (local_4a8._Widget.Object == (SAudioFrequencyRadialSlider *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar12;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_4a8._Widget.Object,(FSlateBaseNamedArgs *)pFVar9);
  (**(code **)(*(longlong *)local_4a8._Widget.Object + 0x290))(local_4a8._Widget.Object,pFVar9);
  if (local_4a8._Widget.Object == (SAudioFrequencyRadialSlider *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar12;
    }
  }
  if ((local_4a8._Widget.Object)->bForceVolatile == '\0') {
    cVar7 = (**(code **)(*(longlong *)local_4a8._Widget.Object + 0x228))(local_4a8._Widget.Object);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_14d95e506;
  }
  bVar8 = 0x20;
LAB_14d95e506:
  (local_4a8._Widget.Object)->bCachedVolatile = '\0';
  (local_4a8._Widget.Object)->field_0x30 = (local_4a8._Widget.Object)->field_0x30 | bVar8;
  if (local_4a8._Widget.Object == (SAudioFrequencyRadialSlider *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar12;
    }
  }
  (local_4a8._Widget.Object)->bIsDeclarativeSyntaxConstructionCompleted = '\x01';
  if (local_4a8._Widget.Object == (SAudioFrequencyRadialSlider *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar12;
    }
  }
  FVar5.ReferenceController = local_4a8._Widget.SharedReferenceCount.ReferenceController;
  local_4a8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_4a8._Widget.Object = (SAudioFrequencyRadialSlider *)0x0;
  if (pSVar4 == (SAudioFrequencyRadialSlider *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar12;
    }
  }
  local_490 = pSVar4;
  local_488.ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SAudioFrequencyRadialSlider **)&this->field_0x3b0 != &local_490) {
    *(SAudioFrequencyRadialSlider **)&this->field_0x3b0 = pSVar4;
    local_490 = (SAudioFrequencyRadialSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x3b8,&local_488);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_488.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4d0,
             (FWriteAccessScope *)&local_470);
  if ((local_4c8.DelegateSize != 0) &&
     (local_4c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_4c8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_4c8,0,0,0x10);
    local_4c8.DelegateSize = 0;
  }
  if (local_470.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_470.Accessor,&local_470);
  }
  if (local_4c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_4c8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4d0);
  SAudioRadialSlider::FArguments::~FArguments(&local_438);
  if (*(longlong *)&this->field_0x3b0 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar12;
    }
  }
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x3b8;
  pSVar2 = *(SWidget **)&this->field_0x3b0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SWidget *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar12;
    }
  }
  __return_storage_ptr__->Object = pSVar2;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUAudioFrequencyRadialSlider @ 14d971b50

void __cdecl UAudioFrequencyRadialSlider::StaticRegisterNativesUAudioFrequencyRadialSlider(void)

{
  return;
}

