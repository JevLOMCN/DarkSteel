// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 3

// FVulkanLayout @ 145b03d80

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

FVulkanLayout * __thiscall
FVulkanLayout::FVulkanLayout(FVulkanLayout *this,FVulkanDevice *param_1,bool param_2,bool param_3)

{
  this->Device = param_1;
  this->_padding_ = (longlong)&___7FVulkanLayout__6B_;
  FVulkanDescriptorSetsLayoutInfo::FVulkanDescriptorSetsLayoutInfo
            ((FVulkanDescriptorSetsLayoutInfo *)&this->DescriptorSetLayout);
  (this->DescriptorSetLayout).LayoutHandles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescriptorSetLayout).LayoutHandles.ArrayNum = 0;
  (this->DescriptorSetLayout).LayoutHandles.ArrayMax = 0;
  (this->DescriptorSetLayout).LayoutHandleIds.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DescriptorSetLayout).LayoutHandleIds.ArrayNum = 0;
  (this->DescriptorSetLayout).LayoutHandleIds.ArrayMax = 0;
  (this->DescriptorSetLayout).Device = param_1;
  this->PipelineLayout = (VkPipelineLayout_T *)0x0;
  this->bIsGfxLayout = param_2;
  this->bUsesBindless = param_3;
  return this;
}

// ~FVulkanLayout @ 145b05860

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

void __thiscall FVulkanLayout::~FVulkanLayout(FVulkanLayout *this)

{
  this->_padding_ = (longlong)&___7FVulkanLayout__6B_;
  if ((this->bUsesBindless == false) && (this->PipelineLayout != (VkPipelineLayout_T *)0x0)) {
    VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
              (&this->Device->DeferredDeletionQueue,PipelineLayout,(ulong64)this->PipelineLayout);
    this->PipelineLayout = (VkPipelineLayout_T *)0x0;
  }
  FVulkanDescriptorSetsLayout::~FVulkanDescriptorSetsLayout(&this->DescriptorSetLayout);
  return;
}

// Compile @ 145b11030

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

void __thiscall
FVulkanLayout::Compile
          (FVulkanLayout *this,
          TMap<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry,0>_>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  VkResult VVar4;
  VkPipelineLayoutCreateInfo local_38;
  
  if (this->PipelineLayout != (VkPipelineLayout_T *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PipelineLayout == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanLayout.cpp"
                       ,0x1a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVulkanDescriptorSetsLayout::Compile(&this->DescriptorSetLayout,param_1);
  if (this->bUsesBindless != false) {
    this->PipelineLayout = this->Device->BindlessDescriptorManager->BindlessPipelineLayout;
    return;
  }
  local_38.sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
  local_38._36_8_ = 0;
  local_38.pPushConstantRanges._4_4_ = 0;
  local_38.setLayoutCount = (this->DescriptorSetLayout).LayoutHandles.ArrayNum;
  local_38.pushConstantRangeCount = 0;
  pFVar1 = (this->DescriptorSetLayout).LayoutHandles.AllocatorInstance.Data;
  local_38.pSetLayouts._0_4_ = SUB84(pFVar1,0);
  local_38.pSetLayouts._4_4_ = (undefined4)((ulonglong)pFVar1 >> 0x20);
  local_38._4_8_ = 0;
  local_38._12_8_ = 0;
  VVar4 = (*VulkanDynamicAPI::vkCreatePipelineLayout)
                    (this->Device->Device,&local_38,&VulkanRHI::GAllocationCallbacks,
                     &this->PipelineLayout);
  if (VVar4 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar4,
               "VulkanRHI::vkCreatePipelineLayout(Device.GetHandle(), &PipelineLayoutCreateInfo, VULKAN_CPU_ALLOCATOR, &PipelineLayout)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanLayout.cpp"
               ,0x2c);
  }
  return;
}

