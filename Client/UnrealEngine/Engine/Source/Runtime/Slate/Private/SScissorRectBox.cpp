// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 7

// SScissorRectBox @ 1428ba7a0

SScissorRectBox * __thiscall SScissorRectBox::SScissorRectBox(SScissorRectBox *this)

{
  FSingleWidgetChildrenWithSlot *pFVar1;
  
  SPanel::SPanel((SPanel *)this);
  pFVar1 = &this->ChildSlot;
  this->_padding_ = (longlong)&___7SScissorRectBox__6B_;
  *(SScissorRectBox **)&(this->ChildSlot).field_0x8 = this;
  *(undefined ***)&pFVar1->field_0x0 = &___7FChildren__6B_;
  ::FName::FName((FName *)&(this->ChildSlot).field_0x10,"Children");
  *(undefined2 *)&(this->ChildSlot).field_0x18 = 0xdc00;
  FSlotBase::FSlotBase((FSlotBase *)&(this->ChildSlot).field_0x20,(FChildren *)pFVar1);
  *(undefined ***)&pFVar1->field_0x0 = &FSingleWidgetChildrenWithSlot::_vftable__for__FChildren__;
  *(undefined ***)&(this->ChildSlot).field_0x20 =
       &FSingleWidgetChildrenWithSlot::_vftable__for__TSlotBase<FSingleWidgetChildrenWithSlot>__;
  return this;
}

// ComputeDesiredSize @ 1428e1690

TVector2<double> * __thiscall
SScissorRectBox::ComputeDesiredSize
          (SScissorRectBox *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  SWidget *this_00;
  TVector2<double>_u_0 TVar1;
  double dVar2;
  FDeprecateSlateVector2D FVar3;
  
  this_00 = *(SWidget **)&(this->ChildSlot).field_0x30;
  if ((TEnumAsByte<EVisibility::Private>)*(uchar *)&this_00->VisibilityAttribute !=
      EVisibility::Collapsed.Value.Value) {
    FVar3 = SWidget::GetDesiredSize(this_00);
    dVar2 = (double)(float)((ulonglong)*(undefined8 *)FVar3 >> 0x20);
    TVar1._8_4_ = SUB84(dVar2,0);
    TVar1._s_0.X = (double)(float)*(undefined8 *)FVar3;
    TVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    __return_storage_ptr__->field0_0x0 = TVar1;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// Construct @ 142900f50

void __thiscall SScissorRectBox::Construct(SScissorRectBox *this,FArguments *param_1)

{
  EWidgetUpdateFlags EVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  EWidgetUpdateFlags EVar5;
  
  EVar1 = (EWidgetUpdateFlags)this->_padding_;
  EVar5 = EVar1 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar5;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar5);
  FSlotBase::DetatchParentFromContent((FSlotBase *)&(this->ChildSlot).field_0x20);
  pTVar2 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar3 = (param_1->_Content).Widget.Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = *(TReferenceControllerBase<1> **)&(this->ChildSlot).field_0x38;
  *(SWidget **)&(this->ChildSlot).field_0x30 = pSVar3;
  *(TReferenceControllerBase<1> **)&(this->ChildSlot).field_0x38 = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&(this->ChildSlot).field_0x20);
  return;
}

// GetChildren @ 14293e540

FChildren * __thiscall SScissorRectBox::GetChildren(SScissorRectBox *this)

{
  return (FChildren *)&this->ChildSlot;
}

// OnArrangeChildren @ 1429604d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SScissorRectBox::OnArrangeChildren
          (SScissorRectBox *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  FArrangedWidget *pFVar1;
  undefined1 auStackY_b8 [32];
  FSlateLayoutTransform local_88;
  FDeprecateSlateVector2D local_7c [2];
  FArrangedWidget local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_7c[0] = param_1->Size;
  local_88._0_8_ = 0x3f800000;
  local_88.Translation.field0_0x0._s_0.Y = 0.0;
  pFVar1 = FGeometry::MakeChild
                     (param_1,&local_68,(TSharedRef<SWidget,1> *)&(this->ChildSlot).field_0x30,
                      (FDeprecateVector2DParameter *)local_7c,&local_88);
  FArrangedChildren::AddWidget(param_2,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Widget.SharedReferenceCount.ReferenceController);
  return;
}

// OnPaint @ 14297fc10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SScissorRectBox::OnPaint
          (SScissorRectBox *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ForElementType<FArrangedWidget> FVar4;
  undefined1 auStackY_1e8 [32];
  FPaintArgs local_1a8;
  FArrangedChildren local_178;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_178.VisibilityFilter = (EVisibility)EVisibility::Visible.Value.Value;
  local_178.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  local_178.Array.ArrayNum = 0;
  local_178.Array.ArrayMax = 4;
  local_178.bAllow3DWidgets = false;
  SWidget::ArrangeChildren((SWidget *)this,param_2,&local_178,false);
  if (0 < local_178.Array.ArrayNum) {
    if ((local_178.Array.ArrayNum != 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrangedChildren.Num() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScissorRectBox.cpp"
                           ,0x3e,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    if ((local_178.Array.ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    FVar4 = (ForElementType<FArrangedWidget>)&local_178.Array;
    if (local_178.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
      FVar4 = local_178.Array.AllocatorInstance.SecondaryData;
    }
    if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    local_1a8.RootGrid = param_1->RootGrid;
    local_1a8.CurrentGrid = param_1->CurrentGrid;
    local_1a8.WindowOffset.field0_0x0 = (param_1->WindowOffset).field0_0x0;
    local_1a8.CurrentTime = param_1->CurrentTime;
    local_1a8.DeltaTime = param_1->DeltaTime;
    local_1a8._44_4_ = *(undefined4 *)&param_1->field_0x2c;
    local_1a8.PaintParentPtr = (SWidget *)this;
    param_5 = SWidget::Paint(((TSharedRef<SWidget,1> *)((longlong)FVar4 + 0x38))->Object,&local_1a8,
                             (FGeometry *)FVar4,param_3,param_4,param_5,param_6,bVar2);
  }
  FVar4 = (ForElementType<FArrangedWidget>)&local_178.Array;
  if (local_178.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar4 = local_178.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar4,local_178.Array.ArrayNum);
  if (local_178.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_178.Array.AllocatorInstance.SecondaryData);
  }
  return param_5;
}

// SetContent @ 14298f2a0

void __thiscall SScissorRectBox::SetContent(SScissorRectBox *this,TSharedRef<SWidget,1> *param_1)

{
  undefined1 *this_00;
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this_00 = &(this->ChildSlot).field_0x20;
  FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = *(TReferenceControllerBase<1> **)&(this->ChildSlot).field_0x38;
  *(SWidget **)&(this->ChildSlot).field_0x30 = pSVar2;
  *(TReferenceControllerBase<1> **)&(this->ChildSlot).field_0x38 = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  return;
}

