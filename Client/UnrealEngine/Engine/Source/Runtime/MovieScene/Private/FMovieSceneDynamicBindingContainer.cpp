// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// StaticStruct @ 1461e8e50

UScriptStruct * __cdecl FMovieSceneDynamicBindingContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBindingContainer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBindingContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDynamicBindingContainer,
                         (UObject *)pUVar1,L"MovieSceneDynamicBindingContainer");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBindingContainer.OuterSingleton;
}

