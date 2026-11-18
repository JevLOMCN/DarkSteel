// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator() @ 149216cb0

void __thiscall
`TUNiagaraDataInterfaceVector2DCurve_SampleCurveBinder::Bind<TIntegralConstant<bool,0>_>'::__l2::
<lambda_1>::operator()(void *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  int local_70 [2];
  int local_68 [12];
  
  lVar2 = *(longlong *)this;
  iVar9 = 0;
  local_68[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_68);
  lVar10 = (longlong)local_68[0];
  local_70[0] = 0;
  iVar7 = local_68[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  iVar3 = local_70[0];
  lVar11 = (longlong)local_70[0];
  local_70[0] = 0;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  lVar8 = (longlong)local_70[0];
  if (0 < param_1->NumInstances) {
    pfVar5 = pfVar5 + iVar3 * iVar1;
    pfVar6 = pfVar6 + local_70[0] * param_1->PerInstanceFnInstanceIdx;
    pfVar4 = pfVar4 + iVar7;
    do {
      fVar13 = *pfVar4;
      fVar12 = FRichCurve::Eval((FRichCurve *)(lVar2 + 0xf0),fVar13,0.0);
      fVar13 = FRichCurve::Eval((FRichCurve *)(lVar2 + 0x70),fVar13,0.0);
      iVar9 = iVar9 + 1;
      *pfVar5 = fVar13;
      *pfVar6 = fVar12;
      pfVar5 = pfVar5 + lVar11;
      pfVar6 = pfVar6 + lVar8;
      pfVar4 = pfVar4 + lVar10;
    } while (iVar9 < param_1->NumInstances);
  }
  return;
}

