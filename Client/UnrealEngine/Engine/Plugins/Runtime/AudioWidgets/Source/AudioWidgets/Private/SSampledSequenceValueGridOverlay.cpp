// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 14

// ~SSampledSequenceValueGridOverlay @ 14d8c0ff0

void __thiscall
SSampledSequenceValueGridOverlay::~SSampledSequenceValueGridOverlay
          (SSampledSequenceValueGridOverlay *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  DestructItems<SSampledSequenceValueGridOverlay::FGridLabelData,int>
            ((FGridLabelData *)(this->CachedLabelData).AllocatorInstance.Data,
             (this->CachedLabelData).ArrayNum);
  pFVar1 = (this->CachedLabelData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LabelTextFont).CompositeFont.SharedReferenceCount.ReferenceController);
  DestructItems<SampledSequenceDrawingUtils::FGridData,int>
            ((FGridData *)(this->CachedGridSlotData).AllocatorInstance.Data,
             (this->CachedGridSlotData).ArrayNum);
  pFVar1 = (this->CachedGridSlotData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->OnValueGridLabel != 0) {
    plVar2 = *(longlong **)&(this->OnValueGridLabel).field_0x28;
    plVar3 = (longlong *)&(this->OnValueGridLabel).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  return;
}

// CacheDrawElements @ 14d8e47f0

void __thiscall
SSampledSequenceValueGridOverlay::CacheDrawElements
          (SSampledSequenceValueGridOverlay *this,FGeometry *param_1,uint param_2)

{
  int *piVar1;
  TArray<SampledSequenceDrawingUtils::FGridData,TSizedDefaultAllocator<32>_> *pTVar2;
  ushort uVar3;
  ESampledSequenceDrawOrientation EVar4;
  code *pcVar5;
  bool bVar6;
  ForAnyElementType FVar7;
  TArray<float,TSizedDefaultAllocator<32>_> local_b8;
  TArray<double,TSizedDefaultAllocator<32>_> local_a8;
  TArray<float,TSizedDefaultAllocator<32>_> local_98;
  TArray<double,TSizedDefaultAllocator<32>_> local_88;
  FDimensionSlot local_78;
  FDimensionSlot local_68;
  FSampledSequenceDrawingParams local_58;
  FSampledSequenceDrawingParams local_38;
  
  if (this->GridSplitMode == EvenSplit) {
    local_38.MaxDisplayedValue = (this->DrawingParams).MaxDisplayedValue;
    local_38.DimensionSlotMargin = (this->DrawingParams).DimensionSlotMargin;
    local_38.MaxSequenceHeightRatio = (this->DrawingParams).MaxSequenceHeightRatio;
    uVar3 = (ushort)this->NumDimensions;
    pTVar2 = &this->CachedGridSlotData;
    local_38.MinSequenceHeightRatio = (this->DrawingParams).MinSequenceHeightRatio;
    local_38.MinScaledBinValue = (this->DrawingParams).MinScaledBinValue;
    local_38.VerticalZoomFactor = (this->DrawingParams).VerticalZoomFactor;
    local_38.Orientation = (this->DrawingParams).Orientation;
    if (uVar3 == 0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4579968050018648220>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SampledSequenceDrawingUtils.cpp"
                         ,0x9c,"NDimensions != 0");
      if (bVar6) {
code_r0x00014d8e49a1:
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_14d8e4a60;
    }
    DestructItems<SampledSequenceDrawingUtils::FGridData,int>
              ((FGridData *)(pTVar2->AllocatorInstance).Data,(this->CachedGridSlotData).ArrayNum);
    piVar1 = &(this->CachedGridSlotData).ArrayMax;
    (this->CachedGridSlotData).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    SampledSequenceDrawingUtils::FDimensionSlot::FDimensionSlot(&local_68,0,uVar3,param_1,&local_38)
    ;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    SampledSequenceDrawingUtils::GenerateEvenlySplitGridForLine
              (&local_88,&local_98,local_68.Height,param_2,true);
    SampledSequenceDrawingUtilsPrivate::GenerateGridDataFromMidPoints
              (uVar3,param_1,&local_38,&local_88,&local_98,pTVar2);
    FVar7.Data = local_88.AllocatorInstance.Data;
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
      FVar7.Data = local_88.AllocatorInstance.Data;
    }
  }
  else {
    if (this->GridSplitMode != MidSplit) goto LAB_14d8e4a60;
    local_58.MaxDisplayedValue = (this->DrawingParams).MaxDisplayedValue;
    local_58.DimensionSlotMargin = (this->DrawingParams).DimensionSlotMargin;
    local_58.MaxSequenceHeightRatio = (this->DrawingParams).MaxSequenceHeightRatio;
    uVar3 = (ushort)this->NumDimensions;
    pTVar2 = &this->CachedGridSlotData;
    local_58.MinSequenceHeightRatio = (this->DrawingParams).MinSequenceHeightRatio;
    local_58.MinScaledBinValue = (this->DrawingParams).MinScaledBinValue;
    local_58.VerticalZoomFactor = (this->DrawingParams).VerticalZoomFactor;
    local_58.Orientation = (this->DrawingParams).Orientation;
    if (uVar3 == 0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4579968050018648237>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SampledSequenceDrawingUtils.cpp"
                         ,0xad,"NDimensions != 0");
      if (bVar6) goto code_r0x00014d8e49a1;
      goto LAB_14d8e4a60;
    }
    DestructItems<SampledSequenceDrawingUtils::FGridData,int>
              ((FGridData *)(pTVar2->AllocatorInstance).Data,(this->CachedGridSlotData).ArrayNum);
    piVar1 = &(this->CachedGridSlotData).ArrayMax;
    (this->CachedGridSlotData).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    SampledSequenceDrawingUtils::FDimensionSlot::FDimensionSlot(&local_78,0,uVar3,param_1,&local_58)
    ;
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0;
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    SampledSequenceDrawingUtils::GenerateMidpointSplitGridForLine
              (&local_a8,&local_b8,local_78.Height,param_2,true);
    SampledSequenceDrawingUtilsPrivate::GenerateGridDataFromMidPoints
              (uVar3,param_1,&local_58,&local_a8,&local_b8,pTVar2);
    FVar7.Data = local_a8.AllocatorInstance.Data;
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
      FVar7.Data = local_a8.AllocatorInstance.Data;
    }
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
LAB_14d8e4a60:
  if (this->bHideLabels == false) {
    EVar4 = (this->DrawingParams).Orientation;
    if (EVar4 == Horizontal) {
      GenerateHorizontalGridLabels(this,param_2,param_1);
    }
    else if (EVar4 == Vertical) {
      GenerateVerticalGridLabels(this,param_2,param_1);
    }
  }
  return;
}

// ComputeDesiredSize @ 14d8e6130

TVector2<double> * __thiscall
SSampledSequenceValueGridOverlay::ComputeDesiredSize
          (SSampledSequenceValueGridOverlay *this,TVector2<double> *__return_storage_ptr__,
          float param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = this->DesiredWidth;
  uVar2 = this->DesiredHeight;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(float)uVar2;
  return __return_storage_ptr__;
}

// Construct @ 14d8eed20

void __thiscall
SSampledSequenceValueGridOverlay::Construct
          (SSampledSequenceValueGridOverlay *this,FArguments *param_1)

{
  FSampledSequenceValueGridOverlayStyle *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  ESampledSequenceDrawOrientation EVar6;
  EStyleColor EVar7;
  undefined2 uVar8;
  bool bVar9;
  TFunction<FText___cdecl(double)> *pTVar10;
  
  if (param_1->_Style == (FSampledSequenceValueGridOverlayStyle *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InArgs._Style",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SSampledSequenceValueGridOverlay.cpp"
                       ,0x13,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->GridSplitMode = param_1->_DivideMode;
  this->MaxDivisionParameter = param_1->_MaxDivisionParameter;
  pTVar10 = &SampledSequenceValueGridOverlayPrivate::DefaultLabelGenerator;
  if (*(longlong *)&param_1->_ValueGridLabelGenerator != 0) {
    pTVar10 = &param_1->_ValueGridLabelGenerator;
  }
  TFunction<FText___cdecl(double)>::operator=(&this->OnValueGridLabel,pTVar10);
  this->NumDimensions = param_1->_NumDimensions;
  fVar4 = (param_1->_SequenceDrawingParams).DimensionSlotMargin;
  fVar5 = (param_1->_SequenceDrawingParams).MaxSequenceHeightRatio;
  (this->DrawingParams).MaxDisplayedValue = (param_1->_SequenceDrawingParams).MaxDisplayedValue;
  (this->DrawingParams).DimensionSlotMargin = fVar4;
  (this->DrawingParams).MaxSequenceHeightRatio = fVar5;
  fVar4 = (param_1->_SequenceDrawingParams).MinScaledBinValue;
  fVar5 = (param_1->_SequenceDrawingParams).VerticalZoomFactor;
  EVar6 = (param_1->_SequenceDrawingParams).Orientation;
  (this->DrawingParams).MinSequenceHeightRatio =
       (param_1->_SequenceDrawingParams).MinSequenceHeightRatio;
  (this->DrawingParams).MinScaledBinValue = fVar4;
  (this->DrawingParams).VerticalZoomFactor = fVar5;
  (this->DrawingParams).Orientation = EVar6;
  this->bHideLabels = param_1->_HideLabels;
  this->bHideGrid = param_1->_HideGrid;
  pFVar1 = param_1->_Style;
  uVar3 = *(undefined8 *)((longlong)&(pFVar1->GridColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->GridColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar1->GridColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->GridColor).SpecifiedColor.field0_0x0 + 8) = uVar3;
  EVar7 = (pFVar1->GridColor).ColorTableId;
  uVar8 = *(undefined2 *)&(pFVar1->GridColor).field_0x12;
  (this->GridColor).ColorUseRule = (pFVar1->GridColor).ColorUseRule;
  (this->GridColor).ColorTableId = EVar7;
  *(undefined2 *)&(this->GridColor).field_0x12 = uVar8;
  FSlateFontInfo::operator=(&this->LabelTextFont,&param_1->_Style->LabelTextFont);
  pFVar1 = param_1->_Style;
  uVar3 = *(undefined8 *)((longlong)&(pFVar1->LabelTextColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->LabelTextColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar1->LabelTextColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->LabelTextColor).SpecifiedColor.field0_0x0 + 8) = uVar3;
  EVar7 = (pFVar1->LabelTextColor).ColorTableId;
  uVar8 = *(undefined2 *)&(pFVar1->LabelTextColor).field_0x12;
  (this->LabelTextColor).ColorUseRule = (pFVar1->LabelTextColor).ColorUseRule;
  (this->LabelTextColor).ColorTableId = EVar7;
  *(undefined2 *)&(this->LabelTextColor).field_0x12 = uVar8;
  this->DesiredWidth = param_1->_Style->DesiredWidth;
  this->DesiredHeight = param_1->_Style->DesiredHeight;
  this->GridThickness = param_1->_Style->GridThickness;
  return;
}

// ForceRedraw @ 14d9252c0

void __thiscall
SSampledSequenceValueGridOverlay::ForceRedraw(SSampledSequenceValueGridOverlay *this)

{
  this->bForceRedraw = true;
  return;
}

// GenerateHorizontalGridLabels @ 14d926500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
SSampledSequenceValueGridOverlay::GenerateHorizontalGridLabels
          (SSampledSequenceValueGridOverlay *this,uint param_1,FGeometry *param_2)

{
  double dVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  ForAnyElementType FVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  FSlateApplication *pFVar17;
  undefined8 uVar18;
  FDeprecateSlateVector2D FVar19;
  ulonglong uVar20;
  longlong *plVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  int *piVar27;
  ulonglong uVar28;
  float in_XMM3_Da;
  uint local_res20;
  FGridLabelData local_118;
  longlong local_f8;
  TObjectPtr<UObject_const_>_u_0 local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [8];
  TObjectPtr<UObject>_u_0 local_d8;
  FSlateFontInfo *local_d0;
  int *local_c8;
  TSharedRef<FSlateFontMeasure,1> local_c0;
  FText local_b0 [7];
  
  DestructItems<SSampledSequenceValueGridOverlay::FGridLabelData,int>
            ((FGridLabelData *)(this->CachedLabelData).AllocatorInstance.Data,
             (this->CachedLabelData).ArrayNum);
  uVar25 = 0;
  piVar27 = &(this->CachedLabelData).ArrayMax;
  (this->CachedLabelData).ArrayNum = 0;
  local_c8 = piVar27;
  if (*piVar27 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->CachedLabelData).AllocatorInstance,0,piVar27);
  }
  pFVar17 = FSlateApplication::Get();
  lVar26 = *(longlong *)&pFVar17->field_0x60;
  if ((*(longlong *)(lVar26 + 8) == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar26 + 8),&local_c0);
  fVar12 = __real_3f000000;
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_res20 = 0;
  uVar20 = uVar25;
  uVar28 = uVar25;
  if (0 < (this->CachedGridSlotData).ArrayNum) {
    do {
      uVar23 = (uint)uVar20;
      local_118.LabelTexts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.LabelTexts.ArrayNum = 0;
      local_118.LabelTexts.ArrayMax = 0;
      local_118.LabelCoordinates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar15 = 0;
      if ((int)uVar23 < (this->CachedGridSlotData).ArrayNum) {
        uVar15 = ~uVar23 >> 0x1f;
      }
      local_118.LabelCoordinates.ArrayNum = 0;
      local_118.LabelCoordinates.ArrayMax = 0;
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->CachedGridSlotData).AllocatorInstance.Data;
      local_f8 = 0;
      if (0 < *(int *)(pFVar3 + uVar28 + 8)) {
        local_d0 = &this->LabelTextFont;
        lVar26 = 0x28;
        uVar20 = uVar25;
        do {
          uVar22 = (uint)uVar20;
          uVar23 = 0;
          uVar15 = uVar23;
          if ((int)uVar22 < *(int *)(pFVar3 + uVar28 + 0x18)) {
            uVar15 = ~uVar22 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_d8 = (TObjectPtr<UObject>_u_0)
                     (double)*(float *)(*(longlong *)(pFVar3 + uVar28 + 0x10) + local_f8 * 4);
          UE::Core::Private::Function::CheckCallable(*(void **)&this->OnValueGridLabel);
          pcVar4 = *(code **)&this->OnValueGridLabel;
          plVar21 = *(longlong **)&(this->OnValueGridLabel).field_0x28;
          if (plVar21 == (longlong *)0x0) {
            plVar21 = (longlong *)&(this->OnValueGridLabel).field_0x10;
          }
          uVar18 = (**(code **)(*plVar21 + 8))();
          (*pcVar4)(&local_f0,uVar18,&local_d8);
          FVar19 = FSlateFontMeasure::Measure
                             (local_c0.Object,local_b0,(FSlateFontInfo *)&local_f0.ObjectPtr,
                              in_XMM3_Da);
          uVar15 = uVar23;
          if ((int)uVar22 < *(int *)(pFVar3 + uVar28 + 8)) {
            uVar15 = ~uVar22 >> 0x1f;
          }
          dVar8 = (double)*(float *)((longlong)FVar19 + 4);
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar24 = *(longlong *)(pFVar3 + uVar28);
          uVar15 = uVar23;
          if ((int)uVar22 < *(int *)(pFVar3 + uVar28 + 0x18)) {
            uVar15 = ~uVar22 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          dVar1 = *(double *)(lVar24 + -0x20 + lVar26);
          dVar7 = (double)this->LabelToGridPixelDistance;
          if (fVar12 < *(float *)(*(longlong *)(pFVar3 + uVar28 + 0x10) + local_f8 * 4)) {
            dVar1 = (dVar1 - dVar8) - dVar7;
          }
          else {
            dVar1 = dVar1 + dVar7;
          }
          iVar16 = *(int *)(pFVar3 + uVar28 + 8);
          dVar2 = *(double *)(lVar24 + -0x28 + lVar26);
          if (1 < iVar16) {
            uVar15 = uVar22 - 1;
            lVar9 = lVar26 + -0x40;
            if (uVar22 != iVar16 - 1U) {
              uVar15 = uVar22 + 1;
              lVar9 = lVar26;
            }
            if ((int)uVar15 < iVar16) {
              uVar23 = ~uVar15 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            dVar6 = *(double *)(lVar24 + -0x20 + lVar26) -
                    *(double *)(*(longlong *)(pFVar3 + uVar28) + lVar9);
            if (((double)(float)(double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & uVar11,
                                                 SUB84(dVar6,0) & uVar10) < dVar8 + dVar8) &&
               (param_1 != 0)) {
              uVar20 = (longlong)(int)this->MaxDivisionParameter;
              if ((longlong)(ulonglong)(param_1 - 1) < (longlong)(int)this->MaxDivisionParameter) {
                uVar20 = (ulonglong)(param_1 - 1);
              }
              if (0 < (longlong)uVar20) {
                uVar25 = uVar20;
              }
              CacheDrawElements(this,param_2,(uint)(longlong)(float)(longlong)uVar25);
              if (local_f0.DebugPtr != (UObject *)0x0) {
                (**(code **)(*(longlong *)local_f0.DebugPtr + 0x10))();
              }
              if (local_118.LabelCoordinates.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_118.LabelCoordinates.AllocatorInstance.Data);
              }
              DestructItems<FText,int>
                        ((FText *)local_118.LabelTexts.AllocatorInstance.Data,
                         local_118.LabelTexts.ArrayNum);
              if ((FText *)local_118.LabelTexts.AllocatorInstance.Data != (FText *)0x0) {
                FMemory::Free(local_118.LabelTexts.AllocatorInstance.Data);
              }
              goto LAB_14d926aff;
            }
          }
          iVar16 = local_118.LabelTexts.ArrayNum;
          if (local_118.LabelTexts.ArrayNum == local_118.LabelTexts.ArrayMax) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,(ForAnyElementType *)&local_118,&local_118.LabelTexts.ArrayMax
                               );
          }
          FVar13.Data = local_118.LabelTexts.AllocatorInstance.Data;
          local_118.LabelTexts.ArrayNum = iVar16 + 1;
          lVar24 = (longlong)iVar16;
          *(undefined8 *)&local_118.LabelTexts.AllocatorInstance.Data[lVar24 * 0x10].field_0x0 = 0;
          ((TObjectPtr<UObject_const_>_u_0 *)
          (local_118.LabelTexts.AllocatorInstance.Data + lVar24 * 0x10))->DebugPtr =
               (UObject *)local_f0;
          if (local_f0.DebugPtr != (UObject *)0x0) {
            (**(code **)(*(longlong *)local_f0.DebugPtr + 8))(local_f0.DebugPtr,local_e0);
          }
          *(undefined4 *)(FVar13.Data + lVar24 * 0x10 + 8) = local_e8;
          iVar16 = local_118.LabelCoordinates.ArrayNum;
          if (local_118.LabelCoordinates.ArrayNum == local_118.LabelCoordinates.ArrayMax) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_118.LabelCoordinates.AllocatorInstance,
                                &local_118.LabelCoordinates.ArrayMax);
          }
          local_118.LabelCoordinates.ArrayNum = iVar16 + 1;
          auVar5._8_4_ = SUB84((double)(float)dVar1,0);
          auVar5._0_8_ = dVar7 + dVar2;
          auVar5._12_4_ = (int)((ulonglong)(double)(float)dVar1 >> 0x20);
          *(undefined1 (*) [16])
           (local_118.LabelCoordinates.AllocatorInstance.Data + (longlong)iVar16 * 0x10) = auVar5;
          if (local_f0.DebugPtr != (UObject *)0x0) {
            (**(code **)(*(longlong *)local_f0.DebugPtr + 0x10))();
          }
          local_f8 = local_f8 + 1;
          uVar20 = (ulonglong)(uVar22 + 1);
          lVar26 = lVar26 + 0x20;
          piVar27 = local_c8;
          uVar23 = local_res20;
        } while ((int)(uVar22 + 1) < *(int *)(pFVar3 + uVar28 + 8));
      }
      iVar16 = (this->CachedLabelData).ArrayNum;
      if (iVar16 == *piVar27) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&(this->CachedLabelData).AllocatorInstance,piVar27);
      }
      (this->CachedLabelData).ArrayNum = iVar16 + 1;
      FGridLabelData::FGridLabelData
                ((FGridLabelData *)
                 ((this->CachedLabelData).AllocatorInstance.Data + (longlong)iVar16 * 0x20),
                 &local_118);
      if (local_118.LabelCoordinates.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.LabelCoordinates.AllocatorInstance.Data);
      }
      DestructItems<FText,int>
                ((FText *)local_118.LabelTexts.AllocatorInstance.Data,local_118.LabelTexts.ArrayNum)
      ;
      if ((FText *)local_118.LabelTexts.AllocatorInstance.Data != (FText *)0x0) {
        FMemory::Free(local_118.LabelTexts.AllocatorInstance.Data);
      }
      local_res20 = uVar23 + 1;
      uVar20 = (ulonglong)local_res20;
      uVar28 = uVar28 + 0x20;
    } while ((int)local_res20 < (this->CachedGridSlotData).ArrayNum);
  }
LAB_14d926aff:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  return;
}

// GenerateVerticalGridLabels @ 14d929080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
SSampledSequenceValueGridOverlay::GenerateVerticalGridLabels
          (SSampledSequenceValueGridOverlay *this,uint param_1,FGeometry *param_2)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  FSlateApplication *pFVar16;
  undefined8 uVar17;
  FDeprecateSlateVector2D FVar18;
  ulonglong uVar19;
  longlong *plVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  int *piVar26;
  ulonglong uVar27;
  float in_XMM3_Da;
  uint local_res20;
  FGridLabelData local_118;
  longlong local_f8;
  TObjectPtr<UObject_const_>_u_0 local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [8];
  TObjectPtr<UObject>_u_0 local_d8;
  FSlateFontInfo *local_d0;
  int *local_c8;
  TSharedRef<FSlateFontMeasure,1> local_c0;
  FText local_b0 [7];
  
  DestructItems<SSampledSequenceValueGridOverlay::FGridLabelData,int>
            ((FGridLabelData *)(this->CachedLabelData).AllocatorInstance.Data,
             (this->CachedLabelData).ArrayNum);
  uVar24 = 0;
  piVar26 = &(this->CachedLabelData).ArrayMax;
  (this->CachedLabelData).ArrayNum = 0;
  local_c8 = piVar26;
  if (*piVar26 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->CachedLabelData).AllocatorInstance,0,piVar26);
  }
  pFVar16 = FSlateApplication::Get();
  lVar25 = *(longlong *)&pFVar16->field_0x60;
  if ((*(longlong *)(lVar25 + 8) == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar25 + 8),&local_c0);
  fVar11 = __real_3f000000;
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_res20 = 0;
  uVar19 = uVar24;
  uVar27 = uVar24;
  if (0 < (this->CachedGridSlotData).ArrayNum) {
    do {
      uVar22 = (uint)uVar19;
      local_118.LabelTexts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.LabelTexts.ArrayNum = 0;
      local_118.LabelTexts.ArrayMax = 0;
      local_118.LabelCoordinates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar14 = 0;
      if ((int)uVar22 < (this->CachedGridSlotData).ArrayNum) {
        uVar14 = ~uVar22 >> 0x1f;
      }
      local_118.LabelCoordinates.ArrayNum = 0;
      local_118.LabelCoordinates.ArrayMax = 0;
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->CachedGridSlotData).AllocatorInstance.Data;
      local_f8 = 0;
      if (0 < *(int *)(pFVar2 + uVar27 + 8)) {
        local_d0 = &this->LabelTextFont;
        lVar25 = 0x20;
        uVar19 = uVar24;
        do {
          uVar21 = (uint)uVar19;
          uVar22 = 0;
          uVar14 = uVar22;
          if ((int)uVar21 < *(int *)(pFVar2 + uVar27 + 0x18)) {
            uVar14 = ~uVar21 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_d8 = (TObjectPtr<UObject>_u_0)
                     (double)*(float *)(*(longlong *)(pFVar2 + uVar27 + 0x10) + local_f8 * 4);
          UE::Core::Private::Function::CheckCallable(*(void **)&this->OnValueGridLabel);
          pcVar3 = *(code **)&this->OnValueGridLabel;
          plVar20 = *(longlong **)&(this->OnValueGridLabel).field_0x28;
          if (plVar20 == (longlong *)0x0) {
            plVar20 = (longlong *)&(this->OnValueGridLabel).field_0x10;
          }
          uVar17 = (**(code **)(*plVar20 + 8))();
          (*pcVar3)(&local_f0,uVar17,&local_d8);
          FVar18 = FSlateFontMeasure::Measure
                             (local_c0.Object,local_b0,(FSlateFontInfo *)&local_f0.ObjectPtr,
                              in_XMM3_Da);
          uVar14 = uVar22;
          if ((int)uVar21 < *(int *)(pFVar2 + uVar27 + 8)) {
            uVar14 = ~uVar21 >> 0x1f;
          }
          dVar7 = (double)*(float *)((longlong)FVar18 + 4);
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar23 = *(longlong *)(pFVar2 + uVar27);
          uVar14 = uVar22;
          if ((int)uVar21 < *(int *)(pFVar2 + uVar27 + 0x18)) {
            uVar14 = ~uVar21 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          dVar1 = *(double *)(lVar23 + -0x20 + lVar25);
          dVar6 = (double)this->LabelToGridPixelDistance;
          if (fVar11 < *(float *)(*(longlong *)(pFVar2 + uVar27 + 0x10) + local_f8 * 4)) {
            dVar1 = dVar1 - dVar6;
          }
          else {
            dVar1 = dVar6 + dVar1 + dVar7;
          }
          iVar15 = *(int *)(pFVar2 + uVar27 + 8);
          dVar6 = dVar6 + *(double *)(lVar23 + -0x18 + lVar25);
          if (1 < iVar15) {
            uVar14 = uVar21 - 1;
            lVar8 = lVar25 + -0x40;
            if (uVar21 != iVar15 - 1U) {
              uVar14 = uVar21 + 1;
              lVar8 = lVar25;
            }
            if ((int)uVar14 < iVar15) {
              uVar22 = ~uVar14 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            dVar5 = *(double *)(lVar23 + -0x20 + lVar25) -
                    *(double *)(*(longlong *)(pFVar2 + uVar27) + lVar8);
            if (((double)(float)(double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar10,
                                                 SUB84(dVar5,0) & uVar9) < dVar7 + dVar7) &&
               (param_1 != 0)) {
              uVar19 = (longlong)(int)this->MaxDivisionParameter;
              if ((longlong)(ulonglong)(param_1 - 1) < (longlong)(int)this->MaxDivisionParameter) {
                uVar19 = (ulonglong)(param_1 - 1);
              }
              if (0 < (longlong)uVar19) {
                uVar24 = uVar19;
              }
              CacheDrawElements(this,param_2,(uint)(longlong)(float)(longlong)uVar24);
              if (local_f0.DebugPtr != (UObject *)0x0) {
                (**(code **)(*(longlong *)local_f0.DebugPtr + 0x10))();
              }
              if (local_118.LabelCoordinates.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_118.LabelCoordinates.AllocatorInstance.Data);
              }
              DestructItems<FText,int>
                        ((FText *)local_118.LabelTexts.AllocatorInstance.Data,
                         local_118.LabelTexts.ArrayNum);
              if ((FText *)local_118.LabelTexts.AllocatorInstance.Data != (FText *)0x0) {
                FMemory::Free(local_118.LabelTexts.AllocatorInstance.Data);
              }
              goto LAB_14d929685;
            }
          }
          iVar15 = local_118.LabelTexts.ArrayNum;
          if (local_118.LabelTexts.ArrayNum == local_118.LabelTexts.ArrayMax) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,(ForAnyElementType *)&local_118,&local_118.LabelTexts.ArrayMax
                               );
          }
          FVar12.Data = local_118.LabelTexts.AllocatorInstance.Data;
          local_118.LabelTexts.ArrayNum = iVar15 + 1;
          lVar23 = (longlong)iVar15;
          *(undefined8 *)&local_118.LabelTexts.AllocatorInstance.Data[lVar23 * 0x10].field_0x0 = 0;
          ((TObjectPtr<UObject_const_>_u_0 *)
          (local_118.LabelTexts.AllocatorInstance.Data + lVar23 * 0x10))->DebugPtr =
               (UObject *)local_f0;
          if (local_f0.DebugPtr != (UObject *)0x0) {
            (**(code **)(*(longlong *)local_f0.DebugPtr + 8))(local_f0.DebugPtr,local_e0);
          }
          *(undefined4 *)(FVar12.Data + lVar23 * 0x10 + 8) = local_e8;
          iVar15 = local_118.LabelCoordinates.ArrayNum;
          if (local_118.LabelCoordinates.ArrayNum == local_118.LabelCoordinates.ArrayMax) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_118.LabelCoordinates.AllocatorInstance,
                                &local_118.LabelCoordinates.ArrayMax);
          }
          local_118.LabelCoordinates.ArrayNum = iVar15 + 1;
          auVar4._8_4_ = SUB84(dVar6,0);
          auVar4._0_8_ = (double)(float)dVar1;
          auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
          *(undefined1 (*) [16])
           (local_118.LabelCoordinates.AllocatorInstance.Data + (longlong)iVar15 * 0x10) = auVar4;
          if (local_f0.DebugPtr != (UObject *)0x0) {
            (**(code **)(*(longlong *)local_f0.DebugPtr + 0x10))();
          }
          local_f8 = local_f8 + 1;
          uVar19 = (ulonglong)(uVar21 + 1);
          lVar25 = lVar25 + 0x20;
          piVar26 = local_c8;
          uVar22 = local_res20;
        } while ((int)(uVar21 + 1) < *(int *)(pFVar2 + uVar27 + 8));
      }
      iVar15 = (this->CachedLabelData).ArrayNum;
      if (iVar15 == *piVar26) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&(this->CachedLabelData).AllocatorInstance,piVar26);
      }
      (this->CachedLabelData).ArrayNum = iVar15 + 1;
      FGridLabelData::FGridLabelData
                ((FGridLabelData *)
                 ((this->CachedLabelData).AllocatorInstance.Data + (longlong)iVar15 * 0x20),
                 &local_118);
      if (local_118.LabelCoordinates.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.LabelCoordinates.AllocatorInstance.Data);
      }
      DestructItems<FText,int>
                ((FText *)local_118.LabelTexts.AllocatorInstance.Data,local_118.LabelTexts.ArrayNum)
      ;
      if ((FText *)local_118.LabelTexts.AllocatorInstance.Data != (FText *)0x0) {
        FMemory::Free(local_118.LabelTexts.AllocatorInstance.Data);
      }
      local_res20 = uVar22 + 1;
      uVar19 = (ulonglong)local_res20;
      uVar27 = uVar27 + 0x20;
    } while ((int)local_res20 < (this->CachedGridSlotData).ArrayNum);
  }
LAB_14d929685:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  return;
}

// OnPaint @ 14d956790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
SSampledSequenceValueGridOverlay::OnPaint
          (SSampledSequenceValueGridOverlay *this,FPaintArgs *param_1,FGeometry *param_2,
          FSlateRect *param_3,FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,
          bool param_7)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  FName FVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  TVector2<float>_u_0 TVar9;
  TVector2<float>_u_0 TVar10;
  uint uVar11;
  float afVar12 [2];
  float afVar13 [2];
  float afVar14 [2];
  float afVar15 [2];
  float fVar16;
  float fVar17;
  FGeometry *pFVar18;
  FSlateFontMeasure *this_00;
  bool bVar19;
  int iVar20;
  uint uVar21;
  FSlateApplication *pFVar22;
  FName *pFVar23;
  ISlateStyle *pIVar24;
  FDeprecateSlateVector2D FVar25;
  FLinearColor *pFVar26;
  FString *pFVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  longlong lVar30;
  longlong lVar31;
  uint uVar32;
  uint extraout_XMM0_Da;
  float in_XMM3_Da;
  undefined1 auStackY_368 [32];
  uint local_328;
  longlong local_310;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_300;
  uint local_2f0;
  undefined8 local_2ec;
  undefined4 local_2e4;
  undefined4 uStack_2e0;
  float local_2dc;
  float fStack_2d8;
  float local_2d4;
  float fStack_2d0;
  float local_2cc;
  float fStack_2c8;
  FScriptContainerElement *local_2c0;
  FGeometry *local_2b8;
  FSlateWindowElementList *local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  float local_298;
  float fStack_294;
  float local_290;
  TVector2<float>_u_0 local_28c;
  TTransform2<float> local_284;
  byte local_26c;
  undefined8 local_258;
  FScriptContainerElement *local_250;
  TVector2<float>_u_0_s_0 local_244;
  FLinearColor_u_0 local_23c;
  FLinearColor_u_0 local_22c;
  TSharedRef<FSlateFontMeasure,1> local_218;
  TTransform2<float> local_208;
  FName local_1f0;
  FText local_1e8;
  undefined8 local_1d0;
  TTransform2<float> local_1c8;
  TTransform2<float> local_1b0;
  undefined1 local_198 [56];
  TReferenceControllerBase<1> *local_160;
  TVector2<float>_u_0 local_138;
  float local_130;
  undefined8 local_12c;
  undefined8 local_124;
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
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_368;
  local_2b0 = param_4;
  if ((this->bHideGrid == false) || (this->bHideLabels == false)) {
    local_300.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_300.ArrayNum = 0;
    local_300.ArrayMax = 0;
    local_2b8 = param_2;
    TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_300,2,Default);
    pFVar22 = FSlateApplication::Get();
    lVar30 = *(longlong *)&pFVar22->field_0x60;
    if ((*(longlong *)(lVar30 + 8) == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar6 = (code *)swi(3);
      iVar20 = (*pcVar6)();
      return iVar20;
    }
    FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar30 + 8),&local_218);
    afVar14 = _UNK_15076b188;
    afVar12 = ___xmm_3f80000000000000000000003f800000;
    uVar11 = __xmm_80000000800000008000000080000000;
    local_328 = 0;
    if (0 < (this->CachedGridSlotData).ArrayNum) {
      lVar30 = 0;
      do {
        local_2f0 = ~local_328 >> 0x1f;
        uVar28 = 0;
        if ((int)local_328 < (this->CachedGridSlotData).ArrayNum) {
          uVar28 = local_2f0;
        }
        if ((uVar28 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar6 = (code *)swi(3);
          iVar20 = (*pcVar6)();
          return iVar20;
        }
        pFVar29 = (this->CachedGridSlotData).AllocatorInstance.Data;
        uVar28 = 0;
        iVar20 = *(int *)(pFVar29 + lVar30 + 8);
        local_250 = pFVar29;
        if (0 < iVar20) {
          local_310 = 0;
          local_2a8 = 0;
          do {
            lVar31 = local_2a8;
            uVar32 = ~uVar28 >> 0x1f;
            uVar21 = 0;
            if ((int)uVar28 < iVar20) {
              uVar21 = uVar32;
            }
            if ((uVar21 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar6 = (code *)swi(3);
              iVar20 = (*pcVar6)();
              return iVar20;
            }
            uVar7 = *(undefined8 *)(*(longlong *)(pFVar29 + lVar30) + local_310);
            uVar8 = ((undefined8 *)(*(longlong *)(pFVar29 + lVar30) + local_310))[1];
            if ((local_300.ArrayNum < 1) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar6 = (code *)swi(3);
              iVar20 = (*pcVar6)();
              return iVar20;
            }
            *(undefined8 *)local_300.AllocatorInstance.Data = uVar7;
            *(undefined8 *)(local_300.AllocatorInstance.Data + 8) = uVar8;
            uVar21 = 0;
            if ((int)uVar28 < *(int *)(pFVar29 + lVar30 + 8)) {
              uVar21 = uVar32;
            }
            if ((uVar21 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar6 = (code *)swi(3);
              iVar20 = (*pcVar6)();
              return iVar20;
            }
            puVar1 = (undefined8 *)(*(longlong *)(pFVar29 + lVar30) + 0x10 + local_310);
            uVar7 = *puVar1;
            uVar8 = puVar1[1];
            if ((local_300.ArrayNum < 2) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar6 = (code *)swi(3);
              iVar20 = (*pcVar6)();
              return iVar20;
            }
            *(undefined8 *)(local_300.AllocatorInstance.Data + 0x10) = uVar7;
            *(undefined8 *)(local_300.AllocatorInstance.Data + 0x18) = uVar8;
            if (this->bHideLabels == false) {
              uVar21 = 0;
              if ((int)local_328 < (this->CachedLabelData).ArrayNum) {
                uVar21 = local_2f0;
              }
              if ((uVar21 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar6 = (code *)swi(3);
                iVar20 = (*pcVar6)();
                return iVar20;
              }
              this_00 = local_218.Object;
              pFVar29 = (this->CachedLabelData).AllocatorInstance.Data;
              local_2c0 = pFVar29;
              pFVar23 = ::FName::FName(&local_1f0,"Regular");
              FVar5 = *pFVar23;
              pIVar24 = FAppStyle::Get();
              (**(code **)((longlong)*pIVar24 + 0x88))(pIVar24,local_198,FVar5,0);
              uVar21 = 0;
              if ((int)uVar28 < *(int *)(pFVar29 + lVar30 + 8)) {
                uVar21 = uVar32;
              }
              if ((uVar21 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar6 = (code *)swi(3);
                iVar20 = (*pcVar6)();
                return iVar20;
              }
              FVar25 = FSlateFontMeasure::Measure
                                 (this_00,&local_1e8,
                                  (FSlateFontInfo *)(*(longlong *)(pFVar29 + lVar30) + lVar31),
                                  in_XMM3_Da);
              uVar2 = *(undefined4 *)FVar25;
              uVar3 = *(undefined4 *)((longlong)FVar25 + 4);
              uVar7 = *(undefined8 *)FVar25;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_160);
              uVar21 = 0;
              if ((int)uVar28 < *(int *)(pFVar29 + lVar30 + 0x18)) {
                uVar21 = uVar32;
              }
              if ((uVar21 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar6 = (code *)swi(3);
                iVar20 = (*pcVar6)();
                return iVar20;
              }
              local_2d4 = (float)*(double *)(*(longlong *)(pFVar29 + lVar30 + 0x10) + lVar31);
              fStack_2d0 = (float)*(double *)(*(longlong *)(pFVar29 + lVar30 + 0x10) + 8 + lVar31);
              local_2ec = 0;
              __libm_sse2_sincosf_();
              pFVar18 = local_2b8;
              fVar17 = fStack_2d0;
              fVar16 = local_2d4;
              afVar15 = _UNK_15076b188;
              afVar13 = ___xmm_3f80000000000000000000003f800000;
              TVar9._s_0.Y = fStack_2d0;
              TVar9._s_0.X = local_2d4;
              local_258 = local_2ec;
              uVar8 = local_258;
              local_244 = (local_2b8->AbsolutePosition).field0_0x0._s_0;
              local_258._0_4_ = (float)local_2ec;
              in_XMM3_Da = (float)(extraout_XMM0_Da ^ uVar11);
              local_2dc = (float)local_258;
              local_298 = 1.0;
              fStack_294 = 0.0;
              local_290 = 0.0;
              fVar4 = local_2b8->Scale;
              local_258._4_4_ = (float)((ulonglong)local_2ec >> 0x20);
              fStack_2d8 = local_258._4_4_;
              local_28c = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
              local_1d0 = local_2ec;
              local_208.Trans.field0_0x0._s_0.X = (float)local_258;
              local_208.Trans.field0_0x0._s_0.Y = local_258._4_4_;
              ___xmm_3f80000000000000000000003f800000 = afVar12[0];
              _UNK_15076b184 = afVar12[1];
              local_1c8.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
              local_1c8.M.M[0][1] = _UNK_15076b184;
              _UNK_15076b188 = afVar14[0];
              _UNK_15076b18c = afVar14[1];
              local_1c8.M.M[1][0] = _UNK_15076b188;
              local_1c8.M.M[1][1] = _UNK_15076b18c;
              ___xmm_3f80000000000000000000003f800000 = afVar13;
              _UNK_15076b188 = afVar15;
              local_2e4 = uVar2;
              uStack_2e0 = uVar3;
              local_2a0 = uVar7;
              local_258 = uVar8;
              local_208.M.M[1][0] = in_XMM3_Da;
              local_1c8.Trans.field0_0x0 = TVar9;
              Concatenate<TTransform2<float>_>(&local_1b0,&local_208,&local_1c8);
              Concatenate<TTransform2<float>_>
                        (&local_284,&local_1b0,&pFVar18->AccumulatedRenderTransform);
              local_26c = local_26c | 1;
              local_2cc = fVar16 * fVar4 + local_244.X;
              fStack_2c8 = fVar17 * fVar4 + local_244.Y;
              TVar10._s_0.Y = fStack_2c8;
              TVar10._s_0.X = local_2cc;
              local_298 = fVar4;
              fStack_294 = local_2cc;
              local_290 = fStack_2c8;
              local_28c = TVar9;
              if ((this->LabelTextColor).ColorUseRule == UseColor_ColorTable) {
                pFVar26 = FSlateColor::GetColorFromTable(&this->LabelTextColor);
                local_23c._s_0.R = (pFVar26->field0_0x0)._s_0.R;
                local_23c._s_0.G = (pFVar26->field0_0x0)._s_0.G;
                local_23c._s_0.B = (pFVar26->field0_0x0)._s_0.B;
                local_23c._s_0.A = (pFVar26->field0_0x0)._s_0.A;
              }
              else {
                local_23c._s_0.R = (this->LabelTextColor).SpecifiedColor.field0_0x0._s_0.R;
                local_23c._s_0.G = (this->LabelTextColor).SpecifiedColor.field0_0x0._s_0.G;
                local_23c._s_0.B = (this->LabelTextColor).SpecifiedColor.field0_0x0._s_0.B;
                local_23c._s_0.A = (this->LabelTextColor).SpecifiedColor.field0_0x0._s_0.A;
              }
              uVar21 = 0;
              if ((int)uVar28 < *(int *)(local_2c0 + lVar30 + 8)) {
                uVar21 = uVar32;
              }
              if ((uVar21 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar6 = (code *)swi(3);
                iVar20 = (*pcVar6)();
                return iVar20;
              }
              lVar31 = local_2a8;
              local_124 = local_2a0;
              local_104 = local_104 & 0xfc | 2;
              local_12c = 0;
              local_10c = local_284.Trans.field0_0x0;
              local_11c[0] = local_284.M.M[0][0];
              local_11c[1] = local_284.M.M[0][1];
              afStack_114[0] = local_284.M.M[1][0];
              afStack_114[1] = local_284.M.M[1][1];
              local_138 = TVar10;
              local_130 = fVar4;
              pFVar27 = FText::ToString((FText *)(*(longlong *)(local_2c0 + lVar30) + local_2a8));
              FSlateDrawElement::MakeText
                        (local_2b0,param_5,(FPaintGeometry *)&local_138._s_0,pFVar27,
                         &this->LabelTextFont,None,(FLinearColor *)&local_23c._s_0);
              param_2 = local_2b8;
              pFVar29 = local_250;
            }
            if (this->bHideGrid == false) {
              fVar4 = this->GridThickness;
              if ((this->GridColor).ColorUseRule == UseColor_ColorTable) {
                pFVar26 = FSlateColor::GetColorFromTable(&this->GridColor);
                local_22c._s_0.R = (pFVar26->field0_0x0)._s_0.R;
                local_22c._s_0.G = (pFVar26->field0_0x0)._s_0.G;
                local_22c._s_0.B = (pFVar26->field0_0x0)._s_0.B;
                local_22c._s_0.A = (pFVar26->field0_0x0)._s_0.A;
              }
              else {
                local_22c._s_0.R = (this->GridColor).SpecifiedColor.field0_0x0._s_0.R;
                local_22c._s_0.G = (this->GridColor).SpecifiedColor.field0_0x0._s_0.G;
                local_22c._s_0.B = (this->GridColor).SpecifiedColor.field0_0x0._s_0.B;
                local_22c._s_0.A = (this->GridColor).SpecifiedColor.field0_0x0._s_0.A;
              }
              local_100 = (param_2->AbsolutePosition).field0_0x0;
              local_d4 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
              local_ec = param_2->Size;
              local_cc = param_2->bHasRenderTransform * '\x02' | local_cc & 0xfc;
              local_f8 = param_2->Scale;
              local_e4 = (param_2->AccumulatedRenderTransform).M.M[0];
              afStack_dc = (param_2->AccumulatedRenderTransform).M.M[1];
              local_f4 = 0;
              FSlateDrawElement::MakeLines
                        (local_2b0,param_5,(FPaintGeometry *)&local_100._s_0,&local_300,None,
                         (FLinearColor *)&local_22c._s_0,false,fVar4);
            }
            local_2a8 = lVar31 + 0x10;
            local_310 = local_310 + 0x20;
            uVar28 = uVar28 + 1;
            iVar20 = *(int *)(pFVar29 + lVar30 + 8);
          } while ((int)uVar28 < iVar20);
        }
        local_328 = local_328 + 1;
        lVar30 = lVar30 + 0x20;
      } while ((int)local_328 < (this->CachedGridSlotData).ArrayNum);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_218.SharedReferenceCount.ReferenceController);
    if (local_300.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.AllocatorInstance.Data);
    }
    param_5 = param_5 + 1;
  }
  return param_5;
}

// OnStyleUpdated @ 14d958520

void __thiscall
SSampledSequenceValueGridOverlay::OnStyleUpdated
          (SSampledSequenceValueGridOverlay *this,FSampledSequenceValueGridOverlayStyle *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined8 *)((longlong)&(param_1->GridColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->GridColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->GridColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->GridColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->GridColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->GridColor).field_0x12;
  (this->GridColor).ColorUseRule = (param_1->GridColor).ColorUseRule;
  (this->GridColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->GridColor).field_0x12 = uVar3;
  FSlateFontInfo::operator=(&this->LabelTextFont,&param_1->LabelTextFont);
  uVar1 = *(undefined8 *)((longlong)&(param_1->LabelTextColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->LabelTextColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->LabelTextColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->LabelTextColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->LabelTextColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->LabelTextColor).field_0x12;
  (this->LabelTextColor).ColorUseRule = (param_1->LabelTextColor).ColorUseRule;
  (this->LabelTextColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->LabelTextColor).field_0x12 = uVar3;
  this->DesiredWidth = param_1->DesiredWidth;
  this->DesiredHeight = param_1->DesiredHeight;
  this->GridThickness = param_1->GridThickness;
  this->bForceRedraw = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->LabelTextFont).CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)param_1);
  return;
}

// SetHideGrid @ 14d969720

void __thiscall
SSampledSequenceValueGridOverlay::SetHideGrid(SSampledSequenceValueGridOverlay *this,bool param_1)

{
  this->bHideGrid = param_1;
  this->bForceRedraw = true;
  return;
}

// SetHideLabels @ 14d969740

void __thiscall
SSampledSequenceValueGridOverlay::SetHideLabels(SSampledSequenceValueGridOverlay *this,bool param_1)

{
  this->bHideLabels = param_1;
  this->bForceRedraw = true;
  return;
}

// SetLabelGenerator @ 14d969be0

void __thiscall
SSampledSequenceValueGridOverlay::SetLabelGenerator
          (SSampledSequenceValueGridOverlay *this,TFunction<FText___cdecl(double)> *param_1)

{
  longlong *plVar1;
  
  TFunction<FText___cdecl(double)>::operator=(&this->OnValueGridLabel,param_1);
  this->bForceRedraw = true;
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// SetMaxDivisionParameter @ 14d969e30

void __thiscall
SSampledSequenceValueGridOverlay::SetMaxDivisionParameter
          (SSampledSequenceValueGridOverlay *this,uint param_1)

{
  this->MaxDivisionParameter = param_1;
  this->bForceRedraw = true;
  return;
}

// Tick @ 14d976500

void __thiscall
SSampledSequenceValueGridOverlay::Tick
          (SSampledSequenceValueGridOverlay *this,FGeometry *param_1,double param_2,float param_3)

{
  float local_res8;
  float fStackX_c;
  
  local_res8 = SUB84(param_1->Size,0);
  fStackX_c = SUB84(param_1->Size,4);
  if (((local_res8 != (float)(this->CachedLocalSize).field0_0x0._s_0.X) ||
      (fStackX_c != (float)(this->CachedLocalSize).field0_0x0._s_0.Y)) ||
     (this->bForceRedraw != false)) {
    (this->CachedLocalSize).field0_0x0._s_0.X = (double)local_res8;
    (this->CachedLocalSize).field0_0x0._s_0.Y = (double)fStackX_c;
    CacheDrawElements(this,param_1,this->MaxDivisionParameter);
    this->bForceRedraw = false;
  }
  return;
}

