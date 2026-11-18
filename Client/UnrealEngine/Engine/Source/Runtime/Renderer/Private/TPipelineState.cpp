// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// operator[]<bool> @ 1447e1d90

bool * __thiscall
TPipelineState<FDeferredShadingSceneRenderer::FFamilyPipelineState>::operator[]<bool>
          (TPipelineState<FDeferredShadingSceneRenderer::FFamilyPipelineState> *this,
          pdm_8386c0de param_1)

{
  code *pcVar1;
  bool bVar2;
  bool *pbVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(int)param_1;
  if (uVar4 < this->InitializedOffset) {
    return &(this->Vector).bRayTracingShadows + uVar4;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ByteOffset < InitializedOffset",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DeferredShadingRenderer.h"
                     ,0xdc,L"This dimension has not been initialized yet.");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pbVar3 = (bool *)(*pcVar1)();
    return pbVar3;
  }
  return &(this->Vector).bRayTracingShadows + uVar4;
}

// operator* @ 1447fa050

FPerViewPipelineState * __thiscall
TPipelineState<FDeferredShadingSceneRenderer::FPerViewPipelineState>::operator*
          (TPipelineState<FDeferredShadingSceneRenderer::FPerViewPipelineState> *this)

{
  code *pcVar1;
  bool bVar2;
  FPerViewPipelineState *pFVar3;
  
  if (this->InitializedOffset != 0xffffffffffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCommitted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DeferredShadingRenderer.h"
                       ,0xed,
                       L"The pipeline state needs to be fully commited before being able to reference directly the pipeline state structure."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPerViewPipelineState *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->Vector;
}

