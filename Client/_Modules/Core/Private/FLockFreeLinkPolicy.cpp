// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// AllocLockFreeLink @ 1415a9fc0

uint __cdecl FLockFreeLinkPolicy::AllocLockFreeLink(void)

{
  uint uVar1;
  LockFreeLinkAllocator_TLSCache *this;
  
  this = GetLockFreeAllocator();
  uVar1 = LockFreeLinkAllocator_TLSCache::Pop(this);
  return uVar1;
}

// FreeLockFreeLink @ 1415c45e0

void __cdecl FLockFreeLinkPolicy::FreeLockFreeLink(uint param_1)

{
  LockFreeLinkAllocator_TLSCache *this;
  
  this = GetLockFreeAllocator();
  LockFreeLinkAllocator_TLSCache::Push(this,param_1);
  return;
}

