// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// FVulkanEXTCalibratedTimestampsExtension @ 145b01340

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

FVulkanEXTCalibratedTimestampsExtension * __thiscall
FVulkanEXTCalibratedTimestampsExtension::FVulkanEXTCalibratedTimestampsExtension
          (FVulkanEXTCalibratedTimestampsExtension *this,FVulkanDevice *param_1)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  *(char **)&this->field_0x8 = "VK_EXT_calibrated_timestamps";
  *(undefined4 *)&this->field_0x10 = 0xffffffff;
  *(undefined4 *)&this->field_0x14 = 0x10001;
  *(FVulkanDevice **)&this->field_0x18 = param_1;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x30 = local_38;
  *(undefined8 *)&this->field_0x38 = uStack_30;
  *(undefined8 *)&this->field_0x40 = local_28;
  *(undefined ***)this = &___7FVulkanEXTCalibratedTimestampsExtension__6B_;
  this->field_0x50 = 1;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2b800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkTimeDomainKHR": Some values do not have unique names */

void __thiscall
FVulkanEXTCalibratedTimestampsExtension::PostPhysicalDeviceFeatures
          (FVulkanEXTCalibratedTimestampsExtension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  ForElementType<VkTimeDomainKHR> FVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  _func___cdecl_VkResult_VkPhysicalDevice_T_ptr_uint_ptr_VkTimeDomainKHR_ptr *p_Var7;
  ForElementType<VkTimeDomainKHR> FVar8;
  undefined1 auStackY_78 [32];
  undefined1 local_48 [4];
  uint local_44;
  ForElementType<VkTimeDomainKHR> local_40;
  uint local_28 [2];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  local_44 = 0;
  (*VulkanDynamicAPI::vkGetPhysicalDeviceCalibrateableTimeDomainsEXT)
            (*(VkPhysicalDevice_T **)(*(longlong *)&this->field_0x18 + 0xb50),&local_44,
             (VkTimeDomainKHR *)0x0);
  uVar3 = local_44;
  local_28[0] = 0;
  local_40.SecondaryData = (ForElementType<VkTimeDomainKHR>)0x0;
  local_28[1] = 4;
  if ((int)local_44 < 1) {
    if ((int)local_44 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_44);
    }
  }
  else {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_VkTimeDomainKHR>_>
                      (4,4,local_44,&local_40,(int *)local_28,(int *)(local_28 + 1));
    FVar8 = (ForElementType<VkTimeDomainKHR>)&local_40;
    if (local_40.SecondaryData != (ForElementType<VkTimeDomainKHR>)0x0) {
      FVar8 = local_40.SecondaryData;
    }
    memset((int *)((longlong)FVar8 + (longlong)iVar5 * 4),0,(longlong)(int)uVar3 << 2);
    p_Var7 = VulkanDynamicAPI::vkGetPhysicalDeviceCalibrateableTimeDomainsEXT;
    if (0 < (int)local_28[0]) goto LAB_145b2b8f8;
  }
  p_Var7 = VulkanDynamicAPI::vkGetPhysicalDeviceCalibrateableTimeDomainsEXT;
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_145b2b8f8:
  FVar8 = (ForElementType<VkTimeDomainKHR>)&local_40;
  if (local_40.SecondaryData != (ForElementType<VkTimeDomainKHR>)0x0) {
    FVar8 = local_40.SecondaryData;
  }
  (*p_Var7)(*(VkPhysicalDevice_T **)(*(longlong *)&this->field_0x18 + 0xb50),&local_44,
            (VkTimeDomainKHR *)FVar8);
  uVar3 = local_28[0];
  uVar6 = (ulonglong)(int)local_28[0];
  FVar8 = (ForElementType<VkTimeDomainKHR>)&local_40;
  if (local_40.SecondaryData != (ForElementType<VkTimeDomainKHR>)0x0) {
    FVar8 = local_40.SecondaryData;
  }
  FVar1 = (ForElementType<VkTimeDomainKHR>)((longlong)FVar8 + uVar6 * 4);
  while( true ) {
    if ((uint)uVar6 != uVar3) {
      `TCheckedPointerIterator<enum_VkTimeDomainKHR,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_48);
      uVar6 = (ulonglong)local_28[0];
    }
    if (FVar8 == FVar1) goto LAB_145b2b96b;
    if (*(int *)FVar8 == 0) break;
    FVar8 = (ForElementType<VkTimeDomainKHR>)((longlong)FVar8 + 4);
  }
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | 0x8000;
LAB_145b2b96b:
  if (local_40.SecondaryData != (ForElementType<VkTimeDomainKHR>)0x0) {
    FMemory::Free((void *)local_40.SecondaryData);
  }
  return;
}

