// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 12

// ComputeDesiredSize @ 1428e16e0

TVector2<double> * __thiscall
SScrollBarTrack::ComputeDesiredSize
          (SScrollBarTrack *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  TPanelChildren<SScrollBarTrack::FSlot> *this_00;
  float fVar1;
  float fVar2;
  FSlot *pFVar3;
  FDeprecateSlateVector2D FVar4;
  float fVar5;
  float fVar6;
  
  this_00 = &this->Children;
  if (this->Orientation == Orient_Horizontal) {
    pFVar3 = TPanelChildren<SScrollBarTrack::FSlot>::operator[](this_00,2);
    FVar4 = SWidget::GetDesiredSize(*(SWidget **)&pFVar3->field_0x10);
    fVar1 = *(float *)((longlong)FVar4 + 4);
    pFVar3 = TPanelChildren<SScrollBarTrack::FSlot>::operator[](this_00,1);
    FVar4 = SWidget::GetDesiredSize(*(SWidget **)&pFVar3->field_0x10);
    fVar2 = *(float *)((longlong)FVar4 + 4);
    pFVar3 = TPanelChildren<SScrollBarTrack::FSlot>::operator[](this_00,0);
    FVar4 = SWidget::GetDesiredSize(*(SWidget **)&pFVar3->field_0x10);
    fVar6 = this->MinThumbSize;
    fVar5 = *(float *)((longlong)FVar4 + 4);
    if (*(float *)((longlong)FVar4 + 4) <= fVar2) {
      fVar5 = fVar2;
    }
    if (fVar5 <= fVar1) {
      fVar5 = fVar1;
    }
  }
  else {
    pFVar3 = TPanelChildren<SScrollBarTrack::FSlot>::operator[](this_00,2);
    FVar4 = SWidget::GetDesiredSize(*(SWidget **)&pFVar3->field_0x10);
    fVar1 = *(float *)FVar4;
    pFVar3 = TPanelChildren<SScrollBarTrack::FSlot>::operator[](this_00,1);
    FVar4 = SWidget::GetDesiredSize(*(SWidget **)&pFVar3->field_0x10);
    fVar6 = *(float *)FVar4;
    pFVar3 = TPanelChildren<SScrollBarTrack::FSlot>::operator[](this_00,0);
    FVar4 = SWidget::GetDesiredSize(*(SWidget **)&pFVar3->field_0x10);
    if (fVar6 <= *(float *)FVar4) {
      fVar6 = *(float *)FVar4;
    }
    fVar5 = this->MinThumbSize;
    if (fVar6 <= fVar1) {
      fVar6 = fVar1;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar5;
  return __return_storage_ptr__;
}

// Construct @ 1429025b0

void __thiscall SScrollBarTrack::Construct(SScrollBarTrack *this,FArguments *param_1)

{
  TPanelChildren<SScrollBarTrack::FSlot> *this_00;
  code *pcVar1;
  bool bVar2;
  FSlotBase *pFVar3;
  FSlotArguments local_98;
  FSlotArguments local_80;
  FSlotArguments local_68;
  undefined8 local_50;
  FSharedReferencer<1> local_48;
  undefined8 local_40;
  FSharedReferencer<1> local_38;
  undefined8 local_30;
  FSharedReferencer<1> local_28 [2];
  
  this->ThumbSizeFraction = 1.0;
  this_00 = &this->Children;
  this->MinThumbSize = 35.0;
  this->OffsetFraction = 0.0;
  this->Orientation = param_1->_Orientation;
  pFVar3 = ::operator_new(0x20);
  if (pFVar3 == (FSlotBase *)0x0) {
    local_98.Slot.Ptr = (FSlot *)0x0;
    local_98.ChildWidget.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                       ,0x9b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pFVar3->_padding_ = 0;
    pFVar3->Owner = (FChildren *)0x0;
    (pFVar3->Widget).Object = (SWidget *)0x0;
    (pFVar3->Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FSlotBase::FSlotBase(pFVar3);
    pFVar3->_padding_ = (longlong)&___7FSlot_SScrollBarTrack__6B_;
    local_98.ChildWidget.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_98.Slot.Ptr = (FSlot *)pFVar3;
  }
  local_48.ReferenceController = (param_1->_TopSlot).Widget.SharedReferenceCount.ReferenceController
  ;
  local_98.ChildWidget.Object = (param_1->_TopSlot).Widget.Object;
  if (local_48.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_48.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_50 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_98.ChildWidget.SharedReferenceCount,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.ReferenceController);
  TPanelChildren<SScrollBarTrack::FSlot>::AddSlot(this_00,&local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.ChildWidget.SharedReferenceCount.ReferenceController);
  if ((FSlotBase *)local_98.Slot.Ptr != (FSlotBase *)0x0) {
    (*(code *)**(undefined8 **)local_98.Slot.Ptr)(local_98.Slot.Ptr,1);
  }
  pFVar3 = ::operator_new(0x20);
  if (pFVar3 == (FSlotBase *)0x0) {
    local_80.Slot.Ptr = (FSlot *)0x0;
    local_80.ChildWidget.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                       ,0x9b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pFVar3->_padding_ = 0;
    pFVar3->Owner = (FChildren *)0x0;
    (pFVar3->Widget).Object = (SWidget *)0x0;
    (pFVar3->Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FSlotBase::FSlotBase(pFVar3);
    pFVar3->_padding_ = (longlong)&___7FSlot_SScrollBarTrack__6B_;
    local_80.ChildWidget.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_80.Slot.Ptr = (FSlot *)pFVar3;
  }
  local_38.ReferenceController =
       (param_1->_BottomSlot).Widget.SharedReferenceCount.ReferenceController;
  local_80.ChildWidget.Object = (param_1->_BottomSlot).Widget.Object;
  if (local_38.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_38.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_40 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_80.ChildWidget.SharedReferenceCount,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.ReferenceController);
  TPanelChildren<SScrollBarTrack::FSlot>::AddSlot(this_00,&local_80);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.ChildWidget.SharedReferenceCount.ReferenceController);
  if ((FSlotBase *)local_80.Slot.Ptr != (FSlotBase *)0x0) {
    (*(code *)**(undefined8 **)local_80.Slot.Ptr)(local_80.Slot.Ptr,1);
  }
  pFVar3 = ::operator_new(0x20);
  if (pFVar3 == (FSlotBase *)0x0) {
    local_68.Slot.Ptr = (FSlot *)0x0;
    local_68.ChildWidget.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                       ,0x9b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pFVar3->_padding_ = 0;
    pFVar3->Owner = (FChildren *)0x0;
    (pFVar3->Widget).Object = (SWidget *)0x0;
    (pFVar3->Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FSlotBase::FSlotBase(pFVar3);
    pFVar3->_padding_ = (longlong)&___7FSlot_SScrollBarTrack__6B_;
    local_68.ChildWidget.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_68.Slot.Ptr = (FSlot *)pFVar3;
  }
  local_28[0].ReferenceController =
       (param_1->_ThumbSlot).Widget.SharedReferenceCount.ReferenceController;
  local_68.ChildWidget.Object = (param_1->_ThumbSlot).Widget.Object;
  if (local_28[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_28[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_30 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_68.ChildWidget.SharedReferenceCount,local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].ReferenceController);
  TPanelChildren<SScrollBarTrack::FSlot>::AddSlot(this_00,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.ChildWidget.SharedReferenceCount.ReferenceController);
  if ((FSlotBase *)local_68.Slot.Ptr != (FSlotBase *)0x0) {
    (*(code *)**(undefined8 **)local_68.Slot.Ptr)(local_68.Slot.Ptr,1);
  }
  return;
}

// DistanceFromBottom @ 142925f20

float __thiscall SScrollBarTrack::DistanceFromBottom(SScrollBarTrack *this)

{
  return __real_3f800000 - (this->ThumbSizeFraction + this->OffsetFraction);
}

// DistanceFromTop @ 142925fc0

float __thiscall SScrollBarTrack::DistanceFromTop(SScrollBarTrack *this)

{
  return this->OffsetFraction;
}

// GetChildren @ 14293e550

FChildren * __thiscall SScrollBarTrack::GetChildren(SScrollBarTrack *this)

{
  return (FChildren *)&this->Children;
}

// GetMinThumbSize @ 1429430d0

float __thiscall SScrollBarTrack::GetMinThumbSize(SScrollBarTrack *this)

{
  return this->MinThumbSize;
}

// GetThumbSizeFraction @ 14294a1a0

float __thiscall SScrollBarTrack::GetThumbSizeFraction(SScrollBarTrack *this)

{
  return this->ThumbSizeFraction;
}

// GetTrackSizeInfo @ 14294a490

FTrackSizeInfo * __thiscall
SScrollBarTrack::GetTrackSizeInfo
          (SScrollBarTrack *this,FTrackSizeInfo *__return_storage_ptr__,FGeometry *param_1)

{
  float fVar1;
  float fVar2;
  float local_res8;
  float fStackX_c;
  
  fVar1 = this->ThumbSizeFraction;
  fVar2 = 0.0;
  if (0.0 < fVar1) {
    fVar2 = this->MinThumbSize;
  }
  if (this->Orientation == Orient_Horizontal) {
    local_res8 = SUB84(param_1->Size,0);
  }
  else {
    fStackX_c = SUB84(param_1->Size,4);
    local_res8 = fStackX_c;
  }
  local_res8 = local_res8 - fVar2;
  __return_storage_ptr__->BiasedTrackSize = local_res8;
  __return_storage_ptr__->ThumbStart = local_res8 * this->OffsetFraction;
  __return_storage_ptr__->ThumbSize = local_res8 * fVar1 + fVar2;
  return __return_storage_ptr__;
}

// IsNeeded @ 142955270

bool __thiscall SScrollBarTrack::IsNeeded(SScrollBarTrack *this)

{
  if ((__real_3f7ff972 < this->ThumbSizeFraction || __real_3f7ff972 == this->ThumbSizeFraction) &&
     (this->bIsAlwaysVisible == false)) {
    return false;
  }
  return true;
}

// OnArrangeChildren @ 142960570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SScrollBarTrack::OnArrangeChildren
          (SScrollBarTrack *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FSlot *pFVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStackY_158 [32];
  undefined8 local_128;
  undefined1 local_120 [24];
  FArrangedWidget local_108;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_158;
  fVar7 = this->ThumbSizeFraction;
  fVar1 = *(float *)&param_1->Size;
  fVar8 = 0.0;
  fVar2 = *(float *)&(param_1->Size).field_0x4;
  local_128 = param_1->Size;
  if (fVar7 < __real_3f7ff972) {
    if (fVar7 <= 0.0) goto LAB_142960643;
  }
  else if (this->bIsAlwaysVisible == false) {
    pFVar4 = TPanelChildren<SScrollBarTrack::FSlot>::operator[](&this->Children,0);
    local_120._0_8_ = 0x3f800000;
    local_120._8_4_ = 0.0;
    FGeometry::MakeChild
              (param_1,&local_108,(TSharedRef<SWidget,1> *)&pFVar4->field_0x10,
               (FDeprecateVector2DParameter *)&local_128,(FSlateLayoutTransform *)local_120);
    FArrangedChildren::AddWidget(param_2,&local_108);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.Widget.SharedReferenceCount.ReferenceController);
    return;
  }
  fVar8 = this->MinThumbSize;
LAB_142960643:
  if (this->Orientation == Orient_Horizontal) {
    local_128._0_4_ = SUB84(param_1->Size,0);
    fVar5 = (float)local_128 - fVar8;
    fVar6 = this->OffsetFraction * fVar5;
    local_128._4_4_ = fVar2;
    local_128._0_4_ = fVar6;
  }
  else {
    local_128._4_4_ = SUB84(param_1->Size,4);
    fVar5 = local_128._4_4_ - fVar8;
    fVar6 = this->OffsetFraction * fVar5;
    local_128._4_4_ = fVar6;
    local_128._0_4_ = fVar1;
  }
  fVar8 = fVar7 * fVar5 + fVar8;
  pFVar4 = TPanelChildren<SScrollBarTrack::FSlot>::operator[](&this->Children,0);
  local_120._0_8_ = 0x3f800000;
  local_120._8_4_ = 0.0;
  FGeometry::MakeChild
            (param_1,&local_108,(TSharedRef<SWidget,1> *)&pFVar4->field_0x10,
             (FDeprecateVector2DParameter *)&local_128,(FSlateLayoutTransform *)local_120);
  FArrangedChildren::AddWidget(param_2,&local_108);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.Widget.SharedReferenceCount.ReferenceController);
  fVar7 = fVar6 + fVar8;
  fVar5 = 0.0;
  if (this->Orientation == Orient_Horizontal) {
    local_128._0_4_ = SUB84(param_1->Size,0);
    fVar3 = fVar7;
    local_128._4_4_ = fVar2;
    local_128._0_4_ = (float)local_128 - fVar7;
    fVar7 = 0.0;
  }
  else {
    local_128._4_4_ = SUB84(param_1->Size,4);
    fVar3 = 0.0;
    local_128._4_4_ = local_128._4_4_ - fVar7;
    local_128._0_4_ = fVar1;
  }
  pFVar4 = TPanelChildren<SScrollBarTrack::FSlot>::operator[](&this->Children,1);
  local_120._4_4_ = fVar3;
  local_120._0_4_ = 1.0;
  local_120._8_4_ = fVar7;
  FGeometry::MakeChild
            (param_1,&local_108,(TSharedRef<SWidget,1> *)&pFVar4->field_0x10,
             (FDeprecateVector2DParameter *)&local_128,(FSlateLayoutTransform *)local_120);
  FArrangedChildren::AddWidget(param_2,&local_108);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.Widget.SharedReferenceCount.ReferenceController);
  fVar7 = fVar6;
  if (this->Orientation != Orient_Horizontal) {
    fVar2 = fVar8;
    fVar8 = fVar1;
    fVar7 = 0.0;
    fVar5 = fVar6;
  }
  local_128._4_4_ = fVar2;
  local_128._0_4_ = fVar8;
  pFVar4 = TPanelChildren<SScrollBarTrack::FSlot>::operator[](&this->Children,2);
  local_120._4_4_ = fVar7;
  local_120._0_4_ = 1.0;
  local_120._8_4_ = fVar5;
  FGeometry::MakeChild
            (param_1,&local_108,(TSharedRef<SWidget,1> *)&pFVar4->field_0x10,
             (FDeprecateVector2DParameter *)&local_128,(FSlateLayoutTransform *)local_120);
  FArrangedChildren::AddWidget(param_2,&local_108);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.Widget.SharedReferenceCount.ReferenceController);
  return;
}

// SetIsAlwaysVisible @ 142991500

void __thiscall SScrollBarTrack::SetIsAlwaysVisible(SScrollBarTrack *this,bool param_1)

{
  if (this->bIsAlwaysVisible != param_1) {
    this->bIsAlwaysVisible = param_1;
    SWidget::Invalidate((SWidget *)this,Layout);
    return;
  }
  return;
}

// SetSizes @ 142999850

void __thiscall SScrollBarTrack::SetSizes(SScrollBarTrack *this,float param_1,float param_2)

{
  this->OffsetFraction = param_1;
  this->ThumbSizeFraction = param_2;
  if ((param_2 == 0.0) && (this->bIsAlwaysVisible == false)) {
    this->ThumbSizeFraction = 1.0;
    SWidget::Invalidate((SWidget *)this,Layout);
    return;
  }
  if ((__real_3f800000 < param_2) && (this->bIsAlwaysVisible != false)) {
    this->ThumbSizeFraction = 0.0;
  }
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

