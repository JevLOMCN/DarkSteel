// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// StaticStruct @ 142123190

UScriptStruct * __cdecl FPerPlatformBool::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPerPlatformBool.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FPerPlatformBool.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPerPlatformBool,(UObject *)pUVar1,
                         L"PerPlatformBool");
  }
  return Z_Registration_Info_UScriptStruct_FPerPlatformBool.OuterSingleton;
}

