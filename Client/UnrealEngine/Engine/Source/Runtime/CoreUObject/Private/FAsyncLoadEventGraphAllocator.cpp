// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FreeArcs @ 142325f90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncLoadEventGraphAllocator::FreeArcs
          (FAsyncLoadEventGraphAllocator *this,FEventLoadNode2 **param_1,uint param_2)

{
  FMemory::Free(param_1);
  LOCK();
  this->TotalAllocated = (atomic<__int64>)((longlong)this->TotalAllocated + (ulonglong)param_2 * -8)
  ;
  UNLOCK();
  LOCK();
  this->TotalArcCount = (atomic<__int64>)((longlong)this->TotalArcCount - (ulonglong)param_2);
  UNLOCK();
  return;
}

