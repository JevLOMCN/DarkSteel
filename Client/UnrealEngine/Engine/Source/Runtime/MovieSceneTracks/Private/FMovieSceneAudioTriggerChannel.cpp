// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// FMovieSceneAudioTriggerChannel @ 14660fd70

FMovieSceneAudioTriggerChannel * __thiscall
FMovieSceneAudioTriggerChannel::FMovieSceneAudioTriggerChannel
          (FMovieSceneAudioTriggerChannel *this,FMovieSceneAudioTriggerChannel *param_1)

{
  FMovieSceneChannel::FMovieSceneChannel((FMovieSceneChannel *)this,(FMovieSceneChannel *)param_1);
  this->_padding_ = (longlong)&___7FMovieSceneAudioTriggerChannel__6B_;
  (this->Times).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Times).AllocatorInstance.Data = (param_1->Times).AllocatorInstance.Data;
  (param_1->Times).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Times).ArrayNum = (param_1->Times).ArrayNum;
  (this->Times).ArrayMax = (param_1->Times).ArrayMax;
  (param_1->Times).ArrayNum = 0;
  (param_1->Times).ArrayMax = 0;
  (this->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Values).AllocatorInstance.Data = (param_1->Values).AllocatorInstance.Data;
  (param_1->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Values).ArrayNum = (param_1->Values).ArrayNum;
  (this->Values).ArrayMax = (param_1->Values).ArrayMax;
  (param_1->Values).ArrayNum = 0;
  (param_1->Values).ArrayMax = 0;
  *(undefined8 *)&this->KeyHandles = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x8 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x20 = 0;
  *(undefined4 *)&(this->KeyHandles).field_0x28 = 0;
  *(undefined4 *)&(this->KeyHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeyHandles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeyHandles).field_0x34 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x38 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x40 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x58 = 0;
  *(undefined4 *)&(this->KeyHandles).field_0x60 = 0;
  *(undefined4 *)&(this->KeyHandles).field_0x64 = 0x80;
  *(undefined4 *)&(this->KeyHandles).field_0x68 = 0xffffffff;
  *(undefined4 *)&(this->KeyHandles).field_0x6c = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x78 = 0;
  *(undefined4 *)&(this->KeyHandles).field_0x80 = 0;
  return this;
}

