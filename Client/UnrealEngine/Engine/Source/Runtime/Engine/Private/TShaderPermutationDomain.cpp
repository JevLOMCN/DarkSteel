// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// TShaderPermutationDomain<FGPUSkinCacheCS::FBoneWeight16Dim,FGPUSkinCacheCS::FBoneIndex16Dim,FGPUSkinCacheCS::FApexClothDim,FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim> @ 147c2b8b0

TShaderPermutationDomain<FGPUSkinCacheCS::FBoneWeight16Dim,FGPUSkinCacheCS::FBoneIndex16Dim,FGPUSkinCacheCS::FApexClothDim,FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
* __thiscall
TShaderPermutationDomain<FGPUSkinCacheCS::FBoneWeight16Dim,FGPUSkinCacheCS::FBoneIndex16Dim,FGPUSkinCacheCS::FApexClothDim,FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
::
TShaderPermutationDomain<FGPUSkinCacheCS::FBoneWeight16Dim,FGPUSkinCacheCS::FBoneIndex16Dim,FGPUSkinCacheCS::FApexClothDim,FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
          (TShaderPermutationDomain<FGPUSkinCacheCS::FBoneWeight16Dim,FGPUSkinCacheCS::FBoneIndex16Dim,FGPUSkinCacheCS::FApexClothDim,FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TShaderPermutationDomain<FGPUSkinCacheCS::FBoneWeight16Dim,FGPUSkinCacheCS::FBoneIndex16Dim,FGPUSkinCacheCS::FApexClothDim,FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
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
    pTVar3 = (TShaderPermutationDomain<FGPUSkinCacheCS::FBoneWeight16Dim,FGPUSkinCacheCS::FBoneIndex16Dim,FGPUSkinCacheCS::FApexClothDim,FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
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
    pTVar3 = (TShaderPermutationDomain<FGPUSkinCacheCS::FBoneWeight16Dim,FGPUSkinCacheCS::FBoneIndex16Dim,FGPUSkinCacheCS::FApexClothDim,FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
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
    pTVar3 = (TShaderPermutationDomain<FGPUSkinCacheCS::FBoneWeight16Dim,FGPUSkinCacheCS::FBoneIndex16Dim,FGPUSkinCacheCS::FApexClothDim,FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
              *)(*pcVar1)();
    return pTVar3;
  }
  (this->Tail).Tail.DimensionValue = iVar4 == 1;
  TShaderPermutationDomain<FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
  ::
  TShaderPermutationDomain<FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
            (&(this->Tail).Tail.Tail,(int)uVar5 / 2);
  if ((0xf < uVar5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TShaderPermutationDomain<FGPUSkinCacheCS::FBoneWeight16Dim,FGPUSkinCacheCS::FBoneIndex16Dim,FGPUSkinCacheCS::FApexClothDim,FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
              *)(*pcVar1)();
    return pTVar3;
  }
  if ((0x1f < uVar6) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TShaderPermutationDomain<FGPUSkinCacheCS::FBoneWeight16Dim,FGPUSkinCacheCS::FBoneIndex16Dim,FGPUSkinCacheCS::FApexClothDim,FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
              *)(*pcVar1)();
    return pTVar3;
  }
  if ((0x3f < (uint)param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TShaderPermutationDomain<FGPUSkinCacheCS::FBoneWeight16Dim,FGPUSkinCacheCS::FBoneIndex16Dim,FGPUSkinCacheCS::FApexClothDim,FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
              *)(*pcVar1)();
    return pTVar3;
  }
  return this;
}

// TShaderPermutationDomain<FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim> @ 147c2ba80

TShaderPermutationDomain<FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
* __thiscall
TShaderPermutationDomain<FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
::
TShaderPermutationDomain<FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
          (TShaderPermutationDomain<FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TShaderPermutationDomain<FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
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
    pTVar3 = (TShaderPermutationDomain<FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
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
    pTVar3 = (TShaderPermutationDomain<FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
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
    pTVar3 = (TShaderPermutationDomain<FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
              *)(*pcVar1)();
    return pTVar3;
  }
  (this->Tail).Tail.DimensionValue = iVar4 == 1;
  if (((int)uVar5 / 2 != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0xf6,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TShaderPermutationDomain<FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
              *)(*pcVar1)();
    return pTVar3;
  }
  if ((1 < uVar5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TShaderPermutationDomain<FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
              *)(*pcVar1)();
    return pTVar3;
  }
  if ((3 < uVar6) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TShaderPermutationDomain<FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
              *)(*pcVar1)();
    return pTVar3;
  }
  if ((7 < (uint)param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TShaderPermutationDomain<FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
              *)(*pcVar1)();
    return pTVar3;
  }
  return this;
}

// TShaderPermutationDomain<Nanite::FTranscodePageToGPU_CS::FTranscodePassDim,Nanite::FTranscodePageToGPU_CS::FGroupSizeDim> @ 147fa3410

TShaderPermutationDomain<Nanite::FTranscodePageToGPU_CS::FTranscodePassDim,Nanite::FTranscodePageToGPU_CS::FGroupSizeDim>
* __thiscall
TShaderPermutationDomain<Nanite::FTranscodePageToGPU_CS::FTranscodePassDim,Nanite::FTranscodePageToGPU_CS::FGroupSizeDim>
::
TShaderPermutationDomain<Nanite::FTranscodePageToGPU_CS::FTranscodePassDim,Nanite::FTranscodePageToGPU_CS::FGroupSizeDim>
          (TShaderPermutationDomain<Nanite::FTranscodePageToGPU_CS::FTranscodePassDim,Nanite::FTranscodePageToGPU_CS::FGroupSizeDim>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TShaderPermutationDomain<Nanite::FTranscodePageToGPU_CS::FTranscodePassDim,Nanite::FTranscodePageToGPU_CS::FGroupSizeDim>
  *pTVar4;
  uint uVar5;
  
  uVar5 = param_1 / 2;
  if (param_1 % 2 != 1) {
    if (param_1 % 2 == 0) {
      iVar3 = 1;
      goto LAB_147fa3471;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x97,L"Invalid shader permutation dimension id %i.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderPermutationDomain<Nanite::FTranscodePageToGPU_CS::FTranscodePassDim,Nanite::FTranscodePageToGPU_CS::FGroupSizeDim>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  iVar3 = 0;
LAB_147fa3471:
  this->DimensionValue = iVar3;
  iVar3 = TShaderPermutationSparseInt<4,8,16,32,64,128>::FromDimensionValueId((int)uVar5 % 6);
  (this->Tail).DimensionValue = iVar3;
  if ((int)uVar5 / 6 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0xf6,L"Invalid shader permutation id %i.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderPermutationDomain<Nanite::FTranscodePageToGPU_CS::FTranscodePassDim,Nanite::FTranscodePageToGPU_CS::FGroupSizeDim>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  if (5 < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId >= 0 && PermutationId < PermutationCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x188,L"Invalid shader permutation id %i.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderPermutationDomain<Nanite::FTranscodePageToGPU_CS::FTranscodePassDim,Nanite::FTranscodePageToGPU_CS::FGroupSizeDim>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  if (0xb < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId >= 0 && PermutationId < PermutationCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x188,L"Invalid shader permutation id %i.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderPermutationDomain<Nanite::FTranscodePageToGPU_CS::FTranscodePassDim,Nanite::FTranscodePageToGPU_CS::FGroupSizeDim>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this;
}

