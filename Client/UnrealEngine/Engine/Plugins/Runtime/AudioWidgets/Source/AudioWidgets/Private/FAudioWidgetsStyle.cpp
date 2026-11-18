// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 5

// FAudioWidgetsStyle @ 14d8b48e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FAudioWidgetsStyle * __thiscall FAudioWidgetsStyle::FAudioWidgetsStyle(FAudioWidgetsStyle *this)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  FName FVar4;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar5;
  FSlateBoxBrush *this_00;
  UClass *pUVar6;
  UObject *pUVar7;
  FSlateBoxBrush *pFVar8;
  FSlateBrush *pFVar9;
  FName *pFVar10;
  FSliderStyle *pFVar11;
  FAudioSliderStyle *pFVar12;
  FAudioTextBoxStyle *pFVar13;
  FAudioRadialSliderStyle *pFVar14;
  FSampledSequenceViewerStyle *pFVar15;
  FFixedSampleSequenceRulerStyle *pFVar16;
  ISlateStyle *pIVar17;
  FAudioMaterialKnobStyle *pFVar18;
  FAudioMaterialMeterStyle *pFVar19;
  FAudioMaterialSliderStyle *pFVar20;
  FAudioMeterDefaultColorStyle *pFVar21;
  FAudioMeterStyle *pFVar22;
  FAudioOscilloscopePanelStyle *pFVar23;
  FAudioSpectrumPlotStyle *pFVar24;
  FAudioVectorscopePanelStyle *pFVar25;
  FSampledSequenceVectorViewerStyle *pFVar26;
  TVector2<float>_u_0 local_res8;
  TVector2<float>_u_0 local_res10;
  TVector2<float>_u_0 local_res18;
  TVector2<float>_u_0 local_res20;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_12b8;
  TStringView<wchar_t> local_12a8;
  undefined1 local_1298 [8];
  FLinearColor_u_0 FStack_1290;
  undefined1 auStack_1280 [16];
  FLinearColor_u_0 FStack_1270;
  FLinearColor_u_0 FStack_1260;
  FLinearColor_u_0 local_1250;
  FLinearColor_u_0 local_1240;
  FLinearColor_u_0 local_1230;
  FLinearColor_u_0 local_1220;
  float local_1200;
  float local_11fc;
  TReferenceControllerBase<1> *local_11f8;
  TVector2<double>_u_0 local_11e8;
  FLinearColor_u_0 local_11d8 [2];
  undefined1 local_11b8 [16];
  undefined1 local_11a8 [96];
  FSlateWidgetStyle local_1148;
  undefined1 local_1140 [8];
  FLinearColor_u_0 local_1138 [3];
  FLinearColor_u_0 local_1108;
  undefined **local_10f8;
  undefined1 auStack_10f0 [24];
  FSlateWidgetStyle local_10d8 [2];
  undefined **local_10c8;
  undefined8 local_10b0;
  undefined8 local_1098;
  TVector4<double>_u_0 local_1088 [2];
  TVector2<float>_u_0 local_1048;
  FSharedReferencer<1> local_1028;
  FSharedReferencer<1> local_fa8;
  undefined **local_f98;
  TReferenceControllerBase<1> *local_ef8;
  undefined **local_ee8;
  TReferenceControllerBase<1> *local_e48;
  TReferenceControllerBase<1> *local_db0;
  undefined **local_d88 [20];
  TReferenceControllerBase<1> *local_ce8;
  FSlateBrush local_cd8;
  undefined **local_c28 [20];
  TReferenceControllerBase<1> *local_b88;
  FSlateBrush local_b78;
  undefined1 local_ac8 [1104];
  FSlateWidgetStyle local_678 [2];
  undefined **local_668;
  FSharedReferencer<1> local_5c8;
  undefined **local_598;
  FSharedReferencer<1> local_4f8;
  FSliderStyle local_478;
  
  local_478._1080_8_ = 0x14d8b48fd;
  FSlateStyleSet::FSlateStyleSet((FSlateStyleSet *)this,&StyleName);
  *(undefined ***)this = &___7FAudioWidgetsStyle__6B_;
  FVar4 = FAppStyle::GetAppStyleSetName();
  FSlateStyleSet::SetParentStyleName((FSlateStyleSet *)this,(FName *)FVar4);
  pTVar5 = &FPaths::EnginePluginsDir((FString *)&local_12a8)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_12b8,pTVar5,0x1e - (uint)(pTVar5->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_12b8,L"Runtime/AudioWidgets/Content",0x1c);
  FSlateStyleSet::SetContentRoot((FSlateStyleSet *)this,(FString *)&local_12b8);
  if (local_12b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_12b8.AllocatorInstance.Data);
  }
  if (local_12a8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_12a8.DataPtr);
  }
  pTVar5 = &FPaths::EngineContentDir((FString *)&local_12a8)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_12b8,pTVar5,0xe - (uint)(pTVar5->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_12b8,L"Editor/Slate",0xc);
  FSlateStyleSet::SetCoreContentRoot((FSlateStyleSet *)this,(FString *)&local_12b8);
  if (local_12b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_12b8.AllocatorInstance.Data);
  }
  if (local_12a8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_12a8.DataPtr);
  }
  this_00 = ::operator_new(0xb0);
  pFVar8 = (FSlateBoxBrush *)0x0;
  if (this_00 != (FSlateBoxBrush *)0x0) {
    local_1298 = (undefined1  [8])___xmm_3f8000003f8000003f8000003f800000;
    local_12a8.DataPtr = L"/AudioWidgets/Resources/ScrubHandleDown_Clamped.ScrubHandleDown_Clamped";
    local_11e8._s_0.X = ___xmm_3f1555553eec4ec53e8000003eec4ec5;
    local_11e8._s_0.Y = _UNK_152c289f8;
    FStack_1290._8_1_ = 0;
    FStack_1290._0_8_ = _UNK_15076b1f8;
    local_12b8.ArrayNum = 0;
    local_12b8.ArrayMax = 0;
    local_12b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_12a8.Size = 0x47;
    pUVar6 = Z_Construct_UClass_UTexture2D_NoRegister();
    pUVar7 = StaticLoadObject(pUVar6,(UObject *)0x0,&local_12a8,(TStringView<wchar_t> *)&local_12b8,
                              0,(UPackageMap *)0x0,true,(FLinkerInstancingContext *)0x0);
    pFVar8 = FSlateBoxBrush::FSlateBoxBrush
                       (this_00,pUVar7,(FMargin *)&local_11e8._s_0,(FSlateColor *)local_1298,
                        FullColor);
  }
  FLazyName::Resolve(&AudioWidgetsStylePrivate::ScrubHandleBrushName);
  FSlateStyleSet::Set<FSlateBoxBrush>((FSlateStyleSet *)this,(FName)local_res8._s_0,pFVar8);
  SetupStyles(this);
  if (FStyleColors::Recessed.ColorUseRule == UseColor_ColorTable) {
    FSlateColor::GetColorFromTable(&FStyleColors::Recessed);
  }
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_11b8);
  local_11b8._0_8_ = &___7FAudioTextBoxStyle__6B_;
  local_res8 = (TVector2<float>_u_0)0x41e0000042600000;
  pFVar9 = (FSlateBrush *)
           FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                     ((FSlateRoundedBoxBrush *)local_1298,&FStyleColors::White,__real_40800000,
                      (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)local_11a8,pFVar9);
  local_1298 = (undefined1  [8])&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_11f8);
  _local_10f8 = (undefined1  [16])FStyleColors::Recessed.SpecifiedColor.field0_0x0;
  auStack_10f0[8] = FStyleColors::Recessed.ColorUseRule;
  auStack_10f0[9] = FStyleColors::Recessed.ColorTableId;
  auStack_10f0._10_2_ = FStyleColors::Recessed._18_2_;
  local_res10 = (TVector2<float>_u_0)0x41e0000042800000;
  pFVar9 = (FSlateBrush *)
           FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                     ((FSlateRoundedBoxBrush *)local_d88,&FStyleColors::White,__real_40800000,
                      (FDeprecateVector2DParameter *)&local_res10._s_0);
  FSlateBrush::operator=((FSlateBrush *)local_11a8,pFVar9);
  pFVar10 = ::FName::FName((FName *)&local_res18._s_0,"AudioTextBox.Style");
  FSlateStyleSet::Set<FAudioTextBoxStyle>
            ((FSlateStyleSet *)this,*pFVar10,(FAudioTextBoxStyle *)local_11b8);
  local_d88[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_ce8);
  local_11b8._0_8_ = &___7FAudioTextBoxStyle__6B_;
  local_11a8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1108._0_8_);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_11b8);
  local_11d8[1]._0_1_ = FStyleColors::White.ColorUseRule;
  local_11d8[1]._1_1_ = FStyleColors::White.ColorTableId;
  local_11d8[1]._2_2_ = FStyleColors::White._18_2_;
  local_11d8[0] = FStyleColors::White.SpecifiedColor.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x41b0000041b00000;
  FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,double>
            ((FSlateRoundedBoxBrush *)&local_cd8,(FSlateColor *)&local_11d8[0]._s_0,
             __real_4026000000000000,(FDeprecateVector2DParameter *)&local_res8._s_0);
  local_res8 = (TVector2<float>_u_0)0x43f0800042800000;
  FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
            ((FSlateRoundedBoxBrush *)&local_b78,&FStyleColors::White,__real_40800000,
             (FDeprecateVector2DParameter *)&local_res8._s_0);
  pFVar11 = FSliderStyle::FSliderStyle(&local_478);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar9 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_11b8,(FDeprecateVector2DParameter *)&local_res8._s_0
                     );
  FSlateBrush::operator=(&pFVar11->NormalBarImage,pFVar9);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar9 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_c28,(FDeprecateVector2DParameter *)&local_res10._s_0
                     );
  FSlateBrush::operator=(&pFVar11->HoveredBarImage,pFVar9);
  local_res18 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar9 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_1298,
                      (FDeprecateVector2DParameter *)&local_res18._s_0);
  FSlateBrush::operator=(&pFVar11->DisabledBarImage,pFVar9);
  FSlateBrush::operator=(&pFVar11->NormalThumbImage,&local_cd8);
  FSlateBrush::operator=(&pFVar11->HoveredThumbImage,&local_cd8);
  local_res20 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar9 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_d88,(FDeprecateVector2DParameter *)&local_res20._s_0
                     );
  FSlateBrush::operator=(&pFVar11->DisabledThumbImage,pFVar9);
  pFVar10 = ::FName::FName((FName *)&local_12b8,"AudioSlider.Slider");
  FSlateStyleSet::Set<FSliderStyle>((FSlateStyleSet *)this,*pFVar10,pFVar11);
  local_d88[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_ce8);
  local_1298 = (undefined1  [8])&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_11f8);
  local_c28[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b88);
  local_11b8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1138[2]._0_8_);
  FSliderStyle::~FSliderStyle(&local_478);
  pFVar12 = FAudioSliderStyle::FAudioSliderStyle((FAudioSliderStyle *)local_ac8);
  pFVar11 = FSliderStyle::FSliderStyle(&local_478);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar9 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_1298,(FDeprecateVector2DParameter *)&local_res8._s_0
                     );
  FSlateBrush::operator=(&pFVar11->NormalBarImage,pFVar9);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar9 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_d88,(FDeprecateVector2DParameter *)&local_res10._s_0
                     );
  FSlateBrush::operator=(&pFVar11->HoveredBarImage,pFVar9);
  local_res18 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar9 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_c28,(FDeprecateVector2DParameter *)&local_res18._s_0
                     );
  FSlateBrush::operator=(&pFVar11->DisabledBarImage,pFVar9);
  FSlateBrush::operator=(&pFVar11->NormalThumbImage,&local_cd8);
  FSlateBrush::operator=(&pFVar11->HoveredThumbImage,&local_cd8);
  local_res20 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar9 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_11b8,
                      (FDeprecateVector2DParameter *)&local_res20._s_0);
  FSlateBrush::operator=(&pFVar11->DisabledThumbImage,pFVar9);
  FSliderStyle::operator=(&pFVar12->SliderStyle,pFVar11);
  pFVar13 = FAudioTextBoxStyle::GetDefault();
  FSlateBrush::operator=(&(pFVar12->TextBoxStyle).BackgroundImage,&pFVar13->BackgroundImage);
  uVar1 = *(undefined8 *)((longlong)&(pFVar13->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(pFVar12->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar13->BackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(pFVar12->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 + 8)
       = uVar1;
  EVar2 = (pFVar13->BackgroundColor).ColorTableId;
  uVar3 = *(undefined2 *)&(pFVar13->BackgroundColor).field_0x12;
  (pFVar12->TextBoxStyle).BackgroundColor.ColorUseRule = (pFVar13->BackgroundColor).ColorUseRule;
  (pFVar12->TextBoxStyle).BackgroundColor.ColorTableId = EVar2;
  *(undefined2 *)&(pFVar12->TextBoxStyle).BackgroundColor.field_0x12 = uVar3;
  FSlateBrush::operator=(&pFVar12->WidgetBackgroundImage,&local_b78);
  (pFVar12->SliderBackgroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Recessed.SpecifiedColor.field0_0x0;
  EVar2 = FStyleColors::Recessed.ColorTableId;
  uVar3 = FStyleColors::Recessed._18_2_;
  (pFVar12->SliderBackgroundColor).ColorUseRule = FStyleColors::Recessed.ColorUseRule;
  (pFVar12->SliderBackgroundColor).ColorTableId = EVar2;
  *(undefined2 *)&(pFVar12->SliderBackgroundColor).field_0x12 = uVar3;
  (pFVar12->SliderBarColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Black.SpecifiedColor.field0_0x0;
  EVar2 = FStyleColors::Black.ColorTableId;
  uVar3 = FStyleColors::Black._18_2_;
  (pFVar12->SliderBarColor).ColorUseRule = FStyleColors::Black.ColorUseRule;
  (pFVar12->SliderBarColor).ColorTableId = EVar2;
  *(undefined2 *)&(pFVar12->SliderBarColor).field_0x12 = uVar3;
  *(undefined8 *)&(pFVar12->SliderThumbColor).SpecifiedColor.field0_0x0 = local_11d8[0]._0_8_;
  *(undefined8 *)((longlong)&(pFVar12->SliderThumbColor).SpecifiedColor.field0_0x0 + 8) =
       local_11d8[0]._8_8_;
  (pFVar12->SliderThumbColor).ColorUseRule = local_11d8[1]._0_1_;
  (pFVar12->SliderThumbColor).ColorTableId = local_11d8[1]._1_1_;
  *(undefined2 *)&(pFVar12->SliderThumbColor).field_0x12 = local_11d8[1]._2_2_;
  (pFVar12->SliderBackgroundSize).field0_0x0._s_0.X = 28.0;
  (pFVar12->SliderBackgroundSize).field0_0x0._s_0.Y = 450.0;
  (pFVar12->WidgetBackgroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Transparent.SpecifiedColor.field0_0x0;
  EVar2 = FStyleColors::Transparent.ColorTableId;
  uVar3 = FStyleColors::Transparent._18_2_;
  (pFVar12->WidgetBackgroundColor).ColorUseRule = FStyleColors::Transparent.ColorUseRule;
  (pFVar12->WidgetBackgroundColor).ColorTableId = EVar2;
  *(undefined2 *)&(pFVar12->WidgetBackgroundColor).field_0x12 = uVar3;
  pFVar12->LabelPadding = 3.0;
  pFVar10 = ::FName::FName((FName *)&local_12b8,"AudioSlider.Style");
  FSlateStyleSet::Set<FAudioSliderStyle>((FSlateStyleSet *)this,*pFVar10,pFVar12);
  local_11b8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1138[2]._0_8_);
  local_c28[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b88);
  local_d88[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_ce8);
  local_1298 = (undefined1  [8])&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_11f8);
  FSliderStyle::~FSliderStyle(&local_478);
  local_ac8._0_8_ = &___7FAudioSliderStyle__6B_;
  local_598 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4f8.ReferenceController);
  local_678[0] = (FSlateWidgetStyle)&___7FAudioTextBoxStyle__6B_;
  local_668 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5c8.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle(local_678);
  FSliderStyle::~FSliderStyle((FSliderStyle *)(local_ac8 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_ac8);
  local_11e8._s_0.X = ___xmm_40544000000000004049000000000000;
  local_11e8._s_0.Y = _UNK_152c28a98;
  pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"AudioRadialSlider.DesiredWidgetSize");
  FSlateStyleSet::Set((FSlateStyleSet *)this,*pFVar10,(TVector2<double> *)&local_11e8._s_0);
  pFVar14 = FAudioRadialSliderStyle::FAudioRadialSliderStyle((FAudioRadialSliderStyle *)local_11b8);
  pFVar13 = FAudioTextBoxStyle::GetDefault();
  FSlateBrush::operator=(&(pFVar14->TextBoxStyle).BackgroundImage,&pFVar13->BackgroundImage);
  uVar1 = *(undefined8 *)((longlong)&(pFVar13->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(pFVar14->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar13->BackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(pFVar14->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 + 8)
       = uVar1;
  EVar2 = (pFVar13->BackgroundColor).ColorTableId;
  uVar3 = *(undefined2 *)&(pFVar13->BackgroundColor).field_0x12;
  (pFVar14->TextBoxStyle).BackgroundColor.ColorUseRule = (pFVar13->BackgroundColor).ColorUseRule;
  (pFVar14->TextBoxStyle).BackgroundColor.ColorTableId = EVar2;
  *(undefined2 *)&(pFVar14->TextBoxStyle).BackgroundColor.field_0x12 = uVar3;
  (pFVar14->CenterBackgroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Recessed.SpecifiedColor.field0_0x0;
  EVar2 = FStyleColors::Recessed.ColorTableId;
  uVar3 = FStyleColors::Recessed._18_2_;
  (pFVar14->CenterBackgroundColor).ColorUseRule = FStyleColors::Recessed.ColorUseRule;
  (pFVar14->CenterBackgroundColor).ColorTableId = EVar2;
  *(undefined2 *)&(pFVar14->CenterBackgroundColor).field_0x12 = uVar3;
  (pFVar14->SliderProgressColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::White.SpecifiedColor.field0_0x0;
  EVar2 = FStyleColors::White.ColorTableId;
  uVar3 = FStyleColors::White._18_2_;
  (pFVar14->SliderProgressColor).ColorUseRule = FStyleColors::White.ColorUseRule;
  (pFVar14->SliderProgressColor).ColorTableId = EVar2;
  *(undefined2 *)&(pFVar14->SliderProgressColor).field_0x12 = uVar3;
  (pFVar14->SliderBarColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::AccentGray.SpecifiedColor.field0_0x0;
  EVar2 = FStyleColors::AccentGray.ColorTableId;
  uVar3 = FStyleColors::AccentGray._18_2_;
  (pFVar14->SliderBarColor).ColorUseRule = FStyleColors::AccentGray.ColorUseRule;
  (pFVar14->SliderBarColor).ColorTableId = EVar2;
  *(undefined2 *)&(pFVar14->SliderBarColor).field_0x12 = uVar3;
  pFVar14->LabelPadding = 3.0;
  pFVar14->DefaultSliderRadius = 50.0;
  pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"AudioRadialSlider.Style");
  FSlateStyleSet::Set<FAudioRadialSliderStyle>((FSlateStyleSet *)this,*pFVar10,pFVar14);
  local_11b8._0_8_ = &___7FAudioRadialSliderStyle__6B_;
  local_11a8._0_8_ = &___7FAudioTextBoxStyle__6B_;
  local_11a8._16_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_10f8);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_11a8);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_11b8);
  pFVar15 = FSampledSequenceViewerStyle::FSampledSequenceViewerStyle
                      ((FSampledSequenceViewerStyle *)local_11b8);
  pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"SampledSequenceViewer.Style");
  FSlateStyleSet::Set<FSampledSequenceViewerStyle>((FSlateStyleSet *)this,*pFVar10,pFVar15);
  local_1138[0]._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1098);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_11b8);
  pFVar16 = FFixedSampleSequenceRulerStyle::FFixedSampleSequenceRulerStyle
                      ((FFixedSampleSequenceRulerStyle *)local_11b8);
  FLazyName::Resolve(&AudioWidgetsStylePrivate::ScrubHandleBrushName);
  pFVar9 = FSlateStyleSet::GetBrush
                     ((FSlateStyleSet *)this,(FName)local_res8._s_0,(char *)0x0,(ISlateStyle *)0x0);
  FSlateBrush::operator=(&pFVar16->HandleBrush,pFVar9);
  pFVar10 = ::FName::FName((FName *)&local_res10._s_0,"FixedSampledSequenceRuler.Style");
  FSlateStyleSet::Set<FFixedSampleSequenceRulerStyle>((FSlateStyleSet *)this,*pFVar10,pFVar16);
  local_1048 = (TVector2<float>_u_0)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fa8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1088[0]._0_8_);
  local_11a8._16_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_10f8);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_11b8);
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_1298);
  auStack_1280._0_4_ = auStack_1280._0_4_ & 0xffffff00;
  local_1298 = (undefined1  [8])&___7FPlayheadOverlayStyle__6B_;
  auStack_1280._4_4_ = 1.0;
  FStack_1290 = AudioWidgetStylesSharedParams::PlayheadColor.field0_0x0;
  auStack_1280._8_4_ = 1280.0;
  auStack_1280._12_4_ = 720.0;
  pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"PlayheadOverlay.Style");
  FSlateStyleSet::Set<FPlayheadOverlayStyle>
            ((FSlateStyleSet *)this,*pFVar10,(FPlayheadOverlayStyle *)local_1298);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_1298);
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_1298);
  auStack_1280._0_4_ = auStack_1280._0_4_ & 0xffffff00;
  local_1298 = (undefined1  [8])&___7FSampledSequenceValueGridOverlayStyle__6B_;
  FStack_1290 = FLinearColor::Black.field0_0x0;
  auStack_1280._4_4_ = 1.0;
  FStack_1270._8_1_ = UseColor_Specified;
  auStack_1280._8_4_ = FLinearColor::White.field0_0x0._0_4_;
  auStack_1280._12_4_ = FLinearColor::White.field0_0x0._4_4_;
  FStack_1270._0_8_ = FLinearColor::White.field0_0x0._8_8_;
  pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"Regular");
  FVar4 = *pFVar10;
  pIVar17 = FAppStyle::Get();
  (**(code **)((longlong)*pIVar17 + 0x88))(pIVar17,&FStack_1260,FVar4,0);
  local_1200 = 1280.0;
  local_11fc = 720.0;
  pFVar10 = ::FName::FName((FName *)&local_res10._s_0,"ValueGridOverlay.Style");
  FSlateStyleSet::Set<FSampledSequenceValueGridOverlayStyle>
            ((FSlateStyleSet *)this,*pFVar10,(FSampledSequenceValueGridOverlayStyle *)local_1298);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1230._8_8_);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_1298);
  pFVar18 = FAudioMaterialKnobStyle::FAudioMaterialKnobStyle((FAudioMaterialKnobStyle *)local_11b8);
  pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"AudioMaterialKnob.Style");
  FSlateStyleSet::Set<FAudioMaterialKnobStyle>((FSlateStyleSet *)this,*pFVar10,pFVar18);
  local_10d8[0] = (FSlateWidgetStyle)&___7FAudioTextBoxStyle__6B_;
  local_10c8 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1028.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle(local_10d8);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_11b8);
  pFVar19 = FAudioMaterialMeterStyle::FAudioMaterialMeterStyle
                      ((FAudioMaterialMeterStyle *)local_11b8);
  pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"AudioMaterialMeter.Style");
  FSlateStyleSet::Set<FAudioMaterialMeterStyle>((FSlateStyleSet *)this,*pFVar10,pFVar19);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)auStack_10f0._0_8_);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_11b8);
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_1298);
  local_1298 = (undefined1  [8])&___7FAudioMaterialEnvelopeStyle__6B_;
  auStack_1280._0_4_ = FLinearColor::White.field0_0x0._0_4_;
  auStack_1280._4_4_ = FLinearColor::White.field0_0x0._4_4_;
  auStack_1280._8_4_ = FLinearColor::White.field0_0x0._8_4_;
  auStack_1280._12_4_ = FLinearColor::White.field0_0x0._12_4_;
  local_res8 = (TVector2<float>_u_0)0x4380000043800000;
  FStack_1260 = FLinearColor::Gray.field0_0x0;
  FStack_1290._0_8_ = 0;
  FStack_1290._8_8_ = 0x4380000043800000;
  FStack_1270._0_8_ = FLinearColor::Black.field0_0x0._0_8_;
  FStack_1270._8_1_ = FLinearColor::Black.field0_0x0._8_1_;
  FStack_1270._9_7_ = FLinearColor::Black.field0_0x0._9_7_;
  pFVar10 = ::FName::FName((FName *)&local_res10._s_0,"AudioMaterialEnvelope.Style");
  FSlateStyleSet::Set<FAudioMaterialEnvelopeStyle>
            ((FSlateStyleSet *)this,*pFVar10,(FAudioMaterialEnvelopeStyle *)local_1298);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_1298);
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_1298);
  local_1298 = (undefined1  [8])&___7FAudioMaterialButtonStyle__6B_;
  auStack_1280._0_4_ = AudioWidgets::SlateTypesPrivate::ButtonMainColor.field0_0x0._0_4_;
  auStack_1280._4_4_ = AudioWidgets::SlateTypesPrivate::ButtonMainColor.field0_0x0._4_4_;
  auStack_1280._8_4_ = AudioWidgets::SlateTypesPrivate::ButtonMainColor.field0_0x0._8_4_;
  auStack_1280._12_4_ = AudioWidgets::SlateTypesPrivate::ButtonMainColor.field0_0x0._12_4_;
  local_res8 = (TVector2<float>_u_0)0x4300000043000000;
  FStack_1270._0_8_ = AudioWidgets::SlateTypesPrivate::ButtonMainColorTint1.field0_0x0._0_8_;
  FStack_1270._8_1_ = AudioWidgets::SlateTypesPrivate::ButtonMainColorTint1.field0_0x0._8_1_;
  FStack_1270._9_7_ = AudioWidgets::SlateTypesPrivate::ButtonMainColorTint1.field0_0x0._9_7_;
  FStack_1290._0_8_ = 0;
  FStack_1290._8_8_ = 0x4300000043000000;
  FStack_1260 = AudioWidgets::SlateTypesPrivate::ButtonMainColorTint2.field0_0x0;
  local_1250 = AudioWidgets::SlateTypesPrivate::ButtonAccentColor.field0_0x0;
  local_1240 = AudioWidgets::SlateTypesPrivate::ButtonShadowColor.field0_0x0;
  local_1230 = AudioWidgets::SlateTypesPrivate::ButtonUnpressedOutlineColor.field0_0x0;
  local_1220 = AudioWidgets::SlateTypesPrivate::ButtonPressedOutlineColor.field0_0x0;
  pFVar10 = ::FName::FName((FName *)&local_res10._s_0,"AudioMaterialButton.Style");
  FSlateStyleSet::Set<FAudioMaterialButtonStyle>
            ((FSlateStyleSet *)this,*pFVar10,(FAudioMaterialButtonStyle *)local_1298);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_1298);
  pFVar20 = FAudioMaterialSliderStyle::FAudioMaterialSliderStyle
                      ((FAudioMaterialSliderStyle *)local_11b8);
  pFVar13 = FAudioTextBoxStyle::GetDefault();
  FSlateBrush::operator=(&(pFVar20->TextBoxStyle).BackgroundImage,&pFVar13->BackgroundImage);
  uVar1 = *(undefined8 *)((longlong)&(pFVar13->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(pFVar20->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar13->BackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(pFVar20->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 + 8)
       = uVar1;
  EVar2 = (pFVar13->BackgroundColor).ColorTableId;
  uVar3 = *(undefined2 *)&(pFVar13->BackgroundColor).field_0x12;
  (pFVar20->TextBoxStyle).BackgroundColor.ColorUseRule = (pFVar13->BackgroundColor).ColorUseRule;
  (pFVar20->TextBoxStyle).BackgroundColor.ColorTableId = EVar2;
  *(undefined2 *)&(pFVar20->TextBoxStyle).BackgroundColor.field_0x12 = uVar3;
  pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"AudioMaterialSlider.Style");
  FSlateStyleSet::Set<FAudioMaterialSliderStyle>((FSlateStyleSet *)this,*pFVar10,pFVar20);
  local_1148 = (FSlateWidgetStyle)&___7FAudioTextBoxStyle__6B_;
  local_1138[0]._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1098);
  FSlateWidgetStyle::~FSlateWidgetStyle(&local_1148);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_11b8);
  local_1298 = (undefined1  [8])0x0;
  FStack_1290 = (FLinearColor_u_0)ZEXT816(0);
  auStack_1280._0_4_ = 0.0;
  auStack_1280._4_4_ = 0.0;
  auStack_1280._8_4_ = 0.0;
  auStack_1280._12_4_ = 0.0;
  FStack_1270._0_8_ = 0;
  FStack_1270._8_1_ = UseColor_Specified;
  FStack_1270._9_7_ = 0;
  FStack_1260 = (FLinearColor_u_0)ZEXT816(0);
  local_1250 = (FLinearColor_u_0)ZEXT816(0);
  local_1240 = (FLinearColor_u_0)ZEXT816(0);
  pFVar21 = FAudioMeterDefaultColorStyle::FAudioMeterDefaultColorStyle
                      ((FAudioMeterDefaultColorStyle *)local_1298);
  pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"AudioMeter.DefaultColorStyle");
  FSlateStyleSet::Set<FAudioMeterDefaultColorStyle>((FSlateStyleSet *)this,*pFVar10,pFVar21);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_1298);
  memset(local_11b8,0,0x430);
  pFVar22 = FAudioMeterStyle::FAudioMeterStyle((FAudioMeterStyle *)local_11b8);
  pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"AudioMeter.Style");
  FSlateStyleSet::Set<FAudioMeterStyle>((FSlateStyleSet *)this,*pFVar10,pFVar22);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_db0);
  local_ee8 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e48);
  local_f98 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_ef8);
  local_1048 = (TVector2<float>_u_0)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fa8.ReferenceController);
  local_10f8 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1088[1]._16_8_);
  local_11a8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1108._0_8_);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_11b8);
  pFVar23 = FAudioOscilloscopePanelStyle::FAudioOscilloscopePanelStyle
                      ((FAudioOscilloscopePanelStyle *)&local_478);
  pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"AudioOscilloscope.PanelStyle");
  FSlateStyleSet::Set<FAudioOscilloscopePanelStyle>((FSlateStyleSet *)this,*pFVar10,pFVar23);
  FAudioOscilloscopePanelStyle::~FAudioOscilloscopePanelStyle
            ((FAudioOscilloscopePanelStyle *)&local_478);
  pFVar24 = FAudioSpectrumPlotStyle::FAudioSpectrumPlotStyle((FAudioSpectrumPlotStyle *)local_11b8);
  pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"AudioSpectrumPlot.Style");
  FSlateStyleSet::Set<FAudioSpectrumPlotStyle>((FSlateStyleSet *)this,*pFVar10,pFVar24);
  local_11b8._0_8_ = &___7FAudioSpectrumPlotStyle__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_10b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1138[0]._0_8_);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_11b8);
  pFVar25 = FAudioVectorscopePanelStyle::FAudioVectorscopePanelStyle
                      ((FAudioVectorscopePanelStyle *)local_11b8);
  pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"AudioVectorscope.PanelStyle");
  FSlateStyleSet::Set<FAudioVectorscopePanelStyle>((FSlateStyleSet *)this,*pFVar10,pFVar25);
  local_11b8._0_8_ = &___7FAudioVectorscopePanelStyle__6B_;
  auStack_10f0._8_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1048);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_1108._s_0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1140);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)(local_11b8 + 8));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_11b8);
  pFVar26 = FSampledSequenceVectorViewerStyle::FSampledSequenceVectorViewerStyle
                      ((FSampledSequenceVectorViewerStyle *)local_11b8);
  pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"SampledSequenceVectorViewer.Style");
  FSlateStyleSet::Set<FSampledSequenceVectorViewerStyle>((FSlateStyleSet *)this,*pFVar10,pFVar26);
  local_11a8._16_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_10f8);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_11b8);
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_1298);
  local_1298 = (undefined1  [8])&___7FTriggerThresholdLineStyle__6B_;
  FStack_1290 = FLinearColor::White.field0_0x0;
  pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"TriggerThresholdLine.Style");
  FSlateStyleSet::Set<FTriggerThresholdLineStyle>
            ((FSlateStyleSet *)this,*pFVar10,(FTriggerThresholdLineStyle *)local_1298);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_1298);
  pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"AudioAnalyzerRack.BackgroundColor");
  FSlateStyleSet::Set((FSlateStyleSet *)this,*pFVar10,&FLinearColor::Transparent);
  FSlateStyleRegistry::RegisterSlateStyle((ISlateStyle *)this);
  local_b78._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b78.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_cd8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cd8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return this;
}

// ~FAudioWidgetsStyle @ 14d8bf1c0

void __thiscall FAudioWidgetsStyle::~FAudioWidgetsStyle(FAudioWidgetsStyle *this)

{
  *(undefined ***)this = &___7FAudioWidgetsStyle__6B_;
  FSlateStyleRegistry::UnRegisterSlateStyle((ISlateStyle *)this);
  FSlateStyleSet::~FSlateStyleSet((FSlateStyleSet *)this);
  return;
}

// Get @ 14d92aae0

FAudioWidgetsStyle * __cdecl FAudioWidgetsStyle::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAudioWidgetsStyle(&Inst);
      atexit(`FAudioWidgetsStyle::Get'::__l2::_dynamic_atexit_destructor_for__Inst__);
      _Init_thread_footer(&::_TSS0);
      return &Inst;
    }
  }
  return &Inst;
}

// SetResources @ 14d96be60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FAudioWidgetsStyle::SetResources(FAudioWidgetsStyle *this)

{
  FSlateBoxBrush *this_00;
  UClass *pUVar1;
  UObject *pUVar2;
  FSlateBoxBrush *pFVar3;
  FName local_res10;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  FMargin local_38;
  FLinearColor_u_0 local_28;
  undefined1 local_18;
  
  this_00 = ::operator_new(0xb0);
  pFVar3 = (FSlateBoxBrush *)0x0;
  if (this_00 != (FSlateBoxBrush *)0x0) {
    local_28._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
    local_28._8_8_ = _UNK_15076b1f8;
    local_48.DataPtr = L"/AudioWidgets/Resources/ScrubHandleDown_Clamped.ScrubHandleDown_Clamped";
    local_38.Left = ___xmm_3f1555553eec4ec53e8000003eec4ec5;
    local_38.Top = _UNK_152c289f4;
    local_38.Right = _UNK_152c289f8;
    local_38.Bottom = _UNK_152c289fc;
    local_18 = 0;
    local_58.Size = 0;
    local_58._12_4_ = 0;
    local_58.DataPtr = (wchar_t *)0x0;
    local_48.Size = 0x47;
    pUVar1 = Z_Construct_UClass_UTexture2D_NoRegister();
    pUVar2 = StaticLoadObject(pUVar1,(UObject *)0x0,&local_48,&local_58,0,(UPackageMap *)0x0,true,
                              (FLinkerInstancingContext *)0x0);
    pFVar3 = FSlateBoxBrush::FSlateBoxBrush
                       (this_00,pUVar2,&local_38,(FSlateColor *)&local_28._s_0,FullColor);
  }
  FLazyName::Resolve(&AudioWidgetsStylePrivate::ScrubHandleBrushName);
  FSlateStyleSet::Set<FSlateBoxBrush>((FSlateStyleSet *)this,local_res10,pFVar3);
  return;
}

// SetupStyles @ 14d96fa20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FAudioWidgetsStyle::SetupStyles(FAudioWidgetsStyle *this)

{
  FName FVar1;
  void *pvVar2;
  undefined8 uVar3;
  FName FVar4;
  FSlateImageBrush *pFVar5;
  FString *pFVar6;
  FName *pFVar7;
  FSlateImageBrush *pFVar8;
  char cVar9;
  FSlateImageBrush *pFVar10;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_78;
  FLinearColor_u_0 local_70;
  FLinearColor_u_0 local_60 [2];
  
  pFVar10 = (FSlateImageBrush *)0x0;
  local_res18.ComparisonIndex.Value = 0x41800000;
  local_res18.Number = 0x41800000;
  local_res10.ComparisonIndex.Value = 0x41a00000;
  local_res10.Number = 0x41a00000;
  pFVar5 = ::operator_new(0xb0);
  FVar4 = local_res10;
  uVar3 = _UNK_15076b1f8;
  pvVar2 = ___xmm_3f8000003f8000003f8000003f800000;
  pFVar8 = pFVar10;
  if (pFVar5 != (FSlateImageBrush *)0x0) {
    local_res20 = local_res10;
    local_70._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
    local_70._8_8_ = _UNK_15076b1f8;
    pFVar6 = (FString *)
             (**(code **)(*(longlong *)this + 0xe8))(this,local_60,L"Slate/Icons/FadeIn_20",L".svg")
    ;
    FSlateImageBrush::FSlateImageBrush
              (pFVar5,pFVar6,(FDeprecateVector2DParameter *)&local_res20,
               (FLinearColor *)&local_70._s_0,NoTile,Vector);
    *(undefined ***)pFVar5 = &___7FSlateVectorImageBrush__6B_;
    pFVar8 = pFVar5;
  }
  pFVar7 = ::FName::FName(&local_78,"AudioWidgetsStyle.FadeIn");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar8);
  if ((pFVar5 != (FSlateImageBrush *)0x0) && ((void *)local_60[0]._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_60[0]._0_8_);
  }
  pFVar5 = ::operator_new(0xb0);
  FVar1.Number = local_res18.Number;
  FVar1.ComparisonIndex.Value = local_res18.ComparisonIndex.Value;
  pFVar8 = pFVar10;
  if (pFVar5 != (FSlateImageBrush *)0x0) {
    local_60[0]._0_8_ = pvVar2;
    local_60[0]._8_8_ = uVar3;
    local_res10 = FVar1;
    pFVar6 = (FString *)
             (**(code **)(*(longlong *)this + 0xe8))
                       (this,&local_70,L"Slate/Icons/FadeInLinear_16",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar5,pFVar6,(FDeprecateVector2DParameter *)&local_res10,
               (FLinearColor *)&local_60[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar5 = &___7FSlateVectorImageBrush__6B_;
    pFVar8 = pFVar5;
  }
  pFVar7 = ::FName::FName(&local_res20,"AudioWidgetsStyle.FadeInLinear");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar8);
  if ((pFVar5 != (FSlateImageBrush *)0x0) && ((void *)local_70._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_70._0_8_);
  }
  pFVar5 = ::operator_new(0xb0);
  pFVar8 = pFVar10;
  if (pFVar5 != (FSlateImageBrush *)0x0) {
    local_60[0]._0_8_ = pvVar2;
    local_60[0]._8_8_ = uVar3;
    local_res10 = FVar1;
    pFVar6 = (FString *)
             (**(code **)(*(longlong *)this + 0xe8))
                       (this,&local_70,L"Slate/Icons/FadeInLogarithmic_16",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar5,pFVar6,(FDeprecateVector2DParameter *)&local_res10,
               (FLinearColor *)&local_60[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar5 = &___7FSlateVectorImageBrush__6B_;
    pFVar8 = pFVar5;
  }
  pFVar7 = ::FName::FName(&local_res18,"AudioWidgetsStyle.FadeInLogarithmic");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar8);
  if ((pFVar5 != (FSlateImageBrush *)0x0) && ((void *)local_70._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_70._0_8_);
  }
  pFVar5 = ::operator_new(0xb0);
  pFVar8 = pFVar10;
  if (pFVar5 != (FSlateImageBrush *)0x0) {
    local_60[0]._0_8_ = pvVar2;
    local_60[0]._8_8_ = uVar3;
    local_res10 = FVar1;
    pFVar6 = (FString *)
             (**(code **)(*(longlong *)this + 0xe8))
                       (this,&local_70,L"Slate/Icons/FadeInExponential_16",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar5,pFVar6,(FDeprecateVector2DParameter *)&local_res10,
               (FLinearColor *)&local_60[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar5 = &___7FSlateVectorImageBrush__6B_;
    pFVar8 = pFVar5;
  }
  pFVar7 = ::FName::FName(&local_res18,"AudioWidgetsStyle.FadeInExponential");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar8);
  if ((pFVar5 != (FSlateImageBrush *)0x0) && ((void *)local_70._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_70._0_8_);
  }
  pFVar5 = ::operator_new(0xb0);
  pFVar8 = pFVar10;
  if (pFVar5 != (FSlateImageBrush *)0x0) {
    local_60[0]._0_8_ = pvVar2;
    local_60[0]._8_8_ = uVar3;
    local_res10 = FVar1;
    pFVar6 = (FString *)
             (**(code **)(*(longlong *)this + 0xe8))
                       (this,&local_70,L"Slate/Icons/FadeInSigmoid_16",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar5,pFVar6,(FDeprecateVector2DParameter *)&local_res10,
               (FLinearColor *)&local_60[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar5 = &___7FSlateVectorImageBrush__6B_;
    pFVar8 = pFVar5;
  }
  pFVar7 = ::FName::FName(&local_res18,"AudioWidgetsStyle.FadeInSigmoid");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar8);
  if ((pFVar5 != (FSlateImageBrush *)0x0) && ((void *)local_70._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_70._0_8_);
  }
  pFVar5 = ::operator_new(0xb0);
  pFVar8 = pFVar10;
  if (pFVar5 != (FSlateImageBrush *)0x0) {
    local_60[0]._0_8_ = pvVar2;
    local_60[0]._8_8_ = uVar3;
    local_res10 = FVar4;
    pFVar6 = (FString *)
             (**(code **)(*(longlong *)this + 0xe8))
                       (this,&local_70,L"Slate/Icons/FadeOut_20",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar5,pFVar6,(FDeprecateVector2DParameter *)&local_res10,
               (FLinearColor *)&local_60[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar5 = &___7FSlateVectorImageBrush__6B_;
    pFVar8 = pFVar5;
  }
  pFVar7 = ::FName::FName(&local_res18,"AudioWidgetsStyle.FadeOut");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar8);
  if ((pFVar5 != (FSlateImageBrush *)0x0) && ((void *)local_70._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_70._0_8_);
  }
  pFVar5 = ::operator_new(0xb0);
  pFVar8 = pFVar10;
  if (pFVar5 != (FSlateImageBrush *)0x0) {
    local_60[0]._0_8_ = pvVar2;
    local_60[0]._8_8_ = uVar3;
    local_res10 = FVar1;
    pFVar6 = (FString *)
             (**(code **)(*(longlong *)this + 0xe8))
                       (this,&local_70,L"Slate/Icons/FadeOutLinear_16",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar5,pFVar6,(FDeprecateVector2DParameter *)&local_res10,
               (FLinearColor *)&local_60[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar5 = &___7FSlateVectorImageBrush__6B_;
    pFVar8 = pFVar5;
  }
  pFVar7 = ::FName::FName(&local_res18,"AudioWidgetsStyle.FadeOutLinear");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar8);
  if ((pFVar5 != (FSlateImageBrush *)0x0) && ((void *)local_70._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_70._0_8_);
  }
  cVar9 = '\0';
  pFVar5 = ::operator_new(0xb0);
  pFVar8 = pFVar10;
  if (pFVar5 != (FSlateImageBrush *)0x0) {
    cVar9 = -0x80;
    local_60[0]._0_8_ = pvVar2;
    local_60[0]._8_8_ = uVar3;
    local_res10 = FVar1;
    pFVar6 = (FString *)
             (**(code **)(*(longlong *)this + 0xe8))
                       (this,&local_70,L"Slate/Icons/FadeOutLogarithmic_16",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar5,pFVar6,(FDeprecateVector2DParameter *)&local_res10,
               (FLinearColor *)&local_60[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar5 = &___7FSlateVectorImageBrush__6B_;
    pFVar8 = pFVar5;
  }
  pFVar7 = ::FName::FName(&local_res18,"AudioWidgetsStyle.FadeOutLogarithmic");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar8);
  if ((cVar9 < '\0') && ((void *)local_70._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_70._0_8_);
  }
  pFVar5 = ::operator_new(0xb0);
  pFVar8 = pFVar10;
  if (pFVar5 != (FSlateImageBrush *)0x0) {
    local_60[0]._0_8_ = pvVar2;
    local_60[0]._8_8_ = uVar3;
    local_res10 = FVar1;
    pFVar6 = (FString *)
             (**(code **)(*(longlong *)this + 0xe8))
                       (this,&local_70,L"Slate/Icons/FadeOutExponential_16",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar5,pFVar6,(FDeprecateVector2DParameter *)&local_res10,
               (FLinearColor *)&local_60[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar5 = &___7FSlateVectorImageBrush__6B_;
    pFVar8 = pFVar5;
  }
  pFVar7 = ::FName::FName(&local_res18,"AudioWidgetsStyle.FadeOutExponential");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar8);
  if ((pFVar5 != (FSlateImageBrush *)0x0) && ((void *)local_70._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_70._0_8_);
  }
  pFVar5 = ::operator_new(0xb0);
  pFVar8 = pFVar10;
  if (pFVar5 != (FSlateImageBrush *)0x0) {
    local_60[0]._0_8_ = pvVar2;
    local_60[0]._8_8_ = uVar3;
    local_res10 = FVar1;
    pFVar6 = (FString *)
             (**(code **)(*(longlong *)this + 0xe8))
                       (this,&local_70,L"Slate/Icons/FadeOutSigmoid_16",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar5,pFVar6,(FDeprecateVector2DParameter *)&local_res10,
               (FLinearColor *)&local_60[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar5 = &___7FSlateVectorImageBrush__6B_;
    pFVar8 = pFVar5;
  }
  pFVar7 = ::FName::FName(&local_res18,"AudioWidgetsStyle.FadeOutSigmoid");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar8);
  if ((pFVar5 != (FSlateImageBrush *)0x0) && ((void *)local_70._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_70._0_8_);
  }
  pFVar5 = ::operator_new(0xb0);
  pFVar8 = pFVar10;
  if (pFVar5 != (FSlateImageBrush *)0x0) {
    local_60[0]._0_8_ = pvVar2;
    local_60[0]._8_8_ = uVar3;
    local_res10 = FVar4;
    pFVar6 = (FString *)
             (**(code **)(*(longlong *)this + 0xe8))
                       (this,&local_70,L"Slate/Icons/Marker_20",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar5,pFVar6,(FDeprecateVector2DParameter *)&local_res10,
               (FLinearColor *)&local_60[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar5 = &___7FSlateVectorImageBrush__6B_;
    pFVar8 = pFVar5;
  }
  pFVar7 = ::FName::FName(&local_res18,"AudioWidgetsStyle.MarkerAdd");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar8);
  if ((pFVar5 != (FSlateImageBrush *)0x0) && ((void *)local_70._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_70._0_8_);
  }
  pFVar5 = ::operator_new(0xb0);
  pFVar8 = pFVar10;
  if (pFVar5 != (FSlateImageBrush *)0x0) {
    local_60[0]._0_8_ = pvVar2;
    local_60[0]._8_8_ = uVar3;
    local_res10 = FVar4;
    pFVar6 = (FString *)
             (**(code **)(*(longlong *)this + 0xe8))
                       (this,&local_70,L"Slate/Icons/MarkerDelete_20",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar5,pFVar6,(FDeprecateVector2DParameter *)&local_res10,
               (FLinearColor *)&local_60[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar5 = &___7FSlateVectorImageBrush__6B_;
    pFVar8 = pFVar5;
  }
  pFVar7 = ::FName::FName(&local_res18,"AudioWidgetsStyle.MarkerDelete");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar8);
  if ((pFVar5 != (FSlateImageBrush *)0x0) && ((void *)local_70._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_70._0_8_);
  }
  pFVar8 = ::operator_new(0xb0);
  if (pFVar8 != (FSlateImageBrush *)0x0) {
    local_60[0]._0_8_ = pvVar2;
    local_60[0]._8_8_ = uVar3;
    local_res10 = FVar1;
    pFVar6 = (FString *)
             (**(code **)(*(longlong *)this + 0x128))
                       (this,&local_70,"Starship/Common/Reset",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar8,pFVar6,(FDeprecateVector2DParameter *)&local_res10,
               (FLinearColor *)&local_60[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar8 = &___7FSlateVectorImageBrush__6B_;
    pFVar10 = pFVar8;
  }
  pFVar7 = ::FName::FName(&local_res18,"AudioWidgetsStyle.Reset");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar10);
  if ((pFVar8 != (FSlateImageBrush *)0x0) && ((void *)local_70._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_70._0_8_);
  }
  return;
}

