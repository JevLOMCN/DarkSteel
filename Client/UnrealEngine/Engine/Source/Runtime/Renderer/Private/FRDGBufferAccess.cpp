// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FRDGBufferAccess @ 144c1e460

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBufferAccess * __thiscall
FRDGBufferAccess::FRDGBufferAccess(FRDGBufferAccess *this,FRDGBuffer *param_1,ERHIAccess param_2)

{
  code *pcVar1;
  bool bVar2;
  FRDGBufferAccess *pFVar3;
  
  this->Buffer = param_1;
  this->Access = param_2;
  if ((((param_2 & ReadOnlyExclusiveMask) != None) && ((param_2 & WritableMask) != None)) ||
     (((param_2 & WriteOnlyExclusiveMask) != None && ((param_2 & ReadableMask) != None)))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAccess(InAccess)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                       ,0x176,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGBufferAccess *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

