// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// StaticStruct @ 14605f5d0

UScriptStruct * __cdecl FMovieSceneDoubleValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneDoubleValue.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneDoubleValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDoubleValue,(UObject *)pUVar1,
                         L"MovieSceneDoubleValue");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneDoubleValue.OuterSingleton;
}

// operator== @ 14609b040

bool __thiscall
FMovieSceneDoubleValue::operator==(FMovieSceneDoubleValue *this,FMovieSceneDoubleValue *param_1)

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

// operator!= @ 14609b150

bool __thiscall
FMovieSceneDoubleValue::operator!=(FMovieSceneDoubleValue *this,FMovieSceneDoubleValue *param_1)

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

// Serialize @ 1460f3c30

bool __thiscall FMovieSceneDoubleValue::Serialize(FMovieSceneDoubleValue *this,FArchive *param_1)

{
  TEnumAsByte<ERichCurveTangentWeightMode> *pTVar1;
  longlong *plVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  float afStackX_10 [2];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FSequencerObjectVersion::GUID);
  iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FSequencerObjectVersion::GUID);
  if (iVar7 < 10) {
    return false;
  }
  if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
    if ((param_1->field_0x28 & 1) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneCurveChannelImpl.cpp"
                         ,0x50a,L"float -> double conversion applied outside of load!");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    afStackX_10[0] = (float)this->Value;
    if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,afStackX_10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)afStackX_10);
      }
    }
    else {
      afStackX_10[0] = *(float *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    this->Value = (double)afStackX_10[0];
  }
  else {
    ::operator<<(param_1,&this->Value);
  }
  iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FSequencerObjectVersion::GUID);
  if (iVar7 < 0xc) {
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

