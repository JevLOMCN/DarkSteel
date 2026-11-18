// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ACLPlugin
// Functions: 2

// allocate @ 14de8f350

void * __thiscall ACLAllocator::allocate(ACLAllocator *this,ulong64 param_1,ulong64 param_2)

{
  void *pvVar1;
  
  pvVar1 = FMemory::Malloc(param_1,(uint)param_2);
  return pvVar1;
}

// deallocate @ 14de8f370

void __thiscall ACLAllocator::deallocate(ACLAllocator *this,void *param_1,ulong64 param_2)

{
  FMemory::Free(param_1);
  return;
}

