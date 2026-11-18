// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineMessages
// Functions: 2

// StaticStruct @ 14463aaf0

UScriptStruct * __cdecl FTraceControlStatus::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlStatus.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_EngineMessages();
    Z_Registration_Info_UScriptStruct_FTraceControlStatus.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTraceControlStatus,(UObject *)pUVar1,
                         L"TraceControlStatus");
  }
  return Z_Registration_Info_UScriptStruct_FTraceControlStatus.OuterSingleton;
}

// operator= @ 14463b5f0

FTraceControlStatus * __thiscall
FTraceControlStatus::operator=(FTraceControlStatus *this,FTraceControlStatus *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  ::FString::operator=(&this->Endpoint,&param_1->Endpoint);
  uVar1 = (param_1->SessionGuid).B;
  uVar2 = (param_1->SessionGuid).C;
  uVar3 = (param_1->SessionGuid).D;
  (this->SessionGuid).A = (param_1->SessionGuid).A;
  (this->SessionGuid).B = uVar1;
  (this->SessionGuid).C = uVar2;
  (this->SessionGuid).D = uVar3;
  uVar1 = (param_1->TraceGuid).B;
  uVar2 = (param_1->TraceGuid).C;
  uVar3 = (param_1->TraceGuid).D;
  (this->TraceGuid).A = (param_1->TraceGuid).A;
  (this->TraceGuid).B = uVar1;
  (this->TraceGuid).C = uVar2;
  (this->TraceGuid).D = uVar3;
  this->BytesSent = param_1->BytesSent;
  this->BytesTraced = param_1->BytesTraced;
  this->MemoryUsed = param_1->MemoryUsed;
  this->CacheAllocated = param_1->CacheAllocated;
  this->CacheUsed = param_1->CacheUsed;
  this->CacheWaste = param_1->CacheWaste;
  this->bAreStatNamedEventsEnabled = param_1->bAreStatNamedEventsEnabled;
  this->bIsPaused = param_1->bIsPaused;
  this->bIsTracing = param_1->bIsTracing;
  (this->StatusTimestamp).Ticks = (param_1->StatusTimestamp).Ticks;
  this->TraceSystemStatus = param_1->TraceSystemStatus;
  return this;
}

