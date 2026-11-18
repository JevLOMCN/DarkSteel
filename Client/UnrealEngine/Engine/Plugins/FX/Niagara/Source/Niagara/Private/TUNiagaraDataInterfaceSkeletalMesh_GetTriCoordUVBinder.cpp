// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator() @ 148f82b20

void __thiscall
`TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordUVBinder::Bind<FSkelMeshVertexAccessorNoop>'::__l2::
<lambda_1>::operator()(void *this,FVectorVMExternalFunctionContext *param_1)

{
  TVector2<float> TVar1;
  float *pfVar2;
  int iVar3;
  float local_res8;
  float fStackX_c;
  float *local_78;
  int local_70 [2];
  int local_68 [2];
  int local_60 [2];
  FNDIInputParam<UE::Math::TVector<float>_> local_58;
  
  VectorVM::FUserPtrHandler<FNDISkeletalMesh_InstanceData>::
  FUserPtrHandler<FNDISkeletalMesh_InstanceData>
            ((FUserPtrHandler<FNDISkeletalMesh_InstanceData> *)&local_78,param_1);
  FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_68);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_58,param_1);
  FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_68);
  iVar3 = 0;
  local_70[0] = 0;
  local_78 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  local_60[0] = 0;
  local_78 = local_78 + local_70[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  if (0 < param_1->NumInstances) {
    pfVar2 = pfVar2 + local_60[0] * param_1->PerInstanceFnInstanceIdx;
    do {
      TVar1.field0_0x0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      iVar3 = iVar3 + 1;
      local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
      *local_78 = local_res8;
      fStackX_c = TVar1.field0_0x0._4_4_;
      *pfVar2 = fStackX_c;
      local_78 = local_78 + local_70[0];
      pfVar2 = pfVar2 + local_60[0];
    } while (iVar3 < param_1->NumInstances);
  }
  return;
}

