// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator() @ 14916bfd0

void __thiscall
`TUNiagaraDataInterfaceGrid3DCollection_VMGetNumCellsBinder::Bind'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  FGrid3DCollectionRWInstanceData_GameThread *pFVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int local_40 [4];
  int local_30 [4];
  int local_20 [2];
  FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread>::
  FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread>(&local_18,param_1);
  iVar7 = 0;
  local_40[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar5 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  local_30[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar6 = local_30[0] * param_1->PerInstanceFnInstanceIdx;
  local_20[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pFVar1 = (local_18.Ptr)->OtherInstanceData;
  fVar8 = (float)((local_18.Ptr)->NumCells).field0_0x0._s_0.X;
  fVar9 = (float)((local_18.Ptr)->NumCells).field0_0x0._s_0.Y;
  fVar10 = (float)((local_18.Ptr)->NumCells).field0_0x0._s_0.Z;
  if (pFVar1 != (FGrid3DCollectionRWInstanceData_GameThread *)0x0) {
    fVar8 = (float)(pFVar1->NumCells).field0_0x0._s_0.X;
    fVar9 = (float)(pFVar1->NumCells).field0_0x0._s_0.Y;
    fVar10 = (float)(pFVar1->NumCells).field0_0x0._s_0.Z;
  }
  if (0 < param_1->NumInstances) {
    pfVar4 = pfVar4 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
    pfVar3 = pfVar3 + iVar6;
    pfVar2 = pfVar2 + iVar5;
    do {
      iVar7 = iVar7 + 1;
      *pfVar2 = fVar8;
      *pfVar3 = fVar9;
      *pfVar4 = fVar10;
      pfVar4 = pfVar4 + local_20[0];
      pfVar3 = pfVar3 + local_30[0];
      pfVar2 = pfVar2 + local_40[0];
    } while (iVar7 < param_1->NumInstances);
  }
  return;
}

