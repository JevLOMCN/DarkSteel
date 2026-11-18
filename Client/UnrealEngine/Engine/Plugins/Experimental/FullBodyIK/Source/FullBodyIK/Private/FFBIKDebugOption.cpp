// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FullBodyIK
// Functions: 1

// StaticStruct @ 14df6bc90

UScriptStruct * __cdecl FFBIKDebugOption::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFBIKDebugOption.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FullBodyIK();
    Z_Registration_Info_UScriptStruct_FFBIKDebugOption.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFBIKDebugOption,(UObject *)pUVar1,
                         L"FBIKDebugOption");
  }
  return Z_Registration_Info_UScriptStruct_FFBIKDebugOption.OuterSingleton;
}

