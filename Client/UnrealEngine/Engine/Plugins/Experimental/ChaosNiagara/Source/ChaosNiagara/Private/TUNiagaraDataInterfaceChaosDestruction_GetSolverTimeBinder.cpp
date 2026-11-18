// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 2

// operator() @ 14e985740

void __thiscall
`TUNiagaraDataInterfaceChaosDestruction_GetSolverTimeBinder::
Bind<VectorVM::FExternalFuncConstHandler<int>_>'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong lVar1;
  float *pfVar2;
  int iVar3;
  FUserPtrHandler<FNDIChaosDestruction_InstanceData> local_18;
  
  lVar1 = *(longlong *)this;
  VectorVM::FUserPtrHandler<FNDIChaosDestruction_InstanceData>::
  FUserPtrHandler<FNDIChaosDestruction_InstanceData>(&local_18,param_1);
  iVar3 = 0;
  local_18.Ptr._0_4_ = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_18.Ptr);
  pfVar2 = pfVar2 + (int)local_18.Ptr * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar3 = iVar3 + 1;
      *pfVar2 = *(float *)(lVar1 + 0x2a8);
      pfVar2 = pfVar2 + (int)local_18.Ptr;
    } while (iVar3 < param_1->NumInstances);
  }
  return;
}

// operator() @ 14e986eb0

void __thiscall
`TUNiagaraDataInterfaceChaosDestruction_GetSolverTimeBinder::
Bind<VectorVM::FExternalFuncRegisterHandler<int>_>'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong lVar1;
  float *pfVar2;
  int iVar3;
  FUserPtrHandler<FNDIChaosDestruction_InstanceData> local_18;
  
  lVar1 = *(longlong *)this;
  VectorVM::FUserPtrHandler<FNDIChaosDestruction_InstanceData>::
  FUserPtrHandler<FNDIChaosDestruction_InstanceData>(&local_18,param_1);
  iVar3 = 0;
  local_18.Ptr._0_4_ = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_18.Ptr);
  pfVar2 = pfVar2 + (int)local_18.Ptr * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar3 = iVar3 + 1;
      *pfVar2 = *(float *)(lVar1 + 0x2a8);
      pfVar2 = pfVar2 + (int)local_18.Ptr;
    } while (iVar3 < param_1->NumInstances);
  }
  return;
}

