// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FQuartzCrossThreadMessage @ 14733f890

FQuartzCrossThreadMessage * __thiscall
Audio::FQuartzCrossThreadMessage::FQuartzCrossThreadMessage
          (FQuartzCrossThreadMessage *this,bool param_1)

{
  LARGE_INTEGER local_res8 [4];
  
  this->_padding_ = -1;
  this->_padding_ = -1;
  (this->Timer).JourneyStartCycles = -1;
  (this->Timer).JourneyEndCycles = -1;
  if (param_1) {
    QueryPerformanceCounter(local_res8);
    (this->Timer).JourneyStartCycles = (long64)local_res8[0];
  }
  return this;
}

// GetCurrentTimeMilliseconds @ 14734ed50

double __thiscall
Audio::FQuartzCrossThreadMessage::GetCurrentTimeMilliseconds(FQuartzCrossThreadMessage *this)

{
  LARGE_INTEGER local_res8 [4];
  
  if ((0 < (this->Timer).JourneyStartCycles) && ((this->Timer).JourneyEndCycles < 1)) {
    QueryPerformanceCounter(local_res8);
    return (double)(ulonglong)(local_res8[0].QuadPart - (this->Timer).JourneyStartCycles) *
           FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000;
  }
  return 0.0;
}

// GetResultsMilliseconds @ 147350830

double __thiscall
Audio::FQuartzCrossThreadMessage::GetResultsMilliseconds(FQuartzCrossThreadMessage *this)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (this->Timer).JourneyStartCycles;
  if ((0 < lVar1) && (lVar2 = (this->Timer).JourneyEndCycles, 0 < lVar2)) {
    return (double)(ulonglong)(lVar2 - lVar1) * FGenericPlatformTime::SecondsPerCycle64 *
           __real_408f400000000000;
  }
  return 0.0;
}

// RequestReceived @ 147355c50

double __thiscall Audio::FQuartzCrossThreadMessage::RequestReceived(FQuartzCrossThreadMessage *this)

{
  longlong lVar1;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  (this->Timer).JourneyEndCycles = (long64)local_res8[0];
  lVar1 = (this->Timer).JourneyStartCycles;
  if ((0 < lVar1) && (0 < local_res8[0].QuadPart)) {
    return (double)(ulonglong)(local_res8[0].QuadPart - lVar1) *
           FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000;
  }
  return 0.0;
}

// RequestSent @ 147355cd0

void __thiscall Audio::FQuartzCrossThreadMessage::RequestSent(FQuartzCrossThreadMessage *this)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  (this->Timer).JourneyStartCycles = (long64)local_res8[0];
  return;
}

