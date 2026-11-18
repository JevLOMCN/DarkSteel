// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// ~TFunction<int___cdecl(void)> @ 1427b7090

void __thiscall
TFunction<int___cdecl(void)>::~TFunction<int___cdecl(void)>(TFunction<int___cdecl(void)> *this)

{
  longlong *plVar1;
  
  if (*(longlong *)this != 0) {
    plVar1 = (longlong *)&this->field_0x10;
    if (*(longlong **)&this->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x0001427b70a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction<EVisibility___cdecl(void)> @ 1429be020

void __thiscall
TFunction<EVisibility___cdecl(void)>::~TFunction<EVisibility___cdecl(void)>
          (TFunction<EVisibility___cdecl(void)> *this)

{
  longlong *plVar1;
  
  if (*(longlong *)this != 0) {
    plVar1 = (longlong *)&this->field_0x10;
    if (*(longlong **)&this->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x0001429be038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

