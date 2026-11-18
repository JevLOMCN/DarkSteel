// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 1472edb80

UScriptStruct * __cdecl FStaticComponentMaskValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStaticComponentMaskValue.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FStaticComponentMaskValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStaticComponentMaskValue,(UObject *)pUVar1,
                         L"StaticComponentMaskValue");
  }
  return Z_Registration_Info_UScriptStruct_FStaticComponentMaskValue.OuterSingleton;
}

