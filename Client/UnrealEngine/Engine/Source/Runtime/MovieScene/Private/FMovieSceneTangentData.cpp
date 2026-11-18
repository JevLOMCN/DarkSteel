// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// StaticStruct @ 14605f1a0

UScriptStruct * __cdecl FMovieSceneTangentData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTangentData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneTangentData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTangentData,(UObject *)pUVar1,
                         L"MovieSceneTangentData");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneTangentData.OuterSingleton;
}

// operator== @ 14609b100

bool __thiscall
FMovieSceneTangentData::operator==(FMovieSceneTangentData *this,FMovieSceneTangentData *param_1)

{
  if ((((param_1->ArriveTangent == this->ArriveTangent) &&
       (param_1->LeaveTangent == this->LeaveTangent)) &&
      ((this->TangentWeightMode).Value == (param_1->TangentWeightMode).Value)) &&
     ((param_1->ArriveTangentWeight == this->ArriveTangentWeight &&
      (param_1->LeaveTangentWeight == this->LeaveTangentWeight)))) {
    return true;
  }
  return false;
}

// operator!= @ 14609b210

bool __thiscall
FMovieSceneTangentData::operator!=(FMovieSceneTangentData *this,FMovieSceneTangentData *param_1)

{
  if ((((param_1->ArriveTangent == this->ArriveTangent) &&
       (param_1->LeaveTangent == this->LeaveTangent)) &&
      ((this->TangentWeightMode).Value == (param_1->TangentWeightMode).Value)) &&
     ((param_1->ArriveTangentWeight == this->ArriveTangentWeight &&
      (param_1->LeaveTangentWeight == this->LeaveTangentWeight)))) {
    return false;
  }
  return true;
}

// Serialize @ 1460f3c60

bool __thiscall FMovieSceneTangentData::Serialize(FMovieSceneTangentData *this,FArchive *param_1)

{
  uchar *puVar1;
  int iVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FSequencerObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FSequencerObjectVersion::GUID);
  if (iVar2 < 10) {
    return false;
  }
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FSequencerObjectVersion::GUID);
  if (iVar2 < 0xc) {
    ::operator<<(param_1,&this->ArriveTangent);
    ::operator<<(param_1,&this->LeaveTangent);
    puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->TangentWeightMode,1);
    }
    else {
      (this->TangentWeightMode).Value = *puVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    ::operator<<(param_1,&this->ArriveTangentWeight);
    ::operator<<(param_1,&this->LeaveTangentWeight);
  }
  else {
    ::operator<<(param_1,&this->ArriveTangent);
    ::operator<<(param_1,&this->LeaveTangent);
    ::operator<<(param_1,&this->ArriveTangentWeight);
    ::operator<<(param_1,&this->LeaveTangentWeight);
    puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->TangentWeightMode,1);
    }
    else {
      (this->TangentWeightMode).Value = *puVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
  }
  return true;
}

