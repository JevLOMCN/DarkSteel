// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// ~TFunction<void___cdecl(TRefCountPtr<FBaseGraphTask>)> @ 141b29cd0

void __thiscall
TFunction<void___cdecl(TRefCountPtr<FBaseGraphTask>)>::
~TFunction<void___cdecl(TRefCountPtr<FBaseGraphTask>)>
          (TFunction<void___cdecl(TRefCountPtr<FBaseGraphTask>)> *this)

{
  longlong *plVar1;
  
  if (*(longlong *)this != 0) {
    plVar1 = (longlong *)&this->field_0x10;
    if (*(longlong **)&this->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x000141b29ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

