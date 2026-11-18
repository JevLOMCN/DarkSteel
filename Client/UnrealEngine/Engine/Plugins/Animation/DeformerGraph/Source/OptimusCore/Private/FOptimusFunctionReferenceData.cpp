// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// StaticStruct @ 14e119a10

UScriptStruct * __cdecl FOptimusFunctionReferenceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusFunctionReferenceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusFunctionReferenceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusFunctionReferenceData,(UObject *)pUVar1,
                         L"OptimusFunctionReferenceData");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusFunctionReferenceData.OuterSingleton;
}

