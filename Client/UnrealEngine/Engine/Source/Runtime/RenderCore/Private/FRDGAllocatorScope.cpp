// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// FRDGAllocatorScope @ 145d8bc10

FRDGAllocatorScope * __thiscall
FRDGAllocatorScope::FRDGAllocatorScope(FRDGAllocatorScope *this,FRDGAllocator *param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(FRDGAllocator::AllocatorTLSSlot);
  this->AllocatorToRestore = pvVar1;
  TlsSetValue(FRDGAllocator::AllocatorTLSSlot,param_1);
  return this;
}

// ~FRDGAllocatorScope @ 145d90a30

void __thiscall FRDGAllocatorScope::~FRDGAllocatorScope(FRDGAllocatorScope *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145d90a39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(FRDGAllocator::AllocatorTLSSlot,this->AllocatorToRestore);
  return;
}

