// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationWarpingRuntime
// Functions: 1

// StaticStruct @ 14a7129d0

UScriptStruct * __cdecl FSlopeWarpingFootData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSlopeWarpingFootData.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UScriptStruct_FSlopeWarpingFootData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSlopeWarpingFootData,(UObject *)pUVar1,
                         L"SlopeWarpingFootData");
  }
  return Z_Registration_Info_UScriptStruct_FSlopeWarpingFootData.OuterSingleton;
}

