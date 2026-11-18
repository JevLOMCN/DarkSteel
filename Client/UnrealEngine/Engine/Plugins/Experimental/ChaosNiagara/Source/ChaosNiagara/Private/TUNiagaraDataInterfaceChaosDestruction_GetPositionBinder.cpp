// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 2

// operator() @ 14e9853a0

void __thiscall
`TUNiagaraDataInterfaceChaosDestruction_GetPositionBinder::
Bind<VectorVM::FExternalFuncConstHandler<int>_>'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  undefined4 uVar12;
  float local_68;
  FUserPtrHandler<FNDIChaosDestruction_InstanceData> local_58;
  FNDIOutputParam<UE::Math::TVector<float>_> local_48;
  
  lVar3 = *(longlong *)this;
  VectorVM::FUserPtrHandler<FNDIChaosDestruction_InstanceData>::
  FUserPtrHandler<FNDIChaosDestruction_InstanceData>(&local_58,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegReadCount < NumRegisters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                         ,0x160,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar10 = param_1->RegReadCount;
  bVar1 = param_1->RegInc[iVar10];
  puVar4 = param_1->RegisterData[iVar10];
  param_1->RegReadCount = iVar10 + 1;
  uVar2 = puVar4[(int)((uint)bVar1 * param_1->PerInstanceFnInstanceIdx)];
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_48,param_1);
  iVar10 = 0;
  if (0 < param_1->NumInstances) {
    do {
      iVar9 = (uVar2 - *(int *)(lVar3 + 0x290)) + 1;
      if ((iVar9 < 0) || (((local_58.Ptr)->PositionArray).ArrayNum <= iVar9)) {
        fVar11 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        local_68 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        uVar12 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      }
      else {
        if ((iVar9 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar8 = (longlong)iVar9;
        pFVar5 = ((local_58.Ptr)->PositionArray).AllocatorInstance.Data;
        local_68 = (float)*(double *)(pFVar5 + lVar8 * 0x18);
        fVar11 = (float)*(double *)(pFVar5 + lVar8 * 0x18 + 8);
        uVar12 = (float)*(double *)(pFVar5 + lVar8 * 0x18 + 0x10);
      }
      iVar10 = iVar10 + 1;
      *local_48.X.Register = local_68;
      local_48.X.Register = local_48.X.Register + local_48.X.AdvanceOffset;
      *local_48.Y.Register = fVar11;
      local_48.Y.Register = local_48.Y.Register + local_48.Y.AdvanceOffset;
      *local_48.Z.Register = (float)uVar12;
      local_48.Z.Register = local_48.Z.Register + local_48.Z.AdvanceOffset;
    } while (iVar10 < param_1->NumInstances);
  }
  return;
}

// operator() @ 14e986950

void __thiscall
`TUNiagaraDataInterfaceChaosDestruction_GetPositionBinder::
Bind<VectorVM::FExternalFuncRegisterHandler<int>_>'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  float *pfVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  float local_88;
  int local_70 [2];
  FUserPtrHandler<FNDIChaosDestruction_InstanceData> local_68;
  FNDIOutputParam<UE::Math::TVector<float>_> local_58;
  
  lVar1 = *(longlong *)this;
  VectorVM::FUserPtrHandler<FNDIChaosDestruction_InstanceData>::
  FUserPtrHandler<FNDIChaosDestruction_InstanceData>(&local_68,param_1);
  iVar9 = 0;
  local_70[0] = 0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  iVar4 = local_70[0];
  pfVar6 = pfVar6 + local_70[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_58,param_1);
  if (0 < param_1->NumInstances) {
    do {
      iVar8 = ((int)*pfVar6 - *(int *)(lVar1 + 0x290)) + 1;
      pfVar6 = pfVar6 + iVar4;
      if ((iVar8 < 0) || (((local_68.Ptr)->PositionArray).ArrayNum <= iVar8)) {
        fVar10 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        local_88 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        uVar11 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      }
      else {
        if ((iVar8 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar7 = (longlong)iVar8;
        pFVar2 = ((local_68.Ptr)->PositionArray).AllocatorInstance.Data;
        local_88 = (float)*(double *)(pFVar2 + lVar7 * 0x18);
        fVar10 = (float)*(double *)(pFVar2 + lVar7 * 0x18 + 8);
        uVar11 = (float)*(double *)(pFVar2 + lVar7 * 0x18 + 0x10);
      }
      iVar9 = iVar9 + 1;
      *local_58.X.Register = local_88;
      local_58.X.Register = local_58.X.Register + local_58.X.AdvanceOffset;
      *local_58.Y.Register = fVar10;
      local_58.Y.Register = local_58.Y.Register + local_58.Y.AdvanceOffset;
      *local_58.Z.Register = (float)uVar11;
      local_58.Z.Register = local_58.Z.Register + local_58.Z.AdvanceOffset;
    } while (iVar9 < param_1->NumInstances);
  }
  return;
}

