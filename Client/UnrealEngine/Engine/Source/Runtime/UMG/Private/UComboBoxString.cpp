// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 85

// GetWidgetStyle_WrapperImpl @ 1469616c0

void __cdecl UComboBoxString::GetWidgetStyle_WrapperImpl(void *param_1,void *param_2)

{
  FComboBoxStyle *pFVar1;
  FComboBoxStyle local_5c8;
  
  pFVar1 = FComboBoxStyle::FComboBoxStyle(&local_5c8,(FComboBoxStyle *)((longlong)param_1 + 0x1d0));
  FComboBoxStyle::operator=(param_2,pFVar1);
  FComboBoxStyle::~FComboBoxStyle(&local_5c8);
  return;
}

// SetWidgetStyle_WrapperImpl @ 1469617d0

void __cdecl UComboBoxString::SetWidgetStyle_WrapperImpl(void *param_1,void *param_2)

{
  FComboBoxStyle::operator=((FComboBoxStyle *)((longlong)param_1 + 0x1d0),param_2);
  if (*(SWidget **)((longlong)param_1 + 0x1a18) != (SWidget *)0x0) {
    SWidget::Invalidate(*(SWidget **)((longlong)param_1 + 0x1a18),Layout);
    return;
  }
  return;
}

// GetItemStyle_WrapperImpl @ 146961850

void __cdecl UComboBoxString::GetItemStyle_WrapperImpl(void *param_1,void *param_2)

{
  FTableRowStyle *pFVar1;
  FTableRowStyle local_b58;
  
  pFVar1 = FTableRowStyle::FTableRowStyle(&local_b58,(FTableRowStyle *)((longlong)param_1 + 0x790));
  FTableRowStyle::operator=(param_2,pFVar1);
  FTableRowStyle::~FTableRowStyle(&local_b58);
  return;
}

// SetItemStyle_WrapperImpl @ 1469618a0

void __cdecl UComboBoxString::SetItemStyle_WrapperImpl(void *param_1,void *param_2)

{
  FTableRowStyle::operator=((FTableRowStyle *)((longlong)param_1 + 0x790),param_2);
  if (*(SWidget **)((longlong)param_1 + 0x1a18) != (SWidget *)0x0) {
    SWidget::Invalidate(*(SWidget **)((longlong)param_1 + 0x1a18),Layout);
    return;
  }
  return;
}

// GetScrollBarStyle_WrapperImpl @ 1469618e0

void __cdecl UComboBoxString::GetScrollBarStyle_WrapperImpl(void *param_1,void *param_2)

{
  FScrollBarStyle *pFVar1;
  FScrollBarStyle local_658;
  
  pFVar1 = FScrollBarStyle::FScrollBarStyle
                     (&local_658,(FScrollBarStyle *)((longlong)param_1 + 0x12e0));
  FScrollBarStyle::operator=(param_2,pFVar1);
  FScrollBarStyle::~FScrollBarStyle(&local_658);
  return;
}

// GetContentPadding_WrapperImpl @ 146961930

void __cdecl UComboBoxString::GetContentPadding_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x1938);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x1930);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetContentPadding_WrapperImpl @ 146961950

void __cdecl UComboBoxString::SetContentPadding_WrapperImpl(void *param_1,void *param_2)

{
  FMargin local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x1930) = local_18._0_8_;
  *(undefined8 *)((longlong)param_1 + 0x1938) = local_18._8_8_;
  if (*(SComboButton **)((longlong)param_1 + 0x1a18) != (SComboButton *)0x0) {
    SComboButton::SetButtonContentPadding(*(SComboButton **)((longlong)param_1 + 0x1a18),&local_18);
  }
  return;
}

// GetMaxListHeight_WrapperImpl @ 146961990

void __cdecl UComboBoxString::GetMaxListHeight_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1940);
  return;
}

// SetMaxListHeight_WrapperImpl @ 1469619b0

void __cdecl UComboBoxString::SetMaxListHeight_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_38;
  
  lVar2 = *(longlong *)((longlong)param_1 + 0x1a18);
  fVar1 = *(float *)param_2;
  *(float *)((longlong)param_1 + 0x1940) = fVar1;
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x4c0) == 0) {
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
    SBox::SetMaxDesiredHeight(*(SBox **)(lVar2 + 0x4c0),&local_38);
  }
  return;
}

// GetHasDownArrow_WrapperImpl @ 146961a90

void __cdecl UComboBoxString::GetHasDownArrow_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1944);
  return;
}

// SetHasDownArrow_WrapperImpl @ 146961aa0

void __cdecl UComboBoxString::SetHasDownArrow_WrapperImpl(void *param_1,void *param_2)

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
  *(char *)((longlong)param_1 + 0x1944) = cVar1;
  lVar2 = *(longlong *)((longlong)param_1 + 0x1a18);
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

// GetEnableGamepadNavigationMode_WrapperImpl @ 146961ac0

void __cdecl
UComboBoxString::GetEnableGamepadNavigationMode_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1945);
  return;
}

// SetEnableGamepadNavigationMode_WrapperImpl @ 146961ad0

void __cdecl
UComboBoxString::SetEnableGamepadNavigationMode_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0x1945) = uVar1;
  if (*(longlong *)((longlong)param_1 + 0x1a18) != 0) {
    *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x1a18) + 0x4b8) = uVar1;
  }
  return;
}

// GetFont_WrapperImpl @ 146961b00

void __cdecl UComboBoxString::GetFont_WrapperImpl(void *param_1,void *param_2)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,(FSlateFontInfo *)((longlong)param_1 + 0x1948));
  FSlateFontInfo::operator=(param_2,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return;
}

// GetForegroundColor_WrapperImpl @ 146961b50

void __cdecl UComboBoxString::GetForegroundColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x19b0);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x19b8);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x19a8);
  *(undefined8 *)((longlong)param_2 + 8) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x10) = uVar1;
  return;
}

// GetbIsFocusable_WrapperImpl @ 146961b70

void __cdecl UComboBoxString::GetbIsFocusable_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x19bc);
  return;
}

// StaticClass @ 146961be0

UClass * __cdecl UComboBoxString::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComboBoxString.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ComboBoxString",
               &Z_Registration_Info_UClass_UComboBoxString.InnerSingleton,
               StaticRegisterNativesUComboBoxString,0x1a60,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UComboBoxString>,
               InternalVTableHelperCtorCaller<UComboBoxString>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComboBoxString.InnerSingleton;
}

// UComboBoxString @ 146989320

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UComboBoxString * __thiscall
UComboBoxString::UComboBoxString(UComboBoxString *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  (this->DefaultOptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  (this->DefaultOptions).ArrayNum = 0;
  (this->DefaultOptions).ArrayMax = 0;
  (this->SelectedOption).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedOption).Data.ArrayNum = 0;
  (this->SelectedOption).Data.ArrayMax = 0;
  FComboBoxStyle::FComboBoxStyle(&this->WidgetStyle);
  FTableRowStyle::FTableRowStyle(&this->ItemStyle);
  FScrollBarStyle::FScrollBarStyle(&this->ScrollBarStyle);
  (this->ContentPadding).Left = 0.0;
  (this->ContentPadding).Top = 0.0;
  (this->ContentPadding).Right = 0.0;
  (this->ContentPadding).Bottom = 0.0;
  FSlateFontInfo::FSlateFontInfo(&this->Font);
  (this->ForegroundColor).ColorUseRule = UseColor_Specified;
  *(undefined8 *)&this->OnGenerateWidgetEvent = 0;
  *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->ForegroundColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->ForegroundColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->OnGenerateWidgetEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnGenerateWidgetEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnSelectionChanged = 0;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnOpening = 0;
  *(undefined8 *)&(this->OnOpening).field_0x8 = 0;
  *(undefined8 *)&(this->OnOpening).field_0x10 = 0;
  (this->Options).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Options).ArrayNum = 0;
  (this->Options).ArrayMax = 0;
  (this->MyComboBox).Object = (SComboBox<TSharedPtr<FString,1>_> *)0x0;
  (this->MyComboBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ComboBoxContent).Object = (SBox *)0x0;
  (this->ComboBoxContent).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DefaultComboBoxContent).Object = (STextBlock *)0x0;
  (this->DefaultComboBoxContent).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CurrentOptionPtr).Object = (FString *)0x0;
  (this->CurrentOptionPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UComboBoxString @ 146989470

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UComboBoxString * __thiscall
UComboBoxString::UComboBoxString(UComboBoxString *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  ESlateColorStylingMode EVar4;
  EStyleColor EVar5;
  undefined2 uVar6;
  FDefaultStyleCache *pFVar7;
  FName *pFVar8;
  FSlateFontInfo *pFVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  FName local_res8;
  FFontOutlineSettings local_98;
  FSlateFontInfo local_78;
  
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  (this->DefaultOptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  (this->DefaultOptions).ArrayNum = 0;
  (this->DefaultOptions).ArrayMax = 0;
  (this->SelectedOption).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedOption).Data.ArrayNum = 0;
  (this->SelectedOption).Data.ArrayMax = 0;
  FComboBoxStyle::FComboBoxStyle(&this->WidgetStyle);
  FTableRowStyle::FTableRowStyle(&this->ItemStyle);
  FScrollBarStyle::FScrollBarStyle(&this->ScrollBarStyle);
  (this->ContentPadding).Left = 0.0;
  (this->ContentPadding).Top = 0.0;
  (this->ContentPadding).Right = 0.0;
  (this->ContentPadding).Bottom = 0.0;
  FSlateFontInfo::FSlateFontInfo(&this->Font);
  (this->ForegroundColor).ColorUseRule = UseColor_Specified;
  *(undefined8 *)&this->OnGenerateWidgetEvent = 0;
  *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->ForegroundColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->ForegroundColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->OnGenerateWidgetEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnGenerateWidgetEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnSelectionChanged = 0;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnOpening = 0;
  *(undefined8 *)&(this->OnOpening).field_0x8 = 0;
  *(undefined8 *)&(this->OnOpening).field_0x10 = 0;
  (this->Options).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Options).ArrayNum = 0;
  (this->Options).ArrayMax = 0;
  (this->MyComboBox).Object = (SComboBox<TSharedPtr<FString,1>_> *)0x0;
  (this->MyComboBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ComboBoxContent).Object = (SBox *)0x0;
  (this->ComboBoxContent).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DefaultComboBoxContent).Object = (STextBlock *)0x0;
  (this->DefaultComboBoxContent).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CurrentOptionPtr).Object = (FString *)0x0;
  (this->CurrentOptionPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar7 = UE::Slate::Private::FDefaultStyleCache::Get();
  FComboBoxStyle::operator=(&this->WidgetStyle,&(pFVar7->Runtime).ComboBoxStyle);
  pFVar7 = UE::Slate::Private::FDefaultStyleCache::Get();
  FTableRowStyle::operator=(&this->ItemStyle,&(pFVar7->Runtime).TableRowStyle);
  pFVar7 = UE::Slate::Private::FDefaultStyleCache::Get();
  FScrollBarStyle::operator=(&this->ScrollBarStyle,&(pFVar7->Runtime).ScrollBarStyle);
  EVar4 = (this->ItemStyle).TextColor.ColorUseRule;
  EVar5 = (this->ItemStyle).TextColor.ColorTableId;
  uVar6 = *(undefined2 *)&(this->ItemStyle).TextColor.field_0x12;
  uVar1 = *(undefined8 *)&(this->ItemStyle).TextColor.SpecifiedColor.field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&(this->ItemStyle).TextColor.SpecifiedColor.field0_0x0 + 8);
  this->bIsFocusable = true;
  *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->ForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  (this->ForegroundColor).ColorUseRule = EVar4;
  pvVar3 = ThreadLocalStoragePointer;
  (this->ForegroundColor).ColorTableId = EVar5;
  *(undefined2 *)&(this->ForegroundColor).field_0x12 = uVar6;
  (this->ContentPadding).Left = 4.0;
  (this->ContentPadding).Top = 2.0;
  (this->ContentPadding).Right = 4.0;
  (this->ContentPadding).Bottom = 2.0;
  uVar10 = (ulonglong)_tls_index;
  this->MaxListHeight = 450.0;
  this->HasDownArrow = true;
  this->EnableGamepadNavigationMode = true;
  if (*(int *)(*(longlong *)((longlong)pvVar3 + uVar10 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString((FString *)&local_98,L"/Engine/EngineFonts/Roboto");
      FConfigCacheIni::GetString
                (GConfig,L"SlateStyle",L"DefaultFontName",(FString *)&local_98,&GEngineIni);
      pwVar11 = L"";
      if (local_98.OutlineMaterial.field0_0x0._0_4_ != 0) {
        pwVar11 = (wchar_t *)
                  CONCAT17(local_98._padding_,
                           CONCAT16(local_98.bApplyOutlineToDropShadows,
                                    CONCAT24(local_98._4_2_,local_98.OutlineSize)));
      }
      ConstructorHelpers::FObjectFinder<UFont>::FObjectFinder<UFont>(&RobotoFontObj,pwVar11,0);
      pvVar3 = (void *)CONCAT17(local_98._padding_,
                                CONCAT16(local_98.bApplyOutlineToDropShadows,
                                         CONCAT24(local_98._4_2_,local_98.OutlineSize)));
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      atexit(`UComboBoxString::UComboBoxString'::__l5::
             _dynamic_atexit_destructor_for__RobotoFontObj__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_98.OutlineSize = 0;
  local_98.bMiteredCorners = false;
  local_98.bSeparateFillAlpha = false;
  local_98.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_98.bApplyOutlineToDropShadows = false;
  local_98.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar8 = ::FName::FName(&local_res8,"Bold");
  pFVar9 = FSlateFontInfo::FSlateFontInfo
                     (&local_78,(UObject *)RobotoFontObj.Object.field0_0x0,__real_41800000,pFVar8,
                      &local_98);
  FSlateFontInfo::operator=(&this->Font,pFVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// ~UComboBoxString @ 146992960

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UComboBoxString::~UComboBoxString(UComboBoxString *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentOptionPtr).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->DefaultComboBoxContent).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComboBoxContent).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyComboBox).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FString,1>,int>
            ((TSharedPtr<FString,1> *)(this->Options).AllocatorInstance.Data,
             (this->Options).ArrayNum);
  pFVar4 = (this->Options).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pvVar5 = *(void **)&(this->OnOpening).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOpening);
  pvVar5 = *(void **)&(this->OnSelectionChanged).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectionChanged);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGenerateWidgetEvent);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Font).CompositeFont.SharedReferenceCount.ReferenceController);
  FScrollBarStyle::~FScrollBarStyle(&this->ScrollBarStyle);
  FTableRowStyle::~FTableRowStyle(&this->ItemStyle);
  FComboBoxStyle::~FComboBoxStyle(&this->WidgetStyle);
  pFVar4 = (this->SelectedOption).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FString,int>
            ((FString *)(this->DefaultOptions).AllocatorInstance.Data,
             (this->DefaultOptions).ArrayNum);
  pFVar4 = (this->DefaultOptions).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// AddOption @ 1469a2670

void __thiscall UComboBoxString::AddOption(UComboBoxString *this,FString *param_1)

{
  int *piVar1;
  TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedPtr<FString,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FString *this_00;
  FScriptContainerElement *pFVar7;
  TRawPtrProxy<FString> local_res8;
  TSharedPtr<FString,1> local_18;
  
  pTVar2 = &this->Options;
  this_00 = ::operator_new(0x10);
  local_res8.Object = (FString *)0x0;
  if (this_00 != (FString *)0x0) {
    local_res8.Object = ::FString::FString(this_00,param_1);
  }
  TSharedPtr<FString,1>::TSharedPtr<FString,1><FString>(&local_18,&local_res8);
  pTVar3 = (TSharedPtr<FString,1> *)(pTVar2->AllocatorInstance).Data;
  if ((pTVar3 <= &local_18) && (&local_18 < pTVar3 + (this->Options).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Options).ArrayNum;
  piVar1 = &(this->Options).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Options).ArrayNum = iVar6 + 1;
  pFVar7 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(FString **)pFVar7 = local_18.Object;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = local_18.SharedReferenceCount.ReferenceController;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_18.Object = (FString *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  RefreshOptions(this);
  return;
}

// ClearOptions @ 1469a7060

void __thiscall UComboBoxString::ClearOptions(UComboBoxString *this)

{
  int *piVar1;
  SComboBox<TSharedPtr<FString,1>_> *pSVar2;
  code *pcVar3;
  bool bVar4;
  
  ClearSelection(this);
  DestructItems<TSharedPtr<FString,1>,int>
            ((TSharedPtr<FString,1> *)(this->Options).AllocatorInstance.Data,
             (this->Options).ArrayNum);
  piVar1 = &(this->Options).ArrayMax;
  (this->Options).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Options).AllocatorInstance,0,piVar1);
  }
  pSVar2 = (this->MyComboBox).Object;
  if (pSVar2 != (SComboBox<TSharedPtr<FString,1>_> *)0x0) {
    if ((pSVar2->ComboListView).Object == (SListView<TSharedPtr<FString,1>_> *)0x0) {
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
    (**(code **)(((pSVar2->ComboListView).Object)->_padding_ + 0x248))();
  }
  return;
}

// ClearSelection @ 1469a72b0

void __thiscall UComboBoxString::ClearSelection(UComboBoxString *this)

{
  SComboBox<TSharedPtr<FString,1>_> *pSVar1;
  SListView<TSharedPtr<FString,1>_> *pSVar2;
  SBox *this_00;
  code *pcVar3;
  bool bVar4;
  Type *pTVar5;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CurrentOptionPtr != (TSharedPtr<FString,1> *)&local_18) {
    (this->CurrentOptionPtr).Object = (FString *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CurrentOptionPtr).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  pSVar1 = (this->MyComboBox).Object;
  if (pSVar1 != (SComboBox<TSharedPtr<FString,1>_> *)0x0) {
    if ((pSVar1->ComboListView).Object == (SListView<TSharedPtr<FString,1>_> *)0x0) {
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
    pTVar5 = TAttribute<enum_ESelectionMode::Type>::Get(&pSVar2->_padding_);
    if ((*pTVar5 != None) &&
       (*(int *)&(pSVar2->SelectedItems).Elements.field_0x8 !=
        *(int *)&(pSVar2->SelectedItems).Elements.field_0x34)) {
      (**(code **)(pSVar2->_padding_ + 0x30))(&pSVar2->_padding_);
      (**(code **)(pSVar2->_padding_ + 0x40))(&pSVar2->_padding_,3);
    }
  }
  this_00 = (this->ComboBoxContent).Object;
  if (this_00 != (SBox *)0x0) {
    SBox::SetContent(this_00,&SNullWidget::NullWidget);
  }
  return;
}

// FOnOpeningEvent_DelegateWrapper @ 1469c8090

void __cdecl
UComboBoxString::FOnOpeningEvent_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FOnSelectionChangedEvent_DelegateWrapper @ 1469c83f0

void __cdecl
UComboBoxString::FOnSelectionChangedEvent_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FString *param_2,
          Type param_3)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  FString local_28;
  undefined1 local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  if (&local_28 != param_2) {
    uVar1 = (param_2->Data).ArrayNum;
    _Src = (param_2->Data).AllocatorInstance.Data;
    local_28.Data.ArrayMax = 0;
    local_28.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_28,uVar1,&local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  local_18 = (char)param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// FindOptionIndex @ 1469c8d70

int __thiscall UComboBoxString::FindOptionIndex(UComboBoxString *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < (this->Options).ArrayNum) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->Options).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      pFVar2 = (this->Options).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar2 + lVar9) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      puVar3 = *(undefined8 **)(pFVar2 + lVar9);
      iVar7 = (param_1->Data).ArrayNum;
      iVar1 = *(int *)(puVar3 + 1);
      if (iVar1 == iVar7) {
        if (iVar1 < 2) {
          return uVar8;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)*puVar3,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar5 = iVar7 == 0;
      }
      else {
        bVar5 = iVar1 + iVar7 == 1;
      }
      if (bVar5) {
        return uVar8;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar8 < (this->Options).ArrayNum);
  }
  return -1;
}

// GetContentPadding @ 1469ce9f0

FMargin * __thiscall
UComboBoxString::GetContentPadding(UComboBoxString *this,FMargin *__return_storage_ptr__)

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

// GetFieldNotificationDescriptor @ 1469d0390

IClassDescriptor * __thiscall UComboBoxString::GetFieldNotificationDescriptor(UComboBoxString *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UComboBoxString::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetFont @ 1469d0900

FSlateFontInfo * __thiscall UComboBoxString::GetFont(UComboBoxString *this)

{
  return &this->Font;
}

// GetForegroundColor @ 1469d0bf0

FSlateColor * __thiscall
UComboBoxString::GetForegroundColor(UComboBoxString *this,FSlateColor *__return_storage_ptr__)

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

// GetItemStyle @ 1469d18e0

FTableRowStyle * __thiscall UComboBoxString::GetItemStyle(UComboBoxString *this)

{
  return &this->ItemStyle;
}

// GetMaxListHeight @ 1469d1cc0

float __thiscall UComboBoxString::GetMaxListHeight(UComboBoxString *this)

{
  return this->MaxListHeight;
}

// GetOptionAtIndex @ 1469d2d30

FString * __thiscall
UComboBoxString::GetOptionAtIndex(UComboBoxString *this,FString *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  
  if ((-1 < param_1) && (param_1 < (this->Options).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
    }
    pFVar4 = (this->Options).AllocatorInstance.Data + (longlong)param_1 * 0x10;
    if (*(longlong *)pFVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
    }
    ::FString::FString(__return_storage_ptr__,*(FString **)pFVar4);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetOptionCount @ 1469d2e10

int __thiscall UComboBoxString::GetOptionCount(UComboBoxString *this)

{
  return (this->Options).ArrayNum;
}

// GetPrivateStaticClass @ 1469d3bb0

UClass * __cdecl UComboBoxString::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComboBoxString.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ComboBoxString",
               &Z_Registration_Info_UClass_UComboBoxString.InnerSingleton,
               StaticRegisterNativesUComboBoxString,0x1a60,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UComboBoxString>,
               InternalVTableHelperCtorCaller<UComboBoxString>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComboBoxString.InnerSingleton;
}

// GetScrollBarStyle @ 1469d70a0

FScrollBarStyle * __thiscall UComboBoxString::GetScrollBarStyle(UComboBoxString *this)

{
  return &this->ScrollBarStyle;
}

// GetSelectedIndex @ 1469d71d0

int __thiscall UComboBoxString::GetSelectedIndex(UComboBoxString *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  if (((this->CurrentOptionPtr).Object != (FString *)0x0) &&
     (uVar5 = 0, 0 < (this->Options).ArrayNum)) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Options).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      if (*(FString **)((this->Options).AllocatorInstance.Data + lVar6) ==
          (this->CurrentOptionPtr).Object) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar5 < (this->Options).ArrayNum);
  }
  return -1;
}

// GetSelectedOption @ 1469d8360

FString * __thiscall
UComboBoxString::GetSelectedOption(UComboBoxString *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = (this->CurrentOptionPtr).Object;
  if (pFVar1 != (FString *)0x0) {
    ::FString::FString(__return_storage_ptr__,pFVar1);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetWidgetStyle @ 1469da370

FComboBoxStyle * __thiscall UComboBoxString::GetWidgetStyle(UComboBoxString *this)

{
  return &this->WidgetStyle;
}

// HandleGenerateWidget @ 1469db770

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UComboBoxString::HandleGenerateWidget
          (UComboBoxString *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedPtr<FString,1> *param_1)

{
  uint uVar1;
  FString *pFVar2;
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  undefined8 _Src_00;
  ForAnyElementType _Src_01;
  UWidget *this_00;
  bool bVar5;
  FArguments *pFVar6;
  FText *pFVar7;
  TSharedRef<STextBlock,1> *pTVar8;
  FName *pFVar9;
  longlong lVar10;
  FName FVar11;
  undefined4 local_res18 [2];
  FLLMScope local_res20 [2];
  FDestructionSentinel local_6a8;
  FString local_690;
  FText local_680;
  UWidget *local_670;
  FText local_668;
  bool local_658;
  undefined1 local_650 [8];
  ForAnyElementType FStack_648;
  ulonglong local_640;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_638;
  FSlateFontInfo local_620;
  bool local_5c0;
  undefined1 local_5b8 [8];
  ForAnyElementType FStack_5b0;
  ulonglong local_5a8;
  TSharedRef<STextBlock,1> local_5a0;
  FArguments local_590;
  
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
  local_res18[0] = 0;
  pFVar2 = param_1->Object;
  local_690.Data.AllocatorInstance.Data._0_4_ = 0;
  local_690.Data.AllocatorInstance.Data._4_4_ = 0;
  if (pFVar2 == (FString *)0x0) {
    local_638._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = (FName *)&local_638;
    bVar4 = false;
    bVar5 = true;
  }
  else {
    local_6a8.AccessType = 0;
    local_6a8._4_4_ = 0;
    uVar1 = (pFVar2->Data).ArrayNum;
    _Src = (pFVar2->Data).AllocatorInstance.Data;
    local_6a8.Accessor._0_4_ = uVar1;
    if (uVar1 == 0) {
      local_6a8.Accessor._4_4_ = 0;
      pFVar9 = (FName *)&local_6a8;
      bVar4 = true;
      bVar5 = false;
      local_690.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar11;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_6a8,uVar1,
                 (int *)((longlong)&local_6a8.Accessor + 4));
      memcpy((void *)local_6a8._0_8_,_Src,(longlong)(int)uVar1 * 2);
      pFVar9 = (FName *)&local_6a8;
      bVar4 = true;
      bVar5 = false;
      local_690.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_6a8._0_8_;
    }
  }
  pFVar9->ComparisonIndex = 0;
  pFVar9->Number = 0;
  local_690.Data.ArrayNum = *(uint *)(pFVar9 + 1);
  local_690.Data.ArrayMax = *(int *)((longlong)(pFVar9 + 1) + 4);
  pFVar9[1] = (FName)0x0;
  if (bVar5) {
    if ((FName)local_638._Widget.Object != (FName)0x0) {
      FMemory::Free(local_638._Widget.Object);
    }
  }
  if ((bVar4) && ((FName)local_6a8._0_8_ != (FName)0x0)) {
    FMemory::Free((void *)local_6a8._0_8_);
  }
  bVar5 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidgetEvent);
  _Src_01.Data = local_690.Data.AllocatorInstance.Data;
  if (bVar5) {
    lVar10 = (longlong)local_690.Data.ArrayNum;
    local_6a8.AccessType = 0;
    local_6a8._4_4_ = 0;
    local_6a8.Accessor._0_4_ = local_690.Data.ArrayNum;
    if (local_690.Data.ArrayNum == 0) {
      local_6a8.Accessor._4_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_690.Data.ArrayNum,0,(ForAnyElementType *)&local_6a8,
                 local_690.Data.ArrayNum,(int *)((longlong)&local_6a8.Accessor + 4));
      memcpy((void *)local_6a8._0_8_,_Src_01.Data,lVar10 * 2);
    }
    uVar1 = (uint)local_6a8.Accessor;
    _Src_00 = local_6a8._0_8_;
    local_680.TextData.Reference = (ITextData *)0x0;
    local_680._12_4_ = 0;
    local_670 = (UWidget *)0x0;
    local_680.Flags = (uint)local_6a8.Accessor;
    if ((uint)local_6a8.Accessor != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(uint)local_6a8.Accessor,0,(ForAnyElementType *)&local_680,
                 (uint)local_6a8.Accessor,(int *)&local_680.field_0xc);
      memcpy(local_680.TextData.Reference,(void *)_Src_00,(longlong)(int)uVar1 * 2);
    }
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidgetEvent,
               &local_680);
    this_00 = local_670;
    if (local_680.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_680.TextData.Reference);
    }
    if ((FName)local_6a8._0_8_ != (FName)0x0) {
      FMemory::Free((void *)local_6a8._0_8_);
    }
    if (this_00 != (UWidget *)0x0) {
      UWidget::TakeWidget(this_00,__return_storage_ptr__);
      goto LAB_1469dbc08;
    }
  }
  pFVar6 = STextBlock::FArguments::FArguments(&local_590);
  pFVar7 = FText::FromString(&local_680,&local_690);
  FText::FText(&local_668,pFVar7);
  local_658 = true;
  local_640 = 0;
  local_650 = (undefined1  [8])0x0;
  FStack_648.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar6->_Text).Value,&local_668);
  (pFVar6->_Text).bIsSet = local_658;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_650);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_650,
             (FWriteAccessScope *)&local_6a8);
  if (((int)local_640 != 0) && (FStack_648.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_648.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_648,0,0,0x10);
    local_640 = local_640 & 0xffffffff00000000;
  }
  if (local_6a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)
               CONCAT44(local_6a8.Accessor._4_4_,(uint)local_6a8.Accessor),&local_6a8);
  }
  if (FStack_648.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_648.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_650);
  if (local_668.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_668.TextData.Reference + 0x10))();
  }
  FSlateFontInfo::FSlateFontInfo(&local_620,&this->Font);
  local_5c0 = true;
  local_5a8 = 0;
  local_5b8 = (undefined1  [8])0x0;
  FStack_5b0.Data = (FScriptContainerElement *)0x0;
  FSlateFontInfo::operator=(&(pFVar6->_Font).Value,&local_620);
  (pFVar6->_Font).bIsSet = local_5c0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_Font).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5b8,
             (FWriteAccessScope *)&local_6a8);
  if (((int)local_5a8 != 0) && (FStack_5b0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_5b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5b0,0,0,0x10);
    local_5a8 = local_5a8 & 0xffffffff00000000;
  }
  if (local_6a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)
               CONCAT44(local_6a8.Accessor._4_4_,(uint)local_6a8.Accessor),&local_6a8);
  }
  if (FStack_5b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_620.CompositeFont.SharedReferenceCount.ReferenceController);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_638._Widget.Object = (STextBlock *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_6a8,(FName *)&local_638,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_638,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ComboBoxString.cpp"
             ,0x1bf,(T0RequiredArgs *)local_res18);
  FMemScope::~FMemScope((FMemScope *)&local_6a8);
  FLLMScope::~FLLMScope(local_res20);
  pTVar8 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_638,&local_5a0,pFVar6);
  __return_storage_ptr__->Object = (SWidget *)pTVar8->Object;
  pTVar3 = (pTVar8->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_638._Widget.SharedReferenceCount.ReferenceController);
  if (local_680.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_680.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_590);
LAB_1469dbc08:
  if ((FName)local_690.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_690.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// HandleOpening @ 1469dd890

void __thiscall UComboBoxString::HandleOpening(UComboBoxString *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnOpening,(void *)0x0);
  return;
}

// HandleSelectionChanged @ 1469ddcb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UComboBoxString::HandleSelectionChanged
          (UComboBoxString *this,TSharedPtr<FString,1> *param_1,Type param_2)

{
  int iVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ForAnyElementType *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  ForAnyElementType _Src;
  uint uStackX_c;
  ForAnyElementType local_b8;
  int local_b0;
  int iStack_ac;
  ForAnyElementType local_a8;
  int local_a0;
  int iStack_9c;
  ForAnyElementType local_98;
  undefined8 local_90;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  undefined1 local_78;
  FFieldId local_68;
  TSharedPtr<FString,1> local_58;
  ForAnyElementType local_48;
  undefined4 local_40;
  FString *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  pTVar8 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = (this->CurrentOptionPtr).Object;
  pTStack_30 = (this->CurrentOptionPtr).SharedReferenceCount.ReferenceController;
  (this->CurrentOptionPtr).Object = pFVar2;
  (this->CurrentOptionPtr).SharedReferenceCount.ReferenceController = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  local_68.FieldName = FFieldNotificationClassDescriptor::SelectedOption.FieldName;
  local_68.BitNumber = FFieldNotificationClassDescriptor::SelectedOption.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->field_0x28,&local_68);
  pFVar2 = (this->CurrentOptionPtr).Object;
  if (pFVar2 == (FString *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
    pFVar7 = &local_98;
    local_90 = 0;
    local_98.Data = (FScriptContainerElement *)0x0;
    bVar6 = false;
    bVar5 = false;
    bVar4 = true;
  }
  else {
    pTVar8 = (this->CurrentOptionPtr).SharedReferenceCount.ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b8.Data = (FScriptContainerElement *)0x0;
    iVar1 = (pFVar2->Data).ArrayNum;
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    local_b0 = iVar1;
    if (iVar1 == 0) {
      pFVar7 = &local_b8;
      iStack_ac = 0;
      bVar6 = true;
      bVar5 = true;
      bVar4 = false;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,&local_b8,iVar1,&iStack_ac);
      memcpy(local_b8.Data,pFVar3,(longlong)iVar1 * 2);
      pFVar7 = &local_b8;
      bVar6 = true;
      bVar5 = true;
      bVar4 = false;
    }
  }
  pFVar2 = &this->SelectedOption;
  if (pFVar2 != (FString *)pFVar7) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = pFVar7->Data;
    pFVar7->Data = (FScriptContainerElement *)0x0;
    (this->SelectedOption).Data.ArrayNum = *(int *)&pFVar7[1].Data;
    (this->SelectedOption).Data.ArrayMax = *(int *)((longlong)&pFVar7[1].Data + 4);
    pFVar7[1].Data = (FScriptContainerElement *)0x0;
  }
  _Src.Data = (FScriptContainerElement *)0x0;
  if ((bVar4) && (local_98.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_98.Data);
  }
  if ((bVar5) && (local_b8.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_b8.Data);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if ((this->ComboBoxContent).Object != (SBox *)0x0) {
    local_58.Object = (this->CurrentOptionPtr).Object;
    local_58.SharedReferenceCount.ReferenceController =
         (this->CurrentOptionPtr).SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UpdateOrGenerateWidget(this,&local_58);
  }
  pFVar2 = param_1->Object;
  if (pFVar2 == (FString *)0x0) {
    local_40 = 0;
    pFVar7 = &local_48;
    bVar5 = false;
    bVar4 = true;
  }
  else {
    local_a8.Data = (FScriptContainerElement *)0x0;
    iVar1 = (pFVar2->Data).ArrayNum;
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    local_a0 = iVar1;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,&local_a8,iVar1,&iStack_9c);
      memcpy(local_a8.Data,pFVar3,(longlong)iVar1 * 2);
    }
    pFVar7 = &local_a8;
    bVar5 = true;
    bVar4 = false;
    _Src.Data = local_a8.Data;
  }
  pFVar7->Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)&pFVar7[1].Data;
  pFVar7[1].Data = (FScriptContainerElement *)0x0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  local_80 = iVar1;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_88,iVar1,&local_7c);
    memcpy(local_88.Data,_Src.Data,(longlong)iVar1 * 2);
  }
  local_78 = (undefined1)param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSelectionChanged,
             &local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (_Src.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(_Src.Data);
  }
  if ((bVar4) && (local_48.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data);
  }
  if ((bVar5) && (local_a8.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a8.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// InitFont @ 1469dfc20

void __thiscall UComboBoxString::InitFont(UComboBoxString *this,FSlateFontInfo *param_1)

{
  undefined1 local_res8 [8];
  
  if ((this->MyComboBox).Object != (SComboBox<TSharedPtr<FString,1>_> *)0x0) {
    `UComboBoxString::InitFont'::__l2::<lambda_1>::operator()(local_res8);
  }
  FSlateFontInfo::operator=(&this->Font,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->CompositeFont).SharedReferenceCount.ReferenceController);
  return;
}

// InitForegroundColor @ 1469dfcc0

void __thiscall UComboBoxString::InitForegroundColor(UComboBoxString *this,FSlateColor *param_1)

{
  undefined8 uVar1;
  ESlateColorStylingMode EVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  undefined1 local_res8 [8];
  
  if ((this->MyComboBox).Object != (SComboBox<TSharedPtr<FString,1>_> *)0x0) {
    `UComboBoxString::InitForegroundColor'::__l2::<lambda_1>::operator()(local_res8);
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

// InitIsFocusable @ 1469dfe10

void __thiscall UComboBoxString::InitIsFocusable(UComboBoxString *this,bool param_1)

{
  undefined1 local_res10 [24];
  
  if ((this->MyComboBox).Object != (SComboBox<TSharedPtr<FString,1>_> *)0x0) {
    `UComboBoxString::InitIsFocusable'::__l2::<lambda_1>::operator()(local_res10);
    this->bIsFocusable = param_1;
    return;
  }
  this->bIsFocusable = param_1;
  return;
}

// InitScrollBarStyle @ 1469e00f0

void __thiscall UComboBoxString::InitScrollBarStyle(UComboBoxString *this,FScrollBarStyle *param_1)

{
  undefined1 local_res8 [8];
  
  if ((this->MyComboBox).Object != (SComboBox<TSharedPtr<FString,1>_> *)0x0) {
    `UComboBoxString::InitScrollBarStyle'::__l2::<lambda_1>::operator()(local_res8);
  }
  FScrollBarStyle::operator=(&this->ScrollBarStyle,param_1);
  return;
}

// IsEnableGamepadNavigationMode @ 1469e1560

bool __thiscall UComboBoxString::IsEnableGamepadNavigationMode(UComboBoxString *this)

{
  return this->EnableGamepadNavigationMode;
}

// IsFocusable @ 1469e1720

bool __thiscall UComboBoxString::IsFocusable(UComboBoxString *this)

{
  return this->bIsFocusable;
}

// IsHasDownArrow @ 1469e1760

bool __thiscall UComboBoxString::IsHasDownArrow(UComboBoxString *this)

{
  return this->HasDownArrow;
}

// IsOpen @ 1469e27b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UComboBoxString::IsOpen(UComboBoxString *this)

{
  SComboBox<TSharedPtr<FString,1>_> *this_00;
  bool bVar1;
  
  this_00 = (this->MyComboBox).Object;
  if (this_00 != (SComboBox<TSharedPtr<FString,1>_> *)0x0) {
    bVar1 = SMenuAnchor::IsOpen((SMenuAnchor *)this_00);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// PostInitProperties @ 1469f3e90

void __thiscall UComboBoxString::PostInitProperties(UComboBoxString *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  UObject::PostInitProperties((UObject *)this);
  iVar1 = (this->DefaultOptions).ArrayNum;
  pFVar2 = (this->DefaultOptions).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->DefaultOptions).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (pFVar2 == pFVar3) break;
    AddOption(this,(FString *)pFVar2);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// PostLoad @ 1469f3f10

void __thiscall UComboBoxString::PostLoad(UComboBoxString *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  FGuid local_18;
  
  UObject::PostLoad((UObject *)this);
  iVar1 = (this->DefaultOptions).ArrayNum;
  pFVar2 = (this->DefaultOptions).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->DefaultOptions).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (pFVar2 == pFVar3) break;
    AddOption(this,(FString *)pFVar2);
    pFVar2 = pFVar2 + 0x10;
  }
  local_18 = FEditorObjectVersion::GUID;
  iVar1 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  if (iVar1 < 7) {
    this->EnableGamepadNavigationMode = false;
  }
  return;
}

// RebuildWidget @ 1469fb010

TSharedRef<SWidget,1> * __thiscall
UComboBoxString::RebuildWidget(UComboBoxString *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FString *pFVar4;
  SBox *pSVar5;
  SComboBox<TSharedPtr<FString,1>_> *pSVar6;
  code *pcVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  uint uVar12;
  TSharedRef<SWidget,1> *pTVar13;
  FArguments *pFVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  FArguments *pFVar17;
  TSharedRef<SBox,1> *pTVar18;
  uint uVar19;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  FName local_928;
  undefined4 uStack_920;
  undefined4 uStack_91c;
  undefined1 local_918 [8];
  FDelegateAllocation local_910;
  undefined1 local_900 [8];
  FDelegateAllocation local_8f8;
  undefined1 local_8e8 [8];
  FDelegateAllocation local_8e0;
  TSlateDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs> local_8d0;
  SWidget *local_8b8;
  TReferenceControllerBase<1> *pTStack_8b0;
  SComboBox<TSharedPtr<FString,1>_> *local_8a8;
  FSharedReferencer<1> local_8a0;
  TSharedRef<SBox,1> local_898;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined4 local_878;
  undefined1 local_874;
  undefined1 local_870 [8];
  void *pvStack_868;
  undefined8 local_860;
  UComboBoxString *local_858;
  UComboBoxString *local_850;
  UComboBoxString *local_848;
  FName local_840;
  FMemScope local_838;
  FMemScope local_830;
  undefined8 local_828;
  FSharedReferencer<1> FStack_820;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined1 local_808;
  undefined1 local_800 [8];
  void *pvStack_7f8;
  undefined8 local_7f0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_7e8;
  TSharedPtr<FString,1> local_7d0;
  FDestructionSentinel local_7c0;
  FDestructionSentinel local_7a8;
  FDestructionSentinel local_790;
  FDestructionSentinel local_778;
  FDelegateAllocation *local_760;
  FDestructionSentinel local_758;
  FDelegateAllocation *local_740;
  FDestructionSentinel local_738;
  FDelegateAllocation *local_720;
  FString *local_718;
  TReferenceControllerBase<1> *pTStack_710;
  FString *local_708;
  TReferenceControllerBase<1> *pTStack_700;
  SBox *local_6f8;
  TReferenceControllerBase<1> *pTStack_6f0;
  undefined1 local_6e8 [576];
  undefined1 local_4a8 [48];
  undefined1 local_478 [48];
  FSharedReferencer<1> local_448;
  undefined1 local_440 [24];
  undefined1 local_428 [24];
  undefined1 local_410 [32];
  FSharedReferencer<1> local_3f0;
  FSharedReferencer<1> local_3e0;
  FArguments local_388;
  
  uVar12 = FindOptionIndex(this,&this->SelectedOption);
  if (uVar12 != 0xffffffff) {
    uVar19 = 0;
    if ((int)uVar12 < (this->Options).ArrayNum) {
      uVar19 = ~uVar12 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar13;
    }
    pFVar2 = (this->Options).AllocatorInstance.Data;
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)(int)uVar12 * 0x10 + 8);
    pFVar4 = *(FString **)(pFVar2 + (longlong)(int)uVar12 * 0x10);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_718 = (this->CurrentOptionPtr).Object;
    pTStack_710 = (this->CurrentOptionPtr).SharedReferenceCount.ReferenceController;
    (this->CurrentOptionPtr).Object = pFVar4;
    (this->CurrentOptionPtr).SharedReferenceCount.ReferenceController = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_710)
    ;
  }
  pFVar14 = SComboBox<TSharedPtr<FString,1>_>::FArguments::FArguments((FArguments *)local_6e8);
  pFVar14->_ComboBoxStyle = &this->WidgetStyle;
  pFVar14->_ItemStyle = &this->ItemStyle;
  local_878._0_1_ = (this->ForegroundColor).ColorUseRule;
  local_878._1_1_ = (this->ForegroundColor).ColorTableId;
  local_878._2_2_ = *(undefined2 *)&(this->ForegroundColor).field_0x12;
  local_888 = *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0;
  uStack_880 = *(undefined8 *)((longlong)&(this->ForegroundColor).SpecifiedColor.field0_0x0 + 8);
  local_874 = 1;
  local_860 = 0;
  local_870 = (undefined1  [8])0x0;
  pvStack_868 = (void *)0x0;
  *(undefined8 *)&(pFVar14->_ForegroundColor).Value.SpecifiedColor.field0_0x0 = local_888;
  *(undefined8 *)((longlong)&(pFVar14->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_880;
  (pFVar14->_ForegroundColor).Value.ColorUseRule = (undefined1)local_878;
  (pFVar14->_ForegroundColor).Value.ColorTableId = local_878._1_1_;
  *(undefined2 *)&(pFVar14->_ForegroundColor).Value.field_0x12 = local_878._2_2_;
  (pFVar14->_ForegroundColor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_ForegroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_870);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_870);
  if (pvStack_868 != (void *)0x0) {
    FMemory::Free(pvStack_868);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_870);
  pFVar14->_OptionsSource_ArrayPointer =
       (TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar14->_OptionsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<FString,1>_> *)0x0;
  local_828 = 0;
  FStack_820.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&pFVar14->_OptionsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FString,1>_>,1> *)&local_828) {
    (pFVar14->_OptionsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<FString,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar14->_OptionsSource_SharedObservableArray).SharedReferenceCount,&FStack_820);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_820.ReferenceController);
  pFVar14->_OptionsSource_ArrayPointer = &this->Options;
  pTVar3 = (this->CurrentOptionPtr).SharedReferenceCount.ReferenceController;
  pFVar4 = (this->CurrentOptionPtr).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_708 = (pFVar14->_InitiallySelectedItem).Object;
  pTStack_700 = (pFVar14->_InitiallySelectedItem).SharedReferenceCount.ReferenceController;
  (pFVar14->_InitiallySelectedItem).Object = pFVar4;
  (pFVar14->_InitiallySelectedItem).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_700);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_818._0_4_ = (this->ContentPadding).Left;
  local_818._4_4_ = (this->ContentPadding).Top;
  uStack_810._0_4_ = (this->ContentPadding).Right;
  uStack_810._4_4_ = (this->ContentPadding).Bottom;
  local_808 = 1;
  local_7f0 = 0;
  local_800 = (undefined1  [8])0x0;
  pvStack_7f8 = (void *)0x0;
  (pFVar14->_ContentPadding).Value.Left = (float)(undefined4)local_818;
  (pFVar14->_ContentPadding).Value.Top = (float)local_818._4_4_;
  (pFVar14->_ContentPadding).Value.Right = (float)(undefined4)uStack_810;
  (pFVar14->_ContentPadding).Value.Bottom = (float)uStack_810._4_4_;
  (pFVar14->_ContentPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_800);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_800);
  if (pvStack_7f8 != (void *)0x0) {
    FMemory::Free(pvStack_7f8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_800);
  pFVar14->_MaxListHeight = this->MaxListHeight;
  pFVar14->_HasDownArrow = this->HasDownArrow;
  pFVar14->_EnableGamepadNavigationMode = this->EnableGamepadNavigationMode;
  local_928 = (FName)_vcall__784__flat______;
  uStack_91c = local_898.SharedReferenceCount.ReferenceController._4_4_;
  uStack_920 = 0;
  local_8e8 = (undefined1  [8])0x0;
  local_8e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_8e0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8e8,
             (FWriteAccessScope *)&local_778);
  local_760 = &local_8e0;
  puVar15 = UE::Core::Private::DelegateAllocate(0x30,&local_8e0);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    *puVar15 = &
               ___7__TBaseUObjectMethodDelegateInstance__00__CBVUComboBoxString____A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar15[3] = 0;
    local_858 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar15 + 3),(FObjectPtr)&local_858);
    *(FName *)(puVar15 + 4) = local_928;
    puVar15[5] = CONCAT44(uStack_91c,uStack_920);
  }
  if (local_778.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_778.Accessor,&local_778);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar14->_OnGenerateWidget,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8e8);
  uStack_920 = 0;
  local_928 = (FName)_vcall__792__flat______;
  uStack_91c = local_898.SharedReferenceCount.ReferenceController._4_4_;
  local_900 = (undefined1  [8])0x0;
  local_8f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_8f8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_900,
             (FWriteAccessScope *)&local_758);
  local_740 = &local_8f8;
  puVar15 = UE::Core::Private::DelegateAllocate(0x30,&local_8f8);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    *puVar15 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUComboBoxString____A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar15[3] = 0;
    local_850 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar15 + 3),(FObjectPtr)&local_850);
    *(FName *)(puVar15 + 4) = local_928;
    puVar15[5] = CONCAT44(uStack_91c,uStack_920);
  }
  if (local_758.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_758.Accessor,&local_758);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar14->_OnSelectionChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_900);
  uStack_920 = 0;
  local_928 = (FName)_vcall__800__flat______;
  uStack_91c = local_898.SharedReferenceCount.ReferenceController._4_4_;
  local_918 = (undefined1  [8])0x0;
  local_910.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_910.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_918,
             (FWriteAccessScope *)&local_738);
  local_720 = &local_910;
  puVar15 = UE::Core::Private::DelegateAllocate(0x30,&local_910);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    *puVar15 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUComboBoxString____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar15[3] = 0;
    local_848 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar15 + 3),(FObjectPtr)&local_848);
    *(FName *)(puVar15 + 4) = local_928;
    puVar15[5] = CONCAT44(uStack_91c,uStack_920);
  }
  if (local_738.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_738.Accessor,&local_738);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar14->_OnComboBoxOpening,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_918);
  pFVar14->_ScrollBarStyle = &this->ScrollBarStyle;
  pFVar14->_IsFocusable = this->bIsFocusable;
  pFVar17 = SBox::FArguments::FArguments(&local_388);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_840 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_838,&local_840,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_7e8,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ComboBoxString.cpp"
             ,0x79,local_res8);
  FMemScope::~FMemScope(&local_838);
  FLLMScope::~FLLMScope(local_res18);
  if (local_7e8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_7e8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_7e8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_6f8 = (this->ComboBoxContent).Object;
  pTStack_6f0 = (this->ComboBoxContent).SharedReferenceCount.ReferenceController;
  (this->ComboBoxContent).Object = local_7e8._Widget.Object;
  (this->ComboBoxContent).SharedReferenceCount.ReferenceController =
       local_7e8._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_6f0);
  pTVar18 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_7e8,&local_898,pFVar17);
  pTVar3 = (pTVar18->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar18->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_8b8 = (pFVar14->_Content).Widget.Object;
  pTStack_8b0 = (pFVar14->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar14->_Content).Widget.Object = (SWidget *)pSVar5;
  (pFVar14->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_8b0);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_928 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_830,&local_928,true);
  TSlateDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_8d0,"SComboBox< TSharedPtr<FString> >",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ComboBoxString.cpp"
             ,0x69,local_res10);
  FMemScope::~FMemScope(&local_830);
  FLLMScope::~FLLMScope(local_res20);
  pSVar6 = local_8d0._Widget.Object;
  if ((local_8d0._Widget.Object == (SComboBox<TSharedPtr<FString,1>_> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
    return pTVar13;
  }
  SWidget::SWidgetConstruct((SWidget *)local_8d0._Widget.Object,(FSlateBaseNamedArgs *)pFVar14);
  SComboBox<TSharedPtr<FString,1>_>::Construct(local_8d0._Widget.Object,pFVar14);
  if ((local_8d0._Widget.Object == (SComboBox<TSharedPtr<FString,1>_> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
    return pTVar13;
  }
  if (((local_8d0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar10 = (**(code **)((local_8d0._Widget.Object)->_padding_ + 0x228))(local_8d0._Widget.Object);
    bVar11 = 0;
    if (cVar10 == '\0') goto LAB_1469fb786;
  }
  bVar11 = 0x20;
LAB_1469fb786:
  *(byte *)&(local_8d0._Widget.Object)->_padding_ =
       (byte)(local_8d0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_8d0._Widget.Object)->_padding_ =
       (byte)(local_8d0._Widget.Object)->_padding_ | bVar11;
  if ((local_8d0._Widget.Object == (SComboBox<TSharedPtr<FString,1>_> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
    return pTVar13;
  }
  pbVar1 = (byte *)((longlong)&(local_8d0._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_8d0._Widget.Object == (SComboBox<TSharedPtr<FString,1>_> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
    return pTVar13;
  }
  FVar8.ReferenceController = local_8d0._Widget.SharedReferenceCount.ReferenceController;
  local_8d0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_8d0._Widget.Object = (SComboBox<TSharedPtr<FString,1>_> *)0x0;
  if ((pSVar6 == (SComboBox<TSharedPtr<FString,1>_> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
    return pTVar13;
  }
  local_8a8 = pSVar6;
  local_8a0.ReferenceController = FVar8.ReferenceController;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyComboBox != (TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1> *)&local_8a8) {
    (this->MyComboBox).Object = pSVar6;
    local_8a8 = (SComboBox<TSharedPtr<FString,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyComboBox).SharedReferenceCount,&local_8a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8a0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_898.SharedReferenceCount.ReferenceController._4_4_,
                      local_898.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7e8._Widget.SharedReferenceCount.ReferenceController);
  SBox::FArguments::~FArguments(&local_388);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_918,
             (FWriteAccessScope *)&local_7c0);
  if ((local_910.DelegateSize != 0) &&
     (local_910.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_910.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_910,0,0,0x10);
    local_910.DelegateSize = 0;
  }
  if (local_7c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7c0.Accessor,&local_7c0);
  }
  if (local_910.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_910.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_918);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_900,
             (FWriteAccessScope *)&local_7a8);
  if ((local_8f8.DelegateSize != 0) &&
     (local_8f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_8f8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_8f8,0,0,0x10);
    local_8f8.DelegateSize = 0;
  }
  if (local_7a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7a8.Accessor,&local_7a8);
  }
  if (local_8f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_8f8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_900);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8e8,
             (FWriteAccessScope *)&local_790);
  if ((local_8e0.DelegateSize != 0) &&
     (local_8e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_8e0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_8e0,0,0,0x10);
    local_8e0.DelegateSize = 0;
  }
  if (local_790.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_790.Accessor,&local_790);
  }
  if (local_8e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_8e0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3e0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3f0.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_410);
  if ((void *)local_410._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_410._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_410);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_428);
  if ((void *)local_428._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_428._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_428);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_440);
  if ((void *)local_440._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_440._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_440);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_448.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_478);
  if ((void *)local_478._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_478._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_478);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4a8);
  if ((void *)local_4a8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_4a8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6e8._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_6e8);
  if (uVar12 != 0xffffffff) {
    local_7d0.Object = (this->CurrentOptionPtr).Object;
    local_7d0.SharedReferenceCount.ReferenceController =
         (this->CurrentOptionPtr).SharedReferenceCount.ReferenceController;
    if (local_7d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_7d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_7d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UpdateOrGenerateWidget(this,&local_7d0);
  }
  if (((this->MyComboBox).Object == (SComboBox<TSharedPtr<FString,1>_> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
    return pTVar13;
  }
  pSVar6 = (this->MyComboBox).Object;
  pTVar3 = (this->MyComboBox).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar6 == (SComboBox<TSharedPtr<FString,1>_> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
    return pTVar13;
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar6;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// RefreshOptions @ 146a091a0

void __thiscall UComboBoxString::RefreshOptions(UComboBoxString *this)

{
  SComboBox<TSharedPtr<FString,1>_> *pSVar1;
  code *pcVar2;
  bool bVar3;
  
  pSVar1 = (this->MyComboBox).Object;
  if (pSVar1 == (SComboBox<TSharedPtr<FString,1>_> *)0x0) {
    return;
  }
  if ((pSVar1->ComboListView).Object == (SListView<TSharedPtr<FString,1>_> *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x000146a091f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((pSVar1->ComboListView).Object)->_padding_ + 0x248))();
  return;
}

// ReleaseSlateResources @ 146a0a270

void __thiscall UComboBoxString::ReleaseSlateResources(UComboBoxString *this,bool param_1)

{
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyComboBox != (TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1> *)&local_28) {
    (this->MyComboBox).Object = (SComboBox<TSharedPtr<FString,1>_> *)0x0;
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

// RemoveOption @ 146a0cbd0

bool __thiscall UComboBoxString::RemoveOption(UComboBoxString *this,FString *param_1)

{
  int *piVar1;
  TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *_Dst;
  uint uVar9;
  
  uVar6 = FindOptionIndex(this,param_1);
  if (uVar6 == 0xffffffff) {
    return false;
  }
  pTVar2 = &this->Options;
  uVar9 = ~uVar6 >> 0x1f;
  uVar7 = 0;
  if ((int)uVar6 < (this->Options).ArrayNum) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (*(FString **)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10) ==
      (this->CurrentOptionPtr).Object) {
    ClearSelection(this);
  }
  uVar7 = 0;
  if ((int)uVar6 < (this->Options).ArrayNum) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar8 = (this->Options).ArrayNum + ~uVar6;
  if (iVar8 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar8 << 4);
  }
  piVar1 = &(this->Options).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,&pTVar2->AllocatorInstance,(this->Options).ArrayNum,&(this->Options).ArrayMax);
  RefreshOptions(this);
  return true;
}

// Serialize @ 146a10810

void __thiscall UComboBoxString::Serialize(UComboBoxString *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x000146a10830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEditorObjectVersion::GUID);
  return;
}

// Serialize @ 146a10840

void __thiscall UComboBoxString::Serialize(UComboBoxString *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FEditorObjectVersion::GUID);
  return;
}

// SetContentPadding @ 146a12b40

void __thiscall UComboBoxString::SetContentPadding(UComboBoxString *this,FMargin *param_1)

{
  SComboBox<TSharedPtr<FString,1>_> *this_00;
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
  if (this_00 != (SComboBox<TSharedPtr<FString,1>_> *)0x0) {
    SComboButton::SetButtonContentPadding((SComboButton *)this_00,&local_18);
  }
  return;
}

// SetEnableGamepadNavigationMode @ 146a13560

void __thiscall UComboBoxString::SetEnableGamepadNavigationMode(UComboBoxString *this,bool param_1)

{
  SComboBox<TSharedPtr<FString,1>_> *pSVar1;
  
  pSVar1 = (this->MyComboBox).Object;
  this->EnableGamepadNavigationMode = param_1;
  if (pSVar1 != (SComboBox<TSharedPtr<FString,1>_> *)0x0) {
    pSVar1->EnableGamepadNavigationMode = param_1;
  }
  return;
}

// SetHasDownArrow @ 146a146e0

void __thiscall UComboBoxString::SetHasDownArrow(UComboBoxString *this,bool param_1)

{
  SComboBox<TSharedPtr<FString,1>_> *pSVar1;
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
  
  this->HasDownArrow = param_1;
  pSVar1 = (this->MyComboBox).Object;
  if (pSVar1 == (SComboBox<TSharedPtr<FString,1>_> *)0x0) {
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

// SetItemStyle @ 146a16310

void __thiscall UComboBoxString::SetItemStyle(UComboBoxString *this,FTableRowStyle *param_1)

{
  SComboBox<TSharedPtr<FString,1>_> *this_00;
  
  FTableRowStyle::operator=(&this->ItemStyle,param_1);
  this_00 = (this->MyComboBox).Object;
  if (this_00 != (SComboBox<TSharedPtr<FString,1>_> *)0x0) {
    SWidget::Invalidate((SWidget *)this_00,Layout);
    return;
  }
  return;
}

// SetMaxListHeight @ 146a16f70

void __thiscall UComboBoxString::SetMaxListHeight(UComboBoxString *this,float param_1)

{
  SComboBox<TSharedPtr<FString,1>_> *pSVar1;
  code *pcVar2;
  bool bVar3;
  TAttribute<FOptionalSize> local_38;
  
  pSVar1 = (this->MyComboBox).Object;
  this->MaxListHeight = param_1;
  if (pSVar1 != (SComboBox<TSharedPtr<FString,1>_> *)0x0) {
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

// SetSelectedIndex @ 146a1a420

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UComboBoxString::SetSelectedIndex(UComboBoxString *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FString *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  SComboBox<TSharedPtr<FString,1>_> *this_00;
  FFieldId local_58;
  TSharedPtr<FString,1> local_48;
  TSharedPtr<FString,1> local_38;
  FString *local_28;
  TReferenceControllerBase<1> *local_20;
  FString *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  if ((-1 < param_1) && (param_1 < (this->Options).ArrayNum)) {
    uVar7 = 0;
    if (param_1 < (this->Options).ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar2 = (this->Options).AllocatorInstance.Data;
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)param_1 * 0x10 + 8);
    pFVar4 = *(FString **)(pFVar2 + (longlong)param_1 * 0x10);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18 = (this->CurrentOptionPtr).Object;
    pTStack_10 = (this->CurrentOptionPtr).SharedReferenceCount.ReferenceController;
    (this->CurrentOptionPtr).Object = pFVar4;
    (this->CurrentOptionPtr).SharedReferenceCount.ReferenceController = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
    if (((this->CurrentOptionPtr).Object == (FString *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (this->CurrentOptionPtr).Object;
    iVar8 = (this->SelectedOption).Data.ArrayNum;
    iVar1 = (pFVar4->Data).ArrayNum;
    if (iVar8 == iVar1) {
      if (iVar8 < 2) {
        return;
      }
      iVar8 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->SelectedOption).Data.AllocatorInstance.Data,
                         (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar6 = iVar8 == 0;
    }
    else {
      bVar6 = iVar8 + iVar1 == 1;
    }
    if (!bVar6) {
      local_58.FieldName = FFieldNotificationClassDescriptor::SelectedOption.FieldName;
      local_58.BitNumber = FFieldNotificationClassDescriptor::SelectedOption.BitNumber;
      UWidget::BroadcastFieldValueChanged((UWidget *)&this->field_0x28,&local_58);
      if (((this->CurrentOptionPtr).Object == (FString *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->CurrentOptionPtr).Object;
      iVar8 = (pFVar4->Data).ArrayNum;
      uVar7 = iVar8 - 1;
      if (iVar8 == 0) {
        uVar7 = 0;
      }
      ::FString::AssignRange
                (&this->SelectedOption,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,uVar7);
      if ((this->ComboBoxContent).Object == (SBox *)0x0) {
        pcVar5 = *(code **)(*(longlong *)this + 0x318);
        local_28 = (this->CurrentOptionPtr).Object;
        local_20 = (this->CurrentOptionPtr).SharedReferenceCount.ReferenceController;
        if (local_20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar5)(this,&local_28,3);
      }
      else {
        this_00 = TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1>::operator->(&this->MyComboBox);
        local_48.Object = (this->CurrentOptionPtr).Object;
        local_48.SharedReferenceCount.ReferenceController =
             (this->CurrentOptionPtr).SharedReferenceCount.ReferenceController;
        if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SComboBox<TSharedPtr<FString,1>_>::SetSelectedItem(this_00,&local_48);
        local_38.Object = (this->CurrentOptionPtr).Object;
        local_38.SharedReferenceCount.ReferenceController =
             (this->CurrentOptionPtr).SharedReferenceCount.ReferenceController;
        if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        UpdateOrGenerateWidget(this,&local_38);
      }
    }
  }
  return;
}

// SetSelectedOption @ 146a1aa50

void __thiscall UComboBoxString::SetSelectedOption(UComboBoxString *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  iVar2 = FindOptionIndex(this,param_1);
  SetSelectedIndex(this,iVar2);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetWidgetStyle @ 146a1dd10

void __thiscall UComboBoxString::SetWidgetStyle(UComboBoxString *this,FComboBoxStyle *param_1)

{
  SComboBox<TSharedPtr<FString,1>_> *this_00;
  
  FComboBoxStyle::operator=(&this->WidgetStyle,param_1);
  this_00 = (this->MyComboBox).Object;
  if (this_00 != (SComboBox<TSharedPtr<FString,1>_> *)0x0) {
    SWidget::Invalidate((SWidget *)this_00,Layout);
    return;
  }
  return;
}

// StaticRegisterNativesUComboBoxString @ 146a1e6a0

void __cdecl UComboBoxString::StaticRegisterNativesUComboBoxString(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UComboBoxString_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateOrGenerateWidget @ 146a2b190

void __thiscall
UComboBoxString::UpdateOrGenerateWidget(UComboBoxString *this,TSharedPtr<FString,1> *param_1)

{
  atomic<int> *paVar1;
  TWeakPtr<STextBlock,1> *pTVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *_Src;
  SBox *this_00;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FString *pFVar10;
  FText *pFVar11;
  TSharedRef<SWidget,1> *pTVar12;
  ForAnyElementType *pFVar13;
  ForAnyElementType FVar14;
  STextBlock *pSVar15;
  STextBlock *pSVar16;
  STextBlock *this_01;
  ForAnyElementType local_c8;
  int local_c0;
  int iStack_bc;
  FString local_b8;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  FString *local_98;
  TReferenceControllerBase<1> *local_90;
  TAttribute<FText> local_88;
  FText local_58;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  longlong local_38 [2];
  
  this_01 = (STextBlock *)0x0;
  pTVar2 = &this->DefaultComboBoxContent;
  if ((((pTVar2->Object == (STextBlock *)0x0) ||
       (pTVar5 = (this->DefaultComboBoxContent).WeakReferenceCount.ReferenceController,
       pTVar5 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar5->SharedReferenceCount < 1)) ||
     (bVar8 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                        ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidgetEvent
                        ), !bVar8)) {
    if ((this->ComboBoxContent).Object != (SBox *)0x0) {
      if (pTVar2 != (TWeakPtr<STextBlock,1> *)local_38) {
        pTVar5 = (this->DefaultComboBoxContent).WeakReferenceCount.ReferenceController;
        pTVar2->Object = (STextBlock *)0x0;
        (this->DefaultComboBoxContent).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar5->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
          }
        }
      }
      if (((this->ComboBoxContent).Object == (SBox *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = (this->ComboBoxContent).Object;
      pcVar6 = *(code **)(*(longlong *)this + 0x310);
      local_98 = param_1->Object;
      local_90 = (param_1->SharedReferenceCount).ReferenceController;
      if (local_90 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_90->SharedReferenceCount = (atomic<int>)((int)local_90->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar6)(this,local_48,&local_98);
      SBox::SetContent(this_00,pTVar12);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    }
    goto LAB_146a2b44b;
  }
  if (param_1->Object == (FString *)0x0) {
    local_a0 = 0;
    pFVar13 = &local_a8;
    bVar7 = false;
    bVar8 = true;
    FVar14.Data = (FScriptContainerElement *)this_01;
  }
  else {
    pFVar10 = TSharedPtr<FString,1>::operator*<FString>(param_1);
    local_c8.Data = (FScriptContainerElement *)0x0;
    iVar4 = (pFVar10->Data).ArrayNum;
    _Src = (pFVar10->Data).AllocatorInstance.Data;
    local_c0 = iVar4;
    if (iVar4 == 0) {
      iStack_bc = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar4,0,&local_c8,iVar4,&iStack_bc);
      memcpy(local_c8.Data,_Src,(longlong)iVar4 * 2);
    }
    pFVar13 = &local_c8;
    bVar7 = true;
    bVar8 = false;
    FVar14.Data = local_c8.Data;
  }
  pFVar13->Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = *(int *)&pFVar13[1].Data;
  local_b8.Data.ArrayMax = *(int *)((longlong)&pFVar13[1].Data + 4);
  pFVar13[1].Data = (FScriptContainerElement *)0x0;
  local_b8.Data.AllocatorInstance.Data = FVar14.Data;
  if ((bVar8) && (local_a8.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a8.Data);
  }
  if ((bVar7) && ((STextBlock *)local_c8.Data != (STextBlock *)0x0)) {
    FMemory::Free(local_c8.Data);
  }
  pSVar16 = (STextBlock *)(this->DefaultComboBoxContent).WeakReferenceCount.ReferenceController;
  pSVar15 = pSVar16;
  if (pSVar16 == (STextBlock *)0x0) {
LAB_146a2b2f5:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pSVar16 = pSVar15;
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    iVar4 = (int)pSVar16->_padding_;
    do {
      pSVar15 = this_01;
      if (iVar4 == 0) goto LAB_146a2b2f5;
      LOCK();
      iVar9 = (int)pSVar16->_padding_;
      bVar8 = iVar4 == iVar9;
      if (bVar8) {
        *(int *)&pSVar16->_padding_ = iVar4 + 1;
        iVar9 = iVar4;
      }
      UNLOCK();
      iVar4 = iVar9;
    } while (!bVar8);
    this_01 = pTVar2->Object;
    pSVar15 = pSVar16;
    if (this_01 == (STextBlock *)0x0) goto LAB_146a2b2f5;
  }
  pFVar11 = FText::FromString(&local_58,&local_b8);
  FText::FText(&local_88.Value,pFVar11);
  local_88.bIsSet = true;
  local_88.Getter._16_8_ = 0;
  local_88.Getter._0_8_ = 0;
  local_88.Getter._8_8_ = 0;
  STextBlock::SetText(this_01,&local_88);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar16);
  if ((STextBlock *)local_b8.Data.AllocatorInstance.Data != (STextBlock *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
LAB_146a2b44b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// execAddOption @ 146a322a0

void __cdecl UComboBoxString::execAddOption(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddOption((UComboBoxString *)param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execClearOptions @ 146a33830

void __cdecl UComboBoxString::execClearOptions(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ClearSelection((UComboBoxString *)param_1);
  DestructItems<TSharedPtr<FString,1>,int>
            (*(TSharedPtr<FString,1> **)&param_1[0xa6].field_0x18,*(int *)&param_1[0xa6].field_0x20)
  ;
  *(undefined4 *)&param_1[0xa6].field_0x20 = 0;
  if (*(int *)&param_1[0xa6].field_0x24 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&param_1[0xa6].field_0x18,0,
               (int *)&param_1[0xa6].field_0x24);
  }
  lVar1 = *(longlong *)(param_1 + 0xa7);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x468) == 0) {
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
    (**(code **)(**(longlong **)(lVar1 + 0x468) + 0x248))();
  }
  return;
}

// execClearSelection @ 146a33920

void __cdecl UComboBoxString::execClearSelection(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ClearSelection((UComboBoxString *)param_1);
  return;
}

// execFindOptionIndex @ 146a33df0

void __cdecl UComboBoxString::execFindOptionIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FindOptionIndex((UComboBoxString *)param_1,&local_18);
  *(int *)param_3 = iVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetOptionAtIndex @ 146a35a90

void __cdecl UComboBoxString::execGetOptionAtIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  undefined8 *puVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint local_res10 [2];
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar7 = (longlong)(int)local_res10[0];
  if (-1 < (int)local_res10[0]) {
    if ((int)local_res10[0] < *(int *)&param_1[0xa6].field_0x20) {
      uVar6 = 0;
      if ((int)local_res10[0] < *(int *)&param_1[0xa6].field_0x20) {
        uVar6 = ~local_res10[0] >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      plVar8 = (longlong *)(lVar7 * 0x10 + *(longlong *)&param_1[0xa6].field_0x18);
      if (*plVar8 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      puVar3 = (undefined8 *)*plVar8;
      local_18.Data = (FScriptContainerElement *)0x0;
      iVar1 = *(int *)(puVar3 + 1);
      _Src = (void *)*puVar3;
      local_10 = CONCAT44(local_10._4_4_,iVar1);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
        memcpy(local_18.Data,_Src,(longlong)iVar1 * 2);
      }
      goto LAB_146a35c06;
    }
  }
  local_10 = 0;
  local_18.Data = (FScriptContainerElement *)0x0;
LAB_146a35c06:
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execGetOptionCount @ 146a35c70

void __cdecl UComboBoxString::execGetOptionCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0xa6].field_0x20;
  return;
}

// execGetSelectedIndex @ 146a36040

void __cdecl UComboBoxString::execGetSelectedIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[0xa8].field_0x8 != 0) &&
     (uVar4 = 0, 0 < *(int *)&param_1[0xa6].field_0x20)) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < *(int *)&param_1[0xa6].field_0x20) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(longlong *)(lVar5 + *(longlong *)&param_1[0xa6].field_0x18) ==
          *(longlong *)&param_1[0xa8].field_0x8) {
        *(uint *)param_3 = uVar4;
        return;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((int)uVar4 < *(int *)&param_1[0xa6].field_0x20);
  }
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetSelectedOption @ 146a36160

void __cdecl UComboBoxString::execGetSelectedOption(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = *(undefined8 **)&param_1[0xa8].field_0x8;
  local_18.Data = (FScriptContainerElement *)0x0;
  if (puVar2 == (undefined8 *)0x0) {
    local_10 = 0;
  }
  else {
    iVar1 = *(int *)(puVar2 + 1);
    _Src = (void *)*puVar2;
    local_10 = CONCAT44(local_10._4_4_,iVar1);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
      memcpy(local_18.Data,_Src,(longlong)iVar1 * 2);
    }
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execIsOpen @ 146a37670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UComboBoxString::execIsOpen(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SMenuAnchor **)(param_1 + 0xa7) != (SMenuAnchor *)0x0) {
    bVar1 = SMenuAnchor::IsOpen(*(SMenuAnchor **)(param_1 + 0xa7));
    if (bVar1) {
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execRefreshOptions @ 146a381a0

void __cdecl UComboBoxString::execRefreshOptions(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)(param_1 + 0xa7);
  if (lVar1 == 0) {
    return;
  }
  if (*(longlong *)(lVar1 + 0x468) == 0) {
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
                    /* WARNING: Could not recover jumptable at 0x000146a38206. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(lVar1 + 0x468) + 0x248))();
  return;
}

// execRemoveOption @ 146a38a90

void __cdecl UComboBoxString::execRemoveOption(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  void *_Dst;
  uint uVar9;
  FString local_38;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar6 = FindOptionIndex((UComboBoxString *)param_1,&local_38);
  if (uVar6 == 0xffffffff) {
    uVar5 = 0;
  }
  else {
    puVar1 = &param_1[0xa6].field_0x18;
    uVar9 = ~uVar6 >> 0x1f;
    uVar7 = 0;
    if ((int)uVar6 < *(int *)&param_1[0xa6].field_0x20) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(longlong *)(*(longlong *)puVar1 + (longlong)(int)uVar6 * 0x10) ==
        *(longlong *)&param_1[0xa8].field_0x8) {
      ClearSelection((UComboBoxString *)param_1);
    }
    uVar7 = 0;
    if ((int)uVar6 < *(int *)&param_1[0xa6].field_0x20) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    _Dst = (void *)(*(longlong *)puVar1 + (longlong)(int)uVar6 * 0x10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)_Dst + 8));
    iVar8 = ~uVar6 + *(int *)&param_1[0xa6].field_0x20;
    if (iVar8 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)iVar8 << 4);
    }
    *(int *)&param_1[0xa6].field_0x20 = *(int *)&param_1[0xa6].field_0x20 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(ForAnyElementType *)puVar1,*(int *)&param_1[0xa6].field_0x20,
               (int *)&param_1[0xa6].field_0x24);
    RefreshOptions((UComboBoxString *)param_1);
    uVar5 = 1;
  }
  *(undefined1 *)param_3 = uVar5;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetSelectedIndex @ 146a41f50

void __cdecl UComboBoxString::execSetSelectedIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetSelectedIndex((UComboBoxString *)param_1,local_res10[0]);
  return;
}

// execSetSelectedOption @ 146a42250

void __cdecl UComboBoxString::execSetSelectedOption(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  FString local_28;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  _Src = local_18;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = (longlong)(int)local_10;
  local_28.Data.ArrayNum = (int)local_10;
  if ((int)local_10 == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_10,0,(ForAnyElementType *)&local_28,(int)local_10,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  iVar2 = FindOptionIndex((UComboBoxString *)param_1,&local_28);
  SetSelectedIndex((UComboBoxString *)param_1,iVar2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// operator() @ 1504f67d0

bool __thiscall `UComboBoxString::InitFont'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1126461757284417139>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1126461757284417139>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f6850

bool __thiscall `UComboBoxString::InitForegroundColor'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1126461757284417127>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1126461757284417127>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f6950

bool __thiscall `UComboBoxString::InitIsFocusable'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1126461757284417133>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1126461757284417133>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f6b90

bool __thiscall `UComboBoxString::InitScrollBarStyle'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1126461757284417145>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1126461757284417145>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

