// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// StaticStruct @ 14e1166c0

UScriptStruct * __cdecl FOptimusFunctionReferenceNodeSet::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusFunctionReferenceNodeSet.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusFunctionReferenceNodeSet.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusFunctionReferenceNodeSet,
                         (UObject *)pUVar1,L"OptimusFunctionReferenceNodeSet");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusFunctionReferenceNodeSet.OuterSingleton;
}

