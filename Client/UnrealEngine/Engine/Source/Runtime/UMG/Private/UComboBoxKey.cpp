// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 67

// GetWidgetStyle_WrapperImpl @ 14696b830

void __cdecl UComboBoxKey::GetWidgetStyle_WrapperImpl(void *param_1,void *param_2)

{
  FComboBoxStyle *pFVar1;
  FComboBoxStyle local_5c8;
  
  pFVar1 = FComboBoxStyle::FComboBoxStyle(&local_5c8,(FComboBoxStyle *)((longlong)param_1 + 0x1d0));
  FComboBoxStyle::operator=(param_2,pFVar1);
  FComboBoxStyle::~FComboBoxStyle(&local_5c8);
  return;
}

// SetWidgetStyle_WrapperImpl @ 14696b890

void __cdecl UComboBoxKey::SetWidgetStyle_WrapperImpl(void *param_1,void *param_2)

{
  FComboBoxStyle::operator=((FComboBoxStyle *)((longlong)param_1 + 0x1d0),param_2);
  if (*(SWidget **)((longlong)param_1 + 0x19c0) != (SWidget *)0x0) {
    SWidget::Invalidate(*(SWidget **)((longlong)param_1 + 0x19c0),Layout);
    return;
  }
  return;
}

// GetItemStyle_WrapperImpl @ 14696b950

void __cdecl UComboBoxKey::GetItemStyle_WrapperImpl(void *param_1,void *param_2)

{
  FTableRowStyle *pFVar1;
  FTableRowStyle local_b58;
  
  pFVar1 = FTableRowStyle::FTableRowStyle(&local_b58,(FTableRowStyle *)((longlong)param_1 + 0x790));
  FTableRowStyle::operator=(param_2,pFVar1);
  FTableRowStyle::~FTableRowStyle(&local_b58);
  return;
}

// SetItemStyle_WrapperImpl @ 14696b9a0

void __cdecl UComboBoxKey::SetItemStyle_WrapperImpl(void *param_1,void *param_2)

{
  FTableRowStyle::operator=((FTableRowStyle *)((longlong)param_1 + 0x790),param_2);
  if (*(SWidget **)((longlong)param_1 + 0x19c0) != (SWidget *)0x0) {
    SWidget::Invalidate(*(SWidget **)((longlong)param_1 + 0x19c0),Layout);
    return;
  }
  return;
}

// GetScrollBarStyle_WrapperImpl @ 14696b9e0

void __cdecl UComboBoxKey::GetScrollBarStyle_WrapperImpl(void *param_1,void *param_2)

{
  FScrollBarStyle *pFVar1;
  FScrollBarStyle local_658;
  
  pFVar1 = FScrollBarStyle::FScrollBarStyle
                     (&local_658,(FScrollBarStyle *)((longlong)param_1 + 0x12e0));
  FScrollBarStyle::operator=(param_2,pFVar1);
  FScrollBarStyle::~FScrollBarStyle(&local_658);
  return;
}

// GetForegroundColor_WrapperImpl @ 14696ba70

void __cdecl UComboBoxKey::GetForegroundColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x1938);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x1940);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x1930);
  *(undefined8 *)((longlong)param_2 + 8) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x10) = uVar1;
  return;
}

// GetContentPadding_WrapperImpl @ 14696ba90

void __cdecl UComboBoxKey::GetContentPadding_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x194c);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x1944);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetContentPadding_WrapperImpl @ 14696bab0

void __cdecl UComboBoxKey::SetContentPadding_WrapperImpl(void *param_1,void *param_2)

{
  FMargin local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x1944) = local_18._0_8_;
  *(undefined8 *)((longlong)param_1 + 0x194c) = local_18._8_8_;
  if (*(SComboButton **)((longlong)param_1 + 0x19c0) != (SComboButton *)0x0) {
    SComboButton::SetButtonContentPadding(*(SComboButton **)((longlong)param_1 + 0x19c0),&local_18);
  }
  return;
}

// GetMaxListHeight_WrapperImpl @ 14696baf0

void __cdecl UComboBoxKey::GetMaxListHeight_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1954);
  return;
}

// SetMaxListHeight_WrapperImpl @ 14696bb00

void __cdecl UComboBoxKey::SetMaxListHeight_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_38;
  
  lVar2 = *(longlong *)((longlong)param_1 + 0x19c0);
  fVar1 = *(float *)param_2;
  *(float *)((longlong)param_1 + 0x1954) = fVar1;
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x4b8) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_38.Getter._16_8_ = 0;
    local_38.bIsSet = true;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    local_38.Value.Size = fVar1;
    SBox::SetMaxDesiredHeight(*(SBox **)(lVar2 + 0x4b8),&local_38);
  }
  return;
}

// GetbHasDownArrow_WrapperImpl @ 14696bba0

void __cdecl UComboBoxKey::GetbHasDownArrow_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1958);
  return;
}

// SetbHasDownArrow_WrapperImpl @ 14696bbf0

void __cdecl UComboBoxKey::SetbHasDownArrow_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FSlot *pFVar6;
  undefined8 *puVar7;
  uint uVar8;
  ISlateAttributeContainer *pIVar9;
  undefined1 auStack_b8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_a0;
  ForAnyElementType FStack_98;
  ulonglong uStack_90;
  TAttribute<EVisibility> TStack_88;
  TAttribute<EVisibility> TStack_68;
  FDestructionSentinel FStack_48;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  cVar1 = *(char *)param_2;
  *(char *)((longlong)param_1 + 0x1958) = cVar1;
  lVar2 = *(longlong *)((longlong)param_1 + 0x19c0);
  if (lVar2 == 0) {
    return;
  }
  if ((*(float *)(*(longlong *)(lVar2 + 1000) + 0x450) == 0.0) &&
     (*(float *)(*(longlong *)(lVar2 + 1000) + 0x454) == 0.0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((*(longlong *)(lVar2 + 0x3b8) == 0) || (*(int *)(*(longlong *)(lVar2 + 0x3b8) + 0x240) < 2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("HBox && HBox->NumSlots() >= 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SComboButton.cpp"
                       ,0xca,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(longlong *)(lVar2 + 0x3b8) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar6 = SHorizontalBox::GetSlot(*(SHorizontalBox **)(lVar2 + 0x3b8),1);
  if (cVar1 == '\0') {
    uVar8 = 2;
  }
  else {
    uVar8 = (uint)*(byte *)(*(longlong *)(lVar2 + 1000) + 0x550);
  }
  if (*(uint *)&pFVar6->field_0x3c != uVar8) {
    *(uint *)&pFVar6->field_0x3c = uVar8;
    FSlotBase::Invalidate((FSlotBase *)pFVar6,Layout);
  }
  if (*(longlong *)(lVar2 + 0x3b8) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar6 = SHorizontalBox::GetSlot(*(SHorizontalBox **)(lVar2 + 0x3b8),1);
  if (cVar1 == '\0') {
    puVar7 = &uStack_20;
    uStack_20 = 0;
    uStack_18 = 0;
  }
  else {
    puVar7 = &uStack_30;
    uStack_30 = *(undefined8 *)(*(longlong *)(lVar2 + 1000) + 0x540);
    uStack_28 = *(undefined8 *)(*(longlong *)(lVar2 + 1000) + 0x548);
  }
  auStack_b8._0_8_ = *puVar7;
  auStack_b8._8_8_ = puVar7[1];
  auStack_b8[0x10] = true;
  uStack_90 = 0;
  pIVar9 = (ISlateAttributeContainer *)&pFVar6->field_0x20;
  TStack_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_98.Data = (FScriptContainerElement *)0x0;
  if (&pFVar6->field_0x28 == (undefined1 *)0x0) {
    pIVar9 = (ISlateAttributeContainer *)&DAT_00000020;
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
  ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
            *)&pFVar6->field_0x28,pIVar9,(TAttribute<FMargin> *)auStack_b8,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_a0,(FWriteAccessScope *)&FStack_48);
  if (((int)uStack_90 != 0) && (FStack_98.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,0x10);
    uStack_90 = uStack_90 & 0xffffffff00000000;
  }
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  if (FStack_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_98.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_a0.AccessDetector);
  if (*(longlong *)(lVar2 + 0x3d8) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ForegroundArrowImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SComboButton.cpp"
                       ,0xce,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(longlong *)(lVar2 + 0x3d8) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  TStack_88.bIsSet = true;
  TStack_88.Getter._0_8_ = 0;
  TStack_88.Getter._8_8_ = 0;
  TStack_88.Value.Value.Value = EVisibility::Collapsed.Value.Value;
  if (cVar1 != '\0') {
    TStack_88.Value.Value.Value = EVisibility::Visible.Value.Value;
  }
  TStack_88.Getter._16_8_ = 0;
  SLeafWidget::SetVisibility(*(SLeafWidget **)(lVar2 + 0x3d8),&TStack_88);
  if (*(longlong *)(lVar2 + 0x3c8) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShadowImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SComboButton.cpp"
                       ,0xd0,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(longlong *)(lVar2 + 0x3c8) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  if ((cVar1 == '\0') || (TStack_68.Value.Value.Value = EVisibility::Visible.Value.Value, !bVar4)) {
    TStack_68.Value.Value.Value = EVisibility::Collapsed.Value.Value;
  }
  TStack_68.bIsSet = true;
  TStack_68.Getter._16_8_ = 0;
  TStack_68.Getter._0_8_ = 0;
  TStack_68.Getter._8_8_ = 0;
  SLeafWidget::SetVisibility(*(SLeafWidget **)(lVar2 + 0x3c8),&TStack_68);
  return;
}

// GetbEnableGamepadNavigationMode_WrapperImpl @ 14696bd20

void __cdecl UComboBoxKey::GetbEnableGamepadNavigationMode_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1959);
  return;
}

// SetbEnableGamepadNavigationMode_WrapperImpl @ 14696bd30

void __cdecl UComboBoxKey::SetbEnableGamepadNavigationMode_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0x1959) = uVar1;
  if (*(longlong *)((longlong)param_1 + 0x19c0) != 0) {
    *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x19c0) + 0x4b0) = uVar1;
  }
  return;
}

// GetbIsFocusable_WrapperImpl @ 14696bd60

void __cdecl UComboBoxKey::GetbIsFocusable_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x195a);
  return;
}

// StaticClass @ 14696bd70

UClass * __cdecl UComboBoxKey::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComboBoxKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ComboBoxKey",&Z_Registration_Info_UClass_UComboBoxKey.InnerSingleton
               ,StaticRegisterNativesUComboBoxKey,0x19e0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UComboBoxKey>,
               InternalVTableHelperCtorCaller<UComboBoxKey>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComboBoxKey.InnerSingleton;
}

// UComboBoxKey @ 146989000

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UComboBoxKey * __thiscall UComboBoxKey::UComboBoxKey(UComboBoxKey *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  (this->Options).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->Options).ArrayNum = 0;
  (this->Options).ArrayMax = 0;
  (this->SelectedOption).ComparisonIndex = 0;
  (this->SelectedOption).Number = 0;
  FComboBoxStyle::FComboBoxStyle(&this->WidgetStyle);
  FTableRowStyle::FTableRowStyle(&this->ItemStyle);
  FScrollBarStyle::FScrollBarStyle(&this->ScrollBarStyle);
  (this->ForegroundColor).ColorUseRule = UseColor_Specified;
  *(undefined8 *)&this->OnGenerateContentWidget = 0;
  *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->ForegroundColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->ForegroundColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->ContentPadding).Left = 0.0;
  (this->ContentPadding).Top = 0.0;
  (this->ContentPadding).Right = 0.0;
  (this->ContentPadding).Bottom = 0.0;
  *(undefined8 *)&(this->OnGenerateContentWidget).field_0x8 = 0;
  *(undefined8 *)&(this->OnGenerateContentWidget).field_0x10 = 0;
  *(undefined8 *)&this->OnGenerateItemWidget = 0;
  *(undefined8 *)&(this->OnGenerateItemWidget).field_0x8 = 0;
  *(undefined8 *)&(this->OnGenerateItemWidget).field_0x10 = 0;
  *(undefined8 *)&this->OnSelectionChanged = 0;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnOpening = 0;
  *(undefined8 *)&(this->OnOpening).field_0x8 = 0;
  *(undefined8 *)&(this->OnOpening).field_0x10 = 0;
  (this->MyComboBox).Object = (SComboBox<FName> *)0x0;
  (this->MyComboBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ComboBoxContent).Object = (SBox *)0x0;
  (this->ComboBoxContent).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UComboBoxKey @ 146989120

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UComboBoxKey * __thiscall UComboBoxKey::UComboBoxKey(UComboBoxKey *this)

{
  undefined8 uVar1;
  ESlateColorStylingMode EVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  FObjectInitializer *pFVar5;
  FDefaultStyleCache *pFVar6;
  
  pFVar5 = FObjectInitializer::Get();
  UWidget::UWidget((UWidget *)this,pFVar5);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  (this->Options).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->Options).ArrayNum = 0;
  (this->Options).ArrayMax = 0;
  (this->SelectedOption).ComparisonIndex = 0;
  (this->SelectedOption).Number = 0;
  FComboBoxStyle::FComboBoxStyle(&this->WidgetStyle);
  FTableRowStyle::FTableRowStyle(&this->ItemStyle);
  FScrollBarStyle::FScrollBarStyle(&this->ScrollBarStyle);
  (this->ForegroundColor).ColorUseRule = UseColor_Specified;
  *(undefined8 *)&this->OnGenerateContentWidget = 0;
  *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->ForegroundColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->ForegroundColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->ContentPadding).Left = 0.0;
  (this->ContentPadding).Top = 0.0;
  (this->ContentPadding).Right = 0.0;
  (this->ContentPadding).Bottom = 0.0;
  *(undefined8 *)&(this->OnGenerateContentWidget).field_0x8 = 0;
  *(undefined8 *)&(this->OnGenerateContentWidget).field_0x10 = 0;
  *(undefined8 *)&this->OnGenerateItemWidget = 0;
  *(undefined8 *)&(this->OnGenerateItemWidget).field_0x8 = 0;
  *(undefined8 *)&(this->OnGenerateItemWidget).field_0x10 = 0;
  *(undefined8 *)&this->OnSelectionChanged = 0;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnOpening = 0;
  *(undefined8 *)&(this->OnOpening).field_0x8 = 0;
  *(undefined8 *)&(this->OnOpening).field_0x10 = 0;
  (this->MyComboBox).Object = (SComboBox<FName> *)0x0;
  (this->MyComboBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ComboBoxContent).Object = (SBox *)0x0;
  (this->ComboBoxContent).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar6 = UE::Slate::Private::FDefaultStyleCache::Get();
  FComboBoxStyle::operator=(&this->WidgetStyle,&(pFVar6->Runtime).ComboBoxStyle);
  pFVar6 = UE::Slate::Private::FDefaultStyleCache::Get();
  FTableRowStyle::operator=(&this->ItemStyle,&(pFVar6->Runtime).TableRowStyle);
  pFVar6 = UE::Slate::Private::FDefaultStyleCache::Get();
  FScrollBarStyle::operator=(&this->ScrollBarStyle,&(pFVar6->Runtime).ScrollBarStyle);
  (this->ContentPadding).Left = 4.0;
  (this->ContentPadding).Top = 2.0;
  (this->ContentPadding).Right = 4.0;
  (this->ContentPadding).Bottom = 2.0;
  EVar2 = (this->ItemStyle).TextColor.ColorUseRule;
  EVar3 = (this->ItemStyle).TextColor.ColorTableId;
  uVar4 = *(undefined2 *)&(this->ItemStyle).TextColor.field_0x12;
  uVar1 = *(undefined8 *)((longlong)&(this->ItemStyle).TextColor.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(this->ItemStyle).TextColor.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  (this->ForegroundColor).ColorUseRule = EVar2;
  (this->ForegroundColor).ColorTableId = EVar3;
  *(undefined2 *)&(this->ForegroundColor).field_0x12 = uVar4;
  this->MaxListHeight = 450.0;
  this->bHasDownArrow = true;
  this->bEnableGamepadNavigationMode = true;
  this->bIsFocusable = true;
  return this;
}

// ~UComboBoxKey @ 146992880

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UComboBoxKey::~UComboBoxKey(UComboBoxKey *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComboBoxContent).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyComboBox).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnOpening).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOpening);
  pvVar1 = *(void **)&(this->OnSelectionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectionChanged);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGenerateItemWidget);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGenerateContentWidget);
  FScrollBarStyle::~FScrollBarStyle(&this->ScrollBarStyle);
  FTableRowStyle::~FTableRowStyle(&this->ItemStyle);
  FComboBoxStyle::~FComboBoxStyle(&this->WidgetStyle);
  pFVar2 = (this->Options).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// AddOption @ 1469a2630

void __thiscall UComboBoxKey::AddOption(UComboBoxKey *this,FName param_1)

{
  SComboBox<FName> *this_00;
  int iVar1;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  iVar1 = TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                    (&this->Options,local_res10);
  if ((-1 < iVar1) && (this_00 = (this->MyComboBox).Object, this_00 != (SComboBox<FName> *)0x0)) {
    SComboBox<FName>::RefreshOptions(this_00);
  }
  return;
}

// ClearOptions @ 1469a6fb0

void __thiscall UComboBoxKey::ClearOptions(UComboBoxKey *this)

{
  SComboBox<FName> *pSVar1;
  code *pcVar2;
  bool bVar3;
  
  (this->Options).ArrayNum = 0;
  if ((this->Options).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->Options).AllocatorInstance,0,&(this->Options).ArrayMax);
  }
  ClearSelection(this);
  pSVar1 = (this->MyComboBox).Object;
  if (pSVar1 != (SComboBox<FName> *)0x0) {
    if ((pSVar1->ComboListView).Object == (SListView<FName> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0001469a7040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(pSVar1->ComboListView).Object + 0x248))();
    return;
  }
  return;
}

// ClearSelection @ 1469a7200

void __thiscall UComboBoxKey::ClearSelection(UComboBoxKey *this)

{
  SComboBox<FName> *pSVar1;
  SListView<FName> *pSVar2;
  code *pcVar3;
  bool bVar4;
  Type *pTVar5;
  
  pSVar1 = (this->MyComboBox).Object;
  if (pSVar1 != (SComboBox<FName> *)0x0) {
    if ((pSVar1->ComboListView).Object == (SListView<FName> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pSVar2 = (pSVar1->ComboListView).Object;
    pTVar5 = TAttribute<enum_ESelectionMode::Type>::Get(&pSVar2->field_0x3e8);
    if ((*pTVar5 != None) &&
       (*(int *)&(pSVar2->SelectedItems).Elements.field_0x8 !=
        *(int *)&(pSVar2->SelectedItems).Elements.field_0x34)) {
      (**(code **)(*(longlong *)&pSVar2->field_0x588 + 0x30))(&pSVar2->field_0x588);
                    /* WARNING: Could not recover jumptable at 0x0001469a7295. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)&pSVar2->field_0x588 + 0x40))(&pSVar2->field_0x588,3);
      return;
    }
  }
  return;
}

// FGenerateWidgetEvent_DelegateWrapper @ 1469c7240

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __cdecl
UComboBoxKey::FGenerateWidgetEvent_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FName param_2)

{
  FName local_18;
  UWidget *local_10;
  
  local_10 = (UWidget *)0x0;
  local_18 = param_2;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_18);
  return local_10;
}

// FOnOpeningEvent_DelegateWrapper @ 1469c8080

void __cdecl
UComboBoxKey::FOnOpeningEvent_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FOnSelectionChangedEvent_DelegateWrapper @ 1469c83c0

void __cdecl
UComboBoxKey::FOnSelectionChangedEvent_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FName param_2,Type param_3)

{
  FName local_18;
  undefined1 local_10;
  
  local_10 = (undefined1)param_3;
  local_18 = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  return;
}

// GenerateContent @ 1469c9cb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall UComboBoxKey::GenerateContent(UComboBoxKey *this)

{
  TSharedPtr<SBox,1> *this_00;
  code *pcVar1;
  UWidget *this_01;
  bool bVar2;
  SBox *pSVar3;
  TSharedRef<SWidget,1> *pTVar4;
  FArguments *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  TSharedRef<STextBlock,1> *pTVar9;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  FName local_648;
  UWidget *local_640;
  TSharedRef<SWidget,1> local_638;
  TAttribute<FText> local_628;
  TSharedRef<SWidget,1> local_5f8;
  TSharedRef<STextBlock,1> local_5e8;
  FText local_5d8;
  FText local_5c8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5b8;
  FText local_5a0;
  FTextFormat local_590;
  FArguments local_580;
  
  this_00 = &this->ComboBoxContent;
  if (this_00->Object != (SBox *)0x0) {
    bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnGenerateContentWidget
                      );
    if (bVar2) {
      local_648 = this->SelectedOption;
      local_640 = (UWidget *)0x0;
      TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
                ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnGenerateContentWidget,
                 &local_648);
      this_01 = local_640;
      if (local_640 == (UWidget *)0x0) {
        if ((this_00->Object == (SBox *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        SBox::SetContent(this_00->Object,&SNullWidget::NullWidget);
      }
      else {
        pSVar3 = TSharedPtr<SBox,1>::operator->(this_00);
        pTVar4 = UWidget::TakeWidget(this_01,&local_5f8);
        SBox::SetContent(pSVar3,pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_5f8.SharedReferenceCount.ReferenceController);
      }
    }
    else {
      pSVar3 = TSharedPtr<SBox,1>::operator->(this_00);
      pFVar5 = STextBlock::FArguments::FArguments(&local_580);
      pFVar6 = FText::FromName(&local_5a0,&this->SelectedOption);
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_5c8,L"UMG",L"WarningMissingOnGenerateContentWidget",
                          L"{0} Missing OnGenerateContentWidget");
      pFVar8 = FTextFormat::FTextFormat(&local_590,pFVar7,Default);
      pFVar6 = FText::Format<FText>(&local_5d8,pFVar8,pFVar6);
      FText::FText(&local_628.Value,pFVar6);
      local_628.bIsSet = true;
      local_628.Getter._16_8_ = 0;
      local_628.Getter._0_8_ = 0;
      local_628.Getter._8_8_ = 0;
      pFVar5 = STextBlock::FArguments::Text(pFVar5,&local_628);
      FLLMScope::FLLMScope
                (local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_res20,&local_res18,true);
      TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                (&local_5b8,"STextBlock",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ComboBoxKey.cpp"
                 ,0x13c,local_res8);
      FMemScope::~FMemScope(&local_res20);
      FLLMScope::~FLLMScope(local_res10);
      pTVar9 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                         (&local_5b8,&local_5e8,pFVar5);
      local_638.Object = (SWidget *)pTVar9->Object;
      local_638.SharedReferenceCount.ReferenceController =
           (pTVar9->SharedReferenceCount).ReferenceController;
      if (local_638.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_638.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_638.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SBox::SetContent(pSVar3,&local_638);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_638.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_5e8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_5b8._Widget.SharedReferenceCount.ReferenceController);
      if (local_5d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_5d8.TextData.Reference + 0x10))();
      }
      if (local_5c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_5c8.TextData.Reference + 0x10))();
      }
      STextBlock::FArguments::~FArguments(&local_580);
    }
  }
  return;
}

// GetContentPadding @ 1469ce9d0

FMargin * __thiscall
UComboBoxKey::GetContentPadding(UComboBoxKey *this,FMargin *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->ContentPadding).Top;
  fVar2 = (this->ContentPadding).Right;
  fVar3 = (this->ContentPadding).Bottom;
  __return_storage_ptr__->Left = (this->ContentPadding).Left;
  __return_storage_ptr__->Top = fVar1;
  __return_storage_ptr__->Right = fVar2;
  __return_storage_ptr__->Bottom = fVar3;
  return __return_storage_ptr__;
}

// GetFieldNotificationDescriptor @ 1469d0320

IClassDescriptor * __thiscall UComboBoxKey::GetFieldNotificationDescriptor(UComboBoxKey *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UComboBoxKey::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetForegroundColor @ 1469d0bd0

FSlateColor * __thiscall
UComboBoxKey::GetForegroundColor(UComboBoxKey *this,FSlateColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  ESlateColorStylingMode EVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  
  EVar2 = (this->ForegroundColor).ColorUseRule;
  EVar3 = (this->ForegroundColor).ColorTableId;
  uVar4 = *(undefined2 *)&(this->ForegroundColor).field_0x12;
  uVar1 = *(undefined8 *)((longlong)&(this->ForegroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 =
       *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar1;
  __return_storage_ptr__->ColorUseRule = EVar2;
  __return_storage_ptr__->ColorTableId = EVar3;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar4;
  return __return_storage_ptr__;
}

// GetItemStyle @ 1469d18d0

FTableRowStyle * __thiscall UComboBoxKey::GetItemStyle(UComboBoxKey *this)

{
  return &this->ItemStyle;
}

// GetMaxListHeight @ 1469d1cb0

float __thiscall UComboBoxKey::GetMaxListHeight(UComboBoxKey *this)

{
  return this->MaxListHeight;
}

// GetPrivateStaticClass @ 1469d3af0

UClass * __cdecl UComboBoxKey::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComboBoxKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ComboBoxKey",&Z_Registration_Info_UClass_UComboBoxKey.InnerSingleton
               ,StaticRegisterNativesUComboBoxKey,0x19e0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UComboBoxKey>,
               InternalVTableHelperCtorCaller<UComboBoxKey>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComboBoxKey.InnerSingleton;
}

// GetScrollBarStyle @ 1469d7090

FScrollBarStyle * __thiscall UComboBoxKey::GetScrollBarStyle(UComboBoxKey *this)

{
  return &this->ScrollBarStyle;
}

// GetSelectedOption @ 1469d8340

FName __thiscall UComboBoxKey::GetSelectedOption(UComboBoxKey *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->SelectedOption;
  return in_RDX;
}

// GetWidgetStyle @ 1469da360

FComboBoxStyle * __thiscall UComboBoxKey::GetWidgetStyle(UComboBoxKey *this)

{
  return &this->WidgetStyle;
}

// HandleGenerateItemWidget @ 1469dafa0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UComboBoxKey::HandleGenerateItemWidget
          (UComboBoxKey *this,TSharedRef<SWidget,1> *__return_storage_ptr__,FName param_1)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  FArguments *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  TSharedRef<STextBlock,1> *pTVar9;
  FName local_res18;
  T0RequiredArgs local_res20 [8];
  FLLMScope local_638 [2];
  FDestructionSentinel local_630;
  FText local_618;
  bool local_608;
  undefined1 local_600 [8];
  ForAnyElementType FStack_5f8;
  ulonglong local_5f0;
  FName local_5e8;
  TSharedRef<STextBlock,1> local_5e0;
  FText local_5d0;
  FText local_5c0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5b0;
  FText local_598;
  FTextFormat local_588;
  FArguments local_578;
  
  local_res18 = param_1;
  bVar4 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnGenerateItemWidget);
  if (bVar4) {
    local_630.AccessType = local_res18.ComparisonIndex.Value;
    local_630._4_4_ = local_res18.Number;
    local_630.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnGenerateItemWidget,&local_630
              );
    if ((UWidget *)local_630.Accessor != (UWidget *)0x0) {
      UWidget::TakeWidget((UWidget *)local_630.Accessor,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
    FVar3 = SNullWidget::NullWidget.SharedReferenceCount;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar3.ReferenceController)->SharedReferenceCount;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  else {
    pFVar5 = STextBlock::FArguments::FArguments(&local_578);
    pFVar6 = FText::FromName(&local_598,&local_res18);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_5c0,L"UMG",L"WarningMissingOnGenerateItemWidget",
                        L"{0} Missing OnGenerateItemWidget");
    pFVar8 = FTextFormat::FTextFormat(&local_588,pFVar7,Default);
    pFVar6 = FText::Format<FText>(&local_5d0,pFVar8,pFVar6);
    FText::FText(&local_618,pFVar6);
    local_608 = true;
    local_5f0 = 0;
    local_600 = (undefined1  [8])0x0;
    FStack_5f8.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar5->_Text).Value,&local_618);
    (pFVar5->_Text).bIsSet = local_608;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_600);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_600,
               (FWriteAccessScope *)&local_630);
    if (((int)local_5f0 != 0) && (FStack_5f8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_5f8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5f8,0,0,0x10);
      local_5f0 = local_5f0 & 0xffffffff00000000;
    }
    if (local_630.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_630.Accessor,&local_630);
    }
    if (FStack_5f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_5f8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_600);
    if (local_618.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_618.TextData.Reference + 0x10))();
    }
    FLLMScope::FLLMScope(local_638,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_5e8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_630,&local_5e8,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_5b0,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ComboBoxKey.cpp"
               ,0x162,local_res20);
    FMemScope::~FMemScope((FMemScope *)&local_630);
    FLLMScope::~FLLMScope(local_638);
    pTVar9 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                       (&local_5b0,&local_5e0,pFVar5);
    __return_storage_ptr__->Object = (SWidget *)pTVar9->Object;
    pTVar2 = (pTVar9->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5e0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5b0._Widget.SharedReferenceCount.ReferenceController);
    if (local_5d0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5d0.TextData.Reference + 0x10))();
    }
    if (local_5c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5c0.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_578);
  }
  return __return_storage_ptr__;
}

// HandleOpening @ 1469dd870

void __thiscall UComboBoxKey::HandleOpening(UComboBoxKey *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnOpening,(void *)0x0);
  return;
}

// HandleSelectionChanged @ 1469ddc20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UComboBoxKey::HandleSelectionChanged(UComboBoxKey *this,FName param_1,Type param_2)

{
  FFieldId local_18;
  
  if (this->SelectedOption != param_1) {
    this->SelectedOption = param_1;
    local_18.FieldName = FFieldNotificationClassDescriptor::SelectedOption.FieldName;
    local_18.BitNumber = FFieldNotificationClassDescriptor::SelectedOption.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
    local_18.BitNumber = CONCAT31(local_18.BitNumber._1_3_,(char)param_2);
    local_18.FieldName = param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSelectionChanged,
               &local_18);
    GenerateContent(this);
  }
  return;
}

// InitForegroundColor @ 1469dfc70

void __thiscall UComboBoxKey::InitForegroundColor(UComboBoxKey *this,FSlateColor *param_1)

{
  undefined8 uVar1;
  ESlateColorStylingMode EVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  undefined1 local_res8 [8];
  
  if ((this->MyComboBox).Object != (SComboBox<FName> *)0x0) {
    `UComboBoxKey::InitForegroundColor'::__l2::<lambda_1>::operator()(local_res8);
  }
  uVar1 = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  EVar2 = param_1->ColorUseRule;
  EVar3 = param_1->ColorTableId;
  uVar4 = *(undefined2 *)&param_1->field_0x12;
  *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->ForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  (this->ForegroundColor).ColorUseRule = EVar2;
  (this->ForegroundColor).ColorTableId = EVar3;
  *(undefined2 *)&(this->ForegroundColor).field_0x12 = uVar4;
  return;
}

// InitIsFocusable @ 1469dfdc0

void __thiscall UComboBoxKey::InitIsFocusable(UComboBoxKey *this,bool param_1)

{
  undefined1 local_res10 [24];
  
  if ((this->MyComboBox).Object != (SComboBox<FName> *)0x0) {
    `UComboBoxKey::InitIsFocusable'::__l2::<lambda_1>::operator()(local_res10);
    this->bIsFocusable = param_1;
    return;
  }
  this->bIsFocusable = param_1;
  return;
}

// InitScrollBarStyle @ 1469e00a0

void __thiscall UComboBoxKey::InitScrollBarStyle(UComboBoxKey *this,FScrollBarStyle *param_1)

{
  undefined1 local_res8 [8];
  
  if ((this->MyComboBox).Object != (SComboBox<FName> *)0x0) {
    `UComboBoxKey::InitScrollBarStyle'::__l2::<lambda_1>::operator()(local_res8);
  }
  FScrollBarStyle::operator=(&this->ScrollBarStyle,param_1);
  return;
}

// IsEnableGamepadNavigationMode @ 1469e1550

bool __thiscall UComboBoxKey::IsEnableGamepadNavigationMode(UComboBoxKey *this)

{
  return this->bEnableGamepadNavigationMode;
}

// IsFocusable @ 1469e1710

bool __thiscall UComboBoxKey::IsFocusable(UComboBoxKey *this)

{
  return this->bIsFocusable;
}

// IsHasDownArrow @ 1469e1750

bool __thiscall UComboBoxKey::IsHasDownArrow(UComboBoxKey *this)

{
  return this->bHasDownArrow;
}

// IsOpen @ 1469e2780

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UComboBoxKey::IsOpen(UComboBoxKey *this)

{
  SComboBox<FName> *this_00;
  bool bVar1;
  
  this_00 = (this->MyComboBox).Object;
  if (this_00 != (SComboBox<FName> *)0x0) {
    bVar1 = SMenuAnchor::IsOpen((SMenuAnchor *)this_00);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// RebuildWidget @ 1469fa670

TSharedRef<SWidget,1> * __thiscall
UComboBoxKey::RebuildWidget(UComboBoxKey *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  SBox *pSVar3;
  SComboBox<FName> *pSVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  FArguments *pFVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  FArguments *pFVar14;
  TSharedRef<SBox,1> *pTVar15;
  TSharedRef<SWidget,1> *pTVar16;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  longlong lStack_880;
  TSlateDecl<SComboBox<FName>,RequiredArgs::T0RequiredArgs> local_878;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined4 local_850;
  undefined1 local_84c;
  undefined1 local_848 [8];
  ForAnyElementType FStack_840;
  ulonglong local_838;
  SComboBox<FName> *local_830;
  FSharedReferencer<1> local_828;
  undefined8 local_820;
  undefined8 uStack_818;
  undefined1 local_810;
  undefined1 local_808 [8];
  ForAnyElementType FStack_800;
  ulonglong local_7f8;
  TSharedRef<SBox,1> local_7f0;
  UComboBoxKey *local_7e0;
  UComboBoxKey *local_7d8;
  UComboBoxKey *local_7d0;
  FName local_7c8;
  FMemScope local_7c0;
  FName local_7b8;
  FMemScope local_7b0;
  undefined8 local_7a8;
  FSharedReferencer<1> FStack_7a0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_798;
  FDestructionSentinel local_780;
  FDestructionSentinel local_768;
  FDestructionSentinel local_750;
  undefined1 *local_738;
  FDestructionSentinel local_730;
  undefined1 *local_718;
  FDestructionSentinel local_710;
  undefined1 *local_6f8;
  SBox *local_6f0;
  TReferenceControllerBase<1> *pTStack_6e8;
  undefined1 local_6e0 [576];
  undefined1 local_4a0 [48];
  undefined1 local_470 [48];
  FSharedReferencer<1> local_440;
  undefined1 local_438 [24];
  undefined1 local_420 [24];
  undefined1 local_408 [32];
  FSharedReferencer<1> local_3e8;
  FArguments local_388;
  
  pFVar11 = SComboBox<FName>::FArguments::FArguments((FArguments *)local_6e0);
  pFVar11->_ComboBoxStyle = &this->WidgetStyle;
  pFVar11->_ItemStyle = &this->ItemStyle;
  local_850._0_1_ = (this->ForegroundColor).ColorUseRule;
  local_850._1_1_ = (this->ForegroundColor).ColorTableId;
  local_850._2_2_ = *(undefined2 *)&(this->ForegroundColor).field_0x12;
  local_860 = *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0;
  uStack_858 = *(undefined8 *)((longlong)&(this->ForegroundColor).SpecifiedColor.field0_0x0 + 8);
  local_84c = 1;
  local_838 = 0;
  local_848 = (undefined1  [8])0x0;
  FStack_840.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(pFVar11->_ForegroundColor).Value.SpecifiedColor.field0_0x0 = local_860;
  *(undefined8 *)((longlong)&(pFVar11->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_858;
  (pFVar11->_ForegroundColor).Value.ColorUseRule = (undefined1)local_850;
  (pFVar11->_ForegroundColor).Value.ColorTableId = local_850._1_1_;
  *(undefined2 *)&(pFVar11->_ForegroundColor).Value.field_0x12 = local_850._2_2_;
  (pFVar11->_ForegroundColor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_ForegroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_848);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_848,
             (FWriteAccessScope *)&local_780);
  if (((int)local_838 != 0) && (FStack_840.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_840.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_840,0,0,0x10);
    local_838 = local_838 & 0xffffffff00000000;
  }
  if (local_780.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_780.Accessor,&local_780);
  }
  if (FStack_840.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_840.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_848);
  pFVar11->_OptionsSource_ArrayPointer = (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar11->_OptionsSource_ObservableArrayPointer = (TObservableArray<FName> *)0x0;
  local_7a8 = 0;
  FStack_7a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&pFVar11->_OptionsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<FName>,1> *)&local_7a8) {
    (pFVar11->_OptionsSource_SharedObservableArray).Object = (TObservableArray<FName> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar11->_OptionsSource_SharedObservableArray).SharedReferenceCount,&FStack_7a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_7a0.ReferenceController);
  pFVar11->_OptionsSource_ArrayPointer = &this->Options;
  pFVar11->_InitiallySelectedItem = this->SelectedOption;
  local_820._0_4_ = (this->ContentPadding).Left;
  local_820._4_4_ = (this->ContentPadding).Top;
  uStack_818._0_4_ = (this->ContentPadding).Right;
  uStack_818._4_4_ = (this->ContentPadding).Bottom;
  local_810 = 1;
  local_7f8 = 0;
  local_808 = (undefined1  [8])0x0;
  FStack_800.Data = (FScriptContainerElement *)0x0;
  (pFVar11->_ContentPadding).Value.Left = (float)(undefined4)local_820;
  (pFVar11->_ContentPadding).Value.Top = (float)local_820._4_4_;
  (pFVar11->_ContentPadding).Value.Right = (float)(undefined4)uStack_818;
  (pFVar11->_ContentPadding).Value.Bottom = (float)uStack_818._4_4_;
  (pFVar11->_ContentPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_808);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_808,
             (FWriteAccessScope *)&local_768);
  if (((int)local_7f8 != 0) && (FStack_800.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_800.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_800,0,0,0x10);
    local_7f8 = local_7f8 & 0xffffffff00000000;
  }
  if (local_768.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_768.Accessor,&local_768);
  }
  if (FStack_800.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_800.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_808);
  pFVar11->_MaxListHeight = this->MaxListHeight;
  pFVar11->_HasDownArrow = this->bHasDownArrow;
  pFVar11->_EnableGamepadNavigationMode = this->bEnableGamepadNavigationMode;
  lStack_880 = (ulonglong)local_7f0.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar11->_OnGenerateWidget,
             (FWriteAccessScope *)&local_750);
  local_738 = &(pFVar11->_OnGenerateWidget).field_0x8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_738);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__VFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUComboBoxKey____A6A_AV__TSharedRef_VSWidget___00__VFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar12[3] = 0;
    local_7e0 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_7e0);
    puVar12[4] = HandleGenerateItemWidget;
    puVar12[5] = lStack_880;
  }
  if (local_750.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_750.Accessor,&local_750);
  }
  lStack_880 = (ulonglong)local_7f0.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar11->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_730);
  local_718 = &(pFVar11->_OnSelectionChanged).field_0x8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_718);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXVFName__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUComboBoxKey____A6AXVFName__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar12[3] = 0;
    local_7d8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_7d8);
    puVar12[4] = HandleSelectionChanged;
    puVar12[5] = lStack_880;
  }
  if (local_730.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_730.Accessor,&local_730);
  }
  lStack_880 = (ulonglong)local_7f0.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar11->_OnComboBoxOpening,
             (FWriteAccessScope *)&local_710);
  local_6f8 = &(pFVar11->_OnComboBoxOpening).field_0x8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_6f8);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUComboBoxKey____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar12[3] = 0;
    local_7d0 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_7d0);
    puVar12[4] = HandleOpening;
    puVar12[5] = lStack_880;
  }
  if (local_710.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_710.Accessor,&local_710);
  }
  pFVar11->_IsFocusable = this->bIsFocusable;
  pFVar11->_ScrollBarStyle = &this->ScrollBarStyle;
  pFVar14 = SBox::FArguments::FArguments(&local_388);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_7c8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_7c0,&local_7c8,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_798,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ComboBoxKey.cpp"
             ,0x50,local_res8);
  FMemScope::~FMemScope(&local_7c0);
  FLLMScope::~FLLMScope(local_res18);
  if (local_798._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_798._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_798._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_6f0 = (this->ComboBoxContent).Object;
  pTStack_6e8 = (this->ComboBoxContent).SharedReferenceCount.ReferenceController;
  (this->ComboBoxContent).Object = local_798._Widget.Object;
  (this->ComboBoxContent).SharedReferenceCount.ReferenceController =
       local_798._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_6e8);
  pTVar15 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_798,&local_7f0,pFVar14);
  pTVar2 = (pTVar15->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar15->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (pFVar11->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar11->_Content).Widget.Object = (SWidget *)pSVar3;
  (pFVar11->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_7b8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_7b0,&local_7b8,true);
  TSlateDecl<SComboBox<FName>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComboBox<FName>,RequiredArgs::T0RequiredArgs>
            (&local_878,"SComboBox<FName>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ComboBoxKey.cpp"
             ,0x40,local_res10);
  FMemScope::~FMemScope(&local_7b0);
  FLLMScope::~FLLMScope(local_res20);
  pSVar4 = local_878._Widget.Object;
  if (local_878._Widget.Object == (SComboBox<FName> *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar16;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_878._Widget.Object,(FSlateBaseNamedArgs *)pFVar11);
  SComboBox<FName>::Construct(local_878._Widget.Object,pFVar11);
  if (local_878._Widget.Object == (SComboBox<FName> *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar16;
    }
  }
  if (((local_878._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar9 = (**(code **)((local_878._Widget.Object)->_padding_ + 0x228))(local_878._Widget.Object);
    bVar10 = 0;
    if (cVar9 == '\0') goto LAB_1469fad3c;
  }
  bVar10 = 0x20;
LAB_1469fad3c:
  *(byte *)&(local_878._Widget.Object)->_padding_ =
       (byte)(local_878._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_878._Widget.Object)->_padding_ =
       (byte)(local_878._Widget.Object)->_padding_ | bVar10;
  if (local_878._Widget.Object == (SComboBox<FName> *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar16;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_878._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_878._Widget.Object == (SComboBox<FName> *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar16;
    }
  }
  FVar7.ReferenceController = local_878._Widget.SharedReferenceCount.ReferenceController;
  local_878._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_878._Widget.Object = (SComboBox<FName> *)0x0;
  if (pSVar4 == (SComboBox<FName> *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar16;
    }
  }
  local_830 = pSVar4;
  local_828.ReferenceController = FVar7.ReferenceController;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyComboBox != (TSharedPtr<SComboBox<FName>,1> *)&local_830) {
    (this->MyComboBox).Object = pSVar4;
    local_830 = (SComboBox<FName> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyComboBox).SharedReferenceCount,&local_828);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_828.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_7f0.SharedReferenceCount.ReferenceController._4_4_,
                      local_7f0.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_798._Widget.SharedReferenceCount.ReferenceController);
  SBox::FArguments::~FArguments(&local_388);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3e8.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_408);
  if ((void *)local_408._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_408._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_408);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_420);
  if ((void *)local_420._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_420._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_420);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_438);
  if ((void *)local_438._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_438._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_438);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_440.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_470);
  if ((void *)local_470._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_470._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_470);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4a0);
  if ((void *)local_4a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_4a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6e0._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_6e0);
  GenerateContent(this);
  if ((this->MyComboBox).Object == (SComboBox<FName> *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar16;
    }
  }
  pTVar2 = (this->MyComboBox).SharedReferenceCount.ReferenceController;
  pSVar4 = (this->MyComboBox).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar4 == (SComboBox<FName> *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar16;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar4;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a0a1e0

void __thiscall UComboBoxKey::ReleaseSlateResources(UComboBoxKey *this,bool param_1)

{
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyComboBox != (TSharedPtr<SComboBox<FName>,1> *)&local_28) {
    (this->MyComboBox).Object = (SComboBox<FName> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyComboBox).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ComboBoxContent != (TSharedPtr<SBox,1> *)&local_18) {
    (this->ComboBoxContent).Object = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ComboBoxContent).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// RemoveOption @ 146a0cb20

bool __thiscall UComboBoxKey::RemoveOption(UComboBoxKey *this,FName param_1)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  SComboBox<FName> *this_00;
  int iVar4;
  FName *pFVar5;
  
  pFVar3 = (FName *)(this->Options).AllocatorInstance.Data;
  iVar2 = (this->Options).ArrayNum;
  pFVar5 = pFVar3;
  while( true ) {
    if (pFVar5 == pFVar3 + iVar2) {
      return false;
    }
    if (*pFVar5 == param_1) break;
    pFVar5 = pFVar5 + 1;
  }
  iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar3 >> 3);
  if (iVar4 == -1) {
    return false;
  }
  memmove(pFVar3 + iVar4,pFVar3 + iVar4 + 1,(longlong)((iVar2 - iVar4) + -1) << 3);
  piVar1 = &(this->Options).ArrayNum;
  *piVar1 = *piVar1 + -1;
  if (param_1 == this->SelectedOption) {
    ClearSelection(this);
  }
  this_00 = (this->MyComboBox).Object;
  if (this_00 != (SComboBox<FName> *)0x0) {
    SComboBox<FName>::RefreshOptions(this_00);
  }
  return true;
}

// SetContentPadding @ 146a12b00

void __thiscall UComboBoxKey::SetContentPadding(UComboBoxKey *this,FMargin *param_1)

{
  SComboBox<FName> *this_00;
  FMargin local_18;
  
  local_18.Left = param_1->Left;
  local_18.Top = param_1->Top;
  local_18.Right = param_1->Right;
  local_18.Bottom = param_1->Bottom;
  (this->ContentPadding).Left = local_18.Left;
  (this->ContentPadding).Top = local_18.Top;
  (this->ContentPadding).Right = local_18.Right;
  (this->ContentPadding).Bottom = local_18.Bottom;
  this_00 = (this->MyComboBox).Object;
  if (this_00 != (SComboBox<FName> *)0x0) {
    SComboButton::SetButtonContentPadding((SComboButton *)this_00,&local_18);
  }
  return;
}

// SetEnableGamepadNavigationMode @ 146a13540

void __thiscall UComboBoxKey::SetEnableGamepadNavigationMode(UComboBoxKey *this,bool param_1)

{
  SComboBox<FName> *pSVar1;
  
  pSVar1 = (this->MyComboBox).Object;
  this->bEnableGamepadNavigationMode = param_1;
  if (pSVar1 != (SComboBox<FName> *)0x0) {
    pSVar1->EnableGamepadNavigationMode = param_1;
  }
  return;
}

// SetHasDownArrow @ 146a146c0

void __thiscall UComboBoxKey::SetHasDownArrow(UComboBoxKey *this,bool param_1)

{
  SComboBox<FName> *pSVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FSlot *pFVar5;
  undefined8 *puVar6;
  uint uVar7;
  ISlateAttributeContainer *pIVar8;
  undefined1 auStack_b8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_a0;
  ForAnyElementType FStack_98;
  ulonglong uStack_90;
  TAttribute<EVisibility> TStack_88;
  TAttribute<EVisibility> TStack_68;
  FDestructionSentinel FStack_48;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  this->bHasDownArrow = param_1;
  pSVar1 = (this->MyComboBox).Object;
  if (pSVar1 == (SComboBox<FName> *)0x0) {
    return;
  }
  if ((*(float *)(pSVar1->_padding_ + 0x450) == 0.0) &&
     (*(float *)(pSVar1->_padding_ + 0x454) == 0.0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((pSVar1->_padding_ == 0) || (*(int *)(pSVar1->_padding_ + 0x240) < 2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("HBox && HBox->NumSlots() >= 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SComboButton.cpp"
                       ,0xca,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (pSVar1->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = SHorizontalBox::GetSlot((SHorizontalBox *)pSVar1->_padding_,1);
  if (param_1) {
    uVar7 = (uint)*(byte *)(pSVar1->_padding_ + 0x550);
  }
  else {
    uVar7 = 2;
  }
  if (*(uint *)&pFVar5->field_0x3c != uVar7) {
    *(uint *)&pFVar5->field_0x3c = uVar7;
    FSlotBase::Invalidate((FSlotBase *)pFVar5,Layout);
  }
  if (pSVar1->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = SHorizontalBox::GetSlot((SHorizontalBox *)pSVar1->_padding_,1);
  if (param_1) {
    puVar6 = &uStack_30;
    uStack_30 = *(undefined8 *)(pSVar1->_padding_ + 0x540);
    uStack_28 = *(undefined8 *)(pSVar1->_padding_ + 0x548);
  }
  else {
    puVar6 = &uStack_20;
    uStack_20 = 0;
    uStack_18 = 0;
  }
  auStack_b8._0_8_ = *puVar6;
  auStack_b8._8_8_ = puVar6[1];
  auStack_b8[0x10] = true;
  uStack_90 = 0;
  pIVar8 = (ISlateAttributeContainer *)&pFVar5->field_0x20;
  TStack_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_98.Data = (FScriptContainerElement *)0x0;
  if (&pFVar5->field_0x28 == (undefined1 *)0x0) {
    pIVar8 = (ISlateAttributeContainer *)&DAT_00000020;
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
  ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
            *)&pFVar5->field_0x28,pIVar8,(TAttribute<FMargin> *)auStack_b8,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_a0,(FWriteAccessScope *)&FStack_48);
  if (((int)uStack_90 != 0) && (FStack_98.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,0x10);
    uStack_90 = uStack_90 & 0xffffffff00000000;
  }
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  if (FStack_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_98.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_a0.AccessDetector);
  if (pSVar1->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ForegroundArrowImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SComboButton.cpp"
                       ,0xce,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pSVar1->_padding_ == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  TStack_88.bIsSet = true;
  TStack_88.Getter._0_8_ = 0;
  TStack_88.Getter._8_8_ = 0;
  TStack_88.Value.Value.Value = EVisibility::Collapsed.Value.Value;
  if (param_1) {
    TStack_88.Value.Value.Value = EVisibility::Visible.Value.Value;
  }
  TStack_88.Getter._16_8_ = 0;
  SLeafWidget::SetVisibility((SLeafWidget *)pSVar1->_padding_,&TStack_88);
  if (pSVar1->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShadowImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SComboButton.cpp"
                       ,0xd0,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pSVar1->_padding_ == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if ((!param_1) || (TStack_68.Value.Value.Value = EVisibility::Visible.Value.Value, !bVar3)) {
    TStack_68.Value.Value.Value = EVisibility::Collapsed.Value.Value;
  }
  TStack_68.bIsSet = true;
  TStack_68.Getter._16_8_ = 0;
  TStack_68.Getter._0_8_ = 0;
  TStack_68.Getter._8_8_ = 0;
  SLeafWidget::SetVisibility((SLeafWidget *)pSVar1->_padding_,&TStack_68);
  return;
}

// SetItemStyle @ 146a162d0

void __thiscall UComboBoxKey::SetItemStyle(UComboBoxKey *this,FTableRowStyle *param_1)

{
  SComboBox<FName> *this_00;
  
  FTableRowStyle::operator=(&this->ItemStyle,param_1);
  this_00 = (this->MyComboBox).Object;
  if (this_00 != (SComboBox<FName> *)0x0) {
    SWidget::Invalidate((SWidget *)this_00,Layout);
    return;
  }
  return;
}

// SetMaxListHeight @ 146a16ed0

void __thiscall UComboBoxKey::SetMaxListHeight(UComboBoxKey *this,float param_1)

{
  SComboBox<FName> *pSVar1;
  code *pcVar2;
  bool bVar3;
  TAttribute<FOptionalSize> local_38;
  
  pSVar1 = (this->MyComboBox).Object;
  this->MaxListHeight = param_1;
  if (pSVar1 != (SComboBox<FName> *)0x0) {
    if ((pSVar1->ComboBoxMenuContent).Object == (SBox *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_38.Getter._16_8_ = 0;
    local_38.bIsSet = true;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    local_38.Value.Size = param_1;
    SBox::SetMaxDesiredHeight((pSVar1->ComboBoxMenuContent).Object,&local_38);
  }
  return;
}

// SetSelectedOption @ 146a1a9d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UComboBoxKey::SetSelectedOption(UComboBoxKey *this,FName param_1)

{
  SComboBox<FName> *this_00;
  FFieldId local_18;
  
  if (this->SelectedOption != param_1) {
    local_18.FieldName = FFieldNotificationClassDescriptor::SelectedOption.FieldName;
    local_18.BitNumber = FFieldNotificationClassDescriptor::SelectedOption.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
    this_00 = (this->MyComboBox).Object;
    if (this_00 != (SComboBox<FName> *)0x0) {
      SComboBox<FName>::SetSelectedItem(this_00,param_1);
      return;
    }
    this->SelectedOption = param_1;
  }
  return;
}

// SetWidgetStyle @ 146a1dcd0

void __thiscall UComboBoxKey::SetWidgetStyle(UComboBoxKey *this,FComboBoxStyle *param_1)

{
  SComboBox<FName> *this_00;
  
  FComboBoxStyle::operator=(&this->WidgetStyle,param_1);
  this_00 = (this->MyComboBox).Object;
  if (this_00 != (SComboBox<FName> *)0x0) {
    SWidget::Invalidate((SWidget *)this_00,Layout);
    return;
  }
  return;
}

// StaticRegisterNativesUComboBoxKey @ 146a1e660

void __cdecl UComboBoxKey::StaticRegisterNativesUComboBoxKey(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UComboBoxKey_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __DefaultConstructor @ 146a30aa0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UComboBoxKey::__DefaultConstructor(FObjectInitializer *param_1)

{
  UWidget *this;
  ForElementType<unsigned_int> FVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  longlong lVar3;
  FObjectInitializer *pFVar4;
  FDefaultStyleCache *pFVar5;
  
  this = (UWidget *)param_1->Obj;
  if (this != (UWidget *)0x0) {
    pFVar4 = FObjectInitializer::Get();
    UWidget::UWidget(this,pFVar4);
    this->_padding_ = (longlong)&_vftable__for__UVisual__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FComboBoxStyle::FComboBoxStyle((FComboBoxStyle *)&this[1]._padding_);
    FTableRowStyle::FTableRowStyle((FTableRowStyle *)&this[4].RenderTransform.Shear);
    FScrollBarStyle::FScrollBarStyle((FScrollBarStyle *)&this[0xb].ToolTipTextDelegate);
    *(undefined1 *)&this[0xe].EnabledFieldNotifications.NumBits = 0;
    this[0xf]._padding_ = 0;
    pTVar2 = &this[0xe].EnabledFieldNotifications;
    (pTVar2->AllocatorInstance).InlineData[8] = '\0';
    (pTVar2->AllocatorInstance).InlineData[9] = '\0';
    (pTVar2->AllocatorInstance).InlineData[10] = 0x80;
    (pTVar2->AllocatorInstance).InlineData[0xb] = '?';
    (pTVar2->AllocatorInstance).InlineData[0xc] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0xd] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0xe] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0xf] = '\0';
    *(undefined4 *)&this[0xe].EnabledFieldNotifications.AllocatorInstance.SecondaryData = 0x3f800000
    ;
    *(undefined4 *)&this[0xe].EnabledFieldNotifications.AllocatorInstance.SecondaryData.field_0x4 =
         0x3f800000;
    *(undefined8 *)&this[0xe].EnabledFieldNotifications.MaxBits = 0;
    *(undefined8 *)&this[0xe].field_0x1ac = 0;
    this[0xf]._padding_ = 0;
    this[0xf]._padding_ = 0;
    this[0xf]._padding_ = 0;
    this[0xf].Slot.field0_0x0.DebugPtr = (UPanelSlot *)0x0;
    *(undefined8 *)&this[0xf].bIsEnabledDelegate = 0;
    *(undefined8 *)&this[0xf].bIsEnabledDelegate.field_0x8 = 0;
    *(undefined8 *)&this[0xf].bIsEnabledDelegate.field_0x10 = 0;
    *(undefined8 *)&this[0xf].ToolTipTextDelegate = 0;
    *(undefined8 *)&this[0xf].ToolTipTextDelegate.field_0x8 = 0;
    *(undefined8 *)&this[0xf].ToolTipTextDelegate.field_0x10 = 0;
    this[0xf].ToolTipText.TextData.Reference = (ITextData *)0x0;
    *(undefined8 *)&this[0xf].ToolTipText.Flags = 0;
    this[0xf].ToolTipWidget.field0_0x0.DebugPtr = (UWidget *)0x0;
    *(undefined8 *)&this[0xf].ToolTipWidgetDelegate = 0;
    *(undefined8 *)&this[0xf].ToolTipWidgetDelegate.field_0x8 = 0;
    pFVar5 = UE::Slate::Private::FDefaultStyleCache::Get();
    FComboBoxStyle::operator=((FComboBoxStyle *)&this[1]._padding_,&(pFVar5->Runtime).ComboBoxStyle)
    ;
    pFVar5 = UE::Slate::Private::FDefaultStyleCache::Get();
    FTableRowStyle::operator=
              ((FTableRowStyle *)&this[4].RenderTransform.Shear,&(pFVar5->Runtime).TableRowStyle);
    pFVar5 = UE::Slate::Private::FDefaultStyleCache::Get();
    FScrollBarStyle::operator=
              ((FScrollBarStyle *)&this[0xb].ToolTipTextDelegate,&(pFVar5->Runtime).ScrollBarStyle);
    this[0xe].EnabledFieldNotifications.MaxBits = 0x40800000;
    *(undefined4 *)&this[0xe].bRoutedSynchronizeProperties = 0x40000000;
    *(undefined4 *)&this[0xe].field_0x1ac = 0x40800000;
    *(undefined4 *)&this[0xf]._padding_ = 0x40000000;
    FVar1 = (ForElementType<unsigned_int>)this[9]._padding_;
    lVar3 = this[9]._padding_;
    *(longlong *)(this[0xe].EnabledFieldNotifications.AllocatorInstance.InlineData + 8) =
         this[9]._padding_;
    this[0xe].EnabledFieldNotifications.AllocatorInstance.SecondaryData = FVar1;
    this[0xe].EnabledFieldNotifications.NumBits = (int)lVar3;
    *(undefined4 *)((longlong)&this[0xf]._padding_ + 4) = 0x43e10000;
    *(undefined2 *)&this[0xf]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[0xf]._padding_ + 2) = 1;
  }
  return;
}

// execAddOption @ 146a321f0

void __cdecl UComboBoxKey::execAddOption(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FName local_res8;
  FName local_res10;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                    ((TArray<FName,TSizedDefaultAllocator<32>_> *)&param_1[10].field_0x20,
                     &local_res10);
  if ((-1 < iVar2) && (*(SComboBox<FName> **)&param_1[0xa4].field_0x20 != (SComboBox<FName> *)0x0))
  {
    SComboBox<FName>::RefreshOptions(*(SComboBox<FName> **)&param_1[0xa4].field_0x20);
  }
  return;
}

// execClearOptions @ 146a33770

void __cdecl UComboBoxKey::execClearOptions(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[0xb].field_0x4;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&param_1[10].field_0x20,0,(int *)&param_1[0xb].field_0x4);
  }
  ClearSelection((UComboBoxKey *)param_1);
  lVar2 = *(longlong *)&param_1[0xa4].field_0x20;
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x460) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000146a33814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar2 + 0x460) + 0x248))();
    return;
  }
  return;
}

// execClearSelection @ 146a33900

void __cdecl UComboBoxKey::execClearSelection(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ClearSelection((UComboBoxKey *)param_1);
  return;
}

// execGetSelectedOption @ 146a36130

void __cdecl UComboBoxKey::execGetSelectedOption(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0xb].field_0x8;
  return;
}

// execIsOpen @ 146a37620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UComboBoxKey::execIsOpen(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SMenuAnchor **)&param_1[0xa4].field_0x20 != (SMenuAnchor *)0x0) {
    bVar1 = SMenuAnchor::IsOpen(*(SMenuAnchor **)&param_1[0xa4].field_0x20);
    if (bVar1) {
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execRemoveOption @ 146a38970

void __cdecl UComboBoxKey::execRemoveOption(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  lVar3 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[10].field_0x20;
  plVar5 = plVar2;
  do {
    if (plVar5 == plVar2 + *(int *)(param_1 + 0xb)) {
LAB_146a38a0e:
      *(undefined1 *)param_3 = 0;
      return;
    }
    if (*plVar5 == local_res8) {
      iVar4 = (int)((longlong)plVar5 - (longlong)plVar2 >> 3);
      if (iVar4 != -1) {
        memmove(plVar2 + iVar4,plVar2 + iVar4 + 1,
                (longlong)((*(int *)(param_1 + 0xb) - iVar4) + -1) << 3);
        *(int *)(param_1 + 0xb) = *(int *)(param_1 + 0xb) + -1;
        if (lVar3 == *(longlong *)&param_1[0xb].field_0x8) {
          ClearSelection((UComboBoxKey *)param_1);
        }
        if (*(SComboBox<FName> **)&param_1[0xa4].field_0x20 != (SComboBox<FName> *)0x0) {
          SComboBox<FName>::RefreshOptions(*(SComboBox<FName> **)&param_1[0xa4].field_0x20);
        }
        *(undefined1 *)param_3 = 1;
        return;
      }
      goto LAB_146a38a0e;
    }
    plVar5 = plVar5 + 1;
  } while( true );
}

// execSetSelectedOption @ 146a42170

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UComboBoxKey::execSetSelectedOption(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FName FVar3;
  FName local_res8;
  FFieldId local_18;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  FVar3 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.ComparisonIndex.Value = *(uint *)&param_1[0xb].field_0x8;
  FVar2.Number = *(uint *)&param_1[0xb].field_0xc;
  if (FVar2 != local_res8) {
    local_18.FieldName = FFieldNotificationClassDescriptor::SelectedOption.FieldName;
    local_18.BitNumber = FFieldNotificationClassDescriptor::SelectedOption.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)(param_1 + 1),&local_18);
    if (*(SComboBox<FName> **)&param_1[0xa4].field_0x20 != (SComboBox<FName> *)0x0) {
      SComboBox<FName>::SetSelectedItem(*(SComboBox<FName> **)&param_1[0xa4].field_0x20,FVar3);
      return;
    }
    local_res8.ComparisonIndex = FVar3.ComparisonIndex.Value;
    local_res8.Number = FVar3.Number;
    *(uint *)&param_1[0xb].field_0x8 = local_res8.ComparisonIndex.Value;
    *(uint *)&param_1[0xb].field_0xc = local_res8.Number;
  }
  return;
}

// operator() @ 1504f6810

bool __thiscall `UComboBoxKey::InitForegroundColor'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1496605139820085530>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1496605139820085530>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f6910

bool __thiscall `UComboBoxKey::InitIsFocusable'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1496605139820085524>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1496605139820085524>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f6b50

bool __thiscall `UComboBoxKey::InitScrollBarStyle'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1496605139820085518>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1496605139820085518>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

