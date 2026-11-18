// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 3

// AddEnabledDeviceExtensionsAndLayers @ 145b0a710

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

void __cdecl
IVulkanDynamicRHI::AddEnabledDeviceExtensionsAndLayers
          (TArrayView<char_const_*_const,int> *param_1,TArrayView<char_const_*_const,int> *param_2)

{
  int iVar1;
  char **ppcVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  if (GVulkanRHI != (FVulkanDynamicRHI *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GVulkanRHI",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanLayers.cpp"
                       ,0x130,
                       L"AddEnabledDeviceExtensionsAndLayers should be called before the VulkanRHI has been created"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  ppcVar2 = param_1->DataPtr;
  if ((ppcVar2 == (char **)0x0) && (iVar1 != 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar1,&FVulkanDeviceExtension::ExternalExtensions.AllocatorInstance,
                     &FVulkanDeviceExtension::ExternalExtensions.ArrayNum,
                     &FVulkanDeviceExtension::ExternalExtensions.ArrayMax);
  if (iVar1 != 0) {
    memcpy(FVulkanDeviceExtension::ExternalExtensions.AllocatorInstance.Data + (longlong)iVar5 * 8,
           ppcVar2,(longlong)iVar1 << 3);
  }
  ppcVar2 = param_2->DataPtr;
  iVar1 = param_2->ArrayNum;
  if ((ppcVar2 == (char **)0x0) && (iVar1 != 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar1,&FVulkanDeviceSetupHelper::ExternalLayers.AllocatorInstance,
                     &FVulkanDeviceSetupHelper::ExternalLayers.ArrayNum,
                     &FVulkanDeviceSetupHelper::ExternalLayers.ArrayMax);
  if (iVar1 != 0) {
    memcpy(FVulkanDeviceSetupHelper::ExternalLayers.AllocatorInstance.Data + (longlong)iVar5 * 8,
           ppcVar2,(longlong)iVar1 << 3);
  }
  return;
}

// AddEnabledInstanceExtensionsAndLayers @ 145b0a8e0

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

void __cdecl
IVulkanDynamicRHI::AddEnabledInstanceExtensionsAndLayers
          (TArrayView<char_const_*_const,int> *param_1,TArrayView<char_const_*_const,int> *param_2)

{
  int iVar1;
  char **ppcVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  if (GVulkanRHI != (FVulkanDynamicRHI *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GVulkanRHI",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanLayers.cpp"
                       ,0x129,
                       L"AddEnabledInstanceExtensionsAndLayers should be called before the VulkanRHI has been created"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  ppcVar2 = param_1->DataPtr;
  if ((ppcVar2 == (char **)0x0) && (iVar1 != 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar1,&FVulkanInstanceExtension::ExternalExtensions.AllocatorInstance,
                     &FVulkanInstanceExtension::ExternalExtensions.ArrayNum,
                     &FVulkanInstanceExtension::ExternalExtensions.ArrayMax);
  if (iVar1 != 0) {
    memcpy(FVulkanInstanceExtension::ExternalExtensions.AllocatorInstance.Data + (longlong)iVar5 * 8
           ,ppcVar2,(longlong)iVar1 << 3);
  }
  ppcVar2 = param_2->DataPtr;
  iVar1 = param_2->ArrayNum;
  if ((ppcVar2 == (char **)0x0) && (iVar1 != 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar1,&FVulkanIntanceSetupHelper::ExternalLayers.AllocatorInstance,
                     &FVulkanIntanceSetupHelper::ExternalLayers.ArrayNum,
                     &FVulkanIntanceSetupHelper::ExternalLayers.ArrayMax);
  if (iVar1 != 0) {
    memcpy(FVulkanIntanceSetupHelper::ExternalLayers.AllocatorInstance.Data + (longlong)iVar5 * 8,
           ppcVar2,(longlong)iVar1 << 3);
  }
  return;
}

// GetInterfaceType @ 145babf60

ERHIInterfaceType __thiscall IVulkanDynamicRHI::GetInterfaceType(IVulkanDynamicRHI *this)

{
  return Vulkan;
}

