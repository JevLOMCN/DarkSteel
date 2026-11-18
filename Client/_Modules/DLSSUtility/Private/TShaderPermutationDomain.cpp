// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSSUtility
// Functions: 2

// TShaderPermutationDomain<FDiffuseSpecularAlbedoDim,FForceDisableSubsurfaceCheckerboardDim,FPassthroughDim,FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim> @ 14de07540

TShaderPermutationDomain<FDiffuseSpecularAlbedoDim,FForceDisableSubsurfaceCheckerboardDim,FPassthroughDim,FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim>
* __thiscall
TShaderPermutationDomain<FDiffuseSpecularAlbedoDim,FForceDisableSubsurfaceCheckerboardDim,FPassthroughDim,FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim>
::
TShaderPermutationDomain<FDiffuseSpecularAlbedoDim,FForceDisableSubsurfaceCheckerboardDim,FPassthroughDim,FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim>
          (TShaderPermutationDomain<FDiffuseSpecularAlbedoDim,FForceDisableSubsurfaceCheckerboardDim,FPassthroughDim,FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TShaderPermutationDomain<FDiffuseSpecularAlbedoDim,FForceDisableSubsurfaceCheckerboardDim,FPassthroughDim,FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim>
  *pTVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_1 / 2;
  iVar4 = param_1 % 2;
  if (((iVar4 != 0) && (iVar4 != 1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TShaderPermutationDomain<FDiffuseSpecularAlbedoDim,FForceDisableSubsurfaceCheckerboardDim,FPassthroughDim,FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim>
              *)(*pcVar1)();
    return pTVar3;
  }
  this->DimensionValue = iVar4 == 1;
  uVar5 = uVar6 & 0x80000001;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
  }
  if (((uVar5 != 0) && (uVar5 != 1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TShaderPermutationDomain<FDiffuseSpecularAlbedoDim,FForceDisableSubsurfaceCheckerboardDim,FPassthroughDim,FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim>
              *)(*pcVar1)();
    return pTVar3;
  }
  (this->Tail).DimensionValue = uVar5 == 1;
  uVar5 = (int)uVar6 / 2;
  iVar4 = (int)uVar5 % 2;
  if (((iVar4 != 0) && (iVar4 != 1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TShaderPermutationDomain<FDiffuseSpecularAlbedoDim,FForceDisableSubsurfaceCheckerboardDim,FPassthroughDim,FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim>
              *)(*pcVar1)();
    return pTVar3;
  }
  (this->Tail).Tail.DimensionValue = iVar4 == 1;
  TShaderPermutationDomain<FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim>::
  TShaderPermutationDomain<FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim>
            (&(this->Tail).Tail.Tail,(int)uVar5 / 2);
  if ((0xf < uVar5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TShaderPermutationDomain<FDiffuseSpecularAlbedoDim,FForceDisableSubsurfaceCheckerboardDim,FPassthroughDim,FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim>
              *)(*pcVar1)();
    return pTVar3;
  }
  if ((0x1f < uVar6) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TShaderPermutationDomain<FDiffuseSpecularAlbedoDim,FForceDisableSubsurfaceCheckerboardDim,FPassthroughDim,FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim>
              *)(*pcVar1)();
    return pTVar3;
  }
  if ((0x3f < (uint)param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TShaderPermutationDomain<FDiffuseSpecularAlbedoDim,FForceDisableSubsurfaceCheckerboardDim,FPassthroughDim,FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim>
              *)(*pcVar1)();
    return pTVar3;
  }
  return this;
}

// TShaderPermutationDomain<FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim> @ 14de07710

TShaderPermutationDomain<FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim> * __thiscall
TShaderPermutationDomain<FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim>::
TShaderPermutationDomain<FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim>
          (TShaderPermutationDomain<FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  TShaderPermutationDomain<FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim> *pTVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_1 / 2;
  iVar4 = param_1 % 2;
  if (((iVar4 != 0) && (iVar4 != 1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TShaderPermutationDomain<FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim> *)
             (*pcVar1)();
    return pTVar3;
  }
  this->DimensionValue = iVar4 == 1;
  uVar5 = uVar6 & 0x80000001;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
  }
  if (((uVar5 != 0) && (uVar5 != 1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TShaderPermutationDomain<FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim> *)
             (*pcVar1)();
    return pTVar3;
  }
  (this->Tail).DimensionValue = uVar5 == 1;
  uVar5 = (int)uVar6 / 2;
  iVar4 = (int)uVar5 % 2;
  if (((iVar4 != 0) && (iVar4 != 1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TShaderPermutationDomain<FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim> *)
             (*pcVar1)();
    return pTVar3;
  }
  (this->Tail).Tail.DimensionValue = iVar4 == 1;
  if (((int)uVar5 / 2 != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0xf6,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TShaderPermutationDomain<FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim> *)
             (*pcVar1)();
    return pTVar3;
  }
  if ((1 < uVar5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TShaderPermutationDomain<FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim> *)
             (*pcVar1)();
    return pTVar3;
  }
  if ((3 < uVar6) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TShaderPermutationDomain<FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim> *)
             (*pcVar1)();
    return pTVar3;
  }
  if ((7 < (uint)param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TShaderPermutationDomain<FOutputSpecularHitTDim,FOutputSSSTDim,FOutputDOFTDim> *)
             (*pcVar1)();
    return pTVar3;
  }
  return this;
}

