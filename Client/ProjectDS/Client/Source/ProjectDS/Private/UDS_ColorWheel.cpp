// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// SetSelectedHSVColor_WrapperImpl @ 14b458c30

void __cdecl UDS_ColorWheel::SetSelectedHSVColor_WrapperImpl(void *param_1,void *param_2)

{
  FLinearColor_u_0 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  SetSelectedHSVColor(param_1,(FLinearColor *)&local_18._s_0);
  return;
}

// StaticClass @ 14b458c60

UClass * __cdecl UDS_ColorWheel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ColorWheel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ColorWheel",
               &Z_Registration_Info_UClass_UDS_ColorWheel.InnerSingleton,
               StaticRegisterNativesUDS_ColorWheel,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ColorWheel>,InternalVTableHelperCtorCaller<UDS_ColorWheel>,
               local_res8,UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ColorWheel.InnerSingleton;
}

// UDS_ColorWheel @ 14b45c7d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_ColorWheel * __thiscall
UDS_ColorWheel::UDS_ColorWheel(UDS_ColorWheel *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->SelectedHSVColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->MyColorWheel).Object = (SColorWheel *)0x0;
  (this->MyColorWheel).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  return this;
}

// UDS_ColorWheel @ 14b45c820

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_ColorWheel * __thiscall
UDS_ColorWheel::UDS_ColorWheel(UDS_ColorWheel *this,FObjectInitializer *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->SelectedHSVColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->MyColorWheel).Object = (SColorWheel *)0x0;
  (this->MyColorWheel).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  return this;
}

// ~UDS_ColorWheel @ 14b45d090

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ColorWheel::~UDS_ColorWheel(UDS_ColorWheel *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyColorWheel).SharedReferenceCount.ReferenceController);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b45e200

IClassDescriptor * __thiscall UDS_ColorWheel::GetFieldNotificationDescriptor(UDS_ColorWheel *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_ColorWheel::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b45e980

UClass * __cdecl UDS_ColorWheel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ColorWheel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ColorWheel",
               &Z_Registration_Info_UClass_UDS_ColorWheel.InnerSingleton,
               StaticRegisterNativesUDS_ColorWheel,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ColorWheel>,InternalVTableHelperCtorCaller<UDS_ColorWheel>,
               local_res8,UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ColorWheel.InnerSingleton;
}

// StaticRegisterNativesUDS_ColorWheel @ 14b45f240

void __cdecl UDS_ColorWheel::StaticRegisterNativesUDS_ColorWheel(void)

{
  return;
}

// GetSelectedHSVColor @ 14bca1a20

FLinearColor * __thiscall
UDS_ColorWheel::GetSelectedHSVColor(UDS_ColorWheel *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->SelectedHSVColor).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(this->SelectedHSVColor).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// OnValueChanged @ 14bcbca70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ColorWheel::OnValueChanged(UDS_ColorWheel *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  FFieldId local_18 [2];
  
  if (((((param_1->field0_0x0)._s_0.R != (this->SelectedHSVColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->SelectedHSVColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->SelectedHSVColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->SelectedHSVColor).field0_0x0._s_0.A)) {
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    *(undefined8 *)&(this->SelectedHSVColor).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
    *(undefined8 *)((longlong)&(this->SelectedHSVColor).field0_0x0 + 8) = uVar1;
    local_18[0].FieldName = FFieldNotificationClassDescriptor::SelectedHSVColor.FieldName;
    local_18[0].BitNumber = FFieldNotificationClassDescriptor::SelectedHSVColor.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,local_18);
  }
  return;
}

// RebuildWidget @ 14bcbfcd0

TSharedRef<SWidget,1> * __thiscall
UDS_ColorWheel::RebuildWidget(UDS_ColorWheel *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  SColorWheel *pSVar3;
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
  UDS_ColorWheel *local_res18;
  UDS_ColorWheel *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_438;
  FDelegateAllocation local_430;
  FMemScope local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined1 local_408 [8];
  FDelegateAllocation local_400;
  TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs> local_3f0;
  SColorWheel *local_3d8;
  FSharedReferencer<1> local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  bool local_3b8;
  undefined1 local_3b0 [8];
  ForAnyElementType FStack_3a8;
  int local_3a0;
  FName local_398;
  FDestructionSentinel local_390;
  FDestructionSentinel local_378;
  FDestructionSentinel local_360;
  FDestructionSentinel local_348;
  FDestructionSentinel local_330;
  FDelegateAllocation *local_318;
  FDestructionSentinel local_310;
  FDelegateAllocation *local_2f8;
  undefined1 local_2f0 [528];
  undefined1 local_e0 [40];
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  undefined1 local_88 [24];
  undefined1 local_70 [32];
  undefined1 local_50 [24];
  
  pFVar9 = SColorWheel::FArguments::FArguments((FArguments *)local_2f0);
  uStack_410 = 0;
  local_438.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_418 = (FMemScope)GetSelectedHSVColor;
  local_430.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_430.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_438,(FWriteAccessScope *)&local_330);
  local_318 = &local_430;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_430);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__00__CBVUDS_ColorWheel____A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ColorWheel *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_res18 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ColorWheel *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res18);
    *(FMemScope *)(puVar10 + 4) = local_418;
    puVar10[5] = CONCAT44(uStack_40c,uStack_410);
  }
  if (local_330.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_330.Accessor,&local_330);
  }
  local_3b8 = true;
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_3b0 = (undefined1  [8])0x0;
  FStack_3a8.Data = (FScriptContainerElement *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_438,(FWriteAccessScope *)&local_390);
  if (FStack_3a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3a8.Data);
  }
  FStack_3a8.Data = (FScriptContainerElement *)local_430.DelegateAllocator;
  local_3a0 = local_430.DelegateSize;
  local_430.DelegateSize = 0;
  local_430.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  if (local_390.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_390.Accessor,&local_390);
  }
  *(undefined8 *)&(pFVar9->_SelectedColor).Value.field0_0x0 = local_3c8;
  *(undefined8 *)((longlong)&(pFVar9->_SelectedColor).Value.field0_0x0 + 8) = uStack_3c0;
  (pFVar9->_SelectedColor).bIsSet = local_3b8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_SelectedColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3b0,
             (FWriteAccessScope *)&local_378);
  if ((local_3a0 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)FStack_3a8.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_3a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3a8,0,0,0x10);
    local_3a0 = 0;
  }
  if (local_378.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_378.Accessor,&local_378);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)FStack_3a8.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(FStack_3a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3b0);
  uStack_410 = 0;
  local_418 = (FMemScope)OnValueChanged;
  local_408 = (undefined1  [8])0x0;
  local_400.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_400.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_408,
             (FWriteAccessScope *)&local_310);
  local_2f8 = &local_400;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_400);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXUFLinearColor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ColorWheel____A6AXUFLinearColor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ColorWheel *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_res20 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ColorWheel *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res20);
    *(FMemScope *)(puVar10 + 4) = local_418;
    puVar10[5] = CONCAT44(uStack_40c,uStack_410);
  }
  if (local_310.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_310.Accessor,&local_310);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnValueChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_408);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_398 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_418,&local_398,true);
  TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs>
            (&local_3f0,"SColorWheel",
             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\BaseWidget\\DS_ColorWheel.cpp"
             ,8,local_res8);
  FMemScope::~FMemScope(&local_418);
  FLLMScope::~FLLMScope(local_res10);
  pSVar3 = local_3f0._Widget.Object;
  if (local_3f0._Widget.Object == (SColorWheel *)0x0) {
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
  SWidget::SWidgetConstruct((SWidget *)local_3f0._Widget.Object,(FSlateBaseNamedArgs *)pFVar9);
  SColorWheel::Construct(local_3f0._Widget.Object,pFVar9);
  if (local_3f0._Widget.Object == (SColorWheel *)0x0) {
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
  if (((local_3f0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_3f0._Widget.Object)->_padding_ + 0x228))(local_3f0._Widget.Object);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_14bcc00bc;
  }
  bVar8 = 0x20;
LAB_14bcc00bc:
  *(byte *)&(local_3f0._Widget.Object)->_padding_ =
       (byte)(local_3f0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_3f0._Widget.Object)->_padding_ =
       (byte)(local_3f0._Widget.Object)->_padding_ | bVar8;
  if (local_3f0._Widget.Object == (SColorWheel *)0x0) {
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
  pbVar1 = (byte *)((longlong)&(local_3f0._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_3f0._Widget.Object == (SColorWheel *)0x0) {
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
  FVar5.ReferenceController = local_3f0._Widget.SharedReferenceCount.ReferenceController;
  local_3f0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3f0._Widget.Object = (SColorWheel *)0x0;
  if (pSVar3 == (SColorWheel *)0x0) {
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
  local_3d8 = pSVar3;
  local_3d0.ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyColorWheel != (TSharedPtr<SColorWheel,1> *)&local_3d8) {
    (this->MyColorWheel).Object = pSVar3;
    local_3d8 = (SColorWheel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyColorWheel).SharedReferenceCount,&local_3d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_408,
             (FWriteAccessScope *)&local_360);
  if ((local_400.DelegateSize != 0) &&
     (local_400.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_400.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_400,0,0,0x10);
    local_400.DelegateSize = 0;
  }
  if (local_360.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_360.Accessor,&local_360);
  }
  if (local_400.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_400.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_408);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_438,(FWriteAccessScope *)&local_348);
  if ((local_430.DelegateSize != 0) &&
     (local_430.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_430.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_430,0,0,0x10);
    local_430.DelegateSize = 0;
  }
  if (local_348.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_348.Accessor,&local_348);
  }
  if (local_430.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_430.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_438.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_50);
  if ((void *)local_50._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_50._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_50);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_70);
  if ((void *)local_70._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_70._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_70);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_88);
  if ((void *)local_88._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_88);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a0);
  if ((void *)local_a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b8);
  if ((void *)local_b8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
  if ((void *)local_e0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_2f0);
  if ((this->MyColorWheel).Object == (SColorWheel *)0x0) {
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
  pTVar2 = (this->MyColorWheel).SharedReferenceCount.ReferenceController;
  pSVar3 = (this->MyColorWheel).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SColorWheel *)0x0) {
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

// ReleaseSlateResources @ 14bcc3ac0

void __thiscall UDS_ColorWheel::ReleaseSlateResources(UDS_ColorWheel *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyColorWheel != (TSharedPtr<SColorWheel,1> *)&local_18) {
    (this->MyColorWheel).Object = (SColorWheel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyColorWheel).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  UVisual::ReleaseSlateResources((UVisual *)this,param_1);
  return;
}

// SetSelectedHSVColor @ 14bcc87e0

void __thiscall UDS_ColorWheel::SetSelectedHSVColor(UDS_ColorWheel *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->SelectedHSVColor).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->SelectedHSVColor).field0_0x0 + 8) = uVar1;
  return;
}

// SynchronizeProperties @ 14bcca620

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ColorWheel::SynchronizeProperties(UDS_ColorWheel *this)

{
  SColorWheel *this_00;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  this_00 = (this->MyColorWheel).Object;
  if (this_00 != (SColorWheel *)0x0) {
    SWidget::Invalidate((SWidget *)this_00,Paint);
    return;
  }
  return;
}

