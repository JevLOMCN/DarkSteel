// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator() @ 14916be00

void __thiscall
`TUNiagaraDataInterfaceGrid2DCollection_VMGetWorldBBoxSizeBinder::Bind'::__l2::<lambda_1>::
operator()(void *this,FVectorVMExternalFunctionContext *param_1)

{
  double dVar1;
  double dVar2;
  float *pfVar3;
  int iVar4;
  FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread> local_38;
  float *local_28;
  int local_20 [4];
  int local_10 [2];
  
  VectorVM::FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread>::
  FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread>(&local_38,param_1);
  iVar4 = 0;
  local_20[0] = 0;
  local_28 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  local_10[0] = 0;
  local_28 = local_28 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_10);
  dVar1 = ((local_38.Ptr)->WorldBBoxSize).field0_0x0._s_0.X;
  dVar2 = ((local_38.Ptr)->WorldBBoxSize).field0_0x0._s_0.Y;
  if (0 < param_1->NumInstances) {
    pfVar3 = pfVar3 + local_10[0] * param_1->PerInstanceFnInstanceIdx;
    do {
      iVar4 = iVar4 + 1;
      *local_28 = (float)dVar1;
      *pfVar3 = (float)dVar2;
      local_28 = local_28 + local_20[0];
      pfVar3 = pfVar3 + local_10[0];
    } while (iVar4 < param_1->NumInstances);
  }
  return;
}

