// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 54

// GetPadding_WrapperImpl @ 14695cbb0

void __cdecl UGridSlot::GetPadding_WrapperImpl(void *param_1,void *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar1 = *(longlong *)((longlong)param_1 + 0x70);
  puVar3 = &local_18;
  if (lVar1 == 0) {
    local_28 = *(undefined8 *)((longlong)param_1 + 0x38);
    uStack_20 = *(undefined8 *)((longlong)param_1 + 0x40);
    puVar3 = &local_28;
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x28);
    uStack_10 = *(undefined8 *)(lVar1 + 0x30);
  }
  uVar2 = puVar3[1];
  *(undefined8 *)param_2 = *puVar3;
  *(undefined8 *)((longlong)param_2 + 8) = uVar2;
  return;
}

// SetPadding_WrapperImpl @ 14695cc40

void __cdecl UGridSlot::SetPadding_WrapperImpl(void *param_1,void *param_2)

{
  FMargin local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  SetPadding(param_1,&local_18);
  return;
}

// GetHorizontalAlignment_WrapperImpl @ 14695cc70

void __cdecl UGridSlot::GetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  if (*(longlong *)((longlong)param_1 + 0x70) != 0) {
    *(char *)param_2 = (char)*(undefined4 *)(*(longlong *)((longlong)param_1 + 0x70) + 0x38);
    return;
  }
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x48);
  return;
}

// SetHorizontalAlignment_WrapperImpl @ 14695cc90

void __cdecl UGridSlot::SetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  FSharedReferencer<1> *pFVar1;
  byte bVar2;
  FSlotBase *pFVar3;
  FSlotBase *this;
  
  bVar2 = *(byte *)param_2;
  pFVar3 = *(FSlotBase **)((longlong)param_1 + 0x70);
  *(byte *)((longlong)param_1 + 0x48) = bVar2;
  if (pFVar3 != (FSlotBase *)0x0) {
    pFVar1 = &pFVar3[1].Widget.SharedReferenceCount;
    if (*(uint *)&pFVar3[1].Widget.SharedReferenceCount.ReferenceController != (uint)bVar2) {
      *(uint *)&pFVar1->ReferenceController = (uint)bVar2;
      this = (FSlotBase *)0x0;
      if (pFVar1 != (FSharedReferencer<1> *)0x0) {
        this = pFVar3;
      }
      FSlotBase::Invalidate(this,Layout);
      return;
    }
  }
  return;
}

// GetVerticalAlignment_WrapperImpl @ 14695ccd0

void __cdecl UGridSlot::GetVerticalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  if (*(longlong *)((longlong)param_1 + 0x70) != 0) {
    *(char *)param_2 = (char)*(undefined4 *)(*(longlong *)((longlong)param_1 + 0x70) + 0x3c);
    return;
  }
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x49);
  return;
}

// SetVerticalAlignment_WrapperImpl @ 14695ccf0

void __cdecl UGridSlot::SetVerticalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  FSlotBase *this;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x49) = bVar1;
  this = *(FSlotBase **)((longlong)param_1 + 0x70);
  if ((this != (FSlotBase *)0x0) &&
     (*(uint *)((longlong)&this[1].Widget.SharedReferenceCount.ReferenceController + 4) !=
      (uint)bVar1)) {
    *(uint *)((longlong)&this[1].Widget.SharedReferenceCount.ReferenceController + 4) = (uint)bVar1;
    FSlotBase::Invalidate(this,Layout);
    return;
  }
  return;
}

// GetRow_WrapperImpl @ 14695cd20

void __cdecl UGridSlot::GetRow_WrapperImpl(void *param_1,void *param_2)

{
  if (*(longlong *)((longlong)param_1 + 0x70) != 0) {
    *(undefined4 *)param_2 = *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x70) + 0x58);
    return;
  }
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x4c);
  return;
}

// SetRow_WrapperImpl @ 14695cd40

void __cdecl UGridSlot::SetRow_WrapperImpl(void *param_1,void *param_2)

{
  FSlot *this;
  int iVar1;
  
  iVar1 = *(int *)param_2;
  *(int *)((longlong)param_1 + 0x4c) = iVar1;
  this = *(FSlot **)((longlong)param_1 + 0x70);
  if (this != (FSlot *)0x0) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    if (iVar1 != this->RowParam) {
      this->RowParam = iVar1;
      SGridPanel::FSlot::NotifySlotChanged(this,false);
      return;
    }
  }
  return;
}

// GetRowSpan_WrapperImpl @ 14695cd70

void __cdecl UGridSlot::GetRowSpan_WrapperImpl(void *param_1,void *param_2)

{
  if (*(longlong *)((longlong)param_1 + 0x70) != 0) {
    *(undefined4 *)param_2 = *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x70) + 0x5c);
    return;
  }
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x50);
  return;
}

// SetRowSpan_WrapperImpl @ 14695cdd0

void __cdecl UGridSlot::SetRowSpan_WrapperImpl(void *param_1,void *param_2)

{
  FSlot *this;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)param_2;
  *(int *)((longlong)param_1 + 0x50) = iVar2;
  this = *(FSlot **)((longlong)param_1 + 0x70);
  if (this != (FSlot *)0x0) {
    iVar1 = 10000;
    if (iVar2 < 10000) {
      iVar1 = iVar2;
    }
    iVar2 = 1;
    if (1 < iVar1) {
      iVar2 = iVar1;
    }
    if (iVar2 != this->RowSpanParam) {
      this->RowSpanParam = iVar2;
      SGridPanel::FSlot::NotifySlotChanged(this,false);
      return;
    }
  }
  return;
}

// GetColumn_WrapperImpl @ 14695ce50

void __cdecl UGridSlot::GetColumn_WrapperImpl(void *param_1,void *param_2)

{
  if (*(longlong *)((longlong)param_1 + 0x70) != 0) {
    *(undefined4 *)param_2 = *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x70) + 0x50);
    return;
  }
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x54);
  return;
}

// SetColumn_WrapperImpl @ 14695ceb0

void __cdecl UGridSlot::SetColumn_WrapperImpl(void *param_1,void *param_2)

{
  FSlot *this;
  int iVar1;
  
  iVar1 = *(int *)param_2;
  *(int *)((longlong)param_1 + 0x54) = iVar1;
  this = *(FSlot **)((longlong)param_1 + 0x70);
  if (this != (FSlot *)0x0) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    if (iVar1 != this->ColumnParam) {
      this->ColumnParam = iVar1;
      SGridPanel::FSlot::NotifySlotChanged(this,false);
      return;
    }
  }
  return;
}

// GetColumnSpan_WrapperImpl @ 14695cee0

void __cdecl UGridSlot::GetColumnSpan_WrapperImpl(void *param_1,void *param_2)

{
  if (*(longlong *)((longlong)param_1 + 0x70) != 0) {
    *(undefined4 *)param_2 = *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x70) + 0x54);
    return;
  }
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x58);
  return;
}

// SetColumnSpan_WrapperImpl @ 14695cf00

void __cdecl UGridSlot::SetColumnSpan_WrapperImpl(void *param_1,void *param_2)

{
  FSlot *this;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)param_2;
  *(int *)((longlong)param_1 + 0x58) = iVar2;
  this = *(FSlot **)((longlong)param_1 + 0x70);
  if (this != (FSlot *)0x0) {
    iVar1 = 10000;
    if (iVar2 < 10000) {
      iVar1 = iVar2;
    }
    iVar2 = 1;
    if (1 < iVar1) {
      iVar2 = iVar1;
    }
    if (iVar2 != this->ColumnSpanParam) {
      this->ColumnSpanParam = iVar2;
      SGridPanel::FSlot::NotifySlotChanged(this,false);
      return;
    }
  }
  return;
}

// GetLayer_WrapperImpl @ 14695cf40

void __cdecl UGridSlot::GetLayer_WrapperImpl(void *param_1,void *param_2)

{
  if (*(longlong *)((longlong)param_1 + 0x70) != 0) {
    *(undefined4 *)param_2 = *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x70) + 0x60);
    return;
  }
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x5c);
  return;
}

// SetLayer_WrapperImpl @ 14695cf60

void __cdecl UGridSlot::SetLayer_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  FSlot *this;
  
  iVar1 = *(int *)param_2;
  *(int *)((longlong)param_1 + 0x5c) = iVar1;
  this = *(FSlot **)((longlong)param_1 + 0x70);
  if ((this != (FSlot *)0x0) && (iVar1 != this->LayerParam)) {
    this->LayerParam = iVar1;
    SGridPanel::FSlot::NotifySlotChanged(this,true);
    return;
  }
  return;
}

// GetNudge_WrapperImpl @ 14695cfd0

void __cdecl UGridSlot::GetNudge_WrapperImpl(void *param_1,void *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar1 = *(longlong *)((longlong)param_1 + 0x70);
  puVar3 = &local_18;
  if (lVar1 == 0) {
    local_28 = *(undefined8 *)((longlong)param_1 + 0x60);
    uStack_20 = *(undefined8 *)((longlong)param_1 + 0x68);
    puVar3 = &local_28;
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x68);
    uStack_10 = *(undefined8 *)(lVar1 + 0x70);
  }
  uVar2 = puVar3[1];
  *(undefined8 *)param_2 = *puVar3;
  *(undefined8 *)((longlong)param_2 + 8) = uVar2;
  return;
}

// SetNudge_WrapperImpl @ 14695d0d0

void __cdecl UGridSlot::SetNudge_WrapperImpl(void *param_1,void *param_2)

{
  FSlotBase *this;
  FChildren *pFVar1;
  SWidget *pSVar2;
  
  pFVar1 = *(FChildren **)param_2;
  pSVar2 = *(SWidget **)((longlong)param_2 + 8);
  *(FChildren **)((longlong)param_1 + 0x60) = pFVar1;
  *(SWidget **)((longlong)param_1 + 0x68) = pSVar2;
  this = *(FSlotBase **)((longlong)param_1 + 0x70);
  if (this != (FSlotBase *)0x0) {
    this[3].Owner = pFVar1;
    this[3].Widget.Object = pSVar2;
    FSlotBase::Invalidate(this,Paint);
    return;
  }
  return;
}

// StaticClass @ 14695d140

UClass * __cdecl UGridSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGridSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"GridSlot",&Z_Registration_Info_UClass_UGridSlot.InnerSingleton,
               StaticRegisterNativesUGridSlot,0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGridSlot>,InternalVTableHelperCtorCaller<UGridSlot>,local_res8,
               UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGridSlot.InnerSingleton;
}

// UGridSlot @ 14698a560

UGridSlot * __thiscall UGridSlot::UGridSlot(UGridSlot *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGridSlot__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  return this;
}

// UGridSlot @ 14698a5a0

UGridSlot * __thiscall UGridSlot::UGridSlot(UGridSlot *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  this->_padding_ = (longlong)&___7UGridSlot__6B_;
  this->HorizontalAlignment = '\0';
  this->VerticalAlignment = '\0';
  this->Layer = 0;
  this->Slot = (FSlot *)0x0;
  (this->Nudge).field0_0x0._s_0.X = 0.0;
  (this->Nudge).field0_0x0._s_0.Y = 0.0;
  return this;
}

// ~UGridSlot @ 146992eb0

void __thiscall UGridSlot::~UGridSlot(UGridSlot *this)

{
  this->_padding_ = (longlong)&___7UVisual__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BuildSlot @ 1469a3a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGridSlot::BuildSlot(UGridSlot *this,TSharedRef<SGridPanel,1> *param_1)

{
  longlong *plVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScopedWidgetSlotArguments *pFVar6;
  TSharedRef<SWidget,1> *pTVar7;
  FScopedWidgetSlotArguments *pFVar8;
  FScopedWidgetSlotArguments *pFVar9;
  undefined1 auStackY_1f8 [32];
  SWidget *local_1c8;
  FSharedReferencer<1> local_1c0;
  longlong local_1b8;
  longlong lStack_1b0;
  undefined1 local_1a8;
  undefined1 local_1a0 [8];
  ForAnyElementType FStack_198;
  ulonglong local_190;
  SWidget *local_188;
  TReferenceControllerBase<1> *local_180;
  bool local_178;
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  undefined4 local_158 [2];
  undefined4 local_150 [2];
  TSharedRef<SWidget,1> local_148;
  undefined8 local_138 [4];
  FScopedWidgetSlotArguments local_118;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pFVar8 = (FScopedWidgetSlotArguments *)0x0;
  pFVar6 = SGridPanel::AddSlot(param_1->Object,&local_118,this->Column,this->Row,(Layer)this->Layer)
  ;
  local_1b8._0_4_ = (this->Padding).Left;
  local_1b8._4_4_ = (this->Padding).Top;
  lStack_1b0._0_4_ = (this->Padding).Right;
  lStack_1b0._4_4_ = (this->Padding).Bottom;
  this->Slot = (FSlot *)pFVar6->_padding_;
  local_1a8 = 1;
  bVar3 = false;
  local_190 = 0;
  local_1a0 = (undefined1  [8])0x0;
  FStack_198.Data = (FScriptContainerElement *)0x0;
  pFVar6->_padding_ = local_1b8;
  pFVar6->_padding_ = lStack_1b0;
  *(undefined1 *)&pFVar6->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar6->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a0);
  pFVar9 = pFVar8;
  if (&pFVar6->_padding_ != (longlong *)0x0) {
    pFVar9 = pFVar6;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a0,
             (FWriteAccessScope *)&local_188);
  if (((int)local_190 != 0) && (FStack_198.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_198.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_198,0,0,0x10);
    local_190 = local_190 & 0xffffffff00000000;
  }
  if (local_178 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_180,(FDestructionSentinel *)&local_188);
  }
  if (FStack_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_198.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a0);
  plVar1 = &pFVar9->_padding_;
  if ((longlong *)local_168 != plVar1) {
    *(uint *)plVar1 = (uint)(this->HorizontalAlignment).Value;
    *(undefined1 *)((longlong)&pFVar9->_padding_ + 4) = 1;
  }
  if (plVar1 == (longlong *)0x0) {
    pFVar9 = pFVar8;
  }
  if ((longlong *)local_160 != &pFVar9->_padding_) {
    *(uint *)&pFVar9->_padding_ = (uint)(this->VerticalAlignment).Value;
    *(undefined1 *)((longlong)&pFVar9->_padding_ + 4) = 1;
  }
  if (pFVar9 != (FScopedWidgetSlotArguments *)0xffffffffffffffb8) {
    pFVar8 = pFVar9;
  }
  if ((longlong *)local_158 != &pFVar8->_padding_) {
    *(int *)&pFVar8->_padding_ = this->RowSpan;
    *(undefined1 *)((longlong)&pFVar8->_padding_ + 4) = 1;
  }
  if ((longlong *)local_150 != &pFVar8->_padding_) {
    *(int *)&pFVar8->_padding_ = this->ColumnSpan;
    *(undefined1 *)((longlong)&pFVar8->_padding_ + 4) = 1;
  }
  dVar2 = (this->Nudge).field0_0x0._s_0.Y;
  if (local_138 != &pFVar8->_padding_) {
    pFVar8->_padding_ = (longlong)(this->Nudge).field0_0x0._s_0.X;
    pFVar8->_padding_ = (longlong)dVar2;
    *(undefined1 *)&pFVar8->_padding_ = 1;
  }
  local_1c8 = SNullWidget::NullWidget.Object;
  if ((UWidget *)this->_padding_ == (UWidget *)0x0) {
    local_188 = SNullWidget::NullWidget.Object;
    local_180 = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (TSharedRef<SWidget,1> *)&local_188;
    bVar4 = true;
  }
  else {
    pTVar7 = UWidget::TakeWidget((UWidget *)this->_padding_,&local_148);
    bVar4 = false;
    bVar3 = true;
    local_1c8 = pTVar7->Object;
  }
  pTVar5 = local_180;
  local_1c0.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
  if (local_1c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1c0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1c0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar8->_padding_ != &local_1c8) {
    pFVar8->_padding_ = (longlong)local_1c8;
    local_1c8 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar8->_padding_,&local_1c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c0.ReferenceController);
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  TPanelChildren<SGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_118);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetColumn @ 1469ce620

int __thiscall UGridSlot::GetColumn(UGridSlot *this)

{
  if (this->Slot != (FSlot *)0x0) {
    return this->Slot->ColumnParam;
  }
  return this->Column;
}

// GetColumnSpan @ 1469ce650

int __thiscall UGridSlot::GetColumnSpan(UGridSlot *this)

{
  if (this->Slot != (FSlot *)0x0) {
    return this->Slot->ColumnSpanParam;
  }
  return this->ColumnSpan;
}

// GetHorizontalAlignment @ 1469d1260

EHorizontalAlignment __thiscall UGridSlot::GetHorizontalAlignment(UGridSlot *this)

{
  if (this->Slot != (FSlot *)0x0) {
    return (EHorizontalAlignment)this->Slot->_padding_;
  }
  return (EHorizontalAlignment)(this->HorizontalAlignment).Value;
}

// GetLayer @ 1469d1b90

int __thiscall UGridSlot::GetLayer(UGridSlot *this)

{
  if (this->Slot != (FSlot *)0x0) {
    return this->Slot->LayerParam;
  }
  return this->Layer;
}

// GetNudge @ 1469d1fb0

TVector2<double> * __thiscall
UGridSlot::GetNudge(UGridSlot *this,TVector2<double> *__return_storage_ptr__)

{
  FSlot *pFVar1;
  double dVar2;
  double *pdVar3;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  pFVar1 = this->Slot;
  pdVar3 = &local_18;
  if (pFVar1 == (FSlot *)0x0) {
    local_28 = (this->Nudge).field0_0x0._s_0.X;
    dStack_20 = (this->Nudge).field0_0x0._s_0.Y;
    pdVar3 = &local_28;
  }
  else {
    local_18 = (pFVar1->NudgeParam).field0_0x0._s_0.X;
    dStack_10 = (pFVar1->NudgeParam).field0_0x0._s_0.Y;
  }
  dVar2 = pdVar3[1];
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  return __return_storage_ptr__;
}

// GetPadding @ 1469d3590

FMargin * __thiscall UGridSlot::GetPadding(UGridSlot *this,FMargin *__return_storage_ptr__)

{
  FSlot *pFVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_28;
  undefined8 uStack_20;
  longlong local_18;
  longlong lStack_10;
  
  pFVar1 = this->Slot;
  plVar4 = &local_18;
  if (pFVar1 == (FSlot *)0x0) {
    local_28._0_4_ = (this->Padding).Left;
    local_28._4_4_ = (this->Padding).Top;
    uStack_20._0_4_ = (this->Padding).Right;
    uStack_20._4_4_ = (this->Padding).Bottom;
    plVar4 = &local_28;
  }
  else {
    local_18 = pFVar1->_padding_;
    lStack_10 = pFVar1->_padding_;
  }
  lVar2 = *plVar4;
  lVar3 = plVar4[1];
  __return_storage_ptr__->Left = (float)(int)lVar2;
  __return_storage_ptr__->Top = (float)(int)((ulonglong)lVar2 >> 0x20);
  __return_storage_ptr__->Right = (float)(int)lVar3;
  __return_storage_ptr__->Bottom = (float)(int)((ulonglong)lVar3 >> 0x20);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1469d41b0

UClass * __cdecl UGridSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGridSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"GridSlot",&Z_Registration_Info_UClass_UGridSlot.InnerSingleton,
               StaticRegisterNativesUGridSlot,0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGridSlot>,InternalVTableHelperCtorCaller<UGridSlot>,local_res8,
               UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGridSlot.InnerSingleton;
}

// GetRow @ 1469d6f90

int __thiscall UGridSlot::GetRow(UGridSlot *this)

{
  if (this->Slot != (FSlot *)0x0) {
    return this->Slot->RowParam;
  }
  return this->Row;
}

// GetRowSpan @ 1469d7020

int __thiscall UGridSlot::GetRowSpan(UGridSlot *this)

{
  if (this->Slot != (FSlot *)0x0) {
    return this->Slot->RowSpanParam;
  }
  return this->RowSpan;
}

// GetVerticalAlignment @ 1469d9c20

EVerticalAlignment __thiscall UGridSlot::GetVerticalAlignment(UGridSlot *this)

{
  if (this->Slot != (FSlot *)0x0) {
    return *(EVerticalAlignment *)((longlong)&this->Slot->_padding_ + 4);
  }
  return (EVerticalAlignment)(this->VerticalAlignment).Value;
}

// ReleaseSlateResources @ 146a0a580

void __thiscall UGridSlot::ReleaseSlateResources(UGridSlot *this,bool param_1)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar3 = Z_Construct_UClass_UUserWidget_NoRegister();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      (**(code **)(*(longlong *)this->_padding_ + 0x2b0))((longlong *)this->_padding_,param_1);
    }
    this->Slot = (FSlot *)0x0;
    return;
  }
  this->Slot = (FSlot *)0x0;
  return;
}

// SetColumn @ 146a124c0

void __thiscall UGridSlot::SetColumn(UGridSlot *this,int param_1)

{
  FSlot *this_00;
  
  this->Column = param_1;
  this_00 = this->Slot;
  if (this_00 != (FSlot *)0x0) {
    if (param_1 < 0) {
      param_1 = 0;
    }
    if (param_1 != this_00->ColumnParam) {
      this_00->ColumnParam = param_1;
      SGridPanel::FSlot::NotifySlotChanged(this_00,false);
      return;
    }
  }
  return;
}

// SetColumnSpan @ 146a126d0

void __thiscall UGridSlot::SetColumnSpan(UGridSlot *this,int param_1)

{
  FSlot *this_00;
  int iVar1;
  int iVar2;
  
  this->ColumnSpan = param_1;
  this_00 = this->Slot;
  if (this_00 != (FSlot *)0x0) {
    iVar1 = 10000;
    if (param_1 < 10000) {
      iVar1 = param_1;
    }
    iVar2 = 1;
    if (1 < iVar1) {
      iVar2 = iVar1;
    }
    if (iVar2 != this_00->ColumnSpanParam) {
      this_00->ColumnSpanParam = iVar2;
      SGridPanel::FSlot::NotifySlotChanged(this_00,false);
      return;
    }
  }
  return;
}

// SetHorizontalAlignment @ 146a150e0

void __thiscall UGridSlot::SetHorizontalAlignment(UGridSlot *this,EHorizontalAlignment param_1)

{
  FSlot *pFVar1;
  FSlot *this_00;
  
  pFVar1 = this->Slot;
  (this->HorizontalAlignment).Value = (uchar)param_1;
  if ((pFVar1 != (FSlot *)0x0) && ((EHorizontalAlignment)pFVar1->_padding_ != param_1)) {
    *(EHorizontalAlignment *)&pFVar1->_padding_ = param_1;
    this_00 = (FSlot *)0x0;
    if (&pFVar1->_padding_ != (longlong *)0x0) {
      this_00 = pFVar1;
    }
    FSlotBase::Invalidate((FSlotBase *)this_00,Layout);
    return;
  }
  return;
}

// SetLayer @ 146a168c0

void __thiscall UGridSlot::SetLayer(UGridSlot *this,int param_1)

{
  FSlot *this_00;
  
  this->Layer = param_1;
  this_00 = this->Slot;
  if ((this_00 != (FSlot *)0x0) && (param_1 != this_00->LayerParam)) {
    this_00->LayerParam = param_1;
    SGridPanel::FSlot::NotifySlotChanged(this_00,true);
    return;
  }
  return;
}

// SetNudge @ 146a18290

void __thiscall UGridSlot::SetNudge(UGridSlot *this,TVector2<double> *param_1)

{
  FSlot *this_00;
  double dVar1;
  double dVar2;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (this->Nudge).field0_0x0._s_0.X = dVar1;
  (this->Nudge).field0_0x0._s_0.Y = dVar2;
  this_00 = this->Slot;
  if (this_00 != (FSlot *)0x0) {
    (this_00->NudgeParam).field0_0x0._s_0.X = dVar1;
    (this_00->NudgeParam).field0_0x0._s_0.Y = dVar2;
    FSlotBase::Invalidate((FSlotBase *)this_00,Paint);
    return;
  }
  return;
}

// SetPadding @ 146a186f0

void __thiscall UGridSlot::SetPadding(UGridSlot *this,FMargin *param_1)

{
  FSlot *pFVar1;
  FSlot *pFVar2;
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_40._0_4_ = param_1->Left;
  local_40._4_4_ = param_1->Top;
  local_40._8_4_ = param_1->Right;
  local_40._12_4_ = param_1->Bottom;
  pFVar1 = this->Slot;
  (this->Padding).Left = local_40._0_4_;
  (this->Padding).Top = local_40._4_4_;
  (this->Padding).Right = local_40._8_4_;
  (this->Padding).Bottom = local_40._12_4_;
  if (pFVar1 != (FSlot *)0x0) {
    local_40[0x10] = true;
    local_18 = 0;
    pFVar2 = (FSlot *)0x0;
    if (&pFVar1->_padding_ != (longlong *)0x0) {
      pFVar2 = pFVar1;
    }
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&pFVar1->_padding_,(ISlateAttributeContainer *)&pFVar2->_padding_,
             (TAttribute<FMargin> *)local_40,None);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_58);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// SetRow @ 146a19950

void __thiscall UGridSlot::SetRow(UGridSlot *this,int param_1)

{
  FSlot *this_00;
  
  this->Row = param_1;
  this_00 = this->Slot;
  if (this_00 != (FSlot *)0x0) {
    if (param_1 < 0) {
      param_1 = 0;
    }
    if (param_1 != this_00->RowParam) {
      this_00->RowParam = param_1;
      SGridPanel::FSlot::NotifySlotChanged(this_00,false);
      return;
    }
  }
  return;
}

// SetRowSpan @ 146a19ce0

void __thiscall UGridSlot::SetRowSpan(UGridSlot *this,int param_1)

{
  FSlot *this_00;
  int iVar1;
  int iVar2;
  
  this->RowSpan = param_1;
  this_00 = this->Slot;
  if (this_00 != (FSlot *)0x0) {
    iVar1 = 10000;
    if (param_1 < 10000) {
      iVar1 = param_1;
    }
    iVar2 = 1;
    if (1 < iVar1) {
      iVar2 = iVar1;
    }
    if (iVar2 != this_00->RowSpanParam) {
      this_00->RowSpanParam = iVar2;
      SGridPanel::FSlot::NotifySlotChanged(this_00,false);
      return;
    }
  }
  return;
}

// SetVerticalAlignment @ 146a1d4e0

void __thiscall UGridSlot::SetVerticalAlignment(UGridSlot *this,EVerticalAlignment param_1)

{
  FSlot *this_00;
  
  (this->VerticalAlignment).Value = (uchar)param_1;
  this_00 = this->Slot;
  if ((this_00 != (FSlot *)0x0) &&
     (*(EVerticalAlignment *)((longlong)&this_00->_padding_ + 4) != param_1)) {
    *(EVerticalAlignment *)((longlong)&this_00->_padding_ + 4) = param_1;
    FSlotBase::Invalidate((FSlotBase *)this_00,Layout);
    return;
  }
  return;
}

// StaticRegisterNativesUGridSlot @ 146a1e8a0

void __cdecl UGridSlot::StaticRegisterNativesUGridSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UGridSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a216b0

void __thiscall UGridSlot::SynchronizeProperties(UGridSlot *this)

{
  longlong *plVar1;
  FSlot *pFVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  FSlot *this_00;
  int iVar6;
  FMargin local_18;
  
  pFVar2 = this->Slot;
  if (pFVar2 != (FSlot *)0x0) {
    plVar1 = &pFVar2->_padding_;
    uVar4 = (uint)(this->HorizontalAlignment).Value;
    if ((uint)*plVar1 != uVar4) {
      *(uint *)plVar1 = uVar4;
      this_00 = (FSlot *)0x0;
      if (plVar1 != (longlong *)0x0) {
        this_00 = pFVar2;
      }
      FSlotBase::Invalidate((FSlotBase *)this_00,Layout);
    }
  }
  pFVar2 = this->Slot;
  if ((pFVar2 != (FSlot *)0x0) &&
     (uVar4 = (uint)(this->VerticalAlignment).Value,
     *(uint *)((longlong)&pFVar2->_padding_ + 4) != uVar4)) {
    *(uint *)((longlong)&pFVar2->_padding_ + 4) = uVar4;
    FSlotBase::Invalidate((FSlotBase *)pFVar2,Layout);
  }
  local_18.Left = (this->Padding).Left;
  local_18.Top = (this->Padding).Top;
  local_18.Right = (this->Padding).Right;
  local_18.Bottom = (this->Padding).Bottom;
  SetPadding(this,&local_18);
  pFVar2 = this->Slot;
  if (pFVar2 != (FSlot *)0x0) {
    iVar5 = this->Row;
    if (this->Row < 0) {
      iVar5 = 0;
    }
    if (iVar5 != pFVar2->RowParam) {
      pFVar2->RowParam = iVar5;
      SGridPanel::FSlot::NotifySlotChanged(pFVar2,false);
    }
  }
  pFVar2 = this->Slot;
  if (pFVar2 != (FSlot *)0x0) {
    iVar5 = 10000;
    if (this->RowSpan < 10000) {
      iVar5 = this->RowSpan;
    }
    iVar6 = 1;
    if (1 < iVar5) {
      iVar6 = iVar5;
    }
    if (iVar6 != pFVar2->RowSpanParam) {
      pFVar2->RowSpanParam = iVar6;
      SGridPanel::FSlot::NotifySlotChanged(pFVar2,false);
    }
  }
  pFVar2 = this->Slot;
  if (pFVar2 != (FSlot *)0x0) {
    iVar5 = this->Column;
    if (this->Column < 0) {
      iVar5 = 0;
    }
    if (iVar5 != pFVar2->ColumnParam) {
      pFVar2->ColumnParam = iVar5;
      SGridPanel::FSlot::NotifySlotChanged(pFVar2,false);
    }
  }
  pFVar2 = this->Slot;
  if (pFVar2 != (FSlot *)0x0) {
    iVar5 = 10000;
    if (this->ColumnSpan < 10000) {
      iVar5 = this->ColumnSpan;
    }
    iVar6 = 1;
    if (1 < iVar5) {
      iVar6 = iVar5;
    }
    if (iVar6 != pFVar2->ColumnSpanParam) {
      pFVar2->ColumnSpanParam = iVar6;
      SGridPanel::FSlot::NotifySlotChanged(pFVar2,false);
    }
  }
  pFVar2 = this->Slot;
  dVar3 = (this->Nudge).field0_0x0._s_0.Y;
  if (pFVar2 != (FSlot *)0x0) {
    (pFVar2->NudgeParam).field0_0x0._s_0.X = (this->Nudge).field0_0x0._s_0.X;
    (pFVar2->NudgeParam).field0_0x0._s_0.Y = dVar3;
    FSlotBase::Invalidate((FSlotBase *)pFVar2,Paint);
  }
  pFVar2 = this->Slot;
  if ((pFVar2 != (FSlot *)0x0) && (this->Layer != pFVar2->LayerParam)) {
    pFVar2->LayerParam = this->Layer;
    SGridPanel::FSlot::NotifySlotChanged(pFVar2,true);
  }
  return;
}

// execSetColumn @ 146a3b110

void __cdecl UGridSlot::execSetColumn(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlot *this;
  int iVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(FSlot **)&param_1[2].field_0x20;
  *(int *)&param_1[2].field_0x4 = local_res8[0];
  if (this != (FSlot *)0x0) {
    iVar2 = local_res8[0];
    if (local_res8[0] < 0) {
      iVar2 = 0;
    }
    if (iVar2 != this->ColumnParam) {
      this->ColumnParam = iVar2;
      SGridPanel::FSlot::NotifySlotChanged(this,false);
    }
  }
  return;
}

// execSetColumnSpan @ 146a3b330

void __cdecl UGridSlot::execSetColumnSpan(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlot *this;
  int iVar2;
  int iVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(FSlot **)&param_1[2].field_0x20;
  *(int *)&param_1[2].field_0x8 = local_res8[0];
  if (this != (FSlot *)0x0) {
    iVar2 = 10000;
    if (local_res8[0] < 10000) {
      iVar2 = local_res8[0];
    }
    iVar3 = 1;
    if (1 < iVar2) {
      iVar3 = iVar2;
    }
    if (iVar3 != this->ColumnSpanParam) {
      this->ColumnSpanParam = iVar3;
      SGridPanel::FSlot::NotifySlotChanged(this,false);
    }
  }
  return;
}

// execSetHorizontalAlignment @ 146a3d6b0

void __cdecl UGridSlot::execSetHorizontalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FSharedReferencer<1> *pFVar1;
  FProperty *pFVar2;
  FSlotBase *pFVar3;
  FSlotBase *this;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = *(FSlotBase **)&param_1[2].field_0x20;
  param_1[1].field_0x20 = local_res8[0];
  if (pFVar3 != (FSlotBase *)0x0) {
    pFVar1 = &pFVar3[1].Widget.SharedReferenceCount;
    if (*(uint *)&pFVar3[1].Widget.SharedReferenceCount.ReferenceController != (uint)local_res8[0])
    {
      *(uint *)&pFVar1->ReferenceController = (uint)local_res8[0];
      this = (FSlotBase *)0x0;
      if (pFVar1 != (FSharedReferencer<1> *)0x0) {
        this = pFVar3;
      }
      FSlotBase::Invalidate(this,Layout);
    }
  }
  return;
}

// execSetLayer @ 146a3eb50

void __cdecl UGridSlot::execSetLayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlot *this;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(FSlot **)&param_1[2].field_0x20;
  *(int *)&param_1[2].field_0xc = local_res8[0];
  if ((this != (FSlot *)0x0) && (local_res8[0] != this->LayerParam)) {
    this->LayerParam = local_res8[0];
    SGridPanel::FSlot::NotifySlotChanged(this,true);
  }
  return;
}

// execSetNudge @ 146a402d0

void __cdecl UGridSlot::execSetNudge(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlotBase *this;
  FChildren *local_18;
  SWidget *pSStack_10;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(FSlotBase **)&param_1[2].field_0x20;
  *(FChildren **)&param_1[2].field_0x10 = local_18;
  *(SWidget **)&param_1[2].field_0x18 = pSStack_10;
  if (this != (FSlotBase *)0x0) {
    this[3].Owner = local_18;
    this[3].Widget.Object = pSStack_10;
    FSlotBase::Invalidate(this,Paint);
  }
  return;
}

// execSetPadding @ 146a40770

void __cdecl UGridSlot::execSetPadding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMargin local_28;
  FMargin local_18;
  
  local_28.Left = 0.0;
  local_28.Top = 0.0;
  local_28.Right = 0.0;
  local_28.Bottom = 0.0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18.Left = local_28.Left;
  local_18.Top = local_28.Top;
  local_18.Right = local_28.Right;
  local_18.Bottom = local_28.Bottom;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetPadding((UGridSlot *)param_1,&local_18);
  return;
}

// execSetRow @ 146a41570

void __cdecl UGridSlot::execSetRow(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlot *this;
  int iVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(FSlot **)&param_1[2].field_0x20;
  *(int *)&param_1[1].field_0x24 = local_res8[0];
  if (this != (FSlot *)0x0) {
    iVar2 = local_res8[0];
    if (local_res8[0] < 0) {
      iVar2 = 0;
    }
    if (iVar2 != this->RowParam) {
      this->RowParam = iVar2;
      SGridPanel::FSlot::NotifySlotChanged(this,false);
    }
  }
  return;
}

// execSetRowSpan @ 146a41790

void __cdecl UGridSlot::execSetRowSpan(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlot *this;
  int iVar2;
  int iVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(FSlot **)&param_1[2].field_0x20;
  *(int *)(param_1 + 2) = local_res8[0];
  if (this != (FSlot *)0x0) {
    iVar2 = 10000;
    if (local_res8[0] < 10000) {
      iVar2 = local_res8[0];
    }
    iVar3 = 1;
    if (1 < iVar2) {
      iVar3 = iVar2;
    }
    if (iVar3 != this->RowSpanParam) {
      this->RowSpanParam = iVar3;
      SGridPanel::FSlot::NotifySlotChanged(this,false);
    }
  }
  return;
}

// execSetVerticalAlignment @ 146a44180

void __cdecl UGridSlot::execSetVerticalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlotBase *this;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(FSlotBase **)&param_1[2].field_0x20;
  param_1[1].field_0x21 = local_res8[0];
  if ((this != (FSlotBase *)0x0) &&
     (*(uint *)((longlong)&this[1].Widget.SharedReferenceCount.ReferenceController + 4) !=
      (uint)local_res8[0])) {
    *(uint *)((longlong)&this[1].Widget.SharedReferenceCount.ReferenceController + 4) =
         (uint)local_res8[0];
    FSlotBase::Invalidate(this,Layout);
  }
  return;
}

