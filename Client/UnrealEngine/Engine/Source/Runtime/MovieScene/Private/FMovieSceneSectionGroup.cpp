// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// StaticStruct @ 1461677d0

UScriptStruct * __cdecl FMovieSceneSectionGroup::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSectionGroup.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneSectionGroup.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSectionGroup,(UObject *)pUVar1,
                         L"MovieSceneSectionGroup");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneSectionGroup.OuterSingleton;
}

