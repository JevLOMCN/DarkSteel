// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 32

// Call @ 145ae0da0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanChunkedPipelineCacheManagerImpl::LoadAllCaches'::__l2::<lambda_1>,void,FVulkanCombinedChunkCacheFile::FPSOArchiveReader_&>
::Call(void *param_1,FPSOArchiveReader *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FVulkanPipelineCacheChunk *pFVar6;
  ulonglong uVar7;
  longlong lVar8;
  FVulkanPipelineCacheChunk *pFVar9;
  LPCRITICAL_SECTION lpCriticalSection;
  ForAnyElementType FVar10;
  undefined1 auStackX_8 [16];
  uint auStackX_18 [4];
  undefined1 auStack_78 [8];
  FVulkanPipelineCacheChunk *pFStack_70;
  undefined8 uStack_68;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> TStack_60;
  uint *puStack_50;
  FVulkanPipelineCacheChunk **ppFStack_48;
  undefined8 *puStack_40;
  uint *puStack_38;
  
  pFVar6 = ::operator_new(0x100,0x40);
  pFVar9 = (FVulkanPipelineCacheChunk *)0x0;
  pFStack_70 = pFVar9;
  if (pFVar6 != (FVulkanPipelineCacheChunk *)0x0) {
    pFVar6->LRUNode = (TDoubleLinkedListNode *)0x0;
    pFVar6->OffsetWithinFile = 0;
    (pFVar6->PipelineCacheObjLock).Mutex.Mutex.Ptr = (void *)0x0;
    (pFVar6->CacheStateLock).Mutex.Mutex.Ptr = (void *)0x0;
    pFVar6->PipelineCacheObj = (VkPipelineCache_T *)0x0;
    *(undefined8 *)&pFVar6->PSOsToBeFlushed2 = 0;
    *(undefined8 *)&pFVar6->PSOsToBeFlushed2 = 0;
    pFVar6->PSOsNotFlushed = 0;
    pFVar6->CacheSize = 0;
    pFVar6->LastSaveSize = 0;
    pFVar6->TotalNumPSOs = (TAtomic<int>)0x0;
    pFVar6->TotalNumUniquePSOs = (TAtomic<int>)0x0;
    (pFVar6->BinaryCacheFileInfo).Filename.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar6->BinaryCacheFileInfo).Filename.Data.ArrayNum = 0;
    (pFVar6->BinaryCacheFileInfo).Filename.Data.ArrayMax = 0;
    (pFVar6->BinaryCacheFileInfo).RawDataOffset = 0xffffffff;
    pFVar6->LastUsedFrame = (atomic<unsigned___int64>)0x0;
    pFVar6->PendingAddToCompiles = (atomic<unsigned___int64>)0x0;
    pFVar6->CacheState = Initialized;
    pFStack_70 = pFVar6;
  }
  TStack_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_60.ArrayNum = 0;
  TStack_60.ArrayMax = 0;
  FVulkanPipelineCacheChunk::Load(pFStack_70,param_2,&TStack_60,LoadAsEvicted);
  auStackX_18[0] = *(int *)(*(longlong *)param_1 + 8) + 1;
  *(uint *)(*(longlong *)param_1 + 8) = auStackX_18[0];
  lVar2 = *(longlong *)param_1;
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar8 = *(longlong *)(lVar2 + 0x50);
    if (*(longlong *)(lVar2 + 0x50) == 0) {
      lVar8 = lVar2 + 0x48;
    }
    iVar5 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar2 + 0x58) - 1U & auStackX_18[0]) * 4);
    if (iVar5 != -1) {
      do {
        if (*(uint *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar5 * 0x18) == auStackX_18[0]) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!CacheChunksMap.Contains(NewChunkKey)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                             ,0x413,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        iVar5 = *(int *)(*(longlong *)(lVar2 + 0x10) + 0x10 + (longlong)iVar5 * 0x18);
      } while (iVar5 != -1);
    }
  }
  pFVar6 = ::operator_new(0x18);
  if (pFVar6 != (FVulkanPipelineCacheChunk *)0x0) {
    *(uint *)&pFVar6->LRUNode = auStackX_18[0];
    *(TDoubleLinkedListNode **)&pFVar6->OffsetWithinFile = (TDoubleLinkedListNode *)0x0;
    (pFVar6->PipelineCacheObjLock).Mutex.Mutex.Ptr = (TDoubleLinkedListNode *)0x0;
    pFVar9 = pFVar6;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)param_1 + 0xb8);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  lVar2 = *(longlong *)param_1;
  if (pFVar9 != (FVulkanPipelineCacheChunk *)0x0) {
    if (*(TDoubleLinkedListNode **)(lVar2 + 0xe8) == (TDoubleLinkedListNode *)0x0) {
      *(FVulkanPipelineCacheChunk **)(lVar2 + 0xf0) = pFVar9;
    }
    else {
      *(TDoubleLinkedListNode **)&pFVar9->OffsetWithinFile =
           *(TDoubleLinkedListNode **)(lVar2 + 0xe8);
      *(FVulkanPipelineCacheChunk **)(*(longlong *)(lVar2 + 0xe8) + 0x10) = pFVar9;
    }
    *(FVulkanPipelineCacheChunk **)(lVar2 + 0xe8) = pFVar9;
    (**(code **)(*(longlong *)(lVar2 + 0xe0) + 8))
              ((longlong *)(lVar2 + 0xe0),*(int *)(lVar2 + 0xf8) + 1);
  }
  pFStack_70->LRUNode = (TDoubleLinkedListNode *)pFVar9;
  LeaveCriticalSection(lpCriticalSection);
  puStack_50 = auStackX_18;
  ppFStack_48 = &pFStack_70;
  TSet<TTuple<unsigned_int,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_&,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>_&&>_>
            ((TSet<TTuple<unsigned_int,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>,0>,FDefaultSetAllocator>
              *)(*(longlong *)param_1 + 0x10),
             (TPairInitializer<unsigned_int_&,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>_&&>
              *)(auStackX_18 + 2),(bool *)&puStack_50);
  iVar5 = TStack_60.ArrayNum;
  uVar7 = (ulonglong)TStack_60.ArrayNum;
  pFVar1 = TStack_60.AllocatorInstance.Data + uVar7 * 8;
  FVar10.Data = TStack_60.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar7 != iVar5) {
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_8);
    }
    if (FVar10.Data == pFVar1) break;
    uStack_68 = *(undefined8 *)FVar10.Data;
    puStack_40 = &uStack_68;
    puStack_38 = auStackX_18;
    TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                *)(*(longlong *)param_1 + 0x68),
               (TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> *)auStack_78,
               (bool *)&puStack_40);
    uVar7 = TStack_60._8_8_ & 0xffffffff;
    FVar10.Data = FVar10.Data + 8;
  }
  if (TStack_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_60.AllocatorInstance.Data);
  }
  TDefaultDelete<FVulkanPipelineCacheChunk>::operator()
            ((TDefaultDelete<FVulkanPipelineCacheChunk> *)&pFStack_70,pFStack_70);
  return;
}

// Call @ 145ae0db0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanDynamicRHI::RHICreateBufferInitializer'::__l14::<lambda_1>,TRefCountPtr<FRHIBuffer>,FRHICommandListBase_&>
::Call(void *param_1,FRHICommandListBase *param_2)

{
  `FVulkanDynamicRHI::RHICreateBufferInitializer'::__l14::<lambda_1>::operator()(param_2,param_1);
  return (TRefCountPtr<FRHIBuffer>)param_1;
}

// Call @ 145ae0de0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanDynamicRHI::RHICreateBufferInitializer'::__l38::<lambda_2>,TRefCountPtr<FRHIBuffer>,FRHICommandListBase_&>
::Call(void *param_1,FRHICommandListBase *param_2)

{
  FRHICommandListBase *in_R8;
  
  if (*(char *)&(param_2->MemManager).End != '\0') {
    FVulkanBuffer::Unlock((FVulkanBuffer *)(param_2->MemManager).Top,in_R8);
  }
  *(uchar **)param_1 = (param_2->MemManager).Top;
  (param_2->MemManager).Top = (uchar *)0x0;
  return (TRefCountPtr<FRHIBuffer>)param_1;
}

// Call @ 145b0faa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FOptionalVulkanDeviceExtensions_&),void,FOptionalVulkanDeviceExtensions_&>
::Call(void *param_1,FOptionalVulkanDeviceExtensions *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145b0faa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2);
  return;
}

// Call @ 145b0fab0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`VulkanRHI::FDeferredDeletionQueue2::ReleaseResources'::__l21::<lambda_1>,void>::
Call(void *param_1)

{
  VulkanRHI::FDeferredDeletionQueue2::ReleaseResourcesImmediately
            ((FDeferredDeletionQueue2 *)(*(longlong *)param_1 + 0x5c0),
             (TArray<VulkanRHI::FDeferredDeletionQueue2::FEntry,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 + 8));
  return;
}

// Call @ 145b0fad0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanDevice::InitGPU'::__l67::<lambda_1>,void,FVulkanQueue_&>::Call
          (void *param_1,FVulkanQueue *param_2)

{
  FVulkanQueue::InitDiagnosticBuffer(param_2);
  return;
}

// Call @ 145b5b350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkShaderStageFlagBits": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkRayTracingShaderGroupTypeKHR": Some values do not have unique names */
/* WARNING: Enum "VkDynamicState": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanRayTracingPipelineLibraryCache::GetOrAddLibrary'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  int iVar1;
  FVulkanRayTracingShader *pFVar2;
  undefined8 uVar3;
  VkResult VVar4;
  TRefCountPtr<FVulkanShaderModule> TVar5;
  int *piVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_1b8 [32];
  undefined4 uStack_198;
  undefined8 *puStack_188;
  VkRayTracingShaderGroupCreateInfoKHR VStack_180;
  VkRayTracingPipelineInterfaceCreateInfoKHR VStack_150;
  VkRayTracingPipelineCreateInfoKHR VStack_138;
  VkPipelineShaderStageCreateInfo VStack_c8;
  VkStructureType VStack_98;
  undefined8 auStack_94 [2];
  VkShaderStageFlagBits VStack_84;
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 auStack_6c [13];
  char acStack_38 [24];
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  uStack_198 = *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x10) + 0x1ac);
  TCString<char>::SnprintfImpl(acStack_38,0x18,"main_%0.8x_%0.8x");
  VStack_c8.pName._4_4_ = 0;
  VStack_c8.pSpecializationInfo._0_4_ = 0;
  VStack_c8.pSpecializationInfo._4_4_ = 0;
  VStack_c8.stage = 0;
  VStack_c8.pName._0_4_ = 0;
  VStack_c8.module._0_4_ = (undefined4)*(undefined8 *)((longlong)param_1 + 0x20);
  VStack_c8.module._4_4_ =
       (undefined4)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x20) >> 0x20);
  VStack_c8.sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
  VStack_c8._4_8_ = 0;
  VStack_c8._12_8_ = 0;
  VStack_c8.stage =
       UEFrequencyToVKStageBit
                 (*(EShaderFrequency *)(*(longlong *)((longlong)param_1 + 0x10) + 0x104));
  pFVar2 = *(FVulkanRayTracingShader **)((longlong)param_1 + 0x10);
  lVar8 = 1;
  VStack_c8.pName = acStack_38;
  VStack_180.sType = VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR;
  VStack_180._36_8_ = 0;
  VStack_180.pShaderGroupCaptureReplayHandle._4_4_ = 0;
  VStack_180._4_8_ = 0;
  VStack_180.pNext._4_4_ = 0;
  VStack_180.anyHitShader = 0;
  VStack_180.intersectionShader = 0;
  if (*(char *)((longlong)&pFVar2->_padding_ + 4) == '\b') {
    VStack_180.type = VK_RAY_TRACING_SHADER_GROUP_TYPE_TRIANGLES_HIT_GROUP_KHR;
    VStack_180.generalShader = 0xffffffff;
    VStack_180.closestHitShader = 0;
    if (*(char *)((longlong)&pFVar2->_padding_ + 1) == '\0') {
      VStack_180.anyHitShader = 0xffffffff;
    }
    else {
      VStack_98 = 0x12;
      uStack_74 = 0;
      uStack_70 = 0;
      auStack_94[0] = 0;
      auStack_94[1] = 0;
      auStack_6c[0] = 0;
      VStack_84 = 0;
      auStack_80._0_4_ = 0;
      auStack_80._4_4_ = 0;
      uStack_78 = 0;
      TVar5 = FVulkanRayTracingShader::GetOrCreateHandle(pFVar2,(uint)&puStack_188);
      uVar3 = *(undefined8 *)((TVar5.Reference)->_padding_ + 0x10);
      auStack_80._0_4_ = (undefined4)uVar3;
      auStack_80._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      if (puStack_188 != (undefined8 *)0x0) {
        piVar6 = (int *)(puStack_188 + 1);
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (((iVar1 == 1) && (piVar6 != (int *)0x0)) && (puStack_188 != (undefined8 *)0x0)) {
          (**(code **)*puStack_188)(puStack_188,1);
        }
      }
      VStack_180.anyHitShader = 1;
      lVar8 = 2;
      VStack_84 = 0x200;
      uStack_78 = 0x510ca7a0;
      uStack_74 = 1;
    }
    uVar7 = (uint)lVar8;
    pFVar2 = *(FVulkanRayTracingShader **)((longlong)param_1 + 0x10);
    if (*(char *)((longlong)&pFVar2->_padding_ + 2) == '\0') {
      VStack_180.intersectionShader = 0xffffffff;
      VStack_138.stageCount = uVar7;
    }
    else {
      (&VStack_c8)[lVar8].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
      *(undefined8 *)&(&VStack_c8)[lVar8].field_0x4 = 0;
      *(undefined8 *)((longlong)&(&VStack_c8)[lVar8].pNext + 4) = 0;
      *(undefined8 *)&(&VStack_c8)[lVar8].stage = 0;
      *(undefined8 *)((longlong)&(&VStack_c8)[lVar8].module + 4) = 0;
      *(undefined8 *)((longlong)&(&VStack_c8)[lVar8].pName + 4) = 0;
      *(undefined4 *)((longlong)&(&VStack_c8)[lVar8].pSpecializationInfo + 4) = 0;
      TVar5 = FVulkanRayTracingShader::GetOrCreateHandle(pFVar2,(uint)&puStack_188);
      (&VStack_c8)[lVar8].module = *(VkShaderModule_T **)((TVar5.Reference)->_padding_ + 0x10);
      if (puStack_188 != (undefined8 *)0x0) {
        piVar6 = (int *)(puStack_188 + 1);
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (((iVar1 == 1) && (piVar6 != (int *)0x0)) && (puStack_188 != (undefined8 *)0x0)) {
          (**(code **)*puStack_188)(puStack_188,1);
        }
      }
      (&VStack_c8)[lVar8].stage = VK_SHADER_STAGE_INTERSECTION_BIT_KHR;
      (&VStack_c8)[lVar8].pName = "main_00000000_00000000";
      VStack_180.type = VK_RAY_TRACING_SHADER_GROUP_TYPE_PROCEDURAL_HIT_GROUP_KHR;
      VStack_138.stageCount = uVar7 + 1;
      VStack_180.intersectionShader = uVar7;
    }
  }
  else {
    VStack_180.type = VK_RAY_TRACING_SHADER_GROUP_TYPE_GENERAL_KHR;
    VStack_180.generalShader = 0;
    VStack_180.closestHitShader = 0xffffffff;
    VStack_180.anyHitShader = 0xffffffff;
    VStack_180.intersectionShader = 0xffffffff;
    VStack_138.stageCount = 1;
  }
  VStack_150.maxPipelineRayHitAttributeSize = *(uint *)((longlong)param_1 + 0x28);
  VStack_150.sType = VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR;
  VStack_138.pDynamicState._0_4_ = 0;
  VStack_138.pDynamicState._4_4_ = 0;
  VStack_138.sType = VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_KHR;
  VStack_138._36_4_ = 0;
  VStack_150._4_8_ = 0;
  VStack_150._12_8_ = (ulonglong)*(uint *)((longlong)param_1 + 0x2c) << 0x20;
  VStack_138._100_4_ = 0;
  VStack_138.pLibraryInterface = &VStack_150;
  VStack_138._52_8_ = 0;
  VStack_138.pLibraryInfo._4_4_ = 0;
  VStack_138.pStages = &VStack_c8;
  VStack_138.pGroups = &VStack_180;
  VStack_138._4_8_ = 0;
  VStack_138.basePipelineHandle._0_4_ = 0;
  VStack_138._92_8_ = 0;
  VStack_138.groupCount = 1;
  VStack_138.maxPipelineRayRecursionDepth = 1;
  uVar3 = *(undefined8 *)(*(longlong *)(**(longlong **)param_1 + 0x728) + 0x3d0);
  VStack_138.layout._0_4_ = (undefined4)uVar3;
  VStack_138.layout._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  VStack_138._12_8_ = 0x2000080000000000;
  VVar4 = FVulkanPipelineStateCacheManager::CreateRayTracingPipeline
                    (*(FVulkanPipelineStateCacheManager **)(**(longlong **)param_1 + 0x2738),
                     &VStack_138,*(bool *)((longlong)param_1 + 0x30),
                     *(VkPipeline_T ***)((longlong)param_1 + 8));
  if ((*(char *)((longlong)param_1 + 0x30) == '\0') && ((int)VVar4 < 0)) {
    VulkanRHI::VerifyVulkanResult
              (VVar4,"Result",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
               ,0x5c6);
  }
  return;
}

// Call @ 145b5b360

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "VkShaderStageFlagBits": Some values do not have unique names */
/* WARNING: Enum "VkDynamicState": Some values do not have unique names */

VkResult __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanPipelineStateCacheManager::CreateVKPipeline'::__l5::<lambda_1>,enum_VkResult,FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&>
::Call(void *param_1,FPSOCreateFuncParams<FVulkanGraphicsPipelineState> *param_2)

{
  EPSOOperation EVar1;
  undefined8 *puVar2;
  FPlatformRWLock *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  VkResult VVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:___cdecl__private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::<lambda_1>::operator()(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)const_::_2_::FStat_STAT_Vulkan_vkCreateGraphicsPipeline>
  FVar14;
  FThreadSafeStaticStat<_public:___cdecl__private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::<lambda_1>::operator()(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)const_::_22_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_TestCreate>
  FVar15;
  FThreadSafeStaticStat<_public:___cdecl__private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::<lambda_1>::operator()(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)const_::_27_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_vkCreate>
  FVar16;
  FThreadStats *pFVar17;
  FThreadStatsPool *pFVar18;
  FColor_u_0 FVar19;
  FName FVar20;
  FName FVar21;
  int *piVar22;
  FNameEntryId FVar23;
  FColor_u_0 FStackX_18;
  uint uStackX_1c;
  FColor_u_0 aFStackX_20 [2];
  FColor_u_0 aFStack_1a8 [2];
  FName FStack_1a0;
  FName FStack_190;
  FName FStack_180;
  FName FStack_170;
  FColor_u_0 FStack_168;
  uint uStack_164;
  FColor_u_0 FStack_160;
  uint uStack_15c;
  VkPipeline_T **ppVStack_158;
  LARGE_INTEGER LStack_150;
  LARGE_INTEGER LStack_148;
  LARGE_INTEGER LStack_140;
  FStatMessage FStack_138;
  FStatMessage FStack_128;
  FStatMessage FStack_118;
  FName FStack_108;
  FName FStack_100;
  FName FStack_f8;
  FName FStack_f0;
  FName FStack_e8;
  FName FStack_e0;
  VkGraphicsPipelineCreateInfo VStack_d8;
  
  EVar1 = param_2->PSOOperation;
  ppVStack_158 = &param_2->PSO->VulkanPipeline;
  if ((*ppVStack_158 != (VkPipeline_T *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("PSO->VulkanPipeline == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                          ,0x780,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    VVar11 = (*pcVar4)();
    return VVar11;
  }
  if (EVar1 != CreateAndStorePSO) {
    if (EVar1 == CreateIfPresent) {
      if ((*(ulonglong *)(*(longlong *)(*(longlong *)param_1 + 0x90) + 0x21e0) >> 0x34 & 1) == 0) {
        return VK_ERROR_PIPELINE_COMPILE_REQUIRED_EXT;
      }
      FVar23.Value = 0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        if (StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_TestCreate ==
            (FThreadSafeStaticStat<_public:___cdecl__private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::<lambda_1>::operator()(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)const_::_22_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_TestCreate>
             )0x0) {
          pFVar13 = ::FName::FName(&FStack_108,
                                   "STAT_Vulkan_RHICreateGraphicsPipelineState_TestCreate");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)
                     &StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_TestCreate,*pFVar13,
                     L"STAT_Vulkan_RHICreateGraphicsPipelineState_TestCreate","STATGROUP_Quick",
                     "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
        }
        _Init_thread_footer(&::_TSS0);
      }
      FVar15 = StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_TestCreate;
      if (StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_TestCreate ==
          (FThreadSafeStaticStat<_public:___cdecl__private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::<lambda_1>::operator()(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)const_::_22_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_TestCreate>
           )0x0) {
        pFVar13 = ::FName::FName(&FStack_100,"STAT_Vulkan_RHICreateGraphicsPipelineState_TestCreate"
                                );
        FVar15 = (FThreadSafeStaticStat<_public:___cdecl__private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::<lambda_1>::operator()(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)const_::_22_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_TestCreate>
                  )FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_TestCreate,
                              *pFVar13,L"STAT_Vulkan_RHICreateGraphicsPipelineState_TestCreate",
                              "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                              false,MCR_Invalid);
      }
      FVar20 = *(FName *)FVar15;
      bVar10 = false;
      bVar8 = false;
      FStack_1a0.ComparisonIndex.Value = 0;
      FStack_1a0.Number = 0;
      if ((FVar20.ComparisonIndex.Value.Value != 0) || (FVar20.Number != 0)) {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          FStackX_18.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&FStackX_18._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
          bVar10 = false;
          bVar8 = true;
          if (-1 < CpuChannel->Enabled) {
            FStack_170.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
            FStack_170.Number = FVar20.Number;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&FStack_170,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                       ,0x789);
            bVar10 = true;
            bVar8 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable != false) {
          FStack_1a0 = FVar20;
          FThreadStats::AddMessage(FVar20,CycleScopeStart);
          bVar5 = true;
          FVar23.Value = FStack_1a0.ComparisonIndex.Value;
          goto LAB_145b547e2;
        }
      }
      bVar5 = false;
      FVar20 = FStack_1a0;
LAB_145b547e2:
      pFVar3 = param_2->DestPipelineCacheLock;
      AcquireSRWLockShared((PSRWLOCK)pFVar3);
      puVar2 = *(undefined8 **)((longlong)param_1 + 8);
      VStack_d8._0_8_ = *puVar2;
      VStack_d8.pNext = (void *)puVar2[1];
      VStack_d8.stageCount = *(uint *)((longlong)puVar2 + 0x14);
      VStack_d8.pStages._0_4_ = *(undefined4 *)(puVar2 + 3);
      VStack_d8.pStages._4_4_ = *(undefined4 *)((longlong)puVar2 + 0x1c);
      VStack_d8.pVertexInputState = (VkPipelineVertexInputStateCreateInfo *)puVar2[4];
      VStack_d8.pInputAssemblyState = (VkPipelineInputAssemblyStateCreateInfo *)puVar2[5];
      VStack_d8.pTessellationState = (VkPipelineTessellationStateCreateInfo *)puVar2[6];
      VStack_d8.pViewportState = (VkPipelineViewportStateCreateInfo *)puVar2[7];
      VStack_d8.pRasterizationState = (VkPipelineRasterizationStateCreateInfo *)puVar2[8];
      VStack_d8.pMultisampleState = (VkPipelineMultisampleStateCreateInfo *)puVar2[9];
      VStack_d8.pDepthStencilState = (VkPipelineDepthStencilStateCreateInfo *)puVar2[10];
      VStack_d8.pColorBlendState = (VkPipelineColorBlendStateCreateInfo *)puVar2[0xb];
      VStack_d8.pDynamicState = (VkPipelineDynamicStateCreateInfo *)puVar2[0xc];
      VStack_d8.layout = (VkPipelineLayout_T *)puVar2[0xd];
      VStack_d8.renderPass._0_4_ = *(undefined4 *)(puVar2 + 0xe);
      VStack_d8.renderPass._4_4_ = *(undefined4 *)((longlong)puVar2 + 0x74);
      VStack_d8.subpass = *(uint *)(puVar2 + 0xf);
      VStack_d8._124_4_ = *(undefined4 *)((longlong)puVar2 + 0x7c);
      VStack_d8.basePipelineHandle._0_4_ = *(undefined4 *)(puVar2 + 0x10);
      VStack_d8.basePipelineHandle._4_4_ = *(undefined4 *)((longlong)puVar2 + 0x84);
      VStack_d8.basePipelineIndex = *(int *)(puVar2 + 0x11);
      VStack_d8._140_4_ = *(undefined4 *)((longlong)puVar2 + 0x8c);
      VStack_d8.flags = *(uint *)(puVar2 + 2) | 0x100;
      VVar11 = (*VulkanDynamicAPI::vkCreateGraphicsPipelines)
                         (*(VkDevice_T **)(*(longlong *)(*(longlong *)param_1 + 0x90) + 0x30),
                          param_2->DestPipelineCache,1,&VStack_d8,&VulkanRHI::GAllocationCallbacks,
                          ppVStack_158);
      ReleaseSRWLockShared((PSRWLOCK)pFVar3);
      if (bVar8) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar5) {
        return VVar11;
      }
      if (FVar20 == (FName)0x0) {
        return VVar11;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return VVar11;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return VVar11;
      }
      pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar17 == (FThreadStats *)0x0) {
        pFVar18 = FThreadStatsPool::Get();
        pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
      }
      if (pFVar17->ScopeCount <= pFVar17->bWaitForExplicitFlush) {
        return VVar11;
      }
      FStack_138.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      FStack_138.NameAndInfo.Index.Value = FVar23.Value;
      QueryPerformanceCounter(&LStack_150);
      FStack_138.StatData.Pad[4] = '\0';
      FStack_138.StatData.Pad[5] = '\0';
      FStack_138.StatData.Pad[6] = '\0';
      FStack_138.StatData.Pad[7] = '\0';
      FStack_138.StatData.Pad[0] = LStack_150.s.LowPart._0_1_;
      FStack_138.StatData.Pad[1] = LStack_150.s.LowPart._1_1_;
      FStack_138.StatData.Pad[2] = LStack_150.s.LowPart._2_1_;
      FStack_138.StatData.Pad[3] = LStack_150.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar17,&FStack_138);
      piVar22 = &pFVar17->ScopeCount;
      *piVar22 = *piVar22 + -1;
      if (*piVar22 == 0) {
        FThreadStats::Flush(pFVar17,false,false);
        return VVar11;
      }
      if (FThreadStats::bIsRawStatsActive == false) {
        return VVar11;
      }
      FThreadStats::FlushRawStats(pFVar17,false,false);
      return VVar11;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("PSOOperation == FVulkanChunkedPipelineCacheManager::EPSOOperation::CreateAndStorePSO || PSOOperation == FVulkanChunkedPipelineCacheManager::EPSOOperation::CreateIfPresent"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                        ,0x781,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      VVar11 = (*pcVar4)();
      return VVar11;
    }
  }
  piVar22 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  FVar23.Value = 0;
  if ((*piVar22 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    if (StatPtr_STAT_Vulkan_vkCreateGraphicsPipeline ==
        (FThreadSafeStaticStat<_public:___cdecl__private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::<lambda_1>::operator()(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)const_::_2_::FStat_STAT_Vulkan_vkCreateGraphicsPipeline>
         )0x0) {
      pFVar13 = ::FName::FName(&FStack_f8,"STAT_Vulkan_vkCreateGraphicsPipeline");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Vulkan_vkCreateGraphicsPipeline,*pFVar13
                 ,L"STAT_Vulkan_vkCreateGraphicsPipeline","STATGROUP_Quick","STATCAT_Advanced",
                 L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS1);
  }
  FVar14 = StatPtr_STAT_Vulkan_vkCreateGraphicsPipeline;
  if (StatPtr_STAT_Vulkan_vkCreateGraphicsPipeline ==
      (FThreadSafeStaticStat<_public:___cdecl__private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::<lambda_1>::operator()(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)const_::_2_::FStat_STAT_Vulkan_vkCreateGraphicsPipeline>
       )0x0) {
    pFVar13 = ::FName::FName(&FStack_f0,"STAT_Vulkan_vkCreateGraphicsPipeline");
    FVar14 = (FThreadSafeStaticStat<_public:___cdecl__private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::<lambda_1>::operator()(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)const_::_2_::FStat_STAT_Vulkan_vkCreateGraphicsPipeline>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Vulkan_vkCreateGraphicsPipeline
                          ,*pFVar13,L"STAT_Vulkan_vkCreateGraphicsPipeline","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar14;
  bVar10 = false;
  bVar8 = false;
  FStack_180.ComparisonIndex.Value = 0;
  FStack_180.Number = 0;
  FVar19.Bits = (uint)FVar20.ComparisonIndex.Value;
  uVar12 = FVar20.Number;
  if ((FVar19.Bits == 0) && (uVar12 == 0)) {
LAB_145b5498a:
    bVar5 = false;
    FVar20 = FStack_180;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStackX_20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStackX_20[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar10 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_168.Bits = FVar19.Bits;
        uStack_164 = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&FStack_168._s_0,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                   ,0x797);
        bVar10 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145b5498a;
    FStackX_18.Bits = FVar19.Bits;
    uStackX_1c = uVar12;
    FStack_180 = FVar20;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar5 = true;
  }
  if ((*piVar22 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    if (StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_vkCreate ==
        (FThreadSafeStaticStat<_public:___cdecl__private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::<lambda_1>::operator()(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)const_::_27_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_vkCreate>
         )0x0) {
      pFVar13 = ::FName::FName(&FStack_e8,"STAT_Vulkan_RHICreateGraphicsPipelineState_vkCreate");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_vkCreate,*pFVar13,
                 L"STAT_Vulkan_RHICreateGraphicsPipelineState_vkCreate","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS2);
  }
  FVar16 = StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_vkCreate;
  if (StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_vkCreate ==
      (FThreadSafeStaticStat<_public:___cdecl__private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::<lambda_1>::operator()(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)const_::_27_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_vkCreate>
       )0x0) {
    pFVar13 = ::FName::FName(&FStack_e0,"STAT_Vulkan_RHICreateGraphicsPipelineState_vkCreate");
    FVar16 = (FThreadSafeStaticStat<_public:___cdecl__private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::<lambda_1>::operator()(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)const_::_27_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_vkCreate>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_vkCreate,*pFVar13,
                          L"STAT_Vulkan_RHICreateGraphicsPipelineState_vkCreate","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar16;
  bVar6 = false;
  bVar9 = false;
  FStack_190.ComparisonIndex.Value = 0;
  FStack_190.Number = 0;
  FVar19.Bits = (uint)FVar21.ComparisonIndex.Value;
  uVar12 = FVar21.Number;
  if ((FVar19.Bits != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStack_1a8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStack_1a8[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar6 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_160.Bits = FVar19.Bits;
        uStack_15c = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&FStack_160._s_0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                   ,0x7a2);
        bVar6 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FStackX_18.Bits = FVar19.Bits;
      uStackX_1c = uVar12;
      FStack_190 = FVar21;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar7 = true;
      FVar23.Value = FStack_190.ComparisonIndex.Value;
      goto LAB_145b54abd;
    }
  }
  bVar7 = false;
  FVar21 = FStack_190;
LAB_145b54abd:
  pFVar3 = param_2->DestPipelineCacheLock;
  AcquireSRWLockShared((PSRWLOCK)pFVar3);
  VVar11 = (*VulkanDynamicAPI::vkCreateGraphicsPipelines)
                     (*(VkDevice_T **)(*(longlong *)(*(longlong *)param_1 + 0x90) + 0x30),
                      param_2->DestPipelineCache,1,
                      *(VkGraphicsPipelineCreateInfo **)((longlong)param_1 + 8),
                      &VulkanRHI::GAllocationCallbacks,ppVStack_158);
  ReleaseSRWLockShared((PSRWLOCK)pFVar3);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar21 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar17 == (FThreadStats *)0x0) {
      pFVar18 = FThreadStatsPool::Get();
      pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
    }
    if (pFVar17->bWaitForExplicitFlush < pFVar17->ScopeCount) {
      FStack_128.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      FStack_128.NameAndInfo.Index.Value = FVar23.Value;
      QueryPerformanceCounter(&LStack_148);
      FStack_128.StatData.Pad[4] = '\0';
      FStack_128.StatData.Pad[5] = '\0';
      FStack_128.StatData.Pad[6] = '\0';
      FStack_128.StatData.Pad[7] = '\0';
      FStack_128.StatData.Pad[0] = LStack_148.s.LowPart._0_1_;
      FStack_128.StatData.Pad[1] = LStack_148.s.LowPart._1_1_;
      FStack_128.StatData.Pad[2] = LStack_148.s.LowPart._2_1_;
      FStack_128.StatData.Pad[3] = LStack_148.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar17,&FStack_128);
      piVar22 = &pFVar17->ScopeCount;
      *piVar22 = *piVar22 + -1;
      if (*piVar22 == 0) {
        FThreadStats::Flush(pFVar17,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar17,false,false);
      }
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar20 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar17 == (FThreadStats *)0x0) {
      pFVar18 = FThreadStatsPool::Get();
      pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
    }
    if (pFVar17->bWaitForExplicitFlush < pFVar17->ScopeCount) {
      FStack_118.NameAndInfo.Index.Value = FStack_180.ComparisonIndex.Value;
      FStack_118.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStack_140);
      FStack_118.StatData.Pad[4] = '\0';
      FStack_118.StatData.Pad[5] = '\0';
      FStack_118.StatData.Pad[6] = '\0';
      FStack_118.StatData.Pad[7] = '\0';
      FStack_118.StatData.Pad[0] = LStack_140.s.LowPart._0_1_;
      FStack_118.StatData.Pad[1] = LStack_140.s.LowPart._1_1_;
      FStack_118.StatData.Pad[2] = LStack_140.s.LowPart._2_1_;
      FStack_118.StatData.Pad[3] = LStack_140.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar17,&FStack_118);
      piVar22 = &pFVar17->ScopeCount;
      *piVar22 = *piVar22 + -1;
      if (*piVar22 == 0) {
        FThreadStats::Flush(pFVar17,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar17,false,false);
      }
    }
  }
  return VVar11;
}

// Call @ 145b9fcc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHITexture> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer'::__l1::<lambda_180_>,TRefCountPtr<FRHITexture>,FRHICommandListBase_&>
::Call(void *param_1,FRHICommandListBase *param_2)

{
  *(uchar **)param_1 = (param_2->MemManager).Top;
  (param_2->MemManager).Top = (uchar *)0x0;
  return (TRefCountPtr<FRHITexture>)param_1;
}

// Call @ 145b9fce0

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`AftermathLateAssociate'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `AftermathLateAssociate'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 145b9fcf0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHITransientBuffer * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanTransientResourceAllocator::CreateBuffer'::__l2::<lambda_1>,FRHITransientBuffer_*,FRHITransientHeap::FResourceInitializer_const_&>
::Call(void *param_1,FResourceInitializer *param_2)

{
  longlong lVar1;
  FVulkanBuffer *pFVar2;
  FVulkanBuffer *pFVar3;
  FVulkanBuffer *pFVar4;
  
  pFVar2 = ::operator_new(0x148);
  pFVar4 = (FVulkanBuffer *)0x0;
  pFVar3 = pFVar4;
  if (pFVar2 != (FVulkanBuffer *)0x0) {
    pFVar3 = FVulkanBuffer::FVulkanBuffer
                       (pFVar2,*(FVulkanDevice **)param_1,
                        (FRHIBufferCreateDesc *)((longlong)param_1 + 8),param_2->Allocation);
  }
  pFVar2 = ::operator_new(0x110);
  if (pFVar2 != (FVulkanBuffer *)0x0) {
    FRHITransientResource::FRHITransientResource
              ((FRHITransientResource *)pFVar2,(FRHIResource *)pFVar3,0,param_2->Hash,
               *(ulong64 *)((longlong)param_1 + 0x48),Heap,Buffer);
    pFVar2->_padding_ = (longlong)&___7FRHITransientBuffer__6B_;
    lVar1 = *(longlong *)((longlong)param_1 + 0x10);
    pFVar2->_padding_ = ((FRHIBufferCreateDesc *)((longlong)param_1 + 8))->_padding_;
    pFVar2->_padding_ = lVar1;
    pFVar2->_padding_ = 0;
    *(undefined4 *)&pFVar2->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar2->_padding_ + 4) = 1;
    pFVar2->BufferUsageFlags = 0;
    pFVar2->LockStatus = Unlocked;
    *(undefined3 *)&pFVar2->field_0x105 = 0;
    *(undefined4 *)&(pFVar2->CurrentBufferAlloc).Alloc.VulkanHandle = 0;
    *(undefined4 *)((longlong)&(pFVar2->CurrentBufferAlloc).Alloc.VulkanHandle + 4) = 1;
    pFVar4 = pFVar2;
  }
  return (FRHITransientBuffer *)pFVar4;
}

// Call @ 145b9fd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FRHITransientTexture * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanTransientResourceAllocator::CreateTexture'::__l2::<lambda_1>,FRHITransientTexture_*,FRHITransientHeap::FResourceInitializer_const_&>
::Call(void *param_1,FResourceInitializer *param_2)

{
  wchar_t *pwVar1;
  FRHITransientHeapAllocation *pFVar2;
  code *pcVar3;
  bool bVar4;
  FVulkanDynamicRHI *this;
  FRHITransientTexture *pFVar5;
  FRHITransientTexture *this_00;
  undefined1 auStackY_f8 [32];
  FCreateTextureResult FStack_b8;
  FRHITextureCreateDesc FStack_a8;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pwVar1 = *(wchar_t **)((longlong)param_1 + 0x50);
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)&FStack_a8,param_1);
  pFVar5 = (FRHITransientTexture *)0x0;
  FStack_a8.InitialState = Discard;
  FStack_a8.InitAction = Default;
  FStack_a8.BulkData = (FResourceBulkDataInterface *)0x0;
  FStack_a8.ClassName.ComparisonIndex.Value = 0;
  FStack_a8.ClassName.Number = 0;
  FStack_a8.OwnerName.ComparisonIndex.Value = 0;
  FStack_a8.OwnerName.Number = 0;
  FStack_a8.DebugName = pwVar1;
  this = (FVulkanDynamicRHI *)(**(code **)(GDynamicRHI->_padding_ + 0x30))();
  pFVar2 = param_2->Allocation;
  if ((FStack_a8._padding_ & 0x2000000000U) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!EnumHasAnyFlags(CreateDesc.Flags, ETextureCreateFlags::ReservedResource)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                       ,0x596,L"Can\'t use reserved resources with transient allocation.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FRHITransientTexture *)(*pcVar3)();
      return pFVar5;
    }
  }
  FVulkanDynamicRHI::BeginCreateTextureInternal(this,&FStack_b8,&FStack_a8,pFVar2);
  this_00 = ::operator_new(0x150);
  if (this_00 != (FRHITransientTexture *)0x0) {
    pFVar5 = FRHITransientTexture::FRHITransientTexture
                       (this_00,(FRHIResource *)FStack_b8.Texture,0,param_2->Hash,
                        *(ulong64 *)((longlong)param_1 + 0x58),Heap,param_1);
  }
  if ((void *)FStack_a8._padding_ != (void *)0x0) {
    FMemory::Free((void *)FStack_a8._padding_);
  }
  return pFVar5;
}

// Call @ 145b9fd10

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanDynamicRHI::EnqueueEndOfPipeTask'::__l2::<lambda_1>,void,FVulkanQueue_&>
::Call(void *param_1,FVulkanQueue *param_2)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar4;
  undefined8 *puVar5;
  longlong lVar6;
  code *pcVar7;
  FVulkanPayload *pFVar8;
  bool bVar9;
  int iVar10;
  FVulkanPayload *pFVar11;
  undefined8 uVar12;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar13;
  longlong *plVar14;
  FVulkanPayload *pFStack_28;
  FVulkanPayload *pFStack_20;
  longlong alStack_18 [2];
  
  pFVar11 = ::operator_new(400);
  pFStack_28 = (FVulkanPayload *)0x0;
  if (pFVar11 != (FVulkanPayload *)0x0) {
    pFStack_28 = FVulkanPayload::FVulkanPayload(pFVar11,param_2);
  }
  FVulkanSyncPoint::Create((EVulkanSyncPointType)&pFStack_20,(wchar_t *)0x0);
  pFVar11 = pFStack_28;
  pFVar3 = (pFStack_28->SyncPoints).AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)&pFStack_20) &&
      ((FScriptContainerElement *)&pFStack_20 <
       pFVar3 + (longlong)(pFStack_28->SyncPoints).ArrayMax * 8)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = (pFVar11->SyncPoints).ArrayNum;
  piVar1 = &(pFVar11->SyncPoints).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(pFVar11->SyncPoints).AllocatorInstance,piVar1);
  }
  pFVar8 = pFStack_20;
  (pFVar11->SyncPoints).ArrayNum = iVar10 + 1;
  pFVar3 = (pFVar11->SyncPoints).AllocatorInstance.Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar10 * 8) = 0;
  *(FVulkanPayload **)(pFVar3 + (longlong)iVar10 * 8) = pFStack_20;
  if (pFStack_20 != (FVulkanPayload *)0x0) {
    LOCK();
    *(int *)&(pFStack_20->WaitFlags).AllocatorInstance.Data =
         *(int *)&(pFStack_20->WaitFlags).AllocatorInstance.Data + 1;
    UNLOCK();
  }
  FVar4 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)param_1;
  lVar6._0_4_ = (pFStack_20->WaitFlags).ArrayNum;
  lVar6._4_4_ = (pFStack_20->WaitFlags).ArrayMax;
  if ((lVar6 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("GraphEvent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.h"
                         ,0x5d,L"This sync point was not created with a CPU event."), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  alStack_18[0] = *(longlong *)&(pFVar8->WaitFlags).ArrayNum;
  if (alStack_18[0] != 0) {
    LOCK();
    *(int *)(alStack_18[0] + 0x30) = *(int *)(alStack_18[0] + 0x30) + 1;
    UNLOCK();
  }
  FVar13 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar4 + 0x20);
  if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar4 + 0x20) ==
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar13 = FVar4;
  }
  if ((((ulonglong)FVar13 <= alStack_18) &&
      (alStack_18 < (longlong *)((longlong)FVar13 + (longlong)*(int *)((longlong)FVar4 + 0x2c) * 8))
      ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = *(int *)((longlong)FVar4 + 0x28);
  if (iVar10 == *(int *)((longlong)FVar4 + 0x2c)) {
    iVar10 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                       (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)FVar4,
                        (int *)((longlong)FVar4 + 0x2c));
  }
  pFVar11 = pFStack_28;
  *(int *)((longlong)FVar4 + 0x28) = iVar10 + 1;
  FVar13 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar4 + 0x20);
  if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar4 + 0x20) ==
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar13 = FVar4;
  }
  *(undefined8 *)((longlong)FVar13 + (longlong)iVar10 * 8) = 0;
  *(longlong *)((longlong)FVar13 + (longlong)iVar10 * 8) = alStack_18[0];
  puVar5 = *(undefined8 **)((longlong)param_1 + 8);
  alStack_18[0] = 0;
  if ((void *)*puVar5 != (void *)0x0) {
    CheckCallable((void *)*puVar5);
    pcVar7 = (code *)*puVar5;
    plVar14 = puVar5 + 2;
    if ((longlong *)puVar5[5] != (longlong *)0x0) {
      plVar14 = (longlong *)puVar5[5];
    }
    uVar12 = (**(code **)(*plVar14 + 8))();
    (*pcVar7)(uVar12,pFVar11);
  }
  lVar6 = **(longlong **)((longlong)param_1 + 0x10);
  if (((*(FVulkanPayload ***)(lVar6 + 0x40) <= &pFStack_28) &&
      (&pFStack_28 < *(FVulkanPayload ***)(lVar6 + 0x40) + *(int *)(lVar6 + 0x4c))) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = *(int *)(lVar6 + 0x48);
  if (iVar10 == *(int *)(lVar6 + 0x4c)) {
    iVar10 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)(lVar6 + 0x40),(int *)(lVar6 + 0x4c));
  }
  *(int *)(lVar6 + 0x48) = iVar10 + 1;
  *(FVulkanPayload **)(*(longlong *)(lVar6 + 0x40) + (longlong)iVar10 * 8) = pFStack_28;
  if (pFStack_20 != (FVulkanPayload *)0x0) {
    pTVar2 = &pFStack_20->WaitFlags;
    LOCK();
    iVar10 = *(int *)&(pTVar2->AllocatorInstance).Data;
    *(int *)&(pTVar2->AllocatorInstance).Data = *(int *)&(pTVar2->AllocatorInstance).Data + -1;
    UNLOCK();
    if (iVar10 == 1) {
      if (pTVar2 == (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)0x0) {
        pFStack_20 = (FVulkanPayload *)0x0;
      }
      if (pFStack_20 != (FVulkanPayload *)0x0) {
        (*(code *)pFStack_20->Queue->Queue)(pFStack_20,1);
      }
    }
  }
  return;
}

// Call @ 145b9fd20

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanDynamicRHI::ProcessInterruptQueue'::__l2::<lambda_1>,void,FVulkanQueue_&>
::Call(void *param_1,FVulkanQueue *param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = **(byte **)param_1;
  iVar2 = FVulkanQueue::ProcessInterruptQueue(param_2,0);
  **(byte **)param_1 = 0 < iVar2 | bVar1;
  return;
}

// Call @ 145b9fd60

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanDynamicRHI::ProcessSubmissionQueue'::__l2::<lambda_1>,void,FVulkanQueue_&>
::Call(void *param_1,FVulkanQueue *param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = **(byte **)param_1;
  iVar2 = FVulkanQueue::SubmitQueuedPayloads
                    (param_2,*(TMap<VkSemaphore_T_*,FBinarySemaphoreSignalInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<VkSemaphore_T_*,FBinarySemaphoreSignalInfo,0>_>
                               **)((longlong)param_1 + 8));
  **(byte **)param_1 = 0 < iVar2 | bVar1;
  return;
}

// Call @ 145b9fda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanDynamicRHI::RHIEndFrame'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  ForElementType<UE::RHI::GPUProfiler::FEventStream> FVar7;
  longlong lVar8;
  longlong *plVar9;
  ForElementType<UE::RHI::GPUProfiler::FEventStream> FVar10;
  undefined1 auStack_108 [32];
  ForElementType<UE::RHI::GPUProfiler::FEventStream> FStack_e8;
  ForElementType<UE::RHI::GPUProfiler::FEventStream> FStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b8 [16];
  ForElementType<UE::RHI::GPUProfiler::FEventStream> FStack_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TArrayView<UE::RHI::GPUProfiler::FEventStream,int> TStack_98;
  ForElementType<UE::RHI::GPUProfiler::FEventStream> FStack_88;
  int iStack_38;
  int iStack_34;
  ulonglong uStack_30;
  
  uStack_30 = __security_cookie.value ^ (ulonglong)auStack_108;
  iVar2 = *(int *)((longlong)param_1 + 0x28);
  plVar9 = *(longlong **)((longlong)param_1 + 0x20);
  if (*(longlong **)((longlong)param_1 + 0x20) == (longlong *)0x0) {
    plVar9 = (longlong *)((longlong)param_1 + 8);
  }
  FStack_88.SecondaryData = (ForElementType<UE::RHI::GPUProfiler::FEventStream>)0x0;
  iStack_38 = 0;
  iStack_34 = 3;
  plVar1 = plVar9 + iVar2;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x28) != iVar2) {
      auStack_b8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(auStack_b8);
    }
    iVar5 = iStack_38;
    if (plVar9 == plVar1) break;
    lVar3 = *plVar9;
    FVar10 = (ForElementType<UE::RHI::GPUProfiler::FEventStream>)(lVar3 + 0x28);
    FVar7 = (ForElementType<UE::RHI::GPUProfiler::FEventStream>)&FStack_88;
    if (FStack_88.SecondaryData != (ForElementType<UE::RHI::GPUProfiler::FEventStream>)0x0) {
      FVar7 = FStack_88.SecondaryData;
    }
    if ((ulonglong)FVar7 <= (ulonglong)FVar10) {
      FVar7 = (ForElementType<UE::RHI::GPUProfiler::FEventStream>)&FStack_88;
      if (FStack_88.SecondaryData != (ForElementType<UE::RHI::GPUProfiler::FEventStream>)0x0) {
        FVar7 = FStack_88.SecondaryData;
      }
      if ((ulonglong)FVar10 < (ulonglong)((longlong)FVar7 + (longlong)iStack_34 * 0x18)) {
        uStack_c8 = 0x18;
        lStack_d0 = (longlong)iStack_38;
        FStack_e0 = (ForElementType<UE::RHI::GPUProfiler::FEventStream>)&FStack_88;
        if (FStack_88.SecondaryData != (ForElementType<UE::RHI::GPUProfiler::FEventStream>)0x0) {
          FStack_e0 = FStack_88.SecondaryData;
        }
        FStack_e8 = FVar10;
        lStack_d8 = (longlong)iStack_34;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (iStack_38 == iStack_34) {
      iStack_38 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::RHI::GPUProfiler::FEventStream>_>
                            (0x818,&FStack_88,&iStack_34);
    }
    FVar7 = (ForElementType<UE::RHI::GPUProfiler::FEventStream>)&FStack_88;
    if (FStack_88.SecondaryData != (ForElementType<UE::RHI::GPUProfiler::FEventStream>)0x0) {
      FVar7 = FStack_88.SecondaryData;
    }
    lVar8 = (longlong)iStack_38;
    plVar9 = plVar9 + 1;
    iStack_38 = iStack_38 + 1;
    ((FEventStream *)((longlong)FVar7 + lVar8 * 0x18))->First = *(FChunk **)FVar10;
    ((FChunk **)((longlong)FVar7 + 8))[lVar8 * 3] = *(FChunk **)(lVar3 + 0x30);
    ((FQueue *)((longlong)FVar7 + 0x10))[lVar8 * 6].field0_0x0 = *(FQueue_u_0 *)(lVar3 + 0x38);
    *(undefined8 *)FVar10 = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0;
  }
  FStack_a8 = (ForElementType<UE::RHI::GPUProfiler::FEventStream>)&FStack_88;
  if (FStack_88.SecondaryData != (ForElementType<UE::RHI::GPUProfiler::FEventStream>)0x0) {
    FStack_a8 = FStack_88.SecondaryData;
  }
  if ((iStack_38 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  TStack_98._12_4_ = uStack_9c;
  TStack_98.ArrayNum = iVar5;
  TStack_98.DataPtr = (FEventStream *)FStack_a8;
  iStack_a0 = iVar5;
  RHI::GPUProfiler::ProcessEvents(&TStack_98);
  FVar7 = (ForElementType<UE::RHI::GPUProfiler::FEventStream>)&FStack_88;
  if (FStack_88.SecondaryData != (ForElementType<UE::RHI::GPUProfiler::FEventStream>)0x0) {
    FVar7 = FStack_88.SecondaryData;
  }
  DestructItems<UE::RHI::GPUProfiler::FEventStream,int>((FEventStream *)FVar7,iStack_38);
  if (FStack_88.SecondaryData != (ForElementType<UE::RHI::GPUProfiler::FEventStream>)0x0) {
    FMemory::Free((void *)FStack_88.SecondaryData);
  }
  return;
}

// Call @ 145b9fdb0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanDynamicRHI::DumpCrashMarkers'::__l3::<lambda_1>,void,FVulkanQueue_&>::
Call(void *param_1,FVulkanQueue *param_2)

{
  EVulkanQueueType EVar1;
  int iVar2;
  FVulkanDiagnosticBuffer *this;
  wchar_t *pwVar3;
  FString *pFVar4;
  int iVar5;
  FString FStack_18;
  
  this = (param_2->DiagnosticBuffer).Ptr;
  if (this != (FVulkanDiagnosticBuffer *)0x0) {
    EVar1 = param_2->QueueType;
    pwVar3 = GetVulkanQueueTypeName(EVar1);
    pFVar4 = FRHIDiagnosticBuffer::GetShaderDiagnosticMessages
                       ((FRHIDiagnosticBuffer *)this,&FStack_18,0,(uint)EVar1,pwVar3);
    iVar2 = (pFVar4->Data).ArrayNum;
    iVar5 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (*(FString **)param_1,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,iVar5);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Call @ 145b9fdc0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanDynamicRHI::RHIBlockUntilGPUIdle'::__l3::<lambda_1>,void,FVulkanQueue_&>
::Call(void *param_1,FVulkanQueue *param_2)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  ForElementType<FVulkanSyncPoint_*> FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FVulkanPayload *pFVar9;
  ForElementType<FVulkanSyncPoint_*> FVar10;
  FVulkanPayload *pFStack_28;
  FVulkanPayload *pFStack_20;
  FVulkanPayload *apFStack_18 [2];
  
  pFVar9 = ::operator_new(400);
  pFStack_20 = (FVulkanPayload *)0x0;
  if (pFVar9 != (FVulkanPayload *)0x0) {
    pFStack_20 = FVulkanPayload::FVulkanPayload(pFVar9,param_2);
  }
  FVulkanSyncPoint::Create((EVulkanSyncPointType)&pFStack_28,(wchar_t *)0x0);
  pFVar9 = pFStack_20;
  pFVar3 = (pFStack_20->SyncPoints).AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)&pFStack_28) &&
      ((FScriptContainerElement *)&pFStack_28 <
       pFVar3 + (longlong)(pFStack_20->SyncPoints).ArrayMax * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = (pFVar9->SyncPoints).ArrayNum;
  piVar1 = &(pFVar9->SyncPoints).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(pFVar9->SyncPoints).AllocatorInstance,piVar1);
  }
  (pFVar9->SyncPoints).ArrayNum = iVar8 + 1;
  pFVar3 = (pFVar9->SyncPoints).AllocatorInstance.Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar8 * 8) = 0;
  *(FVulkanPayload **)(pFVar3 + (longlong)iVar8 * 8) = pFStack_28;
  if (pFStack_28 != (FVulkanPayload *)0x0) {
    LOCK();
    *(int *)&(pFStack_28->WaitFlags).AllocatorInstance.Data =
         *(int *)&(pFStack_28->WaitFlags).AllocatorInstance.Data + 1;
    UNLOCK();
  }
  lVar4 = **(longlong **)((longlong)param_1 + 8);
  if (((*(FVulkanPayload ***)(lVar4 + 0x40) <= &pFStack_20) &&
      (&pFStack_20 < *(FVulkanPayload ***)(lVar4 + 0x40) + *(int *)(lVar4 + 0x4c))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = *(int *)(lVar4 + 0x48);
  if (iVar8 == *(int *)(lVar4 + 0x4c)) {
    iVar8 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar4 + 0x40),(int *)(lVar4 + 0x4c));
  }
  *(int *)(lVar4 + 0x48) = iVar8 + 1;
  *(FVulkanPayload **)(*(longlong *)(lVar4 + 0x40) + (longlong)iVar8 * 8) = pFStack_20;
  FVar5 = *(ForElementType<FVulkanSyncPoint_*> *)param_1;
  apFStack_18[0] = pFStack_28;
  FVar10 = *(ForElementType<FVulkanSyncPoint_*> *)((longlong)FVar5 + 0x18);
  if (*(ForElementType<FVulkanSyncPoint_*> *)((longlong)FVar5 + 0x18) ==
      (ForElementType<FVulkanSyncPoint_*>)0x0) {
    FVar10 = FVar5;
  }
  if ((((ulonglong)FVar10 <= apFStack_18) &&
      (apFStack_18 <
       (FVulkanPayload **)((longlong)FVar10 + (longlong)*(int *)((longlong)FVar5 + 0x24) * 8))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = *(int *)((longlong)FVar5 + 0x20);
  if (iVar8 == *(int *)((longlong)FVar5 + 0x24)) {
    iVar8 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FVulkanSyncPoint_*>_>
                      (0x808,(ForElementType<FVulkanSyncPoint_*> *)FVar5,
                       (int *)((longlong)FVar5 + 0x24));
  }
  *(int *)((longlong)FVar5 + 0x20) = iVar8 + 1;
  FVar10 = *(ForElementType<FVulkanSyncPoint_*> *)((longlong)FVar5 + 0x18);
  if (*(ForElementType<FVulkanSyncPoint_*> *)((longlong)FVar5 + 0x18) ==
      (ForElementType<FVulkanSyncPoint_*>)0x0) {
    FVar10 = FVar5;
  }
  *(FVulkanPayload **)((longlong)FVar10 + (longlong)iVar8 * 8) = apFStack_18[0];
  if (pFStack_28 != (FVulkanPayload *)0x0) {
    pTVar2 = &pFStack_28->WaitFlags;
    LOCK();
    iVar8 = *(int *)&(pTVar2->AllocatorInstance).Data;
    *(int *)&(pTVar2->AllocatorInstance).Data = *(int *)&(pTVar2->AllocatorInstance).Data + -1;
    UNLOCK();
    if (iVar8 == 1) {
      if (pTVar2 == (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)0x0) {
        pFStack_28 = (FVulkanPayload *)0x0;
      }
      if (pFStack_28 != (FVulkanPayload *)0x0) {
        (*(code *)pFStack_28->Queue->Queue)(pFStack_28,1);
      }
    }
  }
  return;
}

// Call @ 145b9fdd0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanDynamicRHI::WaitAndProcessInterruptQueue'::__l3::<lambda_1>,void,FVulkanQueue_&>
::Call(void *param_1,FVulkanQueue *param_2)

{
  byte bVar1;
  FVulkanPayload *pFVar2;
  int iVar3;
  
  bVar1 = **(byte **)((longlong)param_1 + 0x10);
  iVar3 = FVulkanQueue::ProcessInterruptQueue(param_2,0);
  **(byte **)((longlong)param_1 + 0x10) = 0 < iVar3 | bVar1;
  if ((((param_2->PendingInterrupt).Tail)->NextNode != (TNode *)0x0) &&
     (pFVar2 = ((param_2->PendingInterrupt).Tail)->NextNode->Item, pFVar2 != (FVulkanPayload *)0x0))
  {
    *(FVulkanPayload **)(*(longlong *)((longlong)param_1 + 8) + (ulonglong)**(uint **)param_1 * 8) =
         pFVar2;
    **(int **)param_1 = **(int **)param_1 + 1;
  }
  return;
}

// Call @ 145b9fde0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

TRefCountPtr<FRHITexture> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanDynamicRHI::RHICreateTextureInitializer'::__l40::<lambda_1>,TRefCountPtr<FRHITexture>,FRHICommandListBase_&>
::Call(void *param_1,FRHICommandListBase *param_2)

{
  FRHICommandListBase *in_R8;
  
  FVulkanTexture::HostUploadInitialData
            ((FVulkanTexture *)(param_2->MemManager).Top,in_R8,(param_2->MemManager).End,
             *(uint *)&(param_2->MemManager).TopChunk);
  FMemory::Free((param_2->MemManager).End);
  *(uchar **)param_1 = (param_2->MemManager).Top;
  (param_2->MemManager).Top = (uchar *)0x0;
  return (TRefCountPtr<FRHITexture>)param_1;
}

// Call @ 145b9fe30

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanDynamicRHI::InitializeSubmissionPipe'::__l12::<lambda_1>,void,FVulkanQueue_&>
::Call(void *param_1,FVulkanQueue *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FQueue FVar6;
  int iVar7;
  undefined4 extraout_var;
  FVulkanPayload *pFVar9;
  FVulkanTiming *pFVar10;
  undefined1 auStack_18 [16];
  FScriptContainerElement *pFVar8;
  
  pFVar2 = *(ForAnyElementType **)param_1;
  FVar6 = FVulkanQueue::GetProfilerQueue(param_2);
  pFVar8 = (FScriptContainerElement *)CONCAT44(extraout_var,FVar6.field0_0x0);
  if ((pFVar2->Data <= pFVar8) &&
     (pFVar8 < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar7 == *piVar1) {
    iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar7 + 1;
  *(undefined4 *)(pFVar2->Data + (longlong)iVar7 * 4) = *(undefined4 *)pFVar8;
  lVar3 = **(longlong **)((longlong)param_1 + 8);
  pFVar9 = ::operator_new(400);
  if (pFVar9 == (FVulkanPayload *)0x0) {
    pFVar9 = (FVulkanPayload *)0x0;
  }
  else {
    pFVar9 = FVulkanPayload::FVulkanPayload(pFVar9,param_2);
  }
  iVar7 = *(int *)(lVar3 + 0x48);
  if (iVar7 == *(int *)(lVar3 + 0x4c)) {
    iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar3 + 0x40),(int *)(lVar3 + 0x4c));
  }
  *(int *)(lVar3 + 0x48) = iVar7 + 1;
  *(FVulkanPayload **)(*(longlong *)(lVar3 + 0x40) + (longlong)iVar7 * 8) = pFVar9;
  pFVar10 = FVulkanDynamicRHI::FVulkanTimingArray::CreateNew
                      ((FVulkanTimingArray *)(*(longlong *)((longlong)param_1 + 0x10) + 0x30),
                       param_2);
  if ((TOptional<FVulkanTiming_*> *)auStack_18 != &pFVar9->Timing) {
    (pFVar9->Timing).TypedValue = pFVar10;
    (pFVar9->Timing).bIsSet = true;
  }
  return;
}

// Call @ 145b9fe40

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanDynamicRHI::RHIEndFrame'::__l2::<lambda_2>,void,FVulkanPayload_&>::Call
          (void *param_1,FVulkanPayload *param_2)

{
  EVulkanQueueType EVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  bool bVar6;
  FVulkanTiming *pFVar7;
  ulong64 *puVar8;
  longlong lVar9;
  char cVar10;
  FRHIBreadcrumbNode *pFVar11;
  long64 lVar12;
  long64 lStackX_8;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  pFVar7 = FVulkanDynamicRHI::FVulkanTimingArray::CreateNew
                     ((FVulkanTimingArray *)(*(longlong *)param_1 + 0x30),param_2->Queue);
  if ((TOptional<FVulkanTiming_*> *)&uStack_38 != &param_2->Timing) {
    (param_2->Timing).TypedValue = pFVar7;
    (param_2->Timing).bIsSet = true;
  }
  EVar1 = param_2->Queue->QueueType;
  if (EVar1 != Graphics) {
    if (EVar1 == AsyncCompute) {
      cVar10 = '\x02';
      goto LAB_145b9afd5;
    }
    if (EVar1 == Transfer) {
      cVar10 = '\0';
      goto LAB_145b9afd5;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp"
                       ,0x4d5,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  cVar10 = '\x01';
LAB_145b9afd5:
  if (*(char *)(*(longlong *)param_1 + 0x28) != '\0') {
    puVar8 = (ulong64 *)(*(longlong *)param_1 + 0x20);
    if ((TOptional<unsigned___int64> *)puVar8 != &param_2->ExternalGPUTime) {
      (param_2->ExternalGPUTime).TypedValue = *puVar8;
      (param_2->ExternalGPUTime).bIsSet = true;
    }
    if (*(char *)(*(longlong *)param_1 + 0x28) != '\0') {
      *(undefined1 *)(*(longlong *)param_1 + 0x28) = 0;
    }
  }
  puVar4 = *(undefined4 **)((longlong)param_1 + 8);
  cVar2 = *(char *)(puVar4 + 6);
  if (cVar2 != '\0') {
    lStackX_8 = *(long64 *)(puVar4 + 4);
  }
  if (cVar10 == '\0') {
    pFVar11 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    if ((cVar10 == '\x01') || (lVar9 = 8, cVar10 != '\x02')) {
      lVar9 = 0;
    }
    pFVar11 = *(FRHIBreadcrumbNode **)(lVar9 + *(longlong *)(puVar4 + 2));
  }
  uVar3 = *puVar4;
  lVar12 = 0;
  if (cVar2 != '\0') {
    lVar12 = lStackX_8;
  }
  if ((TOptional<UE::RHI::GPUProfiler::FEvent::FFrameBoundary> *)&uStack_30 !=
      &param_2->EndFrameEvent) {
    (param_2->EndFrameEvent).TypedValue.CPUTimestamp = 0;
    (param_2->EndFrameEvent).TypedValue.FrameNumber = uVar3;
    (param_2->EndFrameEvent).TypedValue.bStatsFrameSet = (bool)cVar2;
    *(undefined3 *)&(param_2->EndFrameEvent).TypedValue.field_0xd = uStack_24._1_3_;
    (param_2->EndFrameEvent).TypedValue.StatsFrame = lVar12;
    (param_2->EndFrameEvent).TypedValue.Breadcrumb = pFVar11;
    (param_2->EndFrameEvent).bIsSet = true;
  }
  return;
}

// Call @ 145b9fe50

FRHITextureSubresourceInitializer * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanDynamicRHI::RHICreateTextureInitializer'::__l40::<lambda_2>,FRHITextureSubresourceInitializer,FRHITextureInitializer::FSubresourceIndex>
::Call(FRHITextureSubresourceInitializer *__return_storage_ptr__,void *param_1,
      FSubresourceIndex *param_2)

{
  ulong64 uVar1;
  ulong64 uVar2;
  FRHITextureSubresourceInitializer *pFVar3;
  FSubresourceIndex local_38;
  FRHITextureSubresourceInitializer local_28;
  
  local_38.FaceIndex = param_2->FaceIndex;
  local_38.ArrayIndex = param_2->ArrayIndex;
  local_38.MipIndex = param_2->MipIndex;
  pFVar3 = `FVulkanDynamicRHI::RHICreateTextureInitializer'::__l40::<lambda_2>::operator()
                     (param_1,&local_28,&local_38);
  uVar2 = pFVar3->Size;
  uVar1 = pFVar3->Stride;
  __return_storage_ptr__->Data = pFVar3->Data;
  __return_storage_ptr__->Size = uVar2;
  __return_storage_ptr__->Stride = uVar1;
  return __return_storage_ptr__;
}

// Call @ 145b9fea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHITexture> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanDynamicRHI::RHICreateTextureInitializer'::__l42::<lambda_3>,TRefCountPtr<FRHITexture>,FRHICommandListBase_&>
::Call(void *param_1,FRHICommandListBase *param_2)

{
  `FVulkanDynamicRHI::RHICreateTextureInitializer'::__l42::<lambda_3>::operator()(param_2,param_1);
  return (TRefCountPtr<FRHITexture>)param_1;
}

// Call @ 145b9fed0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

FRHITextureSubresourceInitializer * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanDynamicRHI::RHICreateTextureInitializer'::__l42::<lambda_4>,FRHITextureSubresourceInitializer,FRHITextureInitializer::FSubresourceIndex>
::Call(FRHITextureSubresourceInitializer *__return_storage_ptr__,void *param_1,
      FSubresourceIndex *param_2)

{
  int iVar1;
  code *pcVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  bool bVar5;
  uint uVar6;
  FRHITextureDesc *pFVar7;
  ulong64 uVar8;
  FRHITextureSubresourceInitializer *pFVar9;
  void *pvVar10;
  ulong64 local_res8;
  ulong64 local_res10;
  FSubresourceIndex local_res18;
  FSubresourceIndex local_38;
  
  local_res18.FaceIndex = param_2->FaceIndex;
  local_res18.ArrayIndex = param_2->ArrayIndex;
  iVar1 = param_2->MipIndex;
  pFVar7 = (FRHITextureDesc *)(**(code **)(**(longlong **)param_1 + 0x20))();
  local_38.FaceIndex = local_res18.FaceIndex;
  local_38.ArrayIndex = local_res18.ArrayIndex;
  local_res10 = 0;
  local_res8 = 0;
  local_38.MipIndex = iVar1;
  uVar8 = VulkanTexture::CalculateSubresourceOffset(pFVar7,&local_38,&local_res10,&local_res8);
  uVar6 = VulkanRHI::FStagingBuffer::GetSize(*(FStagingBuffer **)((longlong)param_1 + 8));
  uVar3 = local_res8;
  if ((ulonglong)uVar6 < uVar8 + local_res8) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Offset + SubresourceSize <= UploadBuffer->GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                       ,0x5f8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FRHITextureSubresourceInitializer *)(*pcVar2)();
      return pFVar9;
    }
  }
  uVar4 = local_res10;
  pvVar10 = VulkanRHI::FStagingBuffer::GetMappedPointer(*(FStagingBuffer **)((longlong)param_1 + 8))
  ;
  __return_storage_ptr__->Data = (void *)((longlong)pvVar10 + uVar8);
  __return_storage_ptr__->Size = uVar3;
  __return_storage_ptr__->Stride = uVar4;
  return __return_storage_ptr__;
}

// Call @ 145b9ffb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkPipelineStageFlagBits": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanDynamicRHI::DumpCrashMarkers'::__l54::<lambda_4>,void,FVulkanQueue_&>::
Call(void *param_1,FVulkanQueue *param_2)

{
  VkQueue_T *pVVar1;
  code *pcVar2;
  _func___cdecl_void_VkQueue_T_ptr_uint_ptr_VkCheckpointDataNV_ptr *p_Var3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  char *_Str;
  size_t sVar7;
  FOutputDeviceRedirector *this;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStackY_1b8 [32];
  uint auStack_188 [2];
  ForAnyElementType FStack_180;
  uint auStack_178 [2];
  FString FStack_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pVVar1 = param_2->Queue;
  uVar8 = 0;
  FStack_180.Data = (FScriptContainerElement *)0x0;
  auStack_178[0] = 0;
  auStack_178[1] = 0;
  auStack_188[0] = 0;
  (*VulkanDynamicAPI::vkGetQueueCheckpointDataNV)(pVVar1,auStack_188,(VkCheckpointDataNV *)0x0);
  uVar6 = auStack_188[0];
  if (auStack_188[0] != 0) {
    iVar5 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,auStack_188[0],&FStack_180,(int *)auStack_178,(int *)(auStack_178 + 1)
                      );
    DefaultConstructItems<_FVulkanDynamicRHI::DumpCrashMarkers_::__l54::FCheckpointDataNV,int>
              (FStack_180.Data + (longlong)iVar5 * 0x20,uVar6);
    p_Var3 = VulkanDynamicAPI::vkGetQueueCheckpointDataNV;
    if (((int)auStack_178[0] < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*p_Var3)(pVVar1,auStack_188,(VkCheckpointDataNV *)FStack_180.Data);
    if ((auStack_188[0] != auStack_178[0]) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Num == Checkpoints.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUtil.cpp"
                           ,0x3d0,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (auStack_188[0] != 0) {
      do {
        uVar10 = ~uVar8 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar8 < (int)auStack_178[0]) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar9 = (longlong)(int)uVar8 * 0x20;
        if ((*(int *)(FStack_180.Data + lVar9) != 0x3b9deeb0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Checkpoints[Index].sType == VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUtil.cpp"
                               ,0x3d3,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = 0;
        if ((int)uVar8 < (int)auStack_178[0]) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (1 < (byte)LogVulkanRHI._0_1_) {
          FRHIBreadcrumbNode::GetFullPath
                    (*(FRHIBreadcrumbNode **)(FStack_180.Data + lVar9 + 0x18),&FStack_170);
          uVar6 = 0;
          if ((int)uVar8 < (int)auStack_178[0]) {
            uVar6 = uVar10;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          uVar6 = 0;
          if ((int)uVar8 < (int)auStack_178[0]) {
            uVar6 = uVar10;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          _Str = string_VkPipelineStageFlagBits
                           (*(VkPipelineStageFlagBits *)(FStack_180.Data + lVar9 + 0x10));
          TStack_158._padding_ = 0;
          if (_Str == (char *)0x0) {
            TStack_158.Ptr = (wchar_t *)0x0;
            TStack_158.StringLength = 0;
          }
          else {
            sVar7 = strlen(_Str);
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&TStack_158,_Str,(int)sVar7,Yes);
          }
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
          if ((void *)TStack_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_158._padding_);
          }
          if (FStack_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_170.Data.AllocatorInstance.Data);
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < auStack_188[0]);
    }
    this = GetGlobalLogSingleton();
    FOutputDeviceRedirector::Panic(this);
  }
  if ((VkCheckpointDataNV *)FStack_180.Data != (VkCheckpointDataNV *)0x0) {
    FMemory::Free(FStack_180.Data);
  }
  return;
}

// Call @ 145b9ffc0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanDynamicRHI::DumpCrashMarkers'::__l57::<lambda_5>,void,FVulkanQueue_&>::
Call(void *param_1,FVulkanQueue *param_2)

{
  FScriptContainerElement *pFVar1;
  EVulkanQueueType EVar2;
  FVulkanDiagnosticBuffer *pFVar3;
  TSet<TTuple<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this;
  TNode *pTVar4;
  TNode *pTVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  char cVar12;
  undefined1 auStackX_10 [8];
  TKeyInitializer<FRHIBreadcrumbState::FQueueID_&&> TStackX_18;
  undefined4 uStackX_20;
  char cStackX_24;
  FVulkanPayload *pFStack_68;
  undefined4 *puStack_60;
  ForAnyElementType FStack_58;
  int iStack_50;
  int aiStack_4c [3];
  
  pFVar3 = (param_2->DiagnosticBuffer).Ptr;
  if (pFVar3 != (FVulkanDiagnosticBuffer *)0x0) {
    EVar2 = param_2->QueueType;
    GetVulkanQueueTypeName(EVar2);
    if (EVar2 == Graphics) {
      cVar12 = '\x01';
    }
    else {
      if (EVar2 != AsyncCompute) {
        return;
      }
      cVar12 = '\x02';
    }
    uStackX_20 = *(undefined4 *)((longlong)param_1 + 0x10);
    this = *(TSet<TTuple<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             **)param_1;
    puStack_60 = &uStackX_20;
    cStackX_24 = cVar12;
    TSet<TTuple<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FRHIBreadcrumbState::FQueueID_&&>_>
              (this,&TStackX_18,(bool *)&puStack_60);
    lVar11 = 8;
    lVar9 = *(longlong *)&this->Elements;
    FStack_58.Data = (FScriptContainerElement *)0x0;
    iStack_50 = 0;
    aiStack_4c[0] = 0;
    while (iVar7 = iStack_50, pTVar4 = ((param_2->PendingInterrupt).Tail)->NextNode,
          pTVar4 != (TNode *)0x0) {
      pFStack_68 = pTVar4->Item;
      pTVar5 = (param_2->PendingInterrupt).Tail;
      (param_2->PendingInterrupt).Tail = pTVar4;
      pTVar4->Item = (FVulkanPayload *)0x0;
      ::operator_delete(pTVar5,0x10);
      if (((FStack_58.Data <= (FScriptContainerElement *)&pFStack_68) &&
          ((FScriptContainerElement *)&pFStack_68 < FStack_58.Data + (longlong)aiStack_4c[0] * 8))
         && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (iStack_50 == aiStack_4c[0]) {
        iStack_50 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&FStack_58,aiStack_4c);
      }
      *(FVulkanPayload **)(FStack_58.Data + (longlong)iStack_50 * 8) = pFStack_68;
      iStack_50 = iStack_50 + 1;
    }
    pFVar1 = FStack_58.Data + (longlong)iStack_50 * 8;
    FVar10.Data = FStack_58.Data;
    while( true ) {
      if (iStack_50 != iVar7) {
        `TCheckedPointerIterator<FVulkanPayload_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStackX_10);
      }
      if (FVar10.Data == pFVar1) break;
      if (((*(FVulkanPayload **)FVar10.Data)->BreadcrumbRange).First != (FRHIBreadcrumbNode *)0x0) {
        TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<FRHIBreadcrumbRange_const_&>
                  ((TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_> *)
                   ((longlong)(int)TStackX_18.Key * 0x20 + lVar9 + 8),
                   &(*(FVulkanPayload **)FVar10.Data)->BreadcrumbRange);
      }
      FVar10.Data = FVar10.Data + 8;
    }
    VulkanRHI::FVulkanAllocation::InvalidateMappedMemory(&pFVar3->Allocation,pFVar3->Device);
    if ((cVar12 == '\x01') || (lVar9 = 0xc, cVar12 != '\x02')) {
      lVar9 = 4;
    }
    *(undefined4 *)
     ((ulonglong)*(uint *)((longlong)param_1 + 0x10) * 0x10 + *(longlong *)((longlong)param_1 + 8) +
     lVar9) = *(undefined4 *)(pFVar3->_padding_ + 0x604);
    VulkanRHI::FVulkanAllocation::InvalidateMappedMemory(&pFVar3->Allocation,pFVar3->Device);
    if ((cVar12 == '\x01') || (cVar12 != '\x02')) {
      lVar11 = 0;
    }
    *(undefined4 *)
     (lVar11 + (ulonglong)*(uint *)((longlong)param_1 + 0x10) * 0x10 +
               *(longlong *)((longlong)param_1 + 8)) = *(undefined4 *)(pFVar3->_padding_ + 0x600);
    if (FStack_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data);
    }
  }
  return;
}

// Call @ 145bca5f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanViewport::FVulkanViewport'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FVulkanGenericPlatformWindowContext *pFVar1;
  FVulkanViewport *this;
  IRHICommandContext *pIVar2;
  longlong lVar3;
  undefined8 *puVar4;
  FVulkanCommandListContext *pFVar5;
  
  pFVar1 = *(FVulkanGenericPlatformWindowContext **)param_1;
  this = *(FVulkanViewport **)((longlong)param_1 + 8);
  if (((GRHICommandList.bLatchedBypass) && ((param_2->field_0x29b & 0x20) != 0)) ||
     (param_2->field_0x64 != '\0')) {
    pIVar2 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_2);
    lVar3 = (**(code **)(pIVar2->_padding_ + 0x148))(pIVar2);
    pFVar5 = (FVulkanCommandListContext *)(lVar3 + -0x50);
    if (lVar3 == 0) {
      pFVar5 = (FVulkanCommandListContext *)0x0;
    }
    FVulkanViewport::CreateSwapchain(this,pFVar5,(FVulkanSwapChainRecreateInfo *)0x0,pFVar1);
  }
  else {
    puVar4 = FMemStackBase::Alloc((FMemStackBase *)param_2,0x28,8);
    *(int *)&param_2->field_0x60 = *(int *)&param_2->field_0x60 + 1;
    **(undefined8 **)&param_2->field_0x30 = puVar4;
    *(undefined8 **)&param_2->field_0x30 = puVar4 + 1;
    puVar4[1] = 0;
    *puVar4 = &TRHILambdaCommand<FRHICommandListImmediate,``FVulkanViewport::FVulkanViewport'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar4[2] = pFVar1;
    puVar4[3] = this;
    puVar4[4] = L"TRHILambdaCommand";
  }
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_2);
  return;
}

// Call @ 145bca600

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanViewport::OnSystemResolutionChanged'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FVulkanViewport::RecreateSwapchainFromRT
            (*(FVulkanViewport **)param_1,param_2,(*(FVulkanViewport **)param_1)->PixelFormat,
             *(FVulkanGenericPlatformWindowContext **)((longlong)param_1 + 8));
  return;
}

// Call @ 145bca620

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanDynamicRHI::RHIResizeViewport'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FVulkanViewport::Resize
            (*(FVulkanViewport **)param_1,param_2,*(uint *)((longlong)param_1 + 8),
             *(uint *)((longlong)param_1 + 0xc),*(bool *)((longlong)param_1 + 0x10),PF_Unknown,
             *(FVulkanGenericPlatformWindowContext **)((longlong)param_1 + 0x18));
  return;
}

// Call @ 145bca660

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanViewport::Tick'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>::Call
          (void *param_1,FRHICommandListImmediate *param_2)

{
  FVulkanViewport::RecreateSwapchainFromRT
            (*(FVulkanViewport **)param_1,param_2,(*(FVulkanViewport **)param_1)->PixelFormat,
             *(FVulkanGenericPlatformWindowContext **)((longlong)param_1 + 8));
  return;
}

// Call @ 145bca680

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVulkanDynamicRHI::RHIResizeViewport'::__l15::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FVulkanViewport::Resize
            (*(FVulkanViewport **)param_1,param_2,*(uint *)((longlong)param_1 + 8),
             *(uint *)((longlong)param_1 + 0xc),*(bool *)((longlong)param_1 + 0x10),
             *(EPixelFormat *)((longlong)param_1 + 0x11),
             *(FVulkanGenericPlatformWindowContext **)((longlong)param_1 + 0x18));
  return;
}

