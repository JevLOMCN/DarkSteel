// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator() @ 149216a90

/* WARNING: Type propagation algorithm not settling */

void __thiscall
`TUNiagaraDataInterfaceSpline_SampleSplineTangentByUnitDistanceBinder::
Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_>'
::__l2::<lambda_1>::operator()(void *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  undefined4 uVar2;
  bool bVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float local_98;
  float fStack_94;
  int local_90 [4];
  int local_80 [2];
  undefined1 local_78 [24];
  FUserPtrHandler<FNDISpline_InstanceData> local_60 [2];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (local_60,param_1);
  iVar9 = 0;
  local_90[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  local_78._8_4_ = 0;
  pfVar4 = pfVar4 + local_90[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,(int *)&(((TVector<double>_u_0 *)local_78)->_s_0).Y);
  uVar2 = local_78._8_4_;
  lVar12 = (longlong)(int)local_78._8_4_;
  local_78._8_4_ = 0;
  pfVar5 = pfVar5 + uVar2 * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,(int *)&(((TVector<double>_u_0 *)local_78)->_s_0).Y);
  lVar10 = (longlong)(int)local_78._8_4_;
  local_80[0] = 0;
  pfVar6 = pfVar6 + local_78._8_4_ * param_1->PerInstanceFnInstanceIdx;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  pfVar7 = pfVar7 + local_80[0] * param_1->PerInstanceFnInstanceIdx;
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_60[0].Ptr);
  uVar2 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  if (bVar3) {
    fVar1 = ((local_60[0].Ptr)->SplineLUT).SplineLength;
    if (0 < param_1->NumInstances) {
      lVar10 = (longlong)(int)local_78._8_4_;
      lVar11 = (longlong)local_90[0];
      lVar8 = (longlong)local_80[0];
      do {
        FNDISpline_InstanceData::EvaluateDerivativePosition<TIntegralConstant<bool,1>_>
                  (local_60[0].Ptr,(TVector<double> *)&((TVector<double>_u_0 *)local_78)->_s_0,
                   fVar1 * *pfVar4);
        pfVar4 = pfVar4 + lVar11;
        iVar9 = iVar9 + 1;
        *pfVar5 = (float)(double)local_78._0_8_;
        pfVar5 = pfVar5 + lVar12;
        *pfVar6 = (float)(double)CONCAT44(local_78._12_4_,local_78._8_4_);
        pfVar6 = pfVar6 + lVar10;
        *pfVar7 = (float)(double)local_78._16_8_;
        pfVar7 = pfVar7 + lVar8;
      } while (iVar9 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    fStack_94 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    local_98 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    do {
      *pfVar5 = local_98;
      iVar9 = iVar9 + 1;
      *pfVar6 = fStack_94;
      pfVar5 = pfVar5 + lVar12;
      *pfVar7 = (float)uVar2;
      pfVar6 = pfVar6 + lVar10;
      pfVar7 = pfVar7 + local_80[0];
    } while (iVar9 < param_1->NumInstances);
  }
  return;
}

