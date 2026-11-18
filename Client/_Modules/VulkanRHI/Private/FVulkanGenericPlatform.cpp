// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 14

// ClearVulkanInstanceFunctions @ 145b10210

/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkShaderStageFlagBits": Some values do not have unique names */
/* WARNING: Enum "VkDynamicState": Some values do not have unique names */
/* WARNING: Enum "VkFilter": Some values do not have unique names */
/* WARNING: Enum "VkSamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */
/* WARNING: Enum "VkIndexType": Some values do not have unique names */
/* WARNING: Enum "VkPipelineStageFlagBits": Some values do not have unique names */
/* WARNING: Enum "VkSubpassContents": Some values do not have unique names */
/* WARNING: Enum "VkColorSpaceKHR": Some values do not have unique names */
/* WARNING: Enum "VkPresentModeKHR": Some values do not have unique names */
/* WARNING: Enum "VkSamplerYcbcrModelConversion": Some values do not have unique names */
/* WARNING: Enum "VkSamplerYcbcrRange": Some values do not have unique names */
/* WARNING: Enum "VkChromaLocation": Some values do not have unique names */
/* WARNING: Enum "VkAccelerationStructureTypeKHR": Some values do not have unique names */
/* WARNING: Enum "VkGeometryTypeKHR": Some values do not have unique names */
/* WARNING: Enum "VkRayTracingShaderGroupTypeKHR": Some values do not have unique names */
/* WARNING: Enum "VkCopyAccelerationStructureModeKHR": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "VkImageAspectFlagBits": Some values do not have unique names */
/* WARNING: Enum "VkTimeDomainKHR": Some values do not have unique names */

void __cdecl FVulkanGenericPlatform::ClearVulkanInstanceFunctions(void)

{
  VulkanDynamicAPI::vkDestroyInstance =
       (_func___cdecl_void_VkInstance_T_ptr_VkAllocationCallbacks_ptr *)0x0;
  VulkanDynamicAPI::vkEnumeratePhysicalDevices =
       (_func___cdecl_VkResult_VkInstance_T_ptr_uint_ptr_VkPhysicalDevice_T_ptr_ptr *)0x0;
  VulkanDynamicAPI::vkGetPhysicalDeviceFeatures =
       (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkPhysicalDeviceFeatures_ptr *)0x0;
  VulkanDynamicAPI::vkGetPhysicalDeviceFormatProperties =
       (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkFormat_VkFormatProperties_ptr *)0x0;
  VulkanDynamicAPI::vkGetPhysicalDeviceFormatProperties2 =
       (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkFormat_VkFormatProperties2_ptr *)0x0;
  VulkanDynamicAPI::vkGetPhysicalDeviceImageFormatProperties =
       (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_VkFormat_VkImageType_VkImageTiling_uint_uint_VkImageFormatProperties_ptr
        *)0x0;
  VulkanDynamicAPI::vkGetPhysicalDeviceImageFormatProperties2 =
       (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_VkPhysicalDeviceImageFormatInfo2_ptr_VkImageFormatProperties2_ptr
        *)0x0;
  VulkanDynamicAPI::vkGetPhysicalDeviceProperties =
       (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkPhysicalDeviceProperties_ptr *)0x0;
  VulkanDynamicAPI::vkGetPhysicalDeviceQueueFamilyProperties =
       (_func___cdecl_void_VkPhysicalDevice_T_ptr_uint_ptr_VkQueueFamilyProperties_ptr *)0x0;
  VulkanDynamicAPI::vkGetPhysicalDeviceQueueFamilyProperties2 =
       (_func___cdecl_void_VkPhysicalDevice_T_ptr_uint_ptr_VkQueueFamilyProperties2_ptr *)0x0;
  VulkanDynamicAPI::vkGetPhysicalDeviceMemoryProperties =
       (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkPhysicalDeviceMemoryProperties_ptr *)0x0;
  VulkanDynamicAPI::vkGetPhysicalDeviceProperties2 =
       (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkPhysicalDeviceProperties2_ptr *)0x0;
  VulkanDynamicAPI::vkGetPhysicalDeviceFeatures2 =
       (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkPhysicalDeviceFeatures2_ptr *)0x0;
  VulkanDynamicAPI::vkGetPhysicalDeviceMemoryProperties2 =
       (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkPhysicalDeviceMemoryProperties2_ptr *)0x0;
  VulkanDynamicAPI::vkCreateDevice =
       (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_VkDeviceCreateInfo_ptr_VkAllocationCallbacks_ptr_VkDevice_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkDestroyDevice =
       (_func___cdecl_void_VkDevice_T_ptr_VkAllocationCallbacks_ptr *)0x0;
  VulkanDynamicAPI::vkEnumerateDeviceExtensionProperties =
       (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_char_ptr_uint_ptr_VkExtensionProperties_ptr *)
       0x0;
  VulkanDynamicAPI::vkEnumerateDeviceLayerProperties =
       (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_uint_ptr_VkLayerProperties_ptr *)0x0;
  VulkanDynamicAPI::vkGetDeviceQueue =
       (_func___cdecl_void_VkDevice_T_ptr_uint_uint_VkQueue_T_ptr_ptr *)0x0;
  VulkanDynamicAPI::vkQueueSubmit =
       (_func___cdecl_VkResult_VkQueue_T_ptr_uint_VkSubmitInfo_ptr_VkFence_T_ptr *)0x0;
  VulkanDynamicAPI::vkQueueWaitIdle = (_func___cdecl_VkResult_VkQueue_T_ptr *)0x0;
  VulkanDynamicAPI::vkDeviceWaitIdle = (_func___cdecl_VkResult_VkDevice_T_ptr *)0x0;
  VulkanDynamicAPI::vkAllocateMemory =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkMemoryAllocateInfo_ptr_VkAllocationCallbacks_ptr_VkDeviceMemory_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkFreeMemory =
       (_func___cdecl_void_VkDevice_T_ptr_VkDeviceMemory_T_ptr_VkAllocationCallbacks_ptr *)0x0;
  VulkanDynamicAPI::vkMapMemory =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkDeviceMemory_T_ptr_ulong64_ulong64_uint_void_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkUnmapMemory = (_func___cdecl_void_VkDevice_T_ptr_VkDeviceMemory_T_ptr *)0x0;
  VulkanDynamicAPI::vkFlushMappedMemoryRanges =
       (_func___cdecl_VkResult_VkDevice_T_ptr_uint_VkMappedMemoryRange_ptr *)0x0;
  VulkanDynamicAPI::vkInvalidateMappedMemoryRanges =
       (_func___cdecl_VkResult_VkDevice_T_ptr_uint_VkMappedMemoryRange_ptr *)0x0;
  VulkanDynamicAPI::vkGetDeviceMemoryCommitment =
       (_func___cdecl_void_VkDevice_T_ptr_VkDeviceMemory_T_ptr_ulong64_ptr *)0x0;
  VulkanDynamicAPI::vkBindBufferMemory =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkBuffer_T_ptr_VkDeviceMemory_T_ptr_ulong64 *)0x0;
  VulkanDynamicAPI::vkBindImageMemory =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkImage_T_ptr_VkDeviceMemory_T_ptr_ulong64 *)0x0;
  VulkanDynamicAPI::vkBindBufferMemory2 =
       (_func___cdecl_VkResult_VkDevice_T_ptr_uint_VkBindBufferMemoryInfo_ptr *)0x0;
  VulkanDynamicAPI::vkBindImageMemory2 =
       (_func___cdecl_VkResult_VkDevice_T_ptr_uint_VkBindImageMemoryInfo_ptr *)0x0;
  VulkanDynamicAPI::vkGetBufferMemoryRequirements =
       (_func___cdecl_void_VkDevice_T_ptr_VkBuffer_T_ptr_VkMemoryRequirements_ptr *)0x0;
  VulkanDynamicAPI::vkGetImageMemoryRequirements =
       (_func___cdecl_void_VkDevice_T_ptr_VkImage_T_ptr_VkMemoryRequirements_ptr *)0x0;
  VulkanDynamicAPI::vkGetImageSparseMemoryRequirements =
       (_func___cdecl_void_VkDevice_T_ptr_VkImage_T_ptr_uint_ptr_VkSparseImageMemoryRequirements_ptr
        *)0x0;
  VulkanDynamicAPI::vkGetImageMemoryRequirements2 =
       (_func___cdecl_void_VkDevice_T_ptr_VkImageMemoryRequirementsInfo2_ptr_VkMemoryRequirements2_ptr
        *)0x0;
  VulkanDynamicAPI::vkGetBufferMemoryRequirements2 =
       (_func___cdecl_void_VkDevice_T_ptr_VkBufferMemoryRequirementsInfo2_ptr_VkMemoryRequirements2_ptr
        *)0x0;
  VulkanDynamicAPI::vkGetPhysicalDeviceSparseImageFormatProperties =
       (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkFormat_VkImageType_VkSampleCountFlagBits_uint_VkImageTiling_uint_ptr_VkSparseImageFormatProperties_ptr
        *)0x0;
  VulkanDynamicAPI::vkQueueBindSparse =
       (_func___cdecl_VkResult_VkQueue_T_ptr_uint_VkBindSparseInfo_ptr_VkFence_T_ptr *)0x0;
  VulkanDynamicAPI::vkCreateFence =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkFenceCreateInfo_ptr_VkAllocationCallbacks_ptr_VkFence_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkDestroyFence =
       (_func___cdecl_void_VkDevice_T_ptr_VkFence_T_ptr_VkAllocationCallbacks_ptr *)0x0;
  VulkanDynamicAPI::vkResetFences =
       (_func___cdecl_VkResult_VkDevice_T_ptr_uint_VkFence_T_ptr_ptr *)0x0;
  VulkanDynamicAPI::vkGetFenceStatus = (_func___cdecl_VkResult_VkDevice_T_ptr_VkFence_T_ptr *)0x0;
  VulkanDynamicAPI::vkWaitForFences =
       (_func___cdecl_VkResult_VkDevice_T_ptr_uint_VkFence_T_ptr_ptr_uint_ulong64 *)0x0;
  VulkanDynamicAPI::vkCreateSemaphore =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkSemaphoreCreateInfo_ptr_VkAllocationCallbacks_ptr_VkSemaphore_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkDestroySemaphore =
       (_func___cdecl_void_VkDevice_T_ptr_VkSemaphore_T_ptr_VkAllocationCallbacks_ptr *)0x0;
  VulkanDynamicAPI::vkCreateEvent =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkEventCreateInfo_ptr_VkAllocationCallbacks_ptr_VkEvent_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkDestroyEvent =
       (_func___cdecl_void_VkDevice_T_ptr_VkEvent_T_ptr_VkAllocationCallbacks_ptr *)0x0;
  VulkanDynamicAPI::vkGetEventStatus = (_func___cdecl_VkResult_VkDevice_T_ptr_VkEvent_T_ptr *)0x0;
  VulkanDynamicAPI::vkSetEvent = (_func___cdecl_VkResult_VkDevice_T_ptr_VkEvent_T_ptr *)0x0;
  VulkanDynamicAPI::vkResetEvent = (_func___cdecl_VkResult_VkDevice_T_ptr_VkEvent_T_ptr *)0x0;
  VulkanDynamicAPI::vkCreateQueryPool =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkQueryPoolCreateInfo_ptr_VkAllocationCallbacks_ptr_VkQueryPool_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkDestroyQueryPool =
       (_func___cdecl_void_VkDevice_T_ptr_VkQueryPool_T_ptr_VkAllocationCallbacks_ptr *)0x0;
  VulkanDynamicAPI::vkGetQueryPoolResults =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkQueryPool_T_ptr_uint_uint_ulong64_void_ptr_ulong64_uint
        *)0x0;
  VulkanDynamicAPI::vkCreateBuffer =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkBufferCreateInfo_ptr_VkAllocationCallbacks_ptr_VkBuffer_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkDestroyBuffer =
       (_func___cdecl_void_VkDevice_T_ptr_VkBuffer_T_ptr_VkAllocationCallbacks_ptr *)0x0;
  VulkanDynamicAPI::vkCreateBufferView =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkBufferViewCreateInfo_ptr_VkAllocationCallbacks_ptr_VkBufferView_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkDestroyBufferView =
       (_func___cdecl_void_VkDevice_T_ptr_VkBufferView_T_ptr_VkAllocationCallbacks_ptr *)0x0;
  VulkanDynamicAPI::vkCreateImage =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkImageCreateInfo_ptr_VkAllocationCallbacks_ptr_VkImage_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkDestroyImage =
       (_func___cdecl_void_VkDevice_T_ptr_VkImage_T_ptr_VkAllocationCallbacks_ptr *)0x0;
  VulkanDynamicAPI::vkGetImageSubresourceLayout =
       (_func___cdecl_void_VkDevice_T_ptr_VkImage_T_ptr_VkImageSubresource_ptr_VkSubresourceLayout_ptr
        *)0x0;
  VulkanDynamicAPI::vkCreateImageView =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkImageViewCreateInfo_ptr_VkAllocationCallbacks_ptr_VkImageView_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkDestroyImageView =
       (_func___cdecl_void_VkDevice_T_ptr_VkImageView_T_ptr_VkAllocationCallbacks_ptr *)0x0;
  VulkanDynamicAPI::vkCreateShaderModule =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkShaderModuleCreateInfo_ptr_VkAllocationCallbacks_ptr_VkShaderModule_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkDestroyShaderModule =
       (_func___cdecl_void_VkDevice_T_ptr_VkShaderModule_T_ptr_VkAllocationCallbacks_ptr *)0x0;
  VulkanDynamicAPI::vkCreatePipelineCache =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkPipelineCacheCreateInfo_ptr_VkAllocationCallbacks_ptr_VkPipelineCache_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkDestroyPipelineCache =
       (_func___cdecl_void_VkDevice_T_ptr_VkPipelineCache_T_ptr_VkAllocationCallbacks_ptr *)0x0;
  VulkanDynamicAPI::vkGetPipelineCacheData =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkPipelineCache_T_ptr_ulong64_ptr_void_ptr *)0x0;
  VulkanDynamicAPI::vkMergePipelineCaches =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkPipelineCache_T_ptr_uint_VkPipelineCache_T_ptr_ptr *
       )0x0;
  VulkanDynamicAPI::vkCreateGraphicsPipelines =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkPipelineCache_T_ptr_uint_VkGraphicsPipelineCreateInfo_ptr_VkAllocationCallbacks_ptr_VkPipeline_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkCreateComputePipelines =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkPipelineCache_T_ptr_uint_VkComputePipelineCreateInfo_ptr_VkAllocationCallbacks_ptr_VkPipeline_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkDestroyPipeline =
       (_func___cdecl_void_VkDevice_T_ptr_VkPipeline_T_ptr_VkAllocationCallbacks_ptr *)0x0;
  VulkanDynamicAPI::vkCreatePipelineLayout =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkPipelineLayoutCreateInfo_ptr_VkAllocationCallbacks_ptr_VkPipelineLayout_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkDestroyPipelineLayout =
       (_func___cdecl_void_VkDevice_T_ptr_VkPipelineLayout_T_ptr_VkAllocationCallbacks_ptr *)0x0;
  VulkanDynamicAPI::vkCreateSampler =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkSamplerCreateInfo_ptr_VkAllocationCallbacks_ptr_VkSampler_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkDestroySampler =
       (_func___cdecl_void_VkDevice_T_ptr_VkSampler_T_ptr_VkAllocationCallbacks_ptr *)0x0;
  VulkanDynamicAPI::vkCreateDescriptorSetLayout =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkDescriptorSetLayoutCreateInfo_ptr_VkAllocationCallbacks_ptr_VkDescriptorSetLayout_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkDestroyDescriptorSetLayout =
       (_func___cdecl_void_VkDevice_T_ptr_VkDescriptorSetLayout_T_ptr_VkAllocationCallbacks_ptr *)
       0x0;
  VulkanDynamicAPI::vkCreateDescriptorPool =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkDescriptorPoolCreateInfo_ptr_VkAllocationCallbacks_ptr_VkDescriptorPool_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkDestroyDescriptorPool =
       (_func___cdecl_void_VkDevice_T_ptr_VkDescriptorPool_T_ptr_VkAllocationCallbacks_ptr *)0x0;
  VulkanDynamicAPI::vkResetDescriptorPool =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkDescriptorPool_T_ptr_uint *)0x0;
  VulkanDynamicAPI::vkAllocateDescriptorSets =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkDescriptorSetAllocateInfo_ptr_VkDescriptorSet_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkFreeDescriptorSets =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkDescriptorPool_T_ptr_uint_VkDescriptorSet_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkUpdateDescriptorSets =
       (_func___cdecl_void_VkDevice_T_ptr_uint_VkWriteDescriptorSet_ptr_uint_VkCopyDescriptorSet_ptr
        *)0x0;
  VulkanDynamicAPI::vkCreateFramebuffer =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkFramebufferCreateInfo_ptr_VkAllocationCallbacks_ptr_VkFramebuffer_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkDestroyFramebuffer =
       (_func___cdecl_void_VkDevice_T_ptr_VkFramebuffer_T_ptr_VkAllocationCallbacks_ptr *)0x0;
  VulkanDynamicAPI::vkCreateRenderPass =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkRenderPassCreateInfo_ptr_VkAllocationCallbacks_ptr_VkRenderPass_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkDestroyRenderPass =
       (_func___cdecl_void_VkDevice_T_ptr_VkRenderPass_T_ptr_VkAllocationCallbacks_ptr *)0x0;
  VulkanDynamicAPI::vkGetRenderAreaGranularity =
       (_func___cdecl_void_VkDevice_T_ptr_VkRenderPass_T_ptr_VkExtent2D_ptr *)0x0;
  VulkanDynamicAPI::vkCreateCommandPool =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkCommandPoolCreateInfo_ptr_VkAllocationCallbacks_ptr_VkCommandPool_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkDestroyCommandPool =
       (_func___cdecl_void_VkDevice_T_ptr_VkCommandPool_T_ptr_VkAllocationCallbacks_ptr *)0x0;
  VulkanDynamicAPI::vkResetCommandPool =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkCommandPool_T_ptr_uint *)0x0;
  VulkanDynamicAPI::vkTrimCommandPool =
       (_func___cdecl_void_VkDevice_T_ptr_VkCommandPool_T_ptr_uint *)0x0;
  VulkanDynamicAPI::vkAllocateCommandBuffers =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkCommandBufferAllocateInfo_ptr_VkCommandBuffer_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkFreeCommandBuffers =
       (_func___cdecl_void_VkDevice_T_ptr_VkCommandPool_T_ptr_uint_VkCommandBuffer_T_ptr_ptr *)0x0;
  VulkanDynamicAPI::vkBeginCommandBuffer =
       (_func___cdecl_VkResult_VkCommandBuffer_T_ptr_VkCommandBufferBeginInfo_ptr *)0x0;
  VulkanDynamicAPI::vkEndCommandBuffer = (_func___cdecl_VkResult_VkCommandBuffer_T_ptr *)0x0;
  VulkanDynamicAPI::vkResetCommandBuffer = (_func___cdecl_VkResult_VkCommandBuffer_T_ptr_uint *)0x0;
  VulkanDynamicAPI::vkCmdBindPipeline =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineBindPoint_VkPipeline_T_ptr *)0x0;
  VulkanDynamicAPI::vkCmdSetViewport =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_VkViewport_ptr *)0x0;
  VulkanDynamicAPI::vkCmdSetScissor =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_VkRect2D_ptr *)0x0;
  VulkanDynamicAPI::vkCmdSetLineWidth = (_func___cdecl_void_VkCommandBuffer_T_ptr_float *)0x0;
  VulkanDynamicAPI::vkCmdSetDepthBias =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_float_float_float *)0x0;
  VulkanDynamicAPI::vkCmdSetBlendConstants =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_float_ptr *)0x0;
  VulkanDynamicAPI::vkCmdSetDepthBounds =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_float_float *)0x0;
  VulkanDynamicAPI::vkCmdSetStencilCompareMask =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint *)0x0;
  VulkanDynamicAPI::vkCmdSetStencilWriteMask =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint *)0x0;
  VulkanDynamicAPI::vkCmdSetStencilReference =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint *)0x0;
  VulkanDynamicAPI::vkCmdBindDescriptorSets =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineBindPoint_VkPipelineLayout_T_ptr_uint_uint_VkDescriptorSet_T_ptr_ptr_uint_uint_ptr
        *)0x0;
  VulkanDynamicAPI::vkCmdBindIndexBuffer =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_ulong64_VkIndexType *)0x0;
  VulkanDynamicAPI::vkCmdBindVertexBuffers =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_VkBuffer_T_ptr_ptr_ulong64_ptr *)0x0;
  VulkanDynamicAPI::vkCmdDraw = (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_uint_uint *)0x0;
  VulkanDynamicAPI::vkCmdDrawIndexed =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_uint_int_uint *)0x0;
  VulkanDynamicAPI::vkCmdDrawIndirect =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_ulong64_uint_uint *)0x0;
  VulkanDynamicAPI::vkCmdDrawIndexedIndirect =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_ulong64_uint_uint *)0x0;
  VulkanDynamicAPI::vkCmdDispatch = (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_uint *)0x0;
  VulkanDynamicAPI::vkCmdDispatchIndirect =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_ulong64 *)0x0;
  VulkanDynamicAPI::vkCmdCopyBuffer =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_VkBuffer_T_ptr_uint_VkBufferCopy_ptr
        *)0x0;
  VulkanDynamicAPI::vkCmdCopyImage =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_VkImage_T_ptr_VkImageLayout_uint_VkImageCopy_ptr
        *)0x0;
  VulkanDynamicAPI::vkCmdBlitImage =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_VkImage_T_ptr_VkImageLayout_uint_VkImageBlit_ptr_VkFilter
        *)0x0;
  VulkanDynamicAPI::vkCmdCopyBufferToImage =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_uint_VkBufferImageCopy_ptr
        *)0x0;
  VulkanDynamicAPI::vkCmdCopyImageToBuffer =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_VkBuffer_T_ptr_uint_VkBufferImageCopy_ptr
        *)0x0;
  VulkanDynamicAPI::vkCmdUpdateBuffer =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_ulong64_ulong64_void_ptr *)0x0;
  VulkanDynamicAPI::vkCmdFillBuffer =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_ulong64_ulong64_uint *)0x0;
  VulkanDynamicAPI::vkCmdClearColorImage =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_VkClearColorValue_ptr_uint_VkImageSubresourceRange_ptr
        *)0x0;
  VulkanDynamicAPI::vkCmdClearDepthStencilImage =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_VkClearDepthStencilValue_ptr_uint_VkImageSubresourceRange_ptr
        *)0x0;
  VulkanDynamicAPI::vkCmdClearAttachments =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkClearAttachment_ptr_uint_VkClearRect_ptr *)
       0x0;
  VulkanDynamicAPI::vkCmdResolveImage =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_VkImage_T_ptr_VkImageLayout_uint_VkImageResolve_ptr
        *)0x0;
  VulkanDynamicAPI::vkCmdSetEvent =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkEvent_T_ptr_uint *)0x0;
  VulkanDynamicAPI::vkCmdResetEvent =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkEvent_T_ptr_uint *)0x0;
  VulkanDynamicAPI::vkCmdWaitEvents =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkEvent_T_ptr_ptr_uint_uint_uint_VkMemoryBarrier_ptr_uint_VkBufferMemoryBarrier_ptr_uint_VkImageMemoryBarrier_ptr
        *)0x0;
  VulkanDynamicAPI::vkCmdPipelineBarrier =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_uint_uint_VkMemoryBarrier_ptr_uint_VkBufferMemoryBarrier_ptr_uint_VkImageMemoryBarrier_ptr
        *)0x0;
  VulkanDynamicAPI::vkCmdBeginQuery =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkQueryPool_T_ptr_uint_uint *)0x0;
  VulkanDynamicAPI::vkCmdEndQuery =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkQueryPool_T_ptr_uint *)0x0;
  VulkanDynamicAPI::vkCmdResetQueryPool =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkQueryPool_T_ptr_uint_uint *)0x0;
  VulkanDynamicAPI::vkCmdWriteTimestamp =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineStageFlagBits_VkQueryPool_T_ptr_uint *)
       0x0;
  VulkanDynamicAPI::vkCmdCopyQueryPoolResults =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkQueryPool_T_ptr_uint_uint_VkBuffer_T_ptr_ulong64_ulong64_uint
        *)0x0;
  VulkanDynamicAPI::vkCmdPushConstants =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineLayout_T_ptr_uint_uint_uint_void_ptr *)
       0x0;
  VulkanDynamicAPI::vkCmdBeginRenderPass =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkRenderPassBeginInfo_ptr_VkSubpassContents *)0x0;
  VulkanDynamicAPI::vkCmdNextSubpass =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkSubpassContents *)0x0;
  VulkanDynamicAPI::vkCmdEndRenderPass = (_func___cdecl_void_VkCommandBuffer_T_ptr *)0x0;
  VulkanDynamicAPI::vkCmdExecuteCommands =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkCommandBuffer_T_ptr_ptr *)0x0;
  VulkanDynamicAPI::vkCreateSwapchainKHR =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkSwapchainCreateInfoKHR_ptr_VkAllocationCallbacks_ptr_VkSwapchainKHR_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkDestroySwapchainKHR =
       (_func___cdecl_void_VkDevice_T_ptr_VkSwapchainKHR_T_ptr_VkAllocationCallbacks_ptr *)0x0;
  VulkanDynamicAPI::vkGetSwapchainImagesKHR =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkSwapchainKHR_T_ptr_uint_ptr_VkImage_T_ptr_ptr *)0x0;
  VulkanDynamicAPI::vkAcquireNextImageKHR =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkSwapchainKHR_T_ptr_ulong64_VkSemaphore_T_ptr_VkFence_T_ptr_uint_ptr
        *)0x0;
  VulkanDynamicAPI::vkQueuePresentKHR =
       (_func___cdecl_VkResult_VkQueue_T_ptr_VkPresentInfoKHR_ptr *)0x0;
  VulkanDynamicAPI::vkCreateSamplerYcbcrConversion =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkSamplerYcbcrConversionCreateInfo_ptr_VkAllocationCallbacks_ptr_VkSamplerYcbcrConversion_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkDestroySamplerYcbcrConversion =
       (_func___cdecl_void_VkDevice_T_ptr_VkSamplerYcbcrConversion_T_ptr_VkAllocationCallbacks_ptr *
       )0x0;
  VulkanDynamicAPI::vkCreateAccelerationStructureKHR =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkAccelerationStructureCreateInfoKHR_ptr_VkAllocationCallbacks_ptr_VkAccelerationStructureKHR_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkDestroyAccelerationStructureKHR =
       (_func___cdecl_void_VkDevice_T_ptr_VkAccelerationStructureKHR_T_ptr_VkAllocationCallbacks_ptr
        *)0x0;
  VulkanDynamicAPI::vkCmdBuildAccelerationStructuresKHR =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkAccelerationStructureBuildGeometryInfoKHR_ptr_VkAccelerationStructureBuildRangeInfoKHR_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkGetAccelerationStructureBuildSizesKHR =
       (_func___cdecl_void_VkDevice_T_ptr_VkAccelerationStructureBuildTypeKHR_VkAccelerationStructureBuildGeometryInfoKHR_ptr_uint_ptr_VkAccelerationStructureBuildSizesInfoKHR_ptr
        *)0x0;
  VulkanDynamicAPI::vkGetAccelerationStructureDeviceAddressKHR =
       (_func___cdecl_ulong64_VkDevice_T_ptr_VkAccelerationStructureDeviceAddressInfoKHR_ptr *)0x0;
  VulkanDynamicAPI::vkCmdTraceRaysKHR =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkStridedDeviceAddressRegionKHR_ptr_VkStridedDeviceAddressRegionKHR_ptr_VkStridedDeviceAddressRegionKHR_ptr_VkStridedDeviceAddressRegionKHR_ptr_uint_uint_uint
        *)0x0;
  VulkanDynamicAPI::vkCmdTraceRaysIndirectKHR =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkStridedDeviceAddressRegionKHR_ptr_VkStridedDeviceAddressRegionKHR_ptr_VkStridedDeviceAddressRegionKHR_ptr_VkStridedDeviceAddressRegionKHR_ptr_ulong64
        *)0x0;
  VulkanDynamicAPI::vkCmdTraceRaysIndirect2KHR =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_ulong64 *)0x0;
  VulkanDynamicAPI::vkCreateRayTracingPipelinesKHR =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkDeferredOperationKHR_T_ptr_VkPipelineCache_T_ptr_uint_VkRayTracingPipelineCreateInfoKHR_ptr_VkAllocationCallbacks_ptr_VkPipeline_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkGetRayTracingShaderGroupHandlesKHR =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkPipeline_T_ptr_uint_uint_ulong64_void_ptr *)0x0;
  VulkanDynamicAPI::vkCmdWriteAccelerationStructuresPropertiesKHR =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkAccelerationStructureKHR_T_ptr_ptr_VkQueryType_VkQueryPool_T_ptr_uint
        *)0x0;
  VulkanDynamicAPI::vkCmdCopyAccelerationStructureKHR =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkCopyAccelerationStructureInfoKHR_ptr *)0x0;
  VulkanDynamicAPI::vkCreateRenderPass2KHR =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkRenderPassCreateInfo2_ptr_VkAllocationCallbacks_ptr_VkRenderPass_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkCmdBeginRenderPass2KHR =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkRenderPassBeginInfo_ptr_VkSubpassBeginInfo_ptr *)
       0x0;
  VulkanDynamicAPI::vkCmdBeginRenderingKHR =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkRenderingInfo_ptr *)0x0;
  VulkanDynamicAPI::vkCmdEndRenderingKHR = (_func___cdecl_void_VkCommandBuffer_T_ptr *)0x0;
  VulkanDynamicAPI::vkGetDeviceImageMemoryRequirementsKHR =
       (_func___cdecl_void_VkDevice_T_ptr_VkDeviceImageMemoryRequirements_ptr_VkMemoryRequirements2_ptr
        *)0x0;
  VulkanDynamicAPI::vkGetDeviceBufferMemoryRequirementsKHR =
       (_func___cdecl_void_VkDevice_T_ptr_VkDeviceBufferMemoryRequirements_ptr_VkMemoryRequirements2_ptr
        *)0x0;
  VulkanDynamicAPI::vkResetQueryPoolEXT =
       (_func___cdecl_void_VkDevice_T_ptr_VkQueryPool_T_ptr_uint_uint *)0x0;
  VulkanDynamicAPI::vkCmdPipelineBarrier2KHR =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkDependencyInfo_ptr *)0x0;
  VulkanDynamicAPI::vkCmdResetEvent2KHR =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkEvent_T_ptr_ulong64 *)0x0;
  VulkanDynamicAPI::vkCmdSetEvent2KHR =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkEvent_T_ptr_VkDependencyInfo_ptr *)0x0;
  VulkanDynamicAPI::vkCmdWaitEvents2KHR =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkEvent_T_ptr_ptr_VkDependencyInfo_ptr *)0x0;
  VulkanDynamicAPI::vkQueueSubmit2KHR =
       (_func___cdecl_VkResult_VkQueue_T_ptr_uint_VkSubmitInfo2_ptr_VkFence_T_ptr *)0x0;
  VulkanDynamicAPI::vkCreateSharedSwapchainsKHR =
       (_func___cdecl_VkResult_VkDevice_T_ptr_uint_VkSwapchainCreateInfoKHR_ptr_VkAllocationCallbacks_ptr_VkSwapchainKHR_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkGetPhysicalDeviceCalibrateableTimeDomainsEXT =
       (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_uint_ptr_VkTimeDomainKHR_ptr *)0x0;
  VulkanDynamicAPI::vkGetCalibratedTimestampsEXT =
       (_func___cdecl_VkResult_VkDevice_T_ptr_uint_VkCalibratedTimestampInfoKHR_ptr_ulong64_ptr_ulong64_ptr
        *)0x0;
  VulkanDynamicAPI::vkGetBufferDeviceAddressKHR =
       (_func___cdecl_ulong64_VkDevice_T_ptr_VkBufferDeviceAddressInfo_ptr *)0x0;
  VulkanDynamicAPI::vkGetDescriptorSetLayoutSizeEXT =
       (_func___cdecl_void_VkDevice_T_ptr_VkDescriptorSetLayout_T_ptr_ulong64_ptr *)0x0;
  VulkanDynamicAPI::vkGetDescriptorSetLayoutBindingOffsetEXT =
       (_func___cdecl_void_VkDevice_T_ptr_VkDescriptorSetLayout_T_ptr_uint_ulong64_ptr *)0x0;
  VulkanDynamicAPI::vkCmdBindDescriptorBuffersEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkDescriptorBufferBindingInfoEXT_ptr *)0x0;
  VulkanDynamicAPI::vkCmdSetDescriptorBufferOffsetsEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineBindPoint_VkPipelineLayout_T_ptr_uint_uint_uint_ptr_ulong64_ptr
        *)0x0;
  VulkanDynamicAPI::vkGetDescriptorEXT =
       (_func___cdecl_void_VkDevice_T_ptr_VkDescriptorGetInfoEXT_ptr_ulong64_void_ptr *)0x0;
  VulkanDynamicAPI::vkCreateDeferredOperationKHR =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkAllocationCallbacks_ptr_VkDeferredOperationKHR_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkDestroyDeferredOperationKHR =
       (_func___cdecl_void_VkDevice_T_ptr_VkDeferredOperationKHR_T_ptr_VkAllocationCallbacks_ptr *)
       0x0;
  VulkanDynamicAPI::vkDeferredOperationJoinKHR =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkDeferredOperationKHR_T_ptr *)0x0;
  VulkanDynamicAPI::vkGetDeferredOperationMaxConcurrencyKHR =
       (_func___cdecl_uint_VkDevice_T_ptr_VkDeferredOperationKHR_T_ptr *)0x0;
  VulkanDynamicAPI::vkGetDeferredOperationResultKHR =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkDeferredOperationKHR_T_ptr *)0x0;
  VulkanDynamicAPI::vkCmdDrawMeshTasksEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_uint *)0x0;
  VulkanDynamicAPI::vkCmdDrawMeshTasksIndirectCountEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_ulong64_VkBuffer_T_ptr_ulong64_uint_uint
        *)0x0;
  VulkanDynamicAPI::vkCmdDrawMeshTasksIndirectEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_ulong64_uint_uint *)0x0;
  VulkanDynamicAPI::vkCmdWriteBufferMarkerAMD =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineStageFlagBits_VkBuffer_T_ptr_ulong64_uint
        *)0x0;
  VulkanDynamicAPI::vkCmdSetCheckpointNV = (_func___cdecl_void_VkCommandBuffer_T_ptr_void_ptr *)0x0;
  VulkanDynamicAPI::vkGetQueueCheckpointDataNV =
       (_func___cdecl_void_VkQueue_T_ptr_uint_ptr_VkCheckpointDataNV_ptr *)0x0;
  VulkanDynamicAPI::vkGetPhysicalDeviceFragmentShadingRatesKHR =
       (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_uint_ptr_VkPhysicalDeviceFragmentShadingRateKHR_ptr
        *)0x0;
  VulkanDynamicAPI::vkGetDeviceFaultInfoEXT =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkDeviceFaultCountsEXT_ptr_VkDeviceFaultInfoEXT_ptr *)
       0x0;
  VulkanDynamicAPI::vkGetPhysicalDeviceToolPropertiesEXT =
       (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_uint_ptr_VkPhysicalDeviceToolProperties_ptr *)
       0x0;
  VulkanDynamicAPI::vkGetImageSubresourceLayout2EXT =
       (_func___cdecl_void_VkDevice_T_ptr_VkImage_T_ptr_VkImageSubresource2_ptr_VkSubresourceLayout2_ptr
        *)0x0;
  VulkanDynamicAPI::vkGetImageSubresourceLayout2KHR =
       (_func___cdecl_void_VkDevice_T_ptr_VkImage_T_ptr_VkImageSubresource2_ptr_VkSubresourceLayout2_ptr
        *)0x0;
  VulkanDynamicAPI::vkGetSemaphoreCounterValueKHR =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkSemaphore_T_ptr_ulong64_ptr *)0x0;
  VulkanDynamicAPI::vkWaitSemaphoresKHR =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkSemaphoreWaitInfo_ptr_ulong64 *)0x0;
  VulkanDynamicAPI::vkSignalSemaphoreKHR =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkSemaphoreSignalInfo_ptr *)0x0;
  VulkanDynamicAPI::vkCreateShadersEXT =
       (_func___cdecl_VkResult_VkDevice_T_ptr_uint_VkShaderCreateInfoEXT_ptr_VkAllocationCallbacks_ptr_VkShaderEXT_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkDestroyShaderEXT =
       (_func___cdecl_void_VkDevice_T_ptr_VkShaderEXT_T_ptr_VkAllocationCallbacks_ptr *)0x0;
  VulkanDynamicAPI::vkGetShaderBinaryDataEXT =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkShaderEXT_T_ptr_ulong64_ptr_void_ptr *)0x0;
  VulkanDynamicAPI::vkCmdBindShadersEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkShaderStageFlagBits_ptr_VkShaderEXT_T_ptr_ptr
        *)0x0;
  VulkanDynamicAPI::vkCmdBindVertexBuffers2EXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_VkBuffer_T_ptr_ptr_ulong64_ptr_ulong64_ptr_ulong64_ptr
        *)0x0;
  VulkanDynamicAPI::vkCmdSetCullModeEXT = (_func___cdecl_void_VkCommandBuffer_T_ptr_uint *)0x0;
  VulkanDynamicAPI::vkCmdSetColorBlendEnableEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_uint_ptr *)0x0;
  VulkanDynamicAPI::vkCmdSetColorBlendEquationEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_VkColorBlendEquationEXT_ptr *)0x0;
  VulkanDynamicAPI::vkCmdSetColorWriteMaskEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_uint_ptr *)0x0;
  VulkanDynamicAPI::vkCmdSetFrontFaceEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkFrontFace *)0x0;
  VulkanDynamicAPI::vkCmdSetPolygonModeEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkPolygonMode *)0x0;
  VulkanDynamicAPI::vkCmdSetPrimitiveTopologyEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkPrimitiveTopology *)0x0;
  VulkanDynamicAPI::vkCmdSetRasterizationSamplesEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkSampleCountFlagBits *)0x0;
  VulkanDynamicAPI::vkCmdSetScissorWithCountEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkRect2D_ptr *)0x0;
  VulkanDynamicAPI::vkCmdSetStencilOpEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkStencilOp_VkStencilOp_VkStencilOp_VkCompareOp
        *)0x0;
  VulkanDynamicAPI::vkCmdSetStencilTestEnableEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint *)0x0;
  VulkanDynamicAPI::vkCmdSetVertexInputEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkVertexInputBindingDescription2EXT_ptr_uint_VkVertexInputAttributeDescription2EXT_ptr
        *)0x0;
  VulkanDynamicAPI::vkCmdSetViewportWithCountEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkViewport_ptr *)0x0;
  VulkanDynamicAPI::vkCmdSetDepthBiasEnableEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint *)0x0;
  VulkanDynamicAPI::vkCmdSetDepthBoundsTestEnableEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint *)0x0;
  VulkanDynamicAPI::vkCmdSetDepthClampEnableEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint *)0x0;
  VulkanDynamicAPI::vkCmdSetDepthCompareOpEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_VkCompareOp *)0x0;
  VulkanDynamicAPI::vkCmdSetDepthTestEnableEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint *)0x0;
  VulkanDynamicAPI::vkCmdSetDepthWriteEnableEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint *)0x0;
  VulkanDynamicAPI::vkCmdSetRasterizerDiscardEnableEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint *)0x0;
  VulkanDynamicAPI::vkCmdSetPrimitiveRestartEnableEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint *)0x0;
  VulkanDynamicAPI::vkCmdSetAlphaToCoverageEnableEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint *)0x0;
  VulkanDynamicAPI::vkCmdSetAlphaToOneEnableEXT =
       (_func___cdecl_void_VkCommandBuffer_T_ptr_uint *)0x0;
  VulkanDynamicAPI::vkCmdSetLogicOpEnableEXT = (_func___cdecl_void_VkCommandBuffer_T_ptr_uint *)0x0;
  VulkanDynamicAPI::vkCopyMemoryToImageEXT =
       (_func___cdecl_VkResult_VkDevice_T_ptr_VkCopyMemoryToImageInfo_ptr *)0x0;
  VulkanDynamicAPI::vkTransitionImageLayoutEXT =
       (_func___cdecl_VkResult_VkDevice_T_ptr_uint_VkHostImageLayoutTransitionInfo_ptr *)0x0;
  return;
}

// CreatePSOBinaryCacheFilename @ 145b12670

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

FString * __cdecl
FVulkanGenericPlatform::CreatePSOBinaryCacheFilename
          (FString *__return_storage_ptr__,FVulkanDevice *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  int iVar4;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L".%x.%x");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar3.Data = local_18.Data.AllocatorInstance.Data;
  }
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  bVar2 = ::FString::EndsWith(param_2,(wchar_t *)FVar3.Data,iVar4,IgnoreCase);
  if (!bVar2) {
    iVar4 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(param_2,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (param_2->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// CreateSwapchainKHR @ 145b12750

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkColorSpaceKHR": Some values do not have unique names */
/* WARNING: Enum "VkPresentModeKHR": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */

VkResult __cdecl
FVulkanGenericPlatform::CreateSwapchainKHR
          (FVulkanGenericPlatformWindowContext *param_1,VkPhysicalDevice_T *param_2,
          VkDevice_T *param_3,VkSwapchainCreateInfoKHR *param_4,VkAllocationCallbacks *param_5,
          VkSwapchainKHR_T **param_6)

{
  VkResult VVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145b12767. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VVar1 = (*VulkanDynamicAPI::vkCreateSwapchainKHR)(param_3,param_4,param_5,param_6);
  return VVar1;
}

// DestroySwapchainKHR @ 145b14a80

void __cdecl
FVulkanGenericPlatform::DestroySwapchainKHR
          (VkDevice_T *param_1,VkSwapchainKHR_T *param_2,VkAllocationCallbacks *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145b14a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*VulkanDynamicAPI::vkDestroySwapchainKHR)(param_1,param_2,param_3);
  return;
}

// GetCompiledPSOCacheTopFolderPath @ 145b1d360

FString * __cdecl
FVulkanGenericPlatform::GetCompiledPSOCacheTopFolderPath(FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = FPaths::ProjectSavedDir();
  ::operator/(__return_storage_ptr__,pFVar1,L"VulkanProgramBinaryCache");
  return __return_storage_ptr__;
}

// GetFeatureLevel @ 145b1dc30

/* WARNING: Removing unreachable block (ram,0x000145b1dc88) */

Type __cdecl FVulkanGenericPlatform::GetFeatureLevel(Type param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  if (param_1 != ES3_1) {
    pwVar2 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar2,L"FeatureLevelES31");
    if (!bVar1) {
      pwVar2 = FCommandLine::Get();
      bVar1 = FParse::Param(pwVar2,L"FeatureLevelES3_1");
      if (!bVar1) {
        return param_1;
      }
    }
  }
  return ES3_1;
}

// GetPSOCacheFilenames @ 145b1ea60

/* WARNING: Removing unreachable block (ram,0x000145b1ed61) */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
FVulkanGenericPlatform::GetPSOCacheFilenames
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar7;
  IFileManager *pIVar8;
  ulonglong uVar9;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  FString *pFVar13;
  FString *pFVar14;
  undefined1 local_res8 [8];
  uint local_res10;
  FString local_a8;
  FString *local_98;
  undefined8 local_90;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_88;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_78;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ::FString::FString(&local_58,"Windows");
  pTVar7 = &FPaths::ProjectDir(&local_48)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_68,pTVar7,7 - (uint)(pTVar7->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_68,L"Build",5);
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_78,&local_68,0xe - (uint)(local_68.ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_78,L"ShaderCaches",0xc);
  iVar6 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  if ((local_78.ArrayNum != 0) || (iVar3 = 2, iVar6 == -1)) {
    iVar3 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_88,&local_78,iVar6 + iVar3);
  ::FString::PathAppend((FString *)&local_88,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar6);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_98 = (FString *)0x0;
  local_90 = 0;
  pIVar8 = IFileManager::Get();
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_88.ArrayNum != 0) {
    FVar12.Data = local_88.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar8 + 0x78))(pIVar8,&local_98,FVar12.Data);
  uVar9 = (ulonglong)(int)(uint)local_90;
  pFVar13 = local_98 + uVar9;
  local_res10 = (uint)local_90;
  pFVar14 = local_98;
  do {
    if ((uint)local_90 != (int)uVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    iVar6 = local_88.ArrayNum;
    FVar12.Data = local_88.AllocatorInstance.Data;
    if (pFVar14 == pFVar13) {
      DestructItems<FString,int>(local_98,(uint)local_90);
      if (local_98 != (FString *)0x0) {
        FMemory::Free(local_98);
      }
      if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    iVar4 = (pFVar14->Data).ArrayNum;
    iVar3 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    if ((local_88.ArrayNum == 0) && (iVar3 != -1)) {
      iVar4 = iVar3 + 2;
LAB_145b1ec35:
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar4 != 0) goto LAB_145b1ec42;
      local_a8.Data.ArrayMax = 0;
      local_a8.Data.ArrayNum = local_88.ArrayNum;
    }
    else {
      iVar4 = iVar3 + 1;
      if (local_88.ArrayNum == 0) goto LAB_145b1ec35;
LAB_145b1ec42:
      local_a8.Data.ArrayNum = local_88.ArrayNum;
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar5 = local_88.ArrayNum + iVar4;
      if ((int)uVar5 < local_88.ArrayNum) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar5,0,(ForAnyElementType *)&local_a8,local_88.ArrayNum,
                 &local_a8.Data.ArrayMax);
      if (iVar6 != 0) {
        memcpy(local_a8.Data.AllocatorInstance.Data,FVar12.Data,(longlong)iVar6 * 2);
      }
    }
    ::FString::PathAppend(&local_a8,(wchar_t *)(pFVar14->Data).AllocatorInstance.Data,iVar3);
    pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar11 <= (FScriptContainerElement *)&local_a8) &&
        ((FScriptContainerElement *)&local_a8 <
         pFVar11 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar10 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar10;
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)pFVar11 = 0;
    *(FScriptContainerElement **)pFVar11 = local_a8.Data.AllocatorInstance.Data;
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar11 + 8) = local_a8.Data.ArrayNum;
    *(int *)(pFVar11 + 0xc) = local_a8.Data.ArrayMax;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    uVar9 = (ulonglong)local_res10;
    pFVar14 = pFVar14 + 1;
  } while( true );
}

// GetVulkanProfileNameForFeatureLevel @ 145b23e40

FString * __cdecl
FVulkanGenericPlatform::GetVulkanProfileNameForFeatureLevel
          (FString *__return_storage_ptr__,Type param_1,bool param_2)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ::LexToString(&local_18,param_1);
  ::FString::ConcatCF(__return_storage_ptr__,L"VP_UE_Vulkan_",pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (param_2) {
    ::FString::AppendChars(__return_storage_ptr__,L"_RT",3);
  }
  return __return_storage_ptr__;
}

// LoadVulkanInstanceFunctions @ 145b27600

/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkShaderStageFlagBits": Some values do not have unique names */
/* WARNING: Enum "VkDynamicState": Some values do not have unique names */
/* WARNING: Enum "VkFilter": Some values do not have unique names */
/* WARNING: Enum "VkSamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */
/* WARNING: Enum "VkIndexType": Some values do not have unique names */
/* WARNING: Enum "VkPipelineStageFlagBits": Some values do not have unique names */
/* WARNING: Enum "VkSubpassContents": Some values do not have unique names */
/* WARNING: Enum "VkColorSpaceKHR": Some values do not have unique names */
/* WARNING: Enum "VkPresentModeKHR": Some values do not have unique names */
/* WARNING: Enum "VkSamplerYcbcrModelConversion": Some values do not have unique names */
/* WARNING: Enum "VkSamplerYcbcrRange": Some values do not have unique names */
/* WARNING: Enum "VkChromaLocation": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "VkAccelerationStructureTypeKHR": Some values do not have unique names */
/* WARNING: Enum "VkGeometryTypeKHR": Some values do not have unique names */
/* WARNING: Enum "VkRayTracingShaderGroupTypeKHR": Some values do not have unique names */
/* WARNING: Enum "VkCopyAccelerationStructureModeKHR": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "VkImageAspectFlagBits": Some values do not have unique names */
/* WARNING: Enum "VkTimeDomainKHR": Some values do not have unique names */

bool __cdecl FVulkanGenericPlatform::LoadVulkanInstanceFunctions(VkInstance_T *param_1)

{
  bool bVar1;
  
  if (VulkanDynamicAPI::vkGetInstanceProcAddr !=
      (_func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr *)0x0) {
    bVar1 = true;
    VulkanDynamicAPI::vkDestroyInstance =
         (_func___cdecl_void_VkInstance_T_ptr_VkAllocationCallbacks_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroyInstance");
    VulkanDynamicAPI::vkEnumeratePhysicalDevices =
         (_func___cdecl_VkResult_VkInstance_T_ptr_uint_ptr_VkPhysicalDevice_T_ptr_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkEnumeratePhysicalDevices");
    VulkanDynamicAPI::vkGetPhysicalDeviceFeatures =
         (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkPhysicalDeviceFeatures_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceFeatures");
    VulkanDynamicAPI::vkGetPhysicalDeviceFormatProperties =
         (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkFormat_VkFormatProperties_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceFormatProperties");
    VulkanDynamicAPI::vkGetPhysicalDeviceFormatProperties2 =
         (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkFormat_VkFormatProperties2_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceFormatProperties2");
    VulkanDynamicAPI::vkGetPhysicalDeviceImageFormatProperties =
         (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_VkFormat_VkImageType_VkImageTiling_uint_uint_VkImageFormatProperties_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)
                      (param_1,"vkGetPhysicalDeviceImageFormatProperties");
    VulkanDynamicAPI::vkGetPhysicalDeviceImageFormatProperties2 =
         (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_VkPhysicalDeviceImageFormatInfo2_ptr_VkImageFormatProperties2_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)
                      (param_1,"vkGetPhysicalDeviceImageFormatProperties2");
    VulkanDynamicAPI::vkGetPhysicalDeviceProperties =
         (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkPhysicalDeviceProperties_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceProperties");
    VulkanDynamicAPI::vkGetPhysicalDeviceQueueFamilyProperties =
         (_func___cdecl_void_VkPhysicalDevice_T_ptr_uint_ptr_VkQueueFamilyProperties_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)
                   (param_1,"vkGetPhysicalDeviceQueueFamilyProperties");
    VulkanDynamicAPI::vkGetPhysicalDeviceQueueFamilyProperties2 =
         (_func___cdecl_void_VkPhysicalDevice_T_ptr_uint_ptr_VkQueueFamilyProperties2_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)
                   (param_1,"vkGetPhysicalDeviceQueueFamilyProperties2");
    VulkanDynamicAPI::vkGetPhysicalDeviceMemoryProperties =
         (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkPhysicalDeviceMemoryProperties_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceMemoryProperties");
    VulkanDynamicAPI::vkGetPhysicalDeviceProperties2 =
         (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkPhysicalDeviceProperties2_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceProperties2");
    VulkanDynamicAPI::vkGetPhysicalDeviceFeatures2 =
         (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkPhysicalDeviceFeatures2_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceFeatures2");
    VulkanDynamicAPI::vkGetPhysicalDeviceMemoryProperties2 =
         (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkPhysicalDeviceMemoryProperties2_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceMemoryProperties2");
    VulkanDynamicAPI::vkCreateDevice =
         (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_VkDeviceCreateInfo_ptr_VkAllocationCallbacks_ptr_VkDevice_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateDevice");
    VulkanDynamicAPI::vkDestroyDevice =
         (_func___cdecl_void_VkDevice_T_ptr_VkAllocationCallbacks_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroyDevice");
    VulkanDynamicAPI::vkEnumerateDeviceExtensionProperties =
         (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_char_ptr_uint_ptr_VkExtensionProperties_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)
                      (param_1,"vkEnumerateDeviceExtensionProperties");
    VulkanDynamicAPI::vkEnumerateDeviceLayerProperties =
         (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_uint_ptr_VkLayerProperties_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkEnumerateDeviceLayerProperties");
    VulkanDynamicAPI::vkGetDeviceQueue =
         (_func___cdecl_void_VkDevice_T_ptr_uint_uint_VkQueue_T_ptr_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetDeviceQueue");
    VulkanDynamicAPI::vkQueueSubmit =
         (_func___cdecl_VkResult_VkQueue_T_ptr_uint_VkSubmitInfo_ptr_VkFence_T_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkQueueSubmit");
    VulkanDynamicAPI::vkQueueWaitIdle =
         (_func___cdecl_VkResult_VkQueue_T_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkQueueWaitIdle");
    VulkanDynamicAPI::vkDeviceWaitIdle =
         (_func___cdecl_VkResult_VkDevice_T_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDeviceWaitIdle");
    VulkanDynamicAPI::vkAllocateMemory =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkMemoryAllocateInfo_ptr_VkAllocationCallbacks_ptr_VkDeviceMemory_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkAllocateMemory");
    VulkanDynamicAPI::vkFreeMemory =
         (_func___cdecl_void_VkDevice_T_ptr_VkDeviceMemory_T_ptr_VkAllocationCallbacks_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkFreeMemory");
    VulkanDynamicAPI::vkMapMemory =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkDeviceMemory_T_ptr_ulong64_ulong64_uint_void_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkMapMemory");
    VulkanDynamicAPI::vkUnmapMemory =
         (_func___cdecl_void_VkDevice_T_ptr_VkDeviceMemory_T_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkUnmapMemory");
    VulkanDynamicAPI::vkFlushMappedMemoryRanges =
         (_func___cdecl_VkResult_VkDevice_T_ptr_uint_VkMappedMemoryRange_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkFlushMappedMemoryRanges");
    VulkanDynamicAPI::vkInvalidateMappedMemoryRanges =
         (_func___cdecl_VkResult_VkDevice_T_ptr_uint_VkMappedMemoryRange_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkInvalidateMappedMemoryRanges");
    VulkanDynamicAPI::vkGetDeviceMemoryCommitment =
         (_func___cdecl_void_VkDevice_T_ptr_VkDeviceMemory_T_ptr_ulong64_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetDeviceMemoryCommitment");
    VulkanDynamicAPI::vkBindBufferMemory =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkBuffer_T_ptr_VkDeviceMemory_T_ptr_ulong64 *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkBindBufferMemory");
    VulkanDynamicAPI::vkBindImageMemory =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkImage_T_ptr_VkDeviceMemory_T_ptr_ulong64 *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkBindImageMemory");
    VulkanDynamicAPI::vkBindBufferMemory2 =
         (_func___cdecl_VkResult_VkDevice_T_ptr_uint_VkBindBufferMemoryInfo_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkBindBufferMemory2");
    VulkanDynamicAPI::vkBindImageMemory2 =
         (_func___cdecl_VkResult_VkDevice_T_ptr_uint_VkBindImageMemoryInfo_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkBindImageMemory2");
    VulkanDynamicAPI::vkGetBufferMemoryRequirements =
         (_func___cdecl_void_VkDevice_T_ptr_VkBuffer_T_ptr_VkMemoryRequirements_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetBufferMemoryRequirements");
    VulkanDynamicAPI::vkGetImageMemoryRequirements =
         (_func___cdecl_void_VkDevice_T_ptr_VkImage_T_ptr_VkMemoryRequirements_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetImageMemoryRequirements");
    VulkanDynamicAPI::vkGetImageSparseMemoryRequirements =
         (_func___cdecl_void_VkDevice_T_ptr_VkImage_T_ptr_uint_ptr_VkSparseImageMemoryRequirements_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetImageSparseMemoryRequirements")
    ;
    VulkanDynamicAPI::vkGetImageMemoryRequirements2 =
         (_func___cdecl_void_VkDevice_T_ptr_VkImageMemoryRequirementsInfo2_ptr_VkMemoryRequirements2_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetImageMemoryRequirements2");
    VulkanDynamicAPI::vkGetBufferMemoryRequirements2 =
         (_func___cdecl_void_VkDevice_T_ptr_VkBufferMemoryRequirementsInfo2_ptr_VkMemoryRequirements2_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetBufferMemoryRequirements2");
    VulkanDynamicAPI::vkGetPhysicalDeviceSparseImageFormatProperties =
         (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkFormat_VkImageType_VkSampleCountFlagBits_uint_VkImageTiling_uint_ptr_VkSparseImageFormatProperties_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)
                      (param_1,"vkGetPhysicalDeviceSparseImageFormatProperties");
    VulkanDynamicAPI::vkQueueBindSparse =
         (_func___cdecl_VkResult_VkQueue_T_ptr_uint_VkBindSparseInfo_ptr_VkFence_T_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkQueueBindSparse");
    VulkanDynamicAPI::vkCreateFence =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkFenceCreateInfo_ptr_VkAllocationCallbacks_ptr_VkFence_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateFence");
    VulkanDynamicAPI::vkDestroyFence =
         (_func___cdecl_void_VkDevice_T_ptr_VkFence_T_ptr_VkAllocationCallbacks_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroyFence");
    VulkanDynamicAPI::vkResetFences =
         (_func___cdecl_VkResult_VkDevice_T_ptr_uint_VkFence_T_ptr_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkResetFences");
    VulkanDynamicAPI::vkGetFenceStatus =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkFence_T_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetFenceStatus");
    VulkanDynamicAPI::vkWaitForFences =
         (_func___cdecl_VkResult_VkDevice_T_ptr_uint_VkFence_T_ptr_ptr_uint_ulong64 *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkWaitForFences");
    VulkanDynamicAPI::vkCreateSemaphore =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkSemaphoreCreateInfo_ptr_VkAllocationCallbacks_ptr_VkSemaphore_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateSemaphore");
    VulkanDynamicAPI::vkDestroySemaphore =
         (_func___cdecl_void_VkDevice_T_ptr_VkSemaphore_T_ptr_VkAllocationCallbacks_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroySemaphore");
    VulkanDynamicAPI::vkCreateEvent =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkEventCreateInfo_ptr_VkAllocationCallbacks_ptr_VkEvent_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateEvent");
    VulkanDynamicAPI::vkDestroyEvent =
         (_func___cdecl_void_VkDevice_T_ptr_VkEvent_T_ptr_VkAllocationCallbacks_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroyEvent");
    VulkanDynamicAPI::vkGetEventStatus =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkEvent_T_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetEventStatus");
    VulkanDynamicAPI::vkSetEvent =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkEvent_T_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkSetEvent");
    VulkanDynamicAPI::vkResetEvent =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkEvent_T_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkResetEvent");
    VulkanDynamicAPI::vkCreateQueryPool =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkQueryPoolCreateInfo_ptr_VkAllocationCallbacks_ptr_VkQueryPool_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateQueryPool");
    VulkanDynamicAPI::vkDestroyQueryPool =
         (_func___cdecl_void_VkDevice_T_ptr_VkQueryPool_T_ptr_VkAllocationCallbacks_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroyQueryPool");
    VulkanDynamicAPI::vkGetQueryPoolResults =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkQueryPool_T_ptr_uint_uint_ulong64_void_ptr_ulong64_uint
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetQueryPoolResults");
    VulkanDynamicAPI::vkCreateBuffer =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkBufferCreateInfo_ptr_VkAllocationCallbacks_ptr_VkBuffer_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateBuffer");
    VulkanDynamicAPI::vkDestroyBuffer =
         (_func___cdecl_void_VkDevice_T_ptr_VkBuffer_T_ptr_VkAllocationCallbacks_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroyBuffer");
    VulkanDynamicAPI::vkCreateBufferView =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkBufferViewCreateInfo_ptr_VkAllocationCallbacks_ptr_VkBufferView_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateBufferView");
    VulkanDynamicAPI::vkDestroyBufferView =
         (_func___cdecl_void_VkDevice_T_ptr_VkBufferView_T_ptr_VkAllocationCallbacks_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroyBufferView");
    VulkanDynamicAPI::vkCreateImage =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkImageCreateInfo_ptr_VkAllocationCallbacks_ptr_VkImage_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateImage");
    VulkanDynamicAPI::vkDestroyImage =
         (_func___cdecl_void_VkDevice_T_ptr_VkImage_T_ptr_VkAllocationCallbacks_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroyImage");
    VulkanDynamicAPI::vkGetImageSubresourceLayout =
         (_func___cdecl_void_VkDevice_T_ptr_VkImage_T_ptr_VkImageSubresource_ptr_VkSubresourceLayout_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetImageSubresourceLayout");
    VulkanDynamicAPI::vkCreateImageView =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkImageViewCreateInfo_ptr_VkAllocationCallbacks_ptr_VkImageView_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateImageView");
    VulkanDynamicAPI::vkDestroyImageView =
         (_func___cdecl_void_VkDevice_T_ptr_VkImageView_T_ptr_VkAllocationCallbacks_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroyImageView");
    VulkanDynamicAPI::vkCreateShaderModule =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkShaderModuleCreateInfo_ptr_VkAllocationCallbacks_ptr_VkShaderModule_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateShaderModule");
    VulkanDynamicAPI::vkDestroyShaderModule =
         (_func___cdecl_void_VkDevice_T_ptr_VkShaderModule_T_ptr_VkAllocationCallbacks_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroyShaderModule");
    VulkanDynamicAPI::vkCreatePipelineCache =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkPipelineCacheCreateInfo_ptr_VkAllocationCallbacks_ptr_VkPipelineCache_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreatePipelineCache");
    VulkanDynamicAPI::vkDestroyPipelineCache =
         (_func___cdecl_void_VkDevice_T_ptr_VkPipelineCache_T_ptr_VkAllocationCallbacks_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroyPipelineCache");
    VulkanDynamicAPI::vkGetPipelineCacheData =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkPipelineCache_T_ptr_ulong64_ptr_void_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetPipelineCacheData");
    VulkanDynamicAPI::vkMergePipelineCaches =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkPipelineCache_T_ptr_uint_VkPipelineCache_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkMergePipelineCaches");
    VulkanDynamicAPI::vkCreateGraphicsPipelines =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkPipelineCache_T_ptr_uint_VkGraphicsPipelineCreateInfo_ptr_VkAllocationCallbacks_ptr_VkPipeline_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateGraphicsPipelines");
    VulkanDynamicAPI::vkCreateComputePipelines =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkPipelineCache_T_ptr_uint_VkComputePipelineCreateInfo_ptr_VkAllocationCallbacks_ptr_VkPipeline_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateComputePipelines");
    VulkanDynamicAPI::vkDestroyPipeline =
         (_func___cdecl_void_VkDevice_T_ptr_VkPipeline_T_ptr_VkAllocationCallbacks_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroyPipeline");
    VulkanDynamicAPI::vkCreatePipelineLayout =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkPipelineLayoutCreateInfo_ptr_VkAllocationCallbacks_ptr_VkPipelineLayout_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreatePipelineLayout");
    VulkanDynamicAPI::vkDestroyPipelineLayout =
         (_func___cdecl_void_VkDevice_T_ptr_VkPipelineLayout_T_ptr_VkAllocationCallbacks_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroyPipelineLayout");
    VulkanDynamicAPI::vkCreateSampler =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkSamplerCreateInfo_ptr_VkAllocationCallbacks_ptr_VkSampler_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateSampler");
    VulkanDynamicAPI::vkDestroySampler =
         (_func___cdecl_void_VkDevice_T_ptr_VkSampler_T_ptr_VkAllocationCallbacks_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroySampler");
    VulkanDynamicAPI::vkCreateDescriptorSetLayout =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkDescriptorSetLayoutCreateInfo_ptr_VkAllocationCallbacks_ptr_VkDescriptorSetLayout_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateDescriptorSetLayout");
    VulkanDynamicAPI::vkDestroyDescriptorSetLayout =
         (_func___cdecl_void_VkDevice_T_ptr_VkDescriptorSetLayout_T_ptr_VkAllocationCallbacks_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroyDescriptorSetLayout");
    VulkanDynamicAPI::vkCreateDescriptorPool =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkDescriptorPoolCreateInfo_ptr_VkAllocationCallbacks_ptr_VkDescriptorPool_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateDescriptorPool");
    VulkanDynamicAPI::vkDestroyDescriptorPool =
         (_func___cdecl_void_VkDevice_T_ptr_VkDescriptorPool_T_ptr_VkAllocationCallbacks_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroyDescriptorPool");
    VulkanDynamicAPI::vkResetDescriptorPool =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkDescriptorPool_T_ptr_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkResetDescriptorPool");
    VulkanDynamicAPI::vkAllocateDescriptorSets =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkDescriptorSetAllocateInfo_ptr_VkDescriptorSet_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkAllocateDescriptorSets");
    VulkanDynamicAPI::vkFreeDescriptorSets =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkDescriptorPool_T_ptr_uint_VkDescriptorSet_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkFreeDescriptorSets");
    VulkanDynamicAPI::vkUpdateDescriptorSets =
         (_func___cdecl_void_VkDevice_T_ptr_uint_VkWriteDescriptorSet_ptr_uint_VkCopyDescriptorSet_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkUpdateDescriptorSets");
    VulkanDynamicAPI::vkCreateFramebuffer =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkFramebufferCreateInfo_ptr_VkAllocationCallbacks_ptr_VkFramebuffer_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateFramebuffer");
    VulkanDynamicAPI::vkDestroyFramebuffer =
         (_func___cdecl_void_VkDevice_T_ptr_VkFramebuffer_T_ptr_VkAllocationCallbacks_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroyFramebuffer");
    VulkanDynamicAPI::vkCreateRenderPass =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkRenderPassCreateInfo_ptr_VkAllocationCallbacks_ptr_VkRenderPass_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateRenderPass");
    VulkanDynamicAPI::vkDestroyRenderPass =
         (_func___cdecl_void_VkDevice_T_ptr_VkRenderPass_T_ptr_VkAllocationCallbacks_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroyRenderPass");
    VulkanDynamicAPI::vkGetRenderAreaGranularity =
         (_func___cdecl_void_VkDevice_T_ptr_VkRenderPass_T_ptr_VkExtent2D_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetRenderAreaGranularity");
    VulkanDynamicAPI::vkCreateCommandPool =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkCommandPoolCreateInfo_ptr_VkAllocationCallbacks_ptr_VkCommandPool_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateCommandPool");
    VulkanDynamicAPI::vkDestroyCommandPool =
         (_func___cdecl_void_VkDevice_T_ptr_VkCommandPool_T_ptr_VkAllocationCallbacks_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroyCommandPool");
    VulkanDynamicAPI::vkResetCommandPool =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkCommandPool_T_ptr_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkResetCommandPool");
    VulkanDynamicAPI::vkTrimCommandPool =
         (_func___cdecl_void_VkDevice_T_ptr_VkCommandPool_T_ptr_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkTrimCommandPool");
    VulkanDynamicAPI::vkAllocateCommandBuffers =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkCommandBufferAllocateInfo_ptr_VkCommandBuffer_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkAllocateCommandBuffers");
    VulkanDynamicAPI::vkFreeCommandBuffers =
         (_func___cdecl_void_VkDevice_T_ptr_VkCommandPool_T_ptr_uint_VkCommandBuffer_T_ptr_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkFreeCommandBuffers");
    VulkanDynamicAPI::vkBeginCommandBuffer =
         (_func___cdecl_VkResult_VkCommandBuffer_T_ptr_VkCommandBufferBeginInfo_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkBeginCommandBuffer");
    VulkanDynamicAPI::vkEndCommandBuffer =
         (_func___cdecl_VkResult_VkCommandBuffer_T_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkEndCommandBuffer");
    VulkanDynamicAPI::vkResetCommandBuffer =
         (_func___cdecl_VkResult_VkCommandBuffer_T_ptr_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkResetCommandBuffer");
    VulkanDynamicAPI::vkCmdBindPipeline =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineBindPoint_VkPipeline_T_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdBindPipeline");
    VulkanDynamicAPI::vkCmdSetViewport =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_VkViewport_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetViewport");
    VulkanDynamicAPI::vkCmdSetScissor =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_VkRect2D_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetScissor");
    VulkanDynamicAPI::vkCmdSetLineWidth =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_float *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetLineWidth");
    VulkanDynamicAPI::vkCmdSetDepthBias =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_float_float_float *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetDepthBias");
    VulkanDynamicAPI::vkCmdSetBlendConstants =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_float_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetBlendConstants");
    VulkanDynamicAPI::vkCmdSetDepthBounds =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_float_float *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetDepthBounds");
    VulkanDynamicAPI::vkCmdSetStencilCompareMask =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetStencilCompareMask");
    VulkanDynamicAPI::vkCmdSetStencilWriteMask =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetStencilWriteMask");
    VulkanDynamicAPI::vkCmdSetStencilReference =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetStencilReference");
    VulkanDynamicAPI::vkCmdBindDescriptorSets =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineBindPoint_VkPipelineLayout_T_ptr_uint_uint_VkDescriptorSet_T_ptr_ptr_uint_uint_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdBindDescriptorSets");
    VulkanDynamicAPI::vkCmdBindIndexBuffer =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_ulong64_VkIndexType *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdBindIndexBuffer");
    VulkanDynamicAPI::vkCmdBindVertexBuffers =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_VkBuffer_T_ptr_ptr_ulong64_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdBindVertexBuffers");
    VulkanDynamicAPI::vkCmdDraw =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_uint_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdDraw");
    VulkanDynamicAPI::vkCmdDrawIndexed =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_uint_int_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdDrawIndexed");
    VulkanDynamicAPI::vkCmdDrawIndirect =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_ulong64_uint_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdDrawIndirect");
    VulkanDynamicAPI::vkCmdDrawIndexedIndirect =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_ulong64_uint_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdDrawIndexedIndirect");
    VulkanDynamicAPI::vkCmdDispatch =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdDispatch");
    VulkanDynamicAPI::vkCmdDispatchIndirect =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_ulong64 *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdDispatchIndirect");
    VulkanDynamicAPI::vkCmdCopyBuffer =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_VkBuffer_T_ptr_uint_VkBufferCopy_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdCopyBuffer");
    VulkanDynamicAPI::vkCmdCopyImage =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_VkImage_T_ptr_VkImageLayout_uint_VkImageCopy_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdCopyImage");
    VulkanDynamicAPI::vkCmdBlitImage =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_VkImage_T_ptr_VkImageLayout_uint_VkImageBlit_ptr_VkFilter
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdBlitImage");
    VulkanDynamicAPI::vkCmdCopyBufferToImage =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_uint_VkBufferImageCopy_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdCopyBufferToImage");
    VulkanDynamicAPI::vkCmdCopyImageToBuffer =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_VkBuffer_T_ptr_uint_VkBufferImageCopy_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdCopyImageToBuffer");
    VulkanDynamicAPI::vkCmdUpdateBuffer =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_ulong64_ulong64_void_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdUpdateBuffer");
    VulkanDynamicAPI::vkCmdFillBuffer =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_ulong64_ulong64_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdFillBuffer");
    VulkanDynamicAPI::vkCmdClearColorImage =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_VkClearColorValue_ptr_uint_VkImageSubresourceRange_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdClearColorImage");
    VulkanDynamicAPI::vkCmdClearDepthStencilImage =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_VkClearDepthStencilValue_ptr_uint_VkImageSubresourceRange_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdClearDepthStencilImage");
    VulkanDynamicAPI::vkCmdClearAttachments =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkClearAttachment_ptr_uint_VkClearRect_ptr *
         )(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdClearAttachments");
    VulkanDynamicAPI::vkCmdResolveImage =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_VkImage_T_ptr_VkImageLayout_uint_VkImageResolve_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdResolveImage");
    VulkanDynamicAPI::vkCmdSetEvent =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkEvent_T_ptr_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetEvent");
    VulkanDynamicAPI::vkCmdResetEvent =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkEvent_T_ptr_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdResetEvent");
    VulkanDynamicAPI::vkCmdWaitEvents =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkEvent_T_ptr_ptr_uint_uint_uint_VkMemoryBarrier_ptr_uint_VkBufferMemoryBarrier_ptr_uint_VkImageMemoryBarrier_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdWaitEvents");
    VulkanDynamicAPI::vkCmdPipelineBarrier =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_uint_uint_VkMemoryBarrier_ptr_uint_VkBufferMemoryBarrier_ptr_uint_VkImageMemoryBarrier_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdPipelineBarrier");
    VulkanDynamicAPI::vkCmdBeginQuery =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkQueryPool_T_ptr_uint_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdBeginQuery");
    VulkanDynamicAPI::vkCmdEndQuery =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkQueryPool_T_ptr_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdEndQuery");
    VulkanDynamicAPI::vkCmdResetQueryPool =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkQueryPool_T_ptr_uint_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdResetQueryPool");
    VulkanDynamicAPI::vkCmdWriteTimestamp =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineStageFlagBits_VkQueryPool_T_ptr_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdWriteTimestamp");
    VulkanDynamicAPI::vkCmdCopyQueryPoolResults =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkQueryPool_T_ptr_uint_uint_VkBuffer_T_ptr_ulong64_ulong64_uint
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdCopyQueryPoolResults");
    VulkanDynamicAPI::vkCmdPushConstants =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineLayout_T_ptr_uint_uint_uint_void_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdPushConstants");
    VulkanDynamicAPI::vkCmdBeginRenderPass =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkRenderPassBeginInfo_ptr_VkSubpassContents *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdBeginRenderPass");
    VulkanDynamicAPI::vkCmdNextSubpass =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkSubpassContents *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdNextSubpass");
    VulkanDynamicAPI::vkCmdEndRenderPass =
         (_func___cdecl_void_VkCommandBuffer_T_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdEndRenderPass");
    VulkanDynamicAPI::vkCmdExecuteCommands =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkCommandBuffer_T_ptr_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdExecuteCommands");
    VulkanDynamicAPI::vkCreateSwapchainKHR =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkSwapchainCreateInfoKHR_ptr_VkAllocationCallbacks_ptr_VkSwapchainKHR_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateSwapchainKHR");
    VulkanDynamicAPI::vkDestroySwapchainKHR =
         (_func___cdecl_void_VkDevice_T_ptr_VkSwapchainKHR_T_ptr_VkAllocationCallbacks_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroySwapchainKHR");
    VulkanDynamicAPI::vkGetSwapchainImagesKHR =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkSwapchainKHR_T_ptr_uint_ptr_VkImage_T_ptr_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetSwapchainImagesKHR");
    VulkanDynamicAPI::vkAcquireNextImageKHR =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkSwapchainKHR_T_ptr_ulong64_VkSemaphore_T_ptr_VkFence_T_ptr_uint_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkAcquireNextImageKHR");
    VulkanDynamicAPI::vkQueuePresentKHR =
         (_func___cdecl_VkResult_VkQueue_T_ptr_VkPresentInfoKHR_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkQueuePresentKHR");
    VulkanDynamicAPI::vkCreateSamplerYcbcrConversion =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkSamplerYcbcrConversionCreateInfo_ptr_VkAllocationCallbacks_ptr_VkSamplerYcbcrConversion_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateSamplerYcbcrConversion");
    VulkanDynamicAPI::vkDestroySamplerYcbcrConversion =
         (_func___cdecl_void_VkDevice_T_ptr_VkSamplerYcbcrConversion_T_ptr_VkAllocationCallbacks_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroySamplerYcbcrConversion");
    if ((VulkanDynamicAPI::vkDestroyInstance ==
         (_func___cdecl_void_VkInstance_T_ptr_VkAllocationCallbacks_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkEnumeratePhysicalDevices ==
         (_func___cdecl_VkResult_VkInstance_T_ptr_uint_ptr_VkPhysicalDevice_T_ptr_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetPhysicalDeviceFeatures ==
         (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkPhysicalDeviceFeatures_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetPhysicalDeviceFormatProperties ==
         (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkFormat_VkFormatProperties_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetPhysicalDeviceFormatProperties2 ==
         (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkFormat_VkFormatProperties2_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetPhysicalDeviceImageFormatProperties ==
         (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_VkFormat_VkImageType_VkImageTiling_uint_uint_VkImageFormatProperties_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetPhysicalDeviceImageFormatProperties2 ==
         (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_VkPhysicalDeviceImageFormatInfo2_ptr_VkImageFormatProperties2_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510b7148,
                 (FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetPhysicalDeviceProperties ==
         (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkPhysicalDeviceProperties_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetPhysicalDeviceQueueFamilyProperties ==
         (_func___cdecl_void_VkPhysicalDevice_T_ptr_uint_ptr_VkQueueFamilyProperties_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetPhysicalDeviceQueueFamilyProperties2 ==
         (_func___cdecl_void_VkPhysicalDevice_T_ptr_uint_ptr_VkQueueFamilyProperties2_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetPhysicalDeviceMemoryProperties ==
         (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkPhysicalDeviceMemoryProperties_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetPhysicalDeviceProperties2 ==
         (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkPhysicalDeviceProperties2_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetPhysicalDeviceFeatures2 ==
         (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkPhysicalDeviceFeatures2_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetPhysicalDeviceMemoryProperties2 ==
         (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkPhysicalDeviceMemoryProperties2_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCreateDevice ==
         (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_VkDeviceCreateInfo_ptr_VkAllocationCallbacks_ptr_VkDevice_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkDestroyDevice ==
         (_func___cdecl_void_VkDevice_T_ptr_VkAllocationCallbacks_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkEnumerateDeviceExtensionProperties ==
         (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_char_ptr_uint_ptr_VkExtensionProperties_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkEnumerateDeviceLayerProperties ==
         (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_uint_ptr_VkLayerProperties_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetDeviceQueue ==
         (_func___cdecl_void_VkDevice_T_ptr_uint_uint_VkQueue_T_ptr_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkQueueSubmit ==
         (_func___cdecl_VkResult_VkQueue_T_ptr_uint_VkSubmitInfo_ptr_VkFence_T_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkQueueWaitIdle == (_func___cdecl_VkResult_VkQueue_T_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkDeviceWaitIdle == (_func___cdecl_VkResult_VkDevice_T_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkAllocateMemory ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkMemoryAllocateInfo_ptr_VkAllocationCallbacks_ptr_VkDeviceMemory_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkFreeMemory ==
         (_func___cdecl_void_VkDevice_T_ptr_VkDeviceMemory_T_ptr_VkAllocationCallbacks_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkMapMemory ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkDeviceMemory_T_ptr_ulong64_ulong64_uint_void_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkUnmapMemory ==
         (_func___cdecl_void_VkDevice_T_ptr_VkDeviceMemory_T_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkFlushMappedMemoryRanges ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_uint_VkMappedMemoryRange_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkInvalidateMappedMemoryRanges ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_uint_VkMappedMemoryRange_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetDeviceMemoryCommitment ==
         (_func___cdecl_void_VkDevice_T_ptr_VkDeviceMemory_T_ptr_ulong64_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkBindBufferMemory ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkBuffer_T_ptr_VkDeviceMemory_T_ptr_ulong64 *)0x0)
       && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkBindImageMemory ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkImage_T_ptr_VkDeviceMemory_T_ptr_ulong64 *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkBindBufferMemory2 ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_uint_VkBindBufferMemoryInfo_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkBindImageMemory2 ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_uint_VkBindImageMemoryInfo_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetBufferMemoryRequirements ==
         (_func___cdecl_void_VkDevice_T_ptr_VkBuffer_T_ptr_VkMemoryRequirements_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetImageMemoryRequirements ==
         (_func___cdecl_void_VkDevice_T_ptr_VkImage_T_ptr_VkMemoryRequirements_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetImageSparseMemoryRequirements ==
         (_func___cdecl_void_VkDevice_T_ptr_VkImage_T_ptr_uint_ptr_VkSparseImageMemoryRequirements_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetImageMemoryRequirements2 ==
         (_func___cdecl_void_VkDevice_T_ptr_VkImageMemoryRequirementsInfo2_ptr_VkMemoryRequirements2_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetBufferMemoryRequirements2 ==
         (_func___cdecl_void_VkDevice_T_ptr_VkBufferMemoryRequirementsInfo2_ptr_VkMemoryRequirements2_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetPhysicalDeviceSparseImageFormatProperties ==
         (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkFormat_VkImageType_VkSampleCountFlagBits_uint_VkImageTiling_uint_ptr_VkSparseImageFormatProperties_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkQueueBindSparse ==
         (_func___cdecl_VkResult_VkQueue_T_ptr_uint_VkBindSparseInfo_ptr_VkFence_T_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCreateFence ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkFenceCreateInfo_ptr_VkAllocationCallbacks_ptr_VkFence_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkDestroyFence ==
         (_func___cdecl_void_VkDevice_T_ptr_VkFence_T_ptr_VkAllocationCallbacks_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkResetFences ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_uint_VkFence_T_ptr_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetFenceStatus ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkFence_T_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkWaitForFences ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_uint_VkFence_T_ptr_ptr_uint_ulong64 *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCreateSemaphore ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkSemaphoreCreateInfo_ptr_VkAllocationCallbacks_ptr_VkSemaphore_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkDestroySemaphore ==
         (_func___cdecl_void_VkDevice_T_ptr_VkSemaphore_T_ptr_VkAllocationCallbacks_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCreateEvent ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkEventCreateInfo_ptr_VkAllocationCallbacks_ptr_VkEvent_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkDestroyEvent ==
         (_func___cdecl_void_VkDevice_T_ptr_VkEvent_T_ptr_VkAllocationCallbacks_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetEventStatus ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkEvent_T_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkSetEvent == (_func___cdecl_VkResult_VkDevice_T_ptr_VkEvent_T_ptr *)0x0)
       && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkResetEvent ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkEvent_T_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCreateQueryPool ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkQueryPoolCreateInfo_ptr_VkAllocationCallbacks_ptr_VkQueryPool_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkDestroyQueryPool ==
         (_func___cdecl_void_VkDevice_T_ptr_VkQueryPool_T_ptr_VkAllocationCallbacks_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetQueryPoolResults ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkQueryPool_T_ptr_uint_uint_ulong64_void_ptr_ulong64_uint
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCreateBuffer ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkBufferCreateInfo_ptr_VkAllocationCallbacks_ptr_VkBuffer_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkDestroyBuffer ==
         (_func___cdecl_void_VkDevice_T_ptr_VkBuffer_T_ptr_VkAllocationCallbacks_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCreateBufferView ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkBufferViewCreateInfo_ptr_VkAllocationCallbacks_ptr_VkBufferView_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkDestroyBufferView ==
         (_func___cdecl_void_VkDevice_T_ptr_VkBufferView_T_ptr_VkAllocationCallbacks_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCreateImage ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkImageCreateInfo_ptr_VkAllocationCallbacks_ptr_VkImage_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkDestroyImage ==
         (_func___cdecl_void_VkDevice_T_ptr_VkImage_T_ptr_VkAllocationCallbacks_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetImageSubresourceLayout ==
         (_func___cdecl_void_VkDevice_T_ptr_VkImage_T_ptr_VkImageSubresource_ptr_VkSubresourceLayout_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCreateImageView ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkImageViewCreateInfo_ptr_VkAllocationCallbacks_ptr_VkImageView_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkDestroyImageView ==
         (_func___cdecl_void_VkDevice_T_ptr_VkImageView_T_ptr_VkAllocationCallbacks_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCreateShaderModule ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkShaderModuleCreateInfo_ptr_VkAllocationCallbacks_ptr_VkShaderModule_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkDestroyShaderModule ==
         (_func___cdecl_void_VkDevice_T_ptr_VkShaderModule_T_ptr_VkAllocationCallbacks_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCreatePipelineCache ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkPipelineCacheCreateInfo_ptr_VkAllocationCallbacks_ptr_VkPipelineCache_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkDestroyPipelineCache ==
         (_func___cdecl_void_VkDevice_T_ptr_VkPipelineCache_T_ptr_VkAllocationCallbacks_ptr *)0x0)
       && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetPipelineCacheData ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkPipelineCache_T_ptr_ulong64_ptr_void_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkMergePipelineCaches ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkPipelineCache_T_ptr_uint_VkPipelineCache_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCreateGraphicsPipelines ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkPipelineCache_T_ptr_uint_VkGraphicsPipelineCreateInfo_ptr_VkAllocationCallbacks_ptr_VkPipeline_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCreateComputePipelines ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkPipelineCache_T_ptr_uint_VkComputePipelineCreateInfo_ptr_VkAllocationCallbacks_ptr_VkPipeline_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkDestroyPipeline ==
         (_func___cdecl_void_VkDevice_T_ptr_VkPipeline_T_ptr_VkAllocationCallbacks_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCreatePipelineLayout ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkPipelineLayoutCreateInfo_ptr_VkAllocationCallbacks_ptr_VkPipelineLayout_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkDestroyPipelineLayout ==
         (_func___cdecl_void_VkDevice_T_ptr_VkPipelineLayout_T_ptr_VkAllocationCallbacks_ptr *)0x0)
       && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCreateSampler ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkSamplerCreateInfo_ptr_VkAllocationCallbacks_ptr_VkSampler_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkDestroySampler ==
         (_func___cdecl_void_VkDevice_T_ptr_VkSampler_T_ptr_VkAllocationCallbacks_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCreateDescriptorSetLayout ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkDescriptorSetLayoutCreateInfo_ptr_VkAllocationCallbacks_ptr_VkDescriptorSetLayout_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkDestroyDescriptorSetLayout ==
         (_func___cdecl_void_VkDevice_T_ptr_VkDescriptorSetLayout_T_ptr_VkAllocationCallbacks_ptr *)
         0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCreateDescriptorPool ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkDescriptorPoolCreateInfo_ptr_VkAllocationCallbacks_ptr_VkDescriptorPool_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkDestroyDescriptorPool ==
         (_func___cdecl_void_VkDevice_T_ptr_VkDescriptorPool_T_ptr_VkAllocationCallbacks_ptr *)0x0)
       && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkResetDescriptorPool ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkDescriptorPool_T_ptr_uint *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkAllocateDescriptorSets ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkDescriptorSetAllocateInfo_ptr_VkDescriptorSet_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkFreeDescriptorSets ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkDescriptorPool_T_ptr_uint_VkDescriptorSet_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkUpdateDescriptorSets ==
         (_func___cdecl_void_VkDevice_T_ptr_uint_VkWriteDescriptorSet_ptr_uint_VkCopyDescriptorSet_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCreateFramebuffer ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkFramebufferCreateInfo_ptr_VkAllocationCallbacks_ptr_VkFramebuffer_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkDestroyFramebuffer ==
         (_func___cdecl_void_VkDevice_T_ptr_VkFramebuffer_T_ptr_VkAllocationCallbacks_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCreateRenderPass ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkRenderPassCreateInfo_ptr_VkAllocationCallbacks_ptr_VkRenderPass_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkDestroyRenderPass ==
         (_func___cdecl_void_VkDevice_T_ptr_VkRenderPass_T_ptr_VkAllocationCallbacks_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetRenderAreaGranularity ==
         (_func___cdecl_void_VkDevice_T_ptr_VkRenderPass_T_ptr_VkExtent2D_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCreateCommandPool ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkCommandPoolCreateInfo_ptr_VkAllocationCallbacks_ptr_VkCommandPool_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkDestroyCommandPool ==
         (_func___cdecl_void_VkDevice_T_ptr_VkCommandPool_T_ptr_VkAllocationCallbacks_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkResetCommandPool ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkCommandPool_T_ptr_uint *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkTrimCommandPool ==
         (_func___cdecl_void_VkDevice_T_ptr_VkCommandPool_T_ptr_uint *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkAllocateCommandBuffers ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkCommandBufferAllocateInfo_ptr_VkCommandBuffer_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkFreeCommandBuffers ==
         (_func___cdecl_void_VkDevice_T_ptr_VkCommandPool_T_ptr_uint_VkCommandBuffer_T_ptr_ptr *)0x0
        ) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkBeginCommandBuffer ==
         (_func___cdecl_VkResult_VkCommandBuffer_T_ptr_VkCommandBufferBeginInfo_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkEndCommandBuffer == (_func___cdecl_VkResult_VkCommandBuffer_T_ptr *)0x0
        ) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkResetCommandBuffer ==
         (_func___cdecl_VkResult_VkCommandBuffer_T_ptr_uint *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510b7cc8,
                 (FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdBindPipeline ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineBindPoint_VkPipeline_T_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510b7ce8,
                 (FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdSetViewport ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_VkViewport_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510b7d08,
                 (FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdSetScissor ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_VkRect2D_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510b7d28,
                 (FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdSetLineWidth ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_float *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510b7d48,
                 (FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdSetDepthBias ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_float_float_float *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510b7d68,
                 (FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdSetBlendConstants ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_float_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510b7d88,
                 (FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdSetDepthBounds ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_float_float *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510b7da8,
                 (FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdSetStencilCompareMask ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510b7dc8,
                 (FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdSetStencilWriteMask ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510b7de8,
                 (FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdSetStencilReference ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510b7e08,
                 (FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdBindDescriptorSets ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineBindPoint_VkPipelineLayout_T_ptr_uint_uint_VkDescriptorSet_T_ptr_ptr_uint_uint_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510b7e28,
                 (FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdBindIndexBuffer ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_ulong64_VkIndexType *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdBindVertexBuffers ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_VkBuffer_T_ptr_ptr_ulong64_ptr *)0x0)
       && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdDraw ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_uint_uint *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdDrawIndexed ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_uint_int_uint *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdDrawIndirect ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_ulong64_uint_uint *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdDrawIndexedIndirect ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_ulong64_uint_uint *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdDispatch ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_uint *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdDispatchIndirect ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_ulong64 *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdCopyBuffer ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_VkBuffer_T_ptr_uint_VkBufferCopy_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdCopyImage ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_VkImage_T_ptr_VkImageLayout_uint_VkImageCopy_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdBlitImage ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_VkImage_T_ptr_VkImageLayout_uint_VkImageBlit_ptr_VkFilter
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdCopyBufferToImage ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_uint_VkBufferImageCopy_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdCopyImageToBuffer ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_VkBuffer_T_ptr_uint_VkBufferImageCopy_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdUpdateBuffer ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_ulong64_ulong64_void_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdFillBuffer ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_ulong64_ulong64_uint *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdClearColorImage ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_VkClearColorValue_ptr_uint_VkImageSubresourceRange_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdClearDepthStencilImage ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_VkClearDepthStencilValue_ptr_uint_VkImageSubresourceRange_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdClearAttachments ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkClearAttachment_ptr_uint_VkClearRect_ptr *
         )0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdResolveImage ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_VkImage_T_ptr_VkImageLayout_uint_VkImageResolve_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdSetEvent ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkEvent_T_ptr_uint *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdResetEvent ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkEvent_T_ptr_uint *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdWaitEvents ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkEvent_T_ptr_ptr_uint_uint_uint_VkMemoryBarrier_ptr_uint_VkBufferMemoryBarrier_ptr_uint_VkImageMemoryBarrier_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdPipelineBarrier ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_uint_uint_VkMemoryBarrier_ptr_uint_VkBufferMemoryBarrier_ptr_uint_VkImageMemoryBarrier_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdBeginQuery ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkQueryPool_T_ptr_uint_uint *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdEndQuery ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkQueryPool_T_ptr_uint *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdResetQueryPool ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkQueryPool_T_ptr_uint_uint *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdWriteTimestamp ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineStageFlagBits_VkQueryPool_T_ptr_uint *)
         0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdCopyQueryPoolResults ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkQueryPool_T_ptr_uint_uint_VkBuffer_T_ptr_ulong64_ulong64_uint
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdPushConstants ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineLayout_T_ptr_uint_uint_uint_void_ptr *)
         0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdBeginRenderPass ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkRenderPassBeginInfo_ptr_VkSubpassContents *)0x0
        ) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdNextSubpass ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkSubpassContents *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdEndRenderPass == (_func___cdecl_void_VkCommandBuffer_T_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCmdExecuteCommands ==
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkCommandBuffer_T_ptr_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCreateSwapchainKHR ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkSwapchainCreateInfoKHR_ptr_VkAllocationCallbacks_ptr_VkSwapchainKHR_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkDestroySwapchainKHR ==
         (_func___cdecl_void_VkDevice_T_ptr_VkSwapchainKHR_T_ptr_VkAllocationCallbacks_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetSwapchainImagesKHR ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkSwapchainKHR_T_ptr_uint_ptr_VkImage_T_ptr_ptr *)
         0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkAcquireNextImageKHR ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkSwapchainKHR_T_ptr_ulong64_VkSemaphore_T_ptr_VkFence_T_ptr_uint_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkQueuePresentKHR ==
         (_func___cdecl_VkResult_VkQueue_T_ptr_VkPresentInfoKHR_ptr *)0x0) &&
       (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkCreateSamplerYcbcrConversion ==
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkSamplerYcbcrConversionCreateInfo_ptr_VkAllocationCallbacks_ptr_VkSamplerYcbcrConversion_T_ptr_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkDestroySamplerYcbcrConversion ==
         (_func___cdecl_void_VkDevice_T_ptr_VkSamplerYcbcrConversion_T_ptr_VkAllocationCallbacks_ptr
          *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    VulkanDynamicAPI::vkCreateAccelerationStructureKHR =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkAccelerationStructureCreateInfoKHR_ptr_VkAllocationCallbacks_ptr_VkAccelerationStructureKHR_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateAccelerationStructureKHR");
    VulkanDynamicAPI::vkDestroyAccelerationStructureKHR =
         (_func___cdecl_void_VkDevice_T_ptr_VkAccelerationStructureKHR_T_ptr_VkAllocationCallbacks_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroyAccelerationStructureKHR");
    VulkanDynamicAPI::vkCmdBuildAccelerationStructuresKHR =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkAccelerationStructureBuildGeometryInfoKHR_ptr_VkAccelerationStructureBuildRangeInfoKHR_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)
                      (param_1,"vkCmdBuildAccelerationStructuresKHR");
    VulkanDynamicAPI::vkGetAccelerationStructureBuildSizesKHR =
         (_func___cdecl_void_VkDevice_T_ptr_VkAccelerationStructureBuildTypeKHR_VkAccelerationStructureBuildGeometryInfoKHR_ptr_uint_ptr_VkAccelerationStructureBuildSizesInfoKHR_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)
                      (param_1,"vkGetAccelerationStructureBuildSizesKHR");
    VulkanDynamicAPI::vkGetAccelerationStructureDeviceAddressKHR =
         (_func___cdecl_ulong64_VkDevice_T_ptr_VkAccelerationStructureDeviceAddressInfoKHR_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)
                   (param_1,"vkGetAccelerationStructureDeviceAddressKHR");
    VulkanDynamicAPI::vkCmdTraceRaysKHR =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkStridedDeviceAddressRegionKHR_ptr_VkStridedDeviceAddressRegionKHR_ptr_VkStridedDeviceAddressRegionKHR_ptr_VkStridedDeviceAddressRegionKHR_ptr_uint_uint_uint
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdTraceRaysKHR");
    VulkanDynamicAPI::vkCmdTraceRaysIndirectKHR =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkStridedDeviceAddressRegionKHR_ptr_VkStridedDeviceAddressRegionKHR_ptr_VkStridedDeviceAddressRegionKHR_ptr_VkStridedDeviceAddressRegionKHR_ptr_ulong64
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdTraceRaysIndirectKHR");
    VulkanDynamicAPI::vkCmdTraceRaysIndirect2KHR =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_ulong64 *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdTraceRaysIndirect2KHR");
    VulkanDynamicAPI::vkCreateRayTracingPipelinesKHR =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkDeferredOperationKHR_T_ptr_VkPipelineCache_T_ptr_uint_VkRayTracingPipelineCreateInfoKHR_ptr_VkAllocationCallbacks_ptr_VkPipeline_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateRayTracingPipelinesKHR");
    VulkanDynamicAPI::vkGetRayTracingShaderGroupHandlesKHR =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkPipeline_T_ptr_uint_uint_ulong64_void_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetRayTracingShaderGroupHandlesKHR");
    VulkanDynamicAPI::vkCmdWriteAccelerationStructuresPropertiesKHR =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkAccelerationStructureKHR_T_ptr_ptr_VkQueryType_VkQueryPool_T_ptr_uint
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)
                      (param_1,"vkCmdWriteAccelerationStructuresPropertiesKHR");
    VulkanDynamicAPI::vkCmdCopyAccelerationStructureKHR =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkCopyAccelerationStructureInfoKHR_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdCopyAccelerationStructureKHR");
    VulkanDynamicAPI::vkCreateRenderPass2KHR =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkRenderPassCreateInfo2_ptr_VkAllocationCallbacks_ptr_VkRenderPass_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateRenderPass2KHR");
    VulkanDynamicAPI::vkCmdBeginRenderPass2KHR =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkRenderPassBeginInfo_ptr_VkSubpassBeginInfo_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdBeginRenderPass2KHR");
    VulkanDynamicAPI::vkCmdBeginRenderingKHR =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkRenderingInfo_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdBeginRenderingKHR");
    VulkanDynamicAPI::vkCmdEndRenderingKHR =
         (_func___cdecl_void_VkCommandBuffer_T_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdEndRenderingKHR");
    VulkanDynamicAPI::vkGetDeviceImageMemoryRequirementsKHR =
         (_func___cdecl_void_VkDevice_T_ptr_VkDeviceImageMemoryRequirements_ptr_VkMemoryRequirements2_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)
                      (param_1,"vkGetDeviceImageMemoryRequirementsKHR");
    VulkanDynamicAPI::vkGetDeviceBufferMemoryRequirementsKHR =
         (_func___cdecl_void_VkDevice_T_ptr_VkDeviceBufferMemoryRequirements_ptr_VkMemoryRequirements2_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)
                      (param_1,"vkGetDeviceBufferMemoryRequirementsKHR");
    VulkanDynamicAPI::vkResetQueryPoolEXT =
         (_func___cdecl_void_VkDevice_T_ptr_VkQueryPool_T_ptr_uint_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkResetQueryPoolEXT");
    VulkanDynamicAPI::vkCmdPipelineBarrier2KHR =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkDependencyInfo_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdPipelineBarrier2KHR");
    VulkanDynamicAPI::vkCmdResetEvent2KHR =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkEvent_T_ptr_ulong64 *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdResetEvent2KHR");
    VulkanDynamicAPI::vkCmdSetEvent2KHR =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkEvent_T_ptr_VkDependencyInfo_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetEvent2KHR");
    VulkanDynamicAPI::vkCmdWaitEvents2KHR =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkEvent_T_ptr_ptr_VkDependencyInfo_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdWaitEvents2KHR");
    VulkanDynamicAPI::vkQueueSubmit2KHR =
         (_func___cdecl_VkResult_VkQueue_T_ptr_uint_VkSubmitInfo2_ptr_VkFence_T_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkQueueSubmit2KHR");
    VulkanDynamicAPI::vkCreateSharedSwapchainsKHR =
         (_func___cdecl_VkResult_VkDevice_T_ptr_uint_VkSwapchainCreateInfoKHR_ptr_VkAllocationCallbacks_ptr_VkSwapchainKHR_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateSharedSwapchainsKHR");
    VulkanDynamicAPI::vkGetPhysicalDeviceCalibrateableTimeDomainsEXT =
         (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_uint_ptr_VkTimeDomainKHR_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)
                   (param_1,"vkGetPhysicalDeviceCalibrateableTimeDomainsEXT");
    VulkanDynamicAPI::vkGetCalibratedTimestampsEXT =
         (_func___cdecl_VkResult_VkDevice_T_ptr_uint_VkCalibratedTimestampInfoKHR_ptr_ulong64_ptr_ulong64_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetCalibratedTimestampsEXT");
    VulkanDynamicAPI::vkGetBufferDeviceAddressKHR =
         (_func___cdecl_ulong64_VkDevice_T_ptr_VkBufferDeviceAddressInfo_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetBufferDeviceAddressKHR");
    VulkanDynamicAPI::vkGetDescriptorSetLayoutSizeEXT =
         (_func___cdecl_void_VkDevice_T_ptr_VkDescriptorSetLayout_T_ptr_ulong64_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetDescriptorSetLayoutSizeEXT");
    VulkanDynamicAPI::vkGetDescriptorSetLayoutBindingOffsetEXT =
         (_func___cdecl_void_VkDevice_T_ptr_VkDescriptorSetLayout_T_ptr_uint_ulong64_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)
                   (param_1,"vkGetDescriptorSetLayoutBindingOffsetEXT");
    VulkanDynamicAPI::vkCmdBindDescriptorBuffersEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkDescriptorBufferBindingInfoEXT_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdBindDescriptorBuffersEXT");
    VulkanDynamicAPI::vkCmdSetDescriptorBufferOffsetsEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineBindPoint_VkPipelineLayout_T_ptr_uint_uint_uint_ptr_ulong64_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetDescriptorBufferOffsetsEXT")
    ;
    VulkanDynamicAPI::vkGetDescriptorEXT =
         (_func___cdecl_void_VkDevice_T_ptr_VkDescriptorGetInfoEXT_ptr_ulong64_void_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetDescriptorEXT");
    VulkanDynamicAPI::vkCreateDeferredOperationKHR =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkAllocationCallbacks_ptr_VkDeferredOperationKHR_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateDeferredOperationKHR");
    VulkanDynamicAPI::vkDestroyDeferredOperationKHR =
         (_func___cdecl_void_VkDevice_T_ptr_VkDeferredOperationKHR_T_ptr_VkAllocationCallbacks_ptr *
         )(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroyDeferredOperationKHR");
    VulkanDynamicAPI::vkDeferredOperationJoinKHR =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkDeferredOperationKHR_T_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDeferredOperationJoinKHR");
    VulkanDynamicAPI::vkGetDeferredOperationMaxConcurrencyKHR =
         (_func___cdecl_uint_VkDevice_T_ptr_VkDeferredOperationKHR_T_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)
                   (param_1,"vkGetDeferredOperationMaxConcurrencyKHR");
    VulkanDynamicAPI::vkGetDeferredOperationResultKHR =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkDeferredOperationKHR_T_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetDeferredOperationResultKHR");
    VulkanDynamicAPI::vkCmdDrawMeshTasksEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdDrawMeshTasksEXT");
    VulkanDynamicAPI::vkCmdDrawMeshTasksIndirectCountEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_ulong64_VkBuffer_T_ptr_ulong64_uint_uint
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdDrawMeshTasksIndirectCountEXT")
    ;
    VulkanDynamicAPI::vkCmdDrawMeshTasksIndirectEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_ulong64_uint_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdDrawMeshTasksIndirectEXT");
    VulkanDynamicAPI::vkCmdWriteBufferMarkerAMD =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineStageFlagBits_VkBuffer_T_ptr_ulong64_uint
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdWriteBufferMarkerAMD");
    VulkanDynamicAPI::vkCmdSetCheckpointNV =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_void_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetCheckpointNV");
    VulkanDynamicAPI::vkGetQueueCheckpointDataNV =
         (_func___cdecl_void_VkQueue_T_ptr_uint_ptr_VkCheckpointDataNV_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetQueueCheckpointDataNV");
    VulkanDynamicAPI::vkGetPhysicalDeviceFragmentShadingRatesKHR =
         (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_uint_ptr_VkPhysicalDeviceFragmentShadingRateKHR_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)
                      (param_1,"vkGetPhysicalDeviceFragmentShadingRatesKHR");
    VulkanDynamicAPI::vkGetDeviceFaultInfoEXT =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkDeviceFaultCountsEXT_ptr_VkDeviceFaultInfoEXT_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetDeviceFaultInfoEXT");
    VulkanDynamicAPI::vkGetPhysicalDeviceToolPropertiesEXT =
         (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_uint_ptr_VkPhysicalDeviceToolProperties_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)
                      (param_1,"vkGetPhysicalDeviceToolPropertiesEXT");
    VulkanDynamicAPI::vkGetImageSubresourceLayout2EXT =
         (_func___cdecl_void_VkDevice_T_ptr_VkImage_T_ptr_VkImageSubresource2_ptr_VkSubresourceLayout2_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetImageSubresourceLayout2EXT");
    VulkanDynamicAPI::vkGetImageSubresourceLayout2KHR =
         (_func___cdecl_void_VkDevice_T_ptr_VkImage_T_ptr_VkImageSubresource2_ptr_VkSubresourceLayout2_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetImageSubresourceLayout2KHR");
    VulkanDynamicAPI::vkGetSemaphoreCounterValueKHR =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkSemaphore_T_ptr_ulong64_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetSemaphoreCounterValueKHR");
    VulkanDynamicAPI::vkWaitSemaphoresKHR =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkSemaphoreWaitInfo_ptr_ulong64 *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkWaitSemaphoresKHR");
    VulkanDynamicAPI::vkSignalSemaphoreKHR =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkSemaphoreSignalInfo_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkSignalSemaphoreKHR");
    VulkanDynamicAPI::vkCreateShadersEXT =
         (_func___cdecl_VkResult_VkDevice_T_ptr_uint_VkShaderCreateInfoEXT_ptr_VkAllocationCallbacks_ptr_VkShaderEXT_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateShadersEXT");
    VulkanDynamicAPI::vkDestroyShaderEXT =
         (_func___cdecl_void_VkDevice_T_ptr_VkShaderEXT_T_ptr_VkAllocationCallbacks_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroyShaderEXT");
    VulkanDynamicAPI::vkGetShaderBinaryDataEXT =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkShaderEXT_T_ptr_ulong64_ptr_void_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetShaderBinaryDataEXT");
    VulkanDynamicAPI::vkCmdBindShadersEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkShaderStageFlagBits_ptr_VkShaderEXT_T_ptr_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdBindShadersEXT");
    VulkanDynamicAPI::vkCmdBindVertexBuffers2EXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_VkBuffer_T_ptr_ptr_ulong64_ptr_ulong64_ptr_ulong64_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdBindVertexBuffers2EXT");
    VulkanDynamicAPI::vkCmdSetCullModeEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetCullModeEXT");
    VulkanDynamicAPI::vkCmdSetColorBlendEnableEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_uint_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetColorBlendEnableEXT");
    VulkanDynamicAPI::vkCmdSetColorBlendEquationEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_VkColorBlendEquationEXT_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetColorBlendEquationEXT");
    VulkanDynamicAPI::vkCmdSetColorWriteMaskEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_uint_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetColorWriteMaskEXT");
    VulkanDynamicAPI::vkCmdSetFrontFaceEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkFrontFace *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetFrontFaceEXT");
    VulkanDynamicAPI::vkCmdSetPolygonModeEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkPolygonMode *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetPolygonModeEXT");
    VulkanDynamicAPI::vkCmdSetPrimitiveTopologyEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkPrimitiveTopology *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetPrimitiveTopologyEXT");
    VulkanDynamicAPI::vkCmdSetRasterizationSamplesEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkSampleCountFlagBits *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetRasterizationSamplesEXT");
    VulkanDynamicAPI::vkCmdSetScissorWithCountEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkRect2D_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetScissorWithCountEXT");
    VulkanDynamicAPI::vkCmdSetStencilOpEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkStencilOp_VkStencilOp_VkStencilOp_VkCompareOp
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetStencilOpEXT");
    VulkanDynamicAPI::vkCmdSetStencilTestEnableEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetStencilTestEnableEXT");
    VulkanDynamicAPI::vkCmdSetVertexInputEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkVertexInputBindingDescription2EXT_ptr_uint_VkVertexInputAttributeDescription2EXT_ptr
          *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetVertexInputEXT");
    VulkanDynamicAPI::vkCmdSetViewportWithCountEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkViewport_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetViewportWithCountEXT");
    VulkanDynamicAPI::vkCmdSetDepthBiasEnableEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetDepthBiasEnableEXT");
    VulkanDynamicAPI::vkCmdSetDepthBoundsTestEnableEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetDepthBoundsTestEnableEXT");
    VulkanDynamicAPI::vkCmdSetDepthClampEnableEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetDepthClampEnableEXT");
    VulkanDynamicAPI::vkCmdSetDepthCompareOpEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_VkCompareOp *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetDepthCompareOpEXT");
    VulkanDynamicAPI::vkCmdSetDepthTestEnableEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetDepthTestEnableEXT");
    VulkanDynamicAPI::vkCmdSetDepthWriteEnableEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetDepthWriteEnableEXT");
    VulkanDynamicAPI::vkCmdSetRasterizerDiscardEnableEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetRasterizerDiscardEnableEXT");
    VulkanDynamicAPI::vkCmdSetPrimitiveRestartEnableEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetPrimitiveRestartEnableEXT");
    VulkanDynamicAPI::vkCmdSetAlphaToCoverageEnableEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetAlphaToCoverageEnableEXT");
    VulkanDynamicAPI::vkCmdSetAlphaToOneEnableEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetAlphaToOneEnableEXT");
    VulkanDynamicAPI::vkCmdSetLogicOpEnableEXT =
         (_func___cdecl_void_VkCommandBuffer_T_ptr_uint *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetLogicOpEnableEXT");
    VulkanDynamicAPI::vkCopyMemoryToImageEXT =
         (_func___cdecl_VkResult_VkDevice_T_ptr_VkCopyMemoryToImageInfo_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCopyMemoryToImageEXT");
    VulkanDynamicAPI::vkTransitionImageLayoutEXT =
         (_func___cdecl_VkResult_VkDevice_T_ptr_uint_VkHostImageLayoutTransitionInfo_ptr *)
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkTransitionImageLayoutEXT");
    return bVar1;
  }
  return false;
}

// PSOBinaryCacheMatches @ 145b2b730

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

bool __cdecl
FVulkanGenericPlatform::PSOBinaryCacheMatches
          (FVulkanDevice *param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  
  if (4 < param_2->ArrayNum) {
    pFVar1 = (param_2->AllocatorInstance).Data;
    if ((((*(int *)pFVar1 == 0x20) && (*(int *)(pFVar1 + 4) == 1)) &&
        (*(uint *)(pFVar1 + 8) == (param_1->GpuProps).vendorID)) &&
       (*(uint *)(pFVar1 + 0xc) == (param_1->GpuProps).deviceID)) {
      lVar2 = *(longlong *)(param_1->GpuProps).pipelineCacheUUID - *(longlong *)(pFVar1 + 0x10);
      if (lVar2 == 0) {
        lVar2 = *(longlong *)((param_1->GpuProps).pipelineCacheUUID + 8) -
                *(longlong *)(pFVar1 + 0x18);
      }
      return lVar2 == 0;
    }
  }
  return false;
}

// Present @ 145b2dc40

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */

VkResult __cdecl FVulkanGenericPlatform::Present(VkQueue_T *param_1,VkPresentInfoKHR *param_2)

{
  VkResult VVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145b2dc47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VVar1 = (*VulkanDynamicAPI::vkQueuePresentKHR)(param_1,param_2);
  return VVar1;
}

// RestrictEnabledPhysicalDeviceFeatures @ 145b32020

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
FVulkanGenericPlatform::RestrictEnabledPhysicalDeviceFeatures
          (FVulkanPhysicalDeviceFeatures *param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  pTVar1 = CVarVulkanAllowSparseResidency.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar3 = 4;
    if (!bVar2) goto LAB_145b32055;
  }
  lVar3 = 0;
LAB_145b32055:
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar3) == 0) {
    (param_1->Core_1_0).shaderResourceResidency = 0;
    (param_1->Core_1_0).shaderResourceMinLod = 0;
    (param_1->Core_1_0).sparseBinding = 0;
    (param_1->Core_1_0).sparseResidencyBuffer = 0;
    (param_1->Core_1_0).sparseResidencyImage2D = 0;
    (param_1->Core_1_0).sparseResidencyImage3D = 0;
    (param_1->Core_1_0).sparseResidency2Samples = 0;
    (param_1->Core_1_0).sparseResidency4Samples = 0;
    (param_1->Core_1_0).sparseResidency8Samples = 0;
    (param_1->Core_1_0).sparseResidencyAliased = 0;
  }
  return;
}

// SetupFeatureLevels @ 145b33250

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl FVulkanGenericPlatform::SetupFeatureLevels(TArrayView<EShaderPlatform,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->ArrayNum != 5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ERHIFeatureLevel::Num == ShaderPlatformForFeatureLevel.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanGenericPlatform.cpp"
                       ,0x1e,
                       L"ShaderPlatformForFeatureLevel is not the right size to fit all Feature Level values."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_1->DataPtr = SP_NumPlatforms;
  if (param_1->ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1->DataPtr[1] = SP_VULKAN_PCES3_1;
  if (param_1->ArrayNum < 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1->DataPtr[2] = SP_NumPlatforms;
  if (param_1->ArrayNum < 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1->DataPtr[3] = SP_VULKAN_SM5;
  if (param_1->ArrayNum < 5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1->DataPtr[4] = SP_VULKAN_SM6;
  return;
}

// SupportsProfileChecks @ 145b352b0

bool __cdecl FVulkanGenericPlatform::SupportsProfileChecks(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  
  pTVar1 = CVarVulkanUseProfileCheck.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 4;
      goto LAB_145b352d8;
    }
  }
  lVar3 = 0;
LAB_145b352d8:
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar3) != 0) {
    pwVar4 = FCommandLine::Get();
    bVar2 = FParse::Param(pwVar4,L"SkipVulkanProfileCheck");
    if (!bVar2) {
      return true;
    }
  }
  return false;
}

