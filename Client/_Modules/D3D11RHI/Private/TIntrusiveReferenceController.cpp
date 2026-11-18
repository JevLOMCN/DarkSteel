// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 1

// DestroyObject @ 14597bfc0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<`FD3D11GPUFence::Wait'::__l5::FDebugScope,1>::
DestroyObject(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014597bfc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)((longlong)this + 0x10));
  return;
}

