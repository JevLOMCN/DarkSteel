// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator() @ 149027470

void __thiscall
`TUNiagaraDataInterfaceSkeletalMesh_GetVertexColorFallbackBinder::Bind'::__l2::<lambda_1>::
operator()(void *this,FVectorVMExternalFunctionContext *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  FUserPtrHandler<FNDISkeletalMesh_InstanceData> local_68;
  int local_58 [4];
  FNDIOutputParam<FLinearColor> local_48;
  
  VectorVM::FUserPtrHandler<FNDISkeletalMesh_InstanceData>::
  FUserPtrHandler<FNDISkeletalMesh_InstanceData>(&local_68,param_1);
  FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_58);
  FNDIOutputParam<FLinearColor>::FNDIOutputParam<FLinearColor>(&local_48,param_1);
  iVar4 = 0;
  if (0 < param_1->NumInstances) {
    do {
      uVar3 = FLinearColor::White.field0_0x0._s_0.A;
      uVar2 = FLinearColor::White.field0_0x0._s_0.B;
      uVar1 = FLinearColor::White.field0_0x0._s_0.G;
      iVar4 = iVar4 + 1;
      *local_48.R.Register = FLinearColor::White.field0_0x0._s_0.R;
      *local_48.G.Register = (float)uVar1;
      *local_48.B.Register = (float)uVar2;
      *local_48.A.Register = (float)uVar3;
      local_48.R.Register = local_48.R.Register + local_48.R.AdvanceOffset;
      local_48.G.Register = local_48.G.Register + local_48.G.AdvanceOffset;
      local_48.B.Register = local_48.B.Register + local_48.B.AdvanceOffset;
      local_48.A.Register = local_48.A.Register + local_48.A.AdvanceOffset;
    } while (iVar4 < param_1->NumInstances);
  }
  return;
}

