// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator() @ 14916bd30

void __thiscall
`TUNiagaraDataInterfaceGrid2DCollection_VMGetNumCellsBinder::Bind'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  FGrid2DCollectionRWInstanceData_GameThread *pFVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  int local_30 [4];
  int local_20 [2];
  FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread>::
  FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread>(&local_18,param_1);
  iVar5 = 0;
  local_30[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar4 = local_30[0] * param_1->PerInstanceFnInstanceIdx;
  local_20[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pFVar1 = (local_18.Ptr)->OtherInstanceData;
  fVar6 = (float)((local_18.Ptr)->NumCells).field0_0x0._s_0.X;
  fVar7 = (float)((local_18.Ptr)->NumCells).field0_0x0._s_0.Y;
  if (pFVar1 != (FGrid2DCollectionRWInstanceData_GameThread *)0x0) {
    fVar6 = (float)(pFVar1->NumCells).field0_0x0._s_0.X;
    fVar7 = (float)(pFVar1->NumCells).field0_0x0._s_0.Y;
  }
  if (0 < param_1->NumInstances) {
    pfVar3 = pfVar3 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
    pfVar2 = pfVar2 + iVar4;
    do {
      iVar5 = iVar5 + 1;
      *pfVar2 = fVar6;
      *pfVar3 = fVar7;
      pfVar3 = pfVar3 + local_20[0];
      pfVar2 = pfVar2 + local_30[0];
    } while (iVar5 < param_1->NumInstances);
  }
  return;
}

