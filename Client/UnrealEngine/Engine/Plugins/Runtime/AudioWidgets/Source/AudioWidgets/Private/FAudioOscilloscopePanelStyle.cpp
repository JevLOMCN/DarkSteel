// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 6

// StaticStruct @ 14d890fa0

UScriptStruct * __cdecl FAudioOscilloscopePanelStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAudioOscilloscopePanelStyle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UScriptStruct_FAudioOscilloscopePanelStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle,(UObject *)pUVar1,
                         L"AudioOscilloscopePanelStyle");
  }
  return Z_Registration_Info_UScriptStruct_FAudioOscilloscopePanelStyle.OuterSingleton;
}

// FAudioOscilloscopePanelStyle @ 14d8b0b80

FAudioOscilloscopePanelStyle * __thiscall
FAudioOscilloscopePanelStyle::FAudioOscilloscopePanelStyle
          (FAudioOscilloscopePanelStyle *this,FAudioOscilloscopePanelStyle *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)this = &___7FAudioOscilloscopePanelStyle__6B_;
  FFixedSampleSequenceRulerStyle::FFixedSampleSequenceRulerStyle
            (&this->TimeRulerStyle,&param_1->TimeRulerStyle);
  FSampledSequenceValueGridOverlayStyle::FSampledSequenceValueGridOverlayStyle
            (&this->ValueGridStyle,&param_1->ValueGridStyle);
  FSampledSequenceViewerStyle::FSampledSequenceViewerStyle
            (&this->WaveViewerStyle,&param_1->WaveViewerStyle);
  (this->TriggerThresholdLineStyle)._padding_ = (longlong)&___7FTriggerThresholdLineStyle__6B_;
  uVar1 = *(undefined8 *)((longlong)&(param_1->TriggerThresholdLineStyle).LineColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TriggerThresholdLineStyle).LineColor.field0_0x0 =
       *(undefined8 *)&(param_1->TriggerThresholdLineStyle).LineColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TriggerThresholdLineStyle).LineColor.field0_0x0 + 8) = uVar1;
  return this;
}

// FAudioOscilloscopePanelStyle @ 14d8b0c00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FAudioOscilloscopePanelStyle * __thiscall
FAudioOscilloscopePanelStyle::FAudioOscilloscopePanelStyle(FAudioOscilloscopePanelStyle *this)

{
  FName FVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  FFixedSampleSequenceRulerStyle *pFVar7;
  FName *pFVar8;
  ISlateStyle *pIVar9;
  FSampledSequenceViewerStyle *pFVar10;
  FName local_res8;
  FSlateWidgetStyle local_268;
  undefined8 local_260;
  ulonglong uStack_258;
  undefined1 local_248 [16];
  undefined8 uStack_238;
  undefined4 local_230;
  float local_22c;
  FLinearColor_u_0 local_228;
  undefined4 local_218;
  undefined1 local_210 [96];
  float local_1b0;
  float local_1ac;
  TVector4<double>_u_0 local_188 [3];
  undefined8 local_128;
  FSharedReferencer<1> local_118;
  undefined **local_d8;
  FSharedReferencer<1> local_38;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  *(undefined ***)this = &___7FAudioOscilloscopePanelStyle__6B_;
  FFixedSampleSequenceRulerStyle::FFixedSampleSequenceRulerStyle(&this->TimeRulerStyle);
  FSampledSequenceValueGridOverlayStyle::FSampledSequenceValueGridOverlayStyle
            (&this->ValueGridStyle);
  FSampledSequenceViewerStyle::FSampledSequenceViewerStyle(&this->WaveViewerStyle);
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&this->TriggerThresholdLineStyle);
  (this->TriggerThresholdLineStyle)._padding_ = (longlong)&___7FTriggerThresholdLineStyle__6B_;
  (this->TriggerThresholdLineStyle).LineColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  pFVar7 = FFixedSampleSequenceRulerStyle::FFixedSampleSequenceRulerStyle
                     ((FFixedSampleSequenceRulerStyle *)local_248);
  uVar4 = _UNK_15076b1f8;
  uVar3 = ___xmm_3f8000003f8000003f8000003f800000;
  uVar2 = uStack_258 >> 8;
  uStack_258 = uVar2 << 8;
  *(undefined8 *)&(pFVar7->TicksColor).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f8000003f8000003f800000;
  *(undefined8 *)((longlong)&(pFVar7->TicksColor).SpecifiedColor.field0_0x0 + 8) = uVar4;
  (pFVar7->TicksColor).ColorUseRule = (undefined1)uStack_258;
  (pFVar7->TicksColor).ColorTableId = uStack_258._1_1_;
  *(undefined2 *)&(pFVar7->TicksColor).field_0x12 = uStack_258._2_2_;
  *(undefined8 *)&(pFVar7->TicksTextColor).SpecifiedColor.field0_0x0 = uVar3;
  *(undefined8 *)((longlong)&(pFVar7->TicksTextColor).SpecifiedColor.field0_0x0 + 8) = uVar4;
  uStack_258 = uVar2 << 8;
  (pFVar7->TicksTextColor).ColorUseRule = (undefined1)uStack_258;
  (pFVar7->TicksTextColor).ColorTableId = uStack_258._1_1_;
  *(undefined2 *)&(pFVar7->TicksTextColor).field_0x12 = uStack_258._2_2_;
  *(undefined8 *)&(pFVar7->HandleColor).SpecifiedColor.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(pFVar7->HandleColor).SpecifiedColor.field0_0x0 + 8) = 0;
  uStack_258 = uVar2 << 8;
  uVar2 = uStack_258;
  (pFVar7->HandleColor).ColorUseRule = (undefined1)uStack_258;
  (pFVar7->HandleColor).ColorTableId = uStack_258._1_1_;
  *(undefined2 *)&(pFVar7->HandleColor).field_0x12 = uStack_258._2_2_;
  (pFVar7->TicksTextFont).Size = 10.0;
  uStack_258 = uVar2;
  FFixedSampleSequenceRulerStyle::operator=(&this->TimeRulerStyle,pFVar7);
  local_d8 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.ReferenceController);
  local_228._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_188[0]._0_8_);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_248);
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_248);
  local_230 = local_230 & 0xffffff00;
  local_248._0_8_ = &___7FSampledSequenceValueGridOverlayStyle__6B_;
  local_22c = 1.0;
  stack0xfffffffffffffdc0 = FLinearColor::Black.field0_0x0;
  local_218 = local_218 & 0xffffff00;
  local_228 = FLinearColor::White.field0_0x0;
  pFVar8 = ::FName::FName(&local_res8,"Regular");
  FVar1 = *pFVar8;
  pIVar9 = FAppStyle::Get();
  (**(code **)((longlong)*pIVar9 + 0x88))(pIVar9,local_210,FVar1,0);
  uVar5 = _UNK_152c28a48;
  uVar4 = ___xmm_3f8000003ee2aa9f3ee2aa9f3ee2aa9f;
  uVar3 = _UNK_152c289e8;
  uVar2 = uStack_258 >> 8;
  uStack_258 = uVar2 << 8;
  fVar6 = (float)uStack_258;
  uStack_238 = _UNK_152c289e8;
  local_248._8_8_ = ___xmm_3f0000003d4ccccd3d4ccccd3d4ccccd;
  local_1b0 = 1280.0;
  local_228._8_8_ = _UNK_152c28a48;
  local_228._0_8_ = ___xmm_3f8000003ee2aa9f3ee2aa9f3ee2aa9f;
  local_1ac = 720.0;
  local_230 = (float)uStack_258;
  local_22c = 1.0;
  uStack_258 = uVar2 << 8;
  *(undefined8 *)&(this->ValueGridStyle).GridColor.SpecifiedColor.field0_0x0 =
       ___xmm_3f0000003d4ccccd3d4ccccd3d4ccccd;
  *(undefined8 *)((longlong)&(this->ValueGridStyle).GridColor.SpecifiedColor.field0_0x0 + 8) = uVar3
  ;
  *(float *)&(this->ValueGridStyle).GridColor.ColorUseRule = fVar6;
  *(undefined8 *)&(this->ValueGridStyle).LabelTextColor.SpecifiedColor.field0_0x0 = uVar4;
  *(undefined8 *)((longlong)&(this->ValueGridStyle).LabelTextColor.SpecifiedColor.field0_0x0 + 8) =
       uVar5;
  local_218 = (float)uStack_258;
  local_210._72_4_ = 0x41200000;
  (this->ValueGridStyle).GridThickness = 1.0;
  *(float *)&(this->ValueGridStyle).LabelTextColor.ColorUseRule = (float)uStack_258;
  FSlateFontInfo::operator=(&(this->ValueGridStyle).LabelTextFont,(FSlateFontInfo *)local_210);
  (this->ValueGridStyle).DesiredWidth = local_1b0;
  (this->ValueGridStyle).DesiredHeight = local_1ac;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_210._56_8_);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_248);
  pFVar10 = FSampledSequenceViewerStyle::FSampledSequenceViewerStyle
                      ((FSampledSequenceViewerStyle *)local_248);
  uVar3 = _UNK_152c28a58;
  uVar2 = uStack_258 >> 8;
  uStack_258 = uVar2 << 8;
  *(undefined8 *)&(pFVar10->SequenceColor).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f0ccccd3f8000003dcccccd;
  *(undefined8 *)((longlong)&(pFVar10->SequenceColor).SpecifiedColor.field0_0x0 + 8) = uVar3;
  (pFVar10->SequenceColor).ColorUseRule = (undefined1)uStack_258;
  uVar3 = _UNK_152c28a18;
  (pFVar10->SequenceColor).ColorTableId = uStack_258._1_1_;
  *(undefined2 *)&(pFVar10->SequenceColor).field_0x12 = uStack_258._2_2_;
  *(undefined8 *)&(pFVar10->SequenceBackgroundColor).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003c23d70a3c23d70a3c23d70a;
  *(undefined8 *)((longlong)&(pFVar10->SequenceBackgroundColor).SpecifiedColor.field0_0x0 + 8) =
       uVar3;
  uVar4 = _UNK_1509252c8;
  uVar3 = ___xmm_3f8000003dcccccd3dcccccd3dcccccd;
  uStack_258 = uVar2 << 8;
  (pFVar10->SequenceBackgroundColor).ColorUseRule = (undefined1)uStack_258;
  (pFVar10->SequenceBackgroundColor).ColorTableId = uStack_258._1_1_;
  *(undefined2 *)&(pFVar10->SequenceBackgroundColor).field_0x12 = uStack_258._2_2_;
  pFVar10->SequenceLineThickness = 2.0;
  pFVar10->ZeroCrossingLineThickness = 1.0;
  pFVar10->SampleMarkersSize = 0.0;
  *(undefined8 *)&(pFVar10->MajorGridLineColor).SpecifiedColor.field0_0x0 = uVar3;
  *(undefined8 *)((longlong)&(pFVar10->MajorGridLineColor).SpecifiedColor.field0_0x0 + 8) = uVar4;
  uVar4 = _UNK_152c28a28;
  uVar3 = ___xmm_3f8000003d4ccccd3d4ccccd3d4ccccd;
  uStack_258 = uVar2 << 8;
  (pFVar10->MajorGridLineColor).ColorUseRule = (undefined1)uStack_258;
  (pFVar10->MajorGridLineColor).ColorTableId = uStack_258._1_1_;
  *(undefined2 *)&(pFVar10->MajorGridLineColor).field_0x12 = uStack_258._2_2_;
  *(undefined8 *)&(pFVar10->MinorGridLineColor).SpecifiedColor.field0_0x0 = uVar3;
  *(undefined8 *)((longlong)&(pFVar10->MinorGridLineColor).SpecifiedColor.field0_0x0 + 8) = uVar4;
  uVar4 = _UNK_150be3b28;
  uVar3 = ___xmm_3f8000003e99999a3e99999a3e99999a;
  uStack_258 = uVar2 << 8;
  (pFVar10->MinorGridLineColor).ColorUseRule = (undefined1)uStack_258;
  (pFVar10->MinorGridLineColor).ColorTableId = uStack_258._1_1_;
  *(undefined2 *)&(pFVar10->MinorGridLineColor).field_0x12 = uStack_258._2_2_;
  *(undefined8 *)&(pFVar10->ZeroCrossingLineColor).SpecifiedColor.field0_0x0 = uVar3;
  *(undefined8 *)((longlong)&(pFVar10->ZeroCrossingLineColor).SpecifiedColor.field0_0x0 + 8) = uVar4
  ;
  uStack_258 = uVar2 << 8;
  uVar2 = uStack_258;
  (pFVar10->ZeroCrossingLineColor).ColorUseRule = (undefined1)uStack_258;
  (pFVar10->ZeroCrossingLineColor).ColorTableId = uStack_258._1_1_;
  *(undefined2 *)&(pFVar10->ZeroCrossingLineColor).field_0x12 = uStack_258._2_2_;
  uStack_258 = uVar2;
  FSampledSequenceViewerStyle::operator=(&this->WaveViewerStyle,pFVar10);
  local_210._72_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_128);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_248);
  FSlateWidgetStyle::FSlateWidgetStyle(&local_268);
  uVar3 = _UNK_152c28a38;
  local_260 = ___xmm_3f8000003eae147b3f68f5c33f800000;
  uStack_258 = _UNK_152c28a38;
  local_268 = (FSlateWidgetStyle)&___7FTriggerThresholdLineStyle__6B_;
  *(undefined8 *)&(this->TriggerThresholdLineStyle).LineColor.field0_0x0 =
       ___xmm_3f8000003eae147b3f68f5c33f800000;
  *(undefined8 *)((longlong)&(this->TriggerThresholdLineStyle).LineColor.field0_0x0 + 8) = uVar3;
  FSlateWidgetStyle::~FSlateWidgetStyle(&local_268);
  return this;
}

// ~FAudioOscilloscopePanelStyle @ 14d8be1a0

void __thiscall
FAudioOscilloscopePanelStyle::~FAudioOscilloscopePanelStyle(FAudioOscilloscopePanelStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined ***)this = &___7FAudioOscilloscopePanelStyle__6B_;
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->TriggerThresholdLineStyle);
  pTVar1 = (this->WaveViewerStyle).BackgroundBrush.ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->WaveViewerStyle).BackgroundBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->WaveViewerStyle);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ValueGridStyle).LabelTextFont.CompositeFont.SharedReferenceCount.
             ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->ValueGridStyle);
  pTVar1 = (this->TimeRulerStyle).BackgroundBrush.ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->TimeRulerStyle).BackgroundBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TimeRulerStyle).TicksTextFont.CompositeFont.SharedReferenceCount.
             ReferenceController);
  pTVar1 = (this->TimeRulerStyle).HandleBrush.ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->TimeRulerStyle).HandleBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->TimeRulerStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// operator= @ 14d8c3510

FAudioOscilloscopePanelStyle * __thiscall
FAudioOscilloscopePanelStyle::operator=
          (FAudioOscilloscopePanelStyle *this,FAudioOscilloscopePanelStyle *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  FFixedSampleSequenceRulerStyle::operator=(&this->TimeRulerStyle,&param_1->TimeRulerStyle);
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->ValueGridStyle).GridColor.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ValueGridStyle).GridColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->ValueGridStyle).GridColor.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ValueGridStyle).GridColor.SpecifiedColor.field0_0x0 + 8) = uVar1
  ;
  EVar2 = (param_1->ValueGridStyle).GridColor.ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->ValueGridStyle).GridColor.field_0x12;
  (this->ValueGridStyle).GridColor.ColorUseRule = (param_1->ValueGridStyle).GridColor.ColorUseRule;
  (this->ValueGridStyle).GridColor.ColorTableId = EVar2;
  *(undefined2 *)&(this->ValueGridStyle).GridColor.field_0x12 = uVar3;
  (this->ValueGridStyle).GridThickness = (param_1->ValueGridStyle).GridThickness;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->ValueGridStyle).LabelTextColor.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ValueGridStyle).LabelTextColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->ValueGridStyle).LabelTextColor.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ValueGridStyle).LabelTextColor.SpecifiedColor.field0_0x0 + 8) =
       uVar1;
  EVar2 = (param_1->ValueGridStyle).LabelTextColor.ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->ValueGridStyle).LabelTextColor.field_0x12;
  (this->ValueGridStyle).LabelTextColor.ColorUseRule =
       (param_1->ValueGridStyle).LabelTextColor.ColorUseRule;
  (this->ValueGridStyle).LabelTextColor.ColorTableId = EVar2;
  *(undefined2 *)&(this->ValueGridStyle).LabelTextColor.field_0x12 = uVar3;
  FSlateFontInfo::operator=
            (&(this->ValueGridStyle).LabelTextFont,&(param_1->ValueGridStyle).LabelTextFont);
  (this->ValueGridStyle).DesiredWidth = (param_1->ValueGridStyle).DesiredWidth;
  (this->ValueGridStyle).DesiredHeight = (param_1->ValueGridStyle).DesiredHeight;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->WaveViewerStyle).SequenceColor.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->WaveViewerStyle).SequenceColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->WaveViewerStyle).SequenceColor.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->WaveViewerStyle).SequenceColor.SpecifiedColor.field0_0x0 + 8) =
       uVar1;
  EVar2 = (param_1->WaveViewerStyle).SequenceColor.ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->WaveViewerStyle).SequenceColor.field_0x12;
  (this->WaveViewerStyle).SequenceColor.ColorUseRule =
       (param_1->WaveViewerStyle).SequenceColor.ColorUseRule;
  (this->WaveViewerStyle).SequenceColor.ColorTableId = EVar2;
  *(undefined2 *)&(this->WaveViewerStyle).SequenceColor.field_0x12 = uVar3;
  (this->WaveViewerStyle).SequenceLineThickness = (param_1->WaveViewerStyle).SequenceLineThickness;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->WaveViewerStyle).MajorGridLineColor.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->WaveViewerStyle).MajorGridLineColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->WaveViewerStyle).MajorGridLineColor.SpecifiedColor.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->WaveViewerStyle).MajorGridLineColor.SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->WaveViewerStyle).MajorGridLineColor.ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->WaveViewerStyle).MajorGridLineColor.field_0x12;
  (this->WaveViewerStyle).MajorGridLineColor.ColorUseRule =
       (param_1->WaveViewerStyle).MajorGridLineColor.ColorUseRule;
  (this->WaveViewerStyle).MajorGridLineColor.ColorTableId = EVar2;
  *(undefined2 *)&(this->WaveViewerStyle).MajorGridLineColor.field_0x12 = uVar3;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->WaveViewerStyle).MinorGridLineColor.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->WaveViewerStyle).MinorGridLineColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->WaveViewerStyle).MinorGridLineColor.SpecifiedColor.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->WaveViewerStyle).MinorGridLineColor.SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->WaveViewerStyle).MinorGridLineColor.ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->WaveViewerStyle).MinorGridLineColor.field_0x12;
  (this->WaveViewerStyle).MinorGridLineColor.ColorUseRule =
       (param_1->WaveViewerStyle).MinorGridLineColor.ColorUseRule;
  (this->WaveViewerStyle).MinorGridLineColor.ColorTableId = EVar2;
  *(undefined2 *)&(this->WaveViewerStyle).MinorGridLineColor.field_0x12 = uVar3;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->WaveViewerStyle).ZeroCrossingLineColor.SpecifiedColor.field0_0x0 +
           8);
  *(undefined8 *)&(this->WaveViewerStyle).ZeroCrossingLineColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->WaveViewerStyle).ZeroCrossingLineColor.SpecifiedColor.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->WaveViewerStyle).ZeroCrossingLineColor.SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->WaveViewerStyle).ZeroCrossingLineColor.ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->WaveViewerStyle).ZeroCrossingLineColor.field_0x12;
  (this->WaveViewerStyle).ZeroCrossingLineColor.ColorUseRule =
       (param_1->WaveViewerStyle).ZeroCrossingLineColor.ColorUseRule;
  (this->WaveViewerStyle).ZeroCrossingLineColor.ColorTableId = EVar2;
  *(undefined2 *)&(this->WaveViewerStyle).ZeroCrossingLineColor.field_0x12 = uVar3;
  (this->WaveViewerStyle).ZeroCrossingLineThickness =
       (param_1->WaveViewerStyle).ZeroCrossingLineThickness;
  (this->WaveViewerStyle).SampleMarkersSize = (param_1->WaveViewerStyle).SampleMarkersSize;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->WaveViewerStyle).SequenceBackgroundColor.SpecifiedColor.field0_0x0
           + 8);
  *(undefined8 *)&(this->WaveViewerStyle).SequenceBackgroundColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->WaveViewerStyle).SequenceBackgroundColor.SpecifiedColor.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->WaveViewerStyle).SequenceBackgroundColor.SpecifiedColor.field0_0x0 + 8) =
       uVar1;
  EVar2 = (param_1->WaveViewerStyle).SequenceBackgroundColor.ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->WaveViewerStyle).SequenceBackgroundColor.field_0x12;
  (this->WaveViewerStyle).SequenceBackgroundColor.ColorUseRule =
       (param_1->WaveViewerStyle).SequenceBackgroundColor.ColorUseRule;
  (this->WaveViewerStyle).SequenceBackgroundColor.ColorTableId = EVar2;
  *(undefined2 *)&(this->WaveViewerStyle).SequenceBackgroundColor.field_0x12 = uVar3;
  FSlateBrush::operator=
            (&(this->WaveViewerStyle).BackgroundBrush,&(param_1->WaveViewerStyle).BackgroundBrush);
  (this->WaveViewerStyle).DesiredWidth = (param_1->WaveViewerStyle).DesiredWidth;
  (this->WaveViewerStyle).DesiredHeight = (param_1->WaveViewerStyle).DesiredHeight;
  uVar1 = *(undefined8 *)((longlong)&(param_1->TriggerThresholdLineStyle).LineColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TriggerThresholdLineStyle).LineColor.field0_0x0 =
       *(undefined8 *)&(param_1->TriggerThresholdLineStyle).LineColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TriggerThresholdLineStyle).LineColor.field0_0x0 + 8) = uVar1;
  return this;
}

// GetTypeName @ 14d937470

FName __thiscall FAudioOscilloscopePanelStyle::GetTypeName(FAudioOscilloscopePanelStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

