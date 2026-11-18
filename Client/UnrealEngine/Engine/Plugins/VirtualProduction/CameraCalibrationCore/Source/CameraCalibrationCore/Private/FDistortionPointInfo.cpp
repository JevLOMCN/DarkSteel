// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 1

// StaticStruct @ 14d67cbf0

UScriptStruct * __cdecl FDistortionPointInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDistortionPointInfo.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FDistortionPointInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDistortionPointInfo,(UObject *)pUVar1,
                         L"DistortionPointInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDistortionPointInfo.OuterSingleton;
}

