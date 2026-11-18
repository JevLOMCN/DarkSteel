// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// ReadFrom @ 145b76c50

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

void __thiscall
FGfxPipelineDesc::FRenderTargets::FStencilAttachmentDesc::ReadFrom
          (FStencilAttachmentDesc *this,VkAttachmentDescriptionStencilLayout *param_1)

{
  this->InitialLayout = (longlong)(int)param_1->stencilInitialLayout;
  this->FinalLayout = (longlong)(int)param_1->stencilFinalLayout;
  return;
}

// WriteInto @ 145b84af0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

void __thiscall
FGfxPipelineDesc::FRenderTargets::FStencilAttachmentDesc::WriteInto
          (FStencilAttachmentDesc *this,VkAttachmentDescriptionStencilLayout *param_1)

{
  param_1->stencilInitialLayout = (VkImageLayout)this->InitialLayout;
  param_1->stencilFinalLayout = (VkImageLayout)this->FinalLayout;
  return;
}

