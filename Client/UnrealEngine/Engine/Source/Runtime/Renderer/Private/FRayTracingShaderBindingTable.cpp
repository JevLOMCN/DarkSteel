// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 24

// GetPersistentInlineBindingDataBuffer @ 144816200

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
FRayTracingShaderBindingTable::GetPersistentInlineBindingDataBuffer
          (FRayTracingShaderBindingTable *this,FRDGBuilder *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRDGBuffer *pFVar4;
  
  uVar3 = 0;
  if ((int)param_2 < (this->PersistentSBTs).ArrayNum) {
    uVar3 = ~param_2 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGBuffer *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar4 = FRDGBuilder::RegisterExternalBuffer
                     (param_1,(TRefCountPtr<FRDGPooledBuffer> *)
                              ((this->PersistentSBTs).AllocatorInstance.Data +
                              (longlong)(int)param_2 * 0x18 + 0x10),None);
  return pFVar4;
}

// GetPersistentSBT @ 1448162a0

FRHIShaderBindingTable * __thiscall
FRayTracingShaderBindingTable::GetPersistentSBT(FRayTracingShaderBindingTable *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRHIShaderBindingTable *pFVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->PersistentSBTs).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRHIShaderBindingTable *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FRHIShaderBindingTable **)
          ((this->PersistentSBTs).AllocatorInstance.Data + (longlong)(int)param_1 * 0x18 + 8);
}

// ReleasePersistentSBT @ 14481e450

void __thiscall
FRayTracingShaderBindingTable::ReleasePersistentSBT
          (FRayTracingShaderBindingTable *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FRHIResource *this_00;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar8 = (longlong)(int)param_1;
  uVar7 = 0;
  if ((int)param_1 < (this->PersistentSBTs).ArrayNum) {
    uVar7 = ~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (this->PersistentSBTs).AllocatorInstance.Data;
  pFVar3[lVar8 * 0x18] = (FScriptContainerElement)0x0;
  this_00 = *(FRHIResource **)(pFVar3 + lVar8 * 0x18 + 8);
  if (this_00 != (FRHIResource *)0x0) {
    *(undefined8 *)(pFVar3 + lVar8 * 0x18 + 8) = 0;
    FRHIResource::Release(this_00);
  }
  puVar4 = *(undefined8 **)(pFVar3 + lVar8 * 0x18 + 0x10);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(pFVar3 + lVar8 * 0x18 + 0x10) = 0;
    piVar1 = (int *)(puVar4 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  return;
}

// FRayTracingShaderBindingTable @ 1453630d0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRayTracingShaderBindingTable * __thiscall
FRayTracingShaderBindingTable::FRayTracingShaderBindingTable(FRayTracingShaderBindingTable *this)

{
  ERayTracingShaderBindingTableLifetime EVar1;
  
  this->NumMissShaderSlots = 1;
  this->NumCallableShaderSlots = 0;
  (this->CallableCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CallableCommands).ArrayNum = 0;
  (this->CallableCommands).ArrayMax = 0;
  (this->TransientUniformBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransientUniformBuffers).ArrayNum = 0;
  (this->TransientUniformBuffers).ArrayMax = 0;
  (this->PersistentSBTInitializer).Lifetime = Transient;
  (this->PersistentSBTInitializer).ShaderBindingMode = Disabled;
  (this->PersistentSBTInitializer).HitGroupIndexingMode = Allow;
  (this->PersistentSBTInitializer).LocalBindingDataSize = 0;
  (this->PersistentSBTs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PersistentSBTs).ArrayNum = 0;
  (this->PersistentSBTs).ArrayMax = 0;
  (this->SetPersistentRecords).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  this->NumShaderSlotsPerGeometrySegment = 2;
  (this->PersistentSBTInitializer).NumShaderSlotsPerGeometrySegment = 1;
  (this->PersistentSBTInitializer).NumGeometrySegments = 0;
  (this->PersistentSBTInitializer).NumMissShaderSlots = 1;
  (this->PersistentSBTInitializer).NumCallableShaderSlots = 0;
  (this->SetPersistentRecords).NumBits = 0;
  (this->SetPersistentRecords).MaxBits = 0x80;
  (this->DirtyPersistentRecords).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0
  ;
  (this->DirtyPersistentRecords).NumBits = 0;
  (this->DirtyPersistentRecords).MaxBits = 0x80;
  (this->PersistentRecordsToClear).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->PersistentRecordsToClear).NumBits = 0;
  (this->PersistentRecordsToClear).MaxBits = 0x80;
  (this->PendingStaticAllocationsToFree).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingStaticAllocationsToFree).ArrayNum = 0;
  (this->PendingStaticAllocationsToFree).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->StaticAllocationCS,4000);
  this->bStaticAllocationsLocked = false;
  FSpanAllocator::FSpanAllocator(&this->StaticRangeAllocator,true);
  *(undefined8 *)&this->TrackedAllocationMap = 0;
  *(undefined8 *)&(this->TrackedAllocationMap).field_0x8 = 0;
  *(undefined8 *)&(this->TrackedAllocationMap).field_0x20 = 0;
  *(undefined4 *)&(this->TrackedAllocationMap).field_0x28 = 0;
  *(undefined4 *)&(this->TrackedAllocationMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TrackedAllocationMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TrackedAllocationMap).field_0x34 = 0;
  *(undefined8 *)&(this->TrackedAllocationMap).field_0x40 = 0;
  *(undefined4 *)&(this->TrackedAllocationMap).field_0x48 = 0;
  (this->ActiveDynamicAllocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveDynamicAllocations).ArrayNum = 0;
  (this->ActiveDynamicAllocations).ArrayMax = 0;
  (this->FreeDynamicAllocationPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeDynamicAllocationPool).ArrayNum = 0;
  (this->FreeDynamicAllocationPool).ArrayMax = 0;
  this->TotalStaticAllocationCount = 0;
  this->AllocatedStaticSegmentCount = 0;
  this->MaxNumDynamicGeometrySegments = 0;
  this->NumDynamicGeometrySegments = 0;
  this->StartDynamicRangeOffset = 0;
  this->CurrentDynamicRangeOffset = 0;
  (this->PersistentSBTInitializer).ShaderBindingMode = RTPSO;
  if ((GRHIGlobals.RayTracing.SupportsPersistentSBTs == false) || (GPersistentSBTEnabled == 0)) {
    EVar1 = Transient;
  }
  else {
    EVar1 = Persistent;
  }
  (this->PersistentSBTInitializer).Lifetime = EVar1;
  (this->PersistentSBTInitializer).LocalBindingDataSize = GMinLocalBindingDataSize;
  (this->PersistentSBTInitializer).NumMissShaderSlots = GMinMissShaderSlots;
  return this;
}

// ~FRayTracingShaderBindingTable @ 145363c80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRayTracingShaderBindingTable::~FRayTracingShaderBindingTable(FRayTracingShaderBindingTable *this)

{
  int *piVar1;
  TArray<FRayTracingSBTAllocation_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRayTracingSBTAllocation_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  void *pvVar6;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar7;
  ForElementType<unsigned_int> FVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  
  pTVar2 = &this->FreeDynamicAllocationPool;
  pTVar3 = &this->ActiveDynamicAllocations;
  if (pTVar2 == pTVar3) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x96e,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar5 = (this->ActiveDynamicAllocations).ArrayNum;
  if (iVar5 != 0) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,iVar5,&pTVar2->AllocatorInstance,
                        &(this->FreeDynamicAllocationPool).ArrayNum,
                        &(this->FreeDynamicAllocationPool).ArrayMax);
    memcpy((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 8,(pTVar3->AllocatorInstance).Data,
           (longlong)iVar5 << 3);
  }
  uVar13 = (this->ActiveDynamicAllocations).ArrayNum;
  if (-1 < (int)uVar13) {
    piVar1 = &(this->ActiveDynamicAllocations).ArrayMax;
    (this->ActiveDynamicAllocations).ArrayNum = 0;
    if (*piVar1 != uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar13,&pTVar3->AllocatorInstance,0,piVar1);
    }
    this->NumDynamicGeometrySegments = 0;
    this->bStaticAllocationsLocked = true;
    lVar12 = 0x100;
    if ((this->StaticRangeAllocator).bGrowOnly == false) {
      lVar12 = 0xfc;
    }
    uVar13 = *(uint *)((this->SetPersistentRecords).AllocatorInstance.InlineData + lVar12 + -0x58);
    uVar13 = uVar13 - uVar13 % this->NumShaderSlotsPerGeometrySegment;
    this->StartDynamicRangeOffset = uVar13;
    this->CurrentDynamicRangeOffset = uVar13;
    pFVar14 = (pTVar2->AllocatorInstance).Data;
    iVar5 = (this->FreeDynamicAllocationPool).ArrayNum;
    pFVar4 = pFVar14 + (longlong)iVar5 * 8;
    while( true ) {
      if ((this->FreeDynamicAllocationPool).ArrayNum != iVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FRayTracingSBTAllocation_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar14 == pFVar4) break;
      ::operator_delete(*(void **)pFVar14,0x28);
      pFVar14 = pFVar14 + 8;
    }
    piVar1 = &(this->FreeDynamicAllocationPool).ArrayMax;
    (this->FreeDynamicAllocationPool).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->FreeDynamicAllocationPool).AllocatorInstance,0,piVar1);
    }
    if (*(int *)&(this->TrackedAllocationMap).field_0x8 !=
        *(int *)&(this->TrackedAllocationMap).field_0x34) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TrackedAllocationMap.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingShaderBindingTable.cpp"
                          ,0x7b,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if ((this->StaticRangeAllocator).CurrentSize != 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StaticRangeAllocator.GetSparselyAllocatedSize() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingShaderBindingTable.cpp"
                          ,0x7c,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pFVar4 = (this->FreeDynamicAllocationPool).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (this->ActiveDynamicAllocations).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    *(undefined4 *)&(this->TrackedAllocationMap).field_0x48 = 0;
    pvVar6 = *(void **)&(this->TrackedAllocationMap).field_0x40;
    if (pvVar6 != (void *)0x0) {
      FMemory::Free(pvVar6);
    }
    TSparseArray<TSparseSetElement<TTuple<FRayTracingShaderBindingTable::FAllocationKey,FRayTracingShaderBindingTable::FRefCountedAllocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRayTracingShaderBindingTable::FAllocationKey,FRayTracingShaderBindingTable::FRefCountedAllocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FRayTracingShaderBindingTable::FAllocationKey,FRayTracingShaderBindingTable::FRefCountedAllocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->TrackedAllocationMap);
    FVar7 = (this->StaticRangeAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
    if (FVar7 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
      FMemory::Free((void *)FVar7);
    }
    FVar7 = (this->StaticRangeAllocator).FreeSpans.AllocatorInstance.SecondaryData;
    if (FVar7 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
      FMemory::Free((void *)FVar7);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)&this->StaticAllocationCS);
    pFVar4 = (this->PendingStaticAllocationsToFree).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    FVar8 = (this->PersistentRecordsToClear).AllocatorInstance.SecondaryData;
    if (FVar8 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar8);
    }
    FVar8 = (this->DirtyPersistentRecords).AllocatorInstance.SecondaryData;
    if (FVar8 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar8);
    }
    FVar8 = (this->SetPersistentRecords).AllocatorInstance.SecondaryData;
    if (FVar8 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar8);
    }
    DestructItems<FRayTracingShaderBindingTable::FPersistentSBTData,int>
              ((FPersistentSBTData *)(this->PersistentSBTs).AllocatorInstance.Data,
               (this->PersistentSBTs).ArrayNum);
    pFVar4 = (this->PersistentSBTs).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    DestructItems<TRefCountPtr<FRHIUniformBuffer>,int>
              ((TRefCountPtr<FRHIUniformBuffer> *)
               (this->TransientUniformBuffers).AllocatorInstance.Data,
               (this->TransientUniformBuffers).ArrayNum);
    pFVar4 = (this->TransientUniformBuffers).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    DestructItems<FRayTracingShaderCommand,int>
              ((FRayTracingShaderCommand *)(this->CallableCommands).AllocatorInstance.Data,
               (this->CallableCommands).ArrayNum);
    pFVar4 = (this->CallableCommands).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
}

// AllocateDynamicRange @ 14536dac0

FRayTracingSBTAllocation * __thiscall
FRayTracingShaderBindingTable::AllocateDynamicRange
          (FRayTracingShaderBindingTable *this,ERayTracingShaderBindingLayerMask param_1,
          uint param_2)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FRayTracingSBTAllocation *pFVar8;
  FRayTracingSBTAllocation *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  TArray<FRayTracingSBTAllocation_*,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  uint uVar14;
  FRayTracingSBTAllocation *local_38 [2];
  
  if ((this->bStaticAllocationsLocked == false) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_743919285201534445>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingShaderBindingTable.cpp"
                         ,0x213,"bStaticAllocationsLocked"), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FRayTracingSBTAllocation *)(*pcVar5)();
    return pFVar8;
  }
  iVar7 = (this->FreeDynamicAllocationPool).ArrayNum;
  if (iVar7 != 0) {
    if ((iVar7 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FRayTracingSBTAllocation *)(*pcVar5)();
      return pFVar8;
    }
    iVar7 = (this->FreeDynamicAllocationPool).ArrayNum;
    local_38[0] = *(FRayTracingSBTAllocation **)
                   ((this->FreeDynamicAllocationPool).AllocatorInstance.Data +
                   (longlong)iVar7 * 8 + -8);
    (this->FreeDynamicAllocationPool).ArrayNum = iVar7 + -1;
    pFVar8 = local_38[0];
    if (local_38[0] != (FRayTracingSBTAllocation *)0x0) goto LAB_14536dbb6;
  }
  pFVar9 = ::operator_new(0x28);
  pFVar8 = (FRayTracingSBTAllocation *)0x0;
  if (pFVar9 != (FRayTracingSBTAllocation *)0x0) {
    *(undefined8 *)&(pFVar9->Flags).field1_0x8 = 0;
    pbVar1 = (byte *)((longlong)&(pFVar9->Flags).field1_0x8 + 2);
    *pbVar1 = *pbVar1 | 1;
    *(undefined1 *)((longlong)&(pFVar9->Flags).field1_0x8 + 1) = 0x93;
    pFVar9->NumRecords = 0;
    pFVar9->AllocatedLayers = None;
    pFVar9->BaseRecordIndex = 0;
    pFVar9->RecordsPerLayer = 0;
    pFVar9->Geometry = (FRHIRayTracingGeometry *)0x0;
    (pFVar9->Flags).CachedMeshCommandHash = 0;
    pFVar8 = pFVar9;
  }
LAB_14536dbb6:
  uVar3 = this->CurrentDynamicRangeOffset;
  uVar14 = param_2 * this->NumShaderSlotsPerGeometrySegment;
  uVar10 = (ulonglong)param_1 - ((ulonglong)(param_1 >> 1) & 0x5555555555555555);
  uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
  uVar11 = (uint)(byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar13 = uVar14 * uVar11;
  this->CurrentDynamicRangeOffset = uVar13 + uVar3;
  local_38[0] = pFVar8;
  if ((param_1 == None) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAllocatedLayers != ERayTracingShaderBindingLayerMask::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingShaderBindingTable.h"
                         ,0x48,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FRayTracingSBTAllocation *)(*pcVar5)();
    return pFVar8;
  }
  pFVar8->AllocatedLayers = param_1;
  pFVar8->BaseRecordIndex = uVar3;
  pFVar8->RecordsPerLayer = uVar14;
  pFVar8->NumRecords = uVar13;
  MarkDirty(this,local_38[0]);
  this->NumDynamicGeometrySegments = this->NumDynamicGeometrySegments + uVar11 * param_2;
  uVar3 = this->NumDynamicGeometrySegments;
  if (this->NumDynamicGeometrySegments < this->MaxNumDynamicGeometrySegments) {
    uVar3 = this->MaxNumDynamicGeometrySegments;
  }
  this->MaxNumDynamicGeometrySegments = uVar3;
  pTVar12 = &this->ActiveDynamicAllocations;
  pFVar4 = (pTVar12->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 <
       pFVar4 + (longlong)(this->ActiveDynamicAllocations).ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FRayTracingSBTAllocation *)(*pcVar5)();
    return pFVar8;
  }
  iVar7 = (this->ActiveDynamicAllocations).ArrayNum;
  piVar2 = &(this->ActiveDynamicAllocations).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar12->AllocatorInstance,piVar2);
  }
  (this->ActiveDynamicAllocations).ArrayNum = iVar7 + 1;
  *(FRayTracingSBTAllocation **)((pTVar12->AllocatorInstance).Data + (longlong)iVar7 * 8) =
       local_38[0];
  return local_38[0];
}

// AllocatePersistentSBTID @ 14536dd70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

uint __thiscall
FRayTracingShaderBindingTable::AllocatePersistentSBTID
          (FRayTracingShaderBindingTable *this,FRHICommandListBase *param_1,
          ERayTracingShaderBindingMode param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ForElementType<unsigned_int> FVar7;
  ulonglong uVar8;
  uint uVar9;
  TArray<FRayTracingShaderBindingTable::FPersistentSBTData,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  if ((this->bStaticAllocationsLocked == false) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_743919285201534741>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingShaderBindingTable.cpp"
                         ,0xeb,"bStaticAllocationsLocked"), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  uVar13 = 0;
  if (0 < (this->PersistentSBTs).ArrayNum) {
    uVar8 = uVar13;
    uVar12 = uVar13;
    do {
      uVar4 = (uint)uVar8;
      uVar6 = 0;
      if ((int)uVar4 < (this->PersistentSBTs).ArrayNum) {
        uVar6 = ~uVar4 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
      if (*(longlong *)((this->PersistentSBTs).AllocatorInstance.Data + uVar12 + 8) == 0) {
        if (uVar4 != 0xffffffff) goto LAB_14536de95;
        break;
      }
      uVar8 = (ulonglong)(uVar4 + 1);
      uVar12 = uVar12 + 0x18;
    } while ((int)(uVar4 + 1) < (this->PersistentSBTs).ArrayNum);
  }
  uVar4 = (this->PersistentSBTs).ArrayNum;
  if (uVar4 == (this->PersistentSBTs).ArrayMax) {
    uVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->PersistentSBTs).AllocatorInstance,
                       &(this->PersistentSBTs).ArrayMax);
  }
  (this->PersistentSBTs).ArrayNum = uVar4 + 1;
  DefaultConstructItems<FRayTracingShaderBindingTable::FPersistentSBTData,int>
            ((this->PersistentSBTs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x18,1);
LAB_14536de95:
  pTVar10 = &this->PersistentSBTs;
  uVar6 = 0;
  uVar8 = uVar13;
  if (0 < (this->PersistentSBTs).ArrayNum) {
    do {
      uVar11 = (uint)uVar13;
      uVar9 = uVar6;
      if ((int)uVar11 < (this->PersistentSBTs).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
      if (*(longlong *)((pTVar10->AllocatorInstance).Data + uVar8 + 8) != 0) {
        uVar9 = uVar6;
        if ((int)uVar11 < (this->PersistentSBTs).ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return uVar4;
        }
        AllocatePersistentShaderBindingTable
                  (this,param_1,uVar11,
                   (ERayTracingShaderBindingMode)(pTVar10->AllocatorInstance).Data[uVar8]);
      }
      uVar13 = (ulonglong)(uVar11 + 1);
      uVar8 = uVar8 + 0x18;
    } while ((int)(uVar11 + 1) < (this->PersistentSBTs).ArrayNum);
  }
  if ((int)uVar4 < (this->PersistentSBTs).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  (pTVar10->AllocatorInstance).Data[(longlong)(int)uVar4 * 0x18] = (FScriptContainerElement)param_2;
  AllocatePersistentShaderBindingTable(this,param_1,uVar4,param_2);
  this_00 = &this->DirtyPersistentRecords;
  iVar5 = (this->PersistentSBTInitializer).NumGeometrySegments *
          (this->PersistentSBTInitializer).NumShaderSlotsPerGeometrySegment;
  (this->DirtyPersistentRecords).NumBits = iVar5;
  uVar6 = iVar5 + 0x1f;
  uVar9 = uVar6 >> 5;
  if (uVar6 >> 5 != 0) {
    if ((this->DirtyPersistentRecords).MaxBits + 0x1fU >> 5 < uVar9) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&this_00->AllocatorInstance,0,uVar9,4);
      (this->DirtyPersistentRecords).MaxBits = uVar9 << 5;
    }
    FVar7 = (this->DirtyPersistentRecords).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<unsigned_int>)0x0) {
      FVar7 = (ForElementType<unsigned_int>)this_00;
    }
    if (uVar9 < 9) {
      iVar5 = -1;
    }
    else {
      iVar5 = 0xff;
    }
    memset((void *)FVar7,iVar5,(ulonglong)uVar9 << 2);
    iVar5 = (this->DirtyPersistentRecords).NumBits;
    uVar9 = iVar5 >> 0x1f & 0x1f;
    uVar6 = iVar5 + uVar9;
    iVar5 = (uVar6 & 0x1f) - uVar9;
    if (iVar5 != 0) {
      FVar7 = (this->DirtyPersistentRecords).AllocatorInstance.SecondaryData;
      if (FVar7 == (ForElementType<unsigned_int>)0x0) {
        FVar7 = (ForElementType<unsigned_int>)this_00;
      }
      puVar1 = (uint *)((longlong)FVar7 + (longlong)((int)uVar6 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar5 & 0x1f);
    }
  }
  return uVar4;
}

// AllocatePersistentShaderBindingTable @ 14536e0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRayTracingShaderBindingTable::AllocatePersistentShaderBindingTable
          (FRayTracingShaderBindingTable *this,FRHICommandListBase *param_1,uint param_2,
          ERayTracingShaderBindingMode param_3)

{
  longlong lVar1;
  int iVar2;
  FRHIResource *this_00;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  TRefCountPtr<FRDGPooledBuffer> TVar10;
  int *piVar11;
  undefined8 *puVar12;
  FScriptContainerElement *pFVar13;
  FRDGPooledBuffer *pFVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  FRHIResource *local_a8;
  undefined8 *local_a0;
  EBufferUsageFlags local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined1 local_80;
  ERayTracingShaderBindingMode EStack_7f;
  undefined2 uStack_7e;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  EBufferUsageFlags local_48;
  ulonglong local_40;
  undefined2 uVar6;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  uVar4 = (this->PersistentSBTInitializer).Lifetime;
  uVar5 = (this->PersistentSBTInitializer).HitGroupIndexingMode;
  uVar7 = (this->PersistentSBTInitializer).field_0x3;
  uVar6 = CONCAT11(uVar7,uVar5);
  uStack_7c = (this->PersistentSBTInitializer).LocalBindingDataSize;
  uStack_78 = (this->PersistentSBTInitializer).NumShaderSlotsPerGeometrySegment;
  uStack_74 = (this->PersistentSBTInitializer).NumGeometrySegments;
  lVar15 = (longlong)(int)param_2;
  local_70._0_4_ = (this->PersistentSBTInitializer).NumMissShaderSlots;
  local_70._4_4_ = (this->PersistentSBTInitializer).NumCallableShaderSlots;
  _local_80 = CONCAT22(uVar6,CONCAT11(param_3,uVar4));
  (**(code **)(GDynamicRHI->_padding_ + 0x4b0))(GDynamicRHI,&local_a8,param_1,&local_80);
  iVar2 = (this->PersistentSBTs).ArrayNum;
  uVar16 = ~param_2 >> 0x1f;
  uVar9 = 0;
  if ((int)param_2 < iVar2) {
    uVar9 = uVar16;
  }
  if (uVar9 == 0) {
    local_b8 = lVar15;
    local_b0 = (longlong)iVar2;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar1 = lVar15 * 0x18;
  pFVar13 = (this->PersistentSBTs).AllocatorInstance.Data + lVar1 + 8;
  if (pFVar13 != (FScriptContainerElement *)&local_a8) {
    this_00 = *(FRHIResource **)pFVar13;
    *(FRHIResource **)pFVar13 = local_a8;
    local_a8 = (FRHIResource *)0x0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_14536e1b8;
    FRHIResource::Release(this_00);
  }
  if (local_a8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_a8);
  }
LAB_14536e1b8:
  iVar2 = (this->PersistentSBTs).ArrayNum;
  uVar9 = 0;
  if ((int)param_2 < iVar2) {
    uVar9 = uVar16;
  }
  if (uVar9 == 0) {
    local_b8 = lVar15;
    local_b0 = (longlong)iVar2;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (**(code **)(**(longlong **)((this->PersistentSBTs).AllocatorInstance.Data + lVar1 + 8) + 0x10))()
  ;
  if (local_50 != 0) {
    local_98 = local_48;
    uStack_90 = 0x10109;
    uStack_94 = (undefined4)(local_50 / local_48);
    local_68 = CONCAT44(uStack_94,local_48);
    uStack_60 = CONCAT44(uStack_8c,0x10109);
    local_88 = 0;
    local_58 = 0;
    TVar10 = AllocatePooledBuffer((FRDGBufferDesc *)&local_a0,(wchar_t *)&local_68,0xe8);
    iVar2 = (this->PersistentSBTs).ArrayNum;
    uVar9 = 0;
    if ((int)param_2 < iVar2) {
      uVar9 = uVar16;
    }
    if (uVar9 == 0) {
      local_b8 = lVar15;
      local_b0 = (longlong)iVar2;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar14 = (FRDGPooledBuffer *)((this->PersistentSBTs).AllocatorInstance.Data + lVar1 + 0x10);
    if (pFVar14 != TVar10.Reference) {
      puVar12 = (undefined8 *)pFVar14->_padding_;
      pFVar14->_padding_ = (TVar10.Reference)->_padding_;
      (TVar10.Reference)->_padding_ = 0;
      if (puVar12 != (undefined8 *)0x0) {
        piVar11 = (int *)(puVar12 + 1);
        LOCK();
        iVar2 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          if (piVar11 == (int *)0x0) {
            puVar12 = (undefined8 *)0x0;
          }
          if (puVar12 != (undefined8 *)0x0) {
            (**(code **)*puVar12)(puVar12,1);
          }
        }
      }
    }
    if (local_a0 != (undefined8 *)0x0) {
      piVar11 = (int *)(local_a0 + 1);
      LOCK();
      iVar2 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if (piVar11 == (int *)0x0) {
          local_a0 = (undefined8 *)0x0;
        }
        if (local_a0 != (undefined8 *)0x0) {
          (**(code **)*local_a0)(local_a0,1);
        }
      }
    }
  }
  return;
}

// AllocateStaticRange @ 14536f4b0

FRayTracingSBTAllocation * __thiscall
FRayTracingShaderBindingTable::AllocateStaticRange
          (FRayTracingShaderBindingTable *this,uint param_1,FRHIRayTracingGeometry *param_2,
          FRayTracingCachedMeshCommandFlags *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TMap<FRayTracingShaderBindingTable::FAllocationKey,FRayTracingShaderBindingTable::FRefCountedAllocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRayTracingShaderBindingTable::FAllocationKey,FRayTracingShaderBindingTable::FRefCountedAllocation,0>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRayTracingSBTAllocation *pFVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ERayTracingShaderBindingLayerMask EVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int local_res8 [2];
  uint local_res10;
  uint local_res18;
  FAllocationKey *local_70;
  ulong64 local_68;
  undefined8 uStack_60;
  FAllocationKey local_58;
  
  local_res10 = param_1;
  if ((this->bStaticAllocationsLocked != false) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_743919285201534536>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingShaderBindingTable.cpp"
                         ,0x1b8,"!bStaticAllocationsLocked"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FRayTracingSBTAllocation *)(*pcVar1)();
    return pFVar4;
  }
  if ((param_2 == (FRHIRayTracingGeometry *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Geometry != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingShaderBindingTable.cpp"
                         ,0x1b9,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FRayTracingSBTAllocation *)(*pcVar1)();
    return pFVar4;
  }
  bVar2 = RayTracing::ShouldExcludeDecals();
  if ((!bVar2) || ((*(byte *)((longlong)&param_3->field1_0x8 + 1) & 0x10) == 0)) {
    EVar7 = (byte)~*(byte *)((longlong)&param_3->field1_0x8 + 1) >> 4 & Base;
    if (((*(byte *)((longlong)&param_3->field1_0x8 + 1) & 8) != 0) &&
       (bVar2 = RayTracing::ShouldExcludeDecals(), !bVar2)) {
      EVar7 = EVar7 | Decals;
    }
    if (EVar7 != None) {
      lpCriticalSection = &this->StaticAllocationCS;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_58.Flags.CachedMeshCommandHash = param_3->CachedMeshCommandHash;
      local_58.Flags.field1_0x8 = param_3->field1_0x8;
      local_58.Flags._12_4_ = *(undefined4 *)&param_3->field_0xc;
      this_00 = &this->TrackedAllocationMap;
      local_58.Geometry = param_2;
      uVar3 = ::GetTypeHash(&local_58);
      if (*(int *)&(this->TrackedAllocationMap).field_0x8 !=
          *(int *)&(this->TrackedAllocationMap).field_0x34) {
        puVar6 = *(undefined1 **)&(this->TrackedAllocationMap).field_0x40;
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &(this->TrackedAllocationMap).field_0x38;
        }
        iVar9 = *(int *)(puVar6 + (ulonglong)
                                  (*(int *)&(this->TrackedAllocationMap).field_0x48 - 1U & uVar3) *
                                  4);
        if (iVar9 != -1) {
          do {
            plVar8 = (longlong *)((longlong)iVar9 * 0x30 + *(longlong *)&this_00->field_0x0);
            if ((((FRHIRayTracingGeometry *)*plVar8 == param_2) &&
                (plVar8[1] == local_58.Flags.CachedMeshCommandHash)) &&
               (*(uint *)(plVar8 + 2) == local_58.Flags.field1_0x8)) {
              if ((iVar9 != -1) && (plVar8 != (longlong *)0x0)) goto LAB_14536f673;
              break;
            }
            iVar9 = (int)plVar8[5];
          } while (iVar9 != -1);
        }
      }
      local_70 = &local_58;
      TSet<TTuple<FRayTracingShaderBindingTable::FAllocationKey,FRayTracingShaderBindingTable::FRefCountedAllocation>,TDefaultMapHashableKeyFuncs<FRayTracingShaderBindingTable::FAllocationKey,FRayTracingShaderBindingTable::FRefCountedAllocation,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FRayTracingShaderBindingTable::FAllocationKey_const_&>_>
                ((TSet<TTuple<FRayTracingShaderBindingTable::FAllocationKey,FRayTracingShaderBindingTable::FRefCountedAllocation>,TDefaultMapHashableKeyFuncs<FRayTracingShaderBindingTable::FAllocationKey,FRayTracingShaderBindingTable::FRefCountedAllocation,0>,FDefaultSetAllocator>
                  *)this_00,(uint)local_res8,
                 (TKeyInitializer<FRayTracingShaderBindingTable::FAllocationKey_const_&> *)
                 (ulonglong)uVar3,(bool *)&local_70);
      plVar8 = (longlong *)((longlong)local_res8[0] * 0x30 + *(longlong *)&this_00->field_0x0);
LAB_14536f673:
      if ((int)plVar8[4] == 0) {
        local_68 = param_3->CachedMeshCommandHash;
        uStack_60 = *(undefined8 *)&param_3->field1_0x8;
        if ((this->bStaticAllocationsLocked != false) &&
           (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_743919285201534556>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingShaderBindingTable.cpp"
                               ,0x1a4,"!bStaticAllocationsLocked"), bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FRayTracingSBTAllocation *)(*pcVar1)();
          return pFVar4;
        }
        uVar11 = local_res10 * this->NumShaderSlotsPerGeometrySegment;
        uVar5 = (ulonglong)EVar7 - (ulonglong)(EVar7 >> 1);
        uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
        uVar10 = (uint)(byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                             );
        uVar3 = uVar11 * uVar10;
        local_res18 = FSpanAllocator::Allocate(&this->StaticRangeAllocator,uVar3);
        pFVar4 = ::operator_new(0x28);
        if (pFVar4 == (FRayTracingSBTAllocation *)0x0) {
          pFVar4 = (FRayTracingSBTAllocation *)0x0;
        }
        else {
          pFVar4->NumRecords = 0;
          pFVar4->AllocatedLayers = None;
          pFVar4->BaseRecordIndex = 0;
          pFVar4->RecordsPerLayer = 0;
          pFVar4->Geometry = (FRHIRayTracingGeometry *)0x0;
          (pFVar4->Flags).field1_0x8.Data = 0;
        }
        pFVar4->BaseRecordIndex = local_res18;
        pFVar4->NumRecords = uVar3;
        pFVar4->AllocatedLayers = EVar7;
        pFVar4->RecordsPerLayer = uVar11;
        pFVar4->Geometry = param_2;
        (pFVar4->Flags).CachedMeshCommandHash = local_68;
        *(undefined8 *)&(pFVar4->Flags).field1_0x8 = uStack_60;
        MarkDirty(this,pFVar4);
        MarkSet(this,pFVar4,true);
        this->AllocatedStaticSegmentCount = this->AllocatedStaticSegmentCount + uVar10 * local_res10
        ;
        plVar8[3] = (longlong)pFVar4;
        param_1 = local_res10;
      }
      else {
        this->TotalStaticAllocationCount = this->TotalStaticAllocationCount + 1;
      }
      if ((*(ERayTracingShaderBindingLayerMask *)(plVar8[3] + 0xc) != EVar7) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Allocation.Allocation->AllocatedLayers == AllocatedLayers",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingShaderBindingTable.cpp"
                             ,0x1e0,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FRayTracingSBTAllocation *)(*pcVar1)();
        return pFVar4;
      }
      uVar5 = (ulonglong)EVar7 - (ulonglong)(EVar7 >> 1);
      uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
      if ((*(uint *)(plVar8[3] + 8) >> 1 !=
           (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) * param_1)
         && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                               ("Allocation.Allocation->GetSegmentCount() == FMath::CountBits((uint32)AllocatedLayers) * SegmentCount"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingShaderBindingTable.cpp"
                                ,0x1e1,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FRayTracingSBTAllocation *)(*pcVar1)();
        return pFVar4;
      }
      *(int *)(plVar8 + 4) = (int)plVar8[4] + 1;
      pFVar4 = (FRayTracingSBTAllocation *)plVar8[3];
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return pFVar4;
    }
  }
  return (FRayTracingSBTAllocation *)0x0;
}

// AllocateStaticRangeInternal @ 14536f8c0

FRayTracingSBTAllocation * __thiscall
FRayTracingShaderBindingTable::AllocateStaticRangeInternal
          (FRayTracingShaderBindingTable *this,ERayTracingShaderBindingLayerMask param_1,
          uint param_2,FRHIRayTracingGeometry *param_3,FRayTracingCachedMeshCommandFlags *param_4)

{
  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRayTracingSBTAllocation *pFVar5;
  FRayTracingSBTAllocation *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if ((this->bStaticAllocationsLocked != false) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_743919285201534556>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingShaderBindingTable.cpp"
                         ,0x1a4,"!bStaticAllocationsLocked"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FRayTracingSBTAllocation *)(*pcVar2)();
    return pFVar5;
  }
  uVar9 = param_2 * this->NumShaderSlotsPerGeometrySegment;
  uVar7 = (ulonglong)param_1 - ((ulonglong)(param_1 >> 1) & 0x5555555555555555);
  uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
  uVar8 = (uint)(byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar10 = uVar9 * uVar8;
  uVar4 = FSpanAllocator::Allocate(&this->StaticRangeAllocator,uVar10);
  pFVar6 = ::operator_new(0x28);
  pFVar5 = (FRayTracingSBTAllocation *)0x0;
  if (pFVar6 != (FRayTracingSBTAllocation *)0x0) {
    *(undefined8 *)&(pFVar6->Flags).field1_0x8 = 0;
    pbVar1 = (byte *)((longlong)&(pFVar6->Flags).field1_0x8 + 2);
    *pbVar1 = *pbVar1 | 1;
    *(undefined1 *)((longlong)&(pFVar6->Flags).field1_0x8 + 1) = 0x93;
    pFVar6->NumRecords = 0;
    pFVar6->AllocatedLayers = None;
    pFVar6->BaseRecordIndex = 0;
    pFVar6->RecordsPerLayer = 0;
    pFVar6->Geometry = (FRHIRayTracingGeometry *)0x0;
    (pFVar6->Flags).CachedMeshCommandHash = 0;
    pFVar5 = pFVar6;
  }
  FRayTracingSBTAllocation::InitStatic(pFVar5,param_1,uVar4,uVar9,uVar10,param_3,param_4);
  MarkDirty(this,pFVar5);
  MarkSet(this,pFVar5,true);
  this->AllocatedStaticSegmentCount = this->AllocatedStaticSegmentCount + uVar8 * param_2;
  return pFVar5;
}

// AllocateTransientRHI @ 14536fa50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIShaderBindingTable> __thiscall
FRayTracingShaderBindingTable::AllocateTransientRHI
          (FRayTracingShaderBindingTable *this,FRHICommandListBase *param_1,
          ERayTracingShaderBindingMode param_2,ERayTracingHitGroupIndexingMode param_3,uint param_4)

{
  longlong lVar1;
  undefined1 local_28;
  ERayTracingHitGroupIndexingMode local_27;
  undefined1 local_26;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  
  lVar1 = 0x100;
  if ((this->StaticRangeAllocator).bGrowOnly == false) {
    lVar1 = 0xfc;
  }
  local_26 = (undefined1)param_4;
  local_20 = this->NumShaderSlotsPerGeometrySegment;
  local_1c = *(uint *)((this->SetPersistentRecords).AllocatorInstance.InlineData + lVar1 + -0x58) /
             local_20 + this->NumDynamicGeometrySegments;
  local_18 = this->NumMissShaderSlots;
  local_14 = this->NumCallableShaderSlots;
  local_28 = 0;
  local_27 = param_3;
  (**(code **)(GDynamicRHI->_padding_ + 0x4b0))(GDynamicRHI,param_1,param_2,&local_28);
  return (TRefCountPtr<FRHIShaderBindingTable>)(FRHIShaderBindingTable *)param_1;
}

// CheckPersistentRHI @ 145373440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FRayTracingShaderBindingTable::CheckPersistentRHI
          (FRayTracingShaderBindingTable *this,FRHICommandListBase *param_1,uint param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  ulonglong uVar2;
  ERayTracingHitGroupIndexingMode EVar3;
  ERayTracingShaderBindingMode EVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  ERayTracingShaderBindingTableLifetime EVar14;
  ForElementType<unsigned_int> FVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 uStack_7d;
  TStringBuilderBase<wchar_t> local_68;
  
  if ((this->bStaticAllocationsLocked == false) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_743919285201534705>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingShaderBindingTable.cpp"
                         ,0x10f,"bStaticAllocationsLocked"), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar11 = this->NumShaderSlotsPerGeometrySegment;
  lVar13 = 0x100;
  if ((this->StaticRangeAllocator).bGrowOnly == false) {
    lVar13 = 0xfc;
  }
  uVar10 = *(uint *)((this->SetPersistentRecords).AllocatorInstance.InlineData + lVar13 + -0x58) /
           uVar11;
  uVar17 = 1;
  if (uVar10 != 0) {
    uVar17 = uVar10;
  }
  uVar2 = (ulonglong)(uVar17 - 1) * 2 + 1;
  lVar13 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  uVar17 = 1 << ((byte)lVar13 & 0x1f);
  if (uVar17 < (uint)GMinStaticGeometrySegments) {
    uVar17 = GMinStaticGeometrySegments;
  }
  uVar10 = 1;
  if (this->MaxNumDynamicGeometrySegments != 0) {
    uVar10 = this->MaxNumDynamicGeometrySegments;
  }
  uVar2 = (ulonglong)(uVar10 - 1) * 2 + 1;
  lVar13 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  uVar10 = 1 << ((byte)lVar13 & 0x1f);
  if (uVar10 < (uint)GMinDynamicGeometrySegments) {
    uVar10 = GMinDynamicGeometrySegments;
  }
  uVar16 = 1;
  if (this->NumMissShaderSlots != 0) {
    uVar16 = this->NumMissShaderSlots;
  }
  uVar2 = (ulonglong)(uVar16 - 1) * 2 + 1;
  lVar13 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  uVar16 = 1 << ((byte)lVar13 & 0x1f);
  if ((GRHIGlobals.RayTracing.SupportsPersistentSBTs == false) ||
     (EVar14 = Persistent, GPersistentSBTEnabled == 0)) {
    EVar14 = Transient;
  }
  EVar3 = (this->PersistentSBTInitializer).HitGroupIndexingMode;
  uVar5 = (this->PersistentSBTInitializer).NumGeometrySegments;
  uVar6 = (this->PersistentSBTInitializer).NumCallableShaderSlots;
  uVar18 = (this->PersistentSBTInitializer).LocalBindingDataSize;
  EVar4 = (this->PersistentSBTInitializer).ShaderBindingMode;
  uVar7 = (this->PersistentSBTInitializer).NumMissShaderSlots;
  if (uVar5 < uVar10 + uVar17) {
    uVar5 = uVar10 + uVar17;
  }
  if (uVar7 < uVar16) {
    uVar7 = uVar16;
  }
  if (uVar6 < this->NumCallableShaderSlots) {
    uVar6 = this->NumCallableShaderSlots;
  }
  if (uVar18 < param_2) {
    uVar18 = param_2;
  }
  if ((GRHIGlobals.RayTracing.SupportsPersistentSBTs == false) || (GPersistentSBTEnabled == 0)) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  if ((GRHIGlobals.RayTracing.SupportsPersistentSBTs == false) || (GPersistentSBTEnabled == 0))
  goto LAB_145373811;
  local_68.End = (wchar_t *)0x0;
  local_68.bIsDynamic = false;
  local_68.bIsExternal = false;
  local_68.Base = (wchar_t *)0x0;
  local_68.CurPos = (wchar_t *)0x0;
  bVar9 = (this->PersistentSBTInitializer).Lifetime != EVar14;
  if (bVar9) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_68,L"\n\t\t%s changed: current: %d - new: %d");
  }
  if ((this->PersistentSBTInitializer).ShaderBindingMode == EVar4) {
    if (bVar9) goto LAB_14537364d;
    bVar9 = false;
  }
  else {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_68,L"\n\t\t%s changed: current: %d - new: %d");
LAB_14537364d:
    bVar9 = true;
  }
  if ((this->PersistentSBTInitializer).HitGroupIndexingMode == EVar3) {
    if (bVar9) goto LAB_14537367c;
    bVar9 = false;
  }
  else {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_68,L"\n\t\t%s changed: current: %d - new: %d");
LAB_14537367c:
    bVar9 = true;
  }
  if ((this->PersistentSBTInitializer).NumShaderSlotsPerGeometrySegment == uVar11) {
    if (bVar9) goto LAB_1453736ab;
    bVar9 = false;
  }
  else {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_68,L"\n\t\t%s changed: current: %d - new: %d");
LAB_1453736ab:
    bVar9 = true;
  }
  if ((this->PersistentSBTInitializer).NumGeometrySegments < uVar5) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_68,L"\n\t\t%s changed: current: %d - new: %d");
LAB_1453736d6:
    bVar9 = true;
  }
  else {
    if (bVar9) goto LAB_1453736d6;
    bVar9 = false;
  }
  if ((this->PersistentSBTInitializer).NumMissShaderSlots < uVar7) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_68,L"\n\t\t%s changed: current: %d - new: %d");
LAB_145373700:
    bVar9 = true;
  }
  else {
    if (bVar9) goto LAB_145373700;
    bVar9 = false;
  }
  if ((this->PersistentSBTInitializer).NumCallableShaderSlots < uVar6) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_68,L"\n\t\t%s changed: current: %d - new: %d");
LAB_14537372b:
    bVar9 = true;
  }
  else {
    if (bVar9) goto LAB_14537372b;
    bVar9 = false;
  }
  if ((this->PersistentSBTInitializer).LocalBindingDataSize < uVar18) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_68,L"\n\t\t%s changed: current: %d - new: %d");
  }
  else if (!bVar9) {
    bVar9 = false;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_68);
    goto LAB_145373811;
  }
  bVar9 = true;
  if (4 < (byte)LogRenderer._0_1_) {
    if (local_68.End < local_68.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_68,1);
    }
    *local_68.CurPos = L'\0';
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_68);
LAB_145373811:
  if (bVar9) {
    uVar17 = 0;
    (this->PersistentSBTInitializer).Lifetime = EVar14;
    (this->PersistentSBTInitializer).ShaderBindingMode = EVar4;
    (this->PersistentSBTInitializer).HitGroupIndexingMode = EVar3;
    (this->PersistentSBTInitializer).field_0x3 = uStack_7d;
    (this->PersistentSBTInitializer).LocalBindingDataSize = uVar18;
    (this->PersistentSBTInitializer).NumShaderSlotsPerGeometrySegment = uVar11;
    (this->PersistentSBTInitializer).NumGeometrySegments = uVar5;
    (this->PersistentSBTInitializer).NumMissShaderSlots = uVar7;
    (this->PersistentSBTInitializer).NumCallableShaderSlots = uVar6;
    if (0 < (this->PersistentSBTs).ArrayNum) {
      lVar13 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar17 < (this->PersistentSBTs).ArrayNum) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(longlong *)((this->PersistentSBTs).AllocatorInstance.Data + lVar13 + 8) != 0) {
          uVar10 = 0;
          if ((int)uVar17 < (this->PersistentSBTs).ArrayNum) {
            uVar10 = ~uVar17 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          AllocatePersistentShaderBindingTable
                    (this,param_1,uVar17,
                     (ERayTracingShaderBindingMode)
                     (this->PersistentSBTs).AllocatorInstance.Data[lVar13]);
        }
        uVar17 = uVar17 + 1;
        lVar13 = lVar13 + 0x18;
      } while ((int)uVar17 < (this->PersistentSBTs).ArrayNum);
    }
    this_00 = &this->DirtyPersistentRecords;
    (this->DirtyPersistentRecords).NumBits = uVar5 * uVar11;
    uVar11 = uVar5 * uVar11 + 0x1f;
    uVar17 = uVar11 >> 5;
    if (uVar11 >> 5 != 0) {
      if ((this->DirtyPersistentRecords).MaxBits + 0x1fU >> 5 < uVar17) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&this_00->AllocatorInstance,0,uVar17,4);
        (this->DirtyPersistentRecords).MaxBits = uVar17 << 5;
      }
      FVar15 = (this->DirtyPersistentRecords).AllocatorInstance.SecondaryData;
      if (FVar15 == (ForElementType<unsigned_int>)0x0) {
        FVar15 = (ForElementType<unsigned_int>)this_00;
      }
      if (uVar17 < 9) {
        iVar12 = -1;
      }
      else {
        iVar12 = 0xff;
      }
      memset((void *)FVar15,iVar12,(ulonglong)uVar17 << 2);
      iVar12 = (this->DirtyPersistentRecords).NumBits;
      uVar17 = iVar12 >> 0x1f & 0x1f;
      uVar11 = iVar12 + uVar17;
      iVar12 = (uVar11 & 0x1f) - uVar17;
      if (iVar12 != 0) {
        FVar15 = (this->DirtyPersistentRecords).AllocatorInstance.SecondaryData;
        if (FVar15 == (ForElementType<unsigned_int>)0x0) {
          FVar15 = (ForElementType<unsigned_int>)this_00;
        }
        puVar1 = (uint *)((longlong)FVar15 + (longlong)((int)uVar11 >> 5) * 4);
        *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar12 & 0x1f);
      }
    }
  }
  return;
}

// EndFrame @ 14537cc90

void __thiscall FRayTracingShaderBindingTable::EndFrame(FRayTracingShaderBindingTable *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FRayTracingShaderCommand *pFVar4;
  
  piVar1 = &(this->TransientUniformBuffers).ArrayMax;
  pFVar3 = (this->TransientUniformBuffers).AllocatorInstance.Data;
  iVar2 = (this->TransientUniformBuffers).ArrayNum;
  if ((this->TransientUniformBuffers).ArrayMax < 0) {
    DestructItems<TRefCountPtr<FRHIUniformBuffer>,int>
              ((TRefCountPtr<FRHIUniformBuffer> *)pFVar3,iVar2);
    (this->TransientUniformBuffers).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->TransientUniformBuffers).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TRefCountPtr<FRHIUniformBuffer>,int>
              ((TRefCountPtr<FRHIUniformBuffer> *)pFVar3,iVar2);
    (this->TransientUniformBuffers).ArrayNum = 0;
  }
  piVar1 = &(this->CallableCommands).ArrayMax;
  pFVar4 = (FRayTracingShaderCommand *)(this->CallableCommands).AllocatorInstance.Data;
  iVar2 = (this->CallableCommands).ArrayNum;
  if ((this->CallableCommands).ArrayMax < 0) {
    DestructItems<FRayTracingShaderCommand,int>(pFVar4,iVar2);
    (this->CallableCommands).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x90,8,0,&(this->CallableCommands).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FRayTracingShaderCommand,int>(pFVar4,iVar2);
    (this->CallableCommands).ArrayNum = 0;
  }
  this->NumMissShaderSlots = 1;
  this->NumCallableShaderSlots = 0;
  return;
}

// FlushAllocationsToClear @ 145389f20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRayTracingShaderBindingTable::FlushAllocationsToClear
          (FRayTracingShaderBindingTable *this,FRHICommandList *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  IRHICommandContext *pIVar11;
  FRHIRayTracingPipelineState *pFVar12;
  undefined8 *puVar13;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar14;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar15;
  FLowLevelMemTracker *this_01;
  FPageAllocator *this_02;
  int iVar16;
  ulonglong uVar17;
  ForElementType<unsigned_int> FVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  int *piVar22;
  ulonglong uVar23;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  ForElementType<unsigned_int> FVar28;
  uint uVar29;
  FScriptContainerElement *pFVar30;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ulonglong in_stack_ffffffffffffff20;
  uint local_b8;
  undefined4 local_a8;
  int iStack_a4;
  undefined8 *local_a0;
  void *local_98;
  undefined1 local_90;
  undefined4 uStack_8f;
  undefined2 uStack_8b;
  undefined1 uStack_89;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  int local_58;
  int local_54;
  undefined8 *local_50 [2];
  
  if (&this->StaticAllocationCS == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->StaticAllocationCS);
  uVar7 = (this->PersistentSBTInitializer).NumGeometrySegments *
          (this->PersistentSBTInitializer).NumShaderSlotsPerGeometrySegment;
  if (((uint)(this->DirtyPersistentRecords).NumBits < uVar7) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxNumValidRecords <= (uint32)DirtyPersistentRecords.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingShaderBindingTable.cpp"
                         ,0x240,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar25 = (this->PersistentRecordsToClear).NumBits;
  FVar18 = (this->PersistentRecordsToClear).AllocatorInstance.SecondaryData;
  uVar21 = 0;
  local_b8 = 0;
  if (FVar18 == (ForElementType<unsigned_int>)0x0) {
    FVar18 = (ForElementType<unsigned_int>)&this->PersistentRecordsToClear;
  }
  iVar8 = uVar25 + 0x1f;
  iVar8 = (int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5;
  uVar25 = uVar25 & 0x8000001f;
  if ((int)uVar25 < 0) {
    uVar25 = (uVar25 - 1 | 0xffffffe0) + 1;
  }
  uVar19 = 0xffffffff >> ((byte)(0x20 - uVar25) & 0x1f);
  if (0x1f < (int)(0x20 - uVar25)) {
    uVar19 = 0xffffffff;
  }
  uVar25 = 0xffffffff;
  if (iVar8 == 1) {
    uVar25 = uVar19;
  }
  uVar17 = uVar21;
  if (0 < iVar8) {
    do {
      uVar27 = *(uint *)((longlong)FVar18 + uVar17 * 4);
      uVar29 = uVar27 & uVar25;
      if (uVar25 == 0xffffffff) {
        uVar29 = uVar27;
      }
      uVar27 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar29 - ((ulonglong)(uVar29 >> 1) & 0x5555555555555555);
      uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333);
      local_b8 = (int)uVar21 +
                 (uint)(byte)(((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                             0x38);
      uVar21 = (ulonglong)local_b8;
      uVar25 = 0xffffffff;
      if (uVar27 == iVar8 - 1U) {
        uVar25 = uVar19;
      }
      uVar17 = (ulonglong)uVar27;
    } while ((int)uVar27 < iVar8);
  }
  uVar21 = 0;
  if (local_b8 != 0) {
    local_a0 = (undefined8 *)0x0;
    if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
      local_98 = FMemStackBase::Alloc((FMemStackBase *)param_1,(ulonglong)(local_b8 * 0x38),8);
    }
    else {
      puVar10 = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc
                          ((ulonglong)(local_b8 * 0x38) + 0x10,8);
      *puVar10 = &
                 ___7FAllocation___TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
      ;
      local_98 = (void *)((longlong)puVar10 + 0x17U & 0xfffffffffffffff8);
      puVar10[1] = 0;
      puVar13 = local_a0;
      do {
        puVar10[1] = puVar13;
        LOCK();
        bVar6 = puVar13 != local_a0;
        puVar5 = puVar10;
        if (bVar6) {
          puVar13 = local_a0;
          puVar5 = local_a0;
        }
        local_a0 = puVar5;
        UNLOCK();
      } while (bVar6);
    }
    iVar8 = (this->PersistentRecordsToClear).NumBits;
    uVar25 = 0;
    if (iVar8 != 0) {
      FVar18 = (this->PersistentRecordsToClear).AllocatorInstance.SecondaryData;
      if (FVar18 == (ForElementType<unsigned_int>)0x0) {
        FVar18 = (ForElementType<unsigned_int>)&this->PersistentRecordsToClear;
      }
      uVar19 = *(uint *)FVar18;
      uVar17 = uVar21;
      uVar26 = uVar21;
      while (uVar19 == 0) {
        iVar16 = (int)uVar17;
        uVar26 = (ulonglong)((int)uVar26 + 0x20);
        uVar19 = iVar16 + 1;
        uVar17 = (ulonglong)uVar19;
        if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar19) goto LAB_14538a2ba;
        uVar19 = *(uint *)((uchar *)((longlong)FVar18 + 4) + (longlong)iVar16 * 4);
      }
      uVar19 = -uVar19 & uVar19;
      uVar23 = (ulonglong)uVar19 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_58 = (int)lVar20;
      uVar27 = (int)uVar26 + -1 + local_58;
      if ((int)uVar27 < iVar8) {
        uVar29 = 0xffffffff;
        uVar23 = uVar21;
        do {
          if (uVar27 < uVar7) {
            lVar20 = uVar23 * 0x38;
            uStack_68 = 0;
            uStack_60 = 0;
            uVar25 = (int)uVar23 + 1;
            uStack_8f = 0;
            uStack_8b = 0;
            uStack_89 = 0;
            local_90 = 1;
            uStack_88 = 0;
            local_80 = 0;
            uStack_78 = 0;
            local_70 = 0;
            *(undefined8 *)(lVar20 + (longlong)local_98) = 1;
            ((undefined8 *)(lVar20 + (longlong)local_98))[1] = 0;
            puVar13 = (undefined8 *)(lVar20 + 0x10 + (longlong)local_98);
            *puVar13 = 0;
            puVar13[1] = 0;
            puVar13 = (undefined8 *)(lVar20 + 0x20 + (longlong)local_98);
            *puVar13 = 0;
            puVar13[1] = 0;
            *(undefined8 *)(lVar20 + 0x30 + (longlong)local_98) = 0;
            *(uint *)(lVar20 + 0x14 + (longlong)local_98) = uVar27;
            *(undefined1 *)(lVar20 + (longlong)local_98) = 2;
          }
          FVar18 = (this->PersistentRecordsToClear).AllocatorInstance.SecondaryData;
          iVar8 = (this->PersistentRecordsToClear).NumBits;
          uVar29 = uVar29 & ~uVar19;
          FVar28 = (ForElementType<unsigned_int>)&this->PersistentRecordsToClear;
          if (FVar18 != (ForElementType<unsigned_int>)0x0) {
            FVar28 = FVar18;
          }
          uVar19 = uVar29 & *(uint *)((longlong)FVar28 + (longlong)(int)uVar17 * 4);
          while (uVar19 == 0) {
            iVar16 = (int)uVar17;
            uVar26 = (ulonglong)((int)uVar26 + 0x20);
            uVar19 = iVar16 + 1;
            uVar17 = (ulonglong)uVar19;
            if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar19)
            goto LAB_14538a2ba;
            uVar29 = 0xffffffff;
            uVar19 = *(uint *)((longlong)FVar28 + 4 + (longlong)iVar16 * 4);
          }
          uVar19 = -uVar19 & uVar19;
          uVar23 = (ulonglong)uVar19 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          local_54 = (int)lVar20;
          uVar27 = (int)uVar26 + -1 + local_54;
        } while (((int)uVar27 <= iVar8) && (uVar23 = (ulonglong)uVar25, (int)uVar27 < iVar8));
      }
    }
LAB_14538a2ba:
    uVar7 = (this->PersistentSBTs).ArrayNum;
    uVar17 = (ulonglong)(int)uVar7;
    pFVar30 = (this->PersistentSBTs).AllocatorInstance.Data;
    pFVar1 = pFVar30 + uVar17 * 0x18;
    while( true ) {
      if ((this->PersistentSBTs).ArrayNum != (int)uVar17) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FRayTracingShaderBindingTable::FPersistentSBTData,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar30 == pFVar1) break;
      lVar20 = *(longlong *)(pFVar30 + 8);
      if (lVar20 == 0) {
LAB_14538a427:
        uVar17 = (ulonglong)uVar7;
        pFVar30 = pFVar30 + 0x18;
      }
      else {
        if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
          uVar19 = *(uint *)(lVar20 + 0x344);
          uVar27 = GetRHIRayTracingPipelineStateMaxLocalBindingDataSize
                             ((FRayTracingPipelineState *)0x0);
          if ((uVar19 < uVar27) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("GetRHIRayTracingPipelineStateMaxLocalBindingDataSize(Pipeline) <= SBT->GetInitializer().LocalBindingDataSize"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                 ,0x1135,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          puVar13 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x40,8);
          *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
          **(undefined8 **)&param_1->field_0x30 = puVar13;
          *(undefined8 **)&param_1->field_0x30 = puVar13 + 1;
          puVar13[1] = 0;
          *(uint *)(puVar13 + 5) = uVar25;
          puVar13[6] = local_98;
          *puVar13 = &___7FRHICommandSetBindingsOnShaderBindingTable__6B_;
          puVar13[2] = lVar20;
          puVar13[3] = 0;
          puVar13[4] = 0;
          *(undefined1 *)(puVar13 + 7) = 0;
          FRHICommandListBase::RHIThreadFence((FRHICommandListBase *)param_1,SUB81(local_50,0));
          if (local_50[0] != (undefined8 *)0x0) {
            LOCK();
            piVar22 = (int *)(local_50[0] + 6);
            iVar8 = *piVar22;
            *piVar22 = *piVar22 + -1;
            UNLOCK();
            if ((iVar8 == 1) && (local_50[0] != (undefined8 *)0x0)) {
              (**(code **)*local_50[0])(local_50[0],1);
            }
          }
          goto LAB_14538a427;
        }
        pIVar11 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
        pcVar4 = *(code **)(pIVar11->_padding_ + 0x278);
        pFVar12 = GetRHIRayTracingPipelineState((FRayTracingPipelineState *)0x0);
        in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffffffffff00;
        (*pcVar4)(pIVar11,lVar20,pFVar12,uVar25,local_98,in_stack_ffffffffffffff20);
        uVar17 = (ulonglong)uVar7;
        pFVar30 = pFVar30 + 0x18;
      }
    }
    iVar8 = (this->PersistentRecordsToClear).NumBits;
    this_00 = &this->PersistentRecordsToClear;
    (this->PersistentRecordsToClear).NumBits = iVar8;
    uVar7 = iVar8 + 0x1f;
    uVar25 = uVar7 >> 5;
    if (uVar7 >> 5 != 0) {
      if ((this->PersistentRecordsToClear).MaxBits + 0x1fU >> 5 < uVar25) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&this_00->AllocatorInstance,0,uVar25,4);
        (this->PersistentRecordsToClear).MaxBits = uVar25 << 5;
      }
      FVar18 = (this->PersistentRecordsToClear).AllocatorInstance.SecondaryData;
      if (FVar18 == (ForElementType<unsigned_int>)0x0) {
        FVar18 = (ForElementType<unsigned_int>)this_00;
      }
      memset((void *)FVar18,0,(ulonglong)uVar25 << 2);
      iVar8 = (this->PersistentRecordsToClear).NumBits;
      uVar25 = iVar8 >> 0x1f & 0x1f;
      uVar7 = iVar8 + uVar25;
      iVar8 = (uVar7 & 0x1f) - uVar25;
      if (iVar8 != 0) {
        FVar18 = (this->PersistentRecordsToClear).AllocatorInstance.SecondaryData;
        if (FVar18 == (ForElementType<unsigned_int>)0x0) {
          FVar18 = (ForElementType<unsigned_int>)this_00;
        }
        puVar2 = (uint *)((longlong)FVar18 + (longlong)((int)uVar7 >> 5) * 4);
        *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar8 & 0x1f);
      }
    }
    pFVar30 = (this->PendingStaticAllocationsToFree).AllocatorInstance.Data;
    iVar8 = (this->PendingStaticAllocationsToFree).ArrayNum;
    pFVar1 = pFVar30 + (longlong)iVar8 * 8;
    while( true ) {
      if ((this->PendingStaticAllocationsToFree).ArrayNum != iVar8) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FRayTracingSBTAllocation_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar30 == pFVar1) break;
      puVar3 = *(undefined4 **)pFVar30;
      FVar24 = (ForElementType<FSpanAllocator::FLinearAllocation>)
               &(this->StaticRangeAllocator).PendingFreeSpans;
      FVar15 = (this->StaticRangeAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
      iVar16 = puVar3[2];
      uVar21 = (ulonglong)((uint)uVar21 + iVar16);
      local_a8 = *puVar3;
      FVar14 = FVar15;
      if (FVar15 == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
        FVar14 = FVar24;
      }
      iStack_a4 = iVar16;
      if ((ulonglong)FVar14 <= &local_a8) {
        if (FVar15 == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
          FVar15 = FVar24;
        }
        if ((&local_a8 <
             (undefined4 *)
             ((longlong)FVar15 +
             (longlong)(this->StaticRangeAllocator).PendingFreeSpans.ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar9 = (this->StaticRangeAllocator).PendingFreeSpans.ArrayNum;
      piVar22 = &(this->StaticRangeAllocator).PendingFreeSpans.ArrayMax;
      if (iVar9 == *piVar22) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FSpanAllocator::FLinearAllocation>_>
                          (0x408,(ForElementType<FSpanAllocator::FLinearAllocation> *)FVar24,piVar22
                          );
      }
      (this->StaticRangeAllocator).PendingFreeSpans.ArrayNum = iVar9 + 1;
      FVar15 = (this->StaticRangeAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
      if (FVar15 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
        FVar24 = FVar15;
      }
      *(ulonglong *)((longlong)FVar24 + (longlong)iVar9 * 8) = CONCAT44(iStack_a4,local_a8);
      (this->StaticRangeAllocator).CurrentSize = (this->StaticRangeAllocator).CurrentSize - iVar16;
      ::operator_delete(puVar3,0x28);
      pFVar30 = pFVar30 + 8;
    }
    if (((uint)uVar21 != local_b8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("FreedRecords == TotalRecordsToClear",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingShaderBindingTable.cpp"
                           ,0x275,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (this->PendingStaticAllocationsToFree).ArrayNum = 0;
    if ((this->PendingStaticAllocationsToFree).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->PendingStaticAllocationsToFree).AllocatorInstance,0,
                 &(this->PendingStaticAllocationsToFree).ArrayMax);
    }
    puVar13 = local_a0;
    LOCK();
    local_a0 = (undefined8 *)0x0;
    UNLOCK();
    while (puVar13 != (undefined8 *)0x0) {
      puVar10 = (undefined8 *)puVar13[1];
      (**(code **)*puVar13)(puVar13);
      puVar2 = (uint *)(puVar13 + -1);
      MemoryTrace_Free((ulong64)puVar2,0,0);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        this_01 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          this_01 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(this_01,Default,puVar2,FMalloc,true);
      }
      piVar22 = (int *)((longlong)puVar2 - (ulonglong)*puVar2);
      LOCK();
      iVar8 = *piVar22;
      *piVar22 = *piVar22 + -1;
      UNLOCK();
      puVar13 = puVar10;
      if (iVar8 == 1) {
        lVar20 = *(longlong *)(piVar22 + 0x10);
        MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar22,0,0);
        if (lVar20 - (longlong)piVar22 == 0x10000) {
          this_02 = FPageAllocator::Get();
          FPageAllocator::Free(this_02,piVar22);
        }
        else {
          (**(code **)((longlong)*UE::Private::GMalloc + 0x48))();
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->StaticAllocationCS);
  return;
}

// FreeStaticRange @ 14538aa00

void __thiscall
FRayTracingShaderBindingTable::FreeStaticRange
          (FRayTracingShaderBindingTable *this,FRayTracingSBTAllocation *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIRayTracingGeometry *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 *puVar8;
  TArray<FRayTracingSBTAllocation_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  FAllocationKey local_38;
  
  if (param_1 != (FRayTracingSBTAllocation *)0x0) {
    lpCriticalSection = &this->StaticAllocationCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->TotalStaticAllocationCount = this->TotalStaticAllocationCount - 1;
    pFVar2 = param_1->Geometry;
    if (pFVar2 == (FRHIRayTracingGeometry *)0x0) {
      FSpanAllocator::Free(&this->StaticRangeAllocator,param_1->BaseRecordIndex,param_1->NumRecords)
      ;
      this->AllocatedStaticSegmentCount =
           this->AllocatedStaticSegmentCount -
           param_1->NumRecords / this->NumShaderSlotsPerGeometrySegment;
      ::operator_delete(param_1,0x28);
    }
    else {
      local_38.Flags.CachedMeshCommandHash = (param_1->Flags).CachedMeshCommandHash;
      local_38.Flags.field1_0x8 = (param_1->Flags).field1_0x8;
      local_38.Flags._12_4_ = *(undefined4 *)&(param_1->Flags).field_0xc;
      local_38.Geometry = pFVar2;
      uVar5 = ::GetTypeHash(&local_38);
      if (*(int *)&(this->TrackedAllocationMap).field_0x8 !=
          *(int *)&(this->TrackedAllocationMap).field_0x34) {
        puVar8 = *(undefined1 **)&(this->TrackedAllocationMap).field_0x40;
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = &(this->TrackedAllocationMap).field_0x38;
        }
        iVar6 = *(int *)(puVar8 + (ulonglong)
                                  (*(int *)&(this->TrackedAllocationMap).field_0x48 - 1U & uVar5) *
                                  4);
        if (iVar6 != -1) {
          do {
            pFVar7 = (FScriptContainerElement *)
                     ((longlong)iVar6 * 0x30 + *(longlong *)&(this->TrackedAllocationMap).field_0x0)
            ;
            if (((*(FRHIRayTracingGeometry **)pFVar7 == pFVar2) &&
                (*(ulong64 *)(pFVar7 + 8) == local_38.Flags.CachedMeshCommandHash)) &&
               (*(uint *)(pFVar7 + 0x10) == local_38.Flags.field1_0x8)) {
              if (iVar6 != -1) goto LAB_14538aae3;
              break;
            }
            iVar6 = *(int *)(pFVar7 + 0x28);
          } while (iVar6 != -1);
        }
      }
      pFVar7 = (FScriptContainerElement *)0x0;
LAB_14538aae3:
      pFVar10 = pFVar7 + 0x18;
      if (pFVar7 == (FScriptContainerElement *)0x0) {
        pFVar10 = (FScriptContainerElement *)0x0;
      }
      pFVar7 = pFVar10 + 8;
      *(int *)pFVar7 = *(int *)pFVar7 + -1;
      if (*(int *)pFVar7 == 0) {
        this->AllocatedStaticSegmentCount =
             this->AllocatedStaticSegmentCount -
             *(uint *)(*(longlong *)pFVar10 + 8) / this->NumShaderSlotsPerGeometrySegment;
        MarkSet(this,*(FRayTracingSBTAllocation **)pFVar10,false);
        pTVar9 = &this->PendingStaticAllocationsToFree;
        pFVar7 = (pTVar9->AllocatorInstance).Data;
        if (((pFVar7 <= pFVar10) &&
            (pFVar10 < pFVar7 + (longlong)(this->PendingStaticAllocationsToFree).ArrayMax * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (this->PendingStaticAllocationsToFree).ArrayNum;
        piVar1 = &(this->PendingStaticAllocationsToFree).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar9->AllocatorInstance,piVar1);
        }
        (this->PendingStaticAllocationsToFree).ArrayNum = iVar6 + 1;
        *(longlong *)((pTVar9->AllocatorInstance).Data + (longlong)iVar6 * 8) = *(longlong *)pFVar10
        ;
        if (*(int *)&(this->TrackedAllocationMap).field_0x8 !=
            *(int *)&(this->TrackedAllocationMap).field_0x34) {
          uVar5 = ::GetTypeHash(&local_38);
          TSet<TTuple<FRayTracingShaderBindingTable::FAllocationKey,FRayTracingShaderBindingTable::FRefCountedAllocation>,TDefaultMapHashableKeyFuncs<FRayTracingShaderBindingTable::FAllocationKey,FRayTracingShaderBindingTable::FRefCountedAllocation,0>,FDefaultSetAllocator>
          ::RemoveImpl<FRayTracingShaderBindingTable::FAllocationKey>
                    ((TSet<TTuple<FRayTracingShaderBindingTable::FAllocationKey,FRayTracingShaderBindingTable::FRefCountedAllocation>,TDefaultMapHashableKeyFuncs<FRayTracingShaderBindingTable::FAllocationKey,FRayTracingShaderBindingTable::FRefCountedAllocation,0>,FDefaultSetAllocator>
                      *)&this->TrackedAllocationMap,uVar5,&local_38);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// GetDirtyBindings @ 14538d4f0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
* __thiscall
FRayTracingShaderBindingTable::GetDirtyBindings
          (FRayTracingShaderBindingTable *this,
          TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *__return_storage_ptr__,TArrayView<FRayTracingShaderBindingData_const_,int> *param_1,
          bool param_2)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined6 uVar5;
  undefined1 uVar6;
  undefined6 uVar7;
  FRHIRayTracingGeometry *pFVar8;
  undefined8 uVar9;
  FRayTracingShaderBindingData *pFVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar14;
  FRayTracingShaderBindingData *pFVar15;
  longlong lVar16;
  uint uVar17;
  ForElementType<FRayTracingShaderBindingData> FVar18;
  FRayTracingShaderBindingData *pFVar19;
  ForElementType<unsigned_int> FVar20;
  FRayTracingShaderBindingData *pFVar21;
  uint uVar22;
  bool bVar23;
  ForElementType<FRayTracingShaderBindingData> local_88;
  undefined8 local_80;
  FRayTracingShaderBindingData local_78;
  FRayTracingShaderBindingData local_58;
  
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId165,"FRayTracingShaderBindingTable::GetDirtyBindings",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingShaderBindingTable.cpp"
               ,0xa5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId165);
  }
  if ((this->bStaticAllocationsLocked == false) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_743919285201534809>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingShaderBindingTable.cpp"
                          ,0xa7,"bStaticAllocationsLocked"), bVar11)) {
    pcVar3 = (code *)swi(3);
    pTVar14 = (TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
               *)(*pcVar3)();
    return pTVar14;
  }
  FVar18.Data = (FRayTracingShaderBindingData *)0x0;
  local_88.Data = (FRayTracingShaderBindingData *)0x0;
  local_80 = 0;
  if ((GRHIGlobals.RayTracing.SupportsPersistentSBTs == false) || (GPersistentSBTEnabled == 0)) {
    uVar22 = param_1->ArrayNum;
    local_80 = (ulonglong)uVar22;
    iVar13 = 0;
    if (uVar22 != 0) {
      UE::Core::Private::
      ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingShaderBindingData>_>
                (0x20,8,uVar22,0,&local_88,uVar22,(int *)((longlong)&local_80 + 4));
      FVar18.Data = local_88.Data;
      memcpy(local_88.Data,param_1->DataPtr,(longlong)(int)uVar22 << 5);
      iVar13 = (int)local_80;
    }
  }
  else {
    if (((param_2) || (GForceAlwaysDirty != 0)) ||
       (bVar11 = false, (this->PersistentSBTInitializer).Lifetime == Transient)) {
      bVar11 = true;
    }
    uVar22 = param_1->ArrayNum;
    if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
    }
    if (0 < (int)uVar22) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingShaderBindingData>_>
                (0x20,8,uVar22,&local_88,0,(int *)((longlong)&local_80 + 4));
      FVar18.Data = (FRayTracingShaderBindingData *)(local_80 & 0xffffffff);
    }
    iVar13 = (int)FVar18.Data;
    pFVar21 = param_1->DataPtr;
    pFVar15 = pFVar21 + (int)uVar22;
    pFVar19 = FVar18.Data;
    FVar18.Data = local_88.Data;
    for (; pFVar21 != pFVar15; pFVar21 = pFVar21 + 1) {
      iVar13 = (int)pFVar19;
      if (bVar11) {
        local_78.RayTracingMeshCommandIndex = pFVar21->RayTracingMeshCommandIndex;
        local_78.SBTRecordIndex = pFVar21->SBTRecordIndex;
        uVar4 = pFVar21->bHidden;
        uVar5 = *(undefined6 *)&pFVar21->field_0x1a;
        local_78._26_6_ = uVar5;
        local_78.bHidden = (bool)uVar4;
        local_78.RayTracingMeshCommand = pFVar21->RayTracingMeshCommand;
        local_78.RayTracingGeometry = pFVar21->RayTracingGeometry;
        local_78.BindingType = Transient;
        if (((FVar18.Data <= &local_78) &&
            (local_80._4_4_ = (int)(local_80 >> 0x20), lVar16 = (longlong)local_80._4_4_,
            &local_78 < FVar18.Data + lVar16)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar3 = (code *)swi(3);
          pTVar14 = (TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                     *)(*pcVar3)();
          return pTVar14;
        }
        if (iVar13 == local_80._4_4_) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingShaderBindingData>_>
                             (0x820,&local_88,(int *)((longlong)&local_80 + 4));
          FVar18.Data = local_88.Data;
        }
        pFVar19 = (FRayTracingShaderBindingData *)(ulonglong)(iVar13 + 1U);
        local_80 = CONCAT44(local_80._4_4_,iVar13 + 1U);
        FVar18.Data[iVar13].RayTracingMeshCommand = local_78.RayTracingMeshCommand;
        FVar18.Data[iVar13].RayTracingGeometry = local_78.RayTracingGeometry;
        pFVar10 = FVar18.Data + iVar13;
        pFVar10->RayTracingMeshCommandIndex = local_78.RayTracingMeshCommandIndex;
        pFVar10->SBTRecordIndex = local_78.SBTRecordIndex;
        *(undefined8 *)(&pFVar10->RayTracingMeshCommandIndex + 2) = local_78._24_8_;
      }
      else {
        if (pFVar21->BindingType == Persistent) {
          uVar22 = pFVar21->SBTRecordIndex;
          if ((((int)uVar22 < 0) || ((this->SetPersistentRecords).NumBits <= (int)uVar22)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar12)) {
            pcVar3 = (code *)swi(3);
            pTVar14 = (TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                       *)(*pcVar3)();
            return pTVar14;
          }
          FVar2 = (this->SetPersistentRecords).AllocatorInstance.SecondaryData;
          FVar20 = (ForElementType<unsigned_int>)&this->SetPersistentRecords;
          if (FVar2 != (ForElementType<unsigned_int>)0x0) {
            FVar20 = FVar2;
          }
          uVar17 = uVar22 & 0x1f;
          if ((int)uVar22 < 0) {
            uVar22 = uVar22 + 0x1f;
          }
          if (((*(uint *)((longlong)FVar20 + (longlong)((int)uVar22 >> 5) * 4) >> uVar17 & 1) == 0)
             && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                    ("VisibleBinding.BindingType!= ERayTracingLocalShaderBindingType::Persistent || SetPersistentRecords[VisibleBinding.SBTRecordIndex]"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingShaderBindingTable.cpp"
                                     ,0xc1,L""), bVar12)) {
            pcVar3 = (code *)swi(3);
            pTVar14 = (TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                       *)(*pcVar3)();
            return pTVar14;
          }
        }
        uVar22 = pFVar21->SBTRecordIndex;
        if ((((int)uVar22 < 0) || ((this->DirtyPersistentRecords).NumBits <= (int)uVar22)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar12)) {
          pcVar3 = (code *)swi(3);
          pTVar14 = (TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                     *)(*pcVar3)();
          return pTVar14;
        }
        FVar2 = (this->DirtyPersistentRecords).AllocatorInstance.SecondaryData;
        FVar20 = (ForElementType<unsigned_int>)&this->DirtyPersistentRecords;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
          FVar20 = FVar2;
        }
        uVar17 = uVar22;
        if ((int)uVar22 < 0) {
          uVar17 = uVar22 + 0x1f;
        }
        puVar1 = (uint *)((longlong)FVar20 + (longlong)((int)uVar17 >> 5) * 4);
        uVar22 = 1 << ((byte)uVar22 & 0x1f);
        if (((*puVar1 & uVar22) == 0) && (pFVar21->BindingType != Transient)) {
          if (GValidatePersistentBindings == 0) goto LAB_14538d9b6;
          local_58.RayTracingMeshCommandIndex = pFVar21->RayTracingMeshCommandIndex;
          local_58.SBTRecordIndex = pFVar21->SBTRecordIndex;
          uVar6 = pFVar21->bHidden;
          uVar7 = *(undefined6 *)&pFVar21->field_0x1a;
          local_58._26_6_ = uVar7;
          local_58.bHidden = (bool)uVar6;
          local_58.RayTracingMeshCommand = pFVar21->RayTracingMeshCommand;
          local_58.RayTracingGeometry = pFVar21->RayTracingGeometry;
          local_58.BindingType = Validation;
          if (((FVar18.Data <= &local_58) && (&local_58 < FVar18.Data + local_80._4_4_)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar3 = (code *)swi(3);
            pTVar14 = (TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                       *)(*pcVar3)();
            return pTVar14;
          }
          if (iVar13 == local_80._4_4_) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingShaderBindingData>_>
                               (0x820,&local_88,(int *)((longlong)&local_80 + 4));
            FVar18.Data = local_88.Data;
          }
          FVar18.Data[iVar13].RayTracingMeshCommand = local_58.RayTracingMeshCommand;
          FVar18.Data[iVar13].RayTracingGeometry = local_58.RayTracingGeometry;
          pFVar19 = FVar18.Data + iVar13;
          pFVar19->RayTracingMeshCommandIndex = local_58.RayTracingMeshCommandIndex;
          pFVar19->SBTRecordIndex = local_58.SBTRecordIndex;
          *(undefined8 *)(&pFVar19->RayTracingMeshCommandIndex + 2) = local_58._24_8_;
        }
        else {
          if ((FVar18.Data <= pFVar21) &&
             ((pFVar21 < FVar18.Data + local_80._4_4_ &&
              (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar12)))) {
            pcVar3 = (code *)swi(3);
            pTVar14 = (TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                       *)(*pcVar3)();
            return pTVar14;
          }
          if (iVar13 == local_80._4_4_) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingShaderBindingData>_>
                               (0x820,&local_88,(int *)((longlong)&local_80 + 4));
            FVar18.Data = local_88.Data;
          }
          pFVar8 = pFVar21->RayTracingGeometry;
          FVar18.Data[iVar13].RayTracingMeshCommand = pFVar21->RayTracingMeshCommand;
          FVar18.Data[iVar13].RayTracingGeometry = pFVar8;
          uVar17 = pFVar21->SBTRecordIndex;
          uVar9 = *(undefined8 *)&pFVar21->BindingType;
          pFVar19 = FVar18.Data + iVar13;
          pFVar19->RayTracingMeshCommandIndex = pFVar21->RayTracingMeshCommandIndex;
          pFVar19->SBTRecordIndex = uVar17;
          *(undefined8 *)(&pFVar19->RayTracingMeshCommandIndex + 2) = uVar9;
          *puVar1 = *puVar1 & ~uVar22;
        }
        pFVar19 = (FRayTracingShaderBindingData *)(ulonglong)(iVar13 + 1U);
        local_80 = CONCAT44(local_80._4_4_,iVar13 + 1U);
      }
LAB_14538d9b6:
      iVar13 = (int)pFVar19;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = FVar18.Data;
  __return_storage_ptr__->ArrayNum = iVar13;
  __return_storage_ptr__->ArrayMax = local_80._4_4_;
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// GetMaxAllocatedStaticSegmentCount @ 14538dcd0

uint __thiscall
FRayTracingShaderBindingTable::GetMaxAllocatedStaticSegmentCount
          (FRayTracingShaderBindingTable *this)

{
  longlong lVar1;
  
  lVar1 = 0x100;
  if ((this->StaticRangeAllocator).bGrowOnly == false) {
    lVar1 = 0xfc;
  }
  return *(uint *)((this->SetPersistentRecords).AllocatorInstance.InlineData + lVar1 + -0x58) /
         this->NumShaderSlotsPerGeometrySegment;
}

// GetNumGeometrySegments @ 14538dd00

uint __thiscall
FRayTracingShaderBindingTable::GetNumGeometrySegments(FRayTracingShaderBindingTable *this)

{
  longlong lVar1;
  
  lVar1 = 0x100;
  if ((this->StaticRangeAllocator).bGrowOnly == false) {
    lVar1 = 0xfc;
  }
  return *(uint *)((this->SetPersistentRecords).AllocatorInstance.InlineData + lVar1 + -0x58) /
         this->NumShaderSlotsPerGeometrySegment + this->NumDynamicGeometrySegments;
}

// IsDirty @ 14539c640

bool __thiscall
FRayTracingShaderBindingTable::IsDirty(FRayTracingShaderBindingTable *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ForElementType<unsigned_int> FVar4;
  
  if (((int)param_1 < 0) || ((this->DirtyPersistentRecords).NumBits <= (int)param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FVar4 = (this->DirtyPersistentRecords).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&this->DirtyPersistentRecords;
  }
  return (*(uint *)((longlong)FVar4 +
                   (longlong)((int)(param_1 + ((int)param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (param_1 & 0x1f) & 1) != 0;
}

// IsPersistent @ 14539c710

bool __thiscall FRayTracingShaderBindingTable::IsPersistent(FRayTracingShaderBindingTable *this)

{
  return (this->PersistentSBTInitializer).Lifetime == Persistent;
}

// MarkDirty @ 14539c820

void __thiscall
FRayTracingShaderBindingTable::MarkDirty
          (FRayTracingShaderBindingTable *this,FRayTracingSBTAllocation *param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  ForElementType<unsigned_int> FVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<unsigned_int> FVar8;
  int iVar9;
  uint uVar10;
  
  iVar9 = param_1->BaseRecordIndex + param_1->NumRecords;
  if ((this->DirtyPersistentRecords).NumBits < iVar9) {
    iVar7 = 1;
    if (iVar9 != 0) {
      iVar7 = iVar9;
    }
    uVar2 = (ulonglong)(iVar7 - 1) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
              (&this->DirtyPersistentRecords,1 << ((byte)lVar4 & 0x1f),true);
  }
  uVar10 = 0;
  if (param_1->NumRecords != 0) {
    do {
      iVar9 = param_1->BaseRecordIndex + uVar10;
      if (((iVar9 < 0) || ((this->DirtyPersistentRecords).NumBits <= iVar9)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar3 = (this->DirtyPersistentRecords).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<unsigned_int>)&this->DirtyPersistentRecords;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar8 = FVar3;
      }
      iVar7 = iVar9;
      if (iVar9 < 0) {
        iVar7 = iVar9 + 0x1f;
      }
      uVar10 = uVar10 + 1;
      puVar1 = (uint *)((longlong)FVar8 + (longlong)(iVar7 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
    } while (uVar10 < param_1->NumRecords);
  }
  return;
}

// MarkSet @ 14539cb10

void __thiscall
FRayTracingShaderBindingTable::MarkSet
          (FRayTracingShaderBindingTable *this,FRayTracingSBTAllocation *param_1,bool param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  TBitArray<FDefaultBitArrayAllocator> *this_01;
  uint *puVar1;
  ulonglong uVar2;
  ForElementType<unsigned_int> FVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  this_00 = &this->SetPersistentRecords;
  iVar13 = param_1->BaseRecordIndex + param_1->NumRecords;
  this_01 = &this->PersistentRecordsToClear;
  if ((this->SetPersistentRecords).NumBits < iVar13) {
    iVar7 = 1;
    if (iVar13 != 0) {
      iVar7 = iVar13;
    }
    uVar2 = (ulonglong)(iVar7 - 1) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>(this_00,1 << ((byte)lVar4 & 0x1f),false);
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>(this_01,1 << ((byte)lVar4 & 0x1f),false);
  }
  uVar12 = 0;
  if (param_1->NumRecords != 0) {
    do {
      uVar11 = param_1->BaseRecordIndex + uVar12;
      if (((int)uVar11 < 0) || ((this->SetPersistentRecords).NumBits <= (int)uVar11)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar3 = (this->SetPersistentRecords).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<unsigned_int>)this_00;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar10 = FVar3;
      }
      uVar8 = uVar11;
      if ((int)uVar11 < 0) {
        uVar8 = uVar11 + 0x1f;
      }
      if (((*(uint *)((longlong)FVar10 + (longlong)((int)uVar8 >> 5) * 4) >> (uVar11 & 0x1f) & 1) !=
          0) == param_2) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("SetPersistentRecords[RecordIndex] != bValue",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingShaderBindingTable.cpp"
                           ,0x192,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (((int)uVar11 < 0) || ((this->SetPersistentRecords).NumBits <= (int)uVar11)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar3 = (this->SetPersistentRecords).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<unsigned_int>)this_00;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar10 = FVar3;
      }
      uVar8 = uVar11;
      if ((int)uVar11 < 0) {
        uVar8 = uVar11 + 0x1f;
      }
      puVar1 = (uint *)((longlong)FVar10 + (longlong)((int)uVar8 >> 5) * 4);
      bVar9 = (byte)uVar11;
      uVar8 = 1 << (bVar9 & 0x1f);
      if (param_2) {
        *puVar1 = *puVar1 | uVar8;
      }
      else {
        *puVar1 = ~uVar8 & *puVar1;
        if (((int)uVar11 < 0) || ((this->PersistentRecordsToClear).NumBits <= (int)uVar11)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        FVar3 = (this->PersistentRecordsToClear).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<unsigned_int>)this_01;
        if (FVar3 != (ForElementType<unsigned_int>)0x0) {
          FVar10 = FVar3;
        }
        uVar8 = uVar11;
        if ((int)uVar11 < 0) {
          uVar8 = uVar11 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar10 + (longlong)((int)uVar8 >> 5) * 4) >> (uVar11 & 0x1f) & 1)
            != 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("bValue || !PersistentRecordsToClear[RecordIndex]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingShaderBindingTable.cpp"
                             ,0x196,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
      }
      if (((int)uVar11 < 0) || ((this->PersistentRecordsToClear).NumBits <= (int)uVar11)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar3 = (this->PersistentRecordsToClear).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<unsigned_int>)this_01;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar10 = FVar3;
      }
      if ((int)uVar11 < 0) {
        uVar11 = uVar11 + 0x1f;
      }
      lVar4 = (longlong)((int)uVar11 >> 5) * 4;
      uVar8 = 1 << (bVar9 & 0x1f);
      uVar11 = *(uint *)(lVar4 + (longlong)FVar10);
      if (param_2) {
        uVar8 = ~uVar8 & uVar11;
      }
      else {
        uVar8 = uVar8 | uVar11;
      }
      uVar12 = uVar12 + 1;
      *(uint *)((longlong)FVar10 + lVar4) = uVar8;
    } while (uVar12 < param_1->NumRecords);
  }
  return;
}

// ResetDynamicAllocationData @ 1453a6620

void __thiscall
FRayTracingShaderBindingTable::ResetDynamicAllocationData(FRayTracingShaderBindingTable *this)

{
  int *piVar1;
  TArray<FRayTracingSBTAllocation_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRayTracingSBTAllocation_*,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  
  pTVar2 = &this->FreeDynamicAllocationPool;
  pTVar3 = &this->ActiveDynamicAllocations;
  if (pTVar2 == pTVar3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar4 = (this->ActiveDynamicAllocations).ArrayNum;
  if (iVar4 != 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar4,&pTVar2->AllocatorInstance,
                       &(this->FreeDynamicAllocationPool).ArrayNum,
                       &(this->FreeDynamicAllocationPool).ArrayMax);
    memcpy((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8,(pTVar3->AllocatorInstance).Data,
           (longlong)iVar4 << 3);
  }
  uVar9 = (this->ActiveDynamicAllocations).ArrayNum;
  if (-1 < (int)uVar9) {
    piVar1 = &(this->ActiveDynamicAllocations).ArrayMax;
    (this->ActiveDynamicAllocations).ArrayNum = 0;
    if (*piVar1 != uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar9,&pTVar3->AllocatorInstance,0,piVar1);
    }
    this->NumDynamicGeometrySegments = 0;
    this->bStaticAllocationsLocked = true;
    lVar8 = 0x100;
    if ((this->StaticRangeAllocator).bGrowOnly == false) {
      lVar8 = 0xfc;
    }
    uVar9 = *(uint *)((this->SetPersistentRecords).AllocatorInstance.InlineData + lVar8 + -0x58);
    uVar9 = uVar9 - uVar9 % this->NumShaderSlotsPerGeometrySegment;
    this->StartDynamicRangeOffset = uVar9;
    this->CurrentDynamicRangeOffset = uVar9;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
}

// ResetMissAndCallableShaders @ 1453a6750

void __thiscall
FRayTracingShaderBindingTable::ResetMissAndCallableShaders(FRayTracingShaderBindingTable *this)

{
  int *piVar1;
  int iVar2;
  FRayTracingShaderCommand *pFVar3;
  
  piVar1 = &(this->CallableCommands).ArrayMax;
  pFVar3 = (FRayTracingShaderCommand *)(this->CallableCommands).AllocatorInstance.Data;
  iVar2 = (this->CallableCommands).ArrayNum;
  if ((this->CallableCommands).ArrayMax < 0) {
    DestructItems<FRayTracingShaderCommand,int>(pFVar3,iVar2);
    (this->CallableCommands).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x90,8,0,&(this->CallableCommands).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FRayTracingShaderCommand,int>(pFVar3,iVar2);
    (this->CallableCommands).ArrayNum = 0;
  }
  this->NumMissShaderSlots = 1;
  this->NumCallableShaderSlots = 0;
  return;
}

