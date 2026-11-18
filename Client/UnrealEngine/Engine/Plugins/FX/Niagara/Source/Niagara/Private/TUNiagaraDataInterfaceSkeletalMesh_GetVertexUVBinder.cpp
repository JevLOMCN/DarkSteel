// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator() @ 1490272d0

void __thiscall
`TUNiagaraDataInterfaceSkeletalMesh_GetVertexUVBinder::Bind<FSkelMeshVertexAccessorNoop>'::__l2::
<lambda_1>::operator()(void *this,FVectorVMExternalFunctionContext *param_1)

{
  TVector2<float> TVar1;
  float *pfVar2;
  int iVar3;
  float local_res8;
  float fStackX_c;
  float *local_28;
  int local_20 [2];
  int local_18 [2];
  int local_10 [2];
  
  FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_18);
  FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_18);
  VectorVM::FUserPtrHandler<FNDISkeletalMesh_InstanceData>::
  FUserPtrHandler<FNDISkeletalMesh_InstanceData>
            ((FUserPtrHandler<FNDISkeletalMesh_InstanceData> *)&local_28,param_1);
  iVar3 = 0;
  local_20[0] = 0;
  local_28 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  local_10[0] = 0;
  local_28 = local_28 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_10);
  if (0 < param_1->NumInstances) {
    pfVar2 = pfVar2 + local_10[0] * param_1->PerInstanceFnInstanceIdx;
    do {
      TVar1.field0_0x0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      iVar3 = iVar3 + 1;
      local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
      *local_28 = local_res8;
      fStackX_c = TVar1.field0_0x0._4_4_;
      *pfVar2 = fStackX_c;
      local_28 = local_28 + local_20[0];
      pfVar2 = pfVar2 + local_10[0];
    } while (iVar3 < param_1->NumInstances);
  }
  return;
}

