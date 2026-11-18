// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanRenderPassBuilder<FVulkanSubpassDescription<VkSubpassDescription2>,FVulkanSubpassDependency<VkSubpassDependency2>,FVulkanAttachmentReference<VkAttachmentReference2>,FVulkanAttachmentDescription<VkAttachmentDescription2>,FVulkanRenderPassCreateInfo<VkRenderPassCreateInfo2>_> @ 145b43230

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVulkanRenderPassBuilder<FVulkanSubpassDescription<VkSubpassDescription2>,FVulkanSubpassDependency<VkSubpassDependency2>,FVulkanAttachmentReference<VkAttachmentReference2>,FVulkanAttachmentDescription<VkAttachmentDescription2>,FVulkanRenderPassCreateInfo<VkRenderPassCreateInfo2>_>
* __thiscall
FVulkanRenderPassBuilder<FVulkanSubpassDescription<VkSubpassDescription2>,FVulkanSubpassDependency<VkSubpassDependency2>,FVulkanAttachmentReference<VkAttachmentReference2>,FVulkanAttachmentDescription<VkAttachmentDescription2>,FVulkanRenderPassCreateInfo<VkRenderPassCreateInfo2>_>
::
FVulkanRenderPassBuilder<FVulkanSubpassDescription<VkSubpassDescription2>,FVulkanSubpassDependency<VkSubpassDependency2>,FVulkanAttachmentReference<VkAttachmentReference2>,FVulkanAttachmentDescription<VkAttachmentDescription2>,FVulkanRenderPassCreateInfo<VkRenderPassCreateInfo2>_>
          (FVulkanRenderPassBuilder<FVulkanSubpassDescription<VkSubpassDescription2>,FVulkanSubpassDependency<VkSubpassDependency2>,FVulkanAttachmentReference<VkAttachmentReference2>,FVulkanAttachmentDescription<VkAttachmentDescription2>,FVulkanRenderPassCreateInfo<VkRenderPassCreateInfo2>_>
           *this,FVulkanDevice *param_1)

{
  FVulkanAttachmentReference<VkAttachmentReference2> *pFVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined4 *)this->SubpassDescriptions = 0x3b9c73ca;
  *(undefined8 *)&this->SubpassDescriptions[0].field_0x4 = 0;
  *(undefined8 *)&this->SubpassDescriptions[0].field_0xc = 0;
  *(undefined8 *)&this->SubpassDescriptions[0].field_0x14 = 0;
  *(undefined8 *)&this->SubpassDescriptions[0].field_0x1c = 0;
  *(undefined8 *)&this->SubpassDescriptions[0].field_0x24 = 0;
  *(undefined8 *)&this->SubpassDescriptions[0].field_0x2c = 0;
  *(undefined8 *)&this->SubpassDescriptions[0].field_0x34 = 0;
  *(undefined8 *)&this->SubpassDescriptions[0].field_0x3c = 0;
  *(undefined8 *)&this->SubpassDescriptions[0].field_0x44 = 0;
  *(undefined8 *)&this->SubpassDescriptions[0].field_0x4c = 0;
  *(undefined4 *)&this->SubpassDescriptions[0].field_0x54 = 0;
  *(undefined4 *)(this->SubpassDescriptions + 1) = 0x3b9c73ca;
  *(undefined8 *)&this->SubpassDescriptions[1].field_0x4 = 0;
  *(undefined8 *)&this->SubpassDescriptions[1].field_0xc = 0;
  *(undefined8 *)&this->SubpassDescriptions[1].field_0x14 = 0;
  *(undefined8 *)&this->SubpassDescriptions[1].field_0x1c = 0;
  *(undefined8 *)&this->SubpassDescriptions[1].field_0x24 = 0;
  *(undefined8 *)&this->SubpassDescriptions[1].field_0x2c = 0;
  *(undefined8 *)&this->SubpassDescriptions[1].field_0x34 = 0;
  *(undefined8 *)&this->SubpassDescriptions[1].field_0x3c = 0;
  *(undefined8 *)&this->SubpassDescriptions[1].field_0x44 = 0;
  *(undefined8 *)&this->SubpassDescriptions[1].field_0x4c = 0;
  *(undefined4 *)&this->SubpassDescriptions[1].field_0x54 = 0;
  *(undefined4 *)(this->SubpassDescriptions + 2) = 0x3b9c73ca;
  *(undefined8 *)&this->SubpassDescriptions[2].field_0x4 = 0;
  *(undefined8 *)&this->SubpassDescriptions[2].field_0xc = 0;
  *(undefined8 *)&this->SubpassDescriptions[2].field_0x14 = 0;
  *(undefined8 *)&this->SubpassDescriptions[2].field_0x1c = 0;
  *(undefined8 *)&this->SubpassDescriptions[2].field_0x24 = 0;
  *(undefined8 *)&this->SubpassDescriptions[2].field_0x2c = 0;
  *(undefined8 *)&this->SubpassDescriptions[2].field_0x34 = 0;
  *(undefined8 *)&this->SubpassDescriptions[2].field_0x3c = 0;
  *(undefined8 *)&this->SubpassDescriptions[2].field_0x44 = 0;
  *(undefined8 *)&this->SubpassDescriptions[2].field_0x4c = 0;
  *(undefined4 *)&this->SubpassDescriptions[2].field_0x54 = 0;
  *(undefined4 *)(this->SubpassDescriptions + 3) = 0x3b9c73ca;
  *(undefined8 *)&this->SubpassDescriptions[3].field_0x4 = 0;
  *(undefined8 *)&this->SubpassDescriptions[3].field_0xc = 0;
  *(undefined8 *)&this->SubpassDescriptions[3].field_0x14 = 0;
  *(undefined8 *)&this->SubpassDescriptions[3].field_0x1c = 0;
  *(undefined8 *)&this->SubpassDescriptions[3].field_0x24 = 0;
  *(undefined8 *)&this->SubpassDescriptions[3].field_0x2c = 0;
  *(undefined8 *)&this->SubpassDescriptions[3].field_0x34 = 0;
  *(undefined8 *)&this->SubpassDescriptions[3].field_0x3c = 0;
  *(undefined8 *)&this->SubpassDescriptions[3].field_0x44 = 0;
  *(undefined8 *)&this->SubpassDescriptions[3].field_0x4c = 0;
  *(undefined4 *)&this->SubpassDescriptions[3].field_0x54 = 0;
  *(undefined4 *)(this->SubpassDescriptions + 4) = 0x3b9c73ca;
  *(undefined8 *)&this->SubpassDescriptions[4].field_0x4 = 0;
  *(undefined8 *)&this->SubpassDescriptions[4].field_0xc = 0;
  *(undefined8 *)&this->SubpassDescriptions[4].field_0x14 = 0;
  *(undefined8 *)&this->SubpassDescriptions[4].field_0x1c = 0;
  *(undefined8 *)&this->SubpassDescriptions[4].field_0x24 = 0;
  *(undefined8 *)&this->SubpassDescriptions[4].field_0x2c = 0;
  *(undefined8 *)&this->SubpassDescriptions[4].field_0x34 = 0;
  *(undefined8 *)&this->SubpassDescriptions[4].field_0x3c = 0;
  *(undefined8 *)&this->SubpassDescriptions[4].field_0x44 = 0;
  *(undefined8 *)&this->SubpassDescriptions[4].field_0x4c = 0;
  *(undefined4 *)&this->SubpassDescriptions[4].field_0x54 = 0;
  *(undefined4 *)(this->SubpassDescriptions + 5) = 0x3b9c73ca;
  *(undefined8 *)&this->SubpassDescriptions[5].field_0x4 = 0;
  *(undefined8 *)&this->SubpassDescriptions[5].field_0xc = 0;
  *(undefined8 *)&this->SubpassDescriptions[5].field_0x14 = 0;
  *(undefined8 *)&this->SubpassDescriptions[5].field_0x1c = 0;
  *(undefined8 *)&this->SubpassDescriptions[5].field_0x24 = 0;
  *(undefined8 *)&this->SubpassDescriptions[5].field_0x2c = 0;
  *(undefined8 *)&this->SubpassDescriptions[5].field_0x34 = 0;
  *(undefined8 *)&this->SubpassDescriptions[5].field_0x3c = 0;
  *(undefined8 *)&this->SubpassDescriptions[5].field_0x44 = 0;
  *(undefined8 *)&this->SubpassDescriptions[5].field_0x4c = 0;
  *(undefined4 *)&this->SubpassDescriptions[5].field_0x54 = 0;
  *(undefined4 *)(this->SubpassDescriptions + 6) = 0x3b9c73ca;
  *(undefined8 *)&this->SubpassDescriptions[6].field_0x4 = 0;
  *(undefined8 *)&this->SubpassDescriptions[6].field_0xc = 0;
  *(undefined8 *)&this->SubpassDescriptions[6].field_0x14 = 0;
  *(undefined8 *)&this->SubpassDescriptions[6].field_0x1c = 0;
  *(undefined8 *)&this->SubpassDescriptions[6].field_0x24 = 0;
  *(undefined8 *)&this->SubpassDescriptions[6].field_0x2c = 0;
  *(undefined8 *)&this->SubpassDescriptions[6].field_0x34 = 0;
  *(undefined8 *)&this->SubpassDescriptions[6].field_0x3c = 0;
  *(undefined8 *)&this->SubpassDescriptions[6].field_0x44 = 0;
  *(undefined8 *)&this->SubpassDescriptions[6].field_0x4c = 0;
  *(undefined4 *)&this->SubpassDescriptions[6].field_0x54 = 0;
  *(undefined4 *)(this->SubpassDescriptions + 7) = 0x3b9c73ca;
  *(undefined8 *)&this->SubpassDescriptions[7].field_0x4 = 0;
  *(undefined8 *)&this->SubpassDescriptions[7].field_0xc = 0;
  *(undefined8 *)&this->SubpassDescriptions[7].field_0x14 = 0;
  *(undefined8 *)&this->SubpassDescriptions[7].field_0x1c = 0;
  *(undefined8 *)&this->SubpassDescriptions[7].field_0x24 = 0;
  *(undefined8 *)&this->SubpassDescriptions[7].field_0x2c = 0;
  *(undefined8 *)&this->SubpassDescriptions[7].field_0x34 = 0;
  *(undefined8 *)&this->SubpassDescriptions[7].field_0x3c = 0;
  *(undefined8 *)&this->SubpassDescriptions[7].field_0x44 = 0;
  *(undefined8 *)&this->SubpassDescriptions[7].field_0x4c = 0;
  *(undefined4 *)&this->SubpassDescriptions[7].field_0x54 = 0;
  *(undefined4 *)this->SubpassDependencies = 0x3b9c73cb;
  *(undefined8 *)&this->SubpassDependencies[0].field_0x4 = 0;
  *(undefined8 *)&this->SubpassDependencies[0].field_0xc = 0;
  *(undefined8 *)&this->SubpassDependencies[0].field_0x14 = 0;
  *(undefined8 *)&this->SubpassDependencies[0].field_0x1c = 0;
  *(undefined8 *)&this->SubpassDependencies[0].field_0x24 = 0;
  *(undefined4 *)&this->SubpassDependencies[0].field_0x2c = 0;
  *(undefined4 *)(this->SubpassDependencies + 1) = 0x3b9c73cb;
  *(undefined8 *)&this->SubpassDependencies[1].field_0x4 = 0;
  *(undefined8 *)&this->SubpassDependencies[1].field_0xc = 0;
  *(undefined8 *)&this->SubpassDependencies[1].field_0x14 = 0;
  *(undefined8 *)&this->SubpassDependencies[1].field_0x1c = 0;
  *(undefined8 *)&this->SubpassDependencies[1].field_0x24 = 0;
  *(undefined4 *)&this->SubpassDependencies[1].field_0x2c = 0;
  *(undefined4 *)(this->SubpassDependencies + 2) = 0x3b9c73cb;
  *(undefined8 *)&this->SubpassDependencies[2].field_0x4 = 0;
  *(undefined8 *)&this->SubpassDependencies[2].field_0xc = 0;
  *(undefined8 *)&this->SubpassDependencies[2].field_0x14 = 0;
  *(undefined8 *)&this->SubpassDependencies[2].field_0x1c = 0;
  *(undefined8 *)&this->SubpassDependencies[2].field_0x24 = 0;
  *(undefined4 *)&this->SubpassDependencies[2].field_0x2c = 0;
  *(undefined4 *)(this->SubpassDependencies + 3) = 0x3b9c73cb;
  pFVar1 = this->InputAttachments2;
  *(undefined8 *)&this->SubpassDependencies[3].field_0x4 = 0;
  lVar2 = 9;
  *(undefined8 *)&this->SubpassDependencies[3].field_0xc = 0;
  lVar3 = 9;
  *(undefined8 *)&this->SubpassDependencies[3].field_0x14 = 0;
  *(undefined8 *)&this->SubpassDependencies[3].field_0x1c = 0;
  *(undefined8 *)&this->SubpassDependencies[3].field_0x24 = 0;
  *(undefined4 *)&this->SubpassDependencies[3].field_0x2c = 0;
  *(undefined4 *)(this->SubpassDependencies + 4) = 0x3b9c73cb;
  *(undefined8 *)&this->SubpassDependencies[4].field_0x4 = 0;
  *(undefined8 *)&this->SubpassDependencies[4].field_0xc = 0;
  *(undefined8 *)&this->SubpassDependencies[4].field_0x14 = 0;
  *(undefined8 *)&this->SubpassDependencies[4].field_0x1c = 0;
  *(undefined8 *)&this->SubpassDependencies[4].field_0x24 = 0;
  *(undefined4 *)&this->SubpassDependencies[4].field_0x2c = 0;
  *(undefined4 *)(this->SubpassDependencies + 5) = 0x3b9c73cb;
  *(undefined8 *)&this->SubpassDependencies[5].field_0x4 = 0;
  *(undefined8 *)&this->SubpassDependencies[5].field_0xc = 0;
  *(undefined8 *)&this->SubpassDependencies[5].field_0x14 = 0;
  *(undefined8 *)&this->SubpassDependencies[5].field_0x1c = 0;
  *(undefined8 *)&this->SubpassDependencies[5].field_0x24 = 0;
  *(undefined4 *)&this->SubpassDependencies[5].field_0x2c = 0;
  *(undefined4 *)(this->SubpassDependencies + 6) = 0x3b9c73cb;
  *(undefined8 *)&this->SubpassDependencies[6].field_0x4 = 0;
  *(undefined8 *)&this->SubpassDependencies[6].field_0xc = 0;
  *(undefined8 *)&this->SubpassDependencies[6].field_0x14 = 0;
  *(undefined8 *)&this->SubpassDependencies[6].field_0x1c = 0;
  *(undefined8 *)&this->SubpassDependencies[6].field_0x24 = 0;
  *(undefined4 *)&this->SubpassDependencies[6].field_0x2c = 0;
  *(undefined4 *)(this->SubpassDependencies + 7) = 0x3b9c73cb;
  *(undefined8 *)&this->SubpassDependencies[7].field_0x4 = 0;
  *(undefined8 *)&this->SubpassDependencies[7].field_0xc = 0;
  *(undefined8 *)&this->SubpassDependencies[7].field_0x14 = 0;
  *(undefined8 *)&this->SubpassDependencies[7].field_0x1c = 0;
  *(undefined8 *)&this->SubpassDependencies[7].field_0x24 = 0;
  *(undefined4 *)&this->SubpassDependencies[7].field_0x2c = 0;
  (this->ColorAttachmentReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColorAttachmentReferences).ArrayNum = 0;
  (this->ColorAttachmentReferences).ArrayMax = 0;
  (this->ResolveAttachmentReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResolveAttachmentReferences).ArrayNum = 0;
  (this->ResolveAttachmentReferences).ArrayMax = 0;
  *(undefined4 *)this->InputAttachments1 = 0x3b9c73c9;
  *(undefined8 *)&this->InputAttachments1[0].field_0x8 = 0;
  *(undefined8 *)&this->InputAttachments1[0].field_0x10 = 0;
  *(undefined4 *)&this->InputAttachments1[0].field_0x18 = 0;
  do {
    *(undefined4 *)pFVar1 = 0x3b9c73c9;
    *(undefined8 *)&pFVar1->field_0x8 = 0;
    *(undefined8 *)&pFVar1->field_0x10 = 0;
    *(undefined4 *)&pFVar1->field_0x18 = 0;
    pFVar1 = pFVar1 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined4 *)&this->DepthStencilAttachment = 0x3b9c73c9;
  pFVar1 = this->InputAttachments3;
  *(undefined8 *)&(this->DepthStencilAttachment).field_0x8 = 0;
  lVar3 = 9;
  *(undefined8 *)&(this->DepthStencilAttachment).field_0x10 = 0;
  *(undefined4 *)&(this->DepthStencilAttachment).field_0x18 = 0;
  *(undefined4 *)&this->DepthStencilAttachmentReference = 0x3b9c73c9;
  *(undefined8 *)&(this->DepthStencilAttachmentReference).field_0x8 = 0;
  *(undefined8 *)&(this->DepthStencilAttachmentReference).field_0x10 = 0;
  *(undefined4 *)&(this->DepthStencilAttachmentReference).field_0x18 = 0;
  (this->AttachmentDescriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttachmentDescriptions).ArrayNum = 0;
  (this->AttachmentDescriptions).ArrayMax = 0;
  do {
    *(undefined4 *)pFVar1 = 0x3b9c73c9;
    *(undefined8 *)&pFVar1->field_0x8 = 0;
    *(undefined8 *)&pFVar1->field_0x10 = 0;
    *(undefined4 *)&pFVar1->field_0x18 = 0;
    pFVar1 = pFVar1 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  pFVar1 = this->ColorAttachments3;
  do {
    *(undefined4 *)pFVar1 = 0x3b9c73c9;
    *(undefined8 *)&pFVar1->field_0x8 = 0;
    *(undefined8 *)&pFVar1->field_0x10 = 0;
    *(undefined4 *)&pFVar1->field_0x18 = 0;
    pFVar1 = pFVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined4 *)&this->ShadingRateAttachmentReference = 0x3b9c73c9;
  *(undefined8 *)&(this->ShadingRateAttachmentReference).field_0x8 = 0;
  *(undefined8 *)&(this->ShadingRateAttachmentReference).field_0x10 = 0;
  *(undefined4 *)&(this->ShadingRateAttachmentReference).field_0x18 = 0;
  *(undefined4 *)&this->FragmentShadingRateAttachmentInfo = 0x3b9e3cd0;
  *(undefined8 *)&(this->FragmentShadingRateAttachmentInfo).field_0x4 = 0;
  *(undefined8 *)&(this->FragmentShadingRateAttachmentInfo).field_0xc = 0;
  *(undefined8 *)&(this->FragmentShadingRateAttachmentInfo).field_0x14 = 0;
  *(undefined4 *)&(this->FragmentShadingRateAttachmentInfo).field_0x1c = 0;
  *(ulonglong *)&(this->FragmentShadingRateAttachmentInfo).field_0x18 =
       CONCAT44(GRHIGlobals.VariableRateShading.ImageTileMinHeight,
                GRHIGlobals.VariableRateShading.ImageTileMinWidth);
  *(undefined4 *)&this->DepthStencilResolveAttachmentReference = 0x3b9c73c9;
  *(undefined8 *)&(this->DepthStencilResolveAttachmentReference).field_0x8 = 0;
  *(undefined8 *)&(this->DepthStencilResolveAttachmentReference).field_0x10 = 0;
  *(undefined4 *)&(this->DepthStencilResolveAttachmentReference).field_0x18 = 0;
  *(undefined4 *)&this->DepthStencilResolveSubpassDesc = 0x3b9dd359;
  *(undefined8 *)&(this->DepthStencilResolveSubpassDesc).field_0x4 = 0;
  *(undefined8 *)&(this->DepthStencilResolveSubpassDesc).field_0xc = 0;
  *(undefined8 *)&(this->DepthStencilResolveSubpassDesc).field_0x14 = 0;
  *(undefined4 *)&(this->DepthStencilResolveSubpassDesc).field_0x1c = 0;
  *(undefined4 *)&this->FragDensityCreateInfo = 0x3b9e1d92;
  *(undefined8 *)&(this->FragDensityCreateInfo).field_0x4 = 0;
  *(undefined8 *)&(this->FragDensityCreateInfo).field_0xc = 0;
  *(undefined4 *)&(this->FragDensityCreateInfo).field_0x14 = 0;
  *(undefined4 *)&this->MultiviewInfo = 0x3b9b9908;
  *(undefined8 *)&(this->MultiviewInfo).field_0x4 = 0;
  *(undefined8 *)&(this->MultiviewInfo).field_0xc = 0;
  *(undefined8 *)&(this->MultiviewInfo).field_0x14 = 0;
  *(undefined8 *)&(this->MultiviewInfo).field_0x1c = 0;
  *(undefined8 *)&(this->MultiviewInfo).field_0x24 = 0;
  *(undefined8 *)&(this->MultiviewInfo).field_0x2c = 0;
  *(undefined8 *)&(this->MultiviewInfo).field_0x34 = 0;
  *(undefined4 *)&(this->MultiviewInfo).field_0x3c = 0;
  *(undefined4 *)&this->CreateInfo = 0x3b9c73cc;
  *(undefined8 *)&(this->CreateInfo).field_0x4 = 0;
  *(undefined8 *)&(this->CreateInfo).field_0xc = 0;
  *(undefined8 *)&(this->CreateInfo).field_0x14 = 0;
  *(undefined8 *)&(this->CreateInfo).field_0x1c = 0;
  *(undefined8 *)&(this->CreateInfo).field_0x24 = 0;
  *(undefined8 *)&(this->CreateInfo).field_0x2c = 0;
  *(undefined8 *)&(this->CreateInfo).field_0x34 = 0;
  *(undefined8 *)&(this->CreateInfo).field_0x3c = 0;
  *(undefined8 *)&(this->CreateInfo).field_0x44 = 0;
  *(undefined4 *)&(this->CreateInfo).field_0x4c = 0;
  this->Device = param_1;
  this->CorrelationMask = 0;
  return this;
}

// FVulkanRenderPassBuilder<FVulkanSubpassDescription<VkSubpassDescription>,FVulkanSubpassDependency<VkSubpassDependency>,FVulkanAttachmentReference<VkAttachmentReference>,FVulkanAttachmentDescription<VkAttachmentDescription>,FVulkanRenderPassCreateInfo<VkRenderPassCreateInfo>_> @ 145b43790

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVulkanRenderPassBuilder<FVulkanSubpassDescription<VkSubpassDescription>,FVulkanSubpassDependency<VkSubpassDependency>,FVulkanAttachmentReference<VkAttachmentReference>,FVulkanAttachmentDescription<VkAttachmentDescription>,FVulkanRenderPassCreateInfo<VkRenderPassCreateInfo>_>
* __thiscall
FVulkanRenderPassBuilder<FVulkanSubpassDescription<VkSubpassDescription>,FVulkanSubpassDependency<VkSubpassDependency>,FVulkanAttachmentReference<VkAttachmentReference>,FVulkanAttachmentDescription<VkAttachmentDescription>,FVulkanRenderPassCreateInfo<VkRenderPassCreateInfo>_>
::
FVulkanRenderPassBuilder<FVulkanSubpassDescription<VkSubpassDescription>,FVulkanSubpassDependency<VkSubpassDependency>,FVulkanAttachmentReference<VkAttachmentReference>,FVulkanAttachmentDescription<VkAttachmentDescription>,FVulkanRenderPassCreateInfo<VkRenderPassCreateInfo>_>
          (FVulkanRenderPassBuilder<FVulkanSubpassDescription<VkSubpassDescription>,FVulkanSubpassDependency<VkSubpassDependency>,FVulkanAttachmentReference<VkAttachmentReference>,FVulkanAttachmentDescription<VkAttachmentDescription>,FVulkanRenderPassCreateInfo<VkRenderPassCreateInfo>_>
           *this,FVulkanDevice *param_1)

{
  FVulkanAttachmentReference<VkAttachmentReference> *pFVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined8 *)this->SubpassDescriptions = 0;
  *(undefined8 *)&this->SubpassDescriptions[0].field_0x8 = 0;
  *(undefined8 *)&this->SubpassDescriptions[0].field_0x10 = 0;
  *(undefined8 *)&this->SubpassDescriptions[0].field_0x18 = 0;
  lVar2 = 9;
  *(undefined8 *)&this->SubpassDescriptions[0].field_0x20 = 0;
  *(undefined8 *)&this->SubpassDescriptions[0].field_0x28 = 0;
  lVar3 = 9;
  *(undefined8 *)&this->SubpassDescriptions[0].field_0x30 = 0;
  *(undefined8 *)&this->SubpassDescriptions[0].field_0x38 = 0;
  *(undefined8 *)&this->SubpassDescriptions[0].field_0x40 = 0;
  *(undefined8 *)(this->SubpassDescriptions + 1) = 0;
  *(undefined8 *)&this->SubpassDescriptions[1].field_0x8 = 0;
  *(undefined8 *)&this->SubpassDescriptions[1].field_0x10 = 0;
  *(undefined8 *)&this->SubpassDescriptions[1].field_0x18 = 0;
  *(undefined8 *)&this->SubpassDescriptions[1].field_0x20 = 0;
  *(undefined8 *)&this->SubpassDescriptions[1].field_0x28 = 0;
  *(undefined8 *)&this->SubpassDescriptions[1].field_0x30 = 0;
  *(undefined8 *)&this->SubpassDescriptions[1].field_0x38 = 0;
  *(undefined8 *)&this->SubpassDescriptions[1].field_0x40 = 0;
  *(undefined8 *)(this->SubpassDescriptions + 2) = 0;
  *(undefined8 *)&this->SubpassDescriptions[2].field_0x8 = 0;
  *(undefined8 *)&this->SubpassDescriptions[2].field_0x10 = 0;
  *(undefined8 *)&this->SubpassDescriptions[2].field_0x18 = 0;
  *(undefined8 *)&this->SubpassDescriptions[2].field_0x20 = 0;
  *(undefined8 *)&this->SubpassDescriptions[2].field_0x28 = 0;
  *(undefined8 *)&this->SubpassDescriptions[2].field_0x30 = 0;
  *(undefined8 *)&this->SubpassDescriptions[2].field_0x38 = 0;
  *(undefined8 *)&this->SubpassDescriptions[2].field_0x40 = 0;
  *(undefined8 *)(this->SubpassDescriptions + 3) = 0;
  *(undefined8 *)&this->SubpassDescriptions[3].field_0x8 = 0;
  *(undefined8 *)&this->SubpassDescriptions[3].field_0x10 = 0;
  *(undefined8 *)&this->SubpassDescriptions[3].field_0x18 = 0;
  *(undefined8 *)&this->SubpassDescriptions[3].field_0x20 = 0;
  *(undefined8 *)&this->SubpassDescriptions[3].field_0x28 = 0;
  *(undefined8 *)&this->SubpassDescriptions[3].field_0x30 = 0;
  *(undefined8 *)&this->SubpassDescriptions[3].field_0x38 = 0;
  *(undefined8 *)&this->SubpassDescriptions[3].field_0x40 = 0;
  *(undefined8 *)(this->SubpassDescriptions + 4) = 0;
  *(undefined8 *)&this->SubpassDescriptions[4].field_0x8 = 0;
  *(undefined8 *)&this->SubpassDescriptions[4].field_0x10 = 0;
  *(undefined8 *)&this->SubpassDescriptions[4].field_0x18 = 0;
  *(undefined8 *)&this->SubpassDescriptions[4].field_0x20 = 0;
  *(undefined8 *)&this->SubpassDescriptions[4].field_0x28 = 0;
  *(undefined8 *)&this->SubpassDescriptions[4].field_0x30 = 0;
  *(undefined8 *)&this->SubpassDescriptions[4].field_0x38 = 0;
  *(undefined8 *)&this->SubpassDescriptions[4].field_0x40 = 0;
  *(undefined8 *)(this->SubpassDescriptions + 5) = 0;
  *(undefined8 *)&this->SubpassDescriptions[5].field_0x8 = 0;
  *(undefined8 *)&this->SubpassDescriptions[5].field_0x10 = 0;
  *(undefined8 *)&this->SubpassDescriptions[5].field_0x18 = 0;
  *(undefined8 *)&this->SubpassDescriptions[5].field_0x20 = 0;
  *(undefined8 *)&this->SubpassDescriptions[5].field_0x28 = 0;
  *(undefined8 *)&this->SubpassDescriptions[5].field_0x30 = 0;
  *(undefined8 *)&this->SubpassDescriptions[5].field_0x38 = 0;
  *(undefined8 *)&this->SubpassDescriptions[5].field_0x40 = 0;
  *(undefined8 *)(this->SubpassDescriptions + 6) = 0;
  *(undefined8 *)&this->SubpassDescriptions[6].field_0x8 = 0;
  *(undefined8 *)&this->SubpassDescriptions[6].field_0x10 = 0;
  *(undefined8 *)&this->SubpassDescriptions[6].field_0x18 = 0;
  *(undefined8 *)&this->SubpassDescriptions[6].field_0x20 = 0;
  *(undefined8 *)&this->SubpassDescriptions[6].field_0x28 = 0;
  *(undefined8 *)&this->SubpassDescriptions[6].field_0x30 = 0;
  *(undefined8 *)&this->SubpassDescriptions[6].field_0x38 = 0;
  *(undefined8 *)&this->SubpassDescriptions[6].field_0x40 = 0;
  *(undefined8 *)(this->SubpassDescriptions + 7) = 0;
  *(undefined8 *)&this->SubpassDescriptions[7].field_0x8 = 0;
  *(undefined8 *)&this->SubpassDescriptions[7].field_0x10 = 0;
  *(undefined8 *)&this->SubpassDescriptions[7].field_0x18 = 0;
  *(undefined8 *)&this->SubpassDescriptions[7].field_0x20 = 0;
  *(undefined8 *)&this->SubpassDescriptions[7].field_0x28 = 0;
  *(undefined8 *)&this->SubpassDescriptions[7].field_0x30 = 0;
  *(undefined8 *)&this->SubpassDescriptions[7].field_0x38 = 0;
  *(undefined8 *)&this->SubpassDescriptions[7].field_0x40 = 0;
  *(undefined8 *)this->SubpassDependencies = 0;
  *(undefined8 *)&this->SubpassDependencies[0].field_0x8 = 0;
  *(undefined8 *)&this->SubpassDependencies[0].field_0x10 = 0;
  *(undefined4 *)&this->SubpassDependencies[0].field_0x18 = 0;
  *(undefined8 *)(this->SubpassDependencies + 1) = 0;
  *(undefined8 *)&this->SubpassDependencies[1].field_0x8 = 0;
  *(undefined8 *)&this->SubpassDependencies[1].field_0x10 = 0;
  *(undefined4 *)&this->SubpassDependencies[1].field_0x18 = 0;
  *(undefined8 *)(this->SubpassDependencies + 2) = 0;
  *(undefined8 *)&this->SubpassDependencies[2].field_0x8 = 0;
  *(undefined8 *)&this->SubpassDependencies[2].field_0x10 = 0;
  *(undefined4 *)&this->SubpassDependencies[2].field_0x18 = 0;
  *(undefined8 *)(this->SubpassDependencies + 3) = 0;
  *(undefined8 *)&this->SubpassDependencies[3].field_0x8 = 0;
  *(undefined8 *)&this->SubpassDependencies[3].field_0x10 = 0;
  *(undefined4 *)&this->SubpassDependencies[3].field_0x18 = 0;
  *(undefined8 *)(this->SubpassDependencies + 4) = 0;
  *(undefined8 *)&this->SubpassDependencies[4].field_0x8 = 0;
  *(undefined8 *)&this->SubpassDependencies[4].field_0x10 = 0;
  *(undefined4 *)&this->SubpassDependencies[4].field_0x18 = 0;
  *(undefined8 *)(this->SubpassDependencies + 5) = 0;
  *(undefined8 *)&this->SubpassDependencies[5].field_0x8 = 0;
  *(undefined8 *)&this->SubpassDependencies[5].field_0x10 = 0;
  *(undefined4 *)&this->SubpassDependencies[5].field_0x18 = 0;
  *(undefined8 *)(this->SubpassDependencies + 6) = 0;
  *(undefined8 *)&this->SubpassDependencies[6].field_0x8 = 0;
  *(undefined8 *)&this->SubpassDependencies[6].field_0x10 = 0;
  *(undefined4 *)&this->SubpassDependencies[6].field_0x18 = 0;
  *(undefined8 *)(this->SubpassDependencies + 7) = 0;
  *(undefined8 *)&this->SubpassDependencies[7].field_0x8 = 0;
  *(undefined8 *)&this->SubpassDependencies[7].field_0x10 = 0;
  *(undefined4 *)&this->SubpassDependencies[7].field_0x18 = 0;
  pFVar1 = this->InputAttachments2;
  (this->ColorAttachmentReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColorAttachmentReferences).ArrayNum = 0;
  (this->ColorAttachmentReferences).ArrayMax = 0;
  (this->ResolveAttachmentReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResolveAttachmentReferences).ArrayNum = 0;
  (this->ResolveAttachmentReferences).ArrayMax = 0;
  this->InputAttachments1[0] = (FVulkanAttachmentReference<VkAttachmentReference>)0x0;
  do {
    *pFVar1 = (FVulkanAttachmentReference<VkAttachmentReference>)0x0;
    pFVar1 = pFVar1 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  this->DepthStencilAttachment = (FVulkanAttachmentReference<VkAttachmentReference>)0x0;
  pFVar1 = this->InputAttachments3;
  this->DepthStencilAttachmentReference = (FVulkanAttachmentReference<VkAttachmentReference>)0x0;
  lVar3 = 9;
  (this->AttachmentDescriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttachmentDescriptions).ArrayNum = 0;
  (this->AttachmentDescriptions).ArrayMax = 0;
  do {
    *pFVar1 = (FVulkanAttachmentReference<VkAttachmentReference>)0x0;
    pFVar1 = pFVar1 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  pFVar1 = this->ColorAttachments3;
  do {
    *pFVar1 = (FVulkanAttachmentReference<VkAttachmentReference>)0x0;
    pFVar1 = pFVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined4 *)&this->ShadingRateAttachmentReference = 0x3b9c73c9;
  *(undefined8 *)&(this->ShadingRateAttachmentReference).field_0x8 = 0;
  *(undefined8 *)&(this->ShadingRateAttachmentReference).field_0x10 = 0;
  *(undefined4 *)&(this->ShadingRateAttachmentReference).field_0x18 = 0;
  *(undefined4 *)&this->FragmentShadingRateAttachmentInfo = 0x3b9e3cd0;
  *(undefined8 *)&(this->FragmentShadingRateAttachmentInfo).field_0x4 = 0;
  *(undefined8 *)&(this->FragmentShadingRateAttachmentInfo).field_0xc = 0;
  *(undefined8 *)&(this->FragmentShadingRateAttachmentInfo).field_0x14 = 0;
  *(undefined4 *)&(this->FragmentShadingRateAttachmentInfo).field_0x1c = 0;
  *(ulonglong *)&(this->FragmentShadingRateAttachmentInfo).field_0x18 =
       CONCAT44(GRHIGlobals.VariableRateShading.ImageTileMinHeight,
                GRHIGlobals.VariableRateShading.ImageTileMinWidth);
  *(undefined4 *)&this->DepthStencilResolveAttachmentReference = 0x3b9c73c9;
  *(undefined8 *)&(this->DepthStencilResolveAttachmentReference).field_0x8 = 0;
  *(undefined8 *)&(this->DepthStencilResolveAttachmentReference).field_0x10 = 0;
  *(undefined4 *)&(this->DepthStencilResolveAttachmentReference).field_0x18 = 0;
  *(undefined4 *)&this->DepthStencilResolveSubpassDesc = 0x3b9dd359;
  *(undefined8 *)&(this->DepthStencilResolveSubpassDesc).field_0x4 = 0;
  *(undefined8 *)&(this->DepthStencilResolveSubpassDesc).field_0xc = 0;
  *(undefined8 *)&(this->DepthStencilResolveSubpassDesc).field_0x14 = 0;
  *(undefined4 *)&(this->DepthStencilResolveSubpassDesc).field_0x1c = 0;
  *(undefined4 *)&this->FragDensityCreateInfo = 0x3b9e1d92;
  *(undefined8 *)&(this->FragDensityCreateInfo).field_0x4 = 0;
  *(undefined8 *)&(this->FragDensityCreateInfo).field_0xc = 0;
  *(undefined4 *)&(this->FragDensityCreateInfo).field_0x14 = 0;
  *(undefined4 *)&this->MultiviewInfo = 0x3b9b9908;
  *(undefined8 *)&(this->MultiviewInfo).field_0x4 = 0;
  *(undefined8 *)&(this->MultiviewInfo).field_0xc = 0;
  *(undefined8 *)&(this->MultiviewInfo).field_0x14 = 0;
  *(undefined8 *)&(this->MultiviewInfo).field_0x1c = 0;
  *(undefined8 *)&(this->MultiviewInfo).field_0x24 = 0;
  *(undefined8 *)&(this->MultiviewInfo).field_0x2c = 0;
  *(undefined8 *)&(this->MultiviewInfo).field_0x34 = 0;
  *(undefined4 *)&(this->MultiviewInfo).field_0x3c = 0;
  *(undefined4 *)&this->CreateInfo = 0x26;
  *(undefined8 *)&(this->CreateInfo).field_0x4 = 0;
  *(undefined8 *)&(this->CreateInfo).field_0xc = 0;
  *(undefined8 *)&(this->CreateInfo).field_0x14 = 0;
  *(undefined8 *)&(this->CreateInfo).field_0x1c = 0;
  *(undefined8 *)&(this->CreateInfo).field_0x24 = 0;
  *(undefined8 *)&(this->CreateInfo).field_0x2c = 0;
  *(undefined8 *)&(this->CreateInfo).field_0x34 = 0;
  *(undefined4 *)&(this->CreateInfo).field_0x3c = 0;
  this->Device = param_1;
  this->CorrelationMask = 0;
  return this;
}

// BuildCreateInfo @ 145b58df0

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVulkanRenderPassBuilder<FVulkanSubpassDescription<VkSubpassDescription2>,FVulkanSubpassDependency<VkSubpassDependency2>,FVulkanAttachmentReference<VkAttachmentReference2>,FVulkanAttachmentDescription<VkAttachmentDescription2>,FVulkanRenderPassCreateInfo<VkRenderPassCreateInfo2>_>
::BuildCreateInfo(FVulkanRenderPassBuilder<FVulkanSubpassDescription<VkSubpassDescription2>,FVulkanSubpassDependency<VkSubpassDependency2>,FVulkanAttachmentReference<VkAttachmentReference2>,FVulkanAttachmentDescription<VkAttachmentDescription2>,FVulkanRenderPassCreateInfo<VkRenderPassCreateInfo2>_>
                  *this,FVulkanRenderTargetLayout *param_1)

{
  int *piVar1;
  TArray<FVulkanAttachmentReference<VkAttachmentReference2>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FVulkanAttachmentReference<VkAttachmentReference2>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FVulkanAttachmentDescription<VkAttachmentDescription2>,TSizedDefaultAllocator<32>_> *pTVar4
  ;
  uint *puVar5;
  ESubpassHint EVar6;
  uchar uVar7;
  byte bVar8;
  VkFormat VVar9;
  FScriptContainerElement *pFVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  VkAttachmentReferenceStencilLayout *pVVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  uint uVar21;
  int iVar22;
  VkImageLayout VVar23;
  VkAttachmentReference *pVVar24;
  FVulkanDevice *pFVar25;
  VkAttachmentReference *pVVar26;
  VkAttachmentReference *pVVar27;
  FScriptContainerElement *pFVar28;
  FVulkanRenderTargetLayout *pFVar29;
  VkAttachmentReferenceStencilLayout *pVVar30;
  int iVar31;
  uint uVar32;
  ulonglong uVar33;
  FVulkanAttachmentReference<VkAttachmentReference2> *pFVar34;
  uint uVar35;
  undefined4 *puVar36;
  uint uVar37;
  VkAttachmentReferenceStencilLayout *pVVar38;
  ulonglong uVar39;
  VkAttachmentReferenceStencilLayout *pVVar40;
  longlong lVar41;
  VkAttachmentDescriptionStencilLayout *pVVar42;
  bool bVar43;
  undefined4 uVar44;
  uint local_138;
  uint local_134;
  undefined4 local_12c;
  undefined4 local_120;
  undefined4 uStack_11c;
  VkAttachmentDescriptionStencilLayout *pVStack_118;
  uint local_110;
  VkFormat VStack_10c;
  VkSampleCountFlagBits VStack_108;
  VkAttachmentLoadOp VStack_104;
  VkAttachmentStoreOp local_100;
  VkAttachmentLoadOp VStack_fc;
  VkAttachmentStoreOp VStack_f8;
  VkImageLayout VStack_f4;
  VkImageLayout local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  uint local_d8;
  VkFormat VStack_d4;
  VkSampleCountFlagBits VStack_d0;
  VkAttachmentLoadOp VStack_cc;
  VkAttachmentStoreOp local_c8;
  VkAttachmentLoadOp VStack_c4;
  VkAttachmentStoreOp VStack_c0;
  VkImageLayout VStack_bc;
  VkImageLayout local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  EVar6 = param_1->SubpassHint;
  pVVar27 = (VkAttachmentReference *)0x0;
  local_134 = 0;
  uVar21 = (1 << (param_1->MultiViewCount & 0x1f)) - 1;
  if (GRHIGlobals.VariableRateShading.SupportsAttachment) {
    pVVar24 = &param_1->FragmentDensityReference;
    if (param_1->bHasFragmentDensityAttachment == '\0') {
      pVVar24 = pVVar27;
    }
    if (((pVVar24 == (VkAttachmentReference *)0x0) ||
        (pFVar25 = this->Device,
        (*(byte *)&(pFVar25->OptionalDeviceExtensions).field0_0x0 & 0x40) == 0)) ||
       ((pFVar25->OptionalDeviceExtensionProperties).FragmentShadingRateFeatures.
        attachmentFragmentShadingRate != 1)) goto LAB_145b58e74;
    bVar20 = true;
  }
  else {
LAB_145b58e74:
    pFVar25 = this->Device;
    bVar20 = false;
  }
  if (((GRHIGlobals.SupportsDepthStencilResolve) &&
      (((pFVar25->OptionalDeviceExtensions).field0_0x0.Packed & 0x100000000000) != 0)) &&
     (param_1->bHasDepthStencilResolve != '\0')) {
    bVar19 = true;
  }
  else {
    bVar19 = false;
  }
  bVar43 = (EVar6 - DepthReadSubpass & 0xfd) == 0;
  pVVar24 = &param_1->DepthReference;
  if (param_1->bHasDepthStencil == '\0') {
    pVVar24 = pVVar27;
  }
  if (bVar20) {
    uVar7 = param_1->bHasFragmentDensityAttachment;
    *(undefined4 *)&this->ShadingRateAttachmentReference = 0x3b9c73c9;
    *(undefined8 *)&(this->ShadingRateAttachmentReference).field_0x8 = 0;
    pVVar26 = &param_1->FragmentDensityReference;
    if (uVar7 == '\0') {
      pVVar26 = pVVar27;
    }
    *(uint *)&(this->ShadingRateAttachmentReference).field_0x10 = pVVar26->attachment;
    *(VkImageLayout *)&(this->ShadingRateAttachmentReference).field_0x14 = pVVar26->layout;
    *(undefined4 *)&(this->ShadingRateAttachmentReference).field_0x18 = 1;
    *(FVulkanAttachmentReference<VkAttachmentReference2> **)
     &(this->FragmentShadingRateAttachmentInfo).field_0x10 = &this->ShadingRateAttachmentReference;
  }
  if (bVar19) {
    uVar7 = param_1->bHasDepthStencilResolve;
    *(undefined4 *)&this->DepthStencilResolveAttachmentReference = 0x3b9c73c9;
    *(undefined8 *)&(this->DepthStencilResolveAttachmentReference).field_0x8 = 0;
    pVVar26 = &param_1->DepthStencilResolveReference;
    if (uVar7 == '\0') {
      pVVar26 = pVVar27;
    }
    *(uint *)&(this->DepthStencilResolveAttachmentReference).field_0x10 = pVVar26->attachment;
    *(VkImageLayout *)&(this->DepthStencilResolveAttachmentReference).field_0x14 = pVVar26->layout;
    *(undefined4 *)&(this->DepthStencilResolveAttachmentReference).field_0x18 = 0;
    *(undefined4 *)&(this->DepthStencilResolveSubpassDesc).field_0x10 = 1;
    *(undefined4 *)&(this->DepthStencilResolveSubpassDesc).field_0x14 = 1;
    *(FVulkanAttachmentReference<VkAttachmentReference2> **)
     &(this->DepthStencilResolveSubpassDesc).field_0x18 =
         &this->DepthStencilResolveAttachmentReference;
  }
  bVar8 = param_1->NumColorAttachments;
  if (bVar8 != 0) {
    pTVar2 = &this->ColorAttachmentReferences;
    uVar39 = (ulonglong)bVar8;
    do {
      local_b0 = 0x3b9c73c9;
      pFVar29 = (FVulkanRenderTargetLayout *)0x0;
      if (param_1->NumColorAttachments != '\0') {
        pFVar29 = param_1;
      }
      uStack_a8 = 0;
      uStack_98 = 0;
      local_a0 = *(undefined4 *)
                  ((longlong)&pFVar29->ColorReferences[0].attachment +
                  (longlong)&pVVar27->attachment);
      uStack_9c = *(undefined4 *)((longlong)&pVVar27->layout + (longlong)pFVar29);
      pFVar28 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar28 <= (FScriptContainerElement *)&local_b0) &&
          ((FScriptContainerElement *)&local_b0 <
           pFVar28 + (longlong)(this->ColorAttachmentReferences).ArrayMax * 0x20)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar22 = (this->ColorAttachmentReferences).ArrayNum;
      if (iVar22 == (this->ColorAttachmentReferences).ArrayMax) {
        iVar22 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&pTVar2->AllocatorInstance,
                            &(this->ColorAttachmentReferences).ArrayMax);
      }
      (this->ColorAttachmentReferences).ArrayNum = iVar22 + 1;
      pFVar10 = (pTVar2->AllocatorInstance).Data;
      pFVar28 = pFVar10 + (longlong)iVar22 * 0x20;
      *(ulonglong *)pFVar28 = CONCAT44(uStack_ac,local_b0);
      *(undefined8 *)(pFVar28 + 8) = uStack_a8;
      pFVar10 = pFVar10 + (longlong)iVar22 * 0x20 + 0x10;
      *(ulonglong *)pFVar10 = CONCAT44(uStack_9c,local_a0);
      *(ulonglong *)(pFVar10 + 8) = CONCAT44(uStack_94,uStack_98);
      pVVar26 = param_1->ResolveReferences;
      if (param_1->bHasResolveAttachments == '\0') {
        pVVar26 = (VkAttachmentReference *)0x0;
      }
      if (pVVar26 != (VkAttachmentReference *)0x0) {
        local_90 = 0x3b9c73c9;
        uStack_88 = 0;
        pVVar26 = param_1->ResolveReferences;
        if (param_1->bHasResolveAttachments == '\0') {
          pVVar26 = (VkAttachmentReference *)0x0;
        }
        uStack_78 = 0;
        pTVar3 = &this->ResolveAttachmentReferences;
        local_80 = *(undefined4 *)((longlong)&pVVar27->attachment + (longlong)&pVVar26->attachment);
        uStack_7c = *(undefined4 *)((longlong)&pVVar26->layout + (longlong)pVVar27);
        pFVar28 = (pTVar3->AllocatorInstance).Data;
        if (((pFVar28 <= (FScriptContainerElement *)&local_90) &&
            ((FScriptContainerElement *)&local_90 <
             pFVar28 + (longlong)(this->ResolveAttachmentReferences).ArrayMax * 0x20)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar22 = (this->ResolveAttachmentReferences).ArrayNum;
        piVar1 = &(this->ResolveAttachmentReferences).ArrayMax;
        if (iVar22 == *piVar1) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->ResolveAttachmentReferences).ArrayNum = iVar22 + 1;
        pFVar10 = (pTVar3->AllocatorInstance).Data;
        pFVar28 = pFVar10 + (longlong)iVar22 * 0x20;
        *(ulonglong *)pFVar28 = CONCAT44(uStack_8c,local_90);
        *(undefined8 *)(pFVar28 + 8) = uStack_88;
        pFVar10 = pFVar10 + (longlong)iVar22 * 0x20 + 0x10;
        *(ulonglong *)pFVar10 = CONCAT44(uStack_7c,local_80);
        *(ulonglong *)(pFVar10 + 8) = CONCAT44(uStack_74,uStack_78);
      }
      pVVar27 = pVVar27 + 1;
      uVar39 = uVar39 - 1;
    } while (uVar39 != 0);
  }
  uVar35 = (uint)bVar8;
  pVVar38 = (VkAttachmentReferenceStencilLayout *)0x0;
  if ((EVar6 == CustomResolveSubpass) && (1 < uVar35)) {
    uVar35 = uVar35 - 1;
  }
  local_12c = 0;
  uVar32 = 0xffffffff;
  pVVar40 = pVVar38;
  if (pVVar24 != (VkAttachmentReference *)0x0) {
    uVar39 = (this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x2020100000000;
    pVVar30 = (VkAttachmentReferenceStencilLayout *)&param_1->DepthReference;
    pVVar17 = &param_1->StencilReference;
    if (param_1->bHasDepthStencil == '\0') {
      pVVar30 = pVVar38;
      pVVar17 = pVVar38;
    }
    if ((pVVar17 == (VkAttachmentReferenceStencilLayout *)0x0) ||
       (pVVar17->stencilLayout == VK_IMAGE_LAYOUT_UNDEFINED)) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    *(undefined4 *)&this->DepthStencilAttachmentReference = 0x3b9c73c9;
    if ((uVar39 == 0x2020100000000) && (bVar18)) {
      *(VkAttachmentReferenceStencilLayout **)&(this->DepthStencilAttachmentReference).field_0x8 =
           pVVar17;
      *(VkStructureType *)&(this->DepthStencilAttachmentReference).field_0x10 = pVVar30->sType;
LAB_145b5923c:
      VVar23 = *(VkImageLayout *)&pVVar30->field_0x4;
    }
    else {
      *(undefined8 *)&(this->DepthStencilAttachmentReference).field_0x8 = 0;
      *(VkStructureType *)&(this->DepthStencilAttachmentReference).field_0x10 = pVVar30->sType;
      if ((uVar39 == 0x2020100000000) || (!bVar18)) goto LAB_145b5923c;
      VVar23 = VulkanRHI::GetMergedDepthStencilLayout
                         (*(VkImageLayout *)&pVVar30->field_0x4,pVVar17->stencilLayout);
    }
    *(VkImageLayout *)&(this->DepthStencilAttachmentReference).field_0x14 = VVar23;
    *(undefined4 *)&(this->DepthStencilAttachmentReference).field_0x18 = 0;
    if ((bVar43) || (EVar6 == DeferredShadingSubpass)) {
      pVVar38 = (VkAttachmentReferenceStencilLayout *)0x3b9c9308;
      pVVar40 = (VkAttachmentReferenceStencilLayout *)&DAT_00000002;
      pVVar27 = &param_1->DepthReference;
      if (param_1->bHasDepthStencil == '\0') {
        pVVar27 = (VkAttachmentReference *)0x0;
      }
      local_12c = 2;
      uVar32 = pVVar27->attachment;
      *(uint *)&(this->DepthStencilAttachment).field_0x10 = uVar32;
      *(undefined4 *)&(this->DepthStencilAttachment).field_0x18 = 2;
      *(undefined4 *)&(this->DepthStencilAttachment).field_0x14 = 0x3b9c9308;
    }
  }
  local_138 = 1;
  if (uVar35 == 0xffffffff) {
    uVar35 = (this->ColorAttachmentReferences).ArrayNum;
  }
  *(uint *)&this->SubpassDescriptions[0].field_0x28 = uVar35;
  *(FScriptContainerElement **)&this->SubpassDescriptions[0].field_0x30 =
       (this->ColorAttachmentReferences).AllocatorInstance.Data;
  if (pVVar24 != (VkAttachmentReference *)0x0) {
    *(FVulkanAttachmentReference<VkAttachmentReference2> **)&this->SubpassDescriptions[0].field_0x40
         = &this->DepthStencilAttachmentReference;
  }
  if ((!bVar43) && (bVar19)) {
    uVar11 = *(undefined8 *)&this->SubpassDescriptions[0].field_0x8;
    *(FVulkanDepthStencilResolveSubpassDesc **)&this->SubpassDescriptions[0].field_0x8 =
         &this->DepthStencilResolveSubpassDesc;
    *(undefined8 *)&(this->DepthStencilResolveSubpassDesc).field_0x8 = uVar11;
  }
  if (bVar20) {
    uVar11 = *(undefined8 *)&this->SubpassDescriptions[0].field_0x8;
    *(FVulkanFragmentShadingRateAttachmentInfo **)&this->SubpassDescriptions[0].field_0x8 =
         &this->FragmentShadingRateAttachmentInfo;
    *(undefined8 *)&(this->FragmentShadingRateAttachmentInfo).field_0x8 = uVar11;
  }
  *(uint *)&this->SubpassDescriptions[0].field_0x18 = uVar21;
  uVar44 = SUB84(pVVar38,0);
  if (bVar43) {
    *(undefined4 *)&this->SubpassDescriptions[1].field_0x28 = 1;
    *(FScriptContainerElement **)&this->SubpassDescriptions[1].field_0x30 =
         (this->ColorAttachmentReferences).AllocatorInstance.Data;
    pVVar27 = &param_1->DepthReference;
    local_138 = 2;
    if (param_1->bHasDepthStencil == '\0') {
      pVVar27 = (VkAttachmentReference *)0x0;
    }
    if ((pVVar27 == (VkAttachmentReference *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("RTLayout.GetDepthAttachmentReference()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderpass.h"
                            ,0x260,L""), bVar18)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    *(uint *)&this->InputAttachments1[0].field_0x10 = uVar32;
    *(undefined4 *)&this->InputAttachments1[0].field_0x14 = uVar44;
    *(int *)&this->InputAttachments1[0].field_0x18 = (int)pVVar40;
    *(FVulkanAttachmentReference<VkAttachmentReference2> **)&this->SubpassDescriptions[1].field_0x20
         = this->InputAttachments1;
    *(undefined4 *)&this->SubpassDescriptions[1].field_0x1c = 1;
    *(FVulkanAttachmentReference<VkAttachmentReference2> **)&this->SubpassDescriptions[1].field_0x40
         = &this->DepthStencilAttachment;
    if ((bVar19) && (EVar6 != CustomResolveSubpass)) {
      uVar11 = *(undefined8 *)&this->SubpassDescriptions[1].field_0x8;
      *(FVulkanDepthStencilResolveSubpassDesc **)&this->SubpassDescriptions[1].field_0x8 =
           &this->DepthStencilResolveSubpassDesc;
      *(undefined8 *)&(this->DepthStencilResolveSubpassDesc).field_0x8 = uVar11;
    }
    if (bVar20) {
      uVar11 = *(undefined8 *)&this->SubpassDescriptions[1].field_0x8;
      *(FVulkanFragmentShadingRateAttachmentInfo **)&this->SubpassDescriptions[1].field_0x8 =
           &this->FragmentShadingRateAttachmentInfo;
      *(undefined8 *)&(this->FragmentShadingRateAttachmentInfo).field_0x8 = uVar11;
    }
    *(uint *)&this->SubpassDescriptions[1].field_0x18 = uVar21;
    *(undefined4 *)&this->SubpassDependencies[0].field_0x10 = 0;
    local_134 = 1;
    *(undefined4 *)&this->SubpassDependencies[0].field_0x14 = 1;
    *(undefined4 *)&this->SubpassDependencies[0].field_0x18 = 0x300;
    *(undefined4 *)&this->SubpassDependencies[0].field_0x1c = 0x80;
    *(undefined4 *)&this->SubpassDependencies[0].field_0x20 = 0x400;
    *(undefined4 *)&this->SubpassDependencies[0].field_0x24 = 0x10;
    *(undefined4 *)&this->SubpassDependencies[0].field_0x28 = 1;
  }
  pFVar34 = &this->DepthStencilAttachment;
  if (EVar6 == DeferredShadingSubpass) {
    uVar39 = (ulonglong)local_138;
    uVar35 = local_138 + 1;
    *(int *)&this->SubpassDescriptions[uVar39].field_0x28 =
         (this->ColorAttachmentReferences).ArrayNum;
    *(FScriptContainerElement **)&this->SubpassDescriptions[uVar39].field_0x30 =
         (this->ColorAttachmentReferences).AllocatorInstance.Data;
    *(FVulkanAttachmentReference<VkAttachmentReference2> **)
     &this->SubpassDescriptions[uVar39].field_0x40 = pFVar34;
    *(uint *)&this->InputAttachments1[0].field_0x10 = uVar32;
    *(undefined4 *)&this->InputAttachments1[0].field_0x14 = uVar44;
    *(int *)&this->InputAttachments1[0].field_0x18 = (int)pVVar40;
    *(FVulkanAttachmentReference<VkAttachmentReference2> **)
     &this->SubpassDescriptions[uVar39].field_0x20 = this->InputAttachments1;
    *(undefined4 *)&this->SubpassDescriptions[uVar39].field_0x1c = 1;
    if (bVar20) {
      uVar11 = *(undefined8 *)&this->SubpassDescriptions[uVar39].field_0x8;
      *(FVulkanFragmentShadingRateAttachmentInfo **)&this->SubpassDescriptions[uVar39].field_0x8 =
           &this->FragmentShadingRateAttachmentInfo;
      *(undefined8 *)&(this->FragmentShadingRateAttachmentInfo).field_0x8 = uVar11;
    }
    uVar33 = (ulonglong)local_134;
    *(uint *)&this->SubpassDescriptions[uVar39].field_0x18 = uVar21;
    local_138 = local_138 + 2;
    uVar37 = local_134 + 1;
    *(undefined4 *)&this->SubpassDependencies[uVar33].field_0x10 = 0;
    *(undefined4 *)&this->SubpassDependencies[uVar33].field_0x14 = 1;
    *(undefined4 *)&this->SubpassDependencies[uVar33].field_0x18 = 0x700;
    *(undefined4 *)&this->SubpassDependencies[uVar33].field_0x1c = 0x80;
    *(undefined4 *)&this->SubpassDependencies[uVar33].field_0x20 = 0x500;
    *(undefined4 *)&this->SubpassDependencies[uVar33].field_0x24 = 0x10;
    *(undefined4 *)&this->SubpassDependencies[uVar33].field_0x28 = 1;
    *(undefined4 *)&this->SubpassDescriptions[uVar35].field_0x28 = 1;
    *(FScriptContainerElement **)&this->SubpassDescriptions[uVar35].field_0x30 =
         (this->ColorAttachmentReferences).AllocatorInstance.Data;
    *(FVulkanAttachmentReference<VkAttachmentReference2> **)
     &this->SubpassDescriptions[uVar35].field_0x40 = pFVar34;
    *(undefined4 *)&this->InputAttachments2[0].field_0x18 = local_12c;
    iVar22 = (this->ColorAttachmentReferences).ArrayNum;
    *(uint *)&this->InputAttachments2[0].field_0x10 = uVar32;
    lVar41 = (longlong)(iVar22 + 1);
    *(undefined4 *)&this->InputAttachments2[0].field_0x14 = uVar44;
    *(undefined4 *)&this->InputAttachments2[1].field_0x10 = 0xffffffff;
    *(undefined8 *)&this->InputAttachments2[1].field_0x14 = 0;
    if (2 < lVar41) {
      puVar36 = (undefined4 *)&this->InputAttachments2[2].field_0x14;
      lVar41 = lVar41 + -2;
      iVar31 = 1;
      do {
        uVar32 = 0;
        if (iVar31 < (this->ColorAttachmentReferences).ArrayNum) {
          uVar32 = (uint)-(iVar31 + 1) >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        puVar36[-1] = *(undefined4 *)
                       ((this->ColorAttachmentReferences).AllocatorInstance.Data +
                        (-0x4a4 - (longlong)this) + (longlong)puVar36);
        *puVar36 = 5;
        puVar36[1] = 1;
        puVar36 = puVar36 + 8;
        lVar41 = lVar41 + -1;
        iVar31 = iVar31 + 1;
      } while (lVar41 != 0);
    }
    *(FVulkanAttachmentReference<VkAttachmentReference2> **)
     &this->SubpassDescriptions[uVar35].field_0x20 = this->InputAttachments2;
    *(int *)&this->SubpassDescriptions[uVar35].field_0x1c = iVar22 + 1;
    if (bVar20) {
      uVar11 = *(undefined8 *)&this->SubpassDescriptions[uVar35].field_0x8;
      *(FVulkanFragmentShadingRateAttachmentInfo **)&this->SubpassDescriptions[uVar35].field_0x8 =
           &this->FragmentShadingRateAttachmentInfo;
      *(undefined8 *)&(this->FragmentShadingRateAttachmentInfo).field_0x8 = uVar11;
    }
    *(uint *)&this->SubpassDescriptions[uVar35].field_0x18 = uVar21;
    local_134 = local_134 + 2;
    *(undefined4 *)&this->SubpassDependencies[uVar37].field_0x10 = 1;
    *(undefined4 *)&this->SubpassDependencies[uVar37].field_0x14 = 2;
    *(undefined4 *)&this->SubpassDependencies[uVar37].field_0x18 = 0x400;
    *(undefined4 *)&this->SubpassDependencies[uVar37].field_0x1c = 0x80;
    *(undefined4 *)&this->SubpassDependencies[uVar37].field_0x20 = 0x100;
    *(undefined4 *)&this->SubpassDependencies[uVar37].field_0x24 = 0x10;
    if (GVulkanInputAttachmentShaderRead == 1) {
      *(undefined4 *)&this->SubpassDependencies[uVar37].field_0x24 = 0x30;
    }
    *(undefined4 *)&this->SubpassDependencies[uVar37].field_0x28 = 1;
  }
  else if (EVar6 == CustomResolveSubpass) {
    if (((this->ColorAttachmentReferences).ArrayNum < 2) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    *(undefined4 *)&this->ColorAttachments3[0].field_0x10 =
         *(undefined4 *)((this->ColorAttachmentReferences).AllocatorInstance.Data + 0x30);
    *(undefined4 *)&this->InputAttachments3[0].field_0x14 = 0;
    *(undefined4 *)&this->InputAttachments3[0].field_0x18 = 0;
    *(undefined4 *)&this->ColorAttachments3[0].field_0x14 = 2;
    *(undefined4 *)&this->ColorAttachments3[0].field_0x18 = 1;
    *(undefined4 *)&this->InputAttachments3[0].field_0x10 = 0xffffffff;
    if (((this->ColorAttachmentReferences).ArrayNum < 1) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    *(undefined4 *)&this->InputAttachments3[1].field_0x10 =
         *(undefined4 *)((this->ColorAttachmentReferences).AllocatorInstance.Data + 0x10);
    *(undefined4 *)&this->InputAttachments3[1].field_0x14 = 5;
    *(undefined4 *)&this->InputAttachments3[1].field_0x18 = 1;
    *(FVulkanAttachmentReference<VkAttachmentReference2> **)
     &this->SubpassDescriptions[local_138].field_0x40 = pFVar34;
    if (bVar19) {
      uVar11 = *(undefined8 *)&this->SubpassDescriptions[local_138].field_0x8;
      *(FVulkanDepthStencilResolveSubpassDesc **)&this->SubpassDescriptions[local_138].field_0x8 =
           &this->DepthStencilResolveSubpassDesc;
      *(undefined8 *)&(this->DepthStencilResolveSubpassDesc).field_0x8 = uVar11;
    }
    uVar39 = (ulonglong)local_134;
    *(FVulkanAttachmentReference<VkAttachmentReference2> **)
     &this->SubpassDescriptions[local_138].field_0x20 = this->InputAttachments3;
    *(undefined4 *)&this->SubpassDescriptions[local_138].field_0x1c = 2;
    *(undefined4 *)&this->SubpassDescriptions[local_138].field_0x28 = 1;
    *(FVulkanAttachmentReference<VkAttachmentReference2> **)
     &this->SubpassDescriptions[local_138].field_0x30 = this->ColorAttachments3;
    local_134 = local_134 + 1;
    *(uint *)&this->SubpassDescriptions[local_138].field_0x18 = uVar21;
    *(undefined4 *)&this->SubpassDependencies[uVar39].field_0x10 = 1;
    *(undefined4 *)&this->SubpassDependencies[uVar39].field_0x14 = 2;
    *(undefined4 *)&this->SubpassDependencies[uVar39].field_0x18 = 0x400;
    *(undefined4 *)&this->SubpassDependencies[uVar39].field_0x1c = 0x80;
    *(undefined4 *)&this->SubpassDependencies[uVar39].field_0x20 = 0x100;
    *(undefined4 *)&this->SubpassDependencies[uVar39].field_0x24 = 0x10;
    *(undefined4 *)&this->SubpassDependencies[uVar39].field_0x28 = 1;
    local_138 = local_138 + 1;
    goto LAB_145b59cc3;
  }
  if ((bVar43) && (1 < (this->ResolveAttachmentReferences).ArrayNum)) {
    local_70 = 0x3b9c73c9;
    pTVar2 = &this->ResolveAttachmentReferences;
    uStack_68 = 0;
    pFVar28 = (pTVar2->AllocatorInstance).Data;
    local_60 = 0;
    uStack_58 = 0;
    if (((pFVar28 <= (FScriptContainerElement *)&local_70) &&
        ((FScriptContainerElement *)&local_70 <
         pFVar28 + (longlong)(this->ResolveAttachmentReferences).ArrayMax * 0x20)) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar20)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar22 = (this->ResolveAttachmentReferences).ArrayNum;
    piVar1 = &(this->ResolveAttachmentReferences).ArrayMax;
    if (iVar22 == *piVar1) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ResolveAttachmentReferences).ArrayNum = iVar22 + 1;
    pFVar10 = (pTVar2->AllocatorInstance).Data;
    pFVar28 = pFVar10 + (longlong)iVar22 * 0x20;
    *(ulonglong *)pFVar28 = CONCAT44(uStack_6c,local_70);
    *(undefined8 *)(pFVar28 + 8) = uStack_68;
    pFVar10 = pFVar10 + (longlong)iVar22 * 0x20 + 0x10;
    *(undefined8 *)pFVar10 = local_60;
    *(ulonglong *)(pFVar10 + 8) = CONCAT44(uStack_54,uStack_58);
    iVar22 = (this->ResolveAttachmentReferences).ArrayNum;
    uVar32 = iVar22 - 1;
    uVar35 = 0;
    if ((int)uVar32 < iVar22) {
      uVar35 = ~uVar32 >> 0x1f;
    }
    if ((uVar35 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    *(undefined4 *)
     ((pTVar2->AllocatorInstance).Data +
     (longlong)(this->ResolveAttachmentReferences).ArrayNum * 0x20 + -0x10) = 0xffffffff;
    if (((this->ResolveAttachmentReferences).ArrayNum < 1) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar22 = (this->ResolveAttachmentReferences).ArrayNum;
    pFVar28 = (pTVar2->AllocatorInstance).Data;
    uVar32 = iVar22 - 1;
    uVar35 = 0;
    if ((int)uVar32 < iVar22) {
      uVar35 = ~uVar32 >> 0x1f;
    }
    if ((uVar35 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar10 = (pTVar2->AllocatorInstance).Data;
    uVar11 = *(undefined8 *)(pFVar28 + 8);
    lVar41 = (longlong)(this->ResolveAttachmentReferences).ArrayNum * 0x20;
    uVar13 = *(undefined8 *)(pFVar10 + lVar41 + -0x20);
    uVar14 = *(undefined8 *)(pFVar10 + lVar41 + -0x20 + 8);
    uVar15 = *(undefined8 *)(pFVar10 + lVar41 + -0x10);
    uVar16 = *(undefined8 *)(pFVar10 + lVar41 + -0x10 + 8);
    *(undefined8 *)(pFVar10 + lVar41 + -0x20) = *(undefined8 *)pFVar28;
    *(undefined8 *)(pFVar10 + lVar41 + -0x20 + 8) = uVar11;
    uVar11 = *(undefined8 *)(pFVar28 + 0x18);
    *(undefined8 *)(pFVar10 + lVar41 + -0x10) = *(undefined8 *)(pFVar28 + 0x10);
    *(undefined8 *)(pFVar10 + lVar41 + -0x10 + 8) = uVar11;
    *(undefined8 *)pFVar28 = uVar13;
    *(undefined8 *)(pFVar28 + 8) = uVar14;
    *(undefined8 *)(pFVar28 + 0x10) = uVar15;
    *(undefined8 *)(pFVar28 + 0x18) = uVar16;
    iVar22 = (this->ResolveAttachmentReferences).ArrayNum + -1;
    pFVar28 = (pTVar2->AllocatorInstance).Data;
    if ((iVar22 < 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar20)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    if (0 < iVar22) {
      if ((*(int *)&this->SubpassDescriptions[0].field_0x28 != iVar22) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("colorAttachmentCount == ResolveAttachmentReferences.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderpass.h"
                              ,0xc2,L""), bVar20)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      *(FScriptContainerElement **)&this->SubpassDescriptions[0].field_0x38 = pFVar28;
    }
    iVar22 = (this->ResolveAttachmentReferences).ArrayNum;
    uVar32 = iVar22 - 1;
    uVar35 = 0;
    if ((int)uVar32 < iVar22) {
      uVar35 = ~uVar32 >> 0x1f;
    }
    if ((uVar35 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar22 = (this->ResolveAttachmentReferences).ArrayNum;
    pFVar28 = (pTVar2->AllocatorInstance).Data;
    if ((*(int *)&this->SubpassDescriptions[local_138 - 1].field_0x28 != 1) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("colorAttachmentCount == ResolveAttachmentReferences.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderpass.h"
                            ,0xc2,L""), bVar20)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    *(FScriptContainerElement **)&this->SubpassDescriptions[local_138 - 1].field_0x38 =
         pFVar28 + (longlong)(iVar22 + -1) * 0x20;
  }
  else {
    iVar22 = (this->ResolveAttachmentReferences).ArrayNum;
    pFVar28 = (this->ResolveAttachmentReferences).AllocatorInstance.Data;
    if (iVar22 < 0) {
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar20) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    else if (0 < iVar22) {
      if ((*(int *)&this->SubpassDescriptions[local_138 - 1].field_0x28 != iVar22) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("colorAttachmentCount == ResolveAttachmentReferences.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderpass.h"
                              ,0xc2,L""), bVar20)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      *(FScriptContainerElement **)&this->SubpassDescriptions[local_138 - 1].field_0x38 = pFVar28;
    }
  }
LAB_145b59cc3:
  uVar39 = 0;
  if (param_1->NumAttachmentDescriptions != '\0') {
    pTVar4 = &this->AttachmentDescriptions;
    do {
      if ((pVVar24 == (VkAttachmentReference *)0x0) ||
         ((int)uVar39 != *(int *)&(this->DepthStencilAttachmentReference).field_0x10)) {
        local_e8 = 0x3b9c73c8;
        uStack_e0 = 0;
        local_d8 = param_1->Desc[uVar39].flags;
        VStack_d4 = param_1->Desc[uVar39].format;
        VStack_d0 = param_1->Desc[uVar39].samples;
        VStack_cc = param_1->Desc[uVar39].loadOp;
        local_c8 = param_1->Desc[uVar39].storeOp;
        VStack_c4 = param_1->Desc[uVar39].stencilLoadOp;
        VStack_c0 = param_1->Desc[uVar39].stencilStoreOp;
        VStack_bc = param_1->Desc[uVar39].initialLayout;
        local_b8 = param_1->Desc[uVar39].finalLayout;
        pFVar28 = (pTVar4->AllocatorInstance).Data;
        if ((pFVar28 <= (FScriptContainerElement *)&local_e8) &&
           (((FScriptContainerElement *)&local_e8 <
             pFVar28 + (longlong)(this->AttachmentDescriptions).ArrayMax * 0x38 &&
            (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar20)))) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar22 = (this->AttachmentDescriptions).ArrayNum;
        piVar1 = &(this->AttachmentDescriptions).ArrayMax;
        if (iVar22 == *piVar1) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,&pTVar4->AllocatorInstance,piVar1);
        }
        (this->AttachmentDescriptions).ArrayNum = iVar22 + 1;
        lVar41 = (longlong)iVar22 * 0x38;
        pFVar28 = (pTVar4->AllocatorInstance).Data;
        *(ulonglong *)(pFVar28 + lVar41) = CONCAT44(uStack_e4,local_e8);
        *(undefined8 *)(pFVar28 + lVar41 + 8) = uStack_e0;
        *(ulonglong *)(pFVar28 + lVar41 + 0x10) = CONCAT44(VStack_d4,local_d8);
        *(ulonglong *)(pFVar28 + lVar41 + 0x10 + 8) = CONCAT44(VStack_cc,VStack_d0);
        *(ulonglong *)(pFVar28 + lVar41 + 0x20) = CONCAT44(VStack_c4,local_c8);
        *(ulonglong *)(pFVar28 + lVar41 + 0x20 + 8) = CONCAT44(VStack_bc,VStack_c0);
        VVar23 = local_b8;
        uVar44 = uStack_b4;
      }
      else {
        uVar33 = (this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x2020100000000;
        pVVar42 = &param_1->StencilDesc;
        if (param_1->bHasDepthStencil == '\0') {
          pVVar42 = (VkAttachmentDescriptionStencilLayout *)0x0;
        }
        if (((uVar33 != 0x2020100000000) ||
            ((((VVar9 = param_1->Desc[uVar39].format, VVar9 != VK_FORMAT_S8_UINT &&
               (VVar9 != VK_FORMAT_D16_UNORM_S8_UINT)) && (VVar9 != VK_FORMAT_D24_UNORM_S8_UINT)) &&
             (VVar9 != VK_FORMAT_D32_SFLOAT_S8_UINT)))) ||
           ((pVVar42 == (VkAttachmentDescriptionStencilLayout *)0x0 ||
            (pVStack_118 = pVVar42, pVVar42->stencilFinalLayout == VK_IMAGE_LAYOUT_UNDEFINED)))) {
          pVStack_118 = (VkAttachmentDescriptionStencilLayout *)0x0;
        }
        local_120 = 0x3b9c73c8;
        local_110 = param_1->Desc[uVar39].flags;
        VStack_10c = param_1->Desc[uVar39].format;
        VStack_108 = param_1->Desc[uVar39].samples;
        VStack_104 = param_1->Desc[uVar39].loadOp;
        local_100 = param_1->Desc[uVar39].storeOp;
        VStack_fc = param_1->Desc[uVar39].stencilLoadOp;
        VStack_f8 = param_1->Desc[uVar39].stencilStoreOp;
        if ((uVar33 == 0x2020100000000) || (pVVar42 == (VkAttachmentDescriptionStencilLayout *)0x0))
        {
          VStack_f4 = param_1->Desc[uVar39].initialLayout;
          if ((uVar33 == 0x2020100000000) ||
             (pVVar42 == (VkAttachmentDescriptionStencilLayout *)0x0)) {
            local_f0 = param_1->Desc[uVar39].finalLayout;
          }
          else {
            local_f0 = VulkanRHI::GetMergedDepthStencilLayout
                                 (param_1->Desc[uVar39].finalLayout,pVVar42->stencilFinalLayout);
          }
        }
        else {
          VStack_f4 = VulkanRHI::GetMergedDepthStencilLayout
                                (param_1->Desc[uVar39].initialLayout,pVVar42->stencilInitialLayout);
          local_f0 = VulkanRHI::GetMergedDepthStencilLayout
                               (param_1->Desc[uVar39].finalLayout,pVVar42->stencilFinalLayout);
        }
        pFVar28 = (pTVar4->AllocatorInstance).Data;
        if (((pFVar28 <= (FScriptContainerElement *)&local_120) &&
            ((FScriptContainerElement *)&local_120 <
             pFVar28 + (longlong)(this->AttachmentDescriptions).ArrayMax * 0x38)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar22 = (this->AttachmentDescriptions).ArrayNum;
        piVar1 = &(this->AttachmentDescriptions).ArrayMax;
        if (iVar22 == *piVar1) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,&pTVar4->AllocatorInstance,piVar1);
        }
        (this->AttachmentDescriptions).ArrayNum = iVar22 + 1;
        lVar41 = (longlong)iVar22 * 0x38;
        pFVar28 = (pTVar4->AllocatorInstance).Data;
        *(ulonglong *)(pFVar28 + lVar41) = CONCAT44(uStack_11c,local_120);
        *(VkAttachmentDescriptionStencilLayout **)(pFVar28 + lVar41 + 8) = pVStack_118;
        *(ulonglong *)(pFVar28 + lVar41 + 0x10) = CONCAT44(VStack_10c,local_110);
        *(ulonglong *)(pFVar28 + lVar41 + 0x10 + 8) = CONCAT44(VStack_104,VStack_108);
        *(ulonglong *)(pFVar28 + lVar41 + 0x20) = CONCAT44(VStack_fc,local_100);
        *(ulonglong *)(pFVar28 + lVar41 + 0x20 + 8) = CONCAT44(VStack_f4,VStack_f8);
        VVar23 = local_f0;
        uVar44 = uStack_ec;
      }
      *(ulonglong *)(pFVar28 + lVar41 + 0x30) = CONCAT44(uVar44,VVar23);
      uVar35 = (int)uVar39 + 1;
      uVar39 = (ulonglong)uVar35;
    } while (uVar35 < param_1->NumAttachmentDescriptions);
  }
  *(int *)&(this->CreateInfo).field_0x14 = (this->AttachmentDescriptions).ArrayNum;
  puVar5 = &this->CorrelationMask;
  *(FScriptContainerElement **)&(this->CreateInfo).field_0x18 =
       (this->AttachmentDescriptions).AllocatorInstance.Data;
  *(uint *)&(this->CreateInfo).field_0x30 = local_134;
  *(FVulkanSubpassDependency<VkSubpassDependency2> **)&(this->CreateInfo).field_0x38 =
       this->SubpassDependencies;
  this->ViewMask[0] = uVar21;
  this->ViewMask[1] = uVar21;
  *puVar5 = uVar21;
  *(uint *)&(this->CreateInfo).field_0x20 = local_138;
  *(FVulkanRenderPassBuilder<FVulkanSubpassDescription<VkSubpassDescription2>,FVulkanSubpassDependency<VkSubpassDependency2>,FVulkanAttachmentReference<VkAttachmentReference2>,FVulkanAttachmentDescription<VkAttachmentDescription2>,FVulkanRenderPassCreateInfo<VkRenderPassCreateInfo2>_>
    **)&(this->CreateInfo).field_0x28 = this;
  if (param_1->MultiViewCount != '\0') {
    uVar39 = (this->Device->OptionalDeviceExtensions).field0_0x0.Packed;
    if ((uVar39 >> 0x20 & 1) == 0) {
      if (((uVar39 >> 0x1d & 1) == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Device.GetOptionalExtensions().HasKHRMultiview",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderpass.h"
                              ,0x335,L"Layout is multiview but extension is not supported!"), bVar20
         )) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      *(uint **)&(this->MultiviewInfo).field_0x18 = this->ViewMask;
      *(undefined4 *)&(this->MultiviewInfo).field_0x20 = 0;
      *(undefined8 *)&(this->MultiviewInfo).field_0x28 = 0;
      *(undefined8 *)&(this->MultiviewInfo).field_0x8 = *(undefined8 *)&(this->CreateInfo).field_0x8
      ;
      *(uint *)&(this->MultiviewInfo).field_0x10 = local_138;
      *(undefined4 *)&(this->MultiviewInfo).field_0x30 = 1;
      *(uint **)&(this->MultiviewInfo).field_0x38 = puVar5;
      *(FVulkanRenderPassMultiviewCreateInfo **)&(this->CreateInfo).field_0x8 = &this->MultiviewInfo
      ;
    }
    else {
      *(undefined4 *)&(this->CreateInfo).field_0x40 = 1;
      *(uint **)&(this->CreateInfo).field_0x48 = puVar5;
    }
  }
  if (((*(byte *)&(this->Device->OptionalDeviceExtensions).field0_0x0 & 0x10) != 0) &&
     (param_1->bHasFragmentDensityAttachment != '\0')) {
    VVar23 = (param_1->FragmentDensityReference).layout;
    *(uint *)&(this->FragDensityCreateInfo).field_0x10 =
         (param_1->FragmentDensityReference).attachment;
    *(VkImageLayout *)&(this->FragDensityCreateInfo).field_0x14 = VVar23;
    *(undefined8 *)&(this->FragDensityCreateInfo).field_0x8 =
         *(undefined8 *)&(this->CreateInfo).field_0x8;
    *(FVulkanRenderPassFragmentDensityMapCreateInfoEXT **)&(this->CreateInfo).field_0x8 =
         &this->FragDensityCreateInfo;
  }
  return;
}

// BuildCreateInfo @ 145b5a180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVulkanRenderPassBuilder<FVulkanSubpassDescription<VkSubpassDescription>,FVulkanSubpassDependency<VkSubpassDependency>,FVulkanAttachmentReference<VkAttachmentReference>,FVulkanAttachmentDescription<VkAttachmentDescription>,FVulkanRenderPassCreateInfo<VkRenderPassCreateInfo>_>
::BuildCreateInfo(FVulkanRenderPassBuilder<FVulkanSubpassDescription<VkSubpassDescription>,FVulkanSubpassDependency<VkSubpassDependency>,FVulkanAttachmentReference<VkAttachmentReference>,FVulkanAttachmentDescription<VkAttachmentDescription>,FVulkanRenderPassCreateInfo<VkRenderPassCreateInfo>_>
                  *this,FVulkanRenderTargetLayout *param_1)

{
  int *piVar1;
  TArray<FVulkanAttachmentReference<VkAttachmentReference>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FVulkanAttachmentReference<VkAttachmentReference>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FVulkanAttachmentDescription<VkAttachmentDescription>,TSizedDefaultAllocator<32>_> *pTVar4;
  ESubpassHint EVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined8 uVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  VkImageLayout VVar13;
  uint uVar14;
  FVulkanDevice *pFVar15;
  VkAttachmentReference *pVVar16;
  VkAttachmentReference *pVVar17;
  FVulkanRenderTargetLayout *pFVar18;
  VkAttachmentReference *pVVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  undefined4 *puVar24;
  uint uVar25;
  ulonglong uVar26;
  undefined4 uVar27;
  VkAttachmentReference *pVVar28;
  VkAttachmentDescriptionStencilLayout *pVVar29;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  FScriptContainerElement *local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  char local_c8;
  uint local_c4;
  uint local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  VkAttachmentReference *local_a0;
  int local_98;
  uint local_94;
  uint local_90;
  VkFormat VStack_8c;
  VkSampleCountFlagBits VStack_88;
  VkAttachmentLoadOp VStack_84;
  VkAttachmentStoreOp local_80;
  VkAttachmentLoadOp VStack_7c;
  VkAttachmentStoreOp VStack_78;
  VkImageLayout VStack_74;
  VkImageLayout local_70;
  uint local_68;
  VkFormat VStack_64;
  VkSampleCountFlagBits VStack_60;
  VkAttachmentLoadOp VStack_5c;
  VkAttachmentStoreOp local_58;
  VkAttachmentLoadOp VStack_54;
  VkAttachmentStoreOp VStack_50;
  VkImageLayout VStack_4c;
  VkImageLayout local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_118;
  EVar5 = param_1->SubpassHint;
  pVVar28 = (VkAttachmentReference *)0x0;
  local_bc = 0;
  local_94 = (1 << (param_1->MultiViewCount & 0x1f)) - 1;
  if (GRHIGlobals.VariableRateShading.SupportsAttachment) {
    pVVar16 = &param_1->FragmentDensityReference;
    if (param_1->bHasFragmentDensityAttachment == '\0') {
      pVVar16 = pVVar28;
    }
    if (((pVVar16 == (VkAttachmentReference *)0x0) ||
        (pFVar15 = this->Device,
        (*(byte *)&(pFVar15->OptionalDeviceExtensions).field0_0x0 & 0x40) == 0)) ||
       ((pFVar15->OptionalDeviceExtensionProperties).FragmentShadingRateFeatures.
        attachmentFragmentShadingRate != 1)) goto LAB_145b5a20c;
    bVar11 = true;
  }
  else {
LAB_145b5a20c:
    pFVar15 = this->Device;
    bVar11 = false;
  }
  if (((GRHIGlobals.SupportsDepthStencilResolve) &&
      (((pFVar15->OptionalDeviceExtensions).field0_0x0.Packed & 0x100000000000) != 0)) &&
     (param_1->bHasDepthStencilResolve != '\0')) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  local_c8 = (EVar5 - DepthReadSubpass & 0xfd) == 0;
  if (param_1->bHasDepthStencil == '\0') {
    local_a0 = (VkAttachmentReference *)0x0;
  }
  else {
    local_a0 = &param_1->DepthReference;
  }
  if (bVar11) {
    pVVar16 = &param_1->FragmentDensityReference;
    if (param_1->bHasFragmentDensityAttachment == '\0') {
      pVVar16 = pVVar28;
    }
    *(undefined4 *)&this->ShadingRateAttachmentReference = 0x3b9c73c9;
    *(undefined8 *)&(this->ShadingRateAttachmentReference).field_0x8 = 0;
    *(uint *)&(this->ShadingRateAttachmentReference).field_0x10 = pVVar16->attachment;
    *(VkImageLayout *)&(this->ShadingRateAttachmentReference).field_0x14 = pVVar16->layout;
    *(undefined4 *)&(this->ShadingRateAttachmentReference).field_0x18 = 1;
    *(FVulkanAttachmentReference<VkAttachmentReference2> **)
     &(this->FragmentShadingRateAttachmentInfo).field_0x10 = &this->ShadingRateAttachmentReference;
  }
  if (bVar10) {
    pVVar16 = &param_1->DepthStencilResolveReference;
    if (param_1->bHasDepthStencilResolve == '\0') {
      pVVar16 = pVVar28;
    }
    *(undefined4 *)&this->DepthStencilResolveAttachmentReference = 0x3b9c73c9;
    *(undefined8 *)&(this->DepthStencilResolveAttachmentReference).field_0x8 = 0;
    *(uint *)&(this->DepthStencilResolveAttachmentReference).field_0x10 = pVVar16->attachment;
    *(VkImageLayout *)&(this->DepthStencilResolveAttachmentReference).field_0x14 = pVVar16->layout;
    *(undefined4 *)&(this->DepthStencilResolveAttachmentReference).field_0x18 = 0;
    *(undefined4 *)&(this->DepthStencilResolveSubpassDesc).field_0x10 = 1;
    *(undefined4 *)&(this->DepthStencilResolveSubpassDesc).field_0x14 = 1;
    *(FVulkanAttachmentReference<VkAttachmentReference2> **)
     &(this->DepthStencilResolveSubpassDesc).field_0x18 =
         &this->DepthStencilResolveAttachmentReference;
  }
  uVar26 = (ulonglong)param_1->NumColorAttachments;
  local_c4 = (uint)param_1->NumColorAttachments;
  if (local_c4 != 0) {
    pTVar2 = &this->ColorAttachmentReferences;
    do {
      pFVar18 = (FVulkanRenderTargetLayout *)0x0;
      if (param_1->NumColorAttachments != '\0') {
        pFVar18 = param_1;
      }
      local_b8._0_4_ =
           *(uint *)((longlong)&pVVar28->attachment + (longlong)pFVar18->ColorReferences);
      local_b8._4_4_ =
           *(undefined4 *)((longlong)&pFVar18->ColorReferences[0].layout + (longlong)pVVar28);
      pFVar23 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar23 <= (FScriptContainerElement *)&local_b8) &&
         (lVar22 = (longlong)(this->ColorAttachmentReferences).ArrayMax,
         (FScriptContainerElement *)&local_b8 < pFVar23 + lVar22 * 8)) {
        local_e0 = (longlong)(this->ColorAttachmentReferences).ArrayNum;
        local_d8 = 8;
        local_f8 = &local_b8;
        local_f0 = pFVar23;
        local_e8 = lVar22;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      iVar12 = (this->ColorAttachmentReferences).ArrayNum;
      if (iVar12 == (this->ColorAttachmentReferences).ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&pTVar2->AllocatorInstance,
                            &(this->ColorAttachmentReferences).ArrayMax);
      }
      (this->ColorAttachmentReferences).ArrayNum = iVar12 + 1;
      *(ulonglong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 8) =
           CONCAT44(local_b8._4_4_,(uint)local_b8);
      pVVar16 = param_1->ResolveReferences;
      if (param_1->bHasResolveAttachments == '\0') {
        pVVar16 = (VkAttachmentReference *)0x0;
      }
      if (pVVar16 != (VkAttachmentReference *)0x0) {
        pTVar3 = &this->ResolveAttachmentReferences;
        pVVar16 = (VkAttachmentReference *)0x0;
        if (param_1->bHasResolveAttachments != '\0') {
          pVVar16 = param_1->ResolveReferences;
        }
        local_b0._0_4_ = *(uint *)((longlong)&pVVar28->attachment + (longlong)&pVVar16->attachment);
        local_b0._4_4_ = *(undefined4 *)((longlong)&pVVar16->layout + (longlong)pVVar28);
        pFVar23 = (pTVar3->AllocatorInstance).Data;
        if ((pFVar23 <= (FScriptContainerElement *)&local_b0) &&
           (lVar22 = (longlong)(this->ResolveAttachmentReferences).ArrayMax,
           (FScriptContainerElement *)&local_b0 < pFVar23 + lVar22 * 8)) {
          local_e0 = (longlong)(this->ResolveAttachmentReferences).ArrayNum;
          local_d8 = 8;
          local_f8 = &local_b0;
          local_f0 = pFVar23;
          local_e8 = lVar22;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar11) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        iVar12 = (this->ResolveAttachmentReferences).ArrayNum;
        piVar1 = &(this->ResolveAttachmentReferences).ArrayMax;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->ResolveAttachmentReferences).ArrayNum = iVar12 + 1;
        *(ulonglong *)((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 8) =
             CONCAT44(local_b0._4_4_,(uint)local_b0);
      }
      pVVar28 = pVVar28 + 1;
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
  }
  pVVar28 = (VkAttachmentReference *)0x0;
  uVar25 = local_c4;
  if ((EVar5 == CustomResolveSubpass) && (1 < local_c4)) {
    uVar25 = local_c4 - 1;
  }
  uVar20 = 0xffffffff;
  if (local_a0 != (VkAttachmentReference *)0x0) {
    pVVar16 = &param_1->DepthReference;
    pVVar17 = pVVar28;
    if (param_1->bHasDepthStencil == '\0') {
      *(undefined4 *)&this->DepthStencilAttachmentReference = _DAT_00000000;
      pVVar19 = pVVar28;
    }
    else {
      *(uint *)&this->DepthStencilAttachmentReference = pVVar16->attachment;
      pVVar19 = pVVar16;
      if (param_1 != (FVulkanRenderTargetLayout *)0xffffffffffffffb8) {
        pVVar17 = (VkAttachmentReference *)(ulonglong)(param_1->StencilReference).stencilLayout;
      }
    }
    VVar13 = VulkanRHI::GetMergedDepthStencilLayout(pVVar19->layout,(VkImageLayout)pVVar17);
    *(VkImageLayout *)&(this->DepthStencilAttachmentReference).field_0x4 = VVar13;
    if ((local_c8 != '\0') || (EVar5 == DeferredShadingSubpass)) {
      pVVar28 = (VkAttachmentReference *)0x3b9c9308;
      pVVar17 = (VkAttachmentReference *)0x0;
      if (param_1->bHasDepthStencil != '\0') {
        pVVar17 = pVVar16;
      }
      uVar20 = pVVar17->attachment;
      *(uint *)&this->DepthStencilAttachment = uVar20;
      *(undefined4 *)&(this->DepthStencilAttachment).field_0x4 = 0x3b9c9308;
    }
  }
  local_c4 = 1;
  if (uVar25 == 0xffffffff) {
    uVar25 = (this->ColorAttachmentReferences).ArrayNum;
  }
  *(uint *)&this->SubpassDescriptions[0].field_0x18 = uVar25;
  pFVar23 = (this->ColorAttachmentReferences).AllocatorInstance.Data;
  *(FScriptContainerElement **)&this->SubpassDescriptions[0].field_0x20 = pFVar23;
  if (local_a0 != (VkAttachmentReference *)0x0) {
    *(FVulkanAttachmentReference<VkAttachmentReference> **)&this->SubpassDescriptions[0].field_0x30
         = &this->DepthStencilAttachmentReference;
  }
  uVar27 = SUB84(pVVar28,0);
  if (local_c8 != '\0') {
    *(undefined4 *)&this->SubpassDescriptions[1].field_0x18 = 1;
    *(FScriptContainerElement **)&this->SubpassDescriptions[1].field_0x20 = pFVar23;
    local_c4 = 2;
    if (((param_1->bHasDepthStencil == '\0') ||
        (param_1 == (FVulkanRenderTargetLayout *)0xffffffffffffffc0)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("RTLayout.GetDepthAttachmentReference()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderpass.h"
                            ,0x260,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    *(undefined4 *)&this->InputAttachments1[0].field_0x4 = uVar27;
    *(uint *)this->InputAttachments1 = uVar20;
    *(FVulkanAttachmentReference<VkAttachmentReference> **)&this->SubpassDescriptions[1].field_0x10
         = this->InputAttachments1;
    *(FVulkanAttachmentReference<VkAttachmentReference> **)&this->SubpassDescriptions[1].field_0x30
         = &this->DepthStencilAttachment;
    *(undefined4 *)&this->SubpassDescriptions[1].field_0x8 = 1;
    *(undefined4 *)this->SubpassDependencies = 0;
    *(undefined4 *)&this->SubpassDependencies[0].field_0x4 = 1;
    *(undefined4 *)&this->SubpassDependencies[0].field_0x8 = 0x300;
    *(undefined4 *)&this->SubpassDependencies[0].field_0xc = 0x80;
    *(undefined4 *)&this->SubpassDependencies[0].field_0x10 = 0x400;
    *(undefined4 *)&this->SubpassDependencies[0].field_0x14 = 0x10;
    *(undefined4 *)&this->SubpassDependencies[0].field_0x18 = 1;
    local_bc = 1;
  }
  uVar14 = local_bc;
  uVar25 = local_c4;
  if (EVar5 == DeferredShadingSubpass) {
    uVar26 = (ulonglong)local_c4;
    uVar25 = local_c4 + 1;
    *(int *)&this->SubpassDescriptions[uVar26].field_0x18 =
         (this->ColorAttachmentReferences).ArrayNum;
    *(FScriptContainerElement **)&this->SubpassDescriptions[uVar26].field_0x20 =
         (this->ColorAttachmentReferences).AllocatorInstance.Data;
    *(FVulkanAttachmentReference<VkAttachmentReference> **)
     &this->SubpassDescriptions[uVar26].field_0x30 = &this->DepthStencilAttachment;
    *(uint *)this->InputAttachments1 = uVar20;
    *(undefined4 *)&this->InputAttachments1[0].field_0x4 = uVar27;
    *(FVulkanAttachmentReference<VkAttachmentReference> **)
     &this->SubpassDescriptions[uVar26].field_0x10 = this->InputAttachments1;
    *(undefined4 *)&this->SubpassDescriptions[uVar26].field_0x8 = 1;
    uVar26 = (ulonglong)local_bc;
    local_bc = local_bc + 1;
    local_c4 = local_c4 + 2;
    *(undefined4 *)(this->SubpassDependencies + uVar26) = 0;
    *(undefined4 *)&this->SubpassDependencies[uVar26].field_0x4 = 1;
    *(undefined4 *)&this->SubpassDependencies[uVar26].field_0x8 = 0x700;
    *(undefined4 *)&this->SubpassDependencies[uVar26].field_0xc = 0x80;
    *(undefined4 *)&this->SubpassDependencies[uVar26].field_0x10 = 0x500;
    *(undefined4 *)&this->SubpassDependencies[uVar26].field_0x14 = 0x10;
    *(undefined4 *)&this->SubpassDependencies[uVar26].field_0x18 = 1;
    *(undefined4 *)&this->SubpassDescriptions[uVar25].field_0x18 = 1;
    *(FScriptContainerElement **)&this->SubpassDescriptions[uVar25].field_0x20 =
         (this->ColorAttachmentReferences).AllocatorInstance.Data;
    *(FVulkanAttachmentReference<VkAttachmentReference> **)
     &this->SubpassDescriptions[uVar25].field_0x30 = &this->DepthStencilAttachment;
    local_98 = (this->ColorAttachmentReferences).ArrayNum;
    *(undefined4 *)&this->InputAttachments2[0].field_0x4 = uVar27;
    *(uint *)this->InputAttachments2 = uVar20;
    *(undefined4 *)(this->InputAttachments2 + 1) = 0xffffffff;
    *(undefined4 *)&this->InputAttachments2[1].field_0x4 = 0;
    if (2 < (longlong)(local_98 + 1)) {
      puVar24 = (undefined4 *)&this->InputAttachments2[2].field_0x4;
      lVar22 = (longlong)(local_98 + 1) + -2;
      iVar12 = 1;
      do {
        iVar6 = (this->ColorAttachmentReferences).ArrayNum;
        uVar20 = 0;
        if (iVar12 < iVar6) {
          uVar20 = (uint)-(iVar12 + 1) >> 0x1f;
        }
        if (uVar20 == 0) {
          local_f8 = (undefined8 *)(longlong)iVar12;
          local_f0 = (FScriptContainerElement *)(longlong)iVar6;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        puVar24[-1] = *(undefined4 *)
                       ((this->ColorAttachmentReferences).AllocatorInstance.Data +
                        (-0x354 - (longlong)this) + (longlong)puVar24);
        *puVar24 = 5;
        puVar24 = puVar24 + 2;
        lVar22 = lVar22 + -1;
        iVar12 = iVar12 + 1;
      } while (lVar22 != 0);
    }
    uVar26 = (ulonglong)local_bc;
    *(FVulkanAttachmentReference<VkAttachmentReference> **)
     &this->SubpassDescriptions[uVar25].field_0x10 = this->InputAttachments2;
    local_bc = local_bc + 1;
    *(int *)&this->SubpassDescriptions[uVar25].field_0x8 = local_98 + 1;
    *(undefined4 *)(this->SubpassDependencies + uVar26) = 1;
    *(undefined4 *)&this->SubpassDependencies[uVar26].field_0x4 = 2;
    *(undefined4 *)&this->SubpassDependencies[uVar26].field_0x8 = 0x400;
    *(undefined4 *)&this->SubpassDependencies[uVar26].field_0xc = 0x80;
    *(undefined4 *)&this->SubpassDependencies[uVar26].field_0x10 = 0x100;
    *(undefined4 *)&this->SubpassDependencies[uVar26].field_0x14 = 0x10;
    if (GVulkanInputAttachmentShaderRead == 1) {
      *(undefined4 *)&this->SubpassDependencies[uVar26].field_0x14 = 0x30;
    }
    *(undefined4 *)&this->SubpassDependencies[uVar26].field_0x18 = 1;
  }
  else if (EVar5 == CustomResolveSubpass) {
    local_c4 = local_c4 + 1;
    iVar12 = (this->ColorAttachmentReferences).ArrayNum;
    if (iVar12 < 2) {
      local_f8 = (undefined8 *)&DAT_00000001;
      local_f0 = (FScriptContainerElement *)(longlong)iVar12;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    *(undefined4 *)this->ColorAttachments3 =
         *(undefined4 *)((this->ColorAttachmentReferences).AllocatorInstance.Data + 8);
    *(undefined4 *)&this->ColorAttachments3[0].field_0x4 = 2;
    *(undefined4 *)this->InputAttachments3 = 0xffffffff;
    *(undefined4 *)&this->InputAttachments3[0].field_0x4 = 0;
    iVar12 = (this->ColorAttachmentReferences).ArrayNum;
    if (iVar12 < 1) {
      local_f8 = (undefined8 *)0x0;
      local_f0 = (FScriptContainerElement *)(longlong)iVar12;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    *(undefined4 *)(this->InputAttachments3 + 1) =
         *(undefined4 *)(this->ColorAttachmentReferences).AllocatorInstance.Data;
    *(undefined4 *)&this->InputAttachments3[1].field_0x4 = 5;
    *(FVulkanAttachmentReference<VkAttachmentReference> **)
     &this->SubpassDescriptions[uVar25].field_0x30 = &this->DepthStencilAttachment;
    *(FVulkanAttachmentReference<VkAttachmentReference> **)
     &this->SubpassDescriptions[uVar25].field_0x10 = this->InputAttachments3;
    *(undefined4 *)&this->SubpassDescriptions[uVar25].field_0x8 = 2;
    *(undefined4 *)&this->SubpassDescriptions[uVar25].field_0x18 = 1;
    *(FVulkanAttachmentReference<VkAttachmentReference> **)
     &this->SubpassDescriptions[uVar25].field_0x20 = this->ColorAttachments3;
    uVar26 = (ulonglong)uVar14;
    local_bc = uVar14 + 1;
    *(undefined4 *)(this->SubpassDependencies + uVar26) = 1;
    *(undefined4 *)&this->SubpassDependencies[uVar26].field_0x4 = 2;
    *(undefined4 *)&this->SubpassDependencies[uVar26].field_0x8 = 0x400;
    *(undefined4 *)&this->SubpassDependencies[uVar26].field_0xc = 0x80;
    *(undefined4 *)&this->SubpassDependencies[uVar26].field_0x10 = 0x100;
    *(undefined4 *)&this->SubpassDependencies[uVar26].field_0x14 = 0x10;
    *(undefined4 *)&this->SubpassDependencies[uVar26].field_0x18 = 1;
    uVar25 = local_c4;
    goto LAB_145b5ad7b;
  }
  if ((local_c8 == '\0') || (iVar12 = (this->ResolveAttachmentReferences).ArrayNum, iVar12 < 2)) {
    pFVar23 = (this->ResolveAttachmentReferences).AllocatorInstance.Data;
    uVar20 = local_c4 - 1;
    iVar12 = (this->ResolveAttachmentReferences).ArrayNum;
    if (iVar12 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      uVar25 = local_c4;
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    else {
      uVar25 = local_c4;
      if (0 < iVar12) {
        if ((*(int *)&this->SubpassDescriptions[uVar20].field_0x18 != iVar12) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("colorAttachmentCount == ResolveAttachmentReferences.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderpass.h"
                                ,0x8d,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(FScriptContainerElement **)&this->SubpassDescriptions[uVar20].field_0x28 = pFVar23;
        uVar25 = local_c4;
      }
    }
  }
  else {
    pTVar2 = &this->ResolveAttachmentReferences;
    local_a8 = 0;
    pFVar23 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar23 <= (FScriptContainerElement *)&local_a8) &&
       (lVar22 = (longlong)(this->ResolveAttachmentReferences).ArrayMax,
       (FScriptContainerElement *)&local_a8 < pFVar23 + lVar22 * 8)) {
      local_d8 = 8;
      local_f8 = &local_a8;
      local_f0 = pFVar23;
      local_e8 = lVar22;
      local_e0 = (longlong)iVar12;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iVar12 = (this->ResolveAttachmentReferences).ArrayNum;
    piVar1 = &(this->ResolveAttachmentReferences).ArrayMax;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ResolveAttachmentReferences).ArrayNum = iVar12 + 1;
    *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_a8;
    iVar12 = (this->ResolveAttachmentReferences).ArrayNum;
    uVar20 = iVar12 - 1;
    uVar25 = 0;
    if ((int)uVar20 < iVar12) {
      uVar25 = ~uVar20 >> 0x1f;
    }
    if (uVar25 == 0) {
      local_f8 = (undefined8 *)(longlong)(int)uVar20;
      local_f0 = (FScriptContainerElement *)(longlong)iVar12;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    *(undefined4 *)
     ((pTVar2->AllocatorInstance).Data +
     (longlong)(this->ResolveAttachmentReferences).ArrayNum * 8 + -8) = 0xffffffff;
    iVar12 = (this->ResolveAttachmentReferences).ArrayNum;
    if (iVar12 < 1) {
      local_f8 = (undefined8 *)0x0;
      local_f0 = (FScriptContainerElement *)(longlong)iVar12;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iVar12 = (this->ResolveAttachmentReferences).ArrayNum;
    pFVar23 = (this->ResolveAttachmentReferences).AllocatorInstance.Data;
    uVar20 = iVar12 - 1;
    uVar25 = 0;
    if ((int)uVar20 < iVar12) {
      uVar25 = ~uVar20 >> 0x1f;
    }
    if (uVar25 == 0) {
      local_f8 = (undefined8 *)(longlong)(int)uVar20;
      local_f0 = (FScriptContainerElement *)(longlong)iVar12;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iVar12 = (this->ResolveAttachmentReferences).ArrayNum;
    pFVar7 = (this->ResolveAttachmentReferences).AllocatorInstance.Data;
    uVar8 = *(undefined8 *)(pFVar7 + (longlong)iVar12 * 8 + -8);
    *(undefined8 *)(pFVar7 + (longlong)iVar12 * 8 + -8) = *(undefined8 *)pFVar23;
    *(undefined8 *)pFVar23 = uVar8;
    iVar12 = (this->ResolveAttachmentReferences).ArrayNum + -1;
    pFVar23 = (this->ResolveAttachmentReferences).AllocatorInstance.Data;
    if (iVar12 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    else if (0 < iVar12) {
      if ((*(int *)&this->SubpassDescriptions[0].field_0x18 != iVar12) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("colorAttachmentCount == ResolveAttachmentReferences.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderpass.h"
                              ,0x8d,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      *(FScriptContainerElement **)&this->SubpassDescriptions[0].field_0x28 = pFVar23;
    }
    uVar25 = local_c4;
    iVar12 = (this->ResolveAttachmentReferences).ArrayNum;
    uVar21 = iVar12 - 1;
    uVar20 = local_c4 - 1;
    uVar14 = 0;
    if ((int)uVar21 < iVar12) {
      uVar14 = ~uVar21 >> 0x1f;
    }
    if (uVar14 == 0) {
      local_f8 = (undefined8 *)(longlong)(int)uVar21;
      local_f0 = (FScriptContainerElement *)(longlong)iVar12;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iVar12 = (this->ResolveAttachmentReferences).ArrayNum;
    pFVar23 = (this->ResolveAttachmentReferences).AllocatorInstance.Data;
    if ((*(int *)&this->SubpassDescriptions[uVar20].field_0x18 != 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("colorAttachmentCount == ResolveAttachmentReferences.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderpass.h"
                            ,0x8d,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    *(FScriptContainerElement **)&this->SubpassDescriptions[uVar20].field_0x28 =
         pFVar23 + (longlong)(iVar12 + -1) * 8;
  }
LAB_145b5ad7b:
  pVVar28 = local_a0;
  uVar26 = 0;
  if (param_1->NumAttachmentDescriptions != '\0') {
    pTVar4 = &this->AttachmentDescriptions;
    do {
      if ((pVVar28 == (VkAttachmentReference *)0x0) ||
         ((int)uVar26 != *(int *)&this->DepthStencilAttachmentReference)) {
        pFVar23 = (pTVar4->AllocatorInstance).Data;
        local_68 = param_1->Desc[uVar26].flags;
        VStack_64 = param_1->Desc[uVar26].format;
        VStack_60 = param_1->Desc[uVar26].samples;
        VStack_5c = param_1->Desc[uVar26].loadOp;
        local_58 = param_1->Desc[uVar26].storeOp;
        VStack_54 = param_1->Desc[uVar26].stencilLoadOp;
        VStack_50 = param_1->Desc[uVar26].stencilStoreOp;
        VStack_4c = param_1->Desc[uVar26].initialLayout;
        local_48 = param_1->Desc[uVar26].finalLayout;
        if ((pFVar23 <= (FScriptContainerElement *)&local_68) &&
           (lVar22 = (longlong)(this->AttachmentDescriptions).ArrayMax,
           (FScriptContainerElement *)&local_68 < pFVar23 + lVar22 * 0x24)) {
          local_e0 = (longlong)(this->AttachmentDescriptions).ArrayNum;
          local_d8 = 0x24;
          local_f8 = (undefined8 *)&local_68;
          local_f0 = pFVar23;
          local_e8 = lVar22;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar11) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        iVar12 = (this->AttachmentDescriptions).ArrayNum;
        piVar1 = &(this->AttachmentDescriptions).ArrayMax;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x424,&pTVar4->AllocatorInstance,piVar1);
        }
        (this->AttachmentDescriptions).ArrayNum = iVar12 + 1;
        pFVar23 = (pTVar4->AllocatorInstance).Data;
        pFVar7 = pFVar23 + (longlong)iVar12 * 0x24;
        *(ulonglong *)pFVar7 = CONCAT44(VStack_64,local_68);
        *(ulonglong *)(pFVar7 + 8) = CONCAT44(VStack_5c,VStack_60);
        pFVar23 = pFVar23 + (longlong)iVar12 * 0x24;
        *(ulonglong *)(pFVar23 + 0x10) = CONCAT44(VStack_54,local_58);
        *(ulonglong *)(pFVar23 + 0x18) = CONCAT44(VStack_4c,VStack_50);
        VVar13 = local_48;
      }
      else {
        if (param_1->bHasDepthStencil == '\0') {
          pVVar29 = (VkAttachmentDescriptionStencilLayout *)0x0;
        }
        else {
          pVVar29 = &param_1->StencilDesc;
        }
        local_90 = param_1->Desc[uVar26].flags;
        VStack_8c = param_1->Desc[uVar26].format;
        VStack_88 = param_1->Desc[uVar26].samples;
        VStack_84 = param_1->Desc[uVar26].loadOp;
        local_80 = param_1->Desc[uVar26].storeOp;
        VStack_7c = param_1->Desc[uVar26].stencilLoadOp;
        VStack_78 = param_1->Desc[uVar26].stencilStoreOp;
        if (((((VStack_8c == VK_FORMAT_S8_UINT) || (VStack_8c == VK_FORMAT_D16_UNORM_S8_UINT)) ||
             (VStack_8c == VK_FORMAT_D24_UNORM_S8_UINT)) ||
            (VStack_8c == VK_FORMAT_D32_SFLOAT_S8_UINT)) &&
           (pVVar29 != (VkAttachmentDescriptionStencilLayout *)0x0)) {
          VStack_74 = VulkanRHI::GetMergedDepthStencilLayout
                                (param_1->Desc[uVar26].initialLayout,pVVar29->stencilInitialLayout);
          VVar13 = pVVar29->stencilFinalLayout;
        }
        else {
          VStack_74 = VulkanRHI::GetMergedDepthStencilLayout
                                (param_1->Desc[uVar26].initialLayout,VK_IMAGE_LAYOUT_UNDEFINED);
          VVar13 = VK_IMAGE_LAYOUT_UNDEFINED;
        }
        local_70 = VulkanRHI::GetMergedDepthStencilLayout(param_1->Desc[uVar26].finalLayout,VVar13);
        pFVar23 = (pTVar4->AllocatorInstance).Data;
        if ((pFVar23 <= (FScriptContainerElement *)&local_90) &&
           (lVar22 = (longlong)(this->AttachmentDescriptions).ArrayMax,
           (FScriptContainerElement *)&local_90 < pFVar23 + lVar22 * 0x24)) {
          local_e0 = (longlong)(this->AttachmentDescriptions).ArrayNum;
          local_d8 = 0x24;
          local_f8 = (undefined8 *)&local_90;
          local_f0 = pFVar23;
          local_e8 = lVar22;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar11) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        iVar12 = (this->AttachmentDescriptions).ArrayNum;
        piVar1 = &(this->AttachmentDescriptions).ArrayMax;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x424,&pTVar4->AllocatorInstance,piVar1);
        }
        (this->AttachmentDescriptions).ArrayNum = iVar12 + 1;
        pFVar23 = (pTVar4->AllocatorInstance).Data;
        pFVar7 = pFVar23 + (longlong)iVar12 * 0x24;
        *(ulonglong *)pFVar7 = CONCAT44(VStack_8c,local_90);
        *(ulonglong *)(pFVar7 + 8) = CONCAT44(VStack_84,VStack_88);
        pFVar23 = pFVar23 + (longlong)iVar12 * 0x24;
        *(ulonglong *)(pFVar23 + 0x10) = CONCAT44(VStack_7c,local_80);
        *(ulonglong *)(pFVar23 + 0x18) = CONCAT44(VStack_74,VStack_78);
        VVar13 = local_70;
      }
      *(VkImageLayout *)(pFVar23 + 0x20) = VVar13;
      uVar20 = (int)uVar26 + 1;
      uVar26 = (ulonglong)uVar20;
      uVar25 = local_c4;
    } while (uVar20 < param_1->NumAttachmentDescriptions);
  }
  *(int *)&(this->CreateInfo).field_0x14 = (this->AttachmentDescriptions).ArrayNum;
  *(FScriptContainerElement **)&(this->CreateInfo).field_0x18 =
       (this->AttachmentDescriptions).AllocatorInstance.Data;
  *(uint *)&(this->CreateInfo).field_0x30 = local_bc;
  *(FVulkanSubpassDependency<VkSubpassDependency> **)&(this->CreateInfo).field_0x38 =
       this->SubpassDependencies;
  this->ViewMask[0] = local_94;
  this->ViewMask[1] = local_94;
  this->CorrelationMask = local_94;
  *(uint *)&(this->CreateInfo).field_0x20 = uVar25;
  *(FVulkanRenderPassBuilder<FVulkanSubpassDescription<VkSubpassDescription>,FVulkanSubpassDependency<VkSubpassDependency>,FVulkanAttachmentReference<VkAttachmentReference>,FVulkanAttachmentDescription<VkAttachmentDescription>,FVulkanRenderPassCreateInfo<VkRenderPassCreateInfo>_>
    **)&(this->CreateInfo).field_0x28 = this;
  if ((param_1->MultiViewCount != '\0') &&
     (uVar26 = (this->Device->OptionalDeviceExtensions).field0_0x0.Packed, (uVar26 >> 0x20 & 1) == 0
     )) {
    if (((uVar26 >> 0x1d & 1) == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Device.GetOptionalExtensions().HasKHRMultiview",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderpass.h"
                            ,0x335,L"Layout is multiview but extension is not supported!"), bVar11))
    {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar8 = *(undefined8 *)&(this->CreateInfo).field_0x8;
    *(uint *)&(this->MultiviewInfo).field_0x10 = uVar25;
    *(undefined8 *)&(this->MultiviewInfo).field_0x8 = uVar8;
    *(FVulkanRenderPassMultiviewCreateInfo **)&(this->CreateInfo).field_0x8 = &this->MultiviewInfo;
    *(uint **)&(this->MultiviewInfo).field_0x18 = this->ViewMask;
    *(undefined4 *)&(this->MultiviewInfo).field_0x20 = 0;
    *(undefined8 *)&(this->MultiviewInfo).field_0x28 = 0;
    *(undefined4 *)&(this->MultiviewInfo).field_0x30 = 1;
    *(uint **)&(this->MultiviewInfo).field_0x38 = &this->CorrelationMask;
  }
  if (((*(byte *)&(this->Device->OptionalDeviceExtensions).field0_0x0 & 0x10) != 0) &&
     (param_1->bHasFragmentDensityAttachment != '\0')) {
    VVar13 = (param_1->FragmentDensityReference).layout;
    *(uint *)&(this->FragDensityCreateInfo).field_0x10 =
         (param_1->FragmentDensityReference).attachment;
    *(VkImageLayout *)&(this->FragDensityCreateInfo).field_0x14 = VVar13;
    *(undefined8 *)&(this->FragDensityCreateInfo).field_0x8 =
         *(undefined8 *)&(this->CreateInfo).field_0x8;
    *(FVulkanRenderPassFragmentDensityMapCreateInfoEXT **)&(this->CreateInfo).field_0x8 =
         &this->FragDensityCreateInfo;
  }
  return;
}

