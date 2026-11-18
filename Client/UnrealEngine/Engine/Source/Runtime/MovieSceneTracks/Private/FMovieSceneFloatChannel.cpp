// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// FMovieSceneFloatChannel @ 1466108e0

FMovieSceneFloatChannel * __thiscall
FMovieSceneFloatChannel::FMovieSceneFloatChannel
          (FMovieSceneFloatChannel *this,FMovieSceneFloatChannel *param_1)

{
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  FMovieSceneChannel::FMovieSceneChannel((FMovieSceneChannel *)this,(FMovieSceneChannel *)param_1);
  this->_padding_ = (longlong)&___7FMovieSceneFloatChannel__6B_;
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
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Values).ArrayMax;
  iVar4 = (param_1->Values).ArrayNum;
  pFVar5 = (param_1->Values).AllocatorInstance.Data;
  (this->Values).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0x1c);
  }
  this->DefaultValue = param_1->DefaultValue;
  this->bHasDefaultValue = param_1->bHasDefaultValue;
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
  this->TickResolution = param_1->TickResolution;
  return this;
}

// operator= @ 14676b080

FMovieSceneFloatChannel * __thiscall
FMovieSceneFloatChannel::operator=(FMovieSceneFloatChannel *this,FMovieSceneFloatChannel *param_1)

{
  int *piVar1;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  if (&param_1->_padding_ != &this->_padding_) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  }
  if (&param_1->_padding_ != &this->_padding_) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  }
  if (&param_1->_padding_ != &this->_padding_) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  }
  (this->PreInfinityExtrap).Value = (param_1->PreInfinityExtrap).Value;
  (this->PostInfinityExtrap).Value = (param_1->PostInfinityExtrap).Value;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=(&this->Times,&param_1->Times);
  pTVar2 = &this->Values;
  if (pTVar2 != &param_1->Values) {
    iVar3 = (this->Values).ArrayMax;
    piVar1 = &(this->Values).ArrayMax;
    _Src = (param_1->Values).AllocatorInstance.Data;
    iVar4 = (param_1->Values).ArrayNum;
    (this->Values).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar4,iVar3,&pTVar2->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0x1c);
      }
    }
  }
  this->DefaultValue = param_1->DefaultValue;
  this->bHasDefaultValue = param_1->bHasDefaultValue;
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->KeyHandles);
  this->TickResolution = param_1->TickResolution;
  return this;
}

