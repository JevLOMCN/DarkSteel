// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraVertexFactories
// Functions: 1

// TShaderPermutationDomain<FNiagaraSortKeyGenCS::FEnableCulling,FNiagaraSortKeyGenCS::FSortUsingMaxPrecision,FNiagaraSortKeyGenCS::FUseWaveOps> @ 148dcd490

TShaderPermutationDomain<FNiagaraSortKeyGenCS::FEnableCulling,FNiagaraSortKeyGenCS::FSortUsingMaxPrecision,FNiagaraSortKeyGenCS::FUseWaveOps>
* __thiscall
TShaderPermutationDomain<FNiagaraSortKeyGenCS::FEnableCulling,FNiagaraSortKeyGenCS::FSortUsingMaxPrecision,FNiagaraSortKeyGenCS::FUseWaveOps>
::
TShaderPermutationDomain<FNiagaraSortKeyGenCS::FEnableCulling,FNiagaraSortKeyGenCS::FSortUsingMaxPrecision,FNiagaraSortKeyGenCS::FUseWaveOps>
          (TShaderPermutationDomain<FNiagaraSortKeyGenCS::FEnableCulling,FNiagaraSortKeyGenCS::FSortUsingMaxPrecision,FNiagaraSortKeyGenCS::FUseWaveOps>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TShaderPermutationDomain<FNiagaraSortKeyGenCS::FEnableCulling,FNiagaraSortKeyGenCS::FSortUsingMaxPrecision,FNiagaraSortKeyGenCS::FUseWaveOps>
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
    pTVar3 = (TShaderPermutationDomain<FNiagaraSortKeyGenCS::FEnableCulling,FNiagaraSortKeyGenCS::FSortUsingMaxPrecision,FNiagaraSortKeyGenCS::FUseWaveOps>
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
    pTVar3 = (TShaderPermutationDomain<FNiagaraSortKeyGenCS::FEnableCulling,FNiagaraSortKeyGenCS::FSortUsingMaxPrecision,FNiagaraSortKeyGenCS::FUseWaveOps>
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
    pTVar3 = (TShaderPermutationDomain<FNiagaraSortKeyGenCS::FEnableCulling,FNiagaraSortKeyGenCS::FSortUsingMaxPrecision,FNiagaraSortKeyGenCS::FUseWaveOps>
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
    pTVar3 = (TShaderPermutationDomain<FNiagaraSortKeyGenCS::FEnableCulling,FNiagaraSortKeyGenCS::FSortUsingMaxPrecision,FNiagaraSortKeyGenCS::FUseWaveOps>
              *)(*pcVar1)();
    return pTVar3;
  }
  if ((1 < uVar5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TShaderPermutationDomain<FNiagaraSortKeyGenCS::FEnableCulling,FNiagaraSortKeyGenCS::FSortUsingMaxPrecision,FNiagaraSortKeyGenCS::FUseWaveOps>
              *)(*pcVar1)();
    return pTVar3;
  }
  if ((3 < uVar6) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TShaderPermutationDomain<FNiagaraSortKeyGenCS::FEnableCulling,FNiagaraSortKeyGenCS::FSortUsingMaxPrecision,FNiagaraSortKeyGenCS::FUseWaveOps>
              *)(*pcVar1)();
    return pTVar3;
  }
  if ((7 < (uint)param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TShaderPermutationDomain<FNiagaraSortKeyGenCS::FEnableCulling,FNiagaraSortKeyGenCS::FSortUsingMaxPrecision,FNiagaraSortKeyGenCS::FUseWaveOps>
              *)(*pcVar1)();
    return pTVar3;
  }
  return this;
}

