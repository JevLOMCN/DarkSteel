// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// BuildParticleOrder @ 14933e270

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
FNiagaraSortCullHelper<1>::BuildParticleOrder
          (FNiagaraGPUSortInfo *param_1,FNiagaraDataBuffer *param_2,FParticleOrderAsUint *param_3)

{
  ENiagaraSortMode EVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *local_res8;
  FScriptContainerElement *local_res10 [2];
  FScriptContainerElement *local_res20;
  FNiagaraSortCullHelper<1> local_d8;
  FScriptContainerElement *local_b0;
  FScriptContainerElement *local_a8;
  FScriptContainerElement *local_a0;
  FScriptContainerElement *local_98;
  FScriptContainerElement *local_90;
  FNiagaraSortCullHelper<1> local_88;
  <lambda_2> local_58;
  <lambda_1> local_38;
  
  iVar6 = 0;
  uVar2 = param_2->NumInstances;
  uVar7 = param_1->SortAttributeOffset & 0x7fffffff;
  if (uVar7 != param_1->SortAttributeOffset) {
    if (param_1->RendererVisTagAttributeOffset == -1) {
      local_88.VisibilityTag = (int *)0x0;
    }
    else {
      local_88.VisibilityTag =
           (int *)((param_2->Int32Data).AllocatorInstance.Data +
                  param_1->RendererVisTagAttributeOffset * param_2->Int32Stride);
    }
    local_88.VisibilityValue = param_1->RendererVisibility;
    if (param_1->MeshIndexAttributeOffset == -1) {
      local_88.MeshIndexTag = (int *)0x0;
    }
    else {
      local_88.MeshIndexTag =
           (int *)((param_2->Int32Data).AllocatorInstance.Data +
                  param_1->MeshIndexAttributeOffset * param_2->Int32Stride);
    }
    local_88.MeshIndexValue = param_1->MeshIndex;
    local_88.SortInfo = param_1;
    iVar6 = BuildParticleOrder_Inner1<FFloat16,_FNiagaraSortCullHelper<1>::BuildParticleOrder_::__l5::<lambda_1>_>
                      (&local_88,uVar2,uVar7,(<lambda_1>)param_2,param_3);
    return iVar6;
  }
  if (param_1->RendererVisTagAttributeOffset == -1) {
    local_d8.VisibilityTag = (int *)0x0;
  }
  else {
    local_d8.VisibilityTag =
         (int *)((param_2->Int32Data).AllocatorInstance.Data +
                param_1->RendererVisTagAttributeOffset * param_2->Int32Stride);
  }
  local_d8.VisibilityValue = param_1->RendererVisibility;
  if (param_1->MeshIndexAttributeOffset == -1) {
    local_d8.MeshIndexTag = (int *)0x0;
  }
  else {
    local_d8.MeshIndexTag =
         (int *)((param_2->Int32Data).AllocatorInstance.Data +
                param_1->MeshIndexAttributeOffset * param_2->Int32Stride);
  }
  local_d8.MeshIndexValue = param_1->MeshIndex;
  EVar1 = param_1->SortMode;
  local_d8.SortInfo = param_1;
  if (EVar1 == ViewDepth) {
    local_90 = (param_2->FloatData).AllocatorInstance.Data;
    local_38.PositionX = (float **)&local_a0;
    uVar3 = param_2->FloatStride;
    local_38.PositionY = (float **)&local_98;
    local_38.PositionZ = (float **)&local_90;
    local_38.__this = &local_d8;
    local_a0 = local_90 + uVar3 * uVar7;
    local_98 = local_90 + (uVar7 + 1) * uVar3;
    local_90 = local_90 + (uVar7 + 2) * uVar3;
    iVar6 = BuildParticleOrder_Inner2<1,0,_FNiagaraSortCullHelper<1>::BuildParticleOrder_Inner1<float,_FNiagaraSortCullHelper<1>::BuildParticleOrder_::__l7::<lambda_2>_>_::__l5::<lambda_1>_>
                      (&local_d8,uVar2,param_3,&local_38);
  }
  else {
    if (EVar1 == ViewDistance) {
      local_a8 = (param_2->FloatData).AllocatorInstance.Data;
      local_58.PositionX = (float **)&local_res20;
      uVar3 = param_2->FloatStride;
      local_58.PositionY = (float **)&local_b0;
      local_58.PositionZ = (float **)&local_a8;
      local_58.__this = &local_d8;
      local_res20 = local_a8 + uVar3 * uVar7;
      local_b0 = local_a8 + (uVar7 + 1) * uVar3;
      local_a8 = local_a8 + (uVar7 + 2) * uVar3;
      iVar6 = BuildParticleOrder_Inner2<1,0,_FNiagaraSortCullHelper<1>::BuildParticleOrder_Inner1<float,_FNiagaraSortCullHelper<1>::BuildParticleOrder_::__l7::<lambda_2>_>_::__l6::<lambda_2>_>
                        (&local_d8,uVar2,param_3,&local_58);
      return iVar6;
    }
    if (EVar1 == CustomAscending) {
      local_res10[0] = (param_2->FloatData).AllocatorInstance.Data + uVar7 * param_2->FloatStride;
      iVar6 = BuildParticleOrder_Inner2<0,1,_FNiagaraSortCullHelper<1>::BuildParticleOrder_Inner1<float,_FNiagaraSortCullHelper<1>::BuildParticleOrder_::__l7::<lambda_2>_>_::__l7::<lambda_3>_>
                        (&local_d8,uVar2,param_3,(<lambda_3>)local_res10);
      return iVar6;
    }
    if (EVar1 == CustomDecending) {
      local_res8 = (param_2->FloatData).AllocatorInstance.Data + uVar7 * param_2->FloatStride;
      iVar6 = BuildParticleOrder_Inner2<0,0,_FNiagaraSortCullHelper<1>::BuildParticleOrder_Inner1<float,_FNiagaraSortCullHelper<1>::BuildParticleOrder_::__l7::<lambda_2>_>_::__l8::<lambda_4>_>
                        (&local_d8,uVar2,param_3,(<lambda_4>)&local_res8);
      return iVar6;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRenderer.cpp"
                       ,0x33d,L"Unknown sort mode");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  return iVar6;
}

// BuildParticleOrder @ 14933e510

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
FNiagaraSortCullHelper<0>::BuildParticleOrder
          (FNiagaraGPUSortInfo *param_1,FNiagaraDataBuffer *param_2,FParticleOrderAsUint *param_3)

{
  ENiagaraSortMode EVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *local_res8;
  FScriptContainerElement *local_res10 [2];
  FScriptContainerElement *local_res20;
  FNiagaraSortCullHelper<0> local_d8;
  FScriptContainerElement *local_b0;
  FScriptContainerElement *local_a8;
  FScriptContainerElement *local_a0;
  FScriptContainerElement *local_98;
  FScriptContainerElement *local_90;
  <lambda_2> local_88;
  <lambda_1> local_68;
  FNiagaraSortCullHelper<0> local_48;
  
  iVar6 = 0;
  uVar2 = param_2->NumInstances;
  uVar7 = param_1->SortAttributeOffset & 0x7fffffff;
  if (uVar7 != param_1->SortAttributeOffset) {
    local_48.VisibilityTag = (int *)0x0;
    local_48.VisibilityValue = 0;
    local_48.MeshIndexTag = (int *)0x0;
    local_48.MeshIndexValue = 0;
    local_48.SortInfo = param_1;
    iVar6 = BuildParticleOrder_Inner1<FFloat16,_FNiagaraSortCullHelper<0>::BuildParticleOrder_::__l5::<lambda_1>_>
                      (&local_48,uVar2,uVar7,(<lambda_1>)param_2,param_3);
    return iVar6;
  }
  local_d8.VisibilityTag = (int *)0x0;
  local_d8.VisibilityValue = 0;
  local_d8.MeshIndexTag = (int *)0x0;
  local_d8.MeshIndexValue = 0;
  EVar1 = param_1->SortMode;
  local_d8.SortInfo = param_1;
  if (EVar1 == ViewDepth) {
    local_90 = (param_2->FloatData).AllocatorInstance.Data;
    local_68.PositionX = (float **)&local_a0;
    uVar3 = param_2->FloatStride;
    local_68.PositionY = (float **)&local_98;
    local_68.PositionZ = (float **)&local_90;
    local_68.__this = &local_d8;
    local_a0 = local_90 + uVar3 * uVar7;
    local_98 = local_90 + (uVar7 + 1) * uVar3;
    local_90 = local_90 + (uVar7 + 2) * uVar3;
    iVar6 = BuildParticleOrder_Inner2<1,0,_FNiagaraSortCullHelper<0>::BuildParticleOrder_Inner1<float,_FNiagaraSortCullHelper<0>::BuildParticleOrder_::__l7::<lambda_2>_>_::__l5::<lambda_1>_>
                      (&local_d8,uVar2,param_3,&local_68);
  }
  else {
    if (EVar1 == ViewDistance) {
      local_a8 = (param_2->FloatData).AllocatorInstance.Data;
      local_88.PositionX = (float **)&local_res20;
      uVar3 = param_2->FloatStride;
      local_88.PositionY = (float **)&local_b0;
      local_88.PositionZ = (float **)&local_a8;
      local_88.__this = &local_d8;
      local_res20 = local_a8 + uVar3 * uVar7;
      local_b0 = local_a8 + (uVar7 + 1) * uVar3;
      local_a8 = local_a8 + (uVar7 + 2) * uVar3;
      iVar6 = BuildParticleOrder_Inner2<1,0,_FNiagaraSortCullHelper<0>::BuildParticleOrder_Inner1<float,_FNiagaraSortCullHelper<0>::BuildParticleOrder_::__l7::<lambda_2>_>_::__l6::<lambda_2>_>
                        (&local_d8,uVar2,param_3,&local_88);
      return iVar6;
    }
    if (EVar1 == CustomAscending) {
      local_res10[0] = (param_2->FloatData).AllocatorInstance.Data + uVar7 * param_2->FloatStride;
      iVar6 = BuildParticleOrder_Inner2<0,1,_FNiagaraSortCullHelper<0>::BuildParticleOrder_Inner1<float,_FNiagaraSortCullHelper<0>::BuildParticleOrder_::__l7::<lambda_2>_>_::__l7::<lambda_3>_>
                        (&local_d8,uVar2,param_3,(<lambda_3>)local_res10);
      return iVar6;
    }
    if (EVar1 == CustomDecending) {
      local_res8 = (param_2->FloatData).AllocatorInstance.Data + uVar7 * param_2->FloatStride;
      iVar6 = BuildParticleOrder_Inner2<0,0,_FNiagaraSortCullHelper<0>::BuildParticleOrder_Inner1<float,_FNiagaraSortCullHelper<0>::BuildParticleOrder_::__l7::<lambda_2>_>_::__l8::<lambda_4>_>
                        (&local_d8,uVar2,param_3,(<lambda_4>)&local_res8);
      return iVar6;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRenderer.cpp"
                       ,0x33d,L"Unknown sort mode");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  return iVar6;
}

