// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 148a27640

UScriptStruct * __cdecl FExternalDataLayerUID::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FExternalDataLayerUID.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FExternalDataLayerUID.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FExternalDataLayerUID,(UObject *)pUVar1,
                         L"ExternalDataLayerUID");
  }
  return Z_Registration_Info_UScriptStruct_FExternalDataLayerUID.OuterSingleton;
}

// IsValid @ 148a5ed30

bool __thiscall FExternalDataLayerUID::IsValid(FExternalDataLayerUID *this)

{
  return this->Value != 0;
}

// ToString @ 148a6a5b0

FString * __thiscall
FExternalDataLayerUID::ToString(FExternalDataLayerUID *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%X");
  return __return_storage_ptr__;
}

