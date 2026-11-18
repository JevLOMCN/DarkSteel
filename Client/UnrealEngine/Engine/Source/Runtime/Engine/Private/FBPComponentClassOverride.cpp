// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 147672fc0

UScriptStruct * __cdecl FBPComponentClassOverride::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBPComponentClassOverride.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBPComponentClassOverride.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBPComponentClassOverride,(UObject *)pUVar1,
                         L"BPComponentClassOverride");
  }
  return Z_Registration_Info_UScriptStruct_FBPComponentClassOverride.OuterSingleton;
}

