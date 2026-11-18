// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 3

// StaticStruct @ 1431ff3d0

UScriptStruct * __cdecl FCustomFieldData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCustomFieldData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_BuildPatchServices();
    Z_Registration_Info_UScriptStruct_FCustomFieldData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCustomFieldData,(UObject *)pUVar1,
                         L"CustomFieldData");
  }
  return Z_Registration_Info_UScriptStruct_FCustomFieldData.OuterSingleton;
}

// FCustomFieldData @ 1432214b0

FCustomFieldData * __thiscall
FCustomFieldData::FCustomFieldData(FCustomFieldData *this,FString *param_1,FString *param_2)

{
  ::FString::FString(&this->Key,param_1);
  ::FString::FString(&this->Value,param_2);
  return this;
}

// FCustomFieldData @ 1432214f0

FCustomFieldData * __thiscall FCustomFieldData::FCustomFieldData(FCustomFieldData *this)

{
  ::FString::FString(&this->Key,L"");
  ::FString::FString(&this->Value,L"");
  return this;
}

