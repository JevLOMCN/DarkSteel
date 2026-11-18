// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiserShaders
// Functions: 2

// TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FNumMappedChannels> @ 14ead3580

TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FNumMappedChannels>
* __thiscall
TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FNumMappedChannels>
::
TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FNumMappedChannels>
          (TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FNumMappedChannels>
           *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FNumMappedChannels>
  *pTVar5;
  int iVar6;
  
  uVar2 = param_1 / 5;
  iVar6 = param_1 % 5;
  if ((4 < iVar6) || (iVar6 < 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId < PermutationCount && PermutationId >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x77,L"Invalid shader permutation dimension value id %i.");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FNumMappedChannels>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  this->DimensionValue = (EDataType)iVar6;
  uVar3 = (int)uVar2 / 5;
  iVar6 = (int)uVar2 % 5;
  if ((4 < iVar6) || (iVar6 < 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId < PermutationCount && PermutationId >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x77,L"Invalid shader permutation dimension value id %i.");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FNumMappedChannels>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  (this->Tail).DimensionValue = (EDataType)iVar6;
  iVar6 = (int)uVar3 % 5;
  if ((4 < iVar6) || (iVar6 < 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId < PermutationCount && PermutationId >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x77,L"Invalid shader permutation dimension value id %i.");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FNumMappedChannels>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  (this->Tail).Tail.DimensionValue = iVar6;
  if ((int)uVar3 / 5 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0xf6,L"Invalid shader permutation id %i.");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FNumMappedChannels>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  if (4 < uVar3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId >= 0 && PermutationId < PermutationCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x188,L"Invalid shader permutation id %i.");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FNumMappedChannels>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  if (0x18 < uVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId >= 0 && PermutationId < PermutationCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x188,L"Invalid shader permutation id %i.");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FNumMappedChannels>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  if (0x7c < (uint)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId >= 0 && PermutationId < PermutationCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x188,L"Invalid shader permutation id %i.");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FNumMappedChannels>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  return this;
}

// TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FNumMappedChannels> @ 14ead3780

TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FNumMappedChannels>
* __thiscall
TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FNumMappedChannels>
::
TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FNumMappedChannels>
          (TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FNumMappedChannels>
           *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FNumMappedChannels>
  *pTVar5;
  int iVar6;
  
  uVar2 = param_1 / 5;
  iVar6 = param_1 % 5;
  if ((4 < iVar6) || (iVar6 < 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId < PermutationCount && PermutationId >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x77,L"Invalid shader permutation dimension value id %i.");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FNumMappedChannels>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  this->DimensionValue = (EDataType)iVar6;
  uVar3 = (int)uVar2 / 5;
  iVar6 = (int)uVar2 % 5;
  if ((4 < iVar6) || (iVar6 < 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId < PermutationCount && PermutationId >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x77,L"Invalid shader permutation dimension value id %i.");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FNumMappedChannels>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  (this->Tail).DimensionValue = (EDataType)iVar6;
  iVar6 = (int)uVar3 % 5;
  if ((4 < iVar6) || (iVar6 < 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId < PermutationCount && PermutationId >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x77,L"Invalid shader permutation dimension value id %i.");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FNumMappedChannels>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  (this->Tail).Tail.DimensionValue = iVar6;
  if ((int)uVar3 / 5 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0xf6,L"Invalid shader permutation id %i.");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FNumMappedChannels>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  if (4 < uVar3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId >= 0 && PermutationId < PermutationCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x188,L"Invalid shader permutation id %i.");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FNumMappedChannels>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  if (0x18 < uVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId >= 0 && PermutationId < PermutationCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x188,L"Invalid shader permutation id %i.");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FNumMappedChannels>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  if (0x7c < (uint)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId >= 0 && PermutationId < PermutationCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x188,L"Invalid shader permutation id %i.");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderPermutationDomain<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FInputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FOutputDataType,UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FNumMappedChannels>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  return this;
}

