// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// FUnrealMutableInputStream @ 14ac506b0

FUnrealMutableInputStream * __thiscall
FUnrealMutableInputStream::FUnrealMutableInputStream
          (FUnrealMutableInputStream *this,FArchive *param_1)

{
  this->m_ar = param_1;
  this->_padding_ = (longlong)&___7FUnrealMutableInputStream__6B_;
  return this;
}

// Read @ 14ac60550

void __thiscall
FUnrealMutableInputStream::Read(FUnrealMutableInputStream *this,void *param_1,ulong64 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac60557. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->m_ar + 0x188))();
  return;
}

