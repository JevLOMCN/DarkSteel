// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator() @ 148f83090

void __thiscall
`TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordColorFallbackBinder::Bind'::__l2::<lambda_1>::
operator()(void *this,FVectorVMExternalFunctionContext *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  FNDIOutputParam<FLinearColor> local_b8;
  FUserPtrHandler<FNDISkeletalMesh_InstanceData> local_78;
  int local_68 [4];
  FNDIInputParam<UE::Math::TVector<float>_> local_58;
  
  VectorVM::FUserPtrHandler<FNDISkeletalMesh_InstanceData>::
  FUserPtrHandler<FNDISkeletalMesh_InstanceData>(&local_78,param_1);
  FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_68);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_58,param_1);
  FNDIOutputParam<FLinearColor>::FNDIOutputParam<FLinearColor>(&local_b8,param_1);
  iVar4 = 0;
  if (0 < param_1->NumInstances) {
    do {
      uVar3 = FLinearColor::White.field0_0x0._s_0.A;
      uVar2 = FLinearColor::White.field0_0x0._s_0.B;
      uVar1 = FLinearColor::White.field0_0x0._s_0.G;
      iVar4 = iVar4 + 1;
      *local_b8.R.Register = FLinearColor::White.field0_0x0._s_0.R;
      *local_b8.G.Register = (float)uVar1;
      *local_b8.B.Register = (float)uVar2;
      *local_b8.A.Register = (float)uVar3;
      local_b8.R.Register = local_b8.R.Register + local_b8.R.AdvanceOffset;
      local_b8.G.Register = local_b8.G.Register + local_b8.G.AdvanceOffset;
      local_b8.B.Register = local_b8.B.Register + local_b8.B.AdvanceOffset;
      local_b8.A.Register = local_b8.A.Register + local_b8.A.AdvanceOffset;
    } while (iVar4 < param_1->NumInstances);
  }
  return;
}

