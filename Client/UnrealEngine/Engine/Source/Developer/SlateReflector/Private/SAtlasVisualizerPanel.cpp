// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 14

// ClampViewOffset @ 142e31430

void __thiscall
SAtlasVisualizerPanel::ClampViewOffset
          (SAtlasVisualizerPanel *this,TVector2<float> *param_1,TVector2<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = this->ZoomLevel;
  fVar1 = (param_2->field0_0x0)._s_0.X;
  fVar3 = fVar2 * (param_1->field0_0x0)._s_0.X;
  if (fVar1 < fVar3) {
    fVar4 = (this->PhysicalOffset).field0_0x0._s_0.X;
    fVar1 = (fVar1 - fVar3) / fVar2;
    if ((fVar1 <= fVar4) && (fVar1 = fVar4, 0.0 <= fVar4)) {
      fVar1 = 0.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  (this->PhysicalOffset).field0_0x0._s_0.X = fVar1;
  fVar3 = fVar2 * (param_1->field0_0x0)._s_0.Y;
  fVar1 = (param_2->field0_0x0)._s_0.Y;
  if (fVar3 <= fVar1) {
    (this->PhysicalOffset).field0_0x0._s_0.Y = 0.0;
    return;
  }
  fVar4 = (this->PhysicalOffset).field0_0x0._s_0.Y;
  fVar2 = (fVar1 - fVar3) / fVar2;
  if (fVar4 < fVar2) {
    (this->PhysicalOffset).field0_0x0._s_0.Y = fVar2;
    return;
  }
  if (0.0 <= fVar4) {
    fVar4 = 0.0;
  }
  (this->PhysicalOffset).field0_0x0._s_0.Y = fVar4;
  return;
}

// ComputeDesiredSize @ 142e31c10

TVector2<double> * __thiscall
SAtlasVisualizerPanel::ComputeDesiredSize
          (SAtlasVisualizerPanel *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  SWidget *this_00;
  EVisibility EVar3;
  FDeprecateSlateVector2D FVar4;
  
  EVar3.Value.Value = EVisibility::Collapsed.Value.Value;
  this_00 = *(SWidget **)&(this->ChildSlot).field_0x28;
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  if ((TEnumAsByte<EVisibility::Private>)*(uchar *)&this_00->VisibilityAttribute !=
      EVar3.Value.Value) {
    fVar1 = (this->CachedSize).field0_0x0._s_0.X;
    FVar4 = SWidget::GetDesiredSize(this_00);
    fVar2 = *(float *)((longlong)FVar4 + 4);
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(fVar1 * *(float *)FVar4);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(fVar1 * fVar2);
  }
  return __return_storage_ptr__;
}

// GetChildren @ 142e9a390

FChildren * __thiscall SAtlasVisualizerPanel::GetChildren(SAtlasVisualizerPanel *this)

{
  return (FChildren *)&this->ZoomLevel;
}

// OnArrangeChildren @ 142ec5ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SAtlasVisualizerPanel::OnArrangeChildren
          (SAtlasVisualizerPanel *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  SWidget *this_00;
  float fVar1;
  float fVar2;
  undefined1 auStackY_d8 [32];
  TVector2<float>_u_0 local_a8;
  float local_a0;
  float fStack_9c;
  FSlateLayoutTransform local_98;
  FArrangedWidget local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  (this->PhysicalOffset).field0_0x0 = *(TVector2<float>_u_0 *)&param_1->Size;
  this_00 = *(SWidget **)&(this->ChildSlot).field_0x28;
  if ((TEnumAsByte<EVisibility::Private>)*(uchar *)&this_00->VisibilityAttribute !=
      EVisibility::Collapsed.Value.Value) {
    SWidget::GetDesiredSize(this_00);
    if (*(char *)((longlong)&(this->CachedSize).field0_0x0 + 4) != '\0') {
      fVar2 = (this->PhysicalOffset).field0_0x0._s_0.Y / local_a8._s_0.Y;
      fVar1 = (this->PhysicalOffset).field0_0x0._s_0.X / local_a8._s_0.X;
      if (fVar1 <= fVar2) {
        fVar2 = fVar1;
      }
      (this->CachedSize).field0_0x0._s_0.X = fVar2;
    }
    ClampViewOffset((SAtlasVisualizerPanel *)&this[-1].ScrollyZoomy.VerticalIntertia.SampleTimeout,
                    (TVector2<float> *)&local_a8._s_0,&this->PhysicalOffset);
    fVar2 = (this->CachedSize).field0_0x0._s_0.X;
    local_98.Scale = 1.0;
    local_98.Translation.field0_0x0._s_0.X = fVar2 * *(float *)&this->_padding_;
    local_98.Translation.field0_0x0._s_0.Y = fVar2 * *(float *)((longlong)&this->_padding_ + 4);
    fStack_9c = fVar2 * local_a8._s_0.Y;
    local_a0 = fVar2 * local_a8._s_0.X;
    FGeometry::MakeChild
              (param_1,&local_88,(TSharedRef<SWidget,1> *)&(this->ChildSlot).field_0x28,
               (FDeprecateVector2DParameter *)&local_a0,&local_98);
    FArrangedChildren::AddWidget(param_2,&local_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.Widget.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnCursorQuery @ 142ec69a0

/* WARNING: Enum "Type": Some values do not have unique names */

FCursorReply * __thiscall
SAtlasVisualizerPanel::OnCursorQuery
          (SAtlasVisualizerPanel *this,FCursorReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FScrollyZoomy::OnCursorQuery
            ((FScrollyZoomy *)&(this->ChildSlot).field_0x38,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 142ed6030

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAtlasVisualizerPanel::OnMouseButtonDown
          (SAtlasVisualizerPanel *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FScrollyZoomy::OnMouseButtonDown
            ((FScrollyZoomy *)&(this->ChildSlot).field_0x38,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 142ed97c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAtlasVisualizerPanel::OnMouseButtonUp
          (SAtlasVisualizerPanel *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TSharedRef<SWidget,1> *pTVar1;
  TSharedRef<SWidget,1> local_18;
  
  pTVar1 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
  FScrollyZoomy::OnMouseButtonUp
            ((FScrollyZoomy *)&(this->ChildSlot).field_0x38,__return_storage_ptr__,pTVar1,param_1,
             param_2);
  return __return_storage_ptr__;
}

// OnMouseLeave @ 142ed98a0

void __thiscall
SAtlasVisualizerPanel::OnMouseLeave(SAtlasVisualizerPanel *this,FPointerEvent *param_1)

{
  TSharedRef<SWidget,1> *pTVar1;
  TSharedRef<SWidget,1> local_18;
  
  pTVar1 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
  FScrollyZoomy::OnMouseLeave((FScrollyZoomy *)&(this->ChildSlot).field_0x38,pTVar1,param_1);
  return;
}

// OnMouseMove @ 142ed9940

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAtlasVisualizerPanel::OnMouseMove
          (SAtlasVisualizerPanel *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TSharedRef<SWidget,1> *pTVar1;
  TSharedRef<SWidget,1> local_18;
  
  pTVar1 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
  FScrollyZoomy::OnMouseMove
            ((FScrollyZoomy *)&(this->ChildSlot).field_0x38,__return_storage_ptr__,pTVar1,
             (IScrollableZoomable *)&this[-1].ScrollyZoomy.VerticalIntertia.SampleTimeout,param_1,
             param_2);
  return __return_storage_ptr__;
}

// OnMouseWheel @ 142ed9c60

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAtlasVisualizerPanel::OnMouseWheel
          (SAtlasVisualizerPanel *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FScrollyZoomy::OnMouseWheel
            ((FScrollyZoomy *)&(this->ChildSlot).field_0x38,__return_storage_ptr__,param_2,
             (IScrollableZoomable *)&this[-1].ScrollyZoomy.VerticalIntertia.SampleTimeout);
  return __return_storage_ptr__;
}

// OnPaint @ 142edbe90

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SAtlasVisualizerPanel::OnPaint
          (SAtlasVisualizerPanel *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  int iVar1;
  
  iVar1 = SPanel::OnPaint((SPanel *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  iVar1 = FScrollyZoomy::PaintSoftwareCursorIfNeeded
                    ((FScrollyZoomy *)&(this->ChildSlot).field_0x38,param_2,param_3,param_4,iVar1);
  return iVar1;
}

// ScrollBy @ 142efe440

bool __thiscall
SAtlasVisualizerPanel::ScrollBy(SAtlasVisualizerPanel *this,TVector2<double> *param_1)

{
  float fVar1;
  double dVar2;
  TVector2<float>_u_0_s_0 TVar3;
  float fVar4;
  float local_res8;
  float fStackX_c;
  TVector2<float> local_res18 [2];
  
  if (this->bFitToWindow == false) {
    dVar2 = (param_1->field0_0x0)._s_0.X;
    TVar3 = (this->PhysicalOffset).field0_0x0._s_0;
    fVar4 = __real_3f800000 / this->ZoomLevel;
    fVar1 = (this->PhysicalOffset).field0_0x0._s_0.X;
    (this->PhysicalOffset).field0_0x0._s_0.Y =
         (float)(param_1->field0_0x0)._s_0.Y * fVar4 + (this->PhysicalOffset).field0_0x0._s_0.Y;
    (this->PhysicalOffset).field0_0x0._s_0.X = (float)dVar2 * fVar4 + fVar1;
    SWidget::GetDesiredSize(*(SWidget **)&(this->ChildSlot).field_0x30);
    ClampViewOffset(this,local_res18,&this->CachedSize);
    local_res8 = TVar3.X;
    if ((local_res8 != (this->PhysicalOffset).field0_0x0._s_0.X) ||
       (fStackX_c = TVar3.Y, fStackX_c != (this->PhysicalOffset).field0_0x0._s_0.Y)) {
      return true;
    }
  }
  return false;
}

// Tick @ 142f0e720

void __thiscall
SAtlasVisualizerPanel::Tick
          (SAtlasVisualizerPanel *this,FGeometry *param_1,double param_2,float param_3)

{
  FScrollyZoomy::Tick((FScrollyZoomy *)&(this->ChildSlot).field_0x38,param_3,
                      (IScrollableZoomable *)&this[-1].ScrollyZoomy.VerticalIntertia.SampleTimeout);
  return;
}

// ZoomBy @ 142f19630

bool __thiscall SAtlasVisualizerPanel::ZoomBy(SAtlasVisualizerPanel *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_1 * __real_3d4ccccd;
  this->bFitToWindow = false;
  fVar1 = this->ZoomLevel;
  fVar2 = fVar2 + fVar1;
  if (__real_40800000 <= fVar2) {
    fVar2 = __real_40800000;
  }
  if (fVar2 <= __real_3e4ccccd) {
    fVar2 = __real_3e4ccccd;
  }
  this->ZoomLevel = fVar2;
  if (fVar2 != fVar1) {
    return true;
  }
  return false;
}

