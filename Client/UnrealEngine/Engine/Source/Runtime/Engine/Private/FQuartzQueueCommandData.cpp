// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FQuartzQueueCommandData @ 14733fa50

/* WARNING: Type propagation algorithm not settling */

FQuartzQueueCommandData * __thiscall
Audio::FQuartzQueueCommandData::FQuartzQueueCommandData
          (FQuartzQueueCommandData *this,FQuartzQueueCommandData *param_1)

{
  bool bVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar3;
  lVar3 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar3;
  (this->AudioComponentCommandInfo).Subscriber.Offset.OffsetInMilliseconds.bIsSet = false;
  bVar1 = (param_1->AudioComponentCommandInfo).Subscriber.Offset.OffsetInMilliseconds.bIsSet;
  (this->AudioComponentCommandInfo).Subscriber.Offset.OffsetInMilliseconds.bIsSet = bVar1;
  if (bVar1 != false) {
    (this->AudioComponentCommandInfo).Subscriber.Offset.OffsetInMilliseconds.TypedValue =
         (param_1->AudioComponentCommandInfo).Subscriber.Offset.OffsetInMilliseconds.TypedValue;
  }
  (this->AudioComponentCommandInfo).Subscriber.Offset.OffsetAsDuration.bIsSet = false;
  bVar1 = (param_1->AudioComponentCommandInfo).Subscriber.Offset.OffsetAsDuration.bIsSet;
  (this->AudioComponentCommandInfo).Subscriber.Offset.OffsetAsDuration.bIsSet = bVar1;
  if (bVar1 != false) {
    uVar4 = *(undefined8 *)
             &(param_1->AudioComponentCommandInfo).Subscriber.Offset.OffsetAsDuration.TypedValue.
              field_0x8;
    *(undefined8 *)&(this->AudioComponentCommandInfo).Subscriber.Offset.OffsetAsDuration.TypedValue
         = *(undefined8 *)
            &(param_1->AudioComponentCommandInfo).Subscriber.Offset.OffsetAsDuration.TypedValue;
    *(undefined8 *)
     &(this->AudioComponentCommandInfo).Subscriber.Offset.OffsetAsDuration.TypedValue.field_0x8 =
         uVar4;
  }
  (this->AudioComponentCommandInfo).Subscriber.Queue.Object =
       (param_1->AudioComponentCommandInfo).Subscriber.Queue.Object;
  pTVar2 = (param_1->AudioComponentCommandInfo).Subscriber.Queue.SharedReferenceCount.
           ReferenceController;
  (this->AudioComponentCommandInfo).Subscriber.Queue.SharedReferenceCount.ReferenceController =
       pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->AudioComponentCommandInfo).Subscriber.bOffsetConvertedToFrames =
       (param_1->AudioComponentCommandInfo).Subscriber.bOffsetConvertedToFrames;
  (this->AudioComponentCommandInfo).Subscriber.bHasBeenNotifiedOfAboutToStart =
       (param_1->AudioComponentCommandInfo).Subscriber.bHasBeenNotifiedOfAboutToStart;
  (this->AudioComponentCommandInfo).Subscriber.OffsetInAudioFrames =
       (param_1->AudioComponentCommandInfo).Subscriber.OffsetInAudioFrames;
  FQuartzQuantizationBoundary::FQuartzQuantizationBoundary
            (&(this->AudioComponentCommandInfo).AnticipatoryBoundary,
             &(param_1->AudioComponentCommandInfo).AnticipatoryBoundary);
  (this->AudioComponentCommandInfo).CommandID = (param_1->AudioComponentCommandInfo).CommandID;
  this->ClockName = param_1->ClockName;
  return this;
}

