// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 2

// StaticStruct @ 14e4cb2c0

UScriptStruct * __cdecl FInterchangeGroup::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeGroup.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangeEngine();
    Z_Registration_Info_UScriptStruct_FInterchangeGroup.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeGroup,(UObject *)pUVar1,
                         L"InterchangeGroup");
  }
  return Z_Registration_Info_UScriptStruct_FInterchangeGroup.OuterSingleton;
}

// FInterchangeGroup @ 14e4d7620

FInterchangeGroup * __thiscall FInterchangeGroup::FInterchangeGroup(FInterchangeGroup *this)

{
  (this->DisplayName).ComparisonIndex = 0;
  (this->DisplayName).Number = 0;
  FGuid::NewGuid(&this->UniqueID);
  (this->DefaultPipelineStack).ComparisonIndex = 0;
  (this->DefaultPipelineStack).Number = 0;
  *(undefined8 *)&this->DefaultPipelineStackOverride = 0;
  *(undefined8 *)&(this->DefaultPipelineStackOverride).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultPipelineStackOverride).field_0x20 = 0;
  *(undefined4 *)&(this->DefaultPipelineStackOverride).field_0x28 = 0;
  *(undefined4 *)&(this->DefaultPipelineStackOverride).field_0x2c = 0x80;
  *(undefined4 *)&(this->DefaultPipelineStackOverride).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DefaultPipelineStackOverride).field_0x34 = 0;
  *(undefined8 *)&(this->DefaultPipelineStackOverride).field_0x40 = 0;
  *(undefined4 *)&(this->DefaultPipelineStackOverride).field_0x48 = 0;
  this->bShowImportDialog = true;
  this->bShowReimportDialog = false;
  *(undefined8 *)&this->ShowImportDialogOverride = 0;
  *(undefined8 *)&(this->ShowImportDialogOverride).field_0x8 = 0;
  *(undefined8 *)&(this->ShowImportDialogOverride).field_0x20 = 0;
  *(undefined4 *)&(this->ShowImportDialogOverride).field_0x28 = 0;
  *(undefined4 *)&(this->ShowImportDialogOverride).field_0x2c = 0x80;
  *(undefined4 *)&(this->ShowImportDialogOverride).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ShowImportDialogOverride).field_0x34 = 0;
  *(undefined8 *)&(this->ShowImportDialogOverride).field_0x40 = 0;
  *(undefined4 *)&(this->ShowImportDialogOverride).field_0x48 = 0;
  return this;
}

