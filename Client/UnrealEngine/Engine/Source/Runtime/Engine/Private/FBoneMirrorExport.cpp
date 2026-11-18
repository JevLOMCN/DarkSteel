// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 1485858b0

UScriptStruct * __cdecl FBoneMirrorExport::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoneMirrorExport.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBoneMirrorExport.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoneMirrorExport,(UObject *)pUVar1,
                         L"BoneMirrorExport");
  }
  return Z_Registration_Info_UScriptStruct_FBoneMirrorExport.OuterSingleton;
}

