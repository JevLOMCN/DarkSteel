// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// TShaderPermutationDomain<FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps> @ 14e07c430

TShaderPermutationDomain<FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
* __thiscall
TShaderPermutationDomain<FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
::
TShaderPermutationDomain<FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
          (TShaderPermutationDomain<FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
           *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  TShaderPermutationDomain<FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
  *pTVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar2 = param_1 / 3;
  iVar7 = param_1 % 3;
  if (((2 < iVar7) || (iVar7 < 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x77,L"Invalid shader permutation dimension value id %i."), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TShaderPermutationDomain<FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
              *)(*pcVar1)();
    return pTVar5;
  }
  this->DimensionValue = iVar7;
  uVar6 = (int)uVar2 >> 0x1f & 3;
  uVar4 = uVar2 + uVar6;
  uVar8 = (int)uVar4 >> 2;
  iVar7 = TShaderPermutationSparseInt<4,8,16,32>::FromDimensionValueId((uVar4 & 3) - uVar6);
  (this->Tail).DimensionValue = iVar7;
  uVar4 = uVar8 & 0x80000001;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
  }
  if (((uVar4 != 0) && (uVar4 != 1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TShaderPermutationDomain<FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
              *)(*pcVar1)();
    return pTVar5;
  }
  (this->Tail).Tail.DimensionValue = uVar4 == 1;
  if (((int)uVar8 / 2 != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0xf6,L"Invalid shader permutation id %i."), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TShaderPermutationDomain<FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((1 < uVar8) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TShaderPermutationDomain<FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((7 < uVar2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TShaderPermutationDomain<FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((0x17 < (uint)param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TShaderPermutationDomain<FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
              *)(*pcVar1)();
    return pTVar5;
  }
  return this;
}

// TShaderPermutationDomain<FHairInterpolationCS::FDynamicGeometry,FHairInterpolationCS::FSimulation,FHairInterpolationCS::FSingleGuide,FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps> @ 14e07c5f0

TShaderPermutationDomain<FHairInterpolationCS::FDynamicGeometry,FHairInterpolationCS::FSimulation,FHairInterpolationCS::FSingleGuide,FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
* __thiscall
TShaderPermutationDomain<FHairInterpolationCS::FDynamicGeometry,FHairInterpolationCS::FSimulation,FHairInterpolationCS::FSingleGuide,FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
::
TShaderPermutationDomain<FHairInterpolationCS::FDynamicGeometry,FHairInterpolationCS::FSimulation,FHairInterpolationCS::FSingleGuide,FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
          (TShaderPermutationDomain<FHairInterpolationCS::FDynamicGeometry,FHairInterpolationCS::FSimulation,FHairInterpolationCS::FSingleGuide,FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TShaderPermutationDomain<FHairInterpolationCS::FDynamicGeometry,FHairInterpolationCS::FSimulation,FHairInterpolationCS::FSingleGuide,FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
  *pTVar5;
  uint uVar6;
  
  uVar6 = param_1 >> 0x1f & 3;
  uVar3 = param_1 + uVar6;
  iVar4 = (uVar3 & 3) - uVar6;
  uVar3 = (int)uVar3 >> 2;
  if (((3 < iVar4) || (iVar4 < 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x77,L"Invalid shader permutation dimension value id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TShaderPermutationDomain<FHairInterpolationCS::FDynamicGeometry,FHairInterpolationCS::FSimulation,FHairInterpolationCS::FSingleGuide,FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
              *)(*pcVar1)();
    return pTVar5;
  }
  this->DimensionValue = iVar4;
  uVar6 = uVar3 & 0x80000001;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
  }
  if (((uVar6 != 0) && (uVar6 != 1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TShaderPermutationDomain<FHairInterpolationCS::FDynamicGeometry,FHairInterpolationCS::FSimulation,FHairInterpolationCS::FSingleGuide,FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
              *)(*pcVar1)();
    return pTVar5;
  }
  (this->Tail).DimensionValue = uVar6 == 1;
  uVar6 = (int)uVar3 / 2;
  iVar4 = (int)uVar6 % 2;
  if (((iVar4 != 0) && (iVar4 != 1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TShaderPermutationDomain<FHairInterpolationCS::FDynamicGeometry,FHairInterpolationCS::FSimulation,FHairInterpolationCS::FSingleGuide,FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
              *)(*pcVar1)();
    return pTVar5;
  }
  (this->Tail).Tail.DimensionValue = iVar4 == 1;
  TShaderPermutationDomain<FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
  ::
  TShaderPermutationDomain<FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
            (&(this->Tail).Tail.Tail,(int)uVar6 / 2);
  if ((0x2f < uVar6) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TShaderPermutationDomain<FHairInterpolationCS::FDynamicGeometry,FHairInterpolationCS::FSimulation,FHairInterpolationCS::FSingleGuide,FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((0x5f < uVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TShaderPermutationDomain<FHairInterpolationCS::FDynamicGeometry,FHairInterpolationCS::FSimulation,FHairInterpolationCS::FSingleGuide,FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((0x17f < (uint)param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TShaderPermutationDomain<FHairInterpolationCS::FDynamicGeometry,FHairInterpolationCS::FSimulation,FHairInterpolationCS::FSingleGuide,FHairInterpolationCS::FDeformer,FHairInterpolationCS::FPointPerCurve,FHairInterpolationCS::FWaveOps>
              *)(*pcVar1)();
    return pTVar5;
  }
  return this;
}

