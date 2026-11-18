// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// FVulkanTimingArray @ 145b93f40

FVulkanTimingArray * __thiscall
FVulkanDynamicRHI::FVulkanTimingArray::FVulkanTimingArray
          (FVulkanTimingArray *this,FVulkanTimingArray *param_1)

{
  *(undefined8 *)&this->field_0x18 = 0;
  if (*(longlong *)&param_1->field_0x18 == 0) {
    memmove(this,param_1,0x18);
  }
  if (*(void **)&this->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x18);
  }
  *(undefined8 *)&this->field_0x18 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&param_1->field_0x18 = 0;
  *(undefined4 *)&this->field_0x20 = *(undefined4 *)&param_1->field_0x20;
  *(undefined4 *)&this->field_0x24 = *(undefined4 *)&param_1->field_0x24;
  *(undefined4 *)&param_1->field_0x20 = 0;
  *(undefined4 *)&param_1->field_0x24 = 3;
  return this;
}

// CreateNew @ 145ba4d90

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

FVulkanTiming * __thiscall
FVulkanDynamicRHI::FVulkanTimingArray::CreateNew(FVulkanTimingArray *this,FVulkanQueue *param_1)

{
  FQueue_u_0 FVar1;
  FQueue FVar2;
  int iVar3;
  FVulkanTiming *pFVar4;
  undefined4 extraout_var;
  FVulkanTiming *pFVar5;
  
  pFVar4 = ::operator_new(0x40);
  pFVar5 = (FVulkanTiming *)0x0;
  if (pFVar4 != (FVulkanTiming *)0x0) {
    pFVar4->Queue = param_1;
    pFVar4->GPUFrequency = 0;
    pFVar4->GPUTimestamp = 0;
    pFVar4->CPUFrequency = 0;
    pFVar4->CPUTimestamp = 0;
    FVar2 = FVulkanQueue::GetProfilerQueue(param_1);
    FVar1 = *(FQueue_u_0 *)CONCAT44(extraout_var,FVar2.field0_0x0);
    (pFVar4->EventStream).First = (FChunk *)0x0;
    (pFVar4->EventStream).Current = (FChunk *)0x0;
    (pFVar4->EventStream).Queue.field0_0x0 = FVar1;
    pFVar5 = pFVar4;
  }
  iVar3 = *(int *)&this->field_0x20;
  if (iVar3 == *(int *)&this->field_0x24) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_>_>_>
                      (0x808,(ForElementType<TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_>_>
                              *)this,(int *)&this->field_0x24);
  }
  *(int *)&this->field_0x20 = iVar3 + 1;
  if (*(FVulkanTimingArray **)&this->field_0x18 != (FVulkanTimingArray *)0x0) {
    this = *(FVulkanTimingArray **)&this->field_0x18;
  }
  *(FVulkanTiming **)(&this->field_0x0 + (longlong)iVar3 * 8) = pFVar5;
  return pFVar5;
}

