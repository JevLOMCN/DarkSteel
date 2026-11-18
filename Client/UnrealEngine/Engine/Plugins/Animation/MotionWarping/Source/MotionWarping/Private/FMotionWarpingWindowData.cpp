// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 1

// StaticStruct @ 14cefef00

UScriptStruct * __cdecl FMotionWarpingWindowData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMotionWarpingWindowData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UScriptStruct_FMotionWarpingWindowData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMotionWarpingWindowData,(UObject *)pUVar1,
                         L"MotionWarpingWindowData");
  }
  return Z_Registration_Info_UScriptStruct_FMotionWarpingWindowData.OuterSingleton;
}

