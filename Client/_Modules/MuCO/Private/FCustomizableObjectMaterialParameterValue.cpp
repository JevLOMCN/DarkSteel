// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 1

// StaticStruct @ 14ab9b020

UScriptStruct * __cdecl FCustomizableObjectMaterialParameterValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCustomizableObjectMaterialParameterValue.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FCustomizableObjectMaterialParameterValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectMaterialParameterValue,
                         (UObject *)pUVar1,L"CustomizableObjectMaterialParameterValue");
  }
  return Z_Registration_Info_UScriptStruct_FCustomizableObjectMaterialParameterValue.OuterSingleton;
}

