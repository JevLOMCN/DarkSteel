// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 5

// ~FVulkanTypedDescriptorPoolSet @ 145b50f40

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

void __thiscall
FVulkanTypedDescriptorPoolSet::~FVulkanTypedDescriptorPoolSet(FVulkanTypedDescriptorPoolSet *this)

{
  FVulkanDescriptorPool *this_00;
  TList<FVulkanDescriptorPool_*> *pTVar1;
  TList<FVulkanDescriptorPool_*> *pTVar2;
  
  pTVar2 = this->PoolListHead;
  if (pTVar2 == (TList<FVulkanDescriptorPool_*> *)0x0) {
    this->PoolsCount = 0;
    return;
  }
  do {
    this_00 = pTVar2->Element;
    pTVar1 = pTVar2->Next;
    if (this_00 != (FVulkanDescriptorPool *)0x0) {
      FVulkanDescriptorPool::~FVulkanDescriptorPool(this_00);
      ::operator_delete(this_00,0x28);
    }
    ::operator_delete(pTVar2,0x10);
    pTVar2 = pTVar1;
  } while (pTVar1 != (TList<FVulkanDescriptorPool_*> *)0x0);
  this->PoolsCount = 0;
  return;
}

// AllocateDescriptorSets @ 145b56fc0

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

bool __thiscall
FVulkanTypedDescriptorPoolSet::AllocateDescriptorSets
          (FVulkanTypedDescriptorPoolSet *this,FVulkanDescriptorSetsLayout *param_1,
          VkDescriptorSet_T **param_2)

{
  TList<FVulkanDescriptorPool_*> *pTVar1;
  VkResult VVar2;
  FVulkanDescriptorPool *pFVar3;
  VkDescriptorSetAllocateInfo local_38;
  
  if (0 < (param_1->LayoutHandles).ArrayNum) {
    local_38.sType = (param_1->DescriptorSetAllocateInfo).sType;
    local_38._4_4_ = *(undefined4 *)&(param_1->DescriptorSetAllocateInfo).field_0x4;
    local_38.pNext = (param_1->DescriptorSetAllocateInfo).pNext;
    local_38.descriptorSetCount = (param_1->DescriptorSetAllocateInfo).descriptorSetCount;
    local_38._28_4_ = *(undefined4 *)&(param_1->DescriptorSetAllocateInfo).field_0x1c;
    pFVar3 = this->PoolListCurrent->Element;
    local_38.pSetLayouts = (param_1->DescriptorSetAllocateInfo).pSetLayouts;
    local_38.descriptorPool = pFVar3->DescriptorPool;
    VVar2 = (*VulkanDynamicAPI::vkAllocateDescriptorSets)(pFVar3->Device->Device,&local_38,param_2);
    while (VVar2 != VK_SUCCESS) {
      pTVar1 = this->PoolListCurrent->Next;
      if (pTVar1 == (TList<FVulkanDescriptorPool_*> *)0x0) {
        pFVar3 = PushNewPool(this);
      }
      else {
        this->PoolListCurrent = pTVar1;
        pFVar3 = pTVar1->Element;
      }
      local_38.sType = (param_1->DescriptorSetAllocateInfo).sType;
      local_38._4_4_ = *(undefined4 *)&(param_1->DescriptorSetAllocateInfo).field_0x4;
      local_38.pNext = (param_1->DescriptorSetAllocateInfo).pNext;
      local_38.descriptorPool = pFVar3->DescriptorPool;
      local_38.descriptorSetCount = (param_1->DescriptorSetAllocateInfo).descriptorSetCount;
      local_38._28_4_ = *(undefined4 *)&(param_1->DescriptorSetAllocateInfo).field_0x1c;
      local_38.pSetLayouts = (param_1->DescriptorSetAllocateInfo).pSetLayouts;
      VVar2 = (*VulkanDynamicAPI::vkAllocateDescriptorSets)
                        (pFVar3->Device->Device,&local_38,param_2);
    }
  }
  return true;
}

// GetFreePool @ 145b69890

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

FVulkanDescriptorPool * __thiscall
FVulkanTypedDescriptorPoolSet::GetFreePool(FVulkanTypedDescriptorPoolSet *this,bool param_1)

{
  TList<FVulkanDescriptorPool_*> *pTVar1;
  FVulkanDescriptorPool *pFVar2;
  
  pTVar1 = this->PoolListCurrent;
  if (param_1) {
    pTVar1 = pTVar1->Next;
    if (pTVar1 == (TList<FVulkanDescriptorPool_*> *)0x0) {
      pFVar2 = PushNewPool(this);
      return pFVar2;
    }
    this->PoolListCurrent = pTVar1;
  }
  return pTVar1->Element;
}

// PushNewPool @ 145b6fcd0

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

FVulkanDescriptorPool * __thiscall
FVulkanTypedDescriptorPoolSet::PushNewPool(FVulkanTypedDescriptorPoolSet *this)

{
  uint uVar1;
  FVulkanDescriptorPool *pFVar2;
  TList<FVulkanDescriptorPool_*> *pTVar3;
  uint uVar4;
  
  uVar1 = this->PoolsCount;
  pFVar2 = ::operator_new(0x28);
  if (pFVar2 == (FVulkanDescriptorPool *)0x0) {
    pFVar2 = (FVulkanDescriptorPool *)0x0;
  }
  else {
    uVar4 = 2;
    if (uVar1 < 2) {
      uVar4 = uVar1;
    }
    pFVar2 = FVulkanDescriptorPool::FVulkanDescriptorPool
                       (pFVar2,this->Device,this->Layout,0x20 << ((byte)uVar4 & 0x1f));
  }
  if (this->PoolListCurrent == (TList<FVulkanDescriptorPool_*> *)0x0) {
    pTVar3 = ::operator_new(0x10);
    if (pTVar3 != (TList<FVulkanDescriptorPool_*> *)0x0) {
      pTVar3->Element = pFVar2;
      pTVar3->Next = (TList<FVulkanDescriptorPool_*> *)0x0;
    }
    this->PoolListHead = pTVar3;
  }
  else {
    pTVar3 = ::operator_new(0x10);
    if (pTVar3 == (TList<FVulkanDescriptorPool_*> *)0x0) {
      pTVar3 = (TList<FVulkanDescriptorPool_*> *)0x0;
    }
    else {
      pTVar3->Element = pFVar2;
      pTVar3->Next = (TList<FVulkanDescriptorPool_*> *)0x0;
    }
    this->PoolListCurrent->Next = pTVar3;
    pTVar3 = this->PoolListCurrent->Next;
  }
  this->PoolListCurrent = pTVar3;
  this->PoolsCount = this->PoolsCount + 1;
  return pFVar2;
}

// Reset @ 145b7a0e0

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

void __thiscall FVulkanTypedDescriptorPoolSet::Reset(FVulkanTypedDescriptorPoolSet *this)

{
  FVulkanDescriptorPool *pFVar1;
  VkResult VVar2;
  TList<FVulkanDescriptorPool_*> *pTVar3;
  
  pTVar3 = this->PoolListHead;
  if (pTVar3 == (TList<FVulkanDescriptorPool_*> *)0x0) {
    this->PoolListCurrent = (TList<FVulkanDescriptorPool_*> *)0x0;
    return;
  }
  do {
    pFVar1 = pTVar3->Element;
    if ((pFVar1->DescriptorPool != (VkDescriptorPool_T *)0x0) &&
       (VVar2 = (*VulkanDynamicAPI::vkResetDescriptorPool)
                          (pFVar1->Device->Device,pFVar1->DescriptorPool,0), VVar2 != VK_SUCCESS)) {
      VulkanRHI::VerifyVulkanResult
                (VVar2,"VulkanRHI::vkResetDescriptorPool(Device->GetHandle(), DescriptorPool, 0)",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                 ,0x74);
    }
    pFVar1->NumAllocatedDescriptorSets = 0;
    pTVar3 = pTVar3->Next;
  } while (pTVar3 != (TList<FVulkanDescriptorPool_*> *)0x0);
  this->PoolListCurrent = this->PoolListHead;
  return;
}

