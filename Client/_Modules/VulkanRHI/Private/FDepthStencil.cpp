// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// ReadFrom @ 145b76530

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FGfxPipelineDesc::FDepthStencil::ReadFrom
          (FDepthStencil *this,VkPipelineDepthStencilStateCreateInfo *param_1)

{
  this->DepthCompareOp = (char)param_1->depthCompareOp;
  this->bDepthTestEnable = param_1->depthTestEnable != 0;
  this->bDepthWriteEnable = param_1->depthWriteEnable != 0;
  this->bDepthBoundsTestEnable = param_1->depthBoundsTestEnable != 0;
  this->bStencilTestEnable = param_1->stencilTestEnable != 0;
  this->FrontFailOp = (char)(param_1->front).failOp;
  this->FrontPassOp = (char)(param_1->front).passOp;
  this->FrontDepthFailOp = (char)(param_1->front).depthFailOp;
  this->FrontCompareOp = (char)(param_1->front).compareOp;
  this->FrontCompareMask = (uint)(byte)(param_1->front).compareMask;
  this->FrontWriteMask = (param_1->front).writeMask;
  this->FrontReference = (param_1->front).reference;
  this->BackFailOp = (char)(param_1->back).failOp;
  this->BackPassOp = (char)(param_1->back).passOp;
  this->BackDepthFailOp = (char)(param_1->back).depthFailOp;
  this->BackCompareOp = (char)(param_1->back).compareOp;
  this->BackCompareMask = (uint)(byte)(param_1->back).compareMask;
  this->BackWriteMask = (param_1->back).writeMask;
  this->BackReference = (param_1->back).reference;
  return;
}

// WriteInto @ 145b84340

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FGfxPipelineDesc::FDepthStencil::WriteInto
          (FDepthStencil *this,VkPipelineDepthStencilStateCreateInfo *param_1)

{
  param_1->depthCompareOp = (uint)this->DepthCompareOp;
  param_1->depthTestEnable = (uint)this->bDepthTestEnable;
  param_1->depthWriteEnable = (uint)this->bDepthWriteEnable;
  param_1->depthBoundsTestEnable = (uint)this->bDepthBoundsTestEnable;
  param_1->stencilTestEnable = (uint)this->bStencilTestEnable;
  (param_1->front).failOp = (uint)this->FrontFailOp;
  (param_1->front).passOp = (uint)this->FrontPassOp;
  (param_1->front).depthFailOp = (uint)this->FrontDepthFailOp;
  (param_1->front).compareOp = (uint)this->FrontCompareOp;
  (param_1->front).compareMask = this->FrontCompareMask;
  (param_1->front).writeMask = this->FrontWriteMask;
  (param_1->front).reference = this->FrontReference;
  (param_1->back).failOp = (uint)this->BackFailOp;
  (param_1->back).passOp = (uint)this->BackPassOp;
  (param_1->back).depthFailOp = (uint)this->BackDepthFailOp;
  (param_1->back).compareOp = (uint)this->BackCompareOp;
  (param_1->back).writeMask = this->BackWriteMask;
  (param_1->back).compareMask = this->BackCompareMask;
  (param_1->back).reference = this->BackReference;
  return;
}

