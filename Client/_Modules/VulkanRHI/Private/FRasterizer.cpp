// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// ReadFrom @ 145b76640

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FGfxPipelineDesc::FRasterizer::ReadFrom
          (FRasterizer *this,VkPipelineRasterizationStateCreateInfo *param_1)

{
  this->PolygonMode = (char)param_1->polygonMode;
  this->CullMode = (uchar)param_1->cullMode;
  this->DepthBiasSlopeScale = param_1->depthBiasSlopeFactor;
  this->DepthBiasConstantFactor = param_1->depthBiasConstantFactor;
  return;
}

// WriteInto @ 145b843f0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FGfxPipelineDesc::FRasterizer::WriteInto
          (FRasterizer *this,VkPipelineRasterizationStateCreateInfo *param_1)

{
  float fVar1;
  
  param_1->polygonMode = (uint)this->PolygonMode;
  param_1->cullMode = (uint)this->CullMode;
  param_1->frontFace = VK_FRONT_FACE_CLOCKWISE;
  param_1->depthClampEnable = 0;
  fVar1 = this->DepthBiasConstantFactor;
  param_1->rasterizerDiscardEnable = 0;
  param_1->depthBiasEnable = (uint)(fVar1 != 0.0);
  param_1->depthBiasSlopeFactor = this->DepthBiasSlopeScale;
  param_1->depthBiasConstantFactor = this->DepthBiasConstantFactor;
  return;
}

