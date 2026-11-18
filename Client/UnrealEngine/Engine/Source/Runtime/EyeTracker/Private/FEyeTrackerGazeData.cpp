// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EyeTracker
// Functions: 1

// StaticStruct @ 1446f21f0

UScriptStruct * __cdecl FEyeTrackerGazeData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEyeTrackerGazeData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_EyeTracker();
    Z_Registration_Info_UScriptStruct_FEyeTrackerGazeData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEyeTrackerGazeData,(UObject *)pUVar1,
                         L"EyeTrackerGazeData");
  }
  return Z_Registration_Info_UScriptStruct_FEyeTrackerGazeData.OuterSingleton;
}

