// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 1

// StaticStruct @ 149483ed0

UScriptStruct * __cdecl FWN_BindlessISM_MaterialInterface::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_BindlessISM_MaterialInterface.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_Common();
    Z_Registration_Info_UScriptStruct_FWN_BindlessISM_MaterialInterface.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_BindlessISM_MaterialInterface,
                         (UObject *)pUVar1,L"WN_BindlessISM_MaterialInterface");
  }
  return Z_Registration_Info_UScriptStruct_FWN_BindlessISM_MaterialInterface.OuterSingleton;
}

