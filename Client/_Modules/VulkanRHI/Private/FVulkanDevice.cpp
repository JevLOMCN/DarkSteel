// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 43

// FVulkanDevice @ 145b00940

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
/* WARNING: Enum "Type": Some values do not have unique names */

FVulkanDevice * __thiscall
FVulkanDevice::FVulkanDevice
          (FVulkanDevice *this,FVulkanDynamicRHI *param_1,VkPhysicalDevice_T *param_2)

{
  float fVar1;
  VkPhysicalDeviceType VVar2;
  VkPhysicalDevice_T *pVVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  VkPhysicalDeviceProperties *pVVar10;
  TMap<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
  *pTVar11;
  undefined8 *puVar12;
  size_t sVar13;
  EGpuVendorId EVar14;
  longlong lVar15;
  VkPhysicalDeviceProperties *pVVar16;
  char *pcVar17;
  bool bVar18;
  undefined1 auStack_3d8 [32];
  undefined8 local_3b8;
  uint local_3b0;
  uint local_3a8;
  uint local_3a0;
  FVulkanDevice *local_398 [2];
  undefined1 local_388 [256];
  void *local_288;
  wchar_t *local_280;
  int local_278;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_3d8;
  this->Device = (VkDevice_T *)0x0;
  *(undefined8 *)&(this->DeviceMemoryManager).Allocations = 0;
  *(undefined8 *)&(this->DeviceMemoryManager).Allocations.field_0x8 = 0;
  *(undefined8 *)&(this->DeviceMemoryManager).Allocations.field_0x20 = 0;
  *(undefined4 *)&(this->DeviceMemoryManager).Allocations.field_0x28 = 0;
  *(undefined4 *)&(this->DeviceMemoryManager).Allocations.field_0x2c = 0x80;
  *(undefined4 *)&(this->DeviceMemoryManager).Allocations.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DeviceMemoryManager).Allocations.field_0x34 = 0;
  *(undefined8 *)&(this->DeviceMemoryManager).Allocations.field_0x40 = 0;
  *(undefined4 *)&(this->DeviceMemoryManager).Allocations.field_0x48 = 0;
  (this->DeviceMemoryManager).MemoryUpdateTime = 0.0;
  (this->DeviceMemoryManager).DeviceHandle = (VkDevice_T *)0x0;
  (this->DeviceMemoryManager).Device = (FVulkanDevice *)0x0;
  (this->DeviceMemoryManager).NumAllocations = 0;
  (this->DeviceMemoryManager).PeakNumAllocations = 0;
  (this->DeviceMemoryManager).bHasUnifiedMemory = false;
  (this->DeviceMemoryManager).bSupportsMemoryless = false;
  (this->DeviceMemoryManager).HeapInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeviceMemoryManager).HeapInfos.ArrayNum = 0;
  (this->DeviceMemoryManager).HeapInfos.ArrayMax = 0;
  (this->DeviceMemoryManager).PrimaryHeapIndex = -1;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->DeviceMemoryManager).DeviceMemLock,4000);
  memset(&(this->DeviceMemoryManager).MemoryBudget,0,0x110);
  memset(&(this->DeviceMemoryManager).MemoryProperties,0,0x208);
  (this->MemoryManager).Device = this;
  (this->MemoryManager).DeviceMemoryManager = &this->DeviceMemoryManager;
  (this->MemoryManager).ResourceTypeHeaps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MemoryManager).ResourceTypeHeaps.ArrayNum = 0;
  (this->MemoryManager).ResourceTypeHeaps.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->MemoryManager).UsedFreeBufferAllocationsLock,4000);
  (this->MemoryManager).UsedBufferAllocations[0].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MemoryManager).UsedBufferAllocations[0].ArrayNum = 0;
  (this->MemoryManager).UsedBufferAllocations[0].ArrayMax = 0;
  (this->MemoryManager).UsedBufferAllocations[1].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MemoryManager).UsedBufferAllocations[1].ArrayNum = 0;
  (this->MemoryManager).UsedBufferAllocations[1].ArrayMax = 0;
  (this->MemoryManager).UsedBufferAllocations[2].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MemoryManager).UsedBufferAllocations[2].ArrayNum = 0;
  (this->MemoryManager).UsedBufferAllocations[2].ArrayMax = 0;
  (this->MemoryManager).UsedBufferAllocations[3].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MemoryManager).UsedBufferAllocations[3].ArrayNum = 0;
  (this->MemoryManager).UsedBufferAllocations[3].ArrayMax = 0;
  (this->MemoryManager).UsedBufferAllocations[4].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MemoryManager).UsedBufferAllocations[4].ArrayNum = 0;
  (this->MemoryManager).UsedBufferAllocations[4].ArrayMax = 0;
  (this->MemoryManager).UsedBufferAllocations[5].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MemoryManager).UsedBufferAllocations[5].ArrayNum = 0;
  (this->MemoryManager).UsedBufferAllocations[5].ArrayMax = 0;
  (this->MemoryManager).UsedBufferAllocations[6].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MemoryManager).UsedBufferAllocations[6].ArrayNum = 0;
  (this->MemoryManager).UsedBufferAllocations[6].ArrayMax = 0;
  (this->MemoryManager).UsedBufferAllocations[7].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MemoryManager).UsedBufferAllocations[7].ArrayNum = 0;
  (this->MemoryManager).UsedBufferAllocations[7].ArrayMax = 0;
  (this->MemoryManager).FreeBufferAllocations[0].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MemoryManager).FreeBufferAllocations[0].ArrayNum = 0;
  (this->MemoryManager).FreeBufferAllocations[0].ArrayMax = 0;
  (this->MemoryManager).FreeBufferAllocations[1].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MemoryManager).FreeBufferAllocations[1].ArrayNum = 0;
  (this->MemoryManager).FreeBufferAllocations[1].ArrayMax = 0;
  (this->MemoryManager).FreeBufferAllocations[2].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MemoryManager).FreeBufferAllocations[2].ArrayNum = 0;
  (this->MemoryManager).FreeBufferAllocations[2].ArrayMax = 0;
  (this->MemoryManager).FreeBufferAllocations[3].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MemoryManager).FreeBufferAllocations[3].ArrayNum = 0;
  (this->MemoryManager).FreeBufferAllocations[3].ArrayMax = 0;
  (this->MemoryManager).FreeBufferAllocations[4].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MemoryManager).FreeBufferAllocations[4].ArrayNum = 0;
  (this->MemoryManager).FreeBufferAllocations[4].ArrayMax = 0;
  (this->MemoryManager).FreeBufferAllocations[5].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MemoryManager).FreeBufferAllocations[5].ArrayNum = 0;
  (this->MemoryManager).FreeBufferAllocations[5].ArrayMax = 0;
  (this->MemoryManager).FreeBufferAllocations[6].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MemoryManager).FreeBufferAllocations[6].ArrayNum = 0;
  (this->MemoryManager).FreeBufferAllocations[6].ArrayMax = 0;
  (this->MemoryManager).FreeBufferAllocations[7].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MemoryManager).FreeBufferAllocations[7].ArrayNum = 0;
  (this->MemoryManager).FreeBufferAllocations[7].ArrayMax = 0;
  (this->MemoryManager).AllBufferAllocationsLock.Mutex.Mutex.Ptr = (void *)0x0;
  (this->MemoryManager).AllBufferAllocations.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->MemoryManager).AllBufferAllocations.ArrayNum = 0;
  (this->MemoryManager).AllBufferAllocations.ArrayMax = 0;
  (this->MemoryManager).AllBufferAllocationsFreeListHead = -1;
  (this->MemoryManager).PendingEvictBytes = 0;
  (this->MemoryManager).bIsEvicting = false;
  (this->MemoryManager).bWantEviction = false;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->MemoryManager).UBAllocations,4000);
  (this->MemoryManager).UBAllocations.PendingFree.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MemoryManager).UBAllocations.PendingFree.ArrayNum = 0;
  (this->MemoryManager).UBAllocations.PendingFree.ArrayMax = 0;
  (this->MemoryManager).UBAllocations.Peak = 0;
  (this->DeferredDeletionQueue).Device = this;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&(this->DeferredDeletionQueue).CS,4000);
  (this->DeferredDeletionQueue).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredDeletionQueue).Entries.ArrayNum = 0;
  (this->DeferredDeletionQueue).Entries.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->StagingManager,4000);
  (this->StagingManager).UsedStagingBuffers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StagingManager).UsedStagingBuffers.ArrayNum = 0;
  (this->StagingManager).UsedStagingBuffers.ArrayMax = 0;
  *(undefined8 *)&(this->StagingManager).PendingFreeStagingBuffers = 0;
  *(undefined8 *)&(this->StagingManager).PendingFreeStagingBuffers.field_0x8 = 0;
  *(undefined8 *)&(this->StagingManager).PendingFreeStagingBuffers.field_0x20 = 0;
  *(undefined4 *)&(this->StagingManager).PendingFreeStagingBuffers.field_0x28 = 0;
  *(undefined4 *)&(this->StagingManager).PendingFreeStagingBuffers.field_0x2c = 0x80;
  *(undefined4 *)&(this->StagingManager).PendingFreeStagingBuffers.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StagingManager).PendingFreeStagingBuffers.field_0x34 = 0;
  *(undefined8 *)&(this->StagingManager).PendingFreeStagingBuffers.field_0x40 = 0;
  *(undefined4 *)&(this->StagingManager).PendingFreeStagingBuffers.field_0x48 = 0;
  (this->StagingManager).FreeStagingBuffers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StagingManager).FreeStagingBuffers.ArrayNum = 0;
  (this->StagingManager).FreeStagingBuffers.ArrayMax = 0;
  (this->StagingManager).PeakUsedMemory = 0;
  (this->StagingManager).UsedMemory = 0;
  (this->StagingManager).Device = (FVulkanDevice *)0x0;
  (this->FenceManager).Device = this;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&(this->FenceManager).FenceLock,4000);
  (this->FenceManager).FreeFences.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar11 = (this->ShaderFactory).ShaderMap;
  (this->FenceManager).FreeFences.ArrayNum = 0;
  (this->FenceManager).FreeFences.ArrayMax = 0;
  (this->FenceManager).UsedFences.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar15 = 0xc;
  (this->FenceManager).UsedFences.ArrayNum = 0;
  (this->FenceManager).UsedFences.ArrayMax = 0;
  this->TempBlockAllocator = (FTempBlockAllocator *)0x0;
  this->TransientHeapCache = (FVulkanTransientHeapCache *)0x0;
  this->DescriptorSetCache = (FVulkanDescriptorSetCache *)0x0;
  this->DescriptorPoolsManager = (FVulkanDescriptorPoolsManager *)0x0;
  this->BindlessDescriptorManager = (FVulkanBindlessDescriptorManager *)0x0;
  (this->ShaderFactory).RWLock[0].Mutex.Mutex.Ptr = (void *)0x0;
  (this->ShaderFactory).RWLock[1].Mutex.Mutex.Ptr = (void *)0x0;
  (this->ShaderFactory).RWLock[2].Mutex.Mutex.Ptr = (void *)0x0;
  (this->ShaderFactory).RWLock[3].Mutex.Mutex.Ptr = (void *)0x0;
  (this->ShaderFactory).RWLock[4].Mutex.Mutex.Ptr = (void *)0x0;
  (this->ShaderFactory).RWLock[5].Mutex.Mutex.Ptr = (void *)0x0;
  (this->ShaderFactory).RWLock[6].Mutex.Mutex.Ptr = (void *)0x0;
  (this->ShaderFactory).RWLock[7].Mutex.Mutex.Ptr = (void *)0x0;
  (this->ShaderFactory).RWLock[8].Mutex.Mutex.Ptr = (void *)0x0;
  (this->ShaderFactory).RWLock[9].Mutex.Mutex.Ptr = (void *)0x0;
  (this->ShaderFactory).RWLock[10].Mutex.Mutex.Ptr = (void *)0x0;
  (this->ShaderFactory).RWLock[0xb].Mutex.Mutex.Ptr = (void *)0x0;
  do {
    *(undefined8 *)pTVar11 = 0;
    *(undefined8 *)&pTVar11->field_0x8 = 0;
    *(undefined8 *)&pTVar11->field_0x20 = 0;
    *(undefined4 *)&pTVar11->field_0x28 = 0;
    *(undefined4 *)&pTVar11->field_0x2c = 0x80;
    *(undefined4 *)&pTVar11->field_0x30 = 0xffffffff;
    *(undefined4 *)&pTVar11->field_0x34 = 0;
    *(undefined8 *)&pTVar11->field_0x40 = 0;
    *(undefined4 *)&pTVar11->field_0x48 = 0;
    pTVar11 = pTVar11 + 1;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  this->Gpu = param_2;
  (this->FragmentShadingRates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FragmentShadingRates).ArrayNum = 0;
  (this->FragmentShadingRates).ArrayMax = 0;
  this->RayTracingCompactionRequestHandler = (FVulkanRayTracingCompactionRequestHandler *)0x0;
  this->RayTracingPipelineLibraryCache = (FVulkanRayTracingPipelineLibraryCache *)0x0;
  memset(&this->PhysicalDeviceFeatures,0,0x240);
  (this->QueueFamilyProps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueueFamilyProps).ArrayNum = 0;
  (this->QueueFamilyProps).ArrayMax = 0;
  *(undefined8 *)&this->ExtensionFormatProperties = 0;
  *(undefined8 *)&(this->ExtensionFormatProperties).field_0x8 = 0;
  *(undefined8 *)&(this->ExtensionFormatProperties).field_0x20 = 0;
  *(undefined4 *)&(this->ExtensionFormatProperties).field_0x28 = 0;
  *(undefined4 *)&(this->ExtensionFormatProperties).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExtensionFormatProperties).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExtensionFormatProperties).field_0x34 = 0;
  *(undefined8 *)&(this->ExtensionFormatProperties).field_0x40 = 0;
  *(undefined4 *)&(this->ExtensionFormatProperties).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->QueryPoolLock,4000);
  this->OcclusionQueryPoolSize = 0x100;
  (this->FreeQueryPools).Elements[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeQueryPools).Elements[0].ArrayNum = 0;
  (this->FreeQueryPools).Elements[0].ArrayMax = 0;
  (this->FreeQueryPools).Elements[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeQueryPools).Elements[1].ArrayNum = 0;
  (this->FreeQueryPools).Elements[1].ArrayMax = 0;
  (this->FreeQueryPools).Elements[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeQueryPools).Elements[2].ArrayNum = 0;
  (this->FreeQueryPools).Elements[2].ArrayMax = 0;
  (this->FreeQueryPools).Elements[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeQueryPools).Elements[3].ArrayNum = 0;
  (this->FreeQueryPools).Elements[3].ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->BarrierEventLock,4000);
  (this->BarrierEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BarrierEvents).ArrayNum = 0;
  (this->BarrierEvents).ArrayMax = 0;
  (this->ActiveQueueFamilies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveQueueFamilies).ArrayNum = 0;
  (this->ActiveQueueFamilies).ArrayMax = 0;
  this->VendorId = NotQueried;
  *(undefined8 *)&this->SamplerMap = 0;
  *(undefined8 *)&(this->SamplerMap).field_0x8 = 0;
  *(undefined8 *)&(this->SamplerMap).field_0x20 = 0;
  this->PresentQueue = (FVulkanQueue *)0x0;
  this->bPresentOnComputeQueue = false;
  *(undefined4 *)&(this->SamplerMap).field_0x28 = 0;
  *(undefined4 *)&(this->SamplerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SamplerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SamplerMap).field_0x34 = 0;
  *(undefined8 *)&(this->SamplerMap).field_0x40 = 0;
  *(undefined4 *)&(this->SamplerMap).field_0x48 = 0;
  this->ImmediateContext = (FVulkanCommandListContextImmediate *)0x0;
  (this->OptionalDeviceExtensions).field0_0x0.Packed = 0;
  memset(&this->OptionalDeviceExtensionProperties,0,0x518);
  (this->DeviceExtensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeviceExtensions).ArrayNum = 0;
  (this->DeviceExtensions).ArrayMax = 0;
  this->ValidationCache = (VkValidationCacheEXT_T *)0x0;
  this->bUseLegacyDebugMarkerExt = false;
  (this->DebugMarkers).SetDebugName =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkDebugUtilsObjectNameInfoEXT_ptr *)0x0;
  (this->DebugMarkers).CmdBeginDebugLabel =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkDebugUtilsLabelEXT_ptr *)0x0;
  (this->DebugMarkers).CmdEndDebugLabel = (_func___cdecl_void_VkCommandBuffer_T_ptr *)0x0;
  this->PipelineStateCache = (FVulkanPipelineStateCacheManager *)0x0;
  this->RHI = param_1;
  (this->Queues).Elements[0] = (FVulkanQueue *)0x0;
  (this->Queues).Elements[1] = (FVulkanQueue *)0x0;
  (this->Queues).Elements[2] = (FVulkanQueue *)0x0;
  memset(&this->GpuProps,0,0x338);
  memset(this->FormatProperties,0,0x8ac);
  memset(this->PixelFormatComponentMapping,0,0x5e0);
  (this->GpuIdProps).sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES;
  *(undefined4 *)&(this->GpuIdProps).field_0x4 = 0;
  (this->GpuIdProps).deviceUUID[0] = '\0';
  (this->GpuIdProps).deviceUUID[1] = '\0';
  (this->GpuIdProps).deviceUUID[2] = '\0';
  (this->GpuIdProps).deviceUUID[3] = '\0';
  (this->GpuIdProps).deviceUUID[4] = '\0';
  (this->GpuIdProps).deviceUUID[5] = '\0';
  (this->GpuIdProps).deviceUUID[6] = '\0';
  (this->GpuIdProps).deviceUUID[7] = '\0';
  (this->GpuIdProps).deviceUUID[8] = '\0';
  (this->GpuIdProps).deviceUUID[9] = '\0';
  (this->GpuIdProps).deviceUUID[10] = '\0';
  (this->GpuIdProps).deviceUUID[0xb] = '\0';
  (this->GpuIdProps).deviceUUID[0xc] = '\0';
  (this->GpuIdProps).deviceUUID[0xd] = '\0';
  (this->GpuIdProps).deviceUUID[0xe] = '\0';
  (this->GpuIdProps).deviceUUID[0xf] = '\0';
  (this->GpuIdProps).driverUUID[0] = '\0';
  (this->GpuIdProps).driverUUID[1] = '\0';
  (this->GpuIdProps).driverUUID[2] = '\0';
  (this->GpuIdProps).driverUUID[3] = '\0';
  (this->GpuIdProps).driverUUID[4] = '\0';
  (this->GpuIdProps).driverUUID[5] = '\0';
  (this->GpuIdProps).driverUUID[6] = '\0';
  (this->GpuIdProps).driverUUID[7] = '\0';
  (this->GpuIdProps).driverUUID[8] = '\0';
  (this->GpuIdProps).driverUUID[9] = '\0';
  (this->GpuIdProps).driverUUID[10] = '\0';
  (this->GpuIdProps).driverUUID[0xb] = '\0';
  (this->GpuIdProps).driverUUID[0xc] = '\0';
  (this->GpuIdProps).driverUUID[0xd] = '\0';
  (this->GpuIdProps).driverUUID[0xe] = '\0';
  (this->GpuIdProps).driverUUID[0xf] = '\0';
  (this->GpuIdProps).deviceLUID[0] = '\0';
  (this->GpuIdProps).deviceLUID[1] = '\0';
  (this->GpuIdProps).deviceLUID[2] = '\0';
  (this->GpuIdProps).deviceLUID[3] = '\0';
  (this->GpuIdProps).deviceLUID[4] = '\0';
  (this->GpuIdProps).deviceLUID[5] = '\0';
  (this->GpuIdProps).deviceLUID[6] = '\0';
  (this->GpuIdProps).deviceLUID[7] = '\0';
  (this->GpuIdProps).deviceNodeMask = 0;
  (this->GpuIdProps).deviceLUIDValid = 0;
  (this->GpuSubgroupProps).sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES;
  *(undefined8 *)&(this->GpuSubgroupProps).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->GpuSubgroupProps).pNext + 4) = 0;
  (this->GpuSubgroupProps).supportedStages = 0;
  (this->GpuSubgroupProps).supportedOperations = 0;
  (this->GpuSubgroupProps).quadOperationsInAllStages = 0;
  local_388._0_4_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2;
  memset(local_388 + 4,0,0x344);
  pVVar3 = this->Gpu;
  (this->GpuIdProps).pNext = &this->GpuSubgroupProps;
  local_388._8_8_ = &this->GpuIdProps;
  (*VulkanDynamicAPI::vkGetPhysicalDeviceProperties2)
            (pVVar3,(VkPhysicalDeviceProperties2 *)local_388);
  lVar15 = 6;
  puVar9 = (undefined8 *)(local_388 + 0x10);
  pVVar10 = &this->GpuProps;
  do {
    pVVar16 = pVVar10;
    puVar12 = puVar9;
    pVVar10 = (VkPhysicalDeviceProperties *)(pVVar16->deviceName + 0x6c);
    uVar4 = *puVar12;
    uVar5 = puVar12[1];
    uVar6 = puVar12[2];
    uVar7 = puVar12[3];
    pVVar16->apiVersion = (int)uVar4;
    pVVar16->driverVersion = (int)((ulonglong)uVar4 >> 0x20);
    pVVar16->vendorID = (int)uVar5;
    pVVar16->deviceID = (int)((ulonglong)uVar5 >> 0x20);
    uVar4 = puVar12[4];
    uVar5 = puVar12[5];
    pVVar16->deviceType = (int)uVar6;
    pVVar16->deviceName[0] = (char)((ulonglong)uVar6 >> 0x20);
    pVVar16->deviceName[1] = (char)((ulonglong)uVar6 >> 0x28);
    pVVar16->deviceName[2] = (char)((ulonglong)uVar6 >> 0x30);
    pVVar16->deviceName[3] = (char)((ulonglong)uVar6 >> 0x38);
    *(undefined8 *)(pVVar16->deviceName + 4) = uVar7;
    uVar6 = puVar12[6];
    uVar7 = puVar12[7];
    *(undefined8 *)(pVVar16->deviceName + 0xc) = uVar4;
    *(undefined8 *)(pVVar16->deviceName + 0x14) = uVar5;
    uVar4 = puVar12[8];
    uVar5 = puVar12[9];
    *(undefined8 *)(pVVar16->deviceName + 0x1c) = uVar6;
    *(undefined8 *)(pVVar16->deviceName + 0x24) = uVar7;
    uVar6 = puVar12[10];
    uVar7 = puVar12[0xb];
    *(undefined8 *)(pVVar16->deviceName + 0x2c) = uVar4;
    *(undefined8 *)(pVVar16->deviceName + 0x34) = uVar5;
    uVar4 = puVar12[0xc];
    uVar5 = puVar12[0xd];
    *(undefined8 *)(pVVar16->deviceName + 0x3c) = uVar6;
    *(undefined8 *)(pVVar16->deviceName + 0x44) = uVar7;
    uVar6 = puVar12[0xe];
    uVar7 = puVar12[0xf];
    *(undefined8 *)(pVVar16->deviceName + 0x4c) = uVar4;
    *(undefined8 *)(pVVar16->deviceName + 0x54) = uVar5;
    *(undefined8 *)(pVVar16->deviceName + 0x5c) = uVar6;
    *(undefined8 *)(pVVar16->deviceName + 100) = uVar7;
    lVar15 = lVar15 + -1;
    puVar9 = puVar12 + 0x10;
  } while (lVar15 != 0);
  uVar4 = puVar12[0x10];
  uVar5 = puVar12[0x11];
  uVar6 = puVar12[0x12];
  uVar7 = puVar12[0x13];
  pVVar10->apiVersion = (int)uVar4;
  pVVar10->driverVersion = (int)((ulonglong)uVar4 >> 0x20);
  *(undefined8 *)(pVVar16->deviceName + 0x74) = uVar5;
  uVar5 = puVar12[0x14];
  uVar8 = puVar12[0x15];
  uVar4 = puVar12[0x16];
  *(undefined8 *)(pVVar16->deviceName + 0x7c) = uVar6;
  *(undefined8 *)(pVVar16->deviceName + 0x84) = uVar7;
  *(undefined8 *)(pVVar16->deviceName + 0x8c) = uVar5;
  *(undefined8 *)(pVVar16->deviceName + 0x94) = uVar8;
  *(undefined8 *)(pVVar16->deviceName + 0x9c) = uVar4;
  EVar14 = (this->GpuProps).vendorID;
  if (EVar14 < 0x14e5) {
    if (EVar14 == Broadcom) goto LAB_145b0109a;
    if (EVar14 < 0x10df) {
      if (EVar14 == Nvidia) goto LAB_145b0109a;
      if (EVar14 == NotQueried) {
        EVar14 = NotQueried;
        goto LAB_145b0109a;
      }
      if ((EVar14 == Amd) || (EVar14 == ImgTec)) goto LAB_145b0109a;
      bVar18 = EVar14 == Apple;
    }
    else {
      if ((EVar14 == Arm) || (EVar14 == Microsoft)) goto LAB_145b0109a;
      bVar18 = EVar14 == SamsungAMD;
    }
  }
  else {
    if ((((EVar14 - Kazan < 3) || (EVar14 == VeriSilicon)) || (EVar14 == Qualcomm)) ||
       (EVar14 == Vivante)) goto LAB_145b0109a;
    bVar18 = EVar14 == Intel;
  }
  if (!bVar18) {
    EVar14 = Unknown;
  }
LAB_145b0109a:
  this->VendorId = EVar14;
  if (3 < (byte)LogVulkanRHI._0_1_) {
    pcVar17 = (this->GpuProps).deviceName;
    local_288 = (void *)0x0;
    if (pcVar17 == (char *)0x0) {
      local_280 = (wchar_t *)0x0;
      local_278 = 0;
    }
    else {
      sVar13 = strlen(pcVar17);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_388,pcVar17,
                 (int)sVar13,Yes);
    }
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    if (local_288 != (void *)0x0) {
      FMemory::Free(local_288);
    }
    if (3 < (byte)LogVulkanRHI._0_1_) {
      local_3b0 = (this->GpuProps).apiVersion;
      local_3a0 = (this->GpuProps).vendorID;
      local_3a8 = (this->GpuProps).driverVersion;
      local_3b8 = (double)(CONCAT44(local_3b8._4_4_,local_3b0) & 0xffffffff00000fff);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
  }
  if (3 < (byte)LogVulkanRHI._0_1_) {
    VVar2 = (this->GpuProps).deviceType;
    if (VVar2 == VK_PHYSICAL_DEVICE_TYPE_OTHER) {
      pcVar17 = "VK_PHYSICAL_DEVICE_TYPE_OTHER";
    }
    else if (VVar2 == VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU) {
      pcVar17 = "VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU";
    }
    else if (VVar2 == VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU) {
      pcVar17 = "VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU";
    }
    else if (VVar2 == VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU) {
      pcVar17 = "VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU";
    }
    else if (VVar2 == VK_PHYSICAL_DEVICE_TYPE_CPU) {
      pcVar17 = "VK_PHYSICAL_DEVICE_TYPE_CPU";
    }
    else {
      pcVar17 = "Unhandled VkPhysicalDeviceType";
    }
    local_288 = (void *)0x0;
    sVar13 = strlen(pcVar17);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_388,pcVar17,(int)sVar13,
               Yes);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    if (local_288 != (void *)0x0) {
      FMemory::Free(local_288);
    }
  }
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    if (3 < (byte)LogVulkanRHI._0_1_) {
      fVar1 = (this->GpuProps).limits.timestampPeriod;
      local_288 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_388,
                 "VK_TIME_DOMAIN_QUERY_PERFORMANCE_COUNTER_KHR",0x2c,Yes);
      local_3b8 = (double)fVar1;
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      if (local_288 != (void *)0x0) {
        FMemory::Free(local_288);
      }
    }
  }
  if (this->VendorId == Unknown) {
    local_398[0] = this;
    `FVulkanDevice::FVulkanDevice'::__l2::<lambda_1>::operator()(local_398);
  }
  return this;
}

// ~FVulkanDevice @ 145b05660

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

void __thiscall FVulkanDevice::~FVulkanDevice(FVulkanDevice *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  int *piVar3;
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar4;
  
  if (this->Device != (VkDevice_T *)0x0) {
    Destroy(this);
    this->Device = (VkDevice_T *)0x0;
  }
  pFVar1 = (this->DeviceExtensions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->SamplerMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SamplerMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRefCountPtr<FRHISamplerState>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRefCountPtr<FRHISamplerState>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRefCountPtr<FRHISamplerState>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SamplerMap);
  pFVar1 = (this->ActiveQueueFamilies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BarrierEvents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  lpCriticalSection = &this->BarrierEventLock;
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar4 = 4;
  do {
    piVar3 = (int *)(lpCriticalSection + -1);
    lpCriticalSection = (FWindowsRecursiveMutex *)((longlong)(lpCriticalSection + -1) + 0x18);
    lVar4 = lVar4 + -1;
    if (*(void **)(piVar3 + 6) != (void *)0x0) {
      FMemory::Free(*(void **)(piVar3 + 6));
    }
  } while (lVar4 != 0);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->QueryPoolLock);
  *(undefined4 *)&(this->ExtensionFormatProperties).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ExtensionFormatProperties).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_VkFormat,VkFormatProperties>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_VkFormat,VkFormatProperties>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ExtensionFormatProperties);
  pFVar1 = (this->QueueFamilyProps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FragmentShadingRates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVulkanShaderFactory::~FVulkanShaderFactory(&this->ShaderFactory);
  FVulkanFenceManager::~FVulkanFenceManager(&this->FenceManager);
  VulkanRHI::FStagingManager::~FStagingManager(&this->StagingManager);
  VulkanRHI::FDeferredDeletionQueue2::~FDeferredDeletionQueue2(&this->DeferredDeletionQueue);
  VulkanRHI::FMemoryManager::~FMemoryManager(&this->MemoryManager);
  VulkanRHI::FDeviceMemoryManager::~FDeviceMemoryManager(&this->DeviceMemoryManager);
  return;
}

// ChooseVariableRateShadingMethod @ 145b10010

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
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FVulkanDevice::ChooseVariableRateShadingMethod(FVulkanDevice *this)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  FOptionalVulkanDeviceExtensions *pFVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar5 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.Vulkan.VRSFormat",1);
  lVar6 = 0;
  if (plVar5 != (longlong *)0x0) {
    lVar6 = (**(code **)(*plVar5 + 0x68))(plVar5);
  }
  bVar4 = IsInParallelGameThread();
  if (bVar4) {
LAB_145b100b6:
    lVar9 = 0;
  }
  else {
    bVar4 = IsInGameThread();
    lVar9 = 4;
    if (bVar4) goto LAB_145b100b6;
  }
  iVar2 = *(int *)(lVar9 + lVar6);
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  uVar8 = (this->OptionalDeviceExtensions).field0_0x0.Packed;
  puVar1 = &(this->OptionalDeviceExtensionProperties).FragmentShadingRateFeatures.
            attachmentFragmentShadingRate;
  if ((uVar8 & 0x10) == 0) {
    if (*puVar1 == 1) {
      if (iVar2 == 4) {
        if (3 < (byte)LogVulkanRHI._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        }
      }
      else if ((iVar2 == 5) && (1 < (byte)LogVulkanRHI._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      pFVar7 = &this->OptionalDeviceExtensions;
      (pFVar7->field0_0x0).Packed = (pFVar7->field0_0x0).Packed & 0xffffffffffffffcf;
      uVar8 = (pFVar7->field0_0x0).Packed;
      (this->OptionalDeviceExtensionProperties).FragmentDensityMapFeatures.fragmentDensityMap = 0;
      (this->OptionalDeviceExtensionProperties).FragmentDensityMapFeatures.fragmentDensityMapDynamic
           = 0;
      (this->OptionalDeviceExtensionProperties).FragmentDensityMapFeatures.
      fragmentDensityMapNonSubsampledImages = 0;
      (this->OptionalDeviceExtensionProperties).FragmentDensityMap2Features.
      fragmentDensityMapDeferred = 0;
    }
  }
  else if (*puVar1 == 1) {
    if (iVar2 < 3) {
      (this->OptionalDeviceExtensionProperties).FragmentDensityMapFeatures.fragmentDensityMap = 0;
      (this->OptionalDeviceExtensionProperties).FragmentDensityMapFeatures.fragmentDensityMapDynamic
           = 0;
      (this->OptionalDeviceExtensions).field0_0x0.Packed = uVar8 & 0xffffffffffffffcf;
      (this->OptionalDeviceExtensionProperties).FragmentDensityMapFeatures.
      fragmentDensityMapNonSubsampledImages = 0;
      (this->OptionalDeviceExtensionProperties).FragmentDensityMap2Features.
      fragmentDensityMapDeferred = 0;
      return;
    }
    goto LAB_145b101e4;
  }
  if ((uVar8 & 0x10) == 0) {
    return;
  }
  if (iVar2 == 1) {
    if (3 < (byte)LogVulkanRHI._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
  }
  else if ((iVar2 == 2) && (1 < (byte)LogVulkanRHI._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
LAB_145b101e4:
  (this->OptionalDeviceExtensionProperties).FragmentShadingRateFeatures.pipelineFragmentShadingRate
       = 0;
  (this->OptionalDeviceExtensionProperties).FragmentShadingRateFeatures.primitiveFragmentShadingRate
       = 0;
  (this->OptionalDeviceExtensionProperties).FragmentShadingRateFeatures.
  attachmentFragmentShadingRate = 0;
  GRHIGlobals.VariableRateShading.SupportsPipeline = false;
  GRHIGlobals.VariableRateShading.SupportsLargerSizes = false;
  return;
}

// CmdBeginDebugLabel @ 145b10900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
`FVulkanDevice::SetupDrawMarkers'::__l55::Wrap::CmdBeginDebugLabel
          (VkCommandBuffer_T *param_1,VkDebugUtilsLabelEXT *param_2)

{
  undefined1 auStack_58 [32];
  VkDebugMarkerMarkerInfoEXT local_38;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_38.pMarkerName = param_2->pLabelName;
  local_38.pNext = (void *)0x0;
  local_38.sType = VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT;
  local_38.color._0_8_ = *(undefined8 *)param_2->color;
  local_38.color._8_8_ = *(undefined8 *)(param_2->color + 2);
  (*LegacyCmdBeginDebugLabel)(param_1,&local_38);
  return;
}

// CmdEndDebugLabel @ 145b10960

void __cdecl
`FVulkanDevice::SetupDrawMarkers'::__l55::Wrap::CmdEndDebugLabel(VkCommandBuffer_T *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145b10960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*LegacyCmdEndDebugLabel)(param_1);
  return;
}

// CreateBuffer @ 145b114f0

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

VkBuffer_T * __thiscall
FVulkanDevice::CreateBuffer(FVulkanDevice *this,ulong64 param_1,uint param_2,uint param_3)

{
  VkResult VVar1;
  VkBuffer_T *local_res8 [4];
  VkBufferCreateInfo local_48;
  
  local_48.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
  local_48.pNext = (void *)0x0;
  local_48.usage = param_2;
  if (((this->OptionalDeviceExtensions).field0_0x0.Packed & 0x1000000000) != 0) {
    local_48.usage = param_2 | 0x20000;
  }
  if ((((this->Queues).Elements[1] == (FVulkanQueue *)0x0) &&
      ((this->Queues).Elements[2] == (FVulkanQueue *)0x0)) || (GVulkanAllowConcurrentBuffer == 0)) {
    local_48.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
    local_48.queueFamilyIndexCount = 0;
    local_48.pQueueFamilyIndices = (uint *)0x0;
  }
  else {
    local_48.pQueueFamilyIndices = (uint *)(this->ActiveQueueFamilies).AllocatorInstance.Data;
    local_48.queueFamilyIndexCount = (this->ActiveQueueFamilies).ArrayNum;
    local_48.sharingMode = VK_SHARING_MODE_CONCURRENT;
  }
  local_res8[0] = (VkBuffer_T *)0x0;
  local_48.flags = param_3;
  local_48.size = param_1;
  VVar1 = (*VulkanDynamicAPI::vkCreateBuffer)
                    (this->Device,&local_48,&VulkanRHI::GAllocationCallbacks,local_res8);
  if (VVar1 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar1,
               "VulkanRHI::vkCreateBuffer(Device, &BufferCreateInfo, VULKAN_CPU_ALLOCATOR, &BufferHandle)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
               ,0x6d3);
  }
  return local_res8[0];
}

// CreateDevice @ 145b115d0

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
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVulkanDevice::CreateDevice
          (FVulkanDevice *this,TArray<char_const_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  TArray<char_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<VkPhysicalDeviceFragmentShadingRateKHR,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  undefined1 *puVar7;
  char *pcVar8;
  code *pcVar9;
  TConsoleVariableData<int> *pTVar10;
  TConsoleVariableData<int> *pTVar11;
  FVulkanDevice *this_00;
  bool bVar12;
  bool bVar13;
  int iVar14;
  VkResult VVar15;
  int iVar16;
  wchar_t *pwVar17;
  FVulkanQueue *pFVar18;
  FVulkanQueue *pFVar19;
  ulonglong uVar20;
  FVulkanQueue *pFVar21;
  size_t sVar22;
  uint uVar23;
  longlong lVar24;
  ForAnyElementType FVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auStackY_3c8 [32];
  undefined1 local_378 [4];
  uint local_374;
  uint local_370 [2];
  undefined8 local_368;
  uint local_360;
  uint local_358;
  uint uStack_354;
  uint local_350;
  uint local_34c;
  uint local_348;
  undefined1 local_344;
  undefined1 local_343;
  undefined1 local_342 [2];
  ForAnyElementType local_340;
  uint local_338;
  uint uStack_334;
  FString local_330;
  FLLMScope local_320 [2];
  undefined8 local_318;
  FString local_310;
  TArray<char_const_*,TSizedDefaultAllocator<32>_> *local_300;
  ForAnyElementType local_2f8;
  int local_2f0 [2];
  FVulkanDevice *local_2e8;
  FMemScope local_2e0;
  VkDeviceCreateInfo local_2d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  local_300 = param_1;
  local_2e8 = this;
  FLLMScope::FLLMScope(local_320,PlatformTagStart,false,None,Default,true);
  FMemScope::FMemScope(&local_2e0,PlatformTagStart,true);
  if ((this->Device != (VkDevice_T *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Device == nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                          ,0x138,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar28 = (param_2->AllocatorInstance).Data;
  local_2d8.pEnabledFeatures = &(this->PhysicalDeviceFeatures).Core_1_0;
  iVar16 = param_2->ArrayNum;
  local_2d8.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
  local_2d8._52_4_ = 0;
  local_2d8.ppEnabledExtensionNames._0_4_ = 0;
  local_2d8.ppEnabledExtensionNames._4_4_ = 0;
  pFVar26 = pFVar28 + (longlong)iVar16 * 8;
  local_2d8._4_8_ = 0;
  local_2d8._12_8_ = 0;
  local_2d8.queueCreateInfoCount = 0;
  local_2d8.pQueueCreateInfos._0_4_ = 0;
  local_2d8.pQueueCreateInfos._4_4_ = 0;
  local_2d8.enabledLayerCount = 0;
  local_2d8._36_4_ = 0;
  local_2d8.ppEnabledLayerNames._0_4_ = 0;
  local_2d8.ppEnabledLayerNames._4_4_ = 0;
  local_2d8.enabledExtensionCount = 0;
  while( true ) {
    if (param_2->ArrayNum != iVar16) {
      local_378[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_378);
    }
    if (pFVar28 == pFVar26) break;
    lVar24 = *(longlong *)pFVar28;
    if (((*(char *)(lVar24 + 0x14) == '\0') || (*(char *)(lVar24 + 0x15) == '\0')) ||
       (*(char *)(lVar24 + 0x16) == '\0')) {
      pFVar28 = pFVar28 + 8;
    }
    else {
      local_318 = *(undefined8 *)(lVar24 + 8);
      pTVar2 = &this->DeviceExtensions;
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar6 <= (FScriptContainerElement *)&local_318) &&
         ((FScriptContainerElement *)&local_318 <
          pFVar6 + (longlong)(this->DeviceExtensions).ArrayMax * 8)) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      iVar14 = (this->DeviceExtensions).ArrayNum;
      piVar1 = &(this->DeviceExtensions).ArrayMax;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->DeviceExtensions).ArrayNum = iVar14 + 1;
      *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_318;
      (**(code **)(**(longlong **)pFVar28 + 0x28))(*(longlong **)pFVar28,&local_2d8);
      pFVar28 = pFVar28 + 8;
    }
  }
  local_2d8.enabledExtensionCount = (this->DeviceExtensions).ArrayNum;
  pFVar21 = (FVulkanQueue *)0x0;
  pFVar26 = (this->DeviceExtensions).AllocatorInstance.Data;
  local_2d8.ppEnabledExtensionNames._0_4_ = SUB84(pFVar26,0);
  local_2d8.ppEnabledExtensionNames._4_4_ = (undefined4)((ulonglong)pFVar26 >> 0x20);
  local_2d8.enabledLayerCount = local_300->ArrayNum;
  if (local_2d8.enabledLayerCount == 0) {
    local_2d8.ppEnabledLayerNames._0_4_ = 0;
    local_2d8.ppEnabledLayerNames._4_4_ = 0;
  }
  else {
    pFVar26 = (local_300->AllocatorInstance).Data;
    local_2d8.ppEnabledLayerNames._0_4_ = SUB84(pFVar26,0);
    local_2d8.ppEnabledLayerNames._4_4_ = (undefined4)((ulonglong)pFVar26 >> 0x20);
  }
  iVar16 = -1;
  local_368 = (undefined1 *)CONCAT44(local_368._4_4_,0xffffffff);
  local_360 = 0xffffffff;
  local_374 = 0xffffffff;
  local_340.Data = (FScriptContainerElement *)0x0;
  local_338 = 0;
  uStack_334 = 0;
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  local_358 = 0;
  uVar30 = 0;
  pFVar19 = pFVar21;
  pFVar18 = pFVar21;
  if (0 < (this->QueueFamilyProps).ArrayNum) {
    do {
      uVar27 = (uint)pFVar19;
      uVar29 = uVar30;
      if ((int)uVar27 < (this->QueueFamilyProps).ArrayNum) {
        uVar29 = ~uVar27 >> 0x1f;
      }
      if (uVar29 == 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pTVar10 = GRHIAllowAsyncComputeCvar.Ref;
      pFVar26 = (this->QueueFamilyProps).AllocatorInstance.Data;
      bVar12 = false;
      if (((*(uint *)(pFVar26 + -0x20 + (longlong)&(pFVar18->CommandBufferPoolCS).CriticalSection) &
           1) != 0) && (iVar16 == -1)) {
        local_368 = (undefined1 *)CONCAT44(local_368._4_4_,uVar27);
        bVar12 = true;
      }
      if (((*(uint *)(pFVar26 + -0x20 + (longlong)&(pFVar18->CommandBufferPoolCS).CriticalSection) &
           2) != 0) && (local_360 == 0xffffffff)) {
        bVar13 = IsInParallelGameThread();
        if (bVar13) {
LAB_145b118e2:
          pFVar19 = pFVar21;
        }
        else {
          bVar13 = IsInGameThread();
          pFVar19 = (FVulkanQueue *)&DAT_00000004;
          if (bVar13) goto LAB_145b118e2;
        }
        pTVar11 = GAllowPresentOnComputeQueue.Ref;
        if (*(int *)((longlong)pTVar10[-4].ShadowedValue + (longlong)&pFVar19->CommandBufferPoolCS)
            == 0) {
          bVar13 = IsInParallelGameThread();
          if (bVar13) {
LAB_145b11908:
            pFVar19 = pFVar21;
          }
          else {
            bVar13 = IsInGameThread();
            pFVar19 = (FVulkanQueue *)&DAT_00000004;
            if (bVar13) goto LAB_145b11908;
          }
          if (*(int *)((longlong)pTVar11[-4].ShadowedValue + (longlong)&pFVar19->CommandBufferPoolCS
                      ) == 0) {
            pwVar17 = FCommandLine::Get();
            bVar13 = FParse::Param(pwVar17,L"ForceAsyncCompute");
            if (!bVar13) goto LAB_145b11950;
          }
        }
        if (((uint)local_368 != uVar27) &&
           (((this->OptionalDeviceExtensions).field0_0x0.Packed & 0x2020100000000) ==
            0x2020100000000)) {
          bVar12 = true;
          local_360 = uVar27;
        }
      }
LAB_145b11950:
      pTVar10 = GRHIAllowTransferQueueCvar.Ref;
      if ((((*(uint *)(pFVar26 + -0x20 + (longlong)&(pFVar18->CommandBufferPoolCS).CriticalSection)
            & 4) == 0) || (local_374 != 0xffffffff)) ||
         ((*(uint *)(pFVar26 + -0x20 + (longlong)&(pFVar18->CommandBufferPoolCS).CriticalSection) &
          3) != 0)) {
LAB_145b11c7e:
        uVar29 = local_374;
        if (bVar12) goto LAB_145b119bb;
        if (3 < (byte)LogVulkanRHI._0_1_) {
          local_330.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_330.Data.ArrayNum = 0;
          local_330.Data.ArrayMax = 0;
          if (((byte)(pFVar26 + -0x20)[(longlong)&(pFVar18->CommandBufferPoolCS).CriticalSection] &
              1) != 0) {
            ::FString::AppendChars(&local_330,L" Gfx",4);
          }
          if (((byte)(pFVar26 + -0x20)[(longlong)&(pFVar18->CommandBufferPoolCS).CriticalSection] &
              2) != 0) {
            ::FString::AppendChars(&local_330,L" Compute",8);
          }
          if (((byte)(pFVar26 + -0x20)[(longlong)&(pFVar18->CommandBufferPoolCS).CriticalSection] &
              4) != 0) {
            ::FString::AppendChars(&local_330,L" Xfer",5);
          }
          if (((byte)(pFVar26 + -0x20)[(longlong)&(pFVar18->CommandBufferPoolCS).CriticalSection] &
              8) != 0) {
            ::FString::AppendChars(&local_330,L" Sparse",7);
          }
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
          FVar25.Data = local_330.Data.AllocatorInstance.Data;
          goto LAB_145b11adc;
        }
      }
      else {
        bVar13 = IsInParallelGameThread();
        if (bVar13) {
LAB_145b1198d:
          pFVar19 = pFVar21;
        }
        else {
          bVar13 = IsInGameThread();
          pFVar19 = (FVulkanQueue *)&DAT_00000004;
          if (bVar13) goto LAB_145b1198d;
        }
        if ((*(int *)((longlong)pTVar10[-4].ShadowedValue + (longlong)&pFVar19->CommandBufferPoolCS)
             == 0) ||
           (uVar29 = uVar27,
           ((this->OptionalDeviceExtensions).field0_0x0.Packed & 0x2020100000000) != 0x2020100000000
           )) goto LAB_145b11c7e;
LAB_145b119bb:
        local_374 = uVar29;
        if (local_338 == uStack_334) {
          local_338 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x828,&local_340,(int *)&uStack_334);
        }
        lVar24 = (longlong)(int)local_338;
        local_338 = local_338 + 1;
        *(undefined8 *)(local_340.Data + lVar24 * 0x28 + 4) = 0;
        *(undefined8 *)(local_340.Data + lVar24 * 0x28 + 0xc) = 0;
        *(undefined8 *)(local_340.Data + lVar24 * 0x28 + 0x18) = 0;
        *(undefined8 *)(local_340.Data + lVar24 * 0x28 + 0x20) = 0;
        *(undefined4 *)(local_340.Data + lVar24 * 0x28) = 2;
        *(uint *)(local_340.Data + lVar24 * 0x28 + 0x14) = uVar27;
        *(undefined4 *)(local_340.Data + lVar24 * 0x28 + 0x18) =
             *(undefined4 *)
              (pFVar26 + -0x1c + (longlong)&(pFVar18->CommandBufferPoolCS).CriticalSection);
        local_358 = local_358 +
                    *(int *)(pFVar26 + -0x1c +
                            (longlong)&(pFVar18->CommandBufferPoolCS).CriticalSection);
        if (3 < (byte)LogVulkanRHI._0_1_) {
          local_310.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_310.Data.ArrayNum = 0;
          local_310.Data.ArrayMax = 0;
          if (((byte)(pFVar26 + -0x20)[(longlong)&(pFVar18->CommandBufferPoolCS).CriticalSection] &
              1) != 0) {
            ::FString::AppendChars(&local_310,L" Gfx",4);
          }
          if (((byte)(pFVar26 + -0x20)[(longlong)&(pFVar18->CommandBufferPoolCS).CriticalSection] &
              2) != 0) {
            ::FString::AppendChars(&local_310,L" Compute",8);
          }
          if (((byte)(pFVar26 + -0x20)[(longlong)&(pFVar18->CommandBufferPoolCS).CriticalSection] &
              4) != 0) {
            ::FString::AppendChars(&local_310,L" Xfer",5);
          }
          if (((byte)(pFVar26 + -0x20)[(longlong)&(pFVar18->CommandBufferPoolCS).CriticalSection] &
              8) != 0) {
            ::FString::AppendChars(&local_310,L" Sparse",7);
          }
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
          FVar25.Data = local_310.Data.AllocatorInstance.Data;
LAB_145b11adc:
          if (FVar25.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar25.Data);
          }
        }
      }
      if ((this->QueueFamilyProps).ArrayNum <= (int)(uVar27 + 1)) break;
      pFVar19 = (FVulkanQueue *)(ulonglong)(uVar27 + 1);
      pFVar18 = (FVulkanQueue *)&pFVar18->Device;
      iVar16 = (uint)local_368;
    } while( true );
  }
  local_2f8.Data = (FScriptContainerElement *)0x0;
  local_2f0[0] = 0;
  local_2f0[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,local_358,&local_2f8,local_2f0,local_2f0 + 1);
  FVar25.Data = local_2f8.Data;
  pFVar19 = pFVar21;
  pFVar18 = pFVar21;
  if (0 < (int)local_338) {
    do {
      uVar27 = (uint)pFVar19;
      uVar29 = uVar30;
      if ((int)uVar27 < (int)local_338) {
        uVar29 = ~uVar27 >> 0x1f;
      }
      if (uVar29 == 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      uVar29 = *(uint *)(local_340.Data + 0x14 + (longlong)pFVar18);
      *(FScriptContainerElement **)(local_340.Data + 0x20 + (longlong)pFVar18) = FVar25.Data;
      uVar23 = uVar30;
      if ((int)uVar29 < (this->QueueFamilyProps).ArrayNum) {
        uVar23 = ~uVar29 >> 0x1f;
      }
      if (uVar23 == 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pFVar26 = (this->QueueFamilyProps).AllocatorInstance.Data;
      pFVar19 = pFVar21;
      if (0 < *(int *)(pFVar26 + (longlong)(int)uVar29 * 0x18 + 4)) {
        do {
          *(undefined4 *)FVar25.Data = 0x3f800000;
          uVar23 = (int)pFVar19 + 1;
          FVar25.Data = FVar25.Data + 4;
          pFVar19 = (FVulkanQueue *)(ulonglong)uVar23;
        } while ((int)uVar23 < *(int *)(pFVar26 + (longlong)(int)uVar29 * 0x18 + 4));
      }
      pFVar19 = (FVulkanQueue *)(ulonglong)(uVar27 + 1);
      pFVar18 = (FVulkanQueue *)(pFVar18->CommandBufferPoolCS).CriticalSection.Opaque2;
    } while ((int)(uVar27 + 1) < (int)local_338);
  }
  local_2d8.pQueueCreateInfos._0_4_ = SUB84(local_340.Data,0);
  local_2d8.pQueueCreateInfos._4_4_ = (undefined4)((ulonglong)local_340.Data >> 0x20);
  local_2d8.queueCreateInfoCount = local_338;
  VVar15 = (*VulkanDynamicAPI::vkCreateDevice)
                     (this->Gpu,&local_2d8,&VulkanRHI::GAllocationCallbacks,&this->Device);
  if (VVar15 == VK_ERROR_INITIALIZATION_FAILED) {
    FWindowsPlatformMisc::MessageBoxExt
              (Ok,
               L"Cannot create a Vulkan device. Try updating your video driver to a more recent version.\n"
               ,L"Vulkan device creation failed");
    FWindowsPlatformMisc::RequestExitWithStatus(true,'\x01',(wchar_t *)0x0);
LAB_145b11d4c:
    VulkanRHI::VerifyVulkanResult
              (VVar15,"Result",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
               ,0x1ad);
  }
  else if ((int)VVar15 < 0) goto LAB_145b11d4c;
  piVar1 = &(this->ActiveQueueFamilies).ArrayMax;
  if ((this->ActiveQueueFamilies).ArrayMax < 3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,3,&(this->ActiveQueueFamilies).AllocatorInstance,
               (this->ActiveQueueFamilies).ArrayNum,piVar1);
  }
  uVar29 = (uint)local_368;
  lVar24 = (longlong)(int)(uint)local_368;
  if ((int)(uint)local_368 < (this->QueueFamilyProps).ArrayNum) {
    uVar30 = ~(uint)local_368 >> 0x1f;
  }
  if (uVar30 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar16 = *(int *)((this->QueueFamilyProps).AllocatorInstance.Data + lVar24 * 0x18 + 8);
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  pFVar18 = ::operator_new(0xe0);
  pFVar19 = pFVar21;
  if (pFVar18 != (FVulkanQueue *)0x0) {
    pFVar19 = FVulkanQueue::FVulkanQueue(pFVar18,this,uVar29,Graphics);
  }
  (this->Queues).Elements[0] = pFVar19;
  pTVar3 = &this->ActiveQueueFamilies;
  pFVar26 = (pTVar3->AllocatorInstance).Data;
  local_350 = uVar29;
  if ((pFVar26 <= (FScriptContainerElement *)&local_350) &&
     ((FScriptContainerElement *)&local_350 <
      pFVar26 + (longlong)(this->ActiveQueueFamilies).ArrayMax * 4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar14 = (this->ActiveQueueFamilies).ArrayNum;
  if (iVar14 == (this->ActiveQueueFamilies).ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar3->AllocatorInstance,piVar1);
  }
  uVar30 = local_360;
  lVar24 = (longlong)(int)local_360;
  (this->ActiveQueueFamilies).ArrayNum = iVar14 + 1;
  *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar14 * 4) = local_350;
  if (local_360 == 0xffffffff) {
    (this->Queues).Elements[1] = (FVulkanQueue *)0x0;
  }
  else {
    uVar29 = 0;
    if ((int)local_360 < (this->QueueFamilyProps).ArrayNum) {
      uVar29 = ~local_360 >> 0x1f;
    }
    if (uVar29 == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (iVar16 != *(int *)((this->QueueFamilyProps).AllocatorInstance.Data + lVar24 * 0x18 + 8)) {
      bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1536226488003592640>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                          ,0x1c0,
                          "NumBits == QueueFamilyProps[ComputeQueueFamilyIndex].timestampValidBits")
      ;
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pFVar18 = ::operator_new(0xe0);
    pFVar19 = pFVar21;
    if (pFVar18 != (FVulkanQueue *)0x0) {
      pFVar19 = FVulkanQueue::FVulkanQueue(pFVar18,this,uVar30,AsyncCompute);
    }
    (this->Queues).Elements[1] = pFVar19;
    pTVar3 = &this->ActiveQueueFamilies;
    pFVar26 = (pTVar3->AllocatorInstance).Data;
    local_34c = uVar30;
    if ((pFVar26 <= (FScriptContainerElement *)&local_34c) &&
       ((FScriptContainerElement *)&local_34c <
        pFVar26 + (longlong)(this->ActiveQueueFamilies).ArrayMax * 4)) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iVar16 = (this->ActiveQueueFamilies).ArrayNum;
    if (iVar16 == (this->ActiveQueueFamilies).ArrayMax) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->ActiveQueueFamilies).ArrayNum = iVar16 + 1;
    *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar16 * 4) = local_34c;
  }
  uVar30 = local_374;
  if (local_374 == 0xffffffff) {
    (this->Queues).Elements[2] = (FVulkanQueue *)0x0;
  }
  else {
    pFVar18 = ::operator_new(0xe0);
    pFVar19 = pFVar21;
    if (pFVar18 != (FVulkanQueue *)0x0) {
      pFVar19 = FVulkanQueue::FVulkanQueue(pFVar18,this,uVar30,Transfer);
    }
    (this->Queues).Elements[2] = pFVar19;
    pTVar3 = &this->ActiveQueueFamilies;
    pFVar26 = (pTVar3->AllocatorInstance).Data;
    local_348 = uVar30;
    if ((pFVar26 <= (FScriptContainerElement *)&local_348) &&
       ((FScriptContainerElement *)&local_348 <
        pFVar26 + (longlong)(this->ActiveQueueFamilies).ArrayMax * 4)) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iVar16 = (this->ActiveQueueFamilies).ArrayNum;
    if (iVar16 == (this->ActiveQueueFamilies).ArrayMax) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->ActiveQueueFamilies).ArrayNum = iVar16 + 1;
    *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar16 * 4) = local_348;
  }
  if ((*(byte *)&(this->OptionalDeviceExtensions).field0_0x0 & 0x40) != 0) {
    local_370[0] = 0;
    (*VulkanDynamicAPI::vkGetPhysicalDeviceFragmentShadingRatesKHR)
              (this->Gpu,local_370,(VkPhysicalDeviceFragmentShadingRateKHR *)0x0);
    uVar30 = local_370[0];
    lVar24 = (longlong)(int)local_370[0];
    if (local_370[0] != 0) {
      pTVar4 = &this->FragmentShadingRates;
      iVar16 = (this->FragmentShadingRates).ArrayNum;
      if (iVar16 < (int)local_370[0]) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,local_370[0] - iVar16,&pTVar4->AllocatorInstance,
                   &(this->FragmentShadingRates).ArrayNum,&(this->FragmentShadingRates).ArrayMax);
      }
      else {
        if ((int)local_370[0] < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)local_370[0]);
        }
        if ((int)local_370[0] < iVar16) {
          uVar29 = iVar16 - local_370[0];
          if ((int)(local_370[0] | uVar29) < 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          if (uVar29 != 0) {
            pFVar26 = (pTVar4->AllocatorInstance).Data + lVar24 * 0x20;
            iVar16 = ((this->FragmentShadingRates).ArrayNum - uVar30) - uVar29;
            if (iVar16 != 0) {
              memmove(pFVar26,pFVar26 + (longlong)(int)uVar29 * 0x20,(longlong)iVar16 << 5);
            }
            iVar16 = (this->FragmentShadingRates).ArrayNum - uVar29;
            (this->FragmentShadingRates).ArrayNum = iVar16;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,&pTVar4->AllocatorInstance,iVar16,
                       &(this->FragmentShadingRates).ArrayMax);
          }
        }
      }
      pFVar19 = pFVar21;
      if (local_370[0] != 0) {
        do {
          uVar29 = (uint)pFVar19;
          uVar30 = 0;
          if ((int)uVar29 < (this->FragmentShadingRates).ArrayNum) {
            uVar30 = ~uVar29 >> 0x1f;
          }
          if (uVar30 == 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          pFVar26 = (this->FragmentShadingRates).AllocatorInstance.Data;
          lVar24 = (longlong)(int)uVar29 * 0x20;
          *(undefined4 *)(pFVar26 + lVar24) = 0x3b9e3cd4;
          *(undefined8 *)(pFVar26 + lVar24 + 4) = 0;
          *(undefined8 *)(pFVar26 + lVar24 + 4 + 8) = 0;
          *(undefined8 *)(pFVar26 + lVar24 + 0x14) = 0;
          *(undefined4 *)(pFVar26 + lVar24 + 0x1c) = 0;
          pFVar19 = (FVulkanQueue *)(ulonglong)(uVar29 + 1);
        } while (uVar29 + 1 < local_370[0]);
      }
      (*VulkanDynamicAPI::vkGetPhysicalDeviceFragmentShadingRatesKHR)
                (this->Gpu,local_370,
                 (VkPhysicalDeviceFragmentShadingRateKHR *)
                 (this->FragmentShadingRates).AllocatorInstance.Data);
      local_330.Data.AllocatorInstance.Data = (FScriptContainerElement *)&this->FragmentSizeMap;
      local_374 = 0;
      do {
        uVar29 = 1;
        uVar27 = 1 << ((byte)((ulonglong)pFVar21 >> 2) & 0x1f);
        uVar30 = 1;
        uVar23 = 1 << ((byte)pFVar21 & 3);
        local_368 = &DAT_100000001;
        local_358 = uVar27;
        uStack_354 = uVar23;
        if ((uVar27 != 1) || (uVar23 != 1)) {
          local_360 = (this->FragmentShadingRates).ArrayNum;
          uVar20 = (ulonglong)(int)local_360;
          pFVar26 = (this->FragmentShadingRates).AllocatorInstance.Data;
          pFVar28 = pFVar26 + uVar20 * 0x20;
          while( true ) {
            if ((this->FragmentShadingRates).ArrayNum != (int)uVar20) {
              `TCheckedPointerIterator<VkPhysicalDeviceFragmentShadingRateKHR_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_344);
            }
            if (pFVar26 == pFVar28) goto LAB_145b123e2;
            uVar5 = *(uint *)(pFVar26 + 0x14);
            if ((uVar5 == uVar27) && (*(uint *)(pFVar26 + 0x18) == uVar23)) break;
            if (((((uVar29 <= uVar5) && (uVar5 <= uVar27)) && (*(uint *)(pFVar26 + 0x18) <= uVar23))
                && (uVar30 <= *(uint *)(pFVar26 + 0x18))) ||
               (((uVar30 <= *(uint *)(pFVar26 + 0x18) && (*(uint *)(pFVar26 + 0x18) <= uVar23)) &&
                ((uVar5 <= uVar27 && (uVar29 <= uVar5)))))) {
              puVar7 = *(undefined1 **)(pFVar26 + 0x14);
              uVar29 = (uint)puVar7;
              local_368._4_4_ = (uint)((ulonglong)puVar7 >> 0x20);
              uVar30 = local_368._4_4_;
              local_368 = puVar7;
            }
            uVar20 = (ulonglong)local_360;
            pFVar26 = pFVar26 + 0x20;
          }
          local_368 = (undefined1 *)CONCAT44(uStack_354,local_358);
        }
LAB_145b123e2:
        *(undefined1 **)local_330.Data.AllocatorInstance.Data = local_368;
        local_330.Data.AllocatorInstance.Data = local_330.Data.AllocatorInstance.Data + 8;
        local_374 = local_374 + 1;
        pFVar21 = (FVulkanQueue *)(ulonglong)local_374;
      } while (local_374 < 0xb);
    }
  }
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  pTVar2 = local_300;
  pFVar28 = (local_300->AllocatorInstance).Data;
  iVar16 = local_300->ArrayNum;
  pFVar26 = pFVar28 + (longlong)iVar16 * 8;
  while( true ) {
    if (pTVar2->ArrayNum != iVar16) {
      `TCheckedPointerIterator<char_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_343);
    }
    this_00 = local_2e8;
    if (pFVar28 == pFVar26) break;
    pcVar8 = *(char **)pFVar28;
    if (3 < (byte)LogVulkanRHI._0_1_) {
      local_288._padding_ = 0;
      if (pcVar8 == (char *)0x0) {
        local_288.Ptr = (wchar_t *)0x0;
        local_288.StringLength = 0;
      }
      else {
        sVar22 = strlen(pcVar8);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_288,pcVar8,(int)sVar22,Yes)
        ;
      }
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
    pFVar28 = pFVar28 + 8;
  }
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  pFVar28 = (this_00->DeviceExtensions).AllocatorInstance.Data;
  iVar16 = (this_00->DeviceExtensions).ArrayNum;
  pFVar26 = pFVar28 + (longlong)iVar16 * 8;
  while( true ) {
    if ((this_00->DeviceExtensions).ArrayNum != iVar16) {
      `TCheckedPointerIterator<char_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_342);
    }
    pTVar10 = CVarDelayAcquireBackBuffer.Ref;
    if (pFVar28 == pFVar26) break;
    pcVar8 = *(char **)pFVar28;
    if (3 < (byte)LogVulkanRHI._0_1_) {
      local_168._padding_ = 0;
      if (pcVar8 == (char *)0x0) {
        local_168.Ptr = (wchar_t *)0x0;
        local_168.StringLength = 0;
      }
      else {
        sVar22 = strlen(pcVar8);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_168,pcVar8,(int)sVar22,Yes)
        ;
      }
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    pFVar28 = pFVar28 + 8;
  }
  bVar12 = IsInParallelGameThread();
  if (!bVar12) {
    bVar12 = IsInGameThread();
    lVar24 = 4;
    if (!bVar12) goto LAB_145b125e1;
  }
  lVar24 = 0;
LAB_145b125e1:
  GVulkanDelayAcquireImage =
       (EDelayAcquireImageType)(*(int *)((longlong)pTVar10->ShadowedValue + lVar24) != 0);
  SetupDrawMarkers(this_00);
  if (local_2f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data);
  }
  if (local_340.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.Data);
  }
  FMemScope::~FMemScope(&local_2e0);
  FLLMScope::~FLLMScope(local_320);
  return;
}

// Destroy @ 145b13e70

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVulkanDevice::Destroy(FVulkanDevice *this)

{
  int *piVar1;
  FStagingManager *this_00;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FVulkanTransientHeapCache *this_01;
  FVulkanDescriptorSetCache *this_02;
  FVulkanDescriptorPoolsManager *this_03;
  FVulkanCommandListContextImmediate *pFVar4;
  FVulkanRenderPassManager *this_04;
  undefined8 *puVar5;
  FVulkanPipelineStateCacheManager *this_05;
  FVulkanBindlessDescriptorManager *this_06;
  FTempBlockAllocator *pFVar6;
  FVulkanQueue *pFVar7;
  _func___cdecl_void *p_Var8;
  FScriptContainerElement *pFVar9;
  TStaticArray<TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_>,4,4294967295> *pTVar10;
  undefined1 local_res8 [8];
  
  if ((this->ValidationCache != (VkValidationCacheEXT_T *)0x0) &&
     (p_Var8 = (*VulkanDynamicAPI::vkGetDeviceProcAddr)(this->Device,"vkDestroyValidationCacheEXT"),
     p_Var8 != (_func___cdecl_void *)0x0)) {
    (*p_Var8)(this->Device,this->ValidationCache);
    this->ValidationCache = (VkValidationCacheEXT_T *)0x0;
  }
  FVulkanCommandListContext::ReleasePendingState
            ((FVulkanCommandListContext *)this->ImmediateContext);
  this_01 = this->TransientHeapCache;
  if (this_01 != (FVulkanTransientHeapCache *)0x0) {
    FRHITransientHeapCache::~FRHITransientHeapCache((FRHITransientHeapCache *)this_01);
    ::operator_delete(this_01,200);
    this->TransientHeapCache = (FVulkanTransientHeapCache *)0x0;
  }
  FRHICommandListImmediate::ImmediateFlush
            (&GRHICommandList.CommandListImmediate,FlushRHIThreadFlushResources,None);
  this_02 = this->DescriptorSetCache;
  if (this_02 != (FVulkanDescriptorSetCache *)0x0) {
    FVulkanDescriptorSetCache::~FVulkanDescriptorSetCache(this_02);
    ::operator_delete(this_02,0x28);
  }
  this_03 = this->DescriptorPoolsManager;
  this->DescriptorSetCache = (FVulkanDescriptorSetCache *)0x0;
  if (this_03 != (FVulkanDescriptorPoolsManager *)0x0) {
    FVulkanDescriptorPoolsManager::~FVulkanDescriptorPoolsManager(this_03);
    ::operator_delete(this_03,0x48);
  }
  pFVar4 = this->ImmediateContext;
  this->DescriptorPoolsManager = (FVulkanDescriptorPoolsManager *)0x0;
  if (pFVar4 != (FVulkanCommandListContextImmediate *)0x0) {
    (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
  }
  this_04 = this->RenderPassManager;
  this->ImmediateContext = (FVulkanCommandListContextImmediate *)0x0;
  if (this_04 != (FVulkanRenderPassManager *)0x0) {
    FVulkanRenderPassManager::~FVulkanRenderPassManager(this_04);
    ::operator_delete(this_04,0xb8);
  }
  this->RenderPassManager = (FVulkanRenderPassManager *)0x0;
  for (pTVar10 = &this->FreeQueryPools;
      pTVar10 !=
      (TStaticArray<TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_>,4,4294967295> *)
      &this->BarrierEventLock;
      pTVar10 = (TStaticArray<TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_>,4,4294967295> *
                )(pTVar10->Elements + 1)) {
    pFVar9 = pTVar10->Elements[0].AllocatorInstance.Data;
    iVar3 = pTVar10->Elements[0].ArrayNum;
    pFVar2 = pFVar9 + (longlong)iVar3 * 8;
    while( true ) {
      if (pTVar10->Elements[0].ArrayNum != iVar3) {
        `TCheckedPointerIterator<FVulkanQueryPool_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar9 == pFVar2) break;
      puVar5 = *(undefined8 **)pFVar9;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
      pFVar9 = pFVar9 + 8;
    }
    piVar1 = &pTVar10->Elements[0].ArrayMax;
    pTVar10->Elements[0].ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)pTVar10,0,piVar1);
    }
  }
  this_05 = this->PipelineStateCache;
  if (this_05 != (FVulkanPipelineStateCacheManager *)0x0) {
    FVulkanPipelineStateCacheManager::~FVulkanPipelineStateCacheManager(this_05);
    ::operator_delete(this_05,0x3a0);
  }
  this_00 = &this->StagingManager;
  this->PipelineStateCache = (FVulkanPipelineStateCacheManager *)0x0;
  if (this_00 == (FStagingManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_00);
  VulkanRHI::FStagingManager::ProcessPendingFreeNoLock(this_00,true,true);
  LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  if (((((this->StagingManager).UsedStagingBuffers.ArrayNum != 0) ||
       (*(int *)&(this->StagingManager).PendingFreeStagingBuffers.field_0x8 !=
        *(int *)&(this->StagingManager).PendingFreeStagingBuffers.field_0x34)) ||
      ((this->StagingManager).FreeStagingBuffers.ArrayNum != 0)) && (2 < (byte)LogVulkanRHI._0_1_))
  {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  VulkanRHI::FDeferredDeletionQueue2::ReleaseResources(&this->DeferredDeletionQueue,true);
  FVulkanBindlessDescriptorManager::Deinit(this->BindlessDescriptorManager);
  this_06 = this->BindlessDescriptorManager;
  if (this_06 != (FVulkanBindlessDescriptorManager *)0x0) {
    FVulkanBindlessDescriptorManager::~FVulkanBindlessDescriptorManager(this_06);
    ::operator_delete(this_06,0x3d8);
  }
  this->BindlessDescriptorManager = (FVulkanBindlessDescriptorManager *)0x0;
  FVulkanUploadContext::DestroyPool();
  pFVar9 = (this->BarrierEvents).AllocatorInstance.Data;
  iVar3 = (this->BarrierEvents).ArrayNum;
  pFVar2 = pFVar9 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->BarrierEvents).ArrayNum != iVar3) {
      `TCheckedPointerIterator<VkEvent_T_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar2) break;
    (*VulkanDynamicAPI::vkDestroyEvent)
              (this->Device,*(VkEvent_T **)pFVar9,&VulkanRHI::GAllocationCallbacks);
    pFVar9 = pFVar9 + 8;
  }
  piVar1 = &(this->BarrierEvents).ArrayMax;
  (this->BarrierEvents).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->BarrierEvents).AllocatorInstance,0,piVar1);
  }
  pFVar6 = this->TempBlockAllocator;
  if (pFVar6 != (FTempBlockAllocator *)0x0) {
    (**(code **)pFVar6->_padding_)(pFVar6,1);
  }
  this->TempBlockAllocator = (FTempBlockAllocator *)0x0;
  pFVar7 = (this->Queues).Elements[0];
  if (pFVar7 != (FVulkanQueue *)0x0) {
    FVulkanQueue::~FVulkanQueue(pFVar7);
    ::operator_delete(pFVar7,0xe0);
  }
  (this->Queues).Elements[0] = (FVulkanQueue *)0x0;
  pFVar7 = (this->Queues).Elements[1];
  if (pFVar7 != (FVulkanQueue *)0x0) {
    FVulkanQueue::~FVulkanQueue(pFVar7);
    ::operator_delete(pFVar7,0xe0);
  }
  (this->Queues).Elements[1] = (FVulkanQueue *)0x0;
  pFVar7 = (this->Queues).Elements[2];
  if (pFVar7 != (FVulkanQueue *)0x0) {
    FVulkanQueue::~FVulkanQueue(pFVar7);
    ::operator_delete(pFVar7,0xe0);
  }
  (this->Queues).Elements[2] = (FVulkanQueue *)0x0;
  VulkanRHI::FMemoryManager::Deinit(&this->MemoryManager);
  FVulkanFenceManager::Deinit(&this->FenceManager);
  VulkanRHI::FDeviceMemoryManager::Deinit(&this->DeviceMemoryManager);
  FVulkanChunkedPipelineCacheManager::Shutdown();
  (*VulkanDynamicAPI::vkDestroyDevice)(this->Device,&VulkanRHI::GAllocationCallbacks);
  this->Device = (VkDevice_T *)0x0;
  return;
}

// ForEachQueue @ 145b1a680

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

void __thiscall
FVulkanDevice::ForEachQueue(FVulkanDevice *this,TFunctionRef<void___cdecl(FVulkanQueue_&)> *param_1)

{
  if ((this->Queues).Elements[0] != (FVulkanQueue *)0x0) {
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8);
  }
  if ((this->Queues).Elements[1] != (FVulkanQueue *)0x0) {
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8);
  }
  if ((this->Queues).Elements[2] != (FVulkanQueue *)0x0) {
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8);
  }
  return;
}

// GetBarrierEvent @ 145b1cab0

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
/* WARNING: Enum "Type": Some values do not have unique names */

VkEvent_T * __thiscall FVulkanDevice::GetBarrierEvent(FVulkanDevice *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  VkResult VVar5;
  VkEvent_T *pVVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumPooledBarrierEvents> FVar8;
  VkEvent_T *local_res8;
  FName local_res10;
  VkEventCreateInfo local_28;
  
  if (((this->OptionalDeviceExtensions).field0_0x0.Packed & 0x2020100000000) != 0x2020100000000) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SupportsParallelRendering()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                       ,0x6d9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pVVar6 = (VkEvent_T *)(*pcVar3)();
      return pVVar6;
    }
  }
  lpCriticalSection = &this->BarrierEventLock;
  local_res8 = (VkEvent_T *)0x0;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->BarrierEvents).ArrayNum;
    if (iVar1 != 0) {
      if (iVar1 < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pVVar6 = (VkEvent_T *)(*pcVar3)();
          return pVVar6;
        }
      }
      iVar1 = (this->BarrierEvents).ArrayNum;
      local_res8 = *(VkEvent_T **)
                    ((this->BarrierEvents).AllocatorInstance.Data + (longlong)iVar1 * 8 + -8);
      (this->BarrierEvents).ArrayNum = iVar1 + -1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_res8 == (VkEvent_T *)0x0) {
      local_28.sType = VK_STRUCTURE_TYPE_EVENT_CREATE_INFO;
      local_28._4_8_ = 0;
      local_28.pNext._4_4_ = 0;
      local_28.flags = 1;
      local_28._20_4_ = 0;
      VVar5 = (*VulkanDynamicAPI::vkCreateEvent)
                        (this->Device,&local_28,&VulkanRHI::GAllocationCallbacks,&local_res8);
      if (VVar5 != VK_SUCCESS) {
        VulkanRHI::VerifyVulkanResult
                  (VVar5,"VulkanRHI::vkCreateEvent(Device, &Info, VULKAN_CPU_ALLOCATOR, &Handle)",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                   ,0x6ec);
      }
      FVar8 = StatPtr_STAT_VulkanNumPooledBarrierEvents;
      if (StatPtr_STAT_VulkanNumPooledBarrierEvents ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanNumPooledBarrierEvents>)0x0) {
        pFVar7 = ::FName::FName(&local_res10,"STAT_VulkanNumPooledBarrierEvents");
        FVar8 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumPooledBarrierEvents>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumPooledBarrierEvents,
                           *pFVar7,L"Num Pooled Barrier Events","STATGROUP_VulkanRHI",
                           "STATCAT_Advanced",L"Vulkan RHI",true,false,ST_int64,false,false,
                           MCR_Invalid);
      }
      FVar2 = *(FName *)FVar8;
      local_res10.ComparisonIndex = FVar2.ComparisonIndex.Value;
      local_res10.Number = FVar2.Number;
      FThreadStats::AddMessage<__int64>(FVar2,Add,1,false);
    }
    return local_res8;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetCalibrationTimestamp @ 145b1cd60

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
/* WARNING: Enum "VkTimeDomainKHR": Some values do not have unique names */

void __thiscall FVulkanDevice::GetCalibrationTimestamp(FVulkanDevice *this,FVulkanTiming *param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  bool bVar5;
  VkResult VVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  ulong64 local_68;
  ulonglong local_60;
  ulong64 local_58 [2];
  VkCalibratedTimestampInfoKHR local_48;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  dVar4 = __real_43e0000000000000;
  dVar3 = __real_3ff0000000000000;
  lVar8 = 0;
  dVar9 = __real_41cdcd6500000000 / (double)(this->GpuProps).limits.timestampPeriod;
  if ((__real_43e0000000000000 <= dVar9) &&
     (dVar9 = dVar9 - __real_43e0000000000000, dVar9 < __real_43e0000000000000)) {
    lVar8 = -0x8000000000000000;
  }
  lVar7 = 0;
  param_1->GPUFrequency = (longlong)dVar9 + lVar8;
  dVar3 = dVar3 / FGenericPlatformTime::SecondsPerCycle64;
  if ((dVar4 <= dVar3) && (dVar3 = dVar3 - dVar4, dVar3 < dVar4)) {
    lVar7 = -0x8000000000000000;
  }
  param_1->CPUFrequency = (longlong)dVar3 + lVar7;
  if ((*(uint *)&(this->OptionalDeviceExtensions).field0_0x0 >> 0xf & 1) == 0) {
    param_1->GPUTimestamp = 0;
    QueryPerformanceCounter(&local_res20);
    param_1->CPUTimestamp = (ulong64)local_res20;
  }
  else {
    local_48.sType = VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT;
    local_68 = 0;
    local_48._20_4_ = 0;
    local_60 = 0;
    local_58[0] = 0;
    local_48._4_8_ = 0;
    local_58[1] = 0;
    local_48._12_8_ = 0;
    local_2c = 0;
    uStack_24 = 0;
    local_30 = 0x3b9d98c0;
    iStack_20 = 3;
    uStack_1c = 0;
    VVar6 = (*VulkanDynamicAPI::vkGetCalibratedTimestampsEXT)
                      (this->Device,2,&local_48,&local_68,local_58);
    if (VVar6 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar6,
                 "VulkanDynamicAPI::vkGetCalibratedTimestampsEXT(GetHandle(), TimestampCount, CalibratedTimestampInfo, Timestamps, MaxDeviations)"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                 ,0x652);
    }
    param_1->GPUTimestamp = local_68;
    if (iStack_20 == 1) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60;
      lVar8 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar2,8);
      param_1->CPUTimestamp = (local_60 - lVar8 >> 1) + lVar8 >> 6;
    }
    else if (iStack_20 == 3) {
      param_1->CPUTimestamp = local_60;
    }
    else {
      QueryPerformanceCounter(&local_res8);
      param_1->CPUTimestamp = (ulong64)local_res8;
    }
    QueryPerformanceCounter(&local_res10);
    if ((ulonglong)local_res10 < param_1->CPUTimestamp) {
      QueryPerformanceCounter(&local_res18);
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOutTiming.CPUTimestamp <= FPlatformTime::Cycles64()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                         ,0x66a,L"New calibration timestamp (%llu) ahead of current time (%llu).");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// GetFormatComponentMapping @ 145b1dca0

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

VkComponentMapping * __thiscall
FVulkanDevice::GetFormatComponentMapping(FVulkanDevice *this,EPixelFormat param_1)

{
  code *pcVar1;
  bool bVar2;
  VkComponentMapping *pVVar3;
  
  if (GPixelFormats[param_1].Supported == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GPixelFormats[UEFormat].Supported",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                       ,0x5ff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pVVar3 = (VkComponentMapping *)(*pcVar1)();
      return pVVar3;
    }
  }
  return this->PixelFormatComponentMapping + param_1;
}

// GetFormatProperties @ 145b1dd10

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

VkFormatProperties * __thiscall
FVulkanDevice::GetFormatProperties(FVulkanDevice *this,VkFormat param_1)

{
  TMap<VkFormat,VkFormatProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<VkFormat,VkFormatProperties,0>_>
  *this_00;
  longlong lVar1;
  int iVar2;
  VkFormatProperties *pVVar3;
  undefined1 *puVar4;
  VkFormat local_res10 [2];
  TKeyInitializer<VkFormat_const_&> local_res18;
  VkFormat *local_res20;
  
  if (param_1 < (VK_FORMAT_ASTC_12x12_SRGB_BLOCK|VK_FORMAT_R4G4_UNORM_PACK8)) {
    return this->FormatProperties + (int)param_1;
  }
  this_00 = &this->ExtensionFormatProperties;
  if (*(int *)&(this->ExtensionFormatProperties).field_0x8 !=
      *(int *)&(this->ExtensionFormatProperties).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ExtensionFormatProperties).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ExtensionFormatProperties).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->ExtensionFormatProperties).field_0x48 -
                               VK_FORMAT_R4G4_UNORM_PACK8 & param_1) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)this_00 + (longlong)iVar2 * 0x18;
        if (*(VkFormat *)(*(longlong *)this_00 + (longlong)iVar2 * 0x18) == param_1) {
          pVVar3 = (VkFormatProperties *)(lVar1 + 4);
          if (lVar1 == 0) {
            pVVar3 = (VkFormatProperties *)0x0;
          }
          if (pVVar3 != (VkFormatProperties *)0x0) {
            return pVVar3;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = local_res10;
  local_res10[0] = param_1;
  TSet<TTuple<enum_VkFormat,VkFormatProperties>,TDefaultMapHashableKeyFuncs<enum_VkFormat,VkFormatProperties,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<enum_VkFormat_const_&>_>(this_00,&local_res18,(bool *)&local_res20);
  lVar1 = *(longlong *)this_00 + (longlong)(int)local_res18.Key * 0x18;
  *(undefined8 *)(lVar1 + 4) = 0;
  *(undefined4 *)(lVar1 + 0xc) = 0;
  (*VulkanDynamicAPI::vkGetPhysicalDeviceFormatProperties)
            (this->Gpu,local_res10[0],(VkFormatProperties *)(lVar1 + 4));
  return (VkFormatProperties *)(lVar1 + 4);
}

// GetOrCreateTransientHeapCache @ 145b1ea30

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

FVulkanTransientHeapCache * __thiscall
FVulkanDevice::GetOrCreateTransientHeapCache(FVulkanDevice *this)

{
  FVulkanTransientHeapCache *pFVar1;
  
  pFVar1 = this->TransientHeapCache;
  if (pFVar1 == (FVulkanTransientHeapCache *)0x0) {
    pFVar1 = FVulkanTransientHeapCache::Create(this);
    this->TransientHeapCache = pFVar1;
  }
  return pFVar1;
}

// InitGPU @ 145b25600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145b25feb) */
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
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FVulkanDevice::InitGPU(FVulkanDevice *this)

{
  FVulkanPhysicalDeviceFeatures *pFVar1;
  VkPhysicalDeviceVulkan12Features *pVVar2;
  VkPhysicalDeviceVulkan13Features *pVVar3;
  byte bVar4;
  uint uVar5;
  VkPhysicalDevice_T *pVVar6;
  TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_> TVar7;
  FVulkanQueue *pFVar8;
  code *pcVar9;
  TConsoleVariableData<int> *pTVar10;
  bool bVar11;
  int iVar12;
  VkMemoryHeap *pVVar13;
  FVulkanCommandListContextImmediate *pFVar14;
  ForElementType<VkDescriptorType> FVar15;
  FVulkanDescriptorSetCache *this_00;
  FVulkanCommandListContextImmediate *pFVar16;
  FVulkanBindlessDescriptorManager *this_01;
  FVulkanPipelineStateCacheManager *this_02;
  FString *pFVar17;
  FVulkanRayTracingCompactionRequestHandler *this_03;
  FVulkanCommandListContextImmediate *pFVar18;
  uint uVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  FVulkanCommandListContextImmediate *pFVar22;
  ForAnyElementType FVar23;
  ulonglong uVar24;
  uint uVar25;
  undefined1 auStackY_638 [32];
  undefined1 local_5e8;
  undefined1 local_5e7;
  undefined1 local_5e6;
  undefined1 local_5e5;
  undefined1 local_5e4 [4];
  uint local_5e0 [2];
  TArray<TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_>,TSizedDefaultAllocator<32>_>
  local_5d8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_5c8;
  FString local_5b8;
  FLLMScope local_5a8 [2];
  FVulkanDeviceSetupHelper local_5a0;
  FMemScope local_588;
  TArray<char_const_*,TSizedDefaultAllocator<32>_> local_580;
  VkPhysicalDeviceFeatures2 local_568;
  VkPhysicalDeviceProperties2 local_478;
  VkPhysicalDeviceFeatures2 local_128;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_638;
  FLLMScope::FLLMScope(local_5a8,PlatformTagStart,false,None,Default,true);
  FMemScope::FMemScope(&local_588,PlatformTagStart,true);
  pFVar18 = (FVulkanCommandListContextImmediate *)0x0;
  local_5e0[0] = 0;
  (*VulkanDynamicAPI::vkGetPhysicalDeviceQueueFamilyProperties)
            (this->Gpu,local_5e0,(VkQueueFamilyProperties *)0x0);
  if ((local_5e0[0] == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("QueueCount >= 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                          ,0x50a,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,4,local_5e0[0],&(this->QueueFamilyProps).AllocatorInstance,
             &(this->QueueFamilyProps).ArrayNum,&(this->QueueFamilyProps).ArrayMax);
  (*VulkanDynamicAPI::vkGetPhysicalDeviceQueueFamilyProperties)
            (this->Gpu,local_5e0,
             (VkQueueFamilyProperties *)(this->QueueFamilyProps).AllocatorInstance.Data);
  pVVar6 = this->Gpu;
  pFVar1 = &this->PhysicalDeviceFeatures;
  local_568.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2;
  uVar25 = this->RHI->ApiVersion;
  memset(&local_568.field_0x4,0,0xec);
  local_568.pNext = &(this->PhysicalDeviceFeatures).Core_1_1;
  ((VkPhysicalDeviceVulkan11Features *)local_568.pNext)->sType =
       VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES;
  if (0x401fff < uVar25) {
    pVVar2 = &(this->PhysicalDeviceFeatures).Core_1_2;
    (this->PhysicalDeviceFeatures).Core_1_1.pNext = pVVar2;
    pVVar2->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES;
  }
  if (0x402fff < uVar25) {
    pVVar3 = &(this->PhysicalDeviceFeatures).Core_1_3;
    (this->PhysicalDeviceFeatures).Core_1_2.pNext = pVVar3;
    pVVar3->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES;
  }
  (*VulkanDynamicAPI::vkGetPhysicalDeviceFeatures2)(pVVar6,&local_568);
  (pFVar1->Core_1_0).robustBufferAccess = local_568.features.robustBufferAccess;
  (pFVar1->Core_1_0).fullDrawIndexUint32 = local_568.features.fullDrawIndexUint32;
  (this->PhysicalDeviceFeatures).Core_1_0.imageCubeArray = local_568.features.imageCubeArray;
  (this->PhysicalDeviceFeatures).Core_1_0.independentBlend = local_568.features.independentBlend;
  (this->PhysicalDeviceFeatures).Core_1_0.geometryShader = local_568.features.geometryShader;
  (this->PhysicalDeviceFeatures).Core_1_0.tessellationShader = local_568.features.tessellationShader
  ;
  (this->PhysicalDeviceFeatures).Core_1_0.sampleRateShading = local_568.features.sampleRateShading;
  (this->PhysicalDeviceFeatures).Core_1_0.dualSrcBlend = local_568.features.dualSrcBlend;
  (this->PhysicalDeviceFeatures).Core_1_0.logicOp = local_568.features.logicOp;
  (this->PhysicalDeviceFeatures).Core_1_0.multiDrawIndirect = local_568.features.multiDrawIndirect;
  (this->PhysicalDeviceFeatures).Core_1_0.drawIndirectFirstInstance =
       local_568.features.drawIndirectFirstInstance;
  (this->PhysicalDeviceFeatures).Core_1_0.depthClamp = local_568.features.depthClamp;
  (this->PhysicalDeviceFeatures).Core_1_0.depthBiasClamp = local_568.features.depthBiasClamp;
  (this->PhysicalDeviceFeatures).Core_1_0.fillModeNonSolid = local_568.features.fillModeNonSolid;
  (this->PhysicalDeviceFeatures).Core_1_0.depthBounds = local_568.features.depthBounds;
  (this->PhysicalDeviceFeatures).Core_1_0.wideLines = local_568.features.wideLines;
  (this->PhysicalDeviceFeatures).Core_1_0.largePoints = local_568.features.largePoints;
  (this->PhysicalDeviceFeatures).Core_1_0.alphaToOne = local_568.features.alphaToOne;
  (this->PhysicalDeviceFeatures).Core_1_0.multiViewport = local_568.features.multiViewport;
  (this->PhysicalDeviceFeatures).Core_1_0.samplerAnisotropy = local_568.features.samplerAnisotropy;
  (this->PhysicalDeviceFeatures).Core_1_0.textureCompressionETC2 =
       local_568.features.textureCompressionETC2;
  (this->PhysicalDeviceFeatures).Core_1_0.textureCompressionASTC_LDR =
       local_568.features.textureCompressionASTC_LDR;
  (this->PhysicalDeviceFeatures).Core_1_0.textureCompressionBC =
       local_568.features.textureCompressionBC;
  (this->PhysicalDeviceFeatures).Core_1_0.occlusionQueryPrecise =
       local_568.features.occlusionQueryPrecise;
  (this->PhysicalDeviceFeatures).Core_1_0.pipelineStatisticsQuery =
       local_568.features.pipelineStatisticsQuery;
  (this->PhysicalDeviceFeatures).Core_1_0.vertexPipelineStoresAndAtomics =
       local_568.features.vertexPipelineStoresAndAtomics;
  (this->PhysicalDeviceFeatures).Core_1_0.fragmentStoresAndAtomics =
       local_568.features.fragmentStoresAndAtomics;
  (this->PhysicalDeviceFeatures).Core_1_0.shaderTessellationAndGeometryPointSize =
       local_568.features.shaderTessellationAndGeometryPointSize;
  (this->PhysicalDeviceFeatures).Core_1_0.shaderImageGatherExtended =
       local_568.features.shaderImageGatherExtended;
  (this->PhysicalDeviceFeatures).Core_1_0.shaderStorageImageExtendedFormats =
       local_568.features.shaderStorageImageExtendedFormats;
  (this->PhysicalDeviceFeatures).Core_1_0.shaderStorageImageMultisample =
       local_568.features.shaderStorageImageMultisample;
  (this->PhysicalDeviceFeatures).Core_1_0.shaderStorageImageReadWithoutFormat =
       local_568.features.shaderStorageImageReadWithoutFormat;
  (this->PhysicalDeviceFeatures).Core_1_0.shaderStorageImageWriteWithoutFormat =
       local_568.features.shaderStorageImageWriteWithoutFormat;
  (this->PhysicalDeviceFeatures).Core_1_0.shaderUniformBufferArrayDynamicIndexing =
       local_568.features.shaderUniformBufferArrayDynamicIndexing;
  (this->PhysicalDeviceFeatures).Core_1_0.shaderSampledImageArrayDynamicIndexing =
       local_568.features.shaderSampledImageArrayDynamicIndexing;
  (this->PhysicalDeviceFeatures).Core_1_0.shaderStorageBufferArrayDynamicIndexing =
       local_568.features.shaderStorageBufferArrayDynamicIndexing;
  (this->PhysicalDeviceFeatures).Core_1_0.shaderStorageImageArrayDynamicIndexing =
       local_568.features.shaderStorageImageArrayDynamicIndexing;
  (this->PhysicalDeviceFeatures).Core_1_0.shaderClipDistance = local_568.features.shaderClipDistance
  ;
  (this->PhysicalDeviceFeatures).Core_1_0.shaderCullDistance = local_568.features.shaderCullDistance
  ;
  (this->PhysicalDeviceFeatures).Core_1_0.shaderFloat64 = local_568.features.shaderFloat64;
  (this->PhysicalDeviceFeatures).Core_1_0.shaderInt64 = local_568.features.shaderInt64;
  (this->PhysicalDeviceFeatures).Core_1_0.shaderInt16 = local_568.features.shaderInt16;
  (this->PhysicalDeviceFeatures).Core_1_0.shaderResourceResidency =
       local_568.features.shaderResourceResidency;
  (this->PhysicalDeviceFeatures).Core_1_0.shaderResourceMinLod =
       local_568.features.shaderResourceMinLod;
  (this->PhysicalDeviceFeatures).Core_1_0.sparseBinding = local_568.features.sparseBinding;
  (this->PhysicalDeviceFeatures).Core_1_0.sparseResidencyBuffer =
       local_568.features.sparseResidencyBuffer;
  (this->PhysicalDeviceFeatures).Core_1_0.sparseResidencyImage2D =
       local_568.features.sparseResidencyImage2D;
  (this->PhysicalDeviceFeatures).Core_1_0.sparseResidencyImage3D =
       local_568.features.sparseResidencyImage3D;
  (this->PhysicalDeviceFeatures).Core_1_0.sparseResidency2Samples =
       local_568.features.sparseResidency2Samples;
  (this->PhysicalDeviceFeatures).Core_1_0.sparseResidency4Samples =
       local_568.features.sparseResidency4Samples;
  (this->PhysicalDeviceFeatures).Core_1_0.sparseResidency8Samples =
       local_568.features.sparseResidency8Samples;
  (this->PhysicalDeviceFeatures).Core_1_0.sparseResidency16Samples =
       local_568.features.sparseResidency16Samples;
  (this->PhysicalDeviceFeatures).Core_1_0.sparseResidencyAliased =
       local_568.features.sparseResidencyAliased;
  (this->PhysicalDeviceFeatures).Core_1_0.variableMultisampleRate =
       local_568.features.variableMultisampleRate;
  (this->PhysicalDeviceFeatures).Core_1_0.inheritedQueries = local_568.features.inheritedQueries;
  pTVar10 = GCVarRobustBufferAccess.Ref;
  bVar11 = IsInParallelGameThread();
  if (bVar11) {
LAB_145b25828:
    pFVar16 = pFVar18;
  }
  else {
    bVar11 = IsInGameThread();
    pFVar16 = (FVulkanCommandListContextImmediate *)&DAT_00000004;
    if (bVar11) goto LAB_145b25828;
  }
  (pFVar1->Core_1_0).robustBufferAccess =
       (uint)(0 < *(int *)((longlong)&pFVar16->field_0x0 + (longlong)pTVar10->ShadowedValue));
  pTVar10 = CVarVulkanAllowSparseResidency.Ref;
  bVar11 = IsInParallelGameThread();
  if (bVar11) {
LAB_145b25852:
    pFVar16 = pFVar18;
  }
  else {
    bVar11 = IsInGameThread();
    pFVar16 = (FVulkanCommandListContextImmediate *)&DAT_00000004;
    if (bVar11) goto LAB_145b25852;
  }
  if (*(int *)((longlong)&pFVar16->field_0x0 + (longlong)pTVar10->ShadowedValue) == 0) {
    (this->PhysicalDeviceFeatures).Core_1_0.shaderResourceResidency = 0;
    (this->PhysicalDeviceFeatures).Core_1_0.shaderResourceMinLod = 0;
    (this->PhysicalDeviceFeatures).Core_1_0.sparseBinding = 0;
    (this->PhysicalDeviceFeatures).Core_1_0.sparseResidencyBuffer = 0;
    (this->PhysicalDeviceFeatures).Core_1_0.sparseResidencyImage2D = 0;
    (this->PhysicalDeviceFeatures).Core_1_0.sparseResidencyImage3D = 0;
    (this->PhysicalDeviceFeatures).Core_1_0.sparseResidency2Samples = 0;
    (this->PhysicalDeviceFeatures).Core_1_0.sparseResidency4Samples = 0;
    (this->PhysicalDeviceFeatures).Core_1_0.sparseResidency8Samples = 0;
    (this->PhysicalDeviceFeatures).Core_1_0.sparseResidencyAliased = 0;
  }
  FVulkanDeviceExtension::GetUESupportedDeviceExtensions(&local_5d8,this,this->RHI->ApiVersion);
  local_5a0.bSupportsDebugMarkerExt = false;
  local_5a0.HelperTypeName = L"device";
  local_5a0.Gpu = this->Gpu;
  local_5a0.bSupportsDebugUtilsExt = this->RHI->ActiveDebugLayerExtension == DebugUtilsExtension;
  SetupLayers<FVulkanDeviceSetupHelper,FVulkanDeviceExtension>(&local_580,&local_5a0,&local_5d8);
  if ((local_5a0.bSupportsDebugUtilsExt == false) && (local_5a0.bSupportsDebugMarkerExt != false)) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  this->bUseLegacyDebugMarkerExt = bVar11;
  local_128.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2;
  memset(&local_128.field_0x4,0,0xec);
  iVar12 = local_5d8.ArrayNum;
  pFVar21 = local_5d8.AllocatorInstance.Data + (longlong)local_5d8.ArrayNum * 8;
  FVar23.Data = local_5d8.AllocatorInstance.Data;
  while( true ) {
    if (local_5d8.ArrayNum != iVar12) {
      local_5e7 = 0;
      `TCheckedPointerIterator<TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_5e7);
    }
    if (FVar23.Data == pFVar21) break;
    TVar7.Ptr = *(FVulkanDeviceExtension **)FVar23.Data;
    if ((((TVar7.Ptr)->field_0x14 != '\0') && ((TVar7.Ptr)->field_0x15 != '\0')) &&
       ((TVar7.Ptr)->field_0x16 != '\0')) {
      (**(code **)(*(longlong *)TVar7.Ptr + 0x18))(TVar7.Ptr,&local_128);
    }
    FVar23.Data = FVar23.Data + 8;
  }
  (*VulkanDynamicAPI::vkGetPhysicalDeviceFeatures2)(this->Gpu,&local_128);
  iVar12 = local_5d8.ArrayNum;
  pFVar21 = local_5d8.AllocatorInstance.Data + (longlong)local_5d8.ArrayNum * 8;
  FVar23.Data = local_5d8.AllocatorInstance.Data;
  while( true ) {
    if (local_5d8.ArrayNum != iVar12) {
      local_5e6 = 0;
      `TCheckedPointerIterator<TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_5e6);
    }
    if (FVar23.Data == pFVar21) break;
    TVar7.Ptr = *(FVulkanDeviceExtension **)FVar23.Data;
    if ((((TVar7.Ptr)->field_0x14 != '\0') && ((TVar7.Ptr)->field_0x15 != '\0')) &&
       ((TVar7.Ptr)->field_0x16 != '\0')) {
      (**(code **)(*(longlong *)TVar7.Ptr + 0x20))();
    }
    FVar23.Data = FVar23.Data + 8;
  }
  local_478.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2;
  memset(&local_478.field_0x4,0,0x344);
  iVar12 = local_5d8.ArrayNum;
  local_478.pNext = &this->GpuIdProps;
  ((VkPhysicalDeviceIDProperties *)local_478.pNext)->sType =
       VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES;
  *(undefined8 *)&(this->GpuIdProps).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->GpuIdProps).pNext + 4) = 0;
  (this->GpuIdProps).deviceUUID[4] = '\0';
  (this->GpuIdProps).deviceUUID[5] = '\0';
  (this->GpuIdProps).deviceUUID[6] = '\0';
  (this->GpuIdProps).deviceUUID[7] = '\0';
  (this->GpuIdProps).deviceUUID[8] = '\0';
  (this->GpuIdProps).deviceUUID[9] = '\0';
  (this->GpuIdProps).deviceUUID[10] = '\0';
  (this->GpuIdProps).deviceUUID[0xb] = '\0';
  *(undefined8 *)((this->GpuIdProps).deviceUUID + 0xc) = 0;
  pFVar21 = local_5d8.AllocatorInstance.Data + (longlong)local_5d8.ArrayNum * 8;
  (this->GpuIdProps).driverUUID[4] = '\0';
  (this->GpuIdProps).driverUUID[5] = '\0';
  (this->GpuIdProps).driverUUID[6] = '\0';
  (this->GpuIdProps).driverUUID[7] = '\0';
  (this->GpuIdProps).driverUUID[8] = '\0';
  (this->GpuIdProps).driverUUID[9] = '\0';
  (this->GpuIdProps).driverUUID[10] = '\0';
  (this->GpuIdProps).driverUUID[0xb] = '\0';
  *(undefined8 *)((this->GpuIdProps).driverUUID + 0xc) = 0;
  *(undefined8 *)((this->GpuIdProps).deviceLUID + 4) = 0;
  (this->GpuIdProps).deviceLUIDValid = 0;
  FVar23.Data = local_5d8.AllocatorInstance.Data;
  while( true ) {
    if (local_5d8.ArrayNum != iVar12) {
      local_5e5 = 0;
      `TCheckedPointerIterator<TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_5e5);
    }
    if (FVar23.Data == pFVar21) break;
    TVar7.Ptr = *(FVulkanDeviceExtension **)FVar23.Data;
    if ((((TVar7.Ptr)->field_0x14 != '\0') && ((TVar7.Ptr)->field_0x15 != '\0')) &&
       ((TVar7.Ptr)->field_0x16 != '\0')) {
      (**(code **)(*(longlong *)TVar7.Ptr + 8))(TVar7.Ptr,&local_478);
    }
    FVar23.Data = FVar23.Data + 8;
  }
  (*VulkanDynamicAPI::vkGetPhysicalDeviceProperties2)(this->Gpu,&local_478);
  iVar12 = local_5d8.ArrayNum;
  pFVar21 = local_5d8.AllocatorInstance.Data + (longlong)local_5d8.ArrayNum * 8;
  FVar23.Data = local_5d8.AllocatorInstance.Data;
  while( true ) {
    if (local_5d8.ArrayNum != iVar12) {
      local_5e4[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_5e4);
    }
    if (FVar23.Data == pFVar21) break;
    TVar7.Ptr = *(FVulkanDeviceExtension **)FVar23.Data;
    if ((((TVar7.Ptr)->field_0x14 != '\0') && ((TVar7.Ptr)->field_0x15 != '\0')) &&
       ((TVar7.Ptr)->field_0x16 != '\0')) {
      (**(code **)(*(longlong *)TVar7.Ptr + 0x10))(TVar7.Ptr,&this->OptionalDeviceExtensions);
    }
    FVar23.Data = FVar23.Data + 8;
  }
  ChooseVariableRateShadingMethod(this);
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  CreateDevice(this,&local_580,&local_5d8);
  SetupFormats(this);
  if (((this->DeviceMemoryManager).Device != (FVulkanDevice *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Device == nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                          ,0x25a,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  (this->DeviceMemoryManager).Device = this;
  (this->DeviceMemoryManager).NumAllocations = 0;
  (this->DeviceMemoryManager).PeakNumAllocations = 0;
  (this->DeviceMemoryManager).bHasUnifiedMemory = false;
  (this->DeviceMemoryManager).DeviceHandle = this->Device;
  VulkanRHI::FDeviceMemoryManager::UpdateMemoryProperties(&this->DeviceMemoryManager);
  uVar25 = (this->DeviceMemoryManager).MemoryProperties.memoryHeapCount;
  (this->DeviceMemoryManager).PrimaryHeapIndex = -1;
  if (uVar25 != 0) {
    pVVar13 = (this->DeviceMemoryManager).MemoryProperties.memoryHeaps;
    pFVar14 = pFVar18;
    pFVar22 = pFVar18;
    pFVar16 = pFVar18;
    do {
      if ((pVVar13->flags & 1) == 0) {
        pFVar22 = (FVulkanCommandListContextImmediate *)(ulonglong)((int)pFVar22 + 1);
      }
      else if (pFVar16 < (FVulkanCommandListContextImmediate *)pVVar13->size) {
        (this->DeviceMemoryManager).PrimaryHeapIndex = (int)pFVar14;
        pFVar16 = (FVulkanCommandListContextImmediate *)pVVar13->size;
      }
      uVar19 = (int)pFVar14 + 1;
      pFVar14 = (FVulkanCommandListContextImmediate *)(ulonglong)uVar19;
      pVVar13 = pVVar13 + 1;
    } while (uVar19 < uVar25);
    if ((int)pFVar22 != 0) goto LAB_145b25bd7;
  }
  (this->DeviceMemoryManager).PrimaryHeapIndex = -1;
LAB_145b25bd7:
  uVar19 = (this->DeviceMemoryManager).MemoryProperties.memoryTypeCount;
  (this->DeviceMemoryManager).bSupportsMemoryless = false;
  if (uVar19 != 0) {
    bVar11 = false;
    pFVar16 = pFVar18;
    do {
      if (bVar11 != false) break;
      uVar20 = (int)pFVar16 + 1;
      bVar11 = (bool)((byte)((this->DeviceMemoryManager).MemoryProperties.memoryTypes
                             [(longlong)pFVar16].propertyFlags >> 4) & 1);
      (this->DeviceMemoryManager).bSupportsMemoryless = bVar11;
      pFVar16 = (FVulkanCommandListContextImmediate *)(ulonglong)uVar20;
    } while (uVar20 < uVar19);
  }
  iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x20,8,uVar25,&(this->DeviceMemoryManager).HeapInfos.AllocatorInstance,
                      &(this->DeviceMemoryManager).HeapInfos.ArrayNum,
                      &(this->DeviceMemoryManager).HeapInfos.ArrayMax);
  DefaultConstructItems<VulkanRHI::FDeviceMemoryManager::FHeapInfo,int>
            ((this->DeviceMemoryManager).HeapInfos.AllocatorInstance.Data + (longlong)iVar12 * 0x20,
             uVar25);
  VulkanRHI::FDeviceMemoryManager::PrintMemInfo(&this->DeviceMemoryManager);
  VulkanRHI::FMemoryManager::Init(&this->MemoryManager);
  (this->StagingManager).Device = this;
  pTVar10 = GCVarVulkanTempBlockSizeKB.Ref;
  uVar25 = (uint)(this->GpuProps).limits.minUniformBufferOffsetAlignment;
  uVar19 = 0x10;
  if (0x10 < uVar25) {
    uVar19 = uVar25;
  }
  uVar24 = (this->OptionalDeviceExtensions).field0_0x0.Packed;
  uVar25 = (uint)(uVar24 >> 0x13) & 0x20000;
  uVar20 = uVar25 | 0x11;
  if ((uVar24 >> 0xb & 1) != 0) {
    uVar5 = (this->OptionalDeviceExtensionProperties).RayTracingPipelineProps.
            shaderGroupBaseAlignment;
    uVar20 = uVar25 | 0x411;
    if (uVar19 < uVar5) {
      uVar19 = uVar5;
    }
  }
  bVar11 = IsInParallelGameThread();
  if ((bVar11) ||
     (bVar11 = IsInGameThread(), pFVar16 = (FVulkanCommandListContextImmediate *)&DAT_00000004,
     bVar11)) {
    pFVar16 = pFVar18;
  }
  iVar12 = *(int *)((longlong)&pFVar16->field_0x0 + (longlong)pTVar10->ShadowedValue);
  pFVar14 = ::operator_new(0x50);
  pFVar16 = pFVar18;
  if (pFVar14 != (FVulkanCommandListContextImmediate *)0x0) {
    *(ForElementType<VkDescriptorType> *)&pFVar14->field_0x20 =
         (ForElementType<VkDescriptorType>)0x0;
    *(undefined ***)pFVar14 = &___7FTempBlockAllocator_VulkanRHI__6B_;
    *(FVulkanDevice **)&pFVar14->field_0x8 = this;
    *(int *)&pFVar14->field_0x10 = iVar12 << 10;
    *(uint *)&pFVar14->field_0x14 = uVar19;
    *(uint *)(((BindlessSetState *)&pFVar14->field_0x18)->DescriptorTypes).AllocatorInstance.
             InlineData = uVar20;
    (((TArray<VulkanRHI::FTempBlockAllocator::FTempMemoryBlock_*,TSizedDefaultAllocator<32>_> *)
     &pFVar14->field_0x28)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(FRHIHeapDescriptorAllocator **)&pFVar14->field_0x30 = (FRHIHeapDescriptorAllocator *)0x0;
    (((TArray<VulkanRHI::FTempBlockAllocator::FTempMemoryBlock_*,TSizedDefaultAllocator<32>_> *)
     &pFVar14->field_0x38)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(undefined8 *)&pFVar14->field_0x40 = 0;
    (((FPlatformRWLock *)&pFVar14->field_0x48)->Mutex).Mutex.Ptr = (void *)0x0;
    FVar15 = (ForElementType<VkDescriptorType>)
             VulkanRHI::FTempBlockAllocator::AllocBlock((FTempBlockAllocator *)pFVar14);
    *(ForElementType<VkDescriptorType> *)&pFVar14->field_0x20 = FVar15;
    pFVar16 = pFVar14;
  }
  this->TempBlockAllocator = (FTempBlockAllocator *)pFVar16;
  pFVar14 = ::operator_new(0xb8);
  pFVar16 = pFVar18;
  if (pFVar14 != (FVulkanCommandListContextImmediate *)0x0) {
    *(undefined8 *)pFVar14 = 0;
    *(FVulkanDevice **)&pFVar14->field_0x8 = (FVulkanDevice *)0x0;
    *(VkDescriptorSetLayout_T **)&pFVar14->field_0x10 = (VkDescriptorSetLayout_T *)0x0;
    *(undefined8 *)
     (((BindlessSetState *)&pFVar14->field_0x18)->DescriptorTypes).AllocatorInstance.InlineData = 0;
    *(FRHIHeapDescriptorAllocator **)&pFVar14->field_0x30 = (FRHIHeapDescriptorAllocator *)0x0;
    *(undefined4 *)
     &(((TArray<VulkanRHI::FTempBlockAllocator::FTempMemoryBlock_*,TSizedDefaultAllocator<32>_> *)
       &pFVar14->field_0x38)->AllocatorInstance).Data = 0;
    *(undefined4 *)&pFVar14->field_0x3c = 0x80;
    *(uint *)&pFVar14->field_0x40 = 0xffffffff;
    *(uint *)&pFVar14->field_0x44 = 0;
    *(VkDeviceMemory_T **)&pFVar14->field_0x50 = (VkDeviceMemory_T *)0x0;
    *(undefined4 *)&pFVar14->field_0x58 = 0;
    *(uchar **)&pFVar14->field_0x60 = (uchar *)0x0;
    *(undefined8 *)&pFVar14->field_0x68 = 0;
    *(undefined8 *)&pFVar14->field_0x80 = 0;
    *(undefined4 *)&pFVar14->field_0x88 = 0;
    *(undefined4 *)&pFVar14->field_0x8c = 0x80;
    *(undefined4 *)&pFVar14->field_0x90 = 0xffffffff;
    *(undefined4 *)&pFVar14->field_0x94 = 0;
    *(undefined8 *)&pFVar14->field_0xa0 = 0;
    *(undefined4 *)&pFVar14->field_0xa8 = 0;
    *(FVulkanDevice **)&pFVar14->field_0xb0 = this;
    pFVar16 = pFVar14;
  }
  this->RenderPassManager = (FVulkanRenderPassManager *)pFVar16;
  if ((int)GMaxRHIFeatureLevel < 2) {
    this_00 = ::operator_new(0x28);
    pFVar16 = pFVar18;
    if (this_00 != (FVulkanDescriptorSetCache *)0x0) {
      pFVar16 = (FVulkanCommandListContextImmediate *)
                FVulkanDescriptorSetCache::FVulkanDescriptorSetCache(this_00,this);
    }
    this->DescriptorSetCache = (FVulkanDescriptorSetCache *)pFVar16;
  }
  pFVar14 = ::operator_new(0x48);
  pFVar16 = pFVar18;
  if (pFVar14 != (FVulkanCommandListContextImmediate *)0x0) {
    *(VkDescriptorSetLayout_T **)&pFVar14->field_0x10 = (VkDescriptorSetLayout_T *)0x0;
    *(undefined8 *)
     (((BindlessSetState *)&pFVar14->field_0x18)->DescriptorTypes).AllocatorInstance.InlineData = 0;
    *(ForElementType<VkDescriptorType> *)&pFVar14->field_0x20 =
         (ForElementType<VkDescriptorType>)0x0;
    (((TArray<VulkanRHI::FTempBlockAllocator::FTempMemoryBlock_*,TSizedDefaultAllocator<32>_> *)
     &pFVar14->field_0x28)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(FRHIHeapDescriptorAllocator **)&pFVar14->field_0x30 = (FRHIHeapDescriptorAllocator *)0x0;
    (((TArray<VulkanRHI::FTempBlockAllocator::FTempMemoryBlock_*,TSizedDefaultAllocator<32>_> *)
     &pFVar14->field_0x38)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(undefined8 *)&pFVar14->field_0x40 = 0;
    *(undefined8 *)pFVar14 = 0;
    *(FVulkanDevice **)&pFVar14->field_0x8 = (FVulkanDevice *)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar14->field_0x10,4000);
    (((TArray<VulkanRHI::FTempBlockAllocator::FTempMemoryBlock_*,TSizedDefaultAllocator<32>_> *)
     &pFVar14->field_0x38)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(undefined8 *)&pFVar14->field_0x40 = 0;
    pFVar16 = pFVar14;
  }
  this->DescriptorPoolsManager = (FVulkanDescriptorPoolsManager *)pFVar16;
  *(FVulkanDevice **)pFVar16 = this;
  this_01 = ::operator_new(0x3d8);
  pFVar16 = pFVar18;
  if (this_01 != (FVulkanBindlessDescriptorManager *)0x0) {
    pFVar16 = (FVulkanCommandListContextImmediate *)
              FVulkanBindlessDescriptorManager::FVulkanBindlessDescriptorManager(this_01,this);
  }
  this->BindlessDescriptorManager = (FVulkanBindlessDescriptorManager *)pFVar16;
  FVulkanBindlessDescriptorManager::Init((FVulkanBindlessDescriptorManager *)pFVar16);
  InitGlobalSamplers(this);
  bVar11 = UE::RHI::UseGPUCrashBreadcrumbs();
  if (bVar11) {
    pFVar8 = (this->Queues).Elements[0];
    if (pFVar8 != (FVulkanQueue *)0x0) {
      UE::Core::Private::Function::
      TFunctionRefCaller<`FVulkanDevice::InitGPU'::__l67::<lambda_1>,void,FVulkanQueue_&>::Call
                (&local_5e8,pFVar8);
    }
    pFVar8 = (this->Queues).Elements[1];
    if (pFVar8 != (FVulkanQueue *)0x0) {
      UE::Core::Private::Function::
      TFunctionRefCaller<`FVulkanDevice::InitGPU'::__l67::<lambda_1>,void,FVulkanQueue_&>::Call
                (&local_5e8,pFVar8);
    }
    pFVar8 = (this->Queues).Elements[2];
    if (pFVar8 != (FVulkanQueue *)0x0) {
      UE::Core::Private::Function::
      TFunctionRefCaller<`FVulkanDevice::InitGPU'::__l67::<lambda_1>,void,FVulkanQueue_&>::Call
                (&local_5e8,pFVar8);
    }
  }
  this_02 = ::operator_new(0x3a0);
  pFVar16 = pFVar18;
  if (this_02 != (FVulkanPipelineStateCacheManager *)0x0) {
    pFVar16 = (FVulkanCommandListContextImmediate *)
              FVulkanPipelineStateCacheManager::FVulkanPipelineStateCacheManager(this_02,this);
  }
  this->PipelineStateCache = (FVulkanPipelineStateCacheManager *)pFVar16;
  FVulkanGenericPlatform::GetPSOCacheFilenames(&local_5c8);
  pFVar17 = FPaths::ProjectSavedDir();
  ::operator/(&local_5b8,pFVar17,L"VulkanPSO.cache");
  if (((local_5c8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_5b8) &&
      ((FScriptContainerElement *)&local_5b8 <
       local_5c8.AllocatorInstance.Data + (longlong)local_5c8.ArrayMax * 0x10)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (local_5c8.ArrayNum == local_5c8.ArrayMax) {
    local_5c8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_5c8.AllocatorInstance,&local_5c8.ArrayMax);
  }
  pFVar21 = local_5c8.AllocatorInstance.Data + (longlong)local_5c8.ArrayNum * 0x10;
  *(undefined8 *)pFVar21 = 0;
  *(FScriptContainerElement **)pFVar21 = local_5b8.Data.AllocatorInstance.Data;
  *(int *)(pFVar21 + 8) = local_5b8.Data.ArrayNum;
  *(int *)(pFVar21 + 0xc) = local_5b8.Data.ArrayMax;
  local_5b8.Data.ArrayNum = 0;
  local_5b8.Data.ArrayMax = 0;
  local_5b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5c8.ArrayNum = local_5c8.ArrayNum + 1;
  pFVar14 = ::operator_new(0x548);
  pFVar16 = pFVar18;
  if (pFVar14 != (FVulkanCommandListContextImmediate *)0x0) {
    pFVar16 = FVulkanCommandListContextImmediate::FVulkanCommandListContextImmediate(pFVar14,this);
  }
  bVar4 = *(byte *)&(this->OptionalDeviceExtensions).field0_0x0;
  this->ImmediateContext = pFVar16;
  if ((bVar4 & 1) != 0) {
    LoadValidationCache(this->Device,&this->ValidationCache);
  }
  FVulkanChunkedPipelineCacheManager::Init();
  FVulkanPipelineStateCacheManager::InitAndLoad(this->PipelineStateCache,&local_5c8);
  uVar24 = (ulonglong)GMaxRHIShaderPlatform;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar24].bContainsValidPlatformInfo == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid(Platform)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                          ,0x16c,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((((FGenericDataDrivenShaderPlatformInfo::Infos[uVar24].bSupportsRayTracing != 0) &&
       (uVar24 = (this->OptionalDeviceExtensions).field0_0x0.Packed, (uVar24 >> 10 & 1) != 0)) &&
      ((((uint)uVar24 & 0x2800) == 0x2800 || ((uVar24 >> 0xc & 1) != 0)))) &&
     ((uVar24 & 0x17000004000) == 0x17000004000)) {
    if ((this->RayTracingCompactionRequestHandler !=
         (FVulkanRayTracingCompactionRequestHandler *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("RayTracingCompactionRequestHandler == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                            ,0x597,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    this_03 = ::operator_new(0x70);
    if (this_03 != (FVulkanRayTracingCompactionRequestHandler *)0x0) {
      pFVar18 = (FVulkanCommandListContextImmediate *)
                FVulkanRayTracingCompactionRequestHandler::FVulkanRayTracingCompactionRequestHandler
                          (this_03,this);
    }
    this->RayTracingCompactionRequestHandler = (FVulkanRayTracingCompactionRequestHandler *)pFVar18;
  }
  DestructItems<FString,int>((FString *)local_5c8.AllocatorInstance.Data,local_5c8.ArrayNum);
  if (local_5c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c8.AllocatorInstance.Data);
  }
  if (local_580.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_580.AllocatorInstance.Data);
  }
  DestructItems<TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_>,int>
            ((TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_> *)
             local_5d8.AllocatorInstance.Data,local_5d8.ArrayNum);
  if (local_5d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d8.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(&local_588);
  FLLMScope::~FLLMScope(local_5a8);
  return;
}

// InitGlobalSamplers @ 145b261b0

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

void __thiscall FVulkanDevice::InitGlobalSamplers(FVulkanDevice *this)

{
  FRHIDescriptorHandle FVar1;
  code *pcVar2;
  bool bVar3;
  TRefCountPtr<FRHISamplerState> TVar4;
  uint uVar5;
  FRHIResource *local_res8;
  FRHIResource *local_res10;
  FRHIResource *local_res18;
  FRHIResource *local_res20;
  FRHIResource *local_30;
  FRHIResource *local_28;
  
  if (*(int *)&(this->SamplerMap).field_0x8 != *(int *)&(this->SamplerMap).field_0x34) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SamplerMap.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                       ,0x69c,L"Global Samplers should be the first samplers created.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TVar4 = RHICreateSamplerState((FSamplerStateInitializerRHI *)&local_res8);
  (this->GlobalSamplers).Elements[0] = *(FVulkanSamplerState **)TVar4.Reference;
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  TVar4 = RHICreateSamplerState((FSamplerStateInitializerRHI *)&local_res10);
  (this->GlobalSamplers).Elements[1] = *(FVulkanSamplerState **)TVar4.Reference;
  if (local_res10 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res10);
  }
  TVar4 = RHICreateSamplerState((FSamplerStateInitializerRHI *)&local_res18);
  (this->GlobalSamplers).Elements[2] = *(FVulkanSamplerState **)TVar4.Reference;
  if (local_res18 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res18);
  }
  TVar4 = RHICreateSamplerState((FSamplerStateInitializerRHI *)&local_res20);
  (this->GlobalSamplers).Elements[3] = *(FVulkanSamplerState **)TVar4.Reference;
  if (local_res20 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res20);
  }
  TVar4 = RHICreateSamplerState((FSamplerStateInitializerRHI *)&local_30);
  (this->GlobalSamplers).Elements[4] = *(FVulkanSamplerState **)TVar4.Reference;
  if (local_30 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_30);
  }
  TVar4 = RHICreateSamplerState((FSamplerStateInitializerRHI *)&local_28);
  (this->GlobalSamplers).Elements[5] = *(FVulkanSamplerState **)TVar4.Reference;
  if (local_28 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_28);
  }
  FVar1 = (this->GlobalSamplers).Elements[0]->BindlessHandle;
  uVar5 = FVar1.Index;
  if (((uVar5 != 0xffffffff) && (FVar1.Type != Invalid)) && (uVar5 != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GlobalSamplers[0]->GetBindlessHandle().IsValid() || GlobalSamplers[0]->GetBindlessHandle().GetIndex() == 0"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                       ,0x6b3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// MapBufferFormatSupport @ 145b2aa80

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

void __thiscall
FVulkanDevice::MapBufferFormatSupport
          (FVulkanDevice *this,FPixelFormatInfo *param_1,EPixelFormat param_2,VkFormat param_3)

{
  code *pcVar1;
  bool bVar2;
  VkFormatProperties *pVVar3;
  EPixelFormatCapabilities EVar4;
  EPixelFormatCapabilities EVar5;
  
  if (GVulkanBufferFormat[param_2] != VK_FORMAT_UNDEFINED) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GVulkanBufferFormat[UEFormat] == VK_FORMAT_UNDEFINED",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                       ,0x3fa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pVVar3 = GetFormatProperties(this,param_3);
  if (pVVar3->bufferFeatures != 0) {
    EVar5 = (pVVar3->bufferFeatures & 0x40 | 0x20) << 9;
    if ((pVVar3->linearTilingFeatures & 0x40) != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!VKHasAnyFlags(LocalFormatProperties.linearTilingFeatures, InFlag)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                         ,0x408,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((pVVar3->optimalTilingFeatures & 0x40) != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!VKHasAnyFlags(LocalFormatProperties.optimalTilingFeatures, InFlag)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                         ,0x409,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EVar4 = EVar5 | BufferLoad;
    if ((pVVar3->bufferFeatures & 8) == 0) {
      EVar4 = EVar5;
    }
    if ((pVVar3->linearTilingFeatures & 8) != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!VKHasAnyFlags(LocalFormatProperties.linearTilingFeatures, InFlag)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                         ,0x408,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((pVVar3->optimalTilingFeatures & 8) != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!VKHasAnyFlags(LocalFormatProperties.optimalTilingFeatures, InFlag)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                         ,0x409,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EVar5 = EVar4 | BufferStore;
    if ((pVVar3->bufferFeatures & 0x10) == 0) {
      EVar5 = EVar4;
    }
    if ((pVVar3->linearTilingFeatures & 0x10) != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!VKHasAnyFlags(LocalFormatProperties.linearTilingFeatures, InFlag)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                         ,0x408,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((pVVar3->optimalTilingFeatures & 0x10) != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!VKHasAnyFlags(LocalFormatProperties.optimalTilingFeatures, InFlag)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                         ,0x409,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EVar4 = EVar5 | BufferAtomics;
    if ((pVVar3->bufferFeatures & 0x20) == 0) {
      EVar4 = EVar5;
    }
    if ((pVVar3->linearTilingFeatures & 0x20) != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!VKHasAnyFlags(LocalFormatProperties.linearTilingFeatures, InFlag)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                         ,0x408,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((pVVar3->optimalTilingFeatures & 0x20) != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!VKHasAnyFlags(LocalFormatProperties.optimalTilingFeatures, InFlag)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                         ,0x409,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (((EVar4 & (BufferStore|BufferLoad)) == (BufferStore|BufferLoad)) &&
       ((param_3 == VK_FORMAT_R16_UINT || (param_3 == VK_FORMAT_R32_UINT)))) {
      EVar4 = EVar4 | IndexBuffer;
    }
    GVulkanBufferFormat[param_2] = param_3;
    param_1->Capabilities = param_1->Capabilities | EVar4;
  }
  return;
}

// MapFormatSupport @ 145b2ace0

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

void __thiscall
FVulkanDevice::MapFormatSupport
          (FVulkanDevice *this,EPixelFormat param_1,initializer_list<VkFormat> *param_2,
          VkComponentMapping *param_3)

{
  initializer_list<VkFormat> local_18;
  
  local_18._First = param_2->_First;
  local_18._Last = param_2->_Last;
  MapFormatSupport(this,param_1,&local_18,param_3,TextureSample,-1);
  return;
}

// MapFormatSupport @ 145b2ad20

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

void __thiscall
FVulkanDevice::MapFormatSupport
          (FVulkanDevice *this,EPixelFormat param_1,initializer_list<VkFormat> *param_2,
          VkComponentMapping *param_3,int param_4)

{
  initializer_list<VkFormat> local_18;
  
  local_18._First = param_2->_First;
  local_18._Last = param_2->_Last;
  MapFormatSupport(this,param_1,&local_18,param_3,TextureSample,param_4);
  return;
}

// MapFormatSupport @ 145b2ad60

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

void __thiscall
FVulkanDevice::MapFormatSupport
          (FVulkanDevice *this,EPixelFormat param_1,initializer_list<VkFormat> *param_2,
          VkComponentMapping *param_3,EPixelFormatCapabilities param_4)

{
  initializer_list<VkFormat> local_18;
  
  local_18._First = param_2->_First;
  local_18._Last = param_2->_Last;
  MapFormatSupport(this,param_1,&local_18,param_3,param_4,-1);
  return;
}

// MapFormatSupport @ 145b2ada0

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
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVulkanDevice::MapFormatSupport
          (FVulkanDevice *this,EPixelFormat param_1,initializer_list<VkFormat> *param_2,
          VkComponentMapping *param_3,EPixelFormatCapabilities param_4,int param_5)

{
  VkComponentMapping *pVVar1;
  code *pcVar2;
  VkComponentSwizzle VVar3;
  VkComponentSwizzle VVar4;
  VkComponentSwizzle VVar5;
  bool bVar6;
  TArrayView<VkFormat_const_,int> local_18;
  
  local_18.DataPtr = param_2->_First;
  local_18.ArrayNum = (int)((longlong)param_2->_Last - (longlong)local_18.DataPtr >> 2);
  if (local_18.ArrayNum < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_18.ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrioritizedFormats.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                       ,0x48f,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (GPixelFormats[param_1].Supported != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!PixelFormatInfo.Supported",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                       ,0x490,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (GPixelFormats[param_1].Capabilities != None) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("PixelFormatInfo.Capabilities == EPixelFormatCapabilities::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                       ,0x491,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_18.ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  MapBufferFormatSupport(this,GPixelFormats + param_1,param_1,*local_18.DataPtr);
  MapImageFormatSupport(this,GPixelFormats + param_1,&local_18,param_4);
  if (((GPixelFormats[param_1].Capabilities & param_4) == param_4) ||
     ((GPixelFormats[param_1].Capabilities >> 0xe & 1) != 0)) {
    GPixelFormats[param_1].Supported = '\x01';
    VVar3 = param_3->g;
    VVar4 = param_3->b;
    VVar5 = param_3->a;
    pVVar1 = this->PixelFormatComponentMapping + param_1;
    pVVar1->r = param_3->r;
    pVVar1->g = VVar3;
    pVVar1->b = VVar4;
    pVVar1->a = VVar5;
    if (0 < param_5) {
      GPixelFormats[param_1].BlockBytes = param_5;
    }
  }
  else {
    GPixelFormats[param_1].Supported = '\0';
    if (1 < (byte)LogVulkanRHI._0_1_) {
      if (local_18.ArrayNum < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
  }
  return;
}

// MapImageFormatSupport @ 145b2afd0

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
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVulkanDevice::MapImageFormatSupport
          (FVulkanDevice *this,FPixelFormatInfo *param_1,TArrayView<VkFormat_const_,int> *param_2,
          EPixelFormatCapabilities param_3)

{
  VkFormat VVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EPixelFormatCapabilities EVar5;
  VkResult VVar6;
  VkFormatProperties *pVVar7;
  EPixelFormatCapabilities EVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStackY_158 [32];
  longlong local_108;
  VkPhysicalDeviceImageFormatInfo2 local_f8;
  undefined4 local_d0 [2];
  undefined8 local_c8;
  ulonglong uStack_c0;
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  VkImageFormatProperties2 local_98;
  VkImageFormatProperties local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  iVar9 = param_2->ArrayNum;
  uVar10 = 0;
  if (0 < iVar9) {
    local_108 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar10 < iVar9) {
        uVar4 = ~uVar10 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      VVar1 = *(VkFormat *)(local_108 + (longlong)param_2->DataPtr);
      pVVar7 = GetFormatProperties(this,VVar1);
      EVar8 = -(uint)((((byte)pVVar7->optimalTilingFeatures | (byte)pVVar7->linearTilingFeatures) &
                      1) != 0) & (TextureSample|TextureLoad|AnyTexture);
      if (((pVVar7->bufferFeatures & 1) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!VKHasAnyFlags(InFormatProperties.bufferFeatures, InFlag)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                             ,0x43d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EVar5 = EVar8 | DepthStencil;
      if ((pVVar7->optimalTilingFeatures >> 9 & 1) == 0) {
        EVar5 = EVar8;
      }
      if (((pVVar7->bufferFeatures & 0x200) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!VKHasAnyFlags(InFormatProperties.bufferFeatures, InFlag)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                             ,0x43d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EVar8 = EVar5 | RenderTarget;
      if ((pVVar7->optimalTilingFeatures >> 7 & 1) == 0) {
        EVar8 = EVar5;
      }
      if (((pVVar7->bufferFeatures & 0x80) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!VKHasAnyFlags(InFormatProperties.bufferFeatures, InFlag)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                             ,0x43d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EVar5 = EVar8 | TextureBlendable;
      if ((pVVar7->optimalTilingFeatures >> 8 & 1) == 0) {
        EVar5 = EVar8;
      }
      if (((pVVar7->bufferFeatures & 0x100) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!VKHasAnyFlags(InFormatProperties.bufferFeatures, InFlag)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                             ,0x43d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EVar8 = EVar5 | (AllUAVFlags|TextureStore);
      if ((((byte)(pVVar7->optimalTilingFeatures >> 1) | (byte)(pVVar7->linearTilingFeatures >> 1))
          & 1) == 0) {
        EVar8 = EVar5;
      }
      if (((pVVar7->bufferFeatures & 2) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!VKHasAnyFlags(InFormatProperties.bufferFeatures, InFlag)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                             ,0x43d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EVar5 = EVar8 | TextureAtomics;
      if ((((byte)(pVVar7->optimalTilingFeatures >> 2) | (byte)(pVVar7->linearTilingFeatures >> 2))
          & 1) == 0) {
        EVar5 = EVar8;
      }
      if (((pVVar7->bufferFeatures & 4) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!VKHasAnyFlags(InFormatProperties.bufferFeatures, InFlag)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                             ,0x43d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EVar8 = EVar5 | TextureFilterable;
      if ((((byte)(pVVar7->optimalTilingFeatures >> 0xc) |
           (byte)(pVVar7->linearTilingFeatures >> 0xc)) & 1) == 0) {
        EVar8 = EVar5;
      }
      if (((pVVar7->bufferFeatures & 0x1000) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!VKHasAnyFlags(InFormatProperties.bufferFeatures, InFlag)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
                             ,0x43d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((byte)EVar8 & 0x1e) == 0x1e) {
        EVar5 = EVar8 | TextureGather;
        if ((this->PhysicalDeviceFeatures).Core_1_0.shaderImageGatherExtended == 0) {
          EVar5 = EVar8;
        }
        VVar6 = (*VulkanDynamicAPI::vkGetPhysicalDeviceImageFormatProperties)
                          (this->Gpu,VVar1,VK_IMAGE_TYPE_2D,VK_IMAGE_TILING_OPTIMAL,4,0,&local_68);
        EVar8 = EVar5;
        if ((VVar6 == VK_SUCCESS) && (1 < local_68.maxMipLevels)) {
          EVar8 = EVar5 | TextureMipmaps;
        }
        if ((*(uint *)&(this->OptionalDeviceExtensions).field0_0x0 >> 0x14 & 1) != 0) {
          local_d0[0] = 0x3b9ff254;
          local_98.imageFormatProperties.maxResourceSize = 0;
          local_98.sType = VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2;
          local_b8[0] = 0x3b9ff251;
          local_98.pNext = local_d0;
          local_f8.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2;
          local_f8.flags = 0;
          local_f8._36_4_ = 0;
          local_98.imageFormatProperties.maxExtent.width = 0;
          local_98.imageFormatProperties.maxExtent.height = 0;
          local_a0 = 0;
          local_f8.pNext = local_b8;
          local_b0 = 0;
          uStack_a8 = 1;
          local_c8 = 0;
          uStack_c0 = 0;
          local_f8.type = VK_IMAGE_TYPE_2D;
          local_f8.tiling = VK_IMAGE_TILING_OPTIMAL;
          local_98.imageFormatProperties.maxExtent.depth = 0;
          local_98.imageFormatProperties.maxMipLevels = 0;
          local_98.imageFormatProperties.maxArrayLayers = 0;
          local_98.imageFormatProperties.sampleCounts = 0;
          local_f8.usage = 4;
          local_f8.format = VVar1;
          VVar6 = (*VulkanDynamicAPI::vkGetPhysicalDeviceImageFormatProperties2)
                            (this->Gpu,&local_f8,&local_98);
          if ((VVar6 == VK_SUCCESS) && ((uStack_c0 & 2) != 0)) {
            EVar8 = EVar8 | LossyCompressible;
          }
        }
      }
      if ((EVar8 & param_3) == param_3) {
        param_1->Capabilities = param_1->Capabilities | EVar8;
        param_1->PlatformFormat = VVar1;
        if ((int)uVar10 < 1) {
          return;
        }
        if ((byte)LogVulkanRHI._0_1_ < 4) {
          return;
        }
        TArrayView<enum_VkFormat_const_,int>::operator[](param_2,uVar10);
        TArrayView<enum_VkFormat_const_,int>::operator[](param_2,0);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        return;
      }
      uVar10 = uVar10 + 1;
      iVar9 = param_2->ArrayNum;
      local_108 = local_108 + 4;
    } while ((int)uVar10 < iVar9);
  }
  return;
}

// NotifyDeletedComputePipeline @ 145b2b590

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

void __thiscall
FVulkanDevice::NotifyDeletedComputePipeline(FVulkanDevice *this,FVulkanComputePipeline *param_1)

{
  longlong lVar1;
  uint uVar2;
  FVulkanComputePipeline *local_res8;
  
  if ((this->ImmediateContext != (FVulkanCommandListContextImmediate *)0x0) &&
     (lVar1 = *(longlong *)&this->ImmediateContext->field_0x1c0, lVar1 != 0)) {
    local_res8 = param_1;
    if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
      uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      TSet<TTuple<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*>,TDefaultMapHashableKeyFuncs<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FVulkanComputePipeline_const_*>
                ((TSet<TTuple<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*>,TDefaultMapHashableKeyFuncs<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*,0>,FDefaultSetAllocator>
                  *)(lVar1 + 0x10),uVar2 >> 0x10 ^ uVar2,&local_res8);
    }
  }
  if (this->PipelineStateCache != (FVulkanPipelineStateCacheManager *)0x0) {
    FVulkanPipelineStateCacheManager::NotifyDeletedComputePipeline(this->PipelineStateCache,param_1)
    ;
  }
  return;
}

// NotifyDeletedGfxPipeline @ 145b2b620

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

void __thiscall
FVulkanDevice::NotifyDeletedGfxPipeline(FVulkanDevice *this,FVulkanGraphicsPipelineState *param_1)

{
  longlong lVar1;
  uint uVar2;
  FVulkanGraphicsPipelineState *local_res8 [4];
  
  if ((this->ImmediateContext != (FVulkanCommandListContextImmediate *)0x0) &&
     (lVar1 = *(longlong *)&this->ImmediateContext->field_0x1b8, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x98) != *(int *)(lVar1 + 0xc4)) {
      uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      local_res8[0] = param_1;
      TSet<TTuple<FVulkanGraphicsPipelineState_*,FVulkanGraphicsPipelineDescriptorState_*>,TDefaultMapHashableKeyFuncs<FVulkanGraphicsPipelineState_*,FVulkanGraphicsPipelineDescriptorState_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FVulkanGraphicsPipelineState_const_*>
                ((TSet<TTuple<FVulkanGraphicsPipelineState_*,FVulkanGraphicsPipelineDescriptorState_*>,TDefaultMapHashableKeyFuncs<FVulkanGraphicsPipelineState_*,FVulkanGraphicsPipelineDescriptorState_*,0>,FDefaultSetAllocator>
                  *)(lVar1 + 0x90),uVar2 >> 0x10 ^ uVar2,local_res8);
    }
  }
  return;
}

// NotifyDeletedImage @ 145b2b690

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanDevice::NotifyDeletedImage(FVulkanDevice *this,VkImage_T *param_1,bool param_2)

{
  if (param_2) {
    FVulkanCommandListContext::NotifyDeletedRenderTarget
              ((FVulkanCommandListContext *)this->ImmediateContext,param_1);
    FVulkanRenderPassManager::NotifyDeletedRenderTarget(this->RenderPassManager,param_1);
  }
  return;
}

// PrepareForDestroy @ 145b2dbe0

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

void __thiscall FVulkanDevice::PrepareForDestroy(FVulkanDevice *this)

{
  VkResult VVar1;
  
  FVulkanDynamicRHI::RHIBlockUntilGPUIdle(this->RHI);
  VVar1 = (*VulkanDynamicAPI::vkDeviceWaitIdle)(this->Device);
  if (VVar1 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar1,"VulkanRHI::vkDeviceWaitIdle(Device)",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
               ,0x5fa);
    return;
  }
  return;
}

// ReleaseBarrierEvent @ 145b30050

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

void __thiscall FVulkanDevice::ReleaseBarrierEvent(FVulkanDevice *this,VkEvent_T *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<VkEvent_T_*,TSizedDefaultAllocator<32>_> *pTVar6;
  VkEvent_T *local_res10 [3];
  
  lpCriticalSection = &this->BarrierEventLock;
  local_res10[0] = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar6 = &this->BarrierEvents;
  pFVar2 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->BarrierEvents).ArrayMax * 8
     )) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->BarrierEvents).ArrayNum;
  piVar1 = &(this->BarrierEvents).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar6->AllocatorInstance,piVar1);
  }
  (this->BarrierEvents).ArrayNum = iVar5 + 1;
  *(VkEvent_T **)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_res10[0];
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SetObjectName @ 145b32690

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkDebugReportObjectTypeEXT": Some values do not have unique names */

VkResult __cdecl
`FVulkanDevice::SetupDrawMarkers'::__l61::Wrap::SetObjectName
          (VkDevice_T *param_1,VkDebugUtilsObjectNameInfoEXT *param_2)

{
  VkDebugMarkerObjectNameInfoEXT local_38;
  
  if ((int)param_2->objectType < 0x1a) {
    local_38.pObjectName = param_2->pObjectName;
    local_38.object = param_2->objectHandle;
    local_38.pNext = (void *)0x0;
    local_38.sType = VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT;
    local_38._20_4_ = 0;
    local_38.objectType = param_2->objectType;
    (*LegacySetObjectName)(param_1,&local_38);
  }
  return VK_SUCCESS;
}

// SetupDeviceLayers @ 145b32c80

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

TArray<char_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FVulkanDevice::SetupDeviceLayers
          (FVulkanDevice *this,
          TArray<char_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  FVulkanDeviceSetupHelper local_28;
  
  local_28.bSupportsDebugMarkerExt = false;
  local_28.HelperTypeName = L"device";
  local_28.Gpu = this->Gpu;
  local_28.bSupportsDebugUtilsExt = this->RHI->ActiveDebugLayerExtension == DebugUtilsExtension;
  SetupLayers<FVulkanDeviceSetupHelper,FVulkanDeviceExtension>
            (__return_storage_ptr__,&local_28,param_1);
  if ((local_28.bSupportsDebugUtilsExt == false) && (local_28.bSupportsDebugMarkerExt != false)) {
    this->bUseLegacyDebugMarkerExt = true;
    return __return_storage_ptr__;
  }
  this->bUseLegacyDebugMarkerExt = false;
  return __return_storage_ptr__;
}

// SetupDrawMarkers @ 145b32d10

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
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "VkDebugReportObjectTypeEXT": Some values do not have unique names */

void __thiscall FVulkanDevice::SetupDrawMarkers(FVulkanDevice *this)

{
  FVulkanDynamicRHI *pFVar1;
  bool bVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  size_t sVar7;
  wchar_t *pwVar8;
  code *pcVar9;
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkDebugUtilsLabelEXT_ptr *p_Var10;
  _func___cdecl_void_VkCommandBuffer_T_ptr *p_Var11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *_Str;
  VkPhysicalDeviceToolProperties *pVVar14;
  undefined1 auStackY_2d8 [32];
  byte local_2a8;
  undefined1 local_2a7;
  undefined1 local_2a6 [2];
  uint local_2a4;
  ForAnyElementType local_2a0;
  uint local_298 [4];
  FVulkanDevice *local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_288 = this;
  bVar4 = UE::RHI::UseGPUCrashDebugging();
  local_2a8 = bVar4 | GRenderDocFound;
  if ((this->RHI->ActiveDebugLayerExtension != DebugUtilsExtension) &&
     (this->bUseLegacyDebugMarkerExt == false)) goto LAB_145b331ca;
  bVar2 = false;
  if ((*(uint *)&(this->OptionalDeviceExtensions).field0_0x0 >> 0x13 & 1) != 0) {
    local_2a4 = 0;
    (*VulkanDynamicAPI::vkGetPhysicalDeviceToolPropertiesEXT)
              (this->Gpu,&local_2a4,(VkPhysicalDeviceToolProperties *)0x0);
    local_2a0.Data = (FScriptContainerElement *)0x0;
    local_298[0] = 0;
    local_298[1] = 0;
    if ((int)local_2a4 < 1) {
      if ((int)local_2a4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_2a4);
      }
    }
    else {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x418,8,local_2a4,&local_2a0,(int *)local_298,(int *)(local_298 + 1));
    }
    uVar6 = local_298[0];
    pVVar14 = (VkPhysicalDeviceToolProperties *)
              (local_2a0.Data + (longlong)(int)local_298[0] * 0x418);
    FVar13.Data = local_2a0.Data;
    while( true ) {
      if (local_298[0] != uVar6) {
        local_2a7 = 0;
        `TCheckedPointerIterator<VkPhysicalDeviceToolProperties,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_2a7);
      }
      if ((VkPhysicalDeviceToolProperties *)FVar13.Data == pVVar14) break;
      ((VkPhysicalDeviceToolProperties *)FVar13.Data)->sType =
           VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES;
      memset(&((VkPhysicalDeviceToolProperties *)FVar13.Data)->field_0x4,0,0x414);
      FVar13.Data = FVar13.Data + 0x418;
    }
    (*VulkanDynamicAPI::vkGetPhysicalDeviceToolPropertiesEXT)
              (this->Gpu,&local_2a4,(VkPhysicalDeviceToolProperties *)local_2a0.Data);
    uVar12 = (ulonglong)(int)local_298[0];
    local_298[2] = local_298[0];
    _Str = local_2a0.Data + 0x110;
    pVVar14 = (VkPhysicalDeviceToolProperties *)(local_2a0.Data + uVar12 * 0x418);
    while( true ) {
      if (local_298[0] != (uint)uVar12) {
        local_2a6[0] = 0;
        `TCheckedPointerIterator<VkPhysicalDeviceToolProperties,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_2a6);
      }
      this = local_288;
      if ((VkPhysicalDeviceToolProperties *)(_Str + -0x110) == pVVar14) break;
      uVar6 = *(uint *)(_Str + 0x100);
      if ((uVar6 & 0x40) == 0) {
        if ((uVar6 & 4) != 0) goto LAB_145b32ee6;
      }
      else {
        bVar2 = true;
        if ((uVar6 & 4) != 0) {
          bVar4 = true;
LAB_145b32ee6:
          local_2a8 = 1;
        }
      }
      if (3 < (byte)LogVulkanRHI._0_1_) {
        local_158._padding_ = 0;
        if (_Str == (FScriptContainerElement *)0x0) {
          local_158.Ptr = (wchar_t *)0x0;
          local_158.StringLength = 0;
LAB_145b32f6d:
          local_278._padding_ = 0;
          sVar7 = strlen((char *)(_Str + -0x100));
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_278,(char *)(_Str + -0x100),(int)sVar7,Yes);
        }
        else {
          sVar7 = strlen((char *)_Str);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,(char *)_Str,(int)sVar7,Yes);
          local_278._padding_ = 0;
          if (_Str != (FScriptContainerElement *)&DAT_00000100) goto LAB_145b32f6d;
          local_278.StringLength = 0;
          local_278.Ptr = (wchar_t *)0x0;
        }
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
      uVar12 = (ulonglong)local_298[2];
      _Str = _Str + 0x418;
    }
    if ((VkPhysicalDeviceToolProperties *)local_2a0.Data != (VkPhysicalDeviceToolProperties *)0x0) {
      FMemory::Free(local_2a0.Data);
    }
  }
  pwVar8 = FCommandLine::Get();
  bVar5 = FParse::Param(pwVar8,L"forcevulkandrawmarkers");
  pTVar3 = CVarVulkanDebugMarkers.Ref;
  if (bVar5) {
    uVar6 = 3;
LAB_145b3305b:
    if ((bVar4 != false) || ((uVar6 & 2) != 0)) {
      bVar4 = true;
    }
    if ((bVar2) || ((uVar6 & 1) != 0)) {
      bVar2 = true;
    }
  }
  else {
    bVar5 = IsInParallelRenderingThread();
    if ((!bVar5) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar5)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar6 = pTVar3->ShadowedValue[1];
    if (uVar6 != 4) goto LAB_145b3305b;
  }
  if (this->bUseLegacyDebugMarkerExt == false) {
    if (bVar4 != false) {
      p_Var10 = (_func___cdecl_void_VkCommandBuffer_T_ptr_VkDebugUtilsLabelEXT_ptr *)
                (*VulkanDynamicAPI::vkGetInstanceProcAddr)
                          (this->RHI->Instance,"vkCmdBeginDebugUtilsLabelEXT");
      pFVar1 = this->RHI;
      (this->DebugMarkers).CmdBeginDebugLabel = p_Var10;
      p_Var11 = (_func___cdecl_void_VkCommandBuffer_T_ptr *)
                (*VulkanDynamicAPI::vkGetInstanceProcAddr)
                          (pFVar1->Instance,"vkCmdEndDebugUtilsLabelEXT");
      (this->DebugMarkers).CmdEndDebugLabel = p_Var11;
    }
    if (bVar2) {
      pcVar9 = (*VulkanDynamicAPI::vkGetInstanceProcAddr)
                         (this->RHI->Instance,"vkSetDebugUtilsObjectNameEXT");
      goto LAB_145b33188;
    }
  }
  else {
    if (bVar4 != false) {
      LegacyCmdBeginDebugLabel =
           (_func___cdecl_void_VkCommandBuffer_T_ptr_VkDebugMarkerMarkerInfoEXT_ptr *)
           (*VulkanDynamicAPI::vkGetDeviceProcAddr)(this->Device,"vkCmdDebugMarkerBeginEXT");
      LegacyCmdEndDebugLabel =
           (_func___cdecl_void_VkCommandBuffer_T_ptr *)
           (*VulkanDynamicAPI::vkGetDeviceProcAddr)(this->Device,"vkCmdDebugMarkerEndEXT");
      if ((LegacyCmdBeginDebugLabel !=
           (_func___cdecl_void_VkCommandBuffer_T_ptr_VkDebugMarkerMarkerInfoEXT_ptr *)0x0) &&
         (LegacyCmdEndDebugLabel != (_func___cdecl_void_VkCommandBuffer_T_ptr *)0x0)) {
        (this->DebugMarkers).CmdBeginDebugLabel =
             `FVulkanDevice::SetupDrawMarkers'::__l55::Wrap::CmdBeginDebugLabel;
        (this->DebugMarkers).CmdEndDebugLabel =
             `FVulkanDevice::SetupDrawMarkers'::__l55::Wrap::CmdEndDebugLabel;
      }
    }
    if ((bVar2) &&
       (LegacySetObjectName =
             (_func___cdecl_VkResult_VkDevice_T_ptr_VkDebugMarkerObjectNameInfoEXT_ptr *)
             (*VulkanDynamicAPI::vkGetDeviceProcAddr)(this->Device,"vkDebugMarkerSetObjectNameEXT"),
       LegacySetObjectName !=
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkDebugMarkerObjectNameInfoEXT_ptr *)0x0)) {
      pcVar9 = `FVulkanDevice::SetupDrawMarkers'::__l61::Wrap::SetObjectName;
LAB_145b33188:
      (this->DebugMarkers).SetDebugName = pcVar9;
    }
  }
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
LAB_145b331ca:
  if (((this->DebugMarkers).CmdBeginDebugLabel ==
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkDebugUtilsLabelEXT_ptr *)0x0) ||
     ((this->DebugMarkers).CmdEndDebugLabel == (_func___cdecl_void_VkCommandBuffer_T_ptr *)0x0)) {
    if ((local_2a8 != 0) && (2 < (byte)LogVulkanRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
  }
  else if (local_2a8 != 0) {
    FDynamicRHI::EnableIdealGPUCaptureOptions(true);
  }
  return;
}

// SetupFormats @ 145b33400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FVulkanDevice::SetupFormats(FVulkanDevice *this)

{
  VkFormat VVar1;
  code *pcVar2;
  undefined8 uVar3;
  VkComponentSwizzle VVar4;
  undefined8 uVar5;
  TConsoleVariableData<int> *pTVar6;
  undefined8 uVar7;
  bool bVar8;
  EPixelFormatCapabilities EVar9;
  byte *pbVar10;
  VkFormatProperties *pVVar11;
  wchar_t *pwVar12;
  char *pcVar13;
  size_t sVar14;
  VkComponentMapping *pVVar15;
  uint uVar16;
  VkFormat VVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  EPixelFormatCapabilities *pEVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint *puVar24;
  VkFormat *pVVar25;
  undefined1 auStackY_928 [32];
  VkComponentMapping local_8b8;
  FString local_8a8;
  VkFormat local_898;
  VkFormat local_894;
  VkComponentMapping local_890;
  VkFormat local_880 [50];
  VkComponentMapping local_7b8;
  VkFormat local_7a8 [12];
  VkComponentMapping local_778;
  FString local_768;
  FString local_758;
  VkComponentMapping local_748;
  initializer_list<VkFormat> local_738;
  initializer_list<VkFormat> local_728;
  initializer_list<VkFormat> local_718;
  initializer_list<VkFormat> local_708;
  initializer_list<VkFormat> local_6f8;
  initializer_list<VkFormat> local_6e8;
  initializer_list<VkFormat> local_6d8;
  initializer_list<VkFormat> local_6c8;
  initializer_list<VkFormat> local_6b8;
  initializer_list<VkFormat> local_6a8;
  initializer_list<VkFormat> local_698;
  initializer_list<VkFormat> local_688;
  initializer_list<VkFormat> local_678;
  initializer_list<VkFormat> local_668;
  initializer_list<VkFormat> local_658;
  initializer_list<VkFormat> local_648;
  initializer_list<VkFormat> local_638;
  initializer_list<VkFormat> local_628;
  initializer_list<VkFormat> local_618;
  initializer_list<VkFormat> local_608;
  initializer_list<VkFormat> local_5f8;
  initializer_list<VkFormat> local_5e8;
  initializer_list<VkFormat> local_5d8;
  initializer_list<VkFormat> local_5c8;
  initializer_list<VkFormat> local_5b8;
  initializer_list<VkFormat> local_5a8;
  initializer_list<VkFormat> local_598;
  initializer_list<VkFormat> local_588;
  initializer_list<VkFormat> local_578;
  initializer_list<VkFormat> local_568;
  initializer_list<VkFormat> local_558;
  initializer_list<VkFormat> local_548;
  initializer_list<VkFormat> local_538;
  initializer_list<VkFormat> local_528;
  initializer_list<VkFormat> local_518;
  initializer_list<VkFormat> local_508;
  initializer_list<VkFormat> local_4f8;
  initializer_list<VkFormat> local_4e8;
  initializer_list<VkFormat> local_4d8;
  initializer_list<VkFormat> local_4c8;
  initializer_list<VkFormat> local_4b8;
  initializer_list<VkFormat> local_4a8;
  initializer_list<VkFormat> local_498;
  initializer_list<VkFormat> local_488;
  initializer_list<VkFormat> local_478;
  initializer_list<VkFormat> local_468;
  initializer_list<VkFormat> local_458;
  initializer_list<VkFormat> local_448;
  initializer_list<VkFormat> local_438;
  initializer_list<VkFormat> local_428;
  initializer_list<VkFormat> local_418;
  initializer_list<VkFormat> local_408;
  initializer_list<VkFormat> local_3f8;
  initializer_list<VkFormat> local_3e8;
  initializer_list<VkFormat> local_3d8;
  initializer_list<VkFormat> local_3c8;
  initializer_list<VkFormat> local_3b8;
  VkComponentMapping local_3a8;
  initializer_list<VkFormat> local_398;
  initializer_list<VkFormat> local_388;
  initializer_list<VkFormat> local_378;
  initializer_list<VkFormat> local_368;
  initializer_list<VkFormat> local_358;
  initializer_list<VkFormat> local_348;
  initializer_list<VkFormat> local_338;
  VkComponentMapping local_328;
  VkComponentMapping local_318;
  VkFormat local_308 [4];
  VkFormat local_2f8 [4];
  VkFormat local_2e8 [4];
  VkFormat local_2d8 [4];
  VkFormat local_2c8 [4];
  VkFormat local_2b8 [4];
  VkFormat local_2a8 [4];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  VkFormat local_284 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_928;
  uVar22 = 0;
  uVar20 = uVar22;
  uVar19 = uVar22;
  do {
    pVVar11 = (VkFormatProperties *)
              ((longlong)&this->FormatProperties[0].linearTilingFeatures + uVar19);
    pVVar11->linearTilingFeatures = 0;
    pVVar11->optimalTilingFeatures = 0;
    pVVar11->bufferFeatures = 0;
    (*VulkanDynamicAPI::vkGetPhysicalDeviceFormatProperties)(this->Gpu,(VkFormat)uVar20,pVVar11);
    uVar5 = _UNK_1510c2288;
    uVar3 = ___xmm_00000006000000050000000400000003;
    uVar16 = (VkFormat)uVar20 + VK_FORMAT_R4G4_UNORM_PACK8;
    uVar20 = (ulonglong)uVar16;
    uVar19 = uVar19 + 0xc;
  } while (uVar16 < 0xb9);
  pbVar10 = &GPixelFormats[1].field_0x28;
  local_778.r = ___xmm_00000002000000050000000400000003;
  local_778.g = _UNK_1510c2264;
  local_778.b = _UNK_1510c2268;
  local_778.a = _UNK_1510c226c;
  local_890.r = ___xmm_00000002000000010000000100000003;
  local_890.g = _UNK_1510c2234;
  local_890.b = _UNK_1510c2238;
  local_890.a = _UNK_1510c223c;
  local_7b8.r = ___xmm_00000002000000010000000400000003;
  local_7b8.g = _UNK_1510c2254;
  local_7b8.b = _UNK_1510c2258;
  local_7b8.a = _UNK_1510c225c;
  local_318.r = ___xmm_00000003000000010000000100000001;
  local_318.g = _UNK_1510c2274;
  local_318.b = _UNK_1510c2278;
  local_318.a = _UNK_1510c227c;
  local_748.r = ___xmm_00000000000000000000000000000003;
  local_748.g = _UNK_1510c2214;
  local_748.b = _UNK_1510c2218;
  local_748.a = _UNK_1510c221c;
  local_3a8.r = ___xmm_00000002000000010000000300000003;
  local_3a8.g = _UNK_1510c2244;
  local_3a8.b = _UNK_1510c2248;
  local_3a8.a = _UNK_1510c224c;
  local_8b8.r = ___xmm_00000006000000050000000400000003;
  local_8b8.g = _UNK_1510c2284;
  local_8b8.b = _UNK_1510c2288;
  local_8b8.a = _UNK_1510c228c;
  local_328.r = ___xmm_00000001000000010000000100000003;
  local_328.g = _UNK_1510c2224;
  local_328.b = _UNK_1510c2228;
  local_328.a = _UNK_1510c222c;
  pVVar25 = GVulkanBufferFormat;
  pVVar15 = this->PixelFormatComponentMapping;
  do {
    pbVar10[-0x30] = pbVar10[-0x30] & 0xfe;
    pbVar10[-0x34] = 0;
    pbVar10[-0x33] = 0;
    pbVar10[-0x32] = 0;
    pbVar10[-0x31] = 0;
    *pVVar25 = VK_FORMAT_UNDEFINED;
    uVar7 = ___xmm_00000006000000050000000400000003;
    ___xmm_00000006000000050000000400000003 = (VkComponentSwizzle)uVar3;
    _UNK_1510c2284 = SUB84(uVar3,4);
    VVar4 = _UNK_1510c2284;
    pVVar15->r = ___xmm_00000006000000050000000400000003;
    ___xmm_00000006000000050000000400000003 = uVar7;
    uVar7 = _UNK_1510c2288;
    pVVar15->g = VVar4;
    _UNK_1510c2288 = (VkComponentSwizzle)uVar5;
    _UNK_1510c228c = SUB84(uVar5,4);
    VVar4 = _UNK_1510c228c;
    pVVar15->b = _UNK_1510c2288;
    _UNK_1510c2288 = uVar7;
    pVVar15->a = VVar4;
    *pbVar10 = *pbVar10 & 0xfe;
    pbVar10[-4] = 0;
    pbVar10[-3] = 0;
    pbVar10[-2] = 0;
    pbVar10[-1] = 0;
    pbVar10 = pbVar10 + 0x60;
    pVVar25[1] = VK_FORMAT_UNDEFINED;
    uVar7 = ___xmm_00000006000000050000000400000003;
    ___xmm_00000006000000050000000400000003 = (VkComponentSwizzle)uVar3;
    _UNK_1510c2284 = SUB84(uVar3,4);
    VVar4 = _UNK_1510c2284;
    pVVar15[1].r = ___xmm_00000006000000050000000400000003;
    ___xmm_00000006000000050000000400000003 = uVar7;
    uVar7 = _UNK_1510c2288;
    pVVar15[1].g = VVar4;
    _UNK_1510c2288 = (VkComponentSwizzle)uVar5;
    _UNK_1510c228c = SUB84(uVar5,4);
    VVar4 = _UNK_1510c228c;
    pVVar15[1].b = _UNK_1510c2288;
    _UNK_1510c2288 = uVar7;
    pVVar15[1].a = VVar4;
    pVVar25 = pVVar25 + 2;
    pVVar15 = pVVar15 + 2;
  } while ((longlong)pbVar10 < 0x154b81068);
  local_6c8._First = local_880 + 0x2d;
  local_6c8._Last = local_880 + 0x2e;
  local_880[0x2d] = 0x2c;
  MapFormatSupport(this,PF_B8G8R8A8,&local_6c8,&local_8b8,TextureSample,-1);
  local_6b8._First = local_880 + 0x2e;
  local_6b8._Last = local_880 + 0x2f;
  local_880[0x2e] = 9;
  MapFormatSupport(this,PF_G8,&local_6b8,&local_890,TextureSample,-1);
  local_738._First = local_2a8;
  local_738._Last = local_2a8 + 3;
  local_2a8[0] = VK_FORMAT_B10G11R11_UFLOAT_PACK32;
  local_2a8[1] = 0x5a;
  local_2a8[2] = 0x61;
  MapFormatSupport(this,PF_FloatRGB,&local_738,&local_778,TextureSample|RenderTarget,-1);
  local_698._First = local_880 + 0x2f;
  local_698._Last = local_880 + 0x30;
  local_880[0x2f] = 0x61;
  MapFormatSupport(this,PF_FloatRGBA,&local_698,&local_8b8,TextureSample,8);
  local_688._First = local_880 + 0x30;
  local_688._Last = local_880 + 0x31;
  local_880[0x30] = 0x7c;
  MapFormatSupport(this,PF_ShadowDepth,&local_688,&local_748,TextureSample,-1);
  local_678._First = local_880;
  local_678._Last = local_880 + 1;
  local_880[0] = VK_FORMAT_R32G32_SFLOAT;
  MapFormatSupport(this,PF_G32R32F,&local_678,&local_7b8,TextureSample,8);
  local_668._First = local_880 + 1;
  local_880[1] = 0x6d;
  local_668._Last = local_880 + 2;
  MapFormatSupport(this,PF_A32B32G32R32F,&local_668,&local_8b8,TextureSample,0x10);
  local_658._First = local_7a8 + 4;
  local_658._Last = local_7a8 + 6;
  local_7a8[4] = 0x4d;
  local_7a8[5] = 0x53;
  MapFormatSupport(this,PF_G16R16,&local_658,&local_7b8,TextureSample,-1);
  local_648._First = local_880 + 2;
  local_648._Last = local_880 + 3;
  local_880[2] = 0x53;
  MapFormatSupport(this,PF_G16R16F,&local_648,&local_7b8,TextureSample,-1);
  local_638._First = local_880 + 3;
  local_638._Last = local_880 + 4;
  local_880[3] = 0x53;
  MapFormatSupport(this,PF_G16R16F_FILTER,&local_638,&local_7b8,TextureSample,-1);
  local_628._First = local_880 + 4;
  local_628._Last = local_880 + 5;
  local_880[4] = 0x4a;
  MapFormatSupport(this,PF_R16_UINT,&local_628,&local_890,TextureSample,-1);
  local_6a8._First = local_880 + 5;
  local_6a8._Last = local_880 + 6;
  local_880[5] = 0x4b;
  MapFormatSupport(this,PF_R16_SINT,&local_6a8,&local_890,TextureSample,-1);
  local_608._First = local_880 + 6;
  local_608._Last = local_880 + 7;
  local_880[6] = 0x62;
  MapFormatSupport(this,PF_R32_UINT,&local_608,&local_890,TextureSample,-1);
  local_5f8._First = local_880 + 7;
  local_880[7] = 99;
  local_5f8._Last = local_880 + 8;
  MapFormatSupport(this,PF_R32_SINT,&local_5f8,&local_890,TextureSample,-1);
  local_5e8._First = local_880 + 8;
  local_5e8._Last = local_880 + 9;
  local_880[8] = 0xd;
  MapFormatSupport(this,PF_R8_UINT,&local_5e8,&local_890,TextureSample,-1);
  local_5d8._First = (VkFormat *)&local_298;
  local_5d8._Last = local_284;
  local_288 = 0x82;
  local_298 = ___xmm_0000007e00000080000000810000007d;
  uStack_290 = _UNK_1510c2298;
  MapFormatSupport(this,PF_D24,&local_5d8,&local_328,TextureSample,-1);
  local_5c8._First = local_880 + 9;
  local_5c8._Last = local_880 + 10;
  local_880[9] = 0x4c;
  MapFormatSupport(this,PF_R16F,&local_5c8,&local_890,TextureSample,-1);
  local_5b8._First = local_880 + 10;
  local_5b8._Last = local_880 + 0xb;
  local_880[10] = 0x4c;
  MapFormatSupport(this,PF_R16F_FILTER,&local_5b8,&local_890,TextureSample,-1);
  local_5a8._First = local_308;
  local_5a8._Last = local_308 + 3;
  local_308[0] = VK_FORMAT_B10G11R11_UFLOAT_PACK32;
  local_308[1] = 0x5a;
  local_308[2] = 0x61;
  MapFormatSupport(this,PF_FloatR11G11B10,&local_5a8,&local_778,TextureSample|RenderTarget,-1);
  local_598._First = local_880 + 0xb;
  local_880[0xb] = 0x40;
  local_598._Last = local_880 + 0xc;
  MapFormatSupport(this,PF_A2B10G10R10,&local_598,&local_8b8,TextureSample,4);
  local_588._First = local_7a8 + 6;
  local_588._Last = local_7a8 + 8;
  local_7a8[6] = 0x5b;
  local_7a8[7] = 0x61;
  MapFormatSupport(this,PF_A16B16G16R16,&local_588,&local_8b8,TextureSample,8);
  local_578._First = local_880 + 0xc;
  local_578._Last = local_880 + 0xd;
  local_880[0xc] = 9;
  MapFormatSupport(this,PF_A8,&local_578,&local_318,TextureSample,-1);
  local_568._First = local_880 + 0xd;
  local_568._Last = local_880 + 0xe;
  local_880[0xd] = 4;
  MapFormatSupport(this,PF_R5G6B5_UNORM,&local_568,&local_8b8,TextureSample,-1);
  local_558._First = local_2f8;
  local_558._Last = local_2f8 + 3;
  local_2f8[0] = VK_FORMAT_A1R5G5B5_UNORM_PACK16;
  local_2f8[1] = 6;
  local_2f8[2] = 0x2c;
  MapFormatSupport(this,PF_B5G5R5A1_UNORM,&local_558,&local_8b8,TextureSample,-1);
  local_548._First = local_880 + 0xe;
  local_548._Last = local_880 + 0xf;
  local_880[0xe] = 0x25;
  MapFormatSupport(this,PF_R8G8B8A8,&local_548,&local_8b8,TextureSample,-1);
  local_538._First = local_880 + 0xf;
  local_538._Last = local_880 + 0x10;
  local_880[0xf] = 0x29;
  MapFormatSupport(this,PF_R8G8B8A8_UINT,&local_538,&local_8b8,TextureSample,-1);
  local_528._First = local_880 + 0x10;
  local_528._Last = local_880 + 0x11;
  local_880[0x10] = 0x26;
  MapFormatSupport(this,PF_R8G8B8A8_SNORM,&local_528,&local_8b8,TextureSample,-1);
  local_518._First = local_880 + 0x11;
  local_518._Last = local_880 + 0x12;
  local_880[0x11] = 0x51;
  MapFormatSupport(this,PF_R16G16_UINT,&local_518,&local_7b8,TextureSample,-1);
  local_508._First = local_880 + 0x12;
  local_508._Last = local_880 + 0x13;
  local_880[0x12] = 0x52;
  MapFormatSupport(this,PF_R16G16_SINT,&local_508,&local_7b8,TextureSample,-1);
  local_4f8._First = local_880 + 0x13;
  local_4f8._Last = local_880 + 0x14;
  local_880[0x13] = 0x5f;
  MapFormatSupport(this,PF_R16G16B16A16_UINT,&local_4f8,&local_8b8,TextureSample,-1);
  local_4e8._First = local_880 + 0x14;
  local_4e8._Last = local_880 + 0x15;
  local_880[0x14] = 0x60;
  MapFormatSupport(this,PF_R16G16B16A16_SINT,&local_4e8,&local_8b8,TextureSample,-1);
  local_4d8._First = local_880 + 0x15;
  local_880[0x15] = 0x65;
  local_4d8._Last = local_880 + 0x16;
  MapFormatSupport(this,PF_R32G32_UINT,&local_4d8,&local_7b8,TextureSample,-1);
  local_4c8._Last = local_880 + 0x17;
  local_880[0x16] = 0x6b;
  local_4c8._First = local_880 + 0x16;
  MapFormatSupport(this,PF_R32G32B32A32_UINT,&local_4c8,&local_8b8,TextureSample,-1);
  local_4b8._First = local_7a8 + 8;
  local_4b8._Last = local_7a8 + 10;
  local_7a8[8] = 0x5c;
  local_7a8[9] = 0x61;
  MapFormatSupport(this,PF_R16G16B16A16_SNORM,&local_4b8,&local_8b8,TextureSample,-1);
  local_4a8._First = local_7a8 + 10;
  local_4a8._Last = &local_778.r;
  local_7a8[10] = 0x5b;
  local_7a8[0xb] = 0x61;
  MapFormatSupport(this,PF_R16G16B16A16_UNORM,&local_4a8,&local_8b8,TextureSample,-1);
  local_498._First = local_880 + 0x17;
  local_498._Last = local_880 + 0x18;
  local_880[0x17] = 0x10;
  MapFormatSupport(this,PF_R8G8,&local_498,&local_7b8,TextureSample,-1);
  local_488._First = local_880 + 0x18;
  local_488._Last = local_880 + 0x19;
  local_880[0x18] = 0x10;
  MapFormatSupport(this,PF_V8U8,&local_488,&local_7b8,TextureSample,-1);
  local_478._First = local_880 + 0x19;
  local_478._Last = local_880 + 0x1a;
  local_880[0x19] = 100;
  MapFormatSupport(this,PF_R32_FLOAT,&local_478,&local_890,TextureSample,-1);
  local_468._First = local_880 + 0x1a;
  local_468._Last = local_880 + 0x1b;
  local_880[0x1a] = 9;
  MapFormatSupport(this,PF_R8,&local_468,&local_890,TextureSample,-1);
  local_458._First = local_880 + 0x1b;
  local_880[0x1b] = 0x4e;
  local_458._Last = local_880 + 0x1c;
  MapFormatSupport(this,PF_G16R16_SNORM,&local_458,&local_7b8,TextureSample,-1);
  local_448._First = local_880 + 0x1c;
  local_448._Last = local_880 + 0x1d;
  local_880[0x1c] = 0x14;
  MapFormatSupport(this,PF_R8G8_UINT,&local_448,&local_7b8,TextureSample,-1);
  local_438._First = local_880 + 0x1d;
  local_438._Last = local_880 + 0x1e;
  local_880[0x1d] = 0x68;
  MapFormatSupport(this,PF_R32G32B32_UINT,&local_438,&local_778,TextureSample,-1);
  local_428._First = local_880 + 0x1e;
  local_428._Last = local_880 + 0x1f;
  local_880[0x1e] = 0x69;
  MapFormatSupport(this,PF_R32G32B32_SINT,&local_428,&local_778,TextureSample,-1);
  local_418._First = local_880 + 0x1f;
  local_418._Last = local_880 + 0x20;
  local_880[0x1f] = 0x6a;
  MapFormatSupport(this,PF_R32G32B32F,&local_418,&local_778,TextureSample,-1);
  local_408._First = local_880 + 0x20;
  local_408._Last = local_880 + 0x21;
  local_880[0x20] = 0xe;
  MapFormatSupport(this,PF_R8_SINT,&local_408,&local_890,TextureSample,-1);
  local_3f8._First = local_880 + 0x21;
  local_3f8._Last = local_880 + 0x22;
  local_880[0x21] = 0x17;
  MapFormatSupport(this,PF_R8G8B8,&local_3f8,&local_778,TextureSample|RenderTarget,-1);
  EVar9 = GPixelFormats[0x54].Capabilities;
  if (2 < (int)GMaxRHIFeatureLevel) {
    local_3e8._First = local_7a8;
    local_3e8._Last = local_7a8 + 2;
    EVar9 = UAV|TextureAtomics;
    if (GRenderDocFound != false) {
      EVar9 = UAV;
    }
    local_7a8[0] = VK_FORMAT_R64_UINT;
    local_7a8[1] = 0x65;
    MapFormatSupport(this,PF_R64_UINT,&local_3e8,&local_890,EVar9,-1);
    EVar9 = GPixelFormats[0x54].Capabilities & ~(TextureSample|AnyTexture);
    if ((GRHIGlobals.SupportsAtomicUInt64 != false) &&
       ((GPixelFormats[0x54].Capabilities & UAV) == None)) {
      GPixelFormats[0x54].Capabilities = EVar9;
      if (2 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      GRHIGlobals.SupportsAtomicUInt64 = false;
      EVar9 = GPixelFormats[0x54].Capabilities;
    }
  }
  GPixelFormats[0x54].Capabilities = EVar9;
  pTVar6 = CVarVulkanUseD24.Ref;
  bVar8 = IsInParallelGameThread();
  if ((bVar8) || (bVar8 = IsInGameThread(), uVar20 = 4, bVar8)) {
    uVar20 = uVar22;
  }
  if (*(int *)((longlong)pTVar6->ShadowedValue + uVar20) == 0) {
    local_3b8._First = local_2c8;
    local_2c8[0] = VK_FORMAT_D32_SFLOAT_S8_UINT;
    local_3b8._Last = local_2c8 + 3;
    local_2c8[1] = 0x81;
    local_2c8[2] = 0x80;
    MapFormatSupport(this,PF_DepthStencil,&local_3b8,&local_748,TextureSample,-1);
    local_398._First = local_2b8;
    local_398._Last = local_2b8 + 3;
    local_2b8[0] = VK_FORMAT_D32_SFLOAT_S8_UINT;
    local_2b8[1] = 0x81;
    local_2b8[2] = 0x80;
    MapFormatSupport(this,PF_X24_G8,&local_398,&local_3a8,TextureSample,-1);
    INSERT(GPixelFormats[0xb]._40_1_,'\0',1,1);
  }
  else {
    local_3d8._First = local_2e8;
    local_2e8[0] = VK_FORMAT_D24_UNORM_S8_UINT;
    local_3d8._Last = local_2e8 + 3;
    local_2e8[1] = 0x82;
    local_2e8[2] = 0x80;
    MapFormatSupport(this,PF_DepthStencil,&local_3d8,&local_748,TextureSample,-1);
    local_3c8._First = local_2d8;
    local_3c8._Last = local_2d8 + 3;
    local_2d8[0] = VK_FORMAT_D24_UNORM_S8_UINT;
    local_2d8[1] = 0x82;
    local_2d8[2] = 0x80;
    MapFormatSupport(this,PF_X24_G8,&local_3c8,&local_3a8,TextureSample,-1);
    INSERT(GPixelFormats[0xb]._40_1_,'\x01',1,1);
  }
  local_388._First = local_880 + 0x22;
  local_388._Last = local_880 + 0x23;
  local_880[0x22] = 0x83;
  MapFormatSupport(this,PF_DXT1,&local_388,&local_778,TextureSample,-1);
  local_378._First = local_880 + 0x23;
  local_378._Last = local_880 + 0x24;
  local_880[0x23] = 0x87;
  MapFormatSupport(this,PF_DXT3,&local_378,&local_8b8,TextureSample,-1);
  local_368._First = local_880 + 0x24;
  local_368._Last = local_880 + 0x25;
  local_880[0x24] = 0x89;
  MapFormatSupport(this,PF_DXT5,&local_368,&local_8b8,TextureSample,-1);
  local_358._First = local_880 + 0x25;
  local_358._Last = local_880 + 0x26;
  local_880[0x25] = 0x8b;
  MapFormatSupport(this,PF_BC4,&local_358,&local_8b8,TextureSample,-1);
  local_348._First = local_880 + 0x26;
  local_348._Last = local_880 + 0x27;
  local_880[0x26] = 0x8d;
  MapFormatSupport(this,PF_BC5,&local_348,&local_8b8,TextureSample,-1);
  local_338._First = local_880 + 0x27;
  local_338._Last = local_880 + 0x28;
  local_880[0x27] = 0x8f;
  MapFormatSupport(this,PF_BC6H,&local_338,&local_8b8,TextureSample,-1);
  local_728._First = local_880 + 0x28;
  local_728._Last = local_880 + 0x29;
  local_880[0x28] = 0x91;
  MapFormatSupport(this,PF_BC7,&local_728,&local_8b8,TextureSample,-1);
  local_718._First = local_7a8 + 2;
  local_718._Last = local_7a8 + 4;
  local_7a8[2] = 0x46;
  local_7a8[3] = 0x4c;
  MapFormatSupport(this,PF_G16,&local_718,&local_890,TextureSample,-1);
  if (((this->OptionalDeviceExtensions).field0_0x0.Packed & 0x400000000000) != 0) {
    local_708._First = local_880 + 0x29;
    local_708._Last = local_880 + 0x2a;
    local_880[0x29] = 0x3b9bcbd0;
    MapFormatSupport(this,PF_ASTC_4x4_HDR,&local_708,&local_8b8,TextureSample,-1);
    local_6f8._First = local_880 + 0x2a;
    local_6f8._Last = local_880 + 0x2b;
    local_880[0x2a] = 0x3b9bcbd4;
    MapFormatSupport(this,PF_ASTC_6x6_HDR,&local_6f8,&local_8b8,TextureSample,-1);
    local_6e8._First = local_880 + 0x2b;
    local_6e8._Last = local_880 + 0x2c;
    local_880[0x2b] = 0x3b9bcbd7;
    MapFormatSupport(this,PF_ASTC_8x8_HDR,&local_6e8,&local_8b8,TextureSample,-1);
    local_6d8._First = local_880 + 0x2c;
    local_6d8._Last = local_880 + 0x2d;
    local_880[0x2c] = 0x3b9bcbdb;
    MapFormatSupport(this,PF_ASTC_10x10_HDR,&local_6d8,&local_8b8,TextureSample,-1);
    local_618._First = &local_898;
    local_618._Last = &local_894;
    local_898 = VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK;
    MapFormatSupport(this,PF_ASTC_12x12_HDR,&local_618,&local_8b8,TextureSample,-1);
  }
  if ((*(uint *)&(this->OptionalDeviceExtensions).field0_0x0 >> 0x1c & 1) != 0) {
    GPixelFormats[0].Capabilities = GPixelFormats[0].Capabilities | TextureSample;
  }
  iVar18 = 1;
  do {
    switch(iVar18) {
    case 1:
      VVar17 = VK_FORMAT_R32_SFLOAT;
      break;
    case 2:
      VVar17 = VK_FORMAT_R32G32_SFLOAT;
      break;
    case 3:
      VVar17 = VK_FORMAT_R32G32B32_SFLOAT;
      break;
    case 4:
      VVar17 = VK_FORMAT_R32G32B32A32_SFLOAT;
      break;
    case 5:
      VVar17 = VK_FORMAT_R8G8B8A8_SNORM;
      break;
    case 6:
      VVar17 = VK_FORMAT_R8G8B8A8_UINT;
      break;
    case 7:
      VVar17 = VK_FORMAT_R8G8B8A8_UNORM;
      break;
    case 8:
      VVar17 = VK_FORMAT_B8G8R8A8_UNORM;
      break;
    case 9:
      VVar17 = VK_FORMAT_R16G16_SINT;
      break;
    case 10:
      VVar17 = VK_FORMAT_R16G16B16A16_SINT;
      break;
    case 0xb:
      VVar17 = VK_FORMAT_R16G16_SNORM;
      break;
    case 0xc:
      VVar17 = VK_FORMAT_R16G16_SFLOAT;
      break;
    case 0xd:
      VVar17 = VK_FORMAT_R16G16B16A16_SFLOAT;
      break;
    case 0xe:
      VVar17 = VK_FORMAT_R16G16B16A16_SNORM;
      break;
    case 0xf:
      VVar17 = VK_FORMAT_R16G16_UINT;
      break;
    case 0x10:
      VVar17 = VK_FORMAT_R16G16B16A16_UINT;
      break;
    case 0x11:
      VVar17 = VK_FORMAT_R16G16_UNORM;
      break;
    case 0x12:
      VVar17 = VK_FORMAT_R16G16B16A16_UNORM;
      break;
    case 0x13:
      VVar17 = VK_FORMAT_A2B10G10R10_UNORM_PACK32;
      break;
    case 0x14:
      VVar17 = VK_FORMAT_R32_UINT;
      break;
    default:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Undefined vertex-element format conversion\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                         ,0x1c0,L"");
      VVar17 = VK_FORMAT_UNDEFINED;
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pVVar11 = GetFormatProperties(this,VVar17);
    if ((pVVar11->bufferFeatures == 0) && (2 < (byte)LogVulkanRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
    iVar18 = iVar18 + 1;
  } while (iVar18 < 0x15);
  pVVar25 = GVulkanSRGBFormat;
  uVar20 = uVar22;
  do {
    VVar17 = VK_FORMAT_UNDEFINED;
    if (((&GPixelFormats[0].field_0x28)[uVar20] & 1) == 0) goto switchD_145b3498f_caseD_a;
    VVar1 = *(VkFormat *)((longlong)&GPixelFormats[0].PlatformFormat + uVar20);
    VVar17 = VVar1;
    switch(VVar1) {
    case VK_FORMAT_R8_UNORM:
      VVar17 = VK_FORMAT_R8_SRGB;
      if ((int)GMaxRHIFeatureLevel < 2) {
        VVar17 = VK_FORMAT_R8_UNORM;
      }
      if (VVar1 != VVar17) break;
    default:
      goto switchD_145b3498f_caseD_a;
    case VK_FORMAT_R8G8_UNORM:
      VVar17 = VK_FORMAT_R8G8_SRGB;
      break;
    case VK_FORMAT_R8G8B8_UNORM:
      VVar17 = VK_FORMAT_R8G8B8_SRGB;
      break;
    case VK_FORMAT_R8G8B8A8_UNORM:
      VVar17 = VK_FORMAT_R8G8B8A8_SRGB;
      break;
    case VK_FORMAT_B8G8R8A8_UNORM:
      VVar17 = VK_FORMAT_B8G8R8A8_SRGB;
      break;
    case VK_FORMAT_A8B8G8R8_UNORM_PACK32:
      VVar17 = VK_FORMAT_A8B8G8R8_SRGB_PACK32;
      break;
    case VK_FORMAT_BC1_RGB_UNORM_BLOCK:
      VVar17 = VK_FORMAT_BC1_RGB_SRGB_BLOCK;
      break;
    case VK_FORMAT_BC1_RGBA_UNORM_BLOCK:
      VVar17 = VK_FORMAT_BC1_RGBA_SRGB_BLOCK;
      break;
    case VK_FORMAT_BC2_UNORM_BLOCK:
      VVar17 = VK_FORMAT_BC2_SRGB_BLOCK;
      break;
    case VK_FORMAT_BC3_UNORM_BLOCK:
      VVar17 = VK_FORMAT_BC3_SRGB_BLOCK;
      break;
    case VK_FORMAT_BC7_UNORM_BLOCK:
      VVar17 = VK_FORMAT_BC7_SRGB_BLOCK;
      break;
    case VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK:
      VVar17 = VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK;
      break;
    case VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK:
      VVar17 = VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK;
      break;
    case VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK:
      VVar17 = VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK;
      break;
    case VK_FORMAT_ASTC_4x4_UNORM_BLOCK:
      VVar17 = VK_FORMAT_ASTC_4x4_SRGB_BLOCK;
      break;
    case VK_FORMAT_ASTC_5x4_UNORM_BLOCK:
      VVar17 = VK_FORMAT_ASTC_5x4_SRGB_BLOCK;
      break;
    case VK_FORMAT_ASTC_5x5_UNORM_BLOCK:
      VVar17 = VK_FORMAT_ASTC_5x5_SRGB_BLOCK;
      break;
    case VK_FORMAT_ASTC_6x5_UNORM_BLOCK:
      VVar17 = VK_FORMAT_ASTC_6x5_SRGB_BLOCK;
      break;
    case VK_FORMAT_ASTC_6x6_UNORM_BLOCK:
      VVar17 = VK_FORMAT_ASTC_6x6_SRGB_BLOCK;
      break;
    case VK_FORMAT_ASTC_8x5_UNORM_BLOCK:
      VVar17 = VK_FORMAT_ASTC_8x5_SRGB_BLOCK;
      break;
    case VK_FORMAT_ASTC_8x6_UNORM_BLOCK:
      VVar17 = VK_FORMAT_ASTC_8x6_SRGB_BLOCK;
      break;
    case VK_FORMAT_ASTC_8x8_UNORM_BLOCK:
      VVar17 = VK_FORMAT_ASTC_8x8_SRGB_BLOCK;
      break;
    case VK_FORMAT_ASTC_10x5_UNORM_BLOCK:
      VVar17 = VK_FORMAT_ASTC_10x5_SRGB_BLOCK;
      break;
    case VK_FORMAT_ASTC_10x6_UNORM_BLOCK:
      VVar17 = VK_FORMAT_ASTC_10x6_SRGB_BLOCK;
      break;
    case VK_FORMAT_ASTC_10x8_UNORM_BLOCK:
      VVar17 = VK_FORMAT_ASTC_10x8_SRGB_BLOCK;
      break;
    case VK_FORMAT_ASTC_10x10_UNORM_BLOCK:
      VVar17 = VK_FORMAT_ASTC_10x10_SRGB_BLOCK;
      break;
    case VK_FORMAT_ASTC_12x10_UNORM_BLOCK:
      VVar17 = VK_FORMAT_ASTC_12x10_SRGB_BLOCK;
      break;
    case VK_FORMAT_ASTC_12x12_UNORM_BLOCK:
      VVar17 = VK_FORMAT_ASTC_12x12_SRGB_BLOCK;
    }
    pVVar11 = GetFormatProperties(this,VVar17);
    if ((pVVar11->optimalTilingFeatures & 1) == 0) {
      VVar17 = VVar1;
    }
switchD_145b3498f_caseD_a:
    *pVVar25 = VVar17;
    uVar20 = uVar20 + 0x30;
    pVVar25 = pVVar25 + 1;
    if (0x119f < (longlong)uVar20) {
      pwVar12 = FCommandLine::Get();
      bVar8 = FParse::Param(pwVar12,L"PrintVulkanPixelFormatMappings");
      if (bVar8) {
        if ((2 < (byte)LogVulkanRHI._0_1_) &&
           (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI),
           2 < (byte)LogVulkanRHI._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        }
        puVar24 = &GPixelFormats[0].PlatformFormat;
        lVar23 = 0x5e;
        do {
          if ((puVar24[1] & VK_FORMAT_R4G4_UNORM_PACK8) != VK_FORMAT_UNDEFINED) {
            VVar17 = *puVar24;
            pcVar13 = string_VkFormat(VVar17);
            local_278._padding_ = 0;
            if (pcVar13 == (char *)0x0) {
              local_278.StringLength = 0;
              local_278.Ptr = (wchar_t *)0x0;
            }
            else {
              sVar14 = strlen(pcVar13);
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_278,pcVar13,(int)sVar14,Yes);
            }
            ::FString::FString(&local_758,local_278.Ptr);
            if ((void *)local_278._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_278._padding_);
            }
            ::FString::RemoveAt(&local_758,0,10,Default);
            local_768.Data.ArrayMax = 0;
            local_768.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_768.Data.ArrayNum = 0;
            if (VVar17 != *(VkFormat *)((longlong)GVulkanSRGBFormat + uVar22)) {
              pcVar13 = string_VkFormat(*(VkFormat *)((longlong)GVulkanSRGBFormat + uVar22));
              local_158._padding_ = 0;
              if (pcVar13 == (char *)0x0) {
                local_158.StringLength = 0;
                local_158.Ptr = (wchar_t *)0x0;
              }
              else {
                sVar14 = strlen(pcVar13);
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_158,pcVar13,(int)sVar14,Yes);
              }
              ::FString::operator=(&local_768,local_158.Ptr);
              if ((void *)local_158._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_158._padding_);
              }
              ::FString::RemoveAt(&local_768,0,10,Default);
            }
            if (2 < (byte)LogVulkanRHI._0_1_) {
              UE::Logging::Private::BasicLog<3>
                        ((FStaticBasicLogRecord *)&PTR_u__24s____24s_____1510b3f08,
                         (FLogCategoryBase *)&LogVulkanRHI);
            }
            if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_768.Data.AllocatorInstance.Data);
            }
            if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_758.Data.AllocatorInstance.Data);
            }
          }
          uVar22 = uVar22 + 4;
          puVar24 = puVar24 + 0xc;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        if (2 < (byte)LogVulkanRHI._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        }
        pEVar21 = &GPixelFormats[0].Capabilities;
        do {
          if ((pEVar21[2] & 1) != 0) {
            EVar9 = *pEVar21;
            local_8a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_8a8.Data.ArrayNum = 0;
            local_8a8.Data.ArrayMax = 0;
            if ((EVar9 >> 9 & 1) != 0) {
              ::FString::AppendChars(&local_8a8,L"TextureSample, ",0xf);
            }
            if ((EVar9 & TextureCube) != None) {
              ::FString::AppendChars(&local_8a8,L"TextureCube, ",0xd);
            }
            if ((EVar9 & RenderTarget) != None) {
              ::FString::AppendChars(&local_8a8,L"RenderTarget, ",0xe);
            }
            if ((EVar9 & DepthStencil) != None) {
              ::FString::AppendChars(&local_8a8,L"DepthStencil, ",0xe);
            }
            if ((EVar9 >> 0xc & 1) != 0) {
              ::FString::AppendChars(&local_8a8,L"TextureBlendable, ",0x12);
            }
            if ((EVar9 >> 0xb & 1) != 0) {
              ::FString::AppendChars(&local_8a8,L"TextureAtomics, ",0x10);
            }
            if ((EVar9 >> 0xe & 1) != 0) {
              ::FString::AppendChars(&local_8a8,L"Buffer, ",8);
            }
            if ((EVar9 >> 0xf & 1) != 0) {
              ::FString::AppendChars(&local_8a8,L"VertexBuffer, ",0xe);
            }
            if ((EVar9 >> 0x10 & 1) != 0) {
              ::FString::AppendChars(&local_8a8,L"IndexBuffer, ",0xd);
            }
            if ((EVar9 >> 0x13 & 1) != 0) {
              ::FString::AppendChars(&local_8a8,L"BufferAtomics, ",0xf);
            }
            if ((EVar9 >> 0x14 & 1) != 0) {
              ::FString::AppendChars(&local_8a8,L"UAV, ",5);
            }
            if (2 < (byte)LogVulkanRHI._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
            }
            if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
            }
          }
          pEVar21 = pEVar21 + 0xc;
        } while ((longlong)pEVar21 < 0x154b81030);
      }
      return;
    }
  } while( true );
}

// SupportsBindless @ 145b35250

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

bool __thiscall FVulkanDevice::SupportsBindless(FVulkanDevice *this)

{
  return this->BindlessDescriptorManager->bIsSupported;
}

// UseMinimalSubmits @ 145b38880

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FVulkanDevice::UseMinimalSubmits(FVulkanDevice *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  if (((this->ActiveQueueFamilies).ArrayNum == 1) && (!GRHIGlobals.SupportsParallelRHIExecute)) {
    lVar5 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
    if (*(longlong *)(lVar5 + 0xb0) == 0) {
      lVar5 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
      pTVar2 = GCVarVulkanUseMinimalSubmits.Ref;
      if (*(longlong *)(lVar5 + 0x80) == 0) {
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
        if (pTVar2->ShadowedValue[1] != 0) {
          return true;
        }
      }
    }
  }
  return false;
}

// VulkanSetObjectName @ 145b38ad0

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

void __thiscall
FVulkanDevice::VulkanSetObjectName
          (FVulkanDevice *this,VkObjectType param_1,ulong64 param_2,wchar_t *param_3)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  undefined1 auStack_138 [32];
  VkDebugUtilsObjectNameInfoEXT local_118;
  FScriptContainerElement local_e8 [128];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  if ((this->DebugMarkers).SetDebugName ==
      (_func___cdecl_VkResult_VkDevice_T_ptr_VkDebugUtilsObjectNameInfoEXT_ptr *)0x0) {
    return;
  }
  local_68.Data = (FScriptContainerElement *)0x0;
  if (param_3 == (wchar_t *)0x0) {
    local_60 = (FScriptContainerElement *)0x0;
    local_58 = 0;
    goto LAB_145b38bca;
  }
  sVar2 = wcslen(param_3);
  local_58 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_3,(int)sVar2);
  uVar1 = local_58 + 1;
  uVar3 = uVar1;
  if (uVar1 < 0x81) {
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      uVar3 = 0;
      goto LAB_145b38b62;
    }
  }
  else {
LAB_145b38b62:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar3,1);
  }
  local_60 = local_e8;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    local_60 = local_68.Data;
  }
  UE::Core::Private::Convert((uchar *)local_60,uVar1,param_3,(int)sVar2 + 1);
LAB_145b38bca:
  local_118.sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT;
  local_118._20_4_ = 0;
  local_118.pObjectName._0_4_ = SUB84(local_60,0);
  local_118.pObjectName._4_4_ = (undefined4)((ulonglong)local_60 >> 0x20);
  local_118._4_8_ = 0;
  local_118._12_8_ = (ulonglong)param_1 << 0x20;
  local_118.objectHandle = param_2;
  (*(this->DebugMarkers).SetDebugName)(this->Device,&local_118);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// WaitUntilIdle @ 145b38e60

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

void __thiscall FVulkanDevice::WaitUntilIdle(FVulkanDevice *this)

{
  VkResult VVar1;
  
  FVulkanDynamicRHI::RHIBlockUntilGPUIdle(this->RHI);
  VVar1 = (*VulkanDynamicAPI::vkDeviceWaitIdle)(this->Device);
  if (VVar1 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar1,"VulkanRHI::vkDeviceWaitIdle(Device)",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.cpp"
               ,0x5fa);
    return;
  }
  return;
}

// AcquireOcclusionQueryPool @ 145b561f0

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

FVulkanQueryPool * __thiscall
FVulkanDevice::AcquireOcclusionQueryPool(FVulkanDevice *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FVulkanQueryPool *pFVar8;
  FVulkanQueryPool *this_00;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  
  lpCriticalSection = &this->QueryPoolLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar9 = param_1 + 0xff & 0xffffff00;
  if (uVar9 == 0) {
    uVar9 = 1;
  }
  if (uVar9 < this->OcclusionQueryPoolSize) {
    uVar9 = this->OcclusionQueryPoolSize;
  }
  pFVar8 = (FVulkanQueryPool *)0x0;
  this->OcclusionQueryPoolSize = uVar9;
  uVar9 = (this->FreeQueryPools).Elements[0].ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar11 = (longlong)(int)uVar9;
    lVar12 = lVar11 * 8;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->FreeQueryPools).Elements[0].ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FVulkanQueryPool *)(*pcVar5)();
        return pFVar8;
      }
      puVar3 = *(undefined8 **)((this->FreeQueryPools).Elements[0].AllocatorInstance.Data + lVar12);
      if (*(uint *)(puVar3 + 3) < this->OcclusionQueryPoolSize) {
        (**(code **)*puVar3)(puVar3,1);
        uVar7 = 0;
        if ((int)uVar9 < (this->FreeQueryPools).Elements[0].ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FVulkanQueryPool *)(*pcVar5)();
          return pFVar8;
        }
        iVar2 = (this->FreeQueryPools).Elements[0].ArrayNum;
        pFVar4 = (this->FreeQueryPools).Elements[0].AllocatorInstance.Data;
        iVar10 = ~uVar9 + iVar2;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(pFVar4 + lVar11 * 8,pFVar4 + (longlong)(iVar2 - iVar10) * 8,(longlong)iVar10 << 3)
          ;
        }
        piVar1 = &(this->FreeQueryPools).Elements[0].ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      lVar11 = lVar11 + -1;
      lVar12 = lVar12 + -8;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  iVar2 = (this->FreeQueryPools).Elements[0].ArrayNum;
  if (iVar2 == 0) {
    this_00 = ::operator_new(0x50);
    if (this_00 != (FVulkanQueryPool *)0x0) {
      pFVar8 = FVulkanQueryPool::FVulkanQueryPool
                         (this_00,this,this->OcclusionQueryPoolSize,Occlusion);
    }
  }
  else {
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FVulkanQueryPool *)(*pcVar5)();
      return pFVar8;
    }
    iVar2 = (this->FreeQueryPools).Elements[0].ArrayNum;
    pFVar8 = *(FVulkanQueryPool **)
              ((this->FreeQueryPools).Elements[0].AllocatorInstance.Data + (longlong)iVar2 * 8 + -8)
    ;
    (this->FreeQueryPools).Elements[0].ArrayNum = iVar2 + -1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar8;
}

// AcquireTimingQueryPool @ 145b56610

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

FVulkanQueryPool * __thiscall FVulkanDevice::AcquireTimingQueryPool(FVulkanDevice *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FVulkanQueryPool *pFVar4;
  
  lpCriticalSection = &this->QueryPoolLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->FreeQueryPools).Elements[2].ArrayNum;
  if (iVar1 == 0) {
    pFVar4 = ::operator_new(0x50);
    if (pFVar4 == (FVulkanQueryPool *)0x0) {
      pFVar4 = (FVulkanQueryPool *)0x0;
    }
    else {
      pFVar4 = FVulkanQueryPool::FVulkanQueryPool(pFVar4,this,GTimingQueryPoolSize,Timestamp);
    }
  }
  else {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FVulkanQueryPool *)(*pcVar2)();
        return pFVar4;
      }
    }
    iVar1 = (this->FreeQueryPools).Elements[2].ArrayNum;
    pFVar4 = *(FVulkanQueryPool **)
              ((this->FreeQueryPools).Elements[2].AllocatorInstance.Data + (longlong)iVar1 * 8 + -8)
    ;
    (this->FreeQueryPools).Elements[2].ArrayNum = iVar1 + -1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar4;
}

// CleanUpRayTracing @ 145b5b4b0

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

void __thiscall FVulkanDevice::CleanUpRayTracing(FVulkanDevice *this)

{
  FVulkanRayTracingPipelineLibraryCache *this_00;
  bool bVar1;
  
  this_00 = this->RayTracingPipelineLibraryCache;
  if (this_00 != (FVulkanRayTracingPipelineLibraryCache *)0x0) {
    FVulkanRayTracingPipelineLibraryCache::~FVulkanRayTracingPipelineLibraryCache(this_00);
    ::operator_delete(this_00,0x80);
    this->RayTracingPipelineLibraryCache = (FVulkanRayTracingPipelineLibraryCache *)0x0;
  }
  bVar1 = 1 < (int)DummyUBs._72_4_;
  if (!bVar1) {
    TSet<TTuple<unsigned_int,TRefCountPtr<FRHIUniformBuffer>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FRHIUniformBuffer>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_int,TRefCountPtr<FRHIUniformBuffer>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FRHIUniformBuffer>,0>,FDefaultSetAllocator>
                      *)&DummyUBs);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRefCountPtr<FRHIUniformBuffer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRefCountPtr<FRHIUniformBuffer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&DummyUBs,0,DummyUBs._8_4_);
  DummyUBs._8_4_ = 0;
  if (DummyUBs._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&DummyUBs,0,(int *)&DummyUBs.field_0xc);
  }
  DummyUBs._48_4_ = 0xffffffff;
  DummyUBs._52_4_ = 0;
  DummyUBs._40_4_ = 0;
  if (0x80 < (uint)DummyUBs._44_4_) {
    DummyUBs._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&DummyUBs.field_0x10,0);
  }
  if (bVar1) {
    DummyUBs._72_4_ = 1;
    TSet<TTuple<unsigned_int,TRefCountPtr<FRHIUniformBuffer>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FRHIUniformBuffer>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_int,TRefCountPtr<FRHIUniformBuffer>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FRHIUniformBuffer>,0>,FDefaultSetAllocator>
              *)&DummyUBs);
  }
  return;
}

// InitializeRayTracing @ 145b6bcf0

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVulkanDevice::InitializeRayTracing(FVulkanDevice *this)

{
  uint uVar1;
  FVulkanRayTracingPipelineLibraryCache *pFVar2;
  
  if (GRHIGlobals.RayTracing.SupportsShaders) {
    if (((this->OptionalDeviceExtensionProperties).RayTracingPipelineProps.maxShaderGroupStride <
         (uint)GVulkanRayTracingMaxShaderGroupStride) && (2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    uVar1 = (this->OptionalDeviceExtensionProperties).RayTracingPipelineProps.maxShaderGroupStride;
    if ((ulonglong)uVar1 < (ulonglong)(longlong)GVulkanRayTracingMaxShaderGroupStride) {
      GVulkanRayTracingMaxShaderGroupStride = uVar1;
    }
    pFVar2 = ::operator_new(0x80);
    if (pFVar2 != (FVulkanRayTracingPipelineLibraryCache *)0x0) {
      pFVar2->Device = this;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar2->PipelineLibraryMapCS,4000);
      *(undefined8 *)&pFVar2->PipelineLibraryMap = 0;
      *(undefined8 *)&(pFVar2->PipelineLibraryMap).field_0x8 = 0;
      *(undefined8 *)&(pFVar2->PipelineLibraryMap).field_0x20 = 0;
      *(undefined4 *)&(pFVar2->PipelineLibraryMap).field_0x28 = 0;
      *(undefined4 *)&(pFVar2->PipelineLibraryMap).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar2->PipelineLibraryMap).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar2->PipelineLibraryMap).field_0x34 = 0;
      *(undefined8 *)&(pFVar2->PipelineLibraryMap).field_0x40 = 0;
      *(undefined4 *)&(pFVar2->PipelineLibraryMap).field_0x48 = 0;
      this->RayTracingPipelineLibraryCache = pFVar2;
      return;
    }
    this->RayTracingPipelineLibraryCache = (FVulkanRayTracingPipelineLibraryCache *)0x0;
  }
  return;
}

// ReleaseQueryPool @ 145b78900

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

void __thiscall FVulkanDevice::ReleaseQueryPool(FVulkanDevice *this,FVulkanQueryPool *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FVulkanQueryPool *local_res10 [3];
  
  lpCriticalSection = &this->QueryPoolLock;
  local_res10[0] = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar5 = (this->FreeQueryPools).Elements + local_res10[0]->QueryType;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar1 + (longlong)pTVar5->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  pTVar5->ArrayNum = iVar4 + 1;
  *(FVulkanQueryPool **)((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_res10[0];
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// RemoveStaleQueryPools @ 145b79080

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

void __thiscall FVulkanDevice::RemoveStaleQueryPools(FVulkanDevice *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int *piVar10;
  longlong lVar11;
  uint uVar12;
  
  lpCriticalSection = &this->QueryPoolLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (&this->FreeQueryPools !=
      (TStaticArray<TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_>,4,4294967295> *)
      &this->BarrierEventLock) {
    piVar10 = &(this->FreeQueryPools).Elements[0].ArrayNum;
    do {
      uVar9 = *piVar10 - 1;
      if (-1 < (int)uVar9) {
        lVar8 = (longlong)(int)uVar9;
        lVar11 = lVar8 * 8;
        do {
          uVar12 = ~uVar9 >> 0x1f;
          uVar6 = 0;
          if ((int)uVar9 < *piVar10) {
            uVar6 = uVar12;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          puVar2 = *(undefined8 **)
                    ((((TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_> *)(piVar10 + -2))->
                     AllocatorInstance).Data + lVar11);
          if (*(int *)(puVar2 + 9) < GQueryPoolDeletionDelay) {
            *(int *)(puVar2 + 9) = *(int *)(puVar2 + 9) + 1;
          }
          else {
            (**(code **)*puVar2)(puVar2,1);
            uVar6 = 0;
            if ((int)uVar9 < *piVar10) {
              uVar6 = uVar12;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = (((TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_> *)(piVar10 + -2))->
                     AllocatorInstance).Data;
            iVar7 = *piVar10 + ~uVar9;
            if (1 < iVar7) {
              iVar7 = 1;
            }
            if (iVar7 != 0) {
              memmove(pFVar3 + lVar8 * 8,pFVar3 + (longlong)(*piVar10 - iVar7) * 8,
                      (longlong)iVar7 << 3);
            }
            *piVar10 = *piVar10 + -1;
          }
          lVar8 = lVar8 + -1;
          lVar11 = lVar11 + -8;
          uVar9 = uVar9 - 1;
        } while (-1 < (int)uVar9);
      }
      piVar1 = piVar10 + 2;
      piVar10 = piVar10 + 4;
    } while ((FWindowsRecursiveMutex *)piVar1 != &this->BarrierEventLock);
  }
                    /* WARNING: Could not recover jumptable at 0x000145b79226. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SetupPresentQueue @ 145bbd650

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
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVulkanDevice::SetupPresentQueue(FVulkanDevice *this,VkSurfaceKHR_T *param_1)

{
  FVulkanQueue *pFVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  VkResult VVar4;
  longlong lVar5;
  uint local_res8 [2];
  
  if (this->PresentQueue == (FVulkanQueue *)0x0) {
    lVar5 = 0;
    local_res8[0] = 0;
    VVar4 = (*VulkanDynamicAPI::vkGetPhysicalDeviceSurfaceSupportKHR)
                      (this->Gpu,(this->Queues).Elements[0]->FamilyIndex,param_1,local_res8);
    if (VVar4 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar4,
                 "VulkanRHI::vkGetPhysicalDeviceSurfaceSupportKHR(PhysicalDevice, FamilyIndex, Surface, &bSupportsPresent)"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                 ,0x39d);
    }
    if ((local_res8[0] != 0) && (3 < (byte)LogVulkanRHI._0_1_)) {
      UE::Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)&PTR_u_Queue_Family__d_1510d7558,
                 (FLogCategoryBase *)&LogVulkanRHI);
    }
    if (local_res8[0] != 1) {
      FWindowsPlatformMisc::MessageBoxExt
                (Ok,
                 L"Cannot find a compatible Vulkan device that supports surface presentation.\n\n",
                 L"Vulkan device not available");
      FWindowsPlatformMisc::RequestExitWithStatus(true,'\x01',(wchar_t *)0x0);
    }
    this->PresentQueue = (this->Queues).Elements[0];
    pFVar1 = (this->Queues).Elements[1];
    if (pFVar1 != (FVulkanQueue *)0x0) {
      local_res8[0] = 0;
      VVar4 = (*VulkanDynamicAPI::vkGetPhysicalDeviceSurfaceSupportKHR)
                        (this->Gpu,pFVar1->FamilyIndex,param_1,local_res8);
      if (VVar4 != VK_SUCCESS) {
        VulkanRHI::VerifyVulkanResult
                  (VVar4,
                   "VulkanRHI::vkGetPhysicalDeviceSurfaceSupportKHR(PhysicalDevice, FamilyIndex, Surface, &bSupportsPresent)"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                   ,0x39d);
      }
      if ((local_res8[0] != 0) && (3 < (byte)LogVulkanRHI._0_1_)) {
        UE::Logging::Private::BasicLog<4>
                  ((FStaticBasicLogRecord *)&PTR_u_Queue_Family__d_1510d7558,
                   (FLogCategoryBase *)&LogVulkanRHI);
      }
      pTVar2 = GAllowPresentOnComputeQueue.Ref;
      if (local_res8[0] == 1) {
        bVar3 = IsInParallelGameThread();
        if ((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) {
          lVar5 = 4;
        }
        if (*(int *)((longlong)pTVar2->ShadowedValue + lVar5) != 0) {
          this->bPresentOnComputeQueue = this->VendorId == Amd;
          this->PresentQueue = (this->Queues).Elements[1];
        }
      }
    }
  }
  return;
}

// operator() @ 1504d7f80

bool __thiscall `FVulkanDevice::FVulkanDevice'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1536226488003592466>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1536226488003592466>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

