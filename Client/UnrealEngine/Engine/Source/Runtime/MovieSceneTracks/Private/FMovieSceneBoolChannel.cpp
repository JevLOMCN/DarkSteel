// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// FMovieSceneBoolChannel @ 14660fea0

FMovieSceneBoolChannel * __thiscall
FMovieSceneBoolChannel::FMovieSceneBoolChannel
          (FMovieSceneBoolChannel *this,FMovieSceneBoolChannel *param_1)

{
  FMovieSceneChannel::FMovieSceneChannel((FMovieSceneChannel *)this,(FMovieSceneChannel *)param_1);
  this->_padding_ = (longlong)&___7FMovieSceneBoolChannel__6B_;
  (this->PreInfinityExtrap).Value = (param_1->PreInfinityExtrap).Value;
  (this->PostInfinityExtrap).Value = (param_1->PostInfinityExtrap).Value;
  (this->Times).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Times).AllocatorInstance.Data = (param_1->Times).AllocatorInstance.Data;
  (param_1->Times).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Times).ArrayNum = (param_1->Times).ArrayNum;
  (this->Times).ArrayMax = (param_1->Times).ArrayMax;
  (param_1->Times).ArrayNum = 0;
  (param_1->Times).ArrayMax = 0;
  this->DefaultValue = param_1->DefaultValue;
  this->bHasDefaultValue = param_1->bHasDefaultValue;
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

// FMovieSceneBoolChannel @ 14660ffd0

FMovieSceneBoolChannel * __thiscall
FMovieSceneBoolChannel::FMovieSceneBoolChannel
          (FMovieSceneBoolChannel *this,FMovieSceneBoolChannel *param_1)

{
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  FMovieSceneChannel::FMovieSceneChannel((FMovieSceneChannel *)this,(FMovieSceneChannel *)param_1);
  this->_padding_ = (longlong)&___7FMovieSceneBoolChannel__6B_;
  pTVar1 = &this->Times;
  (this->PreInfinityExtrap).Value = (param_1->PreInfinityExtrap).Value;
  (this->PostInfinityExtrap).Value = (param_1->PostInfinityExtrap).Value;
  piVar2 = &(this->Times).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->Times).ArrayNum;
  pFVar5 = (param_1->Times).AllocatorInstance.Data;
  (this->Times).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
  }
  pTVar3 = &this->Values;
  this->DefaultValue = param_1->DefaultValue;
  this->bHasDefaultValue = param_1->bHasDefaultValue;
  piVar2 = &(this->Values).ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->Values).ArrayNum;
  pFVar5 = (param_1->Values).AllocatorInstance.Data;
  (this->Values).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4);
  }
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

