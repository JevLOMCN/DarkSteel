// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 7

// StaticClass @ 14d894240

UClass * __cdecl UAudioVolumeRadialSlider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioVolumeRadialSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioVolumeRadialSlider",
               &Z_Registration_Info_UClass_UAudioVolumeRadialSlider.InnerSingleton,
               StaticRegisterNativesUAudioVolumeRadialSlider,0x3c0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioVolumeRadialSlider>,
               InternalVTableHelperCtorCaller<UAudioVolumeRadialSlider>,local_res8,
               UAudioRadialSlider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioVolumeRadialSlider.InnerSingleton;
}

// UAudioVolumeRadialSlider @ 14d8ba630

/* WARNING: Enum "Type": Some values do not have unique names */

UAudioVolumeRadialSlider * __thiscall
UAudioVolumeRadialSlider::UAudioVolumeRadialSlider
          (UAudioVolumeRadialSlider *this,FVTableHelper *param_1)

{
  UAudioRadialSlider::UAudioRadialSlider((UAudioRadialSlider *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// UAudioVolumeRadialSlider @ 14d8ba670

/* WARNING: Enum "Type": Some values do not have unique names */

UAudioVolumeRadialSlider * __thiscall
UAudioVolumeRadialSlider::UAudioVolumeRadialSlider
          (UAudioVolumeRadialSlider *this,FObjectInitializer *param_1)

{
  FText *pFVar1;
  FText local_18;
  
  UAudioRadialSlider::UAudioRadialSlider((UAudioRadialSlider *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  pFVar1 = FText::FromString(&local_18,"dB");
  UAudioRadialSlider::SetUnitsText((UAudioRadialSlider *)this,pFVar1);
  *(undefined8 *)&this->field_0x240 = 0xc028000000000000;
  *(undefined8 *)&this->field_0x248 = 0;
  return this;
}

// ~UAudioVolumeRadialSlider @ 14d8c1820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioVolumeRadialSlider::~UAudioVolumeRadialSlider(UAudioVolumeRadialSlider *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UAudioRadialSlider::~UAudioRadialSlider((UAudioRadialSlider *)this);
  return;
}

// GetPrivateStaticClass @ 14d934020

UClass * __cdecl UAudioVolumeRadialSlider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioVolumeRadialSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioVolumeRadialSlider",
               &Z_Registration_Info_UClass_UAudioVolumeRadialSlider.InnerSingleton,
               StaticRegisterNativesUAudioVolumeRadialSlider,0x3c0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioVolumeRadialSlider>,
               InternalVTableHelperCtorCaller<UAudioVolumeRadialSlider>,local_res8,
               UAudioRadialSlider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioVolumeRadialSlider.InnerSingleton;
}

// RebuildWidget @ 14d961760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UAudioVolumeRadialSlider::RebuildWidget
          (UAudioVolumeRadialSlider *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  code *pcVar4;
  SAudioVolumeRadialSlider *pSVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  FArguments *pFVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TSharedRef<SWidget,1> *pTVar13;
  undefined1 auStackY_508 [32];
  T0RequiredArgs local_4d8 [4];
  FLLMScope local_4d4;
  undefined1 local_4d0 [8];
  FDelegateAllocation local_4c8;
  FMemScope local_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  TSlateDecl<SAudioVolumeRadialSlider,RequiredArgs::T0RequiredArgs> local_4a8;
  SAudioVolumeRadialSlider *local_490;
  FSharedReferencer<1> local_488;
  UAudioVolumeRadialSlider *local_480;
  FName local_478;
  FDestructionSentinel local_470;
  FDestructionSentinel local_458;
  FDelegateAllocation *local_440;
  FArguments local_438;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_508;
  pFVar10 = SAudioRadialSlider::FArguments::FArguments(&local_438);
  uStack_4b0 = 0;
  pFVar10->_Style = (FAudioRadialSliderStyle *)&this->field_0x270;
  local_4b8 = (FMemScope)UAudioRadialSlider::HandleOnValueChanged;
  local_4d0 = (undefined1  [8])0x0;
  local_4c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_4c8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4d0,
             (FWriteAccessScope *)&local_458);
  local_440 = &local_4c8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_4c8);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUAudioVolumeRadialSlider____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UAudioVolumeRadialSlider *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_480 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UAudioVolumeRadialSlider *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_480);
    *(FMemScope *)(puVar11 + 4) = local_4b8;
    puVar11[5] = CONCAT44(uStack_4ac,uStack_4b0);
  }
  if (local_458.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_458.Accessor,&local_458);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnValueChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4d0);
  FLLMScope::FLLMScope(&local_4d4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_478 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4b8,&local_478,true);
  TSlateDecl<SAudioVolumeRadialSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioVolumeRadialSlider,RequiredArgs::T0RequiredArgs>
            (&local_4a8,"SAudioVolumeRadialSlider",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioRadialSlider.cpp"
             ,0xf8,local_4d8);
  FMemScope::~FMemScope(&local_4b8);
  FLLMScope::~FLLMScope(&local_4d4);
  pSVar5 = local_4a8._Widget.Object;
  if (local_4a8._Widget.Object == (SAudioVolumeRadialSlider *)0x0) {
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
  SWidget::SWidgetConstruct((SWidget *)local_4a8._Widget.Object,(FSlateBaseNamedArgs *)pFVar10);
  (**(code **)((local_4a8._Widget.Object)->_padding_ + 0x290))(local_4a8._Widget.Object,pFVar10);
  if (local_4a8._Widget.Object == (SAudioVolumeRadialSlider *)0x0) {
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
  if (((local_4a8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)((local_4a8._Widget.Object)->_padding_ + 0x228))(local_4a8._Widget.Object);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_14d9619a6;
  }
  bVar9 = 0x20;
LAB_14d9619a6:
  *(byte *)&(local_4a8._Widget.Object)->_padding_ =
       (byte)(local_4a8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_4a8._Widget.Object)->_padding_ =
       (byte)(local_4a8._Widget.Object)->_padding_ | bVar9;
  if (local_4a8._Widget.Object == (SAudioVolumeRadialSlider *)0x0) {
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
  pbVar1 = (byte *)((longlong)&(local_4a8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_4a8._Widget.Object == (SAudioVolumeRadialSlider *)0x0) {
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
  FVar6.ReferenceController = local_4a8._Widget.SharedReferenceCount.ReferenceController;
  local_4a8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_4a8._Widget.Object = (SAudioVolumeRadialSlider *)0x0;
  if (pSVar5 == (SAudioVolumeRadialSlider *)0x0) {
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
  local_490 = pSVar5;
  local_488.ReferenceController = FVar6.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SAudioVolumeRadialSlider **)&this->field_0x3b0 != &local_490) {
    *(SAudioVolumeRadialSlider **)&this->field_0x3b0 = pSVar5;
    local_490 = (SAudioVolumeRadialSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x3b8,&local_488);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_488.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
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
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x3b8;
  pSVar3 = *(SWidget **)&this->field_0x3b0;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
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
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUAudioVolumeRadialSlider @ 14d971e10

void __cdecl UAudioVolumeRadialSlider::StaticRegisterNativesUAudioVolumeRadialSlider(void)

{
  return;
}

