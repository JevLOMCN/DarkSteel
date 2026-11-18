// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// GetInitializer @ 145a691d0

/* WARNING: Enum "EBlendFactor": Some values do not have unique names */

bool __thiscall
FD3D12BlendState::GetInitializer(FD3D12BlendState *this,FBlendStateInitializerRHI *param_1)

{
  D3D12_BLEND_OP DVar1;
  FD3D12BlendState *pFVar2;
  uchar uVar3;
  EBlendFactor EVar4;
  longlong lVar5;
  FD3D12BlendState *pFVar6;
  TEnumAsByte<EBlendFactor> *pTVar7;
  
  pTVar7 = &(param_1->RenderTargets).Elements[0].ColorDestBlend;
  lVar5 = 8;
  pFVar2 = this;
  do {
    pFVar6 = (FD3D12BlendState *)&(pFVar2->Desc).RenderTarget[0].SrcBlend;
    DVar1 = (pFVar2->Desc).RenderTarget[0].BlendOp;
    if (DVar1 == D3D12_BLEND_OP_SUBTRACT) {
      uVar3 = '\x01';
    }
    else if (DVar1 == D3D12_BLEND_OP_REV_SUBTRACT) {
      uVar3 = '\x04';
    }
    else if (DVar1 == D3D12_BLEND_OP_MIN) {
      uVar3 = '\x02';
    }
    else if (DVar1 == D3D12_BLEND_OP_MAX) {
      uVar3 = '\x03';
    }
    else {
      uVar3 = '\0';
    }
    (((FRenderTarget *)(pTVar7 + -2))->ColorBlendOp).Value = uVar3;
    EVar4 = ReverseTranslateBlendFactor(*(D3D12_BLEND *)pFVar6);
    pTVar7[-1].Value = (uchar)EVar4;
    EVar4 = ReverseTranslateBlendFactor(*(D3D12_BLEND *)((longlong)&pFVar6->_padding_ + 4));
    pTVar7->Value = (uchar)EVar4;
    DVar1 = *(D3D12_BLEND_OP *)((longlong)&pFVar6->_padding_ + 4);
    if (DVar1 == D3D12_BLEND_OP_SUBTRACT) {
      uVar3 = '\x01';
    }
    else if (DVar1 == D3D12_BLEND_OP_REV_SUBTRACT) {
      uVar3 = '\x04';
    }
    else if (DVar1 == D3D12_BLEND_OP_MIN) {
      uVar3 = '\x02';
    }
    else if (DVar1 == D3D12_BLEND_OP_MAX) {
      uVar3 = '\x03';
    }
    else {
      uVar3 = '\0';
    }
    ((TEnumAsByte<EBlendOperation> *)(pTVar7 + 1))->Value = uVar3;
    EVar4 = ReverseTranslateBlendFactor(*(D3D12_BLEND *)((longlong)&pFVar6->_padding_ + 4));
    pTVar7[2].Value = (uchar)EVar4;
    EVar4 = ReverseTranslateBlendFactor(*(D3D12_BLEND *)&pFVar6->_padding_);
    pTVar7[3].Value = (uchar)EVar4;
    ((TEnumAsByte<EColorWriteMask> *)(pTVar7 + 4))->Value =
         (byte)(pFVar6->Desc).IndependentBlendEnable & 0xf;
    pTVar7 = pTVar7 + 7;
    lVar5 = lVar5 + -1;
    pFVar2 = pFVar6;
  } while (lVar5 != 0);
  param_1->bUseIndependentRenderTargetBlendStates = (this->Desc).IndependentBlendEnable != 0;
  param_1->bUseAlphaToCoverage = (this->Desc).AlphaToCoverageEnable != 0;
  return true;
}

