// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// ReadFrom @ 145b764f0

void __thiscall
FGfxPipelineDesc::FBlendAttachment::ReadFrom
          (FBlendAttachment *this,VkPipelineColorBlendAttachmentState *param_1)

{
  this->bBlend = param_1->blendEnable != 0;
  this->ColorBlendOp = (char)param_1->colorBlendOp;
  this->SrcColorBlendFactor = (char)param_1->srcColorBlendFactor;
  this->DstColorBlendFactor = (char)param_1->dstColorBlendFactor;
  this->AlphaBlendOp = (char)param_1->alphaBlendOp;
  this->SrcAlphaBlendFactor = (char)param_1->srcAlphaBlendFactor;
  this->DstAlphaBlendFactor = (char)param_1->dstAlphaBlendFactor;
  this->ColorWriteMask = (uchar)param_1->colorWriteMask;
  return;
}

// WriteInto @ 145b842f0

void __thiscall
FGfxPipelineDesc::FBlendAttachment::WriteInto
          (FBlendAttachment *this,VkPipelineColorBlendAttachmentState *param_1)

{
  param_1->blendEnable = (uint)(this->bBlend != false);
  param_1->colorBlendOp = (uint)this->ColorBlendOp;
  param_1->srcColorBlendFactor = (uint)this->SrcColorBlendFactor;
  param_1->dstColorBlendFactor = (uint)this->DstColorBlendFactor;
  param_1->alphaBlendOp = (uint)this->AlphaBlendOp;
  param_1->srcAlphaBlendFactor = (uint)this->SrcAlphaBlendFactor;
  param_1->dstAlphaBlendFactor = (uint)this->DstAlphaBlendFactor;
  param_1->colorWriteMask = (uint)this->ColorWriteMask;
  return;
}

