// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 5

// StaticStruct @ 14d891a40

UScriptStruct * __cdecl FAudioSpectrumPlotStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAudioSpectrumPlotStyle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UScriptStruct_FAudioSpectrumPlotStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle,(UObject *)pUVar1,
                         L"AudioSpectrumPlotStyle");
  }
  return Z_Registration_Info_UScriptStruct_FAudioSpectrumPlotStyle.OuterSingleton;
}

// FAudioSpectrumPlotStyle @ 14d8b4150

FAudioSpectrumPlotStyle * __thiscall
FAudioSpectrumPlotStyle::FAudioSpectrumPlotStyle(FAudioSpectrumPlotStyle *this)

{
  float fVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  FLinearColor *pFVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->_padding_ = (longlong)&___7FAudioSpectrumPlotStyle__6B_;
  (this->BackgroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Background.SpecifiedColor.field0_0x0;
  EVar2 = FStyleColors::Background.ColorTableId;
  uVar3 = FStyleColors::Background._18_2_;
  (this->BackgroundColor).ColorUseRule = FStyleColors::Background.ColorUseRule;
  (this->BackgroundColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->BackgroundColor).field_0x12 = uVar3;
  if (FStyleColors::Foreground.ColorUseRule == UseColor_ColorTable) {
    pFVar4 = FSlateColor::GetColorFromTable(&FStyleColors::Foreground);
    fVar12 = (pFVar4->field0_0x0)._s_0.R;
    fVar9 = (pFVar4->field0_0x0)._s_0.G;
    fVar10 = (pFVar4->field0_0x0)._s_0.B;
    fVar11 = (pFVar4->field0_0x0)._s_0.A;
  }
  else {
    fVar12 = FStyleColors::Foreground.SpecifiedColor.field0_0x0._0_4_;
    fVar9 = FStyleColors::Foreground.SpecifiedColor.field0_0x0._4_4_;
    fVar10 = FStyleColors::Foreground.SpecifiedColor.field0_0x0._8_4_;
    fVar11 = FStyleColors::Foreground.SpecifiedColor.field0_0x0._12_4_;
  }
  if (FStyleColors::Background.ColorUseRule == UseColor_ColorTable) {
    pFVar4 = FSlateColor::GetColorFromTable(&FStyleColors::Background);
    fVar5 = (pFVar4->field0_0x0)._s_0.R;
    fVar6 = (pFVar4->field0_0x0)._s_0.G;
    fVar7 = (pFVar4->field0_0x0)._s_0.B;
    fVar8 = (pFVar4->field0_0x0)._s_0.A;
  }
  else {
    fVar5 = FStyleColors::Background.SpecifiedColor.field0_0x0._0_4_;
    fVar6 = FStyleColors::Background.SpecifiedColor.field0_0x0._4_4_;
    fVar7 = FStyleColors::Background.SpecifiedColor.field0_0x0._8_4_;
    fVar8 = FStyleColors::Background.SpecifiedColor.field0_0x0._12_4_;
  }
  fVar1 = __real_3dcccccd;
  (this->GridColor).SpecifiedColor.field0_0x0._s_0.R = (fVar12 - fVar5) * __real_3dcccccd + fVar5;
  (this->GridColor).SpecifiedColor.field0_0x0._s_0.G = (fVar9 - fVar6) * fVar1 + fVar6;
  (this->GridColor).SpecifiedColor.field0_0x0._s_0.B = (fVar10 - fVar7) * fVar1 + fVar7;
  (this->GridColor).SpecifiedColor.field0_0x0._s_0.A = (fVar11 - fVar8) * fVar1 + fVar8;
  (this->GridColor).ColorUseRule = UseColor_Specified;
  (this->AxisLabelColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar2 = FStyleColors::Foreground.ColorTableId;
  uVar3 = FStyleColors::Foreground._18_2_;
  (this->AxisLabelColor).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (this->AxisLabelColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->AxisLabelColor).field_0x12 = uVar3;
  FStyleDefaults::GetFontInfo(&this->AxisLabelFont,5);
  (this->SpectrumColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar2 = FStyleColors::Foreground.ColorTableId;
  uVar3 = FStyleColors::Foreground._18_2_;
  (this->SpectrumColor).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (this->SpectrumColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->SpectrumColor).field_0x12 = uVar3;
  (this->CrosshairColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar2 = FStyleColors::Foreground.ColorTableId;
  uVar3 = FStyleColors::Foreground._18_2_;
  (this->CrosshairColor).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (this->CrosshairColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->CrosshairColor).field_0x12 = uVar3;
  FStyleDefaults::GetFontInfo(&this->CrosshairLabelFont,8);
  return this;
}

// ~FAudioSpectrumPlotStyle @ 14d8bf040

void __thiscall FAudioSpectrumPlotStyle::~FAudioSpectrumPlotStyle(FAudioSpectrumPlotStyle *this)

{
  this->_padding_ = (longlong)&___7FAudioSpectrumPlotStyle__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CrosshairLabelFont).CompositeFont.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AxisLabelFont).CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// GetDefault @ 14d92cdd0

FAudioSpectrumPlotStyle * __cdecl FAudioSpectrumPlotStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAudioSpectrumPlotStyle(&::Default);
      atexit(`FAudioSpectrumPlotStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__)
      ;
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetTypeName @ 14d9374d0

FName __thiscall FAudioSpectrumPlotStyle::GetTypeName(FAudioSpectrumPlotStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

