// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionTrajectory
// Functions: 1

// StaticStruct @ 14a94a820

UScriptStruct * __cdecl FMotionTrajectorySettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMotionTrajectorySettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionTrajectory();
    Z_Registration_Info_UScriptStruct_FMotionTrajectorySettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMotionTrajectorySettings,(UObject *)pUVar1,
                         L"MotionTrajectorySettings");
  }
  return Z_Registration_Info_UScriptStruct_FMotionTrajectorySettings.OuterSingleton;
}

