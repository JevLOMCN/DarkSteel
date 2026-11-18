// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 1

// StaticStruct @ 14d67c9e0

UScriptStruct * __cdecl FFocalLengthInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFocalLengthInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FFocalLengthInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFocalLengthInfo,(UObject *)pUVar1,
                         L"FocalLengthInfo");
  }
  return Z_Registration_Info_UScriptStruct_FFocalLengthInfo.OuterSingleton;
}

