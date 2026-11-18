// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 7

// StaticClass @ 14d892100

UClass * __cdecl UAudioVolumeSlider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioVolumeSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioVolumeSlider",
               &Z_Registration_Info_UClass_UAudioVolumeSlider.InnerSingleton,
               StaticRegisterNativesUAudioVolumeSlider,0x940,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioVolumeSlider>,
               InternalVTableHelperCtorCaller<UAudioVolumeSlider>,local_res8,
               UAudioSlider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioVolumeSlider.InnerSingleton;
}

// UAudioVolumeSlider @ 14d8ba6e0

/* WARNING: Enum "Type": Some values do not have unique names */

UAudioVolumeSlider * __thiscall
UAudioVolumeSlider::UAudioVolumeSlider(UAudioVolumeSlider *this,FVTableHelper *param_1)

{
  UAudioSliderBase::UAudioSliderBase((UAudioSliderBase *)this,param_1);
  *(undefined8 *)&this->field_0x930 = 0;
  *(undefined8 *)&this->field_0x938 = 0;
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// UAudioVolumeSlider @ 14d8ba730

/* WARNING: Enum "Type": Some values do not have unique names */

UAudioVolumeSlider * __thiscall
UAudioVolumeSlider::UAudioVolumeSlider(UAudioVolumeSlider *this,FObjectInitializer *param_1)

{
  FText *pFVar1;
  FText local_18;
  
  UAudioSliderBase::UAudioSliderBase((UAudioSliderBase *)this,param_1);
  *(undefined8 *)&this->field_0x930 = 0;
  *(undefined8 *)&this->field_0x938 = 0;
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  pFVar1 = FText::FromString(&local_18,"dB");
  UAudioSliderBase::SetUnitsText((UAudioSliderBase *)this,pFVar1);
  return this;
}

// ~UAudioVolumeSlider @ 14d8c1840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioVolumeSlider::~UAudioVolumeSlider(UAudioVolumeSlider *this)

{
  *(undefined ***)this = &UAudioSlider::_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &UAudioSlider::_vftable__for__INotifyFieldValueChanged__;
  UAudioSliderBase::~UAudioSliderBase((UAudioSliderBase *)this);
  return;
}

// GetPrivateStaticClass @ 14d9340e0

UClass * __cdecl UAudioVolumeSlider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioVolumeSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioVolumeSlider",
               &Z_Registration_Info_UClass_UAudioVolumeSlider.InnerSingleton,
               StaticRegisterNativesUAudioVolumeSlider,0x940,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioVolumeSlider>,
               InternalVTableHelperCtorCaller<UAudioVolumeSlider>,local_res8,
               UAudioSlider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioVolumeSlider.InnerSingleton;
}

// RebuildWidget @ 14d961bf0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UAudioVolumeSlider::RebuildWidget
          (UAudioVolumeSlider *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  SWidget *pSVar3;
  code *pcVar4;
  SAudioVolumeSlider *pSVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  FArguments *pFVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TSharedRef<SWidget,1> *pTVar13;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  UAudioVolumeSlider *local_res18;
  FName local_res20;
  undefined1 local_438 [8];
  FDelegateAllocation local_430;
  FMemScope local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  TSlateDecl<SAudioVolumeSlider,RequiredArgs::T0RequiredArgs> local_408;
  SAudioVolumeSlider *local_3f0;
  FSharedReferencer<1> local_3e8;
  FDestructionSentinel local_3e0;
  FDestructionSentinel local_3c8;
  FDelegateAllocation *local_3b0;
  FArguments local_3a8;
  
  pFVar10 = SAudioSliderBase::FArguments::FArguments(&local_3a8);
  uStack_410 = 0;
  local_438 = (undefined1  [8])0x0;
  local_418 = (FMemScope)UAudioSliderBase::HandleOnValueChanged;
  local_430.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_430.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_438,
             (FWriteAccessScope *)&local_3c8);
  local_3b0 = &local_430;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_430);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUAudioVolumeSlider____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UAudioVolumeSlider *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_res18 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UAudioVolumeSlider *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res18);
    *(FMemScope *)(puVar11 + 4) = local_418;
    puVar11[5] = CONCAT44(uStack_40c,uStack_410);
  }
  if (local_3c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3c8.Accessor,&local_3c8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnValueChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_438);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_418,&local_res20,true);
  TSlateDecl<SAudioVolumeSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioVolumeSlider,RequiredArgs::T0RequiredArgs>
            (&local_408,"SAudioVolumeSlider",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSlider.cpp"
             ,0x108,local_res8);
  FMemScope::~FMemScope(&local_418);
  FLLMScope::~FLLMScope(local_res10);
  pSVar5 = local_408._Widget.Object;
  if (local_408._Widget.Object == (SAudioVolumeSlider *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar13;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_408._Widget.Object,(FSlateBaseNamedArgs *)pFVar10);
  (**(code **)(*(longlong *)local_408._Widget.Object + 0x290))(local_408._Widget.Object,pFVar10);
  if (local_408._Widget.Object == (SAudioVolumeSlider *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar13;
    }
  }
  if ((local_408._Widget.Object)->bForceVolatile == '\0') {
    cVar8 = (**(code **)(*(longlong *)local_408._Widget.Object + 0x228))(local_408._Widget.Object);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_14d961e24;
  }
  bVar9 = 0x20;
LAB_14d961e24:
  (local_408._Widget.Object)->bCachedVolatile = '\0';
  (local_408._Widget.Object)->field_0x30 = (local_408._Widget.Object)->field_0x30 | bVar9;
  if (local_408._Widget.Object == (SAudioVolumeSlider *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar13;
    }
  }
  (local_408._Widget.Object)->bIsDeclarativeSyntaxConstructionCompleted = '\x01';
  if (local_408._Widget.Object == (SAudioVolumeSlider *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar13;
    }
  }
  FVar6.ReferenceController = local_408._Widget.SharedReferenceCount.ReferenceController;
  local_408._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_408._Widget.Object = (SAudioVolumeSlider *)0x0;
  if (pSVar5 == (SAudioVolumeSlider *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar13;
    }
  }
  local_3f0 = pSVar5;
  local_3e8.ReferenceController = FVar6.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SAudioVolumeSlider **)&this->field_0x920 != &local_3f0) {
    *(SAudioVolumeSlider **)&this->field_0x920 = pSVar5;
    local_3f0 = (SAudioVolumeSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x928,&local_3e8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3e8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
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
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x928;
  lVar2 = *(longlong *)&this->field_0x920;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (lVar2 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar13;
    }
  }
  *(undefined8 *)&this->field_0x930 = *(undefined8 *)(lVar2 + 0x570);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x928;
  lVar2 = *(longlong *)&this->field_0x920;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (lVar2 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar13;
    }
  }
  *(undefined8 *)&this->field_0x938 = *(undefined8 *)(lVar2 + 0x578);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (*(longlong *)&this->field_0x920 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar13;
    }
  }
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x928;
  pSVar3 = *(SWidget **)&this->field_0x920;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar13;
    }
  }
  __return_storage_ptr__->Object = pSVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUAudioVolumeSlider @ 14d971e20

void __cdecl UAudioVolumeSlider::StaticRegisterNativesUAudioVolumeSlider(void)

{
  return;
}

