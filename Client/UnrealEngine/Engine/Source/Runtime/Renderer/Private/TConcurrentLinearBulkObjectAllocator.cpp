// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 16

// Create<FNaniteVisibilityQuery> @ 14502e010

FNaniteVisibilityQuery * __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
Create<FNaniteVisibilityQuery>
          (TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *this)

{
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar3;
  bool bVar4;
  
  aVar1 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x170,8);
  *(undefined8 *)((longlong)aVar1 + 8) = 0;
  *(undefined ***)aVar1 =
       &
       ___7__TObject_UFNaniteVisibilityQuery_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  aVar2 = this->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar1 + 8) = aVar2;
    LOCK();
    aVar3 = this->Next;
    bVar4 = aVar2 == aVar3;
    if (bVar4) {
      this->Next = aVar1;
      aVar3 = aVar2;
    }
    UNLOCK();
    aVar2 = aVar3;
  } while (!bVar4);
  *(undefined8 *)((longlong)aVar1 + 0x58) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x60) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x80) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x88) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x90) = 0;
  *(undefined8 *)((longlong)aVar1 + 0xa4) = 0;
  *(undefined8 *)((longlong)aVar1 + 0xac) = 0;
  *(undefined4 *)((longlong)aVar1 + 0xb4) = 0;
  *(undefined8 *)((longlong)aVar1 + 200) = 0;
  *(undefined8 *)((longlong)aVar1 + 0xd0) = 0;
  *(undefined8 *)((longlong)aVar1 + 0xf8) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x100) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x120) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x128) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x130) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x144) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x15e) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x166) = 0;
  *(undefined2 *)((longlong)aVar1 + 0x16e) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x10) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x18) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x20) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x28) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x30) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x38) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x40) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x48) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x50) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x68) = 0;
  *(undefined4 *)((longlong)aVar1 + 0x70) = 0;
  *(undefined4 *)((longlong)aVar1 + 0x74) = 0x80;
  *(undefined4 *)((longlong)aVar1 + 0x78) = 0xffffffff;
  *(undefined4 *)((longlong)aVar1 + 0x7c) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x98) = 0;
  *(undefined4 *)((longlong)aVar1 + 0xa0) = 0;
  *(undefined8 *)((longlong)aVar1 + 0xb8) = 0;
  *(undefined4 *)((longlong)aVar1 + 0xc0) = 0;
  *(undefined4 *)((longlong)aVar1 + 0xc4) = 0x80;
  *(undefined8 *)((longlong)aVar1 + 0xd8) = 0;
  *(undefined4 *)((longlong)aVar1 + 0xe0) = 0;
  *(undefined4 *)((longlong)aVar1 + 0xe4) = 0x80;
  *(undefined8 *)((longlong)aVar1 + 0xe8) = 0;
  *(undefined8 *)((longlong)aVar1 + 0xf0) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x108) = 0;
  *(undefined4 *)((longlong)aVar1 + 0x110) = 0;
  *(undefined4 *)((longlong)aVar1 + 0x114) = 0x80;
  *(undefined4 *)((longlong)aVar1 + 0x118) = 0xffffffff;
  *(undefined4 *)((longlong)aVar1 + 0x11c) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x138) = 0;
  *(undefined4 *)((longlong)aVar1 + 0x140) = 0;
  *(undefined2 *)((longlong)aVar1 + 0x15c) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x14c) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x154) = 0;
  return (FNaniteVisibilityQuery *)((longlong)aVar1 + 0x10);
}

// Create<RayTracing::FGatherInstancesTaskData,TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>_&,FScene_&,unsigned_int_&> @ 1452f76b0

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FGatherInstancesTaskData * __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
Create<RayTracing::FGatherInstancesTaskData,TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>_&,FScene_&,unsigned_int_&>
          (TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *this,
          TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *param_1,
          FScene *param_2,uint *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar5;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar6;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar7;
  FTaskEventBase *pFVar8;
  bool bVar9;
  
  aVar5 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0xe8,8);
  *(undefined8 *)((longlong)aVar5 + 8) = 0;
  *(undefined ***)aVar5 =
       &
       ___7__TObject_UFGatherInstancesTaskData_RayTracing_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  aVar6 = this->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar5 + 8) = aVar6;
    LOCK();
    aVar7 = this->Next;
    bVar9 = aVar6 == aVar7;
    if (bVar9) {
      this->Next = aVar5;
      aVar7 = aVar6;
    }
    UNLOCK();
    aVar6 = aVar7;
  } while (!bVar9);
  uVar4 = *param_3;
  piVar1 = (int *)((longlong)aVar5 + 0x2c);
  ((FGatherInstancesTaskData *)((longlong)aVar5 + 0x10))->Scene = param_2;
  *(TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> **)
   ((longlong)aVar5 + 0x18) = param_1;
  piVar2 = (int *)((longlong)aVar5 + 0x3c);
  *piVar2 = 0;
  piVar3 = (int *)((longlong)aVar5 + 0x4c);
  *piVar3 = 0;
  *(undefined8 *)((longlong)aVar5 + 0x20) = 0;
  *(undefined4 *)((longlong)aVar5 + 0x28) = 0;
  *piVar1 = 0;
  *(undefined8 *)((longlong)aVar5 + 0x30) = 0;
  *(undefined4 *)((longlong)aVar5 + 0x38) = 0;
  *(undefined8 *)((longlong)aVar5 + 0x40) = 0;
  *(undefined4 *)((longlong)aVar5 + 0x48) = 0;
  UE::Tasks::FPipe::FPipe
            ((FPipe *)((longlong)aVar5 + 0x50),
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracing.cpp(386)"
            );
  UE::Tasks::FPipe::FPipe
            ((FPipe *)((longlong)aVar5 + 0x78),
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracing.cpp(387)"
            );
  *(undefined8 *)((longlong)aVar5 + 0xa8) = 0;
  pFVar8 = UE::Tasks::Private::FTaskEventBase::Create
                     (
                     L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracing.cpp(393)"
                     );
  *(FTaskEventBase **)((longlong)aVar5 + 0xb0) = pFVar8;
  *(undefined1 *)((longlong)aVar5 + 0xb8) = 0;
  *(undefined8 *)((longlong)aVar5 + 0xc0) = 0;
  *(undefined8 *)((longlong)aVar5 + 200) = 0;
  *(undefined8 *)((longlong)aVar5 + 0xd0) = 0;
  *(undefined8 *)((longlong)aVar5 + 0xd8) = 0;
  *(undefined1 *)((longlong)aVar5 + 0xe0) = 0;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (*piVar1 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb8,8,uVar4,(ForAnyElementType *)((longlong)aVar5 + 0x20),
               *(int *)((longlong)aVar5 + 0x28),piVar1);
  }
  if (*piVar2 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,(ForAnyElementType *)((longlong)aVar5 + 0x30),
               *(int *)((longlong)aVar5 + 0x38),piVar2);
  }
  if (*piVar3 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,(ForAnyElementType *)((longlong)aVar5 + 0x40),
               *(int *)((longlong)aVar5 + 0x48),piVar3);
  }
  return (FGatherInstancesTaskData *)((longlong)aVar5 + 0x10);
}

// ~TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> @ 1452fedb0

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
~TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>
          (TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *this)

{
  int iVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar3;
  longlong lVar4;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  uint *puVar5;
  int *piVar6;
  
  LOCK();
  aVar2 = this->Next;
  this->Next = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                )0x0;
  UNLOCK();
  while (aVar2 != (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                   )0x0) {
    aVar3 = *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
              *)((longlong)aVar2 + 8);
    (*(code *)**(undefined8 **)aVar2)(aVar2);
    puVar5 = (uint *)((longlong)aVar2 + -8);
    MemoryTrace_Free((ulong64)puVar5,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,puVar5,FMalloc,true);
    }
    piVar6 = (int *)((longlong)puVar5 - (ulonglong)*puVar5);
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    aVar2 = aVar3;
    if (iVar1 == 1) {
      lVar4 = *(longlong *)(piVar6 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar6,0,0);
      if (lVar4 - (longlong)piVar6 == 0x10000) {
        this_01 = FPageAllocator::Get();
        FPageAllocator::Free(this_01,piVar6);
      }
      else {
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))();
      }
    }
  }
  return;
}

// ~TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> @ 1454788b0

void __thiscall
TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::
~TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>
          (TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> *this)

{
  int iVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar3;
  longlong lVar4;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  uint *puVar5;
  int *piVar6;
  
  LOCK();
  aVar2 = this->Next;
  this->Next = (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>
                )0x0;
  UNLOCK();
  while (aVar2 != (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>
                   )0x0) {
    aVar3 = *(atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>
              *)((longlong)aVar2 + 8);
    (*(code *)**(undefined8 **)aVar2)(aVar2);
    puVar5 = (uint *)((longlong)aVar2 + -8);
    MemoryTrace_Free((ulong64)puVar5,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,puVar5,FMalloc,true);
    }
    piVar6 = (int *)((longlong)puVar5 - (ulonglong)*puVar5);
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    aVar2 = aVar3;
    if (iVar1 == 1) {
      lVar4 = *(longlong *)(piVar6 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar6,0,0);
      if (lVar4 - (longlong)piVar6 == 0x10000) {
        this_01 = FPageAllocator::Get();
        FPageAllocator::Free(this_01,piVar6);
      }
      else {
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))();
      }
    }
  }
  return;
}

// Create<FHairStrandsViewData> @ 1454c99c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FHairStrandsViewData * __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
Create<FHairStrandsViewData>
          (TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *this)

{
  FHairStrandsViewData *this_00;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar3;
  bool bVar4;
  
  aVar1 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x5a0,0x10);
  *(undefined8 *)((longlong)aVar1 + 8) = 0;
  *(undefined ***)aVar1 =
       &
       ___7__TObject_UFHairStrandsViewData_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  this_00 = (FHairStrandsViewData *)((longlong)aVar1 + 0x10);
  aVar2 = this->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar1 + 8) = aVar2;
    LOCK();
    aVar3 = this->Next;
    bVar4 = aVar2 == aVar3;
    if (bVar4) {
      this->Next = aVar1;
      aVar3 = aVar2;
    }
    UNLOCK();
    aVar2 = aVar3;
  } while (!bVar4);
  memset(this_00,0,0x590);
  FHairStrandsViewData::FHairStrandsViewData(this_00);
  return this_00;
}

// Create<FLocalFogVolumeViewData> @ 1454c9a30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FLocalFogVolumeViewData * __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
Create<FLocalFogVolumeViewData>
          (TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *this)

{
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar3;
  bool bVar4;
  
  aVar1 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x130,0x10);
  *(undefined8 *)((longlong)aVar1 + 8) = 0;
  *(undefined ***)aVar1 =
       &
       ___7__TObject_UFLocalFogVolumeViewData_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  aVar2 = this->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar1 + 8) = aVar2;
    LOCK();
    aVar3 = this->Next;
    bVar4 = aVar2 == aVar3;
    if (bVar4) {
      this->Next = aVar1;
      aVar3 = aVar2;
    }
    UNLOCK();
    aVar2 = aVar3;
  } while (!bVar4);
  *(undefined8 *)((longlong)aVar1 + 0x10) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x68) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x78) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x80) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x88) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x90) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x98) = 0;
  *(undefined8 *)((longlong)aVar1 + 0xb0) = 0;
  *(undefined8 *)((longlong)aVar1 + 0xb8) = 0;
  *(undefined8 *)((longlong)aVar1 + 0xc0) = 0;
  *(undefined8 *)((longlong)aVar1 + 200) = 0;
  *(undefined8 *)((longlong)aVar1 + 0xd8) = 0;
  *(undefined8 *)((longlong)aVar1 + 0xf9) = 0;
  *(undefined4 *)((longlong)aVar1 + 0x101) = 0;
  *(undefined2 *)((longlong)aVar1 + 0x105) = 0;
  *(undefined1 *)((longlong)aVar1 + 0x107) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x128) = 0;
  *(undefined1 *)((longlong)aVar1 + 0xf8) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x18) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x20) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x28) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x30) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x38) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x40) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x48) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x50) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x58) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x60) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x70) = 0;
  *(undefined8 *)((longlong)aVar1 + 0xa0) = 0;
  *(undefined4 *)((longlong)aVar1 + 0xa8) = 0;
  *(undefined4 *)((longlong)aVar1 + 0xac) = 0x3f800000;
  *(undefined8 *)((longlong)aVar1 + 0xd0) = 0;
  *(undefined8 *)((longlong)aVar1 + 0xe0) = 0;
  *(undefined8 *)((longlong)aVar1 + 0xe8) = 0;
  *(undefined8 *)((longlong)aVar1 + 0xf0) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x108) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x110) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x118) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x120) = 0;
  return (FLocalFogVolumeViewData *)((longlong)aVar1 + 0x10);
}

// Create<FPreviousViewInfo> @ 1454c9b60

FPreviousViewInfo * __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::Create<FPreviousViewInfo>
          (TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *this)

{
  FPreviousViewInfo *this_00;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar3;
  bool bVar4;
  
  aVar1 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0xdb0,0x10);
  *(undefined8 *)((longlong)aVar1 + 8) = 0;
  *(undefined ***)aVar1 =
       &
       ___7__TObject_UFPreviousViewInfo_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  this_00 = (FPreviousViewInfo *)((longlong)aVar1 + 0x10);
  aVar2 = this->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar1 + 8) = aVar2;
    LOCK();
    aVar3 = this->Next;
    bVar4 = aVar2 == aVar3;
    if (bVar4) {
      this->Next = aVar1;
      aVar3 = aVar2;
    }
    UNLOCK();
    aVar2 = aVar3;
  } while (!bVar4);
  memset(this_00,0,0xda0);
  FPreviousViewInfo::FPreviousViewInfo(this_00);
  return this_00;
}

// Create<FSubstrateViewData> @ 1454c9fa0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FSubstrateViewData * __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::Create<FSubstrateViewData>
          (TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *this)

{
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar3;
  bool bVar4;
  
  aVar1 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(200,8);
  *(undefined8 *)((longlong)aVar1 + 8) = 0;
  *(undefined ***)aVar1 =
       &
       ___7__TObject_UFSubstrateViewData_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  aVar2 = this->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar1 + 8) = aVar2;
    LOCK();
    aVar3 = this->Next;
    bVar4 = aVar2 == aVar3;
    if (bVar4) {
      this->Next = aVar1;
      aVar3 = aVar2;
    }
    UNLOCK();
    aVar2 = aVar3;
  } while (!bVar4);
  *(undefined4 *)((longlong)aVar1 + 0x18) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x28) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x48) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x50) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x58) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x60) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x68) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x10) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x1c) = 0;
  *(undefined4 *)((longlong)aVar1 + 0x24) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x30) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x38) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x40) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x70) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x78) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x80) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x88) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x90) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x98) = 0;
  *(undefined8 *)((longlong)aVar1 + 0xa0) = 0;
  *(undefined8 *)((longlong)aVar1 + 0xa8) = 0;
  *(undefined8 *)((longlong)aVar1 + 0xb0) = 0;
  *(undefined8 *)((longlong)aVar1 + 0xb8) = 0;
  *(undefined8 *)((longlong)aVar1 + 0xc0) = 0;
  return (FSubstrateViewData *)((longlong)aVar1 + 0x10);
}

// Create<FGlobalDistanceFieldInfo> @ 1454ca070

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FGlobalDistanceFieldInfo * __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
Create<FGlobalDistanceFieldInfo>
          (TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *this)

{
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar3;
  bool bVar4;
  
  aVar1 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x290,0x10);
  *(undefined8 *)((longlong)aVar1 + 8) = 0;
  *(undefined ***)aVar1 =
       &
       ___7__TObject_VFGlobalDistanceFieldInfo_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  aVar2 = this->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar1 + 8) = aVar2;
    LOCK();
    aVar3 = this->Next;
    bVar4 = aVar2 == aVar3;
    if (bVar4) {
      this->Next = aVar1;
      aVar3 = aVar2;
    }
    UNLOCK();
    aVar2 = aVar3;
  } while (!bVar4);
  *(undefined4 *)((longlong)aVar1 + 0x11) = 0;
  *(undefined2 *)((longlong)aVar1 + 0x15) = 0;
  *(undefined1 *)((longlong)aVar1 + 0x17) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x38) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x288) = 0;
  ((FGlobalDistanceFieldInfo *)((longlong)aVar1 + 0x10))->bInitialized = false;
  *(undefined8 *)((longlong)aVar1 + 0x18) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x20) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x28) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x30) = 0;
  memset((undefined8 *)((longlong)aVar1 + 0x40),0,0x200);
  *(undefined8 *)((longlong)aVar1 + 0x240) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x248) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x250) = 0;
  *(undefined8 *)((longlong)aVar1 + 600) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x260) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x268) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x270) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x278) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x280) = 0;
  return (FGlobalDistanceFieldInfo *)((longlong)aVar1 + 0x10);
}

// Create<FLumenTranslucencyGIVolume> @ 1454ca150

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FLumenTranslucencyGIVolume * __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
Create<FLumenTranslucencyGIVolume>
          (TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *this)

{
  FLumenTranslucencyGIVolume *this_00;
  undefined8 uVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar3;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar4;
  bool bVar5;
  
  aVar2 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x1e0,0x10);
  *(undefined8 *)((longlong)aVar2 + 8) = 0;
  *(undefined ***)aVar2 =
       &
       ___7__TObject_VFLumenTranslucencyGIVolume_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  this_00 = (FLumenTranslucencyGIVolume *)((longlong)aVar2 + 0x10);
  aVar3 = this->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar2 + 8) = aVar3;
    LOCK();
    aVar4 = this->Next;
    bVar5 = aVar3 == aVar4;
    if (bVar5) {
      this->Next = aVar2;
      aVar4 = aVar3;
    }
    UNLOCK();
    aVar3 = aVar4;
  } while (!bVar5);
  memset(this_00,0,0x1d0);
  LumenRadianceCache::FRadianceCacheInterpolationParameters::FRadianceCacheInterpolationParameters
            ((FRadianceCacheInterpolationParameters *)this_00);
  *(undefined8 *)((longlong)aVar2 + 400) = 0;
  *(undefined8 *)((longlong)aVar2 + 0x198) = 0;
  *(undefined8 *)((longlong)aVar2 + 0x1a0) = 0;
  *(undefined8 *)((longlong)aVar2 + 0x1a8) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)aVar2 + 0x1b0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)aVar2 + 0x1b8) = uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)aVar2 + 0x1c8) = 0;
  *(undefined8 *)((longlong)aVar2 + 0x1c0) = uVar1;
  *(undefined8 *)((longlong)aVar2 + 0x1cc) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  *(int *)((longlong)aVar2 + 0x1d4) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  return this_00;
}

// Create<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 145514e60

TArray<bool,TSizedDefaultAllocator<32>_> * __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
Create<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *this)

{
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar3;
  bool bVar4;
  
  aVar1 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x20,8);
  *(undefined8 *)((longlong)aVar1 + 8) = 0;
  *(undefined ***)aVar1 =
       &
       ___7__TObject_V__TArray__NV__TSizedDefaultAllocator__0CA________TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  aVar2 = this->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar1 + 8) = aVar2;
    LOCK();
    aVar3 = this->Next;
    bVar4 = aVar2 == aVar3;
    if (bVar4) {
      this->Next = aVar1;
      aVar3 = aVar2;
    }
    UNLOCK();
    aVar2 = aVar3;
  } while (!bVar4);
  *(undefined8 *)((longlong)aVar1 + 0x10) = 0;
  *(undefined8 *)((longlong)aVar1 + 0x18) = 0;
  return (TArray<bool,TSizedDefaultAllocator<32>_> *)((longlong)aVar1 + 0x10);
}

// BulkDelete @ 14552ae20

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::BulkDelete
          (TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *this)

{
  int iVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar3;
  longlong lVar4;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  uint *puVar5;
  int *piVar6;
  
  LOCK();
  aVar2 = this->Next;
  this->Next = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                )0x0;
  UNLOCK();
  while (aVar2 != (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                   )0x0) {
    aVar3 = *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
              *)((longlong)aVar2 + 8);
    (*(code *)**(undefined8 **)aVar2)(aVar2);
    puVar5 = (uint *)((longlong)aVar2 + -8);
    MemoryTrace_Free((ulong64)puVar5,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,puVar5,FMalloc,true);
    }
    piVar6 = (int *)((longlong)puVar5 - (ulonglong)*puVar5);
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    aVar2 = aVar3;
    if (iVar1 == 1) {
      lVar4 = *(longlong *)(piVar6 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar6,0,0);
      if (lVar4 - (longlong)piVar6 == 0x10000) {
        this_01 = FPageAllocator::Get();
        FPageAllocator::Free(this_01,piVar6);
      }
      else {
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))();
      }
    }
  }
  return;
}

// Create<FProjectedShadowInfo> @ 1455ff310

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

FProjectedShadowInfo * __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
Create<FProjectedShadowInfo>
          (TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *this)

{
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar3;
  bool bVar4;
  
  aVar1 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x1150,0x10);
  *(undefined8 *)((longlong)aVar1 + 8) = 0;
  *(undefined ***)aVar1 =
       &
       ___7__TObject_VFProjectedShadowInfo_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  aVar2 = this->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar1 + 8) = aVar2;
    LOCK();
    aVar3 = this->Next;
    bVar4 = aVar2 == aVar3;
    if (bVar4) {
      this->Next = aVar1;
      aVar3 = aVar2;
    }
    UNLOCK();
    aVar2 = aVar3;
  } while (!bVar4);
  FProjectedShadowInfo::FProjectedShadowInfo((FProjectedShadowInfo *)((longlong)aVar1 + 0x10));
  return (FProjectedShadowInfo *)((longlong)aVar1 + 0x10);
}

// Create<FShadowMeshCollector,FRHICommandList_&,FSceneRenderer_&> @ 1455ff370

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FShadowMeshCollector * __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
Create<FShadowMeshCollector,FRHICommandList_&,FSceneRenderer_&>
          (TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *this,
          FRHICommandList *param_1,FSceneRenderer *param_2)

{
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar3;
  bool bVar4;
  
  aVar1 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x1e0,8);
  *(undefined8 *)((longlong)aVar1 + 8) = 0;
  *(undefined ***)aVar1 =
       &
       ___7__TObject_VFShadowMeshCollector_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  aVar2 = this->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar1 + 8) = aVar2;
    LOCK();
    aVar3 = this->Next;
    bVar4 = aVar2 == aVar3;
    if (bVar4) {
      this->Next = aVar1;
      aVar3 = aVar2;
    }
    UNLOCK();
    aVar2 = aVar3;
  } while (!bVar4);
  FShadowMeshCollector::FShadowMeshCollector
            ((FShadowMeshCollector *)((longlong)aVar1 + 0x10),param_1,param_2);
  return (FShadowMeshCollector *)((longlong)aVar1 + 0x10);
}

// Create<FUniqueRequestList,TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>_&> @ 1458c4c70

FUniqueRequestList * __thiscall
TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::
Create<FUniqueRequestList,TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>_&>
          (TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> *this,
          TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> *param_1)

{
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar3;
  bool bVar4;
  
  aVar1 = (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>)
          TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(0xd870,8);
  *(undefined8 *)((longlong)aVar1 + 8) = 0;
  *(undefined ***)aVar1 =
       &
       ___7__TObject_VFUniqueRequestList_____TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_
  ;
  aVar2 = this->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> *)
     ((longlong)aVar1 + 8) = aVar2;
    LOCK();
    aVar3 = this->Next;
    bVar4 = aVar2 == aVar3;
    if (bVar4) {
      this->Next = aVar1;
      aVar3 = aVar2;
    }
    UNLOCK();
    aVar2 = aVar3;
  } while (!bVar4);
  FUniqueRequestList::FUniqueRequestList((FUniqueRequestList *)((longlong)aVar1 + 0x10),param_1);
  return (FUniqueRequestList *)((longlong)aVar1 + 0x10);
}

// Malloc @ 1459107b0

void * __thiscall
TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::Malloc
          (TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> *this,ulong64 param_1,
          uint param_2)

{
  ulonglong uVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar3;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar4;
  bool bVar5;
  
  uVar1 = (ulonglong)param_2;
  if (param_2 < 8) {
    param_2 = 8;
  }
  aVar2 = (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>)
          TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc
                    ((~(uVar1 - 1) & uVar1 + 0xf) + param_1,param_2);
  *(undefined ***)aVar2 =
       &___7FAllocation___TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_;
  *(undefined8 *)((longlong)aVar2 + 8) = 0;
  aVar3 = this->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> *)
     ((longlong)aVar2 + 8) = aVar3;
    LOCK();
    aVar4 = this->Next;
    bVar5 = aVar3 == aVar4;
    if (bVar5) {
      this->Next = aVar2;
      aVar4 = aVar3;
    }
    UNLOCK();
    aVar3 = aVar4;
  } while (!bVar5);
  return (void *)(uVar1 + 0xf + (longlong)aVar2 & -uVar1);
}

