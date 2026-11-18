// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 1

// StaticStruct @ 14d67cca0

UScriptStruct * __cdecl FSTMapPointInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSTMapPointInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FSTMapPointInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSTMapPointInfo,(UObject *)pUVar1,
                         L"STMapPointInfo");
  }
  return Z_Registration_Info_UScriptStruct_FSTMapPointInfo.OuterSingleton;
}

