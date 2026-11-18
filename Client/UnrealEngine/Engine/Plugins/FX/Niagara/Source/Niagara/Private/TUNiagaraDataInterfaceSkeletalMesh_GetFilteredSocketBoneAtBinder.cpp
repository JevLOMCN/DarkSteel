// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator() @ 148f82f60

void __thiscall
`TUNiagaraDataInterfaceSkeletalMesh_GetFilteredSocketBoneAtBinder::Bind'::__l2::<lambda_1>::
operator()(void *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  int local_40 [2];
  FUserPtrHandler<FNDISkeletalMesh_InstanceData> local_38 [2];
  int local_18 [4];
  
  lVar2 = *(longlong *)this;
  VectorVM::FUserPtrHandler<FNDISkeletalMesh_InstanceData>::
  FUserPtrHandler<FNDISkeletalMesh_InstanceData>(local_38,param_1);
  iVar8 = 0;
  local_18[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_18);
  iVar7 = local_18[0] * param_1->PerInstanceFnInstanceIdx;
  local_40[0] = 0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  fVar9 = (float)(*(int *)(lVar2 + 0xe0) + -1);
  pfVar6 = pfVar6 + local_40[0] * param_1->PerInstanceFnInstanceIdx;
  iVar1 = (local_38[0].Ptr)->FilteredSocketBoneOffset;
  if (fVar9 == -NAN) {
    if (0 < param_1->NumInstances) {
      do {
        iVar8 = iVar8 + 1;
        *pfVar6 = -NAN;
        pfVar6 = pfVar6 + local_40[0];
      } while (iVar8 < param_1->NumInstances);
    }
  }
  else {
    iVar8 = 0;
    if (0 < param_1->NumInstances) {
      pfVar5 = pfVar5 + iVar7;
      do {
        fVar3 = fVar9;
        if ((int)*pfVar5 < (int)fVar9) {
          fVar3 = *pfVar5;
        }
        fVar4 = 0.0;
        if (0 < (int)fVar3) {
          fVar4 = fVar3;
        }
        iVar8 = iVar8 + 1;
        *pfVar6 = (float)((int)fVar4 + iVar1);
        pfVar5 = pfVar5 + local_18[0];
        pfVar6 = pfVar6 + local_40[0];
      } while (iVar8 < param_1->NumInstances);
    }
  }
  return;
}

