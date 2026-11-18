// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// AllocateOneFrameResource<FNiagaraRendererMeshes::FMeshCollectorResources> @ 149318640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FMeshCollectorResources * __thiscall
FMeshElementCollector::AllocateOneFrameResource<FNiagaraRendererMeshes::FMeshCollectorResources>
          (FMeshElementCollector *this)

{
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar2;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar3;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar4;
  bool bVar5;
  
  paVar1 = &this->OneFrameResources->Next;
  aVar2 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x230,8);
  *(undefined8 *)((longlong)aVar2 + 8) = 0;
  *(undefined ***)aVar2 =
       &
       ___7__TObject_VFMeshCollectorResources_FNiagaraRendererMeshes_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  TVar3.Next = *paVar1;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar2 + 8) = TVar3.Next;
    LOCK();
    aVar4 = *paVar1;
    bVar5 = TVar3.Next == aVar4;
    if (bVar5) {
      *paVar1 = aVar2;
      aVar4 = TVar3.Next;
    }
    UNLOCK();
    TVar3.Next = aVar4;
  } while (!bVar5);
  memset((undefined8 *)((longlong)aVar2 + 0x18),0,0x218);
  ((FMeshCollectorResources *)((longlong)aVar2 + 0x10))->_padding_ =
       (longlong)&___7FMeshCollectorResources_FNiagaraRendererMeshes__6B_;
  FVertexFactory::FVertexFactory((FVertexFactory *)((longlong)aVar2 + 0x18),Num);
  *(undefined8 *)((longlong)aVar2 + 0x158) = 0;
  *(undefined8 *)((longlong)aVar2 + 0x160) = 0;
  *(undefined ***)((longlong)aVar2 + 0x18) = &___7FNiagaraMeshVertexFactory__6B_;
  *(undefined1 *)((longlong)aVar2 + 0x153) = 0;
  *(undefined8 *)((longlong)aVar2 + 0x168) = 0;
  *(undefined8 *)((longlong)aVar2 + 0x170) = 0;
  *(undefined8 *)((longlong)aVar2 + 0x178) = 0;
  *(undefined8 *)((longlong)aVar2 + 0x180) = 0;
  *(undefined4 *)((longlong)aVar2 + 0x1c8) = 0;
  *(undefined8 *)((longlong)aVar2 + 0x1d0) = 0;
  *(undefined8 *)((longlong)aVar2 + 0x1d8) = 0;
  *(undefined8 *)((longlong)aVar2 + 0x1e0) = 0;
  *(undefined8 *)((longlong)aVar2 + 0x1e8) = 0;
  *(undefined8 *)((longlong)aVar2 + 0x1f0) = 0;
  *(undefined8 *)((longlong)aVar2 + 0x1f8) = 0;
  *(undefined8 *)((longlong)aVar2 + 0x200) = 0;
  *(undefined8 *)((longlong)aVar2 + 0x208) = 0;
  *(undefined1 *)((longlong)aVar2 + 0x216) = 0;
  *(undefined4 *)((longlong)aVar2 + 0x1cc) = 4;
  *(undefined4 *)((longlong)aVar2 + 0x210) = 0xffffffff;
  *(undefined2 *)((longlong)aVar2 + 0x214) = 0xff;
  *(undefined1 *)((longlong)aVar2 + 0x218) = 1;
  *(undefined8 *)((longlong)aVar2 + 0x228) = 0;
  return (FMeshCollectorResources *)((longlong)aVar2 + 0x10);
}

// AllocateOneFrameResource<FNiagaraRibbonMeshCollectorResources> @ 149318780

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FNiagaraRibbonMeshCollectorResources * __thiscall
FMeshElementCollector::AllocateOneFrameResource<FNiagaraRibbonMeshCollectorResources>
          (FMeshElementCollector *this)

{
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar1;
  code *pcVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar3;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar4;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  FNiagaraRibbonMeshCollectorResources *pFVar8;
  undefined8 *puVar9;
  bool bVar10;
  
  paVar1 = &this->OneFrameResources->Next;
  aVar3 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x28,8);
  puVar7 = (undefined8 *)0x0;
  *(undefined8 *)((longlong)aVar3 + 8) = 0;
  *(undefined ***)aVar3 =
       &
       ___7__TObject_VFNiagaraRibbonMeshCollectorResources_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  TVar4.Next = *paVar1;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar3 + 8) = TVar4.Next;
    LOCK();
    aVar5 = *paVar1;
    bVar10 = TVar4.Next == aVar5;
    if (bVar10) {
      *paVar1 = aVar3;
      aVar5 = TVar4.Next;
    }
    UNLOCK();
    TVar4.Next = aVar5;
  } while (!bVar10);
  ((FNiagaraRibbonMeshCollectorResources *)((longlong)aVar3 + 0x10))->_padding_ =
       (longlong)&___7FNiagaraRibbonMeshCollectorResources__6B_;
  puVar6 = ::operator_new(0x90);
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[4] = 0;
    puVar6[7] = 0;
    puVar6[10] = 0;
    *(undefined8 *)((longlong)puVar6 + 100) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x6c) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x74) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x7c) = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[0xb] = 0;
    *(undefined4 *)(puVar6 + 0xc) = 0;
    puVar6[0x10] = 0xffffffffffffffff;
    puVar6[0x11] = 0xffffffffffffffff;
    puVar9 = puVar6;
  }
  *(undefined8 **)((longlong)aVar3 + 0x18) = puVar9;
  puVar6 = ::operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &
              ___7__TReferenceControllerWithDeleter_UFNiagaraRibbonRenderingFrameResources__U__DefaultDeleter_UFNiagaraRibbonRenderingFrameResources___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *(undefined8 **)((longlong)aVar3 + 0x20) = puVar7;
  if ((puVar9 == (undefined8 *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    pFVar8 = (FNiagaraRibbonMeshCollectorResources *)(*pcVar2)();
    return pFVar8;
  }
  return (FNiagaraRibbonMeshCollectorResources *)((longlong)aVar3 + 0x10);
}

// GetDynamicReadBuffer @ 149354710

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FGlobalDynamicReadBuffer * __thiscall
FMeshElementCollector::GetDynamicReadBuffer(FMeshElementCollector *this)

{
  code *pcVar1;
  bool bVar2;
  FGlobalDynamicReadBuffer *pFVar3;
  
  if (this->DynamicReadBuffer != (FGlobalDynamicReadBuffer *)0x0) {
    return this->DynamicReadBuffer;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("DynamicReadBuffer",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                     ,0x3f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGlobalDynamicReadBuffer *)(*pcVar1)();
    return pFVar3;
  }
  return this->DynamicReadBuffer;
}

// AllocateOneFrameResource<FNiagaraRendererSprites::FMeshCollectorResources> @ 14937c2f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FMeshCollectorResources * __thiscall
FMeshElementCollector::AllocateOneFrameResource<FNiagaraRendererSprites::FMeshCollectorResources>
          (FMeshElementCollector *this)

{
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar2;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar3;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar4;
  bool bVar5;
  
  paVar1 = &this->OneFrameResources->Next;
  aVar2 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x1a0,8);
  *(undefined8 *)((longlong)aVar2 + 8) = 0;
  *(undefined ***)aVar2 =
       &
       ___7__TObject_VFMeshCollectorResources_FNiagaraRendererSprites_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  TVar3.Next = *paVar1;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar2 + 8) = TVar3.Next;
    LOCK();
    aVar4 = *paVar1;
    bVar5 = TVar3.Next == aVar4;
    if (bVar5) {
      *paVar1 = aVar2;
      aVar4 = TVar3.Next;
    }
    UNLOCK();
    TVar3.Next = aVar4;
  } while (!bVar5);
  memset((undefined8 *)((longlong)aVar2 + 0x18),0,0x188);
  ((FMeshCollectorResources *)((longlong)aVar2 + 0x10))->_padding_ =
       (longlong)&___7FMeshCollectorResources_FNiagaraRendererSprites__6B_;
  FVertexFactory::FVertexFactory((FVertexFactory *)((longlong)aVar2 + 0x18),Num);
  *(undefined ***)((longlong)aVar2 + 0x18) = &___7FNiagaraSpriteVertexFactory__6B_;
  *(undefined1 *)((longlong)aVar2 + 0x153) = 0;
  *(undefined8 *)((longlong)aVar2 + 0x158) = 0;
  *(undefined8 *)((longlong)aVar2 + 0x160) = 0;
  *(undefined8 *)((longlong)aVar2 + 0x168) = 0;
  *(undefined4 *)((longlong)aVar2 + 0x170) = 0;
  *(undefined8 *)((longlong)aVar2 + 0x178) = 0;
  *(undefined8 *)((longlong)aVar2 + 0x180) = 0;
  *(undefined8 *)((longlong)aVar2 + 0x188) = 0;
  *(undefined4 *)((longlong)aVar2 + 400) = 0;
  *(undefined8 *)((longlong)aVar2 + 0x198) = 0;
  return (FMeshCollectorResources *)((longlong)aVar2 + 0x10);
}

