// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 5

// FVulkanEXTMeshShaderExtension @ 145b01c50

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

FVulkanEXTMeshShaderExtension * __thiscall
FVulkanEXTMeshShaderExtension::FVulkanEXTMeshShaderExtension
          (FVulkanEXTMeshShaderExtension *this,FVulkanDevice *param_1)

{
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  
  this->_padding_ = (longlong)"VK_EXT_mesh_shader";
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10001;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = local_38;
  this->_padding_ = lStack_30;
  this->_padding_ = local_28;
  this->_padding_ = (longlong)&___7FVulkanEXTMeshShaderExtension__6B_;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2bc50

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTMeshShaderExtension::PostPhysicalDeviceFeatures
          (FVulkanEXTMeshShaderExtension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  byte bVar1;
  
  if (((this->MeshShaderFeatures).meshShader == 1) &&
     ((this->MeshShaderFeatures).multiviewMeshShader == 1)) {
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
  }
  *(byte *)&this->_padding_ = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xfffffffffffbffff;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 0x12;
  return;
}

// PreCreateDevice @ 145b2c880

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTMeshShaderExtension::PreCreateDevice
          (FVulkanEXTMeshShaderExtension *this,VkDeviceCreateInfo *param_1)

{
  if ((char)this->_padding_ != '\0') {
    if (*(int *)(this->_padding_ + 0x25d4) == 0) {
      (this->MeshShaderFeatures).primitiveFragmentShadingRateMeshShader = 0;
    }
    (this->MeshShaderFeatures).pNext = param_1->pNext;
    param_1->pNext = &this->MeshShaderFeatures;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d230

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTMeshShaderExtension::PrePhysicalDeviceFeatures
          (FVulkanEXTMeshShaderExtension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->MeshShaderFeatures).sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT;
  *(undefined8 *)&(this->MeshShaderFeatures).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->MeshShaderFeatures).pNext + 4) = 0;
  (this->MeshShaderFeatures).meshShader = 0;
  (this->MeshShaderFeatures).multiviewMeshShader = 0;
  (this->MeshShaderFeatures).primitiveFragmentShadingRateMeshShader = 0;
  (this->MeshShaderFeatures).meshShaderQueries = 0;
  *(undefined4 *)&(this->MeshShaderFeatures).field_0x24 = 0;
  (this->MeshShaderFeatures).pNext = param_1->pNext;
  param_1->pNext = &this->MeshShaderFeatures;
  return;
}

// PrePhysicalDeviceProperties @ 145b2d990

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTMeshShaderExtension::PrePhysicalDeviceProperties
          (FVulkanEXTMeshShaderExtension *this,VkPhysicalDeviceProperties2 *param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  *(undefined4 *)(lVar1 + 0x2660) = 0x3b9fcb41;
  *(undefined8 *)(lVar1 + 0x2664) = 0;
  *(undefined8 *)(lVar1 + 0x266c) = 0;
  *(undefined8 *)(lVar1 + 0x2674) = 0;
  *(undefined8 *)(lVar1 + 0x267c) = 0;
  *(undefined8 *)(lVar1 + 0x2684) = 0;
  *(undefined8 *)(lVar1 + 0x268c) = 0;
  *(undefined8 *)(lVar1 + 0x2694) = 0;
  *(undefined8 *)(lVar1 + 0x269c) = 0;
  *(undefined8 *)(lVar1 + 0x26a4) = 0;
  *(undefined8 *)(lVar1 + 0x26ac) = 0;
  *(undefined8 *)(lVar1 + 0x26b4) = 0;
  *(undefined8 *)(lVar1 + 0x26bc) = 0;
  *(undefined8 *)(lVar1 + 0x26c4) = 0;
  *(undefined8 *)(lVar1 + 0x26cc) = 0;
  *(undefined8 *)(lVar1 + 0x26d4) = 0;
  *(undefined8 *)(lVar1 + 0x26dc) = 0;
  *(undefined8 *)(lVar1 + 0x26e4) = 0;
  *(undefined8 *)(lVar1 + 0x26ec) = 0;
  *(undefined8 *)(lVar1 + 0x26f4) = 0;
  *(undefined4 *)(lVar1 + 0x26fc) = 0;
  *(void **)(lVar1 + 0x2668) = param_1->pNext;
  param_1->pNext = (undefined4 *)(lVar1 + 0x2660);
  return;
}

