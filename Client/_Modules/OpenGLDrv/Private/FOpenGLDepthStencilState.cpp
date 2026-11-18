// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 1

// GetInitializer @ 145c02170

/* WARNING: Enum "ECompareFunction": Some values do not have unique names */
/* WARNING: Enum "EStencilOp": Some values do not have unique names */

bool __thiscall
FOpenGLDepthStencilState::GetInitializer
          (FOpenGLDepthStencilState *this,FDepthStencilStateInitializerRHI *param_1)

{
  ECompareFunction EVar1;
  EStencilOp EVar2;
  
  param_1->bEnableBackFaceStencil = (this->Data).bTwoSidedStencilMode;
  param_1->bEnableFrontFaceStencil = (this->Data).bStencilEnable;
  param_1->bEnableDepthWrite = (this->Data).bZWriteEnable;
  param_1->StencilReadMask = (uchar)(this->Data).StencilReadMask;
  param_1->StencilWriteMask = (uchar)(this->Data).StencilWriteMask;
  EVar1 = TranslateCompareFunction((this->Data).ZFunc);
  (param_1->DepthTest).Value = (uchar)EVar1;
  EVar1 = TranslateCompareFunction((this->Data).StencilFunc);
  (param_1->FrontFaceStencilTest).Value = (uchar)EVar1;
  EVar2 = TranslateStencilOp((this->Data).StencilFail);
  (param_1->FrontFaceStencilFailStencilOp).Value = (uchar)EVar2;
  EVar2 = TranslateStencilOp((this->Data).StencilZFail);
  (param_1->FrontFaceDepthFailStencilOp).Value = (uchar)EVar2;
  EVar2 = TranslateStencilOp((this->Data).StencilPass);
  (param_1->FrontFacePassStencilOp).Value = (uchar)EVar2;
  EVar1 = TranslateCompareFunction((this->Data).CCWStencilFunc);
  (param_1->BackFaceStencilTest).Value = (uchar)EVar1;
  EVar2 = TranslateStencilOp((this->Data).CCWStencilFail);
  (param_1->BackFaceStencilFailStencilOp).Value = (uchar)EVar2;
  EVar2 = TranslateStencilOp((this->Data).CCWStencilZFail);
  (param_1->BackFaceDepthFailStencilOp).Value = (uchar)EVar2;
  EVar2 = TranslateStencilOp((this->Data).CCWStencilPass);
  (param_1->BackFacePassStencilOp).Value = (uchar)EVar2;
  return true;
}

