// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator() @ 149217100

void __thiscall
`TUNiagaraDataInterfaceVolumeCache_ReadFileBinder::Bind'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int local_30 [2];
  int local_28 [2];
  FUserPtrHandler<FVolumeCacheInstanceData_GameThread> local_20;
  
  VectorVM::FUserPtrHandler<FVolumeCacheInstanceData_GameThread>::
  FUserPtrHandler<FVolumeCacheInstanceData_GameThread>(&local_20,param_1);
  local_28[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_28);
  iVar4 = local_28[0] * param_1->PerInstanceFnInstanceIdx;
  local_30[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (local_20.Ptr)->ReadFile = *(bool *)((longlong)iVar4 + (longlong)pfVar2);
  pfVar3[local_30[0] * iVar1] = -NAN;
  return;
}

