// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 3

// ReadFrom @ 145b76c80

/* WARNING: Enum "VkFormat": Some values do not have unique names */

void __thiscall
FGfxPipelineDesc::FVertexAttribute::ReadFrom
          (FVertexAttribute *this,VkVertexInputAttributeDescription *param_1)

{
  this->Binding = param_1->binding;
  this->Format = param_1->format;
  this->Location = param_1->location;
  this->Offset = param_1->offset;
  return;
}

// WriteInto @ 145b84b20

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

void __thiscall
FGfxPipelineDesc::FVertexAttribute::WriteInto
          (FVertexAttribute *this,VkVertexInputAttributeDescription2EXT *param_1)

{
  param_1->binding = this->Binding;
  param_1->format = this->Format;
  param_1->location = this->Location;
  param_1->offset = this->Offset;
  return;
}

// WriteInto @ 145b84b40

/* WARNING: Enum "VkFormat": Some values do not have unique names */

void __thiscall
FGfxPipelineDesc::FVertexAttribute::WriteInto
          (FVertexAttribute *this,VkVertexInputAttributeDescription *param_1)

{
  param_1->binding = this->Binding;
  param_1->format = this->Format;
  param_1->location = this->Location;
  param_1->offset = this->Offset;
  return;
}

