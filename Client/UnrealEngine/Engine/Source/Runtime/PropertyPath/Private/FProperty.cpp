// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 1

// CopySingleValue @ 14448d720

void __thiscall FProperty::CopySingleValue(FProperty *this,void *param_1,void *param_2)

{
  if (param_1 == param_2) {
    return;
  }
  if (((uint)(int)this->PropertyFlags >> 0x1e & 1) != 0) {
    memcpy(param_1,param_2,(longlong)this->ElementSize);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014448d74d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xf0))();
  return;
}

