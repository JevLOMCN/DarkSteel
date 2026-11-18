// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 24

// <lambda_invoker_cdecl> @ 145b85680

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::SM5::<lambda_104>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 145b85690

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::SM5::<lambda_105>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 145b856a0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::SM5::<lambda_106>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 145b856b0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::SM5::<lambda_107>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 145b856c0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::SM5::<lambda_108>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  VkBaseOutStructure local_68;
  undefined8 local_58;
  VkBaseOutStructure local_50;
  undefined8 uStack_40;
  VkBaseOutStructure local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_38.pNext = &local_50;
  local_38.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR;
  local_68.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_68.pNext = &local_38;
  local_58 = 0;
  param_1->pNext = &local_68;
  local_50.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR;
  local_50.pNext = (VkBaseOutStructure *)0x0;
  uStack_40 = 0;
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b85730

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::SM5::<lambda_109>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  param_1->pNext = (VkBaseOutStructure *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000145b85738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b85750

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::SM5::<lambda_110>::<lambda_invoker_cdecl>
          (uint param_1,VkBaseOutStructure *param_2,void *param_3,
          _func___cdecl_void_uint_VkBaseOutStructure_ptr_void_ptr *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000145b85750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_4)(param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 145b85760

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::SM5::<lambda_111>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145b85760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b873a0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5::blocks::SM5::<lambda_56>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  if (param_1->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2) {
    *(undefined4 *)&param_1[7].pNext = 1;
  }
  return;
}

// <lambda_invoker_cdecl> @ 145b873c0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM5::blocks::SM5::<lambda_57>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  if ((param_1->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2) &&
     (*(int *)&param_1[7].pNext != 1)) {
    VulkanProfilePrint(
                      "Unsupported feature condition: VkPhysicalDeviceFeatures2KHR::features.fragmentStoresAndAtomics == VK_TRUE"
                      );
    return false;
  }
  return true;
}

// <lambda_invoker_cdecl> @ 145b87400

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5::blocks::SM5::<lambda_58>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  if (param_1->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2) {
    *(undefined4 *)&param_1[0x17].pNext = 4;
  }
  return;
}

// <lambda_invoker_cdecl> @ 145b87420

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM5::blocks::SM5::<lambda_59>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  if ((param_1->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2) &&
     (*(uint *)&param_1[0x17].pNext < 4)) {
    VulkanProfilePrint(
                      "Unsupported properties condition: VkPhysicalDeviceProperties2KHR::properties.limits.maxBoundDescriptorSets >= 4"
                      );
    return false;
  }
  return true;
}

// <lambda_invoker_cdecl> @ 145b87480

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5::blocks::SM5::<lambda_60>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  param_1->pNext = (VkBaseOutStructure *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000145b87488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b874a0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5::blocks::SM5::<lambda_61>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  param_1->pNext = (VkBaseOutStructure *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000145b874a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b874c0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5::blocks::SM5::<lambda_62>::<lambda_invoker_cdecl>
          (uint param_1,VkBaseOutStructure *param_2,void *param_3,
          _func___cdecl_void_uint_VkBaseOutStructure_ptr_void_ptr *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000145b874c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_4)(param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 145b874d0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5::blocks::SM5::<lambda_63>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145b874d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b875e0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID::blocks::SM5::<lambda_80>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 145b875f0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID::blocks::SM5::<lambda_81>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 145b87600

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID::blocks::SM5::<lambda_82>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 145b87610

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID::blocks::SM5::<lambda_83>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 145b87620

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID::blocks::SM5::<lambda_84>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145b87620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b87630

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID::blocks::SM5::<lambda_85>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145b87630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b87640

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID::blocks::SM5::<lambda_86>::<lambda_invoker_cdecl>
          (uint param_1,VkBaseOutStructure *param_2,void *param_3,
          _func___cdecl_void_uint_VkBaseOutStructure_ptr_void_ptr *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000145b87640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_4)(param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 145b87650

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID::blocks::SM5::<lambda_87>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145b87650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

