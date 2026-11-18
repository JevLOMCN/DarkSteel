// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 18

// Emplace<unsigned_int_const_&,FPipelineCacheFileFormatPSO_const_&> @ 145c3c060

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FPipelineCacheFileFormatPSO * __thiscall
TMapBase<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_>
::Emplace<unsigned_int_const_&,FPipelineCacheFileFormatPSO_const_&>
          (TMapBase<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_>
           *this,uint *param_1,FPipelineCacheFileFormatPSO *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x2d8,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x2d8 + 4 + lVar6);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x2d8 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<728,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<728,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_> *)0x0) {
    *(uint *)local_28.Pointer = *param_1;
    FPipelineCacheFileFormatPSO::FPipelineCacheFileFormatPSO
              ((FPipelineCacheFileFormatPSO *)((longlong)local_28.Pointer + 8),param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x2d0) = 0xffffffff;
  }
  uVar3 = *(uint *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  bVar4 = TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar3,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar3,local_28.Pointer,local_res8[0]);
  }
  return (FPipelineCacheFileFormatPSO *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x2d8 + 8);
}

// Emplace<unsigned_int_const_&,FPipelineCacheFileFormatPSOMetaData_const_&> @ 145c3c190

FPipelineCacheFileFormatPSOMetaData * __thiscall
TMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
::Emplace<unsigned_int_const_&,FPipelineCacheFileFormatPSOMetaData_const_&>
          (TMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
           *this,uint *param_1,FPipelineCacheFileFormatPSOMetaData *param_2)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  TSparseArrayBase<192,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<192,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_28);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_> *)0x0) {
    *(uint *)local_28.Pointer = *param_1;
    FPipelineCacheFileFormatPSOMetaData::FPipelineCacheFileFormatPSOMetaData
              ((FPipelineCacheFileFormatPSOMetaData *)((longlong)local_28.Pointer + 8),param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0xb8) = 0xffffffff;
  }
  uVar1 = *(uint *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  bVar2 = TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar1,local_28.Pointer,local_res8,(bool *)0x0);
  lVar3 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar1,local_28.Pointer,local_res8[0]);
  }
  return (FPipelineCacheFileFormatPSOMetaData *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar3 * 0xc0);
}

// Emplace<unsigned_int,FPipelineCacheFileFormatPSO_const_&> @ 145c3c4e0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FPipelineCacheFileFormatPSO * __thiscall
TMapBase<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_>
::Emplace<unsigned_int,FPipelineCacheFileFormatPSO_const_&>
          (TMapBase<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_>
           *this,uint *param_1,FPipelineCacheFileFormatPSO *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x2d8,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x2d8 + 4 + lVar6);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x2d8 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<728,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<728,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_> *)0x0) {
    *(uint *)local_28.Pointer = *param_1;
    FPipelineCacheFileFormatPSO::FPipelineCacheFileFormatPSO
              ((FPipelineCacheFileFormatPSO *)((longlong)local_28.Pointer + 8),param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x2d0) = 0xffffffff;
  }
  uVar3 = *(uint *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  bVar4 = TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar3,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar3,local_28.Pointer,local_res8[0]);
  }
  return (FPipelineCacheFileFormatPSO *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x2d8 + 8);
}

// FindOrAddImpl<unsigned_int_const_&> @ 145c3f240

FFrameState * __thiscall
TMapBase<unsigned_int,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FFrameState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FFrameState,0>_>
::FindOrAddImpl<unsigned_int_const_&>
          (TMapBase<unsigned_int,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FFrameState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FFrameState,0>_>
           *this,uint param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  uint *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x70 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (uint *)0x0) {
            return (FFrameState *)(puVar2 + 2);
          }
          break;
        }
        uVar1 = puVar2[0x1a];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FFrameState>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FFrameState,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FFrameState *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x70 + 8);
}

// FindOrAddImpl<unsigned_int_const_&> @ 145c3f2f0

FPSOUsageData * __thiscall
TMapBase<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>
::FindOrAddImpl<unsigned_int_const_&>
          (TMapBase<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>
           *this,uint param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  uint *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (uint *)0x0) {
            return (FPSOUsageData *)(puVar2 + 2);
          }
          break;
        }
        uVar1 = puVar2[6];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,FPSOUsageData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FPSOUsageData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<UE::RHI::GPUProfiler::FQueue_const_&> @ 145c3f3a0

FStatInstance * __thiscall
TMapBase<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance,0>_>
::FindOrAddImpl<UE::RHI::GPUProfiler::FQueue_const_&>
          (TMapBase<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance,0>_>
           *this,uint param_1,FQueue *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FQueue *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == (param_2->field0_0x0).Value) {
          if (puVar2 != (uint *)0x0) {
            return (FStatInstance *)(puVar2 + 2);
          }
          break;
        }
        uVar1 = puVar2[0xe];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>,TDefaultMapHashableKeyFuncs<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UE::RHI::GPUProfiler::FQueue_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UE::RHI::GPUProfiler::FQueue_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FStatInstance *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x40 + 8);
}

// FindOrAddImpl<FRHIBreadcrumbData_Stats_const_&> @ 145c3f450

int * __thiscall
TMapBase<FRHIBreadcrumbData_Stats,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbData_Stats,int,0>_>
::FindOrAddImpl<FRHIBreadcrumbData_Stats_const_&>
          (TMapBase<FRHIBreadcrumbData_Stats,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbData_Stats,int,0>_>
           *this,uint param_1,FRHIBreadcrumbData_Stats *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FRHIBreadcrumbData_Stats *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(FGPUStat **)(lVar1 + (longlong)iVar2 * 0x18) == param_2->GPUStat) {
          if (lVar3 != 0) goto LAB_145c3f4e2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FRHIBreadcrumbData_Stats,int>,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbData_Stats,int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FRHIBreadcrumbData_Stats_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FRHIBreadcrumbData_Stats_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_145c3f4e2:
  return (int *)(lVar3 + 8);
}

// FindOrAddImpl<FRHIBreadcrumbData_Stats_const_&> @ 145c3f500

FStatState * __thiscall
TMapBase<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState,0>_>
::FindOrAddImpl<FRHIBreadcrumbData_Stats_const_&>
          (TMapBase<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState,0>_>
           *this,uint param_1,FRHIBreadcrumbData_Stats *param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FRHIBreadcrumbData_Stats *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if ((FGPUStat *)*plVar2 == param_2->GPUStat) {
          if (plVar2 != (longlong *)0x0) {
            return (FStatState *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[7];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState>,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FRHIBreadcrumbData_Stats_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FRHIBreadcrumbData_Stats_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FStatState *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x40 + 8);
}

// FindChecked @ 145c57bd0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FPipelineCacheFileFormatPSO * __thiscall
TMapBase<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_>
::FindChecked(TMapBase<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPipelineCacheFileFormatPSO *pFVar4;
  uint *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x2d8 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            return (FPipelineCacheFileFormatPSO *)(puVar5 + 2);
          }
          break;
        }
        uVar3 = puVar5[0xb4];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FPipelineCacheFileFormatPSO *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FPipelineCacheFileFormatPSO *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 145c57c80

TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>
* __thiscall
TMapBase<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>,0>_>
::FindChecked(TMapBase<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>,0>_>
              *this,FQueue *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>
  *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (param_1->field0_0x0).Value) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(uint *)(lVar2 + (longlong)iVar5 * 0x18) == (param_1->field0_0x0).Value) {
          if (lVar1 != 0) {
            return (TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>
                    *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>
            *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>
            *)(*pcVar3)();
  return pTVar6;
}

// FindRef @ 145c57d20

FPipelineStateStats * __thiscall
TMapBase<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>
::FindRef(TMapBase<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>
          *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar1 == 0) {
            return (FPipelineStateStats *)0x0;
          }
          return *(FPipelineStateStats **)(lVar1 + 8);
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FPipelineStateStats *)0x0;
}

// Remove @ 145c74bf0

int __thiscall
TMapBase<void_*,FGPUDefragAllocator::FMemoryChunk_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>_>
::Remove(TMapBase<void_*,FGPUDefragAllocator::FMemoryChunk_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>_>
         *this,void *param_1)

{
  int iVar1;
  uint uVar2;
  void *local_res8 [4];
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    local_res8[0] = param_1;
    iVar1 = TSet<TTuple<void_*,FGPUDefragAllocator::FMemoryChunk_*>,TDefaultMapHashableKeyFuncs<void_*,FGPUDefragAllocator::FMemoryChunk_*,0>,FDefaultSetAllocator>
            ::RemoveImpl<void_const_*>(&this->Pairs,uVar2 >> 0x10 ^ uVar2,local_res8);
    return iVar1;
  }
  return 0;
}

// Find @ 145ca3a00

FComputePipelineState ** __thiscall
TMapBase<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
::Find(TMapBase<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
       *this,FRHIComputeShader *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FComputePipelineState **ppFVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(FRHIComputeShader **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          ppFVar5 = (FComputePipelineState **)0x0;
          if (lVar1 != 0) {
            ppFVar5 = (FComputePipelineState **)(lVar1 + 8);
          }
          return ppFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FComputePipelineState **)0x0;
}

// Find @ 145ca3ab0

FRayTracingPipelineState ** __thiscall
TMapBase<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>_>
::Find(TMapBase<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>_>
       *this,FRayTracingPipelineStateSignature *param_1)

{
  int iVar1;
  FRayTracingPipelineState **ppFVar2;
  longlong lVar3;
  
  iVar1 = TSet<TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FRayTracingPipelineStateSignature>
                    (&this->Pairs,
                     (int)(param_1->CallableHash >> 0x20) * 0x17 + (int)param_1->CallableHash ^
                     (int)(param_1->MissHash >> 0x20) * 0x17 + (int)param_1->MissHash ^
                     (int)(param_1->HitGroupHash >> 0x20) * 0x17 + (int)param_1->HitGroupHash ^
                     (int)(param_1->RayGenHash >> 0x20) * 0x17 + (int)param_1->RayGenHash ^
                     param_1->MaxPayloadSizeInBytes ^ param_1->MaxAttributeSizeInBytes,param_1);
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements;
    ppFVar2 = (FRayTracingPipelineState **)0x0;
    if (lVar3 != 0) {
      ppFVar2 = (FRayTracingPipelineState **)(lVar3 + 0x28);
    }
    return ppFVar2;
  }
  return (FRayTracingPipelineState **)0x0;
}

// Find @ 145ca3b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

FWorkGraphPipelineState ** __thiscall
TMapBase<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
::Find(TMapBase<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
       *this,FWorkGraphPipelineStateInitializer *param_1)

{
  int iVar1;
  FWorkGraphPipelineState **ppFVar2;
  longlong lVar3;
  
  iVar1 = TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FWorkGraphPipelineStateInitializer>
                    (&this->Pairs,
                     (int)((ulonglong)param_1->_padding_ >> 0x20) * 0x17 + (int)param_1->_padding_ ^
                     (int)((ulonglong)param_1->_padding_ >> 0x20) * 0x17 + (int)param_1->_padding_ ^
                     (int)((ulonglong)param_1->_padding_ >> 0x20) * 0x17 + (int)param_1->_padding_ ^
                     (int)((ulonglong)param_1->_padding_ >> 0x20) * 0x17 + (int)param_1->_padding_,
                     param_1);
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x78 + *(longlong *)&(this->Pairs).Elements;
    ppFVar2 = (FWorkGraphPipelineState **)0x0;
    if (lVar3 != 0) {
      ppFVar2 = (FWorkGraphPipelineState **)(lVar3 + 0x68);
    }
    return ppFVar2;
  }
  return (FWorkGraphPipelineState **)0x0;
}

// Find @ 145ca3c00

FPrecacheTask * __thiscall
TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,0>_>
::Find(TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  FPrecacheTask *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FPrecacheTask *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pFVar3 = (FPrecacheTask *)(puVar2 + 1);
          }
          return pFVar3;
        }
        iVar1 = (int)puVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (FPrecacheTask *)0x0;
}

// Find @ 145ca3c70

/* WARNING: Enum "Type": Some values do not have unique names */

FPrecacheTask * __thiscall
TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,0>_>
::Find(TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  FPrecacheTask *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FPrecacheTask *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pFVar3 = (FPrecacheTask *)(puVar2 + 1);
          }
          return pFVar3;
        }
        iVar1 = (int)puVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (FPrecacheTask *)0x0;
}

// FindChecked @ 145ca44c0

EState * __thiscall
TMapBase<FRHIBreadcrumbNode_*,enum_FGPUBreadcrumbCrashData::EState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbNode_*,enum_FGPUBreadcrumbCrashData::EState,0>_>
::FindChecked(void *this,FRHIBreadcrumbNode *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  EState *pEVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)((longlong)this + 0x48) - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(FRHIBreadcrumbNode **)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (EState *)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return &DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pEVar4 = (EState *)(*pcVar1)();
  return pEVar4;
}

