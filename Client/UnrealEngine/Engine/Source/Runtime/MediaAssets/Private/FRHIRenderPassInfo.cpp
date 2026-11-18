// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 1

// FRHIRenderPassInfo @ 146c1caf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FRHIRenderPassInfo * __thiscall
FRHIRenderPassInfo::FRHIRenderPassInfo
          (FRHIRenderPassInfo *this,FRHITexture *param_1,ERenderTargetActions param_2,
          FRHITexture *param_3,uchar param_4,int param_5)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FRHIRenderPassInfo *pFVar4;
  
  (this->ColorRenderTargets).Elements[0].ArraySlice = -1;
  (this->ColorRenderTargets).Elements[0].RenderTarget = (FRHITexture *)0x0;
  (this->ColorRenderTargets).Elements[0].ResolveTarget = (FRHITexture *)0x0;
  (this->ColorRenderTargets).Elements[0].MipIndex = '\0';
  (this->ColorRenderTargets).Elements[0].Action = DontLoad_DontStore;
  (this->ColorRenderTargets).Elements[1].RenderTarget = (FRHITexture *)0x0;
  (this->ColorRenderTargets).Elements[1].ResolveTarget = (FRHITexture *)0x0;
  (this->ColorRenderTargets).Elements[1].ArraySlice = -1;
  (this->ColorRenderTargets).Elements[1].MipIndex = '\0';
  (this->ColorRenderTargets).Elements[1].Action = DontLoad_DontStore;
  (this->ColorRenderTargets).Elements[2].RenderTarget = (FRHITexture *)0x0;
  (this->ColorRenderTargets).Elements[2].ResolveTarget = (FRHITexture *)0x0;
  (this->ColorRenderTargets).Elements[2].ArraySlice = -1;
  (this->ColorRenderTargets).Elements[2].MipIndex = '\0';
  (this->ColorRenderTargets).Elements[2].Action = DontLoad_DontStore;
  (this->ColorRenderTargets).Elements[3].RenderTarget = (FRHITexture *)0x0;
  (this->ColorRenderTargets).Elements[3].ResolveTarget = (FRHITexture *)0x0;
  (this->ColorRenderTargets).Elements[3].ArraySlice = -1;
  (this->ColorRenderTargets).Elements[3].MipIndex = '\0';
  (this->ColorRenderTargets).Elements[3].Action = DontLoad_DontStore;
  (this->ColorRenderTargets).Elements[4].RenderTarget = (FRHITexture *)0x0;
  (this->ColorRenderTargets).Elements[4].ResolveTarget = (FRHITexture *)0x0;
  (this->ColorRenderTargets).Elements[4].ArraySlice = -1;
  (this->ColorRenderTargets).Elements[4].MipIndex = '\0';
  (this->ColorRenderTargets).Elements[4].Action = DontLoad_DontStore;
  (this->ColorRenderTargets).Elements[5].RenderTarget = (FRHITexture *)0x0;
  (this->ColorRenderTargets).Elements[5].ResolveTarget = (FRHITexture *)0x0;
  (this->ColorRenderTargets).Elements[5].ArraySlice = -1;
  (this->ColorRenderTargets).Elements[5].MipIndex = '\0';
  (this->ColorRenderTargets).Elements[5].Action = DontLoad_DontStore;
  (this->ColorRenderTargets).Elements[6].RenderTarget = (FRHITexture *)0x0;
  (this->ColorRenderTargets).Elements[6].ResolveTarget = (FRHITexture *)0x0;
  (this->ColorRenderTargets).Elements[6].ArraySlice = -1;
  (this->ColorRenderTargets).Elements[6].MipIndex = '\0';
  (this->ColorRenderTargets).Elements[6].Action = DontLoad_DontStore;
  (this->ColorRenderTargets).Elements[7].RenderTarget = (FRHITexture *)0x0;
  (this->ColorRenderTargets).Elements[7].ResolveTarget = (FRHITexture *)0x0;
  (this->ColorRenderTargets).Elements[7].ArraySlice = -1;
  (this->ColorRenderTargets).Elements[7].MipIndex = '\0';
  (this->ColorRenderTargets).Elements[7].Action = DontLoad_DontStore;
  (this->DepthStencilRenderTarget).DepthStencilTarget = (FRHITexture *)0x0;
  (this->DepthStencilRenderTarget).ResolveTarget = (FRHITexture *)0x0;
  (this->DepthStencilRenderTarget).Action = DontLoad_DontStore;
  (this->DepthStencilRenderTarget).ExclusiveDepthStencil.Value = DepthNop;
  (this->ResolveRect).X1 = -1;
  (this->ResolveRect).Y1 = -1;
  (this->ResolveRect).X2 = -1;
  (this->ResolveRect).Y2 = -1;
  (this->ShadingRateTexture).Reference = (FRHITexture *)0x0;
  this->ShadingRateTextureCombiner = VRSRB_Passthrough;
  this->NopAccess = None;
  this->NumOcclusionQueries = 0;
  this->bOcclusionQueries = false;
  this->MultiViewCount = '\0';
  this->SubpassHint = None;
  if (param_3 != (FRHITexture *)0x0) {
    lVar3 = (**(code **)(param_3->_padding_ + 0x20))(param_3);
    if (1 < *(byte *)(lVar3 + 0x31)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!(ResolveRT && ResolveRT->IsMultisampled())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0x14af,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FRHIRenderPassInfo *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  if (param_1 == (FRHITexture *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ColorRT",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x14b0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRHIRenderPassInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  (this->ColorRenderTargets).Elements[0].RenderTarget = param_1;
  (this->ColorRenderTargets).Elements[0].ResolveTarget = param_3;
  (this->ColorRenderTargets).Elements[0].ArraySlice = param_5;
  (this->ColorRenderTargets).Elements[0].MipIndex = param_4;
  (this->ColorRenderTargets).Elements[0].Action = param_2;
  return this;
}

