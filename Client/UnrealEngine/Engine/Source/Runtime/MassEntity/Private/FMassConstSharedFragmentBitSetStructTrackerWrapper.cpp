// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// <lambda_invoker_cdecl> @ 1471b9500

UScriptStruct * __cdecl
FMassConstSharedFragmentBitSetStructTrackerWrapper::<lambda_43>::<lambda_invoker_cdecl>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassConstSharedFragment,(UObject *)pUVar1,
                         L"MassConstSharedFragment");
  }
  return Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton;
}

