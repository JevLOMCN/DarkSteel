// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// StaticStruct @ 14e109a20

UScriptStruct * __cdecl FOptimusAnimAttributeArray::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusAnimAttributeArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusAnimAttributeArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusAnimAttributeArray,(UObject *)pUVar1,
                         L"OptimusAnimAttributeArray");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusAnimAttributeArray.OuterSingleton;
}

