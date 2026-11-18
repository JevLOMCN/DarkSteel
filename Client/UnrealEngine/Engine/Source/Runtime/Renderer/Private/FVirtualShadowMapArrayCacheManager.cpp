// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 37

// GetGPUSizeBytes @ 1454f6ba0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
FVirtualShadowMapArrayCacheManager::GetGPUSizeBytes
          (FVirtualShadowMapArrayCacheManager *this,bool param_1)

{
  FRDGPooledBuffer *pFVar1;
  IPooledRenderTarget *pIVar2;
  FRHIGPUBufferReadback *this_00;
  uint uVar3;
  uint uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FName local_res8;
  FString local_38;
  
  pFVar1 = (this->PrevBuffers).ProjectionData.Reference;
  uVar7 = 0;
  uVar10 = 0;
  uVar8 = uVar10;
  if (pFVar1 != (FRDGPooledBuffer *)0x0) {
    uVar8 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar8 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb8748,
               (FLogCategoryBase *)&LogRenderer);
  }
  pFVar1 = (this->PrevBuffers).UncachedPageRectBounds.Reference;
  uVar11 = uVar10;
  if (pFVar1 != (FRDGPooledBuffer *)0x0) {
    uVar11 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar11 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb8748,
               (FLogCategoryBase *)&LogRenderer);
  }
  pFVar1 = (this->PrevBuffers).AllocatedPageRectBounds.Reference;
  uVar12 = uVar10;
  if (pFVar1 != (FRDGPooledBuffer *)0x0) {
    uVar12 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar12 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb8748,
               (FLogCategoryBase *)&LogRenderer);
  }
  uVar5 = ::GetGPUSizeBytes(&(this->PrevBuffers).PageTable,param_1);
  uVar6 = ::GetGPUSizeBytes(&(this->PrevBuffers).PageFlags,param_1);
  pIVar2 = (this->PhysicalPagePool).Reference;
  uVar3 = uVar10;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    uVar3 = (**(code **)(pIVar2->_padding_ + 0x18))();
  }
  if (((param_1) && (uVar3 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->PhysicalPagePool).Reference)->_padding_ + 0x10))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  pIVar2 = (this->HZBPhysicalPagePoolArray).Reference;
  if (pIVar2 == (IPooledRenderTarget *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(pIVar2->_padding_ + 0x18))();
  }
  if (((param_1) && (uVar4 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->HZBPhysicalPagePoolArray).Reference)->_padding_ + 0x10))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  pFVar1 = (this->PhysicalPageMetaData).Reference;
  uVar9 = uVar10;
  if (pFVar1 != (FRDGPooledBuffer *)0x0) {
    uVar9 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar9 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  pFVar1 = (this->AccumulatedStatsBuffer).Reference;
  if (pFVar1 != (FRDGPooledBuffer *)0x0) {
    uVar10 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar10 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  this_00 = this->GPUBufferReadback;
  if (this_00 != (FRHIGPUBufferReadback *)0x0) {
    uVar7 = FRHIGPUBufferReadback::GetGPUSizeBytes(this_00);
  }
  if (((param_1) && (uVar7 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    local_res8 = *(FName *)(this_00->_padding_ + 0x1c);
    ::FName::ToString(&local_res8,&local_38);
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb87e0,
               (FLogCategoryBase *)&LogRenderer);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return uVar7 + (ulonglong)uVar8 + uVar11 + uVar5 + uVar6 + uVar12 + (ulonglong)uVar3 +
                 (ulonglong)uVar4 + (ulonglong)uVar9 + (ulonglong)uVar10;
}

// FVirtualShadowMapArrayCacheManager @ 1457c19a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FVirtualShadowMapArrayCacheManager * __thiscall
FVirtualShadowMapArrayCacheManager::FVirtualShadowMapArrayCacheManager
          (FVirtualShadowMapArrayCacheManager *this,FScene *param_1)

{
  int *piVar1;
  TArray<float,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FVirtualShadowMapArrayCacheManager *pFVar6;
  ForElementType<float> FVar7;
  undefined4 local_18 [4];
  
  *(FScene **)&this->field_0x8 = param_1;
  pTVar2 = &this->LastOverflowTimes;
  (this->PrevUniformParameters).RecPhysicalPoolSize.field0_0x0._s_0.W = 1.0;
  (this->PrevBuffers).PageTable.Reference = (IPooledRenderTarget *)0x0;
  (this->PrevBuffers).PageFlags.Reference = (IPooledRenderTarget *)0x0;
  piVar1 = &(this->LastOverflowTimes).ArrayMax;
  (this->PrevBuffers).UncachedPageRectBounds.Reference = (FRDGPooledBuffer *)0x0;
  (this->PrevBuffers).AllocatedPageRectBounds.Reference = (FRDGPooledBuffer *)0x0;
  (this->PrevBuffers).ProjectionData.Reference = (FRDGPooledBuffer *)0x0;
  (this->PrevBuffers).PhysicalPageLists.Reference = (FRDGPooledBuffer *)0x0;
  (this->PrevBuffers).PageRequestFlags.Reference = (IPooledRenderTarget *)0x0;
  (this->PrevBuffers).NanitePerformanceFeedback.Reference = (FRDGPooledBuffer *)0x0;
  (this->PrevBuffers).ThrottleBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PrevUniformParameters).ProjectionData = (FRDGBufferSRV *)0x0;
  (this->PrevUniformParameters).PageTableSampler = (FRHISamplerState *)0x0;
  (this->PrevUniformParameters).PageTable = (FRDGTexture *)0x0;
  (this->PrevUniformParameters).PageFlags = (FRDGTexture *)0x0;
  (this->PrevUniformParameters).PageReceiverMasks = (FRDGTexture *)0x0;
  (this->PrevUniformParameters).AllocatedPageRectBounds = (FRDGBufferSRV *)0x0;
  (this->PrevUniformParameters).UncachedPageRectBounds = (FRDGBufferSRV *)0x0;
  (this->PrevUniformParameters).PhysicalPagePool = (FRDGTexture *)0x0;
  (this->PrevUniformParameters).CachePrimitiveAsDynamic = (FRDGBufferSRV *)0x0;
  (this->PrevUniformParameters).PerViewData.LightGridData = (FRDGBufferSRV *)0x0;
  (this->PrevUniformParameters).PerViewData.NumCulledLightsGrid = (FRDGBufferSRV *)0x0;
  (this->PrevUniformParameters).PerViewData.DirectionalLightIds = (FRDGBufferSRV *)0x0;
  (this->PhysicalPagePool).Reference = (IPooledRenderTarget *)0x0;
  (this->HZBPhysicalPagePoolArray).Reference = (IPooledRenderTarget *)0x0;
  (this->PhysicalPageMetaData).Reference = (FRDGPooledBuffer *)0x0;
  *(undefined8 *)&this->CacheEntries = 0;
  *(undefined8 *)&(this->CacheEntries).field_0x8 = 0;
  *(undefined8 *)&(this->CacheEntries).field_0x20 = 0;
  this->PhysicalPagePoolCreateFlags = None;
  this->MaxPhysicalPages = 0;
  *(undefined ***)this = &___7FVirtualShadowMapArrayCacheManager__6B_;
  *(undefined8 *)&(this->PrevUniformParameters).RecPhysicalPoolSize.field0_0x0 = 0;
  (this->PrevUniformParameters).RecPhysicalPoolSize.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&(this->PrevUniformParameters).PageTableTextureSizeInvSize.field0_0x0 = 0;
  (this->PrevUniformParameters).PageTableTextureSizeInvSize.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)
   ((longlong)&(this->PrevUniformParameters).PageReceiverMaskTextureSizeInvSize.field0_0x0 + 4) = 0;
  *(undefined8 *)
   ((longlong)&(this->PrevUniformParameters).PageTableTextureSizeInvSize.field0_0x0 + 0xc) =
       0x3f800000;
  (this->PrevUniformParameters).PageReceiverMaskTextureSizeInvSize.field0_0x0._s_0.W = 1.0;
  *(undefined4 *)&(this->CacheEntries).field_0x28 = 0;
  *(undefined4 *)&(this->CacheEntries).field_0x2c = 0x80;
  *(undefined4 *)&(this->CacheEntries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CacheEntries).field_0x34 = 0;
  *(undefined8 *)&(this->CacheEntries).field_0x40 = 0;
  *(undefined4 *)&(this->CacheEntries).field_0x48 = 0;
  (this->CachePrimitiveAsDynamic).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->CachePrimitiveAsDynamic).NumBits = 0;
  (this->CachePrimitiveAsDynamic).MaxBits = 0x80;
  (this->LastPrimitiveInvalidatedFrame).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastPrimitiveInvalidatedFrame).ArrayNum = 0;
  (this->LastPrimitiveInvalidatedFrame).ArrayMax = 0;
  (this->AccumulatedStatsBuffer).Reference = (FRDGPooledBuffer *)0x0;
  this->bAccumulatingStats = false;
  this->GPUBufferReadback = (FRHIGPUBufferReadback *)0x0;
  (this->StatusFeedbackSocket).MessageId.Index = 0xffffffff;
  this->GlobalResolutionLodBias = 0.0;
  this->LastFrameOverPageAllocationBudget = 0;
  (this->ScreenMessageDelegate).ID = 0;
  this->LoggedOverflowFlags = 0;
  (this->LastOverflowTimes).AllocatorInstance.SecondaryData = (ForElementType<float>)0x0;
  *piVar1 = 4;
  (this->StatsFeedbackSocket).MessageId.Index = 0xffffffff;
  (this->LastLoggedPageOverlapAppTime).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastLoggedPageOverlapAppTime).ArrayNum = 0;
  (this->LastLoggedPageOverlapAppTime).ArrayMax = 0;
  *(undefined8 *)&this->LargePageAreaItems = 0;
  *(undefined8 *)&(this->LargePageAreaItems).field_0x8 = 0;
  *(undefined8 *)&(this->LargePageAreaItems).field_0x20 = 0;
  *(undefined4 *)&(this->LargePageAreaItems).field_0x28 = 0;
  *(undefined4 *)&(this->LargePageAreaItems).field_0x2c = 0x80;
  *(undefined4 *)&(this->LargePageAreaItems).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LargePageAreaItems).field_0x34 = 0;
  *(undefined8 *)&(this->LargePageAreaItems).field_0x40 = 0;
  *(undefined4 *)&(this->LargePageAreaItems).field_0x48 = 0;
  (this->NPFDiagnosticMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NPFDiagnosticMessages).ArrayNum = 0;
  (this->NPFDiagnosticMessages).ArrayMax = 0;
  *(undefined8 *)&(this->NPFDiagnosticTimer).field_0x10 = 0;
  *(undefined8 *)&(this->NPFDiagnosticTimer).field_0x18 = 0;
  *(undefined8 *)&(this->NPFDiagnosticTimer).field_0x38 = 0;
  *(undefined8 *)&(this->NPFDiagnosticTimer).field_0x48 = 0;
  *(undefined8 *)&this->NPFDiagnosticTimer = 0;
  *(undefined8 *)&(this->NPFDiagnosticTimer).field_0x8 = 0;
  *(undefined8 *)&(this->NPFDiagnosticTimer).field_0x20 = 0;
  *(undefined4 *)&(this->NPFDiagnosticTimer).field_0x28 = 0;
  *(undefined4 *)&(this->NPFDiagnosticTimer).field_0x2c = 0x80;
  *(undefined4 *)&(this->NPFDiagnosticTimer).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NPFDiagnosticTimer).field_0x34 = 0;
  *(undefined8 *)&(this->NPFDiagnosticTimer).field_0x40 = 0;
  (this->ShadowInvalidatingInstancesImplementation)._padding_ =
       (longlong)
       &___7FShadowInvalidatingInstancesImplementation_FVirtualShadowMapArrayCacheManager__6B_;
  (this->ShadowInvalidatingInstancesImplementation).CacheManager = this;
  (this->ShadowInvalidatingInstancesImplementation).PrimitiveInstancesToInvalidate.AllocatorInstance
  .Data = (FScriptContainerElement *)0x0;
  (this->ShadowInvalidatingInstancesImplementation).PrimitiveInstancesToInvalidate.ArrayNum = 0;
  (this->ShadowInvalidatingInstancesImplementation).PrimitiveInstancesToInvalidate.ArrayMax = 0;
  (this->CacheValidGPUMask).GPUMask = 1;
  *(undefined8 *)&this->ViewData = 0;
  *(undefined8 *)&(this->ViewData).field_0x8 = 0;
  *(undefined8 *)&(this->ViewData).field_0x20 = 0;
  *(undefined4 *)&(this->ViewData).field_0x28 = 0;
  *(undefined4 *)&(this->ViewData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ViewData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ViewData).field_0x34 = 0;
  (this->PageTableDummy).Reference = (IPooledRenderTarget *)0x0;
  iVar5 = *piVar1;
  local_18[0] = 0xc1200000;
  (this->LastOverflowTimes).ArrayNum = 0;
  if (iVar5 != 4) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
              (4,4,4,&pTVar2->AllocatorInstance,0,piVar1);
    iVar5 = *piVar1;
  }
  FVar7 = (this->LastOverflowTimes).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<float>)0x0) {
    FVar7 = (ForElementType<float>)pTVar2;
  }
  if (((ulonglong)FVar7 <= local_18) &&
     (local_18 < (undefined4 *)((longlong)FVar7 + (longlong)iVar5 * 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FVirtualShadowMapArrayCacheManager *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->LastOverflowTimes).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->LastOverflowTimes).ArrayNum = iVar5 + 1;
  FVar7 = (this->LastOverflowTimes).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<float>)0x0) {
    FVar7 = (ForElementType<float>)pTVar2;
  }
  *(undefined4 *)((longlong)FVar7 + (longlong)iVar5 * 4) = local_18[0];
  FVar7 = (this->LastOverflowTimes).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<float>)0x0) {
    FVar7 = (ForElementType<float>)pTVar2;
  }
  if (((ulonglong)FVar7 <= local_18) &&
     (local_18 < (undefined4 *)((longlong)FVar7 + (longlong)*piVar1 * 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FVirtualShadowMapArrayCacheManager *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->LastOverflowTimes).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->LastOverflowTimes).ArrayNum = iVar5 + 1;
  FVar7 = (this->LastOverflowTimes).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<float>)0x0) {
    FVar7 = (ForElementType<float>)pTVar2;
  }
  *(undefined4 *)((longlong)FVar7 + (longlong)iVar5 * 4) = local_18[0];
  FVar7 = (this->LastOverflowTimes).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<float>)0x0) {
    FVar7 = (ForElementType<float>)pTVar2;
  }
  if (((ulonglong)FVar7 <= local_18) &&
     (local_18 < (undefined4 *)((longlong)FVar7 + (longlong)*piVar1 * 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FVirtualShadowMapArrayCacheManager *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->LastOverflowTimes).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->LastOverflowTimes).ArrayNum = iVar5 + 1;
  FVar7 = (this->LastOverflowTimes).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<float>)0x0) {
    FVar7 = (ForElementType<float>)pTVar2;
  }
  *(undefined4 *)((longlong)FVar7 + (longlong)iVar5 * 4) = local_18[0];
  FVar7 = (this->LastOverflowTimes).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<float>)0x0) {
    FVar7 = (ForElementType<float>)pTVar2;
  }
  if (((ulonglong)FVar7 <= local_18) &&
     (local_18 < (undefined4 *)((longlong)FVar7 + (longlong)*piVar1 * 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FVirtualShadowMapArrayCacheManager *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->LastOverflowTimes).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->LastOverflowTimes).ArrayNum = iVar5 + 1;
  FVar7 = (this->LastOverflowTimes).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<float>)0x0) {
    FVar7 = (ForElementType<float>)pTVar2;
  }
  *(undefined4 *)((longlong)FVar7 + (longlong)iVar5 * 4) = local_18[0];
  return this;
}

// ~FVirtualShadowMapArrayCacheManager @ 1457c3f80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArrayCacheManager::~FVirtualShadowMapArrayCacheManager
          (FVirtualShadowMapArrayCacheManager *this)

{
  longlong *plVar1;
  FDelegateHandle FVar2;
  IPooledRenderTarget *pIVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  ForElementType<float> FVar6;
  FRDGPooledBuffer *pFVar7;
  ForElementType<unsigned_int> FVar8;
  longlong lVar9;
  FRendererOnScreenNotification *lpCriticalSection;
  
  *(undefined ***)this = &___7FVirtualShadowMapArrayCacheManager__6B_;
  lpCriticalSection = FRendererOnScreenNotification::Get();
  FVar2.ID = (this->ScreenMessageDelegate).ID;
  if (lpCriticalSection != (FRendererOnScreenNotification *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
    ::Remove(&lpCriticalSection->ProxyDelegate,FVar2);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pIVar3 = (this->PageTableDummy).Reference;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))();
    }
    TSparseArray<FVirtualShadowMapArrayCacheManager::FViewData,FDefaultSparseArrayAllocator>::
    ~TSparseArray<FVirtualShadowMapArrayCacheManager::FViewData,FDefaultSparseArrayAllocator>
              (&this->ViewData);
    pFVar4 = (this->ShadowInvalidatingInstancesImplementation).PrimitiveInstancesToInvalidate.
             AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    *(undefined4 *)&(this->NPFDiagnosticTimer).field_0x48 = 0;
    pvVar5 = *(void **)&(this->NPFDiagnosticTimer).field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->NPFDiagnosticTimer);
    DestructItems<FString,int>
              ((FString *)(this->NPFDiagnosticMessages).AllocatorInstance.Data,
               (this->NPFDiagnosticMessages).ArrayNum);
    pFVar4 = (this->NPFDiagnosticMessages).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    *(undefined4 *)&(this->LargePageAreaItems).field_0x48 = 0;
    pvVar5 = *(void **)&(this->LargePageAreaItems).field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->LargePageAreaItems);
    pFVar4 = (this->LastLoggedPageOverlapAppTime).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    GPUMessage::FSocket::Reset(&this->StatsFeedbackSocket);
    FVar6 = (this->LastOverflowTimes).AllocatorInstance.SecondaryData;
    if (FVar6 != (ForElementType<float>)0x0) {
      FMemory::Free((void *)FVar6);
    }
    GPUMessage::FSocket::Reset(&this->StatusFeedbackSocket);
    pFVar7 = (this->AccumulatedStatsBuffer).Reference;
    if (pFVar7 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar7->_padding_;
      LOCK();
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar9 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar7->_padding_)(pFVar7,1);
      }
    }
    pFVar4 = (this->LastPrimitiveInvalidatedFrame).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    FVar8 = (this->CachePrimitiveAsDynamic).AllocatorInstance.SecondaryData;
    if (FVar8 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar8);
    }
    *(undefined4 *)&(this->CacheEntries).field_0x48 = 0;
    pvVar5 = *(void **)&(this->CacheEntries).field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    TSparseArray<TSparseSetElement<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->CacheEntries);
    pFVar7 = (this->PhysicalPageMetaData).Reference;
    if (pFVar7 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar7->_padding_;
      LOCK();
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar9 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar7->_padding_)(pFVar7,1);
      }
    }
    pIVar3 = (this->HZBPhysicalPagePoolArray).Reference;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))();
    }
    pIVar3 = (this->PhysicalPagePool).Reference;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))();
    }
    FVirtualShadowMapArrayFrameData::~FVirtualShadowMapArrayFrameData(&this->PrevBuffers);
    *(undefined ***)this = &___7ISceneExtension__6B_;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// operator() @ 1457c8720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_1>::operator()
          (void *this,FReader *param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  FVirtualShadowMapArrayCacheManager *pFVar8;
  code *pcVar9;
  TConsoleVariableData<float> *pTVar10;
  bool bVar11;
  FGameTime *pFVar12;
  longlong lVar13;
  float *pfVar14;
  FText *pFVar15;
  TConsoleVariableData<float> *pTVar16;
  IConsoleManager *pIVar17;
  longlong *plVar18;
  TConsoleVariableData<float> *pTVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  FText local_98;
  FGameTime local_88;
  FGameTime local_70 [3];
  
  uVar21 = param_1->ReadOffset;
  uVar22 = (ulonglong)uVar21;
  uVar5 = param_1->PayloadSize;
  if (uVar21 < uVar5) {
    uVar23 = param_1->PayloadData[uVar22];
    uVar20 = uVar21 + 1;
    uVar22 = (ulonglong)uVar20;
    param_1->ReadOffset = uVar20;
    if (uVar23 != 0) {
      if (uVar23 != 1) {
        return;
      }
      uVar23 = 0;
      if (uVar20 < uVar5) {
        uVar23 = param_1->PayloadData[uVar22];
        param_1->ReadOffset = uVar21 + 2;
      }
      else {
        bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_6452879395177627563>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GPUMessaging.h"
                            ,0x55,"ReadOffset < PayloadSize");
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if (uVar23 == 0) {
        return;
      }
      pFVar12 = FGameTime::GetTimeSinceAppStart(local_70);
      fVar26 = (float)pFVar12->RealTimeSeconds;
      if ((uVar23 & 1) != 0) {
        lVar7 = *(longlong *)this;
        if ((*(int *)(lVar7 + 0x2a8) < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar8 = *(FVirtualShadowMapArrayCacheManager **)this;
        pfVar14 = *(float **)(lVar7 + 0x2a0);
        if (*(float **)(lVar7 + 0x2a0) == (float *)0x0) {
          pfVar14 = (float *)(lVar7 + 0x290);
        }
        *pfVar14 = fVar26;
        if ((pFVar8->LoggedOverflowFlags & 1) == 0) {
          if (2 < (byte)LogRenderer._0_1_) {
            pFVar15 = FVirtualShadowMapArrayCacheManager::GetOverflowMessage(pFVar8,&local_98,0);
            FText::ToString(pFVar15);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
            if (local_98.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
            }
          }
          *(uint *)(*(longlong *)this + 0x288) = *(uint *)(*(longlong *)this + 0x288) | 1;
        }
      }
      if ((uVar23 & 2) != 0) {
        lVar7 = *(longlong *)this;
        if ((*(int *)(lVar7 + 0x2a8) < 2) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar8 = *(FVirtualShadowMapArrayCacheManager **)this;
        lVar13 = *(longlong *)(lVar7 + 0x2a0);
        if (*(longlong *)(lVar7 + 0x2a0) == 0) {
          lVar13 = lVar7 + 0x290;
        }
        *(float *)(lVar13 + 4) = fVar26;
        if ((pFVar8->LoggedOverflowFlags & 2) == 0) {
          if (2 < (byte)LogRenderer._0_1_) {
            pFVar15 = FVirtualShadowMapArrayCacheManager::GetOverflowMessage(pFVar8,&local_98,1);
            FText::ToString(pFVar15);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
            if (local_98.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
            }
          }
          *(uint *)(*(longlong *)this + 0x288) = *(uint *)(*(longlong *)this + 0x288) | 2;
        }
      }
      if ((uVar23 & 4) != 0) {
        lVar7 = *(longlong *)this;
        if ((*(int *)(lVar7 + 0x2a8) < 3) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar8 = *(FVirtualShadowMapArrayCacheManager **)this;
        lVar13 = *(longlong *)(lVar7 + 0x2a0);
        if (*(longlong *)(lVar7 + 0x2a0) == 0) {
          lVar13 = lVar7 + 0x290;
        }
        *(float *)(lVar13 + 8) = fVar26;
        if ((pFVar8->LoggedOverflowFlags & 4) == 0) {
          if (2 < (byte)LogRenderer._0_1_) {
            pFVar15 = FVirtualShadowMapArrayCacheManager::GetOverflowMessage(pFVar8,&local_98,2);
            FText::ToString(pFVar15);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
            if (local_98.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
            }
          }
          *(uint *)(*(longlong *)this + 0x288) = *(uint *)(*(longlong *)this + 0x288) | 4;
        }
      }
      if ((uVar23 & 8) == 0) {
        return;
      }
      lVar7 = *(longlong *)this;
      if ((*(int *)(lVar7 + 0x2a8) < 4) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar8 = *(FVirtualShadowMapArrayCacheManager **)this;
      lVar13 = *(longlong *)(lVar7 + 0x2a0);
      if (*(longlong *)(lVar7 + 0x2a0) == 0) {
        lVar13 = lVar7 + 0x290;
      }
      *(float *)(lVar13 + 0xc) = fVar26;
      if ((pFVar8->LoggedOverflowFlags & 8) != 0) {
        return;
      }
      if (2 < (byte)LogRenderer._0_1_) {
        pFVar15 = FVirtualShadowMapArrayCacheManager::GetOverflowMessage(pFVar8,&local_98,3);
        FText::ToString(pFVar15);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        }
      }
      *(uint *)(*(longlong *)this + 0x288) = *(uint *)(*(longlong *)this + 0x288) | 8;
      return;
    }
  }
  else {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_6452879395177627563>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GPUMessaging.h"
                        ,0x55,"ReadOffset < PayloadSize");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pTVar19 = (TConsoleVariableData<float> *)0x0;
  fVar26 = 0.0;
  if ((uint)uVar22 < uVar5) {
    uVar21 = (uint)uVar22 + 1;
    param_1->ReadOffset = uVar21;
    puVar1 = param_1->PayloadData + uVar22;
    uVar22 = (ulonglong)uVar21;
    pTVar16 = (TConsoleVariableData<float> *)(ulonglong)*puVar1;
  }
  else {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_6452879395177627563>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GPUMessaging.h"
                        ,0x55,"ReadOffset < PayloadSize");
    pTVar16 = pTVar19;
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if ((uint)uVar22 < uVar5) {
    fVar26 = (float)param_1->PayloadData[uVar22];
    param_1->ReadOffset = (uint)uVar22 + 1;
  }
  else {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_6452879395177627563>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GPUMessaging.h"
                        ,0x55,"ReadOffset < PayloadSize");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (__CsvProfilerStat736 == false) {
    FCsvProfilerTrace::OutputInlineStat("FreePages",_GCsvCategory_VSM.Index);
    __CsvProfilerStat736 = true;
  }
  iVar24 = (int)pTVar16;
  FCsvProfiler::RecordCustomStat("FreePages",_GCsvCategory_VSM.Index,iVar24,Set);
  pTVar16 = CVarVSMDynamicResolutionMaxPagePoolLoadFactor.Ref;
  bVar11 = IsInParallelRenderingThread();
  if ((!bVar11) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar10 = CVarVSMDynamicResolutionMaxLodBias.Ref;
  fVar2 = pTVar16->ShadowedValue[1];
  bVar11 = IsInParallelRenderingThread();
  if ((!bVar11) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  fVar3 = pTVar10->ShadowedValue[1];
  if (0.0 < fVar2) {
    lVar7 = *(longlong *)this;
    iVar6 = *(int *)(*(longlong *)(lVar7 + 8) + 0x508c);
    fVar27 = __real_3f800000 - (float)iVar24 / (float)*(uint *)(lVar7 + 0x1d0);
    fVar25 = logf(fVar27 / fVar2);
    fVar26 = fVar25 * __real_3fb8aa3b + fVar26;
    if (fVar26 <= 0.0) {
      fVar26 = 0.0;
    }
    if (fVar2 < fVar27) {
      *(int *)(lVar7 + 0x278) = iVar6;
      fVar2 = *(float *)(*(longlong *)this + 0x274);
      *(float *)(*(longlong *)this + 0x274) = (fVar26 - fVar2) * __real_3f000000 + fVar2;
    }
    else if (10 < (uint)(iVar6 - *(int *)(lVar7 + 0x278))) {
      *(float *)(lVar7 + 0x274) =
           (fVar26 - *(float *)(lVar7 + 0x274)) * __real_3dcccccd + *(float *)(lVar7 + 0x274);
    }
  }
  fVar26 = *(float *)(*(longlong *)this + 0x274);
  if (fVar3 <= fVar26) {
    fVar26 = fVar3;
  }
  if (fVar26 <= 0.0) {
    fVar26 = 0.0;
  }
  *(float *)(*(longlong *)this + 0x274) = fVar26;
  if (iVar24 < 0) {
    pFVar12 = FGameTime::GetTimeSinceAppStart(&local_88);
    lVar7 = *(longlong *)this;
    dVar4 = pFVar12->RealTimeSeconds;
    if ((*(int *)(lVar7 + 0x2a8) < 3) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar13 = *(longlong *)(lVar7 + 0x2a0);
    if (*(longlong *)(lVar7 + 0x2a0) == 0) {
      lVar13 = lVar7 + 0x290;
    }
    *(float *)(lVar13 + 8) = (float)dVar4;
    if ((*(byte *)(*(longlong *)this + 0x288) & 4) == 0) {
      lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar7 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        pIVar17 = IConsoleManager::Get();
        plVar18 = (longlong *)
                  (**(code **)((longlong)*pIVar17 + 0xc0))
                            (pIVar17,L"r.Shadow.Virtual.ResolutionLodBiasLocal",1);
        pTVar16 = pTVar19;
        if (plVar18 != (longlong *)0x0) {
          pTVar16 = (TConsoleVariableData<float> *)(**(code **)(*plVar18 + 0x70))(plVar18);
        }
        CVarResolutionLodBiasLocalPtr = pTVar16;
        _Init_thread_footer(&::_TSS0);
      }
      if ((*(int *)(lVar7 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        pIVar17 = IConsoleManager::Get();
        plVar18 = (longlong *)
                  (**(code **)((longlong)*pIVar17 + 0xc0))
                            (pIVar17,L"r.Shadow.Virtual.ResolutionLodBiasDirectional",1);
        if (plVar18 != (longlong *)0x0) {
          pTVar19 = (TConsoleVariableData<float> *)(**(code **)(*plVar18 + 0x70))(plVar18);
        }
        CVarResolutionLodBiasDirectionalPtr = pTVar19;
        _Init_thread_footer(&::_TSS1);
      }
      if (2 < (byte)LogRenderer._0_1_) {
        TConsoleVariableData<float>::GetValueOnRenderThread(CVarResolutionLodBiasDirectionalPtr);
        TConsoleVariableData<float>::GetValueOnRenderThread(CVarResolutionLodBiasLocalPtr);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
      }
      *(uint *)(*(longlong *)this + 0x288) = *(uint *)(*(longlong *)this + 0x288) | 4;
    }
  }
  else {
    *(uint *)(*(longlong *)this + 0x288) = *(uint *)(*(longlong *)this + 0x288) & 0xfffffffb;
  }
  return;
}

// operator() @ 1457c9020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`FVirtualShadowMapArrayCacheManager::AddVisualizePass'::__l5::<lambda_1>::operator()
          (void *this,FCanvas *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined8 uVar5;
  bool bVar6;
  TMatrix<double> *pTVar7;
  UFont *pUVar8;
  FSlateFontInfo *pFVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined8 *puVar16;
  float fVar17;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  undefined1 auStackY_7a8 [32];
  undefined1 local_748;
  undefined1 local_747 [7];
  int local_740;
  int iStack_73c;
  wchar_t *local_738;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  TVector2<double>_u_0 local_728;
  undefined8 local_718;
  int iStack_710;
  undefined4 uStack_70c;
  FLinearColor_u_0 local_708;
  FCanvasTextItemBase local_6f8;
  UFont *local_560;
  FSlateFontInfo local_558;
  char local_4f8;
  wchar_t *local_4f0;
  undefined8 uStack_4e8;
  FCanvasTextItemBase local_4d8;
  UFont *local_340;
  FSlateFontInfo local_338;
  char local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  FSlateFontInfo local_2b8;
  FSlateFontInfo local_258;
  TMatrix<double> local_1f8;
  TMatrix<double> local_178;
  TMatrix<double> local_f8;
  ulonglong local_78;
  
  fVar22 = __real_3f800000;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_7a8;
  fVar17 = __real_3f800000;
  if (param_1->bStereoRendering == false) {
    fVar17 = param_1->DPIScale;
  }
  local_1f8.M[0][0] = (double)fVar17;
  local_1f8.M[2][0] = 0.0;
  local_1f8.M[2][1] = 0.0;
  local_1f8.M[0][1] = 0.0;
  local_1f8.M[1][0] = 0.0;
  local_1f8.M[2][3] = 0.0;
  local_1f8.M[0][2] = 0.0;
  local_1f8.M[0][3] = 0.0;
  local_1f8.M[1][2] = 0.0;
  local_1f8.M[1][3] = 0.0;
  local_1f8.M[3][0] = 0.0;
  local_1f8.M[3][1] = 0.0;
  local_1f8.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_1f8.M[3][3] = _UNK_15061cbc8;
  local_1f8.M[1][1] = local_1f8.M[0][0];
  local_1f8.M[2][2] = local_1f8.M[0][0];
  pTVar7 = FCanvas::CalcBaseTransform2D
                     (&local_f8,
                      *(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 8) -
                      *(int *)&(param_1->ViewRect).field0_0x0,
                      *(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 0xc) -
                      *(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 4));
  VectorMatrixMultiply(&local_178,&local_1f8,pTVar7);
  FCanvas::SetBaseTransform(param_1,&local_178);
  lVar2 = *(longlong *)this;
  local_740 = 0;
  iVar1 = *(int *)(lVar2 + 800);
  lVar10 = *(longlong *)(lVar2 + 0x318);
  lVar15 = (longlong)iVar1 * 0x10 + lVar10;
  iStack_73c = iVar1;
  iVar11 = 0;
  while( true ) {
    if (*(int *)(lVar2 + 800) != iVar1) {
      local_748 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_748)
      ;
    }
    if (lVar10 == lVar15) break;
    iVar14 = *(int *)(lVar10 + 8) + -1;
    if (*(int *)(lVar10 + 8) == 0) {
      iVar14 = 0;
    }
    if (iVar14 < iVar11) {
      iVar14 = iVar11;
    }
    lVar10 = lVar10 + 0x10;
    iVar11 = iVar14;
  }
  local_740 = iVar11;
  pUVar8 = UEngine::GetMonospaceFont();
  uStack_730 = 1;
  local_738 = L"A";
  FCanvasTextItemBase::FCanvasTextItemBase
            (&local_6f8,&UE::Math::TVector2<double>::ZeroVector,&FLinearColor::Transparent);
  uStack_4e8 = CONCAT44(uStack_72c,uStack_730);
  local_4f0 = local_738;
  local_4f8 = '\0';
  local_6f8.OutlineColor.field0_0x0._s_0 = FLinearColor::Transparent.field0_0x0;
  local_6f8._padding_._4_4_ = 2;
  local_6f8._padding_ = (longlong)&___7FCanvasTextStringViewItem__6B_;
  local_6f8.bOutlined = true;
  local_560 = pUVar8;
  pFVar9 = UFont::GetLegacySlateFontInfo(pUVar8,&local_2b8);
  if (pFVar9 != &local_558) {
    if (local_4f8 != '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_558.CompositeFont.SharedReferenceCount.ReferenceController);
    }
    FSlateFontInfo::FSlateFontInfo(&local_558,pFVar9);
    local_4f8 = '\x01';
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b8.CompositeFont.SharedReferenceCount.ReferenceController);
  if ((local_4f8 == '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_558.Size = 8.0;
  FCanvas::DrawItem(param_1,(FCanvasItem *)&local_6f8);
  if (local_4f8 != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_558.CompositeFont.SharedReferenceCount.ReferenceController);
  }
  FCanvasTextItemBase::~FCanvasTextItemBase(&local_6f8);
  auVar4._4_8_ = extraout_XMM0_Qb;
  auVar4._0_4_ = local_6f8.DrawnSize.field0_0x0._4_4_;
  auVar18._0_8_ = auVar4._0_8_ << 0x20;
  auVar18._8_4_ = local_6f8.DrawnSize.field0_0x0._8_4_;
  auVar18._12_4_ = local_6f8.DrawnSize.field0_0x0._12_4_;
  iVar1 = *(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 0xc);
  iVar13 = iVar1 - *(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 4);
  iVar14 = 0;
  fVar22 = fVar22 / fVar17;
  dVar21 = (double)iStack_73c * auVar18._8_8_ + __real_4024000000000000;
  dVar20 = (double)((iVar1 - (iVar13 / 3 + (iVar13 >> 0x1f) +
                             (int)(((longlong)iVar13 / 3 + ((longlong)iVar13 >> 0x3f) & 0xffffffffU)
                                  >> 0x1f))) -
                   *(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 4));
  dVar19 = (double)iVar13 - (dVar21 + __real_4024000000000000);
  local_708._0_8_ = ___xmm_3ecccccd3dcccccd3dcccccd3dcccccd;
  local_708._8_8_ = _UNK_151030638;
  fVar17 = fVar22 * __real_41200000;
  if (dVar19 <= dVar20) {
    dVar20 = dVar19;
  }
  local_740 = (int)dVar20;
  FCanvas::DrawTile(param_1,(double)fVar17,(double)((float)local_740 * fVar22),
                    (double)((float)((double)iVar11 * local_6f8.DrawnSize.field0_0x0._0_8_ +
                                    __real_4024000000000000) * fVar22),
                    (double)((float)dVar21 * fVar22),0.0,0.0,0.0,0.0,(FLinearColor *)&local_708._s_0
                    ,(FTexture *)0x0,true);
  lVar2 = *(longlong *)this;
  iVar1 = *(int *)(lVar2 + 800);
  puVar12 = *(undefined8 **)(lVar2 + 0x318);
  puVar16 = puVar12 + (longlong)iVar1 * 2;
  while( true ) {
    if (*(int *)(lVar2 + 800) != iVar1) {
      local_747[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_747);
    }
    if (puVar12 == puVar16) break;
    pUVar8 = UEngine::GetMonospaceFont();
    local_718 = *puVar12;
    iStack_710 = *(int *)(puVar12 + 1) + -1;
    if (*(int *)(puVar12 + 1) == 0) {
      iStack_710 = 0;
    }
    local_728._s_0.Y = (double)((float)(local_740 + iVar14) * fVar22);
    local_728._s_0.X = (double)fVar17;
    FCanvasTextItemBase::FCanvasTextItemBase
              (&local_4d8,(TVector2<double> *)&local_728._s_0,&FLinearColor::White);
    uStack_2c8 = CONCAT44(uStack_70c,iStack_710);
    local_2d0 = local_718;
    local_2d8 = '\0';
    local_4d8.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
    local_4d8._padding_._4_4_ = 2;
    local_4d8._padding_ = (longlong)&___7FCanvasTextStringViewItem__6B_;
    local_4d8.bOutlined = true;
    local_340 = pUVar8;
    pFVar9 = UFont::GetLegacySlateFontInfo(pUVar8,&local_258);
    if (pFVar9 != &local_338) {
      if (local_2d8 != '\0') {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_338.CompositeFont.SharedReferenceCount.ReferenceController);
      }
      FSlateFontInfo::FSlateFontInfo(&local_338,pFVar9);
      local_2d8 = '\x01';
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_258.CompositeFont.SharedReferenceCount.ReferenceController);
    if ((local_2d8 == '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_338.Size = 8.0;
    FCanvas::DrawItem(param_1,(FCanvasItem *)&local_4d8);
    uVar5 = local_4d8.DrawnSize.field0_0x0._s_0.Y;
    if (local_2d8 != '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_338.CompositeFont.SharedReferenceCount.ReferenceController);
    }
    FCanvasTextItemBase::~FCanvasTextItemBase(&local_4d8);
    puVar12 = puVar12 + 2;
    iVar14 = (int)((double)iVar14 + (double)uVar5);
  }
  return;
}

// operator() @ 1457c9eb0

/* WARNING: Removing unreachable block (ram,0x0001457cc0c6) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>::operator()
          (void *this,FReader *param_1)

{
  int *piVar1;
  char *pcVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  float fVar6;
  ulong uVar7;
  bool bVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  FCsvProfiler *pFVar14;
  longlong lVar15;
  FGameTime *pFVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  ForAnyElementType *pFVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  char **ppcVar24;
  longlong lVar25;
  ulonglong uVar26;
  float fVar27;
  undefined1 local_res18 [8];
  uint local_res20 [2];
  TArrayView<unsigned_int_const_,int> local_f8;
  FString local_e8;
  longlong local_d8;
  TArrayView<unsigned_int_const_,int> local_d0;
  FLargePageAreaItem local_c0;
  longlong local_b8;
  TArrayView<unsigned_int_const_,int> local_b0;
  FString local_a0;
  FString local_90;
  FGameTime local_80 [2];
  
  uVar23 = param_1->ReadOffset;
  uVar17 = (ulonglong)uVar23;
  uVar21 = param_1->PayloadSize;
  uVar22 = 0;
  uVar18 = 0;
  if (uVar23 < uVar21) {
    uVar11 = param_1->PayloadData[uVar17];
    uVar17 = (ulonglong)(uVar23 + 1);
    param_1->ReadOffset = uVar23 + 1;
  }
  else {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6452879395177627563>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GPUMessaging.h"
                       ,0x55,"ReadOffset < PayloadSize");
    uVar11 = uVar18;
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((uint)uVar17 < uVar21) {
    uVar18 = param_1->PayloadData[uVar17];
    param_1->ReadOffset = (uint)uVar17 + 1;
  }
  else {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6452879395177627563>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GPUMessaging.h"
                       ,0x55,"ReadOffset < PayloadSize");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  GPUMessage::FReader::ReadCount(param_1,&local_f8,0x1a);
  uVar7 = _tls_index;
  iVar12 = local_f8.ArrayNum;
  if (-1 < VSMChannel->Enabled) {
    uVar17 = (ulonglong)_tls_index;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      __TraceCounter842.Value = 0;
      __TraceCounter842.CounterName = L"Shadow.Virtual.PagesRequested";
      __TraceCounter842.CounterId = (atomic<unsigned_int>)0x0;
      __TraceCounter842.CounterFlags = '\0';
      __TraceCounter842.CounterId._0_2_ =
           FCountersTrace::OutputInitCounter
                     (L"Shadow.Virtual.PagesRequested",TraceCounterType_Int,
                      TraceCounterDisplayHint_None);
      LOCK();
      __TraceCounter842.CounterId._2_2_ = 0;
      UNLOCK();
      atexit(``FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>::operator()'::
             __l5::_dynamic_atexit_destructor_for____TraceCounter842__);
      _Init_thread_footer(&::_TSS0);
    }
    if ((local_f8.ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar26 = (ulonglong)*local_f8.DataPtr;
    if ((__TraceCounter842.Value != uVar26) &&
       (__TraceCounter842.Value = uVar26, -1 < CountersChannel->Enabled)) {
      if (__TraceCounter842.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__TraceCounter842.CounterName,TraceCounterType_Int,
                           __TraceCounter842.CounterFlags & 0xf);
        LOCK();
        if (__TraceCounter842.CounterId == (atomic<unsigned_int>)0x0) {
          __TraceCounter842.CounterId._2_2_ = 0;
          __TraceCounter842.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(__TraceCounter842.CounterId._0_2_,__TraceCounter842.Value);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8) + 0x9d4c) <
         ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      __TraceCounter843.Value = 0;
      __TraceCounter843.CounterName = L"Shadow.Virtual.PagesCachedStatic";
      __TraceCounter843.CounterId = (atomic<unsigned_int>)0x0;
      __TraceCounter843.CounterFlags = '\0';
      __TraceCounter843.CounterId._0_2_ =
           FCountersTrace::OutputInitCounter
                     (L"Shadow.Virtual.PagesCachedStatic",TraceCounterType_Int,
                      TraceCounterDisplayHint_None);
      LOCK();
      __TraceCounter843.CounterId._2_2_ = 0;
      UNLOCK();
      atexit(``FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>::operator()'::
             __l5::_dynamic_atexit_destructor_for____TraceCounter843__);
      _Init_thread_footer(&::_TSS1);
    }
    if ((local_f8.ArrayNum < 2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar26 = (ulonglong)local_f8.DataPtr[1];
    if ((__TraceCounter843.Value != uVar26) &&
       (__TraceCounter843.Value = uVar26, -1 < CountersChannel->Enabled)) {
      if (__TraceCounter843.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__TraceCounter843.CounterName,TraceCounterType_Int,
                           __TraceCounter843.CounterFlags & 0xf);
        LOCK();
        if (__TraceCounter843.CounterId == (atomic<unsigned_int>)0x0) {
          __TraceCounter843.CounterId._2_2_ = 0;
          __TraceCounter843.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(__TraceCounter843.CounterId._0_2_,__TraceCounter843.Value);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar7 * 8) + 0x9d4c
                 ) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      __TraceCounter844.Value = 0;
      __TraceCounter844.CounterName = L"Shadow.Virtual.PagesInvalidatedStatic";
      __TraceCounter844.CounterId = (atomic<unsigned_int>)0x0;
      __TraceCounter844.CounterFlags = '\0';
      __TraceCounter844.CounterId._0_2_ =
           FCountersTrace::OutputInitCounter
                     (L"Shadow.Virtual.PagesInvalidatedStatic",TraceCounterType_Int,
                      TraceCounterDisplayHint_None);
      LOCK();
      __TraceCounter844.CounterId._2_2_ = 0;
      UNLOCK();
      atexit(``FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>::operator()'::
             __l5::_dynamic_atexit_destructor_for____TraceCounter844__);
      _Init_thread_footer(&::_TSS2);
    }
    if ((local_f8.ArrayNum < 3) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar26 = (ulonglong)local_f8.DataPtr[2];
    if ((__TraceCounter844.Value != uVar26) &&
       (__TraceCounter844.Value = uVar26, -1 < CountersChannel->Enabled)) {
      if (__TraceCounter844.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__TraceCounter844.CounterName,TraceCounterType_Int,
                           __TraceCounter844.CounterFlags & 0xf);
        LOCK();
        if (__TraceCounter844.CounterId == (atomic<unsigned_int>)0x0) {
          __TraceCounter844.CounterId._2_2_ = 0;
          __TraceCounter844.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(__TraceCounter844.CounterId._0_2_,__TraceCounter844.Value);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8) + 0x9d4c) <
         ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
      __TraceCounter845.Value = 0;
      __TraceCounter845.CounterName = L"Shadow.Virtual.PagesCachedDynamic";
      __TraceCounter845.CounterId = (atomic<unsigned_int>)0x0;
      __TraceCounter845.CounterFlags = '\0';
      __TraceCounter845.CounterId._0_2_ =
           FCountersTrace::OutputInitCounter
                     (L"Shadow.Virtual.PagesCachedDynamic",TraceCounterType_Int,
                      TraceCounterDisplayHint_None);
      LOCK();
      __TraceCounter845.CounterId._2_2_ = 0;
      UNLOCK();
      atexit(``FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>::operator()'::
             __l5::_dynamic_atexit_destructor_for____TraceCounter845__);
      _Init_thread_footer(&::_TSS3);
    }
    if ((local_f8.ArrayNum < 4) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar26 = (ulonglong)local_f8.DataPtr[3];
    if ((__TraceCounter845.Value != uVar26) &&
       (__TraceCounter845.Value = uVar26, -1 < CountersChannel->Enabled)) {
      if (__TraceCounter845.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__TraceCounter845.CounterName,TraceCounterType_Int,
                           __TraceCounter845.CounterFlags & 0xf);
        LOCK();
        if (__TraceCounter845.CounterId == (atomic<unsigned_int>)0x0) {
          __TraceCounter845.CounterId._2_2_ = 0;
          __TraceCounter845.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(__TraceCounter845.CounterId._0_2_,__TraceCounter845.Value);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar7 * 8) + 0x9d4c
                 ) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
      __TraceCounter846.Value = 0;
      __TraceCounter846.CounterName = L"Shadow.Virtual.PagesInvalidatedDynamic";
      __TraceCounter846.CounterId = (atomic<unsigned_int>)0x0;
      __TraceCounter846.CounterFlags = '\0';
      __TraceCounter846.CounterId._0_2_ =
           FCountersTrace::OutputInitCounter
                     (L"Shadow.Virtual.PagesInvalidatedDynamic",TraceCounterType_Int,
                      TraceCounterDisplayHint_None);
      LOCK();
      __TraceCounter846.CounterId._2_2_ = 0;
      UNLOCK();
      atexit(``FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>::operator()'::
             __l5::_dynamic_atexit_destructor_for____TraceCounter846__);
      _Init_thread_footer(&::_TSS4);
    }
    if ((local_f8.ArrayNum < 5) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar26 = (ulonglong)local_f8.DataPtr[4];
    if ((__TraceCounter846.Value != uVar26) &&
       (__TraceCounter846.Value = uVar26, -1 < CountersChannel->Enabled)) {
      if (__TraceCounter846.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__TraceCounter846.CounterName,TraceCounterType_Int,
                           __TraceCounter846.CounterFlags & 0xf);
        LOCK();
        if (__TraceCounter846.CounterId == (atomic<unsigned_int>)0x0) {
          __TraceCounter846.CounterId._2_2_ = 0;
          __TraceCounter846.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(__TraceCounter846.CounterId._0_2_,__TraceCounter846.Value);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar7 * 8) + 0x9d4c
                 ) < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
      __TraceCounter847.Value = 0;
      __TraceCounter847.CounterName = L"Shadow.Virtual.PagesEmpty";
      __TraceCounter847.CounterId = (atomic<unsigned_int>)0x0;
      __TraceCounter847.CounterFlags = '\0';
      __TraceCounter847.CounterId._0_2_ =
           FCountersTrace::OutputInitCounter
                     (L"Shadow.Virtual.PagesEmpty",TraceCounterType_Int,TraceCounterDisplayHint_None
                     );
      LOCK();
      __TraceCounter847.CounterId._2_2_ = 0;
      UNLOCK();
      atexit(``FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>::operator()'::
             __l5::_dynamic_atexit_destructor_for____TraceCounter847__);
      _Init_thread_footer(&::_TSS5);
    }
    if ((local_f8.ArrayNum < 6) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar26 = (ulonglong)local_f8.DataPtr[5];
    if ((__TraceCounter847.Value != uVar26) &&
       (__TraceCounter847.Value = uVar26, -1 < CountersChannel->Enabled)) {
      if (__TraceCounter847.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__TraceCounter847.CounterName,TraceCounterType_Int,
                           __TraceCounter847.CounterFlags & 0xf);
        LOCK();
        if (__TraceCounter847.CounterId == (atomic<unsigned_int>)0x0) {
          __TraceCounter847.CounterId._2_2_ = 0;
          __TraceCounter847.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(__TraceCounter847.CounterId._0_2_,__TraceCounter847.Value);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar7 * 8) + 0x9d4c
                 ) < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
      __TraceCounter848.Value = 0;
      __TraceCounter848.CounterName = L"Shadow.Virtual.NonNanite.InstancesTotal";
      __TraceCounter848.CounterId = (atomic<unsigned_int>)0x0;
      __TraceCounter848.CounterFlags = '\0';
      __TraceCounter848.CounterId._0_2_ =
           FCountersTrace::OutputInitCounter
                     (L"Shadow.Virtual.NonNanite.InstancesTotal",TraceCounterType_Int,
                      TraceCounterDisplayHint_None);
      LOCK();
      __TraceCounter848.CounterId._2_2_ = 0;
      UNLOCK();
      atexit(``FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>::operator()'::
             __l5::_dynamic_atexit_destructor_for____TraceCounter848__);
      _Init_thread_footer(&::_TSS6);
    }
    if ((local_f8.ArrayNum < 7) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar26 = (ulonglong)local_f8.DataPtr[6];
    if ((__TraceCounter848.Value != uVar26) &&
       (__TraceCounter848.Value = uVar26, -1 < CountersChannel->Enabled)) {
      if (__TraceCounter848.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__TraceCounter848.CounterName,TraceCounterType_Int,
                           __TraceCounter848.CounterFlags & 0xf);
        LOCK();
        if (__TraceCounter848.CounterId == (atomic<unsigned_int>)0x0) {
          __TraceCounter848.CounterId._2_2_ = 0;
          __TraceCounter848.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(__TraceCounter848.CounterId._0_2_,__TraceCounter848.Value);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8) + 0x9d4c) <
         ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
      __TraceCounter849.Value = 0;
      __TraceCounter849.CounterName = L"Shadow.Virtual.NonNanite.InstancesDrawn";
      __TraceCounter849.CounterId = (atomic<unsigned_int>)0x0;
      __TraceCounter849.CounterFlags = '\0';
      __TraceCounter849.CounterId._0_2_ =
           FCountersTrace::OutputInitCounter
                     (L"Shadow.Virtual.NonNanite.InstancesDrawn",TraceCounterType_Int,
                      TraceCounterDisplayHint_None);
      LOCK();
      __TraceCounter849.CounterId._2_2_ = 0;
      UNLOCK();
      atexit(``FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>::operator()'::
             __l5::_dynamic_atexit_destructor_for____TraceCounter849__);
      _Init_thread_footer(&::_TSS7);
    }
    if ((local_f8.ArrayNum < 8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar26 = (ulonglong)local_f8.DataPtr[7];
    if ((__TraceCounter849.Value != uVar26) &&
       (__TraceCounter849.Value = uVar26, -1 < CountersChannel->Enabled)) {
      if (__TraceCounter849.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__TraceCounter849.CounterName,TraceCounterType_Int,
                           __TraceCounter849.CounterFlags & 0xf);
        LOCK();
        if (__TraceCounter849.CounterId == (atomic<unsigned_int>)0x0) {
          __TraceCounter849.CounterId._2_2_ = 0;
          __TraceCounter849.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(__TraceCounter849.CounterId._0_2_,__TraceCounter849.Value);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar7 * 8) + 0x9d4c
                 ) < ::_TSS8) && (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
      __TraceCounter850.Value = 0;
      __TraceCounter850.CounterName = L"Shadow.Virtual.NonNanite.InstancesHZBCulled";
      __TraceCounter850.CounterId = (atomic<unsigned_int>)0x0;
      __TraceCounter850.CounterFlags = '\0';
      __TraceCounter850.CounterId._0_2_ =
           FCountersTrace::OutputInitCounter
                     (L"Shadow.Virtual.NonNanite.InstancesHZBCulled",TraceCounterType_Int,
                      TraceCounterDisplayHint_None);
      LOCK();
      __TraceCounter850.CounterId._2_2_ = 0;
      UNLOCK();
      atexit(``FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>::operator()'::
             __l5::_dynamic_atexit_destructor_for____TraceCounter850__);
      _Init_thread_footer(&::_TSS8);
    }
    if ((local_f8.ArrayNum < 9) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar26 = (ulonglong)local_f8.DataPtr[8];
    if ((__TraceCounter850.Value != uVar26) &&
       (__TraceCounter850.Value = uVar26, -1 < CountersChannel->Enabled)) {
      if (__TraceCounter850.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__TraceCounter850.CounterName,TraceCounterType_Int,
                           __TraceCounter850.CounterFlags & 0xf);
        LOCK();
        if (__TraceCounter850.CounterId == (atomic<unsigned_int>)0x0) {
          __TraceCounter850.CounterId._2_2_ = 0;
          __TraceCounter850.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(__TraceCounter850.CounterId._0_2_,__TraceCounter850.Value);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar7 * 8) + 0x9d4c
                 ) < ::_TSS9) && (_Init_thread_header(&::_TSS9), ::_TSS9 == -1)) {
      __TraceCounter851.Value = 0;
      __TraceCounter851.CounterName = L"Shadow.Virtual.NonNanite.InstancesPageMaskCulled";
      __TraceCounter851.CounterId = (atomic<unsigned_int>)0x0;
      __TraceCounter851.CounterFlags = '\0';
      __TraceCounter851.CounterId._0_2_ =
           FCountersTrace::OutputInitCounter
                     (L"Shadow.Virtual.NonNanite.InstancesPageMaskCulled",TraceCounterType_Int,
                      TraceCounterDisplayHint_None);
      LOCK();
      __TraceCounter851.CounterId._2_2_ = 0;
      UNLOCK();
      atexit(``FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>::operator()'::
             __l5::_dynamic_atexit_destructor_for____TraceCounter851__);
      _Init_thread_footer(&::_TSS9);
    }
    if ((local_f8.ArrayNum < 10) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar26 = (ulonglong)local_f8.DataPtr[9];
    if ((__TraceCounter851.Value != uVar26) &&
       (__TraceCounter851.Value = uVar26, -1 < CountersChannel->Enabled)) {
      if (__TraceCounter851.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__TraceCounter851.CounterName,TraceCounterType_Int,
                           __TraceCounter851.CounterFlags & 0xf);
        LOCK();
        if (__TraceCounter851.CounterId == (atomic<unsigned_int>)0x0) {
          __TraceCounter851.CounterId._2_2_ = 0;
          __TraceCounter851.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(__TraceCounter851.CounterId._0_2_,__TraceCounter851.Value);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar7 * 8) + 0x9d4c
                 ) < ::_TSS10) && (_Init_thread_header(&::_TSS10), ::_TSS10 == -1)) {
      __TraceCounter852.Value = 0;
      __TraceCounter852.CounterName = L"Shadow.Virtual.NonNanite.InstancesEmptyRectCulled";
      __TraceCounter852.CounterId = (atomic<unsigned_int>)0x0;
      __TraceCounter852.CounterFlags = '\0';
      __TraceCounter852.CounterId._0_2_ =
           FCountersTrace::OutputInitCounter
                     (L"Shadow.Virtual.NonNanite.InstancesEmptyRectCulled",TraceCounterType_Int,
                      TraceCounterDisplayHint_None);
      LOCK();
      __TraceCounter852.CounterId._2_2_ = 0;
      UNLOCK();
      atexit(``FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>::operator()'::
             __l5::_dynamic_atexit_destructor_for____TraceCounter852__);
      _Init_thread_footer(&::_TSS10);
    }
    if ((local_f8.ArrayNum < 0xb) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar26 = (ulonglong)local_f8.DataPtr[10];
    if ((__TraceCounter852.Value != uVar26) &&
       (__TraceCounter852.Value = uVar26, -1 < CountersChannel->Enabled)) {
      if (__TraceCounter852.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__TraceCounter852.CounterName,TraceCounterType_Int,
                           __TraceCounter852.CounterFlags & 0xf);
        LOCK();
        if (__TraceCounter852.CounterId == (atomic<unsigned_int>)0x0) {
          __TraceCounter852.CounterId._2_2_ = 0;
          __TraceCounter852.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(__TraceCounter852.CounterId._0_2_,__TraceCounter852.Value);
    }
    lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar7 * 8);
    if ((*(int *)(lVar25 + 0x9d4c) < ::_TSS11) && (_Init_thread_header(&::_TSS11), ::_TSS11 == -1))
    {
      __TraceCounter853.Value = 0;
      __TraceCounter853.CounterName = L"Shadow.Virtual.NonNanite.InstancesFrustumCulled";
      __TraceCounter853.CounterId = (atomic<unsigned_int>)0x0;
      __TraceCounter853.CounterFlags = '\0';
      __TraceCounter853.CounterId._0_2_ =
           FCountersTrace::OutputInitCounter
                     (L"Shadow.Virtual.NonNanite.InstancesFrustumCulled",TraceCounterType_Int,
                      TraceCounterDisplayHint_None);
      LOCK();
      __TraceCounter853.CounterId._2_2_ = 0;
      UNLOCK();
      atexit(``FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>::operator()'::
             __l5::_dynamic_atexit_destructor_for____TraceCounter853__);
      _Init_thread_footer(&::_TSS11);
    }
    puVar13 = TArrayView<unsigned_int_const_,int>::operator[](&local_f8,0xb);
    uVar26 = (ulonglong)*puVar13;
    if ((__TraceCounter853.Value != uVar26) &&
       (__TraceCounter853.Value = uVar26, -1 < CountersChannel->Enabled)) {
      if (__TraceCounter853.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__TraceCounter853.CounterName,TraceCounterType_Int,
                           __TraceCounter853.CounterFlags & 0xf);
        LOCK();
        if (__TraceCounter853.CounterId == (atomic<unsigned_int>)0x0) {
          __TraceCounter853.CounterId._2_2_ = 0;
          __TraceCounter853.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(__TraceCounter853.CounterId._0_2_,__TraceCounter853.Value);
    }
    if ((*(int *)(lVar25 + 0x9d4c) < ::_TSS12) && (_Init_thread_header(&::_TSS12), ::_TSS12 == -1))
    {
      __TraceCounter854.Value = 0;
      __TraceCounter854.CounterName = L"Shadow.Virtual.PagesToMerge";
      __TraceCounter854.CounterId = (atomic<unsigned_int>)0x0;
      __TraceCounter854.CounterFlags = '\0';
      __TraceCounter854.CounterId._0_2_ =
           FCountersTrace::OutputInitCounter
                     (L"Shadow.Virtual.PagesToMerge",TraceCounterType_Int,
                      TraceCounterDisplayHint_None);
      LOCK();
      __TraceCounter854.CounterId._2_2_ = 0;
      UNLOCK();
      atexit(``FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>::operator()'::
             __l5::_dynamic_atexit_destructor_for____TraceCounter854__);
      _Init_thread_footer(&::_TSS12);
    }
    puVar13 = TArrayView<unsigned_int_const_,int>::operator[](&local_f8,0xc);
    uVar26 = (ulonglong)*puVar13;
    if ((__TraceCounter854.Value != uVar26) &&
       (__TraceCounter854.Value = uVar26, -1 < CountersChannel->Enabled)) {
      if (__TraceCounter854.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__TraceCounter854.CounterName,TraceCounterType_Int,
                           __TraceCounter854.CounterFlags & 0xf);
        LOCK();
        if (__TraceCounter854.CounterId == (atomic<unsigned_int>)0x0) {
          __TraceCounter854.CounterId._2_2_ = 0;
          __TraceCounter854.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(__TraceCounter854.CounterId._0_2_,__TraceCounter854.Value);
    }
    if ((*(int *)(lVar25 + 0x9d4c) < ::_TSS13) && (_Init_thread_header(&::_TSS13), ::_TSS13 == -1))
    {
      __TraceCounter855.Value = 0;
      __TraceCounter855.CounterName = L"Shadow.Virtual.PagesToClear";
      __TraceCounter855.CounterId = (atomic<unsigned_int>)0x0;
      __TraceCounter855.CounterFlags = '\0';
      __TraceCounter855.CounterId._0_2_ =
           FCountersTrace::OutputInitCounter
                     (L"Shadow.Virtual.PagesToClear",TraceCounterType_Int,
                      TraceCounterDisplayHint_None);
      LOCK();
      __TraceCounter855.CounterId._2_2_ = 0;
      UNLOCK();
      atexit(``FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>::operator()'::
             __l5::_dynamic_atexit_destructor_for____TraceCounter855__);
      _Init_thread_footer(&::_TSS13);
    }
    puVar13 = TArrayView<unsigned_int_const_,int>::operator[](&local_f8,0xd);
    uVar26 = (ulonglong)*puVar13;
    if ((__TraceCounter855.Value != uVar26) &&
       (__TraceCounter855.Value = uVar26, -1 < CountersChannel->Enabled)) {
      if (__TraceCounter855.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__TraceCounter855.CounterName,TraceCounterType_Int,
                           __TraceCounter855.CounterFlags & 0xf);
        LOCK();
        if (__TraceCounter855.CounterId == (atomic<unsigned_int>)0x0) {
          __TraceCounter855.CounterId._2_2_ = 0;
          __TraceCounter855.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(__TraceCounter855.CounterId._0_2_,__TraceCounter855.Value);
    }
    if ((*(int *)(lVar25 + 0x9d4c) < ::_TSS14) && (_Init_thread_header(&::_TSS14), ::_TSS14 == -1))
    {
      __TraceCounter856.Value = 0;
      __TraceCounter856.CounterName = L"Shadow.Virtual.HZBPagesBuilt";
      __TraceCounter856.CounterId = (atomic<unsigned_int>)0x0;
      __TraceCounter856.CounterFlags = '\0';
      __TraceCounter856.CounterId._0_2_ =
           FCountersTrace::OutputInitCounter
                     (L"Shadow.Virtual.HZBPagesBuilt",TraceCounterType_Int,
                      TraceCounterDisplayHint_None);
      LOCK();
      __TraceCounter856.CounterId._2_2_ = 0;
      UNLOCK();
      atexit(``FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>::operator()'::
             __l5::_dynamic_atexit_destructor_for____TraceCounter856__);
      _Init_thread_footer(&::_TSS14);
    }
    if ((local_f8.ArrayNum < 0xf) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar26 = (ulonglong)local_f8.DataPtr[0xe];
    if ((__TraceCounter856.Value != uVar26) &&
       (__TraceCounter856.Value = uVar26, -1 < CountersChannel->Enabled)) {
      if (__TraceCounter856.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__TraceCounter856.CounterName,TraceCounterType_Int,
                           __TraceCounter856.CounterFlags & 0xf);
        LOCK();
        if (__TraceCounter856.CounterId == (atomic<unsigned_int>)0x0) {
          __TraceCounter856.CounterId._2_2_ = 0;
          __TraceCounter856.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(__TraceCounter856.CounterId._0_2_,__TraceCounter856.Value);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar7 * 8) + 0x9d4c
                 ) < ::_TSS15) && (_Init_thread_header(&::_TSS15), ::_TSS15 == -1)) {
      __TraceCounter857.Value = 0;
      __TraceCounter857.CounterName = L"Shadow.Virtual.PagesAllocatedNew";
      __TraceCounter857.CounterId = (atomic<unsigned_int>)0x0;
      __TraceCounter857.CounterFlags = '\0';
      __TraceCounter857.CounterId._0_2_ =
           FCountersTrace::OutputInitCounter
                     (L"Shadow.Virtual.PagesAllocatedNew",TraceCounterType_Int,
                      TraceCounterDisplayHint_None);
      LOCK();
      __TraceCounter857.CounterId._2_2_ = 0;
      UNLOCK();
      atexit(``FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>::operator()'::
             __l5::_dynamic_atexit_destructor_for____TraceCounter857__);
      _Init_thread_footer(&::_TSS15);
    }
    if ((local_f8.ArrayNum < 0x10) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar26 = (ulonglong)local_f8.DataPtr[0xf];
    if ((__TraceCounter857.Value != uVar26) &&
       (__TraceCounter857.Value = uVar26, -1 < CountersChannel->Enabled)) {
      if (__TraceCounter857.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__TraceCounter857.CounterName,TraceCounterType_Int,
                           __TraceCounter857.CounterFlags & 0xf);
        LOCK();
        if (__TraceCounter857.CounterId == (atomic<unsigned_int>)0x0) {
          __TraceCounter857.CounterId._2_2_ = 0;
          __TraceCounter857.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(__TraceCounter857.CounterId._0_2_,__TraceCounter857.Value);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar7 * 8) + 0x9d4c
                 ) < _TSS16) && (_Init_thread_header(&_TSS16), _TSS16 == -1)) {
      __TraceCounter858.Value = 0;
      __TraceCounter858.CounterName = L"Shadow.Virtual.Nanite.ClustersHW";
      __TraceCounter858.CounterId = (atomic<unsigned_int>)0x0;
      __TraceCounter858.CounterFlags = '\0';
      __TraceCounter858.CounterId._0_2_ =
           FCountersTrace::OutputInitCounter
                     (L"Shadow.Virtual.Nanite.ClustersHW",TraceCounterType_Int,
                      TraceCounterDisplayHint_None);
      LOCK();
      __TraceCounter858.CounterId._2_2_ = 0;
      UNLOCK();
      atexit(``FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>::operator()'::
             __l5::_dynamic_atexit_destructor_for____TraceCounter858__);
      _Init_thread_footer(&_TSS16);
    }
    if ((local_f8.ArrayNum < 0x11) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar26 = (ulonglong)local_f8.DataPtr[0x10];
    if ((__TraceCounter858.Value != uVar26) &&
       (__TraceCounter858.Value = uVar26, -1 < CountersChannel->Enabled)) {
      if (__TraceCounter858.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__TraceCounter858.CounterName,TraceCounterType_Int,
                           __TraceCounter858.CounterFlags & 0xf);
        LOCK();
        if (__TraceCounter858.CounterId == (atomic<unsigned_int>)0x0) {
          __TraceCounter858.CounterId._2_2_ = 0;
          __TraceCounter858.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(__TraceCounter858.CounterId._0_2_,__TraceCounter858.Value);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar7 * 8) + 0x9d4c
                 ) < _TSS17) && (_Init_thread_header(&_TSS17), _TSS17 == -1)) {
      __TraceCounter859.Value = 0;
      __TraceCounter859.CounterName = L"Shadow.Virtual.Nanite.ClustersSW";
      __TraceCounter859.CounterId = (atomic<unsigned_int>)0x0;
      __TraceCounter859.CounterFlags = '\0';
      __TraceCounter859.CounterId._0_2_ =
           FCountersTrace::OutputInitCounter
                     (L"Shadow.Virtual.Nanite.ClustersSW",TraceCounterType_Int,
                      TraceCounterDisplayHint_None);
      LOCK();
      __TraceCounter859.CounterId._2_2_ = 0;
      UNLOCK();
      atexit(``FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>::operator()'::
             __l5::_dynamic_atexit_destructor_for____TraceCounter859__);
      _Init_thread_footer(&_TSS17);
    }
    if ((local_f8.ArrayNum < 0x12) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar26 = (ulonglong)local_f8.DataPtr[0x11];
    if ((__TraceCounter859.Value != uVar26) &&
       (__TraceCounter859.Value = uVar26, -1 < CountersChannel->Enabled)) {
      if (__TraceCounter859.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__TraceCounter859.CounterName,TraceCounterType_Int,
                           __TraceCounter859.CounterFlags & 0xf);
        LOCK();
        if (__TraceCounter859.CounterId == (atomic<unsigned_int>)0x0) {
          __TraceCounter859.CounterId._2_2_ = 0;
          __TraceCounter859.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(__TraceCounter859.CounterId._0_2_,__TraceCounter859.Value);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8) + 0x9d4c) < _TSS18
        ) && (_Init_thread_header(&_TSS18), _TSS18 == -1)) {
      __TraceCounter860.Value = 0;
      __TraceCounter860.CounterName = L"Shadow.Virtual.Nanite.Triangles";
      __TraceCounter860.CounterId = (atomic<unsigned_int>)0x0;
      __TraceCounter860.CounterFlags = '\0';
      __TraceCounter860.CounterId._0_2_ =
           FCountersTrace::OutputInitCounter
                     (L"Shadow.Virtual.Nanite.Triangles",TraceCounterType_Int,
                      TraceCounterDisplayHint_None);
      LOCK();
      __TraceCounter860.CounterId._2_2_ = 0;
      UNLOCK();
      atexit(``FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>::operator()'::
             __l5::_dynamic_atexit_destructor_for____TraceCounter860__);
      _Init_thread_footer(&_TSS18);
    }
    if ((local_f8.ArrayNum < 0x13) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar17 = (ulonglong)local_f8.DataPtr[0x12];
    if ((__TraceCounter860.Value != uVar17) &&
       (__TraceCounter860.Value = uVar17, -1 < CountersChannel->Enabled)) {
      if (__TraceCounter860.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__TraceCounter860.CounterName,TraceCounterType_Int,
                           __TraceCounter860.CounterFlags & 0xf);
        LOCK();
        if (__TraceCounter860.CounterId == (atomic<unsigned_int>)0x0) {
          __TraceCounter860.CounterId._2_2_ = 0;
          __TraceCounter860.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(__TraceCounter860.CounterId._0_2_,__TraceCounter860.Value);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar7 * 8) + 0x9d4c
                 ) < _TSS19) && (_Init_thread_header(&_TSS19), _TSS19 == -1)) {
      __TraceCounter861.Value = 0;
      __TraceCounter861.CounterName = L"Shadow.Virtual.Nanite.InstancesMain";
      __TraceCounter861.CounterId = (atomic<unsigned_int>)0x0;
      __TraceCounter861.CounterFlags = '\0';
      __TraceCounter861.CounterId._0_2_ =
           FCountersTrace::OutputInitCounter
                     (L"Shadow.Virtual.Nanite.InstancesMain",TraceCounterType_Int,
                      TraceCounterDisplayHint_None);
      LOCK();
      __TraceCounter861.CounterId._2_2_ = 0;
      UNLOCK();
      atexit(``FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>::operator()'::
             __l5::_dynamic_atexit_destructor_for____TraceCounter861__);
      _Init_thread_footer(&_TSS19);
    }
    if ((local_f8.ArrayNum < 0x14) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar17 = (ulonglong)local_f8.DataPtr[0x13];
    if ((__TraceCounter861.Value != uVar17) &&
       (__TraceCounter861.Value = uVar17, -1 < CountersChannel->Enabled)) {
      if (__TraceCounter861.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__TraceCounter861.CounterName,TraceCounterType_Int,
                           __TraceCounter861.CounterFlags & 0xf);
        LOCK();
        if (__TraceCounter861.CounterId == (atomic<unsigned_int>)0x0) {
          __TraceCounter861.CounterId._2_2_ = 0;
          __TraceCounter861.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(__TraceCounter861.CounterId._0_2_,__TraceCounter861.Value);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar7 * 8) + 0x9d4c
                 ) < _TSS20) && (_Init_thread_header(&_TSS20), _TSS20 == -1)) {
      __TraceCounter862.Value = 0;
      __TraceCounter862.CounterName = L"Shadow.Virtual.Nanite.InstancesPost";
      __TraceCounter862.CounterId = (atomic<unsigned_int>)0x0;
      __TraceCounter862.CounterFlags = '\0';
      __TraceCounter862.CounterId._0_2_ =
           FCountersTrace::OutputInitCounter
                     (L"Shadow.Virtual.Nanite.InstancesPost",TraceCounterType_Int,
                      TraceCounterDisplayHint_None);
      LOCK();
      __TraceCounter862.CounterId._2_2_ = 0;
      UNLOCK();
      atexit(``FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>::operator()'::
             __l5::_dynamic_atexit_destructor_for____TraceCounter862__);
      _Init_thread_footer(&_TSS20);
    }
    if ((local_f8.ArrayNum < 0x15) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar17 = (ulonglong)local_f8.DataPtr[0x14];
    if ((__TraceCounter862.Value != uVar17) &&
       (__TraceCounter862.Value = uVar17, -1 < CountersChannel->Enabled)) {
      if (__TraceCounter862.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__TraceCounter862.CounterName,TraceCounterType_Int,
                           __TraceCounter862.CounterFlags & 0xf);
        LOCK();
        if (__TraceCounter862.CounterId == (atomic<unsigned_int>)0x0) {
          __TraceCounter862.CounterId._2_2_ = 0;
          __TraceCounter862.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(__TraceCounter862.CounterId._0_2_,__TraceCounter862.Value);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar7 * 8) + 0x9d4c
                 ) < _TSS21) && (_Init_thread_header(&_TSS21), _TSS21 == -1)) {
      __TraceCounter863.Value = 0;
      __TraceCounter863.CounterName = L"Shadow.Virtual.PagesWPOConsidered";
      __TraceCounter863.CounterId = (atomic<unsigned_int>)0x0;
      __TraceCounter863.CounterFlags = '\0';
      __TraceCounter863.CounterId._0_2_ =
           FCountersTrace::OutputInitCounter
                     (L"Shadow.Virtual.PagesWPOConsidered",TraceCounterType_Int,
                      TraceCounterDisplayHint_None);
      LOCK();
      __TraceCounter863.CounterId._2_2_ = 0;
      UNLOCK();
      atexit(``FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>::operator()'::
             __l5::_dynamic_atexit_destructor_for____TraceCounter863__);
      _Init_thread_footer(&_TSS21);
    }
    if ((local_f8.ArrayNum < 0x16) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar17 = (ulonglong)local_f8.DataPtr[0x15];
    iVar12 = local_f8.ArrayNum;
    if ((__TraceCounter863.Value != uVar17) &&
       (__TraceCounter863.Value = uVar17, -1 < CountersChannel->Enabled)) {
      if (__TraceCounter863.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__TraceCounter863.CounterName,TraceCounterType_Int,
                           __TraceCounter863.CounterFlags & 0xf);
        LOCK();
        if (__TraceCounter863.CounterId == (atomic<unsigned_int>)0x0) {
          __TraceCounter863.CounterId._2_2_ = 0;
          __TraceCounter863.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(__TraceCounter863.CounterId._0_2_,__TraceCounter863.Value);
    }
  }
  if (__CsvProfilerStat866 == false) {
    FCsvProfilerTrace::OutputInlineStat("NaniteNumTris",_GCsvCategory_VSM.Index);
    __CsvProfilerStat866 = true;
  }
  FCsvProfiler::RecordCustomStat("NaniteNumTris",_GCsvCategory_VSM.Index,uVar11,Set);
  if (__CsvProfilerStat867 == false) {
    FCsvProfilerTrace::OutputInlineStat("NanitePostCullNodeCount",_GCsvCategory_VSM.Index);
    __CsvProfilerStat867 = true;
  }
  FCsvProfiler::RecordCustomStat("NanitePostCullNodeCount",_GCsvCategory_VSM.Index,uVar18,Set);
  if (__CsvProfilerStat869 == false) {
    FCsvProfilerTrace::OutputInlineStat("NonNanitePostCullInstanceCount",_GCsvCategory_VSM.Index);
    __CsvProfilerStat869 = true;
  }
  if ((iVar12 < 8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FCsvProfiler::RecordCustomStat
            ("NonNanitePostCullInstanceCount",_GCsvCategory_VSM.Index,local_f8.DataPtr[7],Set);
  pFVar14 = FCsvProfiler::Get();
  bVar8 = FCsvProfiler::IsCapturing_Renderthread(pFVar14);
  uVar23 = _GCsvCategory_VSM.Index;
  if (bVar8) {
    pFVar14 = FCsvProfiler::Get();
    bVar8 = FCsvProfiler::IsCategoryEnabled(pFVar14,uVar23);
    if (bVar8) {
      ppcVar24 = VirtualShadowMap_StatNames;
      uVar17 = uVar22;
      uVar26 = uVar22;
      do {
        pcVar2 = *ppcVar24;
        if (bRegisteredInlineStats == false) {
          FCsvProfilerTrace::OutputInlineStat(pcVar2,uVar23);
        }
        uVar18 = (uint)uVar17;
        uVar21 = 0;
        if ((int)uVar18 < iVar12) {
          uVar21 = ~uVar18 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FCsvProfiler::RecordCustomStat
                  (pcVar2,uVar23,*(int *)((longlong)local_f8.DataPtr + uVar26),Set);
        uVar17 = (ulonglong)(uVar18 + 1);
        ppcVar24 = ppcVar24 + 1;
        uVar26 = uVar26 + 4;
      } while (uVar18 + 1 < 0x1a);
      bRegisteredInlineStats = true;
    }
  }
  lVar25 = *(longlong *)this;
  pFVar20 = (ForAnyElementType *)(lVar25 + 0x2b8);
  piVar1 = (int *)(lVar25 + 0x2c0);
  lVar15 = 0x4c28;
  if (*(char *)(*(longlong *)(lVar25 + 8) + 0x4cf0) == '\0') {
    lVar15 = 0x4c24;
  }
  iVar12 = *piVar1;
  uVar23 = *(uint *)(lVar15 + *(longlong *)(lVar25 + 8));
  if (iVar12 < (int)uVar23) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,uVar23 - iVar12,pFVar20,piVar1,(int *)(lVar25 + 0x2c4));
    memset(pFVar20->Data + (longlong)iVar10 * 4,0,(longlong)(int)(uVar23 - iVar12) << 2);
  }
  else {
    if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
    }
    if ((int)uVar23 < iVar12) {
      uVar21 = iVar12 - uVar23;
      if (((int)(uVar23 | uVar21) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar21 != 0) {
        iVar12 = (*piVar1 - uVar23) - uVar21;
        if (iVar12 != 0) {
          memmove(pFVar20->Data + (longlong)(int)uVar23 * 4,
                  pFVar20->Data + (longlong)(int)uVar23 * 4 + (longlong)(int)uVar21 * 4,
                  (longlong)iVar12 << 2);
        }
        *piVar1 = *piVar1 - uVar21;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,pFVar20,*piVar1,(int *)(lVar25 + 0x2c4));
      }
    }
  }
  pFVar16 = FGameTime::GetTimeSinceAppStart(local_80);
  fVar27 = (float)pFVar16->RealTimeSeconds;
  GPUMessage::FReader::ReadCount(param_1,&local_d0,0x40);
  fVar6 = __real_40a00000;
  if (0 < local_d0.ArrayNum) {
    local_d8 = 0;
    do {
      lVar25 = local_d8;
      uVar21 = (uint)uVar22;
      uVar23 = 0;
      if ((int)uVar21 < local_d0.ArrayNum) {
        uVar23 = ~uVar21 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar23 = *(uint *)((longlong)local_d0.DataPtr + lVar25);
      uVar18 = 0;
      if ((int)(uVar21 + 1) < local_d0.ArrayNum) {
        uVar18 = ~(uVar21 + 1) >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_res20[0] = *(uint *)((longlong)local_d0.DataPtr + lVar25 + 4);
      lVar19 = (longlong)(int)local_res20[0];
      lVar15 = *(longlong *)(*(longlong *)this + 8);
      if ((local_res20[0] == 0xffffffff) || (*(int *)(lVar15 + 0x2a80) <= (int)local_res20[0])) {
        uVar18 = 0xffffffff;
      }
      else {
        if (((int)local_res20[0] < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar18 = *(uint *)(*(longlong *)(lVar15 + 0x2a78) + lVar19 * 4);
      }
      if ((uVar23 != 0) && (uVar18 != 0xffffffff)) {
        lVar19 = (longlong)(int)local_res20[0];
        lVar15 = *(longlong *)this;
        uVar11 = 0;
        if ((int)local_res20[0] < *(int *)(lVar15 + 0x2c0)) {
          uVar11 = ~local_res20[0] >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (fVar6 < fVar27 - *(float *)(*(longlong *)(lVar15 + 0x2b8) + lVar19 * 4)) {
          lVar19 = (longlong)(int)local_res20[0];
          lVar15 = *(longlong *)this;
          uVar11 = 0;
          if ((int)local_res20[0] < *(int *)(lVar15 + 0x2c0)) {
            uVar11 = ~local_res20[0] >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(float *)(*(longlong *)(lVar15 + 0x2b8) + lVar19 * 4) = fVar27;
          if (2 < (byte)LogRenderer._0_1_) {
            lVar25 = *(longlong *)(*(longlong *)this + 8);
            uVar11 = 0;
            if ((int)uVar18 < *(int *)(lVar25 + 0x2890)) {
              uVar11 = ~uVar18 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FPrimitiveSceneInfo::GetFullnameForDebuggingOnly
                      (*(FPrimitiveSceneInfo **)
                        (*(longlong *)(lVar25 + 0x2888) + (longlong)(int)uVar18 * 8),&local_90);
            lVar25 = *(longlong *)(*(longlong *)this + 8);
            uVar11 = 0;
            if ((int)uVar18 < *(int *)(lVar25 + 0x2890)) {
              uVar11 = ~uVar18 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FPrimitiveSceneInfo::GetOwnerActorNameOrLabelForDebuggingOnly
                      (*(FPrimitiveSceneInfo **)
                        (*(longlong *)(lVar25 + 0x2888) + (longlong)(int)uVar18 * 8),&local_a0);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
            if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            }
            lVar25 = local_d8;
            if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
              lVar25 = local_d8;
            }
          }
        }
        local_c0.PageArea = uVar23;
        local_c0.LastTimeSeen = fVar27;
        TMapBase<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,0>_>
        ::Emplace<unsigned_int_const_&,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem>
                  ((TMapBase<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,0>_>
                    *)(*(longlong *)this + 0x2c8),local_res20,&local_c0);
      }
      local_d8 = lVar25 + 8;
      uVar22 = (ulonglong)(uVar21 + 2);
    } while ((int)(uVar21 + 2) < local_d0.ArrayNum);
  }
  local_b8 = *(longlong *)this;
  TArray<FString,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<FString,TSizedDefaultAllocator<32>_> *)(local_b8 + 0x318),0,No);
  lVar25 = *(longlong *)this;
  pFVar20 = (ForAnyElementType *)(lVar25 + 0x318);
  ::FString::PrintfImpl(&local_e8,L"%6s | %100s | %10s");
  if (((pFVar20->Data <= (FScriptContainerElement *)&local_e8) &&
      ((FScriptContainerElement *)&local_e8 <
       pFVar20->Data + (longlong)*(int *)(lVar25 + 0x324) * 0x10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar12 = *(int *)(lVar25 + 800);
  if (iVar12 == *(int *)(lVar25 + 0x324)) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,pFVar20,(int *)(lVar25 + 0x324));
  }
  lVar15 = (longlong)iVar12;
  *(int *)(lVar25 + 800) = iVar12 + 1;
  pFVar3 = pFVar20->Data;
  uVar26 = 0;
  *(undefined8 *)(pFVar3 + lVar15 * 0x10) = 0;
  *(FScriptContainerElement **)(pFVar3 + lVar15 * 0x10) = local_e8.Data.AllocatorInstance.Data;
  *(int *)(pFVar3 + lVar15 * 0x10 + 8) = local_e8.Data.ArrayNum;
  *(int *)(pFVar3 + lVar15 * 0x10 + 0xc) = local_e8.Data.ArrayMax;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  GPUMessage::FReader::ReadCount(param_1,&local_b0,0x40);
  uVar23 = 0;
  uVar17 = uVar26;
  uVar22 = uVar26;
  if (0 < local_b0.ArrayNum) {
    do {
      uVar18 = (uint)uVar22;
      uVar21 = uVar23;
      if ((int)uVar18 < local_b0.ArrayNum) {
        uVar21 = ~uVar18 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar21 = *(uint *)((longlong)local_b0.DataPtr + uVar17);
      uVar11 = uVar23;
      if ((int)(uVar18 + 1) < local_b0.ArrayNum) {
        uVar11 = ~(uVar18 + 1) >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      ``FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>::operator()'::__l2::
      <lambda_1>::operator()
                (&local_b8,(int)uVar18 / 2,uVar21,*(uint *)((longlong)local_b0.DataPtr + uVar17 + 4)
                );
      uVar17 = uVar17 + 8;
      uVar22 = (ulonglong)(uVar18 + 2);
    } while ((int)(uVar18 + 2) < local_b0.ArrayNum);
  }
  uVar21 = param_1->PayloadSize;
  puVar13 = param_1->PayloadData;
  if (((int)uVar21 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar18 = param_1->ReadOffset;
  uVar11 = uVar23;
  if ((int)uVar18 < 0) {
    uVar11 = uVar18;
  }
  uVar5 = uVar18 - uVar11;
  if ((int)uVar21 < (int)(uVar18 - uVar11)) {
    uVar5 = uVar21;
  }
  uVar18 = uVar21 - uVar5;
  if ((int)(uVar11 + 0xc0) < (int)(uVar21 - uVar5)) {
    uVar18 = uVar11 + 0xc0;
  }
  puVar13 = puVar13 + (int)uVar5;
  if (0 < (int)uVar18) {
    uVar23 = uVar18;
  }
  if (((int)uVar23 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  param_1->ReadOffset = param_1->ReadOffset + uVar23;
  if (0 < (int)uVar23) {
    do {
      uVar18 = (uint)uVar26;
      uVar21 = 0;
      if ((int)uVar18 < (int)uVar23) {
        uVar21 = ~uVar18 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar21 = *puVar13;
      uVar11 = 0;
      if ((int)(uVar18 + 1) < (int)uVar23) {
        uVar11 = ~(uVar18 + 1) >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      ``FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>::operator()'::__l2::
      <lambda_1>::operator()(&local_b8,(int)uVar18 / 2 + 0x2000,uVar21,puVar13[1]);
      uVar26 = (ulonglong)(uVar18 + 2);
      puVar13 = puVar13 + 2;
    } while ((int)(uVar18 + 2) < (int)uVar23);
  }
  if (bDumpLightNaniteStats != false) {
    bDumpLightNaniteStats = false;
    lVar25 = *(longlong *)this;
    iVar12 = *(int *)(lVar25 + 800);
    lVar15 = *(longlong *)(lVar25 + 0x318);
    lVar19 = (longlong)iVar12 * 0x10 + lVar15;
    while( true ) {
      if (*(int *)(lVar25 + 800) != iVar12) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (lVar15 == lVar19) break;
      if ((1 < *(int *)(lVar15 + 8)) && (3 < (byte)LogRenderer._0_1_)) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
      }
      lVar15 = lVar15 + 0x10;
    }
  }
  return;
}

// operator() @ 1457cd2c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_3>::operator()
          (void *this,
          TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
          *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  longlong *plVar7;
  bool bVar8;
  uint uVar9;
  FGameTime *pFVar10;
  float *pfVar11;
  FText *pFVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  float fVar19;
  EOnScreenMessageSeverity local_res8 [8];
  TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
  *local_res10;
  undefined1 local_res18 [8];
  EOnScreenMessageSeverity local_res20 [8];
  EOnScreenMessageSeverity local_1d8 [8];
  FString local_1d0;
  FText local_1c0;
  FText local_1b0;
  int local_1a0;
  int local_19c;
  longlong *local_198;
  longlong *local_190;
  int iStack_188;
  uint uStack_184;
  TBitArray<FDefaultBitArrayAllocator> *local_180;
  undefined4 uStack_178;
  int iStack_174;
  int local_170;
  undefined4 uStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  longlong *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  undefined8 uStack_138;
  FString local_130;
  FString local_120;
  FString local_110;
  FText local_100;
  FString local_f0;
  FText local_e0;
  FText local_d0;
  FGameTime local_c0 [2];
  undefined4 local_8c;
  
  local_res10 = param_1;
  pFVar10 = FGameTime::GetTimeSinceAppStart(local_c0);
  fVar19 = (float)pFVar10->RealTimeSeconds;
  if (GVSMAllowScreenOverflowMessages != 0) {
    lVar14 = *(longlong *)this;
    if ((*(int *)(lVar14 + 0x2a8) < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar6 = __real_41200000;
    pfVar11 = *(float **)(lVar14 + 0x2a0);
    if (*(float **)(lVar14 + 0x2a0) == (float *)0x0) {
      pfVar11 = (float *)(lVar14 + 0x290);
    }
    if ((0.0 <= *pfVar11) && (fVar19 - *pfVar11 < __real_41200000)) {
      FVirtualShadowMapArrayCacheManager::GetOverflowMessage
                (*(FVirtualShadowMapArrayCacheManager **)this,&local_1c0,0);
      FText::ToString(&local_1c0);
      ::FString::PrintfImpl
                (&local_1d0,
                 L"%s (%0.0f seconds ago). See r.Shadow.Virtual.AllowScreenOverflowMessages.");
      pFVar12 = FText::FromString(&local_1b0,&local_1d0);
      local_res8[0] = Warning;
      TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
      ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_res8,pFVar12);
      if (local_1b0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
      }
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      if (local_1c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1c0.TextData.Reference + 0x10))();
      }
    }
    lVar14 = *(longlong *)this;
    if ((*(int *)(lVar14 + 0x2a8) < 2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar13 = *(longlong *)(lVar14 + 0x2a0);
    if (*(longlong *)(lVar14 + 0x2a0) == 0) {
      lVar13 = lVar14 + 0x290;
    }
    if ((0.0 <= *(float *)(lVar13 + 4)) && (fVar19 - *(float *)(lVar13 + 4) < fVar6)) {
      FVirtualShadowMapArrayCacheManager::GetOverflowMessage
                (*(FVirtualShadowMapArrayCacheManager **)this,&local_1c0,1);
      FText::ToString(&local_1c0);
      ::FString::PrintfImpl
                (&local_1d0,
                 L"%s (%0.0f seconds ago). See r.Shadow.Virtual.AllowScreenOverflowMessages.");
      pFVar12 = FText::FromString(&local_1b0,&local_1d0);
      local_res8[0] = Warning;
      TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
      ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_res8,pFVar12);
      if (local_1b0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
      }
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      if (local_1c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1c0.TextData.Reference + 0x10))();
      }
    }
    lVar14 = *(longlong *)this;
    if ((*(int *)(lVar14 + 0x2a8) < 3) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar13 = *(longlong *)(lVar14 + 0x2a0);
    if (*(longlong *)(lVar14 + 0x2a0) == 0) {
      lVar13 = lVar14 + 0x290;
    }
    if ((0.0 <= *(float *)(lVar13 + 8)) && (fVar19 - *(float *)(lVar13 + 8) < fVar6)) {
      FVirtualShadowMapArrayCacheManager::GetOverflowMessage
                (*(FVirtualShadowMapArrayCacheManager **)this,&local_1c0,2);
      FText::ToString(&local_1c0);
      ::FString::PrintfImpl
                (&local_1d0,
                 L"%s (%0.0f seconds ago). See r.Shadow.Virtual.AllowScreenOverflowMessages.");
      pFVar12 = FText::FromString(&local_1b0,&local_1d0);
      local_res8[0] = Warning;
      TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
      ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_res8,pFVar12);
      if (local_1b0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
      }
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      if (local_1c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1c0.TextData.Reference + 0x10))();
      }
    }
    lVar14 = *(longlong *)this;
    if ((*(int *)(lVar14 + 0x2a8) < 4) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar13 = *(longlong *)(lVar14 + 0x2a0);
    if (*(longlong *)(lVar14 + 0x2a0) == 0) {
      lVar13 = lVar14 + 0x290;
    }
    if ((0.0 <= *(float *)(lVar13 + 0xc)) && (fVar19 - *(float *)(lVar13 + 0xc) < fVar6)) {
      FVirtualShadowMapArrayCacheManager::GetOverflowMessage
                (*(FVirtualShadowMapArrayCacheManager **)this,&local_1c0,3);
      FText::ToString(&local_1c0);
      ::FString::PrintfImpl
                (&local_1d0,
                 L"%s (%0.0f seconds ago). See r.Shadow.Virtual.AllowScreenOverflowMessages.");
      pFVar12 = FText::FromString(&local_1b0,&local_1d0);
      local_res8[0] = Warning;
      TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
      ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_res8,pFVar12);
      if (local_1b0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
      }
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      if (local_1c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1c0.TextData.Reference + 0x10))();
      }
    }
  }
  lVar14 = *(longlong *)this;
  iStack_188 = 0;
  local_170 = 0;
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar14 + 0x2d8);
  iVar3 = *(int *)(lVar14 + 0x2f0);
  local_198 = (longlong *)(lVar14 + 0x2c8);
  iStack_174 = 0;
  uStack_184 = 1;
  if (iVar3 != 0) {
    pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x2e8);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x2e8) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar18 = pTVar1;
    }
    uVar17 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
    while (uVar17 == 0) {
      lVar13 = (longlong)iStack_188;
      local_170 = local_170 + 0x20;
      iStack_188 = iStack_188 + 1;
      iStack_174 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_188) goto LAB_1457cd831;
      uVar17 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uStack_184 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uStack_184 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1a0 = (int)lVar13;
    iStack_174 = local_1a0 + -1 + local_170;
    if (iVar3 < iStack_174) {
      iStack_174 = iVar3;
    }
  }
LAB_1457cd831:
  uVar17 = *(uint *)(lVar14 + 0x2f0);
  uStack_16c = local_8c;
  iStack_168 = *(int *)(lVar14 + 0x2d0) - *(int *)(lVar14 + 0x2fc);
  uStack_178 = 0xffffffff;
  uVar16 = uVar17 & 0xffffffe0;
  TStack_158._padding_ = CONCAT44(uStack_184,iStack_188);
  TStack_158.CurrentBitIndex = iStack_174;
  TStack_158.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar17 >> 5;
  TStack_158._28_4_ = local_8c;
  TStack_158.BaseBitIndex = local_170;
  uStack_138 = CONCAT44(uStack_164,iStack_168);
  local_190 = local_198;
  local_180 = pTVar1;
  local_160 = local_198;
  TStack_158.Array = pTVar1;
  if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar6 = __real_40200000;
  uVar9 = *(uint *)(lVar14 + 0x2f0);
  if (uVar17 != uVar9) {
    pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x2e8);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x2e8) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar18 = pTVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) &
             *(uint *)((pTVar18->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar15;
      uVar16 = uVar16 + 0x20;
      iVar15 = iVar15 + 1;
      uVar17 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1457cd950;
      uVar17 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar14 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_19c = (int)lVar14;
    uVar17 = local_19c + -1 + uVar16;
    if ((int)uVar9 < (int)uVar17) {
      uVar17 = uVar9;
    }
  }
LAB_1457cd950:
  while( true ) {
    plVar7 = local_160;
    if ((int)local_160[1] - *(int *)((longlong)local_160 + 0x34) != (int)uStack_138) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    lVar14 = (longlong)TStack_158.CurrentBitIndex;
    if (((TStack_158.CurrentBitIndex == uVar17) && (TStack_158.Array == pTVar1)) &&
       (plVar7 == local_198)) break;
    lVar13 = *plVar7;
    iVar3 = *(int *)(lVar13 + lVar14 * 0x14);
    if ((iVar3 != -1) &&
       (lVar4 = *(longlong *)(*(longlong *)this + 8), iVar3 < *(int *)(lVar4 + 0x2a80))) {
      if ((iVar3 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar16 = *(uint *)(*(longlong *)(lVar4 + 0x2a78) + (longlong)iVar3 * 4);
      if ((uVar16 != 0xffffffff) && (fVar19 - *(float *)(lVar13 + 8 + lVar14 * 0x14) < fVar6)) {
        lVar14 = *(longlong *)(*(longlong *)this + 8);
        uVar9 = 0;
        if ((int)uVar16 < *(int *)(lVar14 + 0x2890)) {
          uVar9 = ~uVar16 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FPrimitiveSceneInfo::GetOwnerActorNameOrLabelForDebuggingOnly
                  (*(FPrimitiveSceneInfo **)
                    (*(longlong *)(lVar14 + 0x2888) + (longlong)(int)uVar16 * 8),&local_f0);
        ::FString::PrintfImpl
                  (&local_130,
                   L"Non-Nanite VSM page overlap performance Warning: Primitive \'%s\' overlapped %d Pages"
                  );
        pFVar12 = FText::FromString(&local_100,&local_130);
        local_res20[0] = Warning;
        TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
        ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>
                  (local_res10,local_res20,pFVar12);
        if (local_100.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
        }
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
      }
    }
    TStack_158.UnvisitedBitMask = TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
  }
  FVirtualShadowMapArrayCacheManager::TrimLoggingInfo(*(FVirtualShadowMapArrayCacheManager **)this);
  if (GVSMAccumulateStats < 1) {
    if (-1 < GVSMAccumulateStats) {
      return;
    }
    ::FString::PrintfImpl
              (&local_110,
               L"Virtual Shadow Map Stats Accumulation Active. Set r.Shadow.Virtual.AccumulateStats to 0 to stop."
              );
    pFVar12 = FText::FromString(&local_d0,&local_110);
    local_1d8[1] = 1;
    TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
    ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>
              (local_res10,local_1d8 + 1,pFVar12);
    if (local_d0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
    }
  }
  else {
    ::FString::PrintfImpl(&local_120,L"Virtual Shadow Map Stats Accumulation (%d frames left)");
    pFVar12 = FText::FromString(&local_e0,&local_120);
    local_1d8[0] = Warning;
    TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
    ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(local_res10,local_1d8,pFVar12);
    local_110.Data.AllocatorInstance.Data = local_120.Data.AllocatorInstance.Data;
    if (local_e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
      local_110.Data.AllocatorInstance.Data = local_120.Data.AllocatorInstance.Data;
    }
  }
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  return;
}

// AddVisualizePass @ 1457d63a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FScreenPassTexture * __thiscall
FVirtualShadowMapArrayCacheManager::AddVisualizePass
          (FVirtualShadowMapArrayCacheManager *this,FScreenPassTexture *__return_storage_ptr__,
          FRDGBuilder *param_1,FViewInfo *param_2,int param_3,EVSMVisualizationPostPass param_4,
          FScreenPassTexture *param_5,FScreenPassRenderTarget *param_6)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  FScreenPassRenderTarget *pFVar3;
  bool bVar4;
  ulonglong uVar5;
  FScreenPassTexture *pFVar6;
  FCanvas *this_00;
  ulonglong uVar7;
  FRDGEventName local_68;
  FRDGTexture *local_50;
  TIntRect<int>_u_0 local_48;
  ERenderTargetLoadAction local_38;
  
  pFVar3 = param_6;
  pTVar2 = CVarShowStatsVisible.Ref;
  if (param_4 != PostEditorPrimitives) goto LAB_1457d6520;
  bVar4 = IsInParallelGameThread();
  if (bVar4) {
LAB_1457d63fc:
    uVar7 = 0;
  }
  else {
    bVar4 = IsInGameThread();
    uVar7 = 1;
    if (bVar4) goto LAB_1457d63fc;
  }
  uVar5 = (ulonglong)GVSMStatSectionsEnabled;
  if (pTVar2->ShadowedValue[uVar7] == false) {
    uVar5 = 0;
  }
  if ((uVar5 & 8) == 0) goto LAB_1457d6520;
  local_50 = (FRDGTexture *)pFVar3->_padding_;
  local_48._s_0.Min.field0_0x0 = (TIntPoint<int>)pFVar3->_padding_;
  local_48._s_0.Max.field0_0x0 = (TIntPoint<int>)pFVar3->_padding_;
  local_38 = pFVar3->LoadAction;
  FRDGEventName::FRDGEventName(&local_68,1,L"NPFDiagnostics");
  param_6 = (FScreenPassRenderTarget *)this;
  if (local_50 == (FRDGTexture *)0x0) {
LAB_1457d6470:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Output.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                       ,0x2dd,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FScreenPassTexture *)(*pcVar1)();
      return pFVar6;
    }
  }
  else if (local_48._8_4_ == local_48._0_4_) {
    if (local_48._12_4_ == local_48._4_4_) goto LAB_1457d6470;
  }
  this_00 = FCanvas::Create(param_1,local_50,(FHitProxyConsumer *)0x0,
                            (FGameTime *)(param_2->_padding_ + 0x88),(Type)param_2->_padding_,
                            *(float *)(param_2->_padding_ + 0xd8));
  FCanvas::SetRenderTargetRect(this_00,(TIntRect<int> *)&local_48._s_0);
  `FVirtualShadowMapArrayCacheManager::AddVisualizePass'::__l5::<lambda_1>::operator()
            (&param_6,this_00);
  FCanvas::Flush_RenderThread(this_00,param_1,false);
  if (local_68.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.FormattedEventName.Data.AllocatorInstance.Data);
  }
  TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&this->NPFDiagnosticMessages,0,No);
LAB_1457d6520:
  __return_storage_ptr__->Texture = (FRDGTexture *)pFVar3->_padding_;
  (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)pFVar3->_padding_;
  (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)pFVar3->_padding_;
  return __return_storage_ptr__;
}

// CreateRenderer @ 1457e2910

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ISceneExtensionRenderer * __thiscall
FVirtualShadowMapArrayCacheManager::CreateRenderer
          (FVirtualShadowMapArrayCacheManager *this,FSceneRendererBase *param_1,
          FEngineShowFlags *param_2)

{
  FGenericStaticFeatureLevel FVar1;
  bool bVar2;
  EShaderPlatform EVar3;
  ISceneExtensionRenderer *pIVar4;
  
  FVar1.FeatureLevel = (*(FSceneInterface **)&this->field_0x8)->FeatureLevel;
  EVar3 = FSceneInterface::GetShaderPlatform(*(FSceneInterface **)&this->field_0x8);
  bVar2 = UseVirtualShadowMaps(EVar3,FVar1);
  if (((bVar2) && (param_2->HitProxies == 0)) && (param_2->VirtualShadowMapPersistentData != 0)) {
    pIVar4 = ::operator_new(0x30);
    if (pIVar4 == (ISceneExtensionRenderer *)0x0) {
      pIVar4 = (ISceneExtensionRenderer *)0x0;
    }
    else {
      pIVar4->SceneRendererInternal = param_1;
      pIVar4->_padding_ = (longlong)&___7FVirtualShadowMapInvalidationSceneRenderer__6B_;
      pIVar4[1]._padding_ = 0;
      pIVar4[1].SceneRendererInternal = (FSceneRendererBase *)0x0;
      pIVar4[2]._padding_ = 0;
      pIVar4[2].SceneRendererInternal = (FSceneRendererBase *)this;
    }
  }
  else {
    pIVar4 = (ISceneExtensionRenderer *)0x0;
  }
  return pIVar4;
}

// CreateUpdater @ 1457e2b30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ISceneExtensionUpdater * __thiscall
FVirtualShadowMapArrayCacheManager::CreateUpdater(FVirtualShadowMapArrayCacheManager *this)

{
  FGenericStaticFeatureLevel FVar1;
  bool bVar2;
  EShaderPlatform EVar3;
  ISceneExtensionUpdater *pIVar4;
  
  FVar1.FeatureLevel = (*(FSceneInterface **)&this->field_0x8)->FeatureLevel;
  EVar3 = FSceneInterface::GetShaderPlatform(*(FSceneInterface **)&this->field_0x8);
  bVar2 = UseVirtualShadowMaps(EVar3,FVar1);
  if (bVar2) {
    pIVar4 = ::operator_new(0x18);
    if (pIVar4 != (ISceneExtensionUpdater *)0x0) {
      pIVar4[1] = (ISceneExtensionUpdater)this;
      *pIVar4 = (ISceneExtensionUpdater)&___7FVirtualShadowMapInvalidationSceneUpdater__6B_;
      pIVar4[2] = (ISceneExtensionUpdater)0x0;
      return pIVar4;
    }
  }
  return (ISceneExtensionUpdater *)0x0;
}

// ExtractFrameData @ 1457f06a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArrayCacheManager::ExtractFrameData
          (FVirtualShadowMapArrayCacheManager *this,FRDGBuilder *param_1,
          FVirtualShadowMapArray *param_2,FSceneRenderer *param_3,bool param_4)

{
  TMap<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>_>
  *pTVar1;
  uint uVar2;
  IPooledRenderTarget *pIVar3;
  FVirtualShadowMapClipmap *pFVar4;
  FVirtualShadowMapPerLightCacheEntry *pFVar5;
  ForElementType<unsigned_int> FVar6;
  undefined1 *puVar7;
  longlong lVar8;
  code *pcVar9;
  undefined8 uVar10;
  TIntPoint<int>_u_0 TVar11;
  bool bVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  FVisibleLightInfo *pFVar18;
  TMap<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>_>
  *pTVar19;
  FVirtualShadowMapUniformParameters *pFVar20;
  FVirtualShadowMapUniformParameters *pFVar21;
  bool bVar22;
  FVirtualShadowMapUniformParameters *pFVar23;
  ulonglong uVar24;
  longlong lVar25;
  int iVar26;
  FVirtualShadowMapUniformParameters *pFVar27;
  FVisibleLightInfo *pFVar28;
  TSharedPtr<FVirtualShadowMapClipmap,1> *pTVar29;
  undefined1 *puVar30;
  uint uVar31;
  undefined1 *puVar32;
  uint *puVar33;
  int *piVar34;
  int iVar35;
  uint uVar36;
  TSharedPtr<FVirtualShadowMapClipmap,1> *pTVar37;
  undefined1 local_138;
  undefined1 local_137 [3];
  uint local_134;
  FVisibleLightInfo *local_130;
  int local_128;
  int local_124;
  FVisibleLightInfo *local_120;
  TMap<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>_>
  *local_118;
  int iStack_110;
  uint uStack_10c;
  undefined1 *local_108;
  undefined4 uStack_100;
  int iStack_fc;
  int local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  TMap<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>_>
  *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  FVirtualShadowMapArrayFrameData local_b8;
  undefined4 local_54;
  
  TrimLoggingInfo(this);
  bVar22 = param_4;
  if ((param_2->PhysicalPagePoolRDG == (FRDGTexture *)0x0) ||
     (param_2->PageTableRDG == (FRDGTexture *)0x0)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  iVar35 = 0;
  if ((param_4 == false) || (bVar12)) {
    local_b8.ThrottleBuffer.Reference = (FRDGPooledBuffer *)0x0;
    local_b8.PageTable.Reference = (IPooledRenderTarget *)0x0;
    local_b8.PageFlags.Reference = (IPooledRenderTarget *)0x0;
    local_b8.UncachedPageRectBounds.Reference = (FRDGPooledBuffer *)0x0;
    local_b8.AllocatedPageRectBounds.Reference = (FRDGPooledBuffer *)0x0;
    local_b8.ProjectionData.Reference = (FRDGPooledBuffer *)0x0;
    local_b8.PhysicalPageLists.Reference = (FRDGPooledBuffer *)0x0;
    local_b8.PageRequestFlags.Reference = (IPooledRenderTarget *)0x0;
    local_b8.NanitePerformanceFeedback.Reference = (FRDGPooledBuffer *)0x0;
    FVirtualShadowMapArrayFrameData::operator=(&this->PrevBuffers,&local_b8);
    FVirtualShadowMapArrayFrameData::~FVirtualShadowMapArrayFrameData(&local_b8);
    (this->PrevUniformParameters).NumFullShadowMaps = 0;
    (this->PrevUniformParameters).NumSinglePageShadowMaps = 0;
    (this->PrevUniformParameters).NumShadowMapSlots = 0;
    if (bVar22 == false) {
      FreePhysicalPool(this,param_1);
      pIVar3 = (this->HZBPhysicalPagePoolArray).Reference;
      if (pIVar3 != (IPooledRenderTarget *)0x0) {
        (this->HZBPhysicalPagePoolArray).Reference = (IPooledRenderTarget *)0x0;
        (**(code **)(pIVar3->_padding_ + 0x38))();
        Invalidate(this,param_1);
      }
    }
    else if (bVar12) {
      FRDGBuilder::QueueTextureExtraction
                (param_1,param_2->PageTableRDG,&(this->PrevBuffers).PageTable,None);
      FRDGBuilder::QueueBufferExtraction
                (param_1,param_2->UncachedPageRectBoundsRDG,
                 &(this->PrevBuffers).UncachedPageRectBounds);
      FRDGBuilder::QueueBufferExtraction
                (param_1,param_2->AllocatedPageRectBoundsRDG,
                 &(this->PrevBuffers).AllocatedPageRectBounds);
      FRDGBuilder::QueueTextureExtraction
                (param_1,param_2->PageFlagsRDG,&(this->PrevBuffers).PageFlags,None);
      FRDGBuilder::QueueBufferExtraction
                (param_1,param_2->NanitePerformanceFeedbackRDG,
                 &(this->PrevBuffers).NanitePerformanceFeedback);
      FRDGBuilder::QueueBufferExtraction
                (param_1,param_2->ThrottleBufferRDG,&(this->PrevBuffers).ThrottleBuffer);
      bVar22 = IsCacheEnabled(this);
      if (bVar22) {
        FRDGBuilder::QueueBufferExtraction
                  (param_1,param_2->ProjectionDataRDG,&(this->PrevBuffers).ProjectionData);
        FRDGBuilder::QueueBufferExtraction
                  (param_1,param_2->PhysicalPageListsRDG,&(this->PrevBuffers).PhysicalPageLists);
        FRDGBuilder::QueueTextureExtraction
                  (param_1,param_2->PageRequestFlagsRDG,&(this->PrevBuffers).PageRequestFlags,None);
        lVar25 = 2;
        pFVar20 = &param_2->UniformParameters;
        pFVar21 = &this->PrevUniformParameters;
        do {
          pFVar27 = pFVar21;
          pFVar23 = pFVar20;
          uVar31 = pFVar23->NumSinglePageShadowMaps;
          uVar36 = pFVar23->MaxPhysicalPages;
          uVar2 = pFVar23->NumShadowMapSlots;
          pFVar27->NumFullShadowMaps = pFVar23->NumFullShadowMaps;
          pFVar27->NumSinglePageShadowMaps = uVar31;
          pFVar27->MaxPhysicalPages = uVar36;
          pFVar27->NumShadowMapSlots = uVar2;
          uVar31 = pFVar23->StaticHZBArrayIndex;
          uVar36 = pFVar23->PhysicalPageRowMask;
          uVar2 = pFVar23->PhysicalPageRowShift;
          pFVar27->StaticCachedArrayIndex = pFVar23->StaticCachedArrayIndex;
          pFVar27->StaticHZBArrayIndex = uVar31;
          pFVar27->PhysicalPageRowMask = uVar36;
          pFVar27->PhysicalPageRowShift = uVar2;
          uVar13 = *(undefined4 *)&pFVar23->field_0x24;
          lVar8 = pFVar23->_padding_;
          pFVar27->PackedShadowMaskMaxLightCount = pFVar23->PackedShadowMaskMaxLightCount;
          *(undefined4 *)&pFVar27->field_0x24 = uVar13;
          pFVar27->_padding_ = lVar8;
          uVar10 = *(undefined8 *)((longlong)&(pFVar23->RecPhysicalPoolSize).field0_0x0 + 8);
          *(undefined8 *)&(pFVar27->RecPhysicalPoolSize).field0_0x0 =
               *(undefined8 *)&(pFVar23->RecPhysicalPoolSize).field0_0x0;
          *(undefined8 *)((longlong)&(pFVar27->RecPhysicalPoolSize).field0_0x0 + 8) = uVar10;
          TVar11 = (pFVar23->PhysicalPoolSizePages).field0_0x0;
          (pFVar27->PhysicalPoolSize).field0_0x0 = (pFVar23->PhysicalPoolSize).field0_0x0;
          (pFVar27->PhysicalPoolSizePages).field0_0x0 = TVar11;
          uVar31 = pFVar23->PageTableRowMask;
          lVar8 = pFVar23->_padding_;
          pFVar27->PageTableRowShift = pFVar23->PageTableRowShift;
          pFVar27->PageTableRowMask = uVar31;
          pFVar27->_padding_ = lVar8;
          uVar10 = *(undefined8 *)((longlong)&(pFVar23->PageTableTextureSizeInvSize).field0_0x0 + 8)
          ;
          *(undefined8 *)&(pFVar27->PageTableTextureSizeInvSize).field0_0x0 =
               *(undefined8 *)&(pFVar23->PageTableTextureSizeInvSize).field0_0x0;
          *(undefined8 *)((longlong)&(pFVar27->PageTableTextureSizeInvSize).field0_0x0 + 8) = uVar10
          ;
          uVar10 = *(undefined8 *)
                    ((longlong)&(pFVar23->PageReceiverMaskTextureSizeInvSize).field0_0x0 + 8);
          *(undefined8 *)&(pFVar27->PageReceiverMaskTextureSizeInvSize).field0_0x0 =
               *(undefined8 *)&(pFVar23->PageReceiverMaskTextureSizeInvSize).field0_0x0;
          *(undefined8 *)((longlong)&(pFVar27->PageReceiverMaskTextureSizeInvSize).field0_0x0 + 8) =
               uVar10;
          lVar25 = lVar25 + -1;
          pFVar20 = (FVirtualShadowMapUniformParameters *)&pFVar23->bExcludeNonNaniteFromCoarsePages
          ;
          pFVar21 = (FVirtualShadowMapUniformParameters *)&pFVar27->bExcludeNonNaniteFromCoarsePages
          ;
        } while (lVar25 != 0);
        fVar14 = pFVar23->CoarsePagePixelThresholdDynamic;
        fVar15 = pFVar23->CoarsePagePixelThresholdStatic;
        fVar16 = pFVar23->CoarsePagePixelThresholdDynamicNanite;
        pFVar27->bExcludeNonNaniteFromCoarsePages = pFVar23->bExcludeNonNaniteFromCoarsePages;
        pFVar27->CoarsePagePixelThresholdDynamic = fVar14;
        pFVar27->CoarsePagePixelThresholdStatic = fVar15;
        pFVar27->CoarsePagePixelThresholdDynamicNanite = fVar16;
        fVar14 = pFVar23->GlobalResolutionLodBias;
        iVar26 = pFVar23->MipModeLocal;
        fVar15 = pFVar23->ScreenRayLength;
        pFVar27->SceneFrameNumber = pFVar23->SceneFrameNumber;
        pFVar27->GlobalResolutionLodBias = fVar14;
        pFVar27->MipModeLocal = iVar26;
        pFVar27->ScreenRayLength = fVar15;
        uVar31 = pFVar23->SMRTAdaptiveRayCount;
        iVar26 = pFVar23->SMRTRayCountLocal;
        iVar17 = pFVar23->SMRTSamplesPerRayLocal;
        pFVar27->NormalBias = pFVar23->NormalBias;
        pFVar27->SMRTAdaptiveRayCount = uVar31;
        pFVar27->SMRTRayCountLocal = iVar26;
        pFVar27->SMRTSamplesPerRayLocal = iVar17;
        fVar14 = pFVar23->SMRTTexelDitherScaleLocal;
        fVar15 = pFVar23->SMRTMaxSlopeBiasLocal;
        fVar16 = pFVar23->SMRTCotMaxRayAngleFromLight;
        pFVar27->SMRTExtrapolateMaxSlopeLocal = pFVar23->SMRTExtrapolateMaxSlopeLocal;
        pFVar27->SMRTTexelDitherScaleLocal = fVar14;
        pFVar27->SMRTMaxSlopeBiasLocal = fVar15;
        pFVar27->SMRTCotMaxRayAngleFromLight = fVar16;
        iVar26 = pFVar23->SMRTSamplesPerRayDirectional;
        fVar14 = pFVar23->SMRTExtrapolateMaxSlopeDirectional;
        fVar15 = pFVar23->SMRTTexelDitherScaleDirectional;
        pFVar27->SMRTRayCountDirectional = pFVar23->SMRTRayCountDirectional;
        pFVar27->SMRTSamplesPerRayDirectional = iVar26;
        pFVar27->SMRTExtrapolateMaxSlopeDirectional = fVar14;
        pFVar27->SMRTTexelDitherScaleDirectional = fVar15;
        (this->PrevUniformParameters).ProjectionData = (FRDGBufferSRV *)0x0;
        (this->PrevUniformParameters).PageTable = (FRDGTexture *)0x0;
        (this->PrevUniformParameters).UncachedPageRectBounds = (FRDGBufferSRV *)0x0;
        (this->PrevUniformParameters).AllocatedPageRectBounds = (FRDGBufferSRV *)0x0;
        (this->PrevUniformParameters).PageFlags = (FRDGTexture *)0x0;
        (this->PrevUniformParameters).PerViewData.LightGridData = (FRDGBufferSRV *)0x0;
        (this->PrevUniformParameters).PerViewData.NumCulledLightsGrid = (FRDGBufferSRV *)0x0;
        (this->PrevUniformParameters).PerViewData.DirectionalLightIds = (FRDGBufferSRV *)0x0;
        (this->PrevUniformParameters).CachePrimitiveAsDynamic = (FRDGBufferSRV *)0x0;
      }
      local_134 = (param_3->VisibleLightInfos).ArrayNum;
      uVar24 = (ulonglong)(int)local_134;
      pFVar28 = (param_3->VisibleLightInfos).AllocatorInstance.Data;
      piVar34 = &(pFVar28->VirtualShadowMapClipmaps).ArrayNum;
      local_120 = pFVar28 + uVar24;
      while( true ) {
        pFVar18 = local_120;
        local_130 = pFVar28;
        if ((param_3->VisibleLightInfos).ArrayNum != (int)uVar24) {
          param_4 = false;
          `TCheckedPointerIterator<FVisibleLightInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&param_4);
        }
        if (pFVar28 == pFVar18) break;
        iVar26 = *piVar34;
        pTVar29 = (((TArray<TSharedPtr<FVirtualShadowMapClipmap,1>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                     *)(piVar34 + -2))->AllocatorInstance).Data;
        pTVar37 = pTVar29 + iVar26;
        while( true ) {
          if (*piVar34 != iVar26) {
            local_138 = 0;
            `TCheckedPointerIterator<TSharedPtr<FVirtualShadowMapClipmap,1>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_138);
          }
          if (pTVar29 == pTVar37) break;
          if ((pTVar29->Object == (FVirtualShadowMapClipmap *)0x0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar4 = pTVar29->Object;
          pFVar5 = (pFVar4->PerLightCacheEntry).Object;
          if ((pFVar5 != (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
             ((pFVar4->RenderedPrimitives).NumBits != 0)) {
            if (&pFVar5->RenderedPrimitives != &pFVar4->RenderedPrimitives) {
              if ((pFVar4->RenderedPrimitives).AllocatorInstance.SecondaryData ==
                  (ForElementType<unsigned_int>)0x0) {
                memmove(&pFVar5->RenderedPrimitives,&pFVar4->RenderedPrimitives,0x10);
              }
              FVar6 = (pFVar5->RenderedPrimitives).AllocatorInstance.SecondaryData;
              if (FVar6 != (ForElementType<unsigned_int>)0x0) {
                FMemory::Free((void *)FVar6);
              }
              (pFVar5->RenderedPrimitives).AllocatorInstance.SecondaryData =
                   (pFVar4->RenderedPrimitives).AllocatorInstance.SecondaryData;
              (pFVar4->RenderedPrimitives).AllocatorInstance.SecondaryData =
                   (ForElementType<unsigned_int>)0x0;
              (pFVar5->RenderedPrimitives).NumBits = (pFVar4->RenderedPrimitives).NumBits;
              (pFVar5->RenderedPrimitives).MaxBits = (pFVar4->RenderedPrimitives).MaxBits;
              (pFVar4->RenderedPrimitives).NumBits = 0;
              (pFVar4->RenderedPrimitives).MaxBits = 0;
            }
          }
          pTVar29 = pTVar29 + 1;
        }
        pFVar28 = local_130 + 1;
        uVar24 = (ulonglong)local_134;
        piVar34 = piVar34 + 0x18;
      }
      ExtractStats(this,param_1,param_2);
    }
  }
  local_108 = &(this->CacheEntries).field_0x10;
  uStack_10c = 1;
  iVar26 = *(int *)&(this->CacheEntries).field_0x28;
  pTVar1 = &this->CacheEntries;
  local_f8 = 0;
  iStack_fc = iVar35;
  if (iVar26 != 0) {
    puVar33 = *(uint **)&(this->CacheEntries).field_0x20;
    if (puVar33 == (uint *)0x0) {
      puVar33 = (uint *)local_108;
    }
    uVar31 = *puVar33;
    local_f8 = 0;
    iVar35 = 0;
    while (uVar31 == 0) {
      lVar25 = (longlong)iVar35;
      local_f8 = local_f8 + 0x20;
      iVar35 = iVar35 + 1;
      if ((int)(iVar26 + -1 + (iVar26 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar35) goto LAB_1457f0b16;
      uVar31 = puVar33[lVar25 + 1];
    }
    uStack_10c = -uVar31 & uVar31;
    uVar24 = (ulonglong)uStack_10c * 2 + 1;
    lVar25 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_128 = (int)lVar25;
    iStack_fc = local_128 + -1 + local_f8;
    if (iVar26 < iStack_fc) {
LAB_1457f0b16:
      iStack_fc = iVar26;
    }
  }
  puVar30 = &(this->CacheEntries).field_0x10;
  uVar31 = *(uint *)&(this->CacheEntries).field_0x28;
  uStack_f4 = local_54;
  iStack_f0 = *(int *)&(this->CacheEntries).field_0x8 - *(int *)&(this->CacheEntries).field_0x34;
  uVar36 = uVar31 & 0xffffffe0;
  uStack_100 = 0xffffffff;
  TStack_e0._padding_ = CONCAT44(uStack_10c,iVar35);
  TStack_e0.CurrentBitIndex = iStack_fc;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  iVar26 = (int)uVar31 >> 5;
  TStack_e0._28_4_ = local_54;
  TStack_e0.BaseBitIndex = local_f8;
  uStack_c0 = CONCAT44(uStack_ec,iStack_f0);
  local_118 = pTVar1;
  iStack_110 = iVar35;
  local_e8 = pTVar1;
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_108;
  if (((int)uVar31 < 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar22)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar2 = *(uint *)&(this->CacheEntries).field_0x28;
  if (uVar31 != uVar2) {
    puVar7 = *(undefined1 **)&(this->CacheEntries).field_0x20;
    puVar32 = puVar30;
    if (puVar7 != (undefined1 *)0x0) {
      puVar32 = puVar7;
    }
    uVar31 = -1 << ((byte)uVar31 & 0x1f) & *(uint *)(puVar32 + (longlong)iVar26 * 4);
    while (uVar31 == 0) {
      lVar25 = (longlong)iVar26;
      uVar36 = uVar36 + 0x20;
      iVar26 = iVar26 + 1;
      uVar31 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26) goto LAB_1457f0c30;
      uVar31 = *(uint *)(puVar32 + lVar25 * 4 + 4);
    }
    uVar24 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_124 = (int)lVar25;
    uVar31 = local_124 + -1 + uVar36;
    if ((int)uVar2 < (int)uVar31) {
      uVar31 = uVar2;
    }
  }
LAB_1457f0c30:
  while( true ) {
    pTVar19 = local_e8;
    if (*(int *)&local_e8->field_0x8 - *(int *)&local_e8->field_0x34 != (int)uStack_c0) {
      local_137[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_137);
    }
    lVar25 = (longlong)TStack_e0.CurrentBitIndex;
    if (((TStack_e0.CurrentBitIndex == uVar31) &&
        (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar30)) && (pTVar19 == pTVar1)
       ) break;
    lVar8 = *(longlong *)pTVar19;
    if ((*(longlong *)(lVar8 + 0x10 + lVar25 * 0x28) == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar22)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    *(undefined1 *)(*(longlong *)(lVar8 + lVar25 * 0x28 + 0x10) + 0x13) = 0;
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  }
  return;
}

// ExtractStats @ 1457f0cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArrayCacheManager::ExtractStats
          (FVirtualShadowMapArrayCacheManager *this,FRDGBuilder *param_1,
          FVirtualShadowMapArray *param_2)

{
  int *piVar1;
  TRefCountPtr<FRDGPooledBuffer> *pTVar2;
  ushort uVar3;
  FRDGPooledBuffer *pFVar4;
  FRDGPooledBuffer *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  FRDGBuffer *pFVar12;
  FRDGBufferUAV *pFVar13;
  TRefCountPtr<FRDGPooledBuffer> *pTVar14;
  undefined8 *puVar15;
  FRDGBufferSRV *pFVar16;
  FGlobalShaderMap *this_00;
  FGlobalShaderType *pFVar17;
  FShaderType *pFVar18;
  FName this_01;
  FRDGEventName *pFVar19;
  FShaderParametersMetadata *pFVar20;
  FRHIGPUBufferReadback *pFVar21;
  FName *pFVar22;
  FRDGBuffer *pFVar23;
  void *_Src;
  FDateTime this_02;
  FString *pFVar24;
  IFileManager *pIVar25;
  longlong *plVar26;
  size_t sVar27;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar28;
  longlong lVar29;
  ForAnyElementType FVar30;
  FScriptContainerElement *pFVar31;
  uint uVar32;
  char **ppcVar33;
  longlong lVar34;
  wchar_t *_Str;
  uint uVar35;
  ulonglong uVar36;
  undefined1 auStackY_3a8 [32];
  undefined1 local_358 [8];
  FString local_350;
  ulonglong local_340;
  ForAnyElementType local_338;
  int local_330 [2];
  undefined8 *local_328;
  TRefCountPtr<FRDGPooledBuffer> local_320;
  FString local_318;
  TIntVector3<int>_u_0 local_308;
  FString local_2f8;
  undefined8 local_2e8;
  FRDGBufferUAVDesc local_2e0;
  FRDGBufferUAVDesc local_2d0;
  FRDGBufferUAVDesc local_2c0;
  FString local_2b0;
  FRDGBufferSRVDesc local_2a0;
  FRDGBufferSRVDesc local_280;
  FString local_260;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_248;
  FString local_238;
  FRDGBufferSRVDesc local_228;
  FRDGBufferDesc local_208;
  undefined1 local_1f0 [8];
  FName local_1e8 [2];
  FString local_1d8;
  TShaderRefBase<FVirtualSmCopyStatsCS,FShaderMapPointerTable> local_1c8;
  FString local_1b8;
  FRDGEventName local_1a8;
  FScriptContainerElement local_188 [128];
  ForAnyElementType local_108;
  FScriptContainerElement *local_100;
  int local_f8;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  pFVar23 = (FRDGBuffer *)0x0;
  pTVar2 = &this->AccumulatedStatsBuffer;
  pFVar12 = pFVar23;
  if (pTVar2->Reference != (FRDGPooledBuffer *)0x0) {
    pFVar12 = FRDGBuilder::RegisterExternalBuffer
                        (param_1,pTVar2,L"Shadow.Virtual.AccumulatedStatsBuffer",None);
  }
  if (0 < GVSMAccumulateStats) {
    GVSMAccumulateStats = GVSMAccumulateStats + -1;
  }
  if (GVSMAccumulateStats == 0) {
    if (this->bAccumulatingStats == false) {
      pFVar4 = pTVar2->Reference;
      if (pFVar4 != (FRDGPooledBuffer *)0x0) {
        plVar26 = &pFVar4->_padding_;
        pTVar2->Reference = (FRDGPooledBuffer *)0x0;
        LOCK();
        lVar34 = *plVar26;
        *(int *)plVar26 = (int)*plVar26 + -1;
        UNLOCK();
        if (((int)lVar34 == 1) && (plVar26 != (longlong *)0x0)) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
      }
    }
    else {
      this->bAccumulatingStats = false;
      pFVar21 = ::operator_new(0x58);
      if (pFVar21 != (FRHIGPUBufferReadback *)0x0) {
        pFVar22 = ::FName::FName(local_1e8,L"Shadow.Virtual.AccumulatedStatsBufferReadback");
        pFVar23 = (FRDGBuffer *)FRHIGPUBufferReadback::FRHIGPUBufferReadback(pFVar21,*pFVar22);
      }
      this->GPUBufferReadback = (FRHIGPUBufferReadback *)pFVar23;
      AddEnqueueCopyPass(param_1,(FRHIGPUBufferReadback *)pFVar23,pFVar12,0);
    }
  }
  else {
    if (pTVar2->Reference == (FRDGPooledBuffer *)0x0) {
      local_2f8.Data.ArrayNum = 0x4109;
      local_2f8.Data.AllocatorInstance.Data._0_4_ = 4;
      local_2f8.Data.AllocatorInstance.Data._4_4_ = 0xd00001;
      local_208.BytesPerElement = 4;
      local_208.NumElements = 0xd00001;
      local_2e8 = 0;
      local_208._12_4_ = local_2f8.Data.ArrayMax;
      local_208.Usage = VertexBuffer|ShaderResource|SourceCopy|UnorderedAccess|Static;
      local_208.Metadata = (FShaderParametersMetadata *)0x0;
      pFVar12 = FRDGBuilder::CreateBuffer
                          (param_1,&local_208,L"Shadow.Virtual.AccumulatedStatsBuffer",None);
      local_2e0._padding_._0_2_ = 0x1c;
      local_2e0._padding_._2_1_ = 0;
      local_2e0.Buffer = pFVar12;
      pFVar13 = FRDGBuilder::CreateUAV(param_1,&local_2e0,None);
      AddClearUAVPass(param_1,pFVar13,0,Compute);
      pTVar14 = FRDGBuilder::ConvertToExternalBuffer(param_1,pFVar12);
      pFVar4 = pTVar2->Reference;
      pFVar5 = pTVar14->Reference;
      if (pFVar4 != pFVar5) {
        pTVar2->Reference = pFVar5;
        if (pFVar5 != (FRDGPooledBuffer *)0x0) {
          LOCK();
          *(int *)&pFVar5->_padding_ = (int)pFVar5->_padding_ + 1;
          UNLOCK();
        }
        if (pFVar4 != (FRDGPooledBuffer *)0x0) {
          plVar26 = &pFVar4->_padding_;
          LOCK();
          lVar34 = *plVar26;
          *(int *)plVar26 = (int)*plVar26 + -1;
          UNLOCK();
          if (((int)lVar34 == 1) && (plVar26 != (longlong *)0x0)) {
            (**(code **)pFVar4->_padding_)(pFVar4,1);
          }
        }
      }
    }
    if (this->bAccumulatingStats == false) {
      local_2d0._padding_._0_2_ = 0x1c;
      local_2d0._padding_._2_1_ = 0;
      local_2d0.Buffer = pFVar12;
      pFVar13 = FRDGBuilder::CreateUAV(param_1,&local_2d0,None);
      AddClearUAVPass(param_1,pFVar13,0,Compute);
      this->bAccumulatingStats = true;
    }
    puVar15 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
    if (puVar15 == (undefined8 *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      *puVar15 = &___7__TObject_VFParameters_FVirtualSmCopyStatsCS___FRDGAllocator__6B_;
      puVar15[2] = 0;
      puVar15[3] = 0;
      puVar15[4] = 0;
    }
    local_328 = puVar15;
    if ((((undefined8 **)param_1->_padding_ <= &local_328) &&
        (&local_328 <
         (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar10 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar10 + 1;
    local_228._padding_._0_1_ = 0x1c;
    local_228._padding_._0_4_ = 0xffffffff;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar10 * 8) = local_328;
    local_228._padding_._4_4_ = 0;
    local_228._padding_ = 0;
    local_228.Buffer = param_2->StatsBufferRDG;
    pFVar16 = FRDGBuilder::CreateSRV(param_1,&local_228);
    ((FParameters *)(puVar15 + 2))->InStatsBuffer = pFVar16;
    local_2c0._padding_._0_2_ = 0x1c;
    local_2c0._padding_._2_1_ = 0;
    local_2c0.Buffer = pFVar12;
    pFVar13 = FRDGBuilder::CreateUAV(param_1,&local_2c0,None);
    puVar15[4] = pFVar13;
    local_2a0.Buffer =
         FSystemTextures::GetDefaultStructuredBuffer
                   ((FSystemTextures *)&GSystemTextures,param_1,0x9c);
    local_2a0._padding_._0_4_ = 0xffffffff;
    local_2a0._padding_._4_4_ = 0;
    local_2a0._padding_ = 0;
    local_2a0._padding_._0_1_ = 0;
    if ((((local_2a0.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_2a0._padding_._0_1_ = 0x1c;
    }
    pFVar16 = FRDGBuilder::CreateSRV(param_1,&local_2a0);
    puVar15[3] = pFVar16;
    ::FString::FString(&local_260,L"VirtualShadowMaps");
    bVar8 = Nanite::IsStatFilterActive(&local_260);
    if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.Data.AllocatorInstance.Data);
    }
    uVar7 = Nanite::GGlobalResources._104_8_;
    if ((bVar8) &&
       (local_320.Reference = (FRDGPooledBuffer *)Nanite::GGlobalResources._104_8_,
       Nanite::GGlobalResources._104_8_ != 0)) {
      LOCK();
      *(int *)(Nanite::GGlobalResources._104_8_ + 8) =
           *(int *)(Nanite::GGlobalResources._104_8_ + 8) + 1;
      UNLOCK();
      if (uVar7 != 0) {
        local_280.Buffer = FRDGBuilder::RegisterExternalBuffer(param_1,&local_320,None);
        local_280._padding_._0_1_ = 0;
        local_280._padding_._4_4_ = 0;
        local_280._padding_._0_4_ = 0xffffffff;
        local_280._padding_ = 0;
        if ((((local_280.Buffer)->Desc).Usage & DrawIndirect) != None) {
          local_280._padding_._0_1_ = 0x1c;
        }
        pFVar16 = FRDGBuilder::CreateSRV(param_1,&local_280);
        puVar15[3] = pFVar16;
        if (local_320.Reference != (FRDGPooledBuffer *)0x0) {
          plVar26 = &(local_320.Reference)->_padding_;
          LOCK();
          lVar34 = *plVar26;
          *(int *)plVar26 = (int)*plVar26 + -1;
          UNLOCK();
          if ((((int)lVar34 == 1) && (plVar26 != (longlong *)0x0)) &&
             (local_320.Reference != (FRDGPooledBuffer *)0x0)) {
            (**(code **)(local_320.Reference)->_padding_)(local_320.Reference,1);
          }
        }
      }
    }
    this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                 [*(int *)(*(longlong *)&this->field_0x8 + 8)]);
    pFVar17 = FVirtualSmCopyStatsCS::GetStaticType();
    if (*(int *)&pFVar17->field_0x50 != 1) {
      local_358[0] = 0;
      `FGlobalShaderMap::GetShader<FVirtualSmCopyStatsCS>'::__l2::<lambda_1>::operator()(local_358);
    }
    pFVar18 = (FShaderType *)FVirtualSmCopyStatsCS::GetStaticType();
    FGlobalShaderMap::GetShader(this_00,&local_248,pFVar18,0);
    if (local_248.ShaderContent == (FShader *)0x0) {
      this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_1f0);
      ::FName::ToString((FName *)this_01,&local_1d8);
      FVirtualSmCopyStatsCS::GetStaticType();
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    FVirtualSmCopyStatsCS::GetStaticType();
    local_1c8.ShaderContent = (FVirtualSmCopyStatsCS *)local_248.ShaderContent;
    local_1c8.ShaderMap = local_248.ShaderMap;
    pFVar19 = FRDGEventName::FRDGEventName(&local_1a8,1,L"Copy Stats");
    pFVar20 = FVirtualSmCopyStatsCS::FParameters::FTypeInfo::GetStructMetadata();
    local_308._s_0.X = 1;
    local_308._s_0.Y = 1;
    local_308._s_0.Z = 1;
    FComputeShaderUtils::AddPass<FVirtualSmCopyStatsCS>
              (param_1,pFVar19,Compute,&local_1c8,pFVar20,(FParameters *)(puVar15 + 2),
               (TIntVector3<int> *)&local_308._s_0);
    if (local_1a8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_1a8.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  pFVar21 = this->GPUBufferReadback;
  if ((pFVar21 != (FRHIGPUBufferReadback *)0x0) &&
     ((pFVar21->_padding_ == 0 ||
      ((*(int *)(pFVar21->_padding_ + 0x18) == 0 &&
       (cVar9 = (**(code **)(*(longlong *)pFVar21->_padding_ + 0x20))(), cVar9 != '\0')))))) {
    local_338.Data = (FScriptContainerElement *)0x0;
    local_330[0] = 0;
    local_330[1] = 0;
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,0xd00001,&local_338,local_330,local_330 + 1);
    memset(local_338.Data + (longlong)iVar10 * 4,0,0x3400004);
    _Src = FRHIGPUBufferReadback::Lock(this->GPUBufferReadback,0x3400004);
    memcpy(local_338.Data,_Src,(ulonglong)(uint)(local_330[0] * 4));
    FRHIGPUBufferReadback::Unlock(this->GPUBufferReadback);
    if (this->GPUBufferReadback != (FRHIGPUBufferReadback *)0x0) {
      FRHIGPUBufferReadback::_scalar_deleting_destructor_(this->GPUBufferReadback,1);
    }
    this->GPUBufferReadback = (FRHIGPUBufferReadback *)0x0;
    this_02 = FDateTime::Now();
    FDateTime::ToString((FDateTime *)this_02.Ticks,&local_2f8,L"%Y%m%d_%H%M%S");
    ::FString::PrintfImpl(&local_238,L"VSMStats(%s).csv");
    pFVar24 = FPaths::ProfilingDir(&local_1b8);
    ::FString::ConcatFF(&local_318,pFVar24,&local_238);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    if ((void *)CONCAT44(local_2f8.Data.AllocatorInstance.Data._4_4_,
                         local_2f8.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_2f8.Data.AllocatorInstance.Data._4_4_,
                                     local_2f8.Data.AllocatorInstance.Data._0_4_));
    }
    if ((local_330[0] < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar32 = *(uint *)local_338.Data;
    uVar36 = (ulonglong)uVar32;
    if (4 < (byte)LogRenderer._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    }
    pIVar25 = IFileManager::Get();
    FVar30.Data = (FScriptContainerElement *)L"";
    if (local_318.Data.ArrayNum != 0) {
      FVar30.Data = local_318.Data.AllocatorInstance.Data;
    }
    plVar26 = (longlong *)(**(code **)((longlong)*pIVar25 + 0x20))(pIVar25,FVar30.Data,0);
    if (plVar26 == (longlong *)0x0) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9119834668999378527>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapCacheManager.cpp"
                         ,0x65f,"FileToLogTo");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      local_350.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_350.Data.ArrayNum = 0;
      ppcVar33 = VirtualShadowMap_StatNames;
      local_350.Data.ArrayMax = 0;
      do {
        if (1 < local_350.Data.ArrayNum) {
          ::FString::AppendChars(&local_350,L",",1);
        }
        sVar27 = strlen(*ppcVar33);
        ::FString::AppendChars(&local_350,*ppcVar33,(int)sVar27);
        ppcVar33 = ppcVar33 + 1;
      } while ((longlong)ppcVar33 < 0x154bd9e90);
      ::FString::AppendChars(&local_350,L"\n",1);
      pcVar6 = *(code **)(*plVar26 + 0x188);
      iVar10 = local_350.Data.ArrayNum + -1;
      FVar30.Data = local_350.Data.AllocatorInstance.Data;
      if (local_350.Data.ArrayNum == 0) {
        iVar10 = 0;
        FVar30.Data = (FScriptContainerElement *)L"";
      }
      pTVar28 = StringCast<char,128,wchar_t>(&local_e8,(wchar_t *)FVar30.Data);
      (*pcVar6)(plVar26,pTVar28->Ptr,(longlong)iVar10);
      if ((void *)local_e8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_e8._padding_);
      }
      if (uVar32 != 0) {
        uVar32 = 1;
        do {
          local_340 = uVar36;
          ::FString::Empty(&local_350);
          lVar34 = 0x1a;
          do {
            if (1 < local_350.Data.ArrayNum) {
              ::FString::AppendChars(&local_350,L",",1);
            }
            uVar35 = 0;
            uVar11 = uVar35;
            if ((int)uVar32 < local_330[0]) {
              uVar11 = ~uVar32 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            ::FString::PrintfImpl(&local_2b0,L"%d");
            uVar11 = local_2b0.Data.ArrayNum - 1;
            if (local_2b0.Data.ArrayNum == 0) {
              uVar11 = uVar35;
            }
            ::FString::AppendChars
                      (&local_350,(wchar_t *)local_2b0.Data.AllocatorInstance.Data,uVar11);
            if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
            }
            uVar32 = uVar32 + 1;
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
          ::FString::AppendChars(&local_350,L"\n",1);
          pcVar6 = *(code **)(*plVar26 + 0x188);
          uVar11 = local_350.Data.ArrayNum - 1;
          if (local_350.Data.ArrayNum == 0) {
            uVar11 = uVar35;
          }
          if (local_350.Data.ArrayNum == 0) {
            _Str = L"";
LAB_1457f175e:
            local_108.Data = (FScriptContainerElement *)0x0;
            sVar27 = wcslen(_Str);
            local_f8 = (int)sVar27;
            uVar35 = local_f8 + 1;
            FVar30.Data = (FScriptContainerElement *)0x0;
            if (0x80 < uVar35) {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_108,0,uVar35,1);
              FVar30.Data = local_108.Data;
            }
            pFVar31 = local_188;
            if (FVar30.Data != (FScriptContainerElement *)0x0) {
              pFVar31 = FVar30.Data;
            }
            lVar29 = 0;
            bVar8 = false;
            lVar34 = lVar29;
            local_100 = pFVar31;
            if (0 < (int)uVar35) {
              do {
                uVar3 = *(ushort *)((longlong)_Str + lVar34 * 2);
                pFVar31[lVar34] = SUB21(uVar3,0);
                lVar34 = lVar34 + 1;
                bVar8 = (bool)(bVar8 | 0x7f < uVar3);
              } while (lVar34 < (int)uVar35);
              if (bVar8) {
                do {
                  if (0x7f < *(ushort *)((longlong)_Str + lVar29 * 2)) {
                    pFVar31[lVar29] = (FScriptContainerElement)0x3f;
                  }
                  lVar29 = lVar29 + 1;
                } while (lVar29 < (int)uVar35);
              }
            }
            uVar36 = local_340;
            if ((pFVar31 + (int)uVar35 == (FScriptContainerElement *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Result",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                   ,0x25,L""), uVar36 = local_340, bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else {
            local_108.Data = (FScriptContainerElement *)0x0;
            _Str = (wchar_t *)local_350.Data.AllocatorInstance.Data;
            if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            goto LAB_1457f175e;
            local_100 = (FScriptContainerElement *)0x0;
            local_f8 = 0;
          }
          (*pcVar6)(plVar26,local_100,(longlong)(int)uVar11);
          if (local_108.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data);
          }
          uVar36 = uVar36 - 1;
          local_340 = uVar36;
        } while (uVar36 != 0);
      }
      (**(code **)(*plVar26 + 0x210))(plVar26);
      if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_350.Data.AllocatorInstance.Data);
      }
    }
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
    if (local_338.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data);
    }
  }
  return;
}

// FindCreateLightCacheEntry @ 1457f19b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> * __thiscall
FVirtualShadowMapArrayCacheManager::FindCreateLightCacheEntry
          (FVirtualShadowMapArrayCacheManager *this,
          TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *__return_storage_ptr__,int param_1,
          uint param_2,uint param_3,uint param_4)

{
  TMap<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>_>
  *this_00;
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FVirtualShadowMapPerLightCacheEntry *pFVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *pTVar9;
  undefined1 *puVar10;
  TReferenceControllerBase<1> *pTVar11;
  int iVar12;
  undefined1 auStack_a8 [32];
  FVirtualShadowMapPerLightCacheEntry *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  TPairInitializer<FVirtualShadowMapCacheKey_const_&,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_const_&>
  local_78;
  FVirtualShadowMapPerLightCacheEntry **local_68;
  TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> local_60;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this_00 = &this->CacheEntries;
  local_60.SharedReferenceCount.ReferenceController._0_4_ = param_4;
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  local_60.Object._0_4_ = param_2;
  local_60.Object._4_4_ = param_1;
  if (*(int *)&(this->CacheEntries).field_0x8 != *(int *)&(this->CacheEntries).field_0x34) {
    puVar10 = *(undefined1 **)&(this->CacheEntries).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->CacheEntries).field_0x38;
    }
    iVar12 = *(int *)(puVar10 +
                     (ulonglong)
                     (*(int *)&(this->CacheEntries).field_0x48 - 1U &
                     (((uint)param_1 >> 2) + 0x9e3779b9 +
                      (param_2 * 0x40 + param_4 + (param_2 >> 2) + 0x9e3779b9 ^ param_2) +
                      param_1 * 0x40 ^ param_1)) * 4);
    if (iVar12 != -1) {
      do {
        lVar7 = *(longlong *)&this_00->field_0x0 + (longlong)iVar12 * 0x28;
        if (((*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar12 * 0x28) == param_2) &&
            (param_1 == *(int *)(lVar7 + 4))) && (param_4 == *(uint *)(lVar7 + 8))) {
          if (iVar12 != -1) {
            pTVar8 = (TReferenceControllerBase<1> *)(lVar7 + 0x10);
            if (lVar7 == 0) {
              pTVar8 = pTVar11;
            }
            if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
              pTVar2 = *(TReferenceControllerBase<1> **)&pTVar8->SharedReferenceCount;
              pFVar3 = (FVirtualShadowMapPerLightCacheEntry *)pTVar8->_padding_;
              if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
                UNLOCK();
              }
              if ((pFVar3 == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                pTVar9 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar4)();
                return pTVar9;
              }
              if ((pFVar3->ShadowMapEntries).ArrayNum == param_3) {
                pFVar3->bReferencedThisRender = true;
                pFVar3->LastReferencedFrameNumber =
                     *(uint *)(*(longlong *)&this->field_0x8 + 0x508c);
                __return_storage_ptr__->Object = pFVar3;
                (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
                goto LAB_1457f1d53;
              }
              if (3 < (byte)LogRenderer._0_1_) {
                UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
              }
              if (*(int *)&(this->CacheEntries).field_0x8 ==
                  *(int *)&(this->CacheEntries).field_0x34) goto LAB_1457f1bf5;
              puVar10 = *(undefined1 **)&(this->CacheEntries).field_0x40;
              if (puVar10 == (undefined1 *)0x0) {
                puVar10 = &(this->CacheEntries).field_0x38;
              }
              iVar12 = *(int *)(puVar10 +
                               (((longlong)
                                 (int)((((uint)local_60.Object >> 2) +
                                        (uint)local_60.SharedReferenceCount.ReferenceController +
                                        (uint)local_60.Object * 0x40 + -0x61c88647 ^
                                       (uint)local_60.Object) + (local_60.Object._4_4_ >> 2) +
                                      local_60.Object._4_4_ * 0x40) - 0x61c88647U ^
                                (longlong)(int)local_60.Object._4_4_) &
                               (longlong)*(int *)&(this->CacheEntries).field_0x48 - 1U) * 4);
              if (iVar12 == -1) goto LAB_1457f1bf5;
              lVar7 = *(longlong *)&this_00->field_0x0;
              goto LAB_1457f1bc0;
            }
          }
          break;
        }
        iVar12 = *(int *)(lVar7 + 0x20);
      } while (iVar12 != -1);
    }
  }
  goto LAB_1457f1bfd;
  while (iVar12 = *(int *)(lVar7 + 0x20 + lVar6 * 0x28), iVar12 != -1) {
LAB_1457f1bc0:
    lVar6 = (longlong)iVar12;
    if (((*(uint *)(lVar7 + lVar6 * 0x28) == (uint)local_60.Object) &&
        (local_60.Object._4_4_ == *(uint *)(lVar7 + 4 + lVar6 * 0x28))) &&
       ((uint)local_60.SharedReferenceCount.ReferenceController ==
        *(uint *)(lVar7 + 8 + lVar6 * 0x28))) {
      TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
      ::RemoveByIndex((TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
                       *)this_00,iVar12);
      break;
    }
  }
LAB_1457f1bf5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
LAB_1457f1bfd:
  lVar7 = 0x4c28;
  if (*(char *)(*(longlong *)&this->field_0x8 + 0x4cf0) == '\0') {
    lVar7 = 0x4c24;
  }
  iVar12 = *(int *)(lVar7 + *(longlong *)&this->field_0x8);
  pTVar8 = ::operator_new(0x150);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    local_88 = ___xmm_00000000000000000000000000000010;
    pTStack_80 = _UNK_150651568;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFVirtualShadowMapPerLightCacheEntry___00_SharedPointerInternals__6B_
    ;
    FVirtualShadowMapPerLightCacheEntry::FVirtualShadowMapPerLightCacheEntry
              ((FVirtualShadowMapPerLightCacheEntry *)(pTVar8 + 1),iVar12,param_3);
    local_88 = (FVirtualShadowMapPerLightCacheEntry *)(pTVar8 + 1);
    if ((local_88 == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar4)();
      return pTVar9;
    }
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    pTVar11 = pTVar8;
    pTStack_80 = pTVar8;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  if ((local_88 == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar4)();
    return pTVar9;
  }
  local_88->bReferencedThisRender = true;
  uVar1 = *(uint *)(*(longlong *)&this->field_0x8 + 0x508c);
  if ((local_88 == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar4)();
    return pTVar9;
  }
  local_88->LastReferencedFrameNumber = uVar1;
  local_78.Value = &local_60;
  local_68 = &local_88;
  TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FVirtualShadowMapCacheKey_const_&,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_const_&>_>
            ((TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
              *)this_00,&local_78,(bool *)&local_78.Value);
  __return_storage_ptr__->Object = local_88;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTStack_80;
  pTStack_80 = (TReferenceControllerBase<1> *)0x0;
  local_88 = (FVirtualShadowMapPerLightCacheEntry *)0x0;
LAB_1457f1d53:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// FreeHZBPhysicalPool @ 1457f1d80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArrayCacheManager::FreeHZBPhysicalPool
          (FVirtualShadowMapArrayCacheManager *this,FRDGBuilder *param_1)

{
  IPooledRenderTarget *pIVar1;
  
  pIVar1 = (this->HZBPhysicalPagePoolArray).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->HZBPhysicalPagePoolArray).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
    Invalidate(this,param_1);
  }
  return;
}

// FreePhysicalPool @ 1457f1dd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArrayCacheManager::FreePhysicalPool
          (FVirtualShadowMapArrayCacheManager *this,FRDGBuilder *param_1)

{
  longlong *plVar1;
  IPooledRenderTarget *pIVar2;
  FRDGPooledBuffer *pFVar3;
  longlong lVar4;
  
  pIVar2 = (this->PhysicalPagePool).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->PhysicalPagePool).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
    pFVar3 = (this->PhysicalPageMetaData).Reference;
    if (pFVar3 != (FRDGPooledBuffer *)0x0) {
      (this->PhysicalPageMetaData).Reference = (FRDGPooledBuffer *)0x0;
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
    Invalidate(this,param_1);
  }
  return;
}

// GetOverflowMessage @ 1457f4e30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FText * __thiscall
FVirtualShadowMapArrayCacheManager::GetOverflowMessage
          (FVirtualShadowMapArrayCacheManager *this,FText *__return_storage_ptr__,uint param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  iVar1 = 1 << ((byte)param_1 & 0x1f);
  if (iVar1 == 1) {
    pwVar3 = 
    L"[VSM] Non-Nanite Marking Job Queue overflow. Performance may be affected. This occurs when many non-nanite meshes cover a large area of the shadow map."
    ;
    pwVar2 = L"VSM_MarkingJobQueueOverflow";
  }
  else if (iVar1 == 2) {
    pwVar3 = 
    L"[VSM] One Pass Projection max lights overflow. If you see shadow artifacts, decrease the amount of local lights per pixel, or increase r.Shadow.Virtual.OnePassProjection.MaxLightsPerPixel."
    ;
    pwVar2 = L"VSM_OPPMaxLightsOverflow";
  }
  else {
    if (iVar1 != 4) {
      if (iVar1 != 8) {
        FText::AsLocalizable_Advanced_LocText
                  (__return_storage_ptr__,L"VirtualShadowMapCacheManager",L"VSM_UnknownOverflow",
                   L"[VSM] Unknown overflow");
        return __return_storage_ptr__;
      }
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"VirtualShadowMapCacheManager",
                 L"VSM_VisibleInstancesOverflow",
                 L"[VSM] Non-Nanite visible instances buffer overflow detected, this will produce visual artifacts (missing shadow)."
                );
      return __return_storage_ptr__;
    }
    pwVar3 = 
    L"[VSM] Page Pool overflow detected, this will produce visual artifacts (missing shadow). Increase the page pool limit or reduce resolution bias to avoid."
    ;
    pwVar2 = L"VSM_PagePoolOverflow";
  }
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"VirtualShadowMapCacheManager",pwVar2,pwVar3);
  return __return_storage_ptr__;
}

// GetPhysicalMaxWidth @ 1457f4f80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __thiscall
FVirtualShadowMapArrayCacheManager::GetPhysicalMaxWidth(FVirtualShadowMapArrayCacheManager *this)

{
  return GRHIGlobals.MaxTextureDimensions.Value;
}

// GetUniformParametersForInvalidation @ 145800840

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FInvalidationPassCommon * __thiscall
FVirtualShadowMapArrayCacheManager::GetUniformParametersForInvalidation
          (FVirtualShadowMapArrayCacheManager *this,FInvalidationPassCommon *__return_storage_ptr__,
          FRDGBuilder *param_1,FSceneUniformBuffer *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  TIntPoint<int>_u_0 TVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  FVirtualShadowMapUniformParameters *pFVar13;
  FVirtualShadowMapUniformParameters *pFVar14;
  FVirtualShadowMapUniformParameters *pFVar15;
  FRDGBufferSRV *pFVar16;
  FRDGTexture *pFVar17;
  TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *pTVar18;
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar19;
  longlong lVar20;
  FVirtualShadowMapUniformParameters *pFVar21;
  FVirtualShadowMapUniformParameters *pFVar22;
  FRDGBufferSRVDesc local_48;
  
  pFVar15 = FRDGAllocator::Alloc<FVirtualShadowMapUniformParameters>
                      ((FRDGAllocator *)&param_1->_padding_);
  lVar20 = 2;
  pFVar13 = &this->PrevUniformParameters;
  pFVar14 = pFVar15;
  do {
    pFVar22 = pFVar14;
    pFVar21 = pFVar13;
    uVar4 = pFVar21->NumSinglePageShadowMaps;
    uVar5 = pFVar21->MaxPhysicalPages;
    uVar6 = pFVar21->NumShadowMapSlots;
    pFVar22->NumFullShadowMaps = pFVar21->NumFullShadowMaps;
    pFVar22->NumSinglePageShadowMaps = uVar4;
    pFVar22->MaxPhysicalPages = uVar5;
    pFVar22->NumShadowMapSlots = uVar6;
    uVar4 = pFVar21->StaticHZBArrayIndex;
    uVar5 = pFVar21->PhysicalPageRowMask;
    uVar6 = pFVar21->PhysicalPageRowShift;
    pFVar22->StaticCachedArrayIndex = pFVar21->StaticCachedArrayIndex;
    pFVar22->StaticHZBArrayIndex = uVar4;
    pFVar22->PhysicalPageRowMask = uVar5;
    pFVar22->PhysicalPageRowShift = uVar6;
    uVar7 = *(undefined4 *)&pFVar21->field_0x24;
    lVar1 = pFVar21->_padding_;
    pFVar22->PackedShadowMaskMaxLightCount = pFVar21->PackedShadowMaskMaxLightCount;
    *(undefined4 *)&pFVar22->field_0x24 = uVar7;
    pFVar22->_padding_ = lVar1;
    uVar2 = *(undefined8 *)((longlong)&(pFVar21->RecPhysicalPoolSize).field0_0x0 + 8);
    *(undefined8 *)&(pFVar22->RecPhysicalPoolSize).field0_0x0 =
         *(undefined8 *)&(pFVar21->RecPhysicalPoolSize).field0_0x0;
    *(undefined8 *)((longlong)&(pFVar22->RecPhysicalPoolSize).field0_0x0 + 8) = uVar2;
    TVar3 = (pFVar21->PhysicalPoolSizePages).field0_0x0;
    (pFVar22->PhysicalPoolSize).field0_0x0 = (pFVar21->PhysicalPoolSize).field0_0x0;
    (pFVar22->PhysicalPoolSizePages).field0_0x0 = TVar3;
    uVar4 = pFVar21->PageTableRowMask;
    lVar1 = pFVar21->_padding_;
    pFVar22->PageTableRowShift = pFVar21->PageTableRowShift;
    pFVar22->PageTableRowMask = uVar4;
    pFVar22->_padding_ = lVar1;
    uVar2 = *(undefined8 *)((longlong)&(pFVar21->PageTableTextureSizeInvSize).field0_0x0 + 8);
    *(undefined8 *)&(pFVar22->PageTableTextureSizeInvSize).field0_0x0 =
         *(undefined8 *)&(pFVar21->PageTableTextureSizeInvSize).field0_0x0;
    *(undefined8 *)((longlong)&(pFVar22->PageTableTextureSizeInvSize).field0_0x0 + 8) = uVar2;
    uVar2 = *(undefined8 *)((longlong)&(pFVar21->PageReceiverMaskTextureSizeInvSize).field0_0x0 + 8)
    ;
    *(undefined8 *)&(pFVar22->PageReceiverMaskTextureSizeInvSize).field0_0x0 =
         *(undefined8 *)&(pFVar21->PageReceiverMaskTextureSizeInvSize).field0_0x0;
    *(undefined8 *)((longlong)&(pFVar22->PageReceiverMaskTextureSizeInvSize).field0_0x0 + 8) = uVar2
    ;
    lVar20 = lVar20 + -1;
    pFVar13 = (FVirtualShadowMapUniformParameters *)&pFVar21->bExcludeNonNaniteFromCoarsePages;
    pFVar14 = (FVirtualShadowMapUniformParameters *)&pFVar22->bExcludeNonNaniteFromCoarsePages;
  } while (lVar20 != 0);
  fVar8 = pFVar21->CoarsePagePixelThresholdDynamic;
  fVar9 = pFVar21->CoarsePagePixelThresholdStatic;
  fVar10 = pFVar21->CoarsePagePixelThresholdDynamicNanite;
  pFVar22->bExcludeNonNaniteFromCoarsePages = pFVar21->bExcludeNonNaniteFromCoarsePages;
  pFVar22->CoarsePagePixelThresholdDynamic = fVar8;
  pFVar22->CoarsePagePixelThresholdStatic = fVar9;
  pFVar22->CoarsePagePixelThresholdDynamicNanite = fVar10;
  fVar8 = pFVar21->GlobalResolutionLodBias;
  iVar11 = pFVar21->MipModeLocal;
  fVar9 = pFVar21->ScreenRayLength;
  pFVar22->SceneFrameNumber = pFVar21->SceneFrameNumber;
  pFVar22->GlobalResolutionLodBias = fVar8;
  pFVar22->MipModeLocal = iVar11;
  pFVar22->ScreenRayLength = fVar9;
  uVar4 = pFVar21->SMRTAdaptiveRayCount;
  iVar11 = pFVar21->SMRTRayCountLocal;
  iVar12 = pFVar21->SMRTSamplesPerRayLocal;
  pFVar22->NormalBias = pFVar21->NormalBias;
  pFVar22->SMRTAdaptiveRayCount = uVar4;
  pFVar22->SMRTRayCountLocal = iVar11;
  pFVar22->SMRTSamplesPerRayLocal = iVar12;
  fVar8 = pFVar21->SMRTTexelDitherScaleLocal;
  fVar9 = pFVar21->SMRTMaxSlopeBiasLocal;
  fVar10 = pFVar21->SMRTCotMaxRayAngleFromLight;
  pFVar22->SMRTExtrapolateMaxSlopeLocal = pFVar21->SMRTExtrapolateMaxSlopeLocal;
  pFVar22->SMRTTexelDitherScaleLocal = fVar8;
  pFVar22->SMRTMaxSlopeBiasLocal = fVar9;
  pFVar22->SMRTCotMaxRayAngleFromLight = fVar10;
  iVar11 = pFVar21->SMRTSamplesPerRayDirectional;
  fVar8 = pFVar21->SMRTExtrapolateMaxSlopeDirectional;
  fVar9 = pFVar21->SMRTTexelDitherScaleDirectional;
  pFVar22->SMRTRayCountDirectional = pFVar21->SMRTRayCountDirectional;
  pFVar22->SMRTSamplesPerRayDirectional = iVar11;
  pFVar22->SMRTExtrapolateMaxSlopeDirectional = fVar8;
  pFVar22->SMRTTexelDitherScaleDirectional = fVar9;
  pFVar15->PageTableSampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  local_48.Buffer =
       FRDGBuilder::RegisterExternalBuffer
                 (param_1,&(this->PrevBuffers).ProjectionData,L"Shadow.Virtual.PrevProjectionData",
                  None);
  local_48._padding_._4_4_ = 0;
  local_48._padding_ = 0;
  local_48._padding_._0_4_ = 0xffffffff;
  local_48._padding_._0_1_ = 0;
  if ((((local_48.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_48._padding_._0_1_ = 0x1c;
  }
  pFVar16 = FRDGBuilder::CreateSRV(param_1,&local_48);
  pFVar15->ProjectionData = pFVar16;
  pFVar17 = FRDGBuilder::RegisterExternalTexture
                      (param_1,&(this->PrevBuffers).PageTable,L"Shadow.Virtual.PrevPageTable",None);
  pFVar15->PageTable = pFVar17;
  pFVar17 = FRDGBuilder::RegisterExternalTexture
                      (param_1,&(this->PrevBuffers).PageFlags,L"Shadow.Virtual.PrevPageFlags",None);
  pFVar15->PageFlags = pFVar17;
  local_48.Buffer =
       FRDGBuilder::RegisterExternalBuffer
                 (param_1,&(this->PrevBuffers).UncachedPageRectBounds,
                  L"Shadow.Virtual.PrevUncachedPageRectBounds",None);
  local_48._padding_._0_1_ = 0;
  local_48._padding_._4_4_ = 0;
  local_48._padding_._0_4_ = 0xffffffff;
  if ((((local_48.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_48._padding_._0_1_ = 0x1c;
  }
  local_48._padding_ = lVar20;
  pFVar16 = FRDGBuilder::CreateSRV(param_1,&local_48);
  pFVar15->UncachedPageRectBounds = pFVar16;
  local_48.Buffer =
       FRDGBuilder::RegisterExternalBuffer
                 (param_1,&(this->PrevBuffers).AllocatedPageRectBounds,
                  L"Shadow.Virtual.PrevAllocatedPageRectBounds",None);
  local_48._padding_._0_1_ = 0;
  local_48._padding_._4_4_ = 0;
  local_48._padding_._0_4_ = 0xffffffff;
  if ((((local_48.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_48._padding_._0_1_ = 0x1c;
  }
  local_48._padding_ = lVar20;
  pFVar16 = FRDGBuilder::CreateSRV(param_1,&local_48);
  pFVar15->AllocatedPageRectBounds = pFVar16;
  local_48.Buffer = UploadCachePrimitiveAsDynamic(this,param_1);
  local_48._padding_._0_1_ = 0;
  local_48._padding_._4_4_ = 0;
  local_48._padding_._0_4_ = 0xffffffff;
  if ((((local_48.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_48._padding_._0_1_ = 0x1c;
  }
  local_48._padding_ = lVar20;
  pFVar16 = FRDGBuilder::CreateSRV(param_1,&local_48);
  pFVar15->CachePrimitiveAsDynamic = pFVar16;
  pFVar17 = FSystemTextures::GetZeroUIntArrayAtomicCompatDummy
                      ((FSystemTextures *)&GSystemTextures,param_1);
  pFVar15->PhysicalPagePool = pFVar17;
  pFVar17 = FSystemTextures::GetDefaultTexture2D
                      ((FSystemTextures *)&GSystemTextures,param_1,PF_R32_UINT,0xffffffff);
  pFVar15->PageReceiverMasks = pFVar17;
  local_48.Buffer =
       FSystemTextures::GetDefaultStructuredBuffer((FSystemTextures *)&GSystemTextures,param_1,4);
  local_48._padding_._0_1_ = 0;
  local_48._padding_._4_4_ = 0;
  local_48._padding_._0_4_ = 0xffffffff;
  if ((((local_48.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_48._padding_._0_1_ = 0x1c;
  }
  local_48._padding_ = lVar20;
  pFVar16 = FRDGBuilder::CreateSRV(param_1,&local_48);
  (pFVar15->PerViewData).LightGridData = pFVar16;
  (pFVar15->PerViewData).NumCulledLightsGrid = pFVar16;
  (pFVar15->PerViewData).DirectionalLightIds = pFVar16;
  __return_storage_ptr__->UniformParameters = pFVar15;
  pTVar18 = FRDGBuilder::CreateUniformBuffer<FVirtualShadowMapUniformParameters>(param_1,pFVar15);
  __return_storage_ptr__->VirtualShadowMapUniformBuffer = pTVar18;
  pTVar19 = FSceneUniformBuffer::GetBuffer(param_2,param_1);
  __return_storage_ptr__->SceneUniformBuffer = pTVar19;
  return __return_storage_ptr__;
}

// InitExtension @ 145801250

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArrayCacheManager::InitExtension
          (FVirtualShadowMapArrayCacheManager *this,FScene *param_1)

{
  undefined8 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  FRendererOnScreenNotification *lpCriticalSection;
  FVirtualShadowMapArrayCacheManager *local_res8;
  FDelegateHandle local_res18 [2];
  
  puVar1 = ::operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1[2] = this;
    puVar1[1] = L"Shadow.Virtual.StatusFeedback";
    *puVar1 = &GPUMessage::
               TLambdaHandler<`FVirtualShadowMapArrayCacheManager::InitExtension'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &SharedPointerInternals::
          TReferenceControllerWithDeleter<GPUMessage::TLambdaHandler<`FVirtualShadowMapArrayCacheManager::InitExtension'::`2'::<lambda_1>_>,SharedPointerInternals::DefaultDeleter<GPUMessage::TLambdaHandler<`FVirtualShadowMapArrayCacheManager::InitExtension'::`2'::<lambda_1>_>_>,1>
          ::_vftable_;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)puVar1;
  }
  GPUMessage::RegisterHandler((TSharedPtr<GPUMessage::FHandler,1> *)&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  GPUMessage::FSocket::Reset(&this->StatusFeedbackSocket);
  (this->StatusFeedbackSocket).MessageId.Index = local_res8._0_4_;
  local_res8._0_4_ = 0xffffffff;
  GPUMessage::FSocket::Reset((FSocket *)&local_res8);
  puVar1 = ::operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1[2] = this;
    puVar1[1] = L"Shadow.Virtual.StatsFeedback";
    *puVar1 = &GPUMessage::
               TLambdaHandler<`FVirtualShadowMapArrayCacheManager::InitExtension'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &SharedPointerInternals::
          TReferenceControllerWithDeleter<GPUMessage::TLambdaHandler<`FVirtualShadowMapArrayCacheManager::InitExtension'::`2'::<lambda_2>_>,SharedPointerInternals::DefaultDeleter<GPUMessage::TLambdaHandler<`FVirtualShadowMapArrayCacheManager::InitExtension'::`2'::<lambda_2>_>_>,1>
          ::_vftable_;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)puVar1;
  }
  GPUMessage::RegisterHandler((TSharedPtr<GPUMessage::FHandler,1> *)&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  GPUMessage::FSocket::Reset(&this->StatsFeedbackSocket);
  (this->StatsFeedbackSocket).MessageId.Index = local_res8._0_4_;
  local_res8 = (FVirtualShadowMapArrayCacheManager *)CONCAT44(local_res8._4_4_,0xffffffff);
  GPUMessage::FSocket::Reset((FSocket *)&local_res8);
  lpCriticalSection = FRendererOnScreenNotification::Get();
  local_res8 = this;
  if (lpCriticalSection != (FRendererOnScreenNotification *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
    ::AddLambda<_FVirtualShadowMapArrayCacheManager::InitExtension_::__l2::<lambda_3>_>
              (&lpCriticalSection->ProxyDelegate,(<lambda_3> *)local_res18);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->ScreenMessageDelegate).ID = local_res18[0].ID;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Invalidate @ 145802e30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArrayCacheManager::Invalidate
          (FVirtualShadowMapArrayCacheManager *this,FRDGBuilder *param_1)

{
  longlong *plVar1;
  FRHIGPUMask FVar2;
  FRHIComputeCommandList *this_00;
  longlong lVar3;
  undefined1 uVar4;
  FRDGBufferUAV *pFVar5;
  FRDGBufferUAVDesc local_68;
  FVirtualShadowMapArrayFrameData local_58;
  
  TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
           *)&this->CacheEntries);
  local_58.ThrottleBuffer.Reference = (FRDGPooledBuffer *)0x0;
  local_58.PageTable.Reference = (IPooledRenderTarget *)0x0;
  local_58.PageFlags.Reference = (IPooledRenderTarget *)0x0;
  local_58.UncachedPageRectBounds.Reference = (FRDGPooledBuffer *)0x0;
  local_58.AllocatedPageRectBounds.Reference = (FRDGPooledBuffer *)0x0;
  local_58.ProjectionData.Reference = (FRDGPooledBuffer *)0x0;
  local_58.PhysicalPageLists.Reference = (FRDGPooledBuffer *)0x0;
  local_58.PageRequestFlags.Reference = (IPooledRenderTarget *)0x0;
  local_58.NanitePerformanceFeedback.Reference = (FRDGPooledBuffer *)0x0;
  FVirtualShadowMapArrayFrameData::operator=(&this->PrevBuffers,&local_58);
  if (local_58.ThrottleBuffer.Reference != (FRDGPooledBuffer *)0x0) {
    plVar1 = &(local_58.ThrottleBuffer.Reference)->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)(local_58.ThrottleBuffer.Reference)->_padding_)
                (local_58.ThrottleBuffer.Reference,1);
    }
  }
  if (local_58.NanitePerformanceFeedback.Reference != (FRDGPooledBuffer *)0x0) {
    plVar1 = &(local_58.NanitePerformanceFeedback.Reference)->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)(local_58.NanitePerformanceFeedback.Reference)->_padding_)
                (local_58.NanitePerformanceFeedback.Reference,1);
    }
  }
  if (local_58.PageRequestFlags.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_58.PageRequestFlags.Reference)->_padding_ + 0x38))();
  }
  if (local_58.PhysicalPageLists.Reference != (FRDGPooledBuffer *)0x0) {
    plVar1 = &(local_58.PhysicalPageLists.Reference)->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)(local_58.PhysicalPageLists.Reference)->_padding_)
                (local_58.PhysicalPageLists.Reference,1);
    }
  }
  if (local_58.ProjectionData.Reference != (FRDGPooledBuffer *)0x0) {
    plVar1 = &(local_58.ProjectionData.Reference)->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)(local_58.ProjectionData.Reference)->_padding_)
                (local_58.ProjectionData.Reference,1);
    }
  }
  if (local_58.AllocatedPageRectBounds.Reference != (FRDGPooledBuffer *)0x0) {
    plVar1 = &(local_58.AllocatedPageRectBounds.Reference)->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)(local_58.AllocatedPageRectBounds.Reference)->_padding_)
                (local_58.AllocatedPageRectBounds.Reference,1);
    }
  }
  if (local_58.UncachedPageRectBounds.Reference != (FRDGPooledBuffer *)0x0) {
    plVar1 = &(local_58.UncachedPageRectBounds.Reference)->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)(local_58.UncachedPageRectBounds.Reference)->_padding_)
                (local_58.UncachedPageRectBounds.Reference,1);
    }
  }
  if (local_58.PageFlags.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_58.PageFlags.Reference)->_padding_ + 0x38))();
  }
  if (local_58.PageTable.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_58.PageTable.Reference)->_padding_ + 0x38))();
  }
  if ((this->PhysicalPageMetaData).Reference != (FRDGPooledBuffer *)0x0) {
    this_00 = (FRHIComputeCommandList *)param_1->_padding_;
    FVar2.GPUMask = *(uint *)&this_00->field_0x29c;
    FRHIComputeCommandList::SetGPUMask
              (this_00,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
    local_68._padding_._0_2_ = 0;
    local_68._padding_._2_1_ = 0;
    local_68.Buffer = FRDGBuilder::RegisterExternalBuffer(param_1,&this->PhysicalPageMetaData,None);
    uVar4 = 0;
    if ((((local_68.Buffer)->Desc).Usage & DrawIndirect) != None) {
      uVar4 = 0x1c;
    }
    local_68._padding_._0_2_ = CONCAT11(local_68._padding_._1_1_,uVar4);
    pFVar5 = FRDGBuilder::CreateUAV(param_1,&local_68,None);
    AddClearUAVPass(param_1,pFVar5,0,Compute);
    FRHIComputeCommandList::SetGPUMask(this_00,FVar2);
  }
  return;
}

// IsAccumulatingStats @ 145803070

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FVirtualShadowMapArrayCacheManager::IsAccumulatingStats(FVirtualShadowMapArrayCacheManager *this)

{
  return GVSMAccumulateStats != 0;
}

// IsCacheDataAvailable @ 145803090

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FVirtualShadowMapArrayCacheManager::IsCacheDataAvailable(FVirtualShadowMapArrayCacheManager *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar2 = CVarCacheVirtualSMs.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  if ((((((pTVar2->ShadowedValue[1] != 0) &&
         ((this->PhysicalPagePool).Reference != (IPooledRenderTarget *)0x0)) &&
        ((this->PhysicalPageMetaData).Reference != (FRDGPooledBuffer *)0x0)) &&
       (((this->PrevBuffers).PageTable.Reference != (IPooledRenderTarget *)0x0 &&
        ((this->PrevBuffers).PageFlags.Reference != (IPooledRenderTarget *)0x0)))) &&
      (((this->PrevBuffers).UncachedPageRectBounds.Reference != (FRDGPooledBuffer *)0x0 &&
       (((this->PrevBuffers).AllocatedPageRectBounds.Reference != (FRDGPooledBuffer *)0x0 &&
        ((this->PrevBuffers).ProjectionData.Reference != (FRDGPooledBuffer *)0x0)))))) &&
     (((this->PrevBuffers).PhysicalPageLists.Reference != (FRDGPooledBuffer *)0x0 &&
      ((this->PrevBuffers).PageRequestFlags.Reference != (IPooledRenderTarget *)0x0)))) {
    return true;
  }
  return false;
}

// IsCacheEnabled @ 145803150

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FVirtualShadowMapArrayCacheManager::IsCacheEnabled(FVirtualShadowMapArrayCacheManager *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar2 = CVarCacheVirtualSMs.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  return pTVar2->ShadowedValue[1] != 0;
}

// IsHZBDataAvailable @ 1458031f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FVirtualShadowMapArrayCacheManager::IsHZBDataAvailable(FVirtualShadowMapArrayCacheManager *this)

{
  if ((((this->HZBPhysicalPagePoolArray).Reference != (IPooledRenderTarget *)0x0) &&
      ((this->PrevBuffers).PageTable.Reference != (IPooledRenderTarget *)0x0)) &&
     ((this->PrevBuffers).PageFlags.Reference != (IPooledRenderTarget *)0x0)) {
    return true;
  }
  return false;
}

// IsVisualizePassEnabled @ 1458033f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __thiscall
FVirtualShadowMapArrayCacheManager::IsVisualizePassEnabled
          (FVirtualShadowMapArrayCacheManager *this,FViewInfo *param_1,int param_2,
          EVSMVisualizationPostPass param_3)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  pTVar1 = CVarShowStatsVisible.Ref;
  if (param_3 != PostEditorPrimitives) {
    return false;
  }
  bVar2 = IsInParallelGameThread();
  if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
    lVar3 = 0;
  }
  else {
    lVar3 = 1;
  }
  if ((pTVar1->ShadowedValue[lVar3] != false) &&
     (((undefined1)GVSMStatSectionsEnabled & Clusters) != None)) {
    return true;
  }
  return false;
}

// ProcessInvalidations @ 1458071a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArrayCacheManager::ProcessInvalidations
          (FVirtualShadowMapArrayCacheManager *this,FRDGBuilder *param_1,
          FInvalidationPassCommon *param_2,
          TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_3)

{
  int *piVar1;
  FRHIGPUMask FVar2;
  FRHIComputeCommandList *this_00;
  longlong lVar3;
  FData *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  FGPUData *this_01;
  FGlobalShaderMap *this_02;
  FShaderType *pFVar9;
  FName this_03;
  FRDGEventName *pFVar10;
  FShaderParametersMetadata *pFVar11;
  undefined8 *puVar12;
  undefined1 local_res20 [8];
  undefined8 *local_118;
  TIntVector3<int>_u_0 local_110 [2];
  TIntVector3<int>_u_0 local_f8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_e8;
  FPackedBatch *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FString local_c8;
  TArrayView<FInstanceCullingLoadBalancerBase::FPackedBatch_const_,int> local_b8;
  TShaderRefBase<FInvalidateInstancePagesLoadBalancerCS,FShaderMapPointerTable> local_a8;
  FRDGEventName local_98;
  FGPUData local_80 [2];
  
  this_00 = (FRHIComputeCommandList *)param_1->_padding_;
  puVar12 = (undefined8 *)0x0;
  FVar2.GPUMask = *(uint *)&this_00->field_0x29c;
  FRHIComputeCommandList::SetGPUMask(this_00,(FRHIGPUMask)(this->CacheValidGPUMask).GPUMask);
  if ((param_2->UniformParameters->NumShadowMapSlots == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InvalidationPassCommon.UniformParameters->NumShadowMapSlots > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapCacheManager.cpp"
                         ,0x7d1,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((((param_3->Data).Reference)->Items).ArrayNum == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Instances.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapCacheManager.cpp"
                         ,0x7d2,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x90,0x10);
  if (puVar8 == (undefined8 *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    puVar8[2] = 0;
    *puVar8 = &
              ___7__TObject_VFParameters_FInvalidateInstancePagesLoadBalancerCS___FRDGAllocator__6B_
    ;
    *(undefined1 *)(puVar8 + 3) = 1;
    puVar8[4] = 0;
    *(undefined1 *)(puVar8 + 5) = 1;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    puVar12 = puVar8;
  }
  local_118 = puVar12;
  if ((((undefined8 **)param_1->_padding_ <= &local_118) &&
      (&local_118 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar7 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_118;
  SetInvalidateInstancePagesParameters
            (this,param_1,param_2,(FInvalidatePagesParameters *)(puVar12 + 2));
  this_01 = TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
            ::UploadFinalized(param_3,local_80,param_1,1);
  FInstanceCullingLoadBalancerBase::FGPUData::GetShaderParameters
            (this_01,param_1,(FShaderParameters *)(puVar12 + 0xe));
  lVar3 = puVar12[10];
  this_02 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                               [*(int *)(*(longlong *)&this->field_0x8 + 8)]);
  pFVar9 = (FShaderType *)FInvalidateInstancePagesLoadBalancerCS::GetStaticType();
  FGlobalShaderMap::GetShader(this_02,&local_e8,pFVar9,(uint)(lVar3 != 0));
  if (local_e8.ShaderContent == (FShader *)0x0) {
    this_03 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res20);
    ::FName::ToString((FName *)this_03,&local_c8);
    FInvalidateInstancePagesLoadBalancerCS::GetStaticType();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FInvalidateInstancePagesLoadBalancerCS::GetStaticType();
  pFVar4 = (param_3->Data).Reference;
  local_a8.ShaderContent = (FInvalidateInstancePagesLoadBalancerCS *)local_e8.ShaderContent;
  local_a8.ShaderMap = local_e8.ShaderMap;
  local_d8 = (pFVar4->Batches).AllocatorInstance.Data;
  iStack_d0 = (pFVar4->Batches).ArrayNum;
  if ((iStack_d0 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_b8._12_4_ = uStack_cc;
  local_b8.ArrayNum = iStack_d0;
  local_b8.DataPtr = local_d8;
  FInstanceCullingLoadBalancerBase::GetWrappedCsGroupCount
            ((FInstanceCullingLoadBalancerBase *)param_3,(TIntVector3<int> *)&local_110[0]._s_0,
             &local_b8,1);
  if ((param_3->CurrentBatchNumItems != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentBatchNumItems == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                         ,0xdc,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar10 = FRDGEventName::FRDGEventName
                      (&local_98,L"InvalidateInstancePagesLoadBalancerCS (%d batches)");
  pFVar11 = FInvalidateInstancePagesLoadBalancerCS::FParameters::FTypeInfo::GetStructMetadata();
  local_f8._0_8_ = local_110[0]._0_8_;
  local_f8._s_0.Z = local_110[0]._s_0.Z;
  FComputeShaderUtils::AddPass<FInvalidateInstancePagesLoadBalancerCS>
            (param_1,pFVar10,Compute,&local_a8,pFVar11,(FParameters *)(puVar12 + 2),
             (TIntVector3<int> *)&local_f8._s_0);
  if (local_98.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.FormattedEventName.Data.AllocatorInstance.Data);
  }
  FRHIComputeCommandList::SetGPUMask(this_00,FVar2);
  return;
}

// ProcessInvalidations @ 1458075a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArrayCacheManager::ProcessInvalidations
          (FVirtualShadowMapArrayCacheManager *this,FRDGBuilder *param_1,
          FSceneUniformBuffer *param_2,FInvalidatingPrimitiveCollector *param_3)

{
  undefined1 *puVar1;
  TMap<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>_>
  *pTVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  TMap<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>_>
  *pTVar8;
  bool bVar9;
  FRDGScope *this_00;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_128 [4];
  int local_124;
  int local_120;
  TMap<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>_>
  *local_118;
  int iStack_110;
  uint uStack_10c;
  undefined1 *local_108;
  undefined4 uStack_100;
  int iStack_fc;
  int local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  TMap<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>_>
  *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  TRDGEventScopeGuard<FRDGScope_RHI> local_b8;
  undefined1 local_a8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<36>_const_*,std::tuple<>_> local_a0;
  uint uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  FInvalidationPassCommon local_70;
  undefined4 local_34;
  
  bVar9 = IsCacheDataAvailable(this);
  if ((bVar9) && ((this->PrevUniformParameters).NumShadowMapSlots != 0)) {
    cVar4 = *(char *)((longlong)&param_1->_padding_ + 6);
    bVar9 = false;
    local_a8 = 0;
    if ((cVar4 != '\0') && ((cVar4 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::Desc._padding_._0_4_ = 0x75f;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        local_80 = 0;
        uStack_7c = 0;
        ::Desc._12_8_ = ZEXT48(uStack_84);
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)::u_Shadow_Virtual_;
        ::Desc._padding_ = (longlong)::u_Shadow_Virtual_;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FVirtualShadowMapArrayCacheManager::ProcessInvalidations'::__l10::Desc::
               operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
               _dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_a0._Myfirst._Val = &::Desc;
      local_b8.State = (FRDGScopeState *)param_1;
      this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)this_00;
      local_b8.Scope = this_00;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<36>_const_*,std::tuple<>_>_>
                (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_a0);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
      }
      bVar9 = true;
      local_a8 = 1;
    }
    GetUniformParametersForInvalidation(this,&local_70,param_1,param_2);
    FInvalidatingPrimitiveCollector::AddPrimitivesToInvalidate(param_3);
    UpdateCachePrimitiveAsDynamic(this,param_3);
    TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
    FinalizeBatches(&param_3->Instances);
    if ((((param_3->Instances).Data.Reference)->Items).ArrayNum != 0) {
      ProcessInvalidations(this,param_1,&local_70,&param_3->Instances);
    }
    if (bVar9) {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_b8);
    }
  }
  else {
    iVar11 = (this->ShadowInvalidatingInstancesImplementation).PrimitiveInstancesToInvalidate.
             ArrayMax;
    iVar14 = 0;
    (this->ShadowInvalidatingInstancesImplementation).PrimitiveInstancesToInvalidate.ArrayNum = 0;
    if (iVar11 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&(this->ShadowInvalidatingInstancesImplementation).
                           PrimitiveInstancesToInvalidate.AllocatorInstance,0,
                 &(this->ShadowInvalidatingInstancesImplementation).PrimitiveInstancesToInvalidate.
                  ArrayMax);
    }
    puVar1 = &(this->CacheEntries).field_0x10;
    iVar11 = *(int *)&(this->CacheEntries).field_0x28;
    pTVar2 = &this->CacheEntries;
    uStack_10c = 1;
    iStack_fc = iVar14;
    iStack_110 = 0;
    if (iVar11 != 0) {
      puVar15 = *(uint **)&(this->CacheEntries).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar12 = *puVar15;
      iVar14 = 0;
      while (uVar12 == 0) {
        lVar10 = (longlong)iStack_110;
        iVar14 = iVar14 + 0x20;
        iStack_110 = iStack_110 + 1;
        iStack_fc = iVar11;
        if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_110)
        goto LAB_1458077ae;
        uVar12 = puVar15[lVar10 + 1];
      }
      uStack_10c = -uVar12 & uVar12;
      uVar3 = (ulonglong)uStack_10c * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_124 = (int)lVar10;
      iStack_fc = local_124 + -1 + iVar14;
      if (iVar11 < iStack_fc) {
        iStack_fc = iVar11;
      }
    }
LAB_1458077ae:
    uVar12 = *(uint *)&(this->CacheEntries).field_0x28;
    uStack_f4 = local_34;
    iStack_f0 = *(int *)&(this->CacheEntries).field_0x8 - *(int *)&(this->CacheEntries).field_0x34;
    uVar16 = uVar12 & 0xffffffe0;
    uStack_100 = 0xffffffff;
    TStack_e0._padding_ = CONCAT44(uStack_10c,iStack_110);
    TStack_e0.CurrentBitIndex = iStack_fc;
    TStack_e0.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar12 >> 5;
    TStack_e0._28_4_ = local_34;
    TStack_e0.BaseBitIndex = iVar14;
    uStack_c0 = CONCAT44(uStack_ec,iStack_f0);
    local_118 = pTVar2;
    local_108 = puVar1;
    local_f8 = iVar14;
    local_e8 = pTVar2;
    TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if (((int)uVar12 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar5 = *(uint *)&(this->CacheEntries).field_0x28;
    if (uVar12 != uVar5) {
      puVar13 = *(undefined1 **)&(this->CacheEntries).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
      while (uVar12 == 0) {
        lVar10 = (longlong)iVar11;
        uVar16 = uVar16 + 0x20;
        iVar11 = iVar11 + 1;
        uVar12 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_1458078c0;
        uVar12 = *(uint *)(puVar13 + lVar10 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_120 = (int)lVar10;
      uVar12 = local_120 + -1 + uVar16;
      if ((int)uVar5 < (int)uVar12) {
        uVar12 = uVar5;
      }
    }
LAB_1458078c0:
    while( true ) {
      pTVar8 = local_e8;
      if (*(int *)&local_e8->field_0x8 - *(int *)&local_e8->field_0x34 != (int)uStack_c0) {
        local_128[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
      }
      lVar10 = (longlong)TStack_e0.CurrentBitIndex;
      if (((TStack_e0.CurrentBitIndex == uVar12) &&
          (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2)
         ) break;
      lVar6 = *(longlong *)pTVar8;
      if ((*(longlong *)(lVar6 + 0x10 + lVar10 * 0x28) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar10 = *(longlong *)(lVar6 + lVar10 * 0x28 + 0x10);
      *(undefined4 *)(lVar10 + 0x50) = 0;
      if (*(int *)(lVar10 + 0x54) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)(lVar10 + 0x48),0,(int *)(lVar10 + 0x54));
      }
      TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
    }
  }
  return;
}

// ProcessRemovedLights @ 145807a50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArrayCacheManager::ProcessRemovedLights
          (FVirtualShadowMapArrayCacheManager *this,
          TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
              *)&this->CacheEntries);
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  uVar6 = local_78._28_4_;
  local_18 = (TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
              *)&this->CacheEntries;
  if ((int)uVar6 < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      uVar2 = *(uint *)(*local_48 + 4 + (longlong)(int)uVar4 * 0x28);
      if ((-1 < (int)uVar2) && ((int)uVar2 < param_1->NumBits)) {
        uVar5 = uVar2 & 0x1f;
        if ((int)uVar2 < 0) {
          uVar2 = uVar2 + 0x1f;
        }
        if (((param_1->AllocatorInstance).Data[(int)uVar2 >> 5] >> uVar5 & 1) != 0) {
          TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,uVar6);
          local_10 = '\x01';
        }
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
      uVar6 = uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar6 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar6 < 4) {
        iVar3 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar6) && (local_18->HashSize < iVar3)) || (iVar3 < local_18->HashSize)) {
        local_18->HashSize = iVar3;
        TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// ReallocatePersistentPrimitiveIndices @ 145807d10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArrayCacheManager::ReallocatePersistentPrimitiveIndices
          (FVirtualShadowMapArrayCacheManager *this)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  uVar8 = 1;
  puVar1 = &(this->CacheEntries).field_0x10;
  iVar3 = *(int *)&(this->CacheEntries).field_0x28;
  lVar10 = 0x4c28;
  if (*(char *)(*(longlong *)&this->field_0x8 + 0x4cf0) == '\0') {
    lVar10 = 0x4c24;
  }
  iVar4 = *(int *)(lVar10 + *(longlong *)&this->field_0x8);
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  iVar14 = 0;
  iVar16 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->CacheEntries).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145807ddd;
      uVar13 = puVar17[lVar10 + 1];
    }
    uVar8 = -uVar13 & uVar13;
    uVar11 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar9 = local_res10 + -1 + iVar16;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_145807ddd:
  uVar13 = *(uint *)&(this->CacheEntries).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar14);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->CacheEntries).field_0x8 -
                       *(int *)&(this->CacheEntries).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->CacheEntries).field_0x28;
  if (uVar13 != uVar8) {
    puVar15 = *(undefined1 **)&(this->CacheEntries).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145807f00;
      uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar11 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    uVar13 = local_res18 + -1 + uVar12;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
    }
  }
LAB_145807f00:
  while( true ) {
    if (*(int *)&(this->CacheEntries).field_0x8 - *(int *)&(this->CacheEntries).field_0x34 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar10 = (longlong)TStack_60.CurrentBitIndex;
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar5 = *(longlong *)&this->CacheEntries;
    if ((*(longlong *)(lVar5 + 0x10 + lVar10 * 0x28) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
              ((TBitArray<FDefaultBitArrayAllocator> *)
               (*(longlong *)(lVar5 + lVar10 * 0x28 + 0x10) + 0x18),iVar4,false);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>(&this->CachePrimitiveAsDynamic,iVar4,false);
  piVar2 = &(this->LastPrimitiveInvalidatedFrame).ArrayNum;
  iVar3 = *piVar2;
  uVar11 = (ulonglong)iVar3;
  if (iVar3 < iVar4) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4 - iVar3,&(this->LastPrimitiveInvalidatedFrame).AllocatorInstance,piVar2,
               &(this->LastPrimitiveInvalidatedFrame).ArrayMax);
    lVar10 = uVar11 * 4;
    do {
      uVar13 = (uint)uVar11;
      uVar8 = 0;
      if ((int)uVar13 < (this->LastPrimitiveInvalidatedFrame).ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar11 = (ulonglong)(uVar13 + 1);
      *(undefined4 *)((this->LastPrimitiveInvalidatedFrame).AllocatorInstance.Data + lVar10) =
           0xffffffff;
      lVar10 = lVar10 + 4;
    } while ((int)(uVar13 + 1) < iVar4);
  }
  return;
}

// SetHZBPhysicalPoolSize @ 14580f5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<IPooledRenderTarget> __thiscall
FVirtualShadowMapArrayCacheManager::SetHZBPhysicalPoolSize
          (FVirtualShadowMapArrayCacheManager *this,FRDGBuilder *param_1,TIntPoint<int> param_2,
          int param_3,EPixelFormat param_4)

{
  TRefCountPtr<IPooledRenderTarget> *pTVar1;
  FRHICommandListBase *pFVar2;
  IPooledRenderTarget *pIVar3;
  code *pcVar4;
  ETextureCreateFlags EVar5;
  bool bVar6;
  longlong lVar7;
  TRefCountPtr<IPooledRenderTarget> TVar8;
  FRHITextureDesc *pFVar9;
  int in_register_0000008c;
  TIntPoint<int>_u_0 TVar10;
  undefined3 in_stack_00000029;
  char in_stack_00000030;
  undefined1 auStackY_148 [32];
  FPooledRenderTargetDesc local_108;
  undefined1 local_a8 [80];
  ulonglong local_58;
  
  TVar10._s_0.Y = in_register_0000008c;
  TVar10._s_0.X = param_3;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar1 = &this->HZBPhysicalPagePoolArray;
  if ((((pTVar1->Reference == (IPooledRenderTarget *)0x0) ||
       (lVar7 = (**(code **)(pTVar1->Reference->_padding_ + 0x10))(),
       *(int *)(lVar7 + 0x2c) != param_3)) || (*(int *)(lVar7 + 0x30) != in_register_0000008c)) ||
     ((lVar7 = (**(code **)(pTVar1->Reference->_padding_ + 0x10))(),
      *(char *)(lVar7 + 0x28) != in_stack_00000030 ||
      (lVar7 = (**(code **)(pTVar1->Reference->_padding_ + 0x10))(),
      *(ushort *)(lVar7 + 0x36) != _param_4)))) {
    EVar5 = GFastVRamConfig.HZB;
    if ((param_3 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InExtent.X",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                           ,0x8f,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      TVar8.Reference = (IPooledRenderTarget *)(*pcVar4)();
      return (TRefCountPtr<IPooledRenderTarget>)TVar8.Reference;
    }
    if ((in_register_0000008c == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InExtent.Y",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                           ,0x90,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      TVar8.Reference = (IPooledRenderTarget *)(*pcVar4)();
      return (TRefCountPtr<IPooledRenderTarget>)TVar8.Reference;
    }
    local_108.Flags = EVar5 | (UAV|ShaderResource);
    local_108.ClearValue.Value.Color[3] = FClearValueBinding::None.Value.Color[3];
    local_108.UAVFormat = PF_Unknown;
    local_108.DebugName = L"UnknownTexture2DArray";
    local_108.NumSamples = '\x01';
    local_108.FastVRAMPercentage = 0xff;
    local_108.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_108.AliasableFormats.ArrayNum = 0;
    local_108.AliasableFormats.ArrayMax = 1;
    local_108.Depth = 0;
    local_108.ArraySize = (ushort)_param_4;
    local_108.field13_0x58.PackedBits = '\x01';
    local_108.NumMips = '\a';
    local_108.ClearValue._0_8_ = FClearValueBinding::None._0_8_;
    local_108.ClearValue.Value._4_8_ = FClearValueBinding::None.Value._4_8_;
    local_108.Extent.field0_0x0 = TVar10;
    if (((param_3 == 0) || (in_register_0000008c == 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewDesc.Is2DTexture()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                           ,0x9e,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      TVar8.Reference = (IPooledRenderTarget *)(*pcVar4)();
      return (TRefCountPtr<IPooledRenderTarget>)TVar8.Reference;
    }
    pFVar2 = *(FRHICommandListBase **)((longlong)param_2.field0_0x0 + 0xc0);
    pFVar9 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_a8,&local_108);
    FRenderTargetPool::FindFreeElement
              ((FRenderTargetPool *)&GRenderTargetPool,pFVar2,pFVar9,pTVar1,
               L"Shadow.Virtual.HZBPhysicalPagePool");
    if ((void *)local_a8._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._64_8_);
    }
    Invalidate(this,(FRDGBuilder *)param_2.field0_0x0);
    if (local_108.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_108.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  param_1->_padding_ = 0;
  pIVar3 = pTVar1->Reference;
  param_1->_padding_ = (longlong)pIVar3;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x30))();
  }
  return (TRefCountPtr<IPooledRenderTarget>)(IPooledRenderTarget *)param_1;
}

// SetInvalidateInstancePagesParameters @ 14580f830

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArrayCacheManager::SetInvalidateInstancePagesParameters
          (FVirtualShadowMapArrayCacheManager *this,FRDGBuilder *param_1,
          FInvalidationPassCommon *param_2,FInvalidatePagesParameters *param_3)

{
  TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *pTVar1;
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar2;
  IPooledRenderTarget *pIVar3;
  code *pcVar4;
  TVector2<float>_u_0 TVar5;
  TConsoleVariableData<int> *pTVar6;
  EUniformBufferBindingFlags EVar7;
  undefined1 uVar8;
  bool bVar9;
  FShaderParametersMetadata *pFVar10;
  FRDGBufferUAV *pFVar11;
  FRDGTextureUAV *pFVar12;
  FRDGTexture *pFVar13;
  longlong lVar14;
  TRefCountPtr<IPooledRenderTarget> local_res8;
  FRDGBufferUAVDesc local_68;
  FRDGTextureUAVDesc local_58;
  
  pTVar1 = param_2->VirtualShadowMapUniformBuffer;
  pFVar10 = FVirtualShadowMapUniformParameters::GetStructMetadata();
  EVar7 = Static;
  if (pFVar10->BindingFlags != StaticAndShader) {
    EVar7 = pFVar10->BindingFlags;
  }
  local_68.Buffer = (FRDGBuffer *)CONCAT71(local_68.Buffer._1_7_,EVar7);
  *(TRDGUniformBuffer<FVirtualShadowMapUniformParameters> **)&param_3->VirtualShadowMap = pTVar1;
  *(FRDGBuffer **)&(param_3->VirtualShadowMap).field_0x8 = local_68.Buffer;
  pTVar2 = param_2->SceneUniformBuffer;
  local_68._padding_ = (longlong)pTVar1;
  pFVar10 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
  EVar7 = Static;
  if (pFVar10->BindingFlags != StaticAndShader) {
    EVar7 = pFVar10->BindingFlags;
  }
  local_68.Buffer = (FRDGBuffer *)CONCAT71(local_68.Buffer._1_7_,EVar7);
  *(TRDGUniformBuffer<FSceneUniformParameters> **)&param_3->Scene = pTVar2;
  *(FRDGBuffer **)&(param_3->Scene).field_0x8 = local_68.Buffer;
  local_68._padding_ = (longlong)pTVar2;
  local_68.Buffer = FRDGBuilder::RegisterExternalBuffer(param_1,&this->PhysicalPageMetaData,None);
  uVar8 = 0;
  if ((((local_68.Buffer)->Desc).Usage & DrawIndirect) != None) {
    uVar8 = 0x1c;
  }
  local_68._padding_ =
       CONCAT71((int7)((ulonglong)local_68._padding_ >> 8),uVar8) & 0xffffffffff0000ff;
  pFVar11 = FRDGBuilder::CreateUAV(param_1,&local_68,None);
  param_3->PhysicalPageMetaDataOut = pFVar11;
  local_58.Texture =
       FRDGBuilder::RegisterExternalTexture(param_1,&(this->PrevBuffers).PageRequestFlags,None);
  local_58._padding_._1_1_ = 0;
  local_58._padding_._2_4_ = 0;
  local_58._padding_._6_1_ = 0;
  local_58._padding_._0_1_ = ((local_58.Texture)->Desc).field_0x34;
  local_58._padding_._0_1_ = 0;
  pFVar12 = FRDGBuilder::CreateUAV(param_1,&local_58,None);
  param_3->OutPageRequestFlags = pFVar12;
  pTVar6 = CVarCacheVsmUseHzb.Ref;
  bVar9 = IsInParallelRenderingThread();
  if (!bVar9) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((pTVar6->ShadowedValue[1] == 0) ||
     (pIVar3 = (this->HZBPhysicalPagePoolArray).Reference, pIVar3 == (IPooledRenderTarget *)0x0)) {
    local_res8.Reference = (IPooledRenderTarget *)0x0;
  }
  else {
    (**(code **)(pIVar3->_padding_ + 0x30))(pIVar3);
    local_res8.Reference = pIVar3;
    (**(code **)(pIVar3->_padding_ + 0x30))(pIVar3);
    (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3);
  }
  if (local_res8.Reference != (IPooledRenderTarget *)0x0) {
    param_3->HZBPageTable = param_2->UniformParameters->PageTable;
    param_3->HZBPageRectBounds = param_2->UniformParameters->AllocatedPageRectBounds;
    pFVar13 = FRDGBuilder::RegisterExternalTexture(param_1,&local_res8,None);
    param_3->HZBTextureArray = pFVar13;
    lVar14 = (**(code **)((local_res8.Reference)->_padding_ + 0x10))();
    TVar5._s_0.Y = (float)(int)((ulonglong)*(undefined8 *)(lVar14 + 0x2c) >> 0x20);
    TVar5._s_0.X = (float)(int)*(undefined8 *)(lVar14 + 0x2c);
    (param_3->HZBSize).field0_0x0 = TVar5;
    param_3->HZBSampler =
         TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
    if (local_res8.Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)((local_res8.Reference)->_padding_ + 0x38))();
    }
  }
  return;
}

// SetPhysicalPoolSize @ 14580fa40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArrayCacheManager::SetPhysicalPoolSize
          (FVirtualShadowMapArrayCacheManager *this,FRDGBuilder *param_1,TIntPoint<int> param_2,
          int param_3,uint param_4)

{
  longlong *plVar1;
  IPooledRenderTarget *pIVar2;
  FRHICommandListBase *pFVar3;
  FRDGPooledBuffer *pFVar4;
  FRDGPooledBuffer *pFVar5;
  code *pcVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  longlong lVar9;
  FRHITextureDesc *pFVar10;
  FRDGBuffer *pFVar11;
  TRefCountPtr<FRDGPooledBuffer> *pTVar12;
  int iVar13;
  ETextureCreateFlags EVar14;
  int iVar15;
  undefined1 auStackY_168 [32];
  undefined4 uStack_124;
  FRDGBufferDesc local_118;
  FPooledRenderTargetDesc local_f8;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  pTVar7 = CVarVSMReservedResource.Ref;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar8 = IsInParallelRenderingThread();
  if ((!bVar8) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((pTVar7->ShadowedValue[1] == 0) ||
     (EVar14 = ImmediateCommit|ReservedResource, GRHIGlobals.ReservedResources.Supported == false))
  {
    EVar14 = None;
  }
  pIVar2 = (this->PhysicalPagePool).Reference;
  iVar13 = param_2.field0_0x0._0_4_;
  iVar15 = param_2.field0_0x0._4_4_;
  if ((((pIVar2 != (IPooledRenderTarget *)0x0) &&
       (lVar9 = (**(code **)(pIVar2->_padding_ + 0x10))(), *(int *)(lVar9 + 0x2c) == iVar13)) &&
      (*(int *)(lVar9 + 0x30) == iVar15)) &&
     (((lVar9 = (**(code **)(((this->PhysicalPagePool).Reference)->_padding_ + 0x10))(),
       (uint)*(ushort *)(lVar9 + 0x36) == param_3 && (param_4 == this->MaxPhysicalPages)) &&
      (this->PhysicalPagePoolCreateFlags == EVar14)))) {
    return;
  }
  if (((this->PhysicalPagePool).Reference != (IPooledRenderTarget *)0x0) &&
     (3 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  this->PhysicalPagePoolCreateFlags = EVar14;
  if ((iVar13 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InExtent.X",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                         ,0x8f,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((iVar15 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InExtent.Y",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                         ,0x90,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_f8.ClearValue.Value.Color[3] = FClearValueBinding::None.Value.Color[3];
  local_f8.ArraySize = (ushort)param_3;
  local_f8.Flags = EVar14 | (AtomicCompatible|UAV|ShaderResource);
  local_f8.Format = PF_R32_UINT;
  local_f8.UAVFormat = PF_Unknown;
  local_f8.NumSamples = '\x01';
  local_f8.FastVRAMPercentage = 0xff;
  local_f8.DebugName = L"UnknownTexture2DArray";
  local_f8.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_f8.AliasableFormats.ArrayNum = 0;
  local_f8.AliasableFormats.ArrayMax = 1;
  local_f8.Depth = 0;
  local_f8.field13_0x58.PackedBits = '\x01';
  local_f8.NumMips = '\x01';
  local_f8.ClearValue._0_8_ = FClearValueBinding::None._0_8_;
  local_f8.ClearValue.Value._4_8_ = FClearValueBinding::None.Value._4_8_;
  local_f8.Extent.field0_0x0 = param_2.field0_0x0;
  if (((iVar13 == 0) || (iVar15 == 0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewDesc.Is2DTexture()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                         ,0x9e,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = (FRHICommandListBase *)param_1->_padding_;
  pFVar10 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_98,&local_f8);
  FRenderTargetPool::FindFreeElement
            ((FRenderTargetPool *)&GRenderTargetPool,pFVar3,pFVar10,&this->PhysicalPagePool,
             L"Shadow.Virtual.PhysicalPagePool");
  if ((void *)local_98._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._64_8_);
  }
  local_118.NumElements = param_4;
  local_118.BytesPerElement = 0x18;
  local_118._12_4_ = uStack_124;
  local_118.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  this->MaxPhysicalPages = param_4;
  local_118.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar11 = FRDGBuilder::CreateBuffer
                      (param_1,&local_118,L"Shadow.Virtual.PhysicalPageMetaData",None);
  pTVar12 = FRDGBuilder::ConvertToExternalBuffer(param_1,pFVar11);
  pFVar4 = (this->PhysicalPageMetaData).Reference;
  pFVar5 = pTVar12->Reference;
  if (pFVar4 != pFVar5) {
    (this->PhysicalPageMetaData).Reference = pFVar5;
    if (pFVar5 != (FRDGPooledBuffer *)0x0) {
      LOCK();
      *(int *)&pFVar5->_padding_ = (int)pFVar5->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar4 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar4->_padding_;
      LOCK();
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar9 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
    }
  }
  if (local_f8.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_f8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  Invalidate(this,param_1);
  return;
}

// ShouldCreateExtension @ 145810820

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __cdecl FVirtualShadowMapArrayCacheManager::ShouldCreateExtension(FScene *param_1)

{
  bool bVar1;
  
  if (*(int *)&param_1->field_0x8 == 5) {
    bVar1 = DoesPlatformSupportVirtualShadowMaps(SP_NumPlatforms);
    return bVar1;
  }
  bVar1 = DoesPlatformSupportVirtualShadowMaps
                    (GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&param_1->field_0x8]);
  return bVar1;
}

// TrimLoggingInfo @ 145814eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArrayCacheManager::TrimLoggingInfo(FVirtualShadowMapArrayCacheManager *this)

{
  FGameTime *pFVar1;
  TSet<TTuple<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem>,TDefaultMapHashableKeyFuncs<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,0>,FDefaultSetAllocator>
  *pTVar2;
  TMap<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,0>_>
  *this_00;
  undefined1 auStack_a8 [32];
  FGameTime local_88;
  undefined1 local_68 [72];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFVar1 = FGameTime::GetTimeSinceAppStart(&local_88);
  this_00 = &this->LargePageAreaItems;
  pTVar2 = (TSet<TTuple<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem>,TDefaultMapHashableKeyFuncs<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,0>,FDefaultSetAllocator>
            *)TMapBase<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,0>_>
              ::
              FilterByPredicate<_FVirtualShadowMapArrayCacheManager::TrimLoggingInfo_::__l2::<lambda_1>_>
                        ((TMapBase<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,0>_>
                          *)this_00,
                         (TMap<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,0>_>
                          *)local_68,(<lambda_1>)(float)pFVar1->RealTimeSeconds);
  if ((TSet<TTuple<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem>,TDefaultMapHashableKeyFuncs<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,0>,FDefaultSetAllocator>
       *)this_00 != pTVar2) {
    TSet<TTuple<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem>,TDefaultMapHashableKeyFuncs<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem>,TDefaultMapHashableKeyFuncs<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem>,TDefaultMapHashableKeyFuncs<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,0>,FDefaultSetAllocator>
                *)this_00,pTVar2);
  }
  local_20 = 0;
  if ((void *)local_68._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_68);
  return;
}

// UpdateCachePrimitiveAsDynamic @ 1458154c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArrayCacheManager::UpdateCachePrimitiveAsDynamic
          (FVirtualShadowMapArrayCacheManager *this,FInvalidatingPrimitiveCollector *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  FData *pFVar5;
  FPackedItem *pFVar6;
  FPackedBatch *pFVar7;
  code *pcVar8;
  uint uVar9;
  FPackedItem FVar10;
  TConsoleVariableData<int> *pTVar11;
  TMap<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>_>
  *pTVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  FPrimitiveSceneInfo *pFVar16;
  ulonglong uVar17;
  ForElementType<unsigned_int> FVar18;
  longlong lVar19;
  ForElementType<unsigned_int> FVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  undefined1 *puVar24;
  uint *puVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  int iVar27;
  uint uVar28;
  uint local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  FPackedBatch local_178;
  uint local_174;
  int local_170;
  int local_16c;
  uint local_168;
  FPackedItem local_164;
  ulonglong local_158;
  ForElementType<unsigned_int> local_150;
  TConstSetBitIterator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> local_148;
  TConstSetBitIterator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> local_128;
  uint local_108;
  FPersistentPrimitiveIndex local_104;
  ulonglong local_100;
  FPrimitiveSceneInfo *local_f8;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  TBitArray<FDefaultBitArrayAllocator> *local_d8;
  TMap<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TMap<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  pTVar11 = CVarFramesStaticThreshold.Ref;
  local_168 = *(uint *)(*(longlong *)&this->field_0x8 + 0x508c);
  bVar13 = IsInParallelRenderingThread();
  if ((!bVar13) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_108 = pTVar11->ShadowedValue[1];
  TConstSetBitIterator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
  TConstSetBitIterator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
            (&local_148,&param_1->InvalidatedPrimitives);
  uVar28 = local_168;
  iVar21 = (int)local_148._padding_;
  iVar27 = local_148.BaseBitIndex;
  if (local_148.CurrentBitIndex < (local_148.Array)->NumBits) {
    do {
      iVar15 = local_148.CurrentBitIndex;
      if (((local_148.CurrentBitIndex < 0) ||
          ((this->CachePrimitiveAsDynamic).NumBits <= local_148.CurrentBitIndex)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar20 = (this->CachePrimitiveAsDynamic).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<unsigned_int>)&this->CachePrimitiveAsDynamic;
      if (FVar20 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = FVar20;
      }
      uVar23 = iVar15;
      if (iVar15 < 0) {
        uVar23 = iVar15 + 0x1f;
      }
      puVar2 = (uint *)((longlong)FVar18 + (longlong)((int)uVar23 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar15 & 0x1f);
      uVar23 = 0;
      if (iVar15 < (this->LastPrimitiveInvalidatedFrame).ArrayNum) {
        uVar23 = (uint)~iVar15 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(uint *)((this->LastPrimitiveInvalidatedFrame).AllocatorInstance.Data + (longlong)iVar15 * 4)
           = uVar28;
      uVar23 = (local_148.Array)->NumBits;
      puVar2 = ((local_148.Array)->AllocatorInstance).Data;
      local_148.UnvisitedBitMask = local_148.UnvisitedBitMask & ~local_148._padding_._4_4_;
      uVar22 = local_148.UnvisitedBitMask & puVar2[iVar21];
      while (uVar22 == 0) {
        iVar21 = iVar21 + 1;
        iVar27 = iVar27 + 0x20;
        local_148.CurrentBitIndex = uVar23;
        local_148._padding_._0_4_ = iVar21;
        local_148.BaseBitIndex = iVar27;
        if ((int)(((int)(uVar23 - 1) >> 0x1f & 0x1fU) + (uVar23 - 1)) >> 5 < iVar21)
        goto LAB_1458156c4;
        local_148.UnvisitedBitMask = 0xffffffff;
        uVar22 = puVar2[iVar21];
      }
      local_148._padding_._4_4_ = -uVar22 & uVar22;
      uVar17 = (ulonglong)local_148._padding_._4_4_ * 2 + 1;
      lVar19 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_f0 = (int)lVar19;
      local_148.CurrentBitIndex = local_f0 + -1 + iVar27;
      if ((int)uVar23 < local_148.CurrentBitIndex) {
        local_148.CurrentBitIndex = uVar23;
      }
LAB_1458156c4:
    } while (local_148.CurrentBitIndex < (int)uVar23);
  }
  TConstSetBitIterator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
  TConstSetBitIterator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
            (&local_128,&param_1->RemovedPrimitives);
  iVar21 = (int)local_128._padding_;
  iVar27 = local_128.BaseBitIndex;
  if (local_128.CurrentBitIndex < (local_128.Array)->NumBits) {
    do {
      iVar15 = local_128.CurrentBitIndex;
      if (((local_128.CurrentBitIndex < 0) ||
          ((this->CachePrimitiveAsDynamic).NumBits <= local_128.CurrentBitIndex)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar20 = (this->CachePrimitiveAsDynamic).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<unsigned_int>)&this->CachePrimitiveAsDynamic;
      if (FVar20 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = FVar20;
      }
      uVar28 = iVar15;
      if (iVar15 < 0) {
        uVar28 = iVar15 + 0x1f;
      }
      puVar2 = (uint *)((longlong)FVar18 + (longlong)((int)uVar28 >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << ((byte)iVar15 & 0x1f));
      uVar28 = 0;
      if (iVar15 < (this->LastPrimitiveInvalidatedFrame).ArrayNum) {
        uVar28 = (uint)~iVar15 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined4 *)
       ((this->LastPrimitiveInvalidatedFrame).AllocatorInstance.Data + (longlong)iVar15 * 4) =
           0xffffffff;
      uVar28 = (local_128.Array)->NumBits;
      puVar2 = ((local_128.Array)->AllocatorInstance).Data;
      local_128.UnvisitedBitMask = local_128.UnvisitedBitMask & ~local_128._padding_._4_4_;
      uVar23 = local_128.UnvisitedBitMask & puVar2[iVar21];
      while (uVar23 == 0) {
        iVar21 = iVar21 + 1;
        iVar27 = iVar27 + 0x20;
        local_128.CurrentBitIndex = uVar28;
        local_128._padding_._0_4_ = iVar21;
        local_128.BaseBitIndex = iVar27;
        if ((int)(((int)(uVar28 - 1) >> 0x1f & 0x1fU) + (uVar28 - 1)) >> 5 < iVar21)
        goto LAB_145815854;
        local_128.UnvisitedBitMask = 0xffffffff;
        uVar23 = puVar2[iVar21];
      }
      local_128._padding_._4_4_ = -uVar23 & uVar23;
      uVar17 = (ulonglong)local_128._padding_._4_4_ * 2 + 1;
      lVar19 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_ec = (int)lVar19;
      local_128.CurrentBitIndex = local_ec + -1 + iVar27;
      if ((int)uVar28 < local_128.CurrentBitIndex) {
        local_128.CurrentBitIndex = uVar28;
      }
LAB_145815854:
    } while (local_128.CurrentBitIndex < (int)uVar28);
  }
  local_100 = CONCAT44(local_100._4_4_,1);
  iVar21 = (this->CachePrimitiveAsDynamic).NumBits;
  local_170 = 0;
  local_res20 = 0;
  local_16c = 0;
  if (iVar21 != 0) {
    FVar20 = (this->CachePrimitiveAsDynamic).AllocatorInstance.SecondaryData;
    if (FVar20 == (ForElementType<unsigned_int>)0x0) {
      FVar20 = (ForElementType<unsigned_int>)&this->CachePrimitiveAsDynamic;
    }
    uVar28 = *(uint *)FVar20;
    local_170 = 0;
    local_16c = 0;
    while (uVar28 == 0) {
      local_16c = local_16c + 0x20;
      lVar19 = (longlong)local_170;
      local_170 = local_170 + 1;
      if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < local_170) {
        return;
      }
      uVar28 = *(uint *)((uchar *)((longlong)FVar20 + 4) + lVar19 * 4);
    }
    local_100 = (ulonglong)(-uVar28 & uVar28);
    uVar17 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_e8 = (int)lVar19;
    local_res20 = local_16c + -1 + local_e8;
    if (iVar21 < (int)local_res20) {
      return;
    }
  }
  local_res10 = 0xffffffff;
  local_150 = (ForElementType<unsigned_int>)&this->CachePrimitiveAsDynamic;
  iVar27 = local_170;
  iVar15 = local_16c;
  if ((int)local_res20 < iVar21) {
    do {
      uVar28 = local_res20;
      uVar22 = ~local_res20;
      uVar23 = 0;
      if ((int)local_res20 < (this->LastPrimitiveInvalidatedFrame).ArrayNum) {
        uVar23 = uVar22 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar23 = *(uint *)((this->LastPrimitiveInvalidatedFrame).AllocatorInstance.Data +
                        (longlong)(int)uVar28 * 4);
      uVar14 = 0xffffffff;
      if (uVar23 <= local_168) {
        uVar14 = local_168 - uVar23;
      }
      if (local_108 < uVar14) {
        local_104.Index = uVar28;
        pFVar16 = FScene::GetPrimitiveSceneInfo(*(FScene **)&this->field_0x8,&local_104);
        local_f8 = pFVar16;
        if (pFVar16 == (FPrimitiveSceneInfo *)0x0) {
          uVar23 = 0;
          if ((int)uVar28 < (this->LastPrimitiveInvalidatedFrame).ArrayNum) {
            uVar23 = uVar22 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(undefined4 *)
           ((this->LastPrimitiveInvalidatedFrame).AllocatorInstance.Data + (longlong)(int)uVar28 * 4
           ) = 0xffffffff;
        }
        else {
          iStack_c8 = 0;
          local_b0 = 0;
          uStack_c4 = 1;
          local_c0 = &(this->CacheEntries).field_0x10;
          iVar21 = *(int *)&(this->CacheEntries).field_0x28;
          local_d0 = &this->CacheEntries;
          iStack_b4 = 0;
          if (iVar21 != 0) {
            puVar2 = *(uint **)&(this->CacheEntries).field_0x20;
            puVar25 = (uint *)local_c0;
            if (puVar2 != (uint *)0x0) {
              puVar25 = puVar2;
            }
            uVar28 = *puVar25;
            while (uVar28 == 0) {
              lVar19 = (longlong)iStack_c8;
              local_b0 = local_b0 + 0x20;
              iStack_c8 = iStack_c8 + 1;
              iStack_b4 = iVar21;
              if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8)
              goto LAB_145815a7f;
              uVar28 = puVar25[lVar19 + 1];
            }
            uStack_c4 = -uVar28 & uVar28;
            uVar17 = (ulonglong)uStack_c4 * 2 + 1;
            lVar19 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            local_e4 = (int)lVar19;
            iStack_b4 = local_b0 + -1 + local_e4;
            if (iVar21 < iStack_b4) {
              iStack_b4 = iVar21;
            }
          }
LAB_145815a7f:
          uStack_ac = local_54;
          iStack_a8 = *(int *)&(this->CacheEntries).field_0x8 -
                      *(int *)&(this->CacheEntries).field_0x34;
          uVar23 = *(uint *)&(this->CacheEntries).field_0x28;
          pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->CacheEntries).field_0x10;
          TStack_98._padding_ = CONCAT44(uStack_c4,iStack_c8);
          uStack_b8 = 0xffffffff;
          TStack_98.CurrentBitIndex = iStack_b4;
          TStack_98.UnvisitedBitMask = 0xffffffff;
          uVar28 = uVar23 & 0xffffffe0;
          iVar27 = (int)uVar23 >> 5;
          TStack_98._28_4_ = local_54;
          TStack_98.BaseBitIndex = local_b0;
          uStack_78 = CONCAT44(uStack_a4,iStack_a8);
          local_174 = uVar23;
          local_d8 = pTVar26;
          local_a0 = local_d0;
          TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c0;
          if ((((int)uVar23 < 0) || (iVar21 < (int)uVar23)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar22 = *(uint *)&(this->CacheEntries).field_0x28;
          if (uVar23 != uVar22) {
            puVar3 = *(undefined1 **)&(this->CacheEntries).field_0x20;
            puVar24 = (undefined1 *)pTVar26;
            if (puVar3 != (undefined1 *)0x0) {
              puVar24 = puVar3;
            }
            uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar27 * 4);
            while (uVar23 == 0) {
              lVar19 = (longlong)iVar27;
              uVar28 = uVar28 + 0x20;
              iVar27 = iVar27 + 1;
              uVar23 = uVar22;
              local_174 = uVar22;
              if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
              goto LAB_145815bc0;
              uVar23 = *(uint *)(puVar24 + lVar19 * 4 + 4);
            }
            uVar17 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
            lVar19 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            local_e0 = (int)lVar19;
            uVar23 = local_e0 + -1 + uVar28;
            local_174 = uVar23;
            if ((int)uVar22 < (int)uVar23) {
              uVar23 = uVar22;
              local_174 = uVar22;
            }
          }
LAB_145815bc0:
          while( true ) {
            pTVar12 = local_a0;
            if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
              local_res18[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
            }
            if (((TStack_98.CurrentBitIndex == uVar23) && (TStack_98.Array == pTVar26)) &&
               (iVar27 = local_170, uVar28 = local_res20, iVar15 = local_16c,
               pTVar12 == &this->CacheEntries)) break;
            lVar4 = *(longlong *)pTVar12;
            lVar19 = lVar4 + (longlong)TStack_98.CurrentBitIndex * 0x28;
            if ((*(longlong *)(lVar4 + 0x10 + (longlong)TStack_98.CurrentBitIndex * 0x28) == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar21 = *(int *)(*(longlong *)(lVar19 + 0x10) + 0xc);
            if ((iVar21 < 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("VirtualShadowMapId >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapCacheManager.cpp"
                                    ,0x73e,L""), bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if ((*(longlong *)(lVar19 + 0x10) == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar28 = *(uint *)(*(longlong *)(lVar19 + 0x10) + 0x40);
            uVar17 = (ulonglong)uVar28;
            if (0 < (int)uVar28) {
              do {
                local_158 = uVar17;
                if ((iVar21 < 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("VirtualShadowMapId >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapCacheManager.cpp"
                                        ,0x1b0,L""), bVar13)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar28 = pFVar16->NumInstanceSceneDataEntries;
                uVar23 = 0;
                iVar27 = pFVar16->InstanceSceneDataOffset;
                if (uVar28 != 0) {
                  do {
                    uVar22 = (param_1->Instances).CurrentBatchPrefixSum;
                    uVar14 = 0x40 - uVar22;
                    if (uVar14 == 0) {
LAB_145815e1e:
                      pFVar5 = (param_1->Instances).Data.Reference;
                      local_178.FirstItem_NumItems =
                           (param_1->Instances).CurrentBatchNumItems & 0x7f |
                           (param_1->Instances).CurrentBatchFirstItem << 7;
                      pFVar7 = (pFVar5->Batches).AllocatorInstance.Data;
                      if (((pFVar7 <= &local_178) &&
                          (&local_178 < pFVar7 + (pFVar5->Batches).ArrayMax)) &&
                         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar13)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      iVar15 = (pFVar5->Batches).ArrayNum;
                      piVar1 = &(pFVar5->Batches).ArrayMax;
                      if (iVar15 == *piVar1) {
                        iVar15 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingLoadBalancerBase::FPackedBatch>_>
                                           (0x404,&(pFVar5->Batches).AllocatorInstance,piVar1);
                      }
                      (pFVar5->Batches).ArrayNum = iVar15 + 1;
                      (pFVar5->Batches).AllocatorInstance.Data[iVar15].FirstItem_NumItems =
                           local_178.FirstItem_NumItems;
                      (param_1->Instances).CurrentBatchFirstItem =
                           (((param_1->Instances).Data.Reference)->Items).ArrayNum;
                      (param_1->Instances).CurrentBatchPrefixSum = 0;
                      (param_1->Instances).CurrentBatchNumItems = 0;
                      (param_1->Instances).CurrentBatchPackedPrefixSum = 0;
                    }
                    else {
                      pFVar5 = (param_1->Instances).Data.Reference;
                      uVar9 = uVar28 - uVar23;
                      if (uVar14 < uVar28 - uVar23) {
                        uVar9 = uVar14;
                      }
                      local_164.InstanceDataOffset_NumInstances =
                           (uVar23 + iVar27) * 0x80 | uVar9 & 0x7f;
                      local_164.Payload_BatchPrefixOffset = iVar21 << 0xe | uVar22 & 0x3f | 0x40;
                      pFVar6 = (pFVar5->Items).AllocatorInstance.Data;
                      if (((pFVar6 <= &local_164) &&
                          (&local_164 < pFVar6 + (pFVar5->Items).ArrayMax)) &&
                         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar13)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      iVar15 = (pFVar5->Items).ArrayNum;
                      piVar1 = &(pFVar5->Items).ArrayMax;
                      if (iVar15 == *piVar1) {
                        iVar15 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingLoadBalancerBase::FPackedItem>_>
                                           (0x408,&(pFVar5->Items).AllocatorInstance,piVar1);
                      }
                      (pFVar5->Items).ArrayNum = iVar15 + 1;
                      FVar10.Payload_BatchPrefixOffset = local_164.Payload_BatchPrefixOffset;
                      FVar10.InstanceDataOffset_NumInstances =
                           local_164.InstanceDataOffset_NumInstances;
                      (pFVar5->Items).AllocatorInstance.Data[iVar15] = FVar10;
                      uVar22 = (param_1->Instances).CurrentBatchNumItems;
                      uVar14 = uVar22 * 6;
                      if (uVar14 < 0x20) {
                        puVar2 = &(param_1->Instances).CurrentBatchPackedPrefixSum;
                        *puVar2 = *puVar2 | (param_1->Instances).CurrentBatchPackedPrefixSum <<
                                            ((byte)uVar14 & 0x1f);
                      }
                      puVar2 = &(param_1->Instances).CurrentBatchPrefixSum;
                      *puVar2 = *puVar2 + uVar9;
                      uVar23 = uVar23 + uVar9;
                      (param_1->Instances).CurrentBatchNumItems = uVar22 + 1;
                      if (0x3f < (param_1->Instances).CurrentBatchPrefixSum) goto LAB_145815e1e;
                    }
                  } while (uVar23 < uVar28);
                }
                puVar2 = &(param_1->Instances).TotalInstances;
                *puVar2 = *puVar2 + uVar23;
                iVar21 = iVar21 + 1;
                uVar17 = local_158 - 1;
                pFVar16 = local_f8;
              } while (uVar17 != 0);
              local_158 = 0;
              uVar23 = local_174;
            }
            TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
            pTVar26 = local_d8;
          }
        }
        FVar20 = local_150;
        if ((((int)uVar28 < 0) || (*(int *)((longlong)local_150 + 0x18) <= (int)uVar28)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar18 = *(ForElementType<unsigned_int> *)((longlong)FVar20 + 0x10);
        if (FVar18 != (ForElementType<unsigned_int>)0x0) {
          FVar20 = FVar18;
        }
        uVar23 = uVar28;
        if ((int)uVar28 < 0) {
          uVar23 = uVar28 + 0x1f;
        }
        puVar2 = (uint *)((longlong)FVar20 + (longlong)((int)uVar23 >> 5) * 4);
        *puVar2 = *puVar2 & ~(1 << ((byte)uVar28 & 0x1f));
      }
      FVar20 = (this->CachePrimitiveAsDynamic).AllocatorInstance.SecondaryData;
      uVar28 = (this->CachePrimitiveAsDynamic).NumBits;
      local_res10 = ~(uint)local_100 & local_res10;
      FVar18 = (ForElementType<unsigned_int>)&this->CachePrimitiveAsDynamic;
      if (FVar20 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = FVar20;
      }
      uVar23 = local_res10 & *(uint *)((longlong)FVar18 + (longlong)iVar27 * 4);
      while (uVar23 == 0) {
        iVar15 = iVar15 + 0x20;
        lVar19 = (longlong)iVar27;
        iVar27 = iVar27 + 1;
        local_res20 = uVar28;
        local_170 = iVar27;
        local_16c = iVar15;
        if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
        goto LAB_1458160cb;
        uVar23 = *(uint *)((longlong)FVar18 + 4 + lVar19 * 4);
        local_res10 = 0xffffffff;
      }
      local_100 = CONCAT44(local_100._4_4_,-uVar23 & uVar23);
      uVar17 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_dc = (int)lVar19;
      local_res20 = iVar15 + -1 + local_dc;
      if ((int)uVar28 < (int)local_res20) {
        local_res20 = uVar28;
      }
LAB_1458160cb:
    } while ((int)local_res20 < (this->CachePrimitiveAsDynamic).NumBits);
  }
  return;
}

// UpdateUnreferencedCacheEntries @ 145818400

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArrayCacheManager::UpdateUnreferencedCacheEntries
          (FVirtualShadowMapArrayCacheManager *this,FVirtualShadowMapArray *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  void *_Dst;
  FNextVirtualShadowMapData *pFVar15;
  TReferenceControllerBase<1> *pTVar16;
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  uint uStack_9c;
  longlong local_98;
  TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
  *pTStack_90;
  TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
  *local_88;
  char local_80;
  char cStack_7f;
  TReferenceControllerBase<1> *local_78;
  undefined1 local_70 [32];
  longlong local_50;
  TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
  *pTStack_48;
  
  pTVar6 = CVarMaxLightAgeSinceLastRequest.Ref;
  if (param_1->bEnabled != false) {
    iVar12 = *(int *)(*(longlong *)&this->field_0x8 + 0x508c);
    bVar7 = IsInParallelRenderingThread();
    if ((!bVar7) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar2 = pTVar6->ShadowedValue[1];
    TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_70,
               (TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
                *)&this->CacheEntries);
    local_80 = '\0';
    cStack_7f = '\0';
    stack0xffffffffffffff58 = local_70._16_16_;
    auStack_b0._0_8_ = local_70._8_8_;
    local_98 = local_50;
    pTStack_90 = pTStack_48;
    uVar11 = local_70._24_8_ >> 0x20;
    local_88 = (TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
                *)&this->CacheEntries;
    if (local_70._28_4_ < *(int *)(local_70._16_8_ + 0x18)) {
      do {
        pTVar16 = *(TReferenceControllerBase<1> **)
                   (*(longlong *)local_70._0_8_ + 0x18 + (longlong)(int)uVar11 * 0x28);
        piVar4 = *(int **)(*(longlong *)local_70._0_8_ + 0x10 + (longlong)(int)uVar11 * 0x28);
        if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_78 = pTVar16;
        if ((piVar4 == (int *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(char *)((longlong)piVar4 + 0x13) == '\0') {
          if (iVar12 - piVar4[5] <= iVar2) {
            iVar3 = piVar4[0x10];
            bVar7 = *(bool *)((longlong)piVar4 + 0x11);
            if ((param_1->bEnabled == false) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsEnabled()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                                   ,0x402,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            param_1->NumUnreferencedShadowMaps = param_1->NumUnreferencedShadowMaps + iVar3;
            iVar9 = FVirtualShadowMapArray::AllocateShadowMapSlots(param_1,bVar7,iVar3);
            uVar14 = 0;
            piVar4[2] = piVar4[3];
            piVar4[3] = iVar9;
            if (0 < iVar3) {
              lVar13 = 0;
              do {
                uVar10 = 0;
                if ((int)uVar14 < piVar4[0x10]) {
                  uVar10 = ~uVar14 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                _Dst = (void *)(*(longlong *)(piVar4 + 0xe) + lVar13);
                *(undefined4 *)((longlong)_Dst + 0x890) = *(undefined4 *)((longlong)_Dst + 0x1130);
                *(undefined8 *)((longlong)_Dst + 0x880) = *(undefined8 *)((longlong)_Dst + 0x1120);
                *(undefined8 *)((longlong)_Dst + 0x888) = *(undefined8 *)((longlong)_Dst + 0x1128);
                if (*(char *)((longlong)_Dst + 0x1134) != '\0') {
                  memcpy(_Dst,(void *)((longlong)_Dst + 0x8a0),0x880);
                }
                iVar9 = *piVar4;
                if (-1 < iVar9) {
                  *(undefined8 *)((longlong)_Dst + 0x1148) = 0;
                }
                *(uint *)((longlong)_Dst + 0x1140) = (uint)(-1 < iVar9);
                uVar10 = 0;
                if ((int)uVar14 < piVar4[0x10]) {
                  uVar10 = ~uVar14 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uVar14 = uVar14 + 1;
                puVar1 = (uint *)(lVar13 + 0x1260 + *(longlong *)(piVar4 + 0xe));
                *puVar1 = *puVar1 | 4;
                lVar13 = lVar13 + 0x12b0;
                pTVar16 = local_78;
              } while ((int)uVar14 < iVar3);
            }
            goto LAB_14581875b;
          }
          TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_90,uStack_9c);
          local_80 = '\x01';
        }
        else {
          if ((param_1->NumShadowMapSlots < piVar4[0x10] + piVar4[3]) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(CacheEntry->GetVirtualShadowMapId() + CacheEntry->ShadowMapEntries.Num()) <= VirtualShadowMapArray.GetNumShadowMapSlots()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapCacheManager.cpp"
                                 ,0x56a,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
LAB_14581875b:
          iVar3 = piVar4[2];
          if (-1 < iVar3) {
            lVar13 = 0;
            for (uVar14 = 0; (int)uVar14 < piVar4[0x10]; uVar14 = uVar14 + 1) {
              uVar10 = 0;
              if ((int)uVar14 < piVar4[0x10]) {
                uVar10 = ~uVar14 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar15 = (FNextVirtualShadowMapData *)(*(longlong *)(piVar4 + 0xe) + 0x1140 + lVar13)
              ;
              pFVar15->NextVirtualShadowMapId = piVar4[3] + uVar14;
              FVirtualShadowMapArray::UpdateNextData(param_1,uVar14 + iVar3,pFVar15);
              lVar13 = lVar13 + 0x12b0;
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16)
        ;
        uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
        uVar11 = (ulonglong)uStack_9c;
      } while ((int)uStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
      if ((local_80 != '\0') && (cStack_7f != '\0')) {
        iVar12 = 1;
        uVar14 = *(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34;
        if (3 < uVar14) {
          uVar11 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar12 = 1 << ((byte)lVar13 & 0x1f);
        }
        if (((0 < (int)uVar14) && (local_88->HashSize < iVar12)) || (iVar12 < local_88->HashSize)) {
          local_88->HashSize = iVar12;
          TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
          ::Rehash(local_88);
        }
      }
    }
  }
  return;
}

// UploadCachePrimitiveAsDynamic @ 145818d20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
FVirtualShadowMapArrayCacheManager::UploadCachePrimitiveAsDynamic
          (FVirtualShadowMapArrayCacheManager *this,FRDGBuilder *param_1)

{
  int iVar1;
  int iVar2;
  FRDGBuffer *pFVar3;
  uint uVar4;
  ForElementType<unsigned_int> FVar5;
  
  iVar2 = (this->CachePrimitiveAsDynamic).NumBits;
  FVar5 = (this->CachePrimitiveAsDynamic).AllocatorInstance.SecondaryData;
  iVar1 = iVar2 + 0x1f;
  iVar2 = iVar2 + 7;
  uVar4 = (int)((iVar1 >> 0x1f & 0x1fU) + iVar1) >> 5;
  if (FVar5 == (ForElementType<unsigned_int>)0x0) {
    FVar5 = (ForElementType<unsigned_int>)&this->CachePrimitiveAsDynamic;
  }
  if ((int)uVar4 < 1) {
    uVar4 = 1;
  }
  pFVar3 = CreateStructuredBuffer
                     (param_1,L"CachePrimitiveAsDynamic",4,uVar4,(void *)FVar5,
                      (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3),None);
  return pFVar3;
}

