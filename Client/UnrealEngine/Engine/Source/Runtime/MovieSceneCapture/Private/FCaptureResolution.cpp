// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 1

// StaticStruct @ 146bd2930

UScriptStruct * __cdecl FCaptureResolution::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCaptureResolution.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneCapture();
    Z_Registration_Info_UScriptStruct_FCaptureResolution.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCaptureResolution,(UObject *)pUVar1,
                         L"CaptureResolution");
  }
  return Z_Registration_Info_UScriptStruct_FCaptureResolution.OuterSingleton;
}

