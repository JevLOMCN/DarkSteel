// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetaHumanSDKRuntime
// Functions: 1

// StaticStruct @ 14df89ef0

UScriptStruct * __cdecl FMetaHumanCustomizableBodyPart::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetaHumanCustomizableBodyPart.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetaHumanSDKRuntime();
    Z_Registration_Info_UScriptStruct_FMetaHumanCustomizableBodyPart.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart,(UObject *)pUVar1,
                         L"MetaHumanCustomizableBodyPart");
  }
  return Z_Registration_Info_UScriptStruct_FMetaHumanCustomizableBodyPart.OuterSingleton;
}

