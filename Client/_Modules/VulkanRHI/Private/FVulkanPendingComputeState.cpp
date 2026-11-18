// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// ~FVulkanPendingComputeState @ 145b4def0

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
FVulkanPendingComputeState::~FVulkanPendingComputeState(FVulkanPendingComputeState *this)

{
  TMap<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*,0>_>
  *this_00;
  undefined8 *puVar1;
  void *pvVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*>,TDefaultMapHashableKeyFuncs<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*>,TDefaultMapHashableKeyFuncs<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*>,TDefaultMapHashableKeyFuncs<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  this_00 = &this->PipelineStates;
  TSet<TTuple<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*>,TDefaultMapHashableKeyFuncs<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*>,TDefaultMapHashableKeyFuncs<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*,0>,FDefaultSetAllocator>
              *)this_00);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*>,TDefaultMapHashableKeyFuncs<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*,0>,FDefaultSetAllocator>
              *)this_00;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    iVar5 = 1;
    do {
      puVar1 = *(undefined8 **)(*local_48 + 8 + (longlong)(int)uVar4 * 0x18);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar6 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (3 < uVar6) {
        uVar4 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar6) && (local_18->HashSize < iVar5)) || (iVar5 < local_18->HashSize)) {
        local_18->HashSize = iVar5;
        TSet<TTuple<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*>,TDefaultMapHashableKeyFuncs<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  *(undefined4 *)&(this->PipelineStates).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PipelineStates).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  return;
}

// PrepareForDispatch @ 145b6f490

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
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */

void __thiscall
FVulkanPendingComputeState::PrepareForDispatch
          (FVulkanPendingComputeState *this,FVulkanCommandListContext *param_1)

{
  FVulkanComputePipelineDescriptorState *this_00;
  FVulkanComputePipeline *pFVar1;
  VkCommandBuffer_T *pVVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FVulkanCommandBuffer *pFVar6;
  
  if (this->CurrentState == (FVulkanComputePipelineDescriptorState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentState",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                       ,0x15d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = this->CurrentState;
  if (this->CurrentPipeline->bUsesBindless != false) {
    FVulkanComputePipelineDescriptorState::UpdateBindlessDescriptors(this_00,param_1);
    pFVar1 = this->CurrentPipeline;
    pFVar6 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)param_1);
                    /* WARNING: Could not recover jumptable at 0x000145b6f514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*VulkanDynamicAPI::vkCmdBindPipeline)
              (pFVar6->CommandBufferHandle,VK_PIPELINE_BIND_POINT_COMPUTE,
               (VkPipeline_T *)pFVar1->_padding_);
    return;
  }
  if (*(char *)((longlong)&this_00->_padding_ + 1) != '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bUseBindless",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.h"
                       ,0xcc,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (**(code **)(*(longlong *)GDynamicGlobalUBs._padding_ + 200))();
  if (iVar5 < 1) {
    bVar4 = FVulkanComputePipelineDescriptorState::InternalUpdateDescriptorSets<0>(this_00,param_1);
  }
  else {
    bVar4 = FVulkanComputePipelineDescriptorState::InternalUpdateDescriptorSets<1>(this_00,param_1);
  }
  pFVar6 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)param_1);
  pVVar2 = pFVar6->CommandBufferHandle;
  (*VulkanDynamicAPI::vkCmdBindPipeline)
            (pVVar2,VK_PIPELINE_BIND_POINT_COMPUTE,(VkPipeline_T *)this->CurrentPipeline->_padding_)
  ;
  if (bVar4 != false) {
    FVulkanCommonPipelineDescriptorState::Bind
              ((FVulkanCommonPipelineDescriptorState *)this->CurrentState,pVVar2,
               *(VkPipelineLayout_T **)(this->CurrentState->ComputePipeline->_padding_ + 400),
               VK_PIPELINE_BIND_POINT_COMPUTE);
  }
  return;
}

// SetSRVForUBResource @ 145b7c860

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
FVulkanPendingComputeState::SetSRVForUBResource
          (FVulkanPendingComputeState *this,uint param_1,uint param_2,
          FVulkanShaderResourceView *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_3 == (FVulkanShaderResourceView *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SRV",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                       ,0x14c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVulkanCommonPipelineDescriptorState::SetSRV
            ((FVulkanCommonPipelineDescriptorState *)this->CurrentState,true,(uchar)param_1,param_2,
             param_3);
  return;
}

// SetUAVForUBResource @ 145b7d040

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
FVulkanPendingComputeState::SetUAVForUBResource
          (FVulkanPendingComputeState *this,uint param_1,uint param_2,
          FVulkanUnorderedAccessView *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_3 == (FVulkanUnorderedAccessView *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UAV",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                       ,0x152,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVulkanCommonPipelineDescriptorState::SetUAV
            ((FVulkanCommonPipelineDescriptorState *)this->CurrentState,true,(uchar)param_1,param_2,
             param_3);
  return;
}

