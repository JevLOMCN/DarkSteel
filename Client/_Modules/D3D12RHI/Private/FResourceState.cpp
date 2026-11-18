// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// FResourceState @ 1459f57f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FResourceState * __thiscall
UE::RHICore::FResourceState::FResourceState
          (FResourceState *this,IRHIComputeContext *param_1,ERHIPipeline param_2,
          ERHIPipeline param_3,FRHITransitionInfo *param_4)

{
  ERHIPipeline EVar1;
  code *pcVar2;
  ERHIPipeline EVar3;
  bool bVar4;
  FRHIViewableResource *pFVar5;
  FResourceState *pFVar6;
  ERHIAccess EVar7;
  
  this->AccessBefore = param_4->AccessBefore;
  this->AccessAfter = param_4->AccessAfter;
  this->SrcPipelines = param_2;
  this->DstPipelines = param_3;
  pFVar5 = GetViewableResource(param_4);
  if (pFVar5 != (FRHIViewableResource *)0x0) {
    EVar7 = this->AccessBefore;
    if ((EVar7 == None) ||
       ((EVar7 == Discard && (GRHIGlobals.NeedsTransientDiscardStateTracking != false)))) {
      EVar1 = (pFVar5->TrackedAccess).Pipelines;
      EVar3 = Graphics;
      if (EVar1 != None) {
        EVar3 = EVar1;
      }
      this->SrcPipelines = EVar3;
      EVar7 = (pFVar5->TrackedAccess).Access;
      this->AccessBefore = EVar7;
    }
    if (this->AccessAfter == None) {
      this->AccessAfter = (pFVar5->TrackedAccess).Access;
    }
    if (EVar7 == None) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AccessBefore != ERHIAccess::Unknown",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\RHICoreTransitions.h"
                         ,0x20,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FResourceState *)(*pcVar2)();
        return pFVar6;
      }
    }
    if (this->AccessAfter == None) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AccessAfter != ERHIAccess::Unknown",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\RHICoreTransitions.h"
                         ,0x21,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FResourceState *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  return this;
}

