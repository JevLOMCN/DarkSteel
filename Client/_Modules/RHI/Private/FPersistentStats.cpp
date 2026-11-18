// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// FPersistentStats @ 145c86410

FPersistentStats * __thiscall
FPSOCSVStatTracker::FPersistentStats::FPersistentStats(FPersistentStats *this)

{
  uint uVar1;
  FCsvProfiler *pFVar2;
  FName *pFVar3;
  TCsvPersistentCustomStat<int> *pTVar4;
  FName local_res8;
  
  pFVar2 = FCsvProfiler::Get();
  uVar1 = _GCsvCategory_PSOPrecacheCompiling.Index;
  pFVar3 = ::FName::FName(&local_res8,L"TotalCompletedPSOPrecompiles");
  pTVar4 = FCsvProfiler::GetOrCreatePersistentCustomStatInt(pFVar2,*pFVar3,uVar1,false);
  this->TotalCompletedPSOPrecompiles = pTVar4;
  pFVar2 = FCsvProfiler::Get();
  uVar1 = _GCsvCategory_PSOPrecacheCompiling.Index;
  pFVar3 = ::FName::FName(&local_res8,L"PSOPrecompileQueueLength");
  pTVar4 = FCsvProfiler::GetOrCreatePersistentCustomStatInt(pFVar2,*pFVar3,uVar1,false);
  this->PSOPrecompileQueueLength = pTVar4;
  pFVar2 = FCsvProfiler::Get();
  uVar1 = _GCsvCategory_PSOPrecacheCompiling.Index;
  pFVar3 = ::FName::FName(&local_res8,L"PSOComputePrecompilesInProgress");
  pTVar4 = FCsvProfiler::GetOrCreatePersistentCustomStatInt(pFVar2,*pFVar3,uVar1,false);
  this->PSOComputePrecompilesInProgress = pTVar4;
  pFVar2 = FCsvProfiler::Get();
  uVar1 = _GCsvCategory_PSOPrecacheCompiling.Index;
  pFVar3 = ::FName::FName(&local_res8,L"MinPriPrecacheInFlight");
  pTVar4 = FCsvProfiler::GetOrCreatePersistentCustomStatInt(pFVar2,*pFVar3,uVar1,false);
  this->MinPriPrecacheInFlight = pTVar4;
  pFVar2 = FCsvProfiler::Get();
  uVar1 = _GCsvCategory_PSOPrecacheCompiling.Index;
  pFVar3 = ::FName::FName(&local_res8,L"NormalPriPrecacheInFlight");
  pTVar4 = FCsvProfiler::GetOrCreatePersistentCustomStatInt(pFVar2,*pFVar3,uVar1,false);
  this->NormalPriPrecacheInFlight = pTVar4;
  pFVar2 = FCsvProfiler::Get();
  uVar1 = _GCsvCategory_PSOPrecacheCompiling.Index;
  pFVar3 = ::FName::FName(&local_res8,L"MaxPriPrecacheInFlight");
  pTVar4 = FCsvProfiler::GetOrCreatePersistentCustomStatInt(pFVar2,*pFVar3,uVar1,false);
  this->MaxPriPrecacheInFlight = pTVar4;
  pFVar2 = FCsvProfiler::Get();
  uVar1 = _GCsvCategory_PSOPrecacheCompiling.Index;
  pFVar3 = ::FName::FName(&local_res8,L"MaxPriPSOPrecompileQueueLength");
  pTVar4 = FCsvProfiler::GetOrCreatePersistentCustomStatInt(pFVar2,*pFVar3,uVar1,false);
  this->MaxPriPSOPrecompileQueueLength = pTVar4;
  pFVar2 = FCsvProfiler::Get();
  uVar1 = _GCsvCategory_PSOPrecacheCompiling.Index;
  pFVar3 = ::FName::FName(&local_res8,L"NormalPriPSOPrecompileQueueLength");
  pTVar4 = FCsvProfiler::GetOrCreatePersistentCustomStatInt(pFVar2,*pFVar3,uVar1,false);
  this->NormalPriPSOPrecompileQueueLength = pTVar4;
  pFVar2 = FCsvProfiler::Get();
  uVar1 = _GCsvCategory_PSOPrecacheCompiling.Index;
  pFVar3 = ::FName::FName(&local_res8,L"MinPriPSOPrecompileQueueLength");
  pTVar4 = FCsvProfiler::GetOrCreatePersistentCustomStatInt(pFVar2,*pFVar3,uVar1,false);
  this->MinPriPSOPrecompileQueueLength = pTVar4;
  return this;
}

