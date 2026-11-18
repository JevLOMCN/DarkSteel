// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Env
// Functions: 1

// StaticStruct @ 14a04c890

UScriptStruct * __cdecl FWN_UDS_Post_Process_Stage::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_UDS_Post_Process_Stage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_Env();
    Z_Registration_Info_UScriptStruct_FWN_UDS_Post_Process_Stage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_UDS_Post_Process_Stage,(UObject *)pUVar1,
                         L"WN_UDS_Post_Process_Stage");
  }
  return Z_Registration_Info_UScriptStruct_FWN_UDS_Post_Process_Stage.OuterSingleton;
}

