// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ~FRDGPass @ 14472f110

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FRDGPass::~FRDGPass(FRDGPass *this)

{
  FRHIUniformBufferLayout *this_00;
  FScriptContainerElement *pFVar1;
  
  this_00 = (this->ParameterStruct).Layout.Reference;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  pFVar1 = (this->Name).FormattedEventName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FullPathIfDebug).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// LaunchDispatchPassTasks @ 144780ca0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRDGPass::LaunchDispatchPassTasks(FRDGPass *this,FRDGDispatchPassBuilder *param_1)

{
  return;
}

