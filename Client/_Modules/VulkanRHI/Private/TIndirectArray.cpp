// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 1

// Empty @ 145bcc7a0

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

void __thiscall
TIndirectArray<FVulkanView,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>::Empty
          (TIndirectArray<FVulkanView,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1)

{
  int *piVar1;
  ForElementType<void_*> FVar2;
  FVulkanView *this_00;
  FRHIDescriptorHandle FVar3;
  int iVar4;
  ForElementType<void_*> FVar5;
  
  FVar2 = (this->Array).AllocatorInstance.SecondaryData;
  iVar4 = (this->Array).ArrayNum;
  FVar5 = (ForElementType<void_*>)this;
  if (FVar2 != (ForElementType<void_*>)0x0) {
    FVar5 = FVar2;
  }
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    this_00 = *(FVulkanView **)FVar5;
    if (this_00 != (FVulkanView *)0x0) {
      FVulkanView::Invalidate(this_00);
      if (((this_00->BindlessHandle).Index != 0xffffffff) &&
         ((this_00->BindlessHandle).Type != Invalid)) {
        FVar3 = this_00->BindlessHandle;
        if ((FVar3.Index != 0xffffffff) && (FVar3.Type != Invalid)) {
          VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
                    (&this_00->Device->DeferredDeletionQueue,BindlessHandle,(ulong64)FVar3);
        }
        (this_00->BindlessHandle).Index = 0xffffffff;
        (this_00->BindlessHandle).Type = Invalid;
        *(undefined3 *)&(this_00->BindlessHandle).field_0x5 = 0;
      }
      ::operator_delete(this_00,0x38);
    }
    FVar5 = (ForElementType<void_*>)((longlong)FVar5 + 8);
  }
  if (-1 < param_1) {
    piVar1 = &(this->Array).ArrayMax;
    (this->Array).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>_>
                (8,8,param_1,(ForElementType<void_*> *)this,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

