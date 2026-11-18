// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 1

// FVulkanCommandListContextImmediate @ 145b914e0

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

FVulkanCommandListContextImmediate * __thiscall
FVulkanCommandListContextImmediate::FVulkanCommandListContextImmediate
          (FVulkanCommandListContextImmediate *this,FVulkanDevice *param_1)

{
  FVulkanCommandListContext::FVulkanCommandListContext
            ((FVulkanCommandListContext *)this,param_1,Graphics,(FVulkanCommandListContext *)0x0);
  *(undefined ***)this = &_vftable__for__FVulkanContextCommon__;
  *(undefined ***)&this->field_0x50 = &_vftable__for__IRHICommandContext__;
  return this;
}

