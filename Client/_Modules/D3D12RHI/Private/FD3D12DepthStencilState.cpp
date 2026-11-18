// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// GetInitializer @ 145a692c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ECompareFunction": Some values do not have unique names */
/* WARNING: Enum "EStencilOp": Some values do not have unique names */

bool __thiscall
FD3D12DepthStencilState::GetInitializer
          (FD3D12DepthStencilState *this,FDepthStencilStateInitializerRHI *param_1)

{
  D3D12_DEPTH_STENCIL_DESC1 *pDVar1;
  bool bVar2;
  ECompareFunction EVar3;
  EStencilOp EVar4;
  D3D12_STENCIL_OP *pDVar5;
  D3D12_DEPTH_STENCILOP_DESC *pDVar6;
  
  param_1->bEnableDepthWrite = (this->Desc).DepthWriteMask != D3D12_DEPTH_WRITE_MASK_ZERO;
  EVar3 = ReverseTranslateCompareFunction((this->Desc).DepthFunc);
  (param_1->DepthTest).Value = (uchar)EVar3;
  param_1->bEnableFrontFaceStencil = (this->Desc).StencilEnable != 0;
  EVar3 = ReverseTranslateCompareFunction((this->Desc).FrontFace.StencilFunc);
  (param_1->FrontFaceStencilTest).Value = (uchar)EVar3;
  EVar4 = ReverseTranslateStencilOp((this->Desc).FrontFace.StencilFailOp);
  (param_1->FrontFaceStencilFailStencilOp).Value = (uchar)EVar4;
  EVar4 = ReverseTranslateStencilOp((this->Desc).FrontFace.StencilDepthFailOp);
  (param_1->FrontFaceDepthFailStencilOp).Value = (uchar)EVar4;
  EVar4 = ReverseTranslateStencilOp((this->Desc).FrontFace.StencilPassOp);
  (param_1->FrontFacePassStencilOp).Value = (uchar)EVar4;
  if (((this->Desc).StencilEnable == 0) ||
     (((((this->Desc).FrontFace.StencilFunc == (this->Desc).BackFace.StencilFunc &&
        ((this->Desc).FrontFace.StencilFailOp == (this->Desc).BackFace.StencilFailOp)) &&
       ((this->Desc).FrontFace.StencilDepthFailOp == (this->Desc).BackFace.StencilDepthFailOp)) &&
      ((this->Desc).FrontFace.StencilPassOp == (this->Desc).BackFace.StencilPassOp)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  pDVar6 = &(this->Desc).BackFace;
  pDVar5 = &(this->Desc).BackFace.StencilDepthFailOp;
  pDVar1 = &this->Desc;
  param_1->bEnableBackFaceStencil = bVar2;
  EVar3 = ReverseTranslateCompareFunction((this->Desc).BackFace.StencilFunc);
  (param_1->BackFaceStencilTest).Value = (uchar)EVar3;
  EVar4 = ReverseTranslateStencilOp(pDVar6->StencilFailOp);
  (param_1->BackFaceStencilFailStencilOp).Value = (uchar)EVar4;
  EVar4 = ReverseTranslateStencilOp(*pDVar5);
  (param_1->BackFaceDepthFailStencilOp).Value = (uchar)EVar4;
  EVar4 = ReverseTranslateStencilOp((pDVar1->BackFace).StencilPassOp);
  (param_1->BackFacePassStencilOp).Value = (uchar)EVar4;
  param_1->StencilReadMask = (this->Desc).StencilReadMask;
  param_1->StencilWriteMask = (this->Desc).StencilWriteMask;
  return true;
}

