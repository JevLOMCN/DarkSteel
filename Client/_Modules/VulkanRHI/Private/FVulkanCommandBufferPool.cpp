// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanCommandBufferPool @ 145adb3c0

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

FVulkanCommandBufferPool * __thiscall
FVulkanCommandBufferPool::FVulkanCommandBufferPool
          (FVulkanCommandBufferPool *this,FVulkanDevice *param_1,FVulkanQueue *param_2,
          EVulkanCommandBufferType param_3)

{
  VkResult VVar1;
  VkCommandPoolCreateInfo local_28;
  
  this->Device = param_1;
  this->Handle = (VkCommandPool_T *)0x0;
  (this->CmdBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CmdBuffers).ArrayNum = 0;
  (this->CmdBuffers).ArrayMax = 0;
  (this->FreeCmdBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeCmdBuffers).ArrayNum = 0;
  (this->FreeCmdBuffers).ArrayMax = 0;
  this->Queue = param_2;
  this->CommandBufferType = param_3;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CS,4000);
  local_28.queueFamilyIndex = param_2->FamilyIndex;
  local_28.sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
  local_28._4_8_ = 0;
  local_28.pNext._4_4_ = 0;
  local_28.flags = 2;
  VVar1 = (*VulkanDynamicAPI::vkCreateCommandPool)
                    (this->Device->Device,&local_28,&VulkanRHI::GAllocationCallbacks,&this->Handle);
  if (VVar1 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar1,
               "VulkanRHI::vkCreateCommandPool(Device.GetHandle(), &CmdPoolInfo, VULKAN_CPU_ALLOCATOR, &Handle)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommandBuffer.cpp"
               ,0x131);
  }
  return this;
}

// ~FVulkanCommandBufferPool @ 145adc600

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

void __thiscall FVulkanCommandBufferPool::~FVulkanCommandBufferPool(FVulkanCommandBufferPool *this)

{
  FVulkanCommandBuffer *pFVar1;
  FGfxPipelineDesc *pFVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*> FVar4;
  ForElementType<VkRect2D> FVar5;
  ForElementType<VkViewport> FVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar10 = 0;
  uVar12 = uVar10;
  uVar13 = uVar10;
  if (0 < (this->CmdBuffers).ArrayNum) {
    do {
      uVar11 = (uint)uVar12;
      uVar9 = 0;
      if ((int)uVar11 < (this->CmdBuffers).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar1 = *(FVulkanCommandBuffer **)((this->CmdBuffers).AllocatorInstance.Data + uVar13);
      if (pFVar1 != (FVulkanCommandBuffer *)0x0) {
        if (pFVar1->State != NotAllocated) {
          FVulkanCommandBuffer::FreeMemory(pFVar1);
        }
        pFVar2 = pFVar1->LastDynamicStateUpdate;
        if (pFVar2 != (FGfxPipelineDesc *)0x0) {
          pFVar3 = (pFVar2->RenderTargets).Descriptions.AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          pFVar3 = (pFVar2->RenderTargets).ResolveAttachments.AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          pFVar3 = (pFVar2->RenderTargets).ColorAttachments.AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          pFVar3 = (pFVar2->VertexAttributes).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          pFVar3 = (pFVar2->VertexBindings).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          DestructItems<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,int>
                    ((TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> *)
                     (pFVar2->DescriptorSetLayoutBindings).AllocatorInstance.Data,
                     (pFVar2->DescriptorSetLayoutBindings).ArrayNum);
          pFVar3 = (pFVar2->DescriptorSetLayoutBindings).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          pFVar3 = (pFVar2->ColorAttachmentStates).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          ::operator_delete(pFVar2,0x150);
          pFVar1->LastDynamicStateUpdate = (FGfxPipelineDesc *)0x0;
        }
        FVar4 = (pFVar1->BeginEvents).AllocatorInstance.SecondaryData;
        if (FVar4 != (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)0x0) {
          FMemory::Free((void *)FVar4);
        }
        UE::RHI::GPUProfiler::FEventStream::~FEventStream(&pFVar1->EventStream);
        pFVar3 = (pFVar1->EndedBarrierEvents).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        pFVar3 = (pFVar1->ExecutedSecondaryCommandBuffers).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        FVar5 = (pFVar1->CurrentScissors).AllocatorInstance.SecondaryData;
        if (FVar5 != (ForElementType<VkRect2D>)0x0) {
          FMemory::Free((void *)FVar5);
        }
        FVar6 = (pFVar1->CurrentViewports).AllocatorInstance.SecondaryData;
        if (FVar6 != (ForElementType<VkViewport>)0x0) {
          FMemory::Free((void *)FVar6);
        }
        ::operator_delete(pFVar1,0x138);
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      uVar13 = uVar13 + 8;
    } while ((int)(uVar11 + 1) < (this->CmdBuffers).ArrayNum);
  }
  uVar12 = uVar10;
  if (0 < (this->FreeCmdBuffers).ArrayNum) {
    do {
      uVar11 = (uint)uVar10;
      uVar9 = 0;
      if ((int)uVar11 < (this->FreeCmdBuffers).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar1 = *(FVulkanCommandBuffer **)((this->FreeCmdBuffers).AllocatorInstance.Data + uVar12);
      if (pFVar1 != (FVulkanCommandBuffer *)0x0) {
        if (pFVar1->State != NotAllocated) {
          FVulkanCommandBuffer::FreeMemory(pFVar1);
        }
        pFVar2 = pFVar1->LastDynamicStateUpdate;
        if (pFVar2 != (FGfxPipelineDesc *)0x0) {
          pFVar3 = (pFVar2->RenderTargets).Descriptions.AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          pFVar3 = (pFVar2->RenderTargets).ResolveAttachments.AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          pFVar3 = (pFVar2->RenderTargets).ColorAttachments.AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          pFVar3 = (pFVar2->VertexAttributes).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          pFVar3 = (pFVar2->VertexBindings).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          DestructItems<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,int>
                    ((TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> *)
                     (pFVar2->DescriptorSetLayoutBindings).AllocatorInstance.Data,
                     (pFVar2->DescriptorSetLayoutBindings).ArrayNum);
          pFVar3 = (pFVar2->DescriptorSetLayoutBindings).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          pFVar3 = (pFVar2->ColorAttachmentStates).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          ::operator_delete(pFVar2,0x150);
          pFVar1->LastDynamicStateUpdate = (FGfxPipelineDesc *)0x0;
        }
        FVar4 = (pFVar1->BeginEvents).AllocatorInstance.SecondaryData;
        if (FVar4 != (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)0x0) {
          FMemory::Free((void *)FVar4);
        }
        UE::RHI::GPUProfiler::FEventStream::~FEventStream(&pFVar1->EventStream);
        pFVar3 = (pFVar1->EndedBarrierEvents).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        pFVar3 = (pFVar1->ExecutedSecondaryCommandBuffers).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        FVar5 = (pFVar1->CurrentScissors).AllocatorInstance.SecondaryData;
        if (FVar5 != (ForElementType<VkRect2D>)0x0) {
          FMemory::Free((void *)FVar5);
        }
        FVar6 = (pFVar1->CurrentViewports).AllocatorInstance.SecondaryData;
        if (FVar6 != (ForElementType<VkViewport>)0x0) {
          FMemory::Free((void *)FVar6);
        }
        ::operator_delete(pFVar1,0x138);
      }
      uVar10 = (ulonglong)(uVar11 + 1);
      uVar12 = uVar12 + 8;
    } while ((int)(uVar11 + 1) < (this->FreeCmdBuffers).ArrayNum);
  }
  (*VulkanDynamicAPI::vkDestroyCommandPool)
            (this->Device->Device,this->Handle,&VulkanRHI::GAllocationCallbacks);
  this->Handle = (VkCommandPool_T *)0x0;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CS);
  pFVar3 = (this->FreeCmdBuffers).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->CmdBuffers).AllocatorInstance.Data;
  if (pFVar3 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar3);
  return;
}

// Create @ 145ae1870

/* WARNING: Type propagation algorithm not settling */
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

FVulkanCommandBuffer * __thiscall FVulkanCommandBufferPool::Create(FVulkanCommandBufferPool *this)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  FQueue_u_0 FVar4;
  FScriptContainerElement *pFVar5;
  FVulkanDevice *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FQueue FVar10;
  FVulkanCommandBuffer *pFVar11;
  FGfxPipelineDesc *this_00;
  undefined4 extraout_var;
  FGfxPipelineDesc *_Dst;
  FWindowsRecursiveMutex *lpCriticalSection;
  FGfxPipelineDesc *_Dst_00;
  FVulkanCommandBuffer *local_28;
  FGfxPipelineDesc *local_20;
  
  iVar9 = (this->FreeCmdBuffers).ArrayNum;
  if (iVar9 == 0) {
    this_00 = ::operator_new(0x138);
    _Dst_00 = (FGfxPipelineDesc *)0x0;
    if (this_00 != (FGfxPipelineDesc *)0x0) {
      pFVar6 = this->Device;
      *(ForElementType<VkViewport> *)
       &((TArray<VkViewport,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
        &this_00->VertexBindings)->AllocatorInstance = (ForElementType<VkViewport>)0x0;
      *(int *)&((TArray<VkViewport,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
               ((longlong)&this_00->VertexBindings + 8))->AllocatorInstance = 0;
      *(int *)&((TArray<VkViewport,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
               ((longlong)&this_00->VertexBindings + 0xc))->AllocatorInstance = 2;
      *(ForElementType<VkRect2D> *)
       &((TArray<VkRect2D,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
        ((longlong)&this_00->DepthStencil + 4))->AllocatorInstance = (ForElementType<VkRect2D>)0x0;
      *(int *)&((TArray<VkRect2D,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
               ((longlong)&this_00->DepthStencil + 0xc))->AllocatorInstance = 0;
      *(undefined8 *)
       &((TArray<VkRect2D,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
        ((longlong)&this_00->DepthStencil + 0x10))->AllocatorInstance = 2;
      *(FGfxPipelineDesc **)((longlong)&this_00->DepthStencil + 0x1c) = (FGfxPipelineDesc *)0x0;
      *(EState *)((longlong)&this_00->DepthStencil + 0x18) = NotAllocated;
      bVar2 = *(undefined1 *)((longlong)&this_00->DepthStencil + 0x24);
      (((TArray<FVulkanCommandBuffer_*,TSizedDefaultAllocator<32>_> *)this_00->ShaderKeys)->
      AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)(this_00->ShaderKeys + 1) = 0;
      *(int *)((longlong)(this_00->ShaderKeys + 1) + 4) = 0;
      *(FVulkanCommandBufferPool **)&this_00->RenderTargets = this;
      *(byte *)((longlong)&this_00->DepthStencil + 0x24) = bVar2 & 0xe1 | 1;
      *(uchar *)((longlong)&this_00->DepthStencil + 0x25) = '\0';
      *(uint *)((longlong)this_00->ShaderKeys + 0x10) = 0;
      *(FVulkanDevice **)((longlong)this_00->ShaderKeys + 0x18) = pFVar6;
      *(VkCommandBuffer_T **)((longlong)this_00->ShaderKeys + 0x20) = (VkCommandBuffer_T *)0x0;
      this_00->ShaderKeyShared = 0;
      ((TArray<VkEvent_T_*,TSizedDefaultAllocator<32>_> *)((longlong)&this_00->RenderTargets + 8))->
      AllocatorInstance = (FScriptContainerElement *)0x0;
      ((TArray<VkEvent_T_*,TSizedDefaultAllocator<32>_> *)((longlong)&this_00->RenderTargets + 0x10)
      )->AllocatorInstance = (FScriptContainerElement *)0x0;
      FVar10 = FVulkanQueue::GetProfilerQueue(this->Queue);
      FVar4 = *(FQueue_u_0 *)CONCAT44(extraout_var,FVar10.field0_0x0);
      ((FEventStream *)((longlong)&this_00->RenderTargets + 0x18))->First = (FChunk *)0x0;
      ((FEventStream *)((longlong)&this_00->RenderTargets + 0x20))->First = (FChunk *)0x0;
      *(FQueue_u_0 *)&((FEventStream *)((longlong)&this_00->RenderTargets + 0x28))->First = FVar4;
      *(ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*> *)
       &((TArray<UE::RHI::GPUProfiler::FEvent::FBeginWork_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *)((longlong)&this_00->RenderTargets + 0x70))->AllocatorInstance =
           (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)0x0;
      *(int *)&((TArray<UE::RHI::GPUProfiler::FEvent::FBeginWork_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                 *)((longlong)&this_00->RenderTargets + 0x78))->AllocatorInstance = 0;
      *(int *)&((TArray<UE::RHI::GPUProfiler::FEvent::FBeginWork_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                 *)((longlong)&this_00->RenderTargets + 0x7c))->AllocatorInstance = 8;
      lpCriticalSection = &(*(FVulkanCommandBufferPool **)&this_00->RenderTargets)->CS;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      FVulkanCommandBuffer::AllocMemory((FVulkanCommandBuffer *)this_00);
      if (((pFVar6->OptionalDeviceExtensions).field0_0x0.Packed & 0x1e0000000000000) != 0) {
        _Dst = ::operator_new(0x150);
        if (_Dst != (FGfxPipelineDesc *)0x0) {
          memset(_Dst,0,0x150);
          _Dst_00 = _Dst;
        }
        *(FGfxPipelineDesc **)((longlong)&this_00->DepthStencil + 0x1c) = _Dst_00;
        memset(_Dst_00,0,0x150);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      _Dst_00 = this_00;
    }
    pFVar5 = (this->CmdBuffers).AllocatorInstance.Data;
    local_20 = _Dst_00;
    if (((pFVar5 <= (FScriptContainerElement *)&local_20) &&
        ((FScriptContainerElement *)&local_20 < pFVar5 + (longlong)(this->CmdBuffers).ArrayMax * 8))
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FVulkanCommandBuffer *)(*pcVar7)();
      return pFVar11;
    }
    iVar9 = (this->CmdBuffers).ArrayNum;
    piVar1 = &(this->CmdBuffers).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->CmdBuffers).AllocatorInstance,piVar1);
    }
    (this->CmdBuffers).ArrayNum = iVar9 + 1;
    *(FGfxPipelineDesc **)((this->CmdBuffers).AllocatorInstance.Data + (longlong)iVar9 * 8) =
         local_20;
    if ((local_20 == (FGfxPipelineDesc *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CmdBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommandBuffer.cpp"
                           ,0x16f,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FVulkanCommandBuffer *)(*pcVar7)();
      return pFVar11;
    }
    return (FVulkanCommandBuffer *)local_20;
  }
  if ((iVar9 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FVulkanCommandBuffer *)(*pcVar7)();
    return pFVar11;
  }
  local_28 = *(FVulkanCommandBuffer **)(this->FreeCmdBuffers).AllocatorInstance.Data;
  if (((this->FreeCmdBuffers).ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FVulkanCommandBuffer *)(*pcVar7)();
    return pFVar11;
  }
  iVar3 = (this->FreeCmdBuffers).ArrayNum;
  pFVar5 = (this->FreeCmdBuffers).AllocatorInstance.Data;
  iVar9 = iVar3 + -1;
  if (1 < iVar9) {
    iVar9 = 1;
  }
  if (iVar9 != 0) {
    memmove(pFVar5,pFVar5 + (longlong)(iVar3 - iVar9) * 8,(longlong)iVar9 << 3);
  }
  piVar1 = &(this->FreeCmdBuffers).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&(this->FreeCmdBuffers).AllocatorInstance,(this->FreeCmdBuffers).ArrayNum,
             &(this->FreeCmdBuffers).ArrayMax);
  FVulkanCommandBuffer::AllocMemory(local_28);
  pFVar5 = (this->CmdBuffers).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar5 + (longlong)(this->CmdBuffers).ArrayMax * 8))
     && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FVulkanCommandBuffer *)(*pcVar7)();
    return pFVar11;
  }
  iVar9 = (this->CmdBuffers).ArrayNum;
  piVar1 = &(this->CmdBuffers).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->CmdBuffers).AllocatorInstance,piVar1);
  }
  (this->CmdBuffers).ArrayNum = iVar9 + 1;
  *(FVulkanCommandBuffer **)((this->CmdBuffers).AllocatorInstance.Data + (longlong)iVar9 * 8) =
       local_28;
  return local_28;
}

// FreeUnusedCmdBuffers @ 145ae5950

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
FVulkanCommandBufferPool::FreeUnusedCmdBuffers
          (FVulkanCommandBufferPool *this,FVulkanQueue *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  LARGE_INTEGER local_res8;
  FVulkanCommandBuffer *local_58 [6];
  
  lpCriticalSection = &this->CS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_2) {
    (*VulkanDynamicAPI::vkTrimCommandPool)(this->Device->Device,this->Handle,0);
  }
  else {
    QueryPerformanceCounter(&local_res8);
    dVar6 = __real_4024000000000000;
    uVar10 = (this->CmdBuffers).ArrayNum - 1;
    dVar5 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if (-1 < (int)uVar10) {
      lVar13 = (longlong)(int)uVar10;
      lVar12 = lVar13 * 8;
      do {
        uVar11 = ~uVar10 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar10 < (this->CmdBuffers).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_58[0] = *(FVulkanCommandBuffer **)((this->CmdBuffers).AllocatorInstance.Data + lVar12)
        ;
        if (((local_58[0]->State == ReadyForBegin) || (local_58[0]->State == NeedReset)) &&
           (dVar6 < dVar5 - local_58[0]->SubmittedTime)) {
          FVulkanCommandBuffer::FreeMemory(local_58[0]);
          uVar8 = 0;
          if ((int)uVar10 < (this->CmdBuffers).ArrayNum) {
            uVar8 = uVar11;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar2 = (this->CmdBuffers).ArrayNum;
          pFVar3 = (this->CmdBuffers).AllocatorInstance.Data;
          iVar9 = iVar2 + ~uVar10;
          if (1 < iVar9) {
            iVar9 = 1;
          }
          if (iVar9 != 0) {
            memmove(pFVar3 + lVar13 * 8,pFVar3 + (longlong)(iVar2 - iVar9) * 8,(longlong)iVar9 << 3)
            ;
          }
          piVar1 = &(this->CmdBuffers).ArrayNum;
          *piVar1 = *piVar1 + -1;
          pFVar3 = (this->FreeCmdBuffers).AllocatorInstance.Data;
          if (((pFVar3 <= (FScriptContainerElement *)local_58) &&
              ((FScriptContainerElement *)local_58 <
               pFVar3 + (longlong)(this->FreeCmdBuffers).ArrayMax * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = (this->FreeCmdBuffers).ArrayNum;
          piVar1 = &(this->FreeCmdBuffers).ArrayMax;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&(this->FreeCmdBuffers).AllocatorInstance,piVar1);
          }
          (this->FreeCmdBuffers).ArrayNum = iVar9 + 1;
          *(FVulkanCommandBuffer **)
           ((this->FreeCmdBuffers).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_58[0];
        }
        lVar13 = lVar13 + -1;
        lVar12 = lVar12 + -8;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145ae5bfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

