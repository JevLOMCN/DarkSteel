// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 8

// StaticStruct @ 14d88f1e0

UScriptStruct * __cdecl FAudioRadialSliderStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAudioRadialSliderStyle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UScriptStruct_FAudioRadialSliderStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAudioRadialSliderStyle,(UObject *)pUVar1,
                         L"AudioRadialSliderStyle");
  }
  return Z_Registration_Info_UScriptStruct_FAudioRadialSliderStyle.OuterSingleton;
}

// FAudioRadialSliderStyle @ 14d8b0f60

FAudioRadialSliderStyle * __thiscall
FAudioRadialSliderStyle::FAudioRadialSliderStyle
          (FAudioRadialSliderStyle *this,FAudioRadialSliderStyle *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  *(undefined ***)this = &___7FAudioRadialSliderStyle__6B_;
  *(undefined ***)&this->TextBoxStyle = &___7FAudioTextBoxStyle__6B_;
  FSlateBrush::FSlateBrush
            (&(this->TextBoxStyle).BackgroundImage,&(param_1->TextBoxStyle).BackgroundImage);
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 + 8) =
       uVar1;
  EVar2 = (param_1->TextBoxStyle).BackgroundColor.ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->TextBoxStyle).BackgroundColor.field_0x12;
  (this->TextBoxStyle).BackgroundColor.ColorUseRule =
       (param_1->TextBoxStyle).BackgroundColor.ColorUseRule;
  (this->TextBoxStyle).BackgroundColor.ColorTableId = EVar2;
  *(undefined2 *)&(this->TextBoxStyle).BackgroundColor.field_0x12 = uVar3;
  uVar1 = *(undefined8 *)((longlong)&(param_1->CenterBackgroundColor).SpecifiedColor.field0_0x0 + 8)
  ;
  *(undefined8 *)&(this->CenterBackgroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->CenterBackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->CenterBackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->CenterBackgroundColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->CenterBackgroundColor).field_0x12;
  (this->CenterBackgroundColor).ColorUseRule = (param_1->CenterBackgroundColor).ColorUseRule;
  (this->CenterBackgroundColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->CenterBackgroundColor).field_0x12 = uVar3;
  uVar1 = *(undefined8 *)((longlong)&(param_1->SliderBarColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->SliderBarColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SliderBarColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SliderBarColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->SliderBarColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->SliderBarColor).field_0x12;
  (this->SliderBarColor).ColorUseRule = (param_1->SliderBarColor).ColorUseRule;
  (this->SliderBarColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->SliderBarColor).field_0x12 = uVar3;
  uVar1 = *(undefined8 *)((longlong)&(param_1->SliderProgressColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->SliderProgressColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SliderProgressColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SliderProgressColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->SliderProgressColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->SliderProgressColor).field_0x12;
  (this->SliderProgressColor).ColorUseRule = (param_1->SliderProgressColor).ColorUseRule;
  (this->SliderProgressColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->SliderProgressColor).field_0x12 = uVar3;
  this->LabelPadding = param_1->LabelPadding;
  this->DefaultSliderRadius = param_1->DefaultSliderRadius;
  return this;
}

// FAudioRadialSliderStyle @ 14d8b1030

FAudioRadialSliderStyle * __thiscall
FAudioRadialSliderStyle::FAudioRadialSliderStyle(FAudioRadialSliderStyle *this)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  FAudioTextBoxStyle *pFVar4;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  *(undefined ***)this = &___7FAudioRadialSliderStyle__6B_;
  pFVar4 = FAudioTextBoxStyle::GetDefault();
  *(undefined ***)&this->TextBoxStyle = &___7FAudioTextBoxStyle__6B_;
  FSlateBrush::FSlateBrush(&(this->TextBoxStyle).BackgroundImage,&pFVar4->BackgroundImage);
  uVar1 = *(undefined8 *)((longlong)&(pFVar4->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar4->BackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 + 8) =
       uVar1;
  EVar2 = (pFVar4->BackgroundColor).ColorTableId;
  uVar3 = *(undefined2 *)&(pFVar4->BackgroundColor).field_0x12;
  (this->TextBoxStyle).BackgroundColor.ColorUseRule = (pFVar4->BackgroundColor).ColorUseRule;
  (this->TextBoxStyle).BackgroundColor.ColorTableId = EVar2;
  *(undefined2 *)&(this->TextBoxStyle).BackgroundColor.field_0x12 = uVar3;
  (this->CenterBackgroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Recessed.SpecifiedColor.field0_0x0;
  EVar2 = FStyleColors::Recessed.ColorTableId;
  uVar3 = FStyleColors::Recessed._18_2_;
  (this->CenterBackgroundColor).ColorUseRule = FStyleColors::Recessed.ColorUseRule;
  (this->CenterBackgroundColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->CenterBackgroundColor).field_0x12 = uVar3;
  (this->SliderBarColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::AccentGray.SpecifiedColor.field0_0x0;
  EVar2 = FStyleColors::AccentGray.ColorTableId;
  uVar3 = FStyleColors::AccentGray._18_2_;
  (this->SliderBarColor).ColorUseRule = FStyleColors::AccentGray.ColorUseRule;
  (this->SliderBarColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->SliderBarColor).field_0x12 = uVar3;
  (this->SliderProgressColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::White.SpecifiedColor.field0_0x0;
  EVar2 = FStyleColors::White.ColorTableId;
  uVar3 = FStyleColors::White._18_2_;
  (this->SliderProgressColor).ColorUseRule = FStyleColors::White.ColorUseRule;
  (this->SliderProgressColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->SliderProgressColor).field_0x12 = uVar3;
  this->LabelPadding = 0.0;
  this->DefaultSliderRadius = 50.0;
  return this;
}

// ~FAudioRadialSliderStyle @ 14d8be260

void __thiscall FAudioRadialSliderStyle::~FAudioRadialSliderStyle(FAudioRadialSliderStyle *this)

{
  *(undefined ***)this = &___7FAudioRadialSliderStyle__6B_;
  *(undefined ***)&this->TextBoxStyle = &___7FAudioTextBoxStyle__6B_;
  (this->TextBoxStyle).BackgroundImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TextBoxStyle).BackgroundImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->TextBoxStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// operator= @ 14d8c3690

FAudioRadialSliderStyle * __thiscall
FAudioRadialSliderStyle::operator=(FAudioRadialSliderStyle *this,FAudioRadialSliderStyle *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  FSlateBrush::operator=
            (&(this->TextBoxStyle).BackgroundImage,&(param_1->TextBoxStyle).BackgroundImage);
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 + 8) =
       uVar1;
  EVar2 = (param_1->TextBoxStyle).BackgroundColor.ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->TextBoxStyle).BackgroundColor.field_0x12;
  (this->TextBoxStyle).BackgroundColor.ColorUseRule =
       (param_1->TextBoxStyle).BackgroundColor.ColorUseRule;
  (this->TextBoxStyle).BackgroundColor.ColorTableId = EVar2;
  *(undefined2 *)&(this->TextBoxStyle).BackgroundColor.field_0x12 = uVar3;
  uVar1 = *(undefined8 *)((longlong)&(param_1->CenterBackgroundColor).SpecifiedColor.field0_0x0 + 8)
  ;
  *(undefined8 *)&(this->CenterBackgroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->CenterBackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->CenterBackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->CenterBackgroundColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->CenterBackgroundColor).field_0x12;
  (this->CenterBackgroundColor).ColorUseRule = (param_1->CenterBackgroundColor).ColorUseRule;
  (this->CenterBackgroundColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->CenterBackgroundColor).field_0x12 = uVar3;
  uVar1 = *(undefined8 *)((longlong)&(param_1->SliderBarColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->SliderBarColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SliderBarColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SliderBarColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->SliderBarColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->SliderBarColor).field_0x12;
  (this->SliderBarColor).ColorUseRule = (param_1->SliderBarColor).ColorUseRule;
  (this->SliderBarColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->SliderBarColor).field_0x12 = uVar3;
  uVar1 = *(undefined8 *)((longlong)&(param_1->SliderProgressColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->SliderProgressColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SliderProgressColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SliderProgressColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->SliderProgressColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->SliderProgressColor).field_0x12;
  (this->SliderProgressColor).ColorUseRule = (param_1->SliderProgressColor).ColorUseRule;
  (this->SliderProgressColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->SliderProgressColor).field_0x12 = uVar3;
  this->LabelPadding = param_1->LabelPadding;
  this->DefaultSliderRadius = param_1->DefaultSliderRadius;
  return this;
}

// GetDefault @ 14d92ccb0

FAudioRadialSliderStyle * __cdecl FAudioRadialSliderStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAudioRadialSliderStyle(&::Default);
      atexit(`FAudioRadialSliderStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__)
      ;
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 14d934280

void __thiscall
FAudioRadialSliderStyle::GetResources
          (FAudioRadialSliderStyle *this,
          TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetTypeName @ 14d937490

FName __thiscall FAudioRadialSliderStyle::GetTypeName(FAudioRadialSliderStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

