// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleImageUtils
// Functions: 1

// StaticStruct @ 14cfa6e00

UScriptStruct * __cdecl FAppleImageUtilsImageConversionResult::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAppleImageUtilsImageConversionResult.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AppleImageUtils();
    Z_Registration_Info_UScriptStruct_FAppleImageUtilsImageConversionResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult,
                         (UObject *)pUVar1,L"AppleImageUtilsImageConversionResult");
  }
  return Z_Registration_Info_UScriptStruct_FAppleImageUtilsImageConversionResult.OuterSingleton;
}

