// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// ~FStaticConstructObjectParameters @ 14ddcb530

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FStaticConstructObjectParameters::~FStaticConstructObjectParameters
          (FStaticConstructObjectParameters *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->PropertyInitCallback != 0) {
    plVar1 = *(longlong **)&(this->PropertyInitCallback).field_0x28;
    plVar2 = (longlong *)&(this->PropertyInitCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

