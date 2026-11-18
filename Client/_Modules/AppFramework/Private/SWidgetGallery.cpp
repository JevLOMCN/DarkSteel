// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 27

// ~SWidgetGallery @ 142f40310

void __thiscall SWidgetGallery::~SWidgetGallery(SWidgetGallery *this)

{
  FScriptContainerElement *pFVar1;
  
  TSharedPtr<FString,1>::~TSharedPtr<FString,1>(&this->TextComboBoxSelectedItem);
  DestructItems<TSharedPtr<FString,1>,int>
            ((TSharedPtr<FString,1> *)(this->TextComboBoxOptions).AllocatorInstance.Data,
             (this->TextComboBoxOptions).ArrayNum);
  pFVar1 = (this->TextComboBoxOptions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TSharedPtr<STextComboBox,1>::~TSharedPtr<STextComboBox,1>(&this->TextComboBox);
  TSharedPtr<FString,1>::~TSharedPtr<FString,1>(&this->SelectorComboBoxSelectedItem);
  DestructItems<TSharedPtr<FString,1>,int>
            ((TSharedPtr<FString,1> *)(this->SelectorComboBoxOptions).AllocatorInstance.Data,
             (this->SelectorComboBoxOptions).ArrayNum);
  pFVar1 = (this->SelectorComboBoxOptions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1>::~TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1>
            (&this->SelectorComboBox);
  DestructItems<TSharedPtr<FString,1>,int>
            ((TSharedPtr<FString,1> *)(this->SecondComboBoxOptions).AllocatorInstance.Data,
             (this->SecondComboBoxOptions).ArrayNum);
  pFVar1 = (this->SecondComboBoxOptions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1>::~TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1>
            (&this->SecondComboBox);
  FCurveSequence::~FCurveSequence(&this->ProgressCurve);
  TSharedPtr<FString,1>::~TSharedPtr<FString,1>(&this->ComboString);
  TSharedPtr<SBreadcrumbTrail<int>,1>::~TSharedPtr<SBreadcrumbTrail<int>,1>(&this->BreadcrumbTrail);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// CreateCheckBox @ 142fa3350

TSharedRef<SWidget,1> * __thiscall
SWidgetGallery::CreateCheckBox
          (SWidgetGallery *this,TSharedRef<SWidget,1> *__return_storage_ptr__,FText *param_1,
          bool *param_2)

{
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<STextBlock,1> *pTVar1;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SCheckBox,1> *pTVar2;
  longlong lVar3;
  code **ppcVar4;
  undefined1 *puVar5;
  pmf_e890cd22 *ppVar6;
  pmf_99890dd4 *ppVar7;
  T0RequiredArgs local_a98;
  T0RequiredArgs local_a97 [7];
  FArguments *local_a90;
  FArguments *local_a88;
  TAttribute<FText> *local_a80;
  TAttribute<FText> *local_a78;
  FArguments *local_a70;
  FArguments *local_a68;
  FArguments *local_a60;
  FArguments *local_a58;
  code *local_a50;
  undefined4 local_a48;
  code *local_a40;
  undefined4 local_a38;
  TSharedRef<SWidget,1> local_a30;
  undefined1 local_a20 [24];
  pmf_e890cd22 local_a08;
  undefined1 local_9f8 [16];
  pmf_99890dd4 local_9e8;
  TSharedRef<SCheckBox,1> local_9d8;
  TSharedRef<STextBlock,1> local_9c8;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_9b8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_9a0;
  TAttribute<FText> local_988;
  FArguments local_958;
  FArguments local_578;
  
  local_a90 = SCheckBox::FArguments::FArguments(&local_958);
  local_a50 = HandleCheckBoxIsChecked;
  local_a48 = 0;
  ppcVar4 = &local_a50;
  puVar5 = local_a20;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *(undefined1 *)ppcVar4;
    ppcVar4 = (code **)((longlong)ppcVar4 + 1);
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_a20;
  ppVar6 = &local_a08;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)ppVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    ppVar6 = (pmf_e890cd22 *)&ppVar6->field_0x1;
  }
  local_a88 = SCheckBox::FArguments::IsChecked<SWidgetGallery,bool_*>
                        (local_a90,this,&local_a08,param_2);
  local_a40 = HandleCheckBoxCheckedStateChanged;
  local_a38 = 0;
  ppcVar4 = &local_a40;
  puVar5 = local_9f8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *(undefined1 *)ppcVar4;
    ppcVar4 = (code **)((longlong)ppcVar4 + 1);
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_9f8;
  ppVar7 = &local_9e8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)ppVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    ppVar7 = (pmf_99890dd4 *)&ppVar7->field_0x1;
  }
  local_a60 = SCheckBox::FArguments::OnCheckStateChanged<SWidgetGallery,bool_*>
                        (local_a88,this,&local_9e8,param_2);
  local_a70 = STextBlock::FArguments::FArguments(&local_578);
  local_a80 = &local_988;
  local_a78 = TAttribute<FText>::TAttribute<FText><FText>(local_a80,param_1);
  local_a68 = STextBlock::FArguments::Text(local_a70,local_a78);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a98);
  this_00 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_9a0,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SWidgetGallery.cpp"
                       ,0x3f4,&local_a98);
  pTVar1 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_9c8,local_a68);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_a30,pTVar1);
  local_a58 = SCheckBox::FArguments::operator[](local_a60,&local_a30);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_a97);
  this_01 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                      (&local_9b8,"SCheckBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SWidgetGallery.cpp"
                       ,0x3f0,local_a97);
  pTVar2 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_9d8,local_a58);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(__return_storage_ptr__,pTVar2);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_9d8.SharedReferenceCount);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>(&local_9b8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a30);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_9c8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_9a0);
  STextBlock::FArguments::~FArguments(&local_578);
  SCheckBox::FArguments::~FArguments(&local_958);
  return __return_storage_ptr__;
}

// CreateNewWindowToggled @ 142fb55b0

void __thiscall SWidgetGallery::CreateNewWindowToggled(SWidgetGallery *this,ECheckBoxState param_1)

{
  this->PopupMethod = this->PopupMethod == CreateNewWindow;
  return;
}

// CreateRadioButton @ 142fb55f0

TSharedRef<SWidget,1> * __thiscall
SWidgetGallery::CreateRadioButton
          (SWidgetGallery *this,TSharedRef<SWidget,1> *__return_storage_ptr__,FText *param_1,
          ERadioChoice param_2)

{
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<STextBlock,1> *pTVar1;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SCheckBox,1> *pTVar2;
  longlong lVar3;
  code **ppcVar4;
  undefined1 *puVar5;
  pmf_6bc616a6 *ppVar6;
  pmf_2e07afd0 *ppVar7;
  T0RequiredArgs local_aa8;
  T0RequiredArgs local_aa7 [3];
  FName local_aa4;
  ISlateStyle *local_a98;
  FArguments *local_a90;
  FArguments *local_a88;
  FArguments *local_a80;
  TAttribute<FText> *local_a78;
  TAttribute<FText> *local_a70;
  FArguments *local_a68;
  FArguments *local_a60;
  FArguments *local_a58;
  FArguments *local_a50;
  code *local_a48;
  undefined4 local_a40;
  code *local_a38;
  undefined4 local_a30;
  TSharedRef<SWidget,1> local_a28;
  undefined1 local_a18 [16];
  pmf_6bc616a6 local_a08;
  undefined1 local_9f8 [16];
  pmf_2e07afd0 local_9e8;
  TSharedRef<SCheckBox,1> local_9d8;
  TSharedRef<STextBlock,1> local_9c8;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_9b8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_9a0;
  TAttribute<FText> local_988;
  FArguments local_958;
  FArguments local_578;
  
  local_a90 = SCheckBox::FArguments::FArguments(&local_958);
  ::FName::FName(&local_aa4,"RadioButton");
  local_a98 = FCoreStyle::Get();
  local_a88 = SCheckBox::FArguments::Style(local_a90,local_a98,&local_aa4,(char *)0x0);
  local_a48 = HandleRadioButtonIsChecked;
  local_a40 = 0;
  ppcVar4 = &local_a48;
  puVar5 = local_a18;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *(undefined1 *)ppcVar4;
    ppcVar4 = (code **)((longlong)ppcVar4 + 1);
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_a18;
  ppVar6 = &local_a08;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)ppVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    ppVar6 = (pmf_6bc616a6 *)&ppVar6->field_0x1;
  }
  local_a80 = SCheckBox::FArguments::IsChecked<SWidgetGallery,enum_SWidgetGallery::ERadioChoice>
                        (local_a88,this,&local_a08,param_2);
  local_a38 = HandleRadioButtonCheckStateChanged;
  local_a30 = 0;
  ppcVar4 = &local_a38;
  puVar5 = local_9f8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *(undefined1 *)ppcVar4;
    ppcVar4 = (code **)((longlong)ppcVar4 + 1);
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_9f8;
  ppVar7 = &local_9e8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)ppVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    ppVar7 = (pmf_2e07afd0 *)&ppVar7->field_0x1;
  }
  local_a58 = SCheckBox::FArguments::
              OnCheckStateChanged<SWidgetGallery,enum_SWidgetGallery::ERadioChoice>
                        (local_a80,this,&local_9e8,param_2);
  local_a68 = STextBlock::FArguments::FArguments(&local_578);
  local_a78 = &local_988;
  local_a70 = TAttribute<FText>::TAttribute<FText><FText>(local_a78,param_1);
  local_a60 = STextBlock::FArguments::Text(local_a68,local_a70);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_aa8);
  this_00 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_9a0,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SWidgetGallery.cpp"
                       ,0x406,&local_aa8);
  pTVar1 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_9c8,local_a60);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_a28,pTVar1);
  local_a50 = SCheckBox::FArguments::operator[](local_a58,&local_a28);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_aa7);
  this_01 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                      (&local_9b8,"SCheckBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SWidgetGallery.cpp"
                       ,0x401,local_aa7);
  pTVar2 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_9d8,local_a50);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(__return_storage_ptr__,pTVar2);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_9d8.SharedReferenceCount);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>(&local_9b8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a28);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_9c8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_9a0);
  STextBlock::FArguments::~FArguments(&local_578);
  SCheckBox::FArguments::~FArguments(&local_958);
  return __return_storage_ptr__;
}

// HandleBreadcrumbTrailAddButtonClicked @ 142fdb8e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWidgetGallery::HandleBreadcrumbTrailAddButtonClicked
          (SWidgetGallery *this,FReply *__return_storage_ptr__)

{
  FText *pFVar1;
  int local_58 [2];
  SBreadcrumbTrail<int> *local_50;
  FText local_48;
  TAttribute<FText> local_38;
  
  local_50 = TSharedPtr<SBreadcrumbTrail<int>,1>::operator->(&this->BreadcrumbTrail);
  local_58[0] = 0;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"WidgetGallery",L"PlaceholderBreadcrumb02",L"SomeNewCrumb");
  TAttribute<FText>::TAttribute<FText>(&local_38,pFVar1);
  SBreadcrumbTrail<int>::PushCrumb(local_50,&local_38,local_58);
  TAttribute<FText>::~TAttribute<FText>(&local_38);
  FText::~FText(&local_48);
  FReply::Handled(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HandleCheckBoxCheckedStateChanged @ 142fdbad0

void __thiscall
SWidgetGallery::HandleCheckBoxCheckedStateChanged
          (SWidgetGallery *this,ECheckBoxState param_1,bool *param_2)

{
  *param_2 = param_1 == Checked;
  return;
}

// HandleCheckBoxIsChecked @ 142fdbb10

ECheckBoxState __thiscall
SWidgetGallery::HandleCheckBoxIsChecked(SWidgetGallery *this,bool *param_1)

{
  return *param_1 != false;
}

// HandleComboBoxGenerateWidget @ 142fdc2f0

TSharedRef<SWidget,1> * __thiscall
SWidgetGallery::HandleComboBoxGenerateWidget
          (SWidgetGallery *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedPtr<FString,1> *param_1)

{
  FString *pFVar1;
  FText *pFVar2;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<STextBlock,1> *pTVar3;
  T0RequiredArgs local_5f8 [8];
  TAttribute<FText> *local_5f0;
  TAttribute<FText> *local_5e8;
  FArguments *local_5e0;
  FArguments *local_5d8;
  TSharedRef<STextBlock,1> local_5d0;
  FText local_5c0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5b0;
  TAttribute<FText> local_598;
  FArguments local_568;
  
  local_5e0 = STextBlock::FArguments::FArguments(&local_568);
  local_5f0 = &local_598;
  pFVar1 = TSharedPtr<FString,1>::operator*<FString>(param_1);
  pFVar2 = FText::FromString(&local_5c0,pFVar1);
  local_5e8 = TAttribute<FText>::TAttribute<FText>(local_5f0,pFVar2);
  local_5d8 = STextBlock::FArguments::Text(local_5e0,local_5e8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_5f8);
  this_00 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_5b0,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SWidgetGallery.cpp"
                       ,0x462,local_5f8);
  pTVar3 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_5d0,local_5d8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(__return_storage_ptr__,pTVar3);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_5d0);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_5b0);
  FText::~FText(&local_5c0);
  STextBlock::FArguments::~FArguments(&local_568);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&param_1->SharedReferenceCount);
  return __return_storage_ptr__;
}

// HandleProgressBarPercent @ 142fdd0e0

TOptional<float> __thiscall SWidgetGallery::HandleProgressBarPercent(SWidgetGallery *this)

{
  TOptional<float> in_RDX;
  float fVar1;
  float local_34;
  float local_30;
  TOptional<float> *local_28;
  TOptional<float> *local_20;
  TOptional<float> local_18;
  TOptional<float> local_10 [2];
  
  fVar1 = FCurveSequence::GetLerp(&this->ProgressCurve);
  local_30 = __real_3f000000;
  if (__real_3f000000 <= fVar1) {
    local_34 = (fVar1 - __real_3f000000) / __real_3ec00000;
    local_28 = TOptional<float>::TOptional<float>(local_10,&local_34);
  }
  else {
    local_28 = TOptional<float>::TOptional<float>(&local_18);
  }
  local_20 = local_28;
  TOptional<float>::TOptional<float>((TOptional<float> *)in_RDX,local_28);
  return in_RDX;
}

// HandleRadioButtonCheckStateChanged @ 142fdd1e0

void __thiscall
SWidgetGallery::HandleRadioButtonCheckStateChanged
          (SWidgetGallery *this,ECheckBoxState param_1,ERadioChoice param_2)

{
  if (param_1 == Checked) {
    this->RadioChoice = param_2;
  }
  return;
}

// HandleRadioButtonIsChecked @ 142fdd210

ECheckBoxState __thiscall
SWidgetGallery::HandleRadioButtonIsChecked(SWidgetGallery *this,ERadioChoice param_1)

{
  return this->RadioChoice == param_1;
}

// HandleSearchBoxSearch @ 142fdd450

void __thiscall SWidgetGallery::HandleSearchBoxSearch(SWidgetGallery *this,SearchDirection param_1)

{
  return;
}

// HandleSecondComboBoxSelectionChanged @ 142fdd460

void __thiscall
SWidgetGallery::HandleSecondComboBoxSelectionChanged
          (SWidgetGallery *this,TSharedPtr<FString,1> *param_1,Type param_2)

{
  TSharedPtr<FString,1>::operator=(&this->ComboString,param_1);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&param_1->SharedReferenceCount);
  return;
}

// HandleSecondComboBoxText @ 142fdd4b0

FText * __thiscall
SWidgetGallery::HandleSecondComboBoxText(SWidgetGallery *this,FText *__return_storage_ptr__)

{
  FString *pFVar1;
  FText *pFVar2;
  bool bVar3;
  FText *local_40;
  FText local_30;
  FText local_20 [2];
  
  bVar3 = (this->ComboString).Object == (FString *)0x0;
  if (bVar3) {
    pFVar2 = FText::GetEmpty();
    local_40 = FText::FText(&local_30,pFVar2);
  }
  else {
    pFVar1 = TSharedPtr<FString,1>::operator*<FString>(&this->ComboString);
    local_40 = FText::FromString(local_20,pFVar1);
  }
  FText::FText(__return_storage_ptr__,local_40);
  if (bVar3) {
    FText::~FText(&local_30);
  }
  else {
    FText::~FText(local_20);
  }
  return __return_storage_ptr__;
}

// HandleSelectorComboBoxSelectionChanged @ 142fdd5a0

/* WARNING: Removing unreachable block (ram,0x000142fdd5e6) */

void __thiscall
SWidgetGallery::HandleSelectorComboBoxSelectionChanged
          (SWidgetGallery *this,TSharedPtr<FString,1> *param_1,Type param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->SelectorComboBoxOptions).ArrayNum < 1) {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = TSharedPtr<FString,1>::UEOpEquals<FString>
                    ((TSharedPtr<FString,1> *)(this->SelectorComboBoxOptions).AllocatorInstance.Data
                     ,param_1);
  if (bVar2) {
    SwitchSecondComboToOptionSetA(this);
  }
  else {
    SwitchSecondComboToOptionSetB(this);
  }
  TSharedPtr<FString,1>::operator=(&this->SelectorComboBoxSelectedItem,param_1);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&param_1->SharedReferenceCount);
  return;
}

// HandleSelectorComboBoxText @ 142fdd730

FText * __thiscall
SWidgetGallery::HandleSelectorComboBoxText(SWidgetGallery *this,FText *__return_storage_ptr__)

{
  FString *pFVar1;
  FText *pFVar2;
  bool bVar3;
  FText *local_40;
  FText local_30;
  FText local_20 [2];
  
  bVar3 = (this->SelectorComboBoxSelectedItem).Object == (FString *)0x0;
  if (bVar3) {
    pFVar2 = FText::GetEmpty();
    local_40 = FText::FText(&local_30,pFVar2);
  }
  else {
    pFVar1 = TSharedPtr<FString,1>::operator*<FString>(&this->SelectorComboBoxSelectedItem);
    local_40 = FText::FromString(local_20,pFVar1);
  }
  FText::FText(__return_storage_ptr__,local_40);
  if (bVar3) {
    FText::~FText(&local_30);
  }
  else {
    FText::~FText(local_20);
  }
  return __return_storage_ptr__;
}

// HandleTabmanagerActiveTabChanged @ 142fdd820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWidgetGallery::HandleTabmanagerActiveTabChanged
          (SWidgetGallery *this,TSharedPtr<SDockTab,1> *param_1,TSharedPtr<SDockTab,1> *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  TSharedRef<SWidget,1> *pTVar4;
  SDockTab *this_00;
  FStaticCastTag local_7e;
  EVisibility *local_78;
  TSharedRef<SWidgetGallery,1> local_40;
  TSharedRef<SWidget,1> local_30;
  TSharedRef<SWidget,1> local_20 [2];
  
  bVar2 = false;
  bVar1 = false;
  if (param_2->Object != (SDockTab *)0x0) {
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_30);
    TSharedRef<SWidgetGallery,1>::TSharedRef<SWidgetGallery,1><SWidget>(&local_40,pTVar4,local_7e);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_30);
    this_00 = TSharedPtr<SDockTab,1>::operator->(param_2);
    bVar2 = true;
    bVar1 = true;
    pTVar4 = SDockTab::GetContent(this_00,local_20);
    bVar3 = TSharedRef<SWidget,1>::UEOpEquals<SWidgetGallery>(pTVar4,&local_40);
    if (bVar3) {
      local_78 = &EVisibility::Visible;
      goto LAB_142fdd92d;
    }
  }
  local_78 = &EVisibility::Collapsed;
LAB_142fdd92d:
  (this->IsActiveTabVisibility).Value.Value = (local_78->Value).Value;
  if (bVar2) {
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(local_20);
  }
  if (bVar1) {
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_40.SharedReferenceCount);
  }
  TSharedPtr<SDockTab,1>::~TSharedPtr<SDockTab,1>(param_1);
  TSharedPtr<SDockTab,1>::~TSharedPtr<SDockTab,1>(param_2);
  return;
}

// HandleTextComboBoxGetTextLabelForItem @ 142fdd9c0

FString * __thiscall
SWidgetGallery::HandleTextComboBoxGetTextLabelForItem
          (SWidgetGallery *this,FString *__return_storage_ptr__,TSharedPtr<FString,1> *param_1)

{
  undefined1 local_58 [4];
  int local_54;
  FString *local_50;
  FScriptContainerElement *local_48;
  FScriptContainerElement *local_40;
  FScriptContainerElement *local_38;
  FScriptContainerElement *local_30;
  FScriptContainerElement *local_28;
  wchar_t *local_20;
  FScriptContainerElement *local_18;
  wchar_t *local_10;
  
  local_50 = TSharedPtr<FString,1>::operator*<FString>(param_1);
  local_54 = (local_50->Data).ArrayNum;
  if (local_54 == 0) {
    local_48 = (FScriptContainerElement *)
               `FString::operator*'::__l2::<lambda_1>::operator()(local_58);
  }
  else {
    local_48 = (local_50->Data).AllocatorInstance.Data;
    local_40 = local_48;
    local_38 = local_48;
    local_30 = local_48;
  }
  local_28 = local_48;
  local_18 = local_48;
  local_20 = L"> %s";
  local_10 = L"> %s";
  ::FString::Printf<wchar_t_const_*>
            (__return_storage_ptr__,
             (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x150a12880,(wchar_t *)local_48);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&param_1->SharedReferenceCount);
  return __return_storage_ptr__;
}

// HandleTextComboBoxSelectionChanged @ 142fddaa0

void __thiscall
SWidgetGallery::HandleTextComboBoxSelectionChanged
          (SWidgetGallery *this,TSharedPtr<FString,1> *param_1,Type param_2)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&param_1->SharedReferenceCount);
  return;
}

// HandleTextComboPopupClicked @ 142fddad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWidgetGallery::HandleTextComboPopupClicked(SWidgetGallery *this,FReply *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FReply *pFVar3;
  FDeprecateSlateVector2D *pFVar4;
  TSlateDecl<STextComboPopup,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<STextComboPopup,1> *pTVar5;
  longlong lVar6;
  code **ppcVar7;
  undefined1 *puVar8;
  pmf_2933341d *ppVar9;
  undefined1 auStackY_6f8 [32];
  TArray<FString,TSizedDefaultAllocator<32>_> local_698;
  T0RequiredArgs local_688;
  FStaticCastTag local_687;
  int local_684;
  int local_680;
  undefined1 local_67c [4];
  int local_678;
  int local_674;
  FScriptContainerElement *local_670;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_668;
  FScriptContainerElement *local_660;
  FSlateApplication *local_658;
  int local_650;
  FPopupTransitionEffect local_64c;
  FScriptContainerElement *local_648;
  FScriptContainerElement *local_640;
  FScriptContainerElement *local_638;
  FScriptContainerElement *local_630;
  FScriptContainerElement *local_628;
  FScriptContainerElement *local_620;
  undefined4 local_618;
  undefined4 local_614;
  FScriptContainerElement *local_610;
  FScriptContainerElement *local_608;
  FScriptContainerElement *local_600;
  longlong local_5f8;
  longlong local_5f0;
  FScriptContainerElement *local_5e8;
  FScriptContainerElement *local_5e0;
  FScriptContainerElement *local_5d8;
  FString *local_5d0;
  FScriptContainerElement *local_5c8;
  FScriptContainerElement *local_5c0;
  FScriptContainerElement *local_5b8;
  FScriptContainerElement *local_5b0;
  FScriptContainerElement *local_5a8;
  FScriptContainerElement *local_5a0;
  undefined4 local_598;
  undefined4 local_594;
  FScriptContainerElement *local_590;
  FScriptContainerElement *local_588;
  FScriptContainerElement *local_580;
  longlong local_578;
  longlong local_570;
  FScriptContainerElement *local_568;
  FScriptContainerElement *local_560;
  FScriptContainerElement *local_558;
  FString *local_550;
  undefined1 *local_548;
  code *local_540;
  FScriptContainerElement *local_538;
  FScriptContainerElement *local_530;
  FScriptContainerElement *local_528;
  FScriptContainerElement *local_520;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_518;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_510;
  FArguments *local_508;
  FArguments *local_500;
  FArguments *local_4f8;
  longlong *local_4f0;
  TSharedRef<SWidget,1> *local_4e8;
  TOptional<EPopupMethod> *local_4e0;
  FDeprecateVector2DParameter local_4d8;
  FPopupTransitionEffect *local_4d0;
  FDeprecateVector2DParameter local_4c8;
  FWidgetPath *local_4c0;
  FSlateApplication *local_4b8;
  int local_4b0;
  FString local_4a8;
  FString local_498;
  code *local_488;
  undefined4 local_480;
  TSharedRef<SWidget,1> local_478;
  TSharedRef<SWidgetGallery,1> local_468;
  TSharedRef<SWidget,1> local_458;
  undefined1 local_448 [8];
  undefined1 local_440 [24];
  pmf_2933341d local_428;
  TSharedRef<SWidget,1> local_418;
  TSharedPtr<IMenu,1> local_408;
  TSharedRef<STextComboPopup,1> local_3f8;
  TSlateDecl<STextComboPopup,RequiredArgs::T0RequiredArgs> local_3e8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_3d0;
  FArguments local_3c0;
  FWidgetPath local_188;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_6f8;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_698.AllocatorInstance);
  local_698.ArrayNum = 0;
  local_698.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_698.AllocatorInstance);
  ::FString::FString(&local_4a8,L"Option 1");
  local_660 = (FScriptContainerElement *)&local_4a8;
  local_648 = local_698.AllocatorInstance.Data;
  local_640 = local_698.AllocatorInstance.Data;
  local_638 = local_698.AllocatorInstance.Data;
  if (local_698.AllocatorInstance.Data <= local_660) {
    local_630 = local_698.AllocatorInstance.Data;
    local_628 = local_698.AllocatorInstance.Data;
    local_620 = local_698.AllocatorInstance.Data;
    if (local_660 < local_698.AllocatorInstance.Data + (longlong)local_698.ArrayMax * 0x10) {
      local_618 = 0;
      local_614 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_5f8 = (longlong)local_698.ArrayNum;
      local_5f0 = (longlong)local_698.ArrayMax;
      local_610 = local_698.AllocatorInstance.Data;
      local_608 = local_698.AllocatorInstance.Data;
      local_600 = local_698.AllocatorInstance.Data;
      local_5e8 = local_698.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FReply *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  if (local_698.ArrayNum == local_698.ArrayMax) {
    local_698.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_698.AllocatorInstance,&local_698.ArrayMax);
  }
  local_684 = local_698.ArrayNum;
  local_5e0 = local_698.AllocatorInstance.Data;
  local_5d8 = local_698.AllocatorInstance.Data + (longlong)local_698.ArrayNum * 0x10;
  local_698.ArrayNum = local_698.ArrayNum + 1;
  local_5d0 = ::operator_new(0x10,local_5d8);
  ::FString::FString(local_5d0,&local_4a8);
  local_4b0 = local_684;
  ::FString::~FString(&local_4a8);
  ::FString::FString(&local_498,L"Option 2");
  local_670 = (FScriptContainerElement *)&local_498;
  local_5c8 = local_698.AllocatorInstance.Data;
  local_5c0 = local_698.AllocatorInstance.Data;
  local_5b8 = local_698.AllocatorInstance.Data;
  if (local_698.AllocatorInstance.Data <= local_670) {
    local_5b0 = local_698.AllocatorInstance.Data;
    local_5a8 = local_698.AllocatorInstance.Data;
    local_5a0 = local_698.AllocatorInstance.Data;
    if (local_670 < local_698.AllocatorInstance.Data + (longlong)local_698.ArrayMax * 0x10) {
      local_598 = 0;
      local_594 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_578 = (longlong)local_698.ArrayNum;
      local_570 = (longlong)local_698.ArrayMax;
      local_590 = local_698.AllocatorInstance.Data;
      local_588 = local_698.AllocatorInstance.Data;
      local_580 = local_698.AllocatorInstance.Data;
      local_568 = local_698.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FReply *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  if (local_698.ArrayNum == local_698.ArrayMax) {
    local_698.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_698.AllocatorInstance,&local_698.ArrayMax);
  }
  local_680 = local_698.ArrayNum;
  local_560 = local_698.AllocatorInstance.Data;
  local_558 = local_698.AllocatorInstance.Data + (longlong)local_698.ArrayNum * 0x10;
  local_698.ArrayNum = local_698.ArrayNum + 1;
  local_550 = ::operator_new(0x10,local_558);
  ::FString::FString(local_550,&local_498);
  local_650 = local_680;
  ::FString::~FString(&local_498);
  local_4b8 = FSlateApplication::Get();
  local_548 = local_67c;
  local_4e0 = TOptional<enum_EPopupMethod>::TOptional<enum_EPopupMethod>(local_548);
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_4d8,&UE::Math::TVector2<float>::ZeroVector);
  local_4d0 = FPopupTransitionEffect::FPopupTransitionEffect(&local_64c,TypeInPopup);
  local_658 = FSlateApplication::Get();
  local_540 = *(code **)(*(longlong *)local_658 + 0x68);
  pFVar4 = (FDeprecateSlateVector2D *)(*local_540)(local_658,local_448);
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter(&local_4c8,pFVar4);
  local_508 = STextComboPopup::FArguments::FArguments(&local_3c0);
  local_668 = &local_3d0;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_668->AllocatorInstance);
  local_678 = local_698.ArrayNum;
  local_674 = local_698.ArrayNum;
  local_538 = local_698.AllocatorInstance.Data;
  local_530 = local_698.AllocatorInstance.Data;
  local_528 = local_698.AllocatorInstance.Data;
  local_520 = local_698.AllocatorInstance.Data;
  TArray<FString,TSizedDefaultAllocator<32>_>::CopyToEmpty<FString,int>
            (local_668,(FString *)local_698.AllocatorInstance.Data,local_698.ArrayNum,0);
  local_518 = local_668;
  local_510 = local_668;
  local_500 = STextComboPopup::FArguments::TextOptions(local_508,local_668);
  local_488 = HandleTextComboPopupTextChosen;
  local_480 = 0;
  ppcVar7 = &local_488;
  puVar8 = local_440;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *(undefined1 *)ppcVar7;
    ppcVar7 = (code **)((longlong)ppcVar7 + 1);
    puVar8 = puVar8 + 1;
  }
  puVar8 = local_440;
  ppVar9 = &local_428;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)ppVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    ppVar9 = (pmf_2933341d *)&ppVar9->field_0x1;
  }
  local_4f8 = STextComboPopup::FArguments::OnTextChosen<SWidgetGallery>(local_500,this,&local_428);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_688);
  this_00 = MakeTDecl<STextComboPopup,RequiredArgs::T0RequiredArgs>
                      (&local_3e8,"STextComboPopup",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SWidgetGallery.cpp"
                       ,0x4c6,&local_688);
  pTVar5 = TSlateDecl<STextComboPopup,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_3f8,local_4f8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextComboPopup>(&local_458,pTVar5);
  local_4c0 = FWidgetPath::FWidgetPath(&local_188);
  local_4f0 = &this->_padding_;
  local_4e8 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)local_4f0,&local_418);
  TSharedRef<SWidgetGallery,1>::TSharedRef<SWidgetGallery,1><SWidget>
            (&local_468,local_4e8,local_687);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_418);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SWidgetGallery>(&local_478,&local_468);
  FSlateApplication::PushMenu
            (local_4b8,&local_408,&local_478,local_4c0,&local_458,&local_4c8,local_4d0,true,
             &local_4d8,SUB82(local_4e0,0),true,-1);
  TSharedPtr<IMenu,1>::~TSharedPtr<IMenu,1>(&local_408);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_478);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_468.SharedReferenceCount);
  FWidgetPath::~FWidgetPath(&local_188);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_458);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3f8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3e8._Widget.SharedReferenceCount);
  STextComboPopup::FArguments::~FArguments(&local_3c0);
  FReply::Handled(__return_storage_ptr__);
  TArray<FString,TSizedDefaultAllocator<32>_>::~TArray<FString,TSizedDefaultAllocator<32>_>
            (&local_698);
  return __return_storage_ptr__;
}

// HandleTextComboPopupTextChosen @ 142fde3c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWidgetGallery::HandleTextComboPopupTextChosen(SWidgetGallery *this,FString *param_1)

{
  FSlateApplication *this_00;
  
  this_00 = FSlateApplication::Get();
  FSlateApplication::DismissAllMenus(this_00);
  return;
}

// IsCreateNewWindowChecked @ 142fe2b80

ECheckBoxState __thiscall SWidgetGallery::IsCreateNewWindowChecked(SWidgetGallery *this)

{
  return this->PopupMethod == CreateNewWindow;
}

// MakeAnchorMenuContent @ 142fe5a30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

TSharedRef<SWidget,1> * __thiscall
SWidgetGallery::MakeAnchorMenuContent
          (SWidgetGallery *this,TSharedRef<SWidget,1> *__return_storage_ptr__,FText *param_1)

{
  FName *pFVar1;
  FSlotArguments *pFVar2;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<STextBlock,1> *pTVar3;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SHorizontalBox,1> *pTVar4;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *pTVar5;
  TSharedRef<SBorder,1> *pTVar6;
  T0RequiredArgs local_1328;
  T0RequiredArgs local_1327;
  T0RequiredArgs local_1326;
  T0RequiredArgs local_1325 [5];
  ISlateStyle *local_1320;
  ISlateStyle *local_1318;
  FLinearColor_u_0 local_1310;
  FLinearColor_u_0 local_1300;
  code *local_12f0;
  FSlateBrush *local_12e8;
  TAttribute<FSlateBrush_const_*> *local_12e0;
  TAttribute<FSlateBrush_const_*> *local_12d8;
  FArguments *local_12d0;
  FLinearColor_u_0 *local_12c8;
  TAttribute<FSlateColor> *local_12c0;
  TAttribute<FSlateColor> *local_12b8;
  FArguments *local_12b0;
  FArguments *local_12a8;
  FName *local_12a0;
  FName local_1298;
  code *local_1290;
  FSlateBrush *local_1288;
  TAttribute<FSlateBrush_const_*> *local_1280;
  TAttribute<FSlateBrush_const_*> *local_1278;
  FArguments *local_1270;
  FLinearColor_u_0 *local_1268;
  TAttribute<FSlateColor> *local_1260;
  TAttribute<FSlateColor> *local_1258;
  FArguments *local_1250;
  undefined1 *local_1248;
  TAttribute<FText> *local_1240;
  TAttribute<FText> *local_1238;
  FArguments *local_1230;
  FArguments *local_1228;
  FSlotArguments *local_1220;
  FSlotArguments *local_1218;
  FArguments *local_1210;
  FArguments *local_1208;
  FArguments *local_1200;
  FArguments *local_11f8;
  FArguments *local_11f0;
  FArguments *local_11e8;
  FName *local_11e0;
  FName local_11d8;
  TSharedRef<SWidget,1> local_11d0;
  TSharedRef<SWidget,1> local_11c0;
  TSharedRef<SWidget,1> local_11b0;
  FName local_11a0;
  FName local_1198;
  TSharedRef<SBorder,1> local_1190;
  TSharedRef<SBorder,1> local_1180;
  TSharedRef<SHorizontalBox,1> local_1170;
  TSharedRef<STextBlock,1> local_1160;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1150;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1138;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1120;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1108;
  TAttribute<FSlateBrush_const_*> local_10f0;
  TAttribute<FSlateBrush_const_*> local_10c8;
  TAttribute<FSlateColor> local_10a0;
  TAttribute<FSlateColor> local_1070;
  TAttribute<FText> local_1040;
  FSlotArguments local_1010;
  FArguments local_f28;
  FArguments local_d20;
  FArguments local_940;
  FArguments local_560;
  undefined8 uStack_8;
  
  uStack_8 = 0x142fe5a49;
  local_12d0 = SBorder::FArguments::FArguments(&local_940);
  local_12e0 = &local_10f0;
  local_1320 = FCoreStyle::Get();
  local_12f0 = *(code **)((longlong)*local_1320 + 0x50);
  local_11e0 = &local_11a0;
  pFVar1 = ::FName::FName(local_11e0,"ToolPanel.GroupBorder");
  local_11d8 = *pFVar1;
  local_12e8 = (FSlateBrush *)(*local_12f0)(local_1320,local_11d8,0,0);
  local_12d8 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_12e0,&local_12e8);
  local_12b0 = SBorder::FArguments::BorderImage(local_12d0,local_12d8);
  local_12c0 = &local_10a0;
  local_1310._s_0.R = 0.0;
  local_1310._s_0.G = 0.0;
  local_1310._s_0.B = 0.0;
  local_1310._s_0.A = __real_3f800000;
  local_12c8 = &local_1310;
  local_12b8 = TAttribute<FSlateColor>::TAttribute<FSlateColor><FLinearColor>
                         (local_12c0,(FLinearColor *)&local_12c8->_s_0);
  local_12a8 = SBorder::FArguments::BorderBackgroundColor(local_12b0,local_12b8);
  local_11f0 = SBorder::FArguments::Padding(local_12a8,__real_40000000);
  local_1270 = SBorder::FArguments::FArguments(&local_d20);
  local_1280 = &local_10c8;
  local_1318 = FCoreStyle::Get();
  local_1290 = *(code **)((longlong)*local_1318 + 0x50);
  local_12a0 = &local_1198;
  pFVar1 = ::FName::FName(local_12a0,"ToolPanel.GroupBorder");
  local_1298 = *pFVar1;
  local_1288 = (FSlateBrush *)(*local_1290)(local_1318,local_1298,0,0);
  local_1278 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_1280,&local_1288);
  local_1250 = SBorder::FArguments::BorderImage(local_1270,local_1278);
  local_1260 = &local_1070;
  local_1300._s_0.R = __real_3f000000;
  local_1300._s_0.G = __real_3f000000;
  local_1300._s_0.B = __real_3f000000;
  local_1300._s_0.A = __real_3f800000;
  local_1268 = &local_1300;
  local_1258 = TAttribute<FSlateColor>::TAttribute<FSlateColor><FLinearColor>
                         (local_1260,(FLinearColor *)&local_1268->_s_0);
  local_1200 = SBorder::FArguments::BorderBackgroundColor(local_1250,local_1258);
  local_1210 = SHorizontalBox::FArguments::FArguments(&local_f28);
  pFVar2 = SHorizontalBox::Slot(&local_1010);
  local_1248 = &pFVar2->field_0x18;
  local_1220 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_1248,__real_42480000);
  local_1230 = STextBlock::FArguments::FArguments(&local_560);
  local_1240 = &local_1040;
  local_1238 = TAttribute<FText>::TAttribute<FText><FText>(local_1240,param_1);
  local_1228 = STextBlock::FArguments::Text(local_1230,local_1238);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1328);
  this_00 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_1108,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SWidgetGallery.cpp"
                       ,0x4ea,&local_1328);
  pTVar3 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_1160,local_1228);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_11b0,pTVar3);
  local_1218 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1220,&local_11b0);
  local_1208 = SHorizontalBox::FArguments::operator+(local_1210,local_1218);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1327);
  this_01 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_1120,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SWidgetGallery.cpp"
                       ,0x4e6,&local_1327);
  pTVar4 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_1170,local_1208);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_11c0,pTVar4);
  local_11f8 = SBorder::FArguments::operator[](local_1200,&local_11c0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1326);
  pTVar5 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                     (&local_1138,"SBorder",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SWidgetGallery.cpp"
                      ,0x4e2,&local_1326);
  pTVar6 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_1180,local_11f8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_11d0,pTVar6);
  local_11e8 = SBorder::FArguments::operator[](local_11f0,&local_11d0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_1325);
  pTVar5 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                     (&local_1150,"SBorder",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SWidgetGallery.cpp"
                      ,0x4dd,local_1325);
  pTVar6 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_1190,local_11e8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(__return_storage_ptr__,pTVar6);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_1190);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_1150);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_11d0);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_1180);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_1138);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_11c0);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_1170);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_1120);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_11b0);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_1160);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_1108);
  STextBlock::FArguments::~FArguments(&local_560);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1010);
  SHorizontalBox::FArguments::~FArguments(&local_f28);
  SBorder::FArguments::~FArguments(&local_d20);
  SBorder::FArguments::~FArguments(&local_940);
  FText::~FText(param_1);
  return __return_storage_ptr__;
}

// OnClickStacklessAnchor @ 142fee4c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWidgetGallery::OnClickStacklessAnchor
          (SWidgetGallery *this,FReply *__return_storage_ptr__,TSharedPtr<SMenuAnchor,1> *param_1)

{
  code *pcVar1;
  SMenuAnchor *pSVar2;
  SMenuAnchor *this_00;
  bool local_28;
  
  pSVar2 = TSharedPtr<SMenuAnchor,1>::operator->(param_1);
  pcVar1 = *(code **)(pSVar2->_padding_ + 0x250);
  this_00 = TSharedPtr<SMenuAnchor,1>::operator->(param_1);
  local_28 = SMenuAnchor::IsOpen(this_00);
  local_28 = !local_28;
  (*pcVar1)(pSVar2,local_28,1,0);
  FReply::Handled(__return_storage_ptr__);
  TSharedPtr<SMenuAnchor,1>::~TSharedPtr<SMenuAnchor,1>(param_1);
  return __return_storage_ptr__;
}

// OnQueryPopupMethod @ 142ff7e30

FPopupMethodReply * __thiscall
SWidgetGallery::OnQueryPopupMethod(SWidgetGallery *this,FPopupMethodReply *__return_storage_ptr__)

{
  FPopupMethodReply::UseMethod(__return_storage_ptr__,this->PopupMethod);
  return __return_storage_ptr__;
}

// SwitchSecondComboToOptionSetA @ 14300e9a0

/* WARNING: Removing unreachable block (ram,0x00014300ed50) */

void __thiscall SWidgetGallery::SwitchSecondComboToOptionSetA(SWidgetGallery *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  FString *__return_storage_ptr__;
  TRawPtrProxy<FString> TVar5;
  TSharedPtr<FString,1> *pTVar6;
  SComboBox<TSharedPtr<FString,1>_> *pSVar7;
  int local_130;
  TSharedPtr<FString,1> local_30;
  undefined1 local_20 [32];
  
  TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_>::Empty(&this->SecondComboBoxOptions,0);
  for (local_130 = 0; local_130 < 500; local_130 = local_130 + 1) {
    pTVar4 = &this->SecondComboBoxOptions;
    __return_storage_ptr__ = ::operator_new(0x10);
    if (__return_storage_ptr__ != (FString *)0x0) {
      ::FString::Printf<int>
                (__return_storage_ptr__,(TCheckedFormatStringPrivate<wchar_t,int>)0x150a12690,
                 local_130);
    }
    TVar5 = MakeShareable<FString>((FString *)local_20);
    TSharedPtr<FString,1>::TSharedPtr<FString,1><FString>
              (&local_30,(TRawPtrProxy<FString> *)TVar5.Object);
    if (((TSharedPtr<FString,1> *)(pTVar4->AllocatorInstance).Data <= &local_30) &&
       (&local_30 <
        (TSharedPtr<FString,1> *)
        ((pTVar4->AllocatorInstance).Data + (longlong)(this->SecondComboBoxOptions).ArrayMax * 0x10)
       )) {
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((this->SecondComboBoxOptions).ArrayNum == (this->SecondComboBoxOptions).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar4->AllocatorInstance,&(this->SecondComboBoxOptions).ArrayMax);
      (this->SecondComboBoxOptions).ArrayNum = iVar3;
    }
    iVar3 = (this->SecondComboBoxOptions).ArrayNum;
    (this->SecondComboBoxOptions).ArrayNum = (this->SecondComboBoxOptions).ArrayNum + 1;
    pTVar6 = ::operator_new(0x10,(pTVar4->AllocatorInstance).Data + (longlong)iVar3 * 0x10);
    TSharedPtr<FString,1>::TSharedPtr<FString,1>(pTVar6,&local_30);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_30.SharedReferenceCount);
  }
  pSVar7 = TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1>::operator->(&this->SecondComboBox);
  SComboBox<TSharedPtr<FString,1>_>::RefreshOptions(pSVar7);
  pSVar7 = TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1>::operator->(&this->SecondComboBox);
  if ((this->SecondComboBoxOptions).ArrayNum < 1) {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar6 = TSharedPtr<FString,1>::TSharedPtr<FString,1>
                     ((TSharedPtr<FString,1> *)(local_20 + 8),
                      (TSharedPtr<FString,1> *)(this->SecondComboBoxOptions).AllocatorInstance.Data)
  ;
  SComboBox<TSharedPtr<FString,1>_>::SetSelectedItem(pSVar7,pTVar6);
  return;
}

// SwitchSecondComboToOptionSetB @ 14300ee70

/* WARNING: Removing unreachable block (ram,0x0001430119b8) */

void __thiscall SWidgetGallery::SwitchSecondComboToOptionSetB(SWidgetGallery *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  FString *pFVar5;
  TRawPtrProxy<FString> TVar6;
  TSharedPtr<FString,1> *pTVar7;
  SComboBox<TSharedPtr<FString,1>_> *pSVar8;
  TSharedPtr<FString,1> local_168;
  TSharedPtr<FString,1> local_158;
  TSharedPtr<FString,1> local_148;
  TSharedPtr<FString,1> local_138;
  TSharedPtr<FString,1> local_128;
  TSharedPtr<FString,1> local_118;
  TSharedPtr<FString,1> local_108;
  TSharedPtr<FString,1> local_f8;
  TSharedPtr<FString,1> local_e8;
  TSharedPtr<FString,1> local_d8;
  TSharedPtr<FString,1> local_c8;
  TSharedPtr<FString,1> local_b8;
  TSharedPtr<FString,1> local_a8;
  TSharedPtr<FString,1> local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  TSharedPtr<FString,1> local_18;
  
  TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_>::Empty(&this->SecondComboBoxOptions,0);
  pTVar4 = &this->SecondComboBoxOptions;
  pFVar5 = ::operator_new(0x10);
  if (pFVar5 != (FString *)0x0) {
    ::FString::FString(pFVar5,L"Item B One");
  }
  TVar6 = MakeShareable<FString>((FString *)local_88);
  TSharedPtr<FString,1>::TSharedPtr<FString,1><FString>
            (&local_168,(TRawPtrProxy<FString> *)TVar6.Object);
  if (((TSharedPtr<FString,1> *)(pTVar4->AllocatorInstance).Data <= &local_168) &&
     (&local_168 <
      (TSharedPtr<FString,1> *)
      ((pTVar4->AllocatorInstance).Data + (longlong)(this->SecondComboBoxOptions).ArrayMax * 0x10)))
  {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->SecondComboBoxOptions).ArrayNum == (this->SecondComboBoxOptions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar4->AllocatorInstance,&(this->SecondComboBoxOptions).ArrayMax);
    (this->SecondComboBoxOptions).ArrayNum = iVar3;
  }
  iVar3 = (this->SecondComboBoxOptions).ArrayNum;
  (this->SecondComboBoxOptions).ArrayNum = (this->SecondComboBoxOptions).ArrayNum + 1;
  pTVar7 = ::operator_new(0x10,(pTVar4->AllocatorInstance).Data + (longlong)iVar3 * 0x10);
  TSharedPtr<FString,1>::TSharedPtr<FString,1>(pTVar7,&local_168);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_168.SharedReferenceCount);
  pTVar4 = &this->SecondComboBoxOptions;
  pFVar5 = ::operator_new(0x10);
  if (pFVar5 != (FString *)0x0) {
    ::FString::FString(pFVar5,L"Item B Two");
  }
  TVar6 = MakeShareable<FString>((FString *)(local_88 + 8));
  TSharedPtr<FString,1>::TSharedPtr<FString,1><FString>
            (&local_158,(TRawPtrProxy<FString> *)TVar6.Object);
  if (((TSharedPtr<FString,1> *)(pTVar4->AllocatorInstance).Data <= &local_158) &&
     (&local_158 <
      (TSharedPtr<FString,1> *)
      ((pTVar4->AllocatorInstance).Data + (longlong)(this->SecondComboBoxOptions).ArrayMax * 0x10)))
  {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->SecondComboBoxOptions).ArrayNum == (this->SecondComboBoxOptions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar4->AllocatorInstance,&(this->SecondComboBoxOptions).ArrayMax);
    (this->SecondComboBoxOptions).ArrayNum = iVar3;
  }
  iVar3 = (this->SecondComboBoxOptions).ArrayNum;
  (this->SecondComboBoxOptions).ArrayNum = (this->SecondComboBoxOptions).ArrayNum + 1;
  pTVar7 = ::operator_new(0x10,(pTVar4->AllocatorInstance).Data + (longlong)iVar3 * 0x10);
  TSharedPtr<FString,1>::TSharedPtr<FString,1>(pTVar7,&local_158);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_158.SharedReferenceCount);
  pTVar4 = &this->SecondComboBoxOptions;
  pFVar5 = ::operator_new(0x10);
  if (pFVar5 != (FString *)0x0) {
    ::FString::FString(pFVar5,L"Item B Three");
  }
  TVar6 = MakeShareable<FString>((FString *)local_78);
  TSharedPtr<FString,1>::TSharedPtr<FString,1><FString>
            (&local_148,(TRawPtrProxy<FString> *)TVar6.Object);
  if (((TSharedPtr<FString,1> *)(pTVar4->AllocatorInstance).Data <= &local_148) &&
     (&local_148 <
      (TSharedPtr<FString,1> *)
      ((pTVar4->AllocatorInstance).Data + (longlong)(this->SecondComboBoxOptions).ArrayMax * 0x10)))
  {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->SecondComboBoxOptions).ArrayNum == (this->SecondComboBoxOptions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar4->AllocatorInstance,&(this->SecondComboBoxOptions).ArrayMax);
    (this->SecondComboBoxOptions).ArrayNum = iVar3;
  }
  iVar3 = (this->SecondComboBoxOptions).ArrayNum;
  (this->SecondComboBoxOptions).ArrayNum = (this->SecondComboBoxOptions).ArrayNum + 1;
  pTVar7 = ::operator_new(0x10,(pTVar4->AllocatorInstance).Data + (longlong)iVar3 * 0x10);
  TSharedPtr<FString,1>::TSharedPtr<FString,1>(pTVar7,&local_148);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_148.SharedReferenceCount);
  pTVar4 = &this->SecondComboBoxOptions;
  pFVar5 = ::operator_new(0x10);
  if (pFVar5 != (FString *)0x0) {
    ::FString::FString(pFVar5,L"Item B Four");
  }
  TVar6 = MakeShareable<FString>((FString *)(local_78 + 8));
  TSharedPtr<FString,1>::TSharedPtr<FString,1><FString>
            (&local_138,(TRawPtrProxy<FString> *)TVar6.Object);
  if (((TSharedPtr<FString,1> *)(pTVar4->AllocatorInstance).Data <= &local_138) &&
     (&local_138 <
      (TSharedPtr<FString,1> *)
      ((pTVar4->AllocatorInstance).Data + (longlong)(this->SecondComboBoxOptions).ArrayMax * 0x10)))
  {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->SecondComboBoxOptions).ArrayNum == (this->SecondComboBoxOptions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar4->AllocatorInstance,&(this->SecondComboBoxOptions).ArrayMax);
    (this->SecondComboBoxOptions).ArrayNum = iVar3;
  }
  iVar3 = (this->SecondComboBoxOptions).ArrayNum;
  (this->SecondComboBoxOptions).ArrayNum = (this->SecondComboBoxOptions).ArrayNum + 1;
  pTVar7 = ::operator_new(0x10,(pTVar4->AllocatorInstance).Data + (longlong)iVar3 * 0x10);
  TSharedPtr<FString,1>::TSharedPtr<FString,1>(pTVar7,&local_138);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_138.SharedReferenceCount);
  pTVar4 = &this->SecondComboBoxOptions;
  pFVar5 = ::operator_new(0x10);
  if (pFVar5 != (FString *)0x0) {
    ::FString::FString(pFVar5,L"Item B Five");
  }
  TVar6 = MakeShareable<FString>((FString *)local_68);
  TSharedPtr<FString,1>::TSharedPtr<FString,1><FString>
            (&local_128,(TRawPtrProxy<FString> *)TVar6.Object);
  if (((TSharedPtr<FString,1> *)(pTVar4->AllocatorInstance).Data <= &local_128) &&
     (&local_128 <
      (TSharedPtr<FString,1> *)
      ((pTVar4->AllocatorInstance).Data + (longlong)(this->SecondComboBoxOptions).ArrayMax * 0x10)))
  {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->SecondComboBoxOptions).ArrayNum == (this->SecondComboBoxOptions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar4->AllocatorInstance,&(this->SecondComboBoxOptions).ArrayMax);
    (this->SecondComboBoxOptions).ArrayNum = iVar3;
  }
  iVar3 = (this->SecondComboBoxOptions).ArrayNum;
  (this->SecondComboBoxOptions).ArrayNum = (this->SecondComboBoxOptions).ArrayNum + 1;
  pTVar7 = ::operator_new(0x10,(pTVar4->AllocatorInstance).Data + (longlong)iVar3 * 0x10);
  TSharedPtr<FString,1>::TSharedPtr<FString,1>(pTVar7,&local_128);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_128.SharedReferenceCount);
  pTVar4 = &this->SecondComboBoxOptions;
  pFVar5 = ::operator_new(0x10);
  if (pFVar5 != (FString *)0x0) {
    ::FString::FString(pFVar5,L"Item B Six");
  }
  TVar6 = MakeShareable<FString>((FString *)(local_68 + 8));
  TSharedPtr<FString,1>::TSharedPtr<FString,1><FString>
            (&local_118,(TRawPtrProxy<FString> *)TVar6.Object);
  if (((TSharedPtr<FString,1> *)(pTVar4->AllocatorInstance).Data <= &local_118) &&
     (&local_118 <
      (TSharedPtr<FString,1> *)
      ((pTVar4->AllocatorInstance).Data + (longlong)(this->SecondComboBoxOptions).ArrayMax * 0x10)))
  {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->SecondComboBoxOptions).ArrayNum == (this->SecondComboBoxOptions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar4->AllocatorInstance,&(this->SecondComboBoxOptions).ArrayMax);
    (this->SecondComboBoxOptions).ArrayNum = iVar3;
  }
  iVar3 = (this->SecondComboBoxOptions).ArrayNum;
  (this->SecondComboBoxOptions).ArrayNum = (this->SecondComboBoxOptions).ArrayNum + 1;
  pTVar7 = ::operator_new(0x10,(pTVar4->AllocatorInstance).Data + (longlong)iVar3 * 0x10);
  TSharedPtr<FString,1>::TSharedPtr<FString,1>(pTVar7,&local_118);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_118.SharedReferenceCount);
  pTVar4 = &this->SecondComboBoxOptions;
  pFVar5 = ::operator_new(0x10);
  if (pFVar5 != (FString *)0x0) {
    ::FString::FString(pFVar5,L"Item B Seven");
  }
  TVar6 = MakeShareable<FString>((FString *)local_58);
  TSharedPtr<FString,1>::TSharedPtr<FString,1><FString>
            (&local_108,(TRawPtrProxy<FString> *)TVar6.Object);
  if (((TSharedPtr<FString,1> *)(pTVar4->AllocatorInstance).Data <= &local_108) &&
     (&local_108 <
      (TSharedPtr<FString,1> *)
      ((pTVar4->AllocatorInstance).Data + (longlong)(this->SecondComboBoxOptions).ArrayMax * 0x10)))
  {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->SecondComboBoxOptions).ArrayNum == (this->SecondComboBoxOptions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar4->AllocatorInstance,&(this->SecondComboBoxOptions).ArrayMax);
    (this->SecondComboBoxOptions).ArrayNum = iVar3;
  }
  iVar3 = (this->SecondComboBoxOptions).ArrayNum;
  (this->SecondComboBoxOptions).ArrayNum = (this->SecondComboBoxOptions).ArrayNum + 1;
  pTVar7 = ::operator_new(0x10,(pTVar4->AllocatorInstance).Data + (longlong)iVar3 * 0x10);
  TSharedPtr<FString,1>::TSharedPtr<FString,1>(pTVar7,&local_108);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_108.SharedReferenceCount);
  pTVar4 = &this->SecondComboBoxOptions;
  pFVar5 = ::operator_new(0x10);
  if (pFVar5 != (FString *)0x0) {
    ::FString::FString(pFVar5,L"Item B Eight");
  }
  TVar6 = MakeShareable<FString>((FString *)(local_58 + 8));
  TSharedPtr<FString,1>::TSharedPtr<FString,1><FString>
            (&local_f8,(TRawPtrProxy<FString> *)TVar6.Object);
  if (((TSharedPtr<FString,1> *)(pTVar4->AllocatorInstance).Data <= &local_f8) &&
     (&local_f8 <
      (TSharedPtr<FString,1> *)
      ((pTVar4->AllocatorInstance).Data + (longlong)(this->SecondComboBoxOptions).ArrayMax * 0x10)))
  {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->SecondComboBoxOptions).ArrayNum == (this->SecondComboBoxOptions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar4->AllocatorInstance,&(this->SecondComboBoxOptions).ArrayMax);
    (this->SecondComboBoxOptions).ArrayNum = iVar3;
  }
  iVar3 = (this->SecondComboBoxOptions).ArrayNum;
  (this->SecondComboBoxOptions).ArrayNum = (this->SecondComboBoxOptions).ArrayNum + 1;
  pTVar7 = ::operator_new(0x10,(pTVar4->AllocatorInstance).Data + (longlong)iVar3 * 0x10);
  TSharedPtr<FString,1>::TSharedPtr<FString,1>(pTVar7,&local_f8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_f8.SharedReferenceCount);
  pTVar4 = &this->SecondComboBoxOptions;
  pFVar5 = ::operator_new(0x10);
  if (pFVar5 != (FString *)0x0) {
    ::FString::FString(pFVar5,L"Item B Nine");
  }
  TVar6 = MakeShareable<FString>((FString *)local_48);
  TSharedPtr<FString,1>::TSharedPtr<FString,1><FString>
            (&local_e8,(TRawPtrProxy<FString> *)TVar6.Object);
  if (((TSharedPtr<FString,1> *)(pTVar4->AllocatorInstance).Data <= &local_e8) &&
     (&local_e8 <
      (TSharedPtr<FString,1> *)
      ((pTVar4->AllocatorInstance).Data + (longlong)(this->SecondComboBoxOptions).ArrayMax * 0x10)))
  {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->SecondComboBoxOptions).ArrayNum == (this->SecondComboBoxOptions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar4->AllocatorInstance,&(this->SecondComboBoxOptions).ArrayMax);
    (this->SecondComboBoxOptions).ArrayNum = iVar3;
  }
  iVar3 = (this->SecondComboBoxOptions).ArrayNum;
  (this->SecondComboBoxOptions).ArrayNum = (this->SecondComboBoxOptions).ArrayNum + 1;
  pTVar7 = ::operator_new(0x10,(pTVar4->AllocatorInstance).Data + (longlong)iVar3 * 0x10);
  TSharedPtr<FString,1>::TSharedPtr<FString,1>(pTVar7,&local_e8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_e8.SharedReferenceCount);
  pTVar4 = &this->SecondComboBoxOptions;
  pFVar5 = ::operator_new(0x10);
  if (pFVar5 != (FString *)0x0) {
    ::FString::FString(pFVar5,L"Item B Ten");
  }
  TVar6 = MakeShareable<FString>((FString *)(local_48 + 8));
  TSharedPtr<FString,1>::TSharedPtr<FString,1><FString>
            (&local_d8,(TRawPtrProxy<FString> *)TVar6.Object);
  if (((TSharedPtr<FString,1> *)(pTVar4->AllocatorInstance).Data <= &local_d8) &&
     (&local_d8 <
      (TSharedPtr<FString,1> *)
      ((pTVar4->AllocatorInstance).Data + (longlong)(this->SecondComboBoxOptions).ArrayMax * 0x10)))
  {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->SecondComboBoxOptions).ArrayNum == (this->SecondComboBoxOptions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar4->AllocatorInstance,&(this->SecondComboBoxOptions).ArrayMax);
    (this->SecondComboBoxOptions).ArrayNum = iVar3;
  }
  iVar3 = (this->SecondComboBoxOptions).ArrayNum;
  (this->SecondComboBoxOptions).ArrayNum = (this->SecondComboBoxOptions).ArrayNum + 1;
  pTVar7 = ::operator_new(0x10,(pTVar4->AllocatorInstance).Data + (longlong)iVar3 * 0x10);
  TSharedPtr<FString,1>::TSharedPtr<FString,1>(pTVar7,&local_d8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_d8.SharedReferenceCount);
  pTVar4 = &this->SecondComboBoxOptions;
  pFVar5 = ::operator_new(0x10);
  if (pFVar5 != (FString *)0x0) {
    ::FString::FString(pFVar5,L"Item B Eleven");
  }
  TVar6 = MakeShareable<FString>((FString *)local_38);
  TSharedPtr<FString,1>::TSharedPtr<FString,1><FString>
            (&local_c8,(TRawPtrProxy<FString> *)TVar6.Object);
  if (((TSharedPtr<FString,1> *)(pTVar4->AllocatorInstance).Data <= &local_c8) &&
     (&local_c8 <
      (TSharedPtr<FString,1> *)
      ((pTVar4->AllocatorInstance).Data + (longlong)(this->SecondComboBoxOptions).ArrayMax * 0x10)))
  {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->SecondComboBoxOptions).ArrayNum == (this->SecondComboBoxOptions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar4->AllocatorInstance,&(this->SecondComboBoxOptions).ArrayMax);
    (this->SecondComboBoxOptions).ArrayNum = iVar3;
  }
  iVar3 = (this->SecondComboBoxOptions).ArrayNum;
  (this->SecondComboBoxOptions).ArrayNum = (this->SecondComboBoxOptions).ArrayNum + 1;
  pTVar7 = ::operator_new(0x10,(pTVar4->AllocatorInstance).Data + (longlong)iVar3 * 0x10);
  TSharedPtr<FString,1>::TSharedPtr<FString,1>(pTVar7,&local_c8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_c8.SharedReferenceCount);
  pTVar4 = &this->SecondComboBoxOptions;
  pFVar5 = ::operator_new(0x10);
  if (pFVar5 != (FString *)0x0) {
    ::FString::FString(pFVar5,L"Item B Twelve");
  }
  TVar6 = MakeShareable<FString>((FString *)(local_38 + 8));
  TSharedPtr<FString,1>::TSharedPtr<FString,1><FString>
            (&local_b8,(TRawPtrProxy<FString> *)TVar6.Object);
  if (((TSharedPtr<FString,1> *)(pTVar4->AllocatorInstance).Data <= &local_b8) &&
     (&local_b8 <
      (TSharedPtr<FString,1> *)
      ((pTVar4->AllocatorInstance).Data + (longlong)(this->SecondComboBoxOptions).ArrayMax * 0x10)))
  {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->SecondComboBoxOptions).ArrayNum == (this->SecondComboBoxOptions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar4->AllocatorInstance,&(this->SecondComboBoxOptions).ArrayMax);
    (this->SecondComboBoxOptions).ArrayNum = iVar3;
  }
  iVar3 = (this->SecondComboBoxOptions).ArrayNum;
  (this->SecondComboBoxOptions).ArrayNum = (this->SecondComboBoxOptions).ArrayNum + 1;
  pTVar7 = ::operator_new(0x10,(pTVar4->AllocatorInstance).Data + (longlong)iVar3 * 0x10);
  TSharedPtr<FString,1>::TSharedPtr<FString,1>(pTVar7,&local_b8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_b8.SharedReferenceCount);
  pTVar4 = &this->SecondComboBoxOptions;
  pFVar5 = ::operator_new(0x10);
  if (pFVar5 != (FString *)0x0) {
    ::FString::FString(pFVar5,L"Item B Thirteen");
  }
  TVar6 = MakeShareable<FString>((FString *)local_28);
  TSharedPtr<FString,1>::TSharedPtr<FString,1><FString>
            (&local_a8,(TRawPtrProxy<FString> *)TVar6.Object);
  if (((TSharedPtr<FString,1> *)(pTVar4->AllocatorInstance).Data <= &local_a8) &&
     (&local_a8 <
      (TSharedPtr<FString,1> *)
      ((pTVar4->AllocatorInstance).Data + (longlong)(this->SecondComboBoxOptions).ArrayMax * 0x10)))
  {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->SecondComboBoxOptions).ArrayNum == (this->SecondComboBoxOptions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar4->AllocatorInstance,&(this->SecondComboBoxOptions).ArrayMax);
    (this->SecondComboBoxOptions).ArrayNum = iVar3;
  }
  iVar3 = (this->SecondComboBoxOptions).ArrayNum;
  (this->SecondComboBoxOptions).ArrayNum = (this->SecondComboBoxOptions).ArrayNum + 1;
  pTVar7 = ::operator_new(0x10,(pTVar4->AllocatorInstance).Data + (longlong)iVar3 * 0x10);
  TSharedPtr<FString,1>::TSharedPtr<FString,1>(pTVar7,&local_a8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_a8.SharedReferenceCount);
  pTVar4 = &this->SecondComboBoxOptions;
  pFVar5 = ::operator_new(0x10);
  if (pFVar5 != (FString *)0x0) {
    ::FString::FString(pFVar5,L"Item B Fourteen");
  }
  TVar6 = MakeShareable<FString>((FString *)(local_28 + 8));
  TSharedPtr<FString,1>::TSharedPtr<FString,1><FString>
            (&local_98,(TRawPtrProxy<FString> *)TVar6.Object);
  if (((TSharedPtr<FString,1> *)(pTVar4->AllocatorInstance).Data <= &local_98) &&
     (&local_98 <
      (TSharedPtr<FString,1> *)
      ((pTVar4->AllocatorInstance).Data + (longlong)(this->SecondComboBoxOptions).ArrayMax * 0x10)))
  {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->SecondComboBoxOptions).ArrayNum == (this->SecondComboBoxOptions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar4->AllocatorInstance,&(this->SecondComboBoxOptions).ArrayMax);
    (this->SecondComboBoxOptions).ArrayNum = iVar3;
  }
  iVar3 = (this->SecondComboBoxOptions).ArrayNum;
  (this->SecondComboBoxOptions).ArrayNum = (this->SecondComboBoxOptions).ArrayNum + 1;
  pTVar7 = ::operator_new(0x10,(pTVar4->AllocatorInstance).Data + (longlong)iVar3 * 0x10);
  TSharedPtr<FString,1>::TSharedPtr<FString,1>(pTVar7,&local_98);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_98.SharedReferenceCount);
  pSVar8 = TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1>::operator->(&this->SecondComboBox);
  SComboBox<TSharedPtr<FString,1>_>::RefreshOptions(pSVar8);
  pSVar8 = TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1>::operator->(&this->SecondComboBox);
  if ((this->SecondComboBoxOptions).ArrayNum < 1) {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar7 = TSharedPtr<FString,1>::TSharedPtr<FString,1>
                     (&local_18,
                      (TSharedPtr<FString,1> *)(this->SecondComboBoxOptions).AllocatorInstance.Data)
  ;
  SComboBox<TSharedPtr<FString,1>_>::SetSelectedItem(pSVar8,pTVar7);
  return;
}

