// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 8

// StaticStruct @ 14d88ee70

UScriptStruct * __cdecl FAudioSliderStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAudioSliderStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UScriptStruct_FAudioSliderStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAudioSliderStyle,(UObject *)pUVar1,
                         L"AudioSliderStyle");
  }
  return Z_Registration_Info_UScriptStruct_FAudioSliderStyle.OuterSingleton;
}

// FAudioSliderStyle @ 14d8b1100

FAudioSliderStyle * __thiscall
FAudioSliderStyle::FAudioSliderStyle(FAudioSliderStyle *this,FAudioSliderStyle *param_1)

{
  undefined8 uVar1;
  double dVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  
  *(undefined ***)this = &___7FAudioSliderStyle__6B_;
  FSliderStyle::FSliderStyle(&this->SliderStyle,&param_1->SliderStyle);
  *(undefined ***)&this->TextBoxStyle = &___7FAudioTextBoxStyle__6B_;
  FSlateBrush::FSlateBrush
            (&(this->TextBoxStyle).BackgroundImage,&(param_1->TextBoxStyle).BackgroundImage);
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 + 8) =
       uVar1;
  EVar3 = (param_1->TextBoxStyle).BackgroundColor.ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->TextBoxStyle).BackgroundColor.field_0x12;
  (this->TextBoxStyle).BackgroundColor.ColorUseRule =
       (param_1->TextBoxStyle).BackgroundColor.ColorUseRule;
  (this->TextBoxStyle).BackgroundColor.ColorTableId = EVar3;
  *(undefined2 *)&(this->TextBoxStyle).BackgroundColor.field_0x12 = uVar4;
  FSlateBrush::FSlateBrush(&this->WidgetBackgroundImage,&param_1->WidgetBackgroundImage);
  uVar1 = *(undefined8 *)((longlong)&(param_1->SliderBackgroundColor).SpecifiedColor.field0_0x0 + 8)
  ;
  *(undefined8 *)&(this->SliderBackgroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SliderBackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SliderBackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar3 = (param_1->SliderBackgroundColor).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->SliderBackgroundColor).field_0x12;
  (this->SliderBackgroundColor).ColorUseRule = (param_1->SliderBackgroundColor).ColorUseRule;
  (this->SliderBackgroundColor).ColorTableId = EVar3;
  *(undefined2 *)&(this->SliderBackgroundColor).field_0x12 = uVar4;
  dVar2 = (param_1->SliderBackgroundSize).field0_0x0._s_0.Y;
  (this->SliderBackgroundSize).field0_0x0._s_0.X = (param_1->SliderBackgroundSize).field0_0x0._s_0.X
  ;
  (this->SliderBackgroundSize).field0_0x0._s_0.Y = dVar2;
  this->LabelPadding = param_1->LabelPadding;
  uVar1 = *(undefined8 *)((longlong)&(param_1->SliderBarColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->SliderBarColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SliderBarColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SliderBarColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar3 = (param_1->SliderBarColor).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->SliderBarColor).field_0x12;
  (this->SliderBarColor).ColorUseRule = (param_1->SliderBarColor).ColorUseRule;
  (this->SliderBarColor).ColorTableId = EVar3;
  *(undefined2 *)&(this->SliderBarColor).field_0x12 = uVar4;
  uVar1 = *(undefined8 *)((longlong)&(param_1->SliderThumbColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->SliderThumbColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SliderThumbColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SliderThumbColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar3 = (param_1->SliderThumbColor).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->SliderThumbColor).field_0x12;
  (this->SliderThumbColor).ColorUseRule = (param_1->SliderThumbColor).ColorUseRule;
  (this->SliderThumbColor).ColorTableId = EVar3;
  *(undefined2 *)&(this->SliderThumbColor).field_0x12 = uVar4;
  uVar1 = *(undefined8 *)((longlong)&(param_1->WidgetBackgroundColor).SpecifiedColor.field0_0x0 + 8)
  ;
  *(undefined8 *)&(this->WidgetBackgroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->WidgetBackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->WidgetBackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar3 = (param_1->WidgetBackgroundColor).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->WidgetBackgroundColor).field_0x12;
  (this->WidgetBackgroundColor).ColorUseRule = (param_1->WidgetBackgroundColor).ColorUseRule;
  (this->WidgetBackgroundColor).ColorTableId = EVar3;
  *(undefined2 *)&(this->WidgetBackgroundColor).field_0x12 = uVar4;
  return this;
}

// FAudioSliderStyle @ 14d8b1210

FAudioSliderStyle * __thiscall FAudioSliderStyle::FAudioSliderStyle(FAudioSliderStyle *this)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  FSliderStyle *pFVar4;
  FAudioTextBoxStyle *pFVar5;
  TVector2<float>_u_0 local_res8;
  FMargin local_c8;
  FSlateBrush local_b8;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  *(undefined ***)this = &___7FAudioSliderStyle__6B_;
  pFVar4 = FSliderStyle::GetDefault();
  FSliderStyle::FSliderStyle(&this->SliderStyle,pFVar4);
  pFVar5 = FAudioTextBoxStyle::GetDefault();
  *(undefined ***)&this->TextBoxStyle = &___7FAudioTextBoxStyle__6B_;
  FSlateBrush::FSlateBrush(&(this->TextBoxStyle).BackgroundImage,&pFVar5->BackgroundImage);
  uVar1 = *(undefined8 *)((longlong)&(pFVar5->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar5->BackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 + 8) =
       uVar1;
  EVar2 = (pFVar5->BackgroundColor).ColorTableId;
  uVar3 = *(undefined2 *)&(pFVar5->BackgroundColor).field_0x12;
  (this->TextBoxStyle).BackgroundColor.ColorUseRule = (pFVar5->BackgroundColor).ColorUseRule;
  (this->TextBoxStyle).BackgroundColor.ColorTableId = EVar2;
  *(undefined2 *)&(this->TextBoxStyle).BackgroundColor.field_0x12 = uVar3;
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_c8.Left = 0.0;
  local_c8.Top = 0.0;
  local_c8.Right = 0.0;
  local_c8.Bottom = 0.0;
  FSlateBrush::FSlateBrush
            (&local_b8,NoDrawType,(FName)0x0,&local_c8,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res8._s_0,&FLinearColor::White,(UObject *)0x0,
             false);
  local_b8.bIsSet = '\0';
  local_b8._padding_ = (longlong)&___7FSlateOptionalBrush__6B_;
  FSlateBrush::FSlateBrush(&this->WidgetBackgroundImage,&local_b8);
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  (this->SliderBackgroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::AccentGray.SpecifiedColor.field0_0x0;
  EVar2 = FStyleColors::AccentGray.ColorTableId;
  uVar3 = FStyleColors::AccentGray._18_2_;
  (this->SliderBackgroundColor).ColorUseRule = FStyleColors::AccentGray.ColorUseRule;
  (this->SliderBackgroundColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->SliderBackgroundColor).field_0x12 = uVar3;
  (this->SliderBackgroundSize).field0_0x0._s_0.X = 28.0;
  (this->SliderBackgroundSize).field0_0x0._s_0.Y = 450.0;
  this->LabelPadding = 0.0;
  (this->SliderBarColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Black.SpecifiedColor.field0_0x0;
  EVar2 = FStyleColors::Black.ColorTableId;
  uVar3 = FStyleColors::Black._18_2_;
  (this->SliderBarColor).ColorUseRule = FStyleColors::Black.ColorUseRule;
  (this->SliderBarColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->SliderBarColor).field_0x12 = uVar3;
  (this->SliderThumbColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::White.SpecifiedColor.field0_0x0;
  EVar2 = FStyleColors::White.ColorTableId;
  uVar3 = FStyleColors::White._18_2_;
  (this->SliderThumbColor).ColorUseRule = FStyleColors::White.ColorUseRule;
  (this->SliderThumbColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->SliderThumbColor).field_0x12 = uVar3;
  (this->WidgetBackgroundColor).ColorUseRule = UseColor_Specified;
  *(undefined8 *)&(this->WidgetBackgroundColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->WidgetBackgroundColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->WidgetBackgroundColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  return this;
}

// ~FAudioSliderStyle @ 14d8be2c0

void __thiscall FAudioSliderStyle::~FAudioSliderStyle(FAudioSliderStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined ***)this = &___7FAudioSliderStyle__6B_;
  (this->WidgetBackgroundImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WidgetBackgroundImage).ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  pTVar1 = (this->TextBoxStyle).BackgroundImage.ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  *(undefined ***)&this->TextBoxStyle = &___7FAudioTextBoxStyle__6B_;
  (this->TextBoxStyle).BackgroundImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->TextBoxStyle);
  FSliderStyle::~FSliderStyle(&this->SliderStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// operator= @ 14d8c3750

FAudioSliderStyle * __thiscall
FAudioSliderStyle::operator=(FAudioSliderStyle *this,FAudioSliderStyle *param_1)

{
  undefined8 uVar1;
  double dVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  
  FSlateBrush::operator=(&(this->SliderStyle).NormalBarImage,&(param_1->SliderStyle).NormalBarImage)
  ;
  FSlateBrush::operator=
            (&(this->SliderStyle).HoveredBarImage,&(param_1->SliderStyle).HoveredBarImage);
  FSlateBrush::operator=
            (&(this->SliderStyle).DisabledBarImage,&(param_1->SliderStyle).DisabledBarImage);
  FSlateBrush::operator=
            (&(this->SliderStyle).NormalThumbImage,&(param_1->SliderStyle).NormalThumbImage);
  FSlateBrush::operator=
            (&(this->SliderStyle).HoveredThumbImage,&(param_1->SliderStyle).HoveredThumbImage);
  FSlateBrush::operator=
            (&(this->SliderStyle).DisabledThumbImage,&(param_1->SliderStyle).DisabledThumbImage);
  (this->SliderStyle).BarThickness = (param_1->SliderStyle).BarThickness;
  FSlateBrush::operator=
            (&(this->TextBoxStyle).BackgroundImage,&(param_1->TextBoxStyle).BackgroundImage);
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 + 8) =
       uVar1;
  EVar3 = (param_1->TextBoxStyle).BackgroundColor.ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->TextBoxStyle).BackgroundColor.field_0x12;
  (this->TextBoxStyle).BackgroundColor.ColorUseRule =
       (param_1->TextBoxStyle).BackgroundColor.ColorUseRule;
  (this->TextBoxStyle).BackgroundColor.ColorTableId = EVar3;
  *(undefined2 *)&(this->TextBoxStyle).BackgroundColor.field_0x12 = uVar4;
  FSlateBrush::operator=(&this->WidgetBackgroundImage,&param_1->WidgetBackgroundImage);
  uVar1 = *(undefined8 *)((longlong)&(param_1->SliderBackgroundColor).SpecifiedColor.field0_0x0 + 8)
  ;
  *(undefined8 *)&(this->SliderBackgroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SliderBackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SliderBackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar3 = (param_1->SliderBackgroundColor).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->SliderBackgroundColor).field_0x12;
  (this->SliderBackgroundColor).ColorUseRule = (param_1->SliderBackgroundColor).ColorUseRule;
  (this->SliderBackgroundColor).ColorTableId = EVar3;
  *(undefined2 *)&(this->SliderBackgroundColor).field_0x12 = uVar4;
  dVar2 = (param_1->SliderBackgroundSize).field0_0x0._s_0.Y;
  (this->SliderBackgroundSize).field0_0x0._s_0.X = (param_1->SliderBackgroundSize).field0_0x0._s_0.X
  ;
  (this->SliderBackgroundSize).field0_0x0._s_0.Y = dVar2;
  this->LabelPadding = param_1->LabelPadding;
  uVar1 = *(undefined8 *)((longlong)&(param_1->SliderBarColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->SliderBarColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SliderBarColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SliderBarColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar3 = (param_1->SliderBarColor).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->SliderBarColor).field_0x12;
  (this->SliderBarColor).ColorUseRule = (param_1->SliderBarColor).ColorUseRule;
  (this->SliderBarColor).ColorTableId = EVar3;
  *(undefined2 *)&(this->SliderBarColor).field_0x12 = uVar4;
  uVar1 = *(undefined8 *)((longlong)&(param_1->SliderThumbColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->SliderThumbColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SliderThumbColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SliderThumbColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar3 = (param_1->SliderThumbColor).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->SliderThumbColor).field_0x12;
  (this->SliderThumbColor).ColorUseRule = (param_1->SliderThumbColor).ColorUseRule;
  (this->SliderThumbColor).ColorTableId = EVar3;
  *(undefined2 *)&(this->SliderThumbColor).field_0x12 = uVar4;
  uVar1 = *(undefined8 *)((longlong)&(param_1->WidgetBackgroundColor).SpecifiedColor.field0_0x0 + 8)
  ;
  *(undefined8 *)&(this->WidgetBackgroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->WidgetBackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->WidgetBackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar3 = (param_1->WidgetBackgroundColor).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->WidgetBackgroundColor).field_0x12;
  (this->WidgetBackgroundColor).ColorUseRule = (param_1->WidgetBackgroundColor).ColorUseRule;
  (this->WidgetBackgroundColor).ColorTableId = EVar3;
  *(undefined2 *)&(this->WidgetBackgroundColor).field_0x12 = uVar4;
  return this;
}

// GetDefault @ 14d92cd40

FAudioSliderStyle * __cdecl FAudioSliderStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAudioSliderStyle(&::Default);
      atexit(`FAudioSliderStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 14d934290

void __thiscall
FAudioSliderStyle::GetResources
          (FAudioSliderStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_18 [2];
  
  local_18[0] = &this->WidgetBackgroundImage;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
  return;
}

// GetTypeName @ 14d9374b0

FName __thiscall FAudioSliderStyle::GetTypeName(FAudioSliderStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

