// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 2

// operator() @ 14e984a10

void __thiscall
`TUNiagaraDataInterfaceChaosDestruction_GetColorBinder::
Bind<VectorVM::FExternalFuncConstHandler<int>_>'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  FLinearColor *pFVar10;
  int iVar11;
  int iVar12;
  FUserPtrHandler<FNDIChaosDestruction_InstanceData> local_78;
  FNDIOutputParam<FLinearColor> local_68;
  
  lVar3 = *(longlong *)this;
  VectorVM::FUserPtrHandler<FNDIChaosDestruction_InstanceData>::
  FUserPtrHandler<FNDIChaosDestruction_InstanceData>(&local_78,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegReadCount < NumRegisters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                         ,0x160,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar12 = param_1->RegReadCount;
  bVar1 = param_1->RegInc[iVar12];
  puVar4 = param_1->RegisterData[iVar12];
  param_1->RegReadCount = iVar12 + 1;
  uVar2 = puVar4[(int)((uint)bVar1 * param_1->PerInstanceFnInstanceIdx)];
  FNDIOutputParam<FLinearColor>::FNDIOutputParam<FLinearColor>(&local_68,param_1);
  iVar12 = 0;
  if (0 < param_1->NumInstances) {
    do {
      iVar11 = (uVar2 - *(int *)(lVar3 + 0x290)) + 1;
      if ((iVar11 < 0) || (((local_78.Ptr)->ColorArray).ArrayNum <= iVar11)) {
        pFVar10 = &FLinearColor::White;
      }
      else {
        if ((iVar11 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar10 = (FLinearColor *)
                  (((local_78.Ptr)->ColorArray).AllocatorInstance.Data + (longlong)iVar11 * 0x10);
      }
      fVar6 = *(float *)((longlong)pFVar10 + 4);
      fVar7 = *(float *)((longlong)pFVar10 + 8);
      fVar8 = *(float *)((longlong)pFVar10 + 0xc);
      iVar12 = iVar12 + 1;
      *local_68.R.Register = *(float *)pFVar10;
      local_68.R.Register = local_68.R.Register + local_68.R.AdvanceOffset;
      *local_68.G.Register = fVar6;
      local_68.G.Register = local_68.G.Register + local_68.G.AdvanceOffset;
      *local_68.B.Register = fVar7;
      local_68.B.Register = local_68.B.Register + local_68.B.AdvanceOffset;
      *local_68.A.Register = fVar8;
      local_68.A.Register = local_68.A.Register + local_68.A.AdvanceOffset;
    } while (iVar12 < param_1->NumInstances);
  }
  return;
}

// operator() @ 14e985ed0

void __thiscall
`TUNiagaraDataInterfaceChaosDestruction_GetColorBinder::
Bind<VectorVM::FExternalFuncRegisterHandler<int>_>'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong lVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  bool bVar7;
  float *pfVar8;
  FLinearColor *pFVar9;
  int iVar10;
  int iVar11;
  int local_80 [2];
  FUserPtrHandler<FNDIChaosDestruction_InstanceData> local_78;
  FNDIOutputParam<FLinearColor> local_68;
  
  lVar1 = *(longlong *)this;
  VectorVM::FUserPtrHandler<FNDIChaosDestruction_InstanceData>::
  FUserPtrHandler<FNDIChaosDestruction_InstanceData>(&local_78,param_1);
  iVar11 = 0;
  local_80[0] = 0;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  iVar6 = local_80[0];
  pfVar8 = pfVar8 + local_80[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<FLinearColor>::FNDIOutputParam<FLinearColor>(&local_68,param_1);
  if (0 < param_1->NumInstances) {
    do {
      iVar10 = ((int)*pfVar8 - *(int *)(lVar1 + 0x290)) + 1;
      pfVar8 = pfVar8 + iVar6;
      if ((iVar10 < 0) || (((local_78.Ptr)->ColorArray).ArrayNum <= iVar10)) {
        pFVar9 = &FLinearColor::White;
      }
      else {
        if ((iVar10 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar9 = (FLinearColor *)
                 (((local_78.Ptr)->ColorArray).AllocatorInstance.Data + (longlong)iVar10 * 0x10);
      }
      fVar3 = *(float *)((longlong)pFVar9 + 4);
      fVar4 = *(float *)((longlong)pFVar9 + 8);
      fVar5 = *(float *)((longlong)pFVar9 + 0xc);
      iVar11 = iVar11 + 1;
      *local_68.R.Register = *(float *)pFVar9;
      local_68.R.Register = local_68.R.Register + local_68.R.AdvanceOffset;
      *local_68.G.Register = fVar3;
      local_68.G.Register = local_68.G.Register + local_68.G.AdvanceOffset;
      *local_68.B.Register = fVar4;
      local_68.B.Register = local_68.B.Register + local_68.B.AdvanceOffset;
      *local_68.A.Register = fVar5;
      local_68.A.Register = local_68.A.Register + local_68.A.AdvanceOffset;
    } while (iVar11 < param_1->NumInstances);
  }
  return;
}

