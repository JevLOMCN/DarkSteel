// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 2

// operator() @ 14e985b20

void __thiscall
`TUNiagaraDataInterfaceChaosDestruction_GetParticleIdsToSpawnAtTimeBinder::
Bind<VectorVM::FExternalFuncConstHandler<float>_>'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *local_58;
  int local_50 [2];
  float *local_48;
  int local_40 [4];
  int local_30 [2];
  FUserPtrHandler<FNDIChaosDestruction_InstanceData> local_28;
  
  lVar1 = *(longlong *)this;
  VectorVM::FUserPtrHandler<FNDIChaosDestruction_InstanceData>::
  FUserPtrHandler<FNDIChaosDestruction_InstanceData>(&local_28,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegReadCount < NumRegisters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                         ,0x160,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  param_1->RegReadCount = param_1->RegReadCount + 1;
  local_50[0] = 0;
  local_58 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  iVar9 = local_50[0];
  local_40[0] = 0;
  local_58 = local_58 + local_50[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar10 = local_40[0];
  local_30[0] = 0;
  iVar7 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar8 = 0;
  pfVar6 = pfVar6 + local_30[0] * param_1->PerInstanceFnInstanceIdx;
  local_48 = pfVar5 + iVar7;
  if (0 < param_1->NumInstances) {
    do {
      if (((*(char *)(lVar1 + 0x94) == '\0') || (*(char *)(lVar1 + 0x2b0) == '\0')) ||
         (((local_28.Ptr)->PositionArray).ArrayNum == 0)) {
        *local_58 = 0.0;
        *local_48 = 0.0;
        fVar4 = 0.0;
      }
      else {
        *local_58 = (float)(*(int *)(lVar1 + 0x290) + 1);
        *local_48 = (float)(((local_28.Ptr)->PositionArray).ArrayNum + *(int *)(lVar1 + 0x290));
        fVar4 = (float)((local_28.Ptr)->PositionArray).ArrayNum;
      }
      local_48 = local_48 + iVar10;
      local_58 = local_58 + iVar9;
      iVar8 = iVar8 + 1;
      *pfVar6 = fVar4;
      pfVar6 = pfVar6 + local_30[0];
      iVar9 = local_50[0];
      iVar10 = local_40[0];
    } while (iVar8 < param_1->NumInstances);
  }
  return;
}

// operator() @ 14e987430

void __thiscall
`TUNiagaraDataInterfaceChaosDestruction_GetParticleIdsToSpawnAtTimeBinder::
Bind<VectorVM::FExternalFuncRegisterHandler<float>_>'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int local_30 [2];
  FUserPtrHandler<FNDIChaosDestruction_InstanceData> local_28;
  
  lVar1 = *(longlong *)this;
  VectorVM::FUserPtrHandler<FNDIChaosDestruction_InstanceData>::
  FUserPtrHandler<FNDIChaosDestruction_InstanceData>(&local_28,param_1);
  FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  local_30[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar6 = local_30[0];
  lVar7 = (longlong)local_30[0];
  local_30[0] = 0;
  pfVar2 = pfVar2 + iVar6 * param_1->PerInstanceFnInstanceIdx;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar6 = local_30[0];
  lVar8 = (longlong)local_30[0];
  local_30[0] = 0;
  pfVar3 = pfVar3 + iVar6 * param_1->PerInstanceFnInstanceIdx;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar6 = 0;
  pfVar4 = pfVar4 + local_30[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      if (((*(char *)(lVar1 + 0x94) == '\0') || (*(char *)(lVar1 + 0x2b0) == '\0')) ||
         (((local_28.Ptr)->PositionArray).ArrayNum == 0)) {
        *pfVar2 = 0.0;
        *pfVar3 = 0.0;
        fVar5 = 0.0;
      }
      else {
        *pfVar2 = (float)(*(int *)(lVar1 + 0x290) + 1);
        *pfVar3 = (float)(((local_28.Ptr)->PositionArray).ArrayNum + *(int *)(lVar1 + 0x290));
        fVar5 = (float)((local_28.Ptr)->PositionArray).ArrayNum;
      }
      pfVar3 = pfVar3 + lVar8;
      iVar6 = iVar6 + 1;
      pfVar2 = pfVar2 + lVar7;
      *pfVar4 = fVar5;
      pfVar4 = pfVar4 + local_30[0];
    } while (iVar6 < param_1->NumInstances);
  }
  return;
}

