// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 6

// StaticStruct @ 14d8921c0

UScriptStruct * __cdecl FAudioVectorscopePanelStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAudioVectorscopePanelStyle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UScriptStruct_FAudioVectorscopePanelStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAudioVectorscopePanelStyle,(UObject *)pUVar1,
                         L"AudioVectorscopePanelStyle");
  }
  return Z_Registration_Info_UScriptStruct_FAudioVectorscopePanelStyle.OuterSingleton;
}

// FAudioVectorscopePanelStyle @ 14d8b4640

FAudioVectorscopePanelStyle * __thiscall
FAudioVectorscopePanelStyle::FAudioVectorscopePanelStyle
          (FAudioVectorscopePanelStyle *this,FAudioVectorscopePanelStyle *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  this->_padding_ = (longlong)&___7FAudioVectorscopePanelStyle__6B_;
  FSampledSequenceValueGridOverlayStyle::FSampledSequenceValueGridOverlayStyle
            (&this->ValueGridStyle,&param_1->ValueGridStyle);
  *(undefined ***)&this->VectorViewerStyle = &___7FSampledSequenceVectorViewerStyle__6B_;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->VectorViewerStyle).BackgroundColor.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->VectorViewerStyle).BackgroundColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->VectorViewerStyle).BackgroundColor.SpecifiedColor.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->VectorViewerStyle).BackgroundColor.SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->VectorViewerStyle).BackgroundColor.ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->VectorViewerStyle).BackgroundColor.field_0x12;
  (this->VectorViewerStyle).BackgroundColor.ColorUseRule =
       (param_1->VectorViewerStyle).BackgroundColor.ColorUseRule;
  (this->VectorViewerStyle).BackgroundColor.ColorTableId = EVar2;
  *(undefined2 *)&(this->VectorViewerStyle).BackgroundColor.field_0x12 = uVar3;
  FSlateBrush::FSlateBrush
            (&(this->VectorViewerStyle).BackgroundBrush,
             &(param_1->VectorViewerStyle).BackgroundBrush);
  uVar1 = *(undefined8 *)((longlong)&(param_1->VectorViewerStyle).LineColor.field0_0x0 + 8);
  *(undefined8 *)&(this->VectorViewerStyle).LineColor.field0_0x0 =
       *(undefined8 *)&(param_1->VectorViewerStyle).LineColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->VectorViewerStyle).LineColor.field0_0x0 + 8) = uVar1;
  (this->VectorViewerStyle).LineThickness = (param_1->VectorViewerStyle).LineThickness;
  return this;
}

// FAudioVectorscopePanelStyle @ 14d8b46d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FAudioVectorscopePanelStyle * __thiscall
FAudioVectorscopePanelStyle::FAudioVectorscopePanelStyle(FAudioVectorscopePanelStyle *this)

{
  FName FVar1;
  undefined8 uVar2;
  uint uVar3;
  EStyleColor EVar4;
  undefined2 uVar5;
  FName *pFVar6;
  ISlateStyle *pIVar7;
  FSampledSequenceVectorViewerStyle *pFVar8;
  FName local_res8;
  uint local_108;
  undefined1 local_f8 [40];
  FLinearColor_u_0 FStack_d0;
  FSlateFontInfo local_c0;
  float local_60;
  float local_5c;
  FSharedReferencer<1> local_38;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->_padding_ = (longlong)&___7FAudioVectorscopePanelStyle__6B_;
  FSampledSequenceValueGridOverlayStyle::FSampledSequenceValueGridOverlayStyle
            (&this->ValueGridStyle);
  FSampledSequenceVectorViewerStyle::FSampledSequenceVectorViewerStyle(&this->VectorViewerStyle);
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_f8);
  local_f8._24_4_ = local_f8._24_4_ & 0xffffff00;
  local_f8._0_8_ = &___7FSampledSequenceValueGridOverlayStyle__6B_;
  local_f8._28_4_ = 0x3f800000;
  local_f8._8_16_ = (undefined1  [16])FLinearColor::Black.field0_0x0;
  FStack_d0._s_0.B = (float)((uint)FStack_d0._s_0.B & 0xffffff00);
  stack0xffffffffffffff28 = FLinearColor::White.field0_0x0;
  pFVar6 = ::FName::FName(&local_res8,"Regular");
  FVar1 = *pFVar6;
  pIVar7 = FAppStyle::Get();
  (**(code **)((longlong)*pIVar7 + 0x88))(pIVar7,&local_c0,FVar1,0);
  local_f8._16_8_ = _UNK_152c289e8;
  local_f8._8_8_ = ___xmm_3f0000003d4ccccd3d4ccccd3d4ccccd;
  *(undefined8 *)&(this->ValueGridStyle).GridColor.SpecifiedColor.field0_0x0 =
       ___xmm_3f0000003d4ccccd3d4ccccd3d4ccccd;
  *(undefined8 *)((longlong)&(this->ValueGridStyle).GridColor.SpecifiedColor.field0_0x0 + 8) =
       local_f8._16_8_;
  uVar3 = local_108 >> 8;
  local_108 = uVar3 << 8;
  local_f8._24_4_ = local_108;
  (this->ValueGridStyle).GridColor.ColorUseRule = (undefined1)local_108;
  (this->ValueGridStyle).GridColor.ColorTableId = local_108._1_1_;
  *(undefined2 *)&(this->ValueGridStyle).GridColor.field_0x12 = local_108._2_2_;
  *(undefined8 *)&(this->ValueGridStyle).LabelTextColor.SpecifiedColor.field0_0x0 = local_f8._32_8_;
  *(undefined8 *)((longlong)&(this->ValueGridStyle).LabelTextColor.SpecifiedColor.field0_0x0 + 8) =
       FStack_d0._0_8_;
  *(float *)&(this->ValueGridStyle).LabelTextColor.ColorUseRule = FStack_d0._s_0.B;
  local_60 = 1280.0;
  local_5c = 720.0;
  local_f8._28_4_ = 0x3f800000;
  (this->ValueGridStyle).GridThickness = 1.0;
  FSlateFontInfo::operator=(&(this->ValueGridStyle).LabelTextFont,&local_c0);
  (this->ValueGridStyle).DesiredWidth = local_60;
  (this->ValueGridStyle).DesiredHeight = local_5c;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_f8);
  pFVar8 = FSampledSequenceVectorViewerStyle::FSampledSequenceVectorViewerStyle
                     ((FSampledSequenceVectorViewerStyle *)local_f8);
  uVar2 = _UNK_152c28a08;
  local_108 = uVar3 << 8;
  *(undefined8 *)&(pFVar8->BackgroundColor).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003b712c283b9ca18c3b32e9cd;
  *(undefined8 *)((longlong)&(pFVar8->BackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  (pFVar8->BackgroundColor).ColorUseRule = (undefined1)local_108;
  (pFVar8->BackgroundColor).ColorTableId = local_108._1_1_;
  *(undefined2 *)&(pFVar8->BackgroundColor).field_0x12 = local_108._2_2_;
  (pFVar8->LineColor).field0_0x0._s_0.R = 0.0075;
  (pFVar8->LineColor).field0_0x0._s_0.G = 0.57758;
  (pFVar8->LineColor).field0_0x0._s_0.B = 0.05448;
  (pFVar8->LineColor).field0_0x0._s_0.A = 1.0;
  pFVar8->LineThickness = 2.5;
  uVar2 = *(undefined8 *)((longlong)&(pFVar8->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->VectorViewerStyle).BackgroundColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar8->BackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->VectorViewerStyle).BackgroundColor.SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar4 = (pFVar8->BackgroundColor).ColorTableId;
  uVar5 = *(undefined2 *)&(pFVar8->BackgroundColor).field_0x12;
  (this->VectorViewerStyle).BackgroundColor.ColorUseRule = (pFVar8->BackgroundColor).ColorUseRule;
  (this->VectorViewerStyle).BackgroundColor.ColorTableId = EVar4;
  *(undefined2 *)&(this->VectorViewerStyle).BackgroundColor.field_0x12 = uVar5;
  FSlateBrush::operator=(&(this->VectorViewerStyle).BackgroundBrush,&pFVar8->BackgroundBrush);
  uVar2 = *(undefined8 *)((longlong)&(pFVar8->LineColor).field0_0x0 + 8);
  *(undefined8 *)&(this->VectorViewerStyle).LineColor.field0_0x0 =
       *(undefined8 *)&(pFVar8->LineColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->VectorViewerStyle).LineColor.field0_0x0 + 8) = uVar2;
  (this->VectorViewerStyle).LineThickness = pFVar8->LineThickness;
  local_f8._32_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_f8);
  return this;
}

// ~FAudioVectorscopePanelStyle @ 14d8bf150

void __thiscall
FAudioVectorscopePanelStyle::~FAudioVectorscopePanelStyle(FAudioVectorscopePanelStyle *this)

{
  this->_padding_ = (longlong)&___7FAudioVectorscopePanelStyle__6B_;
  (this->VectorViewerStyle).BackgroundBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VectorViewerStyle).BackgroundBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->VectorViewerStyle);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ValueGridStyle).LabelTextFont.CompositeFont.SharedReferenceCount.
             ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->ValueGridStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// operator= @ 14d8c38b0

FAudioVectorscopePanelStyle * __thiscall
FAudioVectorscopePanelStyle::operator=
          (FAudioVectorscopePanelStyle *this,FAudioVectorscopePanelStyle *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
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
           ((longlong)&(param_1->VectorViewerStyle).BackgroundColor.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->VectorViewerStyle).BackgroundColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->VectorViewerStyle).BackgroundColor.SpecifiedColor.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->VectorViewerStyle).BackgroundColor.SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->VectorViewerStyle).BackgroundColor.ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->VectorViewerStyle).BackgroundColor.field_0x12;
  (this->VectorViewerStyle).BackgroundColor.ColorUseRule =
       (param_1->VectorViewerStyle).BackgroundColor.ColorUseRule;
  (this->VectorViewerStyle).BackgroundColor.ColorTableId = EVar2;
  *(undefined2 *)&(this->VectorViewerStyle).BackgroundColor.field_0x12 = uVar3;
  FSlateBrush::operator=
            (&(this->VectorViewerStyle).BackgroundBrush,
             &(param_1->VectorViewerStyle).BackgroundBrush);
  uVar1 = *(undefined8 *)((longlong)&(param_1->VectorViewerStyle).LineColor.field0_0x0 + 8);
  *(undefined8 *)&(this->VectorViewerStyle).LineColor.field0_0x0 =
       *(undefined8 *)&(param_1->VectorViewerStyle).LineColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->VectorViewerStyle).LineColor.field0_0x0 + 8) = uVar1;
  (this->VectorViewerStyle).LineThickness = (param_1->VectorViewerStyle).LineThickness;
  return this;
}

// GetTypeName @ 14d937510

FName __thiscall FAudioVectorscopePanelStyle::GetTypeName(FAudioVectorscopePanelStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

