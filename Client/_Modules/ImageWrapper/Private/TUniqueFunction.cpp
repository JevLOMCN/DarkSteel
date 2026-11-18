// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 1

// ~TUniqueFunction<void___cdecl(void)> @ 142669f00

void __thiscall
TUniqueFunction<void___cdecl(void)>::~TUniqueFunction<void___cdecl(void)>
          (TUniqueFunction<void___cdecl(void)> *this)

{
  longlong *plVar1;
  
  if (*(longlong *)this != 0) {
    plVar1 = (longlong *)&this->field_0x10;
    if (*(longlong **)&this->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

