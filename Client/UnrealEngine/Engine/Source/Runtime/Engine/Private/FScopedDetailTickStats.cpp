// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FScopedDetailTickStats @ 147ea64e0

FScopedDetailTickStats * __thiscall
FScopedDetailTickStats::FScopedDetailTickStats
          (FScopedDetailTickStats *this,FDetailedTickStats *param_1,UObject *param_2)

{
  bool bVar1;
  LARGE_INTEGER local_res8 [4];
  
  this->DetailedTickStats = param_1;
  this->Object = param_2;
  QueryPerformanceCounter(local_res8);
  this->StartCycles = local_res8[0].s.LowPart;
  bVar1 = FDetailedTickStats::BeginObject
                    (this->DetailedTickStats,*(UObject **)&this->Object->field_0x10);
  this->bShouldTrackObjectClass = bVar1;
  bVar1 = FDetailedTickStats::BeginObject(this->DetailedTickStats,this->Object);
  this->bShouldTrackObject = bVar1;
  return this;
}

// ~FScopedDetailTickStats @ 147ea9560

void __thiscall FScopedDetailTickStats::~FScopedDetailTickStats(FScopedDetailTickStats *this)

{
  float fVar1;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  fVar1 = (float)((double)(local_res8.s.LowPart - this->StartCycles) *
                 FGenericPlatformTime::SecondsPerCycle);
  if (this->bShouldTrackObject != false) {
    FDetailedTickStats::EndObject(this->DetailedTickStats,this->Object,fVar1,false);
  }
  if (this->bShouldTrackObjectClass != false) {
    FDetailedTickStats::EndObject
              (this->DetailedTickStats,*(UObject **)&this->Object->field_0x10,fVar1,true);
  }
  return;
}

