// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 2

// FinishWithAvailability @ 14cf4f680

void __thiscall
FCheckGeoTrackingAvailabilityAsyncTask::FinishWithAvailability
          (FCheckGeoTrackingAvailabilityAsyncTask *this,bool param_1)

{
  this->bIsAvailable = param_1;
  LOCK();
  *(undefined4 *)&this->_padding_ = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  UNLOCK();
  return;
}

// FinishWithError @ 14cf4f6a0

void __thiscall
FCheckGeoTrackingAvailabilityAsyncTask::FinishWithError
          (FCheckGeoTrackingAvailabilityAsyncTask *this,FString *param_1)

{
  this->bIsAvailable = false;
  LOCK();
  *(undefined4 *)&this->_padding_ = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  UNLOCK();
  ::FString::operator=((FString *)&this->_padding_,param_1);
  return;
}

