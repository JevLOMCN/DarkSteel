// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// FRDGProducerState @ 145d8cc90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGProducerState * __thiscall FRDGProducerState::FRDGProducerState(FRDGProducerState *this)

{
  (this->NoUAVBarrierHandle).Index = 0xffffffff;
  this->Pass = (FRDGPass *)0x0;
  this->PassIfSkipUAVBarrier = (FRDGPass *)0x0;
  this->PassIfReadAccess = (FRDGPass *)0x0;
  this->Access = None;
  return this;
}

