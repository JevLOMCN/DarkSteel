// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// FVulkanPipeline @ 145b469d0

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

FVulkanPipeline * __thiscall
FVulkanPipeline::FVulkanPipeline(FVulkanPipeline *this,FVulkanDevice *param_1)

{
  this->Device = param_1;
  this->_padding_ = (longlong)&___7FVulkanPipeline__6B_;
  (this->FrameCounter).LastUsedFrame = (atomic<unsigned_int>)0x0;
  this->Pipeline = (VkPipeline_T *)0x0;
  this->Layout = (FVulkanLayout *)0x0;
  LOCK();
  SPipelineCount = (TAtomic<unsigned___int64>)((longlong)SPipelineCount + 1);
  UNLOCK();
  return this;
}

// ~FVulkanPipeline @ 145b4e420

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

void __thiscall FVulkanPipeline::~FVulkanPipeline(FVulkanPipeline *this)

{
  this->_padding_ = (longlong)&___7FVulkanPipeline__6B_;
  LOCK();
  SPipelineCount = (TAtomic<unsigned___int64>)((longlong)SPipelineCount + -1);
  UNLOCK();
  if (this->Pipeline != (VkPipeline_T *)0x0) {
    VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
              (&this->Device->DeferredDeletionQueue,Pipeline,(ulong64)this->Pipeline);
    this->Pipeline = (VkPipeline_T *)0x0;
  }
  return;
}

