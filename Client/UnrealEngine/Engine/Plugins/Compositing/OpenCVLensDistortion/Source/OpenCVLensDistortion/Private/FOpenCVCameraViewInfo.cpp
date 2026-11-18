// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenCVLensDistortion
// Functions: 1

// StaticStruct @ 14d7c61f0

UScriptStruct * __cdecl FOpenCVCameraViewInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOpenCVCameraViewInfo.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_OpenCVLensDistortion();
    Z_Registration_Info_UScriptStruct_FOpenCVCameraViewInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOpenCVCameraViewInfo,(UObject *)pUVar1,
                         L"OpenCVCameraViewInfo");
  }
  return Z_Registration_Info_UScriptStruct_FOpenCVCameraViewInfo.OuterSingleton;
}

