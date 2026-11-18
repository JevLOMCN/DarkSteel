// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 1

// GetValidationTrackerResource @ 1446c6060

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FResource * __thiscall FRHIBuffer::GetValidationTrackerResource(FRHIBuffer *this)

{
  FResource *pFVar1;
  
  pFVar1 = (FResource *)&this->_padding_;
  if (this == (FRHIBuffer *)0x0) {
    pFVar1 = (FResource *)0x0;
  }
  return pFVar1;
}

