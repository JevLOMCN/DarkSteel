// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 1

// StaticStruct @ 148b858c0

UScriptStruct * __cdecl FOrientedBoxFloat::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOrientedBoxFloat.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FOrientedBoxFloat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOrientedBoxFloat,(UObject *)pUVar1,
                         L"OrientedBoxFloat");
  }
  return Z_Registration_Info_UScriptStruct_FOrientedBoxFloat.OuterSingleton;
}

