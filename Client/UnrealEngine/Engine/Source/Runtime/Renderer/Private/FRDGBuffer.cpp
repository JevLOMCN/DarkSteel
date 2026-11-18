// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// GetIndirectRHICallBuffer @ 144b25d70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRHIBuffer * __thiscall FRDGBuffer::GetIndirectRHICallBuffer(FRDGBuffer *this)

{
  code *pcVar1;
  bool bVar2;
  FRHIBuffer *pFVar3;
  
  if (((this->Desc).Usage & DrawIndirect) == None) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Desc.Usage & EBufferUsageFlags::DrawIndirect",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                       ,0x53c,L"Buffer %s was not flagged for indirect draw usage.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRHIBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  FRDGResource::ValidateRHIAccess((FRDGResource *)this);
  return (FRHIBuffer *)this->_padding_;
}

