// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// Create @ 14549b920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FViewInfo * __thiscall FViewSnapshotCache::Create(FViewSnapshotCache *this,FViewInfo *param_1)

{
  FGPUSceneDynamicContext *pFVar1;
  FUploadData *pFVar2;
  code *pcVar3;
  TRangeBound<int> TVar4;
  TRangeBound<int> TVar5;
  bool bVar6;
  uint uVar7;
  FViewInfo *pFVar8;
  atomic<void_*> _Dst;
  FIndexedLockFreeLink *pFVar9;
  bool bVar10;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_class_FViewInfo*___ptr64___cdecl_FViewSnapshotCache::Create(FViewInfo_const*___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId13,"ViewSnapshotCache::Create",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Renderer\\ViewSnapshotCache.cpp"
               ,0xd);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_class_FViewInfo*___ptr64___cdecl_FViewSnapshotCache::Create(FViewInfo_const*___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId13);
  }
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Renderer\\ViewSnapshotCache.cpp"
                         ,0xe,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FViewInfo *)(*pcVar3)();
    return pFVar8;
  }
  uVar7 = FLockFreePointerListLIFORoot<64,1>::Pop
                    ((FLockFreePointerListLIFORoot<64,1> *)&this->FreeSnapshots);
  _Dst = (atomic<void_*>)0x0;
  if (uVar7 != 0) {
    _Dst = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar7 >> 0xe][uVar7 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar7);
  }
  if (_Dst == (atomic<void_*>)0x0) {
    _Dst = (atomic<void_*>)FMemory::Malloc(0x2970,0x10);
  }
  else {
    LOCK();
    this->NumFreeSnapshots = (atomic<int>)((int)this->NumFreeSnapshots + -1);
    UNLOCK();
  }
  uVar7 = FLockFreeLinkPolicy::AllocLockFreeLink();
  if (uVar7 == 0) {
    pFVar9 = (FIndexedLockFreeLink *)0x0;
  }
  else {
    pFVar9 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar7 >> 0xe] + (uVar7 & 0x3fff);
  }
  pFVar9->Payload = _Dst;
  FLockFreePointerListLIFORoot<64,1>::Push((FLockFreePointerListLIFORoot<64,1> *)this,uVar7);
  LOCK();
  this->NumSnapshots = (atomic<int>)((int)this->NumSnapshots + 1);
  UNLOCK();
  memcpy((void *)_Dst,param_1,0x2970);
  *(undefined8 *)((longlong)_Dst + 0x18) = 0;
  *(undefined8 *)((longlong)_Dst + 0x1c20) = 0;
  *(undefined8 *)((longlong)_Dst + 0x1c48) = 0;
  memset((void *)((longlong)_Dst + 0x2088),0,0x138);
  pFVar1 = (param_1->DynamicPrimitiveCollector).GPUSceneDynamicContext;
  TVar4 = (param_1->DynamicPrimitiveCollector).PrimitiveIdRange.LowerBound;
  TVar5 = (param_1->DynamicPrimitiveCollector).PrimitiveIdRange.UpperBound;
  pFVar2 = (param_1->DynamicPrimitiveCollector).UploadData;
  *(bool *)((longlong)_Dst + 0x2920) = (param_1->DynamicPrimitiveCollector).bCommitted;
  *(FGPUSceneDynamicContext **)((longlong)_Dst + 0x2928) = pFVar1;
  *(TRangeBound<int> *)((longlong)_Dst + 0x2908) = TVar4;
  *(TRangeBound<int> *)((longlong)_Dst + 0x2910) = TVar5;
  *(FUploadData **)((longlong)_Dst + 0x2918) = pFVar2;
  *(FViewInfo **)((longlong)_Dst + 0x1c08) = param_1;
  ::operator_delete((void *)0x0,0x17b0);
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (FViewInfo *)_Dst;
}

// Destroy @ 1454a0530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall FViewSnapshotCache::Destroy(FViewSnapshotCache *this)

{
  int *piVar1;
  atomic<void_*> *paVar2;
  int iVar3;
  atomic<void_*> aVar4;
  FRHIResource *pFVar5;
  void *pvVar6;
  uint uVar7;
  FIndexedLockFreeLink *pFVar8;
  undefined8 *puVar9;
  atomic<void_*> *paVar10;
  bool bVar11;
  undefined1 local_res10 [8];
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FViewSnapshotCache::Destroy(void)___ptr64'::__l2::
                __CpuProfilerEventSpecId68,"FViewInfo::DestroyAllSnapshots",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Renderer\\ViewSnapshotCache.cpp"
               ,0x44);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FViewSnapshotCache::Destroy(void)___ptr64'::__l2::
               __CpuProfilerEventSpecId68);
  }
  if (0 < this->NumSnapshotsToRemove) {
    do {
      uVar7 = FLockFreePointerListLIFORoot<64,1>::Pop
                        ((FLockFreePointerListLIFORoot<64,1> *)&this->FreeSnapshots);
      if (uVar7 == 0) break;
      aVar4 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar7 >> 0xe][uVar7 & 0x3fff].Payload;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar7);
      if (aVar4 == (atomic<void_*>)0x0) break;
      LOCK();
      this->NumFreeSnapshots = (atomic<int>)((int)this->NumFreeSnapshots + -1);
      UNLOCK();
      FMemory::Free((void *)aVar4);
      piVar1 = &this->NumSnapshotsToRemove;
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
    this->NumSnapshotsToRemove = 0;
  }
  paVar10 = (atomic<void_*> *)(this->DeallocatedSnapshots).AllocatorInstance.Data;
  iVar3 = (this->DeallocatedSnapshots).ArrayNum;
  paVar2 = paVar10 + iVar3;
  while( true ) {
    if ((this->DeallocatedSnapshots).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FViewInfo_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (paVar10 == paVar2) break;
    aVar4 = *paVar10;
    pFVar5 = *(FRHIResource **)((longlong)aVar4 + 0x18);
    if (pFVar5 != (FRHIResource *)0x0) {
      *(undefined8 *)((longlong)aVar4 + 0x18) = 0;
      FRHIResource::Release(pFVar5);
    }
    pFVar5 = *(FRHIResource **)((longlong)aVar4 + 0x1c20);
    if (pFVar5 != (FRHIResource *)0x0) {
      *(undefined8 *)((longlong)aVar4 + 0x1c20) = 0;
      FRHIResource::Release(pFVar5);
    }
    pvVar6 = *(void **)((longlong)aVar4 + 0x1c48);
    if (pvVar6 != (void *)0x0) {
      *(undefined8 *)((longlong)aVar4 + 0x1c48) = 0;
      ::operator_delete(pvVar6,0x17b0);
    }
    for (puVar9 = (undefined8 *)((longlong)aVar4 + 0x2088);
        puVar9 != (undefined8 *)((longlong)aVar4 + 0x21c0); puVar9 = puVar9 + 1) {
      if ((FParallelMeshDrawCommandPass *)*puVar9 != (FParallelMeshDrawCommandPass *)0x0) {
        FParallelMeshDrawCommandPass::Cleanup((FParallelMeshDrawCommandPass *)*puVar9);
      }
    }
    pFVar8 = (FIndexedLockFreeLink *)0x0;
    *(undefined8 *)((longlong)aVar4 + 0x1c08) = 0;
    uVar7 = FLockFreeLinkPolicy::AllocLockFreeLink();
    if (uVar7 != 0) {
      pFVar8 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar7 >> 0xe] + (uVar7 & 0x3fff);
    }
    pFVar8->Payload = aVar4;
    FLockFreePointerListLIFORoot<64,1>::Push
              ((FLockFreePointerListLIFORoot<64,1> *)&this->FreeSnapshots,uVar7);
    LOCK();
    this->NumFreeSnapshots = (atomic<int>)((int)this->NumFreeSnapshots + 1);
    UNLOCK();
    paVar10 = paVar10 + 1;
  }
  (this->DeallocatedSnapshots).ArrayNum = 0;
  if ((this->DeallocatedSnapshots).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->DeallocatedSnapshots).AllocatorInstance,0,
               &(this->DeallocatedSnapshots).ArrayMax);
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

