// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// SetSelectedHSVColor_WrapperImpl @ 14b458140

void __cdecl UDS_ColorSpectrum::SetSelectedHSVColor_WrapperImpl(void *param_1,void *param_2)

{
  FLinearColor_u_0 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  SetSelectedHSVColor(param_1,(FLinearColor *)&local_18._s_0);
  return;
}

// StaticClass @ 14b4581b0

UClass * __cdecl UDS_ColorSpectrum::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ColorSpectrum.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ColorSpectrum",
               &Z_Registration_Info_UClass_UDS_ColorSpectrum.InnerSingleton,
               StaticRegisterNativesUDS_ColorSpectrum,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ColorSpectrum>,
               InternalVTableHelperCtorCaller<UDS_ColorSpectrum>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ColorSpectrum.InnerSingleton;
}

// UDS_ColorSpectrum @ 14b45c730

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_ColorSpectrum * __thiscall
UDS_ColorSpectrum::UDS_ColorSpectrum(UDS_ColorSpectrum *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->SelectedHSVColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->MyColorSpectrum).Object = (SColorSpectrum *)0x0;
  (this->MyColorSpectrum).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UDS_ColorSpectrum @ 14b45c780

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_ColorSpectrum * __thiscall
UDS_ColorSpectrum::UDS_ColorSpectrum(UDS_ColorSpectrum *this,FObjectInitializer *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->SelectedHSVColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->MyColorSpectrum).Object = (SColorSpectrum *)0x0;
  (this->MyColorSpectrum).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UDS_ColorSpectrum @ 14b45d050

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ColorSpectrum::~UDS_ColorSpectrum(UDS_ColorSpectrum *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyColorSpectrum).SharedReferenceCount.ReferenceController);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b45e190

IClassDescriptor * __thiscall
UDS_ColorSpectrum::GetFieldNotificationDescriptor(UDS_ColorSpectrum *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_ColorSpectrum::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b45e8c0

UClass * __cdecl UDS_ColorSpectrum::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ColorSpectrum.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ColorSpectrum",
               &Z_Registration_Info_UClass_UDS_ColorSpectrum.InnerSingleton,
               StaticRegisterNativesUDS_ColorSpectrum,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ColorSpectrum>,
               InternalVTableHelperCtorCaller<UDS_ColorSpectrum>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ColorSpectrum.InnerSingleton;
}

// StaticRegisterNativesUDS_ColorSpectrum @ 14b45f230

void __cdecl UDS_ColorSpectrum::StaticRegisterNativesUDS_ColorSpectrum(void)

{
  return;
}

// GetSelectedHSVColor @ 14bca1a00

FLinearColor * __thiscall
UDS_ColorSpectrum::GetSelectedHSVColor(UDS_ColorSpectrum *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->SelectedHSVColor).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(this->SelectedHSVColor).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// OnValueChanged @ 14bcbc9f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ColorSpectrum::OnValueChanged(UDS_ColorSpectrum *this,FLinearColor *param_1)

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

// RebuildWidget @ 14bcbf580

TSharedRef<SWidget,1> * __thiscall
UDS_ColorSpectrum::RebuildWidget
          (UDS_ColorSpectrum *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  SColorSpectrum *pSVar3;
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
  UDS_ColorSpectrum *local_res18;
  UDS_ColorSpectrum *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_418;
  FDelegateAllocation local_410;
  FMemScope local_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined1 local_3e8 [8];
  FDelegateAllocation local_3e0;
  TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs> local_3d0;
  SColorSpectrum *local_3b8;
  FSharedReferencer<1> local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  bool local_398;
  undefined1 local_390 [8];
  ForAnyElementType FStack_388;
  int local_380;
  FName local_378;
  FDestructionSentinel local_370;
  FDestructionSentinel local_358;
  FDestructionSentinel local_340;
  FDestructionSentinel local_328;
  FDestructionSentinel local_310;
  FDelegateAllocation *local_2f8;
  FDestructionSentinel local_2f0;
  FDelegateAllocation *local_2d8;
  undefined1 local_2d0 [528];
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  
  pFVar9 = SColorSpectrum::FArguments::FArguments((FArguments *)local_2d0);
  uStack_3f0 = 0;
  local_418.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_3f8 = (FMemScope)GetSelectedHSVColor;
  local_410.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_410.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_418,(FWriteAccessScope *)&local_310);
  local_2f8 = &local_410;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_410);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__00__CBVUDS_ColorSpectrum____A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ColorSpectrum *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_res18 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ColorSpectrum *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res18);
    *(FMemScope *)(puVar10 + 4) = local_3f8;
    puVar10[5] = CONCAT44(uStack_3ec,uStack_3f0);
  }
  if (local_310.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_310.Accessor,&local_310);
  }
  local_398 = true;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_390 = (undefined1  [8])0x0;
  FStack_388.Data = (FScriptContainerElement *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_418,(FWriteAccessScope *)&local_370);
  if (FStack_388.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_388.Data);
  }
  FStack_388.Data = (FScriptContainerElement *)local_410.DelegateAllocator;
  local_380 = local_410.DelegateSize;
  local_410.DelegateSize = 0;
  local_410.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  if (local_370.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_370.Accessor,&local_370);
  }
  *(undefined8 *)&(pFVar9->_SelectedColor).Value.field0_0x0 = local_3a8;
  *(undefined8 *)((longlong)&(pFVar9->_SelectedColor).Value.field0_0x0 + 8) = uStack_3a0;
  (pFVar9->_SelectedColor).bIsSet = local_398;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_SelectedColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_390);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_390,
             (FWriteAccessScope *)&local_358);
  if ((local_380 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)FStack_388.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_388.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_388,0,0,0x10);
    local_380 = 0;
  }
  if (local_358.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_358.Accessor,&local_358);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)FStack_388.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(FStack_388.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_390);
  uStack_3f0 = 0;
  local_3f8 = (FMemScope)OnValueChanged;
  local_3e8 = (undefined1  [8])0x0;
  local_3e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_3e0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3e8,
             (FWriteAccessScope *)&local_2f0);
  local_2d8 = &local_3e0;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_3e0);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXUFLinearColor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ColorSpectrum____A6AXUFLinearColor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ColorSpectrum *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_res20 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ColorSpectrum *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res20);
    *(FMemScope *)(puVar10 + 4) = local_3f8;
    puVar10[5] = CONCAT44(uStack_3ec,uStack_3f0);
  }
  if (local_2f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2f0.Accessor,&local_2f0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnValueChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3e8);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_378 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3f8,&local_378,true);
  TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>
            (&local_3d0,"SColorSpectrum",
             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\BaseWidget\\DS_ColorSpectrum.cpp"
             ,8,local_res8);
  FMemScope::~FMemScope(&local_3f8);
  FLLMScope::~FLLMScope(local_res10);
  pSVar3 = local_3d0._Widget.Object;
  if (local_3d0._Widget.Object == (SColorSpectrum *)0x0) {
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
  SWidget::SWidgetConstruct((SWidget *)local_3d0._Widget.Object,(FSlateBaseNamedArgs *)pFVar9);
  SColorSpectrum::Construct(local_3d0._Widget.Object,pFVar9);
  if (local_3d0._Widget.Object == (SColorSpectrum *)0x0) {
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
  if (((local_3d0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_3d0._Widget.Object)->_padding_ + 0x228))(local_3d0._Widget.Object);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_14bcbf96c;
  }
  bVar8 = 0x20;
LAB_14bcbf96c:
  *(byte *)&(local_3d0._Widget.Object)->_padding_ =
       (byte)(local_3d0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_3d0._Widget.Object)->_padding_ =
       (byte)(local_3d0._Widget.Object)->_padding_ | bVar8;
  if (local_3d0._Widget.Object == (SColorSpectrum *)0x0) {
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
  pbVar1 = (byte *)((longlong)&(local_3d0._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_3d0._Widget.Object == (SColorSpectrum *)0x0) {
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
  FVar5.ReferenceController = local_3d0._Widget.SharedReferenceCount.ReferenceController;
  local_3d0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3d0._Widget.Object = (SColorSpectrum *)0x0;
  if (pSVar3 == (SColorSpectrum *)0x0) {
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
  local_3b8 = pSVar3;
  local_3b0.ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyColorSpectrum != (TSharedPtr<SColorSpectrum,1> *)&local_3b8) {
    (this->MyColorSpectrum).Object = pSVar3;
    local_3b8 = (SColorSpectrum *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyColorSpectrum).SharedReferenceCount,&local_3b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3e8,
             (FWriteAccessScope *)&local_340);
  if ((local_3e0.DelegateSize != 0) &&
     (local_3e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_3e0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_3e0,0,0,0x10);
    local_3e0.DelegateSize = 0;
  }
  if (local_340.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_340.Accessor,&local_340);
  }
  if (local_3e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_3e0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_418,(FWriteAccessScope *)&local_328);
  if ((local_410.DelegateSize != 0) &&
     (local_410.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_410.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_410,0,0,0x10);
    local_410.DelegateSize = 0;
  }
  if (local_328.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_328.Accessor,&local_328);
  }
  if (local_410.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_410.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_418.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
  if ((void *)local_58._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_58._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
  if ((void *)local_78._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
  if ((void *)local_90._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_90._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_90);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
  if ((void *)local_a8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c0);
  if ((void *)local_c0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_2d0);
  if ((this->MyColorSpectrum).Object == (SColorSpectrum *)0x0) {
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
  pTVar2 = (this->MyColorSpectrum).SharedReferenceCount.ReferenceController;
  pSVar3 = (this->MyColorSpectrum).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SColorSpectrum *)0x0) {
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

// ReleaseSlateResources @ 14bcc3a50

void __thiscall UDS_ColorSpectrum::ReleaseSlateResources(UDS_ColorSpectrum *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyColorSpectrum != (TSharedPtr<SColorSpectrum,1> *)&local_18) {
    (this->MyColorSpectrum).Object = (SColorSpectrum *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyColorSpectrum).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  UVisual::ReleaseSlateResources((UVisual *)this,param_1);
  return;
}

// SetSelectedHSVColor @ 14bcc87c0

void __thiscall
UDS_ColorSpectrum::SetSelectedHSVColor(UDS_ColorSpectrum *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->SelectedHSVColor).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->SelectedHSVColor).field0_0x0 + 8) = uVar1;
  return;
}

// SynchronizeProperties @ 14bcca5e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ColorSpectrum::SynchronizeProperties(UDS_ColorSpectrum *this)

{
  SColorSpectrum *this_00;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  this_00 = (this->MyColorSpectrum).Object;
  if (this_00 != (SColorSpectrum *)0x0) {
    SWidget::Invalidate((SWidget *)this_00,Paint);
    return;
  }
  return;
}

