// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 5

// FVulkanGPUFence @ 145b91910

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

FVulkanGPUFence * __thiscall
FVulkanGPUFence::FVulkanGPUFence(FVulkanGPUFence *this,FVulkanDevice *param_1,FName param_2)

{
  VkResult VVar1;
  VkEventCreateInfo local_28;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_GPUFence);
  this->_padding_ = (longlong)&___7FRHIGPUFence__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FVulkanGPUFence__6B_;
  *(FName *)((longlong)&this->_padding_ + 4) = param_2;
  this->Event = (VkEvent_T *)0x0;
  (this->SubmittedSyncPoint).Reference = (FBaseGraphTask *)0x0;
  (this->CompletedSyncPoint).Reference = (FVulkanSyncPoint *)0x0;
  this->Device = param_1;
  if (GAllowTimelineSemaphores == 0) {
    local_28.sType = VK_STRUCTURE_TYPE_EVENT_CREATE_INFO;
    local_28._20_4_ = 0;
    local_28._4_8_ = 0;
    local_28._12_8_ = 0;
    VVar1 = (*VulkanDynamicAPI::vkCreateEvent)
                      (param_1->Device,&local_28,&VulkanRHI::GAllocationCallbacks,&this->Event);
    if (VVar1 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar1,
                 "VulkanRHI::vkCreateEvent(InDevice.GetHandle(), &EventCreateInfo, VULKAN_CPU_ALLOCATOR, &Event)"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUtil.cpp"
                 ,0x279);
    }
    VVar1 = (*VulkanDynamicAPI::vkResetEvent)(param_1->Device,this->Event);
    if (VVar1 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar1,"VulkanRHI::vkResetEvent(InDevice.GetHandle(), Event)",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUtil.cpp"
                 ,0x27a);
    }
  }
  return this;
}

// ~FVulkanGPUFence @ 145b95870

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

void __thiscall FVulkanGPUFence::~FVulkanGPUFence(FVulkanGPUFence *this)

{
  longlong *plVar1;
  undefined1 *puVar2;
  int iVar3;
  FVulkanSyncPoint *pFVar4;
  FBaseGraphTask *pFVar5;
  longlong lVar6;
  
  this->_padding_ = (longlong)&___7FVulkanGPUFence__6B_;
  if (this->Event != (VkEvent_T *)0x0) {
    VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
              (&this->Device->DeferredDeletionQueue,Event,(ulong64)this->Event);
    this->Event = (VkEvent_T *)0x0;
  }
  pFVar4 = (this->CompletedSyncPoint).Reference;
  if (pFVar4 != (FVulkanSyncPoint *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar5 = (this->SubmittedSyncPoint).Reference;
  if (pFVar5 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar2 = &pFVar5->field_0x30;
    iVar3 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    }
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// Clear @ 145ba03c0

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

void __thiscall FVulkanGPUFence::Clear(FVulkanGPUFence *this)

{
  longlong *plVar1;
  undefined1 *puVar2;
  int iVar3;
  FVulkanSyncPoint *pFVar4;
  FBaseGraphTask *pFVar5;
  longlong lVar6;
  VkResult VVar7;
  
  pFVar4 = (this->CompletedSyncPoint).Reference;
  if (pFVar4 != (FVulkanSyncPoint *)0x0) {
    (this->CompletedSyncPoint).Reference = (FVulkanSyncPoint *)0x0;
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  if (this->Event != (VkEvent_T *)0x0) {
    VVar7 = (*VulkanDynamicAPI::vkResetEvent)(this->Device->Device,this->Event);
    if (VVar7 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar7,"VulkanRHI::vkResetEvent(Device.GetHandle(), Event)",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUtil.cpp"
                 ,0x28d);
    }
    pFVar5 = (this->SubmittedSyncPoint).Reference;
    if (pFVar5 != (FBaseGraphTask *)0x0) {
      (this->SubmittedSyncPoint).Reference = (FBaseGraphTask *)0x0;
      LOCK();
      puVar2 = &pFVar5->field_0x30;
      iVar3 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
      }
    }
  }
  return;
}

// Poll @ 145bb2730

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

bool __thiscall FVulkanGPUFence::Poll(FVulkanGPUFence *this)

{
  FVulkanSyncPoint *pFVar1;
  FBaseGraphTask *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  VkResult VVar6;
  
  pFVar1 = (this->CompletedSyncPoint).Reference;
  if (pFVar1 != (FVulkanSyncPoint *)0x0) {
    if ((pFVar1->GraphEvent).Reference == (FBaseGraphTask *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GraphEvent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.h"
                         ,0x55,
                         L"This sync point was not created with a CPU event. Cannot check completion on the CPU."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if (((pFVar1->GraphEvent).Reference)->field_0xd0 != '\0') {
      return true;
    }
  }
  if (((this->Event != (VkEvent_T *)0x0) &&
      (pFVar2 = (this->SubmittedSyncPoint).Reference, pFVar2 != (FBaseGraphTask *)0x0)) &&
     (pFVar2->field_0xd0 != '\0')) {
    VVar6 = (*VulkanDynamicAPI::vkGetEventStatus)(this->Device->Device,this->Event);
    return VVar6 == VK_EVENT_SET;
  }
  return false;
}

// Wait @ 145bc2540

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
FVulkanGPUFence::Wait(FVulkanGPUFence *this,FRHICommandListImmediate *param_1,FRHIGPUMask param_2)

{
  longlong *plVar1;
  FBaseGraphTask *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  VkResult VVar7;
  FVulkanDynamicRHI *this_00;
  FVulkanSyncPoint *pFVar8;
  
  pFVar8 = (this->CompletedSyncPoint).Reference;
  if (pFVar8 != (FVulkanSyncPoint *)0x0) {
    if (((pFVar8->GraphEvent).Reference == (FBaseGraphTask *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("GraphEvent",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.h"
                           ,0x55,
                           L"This sync point was not created with a CPU event. Cannot check completion on the CPU."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((pFVar8->GraphEvent).Reference)->field_0xd0 != '\0') {
      return;
    }
  }
  if ((((this->Event == (VkEvent_T *)0x0) ||
       (pFVar2 = (this->SubmittedSyncPoint).Reference, pFVar2 == (FBaseGraphTask *)0x0)) ||
      (pFVar2->field_0xd0 == '\0')) ||
     (VVar7 = (*VulkanDynamicAPI::vkGetEventStatus)(this->Device->Device,this->Event),
     VVar7 != VK_EVENT_SET)) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Turquoise,"FVulkanGPUFence_Wait");
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId677,"FVulkanGPUFence_Wait",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUtil.cpp"
                 ,0x2a5);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId677);
    }
    this_00 = (FVulkanDynamicRHI *)(**(code **)(GDynamicRHI->_padding_ + 0x30))();
    pFVar8 = (this->CompletedSyncPoint).Reference;
    if (pFVar8 == (FVulkanSyncPoint *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SyncPoint.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.cpp"
                         ,0x1f9,L"Waiting on invalid sync point.");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      LOCK();
      *(int *)&pFVar8->_padding_ = (int)pFVar8->_padding_ + 1;
      UNLOCK();
    }
    if (((pFVar8->GraphEvent).Reference == (FBaseGraphTask *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("GraphEvent",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.h"
                           ,0x5d,L"This sync point was not created with a CPU event."), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVulkanDynamicRHI::ProcessInterruptQueueUntil(this_00,(pFVar8->GraphEvent).Reference);
    plVar1 = &pFVar8->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      if (plVar1 == (longlong *)0x0) {
        pFVar8 = (FVulkanSyncPoint *)0x0;
      }
      if (pFVar8 != (FVulkanSyncPoint *)0x0) {
        (**(code **)pFVar8->_padding_)(pFVar8,1);
      }
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

