// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FRHIRenderPassInfo @ 1480f4780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FRHIRenderPassInfo * __thiscall
FRHIRenderPassInfo::FRHIRenderPassInfo
          (FRHIRenderPassInfo *this,int param_1,FRHITexture **param_2,ERenderTargetActions param_3)

{
  FRHITexture **ppFVar1;
  code *pcVar2;
  bool bVar3;
  FRHIRenderPassInfo *pFVar4;
  longlong lVar5;
  ERenderTargetActions *pEVar6;
  
  TStaticArray<FRHIRenderPassInfo::FColorEntry,8,4294967295>::
  TStaticArray<FRHIRenderPassInfo::FColorEntry,8,4294967295>(&this->ColorRenderTargets);
  lVar5 = 0;
  (this->ResolveRect).X1 = -1;
  (this->ResolveRect).Y1 = -1;
  (this->DepthStencilRenderTarget).DepthStencilTarget = (FRHITexture *)0x0;
  (this->DepthStencilRenderTarget).ResolveTarget = (FRHITexture *)0x0;
  (this->DepthStencilRenderTarget).Action = DontLoad_DontStore;
  (this->DepthStencilRenderTarget).ExclusiveDepthStencil.Value = DepthNop;
  (this->ResolveRect).X2 = -1;
  (this->ResolveRect).Y2 = -1;
  (this->ShadingRateTexture).Reference = (FRHITexture *)0x0;
  this->ShadingRateTextureCombiner = VRSRB_Passthrough;
  this->NopAccess = None;
  this->NumOcclusionQueries = 0;
  this->bOcclusionQueries = false;
  this->MultiViewCount = '\0';
  this->SubpassHint = None;
  if ((param_1 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumColorRTs > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0x14bb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FRHIRenderPassInfo *)(*pcVar2)();
    return pFVar4;
  }
  if (0 < param_1) {
    pEVar6 = &(this->ColorRenderTargets).Elements[0].Action;
    do {
      if ((param_2[lVar5] == (FRHITexture *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ColorRTs[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0x14be,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FRHIRenderPassInfo *)(*pcVar2)();
        return pFVar4;
      }
      ppFVar1 = param_2 + lVar5;
      lVar5 = lVar5 + 1;
      ((FColorEntry *)(pEVar6 + -0x15))->RenderTarget = *ppFVar1;
      *(int *)(pEVar6 + -5) = -1;
      *pEVar6 = param_3;
      pEVar6 = pEVar6 + 0x18;
    } while (lVar5 < param_1);
  }
  (this->DepthStencilRenderTarget).DepthStencilTarget = (FRHITexture *)0x0;
  (this->DepthStencilRenderTarget).Action = DontLoad_DontStore;
  (this->DepthStencilRenderTarget).ExclusiveDepthStencil.Value = DepthNop;
  (this->DepthStencilRenderTarget).ResolveTarget = (FRHITexture *)0x0;
  return this;
}

