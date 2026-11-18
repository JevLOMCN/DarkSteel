// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Add @ 144864c40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRDGExternalAccessQueue::Add
          (FRDGExternalAccessQueue *this,FRDGViewableResource *param_1,ERHIAccess param_2,
          ERHIPipeline param_3)

{
  int *piVar1;
  FResource *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString local_18;
  
  if (param_1 != (FRDGViewableResource *)0x0) {
    if (((((param_2 & ReadOnlyExclusiveMask) != None) && ((param_2 & WritableMask) != None)) ||
        (((param_2 & WriteOnlyExclusiveMask) != None && ((param_2 & ReadableMask) != None)))) ||
       (param_2 == None)) {
      GetRHIAccessName(&local_18,param_2);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidAccess(Access) && Access != ERHIAccess::Unknown",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                         ,0x531,L"Attempted to finalize texture %s with an invalid access %s.");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((param_3 == None) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pipelines != ERHIPipeline::None",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                           ,0x532,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->Resources).ArrayNum;
    piVar1 = &(this->Resources).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                        (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)this,piVar1);
    }
    (this->Resources).ArrayNum = iVar5 + 1;
    pFVar2 = (this->Resources).AllocatorInstance.Data;
    pFVar2[iVar5].Resource = param_1;
    pFVar2[iVar5].Access = param_2;
    pFVar2[iVar5].Pipelines = param_3;
  }
  return;
}

