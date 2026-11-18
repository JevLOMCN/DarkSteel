// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 14

// FVulkanCommandBuffer @ 145adb250

/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

FVulkanCommandBuffer * __thiscall
FVulkanCommandBuffer::FVulkanCommandBuffer
          (FVulkanCommandBuffer *this,FVulkanDevice *param_1,FVulkanCommandBufferPool *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  FQueue_u_0 FVar4;
  FQueue FVar5;
  undefined4 extraout_var;
  FGfxPipelineDesc *_Dst;
  FWindowsRecursiveMutex *lpCriticalSection;
  FGfxPipelineDesc *_Dst_00;
  
  _Dst_00 = (FGfxPipelineDesc *)0x0;
  (this->CurrentViewports).AllocatorInstance.SecondaryData = (ForElementType<VkViewport>)0x0;
  (this->CurrentViewports).ArrayNum = 0;
  (this->CurrentViewports).ArrayMax = 2;
  (this->CurrentScissors).AllocatorInstance.SecondaryData = (ForElementType<VkRect2D>)0x0;
  (this->CurrentScissors).ArrayNum = 0;
  *(undefined8 *)&(this->CurrentScissors).ArrayMax = 2;
  this->LastDynamicStateUpdate = (FGfxPipelineDesc *)0x0;
  (this->ExecutedSecondaryCommandBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutedSecondaryCommandBuffers).ArrayNum = 0;
  (this->ExecutedSecondaryCommandBuffers).ArrayMax = 0;
  this->CommandBufferPool = param_2;
  this->Device = param_1;
  puVar2 = &this->field_0x80;
  this->bNeedsFullDynamicStateUpdate = '\x01';
  this->bHasStencilRef = '\0';
  this->bHasScissor = '\0';
  this->bHasViewport = '\0';
  this->bHasPipeline = '\0';
  this->State = NotAllocated;
  this->CurrentMultiViewCount = '\0';
  this->LastDynamicRenderingFlags = 0;
  this->CommandBufferHandle = (VkCommandBuffer_T *)0x0;
  this->SubmittedTime = 0.0;
  (this->EndedBarrierEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EndedBarrierEvents).ArrayNum = 0;
  (this->EndedBarrierEvents).ArrayMax = 0;
  FVar5 = FVulkanQueue::GetProfilerQueue(param_2->Queue);
  FVar4 = *(FQueue_u_0 *)CONCAT44(extraout_var,FVar5.field0_0x0);
  (this->EventStream).First = (FChunk *)0x0;
  (this->EventStream).Current = (FChunk *)0x0;
  (this->EventStream).Queue.field0_0x0 = FVar4;
  (this->BeginEvents).AllocatorInstance.SecondaryData =
       (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)0x0;
  (this->BeginEvents).ArrayNum = 0;
  (this->BeginEvents).ArrayMax = 8;
  lpCriticalSection = &this->CommandBufferPool->CS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  AllocMemory(this);
  if (((param_1->OptionalDeviceExtensions).field0_0x0.Packed & 0x1e0000000000000) != 0) {
    _Dst = ::operator_new(0x150);
    if (_Dst != (FGfxPipelineDesc *)0x0) {
      memset(_Dst,0,0x150);
      _Dst_00 = _Dst;
    }
    this->LastDynamicStateUpdate = _Dst_00;
    memset(_Dst_00,0,0x150);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return this;
}

// ~FVulkanCommandBuffer @ 145adc4e0

/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall FVulkanCommandBuffer::~FVulkanCommandBuffer(FVulkanCommandBuffer *this)

{
  FGfxPipelineDesc *pFVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*> FVar3;
  ForElementType<VkRect2D> FVar4;
  ForElementType<VkViewport> FVar5;
  
  if (this->State != NotAllocated) {
    FreeMemory(this);
  }
  pFVar1 = this->LastDynamicStateUpdate;
  if (pFVar1 != (FGfxPipelineDesc *)0x0) {
    pFVar2 = (pFVar1->RenderTargets).Descriptions.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->RenderTargets).ResolveAttachments.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->RenderTargets).ColorAttachments.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->VertexAttributes).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->VertexBindings).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,int>
              ((TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> *)
               (pFVar1->DescriptorSetLayoutBindings).AllocatorInstance.Data,
               (pFVar1->DescriptorSetLayoutBindings).ArrayNum);
    pFVar2 = (pFVar1->DescriptorSetLayoutBindings).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->ColorAttachmentStates).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x150);
    this->LastDynamicStateUpdate = (FGfxPipelineDesc *)0x0;
  }
  FVar3 = (this->BeginEvents).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  UE::RHI::GPUProfiler::FEventStream::~FEventStream(&this->EventStream);
  pFVar2 = (this->EndedBarrierEvents).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ExecutedSecondaryCommandBuffers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FVar4 = (this->CurrentScissors).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<VkRect2D>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FVar5 = (this->CurrentViewports).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<VkViewport>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  return;
}

// AllocMemory @ 145adfa20

/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVulkanCommandBuffer::AllocMemory(FVulkanCommandBuffer *this)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  VkCommandPool_T *pVVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  VkResult VVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumCmdBuffers> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FName local_res10;
  FStatMessage local_38;
  VkCommandBufferAllocateInfo local_28;
  
  if (this->State != NotAllocated) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("State == EState::NotAllocated",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommandBuffer.cpp"
                       ,0x29,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  piVar1 = &(this->CurrentViewports).ArrayMax;
  (this->CurrentViewports).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkViewport>_>
              (0x18,4,0,(ForElementType<VkViewport> *)this,0,piVar1);
  }
  piVar1 = &(this->CurrentScissors).ArrayMax;
  (this->CurrentScissors).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkRect2D>_>
              (0x10,4,0,&(this->CurrentScissors).AllocatorInstance,0,piVar1);
  }
  local_28.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
  local_28._4_8_ = 0;
  local_28.pNext._4_4_ = 0;
  local_28.commandBufferCount = 1;
  local_28.level = (VkCommandBufferLevel)(this->CommandBufferPool->CommandBufferType == Secondary);
  pVVar4 = this->CommandBufferPool->Handle;
  local_28.commandPool._0_4_ = SUB84(pVVar4,0);
  local_28.commandPool._4_4_ = (undefined4)((ulonglong)pVVar4 >> 0x20);
  VVar8 = (*VulkanDynamicAPI::vkAllocateCommandBuffers)
                    (this->Device->Device,&local_28,&this->CommandBufferHandle);
  if (VVar8 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar8,
               "VulkanRHI::vkAllocateCommandBuffers(Device.GetHandle(), &CreateCmdBufInfo, &CommandBufferHandle)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommandBuffer.cpp"
               ,0x33);
  }
  this->State = ReadyForBegin;
  puVar3 = &this->field_0x80;
  this->bNeedsFullDynamicStateUpdate = '\x01';
  this->bHasStencilRef = '\0';
  this->bHasScissor = '\0';
  this->bHasViewport = '\0';
  this->bHasPipeline = '\0';
  FVar10 = StatPtr_STAT_VulkanNumCmdBuffers;
  if (StatPtr_STAT_VulkanNumCmdBuffers == (FThreadSafeStaticStat<FStat_STAT_VulkanNumCmdBuffers>)0x0
     ) {
    pFVar9 = ::FName::FName(&local_res10,"STAT_VulkanNumCmdBuffers");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumCmdBuffers>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumCmdBuffers,*pFVar9,
                        L"Num Cmd Buffers","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",
                        true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar5 = *(FName *)FVar10;
  if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar5;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_38.NameAndInfo.Number = FVar5.Number & 0xffffafff | 0xa000;
    local_38.StatData.Pad[0] = '\x01';
    local_38.StatData.Pad[1] = '\0';
    local_38.StatData.Pad[2] = '\0';
    local_38.StatData.Pad[3] = '\0';
    local_38.StatData.Pad[4] = '\0';
    local_38.StatData.Pad[5] = '\0';
    local_38.StatData.Pad[6] = '\0';
    local_38.StatData.Pad[7] = '\0';
    local_res8 = FVar5;
    local_38.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_38);
    FStatsTrace::Add(&local_res8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return;
}

// Begin @ 145ae0620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */
/* WARNING: Enum "VkPipelineStageFlagBits": Some values do not have unique names */

void __thiscall
FVulkanCommandBuffer::Begin
          (FVulkanCommandBuffer *this,FVulkanQueryPool *param_1,VkRenderPass_T *param_2)

{
  int *piVar1;
  VkCommandBuffer_T *pVVar2;
  FVulkanBindlessDescriptorManager *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  VkResult VVar7;
  int iVar8;
  uint uVar9;
  FBeginWork *pFVar10;
  ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*> FVar11;
  ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*> FVar12;
  FWindowsRecursiveMutex *lpCriticalSection;
  ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*> FVar13;
  undefined1 auStackY_138 [32];
  FBeginWork *local_e8;
  int local_e0 [2];
  ulong64 local_d8;
  VkCommandBufferBeginInfo local_d0;
  VkCommandBufferInheritanceInfo local_b0;
  ulong64 local_78 [8];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (((this->CommandBufferPool->CommandBufferType == Secondary) &&
      (param_2 == (VkRenderPass_T *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(GetCommandBufferType() != EVulkanCommandBufferType::Secondary) || (RenderPassHandle != nullptr)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommandBuffer.cpp"
                         ,0xb4,L"Secondary command buffers require the render pass handle!"), bVar6)
     ) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lpCriticalSection = &this->CommandBufferPool->CS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->State == NeedReset) {
    (*VulkanDynamicAPI::vkResetCommandBuffer)(this->CommandBufferHandle,1);
  }
  else if ((this->State != ReadyForBegin) &&
          (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("State == EState::ReadyForBegin",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommandBuffer.cpp"
                              ,0xbe,L"Can\'t Begin as we\'re NOT ready! CmdBuffer 0x%p State=%d"),
          bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->State = (param_2 != (VkRenderPass_T *)0x0) + IsInsideBegin;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_d0.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
  local_d0._20_4_ = 0;
  local_d0.pInheritanceInfo = (VkCommandBufferInheritanceInfo *)0x0;
  local_d0._4_8_ = 0;
  lVar5 = 1;
  local_b0.renderPass =
       (VkRenderPass_T *)CONCAT44(local_b0.renderPass._4_4_,local_b0.renderPass._0_4_);
  if (this->CommandBufferPool->CommandBufferType == Secondary) {
    local_d0.pInheritanceInfo = &local_b0;
    lVar5 = 3;
    local_b0._4_8_ = 0;
    local_b0.pNext._4_4_ = 0;
    local_b0._52_4_ = 0;
    local_b0.subpass = 0;
    local_b0._28_8_ = 0;
    local_b0.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO;
    local_b0._36_8_ = 0;
    local_b0.queryFlags = 0;
    local_b0.pipelineStatistics = 0;
    local_b0.renderPass = param_2;
  }
  local_d0._12_8_ = lVar5 << 0x20;
  VVar7 = (*VulkanDynamicAPI::vkBeginCommandBuffer)(this->CommandBufferHandle,&local_d0);
  if (VVar7 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar7,"VulkanRHI::vkBeginCommandBuffer(CommandBufferHandle, &BeginInfo)",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommandBuffer.cpp"
               ,0xd1);
  }
  bVar6 = FVulkanDevice::SupportsBindless(this->Device);
  if (bVar6) {
    pVVar2 = this->CommandBufferHandle;
    pFVar3 = this->Device->BindlessDescriptorManager;
    uVar9 = this->CommandBufferPool->Queue->SupportedStages;
    if (pFVar3->bIsSupported == false) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsSupported",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                         ,0x293,L"Trying to BindDescriptorBuffers but bindless is not supported!");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (*VulkanDynamicAPI::vkCmdBindDescriptorBuffersEXT)(pVVar2,8,pFVar3->BufferBindingInfo);
    local_78[0] = 0;
    local_78[1] = 0;
    local_78[2] = 0;
    local_78[3] = 0;
    local_78[4] = 0;
    local_78[5] = 0;
    local_78[6] = 0;
    local_78[7] = 0;
    if ((char)uVar9 < '\0') {
      (*VulkanDynamicAPI::vkCmdSetDescriptorBufferOffsetsEXT)
                (pVVar2,VK_PIPELINE_BIND_POINT_GRAPHICS,pFVar3->BindlessPipelineLayout,0,8,
                 pFVar3->BufferIndices,local_78);
    }
    if ((uVar9 >> 0xb & 1) != 0) {
      (*VulkanDynamicAPI::vkCmdSetDescriptorBufferOffsetsEXT)
                (pVVar2,VK_PIPELINE_BIND_POINT_COMPUTE,pFVar3->BindlessPipelineLayout,0,8,
                 pFVar3->BufferIndices,local_78);
    }
    if ((uVar9 >> 0x15 & 1) != 0) {
      (*VulkanDynamicAPI::vkCmdSetDescriptorBufferOffsetsEXT)
                (pVVar2,VK_PIPELINE_BIND_POINT_RAY_TRACING_KHR,pFVar3->BindlessPipelineLayout,0,8,
                 pFVar3->BufferIndices,local_78);
    }
  }
  if (param_1 != (FVulkanQueryPool *)0x0) {
    local_d8 = 0xffffffffffffffff;
    local_e0[0] = 0;
    pFVar10 = UE::RHI::GPUProfiler::FEventStream::
              Emplace<UE::RHI::GPUProfiler::FEvent::FBeginWork,int,unsigned___int64>
                        (&this->EventStream,local_e0,&local_d8);
    FVar13 = (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)&this->BeginEvents;
    FVar11 = (this->BeginEvents).AllocatorInstance.SecondaryData;
    FVar12 = FVar11;
    if (FVar11 == (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)0x0) {
      FVar12 = FVar13;
    }
    local_e8 = pFVar10;
    if ((ulonglong)FVar12 <= &local_e8) {
      if (FVar11 == (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)0x0) {
        FVar11 = FVar13;
      }
      if (&local_e8 < (FBeginWork **)((longlong)FVar11 + (longlong)(this->BeginEvents).ArrayMax * 8)
         ) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    iVar8 = (this->BeginEvents).ArrayNum;
    piVar1 = &(this->BeginEvents).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>_>
                        (0x808,(ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*> *)FVar13,
                         piVar1);
    }
    (this->BeginEvents).ArrayNum = iVar8 + 1;
    FVar11 = (this->BeginEvents).AllocatorInstance.SecondaryData;
    if (FVar11 != (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)0x0) {
      FVar13 = FVar11;
    }
    *(FBeginWork **)((longlong)FVar13 + (longlong)iVar8 * 8) = local_e8;
    uVar9 = FVulkanQueryPool::ReserveQuery(param_1,&pFVar10->GPUTimestampTOP);
    (*VulkanDynamicAPI::vkCmdWriteTimestamp)
              (this->CommandBufferHandle,VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,param_1->QueryPool,uVar9)
    ;
  }
  this->bNeedsFullDynamicStateUpdate = '\x01';
  return;
}

// BeginDynamicRendering @ 145ae0a40

/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */

void __thiscall
FVulkanCommandBuffer::BeginDynamicRendering(FVulkanCommandBuffer *this,VkRenderingInfo *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->CommandBufferPool->CommandBufferType == Secondary) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetCommandBufferType() != EVulkanCommandBufferType::Secondary",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommandBuffer.cpp"
                       ,0x84,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*VulkanDynamicAPI::vkCmdBeginRenderingKHR)(this->CommandBufferHandle,param_1);
  this->LastDynamicRenderingFlags = param_1->flags;
  this->State = IsInsideRenderPass;
  return;
}

// BeginRenderPass @ 145ae0ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkSubpassContents": Some values do not have unique names */

void __thiscall
FVulkanCommandBuffer::BeginRenderPass
          (FVulkanCommandBuffer *this,FVulkanBeginRenderPassInfo *param_1,VkClearValue *param_2)

{
  FVulkanFramebuffer *pFVar1;
  VkRenderPass_T *pVVar2;
  code *pcVar3;
  VkOffset2D VVar4;
  VkExtent2D VVar5;
  bool bVar6;
  undefined1 auStack_b8 [32];
  VkCommandBuffer_T *local_98;
  uint local_90;
  VkSubpassBeginInfo local_88;
  VkRenderPassBeginInfo local_68;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (this->State != IsInsideBegin) {
    local_90 = (uint)this->State;
    local_98 = this->CommandBufferHandle;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsOutsideRenderPass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommandBuffer.cpp"
                       ,99,L"Can\'t BeginRP as already inside one! CmdBuffer 0x%p State=%d");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = param_1->Framebuffer;
  local_68._52_4_ = 0;
  bVar6 = param_1->bIsParallelRenderPass != false;
  local_68._4_8_ = 0;
  local_68.pNext._4_4_ = 0;
  local_68.sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
  pVVar2 = param_1->RenderPass->RenderPass;
  local_68.renderPass._0_4_ = SUB84(pVVar2,0);
  local_68.renderPass._4_4_ = (undefined4)((ulonglong)pVVar2 >> 0x20);
  local_68.framebuffer._0_4_ = SUB84(pFVar1->Framebuffer,0);
  local_68.framebuffer._4_4_ = (undefined4)((ulonglong)pFVar1->Framebuffer >> 0x20);
  VVar4 = (pFVar1->RenderArea).offset;
  VVar5 = (pFVar1->RenderArea).extent;
  local_68.renderArea.offset.x = VVar4.x;
  local_68.renderArea.offset.y = VVar4.y;
  local_68.renderArea.extent.width = VVar5.width;
  local_68.renderArea.extent.height = VVar5.height;
  local_68.clearValueCount = (uint)(param_1->RenderPass->Layout).NumUsedClearValues;
  local_68.pClearValues = param_2;
  if (((this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x100000000) == 0) {
    (*VulkanDynamicAPI::vkCmdBeginRenderPass)(this->CommandBufferHandle,&local_68,(uint)bVar6);
  }
  else {
    local_88.sType = VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO;
    local_88._4_8_ = 0;
    local_88._12_8_ = (ulonglong)bVar6 << 0x20;
    local_88._20_4_ = 0;
    (*VulkanDynamicAPI::vkCmdBeginRenderPass2KHR)(this->CommandBufferHandle,&local_68,&local_88);
  }
  this->CurrentMultiViewCount = (param_1->RenderPass->Layout).MultiViewCount;
  this->State = IsInsideRenderPass;
  return;
}

// BeginSplitBarrier @ 145ae0c20

/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
FVulkanCommandBuffer::BeginSplitBarrier
          (FVulkanCommandBuffer *this,VkEvent_T *param_1,VkDependencyInfo *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145ae0c27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*VulkanDynamicAPI::vkCmdSetEvent2KHR)(this->CommandBufferHandle,param_1,param_2);
  return;
}

// End @ 145ae31b0

/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkPipelineStageFlagBits": Some values do not have unique names */

void __thiscall FVulkanCommandBuffer::End(FVulkanCommandBuffer *this,FVulkanQueryPool *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  VkResult VVar6;
  FEndWork *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  int local_res10 [2];
  
  if ((this->State != IsInsideBegin) && (this->CommandBufferPool->CommandBufferType != Secondary)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsOutsideRenderPass() || (GetCommandBufferType() == EVulkanCommandBufferType::Secondary)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommandBuffer.cpp"
                       ,0x96,L"Can\'t End as we\'re inside a render pass! CmdBuffer 0x%p State=%d");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = (this->EndedBarrierEvents).AllocatorInstance.Data;
  iVar2 = (this->EndedBarrierEvents).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->EndedBarrierEvents).ArrayNum != iVar2) {
      `TCheckedPointerIterator<VkEvent_T_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar1) break;
    (*VulkanDynamicAPI::vkCmdResetEvent)(this->CommandBufferHandle,*(VkEvent_T **)pFVar8,0x10000);
    pFVar8 = pFVar8 + 8;
  }
  if (param_1 != (FVulkanQueryPool *)0x0) {
    local_res10[0] = 0;
    pFVar7 = UE::RHI::GPUProfiler::FEventStream::Emplace<UE::RHI::GPUProfiler::FEvent::FEndWork,int>
                       (&this->EventStream,local_res10);
    uVar5 = FVulkanQueryPool::ReserveQuery(param_1,&pFVar7->GPUTimestampBOP);
    (*VulkanDynamicAPI::vkCmdWriteTimestamp)
              (this->CommandBufferHandle,VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT,param_1->QueryPool,
               uVar5);
  }
  VVar6 = (*VulkanDynamicAPI::vkEndCommandBuffer)(this->CommandBufferHandle);
  if (VVar6 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar6,"VulkanRHI::vkEndCommandBuffer(GetHandle())",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommandBuffer.cpp"
               ,0xad);
  }
  this->State = HasEnded;
  return;
}

// EndDynamicRendering @ 145ae32f0

/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall FVulkanCommandBuffer::EndDynamicRendering(FVulkanCommandBuffer *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->CommandBufferPool->CommandBufferType == Secondary) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetCommandBufferType() != EVulkanCommandBufferType::Secondary",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommandBuffer.cpp"
                       ,0x8e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*VulkanDynamicAPI::vkCmdEndRenderingKHR)(this->CommandBufferHandle);
  this->State = IsInsideBegin;
  return;
}

// EndRenderPass @ 145ae3670

/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall FVulkanCommandBuffer::EndRenderPass(FVulkanCommandBuffer *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->State != IsInsideRenderPass) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInsideRenderPass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommandBuffer.cpp"
                       ,0x5b,L"Can\'t EndRP as we\'re NOT inside one! CmdBuffer 0x%p State=%d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*VulkanDynamicAPI::vkCmdEndRenderPass)(this->CommandBufferHandle);
  this->State = IsInsideBegin;
  this->CurrentMultiViewCount = '\0';
  return;
}

// EndSplitBarrier @ 145ae36e0

/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
FVulkanCommandBuffer::EndSplitBarrier
          (FVulkanCommandBuffer *this,VkEvent_T *param_1,VkDependencyInfo *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<VkEvent_T_*,TSizedDefaultAllocator<32>_> *pTVar6;
  VkEvent_T *local_res10 [3];
  
  local_res10[0] = param_1;
  (*VulkanDynamicAPI::vkCmdWaitEvents2KHR)(this->CommandBufferHandle,1,local_res10,param_2);
  pTVar6 = &this->EndedBarrierEvents;
  pFVar2 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2 + (longlong)(this->EndedBarrierEvents).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->EndedBarrierEvents).ArrayNum;
  piVar1 = &(this->EndedBarrierEvents).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar6->AllocatorInstance,piVar1);
  }
  (this->EndedBarrierEvents).ArrayNum = iVar5 + 1;
  *(VkEvent_T **)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_res10[0];
  return;
}

// FreeMemory @ 145ae5740

/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVulkanCommandBuffer::FreeMemory(FVulkanCommandBuffer *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumCmdBuffers> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  if (this->State == NotAllocated) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State != EState::NotAllocated",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommandBuffer.cpp"
                       ,0x50,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->CommandBufferHandle == (VkCommandBuffer_T *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CommandBufferHandle != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommandBuffer.cpp"
                       ,0x51,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*VulkanDynamicAPI::vkFreeCommandBuffers)
            (this->Device->Device,this->CommandBufferPool->Handle,1,&this->CommandBufferHandle);
  this->CommandBufferHandle = (VkCommandBuffer_T *)0x0;
  FVar5 = StatPtr_STAT_VulkanNumCmdBuffers;
  if (StatPtr_STAT_VulkanNumCmdBuffers == (FThreadSafeStaticStat<FStat_STAT_VulkanNumCmdBuffers>)0x0
     ) {
    pFVar4 = ::FName::FName(&local_res10,"STAT_VulkanNumCmdBuffers");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumCmdBuffers>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumCmdBuffers,*pFVar4,
                       L"Num Cmd Buffers","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",
                       true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar5;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar1;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_28.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    local_28.StatData.Pad[0] = '\x01';
    local_28.StatData.Pad[1] = '\0';
    local_28.StatData.Pad[2] = '\0';
    local_28.StatData.Pad[3] = '\0';
    local_28.StatData.Pad[4] = '\0';
    local_28.StatData.Pad[5] = '\0';
    local_28.StatData.Pad[6] = '\0';
    local_28.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_28);
    FStatsTrace::Add(&local_res8,-1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  this->State = NotAllocated;
  return;
}

// Reset @ 145af3980

/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall FVulkanCommandBuffer::Reset(FVulkanCommandBuffer *this)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  pFVar6 = (this->ExecutedSecondaryCommandBuffers).AllocatorInstance.Data;
  iVar5 = (this->ExecutedSecondaryCommandBuffers).ArrayNum;
  pFVar4 = pFVar6 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->ExecutedSecondaryCommandBuffers).ArrayNum != iVar5) {
      `TCheckedPointerIterator<FVulkanCommandBuffer_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar4) break;
    Reset(*(FVulkanCommandBuffer **)pFVar6);
    pFVar6 = pFVar6 + 8;
  }
  piVar1 = &(this->ExecutedSecondaryCommandBuffers).ArrayMax;
  (this->ExecutedSecondaryCommandBuffers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ExecutedSecondaryCommandBuffers).AllocatorInstance,0,piVar1);
  }
  lpCriticalSection = &this->CommandBufferPool->CS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->State == Submitted) {
      puVar3 = &this->field_0x80;
      this->bNeedsFullDynamicStateUpdate = '\x01';
      this->bHasStencilRef = '\0';
      this->bHasScissor = '\0';
      this->bHasViewport = '\0';
      this->bHasPipeline = '\0';
      piVar1 = &(this->CurrentViewports).ArrayMax;
      (this->CurrentViewports).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkViewport>_>
                  (0x18,4,0,(ForElementType<VkViewport> *)this,0,piVar1);
      }
      piVar1 = &(this->CurrentScissors).ArrayMax;
      (this->CurrentScissors).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkRect2D>_>
                  (0x10,4,0,&(this->CurrentScissors).AllocatorInstance,0,piVar1);
      }
      this->CurrentStencilRef = 0;
      pFVar6 = (this->EndedBarrierEvents).AllocatorInstance.Data;
      iVar5 = (this->EndedBarrierEvents).ArrayNum;
      pFVar4 = pFVar6 + (longlong)iVar5 * 8;
      while( true ) {
        if ((this->EndedBarrierEvents).ArrayNum != iVar5) {
          `TCheckedPointerIterator<VkEvent_T_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pFVar6 == pFVar4) break;
        FVulkanDevice::ReleaseBarrierEvent(this->Device,*(VkEvent_T **)pFVar6);
        pFVar6 = pFVar6 + 8;
      }
      (this->EndedBarrierEvents).ArrayNum = 0;
      if ((this->EndedBarrierEvents).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->EndedBarrierEvents).AllocatorInstance,0,
                   &(this->EndedBarrierEvents).ArrayMax);
      }
      this->State = NeedReset;
    }
                    /* WARNING: Could not recover jumptable at 0x000145af3b12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetSubmitted @ 145af47e0

/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall FVulkanCommandBuffer::SetSubmitted(FVulkanCommandBuffer *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FWindowsRecursiveMutex *lpCriticalSection;
  LARGE_INTEGER local_res8;
  
  pFVar3 = (this->ExecutedSecondaryCommandBuffers).AllocatorInstance.Data;
  iVar2 = (this->ExecutedSecondaryCommandBuffers).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ExecutedSecondaryCommandBuffers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FVulkanCommandBuffer_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar3 == pFVar1) break;
    SetSubmitted(*(FVulkanCommandBuffer **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  lpCriticalSection = &this->CommandBufferPool->CS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->State = Submitted;
    QueryPerformanceCounter(&local_res8);
    this->SubmittedTime =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
                    /* WARNING: Could not recover jumptable at 0x000145af4893. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

