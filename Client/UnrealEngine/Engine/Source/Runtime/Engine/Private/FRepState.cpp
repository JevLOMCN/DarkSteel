// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// CountBytes @ 1484cd680

void __thiscall FRepState::CountBytes(FRepState *this,FArchive *param_1)

{
  FReceivingRepState *this_00;
  FSendingRepState *this_01;
  FString local_48;
  FScopeMarker local_38;
  
  ::FString::FString(&local_48,"FRepState::CountBytes");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker(&local_38,param_1,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
  this_00 = (this->ReceivingRepState).Ptr;
  if (this_00 != (FReceivingRepState *)0x0) {
    (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0xd0,0xd0);
    FReceivingRepState::CountBytes(this_00,param_1);
  }
  ::FString::FString(&local_48,"ReceivingRepState");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
  this_01 = (this->SendingRepState).Ptr;
  if (this_01 != (FSendingRepState *)0x0) {
    (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0x4c0,0x4c0);
    FSendingRepState::CountBytes(this_01,param_1);
  }
  ::FString::FString(&local_48,"SendingRepState");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_38);
  return;
}

