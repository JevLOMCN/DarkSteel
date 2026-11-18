// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 2

// operator() @ 14e985140

void __thiscall
`TUNiagaraDataInterfaceChaosDestruction_GetFrictionBinder::
Bind<VectorVM::FExternalFuncConstHandler<int>_>'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  int local_50 [2];
  FUserPtrHandler<FNDIChaosDestruction_InstanceData> local_48 [2];
  
  lVar4 = *(longlong *)this;
  VectorVM::FUserPtrHandler<FNDIChaosDestruction_InstanceData>::
  FUserPtrHandler<FNDIChaosDestruction_InstanceData>(local_48,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegReadCount < NumRegisters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                         ,0x160,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar2 = param_1->RegReadCount;
  local_50[0] = 0;
  bVar1 = param_1->RegInc[iVar2];
  puVar5 = param_1->RegisterData[iVar2];
  param_1->RegReadCount = iVar2 + 1;
  uVar3 = puVar5[(int)((uint)bVar1 * param_1->PerInstanceFnInstanceIdx)];
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  iVar2 = local_50[0];
  iVar11 = 0;
  pfVar9 = pfVar9 + local_50[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      uVar10 = (uVar3 - *(int *)(lVar4 + 0x290)) + 1;
      if (((int)uVar10 < 0) || (((local_48[0].Ptr)->FrictionArray).ArrayNum <= (int)uVar10)) {
        fVar12 = 0.0;
      }
      else {
        uVar8 = 0;
        if ((int)uVar10 < ((local_48[0].Ptr)->FrictionArray).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar12 = *(float *)(((local_48[0].Ptr)->FrictionArray).AllocatorInstance.Data +
                           (longlong)(int)uVar10 * 4);
      }
      iVar11 = iVar11 + 1;
      *pfVar9 = fVar12;
      pfVar9 = pfVar9 + iVar2;
    } while (iVar11 < param_1->NumInstances);
  }
  return;
}

// operator() @ 14e986550

void __thiscall
`TUNiagaraDataInterfaceChaosDestruction_GetFrictionBinder::
Bind<VectorVM::FExternalFuncRegisterHandler<int>_>'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  int local_70 [2];
  float *local_68;
  int local_60 [2];
  FUserPtrHandler<FNDIChaosDestruction_InstanceData> local_58 [2];
  
  lVar1 = *(longlong *)this;
  VectorVM::FUserPtrHandler<FNDIChaosDestruction_InstanceData>::
  FUserPtrHandler<FNDIChaosDestruction_InstanceData>(local_58,param_1);
  local_60[0] = 0;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  iVar4 = local_60[0];
  local_70[0] = 0;
  pfVar7 = pfVar7 + local_60[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  iVar3 = local_70[0];
  iVar10 = 0;
  pfVar8 = pfVar8 + local_70[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      uVar9 = ((int)*pfVar7 - *(int *)(lVar1 + 0x290)) + 1;
      pfVar7 = pfVar7 + iVar4;
      if (((int)uVar9 < 0) || (((local_58[0].Ptr)->FrictionArray).ArrayNum <= (int)uVar9)) {
        fVar11 = 0.0;
      }
      else {
        uVar6 = 0;
        if ((int)uVar9 < ((local_58[0].Ptr)->FrictionArray).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (local_68 = pfVar7,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar11 = *(float *)(((local_58[0].Ptr)->FrictionArray).AllocatorInstance.Data +
                           (longlong)(int)uVar9 * 4);
      }
      iVar10 = iVar10 + 1;
      *pfVar8 = fVar11;
      pfVar8 = pfVar8 + iVar3;
    } while (iVar10 < param_1->NumInstances);
  }
  return;
}

