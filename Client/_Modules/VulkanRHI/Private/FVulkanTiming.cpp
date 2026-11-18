// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 1

// FVulkanTiming @ 145b93ee0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

FVulkanTiming * __thiscall FVulkanTiming::FVulkanTiming(FVulkanTiming *this,FVulkanQueue *param_1)

{
  FQueue_u_0 FVar1;
  FQueue FVar2;
  undefined4 extraout_var;
  
  this->Queue = param_1;
  this->GPUFrequency = 0;
  this->GPUTimestamp = 0;
  this->CPUFrequency = 0;
  this->CPUTimestamp = 0;
  FVar2 = FVulkanQueue::GetProfilerQueue(param_1);
  FVar1 = *(FQueue_u_0 *)CONCAT44(extraout_var,FVar2.field0_0x0);
  (this->EventStream).First = (FChunk *)0x0;
  (this->EventStream).Current = (FChunk *)0x0;
  (this->EventStream).Queue.field0_0x0 = FVar1;
  return this;
}

