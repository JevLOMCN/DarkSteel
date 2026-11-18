// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 1

// GetGPUSizeBytes @ 1446c5de0

ulong64 __thiscall FGenericRHIStagingBuffer::GetGPUSizeBytes(FGenericRHIStagingBuffer *this)

{
  FRHIBuffer *pFVar1;
  
  pFVar1 = (this->ShadowBuffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    return (ulonglong)(pFVar1->Desc).Size;
  }
  return 0;
}

