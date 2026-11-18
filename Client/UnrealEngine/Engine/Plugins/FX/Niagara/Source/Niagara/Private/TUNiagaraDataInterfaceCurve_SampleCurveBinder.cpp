// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator() @ 1490b9a30

void __thiscall
`TUNiagaraDataInterfaceCurve_SampleCurveBinder::Bind<TIntegralConstant<bool,0>_>'::__l2::<lambda_1>
::operator()(void *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  int local_30 [2];
  int local_28 [4];
  
  lVar1 = *(longlong *)this;
  iVar5 = 0;
  local_28[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_28);
  lVar6 = (longlong)local_28[0];
  local_30[0] = 0;
  pfVar2 = pfVar2 + local_28[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  lVar4 = (longlong)local_30[0];
  pfVar3 = pfVar3 + local_30[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      fVar7 = FRichCurve::Eval((FRichCurve *)(lVar1 + 0x70),*pfVar2,0.0);
      *pfVar3 = fVar7;
      pfVar2 = pfVar2 + lVar6;
      pfVar3 = pfVar3 + lVar4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1->NumInstances);
  }
  return;
}

