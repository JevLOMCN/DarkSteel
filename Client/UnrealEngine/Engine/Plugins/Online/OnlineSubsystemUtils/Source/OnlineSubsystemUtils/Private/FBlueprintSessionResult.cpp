// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// StaticStruct @ 14ec471d0

UScriptStruct * __cdecl FBlueprintSessionResult::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBlueprintSessionResult.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
    Z_Registration_Info_UScriptStruct_FBlueprintSessionResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintSessionResult,(UObject *)pUVar1,
                         L"BlueprintSessionResult");
  }
  return Z_Registration_Info_UScriptStruct_FBlueprintSessionResult.OuterSingleton;
}

