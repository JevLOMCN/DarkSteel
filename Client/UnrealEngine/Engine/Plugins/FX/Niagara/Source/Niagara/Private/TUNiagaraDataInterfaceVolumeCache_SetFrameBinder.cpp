// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator() @ 149217180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TUNiagaraDataInterfaceVolumeCache_SetFrameBinder::Bind'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  longlong lVar2;
  UVolumeCache *this_00;
  bool bVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  FName local_res8;
  FString local_38;
  int local_28 [2];
  FUserPtrHandler<FVolumeCacheInstanceData_GameThread> local_20;
  
  lVar2 = *(longlong *)this;
  VectorVM::FUserPtrHandler<FVolumeCacheInstanceData_GameThread>::
  FUserPtrHandler<FVolumeCacheInstanceData_GameThread>(&local_20,param_1);
  local_28[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_28);
  iVar6 = local_28[0] * param_1->PerInstanceFnInstanceIdx;
  local_38.Data.ArrayNum = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&local_38.Data.ArrayNum);
  iVar7 = local_38.Data.ArrayNum * param_1->PerInstanceFnInstanceIdx;
  fVar1 = pfVar4[iVar6];
  (local_20.Ptr)->CurrFrame = (int)fVar1;
  this_00 = *(UVolumeCache **)(lVar2 + 0x38);
  if (((this_00 == (UVolumeCache *)0x0) ||
      (bVar3 = UVolumeCache::LoadFile(this_00,(int)fVar1), !bVar3)) && (2 < (byte)LogNiagara._0_1_))
  {
    local_res8 = *(FName *)(lVar2 + 0x18);
    ::FName::ToString(&local_res8,&local_38);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pfVar5[iVar7] = -NAN;
  return;
}

