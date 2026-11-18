// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 1

// Query @ 145b2ef80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanPhysicalDeviceFeatures::Query
          (FVulkanPhysicalDeviceFeatures *this,VkPhysicalDevice_T *param_1,uint param_2)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  VkPhysicalDeviceFeatures2 local_118;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_118.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2;
  memset(&local_118.field_0x4,0,0xec);
  local_118.pNext = &this->Core_1_1;
  ((VkPhysicalDeviceVulkan11Features *)local_118.pNext)->sType =
       VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES;
  if (0x401fff < param_2) {
    (this->Core_1_1).pNext = &this->Core_1_2;
    (this->Core_1_2).sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES;
  }
  if (0x402fff < param_2) {
    (this->Core_1_2).pNext = &this->Core_1_3;
    (this->Core_1_3).sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES;
  }
  (*VulkanDynamicAPI::vkGetPhysicalDeviceFeatures2)(param_1,&local_118);
  (this->Core_1_0).robustBufferAccess = local_118.features.robustBufferAccess;
  (this->Core_1_0).fullDrawIndexUint32 = local_118.features.fullDrawIndexUint32;
  (this->Core_1_0).imageCubeArray = local_118.features.imageCubeArray;
  (this->Core_1_0).independentBlend = local_118.features.independentBlend;
  (this->Core_1_0).geometryShader = local_118.features.geometryShader;
  (this->Core_1_0).tessellationShader = local_118.features.tessellationShader;
  (this->Core_1_0).sampleRateShading = local_118.features.sampleRateShading;
  (this->Core_1_0).dualSrcBlend = local_118.features.dualSrcBlend;
  (this->Core_1_0).logicOp = local_118.features.logicOp;
  (this->Core_1_0).multiDrawIndirect = local_118.features.multiDrawIndirect;
  (this->Core_1_0).drawIndirectFirstInstance = local_118.features.drawIndirectFirstInstance;
  (this->Core_1_0).depthClamp = local_118.features.depthClamp;
  (this->Core_1_0).depthBiasClamp = local_118.features.depthBiasClamp;
  (this->Core_1_0).fillModeNonSolid = local_118.features.fillModeNonSolid;
  (this->Core_1_0).depthBounds = local_118.features.depthBounds;
  (this->Core_1_0).wideLines = local_118.features.wideLines;
  (this->Core_1_0).largePoints = local_118.features.largePoints;
  (this->Core_1_0).alphaToOne = local_118.features.alphaToOne;
  (this->Core_1_0).multiViewport = local_118.features.multiViewport;
  (this->Core_1_0).samplerAnisotropy = local_118.features.samplerAnisotropy;
  (this->Core_1_0).textureCompressionETC2 = local_118.features.textureCompressionETC2;
  (this->Core_1_0).textureCompressionASTC_LDR = local_118.features.textureCompressionASTC_LDR;
  (this->Core_1_0).textureCompressionBC = local_118.features.textureCompressionBC;
  (this->Core_1_0).occlusionQueryPrecise = local_118.features.occlusionQueryPrecise;
  (this->Core_1_0).pipelineStatisticsQuery = local_118.features.pipelineStatisticsQuery;
  (this->Core_1_0).vertexPipelineStoresAndAtomics =
       local_118.features.vertexPipelineStoresAndAtomics;
  (this->Core_1_0).fragmentStoresAndAtomics = local_118.features.fragmentStoresAndAtomics;
  (this->Core_1_0).shaderTessellationAndGeometryPointSize =
       local_118.features.shaderTessellationAndGeometryPointSize;
  (this->Core_1_0).shaderImageGatherExtended = local_118.features.shaderImageGatherExtended;
  (this->Core_1_0).shaderStorageImageExtendedFormats =
       local_118.features.shaderStorageImageExtendedFormats;
  (this->Core_1_0).shaderStorageImageMultisample = local_118.features.shaderStorageImageMultisample;
  (this->Core_1_0).shaderStorageImageReadWithoutFormat =
       local_118.features.shaderStorageImageReadWithoutFormat;
  (this->Core_1_0).shaderStorageImageWriteWithoutFormat =
       local_118.features.shaderStorageImageWriteWithoutFormat;
  (this->Core_1_0).shaderUniformBufferArrayDynamicIndexing =
       local_118.features.shaderUniformBufferArrayDynamicIndexing;
  (this->Core_1_0).shaderSampledImageArrayDynamicIndexing =
       local_118.features.shaderSampledImageArrayDynamicIndexing;
  (this->Core_1_0).shaderStorageBufferArrayDynamicIndexing =
       local_118.features.shaderStorageBufferArrayDynamicIndexing;
  (this->Core_1_0).shaderStorageImageArrayDynamicIndexing =
       local_118.features.shaderStorageImageArrayDynamicIndexing;
  (this->Core_1_0).shaderClipDistance = local_118.features.shaderClipDistance;
  (this->Core_1_0).shaderCullDistance = local_118.features.shaderCullDistance;
  (this->Core_1_0).shaderFloat64 = local_118.features.shaderFloat64;
  (this->Core_1_0).shaderInt64 = local_118.features.shaderInt64;
  (this->Core_1_0).shaderInt16 = local_118.features.shaderInt16;
  (this->Core_1_0).shaderResourceResidency = local_118.features.shaderResourceResidency;
  (this->Core_1_0).shaderResourceMinLod = local_118.features.shaderResourceMinLod;
  (this->Core_1_0).sparseBinding = local_118.features.sparseBinding;
  (this->Core_1_0).sparseResidencyBuffer = local_118.features.sparseResidencyBuffer;
  (this->Core_1_0).sparseResidencyImage2D = local_118.features.sparseResidencyImage2D;
  (this->Core_1_0).sparseResidencyImage3D = local_118.features.sparseResidencyImage3D;
  (this->Core_1_0).sparseResidency2Samples = local_118.features.sparseResidency2Samples;
  (this->Core_1_0).sparseResidency4Samples = local_118.features.sparseResidency4Samples;
  (this->Core_1_0).sparseResidency8Samples = local_118.features.sparseResidency8Samples;
  (this->Core_1_0).sparseResidency16Samples = local_118.features.sparseResidency16Samples;
  (this->Core_1_0).sparseResidencyAliased = local_118.features.sparseResidencyAliased;
  (this->Core_1_0).variableMultisampleRate = local_118.features.variableMultisampleRate;
  (this->Core_1_0).inheritedQueries = local_118.features.inheritedQueries;
  pTVar1 = GCVarRobustBufferAccess.Ref;
  bVar2 = IsInParallelGameThread();
  if (bVar2) {
LAB_145b2f0c3:
    lVar3 = 0;
  }
  else {
    bVar2 = IsInGameThread();
    lVar3 = 4;
    if (bVar2) goto LAB_145b2f0c3;
  }
  (this->Core_1_0).robustBufferAccess =
       (uint)(0 < *(int *)((longlong)pTVar1->ShadowedValue + lVar3));
  pTVar1 = CVarVulkanAllowSparseResidency.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar3 = 4;
    if (!bVar2) goto LAB_145b2f0ec;
  }
  lVar3 = 0;
LAB_145b2f0ec:
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar3) == 0) {
    (this->Core_1_0).shaderResourceResidency = 0;
    (this->Core_1_0).shaderResourceMinLod = 0;
    (this->Core_1_0).sparseBinding = 0;
    (this->Core_1_0).sparseResidencyBuffer = 0;
    (this->Core_1_0).sparseResidencyImage2D = 0;
    (this->Core_1_0).sparseResidencyImage3D = 0;
    (this->Core_1_0).sparseResidency2Samples = 0;
    (this->Core_1_0).sparseResidency4Samples = 0;
    (this->Core_1_0).sparseResidency8Samples = 0;
    (this->Core_1_0).sparseResidencyAliased = 0;
  }
  return;
}

