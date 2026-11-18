// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 8

// StaticClass @ 14d891dc0

UClass * __cdecl UAudioSlider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioSlider",
               &Z_Registration_Info_UClass_UAudioSlider.InnerSingleton,
               StaticRegisterNativesUAudioSlider,0x940,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UAudioSlider>,InternalVTableHelperCtorCaller<UAudioSlider>,
               local_res8,UAudioSliderBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioSlider.InnerSingleton;
}

// UAudioSlider @ 14d8b9e50

/* WARNING: Enum "Type": Some values do not have unique names */

UAudioSlider * __thiscall UAudioSlider::UAudioSlider(UAudioSlider *this,FVTableHelper *param_1)

{
  UAudioSliderBase::UAudioSliderBase((UAudioSliderBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->LinToOutputCurve).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OutputToLinCurve).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UAudioSlider @ 14d8b9ea0

/* WARNING: Enum "Type": Some values do not have unique names */

UAudioSlider * __thiscall UAudioSlider::UAudioSlider(UAudioSlider *this,FObjectInitializer *param_1)

{
  UAudioSliderBase::UAudioSliderBase((UAudioSliderBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->LinToOutputCurve).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OutputToLinCurve).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UAudioSlider @ 14d8c16c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioSlider::~UAudioSlider(UAudioSlider *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  UAudioSliderBase::~UAudioSliderBase((UAudioSliderBase *)this);
  return;
}

// GetPrivateStaticClass @ 14d933de0

UClass * __cdecl UAudioSlider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioSlider",
               &Z_Registration_Info_UClass_UAudioSlider.InnerSingleton,
               StaticRegisterNativesUAudioSlider,0x940,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UAudioSlider>,InternalVTableHelperCtorCaller<UAudioSlider>,
               local_res8,UAudioSliderBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioSlider.InnerSingleton;
}

// RebuildWidget @ 14d960d80

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UAudioSlider::RebuildWidget(UAudioSlider *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  code *pcVar4;
  SAudioSlider *pSVar5;
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
  UAudioSlider *local_res18;
  FName local_res20;
  undefined1 local_438 [8];
  FDelegateAllocation local_430;
  FMemScope local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  TSlateDecl<SAudioSlider,RequiredArgs::T0RequiredArgs> local_408;
  SAudioSlider *local_3f0;
  FSharedReferencer<1> local_3e8;
  FDestructionSentinel local_3e0;
  FDestructionSentinel local_3c8;
  FDelegateAllocation *local_3b0;
  FArguments local_3a8;
  
  pFVar10 = SAudioSliderBase::FArguments::FArguments(&local_3a8);
  uStack_410 = 0;
  pFVar10->_Style = (FAudioSliderStyle *)&this->_padding_;
  local_418 = (FMemScope)UAudioSliderBase::HandleOnValueChanged;
  local_438 = (undefined1  [8])0x0;
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
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUAudioSlider____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UAudioSlider *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_res18 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UAudioSlider *)0x0)) {
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
  TSlateDecl<SAudioSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioSlider,RequiredArgs::T0RequiredArgs>
            (&local_408,"SAudioSlider",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSlider.cpp"
             ,0xf8,local_res8);
  FMemScope::~FMemScope(&local_418);
  FLLMScope::~FLLMScope(local_res10);
  pSVar5 = local_408._Widget.Object;
  if (local_408._Widget.Object == (SAudioSlider *)0x0) {
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
  (**(code **)((local_408._Widget.Object)->_padding_ + 0x290))(local_408._Widget.Object,pFVar10);
  if (local_408._Widget.Object == (SAudioSlider *)0x0) {
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
  if (((local_408._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)((local_408._Widget.Object)->_padding_ + 0x228))(local_408._Widget.Object);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_14d960fc2;
  }
  bVar9 = 0x20;
LAB_14d960fc2:
  *(byte *)&(local_408._Widget.Object)->_padding_ =
       (byte)(local_408._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_408._Widget.Object)->_padding_ =
       (byte)(local_408._Widget.Object)->_padding_ | bVar9;
  if (local_408._Widget.Object == (SAudioSlider *)0x0) {
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
  pbVar1 = (byte *)((longlong)&(local_408._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_408._Widget.Object == (SAudioSlider *)0x0) {
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
  local_408._Widget.Object = (SAudioSlider *)0x0;
  if (pSVar5 == (SAudioSlider *)0x0) {
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
  if ((SAudioSlider **)&this->_padding_ != &local_3f0) {
    this->_padding_ = (longlong)pSVar5;
    local_3f0 = (SAudioSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_3e8);
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
  pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
  pSVar3 = (SWidget *)this->_padding_;
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

// StaticRegisterNativesUAudioSlider @ 14d971d80

void __cdecl UAudioSlider::StaticRegisterNativesUAudioSlider(void)

{
  return;
}

// SynchronizeProperties @ 14d974770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioSlider::SynchronizeProperties(UAudioSlider *this)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  SAudioTextBox *this_00;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  float *pfVar6;
  float fVar7;
  
  UAudioSliderBase::SynchronizeProperties((UAudioSliderBase *)this);
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  plVar2 = (longlong *)this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (plVar2 == (longlong *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(FWeakObjectPtr *)(plVar2 + 0xae) = (this->LinToOutputCurve).WeakPtr;
  if (plVar2[0x8b] == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_00 = (SAudioTextBox *)plVar2[0x8b];
  pcVar4 = *(code **)(*plVar2 + 0x298);
  pfVar6 = TAttribute<float>::Get((TAttribute<float> *)(plVar2 + 0x5c));
  fVar7 = (float)(*pcVar4)(plVar2,*pfVar6);
  SAudioTextBox::SetValueText(this_00,fVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  lVar3 = this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (lVar3 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(FWeakObjectPtr *)(lVar3 + 0x578) = (this->OutputToLinCurve).WeakPtr;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

