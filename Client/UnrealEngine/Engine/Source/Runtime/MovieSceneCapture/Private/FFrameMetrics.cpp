// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 1

// StaticStruct @ 146bd3120

UScriptStruct * __cdecl FFrameMetrics::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFrameMetrics.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneCapture();
    Z_Registration_Info_UScriptStruct_FFrameMetrics.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFrameMetrics,(UObject *)pUVar1,L"FrameMetrics");
  }
  return Z_Registration_Info_UScriptStruct_FFrameMetrics.OuterSingleton;
}

