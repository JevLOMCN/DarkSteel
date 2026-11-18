// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator() @ 1491b0810

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
`TUNiagaraDataInterfaceRigidMeshCollisionQuery_IsWorldPositionInsideCombinedBoundsCPUBinder::Bind'::
__l2::<lambda_1>::operator()(void *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined8 uVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  float local_c8;
  float local_c4;
  float local_c0 [2];
  TVector<double>_u_0 local_b8;
  FNiagaraLWCConverter local_a0;
  FNDIInputParam<FNiagaraPosition> local_88;
  float fVar9;
  
  VectorVM::FUserPtrHandler<FNDIRigidMeshCollisionData>::FUserPtrHandler<FNDIRigidMeshCollisionData>
            ((FUserPtrHandler<FNDIRigidMeshCollisionData> *)&local_b8._s_0,param_1);
  FNDIInputParam<FNiagaraPosition>::FNDIInputParam<FNiagaraPosition>(&local_88,param_1);
  fVar8 = 0.0;
  fVar9 = 0.0;
  local_c0[0] = 0.0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)local_c0);
  uVar5 = local_b8._s_0.Y;
  iVar7 = (int)local_c0[0] * param_1->PerInstanceFnInstanceIdx;
  if ((*(FNiagaraSystemInstance **)((longlong)local_b8._s_0.Y + 0x40) ==
       (FNiagaraSystemInstance *)0x0) || (*(longlong *)((longlong)local_b8._s_0.Y + 8) == 0)) {
    pfVar6[iVar7] = 0.0;
  }
  else {
    fVar1 = *local_88.X.InputPtr;
    fVar2 = *local_88.Y.InputPtr;
    fVar3 = *local_88.Z.InputPtr;
    FNiagaraSystemInstance::GetLWCConverter
              (*(FNiagaraSystemInstance **)((longlong)local_b8._s_0.Y + 0x40),&local_a0,false);
    local_c8 = fVar1;
    local_c4 = fVar2;
    local_c0[0] = fVar3;
    FNiagaraLWCConverter::ConvertSimulationPositionToWorld
              (&local_a0,(TVector<double> *)&local_b8._s_0,(FNiagaraPosition *)&local_c8);
    lVar4 = *(longlong *)(uVar5 + 8);
    if (((((double)*(float *)(lVar4 + 0xa0) <= local_b8._s_0.X) &&
         ((double)*(float *)(lVar4 + 0xa4) <= local_b8._s_0.Y)) &&
        ((double)*(float *)(lVar4 + 0xa8) <= local_b8._s_0.Z)) &&
       (((fVar8 = fVar9, local_b8._s_0.X <= (double)*(float *)(lVar4 + 0xac) &&
         (local_b8._s_0.Y <= (double)*(float *)(lVar4 + 0xb0))) &&
        (local_b8._s_0.Z <= (double)*(float *)(lVar4 + 0xb4))))) {
      fVar8 = -NAN;
    }
    pfVar6[iVar7] = fVar8;
  }
  return;
}

