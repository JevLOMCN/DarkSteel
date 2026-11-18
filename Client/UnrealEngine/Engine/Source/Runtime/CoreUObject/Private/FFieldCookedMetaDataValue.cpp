// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// StaticStruct @ 141fb3d60

UScriptStruct * __cdecl FFieldCookedMetaDataValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFieldCookedMetaDataValue.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FFieldCookedMetaDataValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFieldCookedMetaDataValue,(UObject *)pUVar1,
                         L"FieldCookedMetaDataValue");
  }
  return Z_Registration_Info_UScriptStruct_FFieldCookedMetaDataValue.OuterSingleton;
}

