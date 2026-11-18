// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 3

// FetchVideo @ 14d7a7720

bool __thiscall
FMediaIOCorePlayerBase::FJITRMediaTextureSamples::FetchVideo
          (FJITRMediaTextureSamples *this,TRange<FTimespan> *param_1,
          TSharedPtr<IMediaTextureSample,1> *param_2)

{
  TSharedPtr<FMediaIOCoreTextureSampleBase,1> *pTVar1;
  FSharedReferencer<1> *this_00;
  TSharedPtr<IMediaTextureSample,1> local_28;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->ProxySample;
  local_28.Object = (IMediaTextureSample *)pTVar1->Object;
  if ((FMediaIOCoreTextureSampleBase *)local_28.Object == (FMediaIOCoreTextureSampleBase *)0x0) {
    return false;
  }
  this_00 = &(this->ProxySample).SharedReferenceCount;
  local_28.SharedReferenceCount.ReferenceController = this_00->ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (param_2 != &local_28) {
    param_2->Object = local_28.Object;
    local_28.Object = (IMediaTextureSample *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_2->SharedReferenceCount,&local_28.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<FMediaIOCoreTextureSampleBase,1> *)&local_18) {
    pTVar1->Object = (FMediaIOCoreTextureSampleBase *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(this_00,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return true;
}

// FlushSamples @ 14d7a7b70

void __thiscall
FMediaIOCorePlayerBase::FJITRMediaTextureSamples::FlushSamples(FJITRMediaTextureSamples *this)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ProxySample != (TSharedPtr<FMediaIOCoreTextureSampleBase,1> *)&local_18) {
    (this->ProxySample).Object = (FMediaIOCoreTextureSampleBase *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ProxySample).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// PeekVideoSampleTime @ 14d7b54c0

bool __thiscall
FMediaIOCorePlayerBase::FJITRMediaTextureSamples::PeekVideoSampleTime
          (FJITRMediaTextureSamples *this,FMediaTimeStamp *param_1)

{
  return false;
}

