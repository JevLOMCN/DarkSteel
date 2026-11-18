// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 1

// StaticStruct @ 14d678a00

UScriptStruct * __cdecl FLensDataCategoryEditorColor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLensDataCategoryEditorColor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FLensDataCategoryEditorColor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLensDataCategoryEditorColor,(UObject *)pUVar1,
                         L"LensDataCategoryEditorColor");
  }
  return Z_Registration_Info_UScriptStruct_FLensDataCategoryEditorColor.OuterSingleton;
}

