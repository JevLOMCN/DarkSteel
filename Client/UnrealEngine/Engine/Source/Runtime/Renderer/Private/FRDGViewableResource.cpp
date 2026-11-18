// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ~FRDGViewableResource @ 14472f170

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRDGViewableResource::~FRDGViewableResource(FRDGViewableResource *this)

{
  this->_padding_ = (longlong)&___7FRDGViewableResource__6B_;
  if (this->bHeapAllocatedDebugName != '\0') {
    operator_delete__((void *)this->_padding_);
    return;
  }
  return;
}

