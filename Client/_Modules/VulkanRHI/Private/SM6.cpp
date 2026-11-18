// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 23

// <lambda_invoker_cdecl> @ 145b85f70

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6::blocks::SM6::<lambda_136>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  VkStructureType VVar1;
  
  VVar1 = param_1->sType;
  if ((int)VVar1 < 0x3b9e7769) {
    if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES) {
      if ((int)VVar1 < 0x3b9ddb29) {
        if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_KHR) {
          *(undefined4 *)&param_1[1].field_0x4 = 1;
          return;
        }
        if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2) {
          *(undefined4 *)&param_1[7].pNext = 1;
          param_1[0xb].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
          return;
        }
        if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES) {
          *(undefined4 *)&param_1[5].field_0x4 = 1;
          param_1[5].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
          *(undefined4 *)&param_1[5].pNext = 1;
          *(undefined4 *)((longlong)&param_1[5].pNext + 4) = 1;
          return;
        }
        if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES) {
          return;
        }
      }
      else if (((VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES) &&
               (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES)) &&
              (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT)) {
        return;
      }
    }
  }
  else if ((int)VVar1 < 0x3b9fcb41) {
    if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT) {
      *(undefined4 *)&param_1[1].field_0x4 = 1;
      *(undefined4 *)&param_1[1].pNext = 1;
      param_1[1].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
      return;
    }
    if (((VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES) &&
        (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES)) &&
       (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT)) {
      return;
    }
  }
  else if ((VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT) &&
          (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES)) {
    return;
  }
  param_1[1].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
  return;
}

// <lambda_invoker_cdecl> @ 145b86040

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM6::blocks::SM6::<lambda_137>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  bool bVar1;
  <lambda_137> local_res10 [24];
  
  bVar1 = operator()(local_res10,param_1);
  return bVar1;
}

// <lambda_invoker_cdecl> @ 145b86060

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6::blocks::SM6::<lambda_138>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  if (param_1->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2) {
    *(undefined4 *)&param_1[0x17].pNext = 9;
    *(undefined4 *)((longlong)&param_1[0x2d].pNext + 4) = 1;
  }
  else if (param_1->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT) {
    *(undefined4 *)((longlong)&param_1[4].pNext + 4) = 0x80;
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 145b860a0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM6::blocks::SM6::<lambda_139>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  if (param_1->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2) {
    if (*(uint *)&param_1[0x17].pNext < 9) {
      VulkanProfilePrint(
                        "Unsupported properties condition: VkPhysicalDeviceProperties2KHR::properties.limits.maxBoundDescriptorSets >= 9"
                        );
      if (*(int *)((longlong)&param_1[0x2d].pNext + 4) != 0) {
        return false;
      }
    }
    else if (*(int *)((longlong)&param_1[0x2d].pNext + 4) != 0) {
      return true;
    }
    VulkanProfilePrint(
                      "Unsupported properties condition: VkPhysicalDeviceProperties2KHR::properties.limits.timestampComputeAndGraphics >= VK_TRUE"
                      );
    return false;
  }
  if ((param_1->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT) &&
     (*(uint *)((longlong)&param_1[4].pNext + 4) < 0x80)) {
    VulkanProfilePrint(
                      "Unsupported properties condition: VkPhysicalDeviceMeshShaderPropertiesEXT::maxMeshWorkGroupInvocations >= 128"
                      );
    return false;
  }
  return true;
}

// <lambda_invoker_cdecl> @ 145b86130

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6::blocks::SM6::<lambda_140>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  if (param_1->sType == VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2) {
    *(uint *)&param_1[1].field_0x4 = *(uint *)&param_1[1].field_0x4 | 6;
  }
  return;
}

// <lambda_invoker_cdecl> @ 145b86150

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM6::blocks::SM6::<lambda_141>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  if ((param_1->sType == VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2) &&
     (((byte)*(undefined4 *)&param_1[1].field_0x4 & 6) != 6)) {
    VulkanProfilePrint(
                      "Unsupported format condition for VK_FORMAT_R64_UINT: VkFormatProperties2KHR::formatProperties.optimalTilingFeatures contains (VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT | VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT)"
                      );
    return false;
  }
  return true;
}

// <lambda_invoker_cdecl> @ 145b86190

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6::blocks::SM6::<lambda_142>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  undefined4 local_1a8 [2];
  undefined4 *local_1a0;
  undefined8 local_198;
  undefined4 local_190 [2];
  undefined4 *local_188;
  undefined8 local_180;
  undefined4 local_178 [2];
  undefined4 *local_170;
  undefined8 local_168;
  undefined4 local_160 [2];
  undefined4 *local_158;
  undefined8 local_150;
  undefined4 local_148 [2];
  undefined4 *local_140;
  undefined8 local_138;
  undefined4 local_130 [2];
  undefined4 *local_128;
  undefined8 local_120;
  VkBaseOutStructure local_118;
  undefined8 local_108;
  VkBaseOutStructure local_100;
  undefined8 local_f0;
  VkBaseOutStructure local_e8;
  undefined8 local_d8;
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0 [2];
  undefined4 *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90 [2];
  undefined4 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68 [2];
  undefined4 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_d0[0] = 0x3b9eb5e8;
  local_1a0 = local_d0;
  local_c8 = 0;
  local_198 = 0;
  local_a8 = local_1a8;
  local_60 = local_b0;
  local_188 = local_68;
  local_180 = 0;
  local_88 = local_190;
  local_70 = 0;
  local_170 = local_90;
  local_168 = 0;
  local_158 = local_178;
  local_150 = 0;
  local_140 = local_160;
  local_138 = 0;
  local_128 = local_148;
  local_120 = 0;
  local_118.pNext = (VkBaseOutStructure *)local_130;
  local_108 = 0;
  local_100.pNext = &local_118;
  local_f0 = 0;
  local_e8.pNext = &local_100;
  local_d8 = 0;
  param_1->pNext = &local_e8;
  local_c0 = 0;
  uStack_b8 = 0;
  local_1a8[0] = 0x3b9ddb28;
  local_b0[0] = 0x3b9f9c62;
  local_a0 = 0;
  uStack_98 = 0;
  local_68[0] = 0x3b9d3ee9;
  local_58 = 0;
  uStack_50 = 0;
  local_190[0] = 0x3ba11748;
  local_48 = 0;
  uStack_40 = 0;
  local_90[0] = 0x3b9fcb40;
  local_38 = 0;
  uStack_30 = 0;
  local_178[0] = 0x3ba02518;
  local_28 = 0;
  uStack_20 = 0;
  local_160[0] = 0x3b9e2948;
  local_18 = 0;
  uStack_10 = 0;
  local_148[0] = 0x3b9e7768;
  local_80 = 0;
  uStack_78 = 0;
  local_130[0] = 0x3b9d8920;
  local_118.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT;
  local_100.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES;
  local_e8.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES;
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b86300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6::blocks::SM6::<lambda_143>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  undefined1 auStack_d8 [32];
  VkBaseOutStructure local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8.pNext = (VkBaseOutStructure *)0x0;
  local_98 = 0;
  uStack_90 = 0;
  param_1->pNext = &local_b8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b86390

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6::blocks::SM6::<lambda_144>::<lambda_invoker_cdecl>
          (uint param_1,VkBaseOutStructure *param_2,void *param_3,
          _func___cdecl_void_uint_VkBaseOutStructure_ptr_void_ptr *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000145b86390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_4)(param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 145b863a0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6::blocks::SM6::<lambda_145>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  VkBaseOutStructure local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_38.sType = VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3;
  local_18 = 0;
  local_38.pNext = (VkBaseOutStructure *)0x0;
  param_1->pNext = &local_38;
  local_28 = 0;
  uStack_20 = 0;
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b86770

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::SM6::<lambda_162>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  VkStructureType VVar1;
  
  VVar1 = param_1->sType;
  if ((int)VVar1 < 0x3b9e7769) {
    if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES) {
      if ((int)VVar1 < 0x3b9ddb29) {
        if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_KHR) {
          *(undefined4 *)&param_1[1].field_0x4 = 1;
          return;
        }
        if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2) {
          *(undefined4 *)&param_1[7].pNext = 1;
          param_1[0xb].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
          return;
        }
        if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES) {
          *(undefined4 *)&param_1[5].field_0x4 = 1;
          param_1[5].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
          *(undefined4 *)&param_1[5].pNext = 1;
          *(undefined4 *)((longlong)&param_1[5].pNext + 4) = 1;
          return;
        }
        if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES) {
          return;
        }
      }
      else if (((VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES) &&
               (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES)) &&
              (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT)) {
        return;
      }
    }
  }
  else if ((int)VVar1 < 0x3b9fcb41) {
    if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT) {
      *(undefined4 *)&param_1[1].field_0x4 = 1;
      *(undefined4 *)&param_1[1].pNext = 1;
      param_1[1].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
      return;
    }
    if (((VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES) &&
        (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES)) &&
       (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT)) {
      return;
    }
  }
  else if ((VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT) &&
          (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES)) {
    return;
  }
  param_1[1].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
  return;
}

// <lambda_invoker_cdecl> @ 145b86840

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::SM6::<lambda_163>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  bool bVar1;
  <lambda_163> local_res10 [24];
  
  bVar1 = operator()(local_res10,param_1);
  return bVar1;
}

// <lambda_invoker_cdecl> @ 145b86860

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::SM6::<lambda_164>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  if (param_1->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2) {
    *(undefined4 *)&param_1[0x17].pNext = 9;
    *(undefined4 *)((longlong)&param_1[0x2d].pNext + 4) = 1;
  }
  else if (param_1->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT) {
    *(undefined4 *)((longlong)&param_1[4].pNext + 4) = 0x80;
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 145b868a0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::SM6::<lambda_165>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  if (param_1->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2) {
    if (*(uint *)&param_1[0x17].pNext < 9) {
      VulkanProfilePrint(
                        "Unsupported properties condition: VkPhysicalDeviceProperties2KHR::properties.limits.maxBoundDescriptorSets >= 9"
                        );
      if (*(int *)((longlong)&param_1[0x2d].pNext + 4) != 0) {
        return false;
      }
    }
    else if (*(int *)((longlong)&param_1[0x2d].pNext + 4) != 0) {
      return true;
    }
    VulkanProfilePrint(
                      "Unsupported properties condition: VkPhysicalDeviceProperties2KHR::properties.limits.timestampComputeAndGraphics >= VK_TRUE"
                      );
    return false;
  }
  if ((param_1->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT) &&
     (*(uint *)((longlong)&param_1[4].pNext + 4) < 0x80)) {
    VulkanProfilePrint(
                      "Unsupported properties condition: VkPhysicalDeviceMeshShaderPropertiesEXT::maxMeshWorkGroupInvocations >= 128"
                      );
    return false;
  }
  return true;
}

// <lambda_invoker_cdecl> @ 145b86930

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::SM6::<lambda_166>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  if (param_1->sType == VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2) {
    *(uint *)&param_1[1].field_0x4 = *(uint *)&param_1[1].field_0x4 | 6;
  }
  return;
}

// <lambda_invoker_cdecl> @ 145b86950

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::SM6::<lambda_167>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  if ((param_1->sType == VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2) &&
     (((byte)*(undefined4 *)&param_1[1].field_0x4 & 6) != 6)) {
    VulkanProfilePrint(
                      "Unsupported format condition for VK_FORMAT_R64_UINT: VkFormatProperties2KHR::formatProperties.optimalTilingFeatures contains (VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT | VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT)"
                      );
    return false;
  }
  return true;
}

// <lambda_invoker_cdecl> @ 145b86990

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::SM6::<lambda_168>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  <lambda_168> local_res20 [8];
  
  operator()(local_res20,param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 145b869b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::SM6::<lambda_169>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  undefined1 auStack_d8 [32];
  VkBaseOutStructure local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8.pNext = (VkBaseOutStructure *)0x0;
  local_98 = 0;
  uStack_90 = 0;
  param_1->pNext = &local_b8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b86a40

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::SM6::<lambda_170>::<lambda_invoker_cdecl>
          (uint param_1,VkBaseOutStructure *param_2,void *param_3,
          _func___cdecl_void_uint_VkBaseOutStructure_ptr_void_ptr *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000145b86a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_4)(param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 145b86a50

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::SM6::<lambda_171>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  VkBaseOutStructure local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_38.sType = VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3;
  local_18 = 0;
  local_38.pNext = (VkBaseOutStructure *)0x0;
  param_1->pNext = &local_38;
  local_28 = 0;
  uStack_20 = 0;
  (*param_3)(param_1,param_2);
  return;
}

// operator() @ 145b97a20

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __thiscall
detail::VP_UE_VULKAN_SM6::blocks::SM6::<lambda_137>::operator()
          (<lambda_137> *this,VkBaseOutStructure *param_1)

{
  VkStructureType VVar1;
  char *pcVar2;
  
  VVar1 = param_1->sType;
  if (0x3b9e7768 < (int)VVar1) {
    if (0x3b9fcb40 < (int)VVar1) {
      if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT) {
        if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
        pcVar2 = 
        "Unsupported feature condition: VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT::mutableDescriptorType == VK_TRUE"
        ;
      }
      else {
        if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES) {
          return true;
        }
        if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
        pcVar2 = 
        "Unsupported feature condition: VkPhysicalDeviceMaintenance4Features::maintenance4 == VK_TRUE"
        ;
      }
      goto LAB_145b97ccb;
    }
    if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT) {
      if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES) {
        if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
        pcVar2 = 
        "Unsupported feature condition: VkPhysicalDeviceBufferDeviceAddressFeatures::bufferDeviceAddress == VK_TRUE"
        ;
      }
      else if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES) {
        if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
        pcVar2 = 
        "Unsupported feature condition: VkPhysicalDeviceSynchronization2Features::synchronization2 == VK_TRUE"
        ;
      }
      else {
        if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT) {
          return true;
        }
        if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
        pcVar2 = 
        "Unsupported feature condition: VkPhysicalDeviceDescriptorBufferFeaturesEXT::descriptorBuffer == VK_TRUE"
        ;
      }
      goto LAB_145b97ccb;
    }
    if (*(int *)&param_1[1].field_0x4 == 1) {
      if (*(int *)&param_1[1].pNext == 1) {
        if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
        goto LAB_145b97c65;
      }
    }
    else {
      VulkanProfilePrint(
                        "Unsupported feature condition: VkPhysicalDeviceMeshShaderFeaturesEXT::meshShader == VK_TRUE"
                        );
    }
    if (*(int *)&param_1[1].pNext != 1) {
      VulkanProfilePrint(
                        "Unsupported feature condition: VkPhysicalDeviceMeshShaderFeaturesEXT::multiviewMeshShader == VK_TRUE"
                        );
    }
LAB_145b97c65:
    if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
      return false;
    }
    VulkanProfilePrint(
                      "Unsupported feature condition: VkPhysicalDeviceMeshShaderFeaturesEXT::taskShader == VK_TRUE"
                      );
    return false;
  }
  if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES) {
    if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
      return true;
    }
    pcVar2 = 
    "Unsupported feature condition: VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures::separateDepthStencilLayouts == VK_TRUE"
    ;
LAB_145b97ccb:
    VulkanProfilePrint(pcVar2);
    return false;
  }
  if (0x3b9ddb28 < (int)VVar1) {
    if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES) {
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
      pcVar2 = 
      "Unsupported feature condition: VkPhysicalDeviceTimelineSemaphoreFeaturesKHR::timelineSemaphore == VK_TRUE"
      ;
    }
    else if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES) {
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
      pcVar2 = 
      "Unsupported feature condition: VkPhysicalDeviceScalarBlockLayoutFeaturesEXT::scalarBlockLayout == VK_TRUE"
      ;
    }
    else {
      if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT) {
        return true;
      }
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
      pcVar2 = 
      "Unsupported feature condition: VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT::shaderImageInt64Atomics == VK_TRUE"
      ;
    }
    goto LAB_145b97ccb;
  }
  if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_KHR) {
    if (*(int *)&param_1[1].field_0x4 == 1) {
      return true;
    }
    pcVar2 = 
    "Unsupported feature condition: VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR::computeDerivativeGroupLinear == VK_TRUE"
    ;
    goto LAB_145b97ccb;
  }
  if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2) {
    if (*(int *)&param_1[7].pNext == 1) {
      if (param_1[0xb].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
    }
    else {
      VulkanProfilePrint(
                        "Unsupported feature condition: VkPhysicalDeviceFeatures2KHR::features.fragmentStoresAndAtomics == VK_TRUE"
                        );
    }
    if (param_1[0xb].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
      return false;
    }
    VulkanProfilePrint(
                      "Unsupported feature condition: VkPhysicalDeviceFeatures2KHR::features.shaderInt64 == VK_TRUE"
                      );
    return false;
  }
  if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES) {
    if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES) {
      return true;
    }
    if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
      return true;
    }
    pcVar2 = 
    "Unsupported feature condition: VkPhysicalDeviceShaderAtomicInt64Features::shaderBufferInt64Atomics == VK_TRUE"
    ;
    goto LAB_145b97ccb;
  }
  if (*(int *)&param_1[5].field_0x4 == 1) {
    if (param_1[5].sType != VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) goto LAB_145b97a98;
    if (*(int *)&param_1[5].pNext == 1) {
      if (*(int *)((longlong)&param_1[5].pNext + 4) == 1) {
        return true;
      }
      goto LAB_145b97abc;
    }
  }
  else {
    VulkanProfilePrint(
                      "Unsupported feature condition: VkPhysicalDeviceDescriptorIndexingFeaturesEXT::descriptorBindingPartiallyBound == VK_TRUE"
                      );
LAB_145b97a98:
    if (param_1[5].sType != VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
      VulkanProfilePrint(
                        "Unsupported feature condition: VkPhysicalDeviceDescriptorIndexingFeaturesEXT::descriptorBindingUpdateUnusedWhilePending == VK_TRUE"
                        );
    }
  }
  if (*(int *)&param_1[5].pNext != 1) {
    VulkanProfilePrint(
                      "Unsupported feature condition: VkPhysicalDeviceDescriptorIndexingFeaturesEXT::descriptorBindingVariableDescriptorCount == VK_TRUE"
                      );
  }
LAB_145b97abc:
  if (*(int *)((longlong)&param_1[5].pNext + 4) == 1) {
    return false;
  }
  VulkanProfilePrint(
                    "Unsupported feature condition: VkPhysicalDeviceDescriptorIndexingFeaturesEXT::runtimeDescriptorArray == VK_TRUE"
                    );
  return false;
}

// operator() @ 145b984f0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __thiscall
detail::VP_UE_VULKAN_SM6_RT::blocks::SM6::<lambda_163>::operator()
          (<lambda_163> *this,VkBaseOutStructure *param_1)

{
  VkStructureType VVar1;
  char *pcVar2;
  
  VVar1 = param_1->sType;
  if (0x3b9e7768 < (int)VVar1) {
    if (0x3b9fcb40 < (int)VVar1) {
      if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT) {
        if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
        pcVar2 = 
        "Unsupported feature condition: VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT::mutableDescriptorType == VK_TRUE"
        ;
      }
      else {
        if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES) {
          return true;
        }
        if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
        pcVar2 = 
        "Unsupported feature condition: VkPhysicalDeviceMaintenance4Features::maintenance4 == VK_TRUE"
        ;
      }
      goto LAB_145b9879b;
    }
    if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT) {
      if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES) {
        if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
        pcVar2 = 
        "Unsupported feature condition: VkPhysicalDeviceBufferDeviceAddressFeatures::bufferDeviceAddress == VK_TRUE"
        ;
      }
      else if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES) {
        if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
        pcVar2 = 
        "Unsupported feature condition: VkPhysicalDeviceSynchronization2Features::synchronization2 == VK_TRUE"
        ;
      }
      else {
        if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT) {
          return true;
        }
        if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
        pcVar2 = 
        "Unsupported feature condition: VkPhysicalDeviceDescriptorBufferFeaturesEXT::descriptorBuffer == VK_TRUE"
        ;
      }
      goto LAB_145b9879b;
    }
    if (*(int *)&param_1[1].field_0x4 == 1) {
      if (*(int *)&param_1[1].pNext == 1) {
        if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
        goto LAB_145b98735;
      }
    }
    else {
      VulkanProfilePrint(
                        "Unsupported feature condition: VkPhysicalDeviceMeshShaderFeaturesEXT::meshShader == VK_TRUE"
                        );
    }
    if (*(int *)&param_1[1].pNext != 1) {
      VulkanProfilePrint(
                        "Unsupported feature condition: VkPhysicalDeviceMeshShaderFeaturesEXT::multiviewMeshShader == VK_TRUE"
                        );
    }
LAB_145b98735:
    if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
      return false;
    }
    VulkanProfilePrint(
                      "Unsupported feature condition: VkPhysicalDeviceMeshShaderFeaturesEXT::taskShader == VK_TRUE"
                      );
    return false;
  }
  if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES) {
    if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
      return true;
    }
    pcVar2 = 
    "Unsupported feature condition: VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures::separateDepthStencilLayouts == VK_TRUE"
    ;
LAB_145b9879b:
    VulkanProfilePrint(pcVar2);
    return false;
  }
  if (0x3b9ddb28 < (int)VVar1) {
    if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES) {
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
      pcVar2 = 
      "Unsupported feature condition: VkPhysicalDeviceTimelineSemaphoreFeaturesKHR::timelineSemaphore == VK_TRUE"
      ;
    }
    else if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES) {
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
      pcVar2 = 
      "Unsupported feature condition: VkPhysicalDeviceScalarBlockLayoutFeaturesEXT::scalarBlockLayout == VK_TRUE"
      ;
    }
    else {
      if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT) {
        return true;
      }
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
      pcVar2 = 
      "Unsupported feature condition: VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT::shaderImageInt64Atomics == VK_TRUE"
      ;
    }
    goto LAB_145b9879b;
  }
  if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_KHR) {
    if (*(int *)&param_1[1].field_0x4 == 1) {
      return true;
    }
    pcVar2 = 
    "Unsupported feature condition: VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR::computeDerivativeGroupLinear == VK_TRUE"
    ;
    goto LAB_145b9879b;
  }
  if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2) {
    if (*(int *)&param_1[7].pNext == 1) {
      if (param_1[0xb].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
    }
    else {
      VulkanProfilePrint(
                        "Unsupported feature condition: VkPhysicalDeviceFeatures2KHR::features.fragmentStoresAndAtomics == VK_TRUE"
                        );
    }
    if (param_1[0xb].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
      return false;
    }
    VulkanProfilePrint(
                      "Unsupported feature condition: VkPhysicalDeviceFeatures2KHR::features.shaderInt64 == VK_TRUE"
                      );
    return false;
  }
  if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES) {
    if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES) {
      return true;
    }
    if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
      return true;
    }
    pcVar2 = 
    "Unsupported feature condition: VkPhysicalDeviceShaderAtomicInt64Features::shaderBufferInt64Atomics == VK_TRUE"
    ;
    goto LAB_145b9879b;
  }
  if (*(int *)&param_1[5].field_0x4 == 1) {
    if (param_1[5].sType != VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) goto LAB_145b98568;
    if (*(int *)&param_1[5].pNext == 1) {
      if (*(int *)((longlong)&param_1[5].pNext + 4) == 1) {
        return true;
      }
      goto LAB_145b9858c;
    }
  }
  else {
    VulkanProfilePrint(
                      "Unsupported feature condition: VkPhysicalDeviceDescriptorIndexingFeaturesEXT::descriptorBindingPartiallyBound == VK_TRUE"
                      );
LAB_145b98568:
    if (param_1[5].sType != VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
      VulkanProfilePrint(
                        "Unsupported feature condition: VkPhysicalDeviceDescriptorIndexingFeaturesEXT::descriptorBindingUpdateUnusedWhilePending == VK_TRUE"
                        );
    }
  }
  if (*(int *)&param_1[5].pNext != 1) {
    VulkanProfilePrint(
                      "Unsupported feature condition: VkPhysicalDeviceDescriptorIndexingFeaturesEXT::descriptorBindingVariableDescriptorCount == VK_TRUE"
                      );
  }
LAB_145b9858c:
  if (*(int *)((longlong)&param_1[5].pNext + 4) == 1) {
    return false;
  }
  VulkanProfilePrint(
                    "Unsupported feature condition: VkPhysicalDeviceDescriptorIndexingFeaturesEXT::runtimeDescriptorArray == VK_TRUE"
                    );
  return false;
}

// operator() @ 145b987c0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
detail::VP_UE_VULKAN_SM6_RT::blocks::SM6::<lambda_168>::operator()
          (<lambda_168> *this,VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  undefined4 local_248 [2];
  undefined4 *local_240;
  undefined8 local_238;
  undefined4 local_230 [2];
  undefined4 *local_228;
  undefined8 local_220;
  undefined4 local_218 [2];
  undefined4 *local_210;
  undefined8 local_208;
  undefined4 local_200 [2];
  undefined4 *local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8 [2];
  undefined4 *local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0 [2];
  undefined4 *local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8 [2];
  undefined4 *local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0 [2];
  undefined4 *local_198;
  undefined8 local_190;
  undefined4 local_188 [2];
  undefined4 *local_180;
  undefined8 local_178;
  undefined4 local_170 [2];
  undefined4 *local_168;
  undefined8 local_160;
  VkBaseOutStructure local_158;
  undefined8 local_148;
  VkBaseOutStructure local_140;
  undefined8 local_130;
  undefined4 local_128 [2];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108 [2];
  undefined4 *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8 [2];
  undefined4 *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0 [2];
  undefined4 *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  VkBaseOutStructure local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68 [2];
  undefined4 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_128[0] = 0x3b9eb5e8;
  local_240 = local_128;
  local_120 = 0;
  local_248[0] = 0x3b9ddb28;
  local_238 = 0;
  local_100 = local_248;
  local_60 = local_108;
  local_228 = local_68;
  local_220 = 0;
  local_e0 = local_230;
  local_c8 = 0;
  local_210 = local_e8;
  local_208 = 0;
  local_1f8 = local_218;
  local_1f0 = 0;
  local_1e0 = local_200;
  local_1d8 = 0;
  local_1c8 = local_1e8;
  local_1c0 = 0;
  local_1b0 = local_1d0;
  local_1a8 = 0;
  local_198 = local_1b8;
  local_190 = 0;
  local_180 = local_1a0;
  local_178 = 0;
  local_b8 = local_188;
  local_a0 = 0;
  local_168 = local_c0;
  local_160 = 0;
  local_158.pNext = (VkBaseOutStructure *)local_170;
  local_118 = 0;
  uStack_110 = 0;
  local_108[0] = 0x3b9f9c62;
  local_f8 = 0;
  uStack_f0 = 0;
  local_68[0] = 0x3b9d3ee9;
  local_58 = 0;
  uStack_50 = 0;
  local_230[0] = 0x3ba11748;
  local_48 = 0;
  uStack_40 = 0;
  local_e8[0] = 0x3b9fcb40;
  local_38 = 0;
  uStack_30 = 0;
  local_218[0] = 0x3ba02518;
  local_28 = 0;
  uStack_20 = 0;
  local_200[0] = 0x3b9e2948;
  local_18 = 0;
  uStack_10 = 0;
  local_1e8[0] = 0x3b9e7768;
  local_d8 = 0;
  uStack_d0 = 0;
  local_1d0[0] = 0x3b9d8920;
  local_1b8[0] = 0x3b9e5c10;
  local_1a0[0] = 0x3b9f9497;
  local_188[0] = 0x3b9df298;
  local_c0[0] = 0x3b9d13fd;
  local_b0 = 0;
  uStack_a8 = 0;
  local_170[0] = 0x3b9ec588;
  local_158.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR;
  local_148 = 0;
  local_98.pNext = &local_158;
  local_78 = 0;
  local_140.pNext = &local_98;
  local_130 = 0;
  param_1->pNext = &local_140;
  local_98.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR;
  local_88 = 0;
  uStack_80 = 0;
  local_140.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR;
  (*param_3)(param_1,param_2);
  return;
}

