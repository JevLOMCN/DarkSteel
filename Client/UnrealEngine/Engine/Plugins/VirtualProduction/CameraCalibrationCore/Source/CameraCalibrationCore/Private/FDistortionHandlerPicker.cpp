// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 1

// StaticStruct @ 14d67d0b0

UScriptStruct * __cdecl FDistortionHandlerPicker::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDistortionHandlerPicker.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FDistortionHandlerPicker.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDistortionHandlerPicker,(UObject *)pUVar1,
                         L"DistortionHandlerPicker");
  }
  return Z_Registration_Info_UScriptStruct_FDistortionHandlerPicker.OuterSingleton;
}

