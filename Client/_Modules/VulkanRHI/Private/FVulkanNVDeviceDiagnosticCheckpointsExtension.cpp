// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// FVulkanNVDeviceDiagnosticCheckpointsExtension @ 145b03e20

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

FVulkanNVDeviceDiagnosticCheckpointsExtension * __thiscall
FVulkanNVDeviceDiagnosticCheckpointsExtension::FVulkanNVDeviceDiagnosticCheckpointsExtension
          (FVulkanNVDeviceDiagnosticCheckpointsExtension *this,FVulkanDevice *param_1)

{
  bool bVar1;
  undefined1 auStack_68 [48];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  *(char **)&this->field_0x8 = "VK_NV_device_diagnostic_checkpoints";
  *(undefined4 *)&this->field_0x14 = 0x10001;
  *(undefined4 *)&this->field_0x10 = 0xffffffff;
  *(FVulkanDevice **)&this->field_0x18 = param_1;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x30 = local_38;
  *(undefined8 *)&this->field_0x38 = uStack_30;
  *(undefined8 *)&this->field_0x40 = local_28;
  this->field_0x50 = 1;
  *(undefined ***)this = &___7FVulkanNVDeviceDiagnosticCheckpointsExtension__6B_;
  if (((this->field_0x14 != '\0') && (bVar1 = UE::RHI::UseGPUCrashDebugging(), bVar1)) &&
     (bVar1 = UE::RHICore::AllowVendorDevice(), bVar1)) {
    this->field_0x14 = 1;
    return this;
  }
  this->field_0x14 = 0;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2c230

void __thiscall
FVulkanNVDeviceDiagnosticCheckpointsExtension::PostPhysicalDeviceFeatures
          (FVulkanNVDeviceDiagnosticCheckpointsExtension *this,
          FOptionalVulkanDeviceExtensions *param_1)

{
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | 0x4000000;
  return;
}

