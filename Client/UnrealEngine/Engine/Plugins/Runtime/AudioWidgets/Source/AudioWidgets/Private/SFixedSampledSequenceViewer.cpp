// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 10

// ~SFixedSampledSequenceViewer @ 14d8c0f70

void __thiscall
SFixedSampledSequenceViewer::~SFixedSampledSequenceViewer(SFixedSampledSequenceViewer *this)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pFVar1 = (this->CachedSampleDrawCoordinates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedBinsDrawCoordinates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedPeaks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar2 = (this->BackgroundBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->BackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GridService).SharedReferenceCount.ReferenceController);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  return;
}

// ComputeDesiredSize @ 14d8e60e0

TVector2<double> * __thiscall
SFixedSampledSequenceViewer::ComputeDesiredSize
          (SFixedSampledSequenceViewer *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  
  fVar1 = this->DesiredHeight;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)this->DesiredWidth;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  return __return_storage_ptr__;
}

// Construct @ 14d8ee650

void __thiscall
SFixedSampledSequenceViewer::Construct
          (SFixedSampledSequenceViewer *this,FArguments *param_1,
          TArrayView<float_const_,int> *param_2,uchar param_3,
          TSharedRef<IFixedSampledSequenceGridService,1> *param_4)

{
  FSampledSequenceViewerStyle *pFVar1;
  code *pcVar2;
  float *pfVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  ESampledSequenceDrawOrientation EVar9;
  EStyleColor EVar10;
  undefined2 uVar11;
  bool bVar12;
  IFixedSampledSequenceGridService *local_18;
  FSharedReferencer<1> local_10;
  
  local_10.ReferenceController = (param_4->SharedReferenceCount).ReferenceController;
  local_18 = param_4->Object;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->GridService != (TSharedPtr<IFixedSampledSequenceGridService,1> *)&local_18) {
    (this->GridService).Object = local_18;
    local_18 = (IFixedSampledSequenceGridService *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->GridService).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  UpdateGridMetrics(this);
  pfVar3 = param_2->DataPtr;
  iVar5 = param_2->ArrayNum;
  uVar6 = *(undefined4 *)&param_2->field_0xc;
  this->NumChannels = param_3;
  this->bForceRedraw = true;
  (this->SampleData).DataPtr = pfVar3;
  (this->SampleData).ArrayNum = iVar5;
  *(undefined4 *)&(this->SampleData).field_0xc = uVar6;
  fVar7 = (param_1->_SequenceDrawingParams).DimensionSlotMargin;
  fVar8 = (param_1->_SequenceDrawingParams).MaxSequenceHeightRatio;
  (this->DrawingParams).MaxDisplayedValue = (param_1->_SequenceDrawingParams).MaxDisplayedValue;
  (this->DrawingParams).DimensionSlotMargin = fVar7;
  (this->DrawingParams).MaxSequenceHeightRatio = fVar8;
  fVar7 = (param_1->_SequenceDrawingParams).MinScaledBinValue;
  fVar8 = (param_1->_SequenceDrawingParams).VerticalZoomFactor;
  EVar9 = (param_1->_SequenceDrawingParams).Orientation;
  (this->DrawingParams).MinSequenceHeightRatio =
       (param_1->_SequenceDrawingParams).MinSequenceHeightRatio;
  (this->DrawingParams).MinScaledBinValue = fVar7;
  (this->DrawingParams).VerticalZoomFactor = fVar8;
  (this->DrawingParams).Orientation = EVar9;
  this->bHideBackground = param_1->_HideBackground;
  this->bHideGrid = param_1->_HideGrid;
  if (param_1->_Style == (FSampledSequenceViewerStyle *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InArgs._Style",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewer.cpp"
                        ,0xe,L"");
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = param_1->_Style;
  uVar4 = *(undefined8 *)((longlong)&(pFVar1->SequenceColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->SequenceColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar1->SequenceColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SequenceColor).SpecifiedColor.field0_0x0 + 8) = uVar4;
  EVar10 = (pFVar1->SequenceColor).ColorTableId;
  uVar11 = *(undefined2 *)&(pFVar1->SequenceColor).field_0x12;
  (this->SequenceColor).ColorUseRule = (pFVar1->SequenceColor).ColorUseRule;
  (this->SequenceColor).ColorTableId = EVar10;
  *(undefined2 *)&(this->SequenceColor).field_0x12 = uVar11;
  pFVar1 = param_1->_Style;
  uVar4 = *(undefined8 *)((longlong)&(pFVar1->MajorGridLineColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->MajorGridLineColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar1->MajorGridLineColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->MajorGridLineColor).SpecifiedColor.field0_0x0 + 8) = uVar4;
  EVar10 = (pFVar1->MajorGridLineColor).ColorTableId;
  uVar11 = *(undefined2 *)&(pFVar1->MajorGridLineColor).field_0x12;
  (this->MajorGridLineColor).ColorUseRule = (pFVar1->MajorGridLineColor).ColorUseRule;
  (this->MajorGridLineColor).ColorTableId = EVar10;
  *(undefined2 *)&(this->MajorGridLineColor).field_0x12 = uVar11;
  pFVar1 = param_1->_Style;
  uVar4 = *(undefined8 *)((longlong)&(pFVar1->MinorGridLineColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->MinorGridLineColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar1->MinorGridLineColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->MinorGridLineColor).SpecifiedColor.field0_0x0 + 8) = uVar4;
  EVar10 = (pFVar1->MinorGridLineColor).ColorTableId;
  uVar11 = *(undefined2 *)&(pFVar1->MinorGridLineColor).field_0x12;
  (this->MinorGridLineColor).ColorUseRule = (pFVar1->MinorGridLineColor).ColorUseRule;
  (this->MinorGridLineColor).ColorTableId = EVar10;
  *(undefined2 *)&(this->MinorGridLineColor).field_0x12 = uVar11;
  pFVar1 = param_1->_Style;
  uVar4 = *(undefined8 *)
           ((longlong)&(pFVar1->SequenceBackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->BackgroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar1->SequenceBackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->BackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar4;
  EVar10 = (pFVar1->SequenceBackgroundColor).ColorTableId;
  uVar11 = *(undefined2 *)&(pFVar1->SequenceBackgroundColor).field_0x12;
  (this->BackgroundColor).ColorUseRule = (pFVar1->SequenceBackgroundColor).ColorUseRule;
  (this->BackgroundColor).ColorTableId = EVar10;
  *(undefined2 *)&(this->BackgroundColor).field_0x12 = uVar11;
  FSlateBrush::operator=(&this->BackgroundBrush,&param_1->_Style->BackgroundBrush);
  this->DesiredWidth = param_1->_Style->DesiredWidth;
  this->DesiredHeight = param_1->_Style->DesiredHeight;
  this->SampleMarkersSize = param_1->_Style->SampleMarkersSize;
  this->SequenceLineThickness = param_1->_Style->SequenceLineThickness;
  pFVar1 = param_1->_Style;
  uVar4 = *(undefined8 *)((longlong)&(pFVar1->ZeroCrossingLineColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ZeroCrossingLineColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar1->ZeroCrossingLineColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ZeroCrossingLineColor).SpecifiedColor.field0_0x0 + 8) = uVar4;
  EVar10 = (pFVar1->ZeroCrossingLineColor).ColorTableId;
  uVar11 = *(undefined2 *)&(pFVar1->ZeroCrossingLineColor).field_0x12;
  (this->ZeroCrossingLineColor).ColorUseRule = (pFVar1->ZeroCrossingLineColor).ColorUseRule;
  (this->ZeroCrossingLineColor).ColorTableId = EVar10;
  *(undefined2 *)&(this->ZeroCrossingLineColor).field_0x12 = uVar11;
  this->ZeroCrossingLineThickness = param_1->_Style->ZeroCrossingLineThickness;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return;
}

// DrawGridLines @ 14d917ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SFixedSampledSequenceViewer::DrawGridLines
          (SFixedSampledSequenceViewer *this,FGeometry *param_1,FSlateWindowElementList *param_2,
          int *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  byte bVar5;
  undefined1 uVar6;
  int iVar7;
  code *pcVar8;
  bool bVar9;
  FLinearColor *pFVar10;
  ushort uVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  undefined1 auStackY_1d8 [32];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_198;
  float *local_188;
  FSlateWindowElementList *local_180;
  FLinearColor_u_0 local_178;
  FLinearColor_u_0 local_168;
  FDimensionSlot local_158;
  FLinearColor_u_0 local_148;
  TVector2<float>_u_0 local_138;
  float local_130;
  undefined8 local_12c;
  FDeprecateSlateVector2D local_124;
  float local_11c [2];
  float afStack_114 [2];
  TVector2<float>_u_0 local_10c;
  byte local_104;
  TVector2<float>_u_0 local_100;
  float local_f8;
  undefined8 local_f4;
  FDeprecateSlateVector2D local_ec;
  float local_e4 [2];
  float afStack_dc [2];
  TVector2<float>_u_0 local_d4;
  byte local_cc;
  TVector2<float>_u_0 local_c8;
  float local_c0;
  undefined8 local_bc;
  FDeprecateSlateVector2D local_b4;
  float local_ac [2];
  float afStack_a4 [2];
  TVector2<float>_u_0 local_9c;
  byte local_94;
  ulonglong local_90;
  
  local_90 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.ArrayNum = 0;
  local_198.ArrayMax = 0;
  local_180 = param_2;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,&local_198.AllocatorInstance,&local_198.ArrayNum,&local_198.ArrayMax);
  fVar3 = __real_3f800000;
  pfVar1 = &param_1->Scale;
  iVar7 = (this->GridMetrics).NumMinorGridDivisions;
  dVar14 = (this->GridMetrics).FirstMajorTickX;
  dVar4 = (this->GridMetrics).MajorGridXStep;
  local_188 = pfVar1;
  if (dVar14 < (double)*(float *)&param_1->Size) {
    do {
      if ((local_198.ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(double *)local_198.AllocatorInstance.Data = dVar14;
      *(double *)(local_198.AllocatorInstance.Data + 8) = 0.0;
      fVar2 = *(float *)&(param_1->Size).field_0x4;
      if ((local_198.ArrayNum < 2) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(double *)(local_198.AllocatorInstance.Data + 0x10) = dVar14;
      *(double *)(local_198.AllocatorInstance.Data + 0x18) = (double)fVar2;
      if ((this->MajorGridLineColor).ColorUseRule == UseColor_ColorTable) {
        pFVar10 = FSlateColor::GetColorFromTable(&this->MajorGridLineColor);
        local_178._0_8_ = *(undefined8 *)&pFVar10->field0_0x0;
        local_178._8_8_ = *(undefined8 *)((longlong)&pFVar10->field0_0x0 + 8);
      }
      else {
        local_178._0_8_ = *(undefined8 *)&(this->MajorGridLineColor).SpecifiedColor.field0_0x0;
        local_178._8_8_ =
             *(undefined8 *)((longlong)&(this->MajorGridLineColor).SpecifiedColor.field0_0x0 + 8);
      }
      local_138 = (param_1->AbsolutePosition).field0_0x0;
      local_10c = (param_1->AccumulatedRenderTransform).Trans.field0_0x0;
      local_124 = param_1->Size;
      local_104 = param_1->bHasRenderTransform * '\x02' | local_104 & 0xfc;
      local_130 = *pfVar1;
      local_11c = (param_1->AccumulatedRenderTransform).M.M[0];
      afStack_114 = (param_1->AccumulatedRenderTransform).M.M[1];
      *param_3 = *param_3 + 1;
      local_12c = 0;
      FSlateDrawElement::MakeLines
                (param_2,*param_3,(FPaintGeometry *)&local_138._s_0,&local_198,None,
                 (FLinearColor *)&local_178._s_0,false,fVar3);
      iVar12 = 1;
      if (1 < (this->GridMetrics).NumMinorGridDivisions) {
        do {
          dVar13 = (double)iVar12 * (dVar4 / (double)iVar7) + dVar14;
          if (dVar13 < (double)*(float *)&param_1->Size) {
            if ((local_198.ArrayNum < 1) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            *(double *)local_198.AllocatorInstance.Data = dVar13;
            *(double *)(local_198.AllocatorInstance.Data + 8) = 0.0;
            fVar2 = *(float *)&(param_1->Size).field_0x4;
            if ((local_198.ArrayNum < 2) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            *(double *)(local_198.AllocatorInstance.Data + 0x10) = dVar13;
            *(double *)(local_198.AllocatorInstance.Data + 0x18) = (double)fVar2;
            if ((this->MinorGridLineColor).ColorUseRule == UseColor_ColorTable) {
              pFVar10 = FSlateColor::GetColorFromTable(&this->MinorGridLineColor);
              local_168._0_8_ = *(undefined8 *)&pFVar10->field0_0x0;
              local_168._8_8_ = *(undefined8 *)((longlong)&pFVar10->field0_0x0 + 8);
            }
            else {
              local_168._0_8_ = *(undefined8 *)&(this->MinorGridLineColor).SpecifiedColor.field0_0x0
              ;
              local_168._8_8_ =
                   *(undefined8 *)
                    ((longlong)&(this->MinorGridLineColor).SpecifiedColor.field0_0x0 + 8);
            }
            local_100 = (param_1->AbsolutePosition).field0_0x0;
            local_d4 = (param_1->AccumulatedRenderTransform).Trans.field0_0x0;
            local_ec = param_1->Size;
            local_cc = param_1->bHasRenderTransform * '\x02' | local_cc & 0xfc;
            local_f8 = *pfVar1;
            local_e4 = (param_1->AccumulatedRenderTransform).M.M[0];
            afStack_dc = (param_1->AccumulatedRenderTransform).M.M[1];
            *param_3 = *param_3 + 1;
            local_f4 = 0;
            FSlateDrawElement::MakeLines
                      (param_2,*param_3,(FPaintGeometry *)&local_100._s_0,&local_198,None,
                       (FLinearColor *)&local_168._s_0,false,fVar3);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < (this->GridMetrics).NumMinorGridDivisions);
      }
      dVar14 = dVar14 + (this->GridMetrics).MajorGridXStep;
    } while (dVar14 < (double)*(float *)&param_1->Size);
  }
  uVar11 = 0;
  bVar5 = this->NumChannels;
  if (bVar5 != 0) {
    do {
      SampledSequenceDrawingUtils::FDimensionSlot::FDimensionSlot
                (&local_158,uVar11,(ushort)bVar5,param_1,&this->DrawingParams);
      dVar14 = (double)local_158.Center;
      if ((local_198.ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(double *)local_198.AllocatorInstance.Data = 0.0;
      *(double *)(local_198.AllocatorInstance.Data + 8) = dVar14;
      fVar3 = *(float *)&param_1->Size;
      dVar14 = (double)local_158.Center;
      if ((local_198.ArrayNum < 2) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(double *)(local_198.AllocatorInstance.Data + 0x10) = (double)fVar3;
      *(double *)(local_198.AllocatorInstance.Data + 0x18) = dVar14;
      fVar3 = this->ZeroCrossingLineThickness;
      if ((this->ZeroCrossingLineColor).ColorUseRule == UseColor_ColorTable) {
        pFVar10 = FSlateColor::GetColorFromTable(&this->ZeroCrossingLineColor);
        local_148._0_8_ = *(undefined8 *)&pFVar10->field0_0x0;
        local_148._8_8_ = *(undefined8 *)((longlong)&pFVar10->field0_0x0 + 8);
      }
      else {
        local_148._0_8_ = *(undefined8 *)&(this->ZeroCrossingLineColor).SpecifiedColor.field0_0x0;
        local_148._8_8_ =
             *(undefined8 *)((longlong)&(this->ZeroCrossingLineColor).SpecifiedColor.field0_0x0 + 8)
        ;
      }
      local_c8 = (param_1->AbsolutePosition).field0_0x0;
      local_9c = (param_1->AccumulatedRenderTransform).Trans.field0_0x0;
      local_c0 = *local_188;
      local_b4 = param_1->Size;
      local_ac = (param_1->AccumulatedRenderTransform).M.M[0];
      afStack_a4 = (param_1->AccumulatedRenderTransform).M.M[1];
      *param_3 = *param_3 + 1;
      local_94 = param_1->bHasRenderTransform * '\x02' | local_94 & 0xfc;
      local_bc = 0;
      FSlateDrawElement::MakeLines
                (local_180,*param_3,(FPaintGeometry *)&local_c8._s_0,&local_198,None,
                 (FLinearColor *)&local_148._s_0,false,fVar3);
      uVar11 = uVar11 + 1;
    } while (uVar11 < bVar5);
  }
  if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.AllocatorInstance.Data);
  }
  return;
}

// OnPaint @ 14d955b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
SFixedSampledSequenceViewer::OnPaint
          (SFixedSampledSequenceViewer *this,FPaintArgs *param_1,FGeometry *param_2,
          FSlateRect *param_3,FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,
          bool param_7)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  float afVar8 [2];
  float afVar9 [2];
  float afVar10 [2];
  float afVar11 [2];
  bool bVar12;
  int iVar13;
  uint uVar14;
  FLinearColor *pFVar15;
  ushort uVar16;
  longlong lVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  undefined1 auStackY_2c8 [32];
  ushort local_278;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_270;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_260;
  TTransform2<float> *local_250;
  FGeometry *local_248;
  FSlateWindowElementList *local_240;
  float local_238;
  float fStack_234;
  TVector2<float>_u_0 local_230;
  float local_228;
  float fStack_224;
  float local_220;
  float fStack_21c;
  TVector2<float>_u_0_s_0 local_214;
  FLinearColor_u_0 local_20c;
  FLinearColor_u_0 local_1fc;
  FLinearColor_u_0 local_1ec;
  FLinearColor_u_0 local_1dc;
  FLinearColor_u_0 local_1cc;
  TTransform2<float> local_1b8;
  TTransform2<float> local_1a0;
  TVector2<float>_u_0 local_188;
  float local_180;
  undefined8 local_17c;
  FDeprecateSlateVector2D local_174;
  float local_16c [2];
  float afStack_164 [2];
  TVector2<float>_u_0 local_15c;
  byte local_154;
  TVector2<float>_u_0 local_150;
  float local_148;
  undefined8 local_144;
  FDeprecateSlateVector2D local_13c;
  float local_134 [2];
  float afStack_12c [2];
  TVector2<float>_u_0 local_124;
  byte local_11c;
  TVector2<float>_u_0 local_118;
  float local_110;
  undefined8 local_10c;
  FDeprecateSlateVector2D local_104;
  float local_fc [2];
  float afStack_f4 [2];
  TVector2<float>_u_0 local_ec;
  byte local_e4;
  TVector2<float>_u_0 local_e0;
  float local_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  float local_c4 [2];
  float afStack_bc [2];
  TVector2<float>_u_0 local_b4;
  byte local_ac;
  TVector2<float>_u_0 local_a8;
  float local_a0;
  undefined8 local_9c;
  FDeprecateSlateVector2D local_94;
  float local_8c [2];
  float afStack_84 [2];
  TVector2<float>_u_0 local_7c;
  byte local_74;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  fVar1 = param_3->Right;
  fVar2 = param_3->Left;
  local_240 = param_4;
  local_248 = param_2;
  if (this->bHideBackground == false) {
    if ((this->BackgroundColor).ColorUseRule == UseColor_ColorTable) {
      pFVar15 = FSlateColor::GetColorFromTable(&this->BackgroundColor);
      local_20c._s_0.R = (pFVar15->field0_0x0)._s_0.R;
      local_20c._s_0.G = (pFVar15->field0_0x0)._s_0.G;
      local_20c._s_0.B = (pFVar15->field0_0x0)._s_0.B;
      local_20c._s_0.A = (pFVar15->field0_0x0)._s_0.A;
    }
    else {
      local_20c._s_0.R = (this->BackgroundColor).SpecifiedColor.field0_0x0._s_0.R;
      local_20c._s_0.G = (this->BackgroundColor).SpecifiedColor.field0_0x0._s_0.G;
      local_20c._s_0.B = (this->BackgroundColor).SpecifiedColor.field0_0x0._s_0.B;
      local_20c._s_0.A = (this->BackgroundColor).SpecifiedColor.field0_0x0._s_0.A;
    }
    local_188 = (param_2->AbsolutePosition).field0_0x0;
    local_15c = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
    local_174 = param_2->Size;
    local_17c = 0;
    local_154 = param_2->bHasRenderTransform * '\x02' | local_154 & 0xfc;
    param_5 = param_5 + 1;
    local_180 = param_2->Scale;
    local_16c = (param_2->AccumulatedRenderTransform).M.M[0];
    afStack_164 = (param_2->AccumulatedRenderTransform).M.M[1];
    FSlateDrawElement::MakeBox
              (param_4,param_5,(FPaintGeometry *)&local_188._s_0,&this->BackgroundBrush,None,
               (FLinearColor *)&local_20c._s_0);
  }
  local_250 = &param_2->AccumulatedRenderTransform;
  if (fVar1 - fVar2 <= 0.0) {
    return param_5;
  }
  if (this->bHideGrid == false) {
    DrawGridLines(this,param_2,param_4,&param_5);
  }
  afVar10 = _UNK_15076b188;
  afVar8 = ___xmm_3f80000000000000000000003f800000;
  dVar7 = __real_3fe0000000000000;
  if (this->SequenceDrawMode == BinnedPeaks) {
    uVar20 = 0;
    local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_260.ArrayNum = 0;
    local_260.ArrayMax = 0;
    TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_260,2,Default);
    FVar18.Data = local_260.AllocatorInstance.Data;
    uVar22 = uVar20;
    if (0 < (this->CachedBinsDrawCoordinates).ArrayNum) {
      do {
        uVar19 = (uint)uVar20;
        uVar21 = ~uVar19 >> 0x1f;
        uVar24 = 0;
        if ((int)uVar19 < (this->CachedBinsDrawCoordinates).ArrayNum) {
          uVar24 = uVar21;
        }
        if ((uVar24 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          iVar13 = (*pcVar4)();
          return iVar13;
        }
        pFVar25 = (this->CachedBinsDrawCoordinates).AllocatorInstance.Data + uVar22;
        uVar5 = *(undefined8 *)pFVar25;
        uVar6 = *(undefined8 *)(pFVar25 + 8);
        if ((local_260.ArrayNum < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          iVar13 = (*pcVar4)();
          return iVar13;
        }
        *(undefined8 *)local_260.AllocatorInstance.Data = uVar5;
        *(undefined8 *)(local_260.AllocatorInstance.Data + 8) = uVar6;
        uVar24 = 0;
        if ((int)uVar19 < (this->CachedBinsDrawCoordinates).ArrayNum) {
          uVar24 = uVar21;
        }
        if ((uVar24 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          iVar13 = (*pcVar4)();
          return iVar13;
        }
        pFVar25 = (this->CachedBinsDrawCoordinates).AllocatorInstance.Data + uVar22 + 0x10;
        uVar5 = *(undefined8 *)pFVar25;
        uVar6 = *(undefined8 *)(pFVar25 + 8);
        if ((local_260.ArrayNum < 2) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          iVar13 = (*pcVar4)();
          return iVar13;
        }
        *(undefined8 *)(local_260.AllocatorInstance.Data + 0x10) = uVar5;
        *(undefined8 *)(local_260.AllocatorInstance.Data + 0x18) = uVar6;
        fVar1 = this->SequenceLineThickness;
        if ((this->SequenceColor).ColorUseRule == UseColor_ColorTable) {
          pFVar15 = FSlateColor::GetColorFromTable(&this->SequenceColor);
          local_1fc._s_0.R = (pFVar15->field0_0x0)._s_0.R;
          local_1fc._s_0.G = (pFVar15->field0_0x0)._s_0.G;
          local_1fc._s_0.B = (pFVar15->field0_0x0)._s_0.B;
          local_1fc._s_0.A = (pFVar15->field0_0x0)._s_0.A;
        }
        else {
          local_1fc._s_0.R = (this->SequenceColor).SpecifiedColor.field0_0x0._s_0.R;
          local_1fc._s_0.G = (this->SequenceColor).SpecifiedColor.field0_0x0._s_0.G;
          local_1fc._s_0.B = (this->SequenceColor).SpecifiedColor.field0_0x0._s_0.B;
          local_1fc._s_0.A = (this->SequenceColor).SpecifiedColor.field0_0x0._s_0.A;
        }
        local_150 = (param_2->AbsolutePosition).field0_0x0;
        local_13c = param_2->Size;
        local_124 = (local_250->Trans).field0_0x0;
        local_148 = param_2->Scale;
        local_134 = (local_250->M).M[0];
        afStack_12c = (local_250->M).M[1];
        local_144 = 0;
        local_11c = param_2->bHasRenderTransform * '\x02' | local_11c & 0xfc;
        FSlateDrawElement::MakeLines
                  (local_240,param_5,(FPaintGeometry *)&local_150._s_0,&local_260,None,
                   (FLinearColor *)&local_1fc._s_0,true,fVar1);
        iVar13 = (this->CachedBinsDrawCoordinates).ArrayNum;
        uVar24 = this->NumChannels + uVar19;
        param_2 = local_248;
        if ((int)uVar24 < iVar13) {
          uVar14 = 0;
          if ((int)uVar19 < iVar13) {
            uVar14 = uVar21;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            iVar13 = (*pcVar4)();
            return iVar13;
          }
          pFVar25 = (this->CachedBinsDrawCoordinates).AllocatorInstance.Data + uVar22 + 0x10;
          uVar5 = *(undefined8 *)pFVar25;
          uVar6 = *(undefined8 *)(pFVar25 + 8);
          if ((local_260.ArrayNum < 1) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            iVar13 = (*pcVar4)();
            return iVar13;
          }
          *(undefined8 *)local_260.AllocatorInstance.Data = uVar5;
          *(undefined8 *)(local_260.AllocatorInstance.Data + 8) = uVar6;
          uVar21 = 0;
          if ((int)uVar24 < (this->CachedBinsDrawCoordinates).ArrayNum) {
            uVar21 = ~uVar24 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            iVar13 = (*pcVar4)();
            return iVar13;
          }
          pFVar25 = (this->CachedBinsDrawCoordinates).AllocatorInstance.Data +
                    (longlong)(int)uVar24 * 0x20;
          uVar5 = *(undefined8 *)pFVar25;
          uVar6 = *(undefined8 *)(pFVar25 + 8);
          if ((local_260.ArrayNum < 2) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            iVar13 = (*pcVar4)();
            return iVar13;
          }
          *(undefined8 *)(local_260.AllocatorInstance.Data + 0x10) = uVar5;
          *(undefined8 *)(local_260.AllocatorInstance.Data + 0x18) = uVar6;
          fVar1 = this->SequenceLineThickness;
          if ((this->SequenceColor).ColorUseRule == UseColor_ColorTable) {
            pFVar15 = FSlateColor::GetColorFromTable(&this->SequenceColor);
            local_1ec._s_0.R = (pFVar15->field0_0x0)._s_0.R;
            local_1ec._s_0.G = (pFVar15->field0_0x0)._s_0.G;
            local_1ec._s_0.B = (pFVar15->field0_0x0)._s_0.B;
            local_1ec._s_0.A = (pFVar15->field0_0x0)._s_0.A;
          }
          else {
            local_1ec._s_0.R = (this->SequenceColor).SpecifiedColor.field0_0x0._s_0.R;
            local_1ec._s_0.G = (this->SequenceColor).SpecifiedColor.field0_0x0._s_0.G;
            local_1ec._s_0.B = (this->SequenceColor).SpecifiedColor.field0_0x0._s_0.B;
            local_1ec._s_0.A = (this->SequenceColor).SpecifiedColor.field0_0x0._s_0.A;
          }
          param_2 = local_248;
          local_118 = (local_248->AbsolutePosition).field0_0x0;
          local_110 = local_248->Scale;
          local_104 = local_248->Size;
          local_10c = 0;
          local_fc = (local_250->M).M[0];
          afStack_f4 = (local_250->M).M[1];
          local_ec = (local_250->Trans).field0_0x0;
          local_e4 = local_248->bHasRenderTransform * '\x02' | local_e4 & 0xfc;
          FSlateDrawElement::MakeLines
                    (local_240,param_5,(FPaintGeometry *)&local_118._s_0,&local_260,None,
                     (FLinearColor *)&local_1ec._s_0,true,fVar1);
        }
        uVar20 = (ulonglong)(uVar19 + 1);
        FVar18.Data = local_260.AllocatorInstance.Data;
        uVar22 = uVar22 + 0x20;
      } while ((int)(uVar19 + 1) < (this->CachedBinsDrawCoordinates).ArrayNum);
    }
  }
  else {
    if (this->SequenceDrawMode != SequenceLine) goto LAB_14d956578;
    local_270.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_278 = 0;
    local_270.ArrayNum = 0;
    local_270.ArrayMax = 0;
    uVar16 = (ushort)this->NumChannels;
    FVar18.Data = local_270.AllocatorInstance.Data;
    if (uVar16 != 0) {
      do {
        uVar24 = (uint)local_278;
        if ((int)(uint)local_278 < (this->CachedSampleDrawCoordinates).ArrayNum) {
          do {
            uVar19 = 0;
            if ((int)uVar24 < (this->CachedSampleDrawCoordinates).ArrayNum) {
              uVar19 = ~uVar24 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar4 = (code *)swi(3);
              iVar13 = (*pcVar4)();
              return iVar13;
            }
            lVar23 = (longlong)(int)uVar24;
            pFVar25 = (this->CachedSampleDrawCoordinates).AllocatorInstance.Data + lVar23 * 0x10;
            if (((local_270.AllocatorInstance.Data <= pFVar25) &&
                (pFVar25 < local_270.AllocatorInstance.Data + (longlong)local_270.ArrayMax * 0x10))
               && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar12)) {
              pcVar4 = (code *)swi(3);
              iVar13 = (*pcVar4)();
              return iVar13;
            }
            if (local_270.ArrayNum == local_270.ArrayMax) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_270.AllocatorInstance,&local_270.ArrayMax);
              local_270.ArrayNum = iVar13;
            }
            lVar17 = (longlong)local_270.ArrayNum;
            local_270.ArrayNum = local_270.ArrayNum + 1;
            uVar5 = *(undefined8 *)(pFVar25 + 8);
            *(undefined8 *)(local_270.AllocatorInstance.Data + lVar17 * 0x10) =
                 *(undefined8 *)pFVar25;
            *(undefined8 *)(local_270.AllocatorInstance.Data + lVar17 * 0x10 + 8) = uVar5;
            fVar1 = this->SampleMarkersSize;
            uVar19 = 0;
            if ((int)uVar24 < (this->CachedSampleDrawCoordinates).ArrayNum) {
              uVar19 = ~uVar24 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar4 = (code *)swi(3);
              iVar13 = (*pcVar4)();
              return iVar13;
            }
            param_2 = local_248;
            afVar11 = _UNK_15076b188;
            afVar9 = ___xmm_3f80000000000000000000003f800000;
            pFVar25 = (this->CachedSampleDrawCoordinates).AllocatorInstance.Data;
            ___xmm_3f80000000000000000000003f800000 = afVar8[0];
            _UNK_15076b184 = afVar8[1];
            local_1b8.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
            local_1b8.M.M[0][1] = _UNK_15076b184;
            _UNK_15076b188 = afVar10[0];
            _UNK_15076b18c = afVar10[1];
            local_1b8.M.M[1][0] = _UNK_15076b188;
            local_1b8.M.M[1][1] = _UNK_15076b18c;
            local_214 = (local_248->AbsolutePosition).field0_0x0._s_0;
            fVar2 = local_248->Scale;
            local_238 = (float)(*(double *)(pFVar25 + lVar23 * 0x10) - (double)fVar1 * dVar7);
            fStack_234 = (float)(*(double *)(pFVar25 + lVar23 * 0x10 + 8) - (double)fVar1 * dVar7);
            local_230._s_0.Y = fStack_234;
            local_230._s_0.X = local_238;
            local_228 = local_238 * fVar2 + local_214.X;
            fStack_224 = fStack_234 * fVar2 + local_214.Y;
            ___xmm_3f80000000000000000000003f800000 = afVar9;
            _UNK_15076b188 = afVar11;
            local_220 = fVar1;
            fStack_21c = fVar1;
            local_1b8.Trans.field0_0x0 = local_230;
            Concatenate<TTransform2<float>_>(&local_1a0,&local_1b8,local_250);
            local_e0._s_0.Y = fStack_224;
            local_e0._s_0.X = local_228;
            local_cc = CONCAT44(fStack_21c,local_220);
            local_ac = local_248->bHasRenderTransform * '\x02' | local_ac & 0xfc;
            local_d4 = 0;
            local_c4[0] = local_1a0.M.M[0][0];
            local_c4[1] = local_1a0.M.M[0][1];
            afStack_bc[0] = local_1a0.M.M[1][0];
            afStack_bc[1] = local_1a0.M.M[1][1];
            local_b4 = local_1a0.Trans.field0_0x0;
            local_d8 = fVar2;
            if ((this->SequenceColor).ColorUseRule == UseColor_ColorTable) {
              pFVar15 = FSlateColor::GetColorFromTable(&this->SequenceColor);
              local_1dc._s_0.R = (pFVar15->field0_0x0)._s_0.R;
              local_1dc._s_0.G = (pFVar15->field0_0x0)._s_0.G;
              local_1dc._s_0.B = (pFVar15->field0_0x0)._s_0.B;
              local_1dc._s_0.A = (pFVar15->field0_0x0)._s_0.A;
            }
            else {
              local_1dc._s_0.R = (this->SequenceColor).SpecifiedColor.field0_0x0._s_0.R;
              local_1dc._s_0.G = (this->SequenceColor).SpecifiedColor.field0_0x0._s_0.G;
              local_1dc._s_0.B = (this->SequenceColor).SpecifiedColor.field0_0x0._s_0.B;
              local_1dc._s_0.A = (this->SequenceColor).SpecifiedColor.field0_0x0._s_0.A;
            }
            param_4 = local_240;
            FSlateDrawElement::MakeBox
                      (local_240,param_5,(FPaintGeometry *)&local_e0._s_0,&this->BackgroundBrush,
                       None,(FLinearColor *)&local_1dc._s_0);
            uVar24 = uVar24 + uVar16;
          } while ((int)uVar24 < (this->CachedSampleDrawCoordinates).ArrayNum);
        }
        fVar1 = this->SequenceLineThickness;
        if ((this->SequenceColor).ColorUseRule == UseColor_ColorTable) {
          pFVar15 = FSlateColor::GetColorFromTable(&this->SequenceColor);
          local_1cc._s_0.R = (pFVar15->field0_0x0)._s_0.R;
          local_1cc._s_0.G = (pFVar15->field0_0x0)._s_0.G;
          local_1cc._s_0.B = (pFVar15->field0_0x0)._s_0.B;
          local_1cc._s_0.A = (pFVar15->field0_0x0)._s_0.A;
        }
        else {
          local_1cc._s_0.R = (this->SequenceColor).SpecifiedColor.field0_0x0._s_0.R;
          local_1cc._s_0.G = (this->SequenceColor).SpecifiedColor.field0_0x0._s_0.G;
          local_1cc._s_0.B = (this->SequenceColor).SpecifiedColor.field0_0x0._s_0.B;
          local_1cc._s_0.A = (this->SequenceColor).SpecifiedColor.field0_0x0._s_0.A;
        }
        local_a8 = (param_2->AbsolutePosition).field0_0x0;
        local_94 = param_2->Size;
        local_7c = (local_250->Trans).field0_0x0;
        local_a0 = param_2->Scale;
        local_8c = (local_250->M).M[0];
        afStack_84 = (local_250->M).M[1];
        local_9c = 0;
        local_74 = param_2->bHasRenderTransform * '\x02' | local_74 & 0xfc;
        FSlateDrawElement::MakeLines
                  (param_4,param_5,(FPaintGeometry *)&local_a8._s_0,&local_270,None,
                   (FLinearColor *)&local_1cc._s_0,true,fVar1);
        iVar13 = local_270.ArrayMax;
        local_270._8_8_ = local_270._8_8_ & 0xffffffff00000000;
        if (iVar13 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_270.AllocatorInstance,0,&local_270.ArrayMax);
        }
        local_278 = local_278 + 1;
        FVar18.Data = local_270.AllocatorInstance.Data;
      } while (local_278 < uVar16);
    }
  }
  if (FVar18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar18.Data);
  }
LAB_14d956578:
  return param_5 + 1;
}

// OnStyleUpdated @ 14d9583e0

void __thiscall
SFixedSampledSequenceViewer::OnStyleUpdated
          (SFixedSampledSequenceViewer *this,FSampledSequenceViewerStyle *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  
  uVar2 = *(undefined8 *)((longlong)&(param_1->SequenceColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->SequenceColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SequenceColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SequenceColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (param_1->SequenceColor).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->SequenceColor).field_0x12;
  (this->SequenceColor).ColorUseRule = (param_1->SequenceColor).ColorUseRule;
  (this->SequenceColor).ColorTableId = EVar3;
  *(undefined2 *)&(this->SequenceColor).field_0x12 = uVar4;
  uVar2 = *(undefined8 *)((longlong)&(param_1->MajorGridLineColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->MajorGridLineColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->MajorGridLineColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->MajorGridLineColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (param_1->MajorGridLineColor).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->MajorGridLineColor).field_0x12;
  (this->MajorGridLineColor).ColorUseRule = (param_1->MajorGridLineColor).ColorUseRule;
  (this->MajorGridLineColor).ColorTableId = EVar3;
  *(undefined2 *)&(this->MajorGridLineColor).field_0x12 = uVar4;
  uVar2 = *(undefined8 *)((longlong)&(param_1->MinorGridLineColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->MinorGridLineColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->MinorGridLineColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->MinorGridLineColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (param_1->MinorGridLineColor).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->MinorGridLineColor).field_0x12;
  (this->MinorGridLineColor).ColorUseRule = (param_1->MinorGridLineColor).ColorUseRule;
  (this->MinorGridLineColor).ColorTableId = EVar3;
  *(undefined2 *)&(this->MinorGridLineColor).field_0x12 = uVar4;
  uVar2 = *(undefined8 *)((longlong)&(param_1->ZeroCrossingLineColor).SpecifiedColor.field0_0x0 + 8)
  ;
  *(undefined8 *)&(this->ZeroCrossingLineColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->ZeroCrossingLineColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ZeroCrossingLineColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (param_1->ZeroCrossingLineColor).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->ZeroCrossingLineColor).field_0x12;
  (this->ZeroCrossingLineColor).ColorUseRule = (param_1->ZeroCrossingLineColor).ColorUseRule;
  (this->ZeroCrossingLineColor).ColorTableId = EVar3;
  *(undefined2 *)&(this->ZeroCrossingLineColor).field_0x12 = uVar4;
  this->ZeroCrossingLineThickness = param_1->ZeroCrossingLineThickness;
  uVar2 = *(undefined8 *)
           ((longlong)&(param_1->SequenceBackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->BackgroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SequenceBackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->BackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (param_1->SequenceBackgroundColor).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->SequenceBackgroundColor).field_0x12;
  (this->BackgroundColor).ColorUseRule = (param_1->SequenceBackgroundColor).ColorUseRule;
  (this->BackgroundColor).ColorTableId = EVar3;
  *(undefined2 *)&(this->BackgroundColor).field_0x12 = uVar4;
  FSlateBrush::operator=(&this->BackgroundBrush,&param_1->BackgroundBrush);
  this->SampleMarkersSize = param_1->SampleMarkersSize;
  this->SequenceLineThickness = param_1->SequenceLineThickness;
  this->DesiredWidth = param_1->DesiredWidth;
  this->DesiredHeight = param_1->DesiredHeight;
  pTVar1 = (param_1->BackgroundBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (param_1->BackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)param_1);
  return;
}

// SetHideGrid @ 14d969710

void __thiscall
SFixedSampledSequenceViewer::SetHideGrid(SFixedSampledSequenceViewer *this,bool param_1)

{
  this->bHideGrid = param_1;
  return;
}

// Tick @ 14d9761b0

void __thiscall
SFixedSampledSequenceViewer::Tick
          (SFixedSampledSequenceViewer *this,FGeometry *param_1,double param_2,float param_3)

{
  byte bVar1;
  uint uVar2;
  ESequenceDrawMode EVar3;
  uint uVar4;
  float local_res10;
  float fStackX_14;
  FSampledSequenceDrawingParams local_88;
  FSampledSequenceDrawingParams local_68;
  FFixedSampledSequenceGridMetrics local_48;
  
  local_res10 = SUB84(param_1->Size,0);
  uVar4 = (int)ROUND(local_res10 * __real_40000000 - __real_3f000000) >> 1;
  if (uVar4 != 0) {
    if ((uVar4 == this->CachedPixelWidth) && (this->bForceRedraw == false)) {
      fStackX_14 = SUB84(param_1->Size,4);
      if (fStackX_14 != this->CachedPixelHeight) {
        local_88.MinSequenceHeightRatio = (this->DrawingParams).MinSequenceHeightRatio;
        local_88.MinScaledBinValue = (this->DrawingParams).MinScaledBinValue;
        local_88.VerticalZoomFactor = (this->DrawingParams).VerticalZoomFactor;
        local_88.Orientation = (this->DrawingParams).Orientation;
        this->CachedPixelHeight = fStackX_14;
        local_68.MaxDisplayedValue = (this->DrawingParams).MaxDisplayedValue;
        local_68.DimensionSlotMargin = (this->DrawingParams).DimensionSlotMargin;
        local_68.MaxSequenceHeightRatio = (this->DrawingParams).MaxSequenceHeightRatio;
        if (this->SequenceDrawMode == BinnedPeaks) {
          local_88.MaxDisplayedValue = local_68.MaxDisplayedValue;
          local_88._8_8_ = local_68._8_8_;
          SampledSequenceDrawingUtils::GenerateSampleBinsCoordinatesForGeometry
                    (&this->CachedBinsDrawCoordinates,param_1,&this->CachedPeaks,
                     (ushort)this->NumChannels,&local_88);
        }
        else {
          local_48.PixelsPerFrame = (this->GridMetrics).PixelsPerFrame;
          local_48.FirstMajorTickX = (this->GridMetrics).FirstMajorTickX;
          local_48.NumMinorGridDivisions = (this->GridMetrics).NumMinorGridDivisions;
          local_48.SampleRate = (this->GridMetrics).SampleRate;
          local_48.StartFrame = (this->GridMetrics).StartFrame;
          local_48._12_4_ = *(undefined4 *)&(this->GridMetrics).field_0xc;
          local_88.MaxDisplayedValue = (double)(this->SampleData).DataPtr;
          local_88.DimensionSlotMargin = (float)(this->SampleData).ArrayNum;
          local_88.MaxSequenceHeightRatio = *(float *)&(this->SampleData).field_0xc;
          local_48.MajorGridXStep = (this->GridMetrics).MajorGridXStep;
          local_68._16_8_ = local_88._16_8_;
          local_68._24_8_ = local_88._24_8_;
          SampledSequenceDrawingUtils::GenerateSequencedSamplesCoordinatesForGeometry
                    (&this->CachedSampleDrawCoordinates,(TArrayView<float_const_,int> *)&local_88,
                     param_1,(ushort)this->NumChannels,&local_48,&local_68);
        }
      }
    }
    else {
      bVar1 = this->NumChannels;
      this->CachedPixelWidth = uVar4;
      fStackX_14 = SUB84(param_1->Size,4);
      this->CachedPixelHeight = fStackX_14;
      uVar2 = (this->SampleData).ArrayNum;
      EVar3 = (ESequenceDrawMode)((float)(int)uVar2 / (float)bVar1 <= (float)uVar4);
      this->SequenceDrawMode = EVar3;
      if (EVar3 == BinnedPeaks) {
        SampledSequenceDrawingUtils::GroupInterleavedSamplesIntoMinMaxBins<float>
                  (&this->CachedPeaks,uVar4,(this->SampleData).DataPtr,uVar2,(ushort)bVar1,0.0,
                   __real_3ff0000000000000);
        local_68.MaxDisplayedValue = (this->DrawingParams).MaxDisplayedValue;
        local_68.DimensionSlotMargin = (this->DrawingParams).DimensionSlotMargin;
        local_68.MaxSequenceHeightRatio = (this->DrawingParams).MaxSequenceHeightRatio;
        local_68.MinSequenceHeightRatio = (this->DrawingParams).MinSequenceHeightRatio;
        local_68.MinScaledBinValue = (this->DrawingParams).MinScaledBinValue;
        local_68.VerticalZoomFactor = (this->DrawingParams).VerticalZoomFactor;
        local_68.Orientation = (this->DrawingParams).Orientation;
        SampledSequenceDrawingUtils::GenerateSampleBinsCoordinatesForGeometry
                  (&this->CachedBinsDrawCoordinates,param_1,&this->CachedPeaks,
                   (ushort)this->NumChannels,&local_68);
      }
      else {
        local_68.MinSequenceHeightRatio = (this->DrawingParams).MinSequenceHeightRatio;
        local_68.MinScaledBinValue = (this->DrawingParams).MinScaledBinValue;
        local_68.VerticalZoomFactor = (this->DrawingParams).VerticalZoomFactor;
        local_68.Orientation = (this->DrawingParams).Orientation;
        local_68.MaxDisplayedValue = (this->DrawingParams).MaxDisplayedValue;
        local_68.DimensionSlotMargin = (this->DrawingParams).DimensionSlotMargin;
        local_68.MaxSequenceHeightRatio = (this->DrawingParams).MaxSequenceHeightRatio;
        local_48.PixelsPerFrame = (this->GridMetrics).PixelsPerFrame;
        local_48.FirstMajorTickX = (this->GridMetrics).FirstMajorTickX;
        local_48.NumMinorGridDivisions = (this->GridMetrics).NumMinorGridDivisions;
        local_48.SampleRate = (this->GridMetrics).SampleRate;
        local_48.StartFrame = (this->GridMetrics).StartFrame;
        local_48._12_4_ = *(undefined4 *)&(this->GridMetrics).field_0xc;
        local_88.MaxDisplayedValue = (double)(this->SampleData).DataPtr;
        local_88.DimensionSlotMargin = (float)(this->SampleData).ArrayNum;
        local_88.MaxSequenceHeightRatio = *(float *)&(this->SampleData).field_0xc;
        local_48.MajorGridXStep = (this->GridMetrics).MajorGridXStep;
        SampledSequenceDrawingUtils::GenerateSequencedSamplesCoordinatesForGeometry
                  (&this->CachedSampleDrawCoordinates,(TArrayView<float_const_,int> *)&local_88,
                   param_1,(ushort)bVar1,&local_48,&local_68);
      }
      this->bForceRedraw = false;
    }
  }
  return;
}

// UpdateGridMetrics @ 14d9799f0

void __thiscall SFixedSampledSequenceViewer::UpdateGridMetrics(SFixedSampledSequenceViewer *this)

{
  IFixedSampledSequenceGridService *pIVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 local_38 [48];
  
  if ((this->GridService).Object == (IFixedSampledSequenceGridService *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("GridService",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewer.cpp"
                       ,0x10e,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->GridService).Object == (IFixedSampledSequenceGridService *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->GridService).Object;
  puVar7 = (undefined8 *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_38);
  uVar3 = *puVar7;
  uVar4 = puVar7[1];
  (this->GridMetrics).NumMinorGridDivisions = (int)uVar3;
  (this->GridMetrics).SampleRate = (int)((ulonglong)uVar3 >> 0x20);
  *(undefined8 *)&(this->GridMetrics).StartFrame = uVar4;
  dVar5 = (double)puVar7[3];
  (this->GridMetrics).PixelsPerFrame = (double)puVar7[2];
  (this->GridMetrics).FirstMajorTickX = dVar5;
  (this->GridMetrics).MajorGridXStep = (double)puVar7[4];
  return;
}

// UpdateView @ 14d97b6f0

void __thiscall
SFixedSampledSequenceViewer::UpdateView
          (SFixedSampledSequenceViewer *this,TArrayView<float_const_,int> *param_1,uchar param_2)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  
  UpdateGridMetrics(this);
  pfVar1 = param_1->DataPtr;
  iVar2 = param_1->ArrayNum;
  uVar3 = *(undefined4 *)&param_1->field_0xc;
  this->NumChannels = param_2;
  (this->SampleData).DataPtr = pfVar1;
  (this->SampleData).ArrayNum = iVar2;
  *(undefined4 *)&(this->SampleData).field_0xc = uVar3;
  this->bForceRedraw = true;
  return;
}

