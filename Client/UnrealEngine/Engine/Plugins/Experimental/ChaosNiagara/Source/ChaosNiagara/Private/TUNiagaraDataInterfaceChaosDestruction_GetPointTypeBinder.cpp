// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 2

// operator() @ 14e985300

void __thiscall
`TUNiagaraDataInterfaceChaosDestruction_GetPointTypeBinder::
Bind<VectorVM::FExternalFuncConstHandler<int>_>'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  int local_20 [2];
  FUserPtrHandler<FNDIChaosDestruction_InstanceData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIChaosDestruction_InstanceData>::
  FUserPtrHandler<FNDIChaosDestruction_InstanceData>(&local_18,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegReadCount < NumRegisters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                         ,0x160,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  param_1->RegReadCount = param_1->RegReadCount + 1;
  local_20[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar4 = pfVar4 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  iVar3 = 0;
  if (0 < param_1->NumInstances) {
    do {
      iVar3 = iVar3 + 1;
      *pfVar4 = 0.0;
      pfVar4 = pfVar4 + local_20[0];
    } while (iVar3 < param_1->NumInstances);
  }
  return;
}

// operator() @ 14e9868d0

void __thiscall
`TUNiagaraDataInterfaceChaosDestruction_GetPointTypeBinder::
Bind<VectorVM::FExternalFuncRegisterHandler<int>_>'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float *pfVar2;
  FUserPtrHandler<FNDIChaosDestruction_InstanceData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIChaosDestruction_InstanceData>::
  FUserPtrHandler<FNDIChaosDestruction_InstanceData>(&local_18,param_1);
  FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_18.Ptr);
  local_18.Ptr._0_4_ = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_18.Ptr);
  pfVar2 = pfVar2 + (int)local_18.Ptr * param_1->PerInstanceFnInstanceIdx;
  iVar1 = 0;
  if (0 < param_1->NumInstances) {
    do {
      iVar1 = iVar1 + 1;
      *pfVar2 = 0.0;
      pfVar2 = pfVar2 + (int)local_18.Ptr;
    } while (iVar1 < param_1->NumInstances);
  }
  return;
}

