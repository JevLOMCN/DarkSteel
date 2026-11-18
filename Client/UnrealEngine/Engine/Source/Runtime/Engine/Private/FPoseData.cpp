// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 14758b740

UScriptStruct * __cdecl FPoseData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FPoseData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseData,(UObject *)pUVar1,L"PoseData");
  }
  return Z_Registration_Info_UScriptStruct_FPoseData.OuterSingleton;
}

