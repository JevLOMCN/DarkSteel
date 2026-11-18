// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1481b9490

UScriptStruct * __cdecl FPerQualityLevelFloat::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPerQualityLevelFloat.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FPerQualityLevelFloat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPerQualityLevelFloat,(UObject *)pUVar1,
                         L"PerQualityLevelFloat");
  }
  return Z_Registration_Info_UScriptStruct_FPerQualityLevelFloat.OuterSingleton;
}

// ToString @ 148222280

FString * __thiscall
FPerQualityLevelFloat::ToString(FPerQualityLevelFloat *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%f");
  return __return_storage_ptr__;
}

