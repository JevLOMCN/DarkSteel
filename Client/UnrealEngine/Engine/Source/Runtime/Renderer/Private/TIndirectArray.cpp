// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 11

// Empty @ 144753dc0

void __thiscall
TIndirectArray<TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::Empty(TIndirectArray<TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  int *piVar1;
  void *pvVar2;
  uchar *puVar3;
  FMeshDrawShaderBindings *pFVar4;
  FMeshDrawShaderBindings *this_00;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  
  pFVar7 = (this->Array).AllocatorInstance.Data;
  for (iVar5 = (this->Array).ArrayNum; iVar5 != 0; iVar5 = iVar5 + -1) {
    pvVar2 = *(void **)pFVar7;
    if (pvVar2 != (void *)0x0) {
      lVar6 = 0x28;
      pFVar4 = (FMeshDrawShaderBindings *)((longlong)pvVar2 + 0x3fc0);
      do {
        puVar3 = pFVar4[-1].Data.InlineStorage[1];
        this_00 = (FMeshDrawShaderBindings *)(pFVar4[-4].Data.InlineStorage + 5);
        lVar6 = lVar6 + -1;
        if (puVar3 != (uchar *)0x0) {
          FMemory::Free(puVar3);
        }
        puVar3 = pFVar4[-2].Data.InlineStorage[1];
        if (puVar3 != (uchar *)0x0) {
          FMemory::Free(puVar3);
        }
        FMeshDrawShaderBindings::~FMeshDrawShaderBindings(this_00);
        pFVar4 = this_00;
      } while (lVar6 != 0);
      ::operator_delete(pvVar2,0x3fc0);
    }
    pFVar7 = pFVar7 + 8;
  }
  if (-1 < param_1) {
    piVar1 = &(this->Array).ArrayMax;
    (this->Array).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,(ForAnyElementType *)this,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// ~TIndirectArray<TChunkedArray<short,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_> @ 1452fef60

void __thiscall
TIndirectArray<TChunkedArray<short,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::
~TIndirectArray<TChunkedArray<short,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
          (TIndirectArray<TChunkedArray<short,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,0x4000);
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TIndirectArray<TChunkedArray<int,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_> @ 1452feff0

void __thiscall
TIndirectArray<TChunkedArray<int,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::
~TIndirectArray<TChunkedArray<int,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
          (TIndirectArray<TChunkedArray<int,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,0x4000);
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TIndirectArray<TChunkedArray<FPrimitiveSceneInfo_*,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_> @ 1452ff080

void __thiscall
TIndirectArray<TChunkedArray<FPrimitiveSceneInfo_*,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::
~TIndirectArray<TChunkedArray<FPrimitiveSceneInfo_*,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
          (TIndirectArray<TChunkedArray<FPrimitiveSceneInfo_*,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,0x4000);
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TIndirectArray<TChunkedArray<FPrimitiveSceneInfo_const_*,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_> @ 1452ff110

void __thiscall
TIndirectArray<TChunkedArray<FPrimitiveSceneInfo_const_*,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::
~TIndirectArray<TChunkedArray<FPrimitiveSceneInfo_const_*,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
          (TIndirectArray<TChunkedArray<FPrimitiveSceneInfo_const_*,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,0x4000);
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TIndirectArray<TChunkedArray<RayTracing::FRelevantCachedPrimitive,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_> @ 1452ff1a0

void __thiscall
TIndirectArray<TChunkedArray<RayTracing::FRelevantCachedPrimitive,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::
~TIndirectArray<TChunkedArray<RayTracing::FRelevantCachedPrimitive,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
          (TIndirectArray<TChunkedArray<RayTracing::FRelevantCachedPrimitive,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,0x3ff0);
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TIndirectArray<TChunkedArray<RayTracing::FRelevantPrimitive,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_> @ 1452ff230

void __thiscall
TIndirectArray<TChunkedArray<RayTracing::FRelevantPrimitive,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::
~TIndirectArray<TChunkedArray<RayTracing::FRelevantPrimitive,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
          (TIndirectArray<TChunkedArray<RayTracing::FRelevantPrimitive,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,0x3fc0);
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Empty @ 14531ac90

void __thiscall
TIndirectArray<TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::Empty(TIndirectArray<TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  int *piVar1;
  void *pvVar2;
  longlong lVar3;
  int iVar4;
  FMeshDrawShaderBindings *this_00;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    pvVar2 = *(void **)pFVar5;
    if (pvVar2 != (void *)0x0) {
      this_00 = (FMeshDrawShaderBindings *)((longlong)pvVar2 + 0x3f88);
      lVar3 = 0x6b;
      do {
        this_00 = (FMeshDrawShaderBindings *)(this_00[-2].Data.InlineStorage + 7);
        FMeshDrawShaderBindings::~FMeshDrawShaderBindings(this_00);
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      ::operator_delete(pvVar2,0x3f88);
    }
    pFVar5 = pFVar5 + 8;
  }
  if (-1 < param_1) {
    piVar1 = &(this->Array).ArrayMax;
    (this->Array).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,(ForAnyElementType *)this,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// ~TIndirectArray<FMeshBatch,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> @ 1454d6860

/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
TIndirectArray<FMeshBatch,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
~TIndirectArray<FMeshBatch,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          (TIndirectArray<FMeshBatch,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this)

{
  int *piVar1;
  FMeshBatchElement *pFVar2;
  FMeshBatchElement *pFVar3;
  int iVar4;
  void **ppvVar5;
  
  ppvVar5 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    pFVar2 = *ppvVar5;
    if (pFVar2 != (FMeshBatchElement *)0x0) {
      pFVar3 = pFVar2;
      if ((FMeshBatchElement *)pFVar2[1].PrimitiveUniformBuffer != (FMeshBatchElement *)0x0) {
        pFVar3 = (FMeshBatchElement *)pFVar2[1].PrimitiveUniformBuffer;
      }
      DestructItems<FMeshBatchElement,int>(pFVar3,*(int *)&pFVar2[1].PrimitiveUniformBufferResource)
      ;
      if (pFVar2[1].PrimitiveUniformBuffer != (FRHIUniformBuffer *)0x0) {
        FMemory::Free(pFVar2[1].PrimitiveUniformBuffer);
      }
      ::operator_delete(pFVar2,0xe0);
    }
    ppvVar5 = ppvVar5 + 1;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<void_*>_>
              (8,8,0,(ForElementType<void_*> *)this,0,piVar1);
  }
  ppvVar5 = (this->Array).AllocatorInstance.Data;
  if (ppvVar5 != (void **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppvVar5);
    return;
  }
  return;
}

// ~TIndirectArray<TChunkedArray<int,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::FChunk,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> @ 145520070

void __thiscall
TIndirectArray<TChunkedArray<int,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::FChunk,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
::
~TIndirectArray<TChunkedArray<int,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::FChunk,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          (TIndirectArray<TChunkedArray<int,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::FChunk,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  
  ppvVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*ppvVar2,0x400);
    ppvVar2 = ppvVar2 + 1;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<void_*>_>
              (8,8,0,(ForElementType<void_*> *)this,0,piVar1);
  }
  ppvVar2 = (this->Array).AllocatorInstance.Data;
  if (ppvVar2 != (void **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppvVar2);
  }
  return;
}

// ~TIndirectArray<TChunkedArray<FPrimitiveOcclusionHistory,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::FChunk,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> @ 145520100

void __thiscall
TIndirectArray<TChunkedArray<FPrimitiveOcclusionHistory,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::FChunk,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
::
~TIndirectArray<TChunkedArray<FPrimitiveOcclusionHistory,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::FChunk,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          (TIndirectArray<TChunkedArray<FPrimitiveOcclusionHistory,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::FChunk,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  
  ppvVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*ppvVar2,0x3c0);
    ppvVar2 = ppvVar2 + 1;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<void_*>_>
              (8,8,0,(ForElementType<void_*> *)this,0,piVar1);
  }
  ppvVar2 = (this->Array).AllocatorInstance.Data;
  if (ppvVar2 != (void **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppvVar2);
  }
  return;
}

