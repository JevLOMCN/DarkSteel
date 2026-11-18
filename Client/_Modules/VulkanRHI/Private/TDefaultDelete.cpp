// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// operator() @ 145ade960

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
TDefaultDelete<FVulkanPipelineCacheChunk>::operator()
          (TDefaultDelete<FVulkanPipelineCacheChunk> *this,FVulkanPipelineCacheChunk *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  if (param_1 != (FVulkanPipelineCacheChunk *)0x0) {
    if (param_1->PipelineCacheObj != (VkPipelineCache_T *)0x0) {
      (*VulkanDynamicAPI::vkDestroyPipelineCache)
                (GVulkanRHI->Device->Device,param_1->PipelineCacheObj,
                 &VulkanRHI::GAllocationCallbacks);
    }
    pFVar1 = (param_1->BinaryCacheFileInfo).Filename.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    FLockFreePointerListLIFOBase<void,64,1>::~FLockFreePointerListLIFOBase<void,64,1>
              ((FLockFreePointerListLIFOBase<void,64,1> *)&param_1->PSOsToBeFlushed2);
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&param_1->CacheStateLock);
    if (BVar3 == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                         ,0x48,L"Destroying a lock that is still held!");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)&param_1->CacheStateLock);
    }
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&param_1->PipelineCacheObjLock);
    if (BVar3 == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                         ,0x48,L"Destroying a lock that is still held!");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)&param_1->PipelineCacheObjLock);
    }
    ::operator_delete(param_1,0x100,0x40);
  }
  return;
}

// operator() @ 145b55130

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
TDefaultDelete<FVulkanDiagnosticBuffer>::operator()
          (TDefaultDelete<FVulkanDiagnosticBuffer> *this,FVulkanDiagnosticBuffer *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  
  if (param_1 != (FVulkanDiagnosticBuffer *)0x0) {
    if (param_1->Buffer != (VkBuffer_T *)0x0) {
      (*VulkanDynamicAPI::vkDestroyBuffer)
                (param_1->Device->Device,param_1->Buffer,&VulkanRHI::GAllocationCallbacks);
      param_1->Buffer = (VkBuffer_T *)0x0;
    }
    bVar2 = VulkanRHI::FVulkanAllocation::IsValid(&param_1->Allocation);
    if (bVar2) {
      VulkanRHI::FMemoryManager::FreeVulkanAllocation
                (&param_1->Device->MemoryManager,&param_1->Allocation,EVulkanFreeFlag_DontDefer);
    }
    DestructItems<FRHIBreadcrumbAllocatorArray,int>
              ((FRHIBreadcrumbAllocatorArray *)
               (param_1->ExtendedBreadcrumbAllocators).AllocatorInstance.Data,
               (param_1->ExtendedBreadcrumbAllocators).ArrayNum);
    pFVar1 = (param_1->ExtendedBreadcrumbAllocators).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&param_1->Allocation);
    ::operator_delete(param_1,0x58);
  }
  return;
}

