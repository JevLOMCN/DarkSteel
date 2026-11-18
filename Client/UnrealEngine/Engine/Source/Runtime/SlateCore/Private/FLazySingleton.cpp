// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// Construct<UE::Slate::Private::FDefaultStyleCache> @ 142536c30

void __cdecl FLazySingleton::Construct<UE::Slate::Private::FDefaultStyleCache>(void *param_1)

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
  FTextBlockStyle *pFVar22;
  ulonglong uVar23;
  FName FStackX_8;
  FSlateBrush *pFStackX_10;
  FSlateBrush *pFStackX_18;
  FSlateBrush *pFStackX_20;
  FName aFStack_50 [2];
  
  FButtonStyle::FButtonStyle(param_1);
  FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)((longlong)param_1 + 0x390));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xce0));
  FComboBoxStyle::FComboBoxStyle((FComboBoxStyle *)((longlong)param_1 + 0xd90));
  FEditableTextStyle::FEditableTextStyle((FEditableTextStyle *)((longlong)param_1 + 0x1350));
  FEditableTextBoxStyle::FEditableTextBoxStyle
            ((FEditableTextBoxStyle *)((longlong)param_1 + 0x15e0));
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)((longlong)param_1 + 0x2260));
  *(undefined ***)((longlong)param_1 + 0x2260) = &___7FExpandableAreaStyle__6B_;
  FStackX_8 = (FName)((longlong)param_1 + 0x2270);
  FSlateBrush::FSlateBrush((FSlateBrush *)FStackX_8);
  pFStackX_10 = (FSlateBrush *)((longlong)param_1 + 0x2320);
  FSlateBrush::FSlateBrush(pFStackX_10);
  *(undefined4 *)((longlong)param_1 + 0x23d0) = 0x3dcccccd;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x23e0));
  FTableViewStyle::FTableViewStyle((FTableViewStyle *)((longlong)param_1 + 0x2490));
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)((longlong)param_1 + 0x2550));
  *(FSlateWidgetStyle *)((longlong)param_1 + 0x2550) =
       (FSlateWidgetStyle)&___7FProgressBarStyle__6B_;
  pFStackX_18 = (FSlateBrush *)((longlong)param_1 + 0x2560);
  FSlateBrush::FSlateBrush(pFStackX_18);
  pFStackX_20 = (FSlateBrush *)((longlong)param_1 + 0x2610);
  FSlateBrush::FSlateBrush(pFStackX_20);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x26c0));
  *(undefined1 *)((longlong)param_1 + 0x2770) = 0;
  FScrollBarStyle::FScrollBarStyle((FScrollBarStyle *)((longlong)param_1 + 0x2780));
  FScrollBoxStyle::FScrollBoxStyle((FScrollBoxStyle *)((longlong)param_1 + 0x2dd0));
  FSliderStyle::FSliderStyle((FSliderStyle *)((longlong)param_1 + 0x30c0));
  FSpinBoxStyle::FSpinBoxStyle((FSpinBoxStyle *)((longlong)param_1 + 0x3500));
  FTableRowStyle::FTableRowStyle((FTableRowStyle *)((longlong)param_1 + 0x3a20));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x4570));
  FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)((longlong)param_1 + 0x4620));
  FTableViewStyle::FTableViewStyle((FTableViewStyle *)((longlong)param_1 + 0x4900));
  *(undefined8 *)((longlong)param_1 + 0x49c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49e0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x49e8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x49ec) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x49f0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x49f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a00) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4a08) = 0;
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(aFStack_50,"Button");
  pFVar7 = (FButtonStyle *)
           (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FButtonStyle::TypeName,*pFVar6,0,1);
  uVar23 = (ulonglong)_tls_index;
  if ((pFVar7 == (FButtonStyle *)0x0) &&
     (pFVar7 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar23 * 8) + 0x9d4c) < ::_TSS0))
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FButtonStyle::FButtonStyle(&::Default);
      atexit(`FButtonStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FButtonStyle::operator=(param_1,pFVar7);
  FButtonStyle::UnlinkColors(param_1);
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(aFStack_50,"Checkbox");
  pFVar8 = (FCheckBoxStyle *)
           (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FCheckBoxStyle::TypeName,*pFVar6,0,1);
  if ((pFVar8 == (FCheckBoxStyle *)0x0) &&
     (pFVar8 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar23 * 8) + 0x9d4c) < ::_TSS0))
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FCheckBoxStyle::FCheckBoxStyle(&::Default);
      atexit(`FCheckBoxStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FCheckBoxStyle::operator=((FCheckBoxStyle *)((longlong)param_1 + 0x390),pFVar8);
  FCheckBoxStyle::UnlinkColors((FCheckBoxStyle *)((longlong)param_1 + 0x390));
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pcVar2 = *(code **)((longlong)*FUMGCoreStyle::Instance.Object + 0x50);
  pFVar6 = ::FName::FName(aFStack_50,"Throbber.CircleChunk");
  pFVar9 = (FSlateBrush *)(*pcVar2)(pIVar5,*pFVar6,0);
  FSlateBrush::operator=((FSlateBrush *)((longlong)param_1 + 0xce0),pFVar9);
  if (*(char *)((longlong)param_1 + 0xcf8) == '\x01') {
    pUVar10 = USlateThemeManager::StaticClass();
    if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar10);
    }
    puVar1 = (undefined8 *)
             (&(pUVar10->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)*(byte *)((longlong)param_1 + 0xcf9) * 0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    *(undefined1 *)((longlong)param_1 + 0xcf8) = 0;
    *(undefined8 *)((longlong)param_1 + 0xce8) = uVar3;
    *(undefined8 *)((longlong)param_1 + 0xcf0) = uVar4;
  }
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(aFStack_50,"ComboBox");
  pFVar11 = (FComboBoxStyle *)
            (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FComboBoxStyle::TypeName,*pFVar6,0,1);
  if ((pFVar11 == (FComboBoxStyle *)0x0) &&
     (pFVar11 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar23 * 8) + 0x9d4c) < ::_TSS0))
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FComboBoxStyle::FComboBoxStyle(&::Default);
      atexit(`FComboBoxStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FComboBoxStyle::operator=((FComboBoxStyle *)((longlong)param_1 + 0xd90),pFVar11);
  FButtonStyle::UnlinkColors((FButtonStyle *)((longlong)param_1 + 0xdb0));
  if (*(char *)((longlong)param_1 + 0x1158) == '\x01') {
    pUVar10 = USlateThemeManager::StaticClass();
    if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar10);
    }
    puVar1 = (undefined8 *)
             (&(pUVar10->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)*(byte *)((longlong)param_1 + 0x1159) * 0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    *(undefined1 *)((longlong)param_1 + 0x1158) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1148) = uVar3;
    *(undefined8 *)((longlong)param_1 + 0x1150) = uVar4;
  }
  if (*(char *)((longlong)param_1 + 0x1228) == '\x01') {
    pUVar10 = USlateThemeManager::StaticClass();
    if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar10);
    }
    puVar1 = (undefined8 *)
             (&(pUVar10->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)*(byte *)((longlong)param_1 + 0x1229) * 0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    *(undefined1 *)((longlong)param_1 + 0x1228) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1218) = uVar3;
    *(undefined8 *)((longlong)param_1 + 0x1220) = uVar4;
  }
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(aFStack_50,"NormalEditableText");
  pFVar12 = (FEditableTextStyle *)
            (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FEditableTextStyle::TypeName,*pFVar6,0,1)
  ;
  if ((pFVar12 == (FEditableTextStyle *)0x0) &&
     (pFVar12 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar23 * 8) + 0x9d4c) < ::_TSS0))
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
  FEditableTextStyle::operator=((FEditableTextStyle *)((longlong)param_1 + 0x1350),pFVar12);
  if (*(char *)((longlong)param_1 + 0x13c8) == '\x01') {
    pUVar10 = USlateThemeManager::StaticClass();
    if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar10);
    }
    puVar1 = (undefined8 *)
             (&(pUVar10->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)*(byte *)((longlong)param_1 + 0x13c9) * 0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    *(undefined1 *)((longlong)param_1 + 0x13c8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x13b8) = uVar3;
    *(undefined8 *)((longlong)param_1 + 0x13c0) = uVar4;
  }
  if (*(char *)((longlong)param_1 + 0x13e8) == '\x01') {
    pUVar10 = USlateThemeManager::StaticClass();
    if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar10);
    }
    puVar1 = (undefined8 *)
             (&(pUVar10->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)*(byte *)((longlong)param_1 + 0x13e9) * 0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    *(undefined1 *)((longlong)param_1 + 0x13e8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x13d8) = uVar3;
    *(undefined8 *)((longlong)param_1 + 0x13e0) = uVar4;
  }
  if (*(char *)((longlong)param_1 + 0x1498) == '\x01') {
    pUVar10 = USlateThemeManager::StaticClass();
    if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar10);
    }
    puVar1 = (undefined8 *)
             (&(pUVar10->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)*(byte *)((longlong)param_1 + 0x1499) * 0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    *(undefined1 *)((longlong)param_1 + 0x1498) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1488) = uVar3;
    *(undefined8 *)((longlong)param_1 + 0x1490) = uVar4;
  }
  if (*(char *)((longlong)param_1 + 0x1548) == '\x01') {
    pUVar10 = USlateThemeManager::StaticClass();
    if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar10);
    }
    puVar1 = (undefined8 *)
             (&(pUVar10->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)*(byte *)((longlong)param_1 + 0x1549) * 0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    *(undefined1 *)((longlong)param_1 + 0x1548) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1538) = uVar3;
    *(undefined8 *)((longlong)param_1 + 0x1540) = uVar4;
  }
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(aFStack_50,"NormalEditableTextBox");
  pFVar13 = (FEditableTextBoxStyle *)
            (**(code **)((longlong)*pIVar5 + 0xa0))
                      (pIVar5,FEditableTextBoxStyle::TypeName,*pFVar6,0,1);
  if ((pFVar13 == (FEditableTextBoxStyle *)0x0) &&
     (pFVar13 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar23 * 8) + 0x9d4c) < ::_TSS0))
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FEditableTextBoxStyle::FEditableTextBoxStyle(&::Default);
      atexit(`FEditableTextBoxStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FEditableTextBoxStyle::operator=((FEditableTextBoxStyle *)((longlong)param_1 + 0x15e0),pFVar13);
  FEditableTextBoxStyle::UnlinkColors((FEditableTextBoxStyle *)((longlong)param_1 + 0x15e0));
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(aFStack_50,"ExpandableArea");
  pFVar14 = (FExpandableAreaStyle *)
            (**(code **)((longlong)*pIVar5 + 0xa0))
                      (pIVar5,FExpandableAreaStyle::TypeName,*pFVar6,0,1);
  if ((pFVar14 == (FExpandableAreaStyle *)0x0) &&
     (pFVar14 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar23 * 8) + 0x9d4c) < ::_TSS0))
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
  FSlateBrush::operator=((FSlateBrush *)FStackX_8,&pFVar14->CollapsedImage);
  FSlateBrush::operator=(pFStackX_10,&pFVar14->ExpandedImage);
  *(float *)((longlong)param_1 + 0x23d0) = pFVar14->RolloutAnimationSeconds;
  if (*(char *)((longlong)param_1 + 0x2288) == '\x01') {
    pUVar10 = USlateThemeManager::StaticClass();
    if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar10);
    }
    puVar1 = (undefined8 *)
             (&(pUVar10->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)*(byte *)((longlong)param_1 + 0x2289) * 0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    *(undefined1 *)((longlong)param_1 + 0x2288) = 0;
    *(undefined8 *)((longlong)param_1 + 0x2278) = uVar3;
    *(undefined8 *)((longlong)param_1 + 0x2280) = uVar4;
  }
  if (*(char *)((longlong)param_1 + 0x2338) == '\x01') {
    pUVar10 = USlateThemeManager::StaticClass();
    if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar10);
    }
    puVar1 = (undefined8 *)
             (&(pUVar10->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)*(byte *)((longlong)param_1 + 0x2339) * 0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    *(undefined1 *)((longlong)param_1 + 0x2338) = 0;
    *(undefined8 *)((longlong)param_1 + 9000) = uVar3;
    *(undefined8 *)((longlong)param_1 + 0x2330) = uVar4;
  }
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pcVar2 = *(code **)((longlong)*FUMGCoreStyle::Instance.Object + 0x50);
  pFVar6 = ::FName::FName(&FStackX_8,"ExpandableArea.Border");
  pFVar9 = (FSlateBrush *)(*pcVar2)(pIVar5,*pFVar6);
  FSlateBrush::operator=((FSlateBrush *)((longlong)param_1 + 0x23e0),pFVar9);
  if (*(char *)((longlong)param_1 + 0x23f8) == '\x01') {
    pUVar10 = USlateThemeManager::StaticClass();
    if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar10);
    }
    puVar1 = (undefined8 *)
             (&(pUVar10->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)*(byte *)((longlong)param_1 + 0x23f9) * 0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    *(undefined1 *)((longlong)param_1 + 0x23f8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x23e8) = uVar3;
    *(undefined8 *)((longlong)param_1 + 0x23f0) = uVar4;
  }
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(&FStackX_8,"ListView");
  pFVar15 = ISlateStyle::GetWidgetStyle<FTableViewStyle>
                      (pIVar5,*pFVar6,(char *)0x0,(FTableViewStyle *)0x0);
  FSlateBrush::operator=((FSlateBrush *)((longlong)param_1 + 0x24a0),&pFVar15->BackgroundBrush);
  if (*(char *)((longlong)param_1 + 0x24b8) == '\x01') {
    pUVar10 = USlateThemeManager::StaticClass();
    if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar10);
    }
    puVar1 = (undefined8 *)
             (&(pUVar10->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)*(byte *)((longlong)param_1 + 0x24b9) * 0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    *(undefined1 *)((longlong)param_1 + 0x24b8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x24a8) = uVar3;
    *(undefined8 *)((longlong)param_1 + 0x24b0) = uVar4;
  }
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(&FStackX_8,"ProgressBar");
  pFVar16 = (FProgressBarStyle *)
            (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FProgressBarStyle::TypeName,*pFVar6,0,1);
  if ((pFVar16 == (FProgressBarStyle *)0x0) &&
     (pFVar16 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar23 * 8) + 0x9d4c) < ::_TSS0))
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
  FProgressBarStyle::operator=((FProgressBarStyle *)((longlong)param_1 + 0x2550),pFVar16);
  FSlateBrush::UnlinkColors(pFStackX_18);
  FSlateBrush::UnlinkColors(pFStackX_20);
  FSlateBrush::UnlinkColors((FSlateBrush *)((longlong)param_1 + 0x26c0));
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(&FStackX_8,"ScrollBar");
  pFVar17 = ISlateStyle::GetWidgetStyle<FScrollBarStyle>
                      (pIVar5,*pFVar6,(char *)0x0,(FScrollBarStyle *)0x0);
  FScrollBarStyle::operator=((FScrollBarStyle *)((longlong)param_1 + 0x2780),pFVar17);
  FScrollBarStyle::UnlinkColors((FScrollBarStyle *)((longlong)param_1 + 0x2780));
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(&FStackX_8,"ScrollBox");
  pFVar18 = (FScrollBoxStyle *)
            (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FScrollBoxStyle::TypeName,*pFVar6,0,1);
  if ((pFVar18 == (FScrollBoxStyle *)0x0) &&
     (pFVar18 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar23 * 8) + 0x9d4c) < ::_TSS0))
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FScrollBoxStyle::FScrollBoxStyle(&::Default);
      atexit(`FScrollBoxStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FScrollBoxStyle::operator=((FScrollBoxStyle *)((longlong)param_1 + 0x2dd0),pFVar18);
  FSlateBrush::UnlinkColors((FSlateBrush *)((longlong)param_1 + 0x2de0));
  FSlateBrush::UnlinkColors((FSlateBrush *)((longlong)param_1 + 0x2e90));
  FSlateBrush::UnlinkColors((FSlateBrush *)((longlong)param_1 + 0x2f40));
  FSlateBrush::UnlinkColors((FSlateBrush *)((longlong)param_1 + 0x2ff0));
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(&FStackX_8,"Slider");
  pFVar19 = (FSliderStyle *)
            (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FSliderStyle::TypeName,*pFVar6,0,1);
  if ((pFVar19 == (FSliderStyle *)0x0) &&
     (pFVar19 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar23 * 8) + 0x9d4c) < ::_TSS0))
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSliderStyle::FSliderStyle(&::Default);
      atexit(`FSliderStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FSliderStyle::operator=((FSliderStyle *)((longlong)param_1 + 0x30c0),pFVar19);
  FSliderStyle::UnlinkColors((FSliderStyle *)((longlong)param_1 + 0x30c0));
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(&FStackX_8,"SpinBox");
  pFVar20 = ISlateStyle::GetWidgetStyle<FSpinBoxStyle>
                      (pIVar5,*pFVar6,(char *)0x0,(FSpinBoxStyle *)0x0);
  FSpinBoxStyle::operator=((FSpinBoxStyle *)((longlong)param_1 + 0x3500),pFVar20);
  FSpinBoxStyle::UnlinkColors((FSpinBoxStyle *)((longlong)param_1 + 0x3500));
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(&FStackX_8,"TableView.Row");
  pFVar21 = (FTableRowStyle *)
            (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FTableRowStyle::TypeName,*pFVar6,0,1);
  if ((pFVar21 == (FTableRowStyle *)0x0) &&
     (pFVar21 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar23 * 8) + 0x9d4c) < ::_TSS0))
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FTableRowStyle::FTableRowStyle(&::Default);
      atexit(`FTableRowStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FTableRowStyle::operator=((FTableRowStyle *)((longlong)param_1 + 0x3a20),pFVar21);
  FTableRowStyle::UnlinkColors((FTableRowStyle *)((longlong)param_1 + 0x3a20));
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pcVar2 = *(code **)((longlong)*FUMGCoreStyle::Instance.Object + 0x50);
  pFVar6 = ::FName::FName(&FStackX_8,"Throbber.Chunk");
  pFVar9 = (FSlateBrush *)(*pcVar2)(pIVar5,*pFVar6);
  FSlateBrush::operator=((FSlateBrush *)((longlong)param_1 + 0x4570),pFVar9);
  FSlateBrush::UnlinkColors((FSlateBrush *)((longlong)param_1 + 0x4570));
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(&FStackX_8,"NormalText");
  pFVar22 = ISlateStyle::GetWidgetStyle<FTextBlockStyle>
                      (pIVar5,*pFVar6,(char *)0x0,(FTextBlockStyle *)0x0);
  FTextBlockStyle::operator=((FTextBlockStyle *)((longlong)param_1 + 0x4620),pFVar22);
  FSlateColor::Unlink((FSlateColor *)((longlong)param_1 + 0x4688));
  FSlateColor::Unlink((FSlateColor *)((longlong)param_1 + 0x46b4));
  FSlateBrush::UnlinkColors((FSlateBrush *)((longlong)param_1 + 0x46e0));
  FSlateBrush::UnlinkColors((FSlateBrush *)((longlong)param_1 + 0x4790));
  FSlateBrush::UnlinkColors((FSlateBrush *)((longlong)param_1 + 0x4840));
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar6 = ::FName::FName(&FStackX_8,"TreeView");
  pFVar15 = ISlateStyle::GetWidgetStyle<FTableViewStyle>
                      (pIVar5,*pFVar6,(char *)0x0,(FTableViewStyle *)0x0);
  FSlateBrush::operator=((FSlateBrush *)((longlong)param_1 + 0x4910),&pFVar15->BackgroundBrush);
  FTableViewStyle::UnlinkColors((FTableViewStyle *)((longlong)param_1 + 0x4900));
  return;
}

