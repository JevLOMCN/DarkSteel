// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// ReadFrom @ 145b76c70

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

void __thiscall
FGfxPipelineDesc::FRenderTargets::FStencilAttachmentRef::ReadFrom
          (FStencilAttachmentRef *this,VkAttachmentReferenceStencilLayout *param_1)

{
  this->Layout = (longlong)(int)param_1->stencilLayout;
  return;
}

// WriteInto @ 145b84b10

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

void __thiscall
FGfxPipelineDesc::FRenderTargets::FStencilAttachmentRef::WriteInto
          (FStencilAttachmentRef *this,VkAttachmentReferenceStencilLayout *param_1)

{
  param_1->stencilLayout = (VkImageLayout)this->Layout;
  return;
}

