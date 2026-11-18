// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 1

// operator() @ 14e987580

void __thiscall
`TUNiagaraDataInterfacePhysicsField_GetPhysicsFieldResolutionBinder::Bind'::__l2::<lambda_1>::
operator()(void *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int local_40 [4];
  int local_30 [4];
  int local_20 [2];
  FUserPtrHandler<FNDIPhysicsFieldData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIPhysicsFieldData>::FUserPtrHandler<FNDIPhysicsFieldData>
            (&local_18,param_1);
  iVar5 = 0;
  local_40[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  local_30[0] = 0;
  pfVar1 = pfVar1 + local_40[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  local_20[0] = 0;
  pfVar2 = pfVar2 + local_30[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar3 = pfVar3 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if ((local_18.Ptr == (FNDIPhysicsFieldData *)0x0) ||
     ((local_18.Ptr)->FieldResource == (FPhysicsFieldResource *)0x0)) {
    iVar4 = 1;
  }
  else {
    iVar4 = ((local_18.Ptr)->FieldResource->FieldInfos).ClipmapResolution;
  }
  if (0 < param_1->NumInstances) {
    fVar6 = (float)iVar4;
    do {
      *pfVar1 = fVar6;
      iVar5 = iVar5 + 1;
      *pfVar2 = fVar6;
      pfVar1 = pfVar1 + local_40[0];
      *pfVar3 = fVar6;
      pfVar2 = pfVar2 + local_30[0];
      pfVar3 = pfVar3 + local_20[0];
    } while (iVar5 < param_1->NumInstances);
  }
  return;
}

