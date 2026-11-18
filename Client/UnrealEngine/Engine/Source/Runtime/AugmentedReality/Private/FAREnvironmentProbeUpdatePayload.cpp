// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 1

// StaticStruct @ 14cf2ee90

UScriptStruct * __cdecl FAREnvironmentProbeUpdatePayload::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAREnvironmentProbeUpdatePayload.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UScriptStruct_FAREnvironmentProbeUpdatePayload.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload,
                         (UObject *)pUVar1,L"AREnvironmentProbeUpdatePayload");
  }
  return Z_Registration_Info_UScriptStruct_FAREnvironmentProbeUpdatePayload.OuterSingleton;
}

