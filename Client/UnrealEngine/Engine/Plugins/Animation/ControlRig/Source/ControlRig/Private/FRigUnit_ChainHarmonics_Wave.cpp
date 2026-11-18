// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// StaticStruct @ 14a47b4e0

UScriptStruct * __cdecl FRigUnit_ChainHarmonics_Wave::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ChainHarmonics_Wave.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ChainHarmonics_Wave.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave,(UObject *)pUVar1,
                         L"RigUnit_ChainHarmonics_Wave");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ChainHarmonics_Wave.OuterSingleton;
}

