// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// ReadFrom @ 145b76480

/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

void __thiscall
FGfxPipelineDesc::FRenderTargets::FAttachmentDesc::ReadFrom
          (FAttachmentDesc *this,VkAttachmentDescription *param_1)

{
  this->Format = param_1->format;
  this->Flags = (uchar)param_1->flags;
  this->Samples = (char)param_1->samples;
  this->LoadOp = (char)param_1->loadOp;
  this->StoreOp = (char)param_1->storeOp;
  this->StencilLoadOp = (char)param_1->stencilLoadOp;
  this->StencilStoreOp = (char)param_1->stencilStoreOp;
  this->InitialLayout = (longlong)(int)param_1->initialLayout;
  this->FinalLayout = (longlong)(int)param_1->finalLayout;
  return;
}

// WriteInto @ 145b84280

/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

void __thiscall
FGfxPipelineDesc::FRenderTargets::FAttachmentDesc::WriteInto
          (FAttachmentDesc *this,VkAttachmentDescription *param_1)

{
  param_1->format = this->Format;
  param_1->flags = (uint)this->Flags;
  param_1->samples = (uint)this->Samples;
  param_1->loadOp = (uint)this->LoadOp;
  param_1->storeOp = (uint)this->StoreOp;
  param_1->stencilLoadOp = (uint)this->StencilLoadOp;
  param_1->stencilStoreOp = (uint)this->StencilStoreOp;
  param_1->initialLayout = (VkImageLayout)this->InitialLayout;
  param_1->finalLayout = (VkImageLayout)this->FinalLayout;
  return;
}

