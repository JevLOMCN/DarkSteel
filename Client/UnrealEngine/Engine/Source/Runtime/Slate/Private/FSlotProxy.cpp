// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// FSlotProxy<SPrioritizedWrapBox::FSlot> @ 142796040

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FSlotProxy * __thiscall
FSlotProxy::FSlotProxy<SPrioritizedWrapBox::FSlot>(FSlotProxy *this,int param_1,FSlot *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FDestructionSentinel local_48;
  float local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  FSlotProxy(this,(TSharedRef<SWidget,1> *)&param_2->_padding_);
  this->SlotIndex = param_1;
  uVar1 = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  uVar2 = *(undefined4 *)&param_2->_padding_;
  uVar3 = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_2c = 1;
  (this->Padding).Left = (float)*(undefined4 *)&param_2->_padding_;
  (this->Padding).Top = (float)uVar1;
  (this->Padding).Right = (float)uVar2;
  (this->Padding).Bottom = (float)uVar3;
  this->MinSize = *(float *)((longlong)&param_2->_padding_ + 4);
  this->MaxSize = (float)param_2->_padding_;
  (this->SizeParam).SizeRule = (ESizeRule)param_2->_padding_;
  local_30 = *(float *)((longlong)&param_2->_padding_ + 4);
  local_18 = 0;
  (this->SizeParam).Value.Value = local_30;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  (this->SizeParam).Value.bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SizeParam).Value.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  local_30 = *(float *)&param_2->_padding_;
  local_18 = 0;
  (this->SizeParam).ShrinkValue.Value = local_30;
  local_2c = 1;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  (this->SizeParam).ShrinkValue.bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SizeParam).ShrinkValue.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  this->HorizontalAlignment = (EHorizontalAlignment)param_2->_padding_;
  this->VerticalAlignment = *(EVerticalAlignment *)((longlong)&param_2->_padding_ + 4);
  return this;
}

// UpdateFromSlot<SPrioritizedWrapBox::FSlot,1> @ 1427a8a30

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall
FSlotProxy::UpdateFromSlot<SPrioritizedWrapBox::FSlot,1>
          (FSlotProxy *this,int param_1,FSlot *param_2)

{
  TAttribute<float> *this_00;
  ESizeRule EVar1;
  EHorizontalAlignment EVar2;
  TVector2<float>_u_0_s_0 TVar3;
  TVector2<float>_u_0 TVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  uint uVar9;
  bool bVar10;
  FGeometry *pFVar11;
  FDeprecateSlateVector2D FVar12;
  float *pfVar13;
  float fVar14;
  float local_res8;
  float fStackX_c;
  FDestructionSentinel local_98;
  float local_80;
  undefined1 local_7c;
  undefined1 local_78 [8];
  ForAnyElementType FStack_70;
  ulonglong local_68;
  
  bVar10 = UpdateFromSlot(this,(TSharedRef<SWidget,1> *)&param_2->_padding_);
  pFVar11 = SWidget::GetTickSpaceGeometry((SWidget *)param_2->_padding_);
  TVar3 = *(TVector2<float>_u_0_s_0 *)&pFVar11->Size;
  FVar12 = SWidget::GetDesiredSize((SWidget *)param_2->_padding_);
  uVar9 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  TVar4 = *(TVector2<float>_u_0 *)FVar12;
  if (((bVar10) ||
      (local_res8 = TVar3.X,
      __real_38d1b717 <
      (float)((uint)((this->ArrangedSize).field0_0x0._s_0.X - local_res8) &
             __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
     (fStackX_c = TVar3.Y,
     __real_38d1b717 <
     (float)((uint)((this->ArrangedSize).field0_0x0._s_0.Y - fStackX_c) &
            __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    (this->ArrangedSize).field0_0x0._s_0 = TVar3;
    (this->DesiredSize).field0_0x0 = TVar4;
LAB_1427a8b22:
    this->SlotIndex = param_1;
LAB_1427a8b29:
    bVar10 = true;
  }
  else {
    (this->ArrangedSize).field0_0x0._s_0 = TVar3;
    (this->DesiredSize).field0_0x0 = TVar4;
    if (this->SlotIndex != param_1) goto LAB_1427a8b22;
    this->SlotIndex = param_1;
    if (((*(float *)&param_2->_padding_ != (this->Padding).Left) ||
        (*(float *)&param_2->_padding_ != (this->Padding).Right)) ||
       ((*(float *)((longlong)&param_2->_padding_ + 4) != (this->Padding).Top ||
        (*(float *)((longlong)&param_2->_padding_ + 4) != (this->Padding).Bottom))))
    goto LAB_1427a8b29;
    bVar10 = false;
  }
  fVar8 = __real_322bcc77;
  uVar5 = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  uVar6 = *(undefined4 *)&param_2->_padding_;
  uVar7 = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  (this->Padding).Left = (float)*(undefined4 *)&param_2->_padding_;
  (this->Padding).Top = (float)uVar5;
  (this->Padding).Right = (float)uVar6;
  (this->Padding).Bottom = (float)uVar7;
  fVar14 = *(float *)((longlong)&param_2->_padding_ + 4);
  if ((bVar10) || (fVar8 < (float)((uint)(this->MinSize - fVar14) & uVar9))) {
    this->MinSize = fVar14;
    fVar14 = (float)param_2->_padding_;
LAB_1427a8bca:
    this->MaxSize = fVar14;
LAB_1427a8bd0:
    (this->SizeParam).SizeRule = (ESizeRule)param_2->_padding_;
    fVar14 = *(float *)((longlong)&param_2->_padding_ + 4);
LAB_1427a8be2:
    bVar10 = true;
  }
  else {
    this->MinSize = fVar14;
    fVar14 = (float)param_2->_padding_;
    if (fVar8 < (float)((uint)(this->MaxSize - fVar14) & uVar9)) goto LAB_1427a8bca;
    this->MaxSize = fVar14;
    EVar1 = (ESizeRule)param_2->_padding_;
    if ((this->SizeParam).SizeRule != EVar1) goto LAB_1427a8bd0;
    (this->SizeParam).SizeRule = EVar1;
    fVar14 = *(float *)((longlong)&param_2->_padding_ + 4);
    pfVar13 = TAttribute<float>::Get(&(this->SizeParam).Value);
    if (fVar8 < (float)((uint)(*pfVar13 - fVar14) & uVar9)) goto LAB_1427a8be2;
    bVar10 = false;
  }
  (this->SizeParam).Value.Value = fVar14;
  local_68 = 0;
  local_7c = 1;
  local_78 = (undefined1  [8])0x0;
  FStack_70.Data = (FScriptContainerElement *)0x0;
  (this->SizeParam).Value.bIsSet = true;
  local_80 = fVar14;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SizeParam).Value.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_98);
  if (((int)local_68 != 0) && (FStack_70.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_70.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_70,0,0,0x10);
    local_68 = local_68 & 0xffffffff00000000;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (FStack_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_70.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  fVar14 = *(float *)&param_2->_padding_;
  this_00 = &(this->SizeParam).ShrinkValue;
  if (bVar10) {
LAB_1427a8ca5:
    bVar10 = true;
  }
  else {
    pfVar13 = TAttribute<float>::Get(this_00);
    bVar10 = false;
    if (fVar8 < (float)((uint)(*pfVar13 - fVar14) & uVar9)) goto LAB_1427a8ca5;
  }
  local_68 = 0;
  this_00->Value = fVar14;
  local_7c = 1;
  local_78 = (undefined1  [8])0x0;
  FStack_70.Data = (FScriptContainerElement *)0x0;
  (this->SizeParam).ShrinkValue.bIsSet = true;
  local_80 = fVar14;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SizeParam).ShrinkValue.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_98);
  if (((int)local_68 != 0) && (FStack_70.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_70.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_70,0,0,0x10);
    local_68 = local_68 & 0xffffffff00000000;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (FStack_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_70.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  if ((bVar10) ||
     (EVar2 = (EHorizontalAlignment)param_2->_padding_, this->HorizontalAlignment != EVar2)) {
    this->HorizontalAlignment = (EHorizontalAlignment)param_2->_padding_;
  }
  else {
    this->HorizontalAlignment = EVar2;
    if (this->VerticalAlignment == *(EVerticalAlignment *)((longlong)&param_2->_padding_ + 4)) {
      bVar10 = false;
      goto LAB_1427a8d76;
    }
  }
  bVar10 = true;
LAB_1427a8d76:
  this->VerticalAlignment = *(EVerticalAlignment *)((longlong)&param_2->_padding_ + 4);
  return bVar10;
}

// FSlotProxy @ 1427b48e0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FSlotProxy * __thiscall
UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy::FSlotProxy
          (FSlotProxy *this,FSlotProxy *param_1)

{
  char cVar1;
  EVerticalOverflowBehavior EVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  uVar4 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  *(undefined8 *)((longlong)&this->_padding_ + 4) =
       *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar4;
  *(undefined8 *)((longlong)&this->_padding_ + 4) =
       *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  *(undefined8 *)((longlong)&this->_padding_ + 4) =
       *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  FSizeParam::FSizeParam((FSizeParam *)&this->_padding_,(FSizeParam *)&param_1->_padding_);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  lVar5 = param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(int *)&this->_padding_ = (int)lVar5;
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 4);
  *(char *)((longlong)&this->_padding_ + 4) = cVar1;
  if (cVar1 != '\0') {
    uVar4 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
    *(undefined8 *)((longlong)&this->_padding_ + 4) =
         *(undefined8 *)((longlong)&param_1->_padding_ + 4);
    *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar4;
    *(undefined8 *)((longlong)&this->_padding_ + 4) =
         *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  }
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  lVar5 = param_1->_padding_;
  this->_padding_ = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  this->WrapMode = param_1->WrapMode;
  EVar2 = param_1->VerticalOverflowBehavior;
  (this->VerticalExpansionThreshold).bIsSet = false;
  this->VerticalOverflowBehavior = EVar2;
  bVar3 = (param_1->VerticalExpansionThreshold).bIsSet;
  (this->VerticalExpansionThreshold).bIsSet = bVar3;
  if (bVar3 != false) {
    (this->VerticalExpansionThreshold).TypedValue = (param_1->VerticalExpansionThreshold).TypedValue
    ;
  }
  this->WrapPriority = param_1->WrapPriority;
  this->bForceNewLine = param_1->bForceNewLine;
  this->bExcludeIfFirstOrLast = param_1->bExcludeIfFirstOrLast;
  return this;
}

// ~FSlotProxy @ 1427b9d20

void __thiscall FSlotProxy::~FSlotProxy(FSlotProxy *this)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Widget).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SizeParam).ShrinkValue.Getter);
  pvVar1 = *(void **)&(this->SizeParam).ShrinkValue.Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SizeParam).ShrinkValue.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SizeParam).Value.Getter);
  pvVar1 = *(void **)&(this->SizeParam).Value.Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SizeParam).Value.Getter);
  return;
}

