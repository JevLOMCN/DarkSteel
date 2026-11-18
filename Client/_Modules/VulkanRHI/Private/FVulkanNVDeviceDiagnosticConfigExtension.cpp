// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanNVDeviceDiagnosticConfigExtension @ 145b03ec0

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

FVulkanNVDeviceDiagnosticConfigExtension * __thiscall
FVulkanNVDeviceDiagnosticConfigExtension::FVulkanNVDeviceDiagnosticConfigExtension
          (FVulkanNVDeviceDiagnosticConfigExtension *this,FVulkanDevice *param_1)

{
  bool bVar1;
  undefined1 auStack_68 [48];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  *(char **)&this->field_0x8 = "VK_NV_device_diagnostics_config";
  *(undefined4 *)&this->field_0x14 = 0x10001;
  *(undefined4 *)&this->field_0x10 = 0xffffffff;
  *(FVulkanDevice **)&this->field_0x18 = param_1;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x30 = local_38;
  *(undefined8 *)&this->field_0x38 = uStack_30;
  *(undefined8 *)&this->field_0x40 = local_28;
  this->field_0x50 = 1;
  *(undefined ***)this = &___7FVulkanNVDeviceDiagnosticConfigExtension__6B_;
  if (((this->field_0x14 != '\0') && (bVar1 = UE::RHI::UseGPUCrashDebugging(), bVar1)) &&
     (bVar1 = UE::RHICore::AllowVendorDevice(), bVar1)) {
    this->field_0x14 = 1;
    return this;
  }
  this->field_0x14 = 0;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2c240

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanNVDeviceDiagnosticConfigExtension::PostPhysicalDeviceFeatures
          (FVulkanNVDeviceDiagnosticConfigExtension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  bool bVar1;
  
  bVar1 = (this->DeviceDiagnosticsConfigFeaturesNV).diagnosticsConfig == 1;
  this->field_0x50 = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xfffffffff7ffffff;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 0x1b;
  return;
}

// PreCreateDevice @ 145b2cd00

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanNVDeviceDiagnosticConfigExtension::PreCreateDevice
          (FVulkanNVDeviceDiagnosticConfigExtension *this,VkDeviceCreateInfo *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  if (this->field_0x50 != '\0') {
    (this->DeviceDiagnosticsConfigFeaturesNV).pNext = param_1->pNext;
    param_1->pNext = &this->DeviceDiagnosticsConfigFeaturesNV;
    (this->DeviceDiagnosticsConfigCreateInfoNV).sType =
         VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV;
    *(undefined8 *)&(this->DeviceDiagnosticsConfigCreateInfoNV).field_0x4 = 0;
    *(undefined8 *)((longlong)&(this->DeviceDiagnosticsConfigCreateInfoNV).pNext + 4) = 0;
    *(undefined4 *)&(this->DeviceDiagnosticsConfigCreateInfoNV).field_0x14 = 0;
    (this->DeviceDiagnosticsConfigCreateInfoNV).flags = 7;
    (this->DeviceDiagnosticsConfigCreateInfoNV).pNext = param_1->pNext;
    param_1->pNext = &this->DeviceDiagnosticsConfigCreateInfoNV;
    UE::RHICore::Nvidia::Aftermath::InitializeBeforeDeviceCreation(true);
    local_10 = 0;
    local_28 = &___7__TFunction_OwnedObject_P6AXMI_Z_00_0A__Function_Private_Core_UE__6B_;
    local_20 = AftermathLateAssociate;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(float,unsigned_int),void,float,unsigned_int>::
                  Call;
    UE::RHICore::Nvidia::Aftermath::SetLateShaderAssociateCallback
              ((TUniqueFunction<void___cdecl(float,unsigned_int)> *)local_38);
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d7b0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanNVDeviceDiagnosticConfigExtension::PrePhysicalDeviceFeatures
          (FVulkanNVDeviceDiagnosticConfigExtension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->DeviceDiagnosticsConfigFeaturesNV).sType =
       VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV;
  *(undefined8 *)&(this->DeviceDiagnosticsConfigFeaturesNV).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->DeviceDiagnosticsConfigFeaturesNV).pNext + 4) = 0;
  *(undefined4 *)&(this->DeviceDiagnosticsConfigFeaturesNV).field_0x14 = 0;
  (this->DeviceDiagnosticsConfigFeaturesNV).pNext = param_1->pNext;
  param_1->pNext = &this->DeviceDiagnosticsConfigFeaturesNV;
  return;
}

