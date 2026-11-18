// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 3

// FVulkanKHRDriverPropertiesExtension @ 145b03110

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

FVulkanKHRDriverPropertiesExtension * __thiscall
FVulkanKHRDriverPropertiesExtension::FVulkanKHRDriverPropertiesExtension
          (FVulkanKHRDriverPropertiesExtension *this,FVulkanDevice *param_1)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  *(char **)&this->field_0x8 = "VK_KHR_driver_properties";
  *(undefined4 *)&this->field_0x10 = 0x402000;
  *(undefined4 *)&this->field_0x14 = 0x10001;
  *(FVulkanDevice **)&this->field_0x18 = param_1;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x30 = local_38;
  *(undefined8 *)&this->field_0x38 = uStack_30;
  *(undefined8 *)&this->field_0x40 = local_28;
  *(undefined ***)this = &___7FVulkanKHRDriverPropertiesExtension__6B_;
  this->field_0x50 = 1;
  return this;
}

// PostPhysicalDeviceProperties @ 145b2c410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVulkanKHRDriverPropertiesExtension::PostPhysicalDeviceProperties
          (FVulkanKHRDriverPropertiesExtension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  char *pcVar1;
  longlong lVar2;
  size_t sVar3;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  lVar2 = *(longlong *)&this->field_0x18;
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`public:_virtual_void___cdecl_FVulkanKHRDriverPropertiesExtension::PostPhysicalDeviceProperties(FOptionalVulkanDeviceExtensions&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  if (3 < (byte)LogVulkanRHI._0_1_) {
    pcVar1 = (char *)(lVar2 + 0x21fc);
    local_138._padding_ = 0;
    if (pcVar1 == (char *)0x0) {
      local_138.Ptr = (wchar_t *)0x0;
      local_138.StringLength = 0;
    }
    else {
      sVar3 = strlen(pcVar1);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,pcVar1,(int)sVar3,Yes);
    }
    UE::Logging::Private::BasicLog<4>
              (&`public:_virtual_void___cdecl_FVulkanKHRDriverPropertiesExtension::PostPhysicalDeviceProperties(FOptionalVulkanDeviceExtensions&___ptr64)___ptr64'
                ::__l21::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (3 < (byte)LogVulkanRHI._0_1_) {
      pcVar1 = (char *)(lVar2 + 0x22fc);
      local_138._padding_ = 0;
      if (pcVar1 == (char *)0x0) {
        local_138.Ptr = (wchar_t *)0x0;
        local_138.StringLength = 0;
      }
      else {
        sVar3 = strlen(pcVar1);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,pcVar1,(int)sVar3,Yes);
      }
      UE::Logging::Private::BasicLog<4>
                (&`public:_virtual_void___cdecl_FVulkanKHRDriverPropertiesExtension::PostPhysicalDeviceProperties(FOptionalVulkanDeviceExtensions&___ptr64)___ptr64'
                  ::__l39::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// PrePhysicalDeviceProperties @ 145b2da70

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRDriverPropertiesExtension::PrePhysicalDeviceProperties
          (FVulkanKHRDriverPropertiesExtension *this,VkPhysicalDeviceProperties2 *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this->field_0x18;
  *(undefined4 *)(lVar1 + 0x21e8) = 0x3b9dc7a0;
  memset((void *)(lVar1 + 0x21ec),0,0x214);
  *(void **)(lVar1 + 0x21f0) = param_1->pNext;
  param_1->pNext = (undefined4 *)(lVar1 + 0x21e8);
  return;
}

