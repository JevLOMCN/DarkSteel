// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// FMovieSceneChannel @ 146610370

FMovieSceneChannel * __thiscall
FMovieSceneChannel::FMovieSceneChannel(FMovieSceneChannel *this,FMovieSceneChannel *param_1)

{
  TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  *this_01;
  
  *(undefined8 *)&(this->KeyAddedEvent).field_0x18 = 2;
  *(undefined8 *)&this->KeyAddedEvent = 0;
  this->_padding_ = (longlong)&___7FMovieSceneChannel__6B_;
  *(undefined8 *)&(this->KeyAddedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->KeyAddedEvent).field_0x10 = 0;
  if (&param_1->KeyAddedEvent != &this->KeyAddedEvent) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->KeyAddedEvent,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->KeyAddedEvent);
  }
  this_00 = &this->KeyDeletedEvent;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->KeyDeletedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->KeyDeletedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->KeyDeletedEvent).field_0x18 = 2;
  if (&param_1->KeyDeletedEvent != this_00) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->KeyDeletedEvent);
  }
  this_01 = &this->KeyMovedEvent;
  *(undefined8 *)&this_01->field_0x0 = 0;
  *(undefined8 *)&(this->KeyMovedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->KeyMovedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->KeyMovedEvent).field_0x18 = 2;
  if (&param_1->KeyMovedEvent != this_01) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_01,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->KeyMovedEvent);
  }
  return this;
}

