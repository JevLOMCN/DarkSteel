// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 1

// GetInitializer @ 145c02130

bool __thiscall
FOpenGLBlendState::GetInitializer(FOpenGLBlendState *this,FBlendStateInitializerRHI *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  
  uVar1 = *(undefined8 *)&(this->RHIInitializer).RenderTargets.Elements[1].ColorSrcBlend;
  *(undefined8 *)(param_1->RenderTargets).Elements =
       *(undefined8 *)(this->RHIInitializer).RenderTargets.Elements;
  *(undefined8 *)&(param_1->RenderTargets).Elements[1].ColorSrcBlend = uVar1;
  uVar1 = *(undefined8 *)&(this->RHIInitializer).RenderTargets.Elements[3].AlphaBlendOp;
  *(undefined8 *)&(param_1->RenderTargets).Elements[2].ColorDestBlend =
       *(undefined8 *)&(this->RHIInitializer).RenderTargets.Elements[2].ColorDestBlend;
  *(undefined8 *)&(param_1->RenderTargets).Elements[3].AlphaBlendOp = uVar1;
  uVar1 = *(undefined8 *)&(this->RHIInitializer).RenderTargets.Elements[5].AlphaDestBlend;
  *(undefined8 *)&(param_1->RenderTargets).Elements[4].AlphaSrcBlend =
       *(undefined8 *)&(this->RHIInitializer).RenderTargets.Elements[4].AlphaSrcBlend;
  *(undefined8 *)&(param_1->RenderTargets).Elements[5].AlphaDestBlend = uVar1;
  *(undefined8 *)&(param_1->RenderTargets).Elements[6].ColorWriteMask =
       *(undefined8 *)&(this->RHIInitializer).RenderTargets.Elements[6].ColorWriteMask;
  bVar2 = (this->RHIInitializer).bUseAlphaToCoverage;
  param_1->bUseIndependentRenderTargetBlendStates =
       (this->RHIInitializer).bUseIndependentRenderTargetBlendStates;
  param_1->bUseAlphaToCoverage = bVar2;
  return true;
}

