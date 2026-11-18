// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Validate @ 148673e40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRDGExternalAccessQueue::Validate
          (FRDGExternalAccessQueue *this,FRDGViewableResource *param_1,ERHIAccess param_2,
          ERHIPipeline param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (((((param_2 & ReadOnlyExclusiveMask) != None) && ((param_2 & WritableMask) != None)) ||
      (((param_2 & WriteOnlyExclusiveMask) != None && ((param_2 & ReadableMask) != None)))) ||
     (param_2 == None)) {
    GetRHIAccessName(&local_18,param_2);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAccess(Access) && Access != ERHIAccess::Unknown",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x531,L"Attempted to finalize texture %s with an invalid access %s.");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_3 == None) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pipelines != ERHIPipeline::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                         ,0x532,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

