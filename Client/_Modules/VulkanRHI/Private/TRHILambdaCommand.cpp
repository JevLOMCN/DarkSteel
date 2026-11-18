// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 27

// ExecuteAndDestruct @ 145ae3f10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FVulkanBuffer::Unlock'::__l14::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x30),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FVulkanBuffer::Unlock'::__l14::<lambda_1>::operator()((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FVulkanBuffer::Unlock'::__l14::<lambda_1>::operator()((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145ae3fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FVulkanBuffer::Lock'::__l31::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FVulkanBuffer::Lock'::__l31::<lambda_1>::operator()((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FVulkanBuffer::Lock'::__l31::<lambda_1>::operator()((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145b65dc0

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
TRHILambdaCommand<FRHICommandListBase,`FVulkanDynamicRHI::RHIEndRenderQueryBatch_TopOfPipe'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  FVulkanCommandListContext *this_00;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  this_00 = FVulkanCommandListContext::Get(param_1);
  FVulkanContextCommon::AddPendingSyncPoint
            ((FVulkanContextCommon *)this_00,
             (TRefCountPtr<FVulkanSyncPoint> *)((longlong)this + 0x10));
  puVar3 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 145b65e80

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
TRHILambdaCommand<FRHICommandListBase,`FVulkanDynamicRHI::RHIEndRenderQuery_TopOfPipe'::__l7::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  FVulkanCommandListContext *this_00;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  this_00 = FVulkanCommandListContext::Get(param_1);
  FVulkanContextCommon::AddPendingSyncPoint
            ((FVulkanContextCommon *)this_00,
             (TRefCountPtr<FVulkanSyncPoint> *)((longlong)this + 0x10));
  puVar3 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 145b65f40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,``FVulkanDynamicRHI::RHIReadSurfaceFloatData'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x58),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    ``FVulkanDynamicRHI::RHIReadSurfaceFloatData'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
    operator()((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  ``FVulkanDynamicRHI::RHIReadSurfaceFloatData'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
  operator()((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145b65fd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FVulkanDynamicRHI::RHIRead3DSurfaceFloatData'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x58),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FVulkanDynamicRHI::RHIRead3DSurfaceFloatData'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FVulkanDynamicRHI::RHIRead3DSurfaceFloatData'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145b66060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`ReadSurfaceData<FColor>'::__l55::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x58),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `ReadSurfaceData<FColor>'::__l55::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `ReadSurfaceData<FColor>'::__l55::<lambda_1>::operator()((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145b660f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`ReadSurfaceData<FLinearColor>'::__l55::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x58),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `ReadSurfaceData<FLinearColor>'::__l55::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `ReadSurfaceData<FLinearColor>'::__l55::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145ba84a0

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
TRHICommandList_RecursiveHazardous<FVulkanCommandListContext>::
TRHILambdaCommand<`FVulkanUnorderedAccessView::Clear'::__l7::<lambda_2>_>::ExecuteAndDestruct
          (void *this,FRHICommandListBase *param_1)

{
  IRHICommandContext *pIVar1;
  longlong lVar2;
  FVulkanCommandListContext *pFVar3;
  
  pIVar1 = FRHICommandListBase::GetContext(param_1);
  lVar2 = (**(code **)(pIVar1->_padding_ + 0x148))();
  pFVar3 = (FVulkanCommandListContext *)(lVar2 + -0x50);
  if (lVar2 == 0) {
    pFVar3 = (FVulkanCommandListContext *)0x0;
  }
  `FVulkanUnorderedAccessView::Clear'::__l7::<lambda_2>::operator()
            ((void *)((longlong)this + 0x10),pFVar3);
  return;
}

// ExecuteAndDestruct @ 145ba84e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FVulkanShaderResourceView::FVulkanShaderResourceView'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FVulkanShaderResourceView::FVulkanShaderResourceView'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FVulkanShaderResourceView::FVulkanShaderResourceView'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145ba8570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FVulkanUnorderedAccessView::FVulkanUnorderedAccessView'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FVulkanUnorderedAccessView::FVulkanUnorderedAccessView'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FVulkanUnorderedAccessView::FVulkanUnorderedAccessView'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145ba8600

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

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FVulkanDynamicRHI::InternalUpdateTexture2D'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  FStagingBuffer *pFVar1;
  FVulkanTexture *pFVar2;
  bool bVar3;
  IRHICommandContext *pIVar4;
  longlong lVar5;
  FVulkanContextCommon *pFVar6;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x58),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  pFVar1 = *(FStagingBuffer **)((longlong)this + 0x50);
  pFVar2 = *(FVulkanTexture **)((longlong)this + 0x10);
  pIVar4 = FRHICommandListBase::GetContext(param_1);
  lVar5 = (**(code **)(pIVar4->_padding_ + 0x148))(pIVar4);
  pFVar6 = (FVulkanContextCommon *)(lVar5 + -0x50);
  if (lVar5 == 0) {
    pFVar6 = (FVulkanContextCommon *)0x0;
  }
  FVulkanTexture::InternalLockWrite
            (pFVar6,pFVar2,(VkBufferImageCopy *)((longlong)this + 0x18),pFVar1);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 145ba86d0

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

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FVulkanDynamicRHI::InternalUpdateTexture3D'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  FStagingBuffer *pFVar1;
  FVulkanTexture *pFVar2;
  bool bVar3;
  IRHICommandContext *pIVar4;
  longlong lVar5;
  FVulkanContextCommon *pFVar6;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x58),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  pFVar1 = *(FStagingBuffer **)((longlong)this + 0x50);
  pFVar2 = *(FVulkanTexture **)((longlong)this + 0x10);
  pIVar4 = FRHICommandListBase::GetContext(param_1);
  lVar5 = (**(code **)(pIVar4->_padding_ + 0x148))(pIVar4);
  pFVar6 = (FVulkanContextCommon *)(lVar5 + -0x50);
  if (lVar5 == 0) {
    pFVar6 = (FVulkanContextCommon *)0x0;
  }
  FVulkanTexture::InternalLockWrite
            (pFVar6,pFVar2,(VkBufferImageCopy *)((longlong)this + 0x18),pFVar1);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 145ba87a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FVulkanDynamicRHI::RHIWriteGPUFence_TopOfPipe'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x28),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FVulkanDynamicRHI::RHIWriteGPUFence_TopOfPipe'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    `FVulkanDynamicRHI::RHIWriteGPUFence_TopOfPipe'::__l2::<lambda_1>::~<lambda_1>
              ((void *)((longlong)this + 0x10));
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FVulkanDynamicRHI::RHIWriteGPUFence_TopOfPipe'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  `FVulkanDynamicRHI::RHIWriteGPUFence_TopOfPipe'::__l2::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x10));
  return;
}

// ExecuteAndDestruct @ 145ba8840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FVulkanTexture::SetInitialImageState'::__l2::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FVulkanTexture::SetInitialImageState'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FVulkanTexture::SetInitialImageState'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145ba88d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FVulkanTexture::UploadInitialData'::__l2::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x20),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FVulkanTexture::UploadInitialData'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FVulkanTexture::UploadInitialData'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145ba8960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FVulkanDynamicRHI::FinalizeCreateTextureInternal'::__l5::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FVulkanDynamicRHI::FinalizeCreateTextureInternal'::__l5::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FVulkanDynamicRHI::FinalizeCreateTextureInternal'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145ba89f0

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
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FVulkanDynamicRHI::UpdateUniformBuffer'::__l32::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  IRHICommandContext *pIVar2;
  longlong lVar3;
  FVulkanCommandListContext *pFVar4;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x30),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  pIVar2 = FRHICommandListBase::GetContext(param_1);
  lVar3 = (**(code **)(pIVar2->_padding_ + 0x148))(pIVar2);
  pFVar4 = (FVulkanCommandListContext *)(lVar3 + -0x50);
  if (lVar3 == 0) {
    pFVar4 = (FVulkanCommandListContext *)0x0;
  }
  UpdateUniformBufferHelper
            (pFVar4,*(FVulkanUniformBuffer **)((longlong)this + 0x10),
             *(void **)((longlong)this + 0x28),true);
  FVulkanUniformBuffer::UpdateResourceTable
            (*(FVulkanUniformBuffer **)((longlong)this + 0x10),
             *(FRHIResource ***)((longlong)this + 0x18),*(int *)((longlong)this + 0x20));
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 145ba8ab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FVulkanDynamicRHI::UpdateUniformBuffer'::__l34::<lambda_2>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x48),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FVulkanDynamicRHI::UpdateUniformBuffer'::__l34::<lambda_2>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    VulkanRHI::FVulkanAllocation::~FVulkanAllocation((FVulkanAllocation *)((longlong)this + 0x18));
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FVulkanDynamicRHI::UpdateUniformBuffer'::__l34::<lambda_2>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  VulkanRHI::FVulkanAllocation::~FVulkanAllocation((FVulkanAllocation *)((longlong)this + 0x18));
  return;
}

// ExecuteAndDestruct @ 145ba8b50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FVulkanDynamicRHI::AsyncReallocateTexture2D_RenderThread'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FVulkanDynamicRHI::AsyncReallocateTexture2D_RenderThread'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FVulkanDynamicRHI::AsyncReallocateTexture2D_RenderThread'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
  return;
}

// ExecuteAndDestruct @ 145ba8be0

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

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FVulkanDynamicRHI::RHIUnlockTexture'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  FStagingBuffer *pFVar1;
  FVulkanTexture *pFVar2;
  bool bVar3;
  IRHICommandContext *pIVar4;
  longlong lVar5;
  FVulkanContextCommon *pFVar6;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x58),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  pFVar1 = *(FStagingBuffer **)((longlong)this + 0x50);
  pFVar2 = *(FVulkanTexture **)((longlong)this + 0x10);
  pIVar4 = FRHICommandListBase::GetContext(param_1);
  lVar5 = (**(code **)(pIVar4->_padding_ + 0x148))(pIVar4);
  pFVar6 = (FVulkanContextCommon *)(lVar5 + -0x50);
  if (lVar5 == 0) {
    pFVar6 = (FVulkanContextCommon *)0x0;
  }
  FVulkanTexture::InternalLockWrite
            (pFVar6,pFVar2,(VkBufferImageCopy *)((longlong)this + 0x18),pFVar1);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 145ba8cb0

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
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FVulkanUniformBuffer::FVulkanUniformBuffer'::__l51::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  IRHICommandContext *pIVar2;
  longlong lVar3;
  FVulkanCommandListContext *pFVar4;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x28),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  pIVar2 = FRHICommandListBase::GetContext(param_1);
  lVar3 = (**(code **)(pIVar2->_padding_ + 0x148))(pIVar2);
  pFVar4 = (FVulkanCommandListContext *)(lVar3 + -0x50);
  if (lVar3 == 0) {
    pFVar4 = (FVulkanCommandListContext *)0x0;
  }
  UpdateUniformBufferHelper
            (pFVar4,*(FVulkanUniformBuffer **)((longlong)this + 0x10),
             *(void **)((longlong)this + 0x20),false);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 145bcc910

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
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,``FVulkanViewport::FVulkanViewport'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  FVulkanViewport *this_00;
  FVulkanGenericPlatformWindowContext *pFVar1;
  bool bVar2;
  IRHICommandContext *pIVar3;
  longlong lVar4;
  FVulkanCommandListContext *pFVar5;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x20),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  this_00 = *(FVulkanViewport **)((longlong)this + 0x18);
  pFVar1 = *(FVulkanGenericPlatformWindowContext **)((longlong)this + 0x10);
  pIVar3 = FRHICommandListBase::GetContext(param_1);
  lVar4 = (**(code **)(pIVar3->_padding_ + 0x148))();
  pFVar5 = (FVulkanCommandListContext *)(lVar4 + -0x50);
  if (lVar4 == 0) {
    pFVar5 = (FVulkanCommandListContext *)0x0;
  }
  FVulkanViewport::CreateSwapchain(this_00,pFVar5,(FVulkanSwapChainRecreateInfo *)0x0,pFVar1);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 145bcc9d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FVulkanViewport::RecreateSwapchainFromRT'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x28),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FVulkanViewport::RecreateSwapchainFromRT'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FVulkanViewport::RecreateSwapchainFromRT'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145bcca60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FVulkanViewport::Resize'::__l2::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x28),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  *(undefined4 *)(*(longlong *)((longlong)this + 0x10) + 0x118) =
       *(undefined4 *)((longlong)this + 0x18);
  *(undefined4 *)(*(longlong *)((longlong)this + 0x10) + 0x11c) =
       *(undefined4 *)((longlong)this + 0x1c);
  *(undefined1 *)(*(longlong *)((longlong)this + 0x10) + 0x120) =
       *(undefined1 *)((longlong)this + 0x20);
  *(undefined1 *)(*(longlong *)((longlong)this + 0x10) + 0x121) =
       *(undefined1 *)((longlong)this + 0x21);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 145bccb00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FVulkanViewport::AdvanceBackBufferFrame'::__l12::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  lVar1 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0xe0);
  if (*(longlong *)(lVar1 + 600) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Viewport",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                       ,0x38,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(longlong *)(lVar1 + 0x150) != 0) {
    *(undefined8 *)(lVar1 + 0x150) = 0;
    *(undefined8 *)(lVar1 + 0x158) = 0;
  }
  *(undefined8 *)(lVar1 + 0x170) = 0;
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 145bccbd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FVulkanViewport::GetBackBuffer'::__l12::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FVulkanViewport::GetBackBuffer'::__l12::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FVulkanViewport::GetBackBuffer'::__l12::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
  return;
}

