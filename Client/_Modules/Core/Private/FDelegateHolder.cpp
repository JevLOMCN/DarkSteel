// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// SelfDestruct @ 141c09950

void __thiscall
`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l70::FDelegateHolder::SelfDestruct
          (void *this)

{
  if (this != (void *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this);
    if (*(void **)((longlong)this + 8) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)this + 8));
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
    ::operator_delete(this,0x18);
  }
  return;
}

