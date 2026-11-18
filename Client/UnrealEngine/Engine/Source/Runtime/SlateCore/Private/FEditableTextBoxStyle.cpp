// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 15

// StaticStruct @ 14252e8a0

UScriptStruct * __cdecl FEditableTextBoxStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEditableTextBoxStyle.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FEditableTextBoxStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEditableTextBoxStyle,(UObject *)pUVar1,
                         L"EditableTextBoxStyle");
  }
  return Z_Registration_Info_UScriptStruct_FEditableTextBoxStyle.OuterSingleton;
}

// FEditableTextBoxStyle @ 142543cd0

FEditableTextBoxStyle * __thiscall
FEditableTextBoxStyle::FEditableTextBoxStyle
          (FEditableTextBoxStyle *this,FEditableTextBoxStyle *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  EStyleColor EVar5;
  undefined2 uVar6;
  
  this->_padding_ = (longlong)&___7FEditableTextBoxStyle__6B_;
  FSlateBrush::FSlateBrush(&this->BackgroundImageNormal,&param_1->BackgroundImageNormal);
  FSlateBrush::FSlateBrush(&this->BackgroundImageHovered,&param_1->BackgroundImageHovered);
  FSlateBrush::FSlateBrush(&this->BackgroundImageFocused,&param_1->BackgroundImageFocused);
  FSlateBrush::FSlateBrush(&this->BackgroundImageReadOnly,&param_1->BackgroundImageReadOnly);
  fVar2 = (param_1->Padding).Top;
  fVar3 = (param_1->Padding).Right;
  fVar4 = (param_1->Padding).Bottom;
  (this->Padding).Left = (param_1->Padding).Left;
  (this->Padding).Top = fVar2;
  (this->Padding).Right = fVar3;
  (this->Padding).Bottom = fVar4;
  FTextBlockStyle::FTextBlockStyle(&this->TextStyle,&param_1->TextStyle);
  uVar1 = *(undefined8 *)((longlong)&(param_1->ForegroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->ForegroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar5 = (param_1->ForegroundColor).ColorTableId;
  uVar6 = *(undefined2 *)&(param_1->ForegroundColor).field_0x12;
  (this->ForegroundColor).ColorUseRule = (param_1->ForegroundColor).ColorUseRule;
  (this->ForegroundColor).ColorTableId = EVar5;
  *(undefined2 *)&(this->ForegroundColor).field_0x12 = uVar6;
  uVar1 = *(undefined8 *)((longlong)&(param_1->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->BackgroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->BackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->BackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar5 = (param_1->BackgroundColor).ColorTableId;
  uVar6 = *(undefined2 *)&(param_1->BackgroundColor).field_0x12;
  (this->BackgroundColor).ColorUseRule = (param_1->BackgroundColor).ColorUseRule;
  (this->BackgroundColor).ColorTableId = EVar5;
  *(undefined2 *)&(this->BackgroundColor).field_0x12 = uVar6;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->ReadOnlyForegroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ReadOnlyForegroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->ReadOnlyForegroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ReadOnlyForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar5 = (param_1->ReadOnlyForegroundColor).ColorTableId;
  uVar6 = *(undefined2 *)&(param_1->ReadOnlyForegroundColor).field_0x12;
  (this->ReadOnlyForegroundColor).ColorUseRule = (param_1->ReadOnlyForegroundColor).ColorUseRule;
  (this->ReadOnlyForegroundColor).ColorTableId = EVar5;
  *(undefined2 *)&(this->ReadOnlyForegroundColor).field_0x12 = uVar6;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->FocusedForegroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->FocusedForegroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->FocusedForegroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->FocusedForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar5 = (param_1->FocusedForegroundColor).ColorTableId;
  uVar6 = *(undefined2 *)&(param_1->FocusedForegroundColor).field_0x12;
  (this->FocusedForegroundColor).ColorUseRule = (param_1->FocusedForegroundColor).ColorUseRule;
  (this->FocusedForegroundColor).ColorTableId = EVar5;
  *(undefined2 *)&(this->FocusedForegroundColor).field_0x12 = uVar6;
  fVar2 = (param_1->HScrollBarPadding).Top;
  fVar3 = (param_1->HScrollBarPadding).Right;
  fVar4 = (param_1->HScrollBarPadding).Bottom;
  (this->HScrollBarPadding).Left = (param_1->HScrollBarPadding).Left;
  (this->HScrollBarPadding).Top = fVar2;
  (this->HScrollBarPadding).Right = fVar3;
  (this->HScrollBarPadding).Bottom = fVar4;
  fVar2 = (param_1->VScrollBarPadding).Top;
  fVar3 = (param_1->VScrollBarPadding).Right;
  fVar4 = (param_1->VScrollBarPadding).Bottom;
  (this->VScrollBarPadding).Left = (param_1->VScrollBarPadding).Left;
  (this->VScrollBarPadding).Top = fVar2;
  (this->VScrollBarPadding).Right = fVar3;
  (this->VScrollBarPadding).Bottom = fVar4;
  FScrollBarStyle::FScrollBarStyle(&this->ScrollBarStyle,&param_1->ScrollBarStyle);
  return this;
}

// FEditableTextBoxStyle @ 142543e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FEditableTextBoxStyle * __thiscall
FEditableTextBoxStyle::FEditableTextBoxStyle(FEditableTextBoxStyle *this)

{
  FLinearColor FVar1;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  FTextBlockStyle *pFVar6;
  FSlateFontInfo *pFVar7;
  TVector2<float>_u_0 local_res10;
  FMargin local_428;
  undefined4 local_418;
  FSlateBrush local_408;
  FSlateFontInfo local_358;
  FTextBlockStyle local_2f8;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->_padding_ = (longlong)&___7FEditableTextBoxStyle__6B_;
  FSlateBrush::FSlateBrush(&this->BackgroundImageNormal);
  FSlateBrush::FSlateBrush(&this->BackgroundImageHovered);
  FSlateBrush::FSlateBrush(&this->BackgroundImageFocused);
  FSlateBrush::FSlateBrush(&this->BackgroundImageReadOnly);
  (this->Padding).Left = 4.0;
  (this->Padding).Top = 2.0;
  (this->Padding).Right = 4.0;
  (this->Padding).Bottom = 2.0;
  pFVar6 = FTextBlockStyle::FTextBlockStyle(&local_2f8);
  pFVar7 = FStyleDefaults::GetFontInfo(&local_358,9);
  FSlateFontInfo::operator=(&pFVar6->Font,pFVar7);
  uVar2 = _UNK_15090c6d8;
  *(undefined8 *)&(pFVar6->ColorAndOpacity).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(pFVar6->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) = uVar2;
  local_418 = CONCAT22(local_418._2_2_,2);
  uVar5 = local_418;
  local_418._0_1_ = (undefined1)2;
  local_418._1_1_ = (undefined1)(2 >> 8);
  (pFVar6->ColorAndOpacity).ColorUseRule = (undefined1)local_418;
  (pFVar6->ColorAndOpacity).ColorTableId = local_418._1_1_;
  *(undefined2 *)&(pFVar6->ColorAndOpacity).field_0x12 = local_418._2_2_;
  (pFVar6->SelectedBackgroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Highlight.SpecifiedColor.field0_0x0;
  EVar3 = FStyleColors::Highlight.ColorTableId;
  uVar4 = FStyleColors::Highlight._18_2_;
  (pFVar6->SelectedBackgroundColor).ColorUseRule = FStyleColors::Highlight.ColorUseRule;
  (pFVar6->SelectedBackgroundColor).ColorTableId = EVar3;
  *(undefined2 *)&(pFVar6->SelectedBackgroundColor).field_0x12 = uVar4;
  (pFVar6->HighlightColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Black.SpecifiedColor.field0_0x0;
  EVar3 = FStyleColors::Black.ColorTableId;
  uVar4 = FStyleColors::Black._18_2_;
  (pFVar6->HighlightColor).ColorUseRule = FStyleColors::Black.ColorUseRule;
  (pFVar6->HighlightColor).ColorTableId = EVar3;
  *(undefined2 *)&(pFVar6->HighlightColor).field_0x12 = uVar4;
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_428.Left = 0.0;
  local_428.Top = 0.0;
  local_428.Right = 0.0;
  local_428.Bottom = 0.0;
  local_418 = uVar5;
  FSlateBrush::FSlateBrush
            (&local_408,Image,(FName)0x0,&local_428,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::AccentGreen,
             (UObject *)0x0,false);
  local_408._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar6->HighlightShape,&local_408);
  FTextBlockStyle::FTextBlockStyle(&this->TextStyle,pFVar6);
  local_408._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_408.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_358.CompositeFont.SharedReferenceCount.ReferenceController);
  local_2f8._0_8_ = &___7FTextBlockStyle__6B_;
  local_2f8.UnderlineBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f8.UnderlineBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_2f8.StrikeBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f8.StrikeBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_2f8.HighlightShape._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f8.HighlightShape.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f8.Font.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_2f8);
  *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->ForegroundColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->ForegroundColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->ForegroundColor).ColorUseRule = UseColor_Foreground;
  FVar1 = FLinearColor::White;
  (this->ForegroundColor).ColorTableId = Black;
  (this->BackgroundColor).ColorUseRule = UseColor_Specified;
  (this->BackgroundColor).SpecifiedColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined8 *)&(this->ReadOnlyForegroundColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->ReadOnlyForegroundColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->ReadOnlyForegroundColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->ReadOnlyForegroundColor).ColorUseRule = UseColor_Foreground;
  (this->ReadOnlyForegroundColor).ColorTableId = Black;
  *(undefined8 *)&(this->FocusedForegroundColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->FocusedForegroundColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->FocusedForegroundColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->FocusedForegroundColor).ColorUseRule = UseColor_Foreground;
  (this->FocusedForegroundColor).ColorTableId = Black;
  (this->HScrollBarPadding).Left = 0.0;
  (this->HScrollBarPadding).Top = 0.0;
  (this->HScrollBarPadding).Right = 0.0;
  (this->HScrollBarPadding).Bottom = 0.0;
  (this->VScrollBarPadding).Left = 0.0;
  (this->VScrollBarPadding).Top = 0.0;
  (this->VScrollBarPadding).Right = 0.0;
  (this->VScrollBarPadding).Bottom = 0.0;
  FScrollBarStyle::FScrollBarStyle(&this->ScrollBarStyle);
  return this;
}

// ~FEditableTextBoxStyle @ 14254af30

void __thiscall FEditableTextBoxStyle::~FEditableTextBoxStyle(FEditableTextBoxStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FEditableTextBoxStyle__6B_;
  FScrollBarStyle::~FScrollBarStyle(&this->ScrollBarStyle);
  FTextBlockStyle::~FTextBlockStyle(&this->TextStyle);
  pTVar1 = (this->BackgroundImageReadOnly).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->BackgroundImageReadOnly)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->BackgroundImageFocused).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->BackgroundImageFocused)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->BackgroundImageHovered).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->BackgroundImageHovered)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->BackgroundImageNormal).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->BackgroundImageNormal)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// operator= @ 14254db00

FEditableTextBoxStyle * __thiscall
FEditableTextBoxStyle::operator=(FEditableTextBoxStyle *this,FEditableTextBoxStyle *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  EStyleColor EVar5;
  undefined2 uVar6;
  
  FSlateBrush::operator=(&this->BackgroundImageNormal,&param_1->BackgroundImageNormal);
  FSlateBrush::operator=(&this->BackgroundImageHovered,&param_1->BackgroundImageHovered);
  FSlateBrush::operator=(&this->BackgroundImageFocused,&param_1->BackgroundImageFocused);
  FSlateBrush::operator=(&this->BackgroundImageReadOnly,&param_1->BackgroundImageReadOnly);
  fVar2 = (param_1->Padding).Top;
  fVar3 = (param_1->Padding).Right;
  fVar4 = (param_1->Padding).Bottom;
  (this->Padding).Left = (param_1->Padding).Left;
  (this->Padding).Top = fVar2;
  (this->Padding).Right = fVar3;
  (this->Padding).Bottom = fVar4;
  FTextBlockStyle::operator=(&this->TextStyle,&param_1->TextStyle);
  uVar1 = *(undefined8 *)((longlong)&(param_1->ForegroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->ForegroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar5 = (param_1->ForegroundColor).ColorTableId;
  uVar6 = *(undefined2 *)&(param_1->ForegroundColor).field_0x12;
  (this->ForegroundColor).ColorUseRule = (param_1->ForegroundColor).ColorUseRule;
  (this->ForegroundColor).ColorTableId = EVar5;
  *(undefined2 *)&(this->ForegroundColor).field_0x12 = uVar6;
  uVar1 = *(undefined8 *)((longlong)&(param_1->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->BackgroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->BackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->BackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar5 = (param_1->BackgroundColor).ColorTableId;
  uVar6 = *(undefined2 *)&(param_1->BackgroundColor).field_0x12;
  (this->BackgroundColor).ColorUseRule = (param_1->BackgroundColor).ColorUseRule;
  (this->BackgroundColor).ColorTableId = EVar5;
  *(undefined2 *)&(this->BackgroundColor).field_0x12 = uVar6;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->ReadOnlyForegroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ReadOnlyForegroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->ReadOnlyForegroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ReadOnlyForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar5 = (param_1->ReadOnlyForegroundColor).ColorTableId;
  uVar6 = *(undefined2 *)&(param_1->ReadOnlyForegroundColor).field_0x12;
  (this->ReadOnlyForegroundColor).ColorUseRule = (param_1->ReadOnlyForegroundColor).ColorUseRule;
  (this->ReadOnlyForegroundColor).ColorTableId = EVar5;
  *(undefined2 *)&(this->ReadOnlyForegroundColor).field_0x12 = uVar6;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->FocusedForegroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->FocusedForegroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->FocusedForegroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->FocusedForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar5 = (param_1->FocusedForegroundColor).ColorTableId;
  uVar6 = *(undefined2 *)&(param_1->FocusedForegroundColor).field_0x12;
  (this->FocusedForegroundColor).ColorUseRule = (param_1->FocusedForegroundColor).ColorUseRule;
  (this->FocusedForegroundColor).ColorTableId = EVar5;
  *(undefined2 *)&(this->FocusedForegroundColor).field_0x12 = uVar6;
  fVar2 = (param_1->HScrollBarPadding).Top;
  fVar3 = (param_1->HScrollBarPadding).Right;
  fVar4 = (param_1->HScrollBarPadding).Bottom;
  (this->HScrollBarPadding).Left = (param_1->HScrollBarPadding).Left;
  (this->HScrollBarPadding).Top = fVar2;
  (this->HScrollBarPadding).Right = fVar3;
  (this->HScrollBarPadding).Bottom = fVar4;
  fVar2 = (param_1->VScrollBarPadding).Top;
  fVar3 = (param_1->VScrollBarPadding).Right;
  fVar4 = (param_1->VScrollBarPadding).Bottom;
  (this->VScrollBarPadding).Left = (param_1->VScrollBarPadding).Left;
  (this->VScrollBarPadding).Top = fVar2;
  (this->VScrollBarPadding).Right = fVar3;
  (this->VScrollBarPadding).Bottom = fVar4;
  FScrollBarStyle::operator=(&this->ScrollBarStyle,&param_1->ScrollBarStyle);
  return this;
}

// GetDefault @ 14257f6a0

FEditableTextBoxStyle * __cdecl FEditableTextBoxStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FEditableTextBoxStyle(&::Default);
      atexit(`FEditableTextBoxStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 1425842c0

void __thiscall
FEditableTextBoxStyle::GetResources
          (FEditableTextBoxStyle *this,
          TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_28;
  FSlateBrush *local_20;
  FSlateBrush *local_18;
  FSlateBrush *local_10;
  
  local_28 = &this->BackgroundImageNormal;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_28;
  local_20 = &this->BackgroundImageHovered;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_20) &&
     ((FScriptContainerElement *)&local_20 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_20;
  local_18 = &this->BackgroundImageFocused;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18;
  local_10 = &this->BackgroundImageReadOnly;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 <= (FScriptContainerElement *)&local_10) {
    if ((FScriptContainerElement *)&local_10 < pFVar1 + (longlong)param_1->ArrayMax * 8) {
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
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_10;
                    /* WARNING: Could not recover jumptable at 0x00014258458c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this->ScrollBarStyle + 8))(&this->ScrollBarStyle,param_1);
  return;
}

// GetTypeName @ 142589b70

FName __thiscall FEditableTextBoxStyle::GetTypeName(FEditableTextBoxStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

// SetBackgroundImageFocused @ 142590900

FEditableTextBoxStyle * __thiscall
FEditableTextBoxStyle::SetBackgroundImageFocused(FEditableTextBoxStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->BackgroundImageFocused,param_1);
  return this;
}

// SetBackgroundImageHovered @ 142590930

FEditableTextBoxStyle * __thiscall
FEditableTextBoxStyle::SetBackgroundImageHovered(FEditableTextBoxStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->BackgroundImageHovered,param_1);
  return this;
}

// SetBackgroundImageNormal @ 142590960

FEditableTextBoxStyle * __thiscall
FEditableTextBoxStyle::SetBackgroundImageNormal(FEditableTextBoxStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->BackgroundImageNormal,param_1);
  return this;
}

// SetBackgroundImageReadOnly @ 142590990

FEditableTextBoxStyle * __thiscall
FEditableTextBoxStyle::SetBackgroundImageReadOnly(FEditableTextBoxStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(&this->BackgroundImageReadOnly,param_1);
  return this;
}

// SetFont @ 142590f10

FEditableTextBoxStyle * __thiscall
FEditableTextBoxStyle::SetFont(FEditableTextBoxStyle *this,FName *param_1,float param_2)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,param_2,Default);
  FSlateFontInfo::operator=(&(this->TextStyle).Font,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetTextStyle @ 142592600

FEditableTextBoxStyle * __thiscall
FEditableTextBoxStyle::SetTextStyle(FEditableTextBoxStyle *this,FTextBlockStyle *param_1)

{
  FTextBlockStyle::operator=(&this->TextStyle,param_1);
  return this;
}

// UnlinkColors @ 1425aa280

void __thiscall FEditableTextBoxStyle::UnlinkColors(FEditableTextBoxStyle *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  UClass *pUVar4;
  
  if ((this->BackgroundImageNormal).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->BackgroundImageNormal).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->BackgroundImageNormal).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->BackgroundImageNormal).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)
     ((longlong)&(this->BackgroundImageNormal).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->BackgroundImageHovered).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->BackgroundImageHovered).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->BackgroundImageHovered).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->BackgroundImageHovered).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)
     ((longlong)&(this->BackgroundImageHovered).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->BackgroundImageFocused).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->BackgroundImageFocused).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->BackgroundImageFocused).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->BackgroundImageFocused).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)
     ((longlong)&(this->BackgroundImageFocused).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->BackgroundImageReadOnly).TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->BackgroundImageReadOnly).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->BackgroundImageReadOnly).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->BackgroundImageReadOnly).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)
     ((longlong)&(this->BackgroundImageReadOnly).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->ForegroundColor).ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->ForegroundColor).ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->ForegroundColor).ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->ForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->BackgroundColor).ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->BackgroundColor).ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->BackgroundColor).ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->BackgroundColor).SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->BackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar3;
  }
  if ((this->ReadOnlyForegroundColor).ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->ReadOnlyForegroundColor).ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->ReadOnlyForegroundColor).ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->ReadOnlyForegroundColor).SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->ReadOnlyForegroundColor).SpecifiedColor.field0_0x0 + 8) =
         uVar3;
  }
  if ((this->FocusedForegroundColor).ColorUseRule == UseColor_ColorTable) {
    pUVar4 = USlateThemeManager::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    puVar1 = (undefined8 *)
             (&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->FocusedForegroundColor).ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->FocusedForegroundColor).ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->FocusedForegroundColor).SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->FocusedForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar3
    ;
  }
  FScrollBarStyle::UnlinkColors(&this->ScrollBarStyle);
  return;
}

