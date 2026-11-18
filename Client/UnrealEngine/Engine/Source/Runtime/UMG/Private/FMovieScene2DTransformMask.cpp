// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// StaticStruct @ 1468db780

UScriptStruct * __cdecl FMovieScene2DTransformMask::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieScene2DTransformMask.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UScriptStruct_FMovieScene2DTransformMask.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene2DTransformMask,(UObject *)pUVar1,
                         L"MovieScene2DTransformMask");
  }
  return Z_Registration_Info_UScriptStruct_FMovieScene2DTransformMask.OuterSingleton;
}

