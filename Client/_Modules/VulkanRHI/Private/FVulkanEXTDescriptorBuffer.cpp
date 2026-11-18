// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 5

// FVulkanEXTDescriptorBuffer @ 145b013c0

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

FVulkanEXTDescriptorBuffer * __thiscall
FVulkanEXTDescriptorBuffer::FVulkanEXTDescriptorBuffer
          (FVulkanEXTDescriptorBuffer *this,FVulkanDevice *param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  undefined1 auStack_68 [48];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar3 = 0;
  *(undefined4 *)&this->field_0x14 = 0x10001;
  *(char **)&this->field_0x8 = "VK_EXT_descriptor_buffer";
  *(undefined4 *)&this->field_0x10 = 0xffffffff;
  *(FVulkanDevice **)&this->field_0x18 = param_1;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x30 = local_38;
  *(undefined8 *)&this->field_0x38 = uStack_30;
  *(undefined8 *)&this->field_0x40 = local_28;
  this->field_0x50 = 1;
  *(undefined ***)this = &___7FVulkanEXTDescriptorBuffer__6B_;
  pTVar1 = GVulkanAllowSync2BarriersCVar.Ref;
  if (this->field_0x14 != '\0') {
    bVar2 = IsInParallelGameThread();
    if ((!bVar2) && (bVar2 = IsInGameThread(), !bVar2)) {
      lVar3 = 4;
    }
    if (*(int *)((longlong)pTVar1->ShadowedValue + lVar3) != 0) {
      this->field_0x14 = 1;
      return this;
    }
  }
  this->field_0x14 = 0;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2b9b0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTDescriptorBuffer::PostPhysicalDeviceFeatures
          (FVulkanEXTDescriptorBuffer *this,FOptionalVulkanDeviceExtensions *param_1)

{
  bool bVar1;
  
  bVar1 = (this->DescriptorBufferFeatures).descriptorBuffer == 1;
  this->field_0x50 = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xfffffffffffeffff;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 0x10;
  return;
}

// PreCreateDevice @ 145b2c630

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVulkanEXTDescriptorBuffer::PreCreateDevice
          (FVulkanEXTDescriptorBuffer *this,VkDeviceCreateInfo *param_1)

{
  if (this->field_0x50 != '\0') {
    (this->DescriptorBufferFeatures).pNext = param_1->pNext;
    param_1->pNext = &this->DescriptorBufferFeatures;
    if (3 < (byte)LogVulkanRHI._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`public:_virtual_void___cdecl_FVulkanEXTDescriptorBuffer::PreCreateDevice(VkDeviceCreateInfo&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2cfb0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTDescriptorBuffer::PrePhysicalDeviceFeatures
          (FVulkanEXTDescriptorBuffer *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->DescriptorBufferFeatures).sType =
       VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT;
  *(undefined8 *)&(this->DescriptorBufferFeatures).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->DescriptorBufferFeatures).pNext + 4) = 0;
  (this->DescriptorBufferFeatures).descriptorBufferCaptureReplay = 0;
  (this->DescriptorBufferFeatures).descriptorBufferImageLayoutIgnored = 0;
  (this->DescriptorBufferFeatures).descriptorBufferPushDescriptors = 0;
  (this->DescriptorBufferFeatures).pNext = param_1->pNext;
  param_1->pNext = &this->DescriptorBufferFeatures;
  return;
}

// PrePhysicalDeviceProperties @ 145b2d880

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTDescriptorBuffer::PrePhysicalDeviceProperties
          (FVulkanEXTDescriptorBuffer *this,VkPhysicalDeviceProperties2 *param_1)

{
  longlong lVar1;
  
  if (this->field_0x50 != '\0') {
    lVar1 = *(longlong *)&this->field_0x18;
    *(undefined4 *)(lVar1 + 0x2430) = 0x3b9f9c60;
    memset((void *)(lVar1 + 0x2434),0,0xfc);
    *(void **)(lVar1 + 0x2438) = param_1->pNext;
    param_1->pNext = (undefined4 *)(lVar1 + 0x2430);
  }
  return;
}

