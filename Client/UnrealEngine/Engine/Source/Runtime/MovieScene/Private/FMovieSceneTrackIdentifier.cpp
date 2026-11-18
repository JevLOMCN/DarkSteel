// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// StaticStruct @ 1460549f0

UScriptStruct * __cdecl FMovieSceneTrackIdentifier::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackIdentifier.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneTrackIdentifier.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier,(UObject *)pUVar1,
                         L"MovieSceneTrackIdentifier");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneTrackIdentifier.OuterSingleton;
}

// Serialize @ 14605cad0

bool __thiscall
FMovieSceneTrackIdentifier::Serialize(FMovieSceneTrackIdentifier *this,FArchive *param_1)

{
  uint *puVar1;
  int iVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEditorObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FEditorObjectVersion::GUID);
  if (iVar2 < 0x13) {
    return false;
  }
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar1 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    this->Value = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return true;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(param_1,&this->Value);
  return true;
}

