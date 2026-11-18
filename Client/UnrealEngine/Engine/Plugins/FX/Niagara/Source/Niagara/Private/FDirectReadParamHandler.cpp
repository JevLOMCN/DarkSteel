// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 10

// FDirectReadParamHandler<int> @ 1491aa010

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

FDirectReadParamHandler<int> * __thiscall
FDirectReadParamHandler<int>::FDirectReadParamHandler<int>
          (FDirectReadParamHandler<int> *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float *pfVar2;
  FNiagaraBool *pFVar3;
  
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&this->InstanceData,param_1);
  (this->ParticleIDIndexParam).InputPtr = (int *)0x0;
  (this->ParticleIDIndexParam).StartPtr = (int *)0x0;
  (this->ParticleIDIndexParam).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->ParticleIDIndexParam).AdvanceOffset);
  (this->ParticleIDIndexParam).InputPtr = (int *)pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->ParticleIDIndexParam).InputPtr =
       (int *)(pfVar2 + (this->ParticleIDIndexParam).AdvanceOffset * iVar1);
  (this->ParticleIDIndexParam).StartPtr =
       (int *)(pfVar2 + (this->ParticleIDIndexParam).AdvanceOffset * iVar1);
  (this->ParticleIDAcquireTagParam).InputPtr = (int *)0x0;
  (this->ParticleIDAcquireTagParam).StartPtr = (int *)0x0;
  (this->ParticleIDAcquireTagParam).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->ParticleIDAcquireTagParam).InputPtr = (int *)pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->ParticleIDAcquireTagParam).InputPtr =
       (int *)(pfVar2 + iVar1 * (this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->ParticleIDAcquireTagParam).StartPtr =
       (int *)(pfVar2 + iVar1 * (this->ParticleIDAcquireTagParam).AdvanceOffset);
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

// FDirectReadParamHandler<float> @ 1491aa110

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

FDirectReadParamHandler<float> * __thiscall
FDirectReadParamHandler<float>::FDirectReadParamHandler<float>
          (FDirectReadParamHandler<float> *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float *pfVar2;
  FNiagaraBool *pFVar3;
  
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&this->InstanceData,param_1);
  (this->ParticleIDIndexParam).InputPtr = (int *)0x0;
  (this->ParticleIDIndexParam).StartPtr = (int *)0x0;
  (this->ParticleIDIndexParam).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->ParticleIDIndexParam).AdvanceOffset);
  (this->ParticleIDIndexParam).InputPtr = (int *)pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->ParticleIDIndexParam).InputPtr =
       (int *)(pfVar2 + (this->ParticleIDIndexParam).AdvanceOffset * iVar1);
  (this->ParticleIDIndexParam).StartPtr =
       (int *)(pfVar2 + (this->ParticleIDIndexParam).AdvanceOffset * iVar1);
  (this->ParticleIDAcquireTagParam).InputPtr = (int *)0x0;
  (this->ParticleIDAcquireTagParam).StartPtr = (int *)0x0;
  (this->ParticleIDAcquireTagParam).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->ParticleIDAcquireTagParam).InputPtr = (int *)pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->ParticleIDAcquireTagParam).InputPtr =
       (int *)(pfVar2 + iVar1 * (this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->ParticleIDAcquireTagParam).StartPtr =
       (int *)(pfVar2 + iVar1 * (this->ParticleIDAcquireTagParam).AdvanceOffset);
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

// FDirectReadParamHandler<UE::Math::TQuat<float>_> @ 1491aa210

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

FDirectReadParamHandler<UE::Math::TQuat<float>_> * __thiscall
FDirectReadParamHandler<UE::Math::TQuat<float>_>::FDirectReadParamHandler<UE::Math::TQuat<float>_>
          (FDirectReadParamHandler<UE::Math::TQuat<float>_> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float *pfVar2;
  FNiagaraBool *pFVar3;
  
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&this->InstanceData,param_1);
  (this->ParticleIDIndexParam).InputPtr = (int *)0x0;
  (this->ParticleIDIndexParam).StartPtr = (int *)0x0;
  (this->ParticleIDIndexParam).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->ParticleIDIndexParam).AdvanceOffset);
  (this->ParticleIDIndexParam).InputPtr = (int *)pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->ParticleIDIndexParam).InputPtr =
       (int *)(pfVar2 + (this->ParticleIDIndexParam).AdvanceOffset * iVar1);
  (this->ParticleIDIndexParam).StartPtr =
       (int *)(pfVar2 + (this->ParticleIDIndexParam).AdvanceOffset * iVar1);
  (this->ParticleIDAcquireTagParam).InputPtr = (int *)0x0;
  (this->ParticleIDAcquireTagParam).StartPtr = (int *)0x0;
  (this->ParticleIDAcquireTagParam).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->ParticleIDAcquireTagParam).InputPtr = (int *)pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->ParticleIDAcquireTagParam).InputPtr =
       (int *)(pfVar2 + iVar1 * (this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->ParticleIDAcquireTagParam).StartPtr =
       (int *)(pfVar2 + iVar1 * (this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->OutValid).Data.Register = (FNiagaraBool *)0x0;
  (this->OutValid).Data.AdvanceOffset = 0;
  pFVar3 = (FNiagaraBool *)
           FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->OutValid).Data.AdvanceOffset);
  (this->OutValid).Data.Register = pFVar3;
  (this->OutValid).Data.Register =
       pFVar3 + param_1->PerInstanceFnInstanceIdx * (this->OutValid).Data.AdvanceOffset;
  FNDIOutputParam<UE::Math::TQuat<float>_>::FNDIOutputParam<UE::Math::TQuat<float>_>
            (&this->OutValue,param_1);
  return this;
}

// FDirectReadParamHandler<UE::Math::TVector2<float>_> @ 1491aa2f0

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

FDirectReadParamHandler<UE::Math::TVector2<float>_> * __thiscall
FDirectReadParamHandler<UE::Math::TVector2<float>_>::
FDirectReadParamHandler<UE::Math::TVector2<float>_>
          (FDirectReadParamHandler<UE::Math::TVector2<float>_> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float *pfVar2;
  FNiagaraBool *pFVar3;
  
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&this->InstanceData,param_1);
  (this->ParticleIDIndexParam).InputPtr = (int *)0x0;
  (this->ParticleIDIndexParam).StartPtr = (int *)0x0;
  (this->ParticleIDIndexParam).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->ParticleIDIndexParam).AdvanceOffset);
  (this->ParticleIDIndexParam).InputPtr = (int *)pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->ParticleIDIndexParam).InputPtr =
       (int *)(pfVar2 + (this->ParticleIDIndexParam).AdvanceOffset * iVar1);
  (this->ParticleIDIndexParam).StartPtr =
       (int *)(pfVar2 + (this->ParticleIDIndexParam).AdvanceOffset * iVar1);
  (this->ParticleIDAcquireTagParam).InputPtr = (int *)0x0;
  (this->ParticleIDAcquireTagParam).StartPtr = (int *)0x0;
  (this->ParticleIDAcquireTagParam).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->ParticleIDAcquireTagParam).InputPtr = (int *)pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->ParticleIDAcquireTagParam).InputPtr =
       (int *)(pfVar2 + iVar1 * (this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->ParticleIDAcquireTagParam).StartPtr =
       (int *)(pfVar2 + iVar1 * (this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->OutValid).Data.Register = (FNiagaraBool *)0x0;
  (this->OutValid).Data.AdvanceOffset = 0;
  pFVar3 = (FNiagaraBool *)
           FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->OutValid).Data.AdvanceOffset);
  (this->OutValid).Data.Register = pFVar3;
  (this->OutValid).Data.Register =
       pFVar3 + param_1->PerInstanceFnInstanceIdx * (this->OutValid).Data.AdvanceOffset;
  FNDIOutputParam<UE::Math::TVector2<float>_>::FNDIOutputParam<UE::Math::TVector2<float>_>
            (&this->OutValue,param_1);
  return this;
}

// FDirectReadParamHandler<UE::Math::TVector4<float>_> @ 1491aa3d0

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

FDirectReadParamHandler<UE::Math::TVector4<float>_> * __thiscall
FDirectReadParamHandler<UE::Math::TVector4<float>_>::
FDirectReadParamHandler<UE::Math::TVector4<float>_>
          (FDirectReadParamHandler<UE::Math::TVector4<float>_> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float *pfVar2;
  FNiagaraBool *pFVar3;
  
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&this->InstanceData,param_1);
  (this->ParticleIDIndexParam).InputPtr = (int *)0x0;
  (this->ParticleIDIndexParam).StartPtr = (int *)0x0;
  (this->ParticleIDIndexParam).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->ParticleIDIndexParam).AdvanceOffset);
  (this->ParticleIDIndexParam).InputPtr = (int *)pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->ParticleIDIndexParam).InputPtr =
       (int *)(pfVar2 + (this->ParticleIDIndexParam).AdvanceOffset * iVar1);
  (this->ParticleIDIndexParam).StartPtr =
       (int *)(pfVar2 + (this->ParticleIDIndexParam).AdvanceOffset * iVar1);
  (this->ParticleIDAcquireTagParam).InputPtr = (int *)0x0;
  (this->ParticleIDAcquireTagParam).StartPtr = (int *)0x0;
  (this->ParticleIDAcquireTagParam).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->ParticleIDAcquireTagParam).InputPtr = (int *)pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->ParticleIDAcquireTagParam).InputPtr =
       (int *)(pfVar2 + iVar1 * (this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->ParticleIDAcquireTagParam).StartPtr =
       (int *)(pfVar2 + iVar1 * (this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->OutValid).Data.Register = (FNiagaraBool *)0x0;
  (this->OutValid).Data.AdvanceOffset = 0;
  pFVar3 = (FNiagaraBool *)
           FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->OutValid).Data.AdvanceOffset);
  (this->OutValid).Data.Register = pFVar3;
  (this->OutValid).Data.Register =
       pFVar3 + param_1->PerInstanceFnInstanceIdx * (this->OutValid).Data.AdvanceOffset;
  FNDIOutputParam<UE::Math::TVector4<float>_>::FNDIOutputParam<UE::Math::TVector4<float>_>
            (&this->OutValue,param_1);
  return this;
}

// FDirectReadParamHandler<UE::Math::TVector<float>_> @ 1491aa4b0

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

FDirectReadParamHandler<UE::Math::TVector<float>_> * __thiscall
FDirectReadParamHandler<UE::Math::TVector<float>_>::
FDirectReadParamHandler<UE::Math::TVector<float>_>
          (FDirectReadParamHandler<UE::Math::TVector<float>_> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float *pfVar2;
  FNiagaraBool *pFVar3;
  
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&this->InstanceData,param_1);
  (this->ParticleIDIndexParam).InputPtr = (int *)0x0;
  (this->ParticleIDIndexParam).StartPtr = (int *)0x0;
  (this->ParticleIDIndexParam).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->ParticleIDIndexParam).AdvanceOffset);
  (this->ParticleIDIndexParam).InputPtr = (int *)pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->ParticleIDIndexParam).InputPtr =
       (int *)(pfVar2 + (this->ParticleIDIndexParam).AdvanceOffset * iVar1);
  (this->ParticleIDIndexParam).StartPtr =
       (int *)(pfVar2 + (this->ParticleIDIndexParam).AdvanceOffset * iVar1);
  (this->ParticleIDAcquireTagParam).InputPtr = (int *)0x0;
  (this->ParticleIDAcquireTagParam).StartPtr = (int *)0x0;
  (this->ParticleIDAcquireTagParam).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->ParticleIDAcquireTagParam).InputPtr = (int *)pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->ParticleIDAcquireTagParam).InputPtr =
       (int *)(pfVar2 + iVar1 * (this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->ParticleIDAcquireTagParam).StartPtr =
       (int *)(pfVar2 + iVar1 * (this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->OutValid).Data.Register = (FNiagaraBool *)0x0;
  (this->OutValid).Data.AdvanceOffset = 0;
  pFVar3 = (FNiagaraBool *)
           FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->OutValid).Data.AdvanceOffset);
  (this->OutValid).Data.Register = pFVar3;
  (this->OutValid).Data.Register =
       pFVar3 + param_1->PerInstanceFnInstanceIdx * (this->OutValid).Data.AdvanceOffset;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&this->OutValue,param_1);
  return this;
}

// FDirectReadParamHandler<FLinearColor> @ 1491aa590

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

FDirectReadParamHandler<FLinearColor> * __thiscall
FDirectReadParamHandler<FLinearColor>::FDirectReadParamHandler<FLinearColor>
          (FDirectReadParamHandler<FLinearColor> *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float *pfVar2;
  FNiagaraBool *pFVar3;
  
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&this->InstanceData,param_1);
  (this->ParticleIDIndexParam).InputPtr = (int *)0x0;
  (this->ParticleIDIndexParam).StartPtr = (int *)0x0;
  (this->ParticleIDIndexParam).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->ParticleIDIndexParam).AdvanceOffset);
  (this->ParticleIDIndexParam).InputPtr = (int *)pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->ParticleIDIndexParam).InputPtr =
       (int *)(pfVar2 + (this->ParticleIDIndexParam).AdvanceOffset * iVar1);
  (this->ParticleIDIndexParam).StartPtr =
       (int *)(pfVar2 + (this->ParticleIDIndexParam).AdvanceOffset * iVar1);
  (this->ParticleIDAcquireTagParam).InputPtr = (int *)0x0;
  (this->ParticleIDAcquireTagParam).StartPtr = (int *)0x0;
  (this->ParticleIDAcquireTagParam).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->ParticleIDAcquireTagParam).InputPtr = (int *)pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->ParticleIDAcquireTagParam).InputPtr =
       (int *)(pfVar2 + iVar1 * (this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->ParticleIDAcquireTagParam).StartPtr =
       (int *)(pfVar2 + iVar1 * (this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->OutValid).Data.Register = (FNiagaraBool *)0x0;
  (this->OutValid).Data.AdvanceOffset = 0;
  pFVar3 = (FNiagaraBool *)
           FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->OutValid).Data.AdvanceOffset);
  (this->OutValid).Data.Register = pFVar3;
  (this->OutValid).Data.Register =
       pFVar3 + param_1->PerInstanceFnInstanceIdx * (this->OutValid).Data.AdvanceOffset;
  FNDIOutputParam<FLinearColor>::FNDIOutputParam<FLinearColor>(&this->OutValue,param_1);
  return this;
}

// FDirectReadParamHandler<FNiagaraBool> @ 1491aa670

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

FDirectReadParamHandler<FNiagaraBool> * __thiscall
FDirectReadParamHandler<FNiagaraBool>::FDirectReadParamHandler<FNiagaraBool>
          (FDirectReadParamHandler<FNiagaraBool> *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float *pfVar2;
  FNiagaraBool *pFVar3;
  
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&this->InstanceData,param_1);
  (this->ParticleIDIndexParam).InputPtr = (int *)0x0;
  (this->ParticleIDIndexParam).StartPtr = (int *)0x0;
  (this->ParticleIDIndexParam).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->ParticleIDIndexParam).AdvanceOffset);
  (this->ParticleIDIndexParam).InputPtr = (int *)pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->ParticleIDIndexParam).InputPtr =
       (int *)(pfVar2 + (this->ParticleIDIndexParam).AdvanceOffset * iVar1);
  (this->ParticleIDIndexParam).StartPtr =
       (int *)(pfVar2 + (this->ParticleIDIndexParam).AdvanceOffset * iVar1);
  (this->ParticleIDAcquireTagParam).InputPtr = (int *)0x0;
  (this->ParticleIDAcquireTagParam).StartPtr = (int *)0x0;
  (this->ParticleIDAcquireTagParam).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->ParticleIDAcquireTagParam).InputPtr = (int *)pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->ParticleIDAcquireTagParam).InputPtr =
       (int *)(pfVar2 + iVar1 * (this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->ParticleIDAcquireTagParam).StartPtr =
       (int *)(pfVar2 + iVar1 * (this->ParticleIDAcquireTagParam).AdvanceOffset);
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

// FDirectReadParamHandler<FNiagaraID> @ 1491aa770

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

FDirectReadParamHandler<FNiagaraID> * __thiscall
FDirectReadParamHandler<FNiagaraID>::FDirectReadParamHandler<FNiagaraID>
          (FDirectReadParamHandler<FNiagaraID> *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float *pfVar2;
  FNiagaraBool *pFVar3;
  
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&this->InstanceData,param_1);
  (this->ParticleIDIndexParam).InputPtr = (int *)0x0;
  (this->ParticleIDIndexParam).StartPtr = (int *)0x0;
  (this->ParticleIDIndexParam).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->ParticleIDIndexParam).AdvanceOffset);
  (this->ParticleIDIndexParam).InputPtr = (int *)pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->ParticleIDIndexParam).InputPtr =
       (int *)(pfVar2 + (this->ParticleIDIndexParam).AdvanceOffset * iVar1);
  (this->ParticleIDIndexParam).StartPtr =
       (int *)(pfVar2 + (this->ParticleIDIndexParam).AdvanceOffset * iVar1);
  (this->ParticleIDAcquireTagParam).InputPtr = (int *)0x0;
  (this->ParticleIDAcquireTagParam).StartPtr = (int *)0x0;
  (this->ParticleIDAcquireTagParam).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->ParticleIDAcquireTagParam).InputPtr = (int *)pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->ParticleIDAcquireTagParam).InputPtr =
       (int *)(pfVar2 + iVar1 * (this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->ParticleIDAcquireTagParam).StartPtr =
       (int *)(pfVar2 + iVar1 * (this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->OutValid).Data.Register = (FNiagaraBool *)0x0;
  (this->OutValid).Data.AdvanceOffset = 0;
  pFVar3 = (FNiagaraBool *)
           FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->OutValid).Data.AdvanceOffset);
  (this->OutValid).Data.Register = pFVar3;
  (this->OutValid).Data.Register =
       pFVar3 + param_1->PerInstanceFnInstanceIdx * (this->OutValid).Data.AdvanceOffset;
  FNDIOutputParam<FNiagaraID>::FNDIOutputParam<FNiagaraID>(&this->OutValue,param_1);
  return this;
}

// FDirectReadParamHandler<FNiagaraPosition> @ 1491aa850

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

FDirectReadParamHandler<FNiagaraPosition> * __thiscall
FDirectReadParamHandler<FNiagaraPosition>::FDirectReadParamHandler<FNiagaraPosition>
          (FDirectReadParamHandler<FNiagaraPosition> *this,FVectorVMExternalFunctionContext *param_1
          )

{
  int iVar1;
  float *pfVar2;
  FNiagaraBool *pFVar3;
  
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&this->InstanceData,param_1);
  (this->ParticleIDIndexParam).InputPtr = (int *)0x0;
  (this->ParticleIDIndexParam).StartPtr = (int *)0x0;
  (this->ParticleIDIndexParam).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->ParticleIDIndexParam).AdvanceOffset);
  (this->ParticleIDIndexParam).InputPtr = (int *)pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->ParticleIDIndexParam).InputPtr =
       (int *)(pfVar2 + (this->ParticleIDIndexParam).AdvanceOffset * iVar1);
  (this->ParticleIDIndexParam).StartPtr =
       (int *)(pfVar2 + (this->ParticleIDIndexParam).AdvanceOffset * iVar1);
  (this->ParticleIDAcquireTagParam).InputPtr = (int *)0x0;
  (this->ParticleIDAcquireTagParam).StartPtr = (int *)0x0;
  (this->ParticleIDAcquireTagParam).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->ParticleIDAcquireTagParam).InputPtr = (int *)pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->ParticleIDAcquireTagParam).InputPtr =
       (int *)(pfVar2 + iVar1 * (this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->ParticleIDAcquireTagParam).StartPtr =
       (int *)(pfVar2 + iVar1 * (this->ParticleIDAcquireTagParam).AdvanceOffset);
  (this->OutValid).Data.Register = (FNiagaraBool *)0x0;
  (this->OutValid).Data.AdvanceOffset = 0;
  pFVar3 = (FNiagaraBool *)
           FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->OutValid).Data.AdvanceOffset);
  (this->OutValid).Data.Register = pFVar3;
  (this->OutValid).Data.Register =
       pFVar3 + param_1->PerInstanceFnInstanceIdx * (this->OutValid).Data.AdvanceOffset;
  FNDIOutputParam<FNiagaraPosition>::FNDIOutputParam<FNiagaraPosition>(&this->OutValue,param_1);
  return this;
}

