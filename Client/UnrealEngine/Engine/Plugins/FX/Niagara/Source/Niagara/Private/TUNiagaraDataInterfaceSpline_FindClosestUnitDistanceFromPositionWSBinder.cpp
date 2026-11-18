// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator() @ 1492166f0

void __thiscall
`TUNiagaraDataInterfaceSpline_FindClosestUnitDistanceFromPositionWSBinder::
Bind<TIntegralConstant<bool,1>_>'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  longlong lVar7;
  float fVar8;
  float local_b8;
  float local_b4;
  float local_b0 [2];
  TVector<double> local_a8;
  FNDIInputParam<FNiagaraPosition> local_88;
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            ((FUserPtrHandler<FNDISpline_InstanceData> *)&local_a8,param_1);
  FNDIInputParam<FNiagaraPosition>::FNDIInputParam<FNiagaraPosition>(&local_88,param_1);
  iVar5 = 0;
  local_b0[0] = 0.0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)local_b0);
  lVar7 = (longlong)(int)local_b0[0];
  pfVar2 = pfVar2 + (int)local_b0[0] * param_1->PerInstanceFnInstanceIdx;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_a8.field0_0x0._s_0.Y);
  if (bVar1) {
    if (0 < param_1->NumInstances) {
      pfVar3 = local_88.Z.InputPtr;
      pfVar4 = local_88.Y.InputPtr;
      pfVar6 = local_88.X.InputPtr;
      do {
        local_b4 = *pfVar4;
        pfVar4 = pfVar4 + local_88.Y.AdvanceOffset;
        local_b8 = *pfVar6;
        local_b0[0] = *pfVar3;
        FNiagaraLWCConverter::ConvertSimulationPositionToWorld
                  ((FNiagaraLWCConverter *)((longlong)local_a8.field0_0x0._s_0.Y + 0x1d0),&local_a8,
                   (FNiagaraPosition *)&local_b8);
        fVar8 = FNDISpline_InstanceData::
                FindInputKeyClosestToWorldLocation<TIntegralConstant<bool,1>_>
                          ((FNDISpline_InstanceData *)local_a8.field0_0x0._s_0.Y,&local_a8);
        iVar5 = iVar5 + 1;
        *pfVar2 = fVar8;
        pfVar2 = pfVar2 + lVar7;
        pfVar3 = pfVar3 + local_88.Z.AdvanceOffset;
        pfVar6 = pfVar6 + local_88.X.AdvanceOffset;
      } while (iVar5 < param_1->NumInstances);
      return;
    }
  }
  else {
    iVar5 = 0;
    if (0 < param_1->NumInstances) {
      do {
        *pfVar2 = 0.0;
        iVar5 = iVar5 + 1;
        pfVar2 = pfVar2 + lVar7;
      } while (iVar5 < param_1->NumInstances);
    }
  }
  return;
}

