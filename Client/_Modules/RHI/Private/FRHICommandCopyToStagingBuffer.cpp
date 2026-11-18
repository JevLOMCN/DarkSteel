// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// Execute @ 145c9efd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandCopyToStagingBuffer::Execute
          (FRHICommandCopyToStagingBuffer *this,FRHICommandListBase *param_1)

{
  IRHIComputeContext *pIVar1;
  
  pIVar1 = FRHICommandListBase::GetComputeContext(param_1);
  (**(code **)(pIVar1->_padding_ + 0xd8))
            (pIVar1,this->SourceBuffer,this->DestinationStagingBuffer,this->Offset,this->NumBytes);
  return;
}

