// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 2

// StaticStruct @ 14e2eae00

UScriptStruct * __cdecl FDatasmithReimportOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithReimportOptions.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UScriptStruct_FDatasmithReimportOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithReimportOptions,(UObject *)pUVar1,
                         L"DatasmithReimportOptions");
  }
  return Z_Registration_Info_UScriptStruct_FDatasmithReimportOptions.OuterSingleton;
}

// FDatasmithReimportOptions @ 14e2f4230

FDatasmithReimportOptions * __thiscall
FDatasmithReimportOptions::FDatasmithReimportOptions(FDatasmithReimportOptions *this)

{
  this->bUpdateActors = true;
  this->bRespawnDeletedActors = false;
  return this;
}

