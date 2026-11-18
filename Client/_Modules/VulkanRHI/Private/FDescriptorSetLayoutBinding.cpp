// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// ReadFrom @ 145b765d0

/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

void __thiscall
FDescriptorSetLayoutBinding::ReadFrom
          (FDescriptorSetLayoutBinding *this,VkDescriptorSetLayoutBinding *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  this->Binding = param_1->binding;
  if (param_1->descriptorCount != 1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4541913072113025785>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                       ,0x2f9,"InState.descriptorCount == 1");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->DescriptorType = (char)param_1->descriptorType;
  this->StageFlags = (uchar)param_1->stageFlags;
  return;
}

// WriteInto @ 145b843d0

/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

void __thiscall
FDescriptorSetLayoutBinding::WriteInto
          (FDescriptorSetLayoutBinding *this,VkDescriptorSetLayoutBinding *param_1)

{
  param_1->binding = this->Binding;
  param_1->descriptorType = (uint)this->DescriptorType;
  param_1->stageFlags = (uint)this->StageFlags;
  return;
}

