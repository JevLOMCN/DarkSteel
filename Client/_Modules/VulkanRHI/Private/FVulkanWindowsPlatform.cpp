// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 8

// <lambda_invoker_cdecl> @ 145bc73a0

void __cdecl
`FVulkanWindowsPlatform::GetDeviceExtensions'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FOptionalVulkanDeviceExtensions *param_1)

{
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | 0x100;
  return;
}

// CreateSurface @ 145bcb770

/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
FVulkanWindowsPlatform::CreateSurface
          (FVulkanGenericPlatformWindowContext *param_1,VkInstance_T *param_2,
          VkSurfaceKHR_T **param_3)

{
  VkResult VVar1;
  HMODULE pHVar2;
  VkWin32SurfaceCreateInfoKHR local_38;
  
  local_38.sType = VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR;
  local_38.hwnd._4_4_ = 0;
  local_38._4_8_ = 0;
  local_38._12_8_ = 0;
  local_38._20_4_ = 0;
  local_38.hinstance._0_4_ = 0;
  local_38.hinstance._4_4_ = 0;
  local_38.hwnd._0_4_ = 0;
  pHVar2 = GetModuleHandleW((LPCWSTR)0x0);
  local_38.hinstance._0_4_ = SUB84(pHVar2,0);
  local_38.hinstance._4_4_ = (undefined4)((ulonglong)pHVar2 >> 0x20);
  local_38.hwnd._0_4_ = SUB84(param_1->WindowHandle,0);
  local_38.hwnd._4_4_ = (undefined4)((ulonglong)param_1->WindowHandle >> 0x20);
  VVar1 = (*VulkanDynamicAPI::vkCreateWin32SurfaceKHR)
                    (param_2,&local_38,&VulkanRHI::GAllocationCallbacks,param_3);
  if (VVar1 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar1,
               "VulkanDynamicAPI::vkCreateWin32SurfaceKHR(Instance, &SurfaceCreateInfo, VULKAN_CPU_ALLOCATOR, OutSurface)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\Windows\\VulkanWindowsPlatform.cpp"
               ,0xbd);
  }
  return;
}

// FreeVulkanLibrary @ 145bcccc0

void __cdecl FVulkanWindowsPlatform::FreeVulkanLibrary(void)

{
  if (GVulkanDLLModule != (HINSTANCE__ *)0x0) {
    FreeLibrary((HMODULE)GVulkanDLLModule);
    GVulkanDLLModule = (HINSTANCE__ *)0x0;
  }
  bAttemptedLoad = false;
  return;
}

// GetDeviceExtensions @ 145bcd7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145bcd9b7) */
/* WARNING: Removing unreachable block (ram,0x000145bcd9c2) */
/* WARNING: Removing unreachable block (ram,0x000145bcd9c6) */
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
FVulkanWindowsPlatform::GetDeviceExtensions
          (FVulkanDevice *param_1,
          TArray<TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  undefined ***pppuVar6;
  code *pcVar7;
  undefined1 auStack_108 [32];
  code **local_e8;
  FScriptContainerElement *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  code *local_b8;
  code *local_b0;
  undefined4 local_a8;
  code *local_98;
  undefined **local_88;
  code *pcStack_80;
  undefined8 local_78;
  undefined ***local_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  pcVar7 = (code *)0x0;
  local_a8 = 0;
  pcVar4 = ::operator_new(0x60);
  local_b8 = pcVar7;
  pcVar5 = pcVar7;
  if (pcVar4 != (code *)0x0) {
    local_70 = (undefined ***)0x0;
    local_88 = &
               ___7__TFunction_OwnedObject_P6AXAEAUFOptionalVulkanDeviceExtensions___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    pcStack_80 = `FVulkanWindowsPlatform::GetDeviceExtensions'::__l2::<lambda_1>::
                 <lambda_invoker_cdecl>;
    *(char **)(pcVar4 + 8) = "VK_EXT_full_screen_exclusive";
    *(undefined4 *)(pcVar4 + 0x10) = 0xffffffff;
    *(undefined4 *)(pcVar4 + 0x14) = 0x10001;
    *(undefined ***)pcVar4 = &___7FVulkanDeviceExtension__6B_;
    *(FVulkanDevice **)(pcVar4 + 0x18) = param_1;
    *(code **)(pcVar4 + 0x20) =
         UE::Core::Private::Function::
         TFunctionRefCaller<void_(__cdecl*)(FOptionalVulkanDeviceExtensions_&),void,FOptionalVulkanDeviceExtensions_&>
         ::Call;
    *(undefined8 *)(pcVar4 + 0x48) = 0;
    *(undefined4 *)(pcVar4 + 0x30) = 0x510c21f0;
    *(undefined4 *)(pcVar4 + 0x34) = 1;
    *(undefined4 *)(pcVar4 + 0x38) = 0x45bc73a0;
    *(undefined4 *)(pcVar4 + 0x3c) = 1;
    *(undefined8 *)(pcVar4 + 0x40) = local_78;
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<void_(__cdecl*)(FOptionalVulkanDeviceExtensions_&),void,FOptionalVulkanDeviceExtensions_&>
               ::Call;
    if (*(longlong *)(pcVar4 + 0x20) != 0) {
      local_98 = pcVar7;
    }
    pcVar4[0x50] = (code)0x1;
    local_b8 = pcVar4;
    pcVar5 = (code *)&DAT_00000001;
  }
  if ((pcVar5 != (code *)0x0) && (local_98 != (code *)0x0)) {
    pppuVar6 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar6 = local_70;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  pFVar1 = (param_2->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_b8) &&
     ((FScriptContainerElement *)&local_b8 < pFVar1 + (longlong)param_2->ArrayMax * 8)) {
    local_d0 = (longlong)param_2->ArrayNum;
    local_c8 = 8;
    local_e8 = &local_b8;
    local_e0 = pFVar1;
    local_d8 = (longlong)param_2->ArrayMax;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  *(code **)((param_2->AllocatorInstance).Data + (longlong)iVar3 * 8) = local_b8;
  local_b8 = (code *)0x0;
  pcVar5 = ::operator_new(0x60);
  local_b0 = pcVar7;
  if (pcVar5 != (code *)0x0) {
    local_68 = 0;
    local_40 = 0;
    *(char **)(pcVar5 + 8) = "VK_KHR_external_memory_win32";
    *(undefined4 *)(pcVar5 + 0x10) = 0xffffffff;
    *(undefined4 *)(pcVar5 + 0x14) = 1;
    *(undefined ***)pcVar5 = &___7FVulkanDeviceExtension__6B_;
    *(FVulkanDevice **)(pcVar5 + 0x18) = param_1;
    *(undefined8 *)(pcVar5 + 0x20) = 0;
    *(undefined8 *)(pcVar5 + 0x48) = 0;
    *(undefined4 *)(pcVar5 + 0x30) = local_58;
    *(undefined4 *)(pcVar5 + 0x34) = uStack_54;
    *(undefined4 *)(pcVar5 + 0x38) = uStack_50;
    *(undefined4 *)(pcVar5 + 0x3c) = uStack_4c;
    *(undefined8 *)(pcVar5 + 0x40) = local_48;
    pcVar5[0x50] = (code)0x1;
    local_b0 = pcVar5;
  }
  pFVar1 = (param_2->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_b0) &&
     ((FScriptContainerElement *)&local_b0 < pFVar1 + (longlong)param_2->ArrayMax * 8)) {
    local_d0 = (longlong)param_2->ArrayNum;
    local_c8 = 8;
    local_e8 = &local_b0;
    local_e0 = pFVar1;
    local_d8 = (longlong)param_2->ArrayMax;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  *(code **)((param_2->AllocatorInstance).Data + (longlong)iVar3 * 8) = local_b0;
  return;
}

// GetInstanceExtensions @ 145bcdba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145bcdd75) */
/* WARNING: Removing unreachable block (ram,0x000145bcdc57) */
/* WARNING: Removing unreachable block (ram,0x000145bcdc62) */
/* WARNING: Removing unreachable block (ram,0x000145bcdc66) */
/* WARNING: Removing unreachable block (ram,0x000145bcdd80) */
/* WARNING: Removing unreachable block (ram,0x000145bcdd84) */

void __cdecl
FVulkanWindowsPlatform::GetInstanceExtensions
          (TArray<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,TSizedDefaultAllocator<32>_>
           *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 auStack_f8 [32];
  undefined8 **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_98 = 0;
  puVar5 = ::operator_new(0x50);
  local_a8 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    local_88 = 0;
    local_60 = 0;
    puVar5[1] = "VK_KHR_win32_surface";
    *(undefined4 *)(puVar5 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar5 + 0x14) = 0x10001;
    *puVar5 = &___7FVulkanInstanceExtension__6B_;
    puVar5[4] = 0;
    puVar5[9] = 0;
    *(undefined4 *)(puVar5 + 6) = local_78;
    *(undefined4 *)((longlong)puVar5 + 0x34) = uStack_74;
    *(undefined4 *)(puVar5 + 7) = uStack_70;
    *(undefined4 *)((longlong)puVar5 + 0x3c) = uStack_6c;
    puVar5[8] = local_68;
    local_a8 = puVar5;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_a8) &&
     ((FScriptContainerElement *)&local_a8 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    local_c0 = (longlong)param_1->ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = pFVar1;
    local_c8 = (longlong)param_1->ArrayMax;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(undefined8 **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_a8;
  local_a8 = (undefined8 *)0x0;
  puVar5 = ::operator_new(0x50);
  local_a0 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    local_58 = 0;
    local_30 = 0;
    puVar5[1] = "VK_KHR_get_surface_capabilities2";
    *(undefined4 *)(puVar5 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar5 + 0x14) = 0x10001;
    *puVar5 = &___7FVulkanInstanceExtension__6B_;
    puVar5[4] = 0;
    puVar5[9] = 0;
    *(undefined4 *)(puVar5 + 6) = local_48;
    *(undefined4 *)((longlong)puVar5 + 0x34) = uStack_44;
    *(undefined4 *)(puVar5 + 7) = uStack_40;
    *(undefined4 *)((longlong)puVar5 + 0x3c) = uStack_3c;
    puVar5[8] = local_38;
    local_a0 = puVar5;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_a0) &&
     ((FScriptContainerElement *)&local_a0 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    local_c0 = (longlong)param_1->ArrayNum;
    local_b8 = 8;
    local_d8 = &local_a0;
    local_d0 = pFVar1;
    local_c8 = (longlong)param_1->ArrayMax;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(undefined8 **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_a0;
  return;
}

// LoadVulkanInstanceFunctions @ 145bcfc50

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

bool __cdecl FVulkanWindowsPlatform::LoadVulkanInstanceFunctions(VkInstance_T *param_1)

{
  bool bVar1;
  
  if (GVulkanDLLModule != (HINSTANCE__ *)0x0) {
    GGetInstanceProcAddr =
         FWindowsPlatformProcess::GetDllExport(GVulkanDLLModule,L"vkGetInstanceProcAddr");
    if (GGetInstanceProcAddr !=
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
           (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceFormatProperties")
      ;
      VulkanDynamicAPI::vkGetPhysicalDeviceFormatProperties2 =
           (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkFormat_VkFormatProperties2_ptr *)
           (*VulkanDynamicAPI::vkGetInstanceProcAddr)
                     (param_1,"vkGetPhysicalDeviceFormatProperties2");
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
           (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceMemoryProperties")
      ;
      VulkanDynamicAPI::vkGetPhysicalDeviceProperties2 =
           (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkPhysicalDeviceProperties2_ptr *)
           (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceProperties2");
      VulkanDynamicAPI::vkGetPhysicalDeviceFeatures2 =
           (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkPhysicalDeviceFeatures2_ptr *)
           (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetPhysicalDeviceFeatures2");
      VulkanDynamicAPI::vkGetPhysicalDeviceMemoryProperties2 =
           (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkPhysicalDeviceMemoryProperties2_ptr *)
           (*VulkanDynamicAPI::vkGetInstanceProcAddr)
                     (param_1,"vkGetPhysicalDeviceMemoryProperties2");
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
            *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)
                        (param_1,"vkGetImageSparseMemoryRequirements");
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
           (_func___cdecl_void_VkDevice_T_ptr_VkDescriptorSetLayout_T_ptr_VkAllocationCallbacks_ptr
            *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroyDescriptorSetLayout");
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
           (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkClearAttachment_ptr_uint_VkClearRect_ptr
            *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdClearAttachments");
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
           (_func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineStageFlagBits_VkQueryPool_T_ptr_uint
            *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdWriteTimestamp");
      VulkanDynamicAPI::vkCmdCopyQueryPoolResults =
           (_func___cdecl_void_VkCommandBuffer_T_ptr_VkQueryPool_T_ptr_uint_uint_VkBuffer_T_ptr_ulong64_ulong64_uint
            *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdCopyQueryPoolResults");
      VulkanDynamicAPI::vkCmdPushConstants =
           (_func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineLayout_T_ptr_uint_uint_uint_void_ptr
            *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdPushConstants");
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
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510dd2c8,
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
           (_func___cdecl_void_VkPhysicalDevice_T_ptr_uint_ptr_VkQueueFamilyProperties2_ptr *)0x0)
         && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
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
           (_func___cdecl_void_VkPhysicalDevice_T_ptr_VkPhysicalDeviceMemoryProperties2_ptr *)0x0)
         && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
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
           (_func___cdecl_void_VkDevice_T_ptr_VkDeviceMemory_T_ptr_VkAllocationCallbacks_ptr *)0x0)
         && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
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
           (_func___cdecl_VkResult_VkDevice_T_ptr_VkImage_T_ptr_VkDeviceMemory_T_ptr_ulong64 *)0x0)
         && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
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
      if ((VulkanDynamicAPI::vkSetEvent ==
           (_func___cdecl_VkResult_VkDevice_T_ptr_VkEvent_T_ptr *)0x0) &&
         (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
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
           (_func___cdecl_void_VkDevice_T_ptr_VkShaderModule_T_ptr_VkAllocationCallbacks_ptr *)0x0)
         && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
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
           (_func___cdecl_VkResult_VkDevice_T_ptr_VkPipelineCache_T_ptr_ulong64_ptr_void_ptr *)0x0)
         && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
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
           (_func___cdecl_void_VkDevice_T_ptr_VkPipelineLayout_T_ptr_VkAllocationCallbacks_ptr *)0x0
          ) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
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
           (_func___cdecl_void_VkDevice_T_ptr_VkDescriptorSetLayout_T_ptr_VkAllocationCallbacks_ptr
            *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      if ((VulkanDynamicAPI::vkCreateDescriptorPool ==
           (_func___cdecl_VkResult_VkDevice_T_ptr_VkDescriptorPoolCreateInfo_ptr_VkAllocationCallbacks_ptr_VkDescriptorPool_T_ptr_ptr
            *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      if ((VulkanDynamicAPI::vkDestroyDescriptorPool ==
           (_func___cdecl_void_VkDevice_T_ptr_VkDescriptorPool_T_ptr_VkAllocationCallbacks_ptr *)0x0
          ) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
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
           (_func___cdecl_void_VkDevice_T_ptr_VkFramebuffer_T_ptr_VkAllocationCallbacks_ptr *)0x0)
         && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
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
           (_func___cdecl_void_VkDevice_T_ptr_VkCommandPool_T_ptr_VkAllocationCallbacks_ptr *)0x0)
         && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
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
           (_func___cdecl_void_VkDevice_T_ptr_VkCommandPool_T_ptr_uint_VkCommandBuffer_T_ptr_ptr *)
           0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      if ((VulkanDynamicAPI::vkBeginCommandBuffer ==
           (_func___cdecl_VkResult_VkCommandBuffer_T_ptr_VkCommandBufferBeginInfo_ptr *)0x0) &&
         (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      if ((VulkanDynamicAPI::vkEndCommandBuffer ==
           (_func___cdecl_VkResult_VkCommandBuffer_T_ptr *)0x0) &&
         (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510dde28,
                   (FLogCategoryBase *)&LogRHI);
      }
      if ((VulkanDynamicAPI::vkResetCommandBuffer ==
           (_func___cdecl_VkResult_VkCommandBuffer_T_ptr_uint *)0x0) &&
         (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510dde48,
                   (FLogCategoryBase *)&LogRHI);
      }
      if ((VulkanDynamicAPI::vkCmdBindPipeline ==
           (_func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineBindPoint_VkPipeline_T_ptr *)0x0) &&
         (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510dde68,
                   (FLogCategoryBase *)&LogRHI);
      }
      if ((VulkanDynamicAPI::vkCmdSetViewport ==
           (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_VkViewport_ptr *)0x0) &&
         (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510dde88,
                   (FLogCategoryBase *)&LogRHI);
      }
      if ((VulkanDynamicAPI::vkCmdSetScissor ==
           (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_VkRect2D_ptr *)0x0) &&
         (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510ddea8,
                   (FLogCategoryBase *)&LogRHI);
      }
      if ((VulkanDynamicAPI::vkCmdSetLineWidth ==
           (_func___cdecl_void_VkCommandBuffer_T_ptr_float *)0x0) &&
         (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510ddec8,
                   (FLogCategoryBase *)&LogRHI);
      }
      if ((VulkanDynamicAPI::vkCmdSetDepthBias ==
           (_func___cdecl_void_VkCommandBuffer_T_ptr_float_float_float *)0x0) &&
         (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510ddee8,
                   (FLogCategoryBase *)&LogRHI);
      }
      if ((VulkanDynamicAPI::vkCmdSetBlendConstants ==
           (_func___cdecl_void_VkCommandBuffer_T_ptr_float_ptr *)0x0) &&
         (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510ddf08,
                   (FLogCategoryBase *)&LogRHI);
      }
      if ((VulkanDynamicAPI::vkCmdSetDepthBounds ==
           (_func___cdecl_void_VkCommandBuffer_T_ptr_float_float *)0x0) &&
         (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510ddf28,
                   (FLogCategoryBase *)&LogRHI);
      }
      if ((VulkanDynamicAPI::vkCmdSetStencilCompareMask ==
           (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint *)0x0) &&
         (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510ddf48,
                   (FLogCategoryBase *)&LogRHI);
      }
      if ((VulkanDynamicAPI::vkCmdSetStencilWriteMask ==
           (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint *)0x0) &&
         (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510ddf68,
                   (FLogCategoryBase *)&LogRHI);
      }
      if ((VulkanDynamicAPI::vkCmdSetStencilReference ==
           (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint *)0x0) &&
         (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510ddf88,
                   (FLogCategoryBase *)&LogRHI);
      }
      if ((VulkanDynamicAPI::vkCmdBindDescriptorSets ==
           (_func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineBindPoint_VkPipelineLayout_T_ptr_uint_uint_VkDescriptorSet_T_ptr_ptr_uint_uint_ptr
            *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510ddfa8,
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
           (_func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_ulong64_ulong64_void_ptr *)0x0)
         && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
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
           (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkClearAttachment_ptr_uint_VkClearRect_ptr
            *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
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
           (_func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineStageFlagBits_VkQueryPool_T_ptr_uint
            *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      if ((VulkanDynamicAPI::vkCmdCopyQueryPoolResults ==
           (_func___cdecl_void_VkCommandBuffer_T_ptr_VkQueryPool_T_ptr_uint_uint_VkBuffer_T_ptr_ulong64_ulong64_uint
            *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      if ((VulkanDynamicAPI::vkCmdPushConstants ==
           (_func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineLayout_T_ptr_uint_uint_uint_void_ptr
            *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      if ((VulkanDynamicAPI::vkCmdBeginRenderPass ==
           (_func___cdecl_void_VkCommandBuffer_T_ptr_VkRenderPassBeginInfo_ptr_VkSubpassContents *)
           0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      if ((VulkanDynamicAPI::vkCmdNextSubpass ==
           (_func___cdecl_void_VkCommandBuffer_T_ptr_VkSubpassContents *)0x0) &&
         (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      if ((VulkanDynamicAPI::vkCmdEndRenderPass == (_func___cdecl_void_VkCommandBuffer_T_ptr *)0x0)
         && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
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
           (_func___cdecl_void_VkDevice_T_ptr_VkSwapchainKHR_T_ptr_VkAllocationCallbacks_ptr *)0x0)
         && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
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
      VulkanDynamicAPI::vkDestroySurfaceKHR =
           (_func___cdecl_void_VkInstance_T_ptr_VkSurfaceKHR_T_ptr_VkAllocationCallbacks_ptr *)
           (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroySurfaceKHR");
      VulkanDynamicAPI::vkGetPhysicalDeviceSurfaceSupportKHR =
           (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_uint_VkSurfaceKHR_T_ptr_uint_ptr *)
           (*VulkanDynamicAPI::vkGetInstanceProcAddr)
                     (param_1,"vkGetPhysicalDeviceSurfaceSupportKHR");
      VulkanDynamicAPI::vkGetPhysicalDeviceSurfaceCapabilitiesKHR =
           (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_VkSurfaceKHR_T_ptr_VkSurfaceCapabilitiesKHR_ptr
            *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)
                        (param_1,"vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
      VulkanDynamicAPI::vkGetPhysicalDeviceSurfaceFormatsKHR =
           (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_VkSurfaceKHR_T_ptr_uint_ptr_VkSurfaceFormatKHR_ptr
            *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)
                        (param_1,"vkGetPhysicalDeviceSurfaceFormatsKHR");
      VulkanDynamicAPI::vkGetPhysicalDeviceSurfacePresentModesKHR =
           (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_VkSurfaceKHR_T_ptr_uint_ptr_VkPresentModeKHR_ptr
            *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)
                        (param_1,"vkGetPhysicalDeviceSurfacePresentModesKHR");
      if ((VulkanDynamicAPI::vkDestroySurfaceKHR ==
           (_func___cdecl_void_VkInstance_T_ptr_VkSurfaceKHR_T_ptr_VkAllocationCallbacks_ptr *)0x0)
         && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      if ((VulkanDynamicAPI::vkGetPhysicalDeviceSurfaceSupportKHR ==
           (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_uint_VkSurfaceKHR_T_ptr_uint_ptr *)0x0) &&
         (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      if ((VulkanDynamicAPI::vkGetPhysicalDeviceSurfaceCapabilitiesKHR ==
           (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_VkSurfaceKHR_T_ptr_VkSurfaceCapabilitiesKHR_ptr
            *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      if ((VulkanDynamicAPI::vkGetPhysicalDeviceSurfaceFormatsKHR ==
           (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_VkSurfaceKHR_T_ptr_uint_ptr_VkSurfaceFormatKHR_ptr
            *)0x0) && (bVar1 = false, 2 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      if (VulkanDynamicAPI::vkGetPhysicalDeviceSurfacePresentModesKHR ==
          (_func___cdecl_VkResult_VkPhysicalDevice_T_ptr_VkSurfaceKHR_T_ptr_uint_ptr_VkPresentModeKHR_ptr
           *)0x0) {
        if (2 < (byte)LogRHI._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
        }
      }
      else if (bVar1) {
        VulkanDynamicAPI::vkCreateAccelerationStructureKHR =
             (_func___cdecl_VkResult_VkDevice_T_ptr_VkAccelerationStructureCreateInfoKHR_ptr_VkAllocationCallbacks_ptr_VkAccelerationStructureKHR_T_ptr_ptr
              *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)
                          (param_1,"vkCreateAccelerationStructureKHR");
        VulkanDynamicAPI::vkDestroyAccelerationStructureKHR =
             (_func___cdecl_void_VkDevice_T_ptr_VkAccelerationStructureKHR_T_ptr_VkAllocationCallbacks_ptr
              *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)
                          (param_1,"vkDestroyAccelerationStructureKHR");
        VulkanDynamicAPI::vkCmdBuildAccelerationStructuresKHR =
             (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkAccelerationStructureBuildGeometryInfoKHR_ptr_VkAccelerationStructureBuildRangeInfoKHR_ptr_ptr
              *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)
                          (param_1,"vkCmdBuildAccelerationStructuresKHR");
        VulkanDynamicAPI::vkGetAccelerationStructureBuildSizesKHR =
             (_func___cdecl_void_VkDevice_T_ptr_VkAccelerationStructureBuildTypeKHR_VkAccelerationStructureBuildGeometryInfoKHR_ptr_uint_ptr_VkAccelerationStructureBuildSizesInfoKHR_ptr
              *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)
                          (param_1,"vkGetAccelerationStructureBuildSizesKHR");
        VulkanDynamicAPI::vkGetAccelerationStructureDeviceAddressKHR =
             (_func___cdecl_ulong64_VkDevice_T_ptr_VkAccelerationStructureDeviceAddressInfoKHR_ptr *
             )(*VulkanDynamicAPI::vkGetInstanceProcAddr)
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
              *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateRayTracingPipelinesKHR")
        ;
        VulkanDynamicAPI::vkGetRayTracingShaderGroupHandlesKHR =
             (_func___cdecl_VkResult_VkDevice_T_ptr_VkPipeline_T_ptr_uint_uint_ulong64_void_ptr *)
             (*VulkanDynamicAPI::vkGetInstanceProcAddr)
                       (param_1,"vkGetRayTracingShaderGroupHandlesKHR");
        VulkanDynamicAPI::vkCmdWriteAccelerationStructuresPropertiesKHR =
             (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkAccelerationStructureKHR_T_ptr_ptr_VkQueryType_VkQueryPool_T_ptr_uint
              *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)
                          (param_1,"vkCmdWriteAccelerationStructuresPropertiesKHR");
        VulkanDynamicAPI::vkCmdCopyAccelerationStructureKHR =
             (_func___cdecl_void_VkCommandBuffer_T_ptr_VkCopyAccelerationStructureInfoKHR_ptr *)
             (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdCopyAccelerationStructureKHR")
        ;
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
             (_func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkEvent_T_ptr_ptr_VkDependencyInfo_ptr *
             )(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdWaitEvents2KHR");
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
              *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)
                          (param_1,"vkCmdSetDescriptorBufferOffsetsEXT");
        VulkanDynamicAPI::vkGetDescriptorEXT =
             (_func___cdecl_void_VkDevice_T_ptr_VkDescriptorGetInfoEXT_ptr_ulong64_void_ptr *)
             (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkGetDescriptorEXT");
        VulkanDynamicAPI::vkCreateDeferredOperationKHR =
             (_func___cdecl_VkResult_VkDevice_T_ptr_VkAllocationCallbacks_ptr_VkDeferredOperationKHR_T_ptr_ptr
              *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateDeferredOperationKHR");
        VulkanDynamicAPI::vkDestroyDeferredOperationKHR =
             (_func___cdecl_void_VkDevice_T_ptr_VkDeferredOperationKHR_T_ptr_VkAllocationCallbacks_ptr
              *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkDestroyDeferredOperationKHR");
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
              *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)
                          (param_1,"vkCmdDrawMeshTasksIndirectCountEXT");
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
              *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)
                          (param_1,"vkGetImageSubresourceLayout2EXT");
        VulkanDynamicAPI::vkGetImageSubresourceLayout2KHR =
             (_func___cdecl_void_VkDevice_T_ptr_VkImage_T_ptr_VkImageSubresource2_ptr_VkSubresourceLayout2_ptr
              *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)
                          (param_1,"vkGetImageSubresourceLayout2KHR");
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
             (*VulkanDynamicAPI::vkGetInstanceProcAddr)
                       (param_1,"vkCmdSetRasterizerDiscardEnableEXT");
        VulkanDynamicAPI::vkCmdSetPrimitiveRestartEnableEXT =
             (_func___cdecl_void_VkCommandBuffer_T_ptr_uint *)
             (*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCmdSetPrimitiveRestartEnableEXT")
        ;
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
        bVar1 = FVulkanRayTracingPlatform::CheckVulkanInstanceFunctions(param_1);
        if ((!bVar1) && (2 < (byte)LogVulkanRHI._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        }
        VulkanDynamicAPI::vkCreateWin32SurfaceKHR =
             (_func___cdecl_VkResult_VkInstance_T_ptr_VkWin32SurfaceCreateInfoKHR_ptr_VkAllocationCallbacks_ptr_VkSurfaceKHR_T_ptr_ptr
              *)(*VulkanDynamicAPI::vkGetInstanceProcAddr)(param_1,"vkCreateWin32SurfaceKHR");
        if ((VulkanDynamicAPI::vkCreateWin32SurfaceKHR ==
             (_func___cdecl_VkResult_VkInstance_T_ptr_VkWin32SurfaceCreateInfoKHR_ptr_VkAllocationCallbacks_ptr_VkSurfaceKHR_T_ptr_ptr
              *)0x0) && (2 < (byte)LogRHI._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
        }
        return true;
      }
      if (GVulkanDLLModule != (HINSTANCE__ *)0x0) {
        FreeLibrary((HMODULE)GVulkanDLLModule);
        GVulkanDLLModule = (HINSTANCE__ *)0x0;
      }
      bAttemptedLoad = false;
      return false;
    }
  }
  return false;
}

// LoadVulkanLibrary @ 145bd31f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl FVulkanWindowsPlatform::LoadVulkanLibrary(void)

{
  size_t sVar1;
  ForAnyElementType FVar2;
  wchar_t *pwVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (bAttemptedLoad) {
    return GVulkanDLLModule != (HINSTANCE__ *)0x0;
  }
  bAttemptedLoad = true;
  FWindowsPlatformMisc::GetEnvironmentVariable(&local_18,L"VULKAN_SDK");
  if (2 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  pwVar3 = L"VK_LAYER_PATH";
  if (1 < local_18.Data.ArrayNum) {
    pwVar3 = L"VK_ADD_LAYER_PATH";
  }
  ::FString::FString(&local_38,pwVar3);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar4.Data = local_38.Data.AllocatorInstance.Data;
  }
  FWindowsPlatformMisc::GetEnvironmentVariable(&local_48,(wchar_t *)FVar4.Data);
  FPaths::EngineDir(&local_28);
  ::FString::AppendChars(&local_28,L"Binaries/ThirdParty/Vulkan/",0x1b);
  ::FString::AppendChars(&local_28,L"Win64",5);
  if (1 < local_48.Data.ArrayNum) {
    ::FString::AppendChars(&local_48,L";",1);
  }
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar4.Data = local_28.Data.AllocatorInstance.Data;
  }
  sVar1 = wcslen((wchar_t *)FVar4.Data);
  ::FString::AppendChars(&local_48,(wchar_t *)FVar4.Data,(int)sVar1);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar4.Data = local_48.Data.AllocatorInstance.Data;
  }
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar2.Data = local_38.Data.AllocatorInstance.Data;
  }
  FWindowsPlatformMisc::SetEnvironmentVar((wchar_t *)FVar2.Data,(wchar_t *)FVar4.Data);
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  GVulkanDLLModule = (HINSTANCE__ *)LoadLibraryW(L"vulkan-1.dll");
  if (GVulkanDLLModule != (HINSTANCE__ *)0x0) {
    VulkanDynamicAPI::vkCreateInstance =
         FWindowsPlatformProcess::GetDllExport(GVulkanDLLModule,L"vkCreateInstance");
    VulkanDynamicAPI::vkGetInstanceProcAddr =
         FWindowsPlatformProcess::GetDllExport(GVulkanDLLModule,L"vkGetInstanceProcAddr");
    VulkanDynamicAPI::vkGetDeviceProcAddr =
         FWindowsPlatformProcess::GetDllExport(GVulkanDLLModule,L"vkGetDeviceProcAddr");
    VulkanDynamicAPI::vkEnumerateInstanceExtensionProperties =
         FWindowsPlatformProcess::GetDllExport
                   (GVulkanDLLModule,L"vkEnumerateInstanceExtensionProperties");
    VulkanDynamicAPI::vkEnumerateInstanceLayerProperties =
         FWindowsPlatformProcess::GetDllExport
                   (GVulkanDLLModule,L"vkEnumerateInstanceLayerProperties");
    bVar5 = true;
    if ((VulkanDynamicAPI::vkCreateInstance ==
         (_func___cdecl_VkResult_VkInstanceCreateInfo_ptr_VkAllocationCallbacks_ptr_VkInstance_T_ptr_ptr
          *)0x0) && (bVar5 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetInstanceProcAddr ==
         (_func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr *)0x0) &&
       (bVar5 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetDeviceProcAddr ==
         (_func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr *)0x0) &&
       (bVar5 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkEnumerateInstanceExtensionProperties ==
         (_func___cdecl_VkResult_char_ptr_uint_ptr_VkExtensionProperties_ptr *)0x0) &&
       (bVar5 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510dce00,
                 (FLogCategoryBase *)&LogRHI);
    }
    if (VulkanDynamicAPI::vkEnumerateInstanceLayerProperties ==
        (_func___cdecl_VkResult_uint_ptr_VkLayerProperties_ptr *)0x0) {
      if (2 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
    }
    else if (bVar5) {
      VulkanDynamicAPI::vkEnumerateInstanceVersion =
           FWindowsPlatformProcess::GetDllExport(GVulkanDLLModule,L"vkEnumerateInstanceVersion");
      VulkanDynamicAPI::vkGetPhysicalDeviceDisplayPropertiesKHR =
           FWindowsPlatformProcess::GetDllExport
                     (GVulkanDLLModule,L"vkGetPhysicalDeviceDisplayPropertiesKHR");
      VulkanDynamicAPI::vkGetPhysicalDeviceDisplayPlanePropertiesKHR =
           FWindowsPlatformProcess::GetDllExport
                     (GVulkanDLLModule,L"vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
      VulkanDynamicAPI::vkGetDisplayPlaneSupportedDisplaysKHR =
           FWindowsPlatformProcess::GetDllExport
                     (GVulkanDLLModule,L"vkGetDisplayPlaneSupportedDisplaysKHR");
      VulkanDynamicAPI::vkGetDisplayModePropertiesKHR =
           FWindowsPlatformProcess::GetDllExport(GVulkanDLLModule,L"vkGetDisplayModePropertiesKHR");
      VulkanDynamicAPI::vkCreateDisplayModeKHR =
           FWindowsPlatformProcess::GetDllExport(GVulkanDLLModule,L"vkCreateDisplayModeKHR");
      VulkanDynamicAPI::vkGetDisplayPlaneCapabilitiesKHR =
           FWindowsPlatformProcess::GetDllExport
                     (GVulkanDLLModule,L"vkGetDisplayPlaneCapabilitiesKHR");
      bVar5 = true;
      goto LAB_145bd3535;
    }
    if (GVulkanDLLModule != (HINSTANCE__ *)0x0) {
      FreeLibrary((HMODULE)GVulkanDLLModule);
      GVulkanDLLModule = (HINSTANCE__ *)0x0;
    }
    bAttemptedLoad = false;
  }
  bVar5 = false;
LAB_145bd3535:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// SupportsDeviceLocalHostVisibleWithNoPenalty @ 145bd5e50

bool __cdecl
FVulkanWindowsPlatform::SupportsDeviceLocalHostVisibleWithNoPenalty(EGpuVendorId param_1)

{
  return param_1 == Amd;
}

