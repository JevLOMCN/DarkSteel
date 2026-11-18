// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 2

// StaticStruct @ 142c2d1a0

UScriptStruct * __cdecl FToolMenuEntryScriptData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FToolMenuEntryScriptData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ToolMenus();
    Z_Registration_Info_UScriptStruct_FToolMenuEntryScriptData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FToolMenuEntryScriptData,(UObject *)pUVar1,
                         L"ToolMenuEntryScriptData");
  }
  return Z_Registration_Info_UScriptStruct_FToolMenuEntryScriptData.OuterSingleton;
}

// FToolMenuEntryScriptData @ 142c39ce0

FToolMenuEntryScriptData * __thiscall
FToolMenuEntryScriptData::FToolMenuEntryScriptData(FToolMenuEntryScriptData *this)

{
  (this->Menu).ComparisonIndex = 0;
  (this->Menu).Number = 0;
  (this->Section).ComparisonIndex = 0;
  (this->Section).Number = 0;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  FText::FText(&this->Label);
  FText::FText(&this->ToolTip);
  (this->Icon).StyleSetName.ComparisonIndex = 0;
  (this->Icon).StyleSetName.Number = 0;
  (this->Icon).StyleName.ComparisonIndex = 0;
  (this->Icon).StyleName.Number = 0;
  (this->Icon).SmallStyleName.ComparisonIndex = 0;
  (this->Icon).SmallStyleName.Number = 0;
  (this->OwnerName).ComparisonIndex = 0;
  (this->OwnerName).Number = 0;
  (this->InsertPosition).Name.ComparisonIndex = 0;
  (this->InsertPosition).Name.Number = 0;
  (this->InsertPosition).Position = Default;
  (this->InsertPosition).Fallback = Log|Insert;
  (this->Advanced).TutorialHighlight.ComparisonIndex = 0;
  (this->Advanced).TutorialHighlight.Number = 0;
  (this->Advanced).EntryType = MenuEntry;
  (this->Advanced).UserInterfaceActionType = Button;
  (this->Advanced).StyleNameOverride.ComparisonIndex = 0;
  (this->Advanced).StyleNameOverride.Number = 0;
  (this->Advanced).bIsSubMenu = false;
  (this->Advanced).bOpenSubMenuOnClick = false;
  (this->Advanced).bShouldCloseWindowAfterMenuSelection = true;
  (this->Advanced).bSimpleComboBox = false;
  return this;
}

