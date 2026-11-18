// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// StaticStruct @ 1461631f0

UScriptStruct * __cdecl FMovieSceneTrackInstanceInput::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackInstanceInput.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneTrackInstanceInput.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput,(UObject *)pUVar1,
                         L"MovieSceneTrackInstanceInput");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneTrackInstanceInput.OuterSingleton;
}

// Serialize @ 1461d1460

bool __thiscall
FMovieSceneTrackInstanceInput::Serialize(FMovieSceneTrackInstanceInput *this,FArchive *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  int *piVar3;
  FArchiveState *this_00;
  uint local_res8 [2];
  
  this_00 = (FArchiveState *)(**(code **)(*(longlong *)param_1 + 0x168))(param_1,this);
  puVar1 = (ushort *)this_00->ActiveFPLB->StartFastPathLoadBuffer;
  if (this_00->ActiveFPLB->EndFastPathLoadBuffer < puVar1 + 1) {
    if (this_00->ArForceByteSwapping == 0) {
      (**(code **)(this_00->_padding_ + 0x188))(this_00,&this->InstanceHandle,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this_00,&(this->InstanceHandle).InstanceID);
    }
  }
  else {
    (this->InstanceHandle).InstanceID = *puVar1;
    this_00->ActiveFPLB->StartFastPathLoadBuffer = this_00->ActiveFPLB->StartFastPathLoadBuffer + 2;
  }
  puVar1 = &(this->InstanceHandle).InstanceSerial;
  puVar2 = (ushort *)this_00->ActiveFPLB->StartFastPathLoadBuffer;
  if (this_00->ActiveFPLB->EndFastPathLoadBuffer < puVar2 + 1) {
    if (this_00->ArForceByteSwapping == 0) {
      (**(code **)(this_00->_padding_ + 0x188))(this_00,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this_00,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    this_00->ActiveFPLB->StartFastPathLoadBuffer = this_00->ActiveFPLB->StartFastPathLoadBuffer + 2;
  }
  piVar3 = (int *)this_00->ActiveFPLB->StartFastPathLoadBuffer;
  if (piVar3 + 1 <= this_00->ActiveFPLB->EndFastPathLoadBuffer) {
    this->bInputHasBeenProcessed = *piVar3 != 0;
    this_00->ActiveFPLB->StartFastPathLoadBuffer = this_00->ActiveFPLB->StartFastPathLoadBuffer + 4;
    return true;
  }
  local_res8[0] = 0;
  if (this_00->ArIsLoading == 0) {
    local_res8[0] = (uint)(this->bInputHasBeenProcessed != false);
  }
  (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res8,4);
  if (1 < local_res8[0]) {
    FArchiveState::SetError(this_00);
  }
  if (this_00->ArIsLoading != 0) {
    this->bInputHasBeenProcessed = local_res8[0] != 0;
  }
  return true;
}

