// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 1

// StaticStruct @ 14ac8d170

UScriptStruct * __cdecl FRange_Float::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRange_Float.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UIParticle();
    Z_Registration_Info_UScriptStruct_FRange_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRange_Float,(UObject *)pUVar1,L"Range_Float");
  }
  return Z_Registration_Info_UScriptStruct_FRange_Float.OuterSingleton;
}

