// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FDefaultStyleCache @ 142542a30

/* WARNING: Type propagation algorithm not settling */

FDefaultStyleCache * __thiscall
UE::Slate::Private::FDefaultStyleCache::FDefaultStyleCache(FDefaultStyleCache *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ISlateStyle *pIVar5;
  FName *pFVar6;
  FButtonStyle *pFVar7;
  FCheckBoxStyle *pFVar8;
  FSlateBrush *pFVar9;
  UClass *pUVar10;
  FComboBoxStyle *pFVar11;
  FEditableTextStyle *pFVar12;
  FEditableTextBoxStyle *pFVar13;
  FExpandableAreaStyle *pFVar14;
  FTableViewStyle *pFVar15;
  FProgressBarStyle *pFVar16;
  FScrollBarStyle *pFVar17;
  FScrollBoxStyle *pFVar18;
  FSliderStyle *pFVar19;
  FSpinBoxStyle *pFVar20;
  FTableRowStyle *pFVar21;
  FSlateBrush *pFVar22;
  FTextBlockStyle *pFVar23;
  ulonglong uVar24;
  FName local_res8;
  FSlateBrush *local_res10;
  FSlateBrush *local_res18;
  FSlateBrush *local_res20;
  FName local_50 [2];
  
  FButtonStyle::FButtonStyle((FButtonStyle *)this);
  FCheckBoxStyle::FCheckBoxStyle(&(this->Runtime).CheckboxStyle);
  FSlateBrush::FSlateBrush(&(this->Runtime).CircularThrobberBrushStyle);
  FComboBoxStyle::FComboBoxStyle(&(this->Runtime).ComboBoxStyle);
  FEditableTextStyle::FEditableTextStyle(&(this->Runtime).EditableTextStyle);
  FEditableTextBoxStyle::FEditableTextBoxStyle(&(this->Runtime).EditableTextBoxStyle);
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&(this->Runtime).ExpandableAreaStyle);
  *(undefined ***)&(this->Runtime).ExpandableAreaStyle = &___7FExpandableAreaStyle__6B_;
  local_res8 = (FName)&(this->Runtime).ExpandableAreaStyle.CollapsedImage;
  FSlateBrush::FSlateBrush((FSlateBrush *)local_res8);
  local_res10 = &(this->Runtime).ExpandableAreaStyle.ExpandedImage;
  FSlateBrush::FSlateBrush(local_res10);
  (this->Runtime).ExpandableAreaStyle.RolloutAnimationSeconds = 0.1;
  FSlateBrush::FSlateBrush(&(this->Runtime).ExpandableAreaBorderBrush);
  FTableViewStyle::FTableViewStyle(&(this->Runtime).ListViewStyle);
  pFVar16 = &(this->Runtime).ProgressBarStyle;
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)pFVar16);
  *(undefined ***)pFVar16 = &___7FProgressBarStyle__6B_;
  local_res18 = &(this->Runtime).ProgressBarStyle.BackgroundImage;
  FSlateBrush::FSlateBrush(local_res18);
  local_res20 = &(this->Runtime).ProgressBarStyle.FillImage;
  FSlateBrush::FSlateBrush(local_res20);
  pFVar22 = &(this->Runtime).ProgressBarStyle.MarqueeImage;
  FSlateBrush::FSlateBrush(pFVar22);
  (this->Runtime).ProgressBarStyle.EnableFillAnimation = false;
  FScrollBarStyle::FScrollBarStyle(&(this->Runtime).ScrollBarStyle);
  FScrollBoxStyle::FScrollBoxStyle(&(this->Runtime).ScrollBoxStyle);
  FSliderStyle::FSliderStyle(&(this->Runtime).SliderStyle);
  FSpinBoxStyle::FSpinBoxStyle(&(this->Runtime).SpinBoxStyle);
  FTableRowStyle::FTableRowStyle(&(this->Runtime).TableRowStyle);
  FSlateBrush::FSlateBrush(&(this->Runtime).ThrobberBrush);
  FTextBlockStyle::FTextBlockStyle(&(this->Runtime).TextBlockStyle);
  FTableViewStyle::FTableViewStyle(&(this->Runtime).TreeViewStyle);
  *(undefined8 *)&(this->Runtime).TypeInstanceMap = 0;
  *(undefined8 *)&(this->Runtime).TypeInstanceMap.field_0x8 = 0;
  *(undefined8 *)&(this->Runtime).TypeInstanceMap.field_0x20 = 0;
  *(undefined4 *)&(this->Runtime).TypeInstanceMap.field_0x28 = 0;
  *(undefined4 *)&(this->Runtime).TypeInstanceMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->Runtime).TypeInstanceMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Runtime).TypeInstanceMap.field_0x34 = 0;
  *(undefined8 *)&(this->Runtime).TypeInstanceMap.field_0x40 = 0;
  *(undefined4 *)&(this->Runtime).TypeInstanceMap.field_0x48 = 0;
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(local_50,"Button");
  pFVar7 = (FButtonStyle *)
           (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FButtonStyle::TypeName,*pFVar6,0,1);
  uVar24 = (ulonglong)_tls_index;
  if ((pFVar7 == (FButtonStyle *)0x0) &&
     (pFVar7 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8) + 0x9d4c) < ::_TSS0))
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FButtonStyle::FButtonStyle(&::Default);
      atexit(`FButtonStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FButtonStyle::operator=((FButtonStyle *)this,pFVar7);
  FButtonStyle::UnlinkColors((FButtonStyle *)this);
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(local_50,"Checkbox");
  pFVar8 = (FCheckBoxStyle *)
           (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FCheckBoxStyle::TypeName,*pFVar6,0,1);
  if ((pFVar8 == (FCheckBoxStyle *)0x0) &&
     (pFVar8 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8) + 0x9d4c) < ::_TSS0))
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FCheckBoxStyle::FCheckBoxStyle(&::Default);
      atexit(`FCheckBoxStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FCheckBoxStyle::operator=(&(this->Runtime).CheckboxStyle,pFVar8);
  FCheckBoxStyle::UnlinkColors(&(this->Runtime).CheckboxStyle);
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pcVar2 = *(code **)((longlong)*FUMGCoreStyle::Instance.Object + 0x50);
  pFVar6 = ::FName::FName(local_50,"Throbber.CircleChunk");
  pFVar9 = (FSlateBrush *)(*pcVar2)(pIVar5,*pFVar6,0);
  FSlateBrush::operator=(&(this->Runtime).CircularThrobberBrushStyle,pFVar9);
  if ((this->Runtime).CircularThrobberBrushStyle.TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar10 = USlateThemeManager::StaticClass();
    if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar10);
    }
    puVar1 = (undefined8 *)
             (&(pUVar10->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->Runtime).CircularThrobberBrushStyle.TintColor.ColorTableId * 0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    (this->Runtime).CircularThrobberBrushStyle.TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->Runtime).CircularThrobberBrushStyle.TintColor.SpecifiedColor.field0_0x0 =
         uVar3;
    *(undefined8 *)
     ((longlong)&(this->Runtime).CircularThrobberBrushStyle.TintColor.SpecifiedColor.field0_0x0 + 8)
         = uVar4;
  }
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(local_50,"ComboBox");
  pFVar11 = (FComboBoxStyle *)
            (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FComboBoxStyle::TypeName,*pFVar6,0,1);
  if ((pFVar11 == (FComboBoxStyle *)0x0) &&
     (pFVar11 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8) + 0x9d4c) < ::_TSS0))
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FComboBoxStyle::FComboBoxStyle(&::Default);
      atexit(`FComboBoxStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FComboBoxStyle::operator=(&(this->Runtime).ComboBoxStyle,pFVar11);
  FButtonStyle::UnlinkColors(&(this->Runtime).ComboBoxStyle.ComboButtonStyle.ButtonStyle);
  if ((this->Runtime).ComboBoxStyle.ComboButtonStyle.DownArrowImage.TintColor.ColorUseRule ==
      UseColor_ColorTable) {
    pUVar10 = USlateThemeManager::StaticClass();
    if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar10);
    }
    puVar1 = (undefined8 *)
             (&(pUVar10->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)
             (this->Runtime).ComboBoxStyle.ComboButtonStyle.DownArrowImage.TintColor.ColorTableId *
             0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    (this->Runtime).ComboBoxStyle.ComboButtonStyle.DownArrowImage.TintColor.ColorUseRule =
         UseColor_Specified;
    *(undefined8 *)
     &(this->Runtime).ComboBoxStyle.ComboButtonStyle.DownArrowImage.TintColor.SpecifiedColor.
      field0_0x0 = uVar3;
    *(undefined8 *)
     ((longlong)
      &(this->Runtime).ComboBoxStyle.ComboButtonStyle.DownArrowImage.TintColor.SpecifiedColor.
       field0_0x0 + 8) = uVar4;
  }
  if ((this->Runtime).ComboBoxStyle.ComboButtonStyle.MenuBorderBrush.TintColor.ColorUseRule ==
      UseColor_ColorTable) {
    pUVar10 = USlateThemeManager::StaticClass();
    if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar10);
    }
    puVar1 = (undefined8 *)
             (&(pUVar10->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)
             (this->Runtime).ComboBoxStyle.ComboButtonStyle.MenuBorderBrush.TintColor.ColorTableId *
             0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    (this->Runtime).ComboBoxStyle.ComboButtonStyle.MenuBorderBrush.TintColor.ColorUseRule =
         UseColor_Specified;
    *(undefined8 *)
     &(this->Runtime).ComboBoxStyle.ComboButtonStyle.MenuBorderBrush.TintColor.SpecifiedColor.
      field0_0x0 = uVar3;
    *(undefined8 *)
     ((longlong)
      &(this->Runtime).ComboBoxStyle.ComboButtonStyle.MenuBorderBrush.TintColor.SpecifiedColor.
       field0_0x0 + 8) = uVar4;
  }
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(local_50,"NormalEditableText");
  pFVar12 = (FEditableTextStyle *)
            (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FEditableTextStyle::TypeName,*pFVar6,0,1)
  ;
  if ((pFVar12 == (FEditableTextStyle *)0x0) &&
     (pFVar12 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8) + 0x9d4c) < ::_TSS0))
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
      ::Default._padding_ = (longlong)&___7FEditableTextStyle__6B_;
      FStyleDefaults::GetFontInfo(&::Default.Font,9);
      ::Default.ColorAndOpacity.SpecifiedColor.field0_0x0._0_8_ = 0x3f800000;
      ::Default.ColorAndOpacity.SpecifiedColor.field0_0x0._s_0.B = 1.0;
      ::Default.ColorAndOpacity.SpecifiedColor.field0_0x0._s_0.A = 1.0;
      ::Default.ColorAndOpacity.ColorUseRule = UseColor_Foreground;
      ::Default.ColorAndOpacity.ColorTableId = Black;
      FSlateBrush::FSlateBrush(&::Default.BackgroundImageSelected);
      FSlateBrush::FSlateBrush(&::Default.BackgroundImageComposing);
      FSlateBrush::FSlateBrush(&::Default.CaretImage);
      atexit(`FEditableTextStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FEditableTextStyle::operator=(&(this->Runtime).EditableTextStyle,pFVar12);
  if ((this->Runtime).EditableTextStyle.ColorAndOpacity.ColorUseRule == UseColor_ColorTable) {
    pUVar10 = USlateThemeManager::StaticClass();
    if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar10);
    }
    puVar1 = (undefined8 *)
             (&(pUVar10->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->Runtime).EditableTextStyle.ColorAndOpacity.ColorTableId * 0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    (this->Runtime).EditableTextStyle.ColorAndOpacity.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->Runtime).EditableTextStyle.ColorAndOpacity.SpecifiedColor.field0_0x0 =
         uVar3;
    *(undefined8 *)
     ((longlong)&(this->Runtime).EditableTextStyle.ColorAndOpacity.SpecifiedColor.field0_0x0 + 8) =
         uVar4;
  }
  if ((this->Runtime).EditableTextStyle.BackgroundImageSelected.TintColor.ColorUseRule ==
      UseColor_ColorTable) {
    pUVar10 = USlateThemeManager::StaticClass();
    if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar10);
    }
    puVar1 = (undefined8 *)
             (&(pUVar10->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)
             (this->Runtime).EditableTextStyle.BackgroundImageSelected.TintColor.ColorTableId * 0x10
             );
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    (this->Runtime).EditableTextStyle.BackgroundImageSelected.TintColor.ColorUseRule =
         UseColor_Specified;
    *(undefined8 *)
     &(this->Runtime).EditableTextStyle.BackgroundImageSelected.TintColor.SpecifiedColor.field0_0x0
         = uVar3;
    *(undefined8 *)
     ((longlong)
      &(this->Runtime).EditableTextStyle.BackgroundImageSelected.TintColor.SpecifiedColor.field0_0x0
     + 8) = uVar4;
  }
  if ((this->Runtime).EditableTextStyle.BackgroundImageComposing.TintColor.ColorUseRule ==
      UseColor_ColorTable) {
    pUVar10 = USlateThemeManager::StaticClass();
    if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar10);
    }
    puVar1 = (undefined8 *)
             (&(pUVar10->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)
             (this->Runtime).EditableTextStyle.BackgroundImageComposing.TintColor.ColorTableId *
             0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    (this->Runtime).EditableTextStyle.BackgroundImageComposing.TintColor.ColorUseRule =
         UseColor_Specified;
    *(undefined8 *)
     &(this->Runtime).EditableTextStyle.BackgroundImageComposing.TintColor.SpecifiedColor.field0_0x0
         = uVar3;
    *(undefined8 *)
     ((longlong)
      &(this->Runtime).EditableTextStyle.BackgroundImageComposing.TintColor.SpecifiedColor.
       field0_0x0 + 8) = uVar4;
  }
  if ((this->Runtime).EditableTextStyle.CaretImage.TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar10 = USlateThemeManager::StaticClass();
    if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar10);
    }
    puVar1 = (undefined8 *)
             (&(pUVar10->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->Runtime).EditableTextStyle.CaretImage.TintColor.ColorTableId * 0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    (this->Runtime).EditableTextStyle.CaretImage.TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->Runtime).EditableTextStyle.CaretImage.TintColor.SpecifiedColor.field0_0x0
         = uVar3;
    *(undefined8 *)
     ((longlong)&(this->Runtime).EditableTextStyle.CaretImage.TintColor.SpecifiedColor.field0_0x0 +
     8) = uVar4;
  }
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(local_50,"NormalEditableTextBox");
  pFVar13 = (FEditableTextBoxStyle *)
            (**(code **)((longlong)*pIVar5 + 0xa0))
                      (pIVar5,FEditableTextBoxStyle::TypeName,*pFVar6,0,1);
  if ((pFVar13 == (FEditableTextBoxStyle *)0x0) &&
     (pFVar13 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8) + 0x9d4c) < ::_TSS0))
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FEditableTextBoxStyle::FEditableTextBoxStyle(&::Default);
      atexit(`FEditableTextBoxStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FEditableTextBoxStyle::operator=(&(this->Runtime).EditableTextBoxStyle,pFVar13);
  FEditableTextBoxStyle::UnlinkColors(&(this->Runtime).EditableTextBoxStyle);
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(local_50,"ExpandableArea");
  pFVar14 = (FExpandableAreaStyle *)
            (**(code **)((longlong)*pIVar5 + 0xa0))
                      (pIVar5,FExpandableAreaStyle::TypeName,*pFVar6,0,1);
  if ((pFVar14 == (FExpandableAreaStyle *)0x0) &&
     (pFVar14 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8) + 0x9d4c) < ::_TSS0))
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
      ::Default._0_8_ = &___7FExpandableAreaStyle__6B_;
      FSlateBrush::FSlateBrush(&::Default.CollapsedImage);
      FSlateBrush::FSlateBrush(&::Default.ExpandedImage);
      ::Default.RolloutAnimationSeconds = 0.1;
      atexit(`FExpandableAreaStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FSlateBrush::operator=((FSlateBrush *)local_res8,&pFVar14->CollapsedImage);
  FSlateBrush::operator=(local_res10,&pFVar14->ExpandedImage);
  (this->Runtime).ExpandableAreaStyle.RolloutAnimationSeconds = pFVar14->RolloutAnimationSeconds;
  if ((this->Runtime).ExpandableAreaStyle.CollapsedImage.TintColor.ColorUseRule ==
      UseColor_ColorTable) {
    pUVar10 = USlateThemeManager::StaticClass();
    if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar10);
    }
    puVar1 = (undefined8 *)
             (&(pUVar10->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->Runtime).ExpandableAreaStyle.CollapsedImage.TintColor.ColorTableId *
             0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    (this->Runtime).ExpandableAreaStyle.CollapsedImage.TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)
     &(this->Runtime).ExpandableAreaStyle.CollapsedImage.TintColor.SpecifiedColor.field0_0x0 = uVar3
    ;
    *(undefined8 *)
     ((longlong)
      &(this->Runtime).ExpandableAreaStyle.CollapsedImage.TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar4;
  }
  if ((this->Runtime).ExpandableAreaStyle.ExpandedImage.TintColor.ColorUseRule ==
      UseColor_ColorTable) {
    pUVar10 = USlateThemeManager::StaticClass();
    if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar10);
    }
    puVar1 = (undefined8 *)
             (&(pUVar10->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->Runtime).ExpandableAreaStyle.ExpandedImage.TintColor.ColorTableId *
             0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    (this->Runtime).ExpandableAreaStyle.ExpandedImage.TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)
     &(this->Runtime).ExpandableAreaStyle.ExpandedImage.TintColor.SpecifiedColor.field0_0x0 = uVar3;
    *(undefined8 *)
     ((longlong)
      &(this->Runtime).ExpandableAreaStyle.ExpandedImage.TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar4;
  }
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pcVar2 = *(code **)((longlong)*FUMGCoreStyle::Instance.Object + 0x50);
  pFVar6 = ::FName::FName(&local_res8,"ExpandableArea.Border");
  pFVar9 = (FSlateBrush *)(*pcVar2)(pIVar5,*pFVar6);
  FSlateBrush::operator=(&(this->Runtime).ExpandableAreaBorderBrush,pFVar9);
  if ((this->Runtime).ExpandableAreaBorderBrush.TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar10 = USlateThemeManager::StaticClass();
    if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar10);
    }
    puVar1 = (undefined8 *)
             (&(pUVar10->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->Runtime).ExpandableAreaBorderBrush.TintColor.ColorTableId * 0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    (this->Runtime).ExpandableAreaBorderBrush.TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->Runtime).ExpandableAreaBorderBrush.TintColor.SpecifiedColor.field0_0x0 =
         uVar3;
    *(undefined8 *)
     ((longlong)&(this->Runtime).ExpandableAreaBorderBrush.TintColor.SpecifiedColor.field0_0x0 + 8)
         = uVar4;
  }
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(&local_res8,"ListView");
  pFVar15 = ISlateStyle::GetWidgetStyle<FTableViewStyle>
                      (pIVar5,*pFVar6,(char *)0x0,(FTableViewStyle *)0x0);
  FSlateBrush::operator=(&(this->Runtime).ListViewStyle.BackgroundBrush,&pFVar15->BackgroundBrush);
  if ((this->Runtime).ListViewStyle.BackgroundBrush.TintColor.ColorUseRule == UseColor_ColorTable) {
    pUVar10 = USlateThemeManager::StaticClass();
    if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar10);
    }
    puVar1 = (undefined8 *)
             (&(pUVar10->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->Runtime).ListViewStyle.BackgroundBrush.TintColor.ColorTableId * 0x10)
    ;
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    (this->Runtime).ListViewStyle.BackgroundBrush.TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)
     &(this->Runtime).ListViewStyle.BackgroundBrush.TintColor.SpecifiedColor.field0_0x0 = uVar3;
    *(undefined8 *)
     ((longlong)&(this->Runtime).ListViewStyle.BackgroundBrush.TintColor.SpecifiedColor.field0_0x0 +
     8) = uVar4;
  }
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(&local_res8,"ProgressBar");
  pFVar16 = (FProgressBarStyle *)
            (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FProgressBarStyle::TypeName,*pFVar6,0,1);
  if ((pFVar16 == (FProgressBarStyle *)0x0) &&
     (pFVar16 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8) + 0x9d4c) < ::_TSS0))
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
      ::Default._0_8_ = &___7FProgressBarStyle__6B_;
      FSlateBrush::FSlateBrush(&::Default.BackgroundImage);
      FSlateBrush::FSlateBrush(&::Default.FillImage);
      FSlateBrush::FSlateBrush(&::Default.MarqueeImage);
      ::Default.EnableFillAnimation = false;
      atexit(`FProgressBarStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FProgressBarStyle::operator=(&(this->Runtime).ProgressBarStyle,pFVar16);
  FSlateBrush::UnlinkColors(local_res18);
  FSlateBrush::UnlinkColors(local_res20);
  FSlateBrush::UnlinkColors(pFVar22);
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(&local_res8,"ScrollBar");
  pFVar17 = ISlateStyle::GetWidgetStyle<FScrollBarStyle>
                      (pIVar5,*pFVar6,(char *)0x0,(FScrollBarStyle *)0x0);
  FScrollBarStyle::operator=(&(this->Runtime).ScrollBarStyle,pFVar17);
  FScrollBarStyle::UnlinkColors(&(this->Runtime).ScrollBarStyle);
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(&local_res8,"ScrollBox");
  pFVar18 = (FScrollBoxStyle *)
            (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FScrollBoxStyle::TypeName,*pFVar6,0,1);
  if ((pFVar18 == (FScrollBoxStyle *)0x0) &&
     (pFVar18 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8) + 0x9d4c) < ::_TSS0))
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FScrollBoxStyle::FScrollBoxStyle(&::Default);
      atexit(`FScrollBoxStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FScrollBoxStyle::operator=(&(this->Runtime).ScrollBoxStyle,pFVar18);
  FSlateBrush::UnlinkColors(&(this->Runtime).ScrollBoxStyle.TopShadowBrush);
  FSlateBrush::UnlinkColors(&(this->Runtime).ScrollBoxStyle.BottomShadowBrush);
  FSlateBrush::UnlinkColors(&(this->Runtime).ScrollBoxStyle.LeftShadowBrush);
  FSlateBrush::UnlinkColors(&(this->Runtime).ScrollBoxStyle.RightShadowBrush);
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(&local_res8,"Slider");
  pFVar19 = (FSliderStyle *)
            (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FSliderStyle::TypeName,*pFVar6,0,1);
  if ((pFVar19 == (FSliderStyle *)0x0) &&
     (pFVar19 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8) + 0x9d4c) < ::_TSS0))
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSliderStyle::FSliderStyle(&::Default);
      atexit(`FSliderStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FSliderStyle::operator=(&(this->Runtime).SliderStyle,pFVar19);
  FSliderStyle::UnlinkColors(&(this->Runtime).SliderStyle);
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(&local_res8,"SpinBox");
  pFVar20 = ISlateStyle::GetWidgetStyle<FSpinBoxStyle>
                      (pIVar5,*pFVar6,(char *)0x0,(FSpinBoxStyle *)0x0);
  FSpinBoxStyle::operator=(&(this->Runtime).SpinBoxStyle,pFVar20);
  FSpinBoxStyle::UnlinkColors(&(this->Runtime).SpinBoxStyle);
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(&local_res8,"TableView.Row");
  pFVar21 = (FTableRowStyle *)
            (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FTableRowStyle::TypeName,*pFVar6,0,1);
  if ((pFVar21 == (FTableRowStyle *)0x0) &&
     (pFVar21 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8) + 0x9d4c) < ::_TSS0))
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FTableRowStyle::FTableRowStyle(&::Default);
      atexit(`FTableRowStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FTableRowStyle::operator=(&(this->Runtime).TableRowStyle,pFVar21);
  FTableRowStyle::UnlinkColors(&(this->Runtime).TableRowStyle);
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pcVar2 = *(code **)((longlong)*FUMGCoreStyle::Instance.Object + 0x50);
  pFVar6 = ::FName::FName(&local_res8,"Throbber.Chunk");
  pFVar22 = (FSlateBrush *)(*pcVar2)(pIVar5,*pFVar6);
  FSlateBrush::operator=(&(this->Runtime).ThrobberBrush,pFVar22);
  FSlateBrush::UnlinkColors(&(this->Runtime).ThrobberBrush);
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(&local_res8,"NormalText");
  pFVar23 = ISlateStyle::GetWidgetStyle<FTextBlockStyle>
                      (pIVar5,*pFVar6,(char *)0x0,(FTextBlockStyle *)0x0);
  FTextBlockStyle::operator=(&(this->Runtime).TextBlockStyle,pFVar23);
  FSlateColor::Unlink(&(this->Runtime).TextBlockStyle.ColorAndOpacity);
  FSlateColor::Unlink(&(this->Runtime).TextBlockStyle.SelectedBackgroundColor);
  FSlateBrush::UnlinkColors(&(this->Runtime).TextBlockStyle.HighlightShape);
  FSlateBrush::UnlinkColors(&(this->Runtime).TextBlockStyle.StrikeBrush);
  FSlateBrush::UnlinkColors(&(this->Runtime).TextBlockStyle.UnderlineBrush);
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(&local_res8,"TreeView");
  pFVar15 = ISlateStyle::GetWidgetStyle<FTableViewStyle>
                      (pIVar5,*pFVar6,(char *)0x0,(FTableViewStyle *)0x0);
  FSlateBrush::operator=(&(this->Runtime).TreeViewStyle.BackgroundBrush,&pFVar15->BackgroundBrush);
  FTableViewStyle::UnlinkColors(&(this->Runtime).TreeViewStyle);
  return this;
}

// Get @ 14257e560

FDefaultStyleCache * __cdecl UE::Slate::Private::FDefaultStyleCache::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FDefaultStyleCache *pFVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<struct_UE::Slate::Private::FDefaultStyleCache>&___ptr64___cdecl_TLazySingleton<UE::Slate::Private::FDefaultStyleCache>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<struct_UE::Slate::Private::FDefaultStyleCache>&___ptr64___cdecl_TLazySingleton<UE::Slate::Private::FDefaultStyleCache>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<struct_UE::Slate::Private::FDefaultStyleCache>&___ptr64___cdecl_TLazySingleton<UE::Slate::Private::FDefaultStyleCache>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FDefaultStyleCache((FDefaultStyleCache *)
                       &`private:_static_class_TLazySingleton<struct_UE::Slate::Private::FDefaultStyleCache>&___ptr64___cdecl_TLazySingleton<UE::Slate::Private::FDefaultStyleCache>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                        ::__l2::Singleton);
    DAT_155050940 =
         &`private:_static_class_TLazySingleton<struct_UE::Slate::Private::FDefaultStyleCache>&___ptr64___cdecl_TLazySingleton<UE::Slate::Private::FDefaultStyleCache>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    atexit(`TLazySingleton<UE::Slate::Private::FDefaultStyleCache>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<struct_UE::Slate::Private::FDefaultStyleCache>&___ptr64___cdecl_TLazySingleton<UE::Slate::Private::FDefaultStyleCache>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((DAT_155050940 == (TLazySingleton<struct_UE::Slate::Private::FDefaultStyleCache> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDefaultStyleCache *)(*pcVar1)();
    return pFVar3;
  }
  return (FDefaultStyleCache *)DAT_155050940;
}

