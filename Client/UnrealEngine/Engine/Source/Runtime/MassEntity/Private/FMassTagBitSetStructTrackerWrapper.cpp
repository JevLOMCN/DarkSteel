// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// <lambda_invoker_cdecl> @ 1471b9440

UScriptStruct * __cdecl
FMassTagBitSetStructTrackerWrapper::<lambda_40>::<lambda_invoker_cdecl>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassTag,(UObject *)pUVar1,L"MassTag");
  }
  return Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton;
}

