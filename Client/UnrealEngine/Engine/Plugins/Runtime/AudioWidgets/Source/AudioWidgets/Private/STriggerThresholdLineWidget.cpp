// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 5

// ComputeDesiredSize @ 14d8e6150

TVector2<double> * __thiscall
STriggerThresholdLineWidget::ComputeDesiredSize
          (STriggerThresholdLineWidget *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  return __return_storage_ptr__;
}

// Construct @ 14d8eee70

void __thiscall
STriggerThresholdLineWidget::Construct(STriggerThresholdLineWidget *this,FArguments *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  ESampledSequenceDrawOrientation EVar4;
  
  this->TriggerThreshold = param_1->_TriggerThreshold;
  uVar1 = *(undefined8 *)((longlong)&(param_1->_Style->LineColor).field0_0x0 + 8);
  *(undefined8 *)&(this->LineColor).field0_0x0 =
       *(undefined8 *)&(param_1->_Style->LineColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->LineColor).field0_0x0 + 8) = uVar1;
  fVar2 = (param_1->_SequenceDrawingParams).DimensionSlotMargin;
  fVar3 = (param_1->_SequenceDrawingParams).MaxSequenceHeightRatio;
  (this->DrawingParams).MaxDisplayedValue = (param_1->_SequenceDrawingParams).MaxDisplayedValue;
  (this->DrawingParams).DimensionSlotMargin = fVar2;
  (this->DrawingParams).MaxSequenceHeightRatio = fVar3;
  fVar2 = (param_1->_SequenceDrawingParams).MinScaledBinValue;
  fVar3 = (param_1->_SequenceDrawingParams).VerticalZoomFactor;
  EVar4 = (param_1->_SequenceDrawingParams).Orientation;
  (this->DrawingParams).MinSequenceHeightRatio =
       (param_1->_SequenceDrawingParams).MinSequenceHeightRatio;
  (this->DrawingParams).MinScaledBinValue = fVar2;
  (this->DrawingParams).VerticalZoomFactor = fVar3;
  (this->DrawingParams).Orientation = EVar4;
  return;
}

// OnPaint @ 14d9570f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
STriggerThresholdLineWidget::OnPaint
          (STriggerThresholdLineWidget *this,FPaintArgs *param_1,FGeometry *param_2,
          FSlateRect *param_3,FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,
          bool param_7)

{
  float fVar1;
  undefined1 auVar2 [16];
  float afVar3 [2];
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  undefined1 auStackY_c8 [32];
  undefined1 local_88 [8];
  int local_80;
  int local_7c;
  TVector2<float>_u_0 local_78;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  FDeprecateSlateVector2D FStack_64;
  float fStack_5c;
  float fStack_58;
  float afStack_54 [2];
  TVector2<float>_u_0 local_4c;
  byte local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_88._0_4_ = SUB84(param_2->Size,0);
  uVar4 = local_88._0_4_;
  fVar5 = (float)local_88._0_4_;
  if ((this->DrawingParams).Orientation == Horizontal) {
    local_88._4_4_ = SUB84(param_2->Size,4);
    fVar5 = (float)local_88._4_4_;
  }
  fVar1 = (this->DrawingParams).DimensionSlotMargin;
  dVar7 = (double)fVar1;
  local_80 = 2;
  local_88 = (undefined1  [8])0x0;
  fVar1 = fVar5 - (fVar1 + fVar1);
  if (fVar5 <= fVar1) {
    fVar1 = fVar5;
  }
  fVar5 = (this->DrawingParams).MinSequenceHeightRatio * fVar5;
  if (fVar1 <= fVar5) {
    fVar1 = fVar5;
  }
  fVar6 = fVar1 * (this->DrawingParams).MaxSequenceHeightRatio * __real_3f000000;
  fVar5 = (float)((((double)fVar1 + dVar7) - dVar7) * __real_3fe0000000000000 + dVar7);
  dVar7 = (double)(fVar6 + fVar5);
  dVar7 = ((double)(fVar5 - fVar6) - dVar7) *
          ((double)this->TriggerThreshold - __real_bff0000000000000) * __real_3fe0000000000000 +
          dVar7;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,(ForAnyElementType *)local_88,2,&local_7c);
  *(undefined8 *)local_88 = 0;
  *(double *)((longlong)local_88 + 8) = dVar7;
  auVar2._8_4_ = SUB84(dVar7,0);
  auVar2._0_8_ = (double)(float)uVar4;
  auVar2._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])((longlong)local_88 + 0x10) = auVar2;
  local_78 = (param_2->AbsolutePosition).field0_0x0;
  fStack_70 = param_2->Scale;
  local_4c = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
  FStack_64 = param_2->Size;
  afVar3 = (param_2->AccumulatedRenderTransform).M.M[0];
  afStack_54 = (param_2->AccumulatedRenderTransform).M.M[1];
  local_44 = param_2->bHasRenderTransform * '\x02' | local_44 & 0xfc;
  uStack_6c = 0;
  uStack_68 = 0;
  fStack_5c = afVar3[0];
  fStack_58 = afVar3[1];
  FSlateDrawElement::MakeLines
            (param_4,param_5,(FPaintGeometry *)&local_78._s_0,
             (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)local_88,None,
             &this->LineColor,true,__real_3f800000);
  if (local_88 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_88);
  }
  return param_5;
}

// OnStyleUpdated @ 14d9585c0

void __thiscall
STriggerThresholdLineWidget::OnStyleUpdated
          (STriggerThresholdLineWidget *this,FTriggerThresholdLineStyle *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(param_1->LineColor).field0_0x0 + 8);
  *(undefined8 *)&(this->LineColor).field0_0x0 = *(undefined8 *)&(param_1->LineColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->LineColor).field0_0x0 + 8) = uVar1;
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)param_1);
  return;
}

// SetTriggerThreshold @ 14d96e250

void __thiscall
STriggerThresholdLineWidget::SetTriggerThreshold(STriggerThresholdLineWidget *this,float param_1)

{
  this->TriggerThreshold = param_1;
  return;
}

