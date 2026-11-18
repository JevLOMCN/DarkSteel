// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 7

// StaticClass @ 14d8922a0

UClass * __cdecl UAudioFrequencySlider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioFrequencySlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioFrequencySlider",
               &Z_Registration_Info_UClass_UAudioFrequencySlider.InnerSingleton,
               StaticRegisterNativesUAudioFrequencySlider,0x940,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioFrequencySlider>,
               InternalVTableHelperCtorCaller<UAudioFrequencySlider>,local_res8,
               UAudioSliderBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioFrequencySlider.InnerSingleton;
}

// UAudioFrequencySlider @ 14d8b8680

/* WARNING: Enum "Type": Some values do not have unique names */

UAudioFrequencySlider * __thiscall
UAudioFrequencySlider::UAudioFrequencySlider(UAudioFrequencySlider *this,FVTableHelper *param_1)

{
  UAudioSliderBase::UAudioSliderBase((UAudioSliderBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->OutputRange).field0_0x0._s_0.X = 20.0;
  (this->OutputRange).field0_0x0._s_0.Y = 20000.0;
  return this;
}

// UAudioFrequencySlider @ 14d8b86e0

/* WARNING: Enum "Type": Some values do not have unique names */

UAudioFrequencySlider * __thiscall
UAudioFrequencySlider::UAudioFrequencySlider
          (UAudioFrequencySlider *this,FObjectInitializer *param_1)

{
  FText *pFVar1;
  FText local_18;
  
  UAudioSliderBase::UAudioSliderBase((UAudioSliderBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->OutputRange).field0_0x0._s_0.X = 20.0;
  (this->OutputRange).field0_0x0._s_0.Y = 20000.0;
  pFVar1 = FText::FromString(&local_18,"Hz");
  UAudioSliderBase::SetUnitsText((UAudioSliderBase *)this,pFVar1);
  return this;
}

// ~UAudioFrequencySlider @ 14d8c10a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioFrequencySlider::~UAudioFrequencySlider(UAudioFrequencySlider *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  UAudioSliderBase::~UAudioSliderBase((UAudioSliderBase *)this);
  return;
}

// GetPrivateStaticClass @ 14d933420

UClass * __cdecl UAudioFrequencySlider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioFrequencySlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioFrequencySlider",
               &Z_Registration_Info_UClass_UAudioFrequencySlider.InnerSingleton,
               StaticRegisterNativesUAudioFrequencySlider,0x940,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioFrequencySlider>,
               InternalVTableHelperCtorCaller<UAudioFrequencySlider>,local_res8,
               UAudioSliderBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioFrequencySlider.InnerSingleton;
}

// RebuildWidget @ 14d95e750

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UAudioFrequencySlider::RebuildWidget
          (UAudioFrequencySlider *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  SWidget *pSVar3;
  code *pcVar4;
  SAudioFrequencySlider *pSVar5;
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
  UAudioFrequencySlider *local_res18;
  FName local_res20;
  undefined1 local_448 [8];
  FDelegateAllocation local_440;
  TSlateDecl<SAudioFrequencySlider,RequiredArgs::T0RequiredArgs> local_430;
  FMemScope local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  SAudioFrequencySlider *local_408;
  FSharedReferencer<1> local_400;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  FDestructionSentinel local_3e8;
  FDestructionSentinel local_3d0;
  FDelegateAllocation *local_3b8;
  FArguments local_3b0;
  
  pFVar10 = SAudioSliderBase::FArguments::FArguments(&local_3b0);
  uStack_410 = 0;
  pFVar10->_Style = (FAudioSliderStyle *)&this->_padding_;
  local_418 = (FMemScope)UAudioSliderBase::HandleOnValueChanged;
  uStack_40c = uStack_3ec;
  local_448 = (undefined1  [8])0x0;
  local_440.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_440.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_448,
             (FWriteAccessScope *)&local_3d0);
  local_3b8 = &local_440;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_440);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUAudioFrequencySlider____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UAudioFrequencySlider *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_res18 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UAudioFrequencySlider *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res18);
    *(FMemScope *)(puVar11 + 4) = local_418;
    puVar11[5] = CONCAT44(uStack_40c,uStack_410);
  }
  if (local_3d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d0.Accessor,&local_3d0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnValueChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_448);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_418,&local_res20,true);
  TSlateDecl<SAudioFrequencySlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioFrequencySlider,RequiredArgs::T0RequiredArgs>
            (&local_430,"SAudioFrequencySlider",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSlider.cpp"
             ,0x11a,local_res8);
  FMemScope::~FMemScope(&local_418);
  FLLMScope::~FLLMScope(local_res10);
  pSVar5 = local_430._Widget.Object;
  if (local_430._Widget.Object == (SAudioFrequencySlider *)0x0) {
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
  SWidget::SWidgetConstruct((SWidget *)local_430._Widget.Object,(FSlateBaseNamedArgs *)pFVar10);
  (**(code **)(*(longlong *)local_430._Widget.Object + 0x290))(local_430._Widget.Object,pFVar10);
  if (local_430._Widget.Object == (SAudioFrequencySlider *)0x0) {
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
  if ((local_430._Widget.Object)->bForceVolatile == '\0') {
    cVar8 = (**(code **)(*(longlong *)local_430._Widget.Object + 0x228))(local_430._Widget.Object);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_14d95e991;
  }
  bVar9 = 0x20;
LAB_14d95e991:
  (local_430._Widget.Object)->bCachedVolatile = '\0';
  (local_430._Widget.Object)->field_0x30 = (local_430._Widget.Object)->field_0x30 | bVar9;
  if (local_430._Widget.Object == (SAudioFrequencySlider *)0x0) {
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
  (local_430._Widget.Object)->bIsDeclarativeSyntaxConstructionCompleted = '\x01';
  if (local_430._Widget.Object == (SAudioFrequencySlider *)0x0) {
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
  FVar6.ReferenceController = local_430._Widget.SharedReferenceCount.ReferenceController;
  local_430._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_430._Widget.Object = (SAudioFrequencySlider *)0x0;
  if (pSVar5 == (SAudioFrequencySlider *)0x0) {
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
  local_408 = pSVar5;
  local_400.ReferenceController = FVar6.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SAudioFrequencySlider **)&this->_padding_ != &local_408) {
    this->_padding_ = (longlong)pSVar5;
    local_408 = (SAudioFrequencySlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_400);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_400.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_448,
             (FWriteAccessScope *)&local_3e8);
  if ((local_440.DelegateSize != 0) &&
     (local_440.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_440.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_440,0,0,0x10);
    local_440.DelegateSize = 0;
  }
  if (local_3e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e8.Accessor,&local_3e8);
  }
  if (local_440.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_440.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_448);
  SAudioSliderBase::FArguments::~FArguments(&local_3b0);
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  plVar2 = (longlong *)this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (plVar2 == (longlong *)0x0) {
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
  local_3f8 = *(undefined4 *)&(this->OutputRange).field0_0x0;
  uStack_3f4 = *(undefined4 *)((longlong)&(this->OutputRange).field0_0x0 + 4);
  uStack_3f0 = *(undefined4 *)((longlong)&(this->OutputRange).field0_0x0 + 8);
  uStack_3ec = *(undefined4 *)((longlong)&(this->OutputRange).field0_0x0 + 0xc);
  (**(code **)(*plVar2 + 0x260))(plVar2,&local_3f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (this->_padding_ == 0) {
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
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  pSVar3 = (SWidget *)this->_padding_;
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

// StaticRegisterNativesUAudioFrequencySlider @ 14d971b60

void __cdecl UAudioFrequencySlider::StaticRegisterNativesUAudioFrequencySlider(void)

{
  return;
}

