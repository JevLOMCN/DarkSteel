// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator() @ 1490bbf10

void __thiscall
`TUNiagaraDataInterfaceCamera_GetGetSplitScreenInfoBinder::Bind'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int local_20 [2];
  FUserPtrHandler<FCameraDataInterface_InstanceData> local_18;
  
  VectorVM::FUserPtrHandler<FCameraDataInterface_InstanceData>::
  FUserPtrHandler<FCameraDataInterface_InstanceData>(&local_18,param_1);
  iVar3 = 0;
  local_20[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar2 = pfVar2 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  fVar1 = (float)(local_18.Ptr)->SplitscreenMode;
  if (0 < param_1->NumInstances) {
    do {
      iVar3 = iVar3 + 1;
      *pfVar2 = fVar1;
      pfVar2 = pfVar2 + local_20[0];
    } while (iVar3 < param_1->NumInstances);
  }
  return;
}

