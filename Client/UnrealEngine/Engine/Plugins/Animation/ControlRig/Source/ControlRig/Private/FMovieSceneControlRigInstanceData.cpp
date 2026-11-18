// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a2031a0

UScriptStruct * __cdecl FMovieSceneControlRigInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneControlRigInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FMovieSceneControlRigInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData,
                         (UObject *)pUVar1,L"MovieSceneControlRigInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneControlRigInstanceData.OuterSingleton;
}

// GetScriptStructImpl @ 14a2031e0

UScriptStruct * __thiscall
FMovieSceneControlRigInstanceData::GetScriptStructImpl(FMovieSceneControlRigInstanceData *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneControlRigInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FMovieSceneControlRigInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData,
                         (UObject *)pUVar1,L"MovieSceneControlRigInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneControlRigInstanceData.OuterSingleton;
}

