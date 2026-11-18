// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator() @ 148f82c30

void __thiscall
`TUNiagaraDataInterfaceSkeletalMesh_GetTriangleCoordAtUVBinder::Bind<FSkelMeshVertexAccessorNoop>'::
__l2::<lambda_1>::operator()(void *this,FVectorVMExternalFunctionContext *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  FUserPtrHandler<FNDISkeletalMesh_InstanceData> local_88;
  int local_78 [6];
  int local_60 [2];
  FNDIOutputParam<UE::Math::TVector<float>_> local_58;
  
  VectorVM::FUserPtrHandler<FNDISkeletalMesh_InstanceData>::
  FUserPtrHandler<FNDISkeletalMesh_InstanceData>(&local_88,param_1);
  FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_78);
  FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_78);
  FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_78);
  local_88.Ptr._0_4_ = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_88.Ptr);
  lVar7 = (longlong)(int)local_88.Ptr;
  iVar5 = (int)local_88.Ptr * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_58,param_1);
  local_88.Ptr._0_4_ = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_88.Ptr);
  iVar6 = 0;
  if (0 < param_1->NumInstances) {
    pfVar4 = pfVar4 + (int)local_88.Ptr * param_1->PerInstanceFnInstanceIdx;
    pfVar3 = pfVar3 + iVar5;
    do {
      iVar6 = iVar6 + 1;
      *pfVar3 = -NAN;
      uVar2 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar1 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
      *local_58.X.Register = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
      *local_58.Y.Register = (float)uVar1;
      *local_58.Z.Register = (float)uVar2;
      *pfVar4 = 0.0;
      local_58.Y.Register = local_58.Y.Register + local_58.Y.AdvanceOffset;
      local_58.Z.Register = local_58.Z.Register + local_58.Z.AdvanceOffset;
      pfVar4 = pfVar4 + (int)local_88.Ptr;
      local_58.X.Register = local_58.X.Register + local_58.X.AdvanceOffset;
      pfVar3 = pfVar3 + lVar7;
    } while (iVar6 < param_1->NumInstances);
  }
  return;
}

