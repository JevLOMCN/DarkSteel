// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 2

// FinishWithError @ 14cf4f6d0

void __thiscall
FGetGeoLocationAsyncTask::FinishWithError(FGetGeoLocationAsyncTask *this,FString *param_1)

{
  LOCK();
  *(undefined4 *)&this->_padding_ = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  UNLOCK();
  ::FString::operator=((FString *)&this->_padding_,param_1);
  return;
}

// FinishWithGeoLocation @ 14cf4f6f0

void __thiscall
FGetGeoLocationAsyncTask::FinishWithGeoLocation
          (FGetGeoLocationAsyncTask *this,float param_1,float param_2,float param_3)

{
  this->Longitude = param_1;
  this->Latitude = param_2;
  this->Altitude = param_3;
  LOCK();
  *(undefined4 *)&this->_padding_ = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  UNLOCK();
  return;
}

