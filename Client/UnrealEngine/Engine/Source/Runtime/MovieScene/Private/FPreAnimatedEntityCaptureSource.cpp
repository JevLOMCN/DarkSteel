// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// FPreAnimatedEntityCaptureSource @ 146181900

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedEntityCaptureSource * __thiscall
UE::MovieScene::FPreAnimatedEntityCaptureSource::FPreAnimatedEntityCaptureSource
          (FPreAnimatedEntityCaptureSource *this,FPreAnimatedStateExtension *param_1)

{
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x30 = 0;
  *(undefined4 *)&this->field_0x34 = 0x80;
  *(undefined4 *)&this->field_0x3c = 0;
  *(undefined4 *)&this->field_0x38 = 0xffffffff;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined4 *)&this->field_0x50 = 0;
  *(undefined ***)this = &___7FPreAnimatedEntityCaptureSource_MovieScene_UE__6B_;
  *(FPreAnimatedStateExtension **)&this->field_0x58 = param_1;
  return this;
}

// BeginTrackingEntity @ 1461957f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedEntityCaptureSource::BeginTrackingEntity
          (FPreAnimatedEntityCaptureSource *this,FPreAnimatedStateEntry *param_1,
          FMovieSceneEntityID param_2,FRootInstanceHandle param_3,bool param_4)

{
  FMovieSceneEntityID local_res18 [8];
  FPreAnimatedStateMetaData local_28 [2];
  
  local_28[0].Entry.ValueHandle.StorageIndex.Value = (param_1->ValueHandle).StorageIndex.Value;
  local_28[0].Entry.GroupHandle.Value = (param_1->GroupHandle).Value;
  local_28[0].Entry.ValueHandle.TypeID.TypeID = (param_1->ValueHandle).TypeID.TypeID;
  local_28[0].bWantsRestoreState = param_4;
  local_res18[0].Value = param_2.Value;
  local_28[0].RootInstanceHandle = param_3;
  TPreAnimatedCaptureSources<UE::MovieScene::FMovieSceneEntityID>::BeginTrackingCaptureSource
            ((TPreAnimatedCaptureSources<UE::MovieScene::FMovieSceneEntityID> *)this,local_res18,
             local_28);
  return;
}

