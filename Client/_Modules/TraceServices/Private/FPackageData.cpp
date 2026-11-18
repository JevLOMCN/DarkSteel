// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 1

// FPackageData @ 14d424780

FPackageData * __thiscall
TraceServices::FPackageData::FPackageData(FPackageData *this,ulong64 param_1)

{
  this->Id = param_1;
  this->Name = GUnknownPackage;
  this->LoadTimeIncl = 0.0;
  this->LoadTimeExcl = 0.0;
  this->SaveTimeIncl = 0.0;
  this->SaveTimeExcl = 0.0;
  this->BeginCacheForCookedPlatformDataIncl = 0.0;
  this->BeginCacheForCookedPlatformDataExcl = 0.0;
  this->IsCachedCookedPlatformDataLoadedIncl = 0.0;
  this->IsCachedCookedPlatformDataLoadedExcl = 0.0;
  this->AssetClass = GUnknownClass;
  return this;
}

