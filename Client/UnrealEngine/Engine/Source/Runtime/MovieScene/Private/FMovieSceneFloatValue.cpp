// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// StaticStruct @ 146063c00

UScriptStruct * __cdecl FMovieSceneFloatValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneFloatValue.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneFloatValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFloatValue,(UObject *)pUVar1,
                         L"MovieSceneFloatValue");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneFloatValue.OuterSingleton;
}

// operator== @ 14609b0a0

bool __thiscall
FMovieSceneFloatValue::operator==(FMovieSceneFloatValue *this,FMovieSceneFloatValue *param_1)

{
  if (((((param_1->Value == this->Value) &&
        ((this->InterpMode).Value == (param_1->InterpMode).Value)) &&
       ((this->TangentMode).Value == (param_1->TangentMode).Value)) &&
      (((param_1->Tangent).ArriveTangent == (this->Tangent).ArriveTangent &&
       ((param_1->Tangent).LeaveTangent == (this->Tangent).LeaveTangent)))) &&
     (((this->Tangent).TangentWeightMode.Value == (param_1->Tangent).TangentWeightMode.Value &&
      (((param_1->Tangent).ArriveTangentWeight == (this->Tangent).ArriveTangentWeight &&
       ((param_1->Tangent).LeaveTangentWeight == (this->Tangent).LeaveTangentWeight)))))) {
    return true;
  }
  return false;
}

// operator!= @ 14609b1b0

bool __thiscall
FMovieSceneFloatValue::operator!=(FMovieSceneFloatValue *this,FMovieSceneFloatValue *param_1)

{
  if (((((param_1->Value == this->Value) &&
        ((this->InterpMode).Value == (param_1->InterpMode).Value)) &&
       ((this->TangentMode).Value == (param_1->TangentMode).Value)) &&
      (((param_1->Tangent).ArriveTangent == (this->Tangent).ArriveTangent &&
       ((param_1->Tangent).LeaveTangent == (this->Tangent).LeaveTangent)))) &&
     (((this->Tangent).TangentWeightMode.Value == (param_1->Tangent).TangentWeightMode.Value &&
      (((param_1->Tangent).ArriveTangentWeight == (this->Tangent).ArriveTangentWeight &&
       ((param_1->Tangent).LeaveTangentWeight == (this->Tangent).LeaveTangentWeight)))))) {
    return false;
  }
  return true;
}

// Serialize @ 1460f3c50

bool __thiscall FMovieSceneFloatValue::Serialize(FMovieSceneFloatValue *this,FArchive *param_1)

{
  TEnumAsByte<ERichCurveTangentWeightMode> *pTVar1;
  float *pfVar2;
  uchar *puVar3;
  int iVar4;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FSequencerObjectVersion::GUID);
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FSequencerObjectVersion::GUID);
  if (iVar4 < 10) {
    return false;
  }
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)this);
    }
  }
  else {
    this->Value = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FSequencerObjectVersion::GUID);
  if (iVar4 < 0xc) {
    puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->InterpMode,1);
    }
    else {
      (this->InterpMode).Value = *puVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if (puVar3 + 1 <= (uchar *)(*(undefined8 **)&param_1->field_0x8)[1]) {
      (this->TangentMode).Value = *puVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
      FMovieSceneTangentData::Serialize(&this->Tangent,param_1);
      return true;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->TangentMode,1);
    FMovieSceneTangentData::Serialize(&this->Tangent,param_1);
    return true;
  }
  ::operator<<(param_1,&(this->Tangent).ArriveTangent);
  ::operator<<(param_1,&(this->Tangent).LeaveTangent);
  ::operator<<(param_1,&(this->Tangent).ArriveTangentWeight);
  ::operator<<(param_1,&(this->Tangent).LeaveTangentWeight);
  pTVar1 = &(this->Tangent).TangentWeightMode;
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pTVar1,1);
  }
  else {
    pTVar1->Value = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->InterpMode,1);
  }
  else {
    (this->InterpMode).Value = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->TangentMode,1);
  }
  else {
    (this->TangentMode).Value = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if (puVar3 + 1 <= (uchar *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    this->PaddingByte = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return true;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->PaddingByte,1);
  return true;
}

