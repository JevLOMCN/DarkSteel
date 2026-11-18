// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 3

// DoTaskWork @ 145b656d0

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
FAsyncTask<FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker>::DoTaskWork
          (FAsyncTask<FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker> *this)

{
  FVulkanDescriptorPoolSetContainer *this_00;
  code *pcVar1;
  bool bVar2;
  
  if ((this->Task).PoolSet == (FVulkanDescriptorPoolSetContainer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoolSet != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                       ,0x1a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->Task).PoolSet;
  if (this_00 != (FVulkanDescriptorPoolSetContainer *)0x0) {
    FVulkanDescriptorPoolSetContainer::~FVulkanDescriptorPoolSetContainer(this_00);
    ::operator_delete(this_00,0x60);
  }
  (this->Task).PoolSet = (FVulkanDescriptorPoolSetContainer *)0x0;
  return;
}

// MarkAsCanceled @ 145b6e1d0

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
FAsyncTask<FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker>::MarkAsCanceled
          (FAsyncTask<FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker> *this)

{
  return;
}

// TryAbandonTask @ 145b7fdd0

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

bool __thiscall
FAsyncTask<FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker>::TryAbandonTask
          (FAsyncTask<FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker> *this)

{
  return false;
}

