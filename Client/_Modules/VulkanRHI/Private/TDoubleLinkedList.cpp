// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 3

// ~TDoubleLinkedList<FVulkanGraphicsPipelineState_*> @ 145b4c160

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
TDoubleLinkedList<FVulkanGraphicsPipelineState_*>::
~TDoubleLinkedList<FVulkanGraphicsPipelineState_*>
          (TDoubleLinkedList<FVulkanGraphicsPipelineState_*> *this)

{
  TDoubleLinkedListNode *pTVar1;
  code *UNRECOVERED_JUMPTABLE;
  TDoubleLinkedListNode *pTVar2;
  
  this->_padding_ = (longlong)&___7__TDoubleLinkedList_PEAVFVulkanGraphicsPipelineState____6B_;
  pTVar2 = this->HeadNode;
  while (pTVar2 != (TDoubleLinkedListNode *)0x0) {
    pTVar1 = pTVar2->NextNode;
    ::operator_delete(pTVar2,0x18);
    this->HeadNode = pTVar1;
    pTVar2 = pTVar1;
  }
  this->TailNode = (TDoubleLinkedListNode *)0x0;
  this->HeadNode = (TDoubleLinkedListNode *)0x0;
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 8);
  if (UNRECOVERED_JUMPTABLE == SetListSize) {
    this->ListSize = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145b4c1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,0);
  return;
}

// Empty @ 145b659a0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
TDoubleLinkedList<FVulkanGraphicsPipelineState_*>::Empty
          (TDoubleLinkedList<FVulkanGraphicsPipelineState_*> *this)

{
  TDoubleLinkedListNode *pTVar1;
  TDoubleLinkedListNode *pTVar2;
  
  pTVar2 = this->HeadNode;
  while (pTVar2 != (TDoubleLinkedListNode *)0x0) {
    pTVar1 = pTVar2->NextNode;
    ::operator_delete(pTVar2,0x18);
    this->HeadNode = pTVar1;
    pTVar2 = pTVar1;
  }
  this->TailNode = (TDoubleLinkedListNode *)0x0;
  this->HeadNode = (TDoubleLinkedListNode *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000145b659f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(this,0);
  return;
}

// SetListSize @ 145b7b780

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
TDoubleLinkedList<FVulkanGraphicsPipelineState_*>::SetListSize
          (TDoubleLinkedList<FVulkanGraphicsPipelineState_*> *this,int param_1)

{
  this->ListSize = param_1;
  return;
}

