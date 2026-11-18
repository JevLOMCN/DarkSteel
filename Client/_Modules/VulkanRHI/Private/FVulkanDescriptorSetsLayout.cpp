// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 3

// FVulkanDescriptorSetsLayout @ 145b00770

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
/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */

FVulkanDescriptorSetsLayout * __thiscall
FVulkanDescriptorSetsLayout::FVulkanDescriptorSetsLayout
          (FVulkanDescriptorSetsLayout *this,FVulkanDevice *param_1)

{
  FVulkanDescriptorSetsLayoutInfo::FVulkanDescriptorSetsLayoutInfo
            ((FVulkanDescriptorSetsLayoutInfo *)this);
  this->Device = param_1;
  (this->LayoutHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayoutHandles).ArrayNum = 0;
  (this->LayoutHandles).ArrayMax = 0;
  (this->LayoutHandleIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayoutHandleIds).ArrayNum = 0;
  (this->LayoutHandleIds).ArrayMax = 0;
  return this;
}

// ~FVulkanDescriptorSetsLayout @ 145b05550

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
/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */

void __thiscall
FVulkanDescriptorSetsLayout::~FVulkanDescriptorSetsLayout(FVulkanDescriptorSetsLayout *this)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  
  piVar2 = &(this->LayoutHandles).ArrayMax;
  (this->LayoutHandles).ArrayNum = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->LayoutHandles).AllocatorInstance,0,piVar2);
  }
  pFVar1 = (this->LayoutHandleIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LayoutHandles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVulkanDescriptorSetsLayoutInfo::~FVulkanDescriptorSetsLayoutInfo
            ((FVulkanDescriptorSetsLayoutInfo *)this);
  return;
}

// Compile @ 145b10970

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */

void __thiscall
FVulkanDescriptorSetsLayout::Compile
          (FVulkanDescriptorSetsLayout *this,
          TMap<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry,0>_>
          *param_1)

{
  int *piVar1;
  int *piVar2;
  longlong *this_00;
  TArray<VkDescriptorSetLayout_T_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FSetLayout *pFVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  FVulkanDevice *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  VkResult VVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  FScriptContainerElement *pFVar21;
  FSetLayout *pFVar22;
  undefined1 local_res8 [8];
  VkDescriptorSetLayout_T *local_80;
  int local_78;
  FSetLayout *local_70;
  VkDescriptorSetLayout_T **local_68;
  VkDescriptorSetLayoutCreateInfo local_60;
  
  if ((this->LayoutHandles).ArrayNum != 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("LayoutHandles.Num() == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.cpp"
                        ,0xf2,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar7 = this->Device;
  this_00 = &this->_padding_;
  puVar14 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
            ::FindChecked(this_00,VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER);
  puVar15 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
            ::FindChecked(this_00,VK_DESCRIPTOR_TYPE_SAMPLER);
  if ((pFVar7->GpuProps).limits.maxDescriptorSetSamplers < *puVar14 + *puVar15) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("LayoutTypes[VK_DESCRIPTOR_TYPE_SAMPLER] + LayoutTypes[VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER] <= Limits.maxDescriptorSetSamplers"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.cpp"
                        ,0xfa,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  puVar14 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
            ::FindChecked(this_00,VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER);
  puVar15 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
            ::FindChecked(this_00,VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC);
  if ((pFVar7->GpuProps).limits.maxDescriptorSetUniformBuffers < *puVar14 + *puVar15) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("LayoutTypes[VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER] + LayoutTypes[VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC] <= Limits.maxDescriptorSetUniformBuffers"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.cpp"
                        ,0xff,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (this->Device->VendorId != Amd) {
    puVar14 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
              ::FindChecked(this_00,VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC);
    if ((pFVar7->GpuProps).limits.maxDescriptorSetUniformBuffersDynamic < *puVar14) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Device->GetVendorId() == EGpuVendorId::Amd || LayoutTypes[VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC] <= Limits.maxDescriptorSetUniformBuffersDynamic"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.cpp"
                          ,0x104,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
  }
  puVar14 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
            ::FindChecked(this_00,VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC);
  puVar15 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
            ::FindChecked(this_00,VK_DESCRIPTOR_TYPE_STORAGE_BUFFER);
  if ((pFVar7->GpuProps).limits.maxDescriptorSetStorageBuffers < *puVar15 + *puVar14) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("LayoutTypes[VK_DESCRIPTOR_TYPE_STORAGE_BUFFER] + LayoutTypes[VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC] <= Limits.maxDescriptorSetStorageBuffers"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.cpp"
                        ,0x109,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  puVar14 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
            ::FindChecked(this_00,VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC);
  if ((pFVar7->GpuProps).limits.maxDescriptorSetStorageBuffersDynamic < *puVar14) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("LayoutTypes[VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC] <= Limits.maxDescriptorSetStorageBuffersDynamic"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.cpp"
                        ,0x10d,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  puVar14 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
            ::FindChecked(this_00,VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE);
  puVar15 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
            ::FindChecked(this_00,VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER);
  puVar16 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
            ::FindChecked(this_00,VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER);
  if ((pFVar7->GpuProps).limits.maxDescriptorSetSampledImages < *puVar16 + *puVar15 + *puVar14) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("LayoutTypes[VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER] + LayoutTypes[VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE] + LayoutTypes[VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER] <= Limits.maxDescriptorSetSampledImages"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.cpp"
                        ,0x113,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  puVar14 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
            ::FindChecked(this_00,VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER);
  puVar15 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
            ::FindChecked(this_00,VK_DESCRIPTOR_TYPE_STORAGE_IMAGE);
  if ((pFVar7->GpuProps).limits.maxDescriptorSetStorageImages < *puVar15 + *puVar14) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("LayoutTypes[VK_DESCRIPTOR_TYPE_STORAGE_IMAGE] + LayoutTypes[VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER] <= Limits.maxDescriptorSetStorageImages"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.cpp"
                        ,0x118,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  puVar14 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
            ::FindChecked(this_00,VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT);
  if ((pFVar7->GpuProps).limits.maxDescriptorSetInputAttachments < *puVar14) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("LayoutTypes[VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT] <= Limits.maxDescriptorSetInputAttachments"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.cpp"
                        ,0x11a,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (GRHIGlobals.RayTracing.Supported != false) {
    puVar14 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
              ::FindChecked(this_00,VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR);
    if ((this->Device->OptionalDeviceExtensionProperties).AccelerationStructureProps.
        maxDescriptorSetAccelerationStructures <= *puVar14) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("LayoutTypes[VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR] < Device->GetOptionalExtensionProperties().AccelerationStructureProps.maxDescriptorSetAccelerationStructures"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.cpp"
                          ,0x11e,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
  }
  uVar6 = (uint)this->_padding_;
  pTVar3 = &this->LayoutHandles;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  piVar1 = &(this->LayoutHandles).ArrayMax;
  (this->LayoutHandles).ArrayNum = 0;
  if (*piVar1 != uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar6,&pTVar3->AllocatorInstance,0,piVar1);
  }
  if ((int)GMaxRHIFeatureLevel < 2) {
    uVar6 = (uint)this->_padding_;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    piVar2 = &(this->LayoutHandleIds).ArrayMax;
    (this->LayoutHandleIds).ArrayNum = 0;
    if (*piVar2 != uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar6,&(this->LayoutHandleIds).AllocatorInstance,0,piVar2);
    }
  }
  uVar6 = (uint)this->_padding_;
  uVar18 = (ulonglong)(int)uVar6;
  pFVar22 = (FSetLayout *)this->_padding_;
  pFVar4 = pFVar22 + uVar18;
LAB_145b10d30:
  do {
    pFVar21 = (FScriptContainerElement *)0x0;
    if ((int)this->_padding_ != (int)uVar18) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FVulkanDescriptorSetsLayoutInfo::FSetLayout,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar22 == pFVar4) {
      if (*(int *)((longlong)&this->_padding_ + 4) == -1) {
        FVulkanDescriptorSetsLayoutInfo::CompileTypesUsageID
                  ((FVulkanDescriptorSetsLayoutInfo *)this);
      }
      (this->DescriptorSetAllocateInfo).sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
      *(undefined8 *)&(this->DescriptorSetAllocateInfo).field_0x4 = 0;
      *(undefined8 *)((longlong)&(this->DescriptorSetAllocateInfo).pNext + 4) = 0;
      *(undefined4 *)((longlong)&(this->DescriptorSetAllocateInfo).descriptorPool + 4) = 0;
      *(undefined4 *)&(this->DescriptorSetAllocateInfo).field_0x1c = 0;
      (this->DescriptorSetAllocateInfo).descriptorSetCount = (this->LayoutHandles).ArrayNum;
      (this->DescriptorSetAllocateInfo).pSetLayouts =
           (VkDescriptorSetLayout_T **)(this->LayoutHandles).AllocatorInstance.Data;
      return;
    }
    uVar11 = (this->LayoutHandles).ArrayNum;
    if (uVar11 == *piVar1) {
      uVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->LayoutHandles).ArrayNum = uVar11 + 1;
    uVar17 = 0;
    if ((int)uVar11 < (int)(uVar11 + 1)) {
      uVar17 = ~uVar11 >> 0x1f;
    }
    if (uVar17 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pFVar5 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar11 * 8;
    if ((int)GMaxRHIFeatureLevel < 2) {
      uVar11 = (this->LayoutHandleIds).ArrayNum;
      piVar2 = &(this->LayoutHandleIds).ArrayMax;
      if (uVar11 == *piVar2) {
        uVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&(this->LayoutHandleIds).AllocatorInstance,piVar2);
      }
      (this->LayoutHandleIds).ArrayNum = uVar11 + 1;
      uVar17 = 0;
      if ((int)uVar11 < (int)(uVar11 + 1)) {
        uVar17 = ~uVar11 >> 0x1f;
      }
      if (uVar17 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pFVar21 = (this->LayoutHandleIds).AllocatorInstance.Data + (longlong)(int)uVar11 * 4;
    }
    iVar12 = TSet<TTuple<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry>,TDefaultMapHashableKeyFuncs<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FVulkanDescriptorSetsLayoutInfo::FSetLayout>
                       ((TSet<TTuple<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry>,TDefaultMapHashableKeyFuncs<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry,0>,FDefaultSetAllocator>
                         *)param_1,pFVar22->Hash,pFVar22);
    if (iVar12 == -1) {
LAB_145b10eb6:
      local_60.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
      local_60.bindingCount = (pFVar22->LayoutBindings).ArrayNum;
      pFVar8 = (pFVar22->LayoutBindings).AllocatorInstance.Data;
      local_60.pBindings._0_4_ = SUB84(pFVar8,0);
      local_60.pBindings._4_4_ = (undefined4)((ulonglong)pFVar8 >> 0x20);
      local_60._4_8_ = 0;
      local_60._12_8_ = 0;
      VVar13 = (*VulkanDynamicAPI::vkCreateDescriptorSetLayout)
                         (this->Device->Device,&local_60,&VulkanRHI::GAllocationCallbacks,
                          (VkDescriptorSetLayout_T **)pFVar5);
      if (VVar13 != VK_SUCCESS) {
        VulkanRHI::VerifyVulkanResult
                  (VVar13,
                   "VulkanRHI::vkCreateDescriptorSetLayout(Device->GetHandle(), &DescriptorLayoutInfo, VULKAN_CPU_ALLOCATOR, LayoutHandle)"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.cpp"
                   ,0x141);
      }
      if (pFVar21 == (FScriptContainerElement *)0x0) {
        local_78 = 0;
        local_80 = *(VkDescriptorSetLayout_T **)pFVar5;
      }
      else {
        LOCK();
        UNLOCK();
        iVar12 = GVulkanDSetLayoutHandleIdCounter._0_4_;
        GVulkanDSetLayoutHandleIdCounter =
             (TAtomic<unsigned___int64>)((longlong)GVulkanDSetLayoutHandleIdCounter + 1);
        *(int *)pFVar21 = iVar12 + 1;
        local_80 = *(VkDescriptorSetLayout_T **)pFVar5;
        local_78 = *(int *)pFVar21;
      }
      local_68 = &local_80;
      local_70 = pFVar22;
      TSet<TTuple<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry>,TDefaultMapHashableKeyFuncs<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FVulkanDescriptorSetsLayoutInfo::FSetLayout_const_&,FVulkanDescriptorSetLayoutEntry_const_&>_>
                ((TSet<TTuple<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry>,TDefaultMapHashableKeyFuncs<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry,0>,FDefaultSetAllocator>
                  *)param_1,
                 (TPairInitializer<FVulkanDescriptorSetsLayoutInfo::FSetLayout_const_&,FVulkanDescriptorSetLayoutEntry_const_&>
                  *)&stack0x00000020,(bool *)&local_70);
    }
    else {
      lVar19 = (longlong)iVar12 * 0x30 + *(longlong *)param_1;
      puVar20 = (undefined8 *)(lVar19 + 0x18);
      if (lVar19 == 0) {
        puVar20 = (undefined8 *)0x0;
      }
      if (puVar20 == (undefined8 *)0x0) goto LAB_145b10eb6;
      *(VkDescriptorSetLayout_T **)pFVar5 = (VkDescriptorSetLayout_T *)*puVar20;
      if (pFVar21 != (FScriptContainerElement *)0x0) {
        pFVar22 = pFVar22 + 1;
        uVar18 = (ulonglong)uVar6;
        *(int *)pFVar21 = *(int *)(puVar20 + 1);
        goto LAB_145b10d30;
      }
    }
    uVar18 = (ulonglong)uVar6;
    pFVar22 = pFVar22 + 1;
  } while( true );
}

