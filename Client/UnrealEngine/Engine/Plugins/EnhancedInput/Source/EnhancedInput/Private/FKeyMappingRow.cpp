// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 2

// StaticStruct @ 14a6bbf80

UScriptStruct * __cdecl FKeyMappingRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FKeyMappingRow.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EnhancedInput();
    Z_Registration_Info_UScriptStruct_FKeyMappingRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FKeyMappingRow,(UObject *)pUVar1,L"KeyMappingRow"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FKeyMappingRow.OuterSingleton;
}

// HasAnyMappings @ 14a6e3ab0

bool __thiscall FKeyMappingRow::HasAnyMappings(FKeyMappingRow *this)

{
  return *(int *)&(this->Mappings).Elements.field_0x8 !=
         *(int *)&(this->Mappings).Elements.field_0x34;
}

