// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 1

// StaticStruct @ 14ab9b0a0

UScriptStruct * __cdecl FCustomizableObjectTransformParameterValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCustomizableObjectTransformParameterValue.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FCustomizableObjectTransformParameterValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectTransformParameterValue,
                         (UObject *)pUVar1,L"CustomizableObjectTransformParameterValue");
  }
  return Z_Registration_Info_UScriptStruct_FCustomizableObjectTransformParameterValue.OuterSingleton
  ;
}

