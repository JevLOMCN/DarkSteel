// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// PopProperty @ 141f013e0

void __thiscall FSerializedPropertyScope::PopProperty(FSerializedPropertyScope *this)

{
  FProperty *pFVar1;
  
  pFVar1 = this->Property;
  if (pFVar1 != (FProperty *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141f013fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->Ar + 0x248))
              (this->Ar,pFVar1,pFVar1->PropertyFlags >> 0x23 & 0xffffffffffffff01);
    return;
  }
  return;
}

// PushProperty @ 141f08540

void __thiscall FSerializedPropertyScope::PushProperty(FSerializedPropertyScope *this)

{
  FProperty *pFVar1;
  
  pFVar1 = this->Property;
  if (pFVar1 != (FProperty *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141f0855b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->Ar + 0x240))
              (this->Ar,pFVar1,pFVar1->PropertyFlags >> 0x23 & 0xffffffffffffff01);
    return;
  }
  return;
}

