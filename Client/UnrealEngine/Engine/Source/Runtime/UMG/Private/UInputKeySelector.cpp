// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 60

// GetWidgetStyle_WrapperImpl @ 14695d930

void __cdecl UInputKeySelector::GetWidgetStyle_WrapperImpl(void *param_1,void *param_2)

{
  FButtonStyle *pFVar1;
  FButtonStyle local_398;
  
  pFVar1 = FButtonStyle::FButtonStyle(&local_398,(FButtonStyle *)((longlong)param_1 + 0x1b0));
  FButtonStyle::operator=(param_2,pFVar1);
  FButtonStyle::~FButtonStyle(&local_398);
  return;
}

// SetWidgetStyle_WrapperImpl @ 14695d980

void __cdecl UInputKeySelector::SetWidgetStyle_WrapperImpl(void *param_1,void *param_2)

{
  if (*(SInputKeySelector **)((longlong)param_1 + 0x8b8) != (SInputKeySelector *)0x0) {
    SInputKeySelector::SetButtonStyle(*(SInputKeySelector **)((longlong)param_1 + 0x8b8),param_2);
  }
  FButtonStyle::operator=((FButtonStyle *)((longlong)param_1 + 0x1b0),param_2);
  return;
}

// GetTextStyle_WrapperImpl @ 14695d9c0

void __cdecl UInputKeySelector::GetTextStyle_WrapperImpl(void *param_1,void *param_2)

{
  FTextBlockStyle *pFVar1;
  FTextBlockStyle local_2e8;
  
  pFVar1 = FTextBlockStyle::FTextBlockStyle
                     (&local_2e8,(FTextBlockStyle *)((longlong)param_1 + 0x540));
  FTextBlockStyle::operator=(param_2,pFVar1);
  FTextBlockStyle::~FTextBlockStyle(&local_2e8);
  return;
}

// SetTextStyle_WrapperImpl @ 14695da10

void __cdecl UInputKeySelector::SetTextStyle_WrapperImpl(void *param_1,void *param_2)

{
  if (*(SInputKeySelector **)((longlong)param_1 + 0x8b8) != (SInputKeySelector *)0x0) {
    SInputKeySelector::SetTextStyle(*(SInputKeySelector **)((longlong)param_1 + 0x8b8),param_2);
  }
  FTextBlockStyle::operator=((FTextBlockStyle *)((longlong)param_1 + 0x540),param_2);
  return;
}

// GetSelectedKey_WrapperImpl @ 14695da60

void __cdecl UInputKeySelector::GetSelectedKey_WrapperImpl(void *param_1,void *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 local_20;
  FSharedReferencer<1> local_18;
  uint local_10;
  
  local_18.ReferenceController = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x830);
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x820);
  local_20 = *(undefined8 *)((longlong)param_1 + 0x828);
  if (local_18.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_18.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar1 = *(uint *)((longlong)param_1 + 0x838);
  *(undefined8 *)param_2 = uVar2;
  local_10 = uVar1 & 0xf | local_10 & 0xfffffff0;
  if ((undefined8 *)((longlong)param_2 + 8) != &local_20) {
    *(undefined8 *)((longlong)param_2 + 8) = local_20;
    local_20 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_2 + 0x10),&local_18);
  }
  *(uint *)((longlong)param_2 + 0x18) = *(uint *)((longlong)param_2 + 0x18) & 0xfffffff0;
  *(uint *)((longlong)param_2 + 0x18) = *(uint *)((longlong)param_2 + 0x18) | local_10 & 0xf;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.ReferenceController);
  return;
}

// SetSelectedKey_WrapperImpl @ 14695db40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UInputKeySelector::SetSelectedKey_WrapperImpl(void *param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  SInputKeySelector *this;
  TAttribute<FInputChord> *pTVar3;
  FFieldId FStack_58;
  TAttribute<FInputChord> TStack_48;
  
  if ((((FInputChord *)((longlong)param_1 + 0x820))->Key).KeyName == *(FName *)param_2) {
    uVar1 = *(uint *)((longlong)param_1 + 0x838);
    uVar2 = *(uint *)((longlong)param_2 + 0x18);
    if ((((((uVar1 ^ uVar2) & 1) == 0) && (((uVar1 ^ uVar2) & 2) == 0)) &&
        (((uVar1 ^ uVar2) & 4) == 0)) && (((uVar1 ^ uVar2) & 8) == 0)) {
      return;
    }
  }
  FStack_58.FieldName = FFieldNotificationClassDescriptor::SelectedKey.FieldName;
  FStack_58.BitNumber = FFieldNotificationClassDescriptor::SelectedKey.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)((longlong)param_1 + 0x28),&FStack_58);
  this = *(SInputKeySelector **)((longlong)param_1 + 0x8b8);
  if (this != (SInputKeySelector *)0x0) {
    pTVar3 = TAttribute<FInputChord>::TAttribute<FInputChord><FInputChord>(&TStack_48,param_2);
    SInputKeySelector::SetSelectedKey(this,pTVar3);
  }
  FInputChord::operator=((FInputChord *)((longlong)param_1 + 0x820),param_2);
  return;
}

// GetMargin_WrapperImpl @ 14695db50

void __cdecl UInputKeySelector::GetMargin_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x848);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x840);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetMargin_WrapperImpl @ 14695db80

void __cdecl UInputKeySelector::SetMargin_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  TAttribute<FMargin> local_38;
  
  if (*(SInputKeySelector **)((longlong)param_1 + 0x8b8) != (SInputKeySelector *)0x0) {
    local_38.Value._0_8_ = *(undefined8 *)param_2;
    local_38.Value._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
    local_38.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SInputKeySelector::SetMargin(*(SInputKeySelector **)((longlong)param_1 + 0x8b8),&local_38);
  }
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x840) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x848) = uVar1;
  return;
}

// GetKeySelectionText_WrapperImpl @ 14695dcb0

void __cdecl UInputKeySelector::GetKeySelectionText_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 local_res8 [8];
  FText local_18;
  
  local_18.TextData.Reference = *(ITextData **)((longlong)param_1 + 0x850);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = *(uint *)((longlong)param_1 + 0x858);
  FText::operator=(param_2,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// SetKeySelectionText_WrapperImpl @ 14695dd20

void __cdecl UInputKeySelector::SetKeySelectionText_WrapperImpl(void *param_1,void *param_2)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  FText local_28;
  FText local_18;
  
  local_28.TextData.Reference = *(ITextData **)param_2;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 8))
              (local_28.TextData.Reference,local_res8);
  }
  local_28.Flags = *(uint *)((longlong)param_2 + 8);
  lVar1 = *(longlong *)((longlong)param_1 + 0x8b8);
  if (lVar1 != 0) {
    local_18.TextData.Reference = local_28.TextData.Reference;
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 8))
                (local_28.TextData.Reference,local_res8);
    }
    local_18.Flags = local_28.Flags;
    FText::operator=((FText *)(lVar1 + 800),&local_18);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  FText::operator=((FText *)((longlong)param_1 + 0x850),&local_28);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// GetNoKeySpecifiedText_WrapperImpl @ 14695de10

void __cdecl UInputKeySelector::GetNoKeySpecifiedText_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 local_res8 [8];
  FText local_18;
  
  local_18.TextData.Reference = *(ITextData **)((longlong)param_1 + 0x860);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = *(uint *)((longlong)param_1 + 0x868);
  FText::operator=(param_2,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// SetNoKeySpecifiedText_WrapperImpl @ 14695dec0

void __cdecl UInputKeySelector::SetNoKeySpecifiedText_WrapperImpl(void *param_1,void *param_2)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  FText local_28;
  FText local_18;
  
  local_28.TextData.Reference = *(ITextData **)param_2;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 8))
              (local_28.TextData.Reference,local_res8);
  }
  local_28.Flags = *(uint *)((longlong)param_2 + 8);
  lVar1 = *(longlong *)((longlong)param_1 + 0x8b8);
  if (lVar1 != 0) {
    local_18.TextData.Reference = local_28.TextData.Reference;
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 8))
                (local_28.TextData.Reference,local_res8);
    }
    local_18.Flags = local_28.Flags;
    FText::operator=((FText *)(lVar1 + 0x330),&local_18);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  FText::operator=((FText *)((longlong)param_1 + 0x860),&local_28);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// GetbAllowModifierKeys_WrapperImpl @ 14695df70

void __cdecl UInputKeySelector::GetbAllowModifierKeys_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x870);
  return;
}

// SetbAllowModifierKeys_WrapperImpl @ 14695df80

void __cdecl UInputKeySelector::SetbAllowModifierKeys_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)param_2;
  if (*(longlong *)((longlong)param_1 + 0x8b8) != 0) {
    *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x8b8) + 0x340) = uVar1;
  }
  *(undefined1 *)((longlong)param_1 + 0x870) = uVar1;
  return;
}

// GetbAllowGamepadKeys_WrapperImpl @ 14695dfb0

void __cdecl UInputKeySelector::GetbAllowGamepadKeys_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x871);
  return;
}

// SetbAllowGamepadKeys_WrapperImpl @ 14695dfc0

void __cdecl UInputKeySelector::SetbAllowGamepadKeys_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)param_2;
  if (*(longlong *)((longlong)param_1 + 0x8b8) != 0) {
    *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x8b8) + 0x341) = uVar1;
  }
  *(undefined1 *)((longlong)param_1 + 0x871) = uVar1;
  return;
}

// StaticClass @ 14695dff0

UClass * __cdecl UInputKeySelector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputKeySelector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"InputKeySelector",
               &Z_Registration_Info_UClass_UInputKeySelector.InnerSingleton,
               StaticRegisterNativesUInputKeySelector,0x8d0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInputKeySelector>,
               InternalVTableHelperCtorCaller<UInputKeySelector>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputKeySelector.InnerSingleton;
}

// UInputKeySelector @ 14698a8f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UInputKeySelector * __thiscall
UInputKeySelector::UInputKeySelector(UInputKeySelector *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  FButtonStyle::FButtonStyle(&this->WidgetStyle);
  FTextBlockStyle::FTextBlockStyle(&this->TextStyle);
  FInputChord::FInputChord(&this->SelectedKey);
  (this->Margin).Left = 0.0;
  (this->Margin).Top = 0.0;
  (this->Margin).Right = 0.0;
  (this->Margin).Bottom = 0.0;
  FText::FText(&this->KeySelectionText);
  FText::FText(&this->NoKeySpecifiedText);
  (this->EscapeKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EscapeKeys).ArrayNum = 0;
  (this->EscapeKeys).ArrayMax = 0;
  *(undefined8 *)&this->OnKeySelected = 0;
  *(undefined8 *)&(this->OnKeySelected).field_0x8 = 0;
  *(undefined8 *)&(this->OnKeySelected).field_0x10 = 0;
  *(undefined8 *)&this->OnIsSelectingKeyChanged = 0;
  *(undefined8 *)&(this->OnIsSelectingKeyChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnIsSelectingKeyChanged).field_0x10 = 0;
  (this->MyInputKeySelector).Object = (SInputKeySelector *)0x0;
  (this->MyInputKeySelector).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UInputKeySelector @ 14698a9c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UInputKeySelector * __thiscall
UInputKeySelector::UInputKeySelector(UInputKeySelector *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FSharedReferencer<1> FVar2;
  FButtonStyle *pFVar3;
  FDefaultStyleCache *pFVar4;
  FText *pFVar5;
  FName *pFVar6;
  FSlateFontInfo *pFVar7;
  FName FVar8;
  FName local_res8;
  undefined1 local_a8 [16];
  FLinearColor_u_0 local_98;
  FSlateFontInfo local_88;
  
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  FButtonStyle::FButtonStyle(&this->WidgetStyle);
  FTextBlockStyle::FTextBlockStyle(&this->TextStyle);
  FInputChord::FInputChord(&this->SelectedKey);
  (this->Margin).Left = 0.0;
  (this->Margin).Top = 0.0;
  (this->Margin).Right = 0.0;
  (this->Margin).Bottom = 0.0;
  FText::FText(&this->KeySelectionText);
  FText::FText(&this->NoKeySpecifiedText);
  (this->EscapeKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EscapeKeys).ArrayNum = 0;
  (this->EscapeKeys).ArrayMax = 0;
  *(undefined8 *)&this->OnKeySelected = 0;
  *(undefined8 *)&(this->OnKeySelected).field_0x8 = 0;
  *(undefined8 *)&(this->OnKeySelected).field_0x10 = 0;
  *(undefined8 *)&this->OnIsSelectingKeyChanged = 0;
  *(undefined8 *)&(this->OnIsSelectingKeyChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnIsSelectingKeyChanged).field_0x10 = 0;
  (this->MyInputKeySelector).Object = (SInputKeySelector *)0x0;
  (this->MyInputKeySelector).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar3 = (FButtonStyle *)UE::Slate::Private::FDefaultStyleCache::Get();
  FButtonStyle::operator=(&this->WidgetStyle,pFVar3);
  pFVar4 = UE::Slate::Private::FDefaultStyleCache::Get();
  FTextBlockStyle::operator=(&this->TextStyle,&(pFVar4->Runtime).TextBlockStyle);
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_a8,L"InputKeySelector",L"DefaultKeySelectionText",L"...");
  FText::operator=(&this->KeySelectionText,pFVar5);
  if ((FName)local_a8._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_a8._0_8_ + 0x10))();
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_a8,L"InputKeySelector",L"DefaultEmptyText",L"Empty");
  FText::operator=(&this->NoKeySpecifiedText,pFVar5);
  if ((FName)local_a8._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_a8._0_8_ + 0x10))();
  }
  FVar2.ReferenceController = EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  local_a8._8_8_ = EKeys::Invalid.KeyDetails.Object;
  FVar8 = EKeys::Invalid.KeyName;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar2.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar1 = EKeys::Invalid.KeyName;
  EKeys::Invalid.KeyName.ComparisonIndex = FVar8.ComparisonIndex.Value;
  EKeys::Invalid.KeyName.Number = FVar8.Number;
  local_a8._0_4_ = EKeys::Invalid.KeyName.ComparisonIndex.Value;
  local_a8._4_4_ = EKeys::Invalid.KeyName.Number;
  local_98._s_0.B = (float)((uint)local_98._s_0.B & 0xfffffff0);
  local_98._0_8_ = FVar2.ReferenceController;
  EKeys::Invalid.KeyName = FVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  FInputChord::operator=(&this->SelectedKey,(FInputChord *)local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_98._0_8_);
  this->bAllowModifierKeys = true;
  this->bAllowGamepadKeys = false;
  TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
            (&this->EscapeKeys,&EKeys::Gamepad_Special_Right);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString((FString *)local_a8,L"/Engine/EngineFonts/Roboto");
    FConfigCacheIni::GetString
              (GConfig,L"SlateStyle",L"DefaultFontName",(FString *)local_a8,&GEngineIni);
    FVar8 = (FName)L"";
    if (local_a8._8_4_ != 0) {
      FVar8 = (FName)local_a8._0_8_;
    }
    ConstructorHelpers::FObjectFinder<UFont>::FObjectFinder<UFont>
              (&RobotoFontObj,(wchar_t *)FVar8,0);
    if ((FName)local_a8._0_8_ != (FName)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
    atexit(`UInputKeySelector::UInputKeySelector'::__l5::
           _dynamic_atexit_destructor_for__RobotoFontObj__);
    _Init_thread_footer(&::_TSS0);
  }
  local_98 = FLinearColor::Black.field0_0x0;
  local_a8._0_8_ = local_a8._0_8_ & 0xff00000000000000;
  local_a8._8_8_ = (FKeyDetails *)0x0;
  pFVar6 = ::FName::FName(&local_res8,"Bold");
  pFVar7 = FSlateFontInfo::FSlateFontInfo
                     (&local_88,(UObject *)RobotoFontObj.Object.field0_0x0,__real_41c00000,pFVar6,
                      (FFontOutlineSettings *)local_a8);
  FSlateFontInfo::operator=(&(this->TextStyle).Font,pFVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// ~UInputKeySelector @ 146993000

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UInputKeySelector::~UInputKeySelector(UInputKeySelector *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyInputKeySelector).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnIsSelectingKeyChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnIsSelectingKeyChanged);
  pvVar1 = *(void **)&(this->OnKeySelected).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnKeySelected);
  DestructItems<FKey,int>
            ((FKey *)(this->EscapeKeys).AllocatorInstance.Data,(this->EscapeKeys).ArrayNum);
  pFVar2 = (this->EscapeKeys).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar3 = (this->NoKeySpecifiedText).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar3 = (this->KeySelectionText).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelectedKey).Key.KeyDetails.SharedReferenceCount.ReferenceController);
  FTextBlockStyle::~FTextBlockStyle(&this->TextStyle);
  FButtonStyle::~FButtonStyle(&this->WidgetStyle);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// AllowGamepadKeys @ 1469a2820

bool __thiscall UInputKeySelector::AllowGamepadKeys(UInputKeySelector *this)

{
  return this->bAllowGamepadKeys;
}

// AllowModifierKeys @ 1469a2830

bool __thiscall UInputKeySelector::AllowModifierKeys(UInputKeySelector *this)

{
  return this->bAllowModifierKeys;
}

// FOnIsSelectingKeyChanged_DelegateWrapper @ 1469c7a90

void __cdecl
UInputKeySelector::FOnIsSelectingKeyChanged_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FOnKeySelected_DelegateWrapper @ 1469c7bf0

void __cdecl
UInputKeySelector::FOnKeySelected_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FInputChord *param_2)

{
  FSharedReferencer<1> FVar1;
  FInputChord local_28;
  
  FInputChord::FInputChord(&local_28);
  FVar1.ReferenceController = local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController;
  local_28.Key.KeyName = (param_2->Key).KeyName;
  local_28.Key.KeyDetails.Object = (param_2->Key).KeyDetails.Object;
  local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar1.ReferenceController);
  local_28._24_4_ = *(uint *)&param_2->field_0x18 & 0xf | local_28._24_4_ & 0xfffffff0;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// GetButtonStyle @ 1469ce000

FButtonStyle * __thiscall UInputKeySelector::GetButtonStyle(UInputKeySelector *this)

{
  return &this->WidgetStyle;
}

// GetFieldNotificationDescriptor @ 1469d05c0

IClassDescriptor * __thiscall
UInputKeySelector::GetFieldNotificationDescriptor(UInputKeySelector *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UInputKeySelector::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetIsSelectingKey @ 1469d1730

bool __thiscall UInputKeySelector::GetIsSelectingKey(UInputKeySelector *this)

{
  SInputKeySelector *pSVar1;
  
  pSVar1 = (this->MyInputKeySelector).Object;
  if (pSVar1 != (SInputKeySelector *)0x0) {
    return pSVar1->bIsSelectingKey;
  }
  return false;
}

// GetKeySelectionText @ 1469d1b80

FText * __thiscall UInputKeySelector::GetKeySelectionText(UInputKeySelector *this)

{
  return &this->KeySelectionText;
}

// GetMargin @ 1469d1c10

FMargin * __thiscall UInputKeySelector::GetMargin(UInputKeySelector *this)

{
  return &this->Margin;
}

// GetNoKeySpecifiedText @ 1469d1f50

FText * __thiscall UInputKeySelector::GetNoKeySpecifiedText(UInputKeySelector *this)

{
  return &this->NoKeySpecifiedText;
}

// GetPrivateStaticClass @ 1469d44b0

UClass * __cdecl UInputKeySelector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputKeySelector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"InputKeySelector",
               &Z_Registration_Info_UClass_UInputKeySelector.InnerSingleton,
               StaticRegisterNativesUInputKeySelector,0x8d0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInputKeySelector>,
               InternalVTableHelperCtorCaller<UInputKeySelector>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputKeySelector.InnerSingleton;
}

// GetSelectedKey @ 1469d82c0

FInputChord * __thiscall
UInputKeySelector::GetSelectedKey(UInputKeySelector *this,FInputChord *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  uint uVar2;
  
  (__return_storage_ptr__->Key).KeyName = (this->SelectedKey).Key.KeyName;
  (__return_storage_ptr__->Key).KeyDetails.Object = (this->SelectedKey).Key.KeyDetails.Object;
  pTVar1 = (this->SelectedKey).Key.KeyDetails.SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->Key).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar2 = (__return_storage_ptr__->bShift ^ (this->SelectedKey).bShift) & 1 ^
          *(uint *)&__return_storage_ptr__->field_0x18;
  *(uint *)&__return_storage_ptr__->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&(this->SelectedKey).field_0x18) & 2 ^ uVar2;
  *(uint *)&__return_storage_ptr__->field_0x18 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&(this->SelectedKey).field_0x18) & 4 ^ uVar2;
  *(uint *)&__return_storage_ptr__->field_0x18 = uVar2;
  *(uint *)&__return_storage_ptr__->field_0x18 =
       (uVar2 ^ *(uint *)&(this->SelectedKey).field_0x18) & 8 ^ uVar2;
  return __return_storage_ptr__;
}

// GetTextStyle @ 1469d8ea0

FTextBlockStyle * __thiscall UInputKeySelector::GetTextStyle(UInputKeySelector *this)

{
  return &this->TextStyle;
}

// HandleIsSelectingKeyChanged @ 1469dbfd0

void __thiscall UInputKeySelector::HandleIsSelectingKeyChanged(UInputKeySelector *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnIsSelectingKeyChanged,
             (void *)0x0);
  return;
}

// HandleKeySelected @ 1469dc210

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UInputKeySelector::HandleKeySelected(UInputKeySelector *this,FInputChord *param_1)

{
  undefined4 uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSharedReferencer<1> FVar3;
  uint uVar4;
  uint uVar5;
  atomic<int> *paVar6;
  uint local_res8;
  FFieldId local_58;
  FInputChord local_48;
  
  FInputChord::operator=(&this->SelectedKey,param_1);
  local_58.FieldName = FFieldNotificationClassDescriptor::SelectedKey.FieldName;
  local_58.BitNumber = FFieldNotificationClassDescriptor::SelectedKey.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->field_0x28,&local_58);
  pTVar2 = (this->SelectedKey).Key.KeyDetails.SharedReferenceCount.ReferenceController;
  local_48.Key.KeyName = (this->SelectedKey).Key.KeyName;
  local_48.Key.KeyDetails.Object = (this->SelectedKey).Key.KeyDetails.Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    paVar6 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar6 = &pTVar2->SharedReferenceCount;
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  uVar1 = *(undefined4 *)&(this->SelectedKey).field_0x18;
  uVar4 = (ZPULL(uVar1,0,1) ^ local_res8) & 1 ^ local_res8;
  uVar4 = (uVar4 ^ uVar1) & 2 ^ uVar4;
  uVar4 = (uVar4 ^ uVar1) & 4 ^ uVar4;
  uVar4 = (uVar4 ^ uVar1) & 8 ^ uVar4;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  uVar5 = (uVar4 ^ local_res8) & 1 ^ local_res8;
  uVar5 = (uVar5 ^ uVar4) & 2 ^ uVar5;
  uVar5 = (uVar5 ^ uVar4) & 4 ^ uVar5;
  FInputChord::FInputChord(&local_48);
  FVar3.ReferenceController = local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  local_48._24_4_ = ((uVar5 ^ uVar4) & 8 ^ uVar5) & 0xf | local_48._24_4_ & 0xfffffff0;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnKeySelected,&local_48)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// RebuildWidget @ 1469ff800

TSharedRef<SWidget,1> * __thiscall
UInputKeySelector::RebuildWidget
          (UInputKeySelector *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ITextData *pIVar5;
  ITextData *pIVar6;
  FKey *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  SInputKeySelector *pSVar9;
  code *pcVar10;
  FSharedReferencer<1> FVar11;
  bool bVar12;
  char cVar13;
  byte bVar14;
  FArguments *pFVar15;
  TAttribute<FInputChord> *pTVar16;
  undefined8 *puVar17;
  ulong64 uVar18;
  TSharedRef<SWidget,1> *pTVar19;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<FKey,TSizedDefaultAllocator<32>_> local_548;
  undefined1 local_538 [8];
  FDelegateAllocation local_530;
  undefined1 local_520 [8];
  FDelegateAllocation local_518;
  FMemScope local_508;
  undefined4 uStack_500;
  int iStack_4fc;
  TSlateDecl<SInputKeySelector,RequiredArgs::T0RequiredArgs> local_4f8;
  SInputKeySelector *local_4e0;
  FSharedReferencer<1> local_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined1 local_4c0;
  undefined1 local_4b8 [8];
  ForAnyElementType FStack_4b0;
  ulonglong local_4a8;
  undefined1 local_4a0 [4];
  undefined1 local_49c [4];
  UInputKeySelector *local_498;
  UInputKeySelector *local_490;
  FName local_488;
  FDestructionSentinel local_480;
  FDestructionSentinel local_468;
  FDestructionSentinel local_450;
  FDestructionSentinel local_438;
  FDelegateAllocation *local_420;
  FDestructionSentinel local_418;
  FDelegateAllocation *local_400;
  undefined1 local_3f8 [544];
  undefined1 local_1d8 [80];
  FSharedReferencer<1> local_188;
  undefined1 local_158 [48];
  undefined1 local_128 [40];
  TRefCountPtr<ITextData> local_100;
  TRefCountPtr<ITextData> local_f0;
  ForAnyElementType local_d8;
  int local_d0;
  undefined1 local_c8 [24];
  undefined1 local_b0 [32];
  TAttribute<FInputChord> local_90;
  
  pFVar15 = SInputKeySelector::FArguments::FArguments((FArguments *)local_3f8);
  pTVar16 = TAttribute<FInputChord>::TAttribute<FInputChord><FInputChord>
                      (&local_90,&this->SelectedKey);
  FInputChord::operator=(&(pFVar15->_SelectedKey).Value,&pTVar16->Value);
  (pFVar15->_SelectedKey).bIsSet = pTVar16->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_SelectedKey).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar16->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar16->Getter);
  pvVar4 = *(void **)&(pTVar16->Getter).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&pTVar16->Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar16->Value).Key.KeyDetails.SharedReferenceCount.ReferenceController);
  local_4d0._0_4_ = (this->Margin).Left;
  local_4d0._4_4_ = (this->Margin).Top;
  uStack_4c8._0_4_ = (this->Margin).Right;
  uStack_4c8._4_4_ = (this->Margin).Bottom;
  local_4c0 = 1;
  local_4b8 = (undefined1  [8])0x0;
  FStack_4b0.Data = (FScriptContainerElement *)0x0;
  local_4a8 = 0;
  (pFVar15->_Margin).Value.Left = (float)(undefined4)local_4d0;
  (pFVar15->_Margin).Value.Top = (float)local_4d0._4_4_;
  (pFVar15->_Margin).Value.Right = (float)(undefined4)uStack_4c8;
  (pFVar15->_Margin).Value.Bottom = (float)uStack_4c8._4_4_;
  (pFVar15->_Margin).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_Margin).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4b8,
             (FWriteAccessScope *)&local_480);
  if (((int)local_4a8 != 0) && (FStack_4b0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4b0,0,0,0x10);
    local_4a8 = local_4a8 & 0xffffffff00000000;
  }
  if (local_480.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_480.Accessor,&local_480);
  }
  if (FStack_4b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4b8);
  pFVar15->_ButtonStyle = &this->WidgetStyle;
  pFVar15->_TextStyle = &this->TextStyle;
  pIVar5 = (this->KeySelectionText).TextData.Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_res18);
  }
  pIVar6 = (pFVar15->_KeySelectionText).TextData.Reference;
  uVar2 = (this->KeySelectionText).Flags;
  if (pIVar6 != pIVar5) {
    (pFVar15->_KeySelectionText).TextData.Reference = pIVar5;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_res20);
    }
    if (pIVar6 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
    }
  }
  (pFVar15->_KeySelectionText).Flags = uVar2;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
  }
  pIVar5 = (this->NoKeySpecifiedText).TextData.Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_4a0);
  }
  pIVar6 = (pFVar15->_NoKeySpecifiedText).TextData.Reference;
  uVar2 = (this->NoKeySpecifiedText).Flags;
  if (pIVar6 != pIVar5) {
    (pFVar15->_NoKeySpecifiedText).TextData.Reference = pIVar5;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_49c);
    }
    if (pIVar6 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
    }
  }
  (pFVar15->_NoKeySpecifiedText).Flags = uVar2;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
  }
  pFVar15->_AllowModifierKeys = this->bAllowModifierKeys;
  pFVar15->_AllowGamepadKeys = this->bAllowGamepadKeys;
  iVar3 = (this->EscapeKeys).ArrayNum;
  pFVar7 = (FKey *)(this->EscapeKeys).AllocatorInstance.Data;
  local_548.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_548.ArrayNum = iVar3;
  if (iVar3 == 0) {
    local_548.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar3,0,&local_548.AllocatorInstance,iVar3,&local_548.ArrayMax);
    ConstructItems<FKey,FKey,int>(local_548.AllocatorInstance.Data,pFVar7,iVar3);
  }
  TArray<FKey,TSizedDefaultAllocator<32>_>::operator=(&pFVar15->_EscapeKeys,&local_548);
  DestructItems<FKey,int>((FKey *)local_548.AllocatorInstance.Data,local_548.ArrayNum);
  if ((FKey *)local_548.AllocatorInstance.Data != (FKey *)0x0) {
    FMemory::Free(local_548.AllocatorInstance.Data);
  }
  uStack_500 = 0;
  local_508 = (FMemScope)_vcall__784__flat______;
  iStack_4fc = local_548.ArrayMax;
  local_520 = (undefined1  [8])0x0;
  local_518.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_518.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_520,
             (FWriteAccessScope *)&local_438);
  local_420 = &local_518;
  puVar17 = UE::Core::Private::DelegateAllocate(0x30,&local_518);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBUFInputChord___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar17[2] = uVar18;
    *puVar17 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUInputKeySelector____A6AXAEBUFInputChord___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar17[3] = 0;
    local_498 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar17 + 3),(FObjectPtr)&local_498);
    *(FMemScope *)(puVar17 + 4) = local_508;
    puVar17[5] = CONCAT44(iStack_4fc,uStack_500);
  }
  if (local_438.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_438.Accessor,&local_438);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar15->_OnKeySelected,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_520);
  uStack_500 = 0;
  local_508 = (FMemScope)HandleIsSelectingKeyChanged;
  iStack_4fc = local_548.ArrayMax;
  local_538 = (undefined1  [8])0x0;
  local_530.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_530.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_538,
             (FWriteAccessScope *)&local_418);
  local_400 = &local_530;
  puVar17 = UE::Core::Private::DelegateAllocate(0x30,&local_530);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar17[2] = uVar18;
    *puVar17 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUInputKeySelector____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar17[3] = 0;
    local_490 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar17 + 3),(FObjectPtr)&local_490);
    *(FMemScope *)(puVar17 + 4) = local_508;
    puVar17[5] = CONCAT44(iStack_4fc,uStack_500);
  }
  if (local_418.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_418.Accessor,&local_418);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar15->_OnIsSelectingKeyChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_538);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_488 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_508,&local_488,true);
  TSlateDecl<SInputKeySelector,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SInputKeySelector,RequiredArgs::T0RequiredArgs>
            (&local_4f8,"SInputKeySelector",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\InputKeySelector.cpp"
             ,0xe8,local_res8);
  FMemScope::~FMemScope(&local_508);
  FLLMScope::~FLLMScope(local_res10);
  pSVar9 = local_4f8._Widget.Object;
  if (local_4f8._Widget.Object == (SInputKeySelector *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar10)();
      return pTVar19;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_4f8._Widget.Object,(FSlateBaseNamedArgs *)pFVar15);
  SInputKeySelector::Construct(local_4f8._Widget.Object,pFVar15);
  if (local_4f8._Widget.Object == (SInputKeySelector *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar10)();
      return pTVar19;
    }
  }
  if (((local_4f8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar13 = (**(code **)((local_4f8._Widget.Object)->_padding_ + 0x228))(local_4f8._Widget.Object);
    bVar14 = 0;
    if (cVar13 == '\0') goto LAB_1469ffd98;
  }
  bVar14 = 0x20;
LAB_1469ffd98:
  *(byte *)&(local_4f8._Widget.Object)->_padding_ =
       (byte)(local_4f8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_4f8._Widget.Object)->_padding_ =
       (byte)(local_4f8._Widget.Object)->_padding_ | bVar14;
  if (local_4f8._Widget.Object == (SInputKeySelector *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar10)();
      return pTVar19;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_4f8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_4f8._Widget.Object == (SInputKeySelector *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar10)();
      return pTVar19;
    }
  }
  FVar11.ReferenceController = local_4f8._Widget.SharedReferenceCount.ReferenceController;
  local_4f8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_4f8._Widget.Object = (SInputKeySelector *)0x0;
  if (pSVar9 == (SInputKeySelector *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar10)();
      return pTVar19;
    }
  }
  local_4e0 = pSVar9;
  local_4d8.ReferenceController = FVar11.ReferenceController;
  if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyInputKeySelector != (TSharedPtr<SInputKeySelector,1> *)&local_4e0) {
    (this->MyInputKeySelector).Object = pSVar9;
    local_4e0 = (SInputKeySelector *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyInputKeySelector).SharedReferenceCount,&local_4d8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4d8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_538,
             (FWriteAccessScope *)&local_468);
  if ((local_530.DelegateSize != 0) &&
     (local_530.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_530.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_530,0,0,0x10);
    local_530.DelegateSize = 0;
  }
  if (local_468.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_468.Accessor,&local_468);
  }
  if (local_530.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_530.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_538);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_520,
             (FWriteAccessScope *)&local_450);
  if ((local_518.DelegateSize != 0) &&
     (local_518.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_518.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_518,0,0,0x10);
    local_518.DelegateSize = 0;
  }
  if (local_450.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_450.Accessor,&local_450);
  }
  if (local_518.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_518.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_520);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
  if ((void *)local_b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
  if ((void *)local_c8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c8);
  DestructItems<FKey,int>((FKey *)local_d8.Data,local_d0);
  if ((FKey *)local_d8.Data != (FKey *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  if (local_f0.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f0.Reference + 0x10))();
  }
  if (local_100.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_128);
  if ((void *)local_128._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_128._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_128);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_158);
  if ((void *)local_158._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_158._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_158);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d8);
  if ((void *)local_1d8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1d8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3f8._520_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_3f8);
  if ((this->MyInputKeySelector).Object == (SInputKeySelector *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x408,L"");
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar10)();
      return pTVar19;
    }
  }
  pTVar8 = (this->MyInputKeySelector).SharedReferenceCount.ReferenceController;
  pSVar9 = (this->MyInputKeySelector).Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar9 == (SInputKeySelector *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x25d,L"");
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      pTVar19 = (TSharedRef<SWidget,1> *)(*pcVar10)();
      return pTVar19;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar9;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a0a750

void __thiscall UInputKeySelector::ReleaseSlateResources(UInputKeySelector *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyInputKeySelector != (TSharedPtr<SInputKeySelector,1> *)&local_18) {
    (this->MyInputKeySelector).Object = (SInputKeySelector *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyInputKeySelector).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// Serialize @ 146a10940

void __thiscall UInputKeySelector::Serialize(UInputKeySelector *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x000146a10960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFrameworkObjectVersion::GUID);
  return;
}

// Serialize @ 146a10970

void __thiscall
UInputKeySelector::Serialize(UInputKeySelector *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FFrameworkObjectVersion::GUID);
  return;
}

// SetAllowGamepadKeys @ 146a10ce0

void __thiscall UInputKeySelector::SetAllowGamepadKeys(UInputKeySelector *this,bool param_1)

{
  SInputKeySelector *pSVar1;
  
  pSVar1 = (this->MyInputKeySelector).Object;
  if (pSVar1 != (SInputKeySelector *)0x0) {
    pSVar1->bAllowGamepadKeys = param_1;
  }
  this->bAllowGamepadKeys = param_1;
  return;
}

// SetAllowModifierKeys @ 146a10d00

void __thiscall UInputKeySelector::SetAllowModifierKeys(UInputKeySelector *this,bool param_1)

{
  SInputKeySelector *pSVar1;
  
  pSVar1 = (this->MyInputKeySelector).Object;
  if (pSVar1 != (SInputKeySelector *)0x0) {
    pSVar1->bAllowModifierKeys = param_1;
  }
  this->bAllowModifierKeys = param_1;
  return;
}

// SetButtonStyle @ 146a11da0

void __thiscall UInputKeySelector::SetButtonStyle(UInputKeySelector *this,FButtonStyle *param_1)

{
  SInputKeySelector *this_00;
  
  this_00 = (this->MyInputKeySelector).Object;
  if (this_00 != (SInputKeySelector *)0x0) {
    SInputKeySelector::SetButtonStyle(this_00,param_1);
  }
  FButtonStyle::operator=(&this->WidgetStyle,param_1);
  return;
}

// SetButtonStyle @ 146a11de0

void __thiscall UInputKeySelector::SetButtonStyle(UInputKeySelector *this,FButtonStyle *param_1)

{
  SInputKeySelector *this_00;
  
  this_00 = (this->MyInputKeySelector).Object;
  if (this_00 != (SInputKeySelector *)0x0) {
    SInputKeySelector::SetButtonStyle(this_00,param_1);
  }
  FButtonStyle::operator=(&this->WidgetStyle,param_1);
  return;
}

// SetEscapeKeys @ 146a13d60

void __thiscall
UInputKeySelector::SetEscapeKeys
          (UInputKeySelector *this,TArray<FKey,TSizedDefaultAllocator<32>_> *param_1)

{
  SInputKeySelector *pSVar1;
  FKey *pFVar2;
  FScriptContainerElement *pFVar3;
  TArray<FKey,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  pSVar1 = (this->MyInputKeySelector).Object;
  if (pSVar1 != (SInputKeySelector *)0x0) {
    iVar5 = param_1->ArrayNum;
    pFVar2 = (FKey *)(param_1->AllocatorInstance).Data;
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20 = CONCAT44(local_20._4_4_,iVar5);
    if (iVar5 == 0) {
      local_20 = 0;
      local_20._0_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar5,0,&local_28,iVar5,(int *)((longlong)&local_20 + 4));
      ConstructItems<FKey,FKey,int>(local_28.Data,pFVar2,iVar5);
    }
    pTVar4 = &pSVar1->EscapeKeys;
    iVar5 = (int)local_20;
    if (pTVar4 != (TArray<FKey,TSizedDefaultAllocator<32>_> *)&local_28) {
      DestructItems<FKey,int>
                ((FKey *)(pTVar4->AllocatorInstance).Data,(pSVar1->EscapeKeys).ArrayNum);
      pFVar3 = (pTVar4->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar4->AllocatorInstance).Data = local_28.Data;
      local_28.Data = (FScriptContainerElement *)0x0;
      (pSVar1->EscapeKeys).ArrayNum = (int)local_20;
      (pSVar1->EscapeKeys).ArrayMax = local_20._4_4_;
      local_20 = 0;
      iVar5 = 0;
    }
    DestructItems<FKey,int>((FKey *)local_28.Data,iVar5);
    if ((FKey *)local_28.Data != (FKey *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  TArray<FKey,TSizedDefaultAllocator<32>_>::operator=(&this->EscapeKeys,param_1);
  return;
}

// SetKeySelectionText @ 146a16620

void __thiscall UInputKeySelector::SetKeySelectionText(UInputKeySelector *this,FText *param_1)

{
  SInputKeySelector *pSVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  FText local_18;
  
  pSVar1 = (this->MyInputKeySelector).Object;
  if (pSVar1 != (SInputKeySelector *)0x0) {
    local_18.TextData.Reference = (param_1->TextData).Reference;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res8);
    }
    local_18.Flags = param_1->Flags;
    FText::operator=(&pSVar1->KeySelectionText,&local_18);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  FText::operator=(&this->KeySelectionText,param_1);
  pIVar2 = (param_1->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return;
}

// SetMargin @ 146a16a10

void __thiscall UInputKeySelector::SetMargin(UInputKeySelector *this,FMargin *param_1)

{
  SInputKeySelector *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  TAttribute<FMargin> local_38;
  
  this_00 = (this->MyInputKeySelector).Object;
  if (this_00 != (SInputKeySelector *)0x0) {
    local_38.Value.Left = param_1->Left;
    local_38.Value.Top = param_1->Top;
    local_38.Value.Right = param_1->Right;
    local_38.Value.Bottom = param_1->Bottom;
    local_38.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SInputKeySelector::SetMargin(this_00,&local_38);
  }
  fVar1 = param_1->Top;
  fVar2 = param_1->Right;
  fVar3 = param_1->Bottom;
  (this->Margin).Left = param_1->Left;
  (this->Margin).Top = fVar1;
  (this->Margin).Right = fVar2;
  (this->Margin).Bottom = fVar3;
  return;
}

// SetNoKeySpecifiedText @ 146a181f0

void __thiscall UInputKeySelector::SetNoKeySpecifiedText(UInputKeySelector *this,FText *param_1)

{
  SInputKeySelector *pSVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  FText local_18;
  
  pSVar1 = (this->MyInputKeySelector).Object;
  if (pSVar1 != (SInputKeySelector *)0x0) {
    local_18.TextData.Reference = (param_1->TextData).Reference;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res8);
    }
    local_18.Flags = param_1->Flags;
    FText::operator=(&pSVar1->NoKeySpecifiedText,&local_18);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  FText::operator=(&this->NoKeySpecifiedText,param_1);
  pIVar2 = (param_1->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return;
}

// SetSelectedKey @ 146a1a910

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UInputKeySelector::SetSelectedKey(UInputKeySelector *this,FInputChord *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  SInputKeySelector *this_00;
  TAttribute<FInputChord> *pTVar3;
  FFieldId local_58;
  TAttribute<FInputChord> local_48;
  
  if ((this->SelectedKey).Key.KeyName == (param_1->Key).KeyName) {
    uVar1 = *(undefined4 *)&(this->SelectedKey).field_0x18;
    uVar2 = *(undefined4 *)&param_1->field_0x18;
    if ((((((ZPULL(uVar1,0,1) ^ ZPULL(uVar2,0,1)) & 1) == 0) && (((uVar1 ^ uVar2) & 2) == 0)) &&
        (((uVar1 ^ uVar2) & 4) == 0)) && (((uVar1 ^ uVar2) & 8) == 0)) {
      return;
    }
  }
  local_58.FieldName = FFieldNotificationClassDescriptor::SelectedKey.FieldName;
  local_58.BitNumber = FFieldNotificationClassDescriptor::SelectedKey.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->field_0x28,&local_58);
  this_00 = (this->MyInputKeySelector).Object;
  if (this_00 != (SInputKeySelector *)0x0) {
    pTVar3 = TAttribute<FInputChord>::TAttribute<FInputChord><FInputChord>(&local_48,param_1);
    SInputKeySelector::SetSelectedKey(this_00,pTVar3);
  }
  FInputChord::operator=(&this->SelectedKey,param_1);
  return;
}

// SetTextBlockVisibility @ 146a1c3a0

void __thiscall
UInputKeySelector::SetTextBlockVisibility(UInputKeySelector *this,ESlateVisibility param_1)

{
  code *pcVar1;
  bool bVar2;
  EVisibility local_res8;
  
  if ((this->MyInputKeySelector).Object == (SInputKeySelector *)0x0) {
    return;
  }
  UWidget::ConvertSerializedVisibilityToRuntime(8);
  if ((this->MyInputKeySelector).Object == (SInputKeySelector *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SInputKeySelector::SetTextBlockVisibility((this->MyInputKeySelector).Object,local_res8);
  return;
}

// SetTextStyle @ 146a1c6f0

void __thiscall UInputKeySelector::SetTextStyle(UInputKeySelector *this,FTextBlockStyle *param_1)

{
  SInputKeySelector *this_00;
  
  this_00 = (this->MyInputKeySelector).Object;
  if (this_00 != (SInputKeySelector *)0x0) {
    SInputKeySelector::SetTextStyle(this_00,param_1);
  }
  FTextBlockStyle::operator=(&this->TextStyle,param_1);
  return;
}

// StaticRegisterNativesUInputKeySelector @ 146a1e9a0

void __cdecl UInputKeySelector::StaticRegisterNativesUInputKeySelector(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UInputKeySelector_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a22250

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UInputKeySelector::SynchronizeProperties(UInputKeySelector *this)

{
  TArray<FKey,TSizedDefaultAllocator<32>_> *pTVar1;
  SInputKeySelector *pSVar2;
  FKey *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  TAttribute<FInputChord> *pTVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  ForAnyElementType local_b8;
  undefined8 local_b0;
  FText local_a8;
  FText local_98;
  TAttribute<FMargin> local_88;
  TAttribute<FInputChord> local_58;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  pSVar2 = (this->MyInputKeySelector).Object;
  if (pSVar2 != (SInputKeySelector *)0x0) {
    pTVar7 = TAttribute<FInputChord>::TAttribute<FInputChord><FInputChord>
                       (&local_58,&this->SelectedKey);
    SInputKeySelector::SetSelectedKey(pSVar2,pTVar7);
    if ((this->MyInputKeySelector).Object == (SInputKeySelector *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_88.Value.Left = (this->Margin).Left;
    local_88.Value.Top = (this->Margin).Top;
    local_88.Value.Right = (this->Margin).Right;
    local_88.Value.Bottom = (this->Margin).Bottom;
    local_88.bIsSet = true;
    local_88.Getter._16_8_ = 0;
    local_88.Getter._0_8_ = 0;
    local_88.Getter._8_8_ = 0;
    SInputKeySelector::SetMargin((this->MyInputKeySelector).Object,&local_88);
    if ((this->MyInputKeySelector).Object == (SInputKeySelector *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    SInputKeySelector::SetButtonStyle((this->MyInputKeySelector).Object,&this->WidgetStyle);
    if ((this->MyInputKeySelector).Object == (SInputKeySelector *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    SInputKeySelector::SetTextStyle((this->MyInputKeySelector).Object,&this->TextStyle);
    if ((this->MyInputKeySelector).Object == (SInputKeySelector *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_a8.TextData.Reference = (this->KeySelectionText).TextData.Reference;
    pSVar2 = (this->MyInputKeySelector).Object;
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 8))
                (local_a8.TextData.Reference,local_res8);
    }
    local_a8.Flags = (this->KeySelectionText).Flags;
    FText::operator=(&pSVar2->KeySelectionText,&local_a8);
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
    if ((this->MyInputKeySelector).Object == (SInputKeySelector *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_98.TextData.Reference = (this->NoKeySpecifiedText).TextData.Reference;
    pSVar2 = (this->MyInputKeySelector).Object;
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 8))
                (local_98.TextData.Reference,local_res10);
    }
    local_98.Flags = (this->NoKeySpecifiedText).Flags;
    FText::operator=(&pSVar2->NoKeySpecifiedText,&local_98);
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
    if ((this->MyInputKeySelector).Object == (SInputKeySelector *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    ((this->MyInputKeySelector).Object)->bAllowModifierKeys = this->bAllowModifierKeys;
    if ((this->MyInputKeySelector).Object == (SInputKeySelector *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    ((this->MyInputKeySelector).Object)->bAllowGamepadKeys = this->bAllowGamepadKeys;
    if ((this->MyInputKeySelector).Object == (SInputKeySelector *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = (this->EscapeKeys).ArrayNum;
    pSVar2 = (this->MyInputKeySelector).Object;
    pFVar3 = (FKey *)(this->EscapeKeys).AllocatorInstance.Data;
    local_b8.Data = (FScriptContainerElement *)0x0;
    local_b0 = CONCAT44(local_b0._4_4_,iVar8);
    if (iVar8 == 0) {
      local_b0 = 0;
      local_b0._0_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar8,0,&local_b8,iVar8,(int *)((longlong)&local_b0 + 4));
      ConstructItems<FKey,FKey,int>(local_b8.Data,pFVar3,iVar8);
    }
    pTVar1 = &pSVar2->EscapeKeys;
    iVar8 = (int)local_b0;
    if (pTVar1 != (TArray<FKey,TSizedDefaultAllocator<32>_> *)&local_b8) {
      DestructItems<FKey,int>
                ((FKey *)(pTVar1->AllocatorInstance).Data,(pSVar2->EscapeKeys).ArrayNum);
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pTVar1->AllocatorInstance).Data = local_b8.Data;
      local_b8.Data = (FScriptContainerElement *)0x0;
      (pSVar2->EscapeKeys).ArrayNum = (int)local_b0;
      (pSVar2->EscapeKeys).ArrayMax = local_b0._4_4_;
      local_b0 = 0;
      iVar8 = 0;
    }
    DestructItems<FKey,int>((FKey *)local_b8.Data,iVar8);
    if ((FKey *)local_b8.Data != (FKey *)0x0) {
      FMemory::Free(local_b8.Data);
    }
  }
  return;
}

// execGetIsSelectingKey @ 146a356a0

void __cdecl
UInputKeySelector::execGetIsSelectingKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x37].field_0x20 != 0) {
    *(undefined1 *)param_3 = *(undefined1 *)(*(longlong *)&param_1[0x37].field_0x20 + 0x2a8);
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execSetAllowGamepadKeys @ 146a399f0

void __cdecl
UInputKeySelector::execSetAllowGamepadKeys(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x37].field_0x20 != 0) {
    *(bool *)(*(longlong *)&param_1[0x37].field_0x20 + 0x341) = local_res8[0] != 0;
  }
  param_1[0x36].field_0x1 = local_res8[0] != 0;
  return;
}

// execSetAllowModifierKeys @ 146a39a90

void __cdecl
UInputKeySelector::execSetAllowModifierKeys(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x37].field_0x20 != 0) {
    *(bool *)(*(longlong *)&param_1[0x37].field_0x20 + 0x340) = local_res8[0] != 0;
  }
  *(bool *)(param_1 + 0x36) = local_res8[0] != 0;
  return;
}

// execSetEscapeKeys @ 146a3c5e0

void __cdecl UInputKeySelector::execSetEscapeKeys(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  FKey *pFVar3;
  ForAnyElementType *pFVar4;
  TArray<FKey,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  ForAnyElementType local_38;
  undefined8 local_30;
  TArray<FKey,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar5 = &local_28;
  if ((TArray<FKey,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FKey,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<FKey,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x37].field_0x20;
  if (lVar2 != 0) {
    iVar6 = pTVar5->ArrayNum;
    pFVar3 = (FKey *)(pTVar5->AllocatorInstance).Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = CONCAT44(local_30._4_4_,iVar6);
    if (iVar6 == 0) {
      local_30 = 0;
      local_30._0_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar6,0,&local_38,iVar6,(int *)((longlong)&local_30 + 4));
      ConstructItems<FKey,FKey,int>(local_38.Data,pFVar3,iVar6);
    }
    pFVar4 = (ForAnyElementType *)(lVar2 + 0x348);
    iVar6 = (int)local_30;
    if (pFVar4 != &local_38) {
      DestructItems<FKey,int>((FKey *)pFVar4->Data,*(int *)(lVar2 + 0x350));
      if (pFVar4->Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4->Data);
      }
      pFVar4->Data = local_38.Data;
      local_38.Data = (FScriptContainerElement *)0x0;
      *(int *)(lVar2 + 0x350) = (int)local_30;
      *(undefined4 *)(lVar2 + 0x354) = local_30._4_4_;
      local_30 = 0;
      iVar6 = 0;
    }
    DestructItems<FKey,int>((FKey *)local_38.Data,iVar6);
    if ((FKey *)local_38.Data != (FKey *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  TArray<FKey,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FKey,TSizedDefaultAllocator<32>_> *)&param_1[0x36].field_0x8,pTVar5);
  DestructItems<FKey,int>((FKey *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if ((FKey *)local_28.AllocatorInstance.Data != (FKey *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execSetKeySelectionText @ 146a3ea10

void __cdecl
UInputKeySelector::execSetKeySelectionText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  FText local_38;
  FText local_28;
  FText local_18;
  
  FText::FText(&local_28);
  FTextProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38.TextData.Reference = local_28.TextData.Reference;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 8))
              (local_28.TextData.Reference,local_res8);
  }
  lVar2 = *(longlong *)&param_1[0x37].field_0x20;
  local_38.Flags = local_28.Flags;
  if (lVar2 != 0) {
    local_18.TextData.Reference = local_38.TextData.Reference;
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 8))
                (local_38.TextData.Reference,local_res8);
    }
    local_18.Flags = local_38.Flags;
    FText::operator=((FText *)(lVar2 + 800),&local_18);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  FText::operator=((FText *)&param_1[0x35].field_0x8,&local_38);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// execSetNoKeySpecifiedText @ 146a401b0

void __cdecl
UInputKeySelector::execSetNoKeySpecifiedText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  FText local_38;
  FText local_28;
  FText local_18;
  
  FText::FText(&local_28);
  FTextProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38.TextData.Reference = local_28.TextData.Reference;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 8))
              (local_28.TextData.Reference,local_res8);
  }
  lVar2 = *(longlong *)&param_1[0x37].field_0x20;
  local_38.Flags = local_28.Flags;
  if (lVar2 != 0) {
    local_18.TextData.Reference = local_38.TextData.Reference;
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 8))
                (local_38.TextData.Reference,local_res8);
    }
    local_18.Flags = local_38.Flags;
    FText::operator=((FText *)(lVar2 + 0x330),&local_18);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  FText::operator=((FText *)&param_1[0x35].field_0x18,&local_38);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// execSetSelectedKey @ 146a420c0

void __cdecl UInputKeySelector::execSetSelectedKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FInputChord *pFVar2;
  FInputChord local_28;
  
  FInputChord::FInputChord(&local_28);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar2 = &local_28;
  if ((FInputChord *)param_2->MostRecentPropertyAddress != (FInputChord *)0x0) {
    pFVar2 = (FInputChord *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetSelectedKey((UInputKeySelector *)param_1,pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// execSetTextBlockVisibility @ 146a43620

void __cdecl
UInputKeySelector::execSetTextBlockVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  EVisibility local_res10 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x37].field_0x20 != 0) {
    UWidget::ConvertSerializedVisibilityToRuntime((ESlateVisibility)local_res10);
    if (*(longlong *)&param_1[0x37].field_0x20 == 0) {
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
    SInputKeySelector::SetTextBlockVisibility
              (*(SInputKeySelector **)&param_1[0x37].field_0x20,local_res10[0]);
  }
  return;
}

