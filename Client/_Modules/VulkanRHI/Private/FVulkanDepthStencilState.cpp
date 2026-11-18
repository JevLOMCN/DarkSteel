// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// GetInitializer @ 145babe80

bool __thiscall
FVulkanDepthStencilState::GetInitializer
          (FVulkanDepthStencilState *this,FDepthStencilStateInitializerRHI *param_1)

{
  TEnumAsByte<ECompareFunction> TVar1;
  bool bVar2;
  TEnumAsByte<ECompareFunction> TVar3;
  TEnumAsByte<EStencilOp> TVar4;
  TEnumAsByte<EStencilOp> TVar5;
  TEnumAsByte<EStencilOp> TVar6;
  bool bVar7;
  uchar uVar8;
  
  TVar1.Value = (this->Initializer).DepthTest.Value;
  bVar2 = (this->Initializer).bEnableFrontFaceStencil;
  TVar3.Value = (this->Initializer).FrontFaceStencilTest.Value;
  TVar4.Value = (this->Initializer).FrontFaceStencilFailStencilOp.Value;
  TVar5.Value = (this->Initializer).FrontFaceDepthFailStencilOp.Value;
  TVar6.Value = (this->Initializer).FrontFacePassStencilOp.Value;
  bVar7 = (this->Initializer).bEnableBackFaceStencil;
  param_1->bEnableDepthWrite = (this->Initializer).bEnableDepthWrite;
  param_1->DepthTest = (TEnumAsByte<ECompareFunction>)TVar1.Value;
  param_1->bEnableFrontFaceStencil = bVar2;
  param_1->FrontFaceStencilTest = (TEnumAsByte<ECompareFunction>)TVar3.Value;
  param_1->FrontFaceStencilFailStencilOp = (TEnumAsByte<EStencilOp>)TVar4.Value;
  param_1->FrontFaceDepthFailStencilOp = (TEnumAsByte<EStencilOp>)TVar5.Value;
  param_1->FrontFacePassStencilOp = (TEnumAsByte<EStencilOp>)TVar6.Value;
  param_1->bEnableBackFaceStencil = bVar7;
  TVar4.Value = (this->Initializer).BackFaceStencilFailStencilOp.Value;
  TVar5.Value = (this->Initializer).BackFaceDepthFailStencilOp.Value;
  TVar6.Value = (this->Initializer).BackFacePassStencilOp.Value;
  param_1->BackFaceStencilTest =
       (TEnumAsByte<ECompareFunction>)(this->Initializer).BackFaceStencilTest.Value;
  param_1->BackFaceStencilFailStencilOp = (TEnumAsByte<EStencilOp>)TVar4.Value;
  param_1->BackFaceDepthFailStencilOp = (TEnumAsByte<EStencilOp>)TVar5.Value;
  param_1->BackFacePassStencilOp = (TEnumAsByte<EStencilOp>)TVar6.Value;
  uVar8 = (this->Initializer).StencilWriteMask;
  param_1->StencilReadMask = (this->Initializer).StencilReadMask;
  param_1->StencilWriteMask = uVar8;
  return true;
}

// SetupCreateInfo @ 145bbd4d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "ECompareFunction": Some values do not have unique names */
/* WARNING: Enum "EStencilOp": Some values do not have unique names */

void __thiscall
FVulkanDepthStencilState::SetupCreateInfo
          (FVulkanDepthStencilState *this,FGraphicsPipelineStateInitializer *param_1,
          VkPipelineDepthStencilStateCreateInfo *param_2)

{
  bool *pbVar1;
  VkStencilOp VVar2;
  uint uVar3;
  uint uVar4;
  VkCompareOp VVar5;
  VkStencilOp VVar6;
  uint uVar7;
  
  param_2->sType = VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;
  *(undefined8 *)&param_2->field_0x4 = 0;
  *(undefined8 *)((longlong)&param_2->pNext + 4) = 0;
  param_2->depthTestEnable = 0;
  param_2->depthWriteEnable = 0;
  param_2->depthCompareOp = VK_COMPARE_OP_NEVER;
  param_2->depthBoundsTestEnable = 0;
  param_2->stencilTestEnable = 0;
  (param_2->front).failOp = VK_STENCIL_OP_KEEP;
  (param_2->front).passOp = VK_STENCIL_OP_KEEP;
  (param_2->front).depthFailOp = VK_STENCIL_OP_KEEP;
  (param_2->front).compareOp = VK_COMPARE_OP_NEVER;
  (param_2->front).compareMask = 0;
  (param_2->front).writeMask = 0;
  (param_2->front).reference = 0;
  (param_2->back).failOp = VK_STENCIL_OP_KEEP;
  (param_2->back).passOp = VK_STENCIL_OP_KEEP;
  (param_2->back).depthFailOp = VK_STENCIL_OP_KEEP;
  (param_2->back).compareOp = VK_COMPARE_OP_NEVER;
  (param_2->back).compareMask = 0;
  (param_2->back).writeMask = 0;
  *(undefined8 *)&(param_2->back).reference = 0;
  param_2->maxDepthBounds = 0.0;
  uVar7 = 1;
  if (((this->Initializer).DepthTest.Value != '\a') ||
     (uVar4 = 0, (this->Initializer).bEnableDepthWrite != false)) {
    uVar4 = uVar7;
  }
  param_2->depthTestEnable = uVar4;
  VVar5 = CompareOpToVulkan((uint)(this->Initializer).DepthTest.Value);
  param_2->depthCompareOp = VVar5;
  pbVar1 = &(this->Initializer).bEnableBackFaceStencil;
  param_2->depthWriteEnable = (uint)((this->Initializer).bEnableDepthWrite != false);
  param_2->depthBoundsTestEnable = (uint)param_1->bDepthBounds;
  param_2->minDepthBounds = 0.0;
  param_2->maxDepthBounds = 1.0;
  if (((this->Initializer).bEnableFrontFaceStencil == false) && (*pbVar1 == false)) {
    uVar7 = 0;
  }
  param_2->stencilTestEnable = uVar7;
  VVar6 = StencilOpToVulkan((uint)(this->Initializer).FrontFaceStencilFailStencilOp.Value);
  (param_2->back).failOp = VVar6;
  VVar6 = StencilOpToVulkan((uint)(this->Initializer).FrontFacePassStencilOp.Value);
  (param_2->back).passOp = VVar6;
  VVar6 = StencilOpToVulkan((uint)(this->Initializer).FrontFaceDepthFailStencilOp.Value);
  (param_2->back).depthFailOp = VVar6;
  VVar5 = CompareOpToVulkan((uint)(this->Initializer).FrontFaceStencilTest.Value);
  (param_2->back).compareOp = VVar5;
  (param_2->back).compareMask = (uint)(this->Initializer).StencilReadMask;
  (param_2->back).writeMask = (uint)(this->Initializer).StencilWriteMask;
  (param_2->back).reference = 0;
  if (*pbVar1 == false) {
    VVar6 = (param_2->back).passOp;
    VVar2 = (param_2->back).depthFailOp;
    VVar5 = (param_2->back).compareOp;
    uVar7 = (param_2->back).reference;
    uVar4 = (param_2->back).compareMask;
    uVar3 = (param_2->back).writeMask;
    (param_2->front).failOp = (param_2->back).failOp;
    (param_2->front).passOp = VVar6;
    (param_2->front).depthFailOp = VVar2;
    (param_2->front).compareOp = VVar5;
    (param_2->front).compareMask = uVar4;
    (param_2->front).writeMask = uVar3;
    (param_2->front).reference = uVar7;
  }
  else {
    VVar6 = StencilOpToVulkan((uint)(this->Initializer).BackFaceStencilFailStencilOp.Value);
    (param_2->front).failOp = VVar6;
    VVar6 = StencilOpToVulkan((uint)(this->Initializer).BackFacePassStencilOp.Value);
    (param_2->front).passOp = VVar6;
    VVar6 = StencilOpToVulkan((uint)(this->Initializer).BackFaceDepthFailStencilOp.Value);
    (param_2->front).depthFailOp = VVar6;
    VVar5 = CompareOpToVulkan((uint)(this->Initializer).BackFaceStencilTest.Value);
    (param_2->front).compareOp = VVar5;
    (param_2->front).compareMask = (uint)(this->Initializer).StencilReadMask;
    (param_2->front).writeMask = (uint)(this->Initializer).StencilWriteMask;
    (param_2->front).reference = 0;
  }
  return;
}

