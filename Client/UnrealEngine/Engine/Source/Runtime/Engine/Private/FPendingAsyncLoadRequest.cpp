// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FPendingAsyncLoadRequest @ 14808a550

FPendingAsyncLoadRequest * __thiscall
FNetGUIDCache::FPendingAsyncLoadRequest::FPendingAsyncLoadRequest
          (FPendingAsyncLoadRequest *this,FPendingAsyncLoadRequest *param_1)

{
  ForElementType<FNetworkGUID> FVar1;
  
  (this->NetGUIDs).AllocatorInstance.SecondaryData = (ForElementType<FNetworkGUID>)0x0;
  if ((param_1->NetGUIDs).AllocatorInstance.SecondaryData == (ForElementType<FNetworkGUID>)0x0) {
    memmove(this,param_1,0x10);
  }
  FVar1 = (this->NetGUIDs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FNetworkGUID>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->NetGUIDs).AllocatorInstance.SecondaryData =
       (param_1->NetGUIDs).AllocatorInstance.SecondaryData;
  (param_1->NetGUIDs).AllocatorInstance.SecondaryData = (ForElementType<FNetworkGUID>)0x0;
  (this->NetGUIDs).ArrayNum = (param_1->NetGUIDs).ArrayNum;
  (this->NetGUIDs).ArrayMax = (param_1->NetGUIDs).ArrayMax;
  (param_1->NetGUIDs).ArrayNum = 0;
  (param_1->NetGUIDs).ArrayMax = 2;
  this->RequestStartTime = param_1->RequestStartTime;
  this->bWasRequestedByOwnerOrPawn = param_1->bWasRequestedByOwnerOrPawn;
  return this;
}

