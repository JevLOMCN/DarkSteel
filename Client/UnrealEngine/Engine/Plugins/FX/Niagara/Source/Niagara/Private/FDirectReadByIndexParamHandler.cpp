// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// FDirectReadByIndexParamHandler<int> @ 1491a9da0

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

FDirectReadByIndexParamHandler<int> * __thiscall
FDirectReadByIndexParamHandler<int>::FDirectReadByIndexParamHandler<int>
          (FDirectReadByIndexParamHandler<int> *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float *pfVar2;
  FNiagaraBool *pFVar3;
  
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&this->InstanceData,param_1);
  (this->ParticleIndexParam).InputPtr = (int *)0x0;
  (this->ParticleIndexParam).StartPtr = (int *)0x0;
  (this->ParticleIndexParam).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->ParticleIndexParam).AdvanceOffset);
  (this->ParticleIndexParam).InputPtr = (int *)pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->ParticleIndexParam).InputPtr =
       (int *)(pfVar2 + iVar1 * (this->ParticleIndexParam).AdvanceOffset);
  (this->ParticleIndexParam).StartPtr =
       (int *)(pfVar2 + iVar1 * (this->ParticleIndexParam).AdvanceOffset);
  (this->OutValid).Data.Register = (FNiagaraBool *)0x0;
  (this->OutValid).Data.AdvanceOffset = 0;
  pFVar3 = (FNiagaraBool *)
           FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->OutValid).Data.AdvanceOffset);
  (this->OutValid).Data.Register = pFVar3;
  (this->OutValid).Data.Register =
       pFVar3 + param_1->PerInstanceFnInstanceIdx * (this->OutValid).Data.AdvanceOffset;
  (this->OutValue).Data.Register = (int *)0x0;
  (this->OutValue).Data.AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->OutValue).Data.AdvanceOffset);
  (this->OutValue).Data.Register = (int *)pfVar2;
  (this->OutValue).Data.Register =
       (int *)(pfVar2 + param_1->PerInstanceFnInstanceIdx * (this->OutValue).Data.AdvanceOffset);
  return this;
}

// FDirectReadByIndexParamHandler<float> @ 1491a9e70

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

FDirectReadByIndexParamHandler<float> * __thiscall
FDirectReadByIndexParamHandler<float>::FDirectReadByIndexParamHandler<float>
          (FDirectReadByIndexParamHandler<float> *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float *pfVar2;
  FNiagaraBool *pFVar3;
  
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&this->InstanceData,param_1);
  (this->ParticleIndexParam).InputPtr = (int *)0x0;
  (this->ParticleIndexParam).StartPtr = (int *)0x0;
  (this->ParticleIndexParam).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->ParticleIndexParam).AdvanceOffset);
  (this->ParticleIndexParam).InputPtr = (int *)pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->ParticleIndexParam).InputPtr =
       (int *)(pfVar2 + iVar1 * (this->ParticleIndexParam).AdvanceOffset);
  (this->ParticleIndexParam).StartPtr =
       (int *)(pfVar2 + iVar1 * (this->ParticleIndexParam).AdvanceOffset);
  (this->OutValid).Data.Register = (FNiagaraBool *)0x0;
  (this->OutValid).Data.AdvanceOffset = 0;
  pFVar3 = (FNiagaraBool *)
           FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->OutValid).Data.AdvanceOffset);
  (this->OutValid).Data.Register = pFVar3;
  (this->OutValid).Data.Register =
       pFVar3 + param_1->PerInstanceFnInstanceIdx * (this->OutValid).Data.AdvanceOffset;
  (this->OutValue).Data.Register = (float *)0x0;
  (this->OutValue).Data.AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->OutValue).Data.AdvanceOffset);
  (this->OutValue).Data.Register = pfVar2;
  (this->OutValue).Data.Register =
       pfVar2 + param_1->PerInstanceFnInstanceIdx * (this->OutValue).Data.AdvanceOffset;
  return this;
}

// FDirectReadByIndexParamHandler<FNiagaraBool> @ 1491a9f40

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

FDirectReadByIndexParamHandler<FNiagaraBool> * __thiscall
FDirectReadByIndexParamHandler<FNiagaraBool>::FDirectReadByIndexParamHandler<FNiagaraBool>
          (FDirectReadByIndexParamHandler<FNiagaraBool> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float *pfVar2;
  FNiagaraBool *pFVar3;
  
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&this->InstanceData,param_1);
  (this->ParticleIndexParam).InputPtr = (int *)0x0;
  (this->ParticleIndexParam).StartPtr = (int *)0x0;
  (this->ParticleIndexParam).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->ParticleIndexParam).AdvanceOffset);
  (this->ParticleIndexParam).InputPtr = (int *)pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->ParticleIndexParam).InputPtr =
       (int *)(pfVar2 + iVar1 * (this->ParticleIndexParam).AdvanceOffset);
  (this->ParticleIndexParam).StartPtr =
       (int *)(pfVar2 + iVar1 * (this->ParticleIndexParam).AdvanceOffset);
  (this->OutValid).Data.Register = (FNiagaraBool *)0x0;
  (this->OutValid).Data.AdvanceOffset = 0;
  pFVar3 = (FNiagaraBool *)
           FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->OutValid).Data.AdvanceOffset);
  (this->OutValid).Data.Register = pFVar3;
  (this->OutValid).Data.Register =
       pFVar3 + param_1->PerInstanceFnInstanceIdx * (this->OutValid).Data.AdvanceOffset;
  (this->OutValue).Data.Register = (FNiagaraBool *)0x0;
  (this->OutValue).Data.AdvanceOffset = 0;
  pFVar3 = (FNiagaraBool *)
           FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->OutValue).Data.AdvanceOffset);
  (this->OutValue).Data.Register = pFVar3;
  (this->OutValue).Data.Register =
       pFVar3 + param_1->PerInstanceFnInstanceIdx * (this->OutValue).Data.AdvanceOffset;
  return this;
}

