// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// FRHIRenderPassInfo @ 145d8df70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FRHIRenderPassInfo * __thiscall
FRHIRenderPassInfo::FRHIRenderPassInfo(FRHIRenderPassInfo *this,FRHIRenderPassInfo *param_1)

{
  FRHITexture *pFVar1;
  uchar uVar2;
  ERenderTargetActions EVar3;
  undefined2 uVar4;
  int iVar5;
  undefined3 uVar6;
  FExclusiveDepthStencil FVar7;
  int iVar8;
  int iVar9;
  
  pFVar1 = (param_1->ColorRenderTargets).Elements[0].ResolveTarget;
  (this->ColorRenderTargets).Elements[0].RenderTarget =
       (param_1->ColorRenderTargets).Elements[0].RenderTarget;
  (this->ColorRenderTargets).Elements[0].ResolveTarget = pFVar1;
  uVar2 = (param_1->ColorRenderTargets).Elements[0].MipIndex;
  EVar3 = (param_1->ColorRenderTargets).Elements[0].Action;
  uVar4 = *(undefined2 *)&(param_1->ColorRenderTargets).Elements[0].field_0x16;
  pFVar1 = (param_1->ColorRenderTargets).Elements[1].RenderTarget;
  (this->ColorRenderTargets).Elements[0].ArraySlice =
       (param_1->ColorRenderTargets).Elements[0].ArraySlice;
  (this->ColorRenderTargets).Elements[0].MipIndex = uVar2;
  (this->ColorRenderTargets).Elements[0].Action = EVar3;
  *(undefined2 *)&(this->ColorRenderTargets).Elements[0].field_0x16 = uVar4;
  (this->ColorRenderTargets).Elements[1].RenderTarget = pFVar1;
  iVar5 = (param_1->ColorRenderTargets).Elements[1].ArraySlice;
  uVar2 = (param_1->ColorRenderTargets).Elements[1].MipIndex;
  EVar3 = (param_1->ColorRenderTargets).Elements[1].Action;
  uVar4 = *(undefined2 *)&(param_1->ColorRenderTargets).Elements[1].field_0x16;
  (this->ColorRenderTargets).Elements[1].ResolveTarget =
       (param_1->ColorRenderTargets).Elements[1].ResolveTarget;
  (this->ColorRenderTargets).Elements[1].ArraySlice = iVar5;
  (this->ColorRenderTargets).Elements[1].MipIndex = uVar2;
  (this->ColorRenderTargets).Elements[1].Action = EVar3;
  *(undefined2 *)&(this->ColorRenderTargets).Elements[1].field_0x16 = uVar4;
  pFVar1 = (param_1->ColorRenderTargets).Elements[2].ResolveTarget;
  (this->ColorRenderTargets).Elements[2].RenderTarget =
       (param_1->ColorRenderTargets).Elements[2].RenderTarget;
  (this->ColorRenderTargets).Elements[2].ResolveTarget = pFVar1;
  uVar2 = (param_1->ColorRenderTargets).Elements[2].MipIndex;
  EVar3 = (param_1->ColorRenderTargets).Elements[2].Action;
  uVar4 = *(undefined2 *)&(param_1->ColorRenderTargets).Elements[2].field_0x16;
  pFVar1 = (param_1->ColorRenderTargets).Elements[3].RenderTarget;
  (this->ColorRenderTargets).Elements[2].ArraySlice =
       (param_1->ColorRenderTargets).Elements[2].ArraySlice;
  (this->ColorRenderTargets).Elements[2].MipIndex = uVar2;
  (this->ColorRenderTargets).Elements[2].Action = EVar3;
  *(undefined2 *)&(this->ColorRenderTargets).Elements[2].field_0x16 = uVar4;
  (this->ColorRenderTargets).Elements[3].RenderTarget = pFVar1;
  iVar5 = (param_1->ColorRenderTargets).Elements[3].ArraySlice;
  uVar2 = (param_1->ColorRenderTargets).Elements[3].MipIndex;
  EVar3 = (param_1->ColorRenderTargets).Elements[3].Action;
  uVar4 = *(undefined2 *)&(param_1->ColorRenderTargets).Elements[3].field_0x16;
  (this->ColorRenderTargets).Elements[3].ResolveTarget =
       (param_1->ColorRenderTargets).Elements[3].ResolveTarget;
  (this->ColorRenderTargets).Elements[3].ArraySlice = iVar5;
  (this->ColorRenderTargets).Elements[3].MipIndex = uVar2;
  (this->ColorRenderTargets).Elements[3].Action = EVar3;
  *(undefined2 *)&(this->ColorRenderTargets).Elements[3].field_0x16 = uVar4;
  pFVar1 = (param_1->ColorRenderTargets).Elements[4].ResolveTarget;
  (this->ColorRenderTargets).Elements[4].RenderTarget =
       (param_1->ColorRenderTargets).Elements[4].RenderTarget;
  (this->ColorRenderTargets).Elements[4].ResolveTarget = pFVar1;
  uVar2 = (param_1->ColorRenderTargets).Elements[4].MipIndex;
  EVar3 = (param_1->ColorRenderTargets).Elements[4].Action;
  uVar4 = *(undefined2 *)&(param_1->ColorRenderTargets).Elements[4].field_0x16;
  pFVar1 = (param_1->ColorRenderTargets).Elements[5].RenderTarget;
  (this->ColorRenderTargets).Elements[4].ArraySlice =
       (param_1->ColorRenderTargets).Elements[4].ArraySlice;
  (this->ColorRenderTargets).Elements[4].MipIndex = uVar2;
  (this->ColorRenderTargets).Elements[4].Action = EVar3;
  *(undefined2 *)&(this->ColorRenderTargets).Elements[4].field_0x16 = uVar4;
  (this->ColorRenderTargets).Elements[5].RenderTarget = pFVar1;
  iVar5 = (param_1->ColorRenderTargets).Elements[5].ArraySlice;
  uVar2 = (param_1->ColorRenderTargets).Elements[5].MipIndex;
  EVar3 = (param_1->ColorRenderTargets).Elements[5].Action;
  uVar4 = *(undefined2 *)&(param_1->ColorRenderTargets).Elements[5].field_0x16;
  (this->ColorRenderTargets).Elements[5].ResolveTarget =
       (param_1->ColorRenderTargets).Elements[5].ResolveTarget;
  (this->ColorRenderTargets).Elements[5].ArraySlice = iVar5;
  (this->ColorRenderTargets).Elements[5].MipIndex = uVar2;
  (this->ColorRenderTargets).Elements[5].Action = EVar3;
  *(undefined2 *)&(this->ColorRenderTargets).Elements[5].field_0x16 = uVar4;
  pFVar1 = (param_1->ColorRenderTargets).Elements[6].ResolveTarget;
  (this->ColorRenderTargets).Elements[6].RenderTarget =
       (param_1->ColorRenderTargets).Elements[6].RenderTarget;
  (this->ColorRenderTargets).Elements[6].ResolveTarget = pFVar1;
  uVar2 = (param_1->ColorRenderTargets).Elements[6].MipIndex;
  EVar3 = (param_1->ColorRenderTargets).Elements[6].Action;
  uVar4 = *(undefined2 *)&(param_1->ColorRenderTargets).Elements[6].field_0x16;
  pFVar1 = (param_1->ColorRenderTargets).Elements[7].RenderTarget;
  (this->ColorRenderTargets).Elements[6].ArraySlice =
       (param_1->ColorRenderTargets).Elements[6].ArraySlice;
  (this->ColorRenderTargets).Elements[6].MipIndex = uVar2;
  (this->ColorRenderTargets).Elements[6].Action = EVar3;
  *(undefined2 *)&(this->ColorRenderTargets).Elements[6].field_0x16 = uVar4;
  (this->ColorRenderTargets).Elements[7].RenderTarget = pFVar1;
  iVar5 = (param_1->ColorRenderTargets).Elements[7].ArraySlice;
  uVar2 = (param_1->ColorRenderTargets).Elements[7].MipIndex;
  EVar3 = (param_1->ColorRenderTargets).Elements[7].Action;
  uVar4 = *(undefined2 *)&(param_1->ColorRenderTargets).Elements[7].field_0x16;
  (this->ColorRenderTargets).Elements[7].ResolveTarget =
       (param_1->ColorRenderTargets).Elements[7].ResolveTarget;
  (this->ColorRenderTargets).Elements[7].ArraySlice = iVar5;
  (this->ColorRenderTargets).Elements[7].MipIndex = uVar2;
  (this->ColorRenderTargets).Elements[7].Action = EVar3;
  *(undefined2 *)&(this->ColorRenderTargets).Elements[7].field_0x16 = uVar4;
  pFVar1 = (param_1->DepthStencilRenderTarget).ResolveTarget;
  (this->DepthStencilRenderTarget).DepthStencilTarget =
       (param_1->DepthStencilRenderTarget).DepthStencilTarget;
  (this->DepthStencilRenderTarget).ResolveTarget = pFVar1;
  uVar6 = *(undefined3 *)&(param_1->DepthStencilRenderTarget).field_0x11;
  FVar7.Value = (param_1->DepthStencilRenderTarget).ExclusiveDepthStencil.Value;
  (this->DepthStencilRenderTarget).Action = (param_1->DepthStencilRenderTarget).Action;
  *(undefined3 *)&(this->DepthStencilRenderTarget).field_0x11 = uVar6;
  (this->DepthStencilRenderTarget).ExclusiveDepthStencil = (FExclusiveDepthStencil)FVar7.Value;
  iVar5 = (param_1->ResolveRect).Y1;
  iVar8 = (param_1->ResolveRect).X2;
  iVar9 = (param_1->ResolveRect).Y2;
  (this->ResolveRect).X1 = (param_1->ResolveRect).X1;
  (this->ResolveRect).Y1 = iVar5;
  (this->ResolveRect).X2 = iVar8;
  (this->ResolveRect).Y2 = iVar9;
  (this->ShadingRateTexture).Reference = (FRHITexture *)0x0;
  pFVar1 = (param_1->ShadingRateTexture).Reference;
  (this->ShadingRateTexture).Reference = pFVar1;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar1);
  }
  this->ShadingRateTextureCombiner = param_1->ShadingRateTextureCombiner;
  this->NopAccess = param_1->NopAccess;
  this->NumOcclusionQueries = param_1->NumOcclusionQueries;
  this->bOcclusionQueries = param_1->bOcclusionQueries;
  this->MultiViewCount = param_1->MultiViewCount;
  this->SubpassHint = param_1->SubpassHint;
  return this;
}

