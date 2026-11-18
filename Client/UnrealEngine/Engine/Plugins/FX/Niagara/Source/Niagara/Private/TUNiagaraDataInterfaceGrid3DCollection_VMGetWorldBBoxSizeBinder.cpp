// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator() @ 14916c0f0

void __thiscall
`TUNiagaraDataInterfaceGrid3DCollection_VMGetWorldBBoxSizeBinder::Bind'::__l2::<lambda_1>::
operator()(void *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_40 [4];
  int local_30 [4];
  int local_20 [2];
  FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread>::
  FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread>(&local_18,param_1);
  iVar6 = 0;
  local_40[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar4 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  local_30[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar5 = local_30[0] * param_1->PerInstanceFnInstanceIdx;
  local_20[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  if (0 < param_1->NumInstances) {
    pfVar3 = pfVar3 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
    pfVar2 = pfVar2 + iVar5;
    pfVar1 = pfVar1 + iVar4;
    do {
      iVar6 = iVar6 + 1;
      *pfVar1 = (float)((local_18.Ptr)->WorldBBoxSize).field0_0x0._s_0.X;
      *pfVar2 = (float)((local_18.Ptr)->WorldBBoxSize).field0_0x0._s_0.Y;
      *pfVar3 = (float)((local_18.Ptr)->WorldBBoxSize).field0_0x0._s_0.Z;
      pfVar3 = pfVar3 + local_20[0];
      pfVar2 = pfVar2 + local_30[0];
      pfVar1 = pfVar1 + local_40[0];
    } while (iVar6 < param_1->NumInstances);
  }
  return;
}

