// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 7

// FVulkanUnorderedAccessView @ 145b94890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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

FVulkanUnorderedAccessView * __thiscall
FVulkanUnorderedAccessView::FVulkanUnorderedAccessView
          (FVulkanUnorderedAccessView *this,FRHICommandListBase *param_1,FVulkanDevice *param_2,
          FRHIViewableResource *param_3,FRHIViewDesc *param_4)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  FRHIViewDesc *pFVar5;
  bool bVar6;
  VkDescriptorType VVar7;
  FVulkanUnorderedAccessView *pFVar8;
  FRHICommandBase *pFVar9;
  undefined8 *local_res8;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_UnorderedAccessView);
  *(undefined ***)this = &___7FRHIView__6B_;
  *(FRHIViewableResource **)&this->field_0x18 = param_3;
  if (param_3 != (FRHIViewableResource *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_3);
  }
  pFVar5 = param_4;
  uVar4 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_4->field0_0x0;
  *(undefined8 *)&this->field_0x28 = uVar4;
  if (param_3 == (FRHIViewableResource *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InResource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xcae,L"Cannot create a view of a nullptr resource.");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FVulkanUnorderedAccessView *)(*pcVar3)();
      return pFVar8;
    }
  }
  *(undefined ***)this = &___7FRHIUnorderedAccessView__6B_;
  if ((this->field_0x20 == '\0') || (this->field_0x20 == '\x02')) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewDesc.IsUAV()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xce3,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FVulkanUnorderedAccessView *)(*pcVar3)();
      return pFVar8;
    }
  }
  VVar7 = GetVkDescriptorTypeForViewDesc(pFVar5);
  FVulkanView::FVulkanView((FVulkanView *)&this->field_0x38,param_2,VVar7);
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined ***)this = &_vftable__for__FRHIUnorderedAccessView__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__FVulkanLinkedView__;
  param_4 = (FRHIViewDesc *)this;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0'))
     && (param_1->bExecuting == false)) {
    pFVar9 = FMemStackBase::Alloc(&param_1->MemManager,0x20,8);
    param_1->NumCommands = param_1->NumCommands + 1;
    *param_1->CommandLink = pFVar9;
    param_1->CommandLink = &pFVar9->Next;
    pFVar9->Next = (FRHICommandBase *)0x0;
    pFVar9->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FVulkanUnorderedAccessView::FVulkanUnorderedAccessView'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar9[1].Next = (FRHICommandBase *)L"TRHILambdaCommand";
    pFVar9[1]._padding_ = (longlong)this;
  }
  else {
    `FVulkanUnorderedAccessView::FVulkanUnorderedAccessView'::__l2::<lambda_1>::operator()
              (&param_4,param_1);
  }
  FRHICommandListBase::RHIThreadFence(param_1,SUB81(&local_res8,0));
  if (local_res8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_res8 != (undefined8 *)0x0)) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  return this;
}

// operator() @ 145b98cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FVulkanUnorderedAccessView::FVulkanUnorderedAccessView'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  FVulkanContextArray local_18;
  
  lVar3 = *(longlong *)this;
  plVar1 = (longlong *)(lVar3 + 0x70);
  if ((*(char *)(lVar3 + 0x20) == '\0') || (*(char *)(lVar3 + 0x20) == '\x01')) {
    lVar4 = *(longlong *)(lVar3 + 0x18) + 0xe8;
    if (*(longlong *)(lVar3 + 0x18) == 0) {
      lVar4 = 0;
    }
  }
  else {
    lVar2 = (**(code **)(**(longlong **)(lVar3 + 0x18) + 0x48))();
    lVar4 = 0;
    if (lVar2 != 0) {
      lVar4 = lVar2 + 0x140;
    }
  }
  plVar5 = (longlong *)(lVar4 + 8);
  if (*(longlong *)(lVar4 + 8) != 0) {
    *(longlong **)(*(longlong *)(lVar4 + 8) + 0x48) = plVar1;
  }
  *plVar1 = *plVar5;
  *(longlong **)(lVar3 + 0x78) = plVar5;
  lVar3 = lVar3 + 0x30;
  if (plVar1 == (longlong *)0x0) {
    lVar3 = 0;
  }
  *plVar5 = lVar3;
  local_18._0_8_ = 0;
  local_18._8_8_ = 0;
  FVulkanUnorderedAccessView::UpdateView
            ((FVulkanUnorderedAccessView *)(*(longlong *)this + 0x30),&local_18);
  return;
}

// operator() @ 145b9b0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
`FVulkanUnorderedAccessView::Clear'::__l7::<lambda_2>::operator()
          (void *this,FVulkanCommandListContext *param_1)

{
  FVulkanCommandBuffer *pFVar1;
  undefined1 auStackY_178 [32];
  FVulkanPipelineBarrier local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar1 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)param_1);
  local_148.MemoryBarriers.ArrayMax = 1;
  local_148.MemoryBarriers.AllocatorInstance.SecondaryData = (ForElementType<VkMemoryBarrier2>)0x0;
  local_148.MemoryBarriers.ArrayNum = 0;
  local_148.ImageBarriers.AllocatorInstance.SecondaryData =
       (ForElementType<VkImageMemoryBarrier2>)0x0;
  local_148.ImageBarriers.ArrayNum = 0;
  local_148.BufferBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.BufferBarriers.ArrayNum = 0;
  local_148.BufferBarriers.ArrayMax = 0;
  local_148.ImageBarriers.ArrayMax = 2;
  FVulkanPipelineBarrier::AddMemoryBarrier(&local_148,0x18000,0x1000,0x10000,0x1000);
  FVulkanPipelineBarrier::Execute(&local_148,pFVar1);
  if (local_148.BufferBarriers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.BufferBarriers.AllocatorInstance.Data);
  }
  if (local_148.ImageBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkImageMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_148.ImageBarriers.AllocatorInstance.SecondaryData);
  }
  if (local_148.MemoryBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_148.MemoryBarriers.AllocatorInstance.SecondaryData);
  }
  (*VulkanDynamicAPI::vkCmdFillBuffer)
            (pFVar1->CommandBufferHandle,*(VkBuffer_T **)(*(longlong *)((longlong)this + 8) + 0x108)
             ,(ulonglong)
              (uint)(*(int *)(*(longlong *)((longlong)this + 8) + 0x118) +
                    *(int *)((longlong)this + 0x10)),(ulonglong)*(uint *)((longlong)this + 0x1c),
             *(uint *)((longlong)this + 0x28));
  local_148.MemoryBarriers.AllocatorInstance.SecondaryData = (ForElementType<VkMemoryBarrier2>)0x0;
  local_148.MemoryBarriers.ArrayNum = 0;
  local_148.MemoryBarriers.ArrayMax = 1;
  local_148.ImageBarriers.AllocatorInstance.SecondaryData =
       (ForElementType<VkImageMemoryBarrier2>)0x0;
  local_148.ImageBarriers.ArrayNum = 0;
  local_148.ImageBarriers.ArrayMax = 2;
  local_148.BufferBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.BufferBarriers.ArrayNum = 0;
  local_148.BufferBarriers.ArrayMax = 0;
  FVulkanPipelineBarrier::AddMemoryBarrier(&local_148,0x1000,0x18000,0x1000,0x10000);
  FVulkanPipelineBarrier::Execute(&local_148,pFVar1);
  if (local_148.BufferBarriers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.BufferBarriers.AllocatorInstance.Data);
  }
  if (local_148.ImageBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkImageMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_148.ImageBarriers.AllocatorInstance.SecondaryData);
  }
  if (local_148.MemoryBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_148.MemoryBarriers.AllocatorInstance.SecondaryData);
  }
  return;
}

// Clear @ 145ba0480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanUnorderedAccessView::Clear
          (FVulkanUnorderedAccessView *this,
          TRHICommandList_RecursiveHazardous<FVulkanCommandListContext> *param_1,void *param_2,
          bool param_3)

{
  char cVar1;
  FRHIBuffer *pFVar2;
  code *pcVar3;
  byte bVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  FRHITexture *pFVar8;
  longlong lVar9;
  IRHICommandContext *pIVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  FVulkanCommandListContext *pFVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined1 auStackY_d8 [32];
  undefined1 local_a0 [16];
  FVulkanUnorderedAccessView *local_90;
  FRHIBuffer *pFStack_88;
  longlong local_80;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  FViewInfo local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  if ((this->field_0x20 == '\0') || (this->field_0x20 == '\x01')) {
    pFVar2 = *(FRHIBuffer **)&this->field_0x18;
    FRHIViewDesc::FBufferUAV::GetViewInfo((FBufferUAV *)&this->field_0x20,&local_60,pFVar2);
    if ((char)local_60._padding_ == '\x01') {
      uVar14 = (uint)local_60._padding_ + 0x3f;
      pIVar10 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
      lVar9 = (**(code **)(pIVar10->_padding_ + 0x148))(pIVar10);
      plVar12 = (longlong *)(lVar9 + -0x48);
      if (lVar9 == 0) {
        plVar12 = (longlong *)&DAT_00000008;
      }
      if (uVar14 >> 6 <= *(uint *)(*plVar12 + 0xd5c)) {
        if (param_3) {
          ClearUAVShader_T<0,0,4,0>
                    ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)this,
                     (uint)local_60._padding_,1,1,param_2);
          return;
        }
        if (((local_60._padding_._1_1_ - 0x1dU & 0xf9) == 0) && (local_60._padding_._1_1_ != '\x1f')
           ) {
          ClearUAVShader_T<0,1,4,0>
                    ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)this,
                     (uint)local_60._padding_,1,1,param_2);
          return;
        }
        ClearUAVShader_T<0,2,4,0>
                  ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)this,
                   (uint)local_60._padding_,1,1,param_2);
        return;
      }
      if (param_3) {
        ClearUAVShader_T<5,0,4,0>
                  ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)this,
                   (uint)local_60._padding_,1,1,param_2);
        return;
      }
      if (((local_60._padding_._1_1_ - 0x1dU & 0xf9) == 0) && (local_60._padding_._1_1_ != '\x1f'))
      {
        ClearUAVShader_T<5,1,4,0>
                  ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)this,
                   (uint)local_60._padding_,1,1,param_2);
        return;
      }
      ClearUAVShader_T<5,2,4,0>
                ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)this,
                 (uint)local_60._padding_,1,1,param_2);
      return;
    }
    if (((char)local_60._padding_ == '\x02') || ((char)local_60._padding_ == '\x04')) {
      local_a0._8_8_ = CONCAT44(local_60._padding_._4_4_,(uint)local_60._padding_);
      uStack_68 = *(undefined4 *)param_2;
      local_a0._0_8_ = local_60._padding_;
      local_80 = local_60._padding_;
      local_70 = CONCAT62(local_60._18_6_,
                          CONCAT11(local_60._padding_._1_1_,(char)local_60._padding_));
      local_90 = this;
      pFStack_88 = pFVar2;
      if ((GRHICommandList.bLatchedBypass != false) && ((param_1->field_0x29b & 0x20) != 0)) {
        pIVar10 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
        lVar9 = (**(code **)(pIVar10->_padding_ + 0x148))(pIVar10);
        pFVar13 = (FVulkanCommandListContext *)(lVar9 + -0x50);
        if (lVar9 == 0) {
          pFVar13 = (FVulkanCommandListContext *)0x0;
        }
        `FVulkanUnorderedAccessView::Clear'::__l7::<lambda_2>::operator()(&local_90,pFVar13);
        return;
      }
      puVar11 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x40,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar11;
      *(undefined8 **)&param_1->field_0x30 = puVar11 + 1;
      puVar11[2] = local_90;
      puVar11[3] = pFStack_88;
      puVar11[1] = 0;
      *puVar11 = &TRHICommandList_RecursiveHazardous<FVulkanCommandListContext>::
                  TRHILambdaCommand<`FVulkanUnorderedAccessView::Clear'::`7'::<lambda_2>_>::
                  _vftable_;
      puVar11[4] = local_a0._0_8_;
      puVar11[5] = local_a0._8_8_;
      puVar11[6] = local_70;
      puVar11[7] = CONCAT44(uStack_64,uStack_68);
      return;
    }
    iVar16 = 0xc1;
LAB_145ba0764:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUAV.cpp"
                       ,iVar16,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    uVar14 = SUB84(local_a0._0_8_,5);
    pFVar8 = (FRHITexture *)(**(code **)(**(longlong **)&this->field_0x18 + 0x48))();
    local_a0._5_4_ = uVar14;
    uVar5 = local_a0._5_4_;
    FRHIViewDesc::FTextureUAV::GetViewInfo
              ((FTextureUAV *)&this->field_0x20,(FViewInfo *)local_a0,pFVar8);
    local_a0._5_4_ = uVar5;
    bVar4 = local_a0[8];
    lVar9 = (**(code **)(pFVar8->_padding_ + 0x20))(pFVar8);
    local_a0._2_4_ = local_a0._5_4_;
    uVar17 = (uint)(*(ushort *)(lVar9 + 0x2c) >> (bVar4 & 0x1f));
    uVar7 = *(int *)(lVar9 + 0x24) >> (bVar4 & 0x1f);
    uVar15 = *(int *)(lVar9 + 0x28) >> (bVar4 & 0x1f);
    uVar14 = 1;
    if (1 < (int)uVar7) {
      uVar14 = uVar7;
    }
    uVar7 = 1;
    if (1 < (int)uVar15) {
      uVar7 = uVar15;
    }
    uVar15 = 1;
    if (1 < uVar17) {
      uVar15 = uVar17;
    }
    lVar9 = (**(code **)(pFVar8->_padding_ + 0x20))(pFVar8);
    cVar1 = *(char *)(lVar9 + 0x32);
    if (cVar1 == '\0') {
      if (param_3) {
        ClearUAVShader_T<1,0,4,0>
                  ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)this,uVar14,uVar7,
                   uVar15,param_2);
        return;
      }
      if (((local_a0[5] - 0x1dU & 0xf9) == 0) && (local_a0[5] != '\x1f')) {
        ClearUAVShader_T<1,1,4,0>
                  ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)this,uVar14,uVar7,
                   uVar15,param_2);
        return;
      }
      ClearUAVShader_T<1,2,4,0>
                ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)this,uVar14,uVar7,
                 uVar15,param_2);
      return;
    }
    if (cVar1 == '\x01') {
      if (!param_3) {
        if (((local_a0[5] - 0x1dU & 0xf9) != 0) || (local_a0[5] == '\x1f')) {
          local_a0._2_4_ = local_a0._2_4_ & 0xffff;
LAB_145ba05da:
          ClearUAVShader_T<2,2,4,0>
                    ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)this,uVar14,uVar7,
                     local_a0._2_4_,param_2);
          return;
        }
        local_a0._2_4_ = local_a0._2_4_ & 0xffff;
LAB_145ba05b2:
        ClearUAVShader_T<2,1,4,0>
                  ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)this,uVar14,uVar7,
                   local_a0._2_4_,param_2);
        return;
      }
      local_a0._2_4_ = local_a0._2_4_ & 0xffff;
    }
    else {
      if (cVar1 == '\x02') {
        if (param_3) {
          ClearUAVShader_T<3,0,4,0>
                    ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)this,uVar14,uVar7,
                     uVar15,param_2);
          return;
        }
        if (((local_a0[5] - 0x1dU & 0xf9) == 0) && (local_a0[5] != '\x1f')) {
          ClearUAVShader_T<3,1,4,0>
                    ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)this,uVar14,uVar7,
                     uVar15,param_2);
          return;
        }
        ClearUAVShader_T<3,2,4,0>
                  ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)this,uVar14,uVar7,
                   uVar15,param_2);
        return;
      }
      if ((cVar1 != '\x03') && (cVar1 != '\x04')) {
        iVar16 = 0xe0;
        goto LAB_145ba0764;
      }
      if (!param_3) {
        if (((local_a0[5] - 0x1dU & 0xf9) != 0) || (local_a0[5] == '\x1f')) {
          local_a0._2_4_ = ((local_a0._2_4_ & 0xffff) + (local_a0._2_4_ & 0xffff) * 2) * 2;
          goto LAB_145ba05da;
        }
        local_a0._2_4_ = ((local_a0._2_4_ & 0xffff) + (local_a0._2_4_ & 0xffff) * 2) * 2;
        goto LAB_145ba05b2;
      }
      local_a0._2_4_ = ((local_a0._2_4_ & 0xffff) + (local_a0._2_4_ & 0xffff) * 2) * 2;
    }
    ClearUAVShader_T<2,0,4,0>
              ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)this,uVar14,uVar7,
               local_a0._2_4_,param_2);
  }
  return;
}

// GetBaseResource @ 145bab990

FVulkanViewableResource * __thiscall
FVulkanUnorderedAccessView::GetBaseResource(FVulkanUnorderedAccessView *this)

{
  longlong lVar1;
  FVulkanViewableResource *pFVar2;
  
  if ((this->field_0x20 != '\0') && (this->field_0x20 != '\x01')) {
    lVar1 = (**(code **)(**(longlong **)&this->field_0x18 + 0x48))();
    pFVar2 = (FVulkanViewableResource *)(lVar1 + 0x140);
    if (lVar1 == 0) {
      pFVar2 = (FVulkanViewableResource *)0x0;
    }
    return pFVar2;
  }
  pFVar2 = (FVulkanViewableResource *)(*(longlong *)&this->field_0x18 + 0xe8);
  if (*(longlong *)&this->field_0x18 == 0) {
    pFVar2 = (FVulkanViewableResource *)0x0;
  }
  return pFVar2;
}

// GetBindlessHandle @ 145babb90

FRHIDescriptorHandle __thiscall
FVulkanUnorderedAccessView::GetBindlessHandle(FVulkanUnorderedAccessView *this)

{
  FRHIDescriptorHandle in_RDX;
  
  *(undefined8 *)in_RDX = *(undefined8 *)&this->field_0x40;
  return in_RDX;
}

// UpdateView @ 145bc1610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FVulkanUnorderedAccessView::UpdateView
          (FVulkanUnorderedAccessView *this,FVulkanContextArray *param_1)

{
  undefined1 *this_00;
  FVulkanBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FVulkanTexture *this_01;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStackY_c8 [32];
  FViewInfo local_98;
  FVulkanTextureViewDesc local_88;
  FViewInfo local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  this_00 = &this->field_0x8;
  FVulkanView::Invalidate((FVulkanView *)this_00);
  if ((this[-1].field_0x70 != '\0') && (this[-1].field_0x70 != '\x01')) {
    this_01 = (FVulkanTexture *)(**(code **)(**(longlong **)&this[-1].field_0x68 + 0x48))();
    FRHIViewDesc::FTextureUAV::GetViewInfo
              ((FTextureUAV *)&this[-1].field_0x70,&local_98,(FRHITexture *)this_01);
    uVar6 = (uint)(ushort)local_98._0_2_;
    uVar7 = (uint)(ushort)local_98._2_2_;
    if (((local_98._6_1_ & 7) == 3) || ((local_98._6_1_ & 7) == 4)) {
      uVar6 = ((uint)(ushort)local_98._0_2_ + (uint)(ushort)local_98._0_2_ * 2) * 2;
      uVar7 = ((uint)(ushort)local_98._2_2_ + (uint)(ushort)local_98._2_2_ * 2) * 2;
      uVar4 = FVulkanTexture::GetNumberOfArrayLevels(this_01);
      if ((uVar4 < uVar7 + uVar6) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayFirst + ArrayNum) <= Texture->GetNumberOfArrayLevels()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUAV.cpp"
                             ,0x65,L"View extends beyond original cube texture level count!"), bVar3
         )) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_88.ImageUsageFlags = 0;
    local_88.SamplerYcbcrConversion = (VkSamplerYcbcrConversion_T *)0x0;
    lVar5 = (**(code **)(this_01->_padding_ + 0x20))(this_01);
    local_88.ViewType = UETextureDimensionToVkImageViewType(*(ETextureDimension *)(lVar5 + 0x32));
    switch(local_98._6_1_ & 7) {
    case 0:
      break;
    case 1:
      local_88.ViewType = VK_IMAGE_VIEW_TYPE_2D;
      break;
    case 2:
    case 3:
    case 4:
      local_88.ViewType = VK_IMAGE_VIEW_TYPE_2D_ARRAY;
      break;
    case 5:
      local_88.ViewType = VK_IMAGE_VIEW_TYPE_3D;
      break;
    default:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUAV.cpp"
                         ,0x17,L"Unknown texture dimension value!");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_88.ViewType = VK_IMAGE_VIEW_TYPE_MAX_ENUM;
    }
    local_88.AspectFlags = this_01->PartialAspectMask;
    local_88.UEFormat = local_98._5_1_;
    local_88.NumMips = 1;
    local_88.bUseIdentitySwizzle = true;
    local_88.Format = GPixelFormats[(byte)local_98._5_1_].PlatformFormat;
    local_88.FirstMip = (uint)local_98.MipLevel;
    local_88.ArraySliceIndex = uVar6;
    local_88.NumArraySlices = uVar7;
    FVulkanView::InitAsTextureView((FVulkanView *)this_00,param_1,this_01->Image,&local_88);
    return;
  }
  pFVar1 = *(FVulkanBuffer **)&this[-1].field_0x68;
  FRHIViewDesc::FBufferUAV::GetViewInfo
            ((FBufferUAV *)&this[-1].field_0x70,&local_50,(FRHIBuffer *)pFVar1);
  if (((local_50.bAppendBuffer != false) || (local_50.bAtomicCounter != false)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Info.bAppendBuffer && !Info.bAtomicCounter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUAV.cpp"
                         ,0x40,L"UAV counters not implemented in Vulkan RHI."), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_50._padding_._2_1_ != '\0') {
    return;
  }
  if ((char)local_50._padding_ == '\x01') {
    if (((pFVar1->BufferUsageFlags & 8) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("VKHasAllFlags(Buffer->GetBufferUsageFlags(), VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUAV.cpp"
                           ,0x4c,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVulkanView::InitAsTypedBufferView
              ((FVulkanView *)this_00,param_1,pFVar1,local_50._padding_._1_1_,
               (uint)local_50._padding_,local_50._padding_._4_4_);
    return;
  }
  if ((char)local_50._padding_ == '\x02') {
LAB_145bc185d:
    FVulkanView::InitAsStructuredBufferView
              ((FVulkanView *)this_00,param_1,pFVar1,(uint)local_50._padding_,
               local_50._padding_._4_4_);
  }
  else {
    if ((char)local_50._padding_ == '\x03') {
      iVar8 = 0x51;
    }
    else {
      if ((char)local_50._padding_ == '\x04') goto LAB_145bc185d;
      iVar8 = 0x55;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUAV.cpp"
                       ,iVar8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

