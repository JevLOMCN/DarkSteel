// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 1

// NextResult @ 14d3e7d90

TUniquePtr<TraceServices::IAllocationsProvider::FAllocations_const_,TDefaultDelete<TraceServices::IAllocationsProvider::FAllocations_const_>_>
 __thiscall TraceServices::IAllocationsProvider::FQueryStatus::NextResult(FQueryStatus *this)

{
  ulong64 *puVar1;
  FAllocations *in_RDX;
  
  puVar1 = (ulong64 *)this->Handle;
  if (puVar1 == (ulong64 *)0x0) {
    *(longlong *)in_RDX = 0;
    return (TUniquePtr<TraceServices::IAllocationsProvider::FAllocations_const_,TDefaultDelete<TraceServices::IAllocationsProvider::FAllocations_const_>_>
            )in_RDX;
  }
  this->Handle = *puVar1;
  *(ulong64 **)in_RDX = puVar1;
  return (TUniquePtr<TraceServices::IAllocationsProvider::FAllocations_const_,TDefaultDelete<TraceServices::IAllocationsProvider::FAllocations_const_>_>
          )in_RDX;
}

