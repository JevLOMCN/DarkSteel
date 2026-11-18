// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 5

// FVulkanKHRRayTracingPipelineExtension @ 145b03850

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

FVulkanKHRRayTracingPipelineExtension * __thiscall
FVulkanKHRRayTracingPipelineExtension::FVulkanKHRRayTracingPipelineExtension
          (FVulkanKHRRayTracingPipelineExtension *this,FVulkanDevice *param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  undefined1 auStack_68 [48];
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar4 = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10001;
  this->_padding_ = (longlong)"VK_KHR_ray_tracing_pipeline";
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = local_38;
  this->_padding_ = lStack_30;
  this->_padding_ = local_28;
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FVulkanKHRRayTracingPipelineExtension__6B_;
  pTVar1 = GVulkanRayTracingCVar.Ref;
  if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
    bVar2 = IsInParallelGameThread();
    if ((!bVar2) && (bVar2 = IsInGameThread(), !bVar2)) {
      lVar4 = 4;
    }
    if (*(int *)((longlong)pTVar1->ShadowedValue + lVar4) != 0) {
      pwVar3 = FCommandLine::Get();
      bVar2 = FParse::Param(pwVar3,L"noraytracing");
      if (!bVar2) {
        *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
        return this;
      }
    }
  }
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2c0f0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRRayTracingPipelineExtension::PostPhysicalDeviceFeatures
          (FVulkanKHRRayTracingPipelineExtension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  byte bVar1;
  
  if (((this->RayTracingPipelineFeatures).rayTracingPipeline == 1) &&
     ((this->RayTracingPipelineFeatures).rayTraversalPrimitiveCulling == 1)) {
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
  }
  *(byte *)&this->_padding_ = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xfffffffffffff7ff;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 0xb;
  return;
}

// PreCreateDevice @ 145b2cbc0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVulkanKHRRayTracingPipelineExtension::PreCreateDevice
          (FVulkanKHRRayTracingPipelineExtension *this,VkDeviceCreateInfo *param_1)

{
  if ((char)this->_padding_ != '\0') {
    (this->RayTracingPipelineFeatures).pNext = param_1->pNext;
    param_1->pNext = &this->RayTracingPipelineFeatures;
    GRHIGlobals.RayTracing.SupportsDispatchIndirect =
         (this->RayTracingPipelineFeatures).rayTracingPipelineTraceRaysIndirect == 1;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d660

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRRayTracingPipelineExtension::PrePhysicalDeviceFeatures
          (FVulkanKHRRayTracingPipelineExtension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->RayTracingPipelineFeatures).sType =
       VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR;
  *(undefined8 *)&(this->RayTracingPipelineFeatures).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->RayTracingPipelineFeatures).pNext + 4) = 0;
  (this->RayTracingPipelineFeatures).rayTracingPipelineShaderGroupHandleCaptureReplay = 0;
  (this->RayTracingPipelineFeatures).rayTracingPipelineShaderGroupHandleCaptureReplayMixed = 0;
  (this->RayTracingPipelineFeatures).rayTracingPipelineTraceRaysIndirect = 0;
  (this->RayTracingPipelineFeatures).rayTraversalPrimitiveCulling = 0;
  *(undefined4 *)&(this->RayTracingPipelineFeatures).field_0x24 = 0;
  (this->RayTracingPipelineFeatures).pNext = param_1->pNext;
  param_1->pNext = &this->RayTracingPipelineFeatures;
  return;
}

// PrePhysicalDeviceProperties @ 145b2dba0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRRayTracingPipelineExtension::PrePhysicalDeviceProperties
          (FVulkanKHRRayTracingPipelineExtension *this,VkPhysicalDeviceProperties2 *param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  *(undefined4 *)(lVar1 + 0x2590) = 0x3ba01579;
  *(undefined8 *)(lVar1 + 0x2594) = 0;
  *(undefined8 *)(lVar1 + 0x259c) = 0;
  *(undefined8 *)(lVar1 + 0x25a4) = 0;
  *(undefined8 *)(lVar1 + 0x25ac) = 0;
  *(undefined8 *)(lVar1 + 0x25b4) = 0;
  *(undefined4 *)(lVar1 + 0x25bc) = 0;
  *(void **)(lVar1 + 0x2598) = param_1->pNext;
  param_1->pNext = (undefined4 *)(lVar1 + 0x2590);
  return;
}

