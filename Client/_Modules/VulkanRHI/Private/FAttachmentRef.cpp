// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// ReadFrom @ 145b764d0

/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

void __thiscall
FGfxPipelineDesc::FRenderTargets::FAttachmentRef::ReadFrom
          (FAttachmentRef *this,VkAttachmentReference *param_1)

{
  this->Attachment = param_1->attachment;
  this->Layout = (longlong)(int)param_1->layout;
  return;
}

// WriteInto @ 145b842d0

/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

void __thiscall
FGfxPipelineDesc::FRenderTargets::FAttachmentRef::WriteInto
          (FAttachmentRef *this,VkAttachmentReference *param_1)

{
  param_1->attachment = this->Attachment;
  param_1->layout = (VkImageLayout)this->Layout;
  return;
}

