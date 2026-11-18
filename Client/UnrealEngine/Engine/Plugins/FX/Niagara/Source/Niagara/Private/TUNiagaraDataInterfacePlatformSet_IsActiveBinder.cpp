// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator() @ 1491b0780

void __thiscall
`TUNiagaraDataInterfacePlatformSet_IsActiveBinder::Bind'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong lVar1;
  bool bVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int local_10 [2];
  
  lVar1 = *(longlong *)this;
  iVar5 = 0;
  local_10[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_10);
  iVar4 = local_10[0] * param_1->PerInstanceFnInstanceIdx;
  bVar2 = FNiagaraPlatformSet::IsActive((FNiagaraPlatformSet *)(lVar1 + 0x38));
  if (0 < param_1->NumInstances) {
    pfVar3 = pfVar3 + iVar4;
    do {
      iVar5 = iVar5 + 1;
      *pfVar3 = (float)((bVar2 ^ 1) - 1);
      pfVar3 = pfVar3 + local_10[0];
    } while (iVar5 < param_1->NumInstances);
  }
  return;
}

