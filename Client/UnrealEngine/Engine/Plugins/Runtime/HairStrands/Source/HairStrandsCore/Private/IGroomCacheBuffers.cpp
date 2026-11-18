// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// ~IGroomCacheBuffers @ 14dff2cb0

void __thiscall IGroomCacheBuffers::~IGroomCacheBuffers(IGroomCacheBuffers *this)

{
  this->_padding_ = (longlong)&___7IGroomCacheBuffers__6B_;
                    /* WARNING: Could not recover jumptable at 0x00014dff2cbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  return;
}

