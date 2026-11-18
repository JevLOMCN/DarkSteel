// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 1

// FScopedDurationTimeLogger @ 142c985a0

FScopedDurationTimeLogger * __thiscall
FScopedDurationTimeLogger::FScopedDurationTimeLogger
          (FScopedDurationTimeLogger *this,FString *param_1,FOutputDevice *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  LARGE_INTEGER local_res8;
  
  (this->Msg).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Msg).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Msg).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->Msg).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  this->Accumulator = 0.0;
  this->Device = param_2;
  QueryPerformanceCounter(&local_res8);
  dVar2 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  (this->Timer).Accumulator = &this->Accumulator;
  (this->Timer).StartTime = dVar2 + __real_4170000000000000;
  QueryPerformanceCounter(&local_res8);
  (this->Timer).StartTime =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

