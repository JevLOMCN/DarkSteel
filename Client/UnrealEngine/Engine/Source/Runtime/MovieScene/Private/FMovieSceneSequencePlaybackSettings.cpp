// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// StaticStruct @ 146055610

UScriptStruct * __cdecl FMovieSceneSequencePlaybackSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequencePlaybackSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneSequencePlaybackSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings,
                         (UObject *)pUVar1,L"MovieSceneSequencePlaybackSettings");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneSequencePlaybackSettings.OuterSingleton;
}

// SerializeFromMismatchedTag @ 146234420

bool __thiscall
FMovieSceneSequencePlaybackSettings::SerializeFromMismatchedTag
          (FMovieSceneSequencePlaybackSettings *this,FPropertyTag *param_1,
          FStructuredArchiveSlot param_2)

{
  bool bVar1;
  FName *pFVar2;
  UScriptStruct *this_00;
  FPropertyTypeName local_res10 [4];
  FName local_res20;
  
  local_res10[0].Index = (param_1->TypeName).Index;
  pFVar2 = ::FName::FName(&local_res20,"LevelSequencePlaybackSettings");
  bVar1 = UE::FPropertyTypeName::IsStruct(local_res10,*pFVar2);
  if (bVar1) {
    this_00 = StaticStruct();
    UScriptStruct::SerializeItem(this_00,param_2,this,(void *)0x0);
    return true;
  }
  return false;
}

