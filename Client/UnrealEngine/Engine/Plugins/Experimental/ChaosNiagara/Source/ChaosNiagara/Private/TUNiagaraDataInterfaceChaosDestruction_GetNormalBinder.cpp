// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 1

// operator() @ 14e9866e0

void __thiscall
`TUNiagaraDataInterfaceChaosDestruction_GetNormalBinder::
Bind<VectorVM::FExternalFuncRegisterHandler<int>_>'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  float *pfVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  undefined4 uVar12;
  float local_88;
  int local_70 [2];
  FUserPtrHandler<FNDIChaosDestruction_InstanceData> local_68;
  FNDIOutputParam<UE::Math::TVector<float>_> local_58;
  
  lVar1 = *(longlong *)this;
  VectorVM::FUserPtrHandler<FNDIChaosDestruction_InstanceData>::
  FUserPtrHandler<FNDIChaosDestruction_InstanceData>(&local_68,param_1);
  local_70[0] = 0;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  iVar4 = local_70[0];
  pfVar7 = pfVar7 + local_70[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_58,param_1);
  iVar10 = 0;
  if (0 < param_1->NumInstances) {
    do {
      uVar9 = ((int)*pfVar7 - *(int *)(lVar1 + 0x290)) + 1;
      pfVar7 = pfVar7 + iVar4;
      if (((int)uVar9 < 0) || (((local_68.Ptr)->IncomingNormalArray).ArrayNum <= (int)uVar9)) {
        fVar11 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        local_88 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        uVar12 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      }
      else {
        uVar6 = 0;
        if ((int)uVar9 < ((local_68.Ptr)->IncomingNormalArray).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar8 = (longlong)(int)uVar9;
        pFVar2 = ((local_68.Ptr)->IncomingNormalArray).AllocatorInstance.Data;
        local_88 = (float)*(double *)(pFVar2 + lVar8 * 0x18);
        fVar11 = (float)*(double *)(pFVar2 + lVar8 * 0x18 + 8);
        uVar12 = (float)*(double *)(pFVar2 + lVar8 * 0x18 + 0x10);
      }
      iVar10 = iVar10 + 1;
      *local_58.X.Register = local_88;
      local_58.X.Register = local_58.X.Register + local_58.X.AdvanceOffset;
      *local_58.Y.Register = fVar11;
      local_58.Y.Register = local_58.Y.Register + local_58.Y.AdvanceOffset;
      *local_58.Z.Register = (float)uVar12;
      local_58.Z.Register = local_58.Z.Register + local_58.Z.AdvanceOffset;
    } while (iVar10 < param_1->NumInstances);
  }
  return;
}

