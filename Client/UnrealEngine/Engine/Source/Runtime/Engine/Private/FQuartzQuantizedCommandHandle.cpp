// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Cancel @ 147346f20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FQuartzQuantizedCommandHandle::Cancel(FQuartzQuantizedCommandHandle *this)

{
  FMixerDevice *pFVar1;
  bool bVar2;
  IQuartzQuantizedCommand *pIVar3;
  FName *this_00;
  undefined1 local_res8 [8];
  TSharedPtr<Audio::IQuartzQuantizedCommand,1> local_18;
  
  if (((this->CommandPtr).Object != (IQuartzQuantizedCommand *)0x0) &&
     (this->OwningClockName != (FName)0x0)) {
    if (5 < (byte)LogAudioQuartz._0_1_) {
      pIVar3 = TSharedPtr<Audio::IQuartzQuantizedCommand,1>::operator->(&this->CommandPtr);
      this_00 = (FName *)(**(code **)(pIVar3->_padding_ + 0x30))(pIVar3,local_res8);
      ::FName::ToString(this_00,(FString *)&local_18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
      if (local_18.Object != (IQuartzQuantizedCommand *)0x0) {
        FMemory::Free(local_18.Object);
      }
    }
    local_18.Object = (this->CommandPtr).Object;
    pFVar1 = this->MixerDevice;
    local_18.SharedReferenceCount.ReferenceController =
         (this->CommandPtr).SharedReferenceCount.ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar2 = FQuartzClockManager::CancelCommandOnClock
                      (&pFVar1->QuantizedEventClockManager,this->OwningClockName,&local_18);
    return bVar2;
  }
  return false;
}

// Reset @ 147355fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FQuartzQuantizedCommandHandle::Reset(FQuartzQuantizedCommandHandle *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->MixerDevice = (FMixerDevice *)0x0;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CommandPtr != (TSharedPtr<Audio::IQuartzQuantizedCommand,1> *)&local_18) {
    (this->CommandPtr).Object = (IQuartzQuantizedCommand *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CommandPtr).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  (this->OwningClockName).ComparisonIndex = 0;
  (this->OwningClockName).Number = 0;
  return;
}

