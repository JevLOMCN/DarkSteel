// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 47

// operator() @ 142d6a6a0

void __thiscall `SSidebarContainer::ConstructBoxPanel'::__l5::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  FSlot *this_00;
  FSlotArguments *pFVar2;
  FSlot *local_res8;
  undefined8 local_138;
  FSharedReferencer<1> local_130;
  TAttribute<float> local_128;
  undefined **local_108;
  undefined8 *local_100 [2];
  TReferenceControllerBase<1> *local_f0;
  undefined1 local_d0 [40];
  FSlotArgumentsMixin local_a8;
  TPanelChildren<SBoxPanel::FSlot> *local_18;
  int local_10;
  
  lVar1 = **(longlong **)((longlong)this + 0x10);
  this_00 = ::operator_new(0x58);
  local_res8 = (FSlot *)0x0;
  if (this_00 != (FSlot *)0x0) {
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&this_00->field_0x8 = 0;
    *(undefined8 *)&this_00->field_0x10 = 0;
    *(undefined8 *)&this_00->field_0x18 = 0;
    *(undefined8 *)&this_00->field_0x20 = 0;
    *(undefined8 *)&this_00->field_0x28 = 0;
    *(undefined8 *)&this_00->field_0x30 = 0;
    *(undefined8 *)&this_00->field_0x38 = 0;
    *(undefined8 *)&this_00->field_0x40 = 0;
    *(undefined8 *)&this_00->field_0x48 = 0;
    *(undefined8 *)&this_00->field_0x50 = 0;
    local_res8 = SHorizontalBox::FSlot::FSlot(this_00);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_100,(FSlot *)&local_res8);
  local_18 = (TPanelChildren<SBoxPanel::FSlot> *)(lVar1 + 0x218);
  local_10 = -1;
  local_108 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
  local_128.Getter._16_8_ = 0;
  local_128.Value = 1.0;
  local_128.bIsSet = true;
  local_128.Getter._0_8_ = 0;
  local_128.Getter._8_8_ = 0;
  pFVar2 = SHorizontalBox::FSlot::FSlotArguments::FillWidth((FSlotArguments *)local_100,&local_128);
  local_138 = **(undefined8 **)((longlong)this + 8);
  local_130.ReferenceController =
       (TReferenceControllerBase<1> *)(*(undefined8 **)((longlong)this + 8))[1];
  if (local_130.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_130.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_130.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((undefined8 *)&pFVar2->field_0x8 != &local_138) {
    *(undefined8 *)&pFVar2->field_0x8 = local_138;
    local_138 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar2->field_0x10,&local_130);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_130.ReferenceController);
  local_108 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
  if (local_100[0] != (undefined8 *)0x0) {
    if (local_10 == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_18,(FSlotArguments *)local_100);
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot(local_18,(FSlotArguments *)local_100,local_10);
    }
  }
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0);
  if ((void *)local_d0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f0);
  if (local_100[0] != (undefined8 *)0x0) {
    (**(code **)*local_100[0])(local_100[0],1);
  }
  return;
}

// operator() @ 142d6ae40

void __thiscall `SSidebarContainer::ConstructBoxPanel'::__l5::<lambda_2>::operator()(void *this)

{
  longlong lVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FSlot *this_00;
  FSlotArguments *pFVar6;
  FSlot *local_res8;
  longlong local_128;
  FSharedReferencer<1> local_120;
  undefined **local_118;
  undefined8 *local_110 [2];
  TReferenceControllerBase<1> *local_100;
  undefined1 local_e0 [40];
  FSlotArgumentsMixin local_b8;
  TPanelChildren<SBoxPanel::FSlot> *local_28;
  int local_20;
  
  lVar1 = **(longlong **)((longlong)this + 8);
  this_00 = ::operator_new(0x58);
  local_res8 = (FSlot *)0x0;
  if (this_00 != (FSlot *)0x0) {
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&this_00->field_0x8 = 0;
    *(undefined8 *)&this_00->field_0x10 = 0;
    *(undefined8 *)&this_00->field_0x18 = 0;
    *(undefined8 *)&this_00->field_0x20 = 0;
    *(undefined8 *)&this_00->field_0x28 = 0;
    *(undefined8 *)&this_00->field_0x30 = 0;
    *(undefined8 *)&this_00->field_0x38 = 0;
    *(undefined8 *)&this_00->field_0x40 = 0;
    *(undefined8 *)&this_00->field_0x48 = 0;
    *(undefined8 *)&this_00->field_0x50 = 0;
    local_res8 = SHorizontalBox::FSlot::FSlot(this_00);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_110,(FSlot *)&local_res8);
  local_28 = (TPanelChildren<SBoxPanel::FSlot> *)(lVar1 + 0x218);
  local_20 = -1;
  local_118 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
  pFVar6 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_110);
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x2a8) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar1 + 0x2a8);
  pTVar3 = *(TReferenceControllerBase<1> **)(lVar1 + 0x2b0);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (lVar2 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_128 = lVar2;
  local_120.ReferenceController = pTVar3;
  if ((longlong *)&pFVar6->field_0x8 != &local_128) {
    *(longlong *)&pFVar6->field_0x8 = lVar2;
    local_128 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar6->field_0x10,&local_120);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_120.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_118 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
  if (local_110[0] != (undefined8 *)0x0) {
    if (local_20 == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_28,(FSlotArguments *)local_110);
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot(local_28,(FSlotArguments *)local_110,local_20);
    }
  }
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
  if ((void *)local_e0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100);
  if (local_110[0] != (undefined8 *)0x0) {
    (**(code **)*local_110[0])(local_110[0],1);
  }
  return;
}

// operator() @ 142d6b040

void __thiscall `SSidebarContainer::ConstructBoxPanel'::__l15::<lambda_3>::operator()(void *this)

{
  longlong lVar1;
  FSlot *this_00;
  FSlotArguments *pFVar2;
  FSlot *local_res8;
  undefined8 local_138;
  FSharedReferencer<1> local_130;
  TAttribute<float> local_128;
  undefined **local_108;
  undefined8 *local_100 [2];
  TReferenceControllerBase<1> *local_f0;
  undefined1 local_d0 [40];
  FSlotArgumentsMixin local_a8;
  TPanelChildren<SBoxPanel::FSlot> *local_18;
  int local_10;
  
  lVar1 = **(longlong **)((longlong)this + 0x10);
  this_00 = ::operator_new(0x58);
  local_res8 = (FSlot *)0x0;
  if (this_00 != (FSlot *)0x0) {
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&this_00->field_0x8 = 0;
    *(undefined8 *)&this_00->field_0x10 = 0;
    *(undefined8 *)&this_00->field_0x18 = 0;
    *(undefined8 *)&this_00->field_0x20 = 0;
    *(undefined8 *)&this_00->field_0x28 = 0;
    *(undefined8 *)&this_00->field_0x30 = 0;
    *(undefined8 *)&this_00->field_0x38 = 0;
    *(undefined8 *)&this_00->field_0x40 = 0;
    *(undefined8 *)&this_00->field_0x48 = 0;
    *(undefined8 *)&this_00->field_0x50 = 0;
    local_res8 = SVerticalBox::FSlot::FSlot(this_00);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_100,(FSlot *)&local_res8);
  local_18 = (TPanelChildren<SBoxPanel::FSlot> *)(lVar1 + 0x218);
  local_10 = -1;
  local_108 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  local_128.Getter._16_8_ = 0;
  local_128.Value = 1.0;
  local_128.bIsSet = true;
  local_128.Getter._0_8_ = 0;
  local_128.Getter._8_8_ = 0;
  pFVar2 = SVerticalBox::FSlot::FSlotArguments::FillHeight((FSlotArguments *)local_100,&local_128);
  local_138 = **(undefined8 **)((longlong)this + 8);
  local_130.ReferenceController =
       (TReferenceControllerBase<1> *)(*(undefined8 **)((longlong)this + 8))[1];
  if (local_130.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_130.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_130.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((undefined8 *)&pFVar2->field_0x8 != &local_138) {
    *(undefined8 *)&pFVar2->field_0x8 = local_138;
    local_138 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar2->field_0x10,&local_130);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_130.ReferenceController);
  local_108 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  if (local_100[0] != (undefined8 *)0x0) {
    if (local_10 == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_18,(FSlotArguments *)local_100);
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot(local_18,(FSlotArguments *)local_100,local_10);
    }
  }
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0);
  if ((void *)local_d0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f0);
  if (local_100[0] != (undefined8 *)0x0) {
    (**(code **)*local_100[0])(local_100[0],1);
  }
  return;
}

// operator() @ 142d6b1e0

void __thiscall `SSidebarContainer::ConstructBoxPanel'::__l15::<lambda_4>::operator()(void *this)

{
  longlong lVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FSlot *this_00;
  FSlotArguments *pFVar6;
  FSlot *local_res8;
  longlong local_128;
  FSharedReferencer<1> local_120;
  undefined **local_118;
  undefined8 *local_110 [2];
  TReferenceControllerBase<1> *local_100;
  undefined1 local_e0 [40];
  FSlotArgumentsMixin local_b8;
  TPanelChildren<SBoxPanel::FSlot> *local_28;
  int local_20;
  
  lVar1 = **(longlong **)((longlong)this + 8);
  this_00 = ::operator_new(0x58);
  local_res8 = (FSlot *)0x0;
  if (this_00 != (FSlot *)0x0) {
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&this_00->field_0x8 = 0;
    *(undefined8 *)&this_00->field_0x10 = 0;
    *(undefined8 *)&this_00->field_0x18 = 0;
    *(undefined8 *)&this_00->field_0x20 = 0;
    *(undefined8 *)&this_00->field_0x28 = 0;
    *(undefined8 *)&this_00->field_0x30 = 0;
    *(undefined8 *)&this_00->field_0x38 = 0;
    *(undefined8 *)&this_00->field_0x40 = 0;
    *(undefined8 *)&this_00->field_0x48 = 0;
    *(undefined8 *)&this_00->field_0x50 = 0;
    local_res8 = SVerticalBox::FSlot::FSlot(this_00);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_110,(FSlot *)&local_res8);
  local_28 = (TPanelChildren<SBoxPanel::FSlot> *)(lVar1 + 0x218);
  local_20 = -1;
  local_118 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  pFVar6 = SVerticalBox::FSlot::FSlotArguments::AutoHeight((FSlotArguments *)local_110);
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x2a8) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar1 + 0x2a8);
  pTVar3 = *(TReferenceControllerBase<1> **)(lVar1 + 0x2b0);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (lVar2 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_128 = lVar2;
  local_120.ReferenceController = pTVar3;
  if ((longlong *)&pFVar6->field_0x8 != &local_128) {
    *(longlong *)&pFVar6->field_0x8 = lVar2;
    local_128 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar6->field_0x10,&local_120);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_120.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_118 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  if (local_110[0] != (undefined8 *)0x0) {
    if (local_20 == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_28,(FSlotArguments *)local_110);
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot(local_28,(FSlotArguments *)local_110,local_20);
    }
  }
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
  if ((void *)local_e0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100);
  if (local_110[0] != (undefined8 *)0x0) {
    (**(code **)*local_110[0])(local_110[0],1);
  }
  return;
}

// AddContentDockSlot @ 142d70790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall SSidebarContainer::AddContentDockSlot(SSidebarContainer *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FScopedWidgetSlotArguments *this_00;
  FSlotArguments *pFVar6;
  TSharedRef<SWidget,1> *pTVar7;
  undefined ***pppuVar8;
  undefined1 auStack_2d8 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2b8;
  FDelegateAllocation local_2b0;
  float local_2a0;
  bool local_29c;
  undefined1 local_298 [8];
  ForAnyElementType FStack_290;
  int local_288;
  uint local_280;
  undefined1 local_27c;
  undefined1 local_278 [8];
  ForAnyElementType FStack_270;
  ulonglong local_268;
  float local_260;
  undefined1 local_25c;
  undefined1 local_258 [8];
  ForAnyElementType FStack_250;
  int local_248;
  undefined4 local_240;
  undefined1 local_23c;
  undefined1 local_238 [8];
  ForAnyElementType FStack_230;
  ulonglong local_228;
  SWidget *local_220;
  FSharedReferencer<1> local_218 [2];
  code *local_208;
  undefined8 uStack_200;
  FDestructionSentinel local_1f8;
  FDestructionSentinel local_1e0;
  FDestructionSentinel local_1c8;
  FDestructionSentinel local_1b0;
  FDestructionSentinel local_198;
  FDestructionSentinel local_180;
  FDestructionSentinel local_168;
  FDelegateAllocation *local_150;
  TSharedRef<SWidget,1> local_148;
  code *local_138;
  undefined **local_128;
  SSidebarContainer *pSStack_120;
  undefined8 local_118;
  undefined ***local_110;
  FScopedWidgetSlotArguments local_108;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  if (((this->SidebarWidget).Object == (SSidebar *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = SSidebar::HasDrawerDocked((this->SidebarWidget).Object);
  if (bVar2) {
    local_110 = (undefined ***)0x0;
    local_128 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`SSidebarContainer::AddContentDockSlot'::`5'::<lambda_1>,0,0>
                 ::_vftable_;
    local_138 = UE::Core::Private::Function::
                TFunctionRefCaller<`SSidebarContainer::AddContentDockSlot'::__l5::<lambda_1>,float>
                ::Call;
    local_2b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_2b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_2b0.DelegateSize = 0;
    pSStack_120 = this;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_2b8,(FWriteAccessScope *)&local_168);
    local_150 = &local_2b0;
    puVar4 = UE::Core::Private::DelegateAllocate(0x50,&local_2b0);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AMXZUFDefaultDelegateUserPolicy__V__TFunction___A6AMXZ____V__6B_
      ;
      puVar4[4] = local_138;
      puVar4[9] = local_110;
      puVar4[6] = local_128;
      puVar4[7] = pSStack_120;
      puVar4[8] = local_118;
      if (puVar4[4] != 0) {
        local_138 = (code *)0x0;
      }
    }
    if (local_168.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
    }
    local_2a0 = 0.0;
    local_29c = true;
    local_298 = (undefined1  [8])0x0;
    FStack_290.Data = (FScriptContainerElement *)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_2b8,(FWriteAccessScope *)&local_1f8);
    if (FStack_290.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_290.Data);
    }
    FStack_290.Data = (FScriptContainerElement *)local_2b0.DelegateAllocator;
    local_288 = local_2b0.DelegateSize;
    local_2b0.DelegateSize = 0;
    local_2b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    if (local_1f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f8.Accessor,&local_1f8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_2b8,(FWriteAccessScope *)&local_1e0);
    if ((local_2b0.DelegateSize != 0) &&
       (local_2b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_2b0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_2b0,0,0,0x10);
      local_2b0.DelegateSize = 0;
    }
    if (local_1e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e0.Accessor,&local_1e0);
    }
    if (local_2b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_2b0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2b8.AccessDetector);
    (this->ContentSlotSize).Value = local_2a0;
    (this->ContentSlotSize).bIsSet = local_29c;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ContentSlotSize).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_298);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_298,
               (FWriteAccessScope *)&local_1c8);
    if ((local_288 != 0) &&
       ((ForElementType<TAlignedBytes<16,16>_>)FStack_290.Data !=
        (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)FStack_290.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_290,0,0,0x10);
      local_288 = 0;
    }
    if (local_1c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c8.Accessor,&local_1c8);
    }
    if ((ForElementType<TAlignedBytes<16,16>_>)FStack_290.Data !=
        (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free(FStack_290.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_298);
    if (local_138 != (code *)0x0) {
      pppuVar8 = &local_128;
      if (local_110 != (undefined ***)0x0) {
        pppuVar8 = local_110;
      }
      (*(code *)(*pppuVar8)[2])();
    }
  }
  else {
    local_23c = 0;
    local_228 = 0;
    local_240 = 0;
    (this->ContentSlotSize).Value = 0.0;
    local_238 = (undefined1  [8])0x0;
    FStack_230.Data = (FScriptContainerElement *)0x0;
    (this->ContentSlotSize).bIsSet = false;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ContentSlotSize).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_238);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_238,
               (FWriteAccessScope *)&local_1b0);
    if (((int)local_228 != 0) && (FStack_230.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_230.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_230,0,0,0x10);
      local_228 = local_228 & 0xffffffff00000000;
    }
    if (local_1b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b0.Accessor,&local_1b0);
    }
    if (FStack_230.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_230.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_238);
  }
  if (((this->MainSplitter).Object == (SSplitter *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = SSplitter::AddSlot((this->MainSplitter).Object,&local_108,-1);
  local_27c = 1;
  local_268 = 0;
  local_278 = (undefined1  [8])0x0;
  FStack_270.Data = (FScriptContainerElement *)0x0;
  *(uint *)&this_00->_padding_ = (uint)bVar2;
  *(undefined1 *)((longlong)&this_00->_padding_ + 4) = 1;
  local_280 = (uint)bVar2;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_278);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_278,
             (FWriteAccessScope *)&local_198);
  if (((int)local_268 != 0) && (FStack_270.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_270.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_270,0,0,0x10);
    local_268 = local_268 & 0xffffffff00000000;
  }
  if (local_198.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
  }
  if (FStack_270.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_270.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_278);
  local_260 = (this->ContentSlotSize).Value;
  local_25c = (this->ContentSlotSize).bIsSet;
  local_258 = (undefined1  [8])0x0;
  FStack_250.Data = (FScriptContainerElement *)0x0;
  local_248 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_258,
             &(this->ContentSlotSize).Getter);
  *(float *)&this_00->_padding_ = local_260;
  *(undefined1 *)((longlong)&this_00->_padding_ + 4) = local_25c;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_258);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_258,
             (FWriteAccessScope *)&local_180);
  if ((local_248 != 0) && (FStack_250.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_250.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_250,0,0,0x10);
    local_248 = 0;
  }
  if (local_180.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
  }
  if (FStack_250.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_250.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_258);
  uStack_200 = (ulonglong)uStack_200._4_4_ << 0x20;
  local_208 = OnContentSlotResizing;
  pFVar6 = SSplitter::FSlot::FSlotArguments::OnSlotResized<SSidebarContainer>
                     ((FSlotArguments *)this_00,this,(pmf_8da3140d *)&local_208);
  if (((this->SidebarWidget).Object == (SSidebar *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar7 = SSidebar::GetMainContent((this->SidebarWidget).Object,&local_148);
  local_218[0].ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
  local_220 = pTVar7->Object;
  if (local_218[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_218[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_218[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar6->_padding_ != &local_220) {
    pFVar6->_padding_ = (longlong)local_220;
    local_220 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar6->_padding_,local_218);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_218[0].ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  TPanelChildren<SSplitter::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_108);
  return;
}

// AddDrawerOverlaySlot @ 142d71150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SSidebarContainer::AddDrawerOverlaySlot
          (SSidebarContainer *this,TSharedRef<FSidebarDrawer,1> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  TArray<TSharedRef<SSidebarDrawer,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  ESidebarTabLocation EVar4;
  TSharedRef<SSidebarDrawer,1> *pTVar5;
  code *pcVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  FScopedWidgetSlotArguments *pFVar11;
  FMargin *pFVar12;
  FScopedWidgetSlotArguments *pFVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  FScopedWidgetSlotArguments *pFVar19;
  undefined1 auStack_198 [32];
  TSharedRef<SSidebarDrawer,1> *local_178;
  TSharedRef<SSidebarDrawer,1> *local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  TSharedRef<SSidebarDrawer,1> local_148;
  SSidebarDrawer *local_138;
  FSharedReferencer<1> local_130;
  undefined4 local_128 [2];
  undefined1 local_120 [8];
  longlong local_118;
  longlong lStack_110;
  undefined1 local_108;
  undefined1 local_100 [8];
  void *pvStack_f8;
  undefined8 local_f0;
  FMargin local_e8;
  FScopedWidgetSlotArguments local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_148.Object = (param_1->Object->DrawerWidget).Object;
  if (local_148.Object == (SSidebarDrawer *)0x0) {
    return false;
  }
  local_148.SharedReferenceCount.ReferenceController =
       (param_1->Object->DrawerWidget).SharedReferenceCount.ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_148.Object == (SSidebarDrawer *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  pFVar16 = (this->ClosingDrawerWidgets).AllocatorInstance.Data;
  pFVar14 = pFVar16 + (longlong)(this->ClosingDrawerWidgets).ArrayNum * 0x10;
  for (; pFVar16 != pFVar14; pFVar16 = pFVar16 + 0x10) {
    if (*(SSidebarDrawer **)pFVar16 == local_148.Object) {
      TArray<TSharedRef<SSidebarDrawer,1>,TSizedDefaultAllocator<32>_>::Remove
                (&this->ClosingDrawerWidgets,&local_148);
      goto LAB_142d71445;
    }
  }
  if (((this->SidebarWidget).Object == (SSidebar *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  EVar4 = ((this->SidebarWidget).Object)->TabLocation;
  if (((this->DrawersOverlay).Object == (SOverlay *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  pFVar11 = SOverlay::AddSlot((this->DrawersOverlay).Object,&local_d8,-1);
  pFVar12 = CalculateSlotMargin(this,&local_e8);
  pFVar13 = (FScopedWidgetSlotArguments *)0x0;
  local_118._0_4_ = pFVar12->Left;
  local_118._4_4_ = pFVar12->Top;
  lStack_110._0_4_ = pFVar12->Right;
  lStack_110._4_4_ = pFVar12->Bottom;
  local_108 = 1;
  uVar18 = 0;
  local_f0 = 0;
  local_100 = (undefined1  [8])0x0;
  pvStack_f8 = (void *)0x0;
  pFVar11->_padding_ = local_118;
  pFVar11->_padding_ = lStack_110;
  *(undefined1 *)&pFVar11->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar11->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_100);
  pFVar19 = pFVar13;
  if (&pFVar11->_padding_ != (longlong *)0x0) {
    pFVar19 = pFVar11;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_100);
  if (pvStack_f8 != (void *)0x0) {
    FMemory::Free(pvStack_f8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_100);
  FVar7.ReferenceController = local_148.SharedReferenceCount.ReferenceController;
  plVar1 = &pFVar19->_padding_;
  uVar17 = 3;
  if (EVar4 == Left) {
    uVar18 = 1;
  }
  else if (EVar4 == Right) {
    uVar18 = 3;
  }
  if ((longlong *)local_128 != plVar1) {
    *(undefined4 *)plVar1 = uVar18;
    *(undefined1 *)((longlong)&pFVar19->_padding_ + 4) = 1;
  }
  if (plVar1 == (longlong *)0x0) {
    pFVar19 = pFVar13;
  }
  if ((EVar4 != Left) && (EVar4 != Right)) {
    if (EVar4 == Top) {
      uVar17 = 1;
      goto LAB_142d713b3;
    }
    if (EVar4 == Bottom) goto LAB_142d713b3;
  }
  uVar17 = 0;
LAB_142d713b3:
  if ((longlong *)local_120 != &pFVar19->_padding_) {
    *(undefined4 *)&pFVar19->_padding_ = uVar17;
    *(undefined1 *)((longlong)&pFVar19->_padding_ + 4) = 1;
  }
  if (pFVar19 != (FScopedWidgetSlotArguments *)0xffffffffffffffb8) {
    pFVar13 = pFVar19;
  }
  local_138 = local_148.Object;
  local_130.ReferenceController = local_148.SharedReferenceCount.ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SSidebarDrawer **)&pFVar13->_padding_ != &local_138) {
    pFVar13->_padding_ = (longlong)local_148.Object;
    local_138 = (SSidebarDrawer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar13->_padding_,&local_130);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_130.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_d8);
LAB_142d71445:
  pTVar3 = &this->OpenDrawerWidgets;
  pTVar5 = (TSharedRef<SSidebarDrawer,1> *)(pTVar3->AllocatorInstance).Data;
  if ((pTVar5 <= &local_148) &&
     (lVar15 = (longlong)(this->OpenDrawerWidgets).ArrayMax, &local_148 < pTVar5 + lVar15)) {
    local_160 = (longlong)(this->OpenDrawerWidgets).ArrayNum;
    local_158 = 0x10;
    local_178 = &local_148;
    local_170 = pTVar5;
    local_168 = lVar15;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
  }
  iVar10 = (this->OpenDrawerWidgets).ArrayNum;
  piVar2 = &(this->OpenDrawerWidgets).ArrayMax;
  if (iVar10 == *piVar2) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar3->AllocatorInstance,piVar2);
  }
  (this->OpenDrawerWidgets).ArrayNum = iVar10 + 1;
  pFVar16 = (pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
  *(SSidebarDrawer **)pFVar16 = local_148.Object;
  *(TReferenceControllerBase<1> **)(pFVar16 + 8) =
       local_148.SharedReferenceCount.ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  return true;
}

// AddSidebarDockSlot @ 142d71a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall SSidebarContainer::AddSidebarDockSlot(SSidebarContainer *this,FName param_1)

{
  SSidebar *pSVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FScopedWidgetSlotArguments *this_00;
  FSlotArguments *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined ***pppuVar10;
  FSharedReferencer<1> FVar11;
  FScriptContainerElement *pFVar12;
  FName FVar13;
  FName FVar14;
  FName FVar15;
  TReferenceControllerBase<1> *pTVar16;
  undefined1 auStack_2f8 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2d8;
  FDelegateAllocation local_2d0;
  float local_2c0;
  bool local_2bc;
  undefined1 local_2b8 [8];
  ForAnyElementType FStack_2b0;
  int local_2a8;
  undefined4 local_2a0;
  undefined1 local_29c;
  undefined1 local_298 [8];
  ForAnyElementType FStack_290;
  ulonglong local_288;
  FName local_280;
  FName local_278;
  uint local_270;
  undefined1 local_26c;
  undefined1 local_268 [8];
  void *pvStack_260;
  undefined8 local_258;
  float local_250;
  undefined1 local_24c;
  undefined1 local_248 [8];
  void *pvStack_240;
  undefined4 local_238;
  code *local_228;
  ulonglong uStack_220;
  FDestructionSentinel local_210;
  FDestructionSentinel local_1f8;
  FDestructionSentinel local_1e0;
  FDestructionSentinel local_1c8;
  FDestructionSentinel local_1b0;
  FDelegateAllocation *local_198;
  code *local_188;
  ulonglong uStack_180;
  TReferenceControllerBase<1> *local_170;
  FName local_160;
  TReferenceControllerBase<1> *local_148;
  undefined **local_138;
  SSidebarContainer *pSStack_130;
  undefined8 local_128;
  undefined ***local_120;
  FScopedWidgetSlotArguments local_118;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  if (((this->SidebarWidget).Object == (SSidebar *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pSVar1 = (this->SidebarWidget).Object;
  pFVar9 = (pSVar1->Drawers).AllocatorInstance.Data;
  pFVar12 = pFVar9 + (longlong)(pSVar1->Drawers).ArrayNum * 0x10;
  do {
    if (pFVar9 == pFVar12) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pTVar16 = (TReferenceControllerBase<1> *)0x0;
LAB_142d71afc:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
      return;
    }
    pFVar2 = *(FName **)pFVar9;
    if (param_1 == *pFVar2) {
      pTVar16 = *(TReferenceControllerBase<1> **)(pFVar9 + 8);
      if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
        UNLOCK();
      }
      uStack_220 = 0;
      local_228 = (code *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pFVar2 != (FName *)0x0) {
        if (((this->SidebarWidget).Object == (SSidebar *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar4 = SSidebar::HasDrawerDocked((this->SidebarWidget).Object);
        if (bVar4) {
          local_120 = (undefined ***)0x0;
          local_138 = &UE::Core::Private::Function::
                       TFunction_OwnedObject<`SSidebarContainer::AddSidebarDockSlot'::`8'::<lambda_1>,0,0>
                       ::_vftable_;
          local_148 = (TReferenceControllerBase<1> *)
                      UE::Core::Private::Function::
                      TFunctionRefCaller<`SSidebarContainer::AddSidebarDockSlot'::__l8::<lambda_1>,float>
                      ::Call;
          local_2d8.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          local_2d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_2d0.DelegateSize = 0;
          pSStack_130 = this;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_2d8,(FWriteAccessScope *)&local_1b0);
          local_198 = &local_2d0;
          puVar6 = UE::Core::Private::DelegateAllocate(0x50,&local_2d0);
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = &
                      ___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar7 = FDelegateHandle::GenerateNewID();
            puVar6[2] = uVar7;
            *puVar6 = &
                      ___7__TBaseFunctorDelegateInstance___A6AMXZUFDefaultDelegateUserPolicy__V__TFunction___A6AMXZ____V__6B_
            ;
            puVar6[4] = local_148;
            puVar6[9] = local_120;
            puVar6[6] = local_138;
            puVar6[7] = pSStack_130;
            puVar6[8] = local_128;
            if (puVar6[4] != 0) {
              local_148 = (TReferenceControllerBase<1> *)0x0;
            }
          }
          if (local_1b0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b0.Accessor,&local_1b0);
          }
          local_2c0 = 0.0;
          local_2bc = true;
          local_2b8 = (undefined1  [8])0x0;
          FStack_2b0.Data = (FScriptContainerElement *)0x0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_2d8,(FWriteAccessScope *)&local_210);
          if (FStack_2b0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_2b0.Data);
          }
          FStack_2b0.Data = (FScriptContainerElement *)local_2d0.DelegateAllocator;
          local_2a8 = local_2d0.DelegateSize;
          local_2d0.DelegateSize = 0;
          local_2d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          if (local_210.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_210.Accessor,&local_210);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_2d8,(FWriteAccessScope *)&local_1f8);
          if ((local_2d0.DelegateSize != 0) &&
             (local_2d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_2d0.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_2d0,0,0,0x10);
            local_2d0.DelegateSize = 0;
          }
          if (local_1f8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f8.Accessor,&local_1f8);
          }
          if (local_2d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_2d0.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2d8.AccessDetector);
          (this->SidebarSlotSize).Value = local_2c0;
          (this->SidebarSlotSize).bIsSet = local_2bc;
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SidebarSlotSize).Getter,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b8);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b8,
                     (FWriteAccessScope *)&local_1e0);
          if ((local_2a8 != 0) &&
             ((ForElementType<TAlignedBytes<16,16>_>)FStack_2b0.Data !=
              (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)FStack_2b0.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_2b0,0,0,0x10);
            local_2a8 = 0;
          }
          if (local_1e0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e0.Accessor,&local_1e0);
          }
          if ((ForElementType<TAlignedBytes<16,16>_>)FStack_2b0.Data !=
              (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free(FStack_2b0.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_2b8);
          if (local_148 != (TReferenceControllerBase<1> *)0x0) {
            pppuVar10 = &local_138;
            if (local_120 != (undefined ***)0x0) {
              pppuVar10 = local_120;
            }
            (*(code *)(*pppuVar10)[2])();
          }
        }
        else {
          local_29c = 0;
          local_288 = 0;
          local_2a0 = 0;
          (this->SidebarSlotSize).Value = 0.0;
          (this->SidebarSlotSize).bIsSet = false;
          local_298 = (undefined1  [8])0x0;
          FStack_290.Data = (FScriptContainerElement *)0x0;
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SidebarSlotSize).Getter,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_298);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_298,
                     (FWriteAccessScope *)&local_1c8);
          if (((int)local_288 != 0) && (FStack_290.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_290.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_290,0,0,0x10);
            local_288 = local_288 & 0xffffffff00000000;
          }
          if (local_1c8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c8.Accessor,&local_1c8);
          }
          if (FStack_290.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_290.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_298);
        }
        if (((this->MainSplitter).Object == (SSplitter *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = SSplitter::AddSlot((this->MainSplitter).Object,&local_118,-1);
        local_26c = 1;
        local_258 = 0;
        local_268 = (undefined1  [8])0x0;
        pvStack_260 = (void *)0x0;
        *(uint *)&this_00->_padding_ = (uint)bVar4;
        *(undefined1 *)((longlong)&this_00->_padding_ + 4) = 1;
        local_270 = (uint)bVar4;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00->_padding_,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_268);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_268);
        if (pvStack_260 != (void *)0x0) {
          FMemory::Free(pvStack_260);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_268);
        local_250 = (this->SidebarSlotSize).Value;
        local_24c = (this->SidebarSlotSize).bIsSet;
        local_248 = (undefined1  [8])0x0;
        pvStack_240 = (void *)0x0;
        local_238 = 0;
        TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_248,
                   &(this->SidebarSlotSize).Getter);
        *(float *)&this_00->_padding_ = local_250;
        *(undefined1 *)((longlong)&this_00->_padding_ + 4) = local_24c;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00->_padding_,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_248);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_248);
        if (pvStack_240 != (void *)0x0) {
          FMemory::Free(pvStack_240);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_248);
        uStack_220 = uStack_220 & 0xffffffff00000000;
        local_228 = OnSidebarSlotResizing;
        local_188 = OnSidebarSlotResizing;
        uStack_180 = uStack_220;
        pFVar8 = SSplitter::FSlot::FSlotArguments::OnSlotResized<SSidebarContainer>
                           ((FSlotArguments *)this_00,this,(pmf_8da3140d *)&local_188);
        if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
          UNLOCK();
        }
        FVar11.ReferenceController =
             SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
        FVar14 = (FName)SNullWidget::NullWidget.Object;
        FVar15 = pFVar2[0x1e];
        if (FVar15 == (FName)0x0) {
          FVar15 = pFVar2[0x24];
          if (FVar15 == (FName)0x0) {
            if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount =
                   (atomic<int>)
                   ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            bVar5 = false;
            bVar4 = true;
            FVar13 = (FName)FVar11.ReferenceController;
            FVar15 = local_160;
          }
          else {
            FVar13 = pFVar2[0x25];
            if (FVar13 != (FName)0x0) {
              LOCK();
              *(atomic<int> *)((longlong)FVar13 + 8) =
                   (atomic<int>)((int)*(atomic<int> *)((longlong)FVar13 + 8) + 1);
              UNLOCK();
            }
            bVar4 = false;
            bVar5 = true;
            FVar11.ReferenceController = local_170;
            FVar14 = FVar15;
            FVar15 = FVar13;
          }
          if (FVar13 != (FName)0x0) {
            LOCK();
            *(atomic<int> *)((longlong)FVar13 + 8) =
                 (atomic<int>)((int)*(atomic<int> *)((longlong)FVar13 + 8) + 1);
            UNLOCK();
          }
          if (bVar4) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar11.ReferenceController);
          }
          if (bVar5) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)FVar15);
          }
        }
        else {
          FVar13 = pFVar2[0x1f];
          FVar14 = FVar15;
          if (FVar13 != (FName)0x0) {
            LOCK();
            *(int *)((longlong)FVar13 + 8) = *(int *)((longlong)FVar13 + 8) + 1;
            UNLOCK();
          }
        }
        if (FVar13 != (FName)0x0) {
          LOCK();
          *(int *)((longlong)FVar13 + 8) = *(int *)((longlong)FVar13 + 8) + 1;
          UNLOCK();
        }
        local_280 = FVar14;
        local_278 = FVar13;
        if ((FName *)&pFVar8->_padding_ != &local_280) {
          pFVar8->_padding_ = (longlong)FVar14;
          local_280.ComparisonIndex.Value = 0;
          local_280.Number = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)&pFVar8->_padding_,(FSharedReferencer<1> *)&local_278);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_278);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)FVar13);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16)
        ;
        TPanelChildren<SSplitter::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
                  (&local_118);
      }
      goto LAB_142d71afc;
    }
    pFVar9 = pFVar9 + 0x10;
  } while( true );
}

// CalculateSlotMargin @ 142d74570

FMargin * __thiscall
SSidebarContainer::CalculateSlotMargin(SSidebarContainer *this,FMargin *__return_storage_ptr__)

{
  ESidebarTabLocation EVar1;
  code *pcVar2;
  bool bVar3;
  FMargin *pFVar4;
  FGeometry *pFVar5;
  float fVar6;
  float local_res8;
  
  if (((this->SidebarWidget).Object == (SSidebar *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FMargin *)(*pcVar2)();
    return pFVar4;
  }
  pFVar5 = SWidget::GetTickSpaceGeometry((SWidget *)(this->SidebarWidget).Object);
  local_res8 = SUB84(pFVar5->Size,0);
  local_res8 = local_res8 - __real_40800000;
  if (((this->SidebarWidget).Object == (SSidebar *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FMargin *)(*pcVar2)();
    return pFVar4;
  }
  EVar1 = ((this->SidebarWidget).Object)->TabLocation;
  fVar6 = local_res8;
  if ((EVar1 == Right) || (fVar6 = 0.0, EVar1 != Left)) {
    local_res8 = 0.0;
  }
  __return_storage_ptr__->Left = local_res8;
  __return_storage_ptr__->Right = fVar6;
  __return_storage_ptr__->Top = -8.0;
  __return_storage_ptr__->Bottom = -8.0;
  return __return_storage_ptr__;
}

// CloseAllDrawerWidgets @ 142d75480

void __thiscall SSidebarContainer::CloseAllDrawerWidgets(SSidebarContainer *this,bool param_1)

{
  int iVar1;
  SSidebar *pSVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<FSidebarDrawer,1> *pTVar5;
  TSharedRef<FSidebarDrawer,1> *pTVar6;
  undefined1 local_res8 [8];
  
  if ((this->SidebarWidget).Object == (SSidebar *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar2 = (this->SidebarWidget).Object;
  iVar1 = (pSVar2->Drawers).ArrayNum;
  pTVar5 = (TSharedRef<FSidebarDrawer,1> *)(pSVar2->Drawers).AllocatorInstance.Data;
  pTVar6 = pTVar5 + iVar1;
  while( true ) {
    if ((pSVar2->Drawers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FSidebarDrawer,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pTVar5 == pTVar6) break;
    CloseDrawer_Internal(this,pTVar5,param_1,true);
    pTVar5 = pTVar5 + 1;
  }
  return;
}

// CloseDrawer_Internal @ 142d75990

void __thiscall
SSidebarContainer::CloseDrawer_Internal
          (SSidebarContainer *this,TSharedRef<FSidebarDrawer,1> *param_1,bool param_2,bool param_3)

{
  TSharedPtr<FActiveTimerHandle,1> *pTVar1;
  SSidebarDrawer *this_00;
  SSidebarDrawer *pSVar2;
  bool bVar3;
  FThrottleRequest FVar4;
  TSharedRef<SSidebarDrawer,1> *pTVar5;
  FSlateThrottleManager *this_01;
  undefined4 extraout_var;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *pTVar6;
  TSharedRef<FActiveTimerHandle,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  float fVar11;
  FActiveTimerHandle *local_78;
  FSharedReferencer<1> local_70;
  code *local_68;
  undefined8 uStack_60;
  TSharedRef<FActiveTimerHandle,1> local_58;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> local_48;
  
  pTVar5 = TArray<TSharedRef<SSidebarDrawer,1>,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_SSidebarContainer::FindOpenDrawerWidget_::__l2::<lambda_1>_>
                     (&this->OpenDrawerWidgets,(<lambda_1>)param_1);
  if (pTVar5 == (TSharedRef<SSidebarDrawer,1> *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar10 = (pTVar5->SharedReferenceCount).ReferenceController;
    this_00 = pTVar5->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (this_00 != (SSidebarDrawer *)0x0) {
      pFVar9 = (this->OpenDrawerWidgets).AllocatorInstance.Data;
      pFVar8 = pFVar9 + (longlong)(this->OpenDrawerWidgets).ArrayNum * 0x10;
      for (; pFVar9 != pFVar8; pFVar9 = pFVar9 + 0x10) {
        if (this_00 == *(SSidebarDrawer **)pFVar9) {
          pFVar9 = (this->ClosingDrawerWidgets).AllocatorInstance.Data;
          pFVar8 = pFVar9 + (longlong)(this->ClosingDrawerWidgets).ArrayNum * 0x10;
          if (pFVar9 == pFVar8) goto LAB_142d75a57;
          pSVar2 = (param_1->Object->DrawerWidget).Object;
          goto LAB_142d75a40;
        }
      }
    }
  }
  goto LAB_142d75b9e;
  while (pFVar9 = pFVar9 + 0x10, pFVar9 != pFVar8) {
LAB_142d75a40:
    if ((pSVar2 != (SSidebarDrawer *)0x0) && (pSVar2 == *(SSidebarDrawer **)pFVar9))
    goto LAB_142d75b9e;
  }
LAB_142d75a57:
  param_1->Object->bIsOpen = false;
  RemoveDrawerOverlaySlot(this,param_1,param_2);
  if (param_2) {
    bVar3 = FCurveSequence::IsForward(&this_00->OpenCloseAnimation);
    if (bVar3) {
      FCurveSequence::Reverse(&this_00->OpenCloseAnimation);
    }
    pTVar1 = &this_00->OpenCloseTimer;
    if (pTVar1->Object == (FActiveTimerHandle *)0x0) {
      this_01 = FSlateThrottleManager::Get();
      FVar4 = FSlateThrottleManager::EnterResponsiveMode(this_01);
      uStack_60 = (ulonglong)uStack_60._4_4_ << 0x20;
      (this_00->AnimationThrottle).Index = *(int *)CONCAT44(extraout_var,FVar4.Index);
      local_68 = SSidebarDrawer::UpdateAnimation;
      pTVar6 = TDelegate<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
               ::CreateSP<SSidebarDrawer>(&local_48,this_00,(pmf_e3dee309 *)&local_68);
      pTVar7 = SWidget::RegisterActiveTimer((SWidget *)this_00,&local_58,0.0,pTVar6);
      local_70.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
      local_78 = pTVar7->Object;
      if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_70.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_70.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pTVar1 != (TSharedPtr<FActiveTimerHandle,1> *)&local_78) {
        pTVar1->Object = local_78;
        local_78 = (FActiveTimerHandle *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this_00->OpenCloseTimer).SharedReferenceCount,&local_70);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_70.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
  }
  else {
    fVar11 = this_00->TargetDrawerSize;
    if (0.0 <= fVar11) {
      fVar11 = 0.0;
    }
    if (fVar11 <= this_00->MinDrawerSize) {
      fVar11 = this_00->MinDrawerSize;
    }
    this_00->CurrentSize = fVar11;
    FCurveSequence::JumpToStart(&this_00->OpenCloseAnimation);
  }
  UpdateDrawerTabAppearance(this);
  if (param_3) {
    SummonPinnedTabIfNothingOpened(this);
  }
LAB_142d75b9e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// Construct @ 142d8b100

void __thiscall SSidebarContainer::Construct(SSidebarContainer *this,FArguments *param_1)

{
  return;
}

// ConstructBoxPanel @ 142d8ec30

TSharedRef<SWidget,1> * __thiscall
SSidebarContainer::ConstructBoxPanel
          (SSidebarContainer *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          FSidebarState *param_1)

{
  atomic<int> *paVar1;
  TSharedPtr<SSidebar,1> *pTVar2;
  ESidebarTabLocation EVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  TSharedRef<SWidget,1> *pTVar7;
  FArguments *pFVar8;
  FArguments *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  int iVar11;
  int iVar12;
  TReferenceControllerBase<1> *local_res8;
  T0RequiredArgs local_res20 [8];
  FLLMScope local_548;
  FLLMScope local_544;
  SSplitter *local_540;
  TReferenceControllerBase<1> *local_538;
  TSharedRef<SVerticalBox,1> local_530;
  TSharedRef<SHorizontalBox,1> local_520;
  FName local_510;
  FMemScope local_508;
  FName local_500;
  FMemScope local_4f8;
  TSharedRef<SWidget,1> local_4f0;
  SSidebarContainer *local_4e0;
  TSharedRef<SVerticalBox,1> *local_4d8;
  SSidebarContainer *local_4d0;
  TSharedRef<SHorizontalBox,1> *local_4c8;
  SSidebarContainer *local_4c0;
  SSplitter **local_4b8;
  TSharedRef<SVerticalBox,1> *local_4b0;
  SSidebarContainer *local_4a8;
  SSplitter **local_4a0;
  TSharedRef<SHorizontalBox,1> *local_498;
  TSharedRef<SWidget,1> local_490;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_480;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_468;
  FArguments local_450;
  FArguments local_248;
  
  iVar11 = 0;
  ConstructSplitterPanel(this,param_1);
  local_540 = (this->MainSplitter).Object;
  if (local_540 == (SSplitter *)0x0) {
    if ((this->SidebarWidget).Object == (SSidebar *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedRef<SWidget,1> *)(*pcVar4)();
        return pTVar7;
      }
    }
    pTVar7 = SSidebar::GetMainContent((this->SidebarWidget).Object,&local_490);
    bVar6 = false;
    iVar12 = 4;
    local_540 = (SSplitter *)pTVar7->Object;
    pTVar10 = local_res8;
  }
  else {
    local_4f0.SharedReferenceCount.ReferenceController =
         (this->MainSplitter).SharedReferenceCount.ReferenceController;
    if (local_4f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_4f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_4f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_4f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_4f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_4f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = &local_4f0;
    bVar6 = true;
    pTVar10 = local_4f0.SharedReferenceCount.ReferenceController;
    iVar12 = iVar11;
    iVar11 = 1;
    local_4f0.Object = (SWidget *)local_540;
  }
  FVar5.ReferenceController = local_4f0.SharedReferenceCount.ReferenceController;
  local_538 = (pTVar7->SharedReferenceCount).ReferenceController;
  if (local_538 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_538->SharedReferenceCount = (atomic<int>)((int)local_538->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (iVar12 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_490.SharedReferenceCount.ReferenceController);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
  }
  if (iVar11 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  pTVar2 = &this->SidebarWidget;
  if (pTVar2->Object == (SSidebar *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  EVar3 = pTVar2->Object->TabLocation;
  if ((EVar3 == Left) || (EVar3 == Right)) {
    pFVar9 = SHorizontalBox::FArguments::FArguments(&local_248);
    FLLMScope::FLLMScope(&local_544,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_500 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_4f8,&local_500,true);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
              (&local_468,"SHorizontalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarContainer.cpp"
               ,0x46,local_res20);
    FMemScope::~FMemScope(&local_4f8);
    FLLMScope::~FLLMScope(&local_544);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
              (&local_468,&local_520,pFVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_468._Widget.SharedReferenceCount.ReferenceController);
    DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_248._Slots.AllocatorInstance.Data,local_248._Slots.ArrayNum);
    if ((FSlotArguments *)local_248._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_248._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_248);
    local_4a0 = &local_540;
    local_498 = &local_520;
    local_4c8 = &local_520;
    local_4d0 = this;
    local_4a8 = this;
    if (pTVar2->Object == (SSidebar *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedRef<SWidget,1> *)(*pcVar4)();
        return pTVar7;
      }
    }
    EVar3 = pTVar2->Object->TabLocation;
    if (EVar3 == Left) {
      `SSidebarContainer::ConstructBoxPanel'::__l5::<lambda_2>::operator()(&local_4d0);
      `SSidebarContainer::ConstructBoxPanel'::__l5::<lambda_1>::operator()(&local_4a8);
    }
    else if (EVar3 == Right) {
      `SSidebarContainer::ConstructBoxPanel'::__l5::<lambda_1>::operator()(&local_4a8);
      `SSidebarContainer::ConstructBoxPanel'::__l5::<lambda_2>::operator()(&local_4d0);
    }
    __return_storage_ptr__->Object = (SWidget *)local_520.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_520.SharedReferenceCount.ReferenceController;
    local_530.SharedReferenceCount.ReferenceController =
         local_520.SharedReferenceCount.ReferenceController;
    if (local_520.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_520.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_520.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    if (pTVar2->Object == (SSidebar *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedRef<SWidget,1> *)(*pcVar4)();
        return pTVar7;
      }
    }
    EVar3 = pTVar2->Object->TabLocation;
    if ((EVar3 != Top) && (EVar3 != Bottom)) {
      __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
      FVar5 = SNullWidget::NullWidget.SharedReferenceCount;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
      if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(FVar5.ReferenceController)->SharedReferenceCount;
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
      }
      goto LAB_142d8f112;
    }
    pFVar8 = SVerticalBox::FArguments::FArguments(&local_450);
    FLLMScope::FLLMScope(&local_548,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_510 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_508,&local_510,true);
    TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
              (&local_480,"SVerticalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarContainer.cpp"
               ,0x6a,(T0RequiredArgs *)&local_res8);
    FMemScope::~FMemScope(&local_508);
    FLLMScope::~FLLMScope(&local_548);
    TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=(&local_480,&local_530,pFVar8)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_480._Widget.SharedReferenceCount.ReferenceController);
    DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_450._Slots.AllocatorInstance.Data,local_450._Slots.ArrayNum);
    if ((FSlotArguments *)local_450._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_450._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_450);
    local_4b8 = &local_540;
    local_4b0 = &local_530;
    local_4d8 = &local_530;
    local_4e0 = this;
    local_4c0 = this;
    if ((this->SidebarWidget).Object == (SSidebar *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedRef<SWidget,1> *)(*pcVar4)();
        return pTVar7;
      }
    }
    EVar3 = ((this->SidebarWidget).Object)->TabLocation;
    if (EVar3 == Top) {
      `SSidebarContainer::ConstructBoxPanel'::__l15::<lambda_4>::operator()(&local_4e0);
      `SSidebarContainer::ConstructBoxPanel'::__l15::<lambda_3>::operator()(&local_4c0);
    }
    else if (EVar3 == Bottom) {
      `SSidebarContainer::ConstructBoxPanel'::__l15::<lambda_3>::operator()(&local_4c0);
      `SSidebarContainer::ConstructBoxPanel'::__l15::<lambda_4>::operator()(&local_4e0);
    }
    __return_storage_ptr__->Object = (SWidget *)local_530.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_530.SharedReferenceCount.ReferenceController;
    if (local_530.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_530.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_530.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_530.SharedReferenceCount.ReferenceController);
LAB_142d8f112:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_538);
  return __return_storage_ptr__;
}

// ConstructSplitterPanel @ 142d90c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SSidebarContainer::ConstructSplitterPanel(SSidebarContainer *this,FSidebarState *param_1)

{
  byte *pbVar1;
  ESidebarTabLocation EVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  SSplitter *pSVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar12;
  FArguments *pFVar13;
  undefined8 *puVar14;
  TSharedRef<SWidget,1> *pTVar15;
  ulong64 uVar16;
  FName FVar17;
  EOrientation EVar18;
  TReferenceControllerBase<1> *pTVar19;
  undefined1 auStackY_3e8 [32];
  T0RequiredArgs local_3b8 [4];
  undefined4 local_3b4;
  FName local_3b0;
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> local_3a8;
  TReferenceControllerBase<1> *local_390;
  undefined4 uStack_388;
  undefined4 uStack_384;
  SSplitter *local_380;
  FSharedReferencer<1> local_378;
  FMemScope local_370;
  undefined8 local_368;
  FSharedReferencer<1> FStack_360;
  TSharedRef<SWidget,1> local_358;
  FDestructionSentinel local_348;
  undefined1 *local_330;
  TArray<FName,TSizedDefaultAllocator<32>_> local_328;
  undefined1 local_318 [560];
  undefined1 local_e8 [24];
  undefined1 local_d0 [24];
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  FVar17.ComparisonIndex.Value = 0;
  FVar17.Number = 0;
  local_3b4 = 0;
  if (param_1->bHidden != false) {
LAB_142d91297:
    local_368 = 0;
    FStack_360.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->MainSplitter != (TSharedPtr<SSplitter,1> *)&local_368) {
      (this->MainSplitter).Object = (SSplitter *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MainSplitter).SharedReferenceCount,&FStack_360);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_360.ReferenceController);
    return;
  }
  if (((this->SidebarWidget).Object == (SSidebar *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar8 = SSidebar::HasDrawerDocked((this->SidebarWidget).Object);
  if (!bVar8) goto LAB_142d91297;
  if (((this->SidebarWidget).Object == (SSidebar *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  SSidebar::GetDockedDrawerIds((this->SidebarWidget).Object,&local_88);
  if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
    pTVar12 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array(&local_88,&local_328)
    ;
    if ((pTVar12->ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar17 = *(FName *)(pTVar12->AllocatorInstance).Data;
    if (local_328.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
  bVar4 = false;
  bVar8 = false;
  pFVar13 = SSplitter::FArguments::FArguments((FArguments *)local_318);
  if (((this->SidebarWidget).Object == (SSidebar *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EVar2 = ((this->SidebarWidget).Object)->TabLocation;
  if (((EVar2 == Left) || (EVar2 == Right)) ||
     ((EVar18 = Orient_Vertical, EVar2 != Top && (EVar2 != Bottom)))) {
    EVar18 = Orient_Horizontal;
  }
  pFVar13->_Orientation = EVar18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar13->_OnSplitterFinishedResizing,(FWriteAccessScope *)&local_348);
  local_330 = &(pFVar13->_OnSplitterFinishedResizing).field_0x8;
  puVar14 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_330);
  pTVar19 = local_390;
  if (puVar14 != (undefined8 *)0x0) {
    uStack_384 = local_358.SharedReferenceCount.ReferenceController._4_4_;
    local_390 = (TReferenceControllerBase<1> *)OnSplitterResized;
    uStack_388 = 0;
    pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_358);
    pTVar19 = (pTVar15->SharedReferenceCount).ReferenceController;
    local_3b0 = (FName)pTVar15->Object;
    if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar5 = true;
    bVar4 = true;
    bVar8 = true;
    *puVar14 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar14[2] = uVar16;
    *puVar14 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSSidebarContainer___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar14 + 3) = local_3b0;
    puVar14[4] = pTVar19;
    if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar19->WeakReferenceCount = (atomic<int>)((int)pTVar19->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar14[5] = local_390;
    puVar14[6] = CONCAT44(uStack_384,uStack_388);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_358.SharedReferenceCount.ReferenceController._4_4_,
                        local_358.SharedReferenceCount.ReferenceController._0_4_));
  }
  if (local_348.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_348.Accessor,&local_348);
  }
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_3b4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3b0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_370,&local_3b0,true);
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>
            (&local_3a8,"SSplitter",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarContainer.cpp"
             ,0x96,local_3b8);
  FMemScope::~FMemScope(&local_370);
  FLLMScope::~FLLMScope((FLLMScope *)&local_3b4);
  pSVar6 = local_3a8._Widget.Object;
  if ((local_3a8._Widget.Object == (SSplitter *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_3a8._Widget.Object,(FSlateBaseNamedArgs *)pFVar13);
  SSplitter::Construct(local_3a8._Widget.Object,pFVar13);
  if ((local_3a8._Widget.Object == (SSplitter *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((local_3a8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar10 = (**(code **)((local_3a8._Widget.Object)->_padding_ + 0x228))(local_3a8._Widget.Object);
    bVar11 = 0;
    if (cVar10 == '\0') goto LAB_142d91009;
  }
  bVar11 = 0x20;
LAB_142d91009:
  *(byte *)&(local_3a8._Widget.Object)->_padding_ =
       (byte)(local_3a8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_3a8._Widget.Object)->_padding_ =
       (byte)(local_3a8._Widget.Object)->_padding_ | bVar11;
  if ((local_3a8._Widget.Object == (SSplitter *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_3a8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_3a8._Widget.Object == (SSplitter *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar7.ReferenceController = local_3a8._Widget.SharedReferenceCount.ReferenceController;
  local_3a8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3a8._Widget.Object = (SSplitter *)0x0;
  if ((pSVar6 == (SSplitter *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_380 = pSVar6;
  local_378.ReferenceController = FVar7.ReferenceController;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MainSplitter != (TSharedPtr<SSplitter,1> *)&local_380) {
    (this->MainSplitter).Object = pSVar6;
    local_380 = (SSplitter *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MainSplitter).SharedReferenceCount,&local_378);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_378.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
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
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0);
  if ((void *)local_d0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8);
  if ((void *)local_e8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e8);
  DestructItems<SSplitter::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_318._504_8_,local_318._512_4_);
  if ((FSlotArguments *)local_318._504_8_ != (FSlotArguments *)0x0) {
    FMemory::Free((void *)local_318._504_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_318);
  if (((this->SidebarWidget).Object == (SSidebar *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EVar2 = ((this->SidebarWidget).Object)->TabLocation;
  if ((EVar2 == Left) || (EVar2 == Top)) {
    AddSidebarDockSlot(this,FVar17);
    AddContentDockSlot(this);
  }
  else if ((EVar2 - Right & 0xfd) == 0) {
    AddContentDockSlot(this);
    AddSidebarDockSlot(this,FVar17);
  }
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  return;
}

// CreateDrawerWidget @ 142d9ce90

void __thiscall
SSidebarContainer::CreateDrawerWidget(SSidebarContainer *this,TSharedRef<FSidebarDrawer,1> *param_1)

{
  byte *pbVar1;
  float fVar2;
  SWidget *pSVar3;
  FSidebarDrawer *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  SSidebarDrawer *pSVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  byte bVar13;
  FGeometry *pFVar14;
  FArguments *pFVar15;
  undefined8 *puVar16;
  TSharedRef<SWidget,1> *pTVar17;
  ulong64 uVar18;
  TSharedPtr<SSidebarDrawer,1> *pTVar19;
  TReferenceControllerBase<1> *pTVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 local_res8;
  undefined4 uStackX_c;
  FLLMScope local_res10 [2];
  FDeprecateSlateVector2D local_res18;
  FName local_res20;
  uint uStack_3ec;
  SSidebarDrawer *local_3e8;
  TReferenceControllerBase<1> *local_3e0;
  undefined8 *local_3d8;
  SSidebarDrawer *local_3d0;
  FSharedReferencer<1> local_3c8;
  FMemScope local_3c0;
  FMargin local_3b8;
  T2RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&,ESidebarTabLocation_&&> local_3a8;
  TSharedRef<SWidget,1> local_398;
  FDestructionSentinel local_388;
  undefined1 *local_370;
  code *local_368;
  longlong lStack_360;
  code *local_358;
  longlong lStack_350;
  code *local_348;
  longlong lStack_340;
  FDeprecateSlateVector2D local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined1 local_300 [528];
  undefined1 local_f0 [24];
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  undefined1 local_90 [80];
  
  bVar7 = false;
  bVar6 = false;
  bVar11 = false;
  local_res8 = 0;
  if ((this->SidebarWidget).Object == (SSidebar *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar14 = SWidget::GetTickSpaceGeometry((SWidget *)(this->SidebarWidget).Object);
  local_res18 = pFVar14->Size;
  uStack_330 = *(undefined8 *)&pFVar14->Scale;
  local_328 = *(undefined8 *)((longlong)&(pFVar14->AbsolutePosition).field0_0x0 + 4);
  uStack_320 = *(undefined8 *)((longlong)&(pFVar14->Position).field0_0x0 + 4);
  local_318 = *(undefined8 *)((pFVar14->AccumulatedRenderTransform).M.M[0] + 1);
  uStack_310 = *(undefined8 *)((pFVar14->AccumulatedRenderTransform).M.M[1] + 1);
  local_308 = *(undefined8 *)((longlong)&(pFVar14->AccumulatedRenderTransform).Trans.field0_0x0 + 4)
  ;
  fVar23 = (float)local_res18._0_4_ - __real_40800000;
  local_338 = local_res18;
  CalculateSlotMargin(this,&local_3b8);
  if ((this->DrawersOverlay).Object == (SOverlay *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar14 = SWidget::GetTickSpaceGeometry((SWidget *)(this->DrawersOverlay).Object);
  local_res18 = pFVar14->Size;
  fVar21 = (float)local_res18._0_4_ - (local_3b8.Right + local_3b8.Left);
  fVar2 = this->SidebarSizePercent;
  pFVar15 = SSidebarDrawer::FArguments::FArguments((FArguments *)local_300);
  fVar22 = fVar21 * __real_3f000000;
  pFVar15->_MinDrawerSize = fVar23;
  pFVar15->_MaxDrawerSize = fVar22;
  pFVar15->_TargetDrawerSize = fVar21 * fVar2;
  lStack_360 = (ulonglong)uStack_3ec << 0x20;
  local_368 = OnTabDrawerFocusLost;
  TDelegateRegistration<void___cdecl(TSharedRef<SSidebarDrawer,1>_const_&),FDefaultDelegateUserPolicy>
  ::BindSP<SSidebarContainer>
            ((TDelegateRegistration<void___cdecl(TSharedRef<SSidebarDrawer,1>_const_&),FDefaultDelegateUserPolicy>
              *)&pFVar15->_OnDrawerFocusLost,this,(pmf_1a5a6d4a *)&local_368);
  lStack_350 = (ulonglong)uStack_3ec << 0x20;
  local_358 = OnOpenAnimationFinish;
  TDelegateRegistration<void___cdecl(TSharedRef<SSidebarDrawer,1>_const_&),FDefaultDelegateUserPolicy>
  ::BindSP<SSidebarContainer>
            ((TDelegateRegistration<void___cdecl(TSharedRef<SSidebarDrawer,1>_const_&),FDefaultDelegateUserPolicy>
              *)&pFVar15->_OnOpenAnimationFinish,this,(pmf_1a5a6d4a *)&local_358);
  lStack_340 = (ulonglong)uStack_3ec << 0x20;
  local_348 = OnCloseAnimationFinish;
  TDelegateRegistration<void___cdecl(TSharedRef<SSidebarDrawer,1>_const_&),FDefaultDelegateUserPolicy>
  ::BindSP<SSidebarContainer>
            ((TDelegateRegistration<void___cdecl(TSharedRef<SSidebarDrawer,1>_const_&),FDefaultDelegateUserPolicy>
              *)&pFVar15->_OnCloseAnimationFinish,this,(pmf_1a5a6d4a *)&local_348);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar15->_OnDrawerSizeChanged,(FWriteAccessScope *)&local_388);
  local_370 = &(pFVar15->_OnDrawerSizeChanged).field_0x8;
  puVar16 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_370);
  uVar9 = local_398.SharedReferenceCount.ReferenceController._4_4_;
  if (puVar16 == (undefined8 *)0x0) {
    pTVar20 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    pTVar17 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_398);
    pTVar20 = (pTVar17->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar17->Object;
    if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VSSidebarDrawer___00__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar18;
    *puVar16 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSSidebarContainer___00__A6AXAEBV__TSharedRef_VSSidebarDrawer___00__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = pSVar3;
    puVar16[4] = pTVar20;
    if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar20->WeakReferenceCount = (atomic<int>)((int)pTVar20->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar11 = true;
    puVar16[5] = OnDrawerSizeChanged;
    puVar16[6] = (ulonglong)uVar9 << 0x20;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_398.SharedReferenceCount.ReferenceController._4_4_,
                        local_398.SharedReferenceCount.ReferenceController._0_4_));
  }
  if (local_388.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_388.Accessor,&local_388);
  }
  if ((this->SidebarWidget).Object == (SSidebar *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_3a8.Arg1 = (ESidebarTabLocation *)&local_res8;
  local_res8 = CONCAT31(local_res8._1_3_,((this->SidebarWidget).Object)->TabLocation);
  local_3a8.Arg0 = param_1;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3c0,&local_res20,true);
  TSlateDecl<SSidebarDrawer,RequiredArgs::T2RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&,enum_ESidebarTabLocation_&&>_>
  ::
  TSlateDecl<SSidebarDrawer,RequiredArgs::T2RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&,enum_ESidebarTabLocation_&&>_>
            (&local_3e8,"SSidebarDrawer",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarContainer.cpp"
             ,0x1b9,&local_3a8);
  FMemScope::~FMemScope(&local_3c0);
  FLLMScope::~FLLMScope(local_res10);
  pSVar8 = local_3e8;
  if (local_3e8 == (SSidebarDrawer *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_3e8,(FSlateBaseNamedArgs *)pFVar15);
  SSidebarDrawer::Construct
            (local_3e8,pFVar15,(TSharedRef<FSidebarDrawer,1> *)*local_3d8,
             *(ESidebarTabLocation *)local_3d8[1]);
  if (local_3e8 == (SSidebarDrawer *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((local_3e8->_padding_ & 0x10) == 0) {
    cVar12 = (**(code **)(local_3e8->_padding_ + 0x228))(local_3e8);
    bVar13 = 0;
    if (cVar12 == '\0') goto LAB_142d9d2dd;
  }
  bVar13 = 0x20;
LAB_142d9d2dd:
  *(byte *)&local_3e8->_padding_ = (byte)local_3e8->_padding_ & 0xdf;
  *(byte *)&local_3e8->_padding_ = (byte)local_3e8->_padding_ | bVar13;
  if (local_3e8 == (SSidebarDrawer *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)&local_3e8->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_3e8 == (SSidebarDrawer *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar20 = local_3e0;
  local_3e0 = (TReferenceControllerBase<1> *)0x0;
  local_3e8 = (SSidebarDrawer *)0x0;
  if (pSVar8 == (SSidebarDrawer *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_3d0 = pSVar8;
  local_3c8.ReferenceController = pTVar20;
  if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = param_1->Object;
  pTVar19 = &pFVar4->DrawerWidget;
  if (pTVar19 != (TSharedPtr<SSidebarDrawer,1> *)&local_3d0) {
    pTVar19->Object = pSVar8;
    local_3d0 = (SSidebarDrawer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar4->DrawerWidget).SharedReferenceCount,&local_3c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
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
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d8);
  if ((void *)local_d8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f0);
  if ((void *)local_f0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_300);
  return;
}

// DockDrawer_Internal @ 142d9ed50

void __thiscall
SSidebarContainer::DockDrawer_Internal
          (SSidebarContainer *this,TSharedRef<FSidebarDrawer,1> *param_1)

{
  int iVar1;
  SSidebar *pSVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<FSidebarDrawer,1> *pTVar5;
  TSharedRef<FSidebarDrawer,1> *pTVar6;
  undefined1 local_res8 [8];
  FSidebarState local_38;
  
  if ((this->SidebarWidget).Object == (SSidebar *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar2 = (this->SidebarWidget).Object;
  iVar1 = (pSVar2->Drawers).ArrayNum;
  pTVar5 = (TSharedRef<FSidebarDrawer,1> *)(pSVar2->Drawers).AllocatorInstance.Data;
  pTVar6 = pTVar5 + iVar1;
  while( true ) {
    if ((pSVar2->Drawers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FSidebarDrawer,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pTVar5 == pTVar6) break;
    CloseDrawer_Internal(this,pTVar5,false,true);
    pTVar5 = pTVar5 + 1;
  }
  param_1->Object->bIsOpen = true;
  (param_1->Object->State).bIsPinned = false;
  (param_1->Object->State).bIsDocked = true;
  local_38._1_2_ = 0;
  local_38._3_1_ = 0;
  local_38.ContentSize = 0.0;
  local_38._12_4_ = 0;
  local_38.bHidden = false;
  local_38.DrawerSize = 0.0;
  local_38.DrawerStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.DrawerStates.ArrayNum = 0;
  local_38.DrawerStates.ArrayMax = 0;
  Reconstruct(this,&local_38);
  DestructItems<FSidebarDrawerState,int>((FSidebarDrawerState *)0x0,0);
  UpdateDrawerTabAppearance(this);
  return;
}

// FindDrawer @ 142da6560

TSharedPtr<FSidebarDrawer,1> * __thiscall
SSidebarContainer::FindDrawer
          (SSidebarContainer *this,TSharedPtr<FSidebarDrawer,1> *__return_storage_ptr__,
          FName param_1)

{
  SSidebar *pSVar1;
  FSidebarDrawer *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<FSidebarDrawer,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  
  if (((this->SidebarWidget).Object == (SSidebar *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FSidebarDrawer,1> *)(*pcVar4)();
    return pTVar6;
  }
  pSVar1 = (this->SidebarWidget).Object;
  pFVar7 = (pSVar1->Drawers).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)(pSVar1->Drawers).ArrayNum * 0x10;
  do {
    if (pFVar7 == pFVar8) {
      __return_storage_ptr__->Object = (FSidebarDrawer *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
LAB_142da65f0:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      return __return_storage_ptr__;
    }
    pFVar2 = *(FSidebarDrawer **)pFVar7;
    if (param_1 == (pFVar2->Config).UniqueId) {
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      __return_storage_ptr__->Object = pFVar2;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
      goto LAB_142da65f0;
    }
    pFVar7 = pFVar7 + 0x10;
  } while( true );
}

// FindFirstPinnedTab @ 142da66b0

TSharedPtr<FSidebarDrawer,1> * __thiscall
SSidebarContainer::FindFirstPinnedTab
          (SSidebarContainer *this,TSharedPtr<FSidebarDrawer,1> *__return_storage_ptr__)

{
  int iVar1;
  SSidebar *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<FSidebarDrawer,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  if (((this->SidebarWidget).Object == (SSidebar *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FSidebarDrawer,1> *)(*pcVar4)();
    return pTVar6;
  }
  pSVar2 = (this->SidebarWidget).Object;
  iVar1 = (pSVar2->Drawers).ArrayNum;
  pFVar7 = (pSVar2->Drawers).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((pSVar2->Drawers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FSidebarDrawer,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    if (((*(FSidebarDrawer **)pFVar7)->State).bIsPinned != false) {
      __return_storage_ptr__->Object = *(FSidebarDrawer **)pFVar7;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      return __return_storage_ptr__;
    }
    pFVar7 = pFVar7 + 0x10;
  }
  __return_storage_ptr__->Object = (FSidebarDrawer *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// FindOpenDrawerWidget @ 142da6780

TSharedPtr<SSidebarDrawer,1> * __thiscall
SSidebarContainer::FindOpenDrawerWidget
          (SSidebarContainer *this,TSharedPtr<SSidebarDrawer,1> *__return_storage_ptr__,
          TSharedRef<FSidebarDrawer,1> *param_1)

{
  SSidebarDrawer *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedRef<SSidebarDrawer,1> *pTVar3;
  
  pTVar3 = TArray<TSharedRef<SSidebarDrawer,1>,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_SSidebarContainer::FindOpenDrawerWidget_::__l2::<lambda_1>_>
                     (&this->OpenDrawerWidgets,(<lambda_1>)param_1);
  if (pTVar3 != (TSharedRef<SSidebarDrawer,1> *)0x0) {
    pSVar1 = pTVar3->Object;
    pTVar2 = (pTVar3->SharedReferenceCount).ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->Object = pSVar1;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (SSidebarDrawer *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetContentSlotIndex @ 142dab830

int __thiscall SSidebarContainer::GetContentSlotIndex(SSidebarContainer *this)

{
  ESidebarTabLocation EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if ((this->SidebarWidget).Object == (SSidebar *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  EVar1 = ((this->SidebarWidget).Object)->TabLocation;
  if ((EVar1 != Left) && ((EVar1 == Right || (EVar1 != Top)))) {
    return 0;
  }
  return 1;
}

// GetContentSlotSize @ 142dab8a0

float __thiscall SSidebarContainer::GetContentSlotSize(SSidebarContainer *this)

{
  return this->ContentSizePercent;
}

// GetCurrentDrawerSize @ 142dab8b0

float __thiscall SSidebarContainer::GetCurrentDrawerSize(SSidebarContainer *this)

{
  return this->SidebarSizePercent;
}

// GetForegroundDrawer @ 142dac6d0

TSharedPtr<FSidebarDrawer,1> * __thiscall
SSidebarContainer::GetForegroundDrawer
          (SSidebarContainer *this,TSharedPtr<FSidebarDrawer,1> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  atomic<int> aVar7;
  TSharedPtr<FSidebarDrawer,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FSidebarDrawer *pFVar10;
  <lambda_1> local_res8;
  
  uVar5 = TArray<TSharedRef<SSidebarDrawer,1>,TSizedDefaultAllocator<32>_>::
          FindLastByPredicate<_SSidebarContainer::GetForegroundDrawer_::__l2::<lambda_1>_>
                    (&this->OpenDrawerWidgets,local_res8,(this->OpenDrawerWidgets).ArrayNum);
  if (uVar5 == 0xffffffff) {
    __return_storage_ptr__->Object = (FSidebarDrawer *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    uVar6 = 0;
    if ((int)uVar5 < (this->OpenDrawerWidgets).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FSidebarDrawer,1> *)(*pcVar2)();
      return pTVar8;
    }
    pFVar10 = (FSidebarDrawer *)0x0;
    lVar1 = *(longlong *)
             ((this->OpenDrawerWidgets).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10);
    pTVar9 = *(TReferenceControllerBase<1> **)(lVar1 + 0x2b0);
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar9->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar9 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142dac790;
        }
        LOCK();
        aVar7 = pTVar9->SharedReferenceCount;
        bVar4 = aVar3 == aVar7;
        if (bVar4) {
          pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar7 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar7;
      } while (!bVar4);
      pFVar10 = *(FSidebarDrawer **)(lVar1 + 0x2a8);
    }
LAB_142dac790:
    __return_storage_ptr__->Object = pFVar10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetOpenedDrawerId @ 142daece0

FName __thiscall SSidebarContainer::GetOpenedDrawerId(SSidebarContainer *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  uint uVar7;
  atomic<int> aVar8;
  FName FVar9;
  longlong lVar10;
  FName in_RDX;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  iVar1 = (this->OpenDrawerWidgets).ArrayNum;
  if (iVar1 == 0) {
    *(undefined8 *)in_RDX = 0;
    return in_RDX;
  }
  uVar7 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar7 = ~(iVar1 - 1U) >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    FVar9 = (FName)(*pcVar4)();
    return FVar9;
  }
  pFVar2 = (this->OpenDrawerWidgets).AllocatorInstance.Data;
  lVar10 = (longlong)(this->OpenDrawerWidgets).ArrayNum;
  pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + lVar10 * 0x10 + -8);
  lVar10 = *(longlong *)(pFVar2 + lVar10 * 0x10 + -0x10);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar13 = *(TReferenceControllerBase<1> **)(lVar10 + 0x2b0);
  pTVar12 = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar13->SharedReferenceCount;
    do {
      pTVar12 = pTVar11;
      if (aVar5 == (atomic<int>)0x0) goto LAB_142daedb1;
      LOCK();
      aVar8 = pTVar13->SharedReferenceCount;
      bVar6 = aVar5 == aVar8;
      if (bVar6) {
        pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar8 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar8;
    } while (!bVar6);
    pTVar11 = *(TReferenceControllerBase<1> **)(lVar10 + 0x2a8);
    pTVar12 = pTVar13;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) goto LAB_142daedd7;
  }
LAB_142daedb1:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar13 = pTVar12;
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    FVar9 = (FName)(*pcVar4)();
    return FVar9;
  }
LAB_142daedd7:
  *(longlong *)in_RDX = pTVar11->_padding_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return in_RDX;
}

// GetOverlaySize @ 142daf270

FDeprecateSlateVector2D __thiscall SSidebarContainer::GetOverlaySize(SSidebarContainer *this)

{
  code *pcVar1;
  bool bVar2;
  FDeprecateSlateVector2D FVar3;
  FGeometry *pFVar4;
  FDeprecateSlateVector2D in_RDX;
  
  if ((this->DrawersOverlay).Object == (SOverlay *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FDeprecateSlateVector2D)(*pcVar1)();
      return FVar3;
    }
  }
  pFVar4 = SWidget::GetTickSpaceGeometry((SWidget *)(this->DrawersOverlay).Object);
  *(FDeprecateSlateVector2D *)in_RDX = pFVar4->Size;
  return in_RDX;
}

// GetSidebarDrawerContent @ 142db1ad0

TSharedRef<SWidget,1> * __thiscall
SSidebarContainer::GetSidebarDrawerContent
          (SSidebarContainer *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedRef<FSidebarDrawer,1> *param_1)

{
  FSidebarDrawer *pFVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TSharedRef<SWidget,1> *pTVar6;
  FSharedReferencer<1> FVar7;
  SWidget *pSVar8;
  int iVar9;
  int iVar10;
  TReferenceControllerBase<1> *local_20;
  TReferenceControllerBase<1> *local_10;
  
  FVar7.ReferenceController = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  pSVar8 = SNullWidget::NullWidget.Object;
  pFVar1 = param_1->Object;
  iVar9 = 0;
  pSVar2 = (pFVar1->Config).OverrideContentWidget.Object;
  if (pSVar2 == (SWidget *)0x0) {
    pSVar2 = (pFVar1->ContentWidget).Object;
    if (pSVar2 == (SWidget *)0x0) {
      if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar10 = 2;
      local_20 = FVar7.ReferenceController;
    }
    else {
      FVar7.ReferenceController = (pFVar1->ContentWidget).SharedReferenceCount.ReferenceController;
      if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar7.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSVar8 = pSVar2;
      local_10 = FVar7.ReferenceController;
      iVar10 = iVar9;
      iVar9 = 1;
    }
    __return_storage_ptr__->Object = pSVar8;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar7.ReferenceController;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar7.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (iVar10 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    }
    if (iVar9 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    }
  }
  else {
    __return_storage_ptr__->Object = pSVar2;
    pTVar3 = (pFVar1->Config).OverrideContentWidget.SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__->Object == (SWidget *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar4)();
        return pTVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSidebarSlotIndex @ 142db1be0

int __thiscall SSidebarContainer::GetSidebarSlotIndex(SSidebarContainer *this)

{
  ESidebarTabLocation EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if ((this->SidebarWidget).Object == (SSidebar *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  EVar1 = ((this->SidebarWidget).Object)->TabLocation;
  if ((EVar1 != Left) && ((EVar1 == Right || (EVar1 != Top)))) {
    return 1;
  }
  return 0;
}

// GetSidebarSlotSize @ 142db1c50

float __thiscall SSidebarContainer::GetSidebarSlotSize(SSidebarContainer *this)

{
  return this->SidebarSizePercent;
}

// GetSplitterOrientation @ 142db1c60

EOrientation __thiscall SSidebarContainer::GetSplitterOrientation(SSidebarContainer *this)

{
  ESidebarTabLocation EVar1;
  code *pcVar2;
  bool bVar3;
  EOrientation EVar4;
  
  if ((this->SidebarWidget).Object == (SSidebar *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  EVar1 = ((this->SidebarWidget).Object)->TabLocation;
  if (((EVar1 != Left) && (EVar1 != Right)) && ((EVar1 == Top || (EVar1 == Bottom)))) {
    return Orient_Vertical;
  }
  return Orient_Horizontal;
}

// GetTabLocation @ 142db1f80

ESidebarTabLocation __thiscall SSidebarContainer::GetTabLocation(SSidebarContainer *this)

{
  code *pcVar1;
  bool bVar2;
  ESidebarTabLocation EVar3;
  
  if ((this->SidebarWidget).Object != (SSidebar *)0x0) {
    return ((this->SidebarWidget).Object)->TabLocation;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return ((this->SidebarWidget).Object)->TabLocation;
}

// OnCloseAnimationFinish @ 142dbc510

/* WARNING: Type propagation algorithm not settling */

void __thiscall
SSidebarContainer::OnCloseAnimationFinish
          (SSidebarContainer *this,TSharedRef<SSidebarDrawer,1> *param_1)

{
  SSidebarDrawer *pSVar1;
  code *pcVar2;
  TAttribute<FText> *pTVar3;
  int iVar4;
  int iVar5;
  FSidebarDrawer *pFVar6;
  FSidebarDrawer *pFVar7;
  FSidebarDrawer *pFVar8;
  bool bVar9;
  TSharedRef<FSidebarDrawer,1> local_18;
  
  pSVar1 = param_1->Object;
  pFVar8 = (FSidebarDrawer *)0x0;
  pFVar7 = (FSidebarDrawer *)(pSVar1->DrawerWeak).WeakReferenceCount.ReferenceController;
  pFVar6 = pFVar7;
  if (pFVar7 != (FSidebarDrawer *)0x0) {
    iVar4 = *(int *)&(pFVar7->Config).ButtonText.Value.TextData.Reference;
    do {
      pFVar6 = pFVar8;
      if (iVar4 == 0) goto LAB_142dbc555;
      pTVar3 = &(pFVar7->Config).ButtonText;
      LOCK();
      iVar5 = *(int *)&(pTVar3->Value).TextData.Reference;
      bVar9 = iVar4 == iVar5;
      if (bVar9) {
        *(int *)&(pTVar3->Value).TextData.Reference = iVar4 + 1;
        iVar5 = iVar4;
      }
      UNLOCK();
      iVar4 = iVar5;
    } while (!bVar9);
    pFVar8 = (pSVar1->DrawerWeak).Object;
    pFVar6 = pFVar7;
    if (pFVar8 != (FSidebarDrawer *)0x0) goto LAB_142dbc57b;
  }
LAB_142dbc555:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x416,L"");
  pFVar7 = pFVar6;
  if (bVar9) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_142dbc57b:
  local_18.Object = pFVar8;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
  if ((pFVar8 == (FSidebarDrawer *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RemoveDrawerOverlaySlot(this,&local_18,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// OnContentSlotResizing @ 142dbc600

void __thiscall SSidebarContainer::OnContentSlotResizing(SSidebarContainer *this,float param_1)

{
  this->ContentSizePercent = param_1;
  return;
}

// OnDrawerSizeChanged @ 142dbdf20

void __thiscall
SSidebarContainer::OnDrawerSizeChanged
          (SSidebarContainer *this,TSharedRef<SSidebarDrawer,1> *param_1,float param_2)

{
  SSidebarDrawer *pSVar1;
  SSidebar *pSVar2;
  longlong *plVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  FGeometry *pFVar7;
  FSidebarState *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  float local_res8;
  FReadAccessScope local_58;
  FSidebarState local_40;
  
  if ((this->DrawersOverlay).Object != (SOverlay *)0x0) {
    pSVar1 = param_1->Object;
    pTVar9 = (pSVar1->DrawerWeak).WeakReferenceCount.ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = pTVar9->SharedReferenceCount;
      do {
        if (aVar5 == (atomic<int>)0x0) {
          pTVar9 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142dbdf70;
        }
        LOCK();
        aVar6 = pTVar9->SharedReferenceCount;
        bVar10 = aVar5 == aVar6;
        if (bVar10) {
          pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar6 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar6;
      } while (!bVar10);
      if ((pSVar1->DrawerWeak).Object != (FSidebarDrawer *)0x0) {
        if (((this->DrawersOverlay).Object == (SOverlay *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar7 = SWidget::GetTickSpaceGeometry((SWidget *)(this->DrawersOverlay).Object);
        local_res8 = SUB84(pFVar7->Size,0);
        this->SidebarSizePercent = param_2 / local_res8;
        if (((this->SidebarWidget).Object == (SSidebar *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pSVar2 = (this->SidebarWidget).Object;
        if ((pSVar2 == (SSidebar *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar8 = SSidebar::GetState((this->SidebarWidget).Object,&local_40);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar2->OnStateChanged
                   ,&local_58);
        if ((*(int *)&(pSVar2->OnStateChanged).field_0x10 != 0) &&
           (plVar3 = *(longlong **)&(pSVar2->OnStateChanged).field_0x8, plVar3 != (longlong *)0x0))
        {
          (**(code **)(*plVar3 + 0x68))(plVar3,pFVar8);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_58);
        DestructItems<FSidebarDrawerState,int>
                  ((FSidebarDrawerState *)local_40.DrawerStates.AllocatorInstance.Data,
                   local_40.DrawerStates.ArrayNum);
        if ((FSidebarDrawerState *)local_40.DrawerStates.AllocatorInstance.Data !=
            (FSidebarDrawerState *)0x0) {
          FMemory::Free(local_40.DrawerStates.AllocatorInstance.Data);
        }
      }
    }
LAB_142dbdf70:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  return;
}

// OnOpenAnimationFinish @ 142dc5830

void __thiscall
SSidebarContainer::OnOpenAnimationFinish
          (SSidebarContainer *this,TSharedRef<SSidebarDrawer,1> *param_1)

{
  return;
}

// OnOpenPendingDrawerTimer @ 142dc5840

EActiveTimerReturnType __thiscall
SSidebarContainer::OnOpenPendingDrawerTimer(SSidebarContainer *this,double param_1,float param_2)

{
  atomic<int> *paVar1;
  TWeakPtr<FSidebarDrawer,1> *pTVar2;
  atomic<int> aVar3;
  FSidebarDrawer *pFVar4;
  code *pcVar5;
  EActiveTimerReturnType EVar6;
  bool bVar7;
  atomic<int> aVar8;
  FGeometry *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  float local_res8;
  float fStackX_c;
  TSharedRef<FSidebarDrawer,1> local_48;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  longlong local_28 [2];
  
  pTVar2 = &this->PendingTabToOpen;
  pTVar10 = (this->PendingTabToOpen).WeakReferenceCount.ReferenceController;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar10->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142dc5884;
      }
      LOCK();
      aVar8 = pTVar10->SharedReferenceCount;
      bVar11 = aVar3 == aVar8;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar8 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar8;
    } while (!bVar11);
    pFVar4 = pTVar2->Object;
    if (pFVar4 != (FSidebarDrawer *)0x0) {
      if (((this->DrawersOverlay).Object == (SOverlay *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        EVar6 = (*pcVar5)();
        return EVar6;
      }
      pFVar9 = SWidget::GetTickSpaceGeometry((SWidget *)(this->DrawersOverlay).Object);
      local_res8 = SUB84(pFVar9->Size,0);
      if ((local_res8 == 0.0) && (fStackX_c = SUB84(pFVar9->Size,4), fStackX_c == 0.0)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10)
        ;
        return Continue;
      }
      bVar11 = this->bAnimatePendingTabOpen;
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      local_48.Object = pFVar4;
      local_48.SharedReferenceCount.ReferenceController = pTVar10;
      if ((pFVar4 == (FSidebarDrawer *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        EVar6 = (*pcVar5)();
        return EVar6;
      }
      OpenDrawer_Internal(this,&local_48,bVar11);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
  }
LAB_142dc5884:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if (pTVar2 != (TWeakPtr<FSidebarDrawer,1> *)local_28) {
    pTVar10 = (this->PendingTabToOpen).WeakReferenceCount.ReferenceController;
    pTVar2->Object = (FSidebarDrawer *)0x0;
    (this->PendingTabToOpen).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar10->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
      }
    }
  }
  this->bAnimatePendingTabOpen = false;
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->OpenPendingDrawerTimerHandle != (TSharedPtr<FActiveTimerHandle,1> *)&local_38) {
    (this->OpenPendingDrawerTimerHandle).Object = (FActiveTimerHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OpenPendingDrawerTimerHandle).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  return Stop;
}

// OnSidebarSlotResizing @ 142dc9c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSidebarContainer::OnSidebarSlotResizing(SSidebarContainer *this,float param_1)

{
  SSidebar *pSVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FSlateApplication *this_00;
  FReadAccessScope local_48;
  FSidebarState local_30;
  
  if (__real_3d4ccccd <= this->SidebarSizePercent) {
    if (this->SidebarSizeBeforeResize == 0.0) {
      this->ContentSizeBeforeResize = this->ContentSizePercent;
      this->SidebarSizeBeforeResize = this->SidebarSizePercent;
    }
    this->SidebarSizePercent = param_1;
  }
  else {
    this_00 = FSlateApplication::Get();
    FSlateApplication::ReleaseAllPointerCapture(this_00);
    if ((this->SidebarWidget).Object == (SSidebar *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    SSidebar::UndockAllDrawers((this->SidebarWidget).Object);
    this->ContentSizePercent = this->ContentSizeBeforeResize;
    this->SidebarSizePercent = this->SidebarSizeBeforeResize;
    this->bWantsToAutoDock = true;
    if ((this->SidebarWidget).Object == (SSidebar *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    SSidebar::GetState((this->SidebarWidget).Object,&local_30);
    local_30.DrawerSize = this->SidebarSizePercent;
    local_30.ContentSize = this->ContentSizePercent;
    if ((this->SidebarWidget).Object == (SSidebar *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pSVar1 = (this->SidebarWidget).Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar1->OnStateChanged,
               &local_48);
    if ((*(int *)&(pSVar1->OnStateChanged).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(pSVar1->OnStateChanged).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    DestructItems<FSidebarDrawerState,int>
              ((FSidebarDrawerState *)local_30.DrawerStates.AllocatorInstance.Data,
               local_30.DrawerStates.ArrayNum);
    if ((FSidebarDrawerState *)local_30.DrawerStates.AllocatorInstance.Data !=
        (FSidebarDrawerState *)0x0) {
      FMemory::Free(local_30.DrawerStates.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// OnSplitterResized @ 142dc9e30

void __thiscall SSidebarContainer::OnSplitterResized(SSidebarContainer *this)

{
  SSidebar *pSVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FSidebarState *pFVar5;
  FReadAccessScope local_48;
  FSidebarState local_30;
  
  this->bWantsToAutoDock = false;
  this->ContentSizeBeforeResize = 0.0;
  this->SidebarSizeBeforeResize = 0.0;
  if ((this->SidebarWidget).Object == (SSidebar *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar1 = (this->SidebarWidget).Object;
  if (pSVar1 == (SSidebar *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar5 = SSidebar::GetState((this->SidebarWidget).Object,&local_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar1->OnStateChanged,
             &local_48);
  if ((*(int *)&(pSVar1->OnStateChanged).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(pSVar1->OnStateChanged).field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,pFVar5);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  DestructItems<FSidebarDrawerState,int>
            ((FSidebarDrawerState *)local_30.DrawerStates.AllocatorInstance.Data,
             local_30.DrawerStates.ArrayNum);
  if ((FSidebarDrawerState *)local_30.DrawerStates.AllocatorInstance.Data !=
      (FSidebarDrawerState *)0x0) {
    FMemory::Free(local_30.DrawerStates.AllocatorInstance.Data);
  }
  return;
}

// OnTabDrawerFocusLost @ 142dca180

void __thiscall
SSidebarContainer::OnTabDrawerFocusLost
          (SSidebarContainer *this,TSharedRef<SSidebarDrawer,1> *param_1)

{
  SSidebarDrawer *pSVar1;
  FSidebarDrawer *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  TSharedRef<FSidebarDrawer,1> local_18;
  
  pSVar1 = param_1->Object;
  pTVar6 = (pSVar1->DrawerWeak).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar6->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142dca1c0;
      }
      LOCK();
      aVar5 = pTVar6->SharedReferenceCount;
      bVar7 = aVar4 == aVar5;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar7);
    pFVar2 = (pSVar1->DrawerWeak).Object;
    if ((pFVar2 != (FSidebarDrawer *)0x0) &&
       (UpdateDrawerTabAppearance(this), (pFVar2->State).bIsPinned == false)) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      local_18.Object = pFVar2;
      local_18.SharedReferenceCount.ReferenceController = pTVar6;
      if ((pFVar2 == (FSidebarDrawer *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      CloseDrawer_Internal(this,&local_18,true,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
LAB_142dca1c0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// OpenDrawerNextFrame @ 142dcbb40

void __thiscall
SSidebarContainer::OpenDrawerNextFrame
          (SSidebarContainer *this,TSharedRef<FSidebarDrawer,1> *param_1,bool param_2)

{
  atomic<int> *paVar1;
  TSharedPtr<FActiveTimerHandle,1> *pTVar2;
  atomic<int> aVar3;
  SSidebarDrawer *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  SWidget *pSVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  undefined8 *puVar11;
  TSharedRef<SWidget,1> *pTVar12;
  ulong64 uVar13;
  TSharedRef<FActiveTimerHandle,1> *pTVar14;
  FScriptContainerElement *pFVar15;
  TReferenceControllerBase<1> *pTVar16;
  uint uStackX_14;
  FActiveTimerHandle *local_a8;
  FSharedReferencer<1> local_a0;
  code *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  TSharedRef<SWidget,1> local_88;
  TSharedRef<FActiveTimerHandle,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  pSVar4 = (param_1->Object->DrawerWidget).Object;
  if (pSVar4 != (SSidebarDrawer *)0x0) {
    pFVar10 = (this->OpenDrawerWidgets).AllocatorInstance.Data;
    pFVar15 = pFVar10 + (longlong)(this->OpenDrawerWidgets).ArrayNum * 0x10;
    for (; pFVar10 != pFVar15; pFVar10 = pFVar10 + 0x10) {
      if (pSVar4 == *(SSidebarDrawer **)pFVar10) {
        return;
      }
    }
  }
  (this->PendingTabToOpen).Object = param_1->Object;
  pTVar16 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar16 != (this->PendingTabToOpen).WeakReferenceCount.ReferenceController) {
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->WeakReferenceCount = (atomic<int>)((int)pTVar16->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (this->PendingTabToOpen).WeakReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    (this->PendingTabToOpen).WeakReferenceCount.ReferenceController = pTVar16;
  }
  pTVar2 = &this->OpenPendingDrawerTimerHandle;
  this->bAnimatePendingTabOpen = param_2;
  if (pTVar2->Object == (FActiveTimerHandle *)0x0) {
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar11 = UE::Core::Private::DelegateAllocate(0x38,&local_60);
    if (puVar11 == (undefined8 *)0x0) {
      pTVar16 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_14 << 0x20);
    }
    else {
      uStack_8c = local_78.SharedReferenceCount.ReferenceController._4_4_;
      local_98 = OnOpenPendingDrawerTimer;
      uStack_90 = 0;
      pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_88);
      pTVar16 = (pTVar12->SharedReferenceCount).ReferenceController;
      pSVar6 = pTVar12->Object;
      if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar13 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar13;
      *puVar11 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VSSidebarContainer___00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar11[3] = pSVar6;
      puVar11[4] = pTVar16;
      if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar16->WeakReferenceCount = (atomic<int>)((int)pTVar16->WeakReferenceCount + 1);
        UNLOCK();
      }
      bVar9 = true;
      bVar8 = true;
      bVar7 = true;
      puVar11[5] = local_98;
      puVar11[6] = CONCAT44(uStack_8c,uStack_90);
    }
    if (bVar7) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
    }
    if (bVar8) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
    }
    if (bVar9) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    pTVar14 = SWidget::RegisterActiveTimer
                        ((SWidget *)this,&local_78,0.0,
                         (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                          *)local_68);
    local_a0.ReferenceController = (pTVar14->SharedReferenceCount).ReferenceController;
    local_a8 = pTVar14->Object;
    if (local_a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_a0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar2 != (TSharedPtr<FActiveTimerHandle,1> *)&local_a8) {
      pTVar2->Object = local_a8;
      local_a8 = (FActiveTimerHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->OpenPendingDrawerTimerHandle).SharedReferenceCount,&local_a0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_78.SharedReferenceCount.ReferenceController._4_4_,
                        local_78.SharedReferenceCount.ReferenceController._0_4_));
  }
  return;
}

// OpenDrawer_Internal @ 142dcbda0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SSidebarContainer::OpenDrawer_Internal
          (SSidebarContainer *this,TSharedRef<FSidebarDrawer,1> *param_1,bool param_2)

{
  atomic<int> *paVar1;
  TSharedPtr<FActiveTimerHandle,1> *pTVar2;
  atomic<int> aVar3;
  int iVar4;
  SSidebarDrawer *pSVar5;
  SSidebar *pSVar6;
  TReferenceControllerBase<1> *pTVar7;
  FSidebarDrawer *pFVar8;
  FName FVar9;
  longlong *plVar10;
  code *pcVar11;
  bool bVar12;
  FThrottleRequest FVar13;
  FScriptContainerElement *pFVar14;
  TSharedRef<SWidget,1> *pTVar15;
  FSlateThrottleManager *this_00;
  undefined4 extraout_var;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *pTVar16;
  TSharedRef<FActiveTimerHandle,1> *pTVar17;
  FSlateApplication *this_01;
  TSharedRef<FSidebarDrawer,1> *pTVar18;
  TSharedRef<FSidebarDrawer,1> *pTVar19;
  FScriptContainerElement *pFVar20;
  float fVar21;
  undefined1 local_res10 [8];
  FActiveTimerHandle *local_c8;
  FSharedReferencer<1> local_c0;
  TSharedRef<SWidget,1> local_b8;
  TSharedPtr<SWidget,1> local_a8;
  code *local_98;
  longlong lStack_90;
  TSharedRef<FActiveTimerHandle,1> local_88;
  FReadAccessScope local_78;
  undefined8 local_60 [2];
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> local_50;
  
  pSVar5 = (param_1->Object->DrawerWidget).Object;
  if (pSVar5 != (SSidebarDrawer *)0x0) {
    pFVar14 = (this->OpenDrawerWidgets).AllocatorInstance.Data;
    pFVar20 = pFVar14 + (longlong)(this->OpenDrawerWidgets).ArrayNum * 0x10;
    for (; pFVar14 != pFVar20; pFVar14 = pFVar14 + 0x10) {
      if (pSVar5 == *(SSidebarDrawer **)pFVar14) {
        return;
      }
    }
  }
  if (((this->SidebarWidget).Object == (SSidebar *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pSVar6 = (this->SidebarWidget).Object;
  iVar4 = (pSVar6->Drawers).ArrayNum;
  pTVar18 = (TSharedRef<FSidebarDrawer,1> *)(pSVar6->Drawers).AllocatorInstance.Data;
  pTVar19 = pTVar18 + iVar4;
  while( true ) {
    if ((pSVar6->Drawers).ArrayNum != iVar4) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedRef<FSidebarDrawer,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pTVar18 == pTVar19) break;
    CloseDrawer_Internal(this,pTVar18,false,false);
    pTVar18 = pTVar18 + 1;
  }
  if (&this->PendingTabToOpen != (TWeakPtr<FSidebarDrawer,1> *)local_60) {
    pTVar7 = (this->PendingTabToOpen).WeakReferenceCount.ReferenceController;
    (this->PendingTabToOpen).Object = (FSidebarDrawer *)0x0;
    (this->PendingTabToOpen).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar7->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
      }
    }
  }
  this->bAnimatePendingTabOpen = false;
  CreateDrawerWidget(this,param_1);
  AddDrawerOverlaySlot(this,param_1);
  pFVar8 = param_1->Object;
  if (((pFVar8->DrawerWidget).Object == (SSidebarDrawer *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pSVar5 = (pFVar8->DrawerWidget).Object;
  if (param_2) {
    bVar12 = FCurveSequence::IsInReverse(&pSVar5->OpenCloseAnimation);
    if (bVar12) {
      FCurveSequence::Reverse(&pSVar5->OpenCloseAnimation);
    }
    fVar21 = FCurveSequence::GetSequenceTime(&pSVar5->OpenCloseAnimation);
    pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&pSVar5->_padding_,&local_b8);
    FCurveSequence::Play(&pSVar5->OpenCloseAnimation,pTVar15,false,fVar21,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_b8.SharedReferenceCount.ReferenceController._4_4_,
                        local_b8.SharedReferenceCount.ReferenceController._0_4_));
    pTVar2 = &pSVar5->OpenCloseTimer;
    if (pTVar2->Object == (FActiveTimerHandle *)0x0) {
      this_00 = FSlateThrottleManager::Get();
      FVar13 = FSlateThrottleManager::EnterResponsiveMode(this_00);
      local_b8.SharedReferenceCount.ReferenceController._0_4_ = 0;
      local_b8.Object = (SWidget *)SSidebarDrawer::UpdateAnimation;
      lStack_90 = (ulonglong)local_b8.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
      (pSVar5->AnimationThrottle).Index = *(int *)CONCAT44(extraout_var,FVar13.Index);
      local_98 = SSidebarDrawer::UpdateAnimation;
      pTVar16 = TDelegate<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                ::CreateSP<SSidebarDrawer>(&local_50,pSVar5,(pmf_e3dee309 *)&local_98);
      pTVar17 = SWidget::RegisterActiveTimer((SWidget *)pSVar5,&local_88,0.0,pTVar16);
      local_c0.ReferenceController = (pTVar17->SharedReferenceCount).ReferenceController;
      local_c8 = pTVar17->Object;
      if (local_c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_c0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_c0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pTVar2 != (TSharedPtr<FActiveTimerHandle,1> *)&local_c8) {
        pTVar2->Object = local_c8;
        local_c8 = (FActiveTimerHandle *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pSVar5->OpenCloseTimer).SharedReferenceCount,&local_c0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c0.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
    }
  }
  else {
    fVar21 = pSVar5->TargetDrawerSize;
    if (pSVar5->TargetDrawerSize <= pSVar5->MinDrawerSize) {
      fVar21 = pSVar5->MinDrawerSize;
    }
    pSVar5->CurrentSize = fVar21;
    FCurveSequence::JumpToEnd(&pSVar5->OpenCloseAnimation);
  }
  param_1->Object->bIsOpen = true;
  pFVar8 = param_1->Object;
  FVar9 = (pFVar8->Config).UniqueId;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar8->DrawerOpenedDelegate
             ,&local_78);
  if ((*(int *)&(pFVar8->DrawerOpenedDelegate).field_0x10 != 0) &&
     (plVar10 = *(longlong **)&(pFVar8->DrawerOpenedDelegate).field_0x8, plVar10 != (longlong *)0x0)
     ) {
    (**(code **)(*plVar10 + 0x68))(plVar10,FVar9);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_78);
  UpdateDrawerTabAppearance(this);
  this_01 = FSlateApplication::Get();
  local_a8.Object = (SWidget *)(param_1->Object->DrawerWidget).Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_1->Object->DrawerWidget).SharedReferenceCount.ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateApplication::SetKeyboardFocus(this_01,&local_a8,SetDirectly);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  return;
}

// RebuildSidebar @ 142dd0dd0

void __thiscall
SSidebarContainer::RebuildSidebar
          (SSidebarContainer *this,TSharedRef<SSidebar,1> *param_1,FSidebarState *param_2)

{
  SSidebar *local_18;
  FSharedReferencer<1> local_10;
  
  local_18 = param_1->Object;
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->SidebarWidget != (TSharedPtr<SSidebar,1> *)&local_18) {
    (this->SidebarWidget).Object = local_18;
    local_18 = (SSidebar *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SidebarWidget).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  Reconstruct(this,param_2);
  return;
}

// Reconstruct @ 142dd1220

void __thiscall SSidebarContainer::Reconstruct(SSidebarContainer *this,FSidebarState *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  TSharedRef<SWidget,1> *pTVar5;
  FArguments *pFVar6;
  FSlotArguments *pFVar7;
  FArguments *pFVar8;
  TSharedRef<SOverlay,1> *pTVar9;
  undefined4 *puVar10;
  FSlotArguments *pFVar11;
  FSlotArguments *pFVar12;
  longlong *plVar13;
  FSlotBase *this_00;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  SOverlay *local_628;
  FSharedReferencer<1> local_620;
  SOverlay *local_618;
  FSharedReferencer<1> local_610;
  undefined4 local_608 [2];
  undefined4 local_600 [2];
  undefined4 local_5f8 [2];
  undefined4 local_5f0 [2];
  FName local_5e8;
  FMemScope local_5e0;
  FName local_5d8;
  FMemScope local_5d0;
  undefined8 local_5c8;
  FSharedReferencer<1> FStack_5c0;
  undefined8 local_5b8;
  FSharedReferencer<1> local_5b0;
  undefined8 local_5a8;
  FSharedReferencer<1> local_5a0;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_598;
  TSharedRef<SWidget,1> local_580;
  SOverlay *local_570;
  TReferenceControllerBase<1> *pTStack_568;
  TSharedRef<SOverlay,1> local_560;
  TSharedRef<SOverlay,1> local_550;
  TSharedRef<SWidget,1> local_540;
  SWidget *local_530;
  TReferenceControllerBase<1> *pTStack_528;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_520;
  undefined1 local_508 [56];
  void *local_4d0;
  undefined1 local_4a8 [56];
  void *local_470;
  FArguments local_448;
  FArguments local_240;
  
  pFVar12 = (FSlotArguments *)0x0;
  local_620.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1->bHidden == false) {
    pFVar6 = SOverlay::FArguments::FArguments(&local_240);
    pFVar7 = SOverlay::Slot((FSlotArguments *)local_4a8,0);
    plVar13 = &pFVar7->_padding_;
    if ((longlong *)local_608 != plVar13) {
      *(undefined4 *)plVar13 = 0;
      *(undefined1 *)((longlong)&pFVar7->_padding_ + 4) = 1;
    }
    pFVar11 = pFVar12;
    if (plVar13 != (longlong *)0x0) {
      pFVar11 = pFVar7;
    }
    if ((longlong *)local_600 != &pFVar11->_padding_) {
      *(undefined4 *)&pFVar11->_padding_ = 0;
      *(undefined1 *)((longlong)&pFVar11->_padding_ + 4) = 1;
    }
    pFVar7 = pFVar12;
    if (pFVar11 != (FSlotArguments *)0xffffffffffffffb8) {
      pFVar7 = pFVar11;
    }
    pTVar5 = ConstructBoxPanel(this,&local_540,param_1);
    pFVar7 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                       ((FSlotArguments *)pFVar7,pTVar5);
    pFVar6 = SOverlay::FArguments::operator+(pFVar6,pFVar7);
    pFVar7 = SOverlay::Slot((FSlotArguments *)local_508,0);
    plVar13 = &pFVar7->_padding_;
    if ((longlong *)local_5f8 != plVar13) {
      *(undefined4 *)plVar13 = 0;
      *(undefined1 *)((longlong)&pFVar7->_padding_ + 4) = 1;
    }
    pFVar11 = pFVar12;
    if (plVar13 != (longlong *)0x0) {
      pFVar11 = pFVar7;
    }
    if ((longlong *)local_5f0 != &pFVar11->_padding_) {
      *(undefined4 *)&pFVar11->_padding_ = 0;
      *(undefined1 *)((longlong)&pFVar11->_padding_ + 4) = 1;
    }
    if (pFVar11 != (FSlotArguments *)0xffffffffffffffb8) {
      pFVar12 = pFVar11;
    }
    pFVar8 = SOverlay::FArguments::FArguments(&local_448);
    FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_5e8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_5e0,&local_5e8,true);
    TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
              (&local_598,"SOverlay",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarContainer.cpp"
               ,0x2f,local_res8);
    FMemScope::~FMemScope(&local_5e0);
    FLLMScope::~FLLMScope(local_res18);
    if (local_598._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_598._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_598._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    local_570 = (this->DrawersOverlay).Object;
    pTStack_568 = (this->DrawersOverlay).SharedReferenceCount.ReferenceController;
    (this->DrawersOverlay).Object = local_598._Widget.Object;
    (this->DrawersOverlay).SharedReferenceCount.ReferenceController =
         local_598._Widget.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_568)
    ;
    pTVar9 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                       (&local_598,&local_550,pFVar8);
    pTVar1 = (pTVar9->SharedReferenceCount).ReferenceController;
    local_618 = pTVar9->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_610.ReferenceController = pTVar1;
    if ((SOverlay **)&pFVar12->_padding_ != &local_618) {
      pFVar12->_padding_ = (longlong)local_618;
      local_618 = (SOverlay *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar12->_padding_,&local_610);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_610.ReferenceController);
    pFVar6 = SOverlay::FArguments::operator+(pFVar6,pFVar12);
    FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_5d8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_5d0,&local_5d8,true);
    TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
              (&local_520,"SOverlay",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarContainer.cpp"
               ,0x24,local_res10);
    FMemScope::~FMemScope(&local_5d0);
    FLLMScope::~FLLMScope(local_res20);
    pTVar9 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                       (&local_520,&local_560,pFVar6);
    local_5a0.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
    local_628 = pTVar9->Object;
    if (local_5a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_5a0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_5a0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_5a8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_620,&local_5a0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5a0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_560.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_520._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_550.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_598._Widget.SharedReferenceCount.ReferenceController);
    DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
              ((FSlotArguments *)local_448._Slots.AllocatorInstance.Data,local_448._Slots.ArrayNum);
    if ((FSlotArguments *)local_448._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_448._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_448);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_508 + 0x30));
    if (local_4d0 != (void *)0x0) {
      FMemory::Free(local_4d0);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)(local_508 + 0x30));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_508._16_8_);
    if ((undefined8 *)local_508._0_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_508._0_8_)(local_508._0_8_,1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_540.SharedReferenceCount.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_4a8 + 0x30));
    if (local_470 != (void *)0x0) {
      FMemory::Free(local_470);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)(local_4a8 + 0x30));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_4a8._16_8_);
    if ((undefined8 *)local_4a8._0_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_4a8._0_8_)(local_4a8._0_8_,1);
    }
    DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
              ((FSlotArguments *)local_240._Slots.AllocatorInstance.Data,local_240._Slots.ArrayNum);
    if ((FSlotArguments *)local_240._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_240._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_240);
  }
  else {
    local_5c8 = 0;
    FStack_5c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->DrawersOverlay != (TSharedPtr<SOverlay,1> *)&local_5c8) {
      (this->DrawersOverlay).Object = (SOverlay *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->DrawersOverlay).SharedReferenceCount,&FStack_5c0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_5c0.ReferenceController);
    if ((this->SidebarWidget).Object == (SSidebar *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pTVar5 = SSidebar::GetMainContent((this->SidebarWidget).Object,&local_580);
    local_5b0.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
    local_628 = (SOverlay *)pTVar5->Object;
    if (local_5b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_5b0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_5b0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_5b8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_620,&local_5b0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5b0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_580.SharedReferenceCount.ReferenceController);
  }
  plVar13 = &this->_padding_;
  puVar10 = (undefined4 *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)plVar13 = 0;
  if (plVar13 == (longlong *)0x0) {
    puVar10 = (undefined4 *)&DAT_00000054;
  }
  *puVar10 = 0;
  if (local_628 == (SOverlay *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar3.ReferenceController = local_620.ReferenceController;
  if (local_620.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_620.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_620.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_628 == (SOverlay *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = (FSlotBase *)&this->_padding_;
  if (plVar13 == (longlong *)0x0) {
    this_00 = (FSlotBase *)&DAT_00000020;
  }
  FSlotBase::DetatchParentFromContent(this_00);
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar3.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar3.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_530 = (this_00->Widget).Object;
  pTStack_528 = (this_00->Widget).SharedReferenceCount.ReferenceController;
  (this_00->Widget).Object = (SWidget *)local_628;
  (this_00->Widget).SharedReferenceCount.ReferenceController = FVar3.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_528);
  FSlotBase::AfterContentOrOwnerAssigned(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_620.ReferenceController);
  return;
}

// RemoveContentDockSlot @ 142dd4db0

void __thiscall SSidebarContainer::RemoveContentDockSlot(SSidebarContainer *this)

{
  ESidebarTabLocation EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if ((this->SidebarWidget).Object == (SSidebar *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar1 = ((this->SidebarWidget).Object)->TabLocation;
  if ((EVar1 == Left) || ((EVar1 != Right && (EVar1 == Top)))) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  if ((this->MainSplitter).Object == (SSplitter *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SSplitter::RemoveAt((this->MainSplitter).Object,iVar4);
  return;
}

// RemoveDrawerOverlaySlot @ 142dd5170

bool __thiscall
SSidebarContainer::RemoveDrawerOverlaySlot
          (SSidebarContainer *this,TSharedRef<FSidebarDrawer,1> *param_1,bool param_2)

{
  int *piVar1;
  TArray<TSharedRef<SSidebarDrawer,1>,TSizedDefaultAllocator<32>_> *this_00;
  TSharedRef<SSidebarDrawer,1> *pTVar2;
  SOverlay *this_01;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  TSharedRef<SSidebarDrawer,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  local_28.Object = (param_1->Object->DrawerWidget).Object;
  if (local_28.Object == (SSidebarDrawer *)0x0) {
    return false;
  }
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->Object->DrawerWidget).SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_28.Object == (SSidebarDrawer *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  this_00 = &this->ClosingDrawerWidgets;
  if (param_2) {
    pTVar2 = (TSharedRef<SSidebarDrawer,1> *)(this_00->AllocatorInstance).Data;
    if ((pTVar2 <= &local_28) && (&local_28 < pTVar2 + (this->ClosingDrawerWidgets).ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    iVar6 = (this->ClosingDrawerWidgets).ArrayNum;
    piVar1 = &(this->ClosingDrawerWidgets).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&this_00->AllocatorInstance,piVar1);
    }
    pFVar7 = (this_00->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    (this->ClosingDrawerWidgets).ArrayNum = iVar6 + 1;
    *(SSidebarDrawer **)pFVar7 = local_28.Object;
    *(TReferenceControllerBase<1> **)(pFVar7 + 8) =
         local_28.SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    TArray<TSharedRef<SSidebarDrawer,1>,TSizedDefaultAllocator<32>_>::Remove(this_00,&local_28);
    if ((this->DrawersOverlay).Object == (SOverlay *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    this_01 = (this->DrawersOverlay).Object;
    local_18.Object = (SWidget *)local_28.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SOverlay::RemoveSlot(this_01,&local_18);
  }
  TArray<TSharedRef<SSidebarDrawer,1>,TSizedDefaultAllocator<32>_>::Remove
            (&this->OpenDrawerWidgets,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return true;
}

// RemoveSidebarDockSlot @ 142dd54b0

void __thiscall SSidebarContainer::RemoveSidebarDockSlot(SSidebarContainer *this)

{
  ESidebarTabLocation EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if ((this->SidebarWidget).Object == (SSidebar *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar1 = ((this->SidebarWidget).Object)->TabLocation;
  if ((EVar1 == Left) || ((EVar1 != Right && (EVar1 == Top)))) {
    iVar4 = 0;
  }
  else {
    iVar4 = 1;
  }
  if ((this->MainSplitter).Object == (SSplitter *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SSplitter::RemoveAt((this->MainSplitter).Object,iVar4);
  return;
}

// SummonPinnedTabIfNothingOpened @ 142dda360

void __thiscall SSidebarContainer::SummonPinnedTabIfNothingOpened(SSidebarContainer *this)

{
  int iVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  SSidebar *pSVar4;
  FSidebarDrawer *pFVar5;
  code *pcVar6;
  atomic<int> aVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  atomic<int> aVar11;
  TReferenceControllerBase<1> *pTVar12;
  FScriptContainerElement *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  FScriptContainerElement *pFVar15;
  TReferenceControllerBase<1> *pTVar16;
  <lambda_1> local_res8 [8];
  TSharedRef<FSidebarDrawer,1> local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  uVar9 = TArray<TSharedRef<SSidebarDrawer,1>,TSizedDefaultAllocator<32>_>::
          FindLastByPredicate<_SSidebarContainer::GetForegroundDrawer_::__l2::<lambda_1>_>
                    (&this->OpenDrawerWidgets,local_res8[0],(this->OpenDrawerWidgets).ArrayNum);
  if (uVar9 == 0xffffffff) {
    local_30 = 0;
    local_38 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    uVar10 = 0;
    if ((int)uVar9 < (this->OpenDrawerWidgets).ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar2 = *(longlong *)
             ((this->OpenDrawerWidgets).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10);
    pTVar3 = *(TReferenceControllerBase<1> **)(lVar2 + 0x2b0);
    pTVar12 = pTVar3;
    pTVar14 = pTVar16;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      aVar7 = pTVar3->SharedReferenceCount;
      do {
        pTVar12 = pTVar16;
        if (aVar7 == (atomic<int>)0x0) goto LAB_142dda437;
        LOCK();
        aVar11 = pTVar3->SharedReferenceCount;
        bVar8 = aVar7 == aVar11;
        if (bVar8) {
          pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
          aVar11 = aVar7;
        }
        UNLOCK();
        aVar7 = aVar11;
      } while (!bVar8);
      pTVar12 = pTVar3;
      pTVar14 = *(TReferenceControllerBase<1> **)(lVar2 + 0x2a8);
    }
LAB_142dda437:
    local_20 = 0;
    local_28 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      return;
    }
  }
  if (((this->SidebarWidget).Object == (SSidebar *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pSVar4 = (this->SidebarWidget).Object;
  iVar1 = (pSVar4->Drawers).ArrayNum;
  pFVar13 = (pSVar4->Drawers).AllocatorInstance.Data;
  pFVar15 = pFVar13 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((pSVar4->Drawers).ArrayNum != iVar1) {
      local_res8[0] = (<lambda_1>)0x0;
      `TCheckedPointerIterator<TSharedRef<FSidebarDrawer,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar15) goto LAB_142dda574;
    pFVar5 = *(FSidebarDrawer **)pFVar13;
    if ((pFVar5->State).bIsPinned != false) break;
    pFVar13 = pFVar13 + 0x10;
  }
  pTVar16 = *(TReferenceControllerBase<1> **)(pFVar13 + 8);
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar5 != (FSidebarDrawer *)0x0) {
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48.Object = pFVar5;
    local_48.SharedReferenceCount.ReferenceController = pTVar16;
    if ((pFVar5 == (FSidebarDrawer *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    OpenDrawer_Internal(this,&local_48,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
LAB_142dda574:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  return;
}

// UndockDrawer_Internal @ 142ddb600

void __thiscall
SSidebarContainer::UndockDrawer_Internal
          (SSidebarContainer *this,TSharedRef<FSidebarDrawer,1> *param_1)

{
  FSidebarState local_28;
  
  param_1->Object->bIsOpen = false;
  (param_1->Object->State).bIsDocked = false;
  local_28._1_2_ = 0;
  local_28._3_1_ = 0;
  local_28.ContentSize = 0.0;
  local_28._12_4_ = 0;
  local_28.bHidden = false;
  local_28.DrawerSize = 0.0;
  local_28.DrawerStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.DrawerStates.ArrayNum = 0;
  local_28.DrawerStates.ArrayMax = 0;
  Reconstruct(this,&local_28);
  DestructItems<FSidebarDrawerState,int>((FSidebarDrawerState *)0x0,0);
  UpdateDrawerTabAppearance(this);
  return;
}

// UpdateDrawerTabAppearance @ 142ddcc90

void __thiscall SSidebarContainer::UpdateDrawerTabAppearance(SSidebarContainer *this)

{
  int iVar1;
  longlong lVar2;
  SSidebar *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  SSidebarButton *this_00;
  code *pcVar5;
  atomic<int> aVar6;
  bool bVar7;
  uint uVar8;
  atomic<int> aVar9;
  FSidebarDrawer *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  FSharedReferencer<1> local_30;
  TSharedPtr<FSidebarDrawer,1> local_28;
  
  iVar1 = (this->OpenDrawerWidgets).ArrayNum;
  local_28.Object = (FSidebarDrawer *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (0 < iVar1) {
    pFVar10 = (FSidebarDrawer *)0x0;
    uVar8 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar8 = ~(iVar1 - 1U) >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar2 = *(longlong *)
             ((this->OpenDrawerWidgets).AllocatorInstance.Data +
             (longlong)(this->OpenDrawerWidgets).ArrayNum * 0x10 + -0x10);
    local_30.ReferenceController = *(TReferenceControllerBase<1> **)(lVar2 + 0x2b0);
    if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar6 = (local_30.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar6 == (atomic<int>)0x0) {
          local_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142ddcd57;
        }
        LOCK();
        aVar9 = (local_30.ReferenceController)->SharedReferenceCount;
        bVar7 = aVar6 == aVar9;
        if (bVar7) {
          (local_30.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
          aVar9 = aVar6;
        }
        UNLOCK();
        aVar6 = aVar9;
      } while (!bVar7);
      pFVar10 = *(FSidebarDrawer **)(lVar2 + 0x2a8);
    }
LAB_142ddcd57:
    local_28.Object = pFVar10;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_28.SharedReferenceCount,&local_30);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30.ReferenceController);
  }
  if (((this->SidebarWidget).Object == (SSidebar *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pSVar3 = (this->SidebarWidget).Object;
  iVar1 = (pSVar3->Drawers).ArrayNum;
  pFVar11 = (pSVar3->Drawers).AllocatorInstance.Data;
  pFVar12 = pFVar11 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((pSVar3->Drawers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FSidebarDrawer,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar12) break;
    pTVar4 = *(TReferenceControllerBase<1> **)(*(longlong *)pFVar11 + 0x108);
    this_00 = *(SSidebarButton **)(*(longlong *)pFVar11 + 0x100);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 != (SSidebarButton *)0x0) {
      SSidebarButton::UpdateAppearance(this_00,&local_28);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pFVar11 = pFVar11 + 0x10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

