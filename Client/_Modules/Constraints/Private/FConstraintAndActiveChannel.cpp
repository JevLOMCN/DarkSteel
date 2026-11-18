// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 1

// StaticStruct @ 14648e1b0

UScriptStruct * __cdecl FConstraintAndActiveChannel::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConstraintAndActiveChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Constraints();
    Z_Registration_Info_UScriptStruct_FConstraintAndActiveChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConstraintAndActiveChannel,(UObject *)pUVar1,
                         L"ConstraintAndActiveChannel");
  }
  return Z_Registration_Info_UScriptStruct_FConstraintAndActiveChannel.OuterSingleton;
}

