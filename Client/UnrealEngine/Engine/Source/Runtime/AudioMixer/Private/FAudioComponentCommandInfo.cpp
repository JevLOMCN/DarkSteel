// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// FAudioComponentCommandInfo @ 14653c610

FAudioComponentCommandInfo * __thiscall
FAudioComponentCommandInfo::FAudioComponentCommandInfo
          (FAudioComponentCommandInfo *this,FAudioComponentCommandInfo *param_1)

{
  bool bVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  
  (this->Subscriber).Offset.OffsetInMilliseconds.bIsSet = false;
  bVar1 = (param_1->Subscriber).Offset.OffsetInMilliseconds.bIsSet;
  (this->Subscriber).Offset.OffsetInMilliseconds.bIsSet = bVar1;
  if (bVar1 != false) {
    (this->Subscriber).Offset.OffsetInMilliseconds.TypedValue =
         (param_1->Subscriber).Offset.OffsetInMilliseconds.TypedValue;
  }
  (this->Subscriber).Offset.OffsetAsDuration.bIsSet = false;
  bVar1 = (param_1->Subscriber).Offset.OffsetAsDuration.bIsSet;
  (this->Subscriber).Offset.OffsetAsDuration.bIsSet = bVar1;
  if (bVar1 != false) {
    uVar3 = *(undefined8 *)&(param_1->Subscriber).Offset.OffsetAsDuration.TypedValue.field_0x8;
    *(undefined8 *)&(this->Subscriber).Offset.OffsetAsDuration.TypedValue =
         *(undefined8 *)&(param_1->Subscriber).Offset.OffsetAsDuration.TypedValue;
    *(undefined8 *)&(this->Subscriber).Offset.OffsetAsDuration.TypedValue.field_0x8 = uVar3;
  }
  (this->Subscriber).Queue.Object = (param_1->Subscriber).Queue.Object;
  pTVar2 = (param_1->Subscriber).Queue.SharedReferenceCount.ReferenceController;
  (this->Subscriber).Queue.SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Subscriber).bOffsetConvertedToFrames = (param_1->Subscriber).bOffsetConvertedToFrames;
  (this->Subscriber).bHasBeenNotifiedOfAboutToStart =
       (param_1->Subscriber).bHasBeenNotifiedOfAboutToStart;
  (this->Subscriber).OffsetInAudioFrames = (param_1->Subscriber).OffsetInAudioFrames;
  FQuartzQuantizationBoundary::FQuartzQuantizationBoundary
            (&this->AnticipatoryBoundary,&param_1->AnticipatoryBoundary);
  this->CommandID = param_1->CommandID;
  return this;
}

