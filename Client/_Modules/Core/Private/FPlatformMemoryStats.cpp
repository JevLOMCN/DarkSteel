// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FPlatformMemoryStats @ 14161de60

FPlatformMemoryStats * __thiscall
FPlatformMemoryStats::FPlatformMemoryStats(FPlatformMemoryStats *this)

{
  longlong lVar1;
  ulong64 uVar2;
  FGenericPlatformMemoryConstants *pFVar3;
  
  pFVar3 = FWindowsPlatformMemory::GetConstants();
  uVar2 = pFVar3->TotalVirtual;
  this->_padding_ = pFVar3->TotalPhysical;
  this->_padding_ = uVar2;
  uVar2 = pFVar3->OsAllocationGranularity;
  this->_padding_ = pFVar3->PageSize;
  this->_padding_ = uVar2;
  uVar2 = pFVar3->BinnedAllocationGranularity;
  this->_padding_ = pFVar3->BinnedPageSize;
  this->_padding_ = uVar2;
  uVar2 = pFVar3->AddressLimit;
  this->_padding_ = pFVar3->AddressStart;
  this->_padding_ = uVar2;
  lVar1 = *(longlong *)&pFVar3->TotalPhysicalGB;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->WindowsSpecificMemoryStat = 0;
  this->MemoryPressureStatus = Unknown;
  this->_padding_ = lVar1;
  return this;
}

