// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator() @ 149216ff0

void __thiscall
`TUNiagaraDataInterfaceVolumeCache_GetNumCellsBinder::Bind'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_40 [4];
  int local_30 [4];
  int local_20 [2];
  FUserPtrHandler<FVolumeCacheInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<FVolumeCacheInstanceData_GameThread>::
  FUserPtrHandler<FVolumeCacheInstanceData_GameThread>(&local_18,param_1);
  iVar9 = 0;
  local_40[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar7 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  local_30[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar8 = local_30[0] * param_1->PerInstanceFnInstanceIdx;
  local_20[0] = 0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  fVar1 = (float)((local_18.Ptr)->NumCells).field0_0x0._s_0.X;
  fVar2 = (float)((local_18.Ptr)->NumCells).field0_0x0._s_0.Y;
  fVar3 = (float)((local_18.Ptr)->NumCells).field0_0x0._s_0.Z;
  if (0 < param_1->NumInstances) {
    pfVar6 = pfVar6 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
    pfVar5 = pfVar5 + iVar8;
    pfVar4 = pfVar4 + iVar7;
    do {
      iVar9 = iVar9 + 1;
      *pfVar4 = fVar1;
      *pfVar5 = fVar2;
      *pfVar6 = fVar3;
      pfVar6 = pfVar6 + local_20[0];
      pfVar5 = pfVar5 + local_30[0];
      pfVar4 = pfVar4 + local_40[0];
    } while (iVar9 < param_1->NumInstances);
  }
  return;
}

