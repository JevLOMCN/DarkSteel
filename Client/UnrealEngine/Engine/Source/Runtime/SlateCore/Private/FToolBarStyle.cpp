// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 7

// StaticStruct @ 1425307a0

UScriptStruct * __cdecl FToolBarStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FToolBarStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FToolBarStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FToolBarStyle,(UObject *)pUVar1,L"ToolBarStyle");
  }
  return Z_Registration_Info_UScriptStruct_FToolBarStyle.OuterSingleton;
}

// FToolBarStyle @ 1425486c0

FToolBarStyle * __thiscall FToolBarStyle::FToolBarStyle(FToolBarStyle *this,FToolBarStyle *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  *(undefined ***)this = &___7FToolBarStyle__6B_;
  FSlateBrush::FSlateBrush(&this->BackgroundBrush,&param_1->BackgroundBrush);
  FSlateBrush::FSlateBrush(&this->ExpandBrush_DEPRECATED,&param_1->ExpandBrush_DEPRECATED);
  FSlateBrush::FSlateBrush(&this->SeparatorBrush,&param_1->SeparatorBrush);
  FTextBlockStyle::FTextBlockStyle(&this->LabelStyle,&param_1->LabelStyle);
  FEditableTextBoxStyle::FEditableTextBoxStyle(&this->EditableTextStyle,&param_1->EditableTextStyle)
  ;
  FCheckBoxStyle::FCheckBoxStyle(&this->ToggleButton,&param_1->ToggleButton);
  FComboButtonStyle::FComboButtonStyle(&this->ComboButtonStyle,&param_1->ComboButtonStyle);
  FButtonStyle::FButtonStyle(&this->SettingsButtonStyle,&param_1->SettingsButtonStyle);
  FComboButtonStyle::FComboButtonStyle(&this->SettingsComboButton,&param_1->SettingsComboButton);
  FCheckBoxStyle::FCheckBoxStyle(&this->SettingsToggleButton,&param_1->SettingsToggleButton);
  FButtonStyle::FButtonStyle(&this->ButtonStyle,&param_1->ButtonStyle);
  fVar2 = (param_1->LabelPadding).Top;
  fVar3 = (param_1->LabelPadding).Right;
  fVar4 = (param_1->LabelPadding).Bottom;
  (this->LabelPadding).Left = (param_1->LabelPadding).Left;
  (this->LabelPadding).Top = fVar2;
  (this->LabelPadding).Right = fVar3;
  (this->LabelPadding).Bottom = fVar4;
  this->UniformBlockWidth = param_1->UniformBlockWidth;
  this->UniformBlockHeight = param_1->UniformBlockHeight;
  this->NumColumns = param_1->NumColumns;
  fVar2 = (param_1->IconPadding).Top;
  fVar3 = (param_1->IconPadding).Right;
  fVar4 = (param_1->IconPadding).Bottom;
  (this->IconPadding).Left = (param_1->IconPadding).Left;
  (this->IconPadding).Top = fVar2;
  (this->IconPadding).Right = fVar3;
  (this->IconPadding).Bottom = fVar4;
  fVar2 = (param_1->SeparatorPadding).Top;
  fVar3 = (param_1->SeparatorPadding).Right;
  fVar4 = (param_1->SeparatorPadding).Bottom;
  (this->SeparatorPadding).Left = (param_1->SeparatorPadding).Left;
  (this->SeparatorPadding).Top = fVar2;
  (this->SeparatorPadding).Right = fVar3;
  (this->SeparatorPadding).Bottom = fVar4;
  this->SeparatorThickness = param_1->SeparatorThickness;
  fVar2 = (param_1->ComboButtonPadding).Top;
  fVar3 = (param_1->ComboButtonPadding).Right;
  fVar4 = (param_1->ComboButtonPadding).Bottom;
  (this->ComboButtonPadding).Left = (param_1->ComboButtonPadding).Left;
  (this->ComboButtonPadding).Top = fVar2;
  (this->ComboButtonPadding).Right = fVar3;
  (this->ComboButtonPadding).Bottom = fVar4;
  fVar2 = (param_1->ButtonPadding).Top;
  fVar3 = (param_1->ButtonPadding).Right;
  fVar4 = (param_1->ButtonPadding).Bottom;
  (this->ButtonPadding).Left = (param_1->ButtonPadding).Left;
  (this->ButtonPadding).Top = fVar2;
  (this->ButtonPadding).Right = fVar3;
  (this->ButtonPadding).Bottom = fVar4;
  fVar2 = (param_1->CheckBoxPadding).Top;
  fVar3 = (param_1->CheckBoxPadding).Right;
  fVar4 = (param_1->CheckBoxPadding).Bottom;
  (this->CheckBoxPadding).Left = (param_1->CheckBoxPadding).Left;
  (this->CheckBoxPadding).Top = fVar2;
  (this->CheckBoxPadding).Right = fVar3;
  (this->CheckBoxPadding).Bottom = fVar4;
  fVar2 = (param_1->BlockPadding).Top;
  fVar3 = (param_1->BlockPadding).Right;
  fVar4 = (param_1->BlockPadding).Bottom;
  (this->BlockPadding).Left = (param_1->BlockPadding).Left;
  (this->BlockPadding).Top = fVar2;
  (this->BlockPadding).Right = fVar3;
  (this->BlockPadding).Bottom = fVar4;
  fVar2 = (param_1->IndentedBlockPadding).Top;
  fVar3 = (param_1->IndentedBlockPadding).Right;
  fVar4 = (param_1->IndentedBlockPadding).Bottom;
  (this->IndentedBlockPadding).Left = (param_1->IndentedBlockPadding).Left;
  (this->IndentedBlockPadding).Top = fVar2;
  (this->IndentedBlockPadding).Right = fVar3;
  (this->IndentedBlockPadding).Bottom = fVar4;
  FSlateBrush::FSlateBrush(&this->BlockHovered,&param_1->BlockHovered);
  fVar2 = (param_1->BackgroundPadding).Top;
  fVar3 = (param_1->BackgroundPadding).Right;
  fVar4 = (param_1->BackgroundPadding).Bottom;
  (this->BackgroundPadding).Left = (param_1->BackgroundPadding).Left;
  (this->BackgroundPadding).Top = fVar2;
  (this->BackgroundPadding).Right = fVar3;
  (this->BackgroundPadding).Bottom = fVar4;
  fVar2 = (param_1->WrapButtonStyle).Padding.Top;
  fVar3 = (param_1->WrapButtonStyle).Padding.Right;
  fVar4 = (param_1->WrapButtonStyle).Padding.Bottom;
  (this->WrapButtonStyle).Padding.Left = (param_1->WrapButtonStyle).Padding.Left;
  (this->WrapButtonStyle).Padding.Top = fVar2;
  (this->WrapButtonStyle).Padding.Right = fVar3;
  (this->WrapButtonStyle).Padding.Bottom = fVar4;
  (this->WrapButtonStyle).WrapButtonIndex = (param_1->WrapButtonStyle).WrapButtonIndex;
  FSlateBrush::FSlateBrush
            (&(this->WrapButtonStyle).ExpandBrush,&(param_1->WrapButtonStyle).ExpandBrush);
  bVar1 = (param_1->WrapButtonStyle).bHasDownArrow;
  (this->WrapButtonStyle).ComboButtonStyle.bIsSet = false;
  (this->WrapButtonStyle).bHasDownArrow = bVar1;
  bVar1 = (param_1->WrapButtonStyle).ComboButtonStyle.bIsSet;
  (this->WrapButtonStyle).ComboButtonStyle.bIsSet = bVar1;
  if (bVar1 != false) {
    FComboButtonStyle::FComboButtonStyle
              (&(this->WrapButtonStyle).ComboButtonStyle.TypedValue,
               &(param_1->WrapButtonStyle).ComboButtonStyle.TypedValue);
  }
  bVar1 = (param_1->WrapButtonStyle).bIncludeSeparator;
  (this->WrapButtonStyle).SeparatorBrush.bIsSet = false;
  (this->WrapButtonStyle).bIncludeSeparator = bVar1;
  bVar1 = (param_1->WrapButtonStyle).SeparatorBrush.bIsSet;
  (this->WrapButtonStyle).SeparatorBrush.bIsSet = bVar1;
  if (bVar1 != false) {
    FSlateBrush::FSlateBrush
              (&(this->WrapButtonStyle).SeparatorBrush.TypedValue,
               &(param_1->WrapButtonStyle).SeparatorBrush.TypedValue);
  }
  (this->WrapButtonStyle).SeparatorThickness.bIsSet = false;
  bVar1 = (param_1->WrapButtonStyle).SeparatorThickness.bIsSet;
  (this->WrapButtonStyle).SeparatorThickness.bIsSet = bVar1;
  if (bVar1 != false) {
    (this->WrapButtonStyle).SeparatorThickness.TypedValue =
         (param_1->WrapButtonStyle).SeparatorThickness.TypedValue;
  }
  (this->WrapButtonStyle).SeparatorPadding.bIsSet = false;
  bVar1 = (param_1->WrapButtonStyle).SeparatorPadding.bIsSet;
  (this->WrapButtonStyle).SeparatorPadding.bIsSet = bVar1;
  if (bVar1 != false) {
    fVar2 = (param_1->WrapButtonStyle).SeparatorPadding.TypedValue.Top;
    fVar3 = (param_1->WrapButtonStyle).SeparatorPadding.TypedValue.Right;
    fVar4 = (param_1->WrapButtonStyle).SeparatorPadding.TypedValue.Bottom;
    (this->WrapButtonStyle).SeparatorPadding.TypedValue.Left =
         (param_1->WrapButtonStyle).SeparatorPadding.TypedValue.Left;
    (this->WrapButtonStyle).SeparatorPadding.TypedValue.Top = fVar2;
    (this->WrapButtonStyle).SeparatorPadding.TypedValue.Right = fVar3;
    (this->WrapButtonStyle).SeparatorPadding.TypedValue.Bottom = fVar4;
  }
  fVar2 = (param_1->WrapButtonPadding_DEPRECATED).Top;
  fVar3 = (param_1->WrapButtonPadding_DEPRECATED).Right;
  fVar4 = (param_1->WrapButtonPadding_DEPRECATED).Bottom;
  (this->WrapButtonPadding_DEPRECATED).Left = (param_1->WrapButtonPadding_DEPRECATED).Left;
  (this->WrapButtonPadding_DEPRECATED).Top = fVar2;
  (this->WrapButtonPadding_DEPRECATED).Right = fVar3;
  (this->WrapButtonPadding_DEPRECATED).Bottom = fVar4;
  this->WrapButtonIndex_DEPRECATED = param_1->WrapButtonIndex_DEPRECATED;
  this->bAllowWrapButton = param_1->bAllowWrapButton;
  this->bAllowWrappingDefault = param_1->bAllowWrappingDefault;
  this->IconSize = param_1->IconSize;
  this->bShowLabels = param_1->bShowLabels;
  this->ButtonContentMaxWidth = param_1->ButtonContentMaxWidth;
  this->ButtonTextMinWidth = param_1->ButtonTextMinWidth;
  this->ButtonTextMaxWidth = param_1->ButtonTextMaxWidth;
  this->ButtonContentFillWidth = param_1->ButtonContentFillWidth;
  this->ComboContentMinWidth = param_1->ComboContentMinWidth;
  this->ComboContentMaxWidth = param_1->ComboContentMaxWidth;
  (this->ComboContentHorizontalAlignment).Value = (param_1->ComboContentHorizontalAlignment).Value;
  fVar2 = (param_1->IconPaddingWithVisibleLabel).Top;
  fVar3 = (param_1->IconPaddingWithVisibleLabel).Right;
  fVar4 = (param_1->IconPaddingWithVisibleLabel).Bottom;
  (this->IconPaddingWithVisibleLabel).Left = (param_1->IconPaddingWithVisibleLabel).Left;
  (this->IconPaddingWithVisibleLabel).Top = fVar2;
  (this->IconPaddingWithVisibleLabel).Right = fVar3;
  (this->IconPaddingWithVisibleLabel).Bottom = fVar4;
  fVar2 = (param_1->IconPaddingWithCollapsedLabel).Top;
  fVar3 = (param_1->IconPaddingWithCollapsedLabel).Right;
  fVar4 = (param_1->IconPaddingWithCollapsedLabel).Bottom;
  (this->IconPaddingWithCollapsedLabel).Left = (param_1->IconPaddingWithCollapsedLabel).Left;
  (this->IconPaddingWithCollapsedLabel).Top = fVar2;
  (this->IconPaddingWithCollapsedLabel).Right = fVar3;
  (this->IconPaddingWithCollapsedLabel).Bottom = fVar4;
  (this->VerticalAlignmentOverride).bIsSet = false;
  bVar1 = (param_1->VerticalAlignmentOverride).bIsSet;
  (this->VerticalAlignmentOverride).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->VerticalAlignmentOverride).TypedValue.Value =
         (param_1->VerticalAlignmentOverride).TypedValue.Value;
  }
  this->RaisedChildrenRightPadding = param_1->RaisedChildrenRightPadding;
  return this;
}

// FToolBarStyle @ 142548a60

FToolBarStyle * __thiscall FToolBarStyle::FToolBarStyle(FToolBarStyle *this)

{
  FSlateBrush *pFVar1;
  TVector2<float>_u_0 local_res8;
  undefined **local_b8 [20];
  TReferenceControllerBase<1> *local_18;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  *(undefined ***)this = &___7FToolBarStyle__6B_;
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_b8,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::FSlateBrush(&this->BackgroundBrush,pFVar1);
  local_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_b8,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::FSlateBrush(&this->ExpandBrush_DEPRECATED,pFVar1);
  local_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_b8,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::FSlateBrush(&this->SeparatorBrush,pFVar1);
  local_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  FTextBlockStyle::FTextBlockStyle(&this->LabelStyle);
  FEditableTextBoxStyle::FEditableTextBoxStyle(&this->EditableTextStyle);
  FCheckBoxStyle::FCheckBoxStyle(&this->ToggleButton);
  FComboButtonStyle::FComboButtonStyle(&this->ComboButtonStyle);
  FButtonStyle::FButtonStyle(&this->SettingsButtonStyle);
  FComboButtonStyle::FComboButtonStyle(&this->SettingsComboButton);
  FCheckBoxStyle::FCheckBoxStyle(&this->SettingsToggleButton);
  FButtonStyle::FButtonStyle(&this->ButtonStyle);
  this->SeparatorThickness = 2.0;
  (this->ComboButtonPadding).Left = 0.0;
  (this->LabelPadding).Left = 0.0;
  (this->LabelPadding).Top = 0.0;
  (this->LabelPadding).Right = 0.0;
  (this->LabelPadding).Bottom = 0.0;
  this->UniformBlockWidth = 0.0;
  this->UniformBlockHeight = 0.0;
  this->NumColumns = 0;
  (this->IconPadding).Left = 0.0;
  (this->IconPadding).Top = 0.0;
  (this->IconPadding).Right = 0.0;
  *(undefined8 *)&(this->IconPadding).Bottom = 0;
  (this->SeparatorPadding).Top = 0.0;
  (this->SeparatorPadding).Right = 0.0;
  (this->SeparatorPadding).Bottom = 0.0;
  (this->ComboButtonPadding).Top = 0.0;
  (this->ComboButtonPadding).Right = 0.0;
  *(undefined8 *)&(this->ComboButtonPadding).Bottom = 0;
  (this->ButtonPadding).Top = 0.0;
  (this->ButtonPadding).Right = 0.0;
  *(undefined8 *)&(this->ButtonPadding).Bottom = 0;
  (this->CheckBoxPadding).Top = 0.0;
  (this->CheckBoxPadding).Right = 0.0;
  *(undefined8 *)&(this->CheckBoxPadding).Bottom = 0;
  (this->BlockPadding).Top = 0.0;
  (this->BlockPadding).Right = 0.0;
  *(undefined8 *)&(this->BlockPadding).Bottom = 0;
  (this->IndentedBlockPadding).Top = 0.0;
  (this->IndentedBlockPadding).Right = 0.0;
  (this->IndentedBlockPadding).Bottom = 0.0;
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_b8,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::FSlateBrush(&this->BlockHovered,pFVar1);
  local_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  (this->BackgroundPadding).Left = 0.0;
  (this->BackgroundPadding).Top = 0.0;
  (this->BackgroundPadding).Right = 0.0;
  (this->BackgroundPadding).Bottom = 0.0;
  FWrapButtonStyle::FWrapButtonStyle(&this->WrapButtonStyle);
  (this->WrapButtonPadding_DEPRECATED).Left = 0.0;
  (this->WrapButtonPadding_DEPRECATED).Top = 0.0;
  (this->WrapButtonPadding_DEPRECATED).Right = 0.0;
  (this->WrapButtonPadding_DEPRECATED).Bottom = 0.0;
  this->WrapButtonIndex_DEPRECATED = -1;
  this->bAllowWrapButton = true;
  this->bAllowWrappingDefault = true;
  *(undefined4 *)&this->IconSize = 0x41800000;
  *(undefined4 *)&(this->IconSize).field_0x4 = 0x41800000;
  this->bShowLabels = true;
  this->ButtonContentMaxWidth = 64.0;
  this->ButtonTextMinWidth = 0.0;
  this->ButtonTextMaxWidth = 3.4028235e+38;
  this->ButtonContentFillWidth = 1.0;
  this->ComboContentMinWidth = 0.0;
  this->ComboContentMaxWidth = 0.0;
  (this->ComboContentHorizontalAlignment).Value = '\0';
  (this->IconPaddingWithVisibleLabel).Left = 0.0;
  (this->IconPaddingWithVisibleLabel).Top = 0.0;
  (this->IconPaddingWithVisibleLabel).Right = 0.0;
  (this->IconPaddingWithVisibleLabel).Bottom = 0.0;
  (this->IconPaddingWithCollapsedLabel).Left = 0.0;
  (this->IconPaddingWithCollapsedLabel).Top = 0.0;
  (this->IconPaddingWithCollapsedLabel).Right = 0.0;
  (this->IconPaddingWithCollapsedLabel).Bottom = 0.0;
  (this->VerticalAlignmentOverride).bIsSet = false;
  this->RaisedChildrenRightPadding = 0.0;
  return this;
}

// ~FToolBarStyle @ 14254c550

/* WARNING: Type propagation algorithm not settling */

void __thiscall FToolBarStyle::~FToolBarStyle(FToolBarStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined ***)this = &___7FToolBarStyle__6B_;
  if ((this->WrapButtonStyle).SeparatorBrush.bIsSet != false) {
    (this->WrapButtonStyle).SeparatorBrush.TypedValue._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->WrapButtonStyle).SeparatorBrush.TypedValue.ResourceHandle.Data.
               SharedReferenceCount.ReferenceController);
  }
  TOptional<FComboButtonStyle>::~TOptional<FComboButtonStyle>
            (&(this->WrapButtonStyle).ComboButtonStyle);
  pTVar1 = (this->WrapButtonStyle).ExpandBrush.ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->WrapButtonStyle).ExpandBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->BlockHovered).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->BlockHovered)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FButtonStyle::~FButtonStyle(&this->ButtonStyle);
  FCheckBoxStyle::~FCheckBoxStyle(&this->SettingsToggleButton);
  pTVar1 = (this->SettingsComboButton).MenuBorderBrush.ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->SettingsComboButton).MenuBorderBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  *(undefined ***)&this->SettingsComboButton = &___7FComboButtonStyle__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->SettingsComboButton).DownArrowImage.ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->SettingsComboButton).DownArrowImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FButtonStyle::~FButtonStyle(&(this->SettingsComboButton).ButtonStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->SettingsComboButton);
  FButtonStyle::~FButtonStyle(&this->SettingsButtonStyle);
  pTVar1 = (this->ComboButtonStyle).MenuBorderBrush.ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  *(undefined ***)&this->ComboButtonStyle = &___7FComboButtonStyle__6B_;
  (this->ComboButtonStyle).MenuBorderBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->ComboButtonStyle).DownArrowImage.ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->ComboButtonStyle).DownArrowImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FButtonStyle::~FButtonStyle(&(this->ComboButtonStyle).ButtonStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->ComboButtonStyle);
  FCheckBoxStyle::~FCheckBoxStyle(&this->ToggleButton);
  FEditableTextBoxStyle::~FEditableTextBoxStyle(&this->EditableTextStyle);
  FTextBlockStyle::~FTextBlockStyle(&this->LabelStyle);
  pTVar1 = (this->SeparatorBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->SeparatorBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->ExpandBrush_DEPRECATED).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->ExpandBrush_DEPRECATED)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->BackgroundBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->BackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// GetDefault @ 1425805f0

FToolBarStyle * __cdecl FToolBarStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FToolBarStyle(&::Default);
      atexit(`FToolBarStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 1425879f0

void __thiscall
FToolBarStyle::GetResources
          (FToolBarStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_28;
  FSlateBrush *local_20;
  FSlateBrush *local_18;
  FSlateBrush *local_10;
  
  local_28 = &this->BackgroundBrush;
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
  local_20 = &this->ExpandBrush_DEPRECATED;
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
  local_18 = &this->SeparatorBrush;
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
  local_10 = &this->BlockHovered;
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
  (**(code **)(*(longlong *)&this->LabelStyle + 8))(&this->LabelStyle,param_1);
  (**(code **)((this->EditableTextStyle)._padding_ + 8))(&this->EditableTextStyle,param_1);
  (**(code **)(*(longlong *)&this->ToggleButton + 8))(&this->ToggleButton,param_1);
  (**(code **)(*(longlong *)&this->SettingsComboButton + 8))(&this->SettingsComboButton,param_1);
  (**(code **)(*(longlong *)&this->SettingsToggleButton + 8))(&this->SettingsToggleButton,param_1);
  (**(code **)(*(longlong *)&this->SettingsButtonStyle + 8))(&this->SettingsButtonStyle,param_1);
  (**(code **)(*(longlong *)&this->ButtonStyle + 8))(&this->ButtonStyle,param_1);
  FWrapButtonStyle::GetResources(&this->WrapButtonStyle,param_1);
  return;
}

// GetTypeName @ 142589df0

FName __thiscall FToolBarStyle::GetTypeName(FToolBarStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

