// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 1

// GetHash @ 145bcda90

/* WARNING: Enum "VkFormat": Some values do not have unique names */

uint __thiscall FVulkanTextureViewDesc::GetHash(FVulkanTextureViewDesc *this)

{
  uint uVar1;
  
  uVar1 = (*FCrc::MemCrc32Func)(this,4,0);
  uVar1 = (*FCrc::MemCrc32Func)(&this->AspectFlags,4,uVar1);
  uVar1 = (*FCrc::MemCrc32Func)(&this->UEFormat,1,uVar1);
  uVar1 = (*FCrc::MemCrc32Func)(&this->Format,4,uVar1);
  uVar1 = (*FCrc::MemCrc32Func)(&this->FirstMip,4,uVar1);
  uVar1 = (*FCrc::MemCrc32Func)(&this->NumMips,4,uVar1);
  uVar1 = (*FCrc::MemCrc32Func)(&this->ArraySliceIndex,4,uVar1);
  uVar1 = (*FCrc::MemCrc32Func)(&this->NumArraySlices,4,uVar1);
  uVar1 = (*FCrc::MemCrc32Func)(&this->bUseIdentitySwizzle,1,uVar1);
  uVar1 = (*FCrc::MemCrc32Func)(&this->ImageUsageFlags,4,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000145bcdb88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*FCrc::MemCrc32Func)(&this->SamplerYcbcrConversion,8,uVar1);
  return uVar1;
}

