// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator() @ 1491b05a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`TUNiagaraDataInterfaceParticleRead_GetNumParticlesBinder::Bind'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  FNiagaraEmitterInstance *pFVar1;
  FNiagaraDataBuffer *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  int local_20 [2];
  FUserPtrHandler<FNDIParticleRead_InstanceData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&local_18,param_1);
  iVar9 = 0;
  fVar8 = 0.0;
  local_20[0] = 0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  iVar4 = local_20[0];
  iVar7 = local_20[0] * param_1->PerInstanceFnInstanceIdx;
  pFVar1 = (local_18.Ptr)->EmitterInstance;
  if (pFVar1 != (FNiagaraEmitterInstance *)0x0) {
    if ((pFVar1->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParticleDataSet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                           ,0x3a,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = pFVar1->ParticleDataSet->CurrentData;
    if (pFVar2 != (FNiagaraDataBuffer *)0x0) {
      fVar8 = (float)pFVar2->NumInstances;
    }
  }
  if (0 < param_1->NumInstances) {
    pfVar6 = pfVar6 + iVar7;
    do {
      iVar9 = iVar9 + 1;
      *pfVar6 = fVar8;
      pfVar6 = pfVar6 + iVar4;
    } while (iVar9 < param_1->NumInstances);
  }
  return;
}

