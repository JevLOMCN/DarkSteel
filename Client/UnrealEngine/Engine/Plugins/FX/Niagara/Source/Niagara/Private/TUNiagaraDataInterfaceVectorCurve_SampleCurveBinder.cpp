// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator() @ 149216e00

void __thiscall
`TUNiagaraDataInterfaceVectorCurve_SampleCurveBinder::Bind<TIntegralConstant<bool,0>_>'::__l2::
<lambda_1>::operator()(void *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *local_res8;
  float *local_res10;
  float *local_res18;
  float *local_res20;
  int local_90 [2];
  int local_88 [18];
  
  lVar1 = *(longlong *)this;
  iVar4 = 0;
  local_88[0] = 0;
  local_res8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_88);
  lVar5 = (longlong)local_88[0];
  local_90[0] = 0;
  local_res8 = local_res8 + local_88[0] * param_1->PerInstanceFnInstanceIdx;
  local_res10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  iVar2 = local_90[0];
  lVar6 = (longlong)local_90[0];
  local_90[0] = 0;
  local_res10 = local_res10 + iVar2 * param_1->PerInstanceFnInstanceIdx;
  local_res18 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  iVar2 = local_90[0];
  lVar7 = (longlong)local_90[0];
  local_90[0] = 0;
  local_res18 = local_res18 + iVar2 * param_1->PerInstanceFnInstanceIdx;
  local_res20 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  lVar3 = (longlong)local_90[0];
  local_res20 = local_res20 + local_90[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      fVar10 = *local_res8;
      local_res8 = local_res8 + lVar5;
      fVar8 = FRichCurve::Eval((FRichCurve *)(lVar1 + 0x170),fVar10,0.0);
      fVar9 = FRichCurve::Eval((FRichCurve *)(lVar1 + 0xf0),fVar10,0.0);
      fVar10 = FRichCurve::Eval((FRichCurve *)(lVar1 + 0x70),fVar10,0.0);
      iVar4 = iVar4 + 1;
      *local_res10 = fVar10;
      local_res10 = local_res10 + lVar6;
      *local_res18 = fVar9;
      local_res18 = local_res18 + lVar7;
      *local_res20 = fVar8;
      local_res20 = local_res20 + lVar3;
    } while (iVar4 < param_1->NumInstances);
  }
  return;
}

