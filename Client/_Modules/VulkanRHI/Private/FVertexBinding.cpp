// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 3

// ReadFrom @ 145b76ca0

void __thiscall
FGfxPipelineDesc::FVertexBinding::ReadFrom
          (FVertexBinding *this,VkVertexInputBindingDescription *param_1)

{
  this->Binding = (ushort)param_1->binding;
  this->InputRate = (short)param_1->inputRate;
  this->Stride = param_1->stride;
  return;
}

// WriteInto @ 145b84b60

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FGfxPipelineDesc::FVertexBinding::WriteInto
          (FVertexBinding *this,VkVertexInputBindingDescription2EXT *param_1)

{
  param_1->binding = (uint)this->Binding;
  param_1->inputRate = (uint)this->InputRate;
  param_1->stride = this->Stride;
  param_1->divisor = 1;
  return;
}

// WriteInto @ 145b84b90

void __thiscall
FGfxPipelineDesc::FVertexBinding::WriteInto
          (FVertexBinding *this,VkVertexInputBindingDescription *param_1)

{
  param_1->binding = (uint)this->Binding;
  param_1->inputRate = (uint)this->InputRate;
  param_1->stride = this->Stride;
  return;
}

