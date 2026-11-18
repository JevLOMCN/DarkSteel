// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FGenericPlatformMemoryStats @ 14161dab0

FGenericPlatformMemoryStats * __thiscall
FGenericPlatformMemoryStats::FGenericPlatformMemoryStats(FGenericPlatformMemoryStats *this)

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
  this->AvailablePhysical = 0;
  this->AvailableVirtual = 0;
  this->UsedPhysical = 0;
  this->PeakUsedPhysical = 0;
  this->UsedVirtual = 0;
  this->PeakUsedVirtual = 0;
  this->_padding_ = lVar1;
  return this;
}

// GetAvailablePhysical @ 14163e790

ulong64 __thiscall
FGenericPlatformMemoryStats::GetAvailablePhysical(FGenericPlatformMemoryStats *this,bool param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  
  uVar1 = this->AvailablePhysical;
  if (param_1) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar1;
    }
    return uVar2;
  }
  return uVar1;
}

// GetMemoryPressureStatus @ 141643560

/* WARNING: Removing unreachable block (ram,0x000141643587) */

EMemoryPressureStatus __thiscall
FGenericPlatformMemoryStats::GetMemoryPressureStatus(FGenericPlatformMemoryStats *this)

{
  EMemoryPressureStatus EVar1;
  
  if (GenericPlatformMemory::GMemoryPressureCriticalThresholdMB <= 0.0) {
    return Unknown;
  }
  EVar1 = Nominal;
  if ((float)(this->AvailablePhysical >> 0x14) <
      GenericPlatformMemory::GMemoryPressureCriticalThresholdMB) {
    EVar1 = Critical;
  }
  return EVar1;
}

// GetPlatformSpecificStats @ 141644b30

TArray<FGenericPlatformMemoryStats::FPlatformSpecificStat,TSizedDefaultAllocator<32>_> * __thiscall
FGenericPlatformMemoryStats::GetPlatformSpecificStats
          (FGenericPlatformMemoryStats *this,
          TArray<FGenericPlatformMemoryStats::FPlatformSpecificStat,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

