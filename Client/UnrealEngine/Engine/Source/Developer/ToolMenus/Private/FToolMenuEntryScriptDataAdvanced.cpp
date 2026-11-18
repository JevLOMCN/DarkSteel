// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 2

// StaticStruct @ 142c2d160

UScriptStruct * __cdecl FToolMenuEntryScriptDataAdvanced::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FToolMenuEntryScriptDataAdvanced.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ToolMenus();
    Z_Registration_Info_UScriptStruct_FToolMenuEntryScriptDataAdvanced.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced,
                         (UObject *)pUVar1,L"ToolMenuEntryScriptDataAdvanced");
  }
  return Z_Registration_Info_UScriptStruct_FToolMenuEntryScriptDataAdvanced.OuterSingleton;
}

// FToolMenuEntryScriptDataAdvanced @ 142c39d50

FToolMenuEntryScriptDataAdvanced * __thiscall
FToolMenuEntryScriptDataAdvanced::FToolMenuEntryScriptDataAdvanced
          (FToolMenuEntryScriptDataAdvanced *this)

{
  this->EntryType = MenuEntry;
  this->UserInterfaceActionType = Button;
  (this->TutorialHighlight).ComparisonIndex = 0;
  (this->TutorialHighlight).Number = 0;
  (this->StyleNameOverride).ComparisonIndex = 0;
  (this->StyleNameOverride).Number = 0;
  this->bIsSubMenu = false;
  this->bOpenSubMenuOnClick = false;
  this->bShouldCloseWindowAfterMenuSelection = true;
  this->bSimpleComboBox = false;
  return this;
}

