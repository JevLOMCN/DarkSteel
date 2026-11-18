// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 5

// ExecuteAndDestruct @ 145ae4030

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

void __thiscall
TRHILambdaCommandMultiPipe<FRHICommandListBase,`FVulkanBuffer::Lock'::__l56::<lambda_2>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  byte bVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  byte bVar11;
  longlong *plVar12;
  longlong local_38 [2];
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x48),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
               ,0x112);
  }
  bVar11 = *(byte *)((longlong)this + 0x50);
  plVar10 = (longlong *)0x0;
  plVar5 = (longlong *)0x0;
  while( true ) {
    if (bVar11 == 0) {
      bVar11 = 3;
      local_38[0] = 0;
      local_38[1] = 0;
      do {
        bVar2 = ~bVar11 + 1 & bVar11;
        if ((bVar2 == 1) || (plVar8 = plVar5, bVar2 != 2)) {
          plVar8 = plVar10;
        }
        lVar9 = 0;
        if (plVar8 != (longlong *)0x0) {
          lVar7 = (**(code **)(*plVar8 + 0x148))();
          lVar9 = lVar7 + -0x50;
          if (lVar7 == 0) {
            lVar9 = 0;
          }
        }
        if ((bVar2 == 1) || (plVar8 = local_38 + 1, bVar2 != 2)) {
          plVar8 = local_38;
        }
        *plVar8 = lVar9;
        bVar11 = bVar11 & ~(~bVar11 + 1);
      } while (bVar11 != 0);
      UE::RHICore::UpdateGlobalBufferStats
                ((FRHIBufferDesc *)(*(longlong *)((longlong)this + 0x10) + 0xd8),
                 -(ulonglong)*(uint *)(*(longlong *)((longlong)this + 0x10) + 0x114));
      VulkanRHI::FVulkanAllocation::Free
                ((FVulkanAllocation *)(*(longlong *)((longlong)this + 0x10) + 0x108),
                 *(FVulkanDevice **)(*(longlong *)((longlong)this + 0x10) + 0xf8));
      uVar3 = *(undefined8 *)((longlong)this + 0x20);
      lVar9 = *(longlong *)((longlong)this + 0x10);
      *(undefined8 *)(lVar9 + 0x108) = *(undefined8 *)((longlong)this + 0x18);
      *(undefined8 *)(lVar9 + 0x110) = uVar3;
      uVar3 = *(undefined8 *)((longlong)this + 0x30);
      *(undefined8 *)(lVar9 + 0x118) = *(undefined8 *)((longlong)this + 0x28);
      *(undefined8 *)(lVar9 + 0x120) = uVar3;
      uVar3 = *(undefined8 *)((longlong)this + 0x40);
      *(undefined8 *)(lVar9 + 0x128) = *(undefined8 *)((longlong)this + 0x38);
      *(undefined8 *)(lVar9 + 0x130) = uVar3;
      VulkanRHI::FVulkanAllocation::Own
                ((FVulkanAllocation *)(*(longlong *)((longlong)this + 0x10) + 0x108));
      plVar10 = (longlong *)(*(longlong *)((longlong)this + 0x10) + 0xe8);
      (**(code **)(*plVar10 + 8))(plVar10,local_38);
      VulkanRHI::FVulkanAllocation::~FVulkanAllocation((FVulkanAllocation *)((longlong)this + 0x18))
      ;
      if (bVar4) {
        FCpuProfilerTrace::OutputEndEvent();
        return;
      }
      return;
    }
    bVar2 = ~bVar11 + 1 & bVar11;
    if ((bVar2 == 1) || (bVar2 != 2)) {
      plVar8 = *(longlong **)&param_1->Contexts;
      if (((bVar2 == 1) || (plVar12 = plVar8, bVar2 != 2)) &&
         ((plVar12 = plVar5, plVar10 = plVar8, bVar2 != 1 && (bVar2 == 2)))) {
        plVar8 = plVar5;
      }
    }
    else {
      plVar8 = *(longlong **)&(param_1->Contexts).field_0x8;
      plVar12 = plVar8;
    }
    if ((plVar8 == (longlong *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Contexts[Pipeline]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                           ,0x118,L""), bVar6)) break;
    bVar11 = bVar11 & ~(~bVar11 + 1);
    plVar5 = plVar12;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ExecuteAndDestruct @ 145ba8d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommandMultiPipe<FRHICommandListBase,`FVulkanDynamicRHI::RHIEndFrame_RenderThread'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  FVulkanContextArray *pFVar8;
  longlong lVar9;
  byte bVar10;
  longlong *plVar11;
  longlong *plVar12;
  FVulkanContextArray local_38;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
               ,0x112);
  }
  bVar10 = *(byte *)((longlong)this + 0x20);
  plVar12 = (longlong *)0x0;
  plVar4 = (longlong *)0x0;
  while( true ) {
    if (bVar10 == 0) {
      bVar10 = 3;
      local_38._0_8_ = 0;
      local_38._8_8_ = 0;
      do {
        bVar2 = ~bVar10 + 1 & bVar10;
        if ((bVar2 == 1) || (plVar6 = plVar4, bVar2 != 2)) {
          plVar6 = plVar12;
        }
        lVar9 = 0;
        if (plVar6 != (longlong *)0x0) {
          lVar7 = (**(code **)(*plVar6 + 0x148))();
          lVar9 = lVar7 + -0x50;
          if (lVar7 == 0) {
            lVar9 = 0;
          }
        }
        if ((bVar2 == 1) || (pFVar8 = (FVulkanContextArray *)&local_38.field_0x8, bVar2 != 2)) {
          pFVar8 = &local_38;
        }
        *(longlong *)pFVar8 = lVar9;
        bVar10 = bVar10 & ~(~bVar10 + 1);
      } while (bVar10 != 0);
      `FVulkanDynamicRHI::RHIEndFrame_RenderThread'::__l2::<lambda_1>::operator()
                ((void *)((longlong)this + 0x10),&local_38);
      if (bVar3) {
        FCpuProfilerTrace::OutputEndEvent();
        return;
      }
      return;
    }
    bVar2 = ~bVar10 + 1 & bVar10;
    if ((bVar2 == 1) || (bVar2 != 2)) {
      plVar6 = *(longlong **)&param_1->Contexts;
      if (((bVar2 == 1) || (plVar11 = plVar6, bVar2 != 2)) &&
         ((plVar11 = plVar4, plVar12 = plVar6, bVar2 != 1 && (bVar2 == 2)))) {
        plVar6 = plVar4;
      }
    }
    else {
      plVar6 = *(longlong **)&(param_1->Contexts).field_0x8;
      plVar11 = plVar6;
    }
    if ((plVar6 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Contexts[Pipeline]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                           ,0x118,L""), bVar5)) break;
    bVar10 = bVar10 & ~(~bVar10 + 1);
    plVar4 = plVar11;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ExecuteAndDestruct @ 145ba8f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommandMultiPipe<FRHICommandListBase,`FVulkanDynamicRHI::RHIReplaceResources'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  FVulkanContextArray *pFVar8;
  longlong lVar9;
  byte bVar10;
  longlong *plVar11;
  longlong *plVar12;
  FVulkanContextArray local_38;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x20),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
               ,0x112);
  }
  bVar10 = *(byte *)((longlong)this + 0x28);
  plVar12 = (longlong *)0x0;
  plVar4 = (longlong *)0x0;
  while( true ) {
    if (bVar10 == 0) {
      bVar10 = 3;
      local_38._0_8_ = 0;
      local_38._8_8_ = 0;
      do {
        bVar2 = ~bVar10 + 1 & bVar10;
        if ((bVar2 == 1) || (plVar6 = plVar4, bVar2 != 2)) {
          plVar6 = plVar12;
        }
        lVar9 = 0;
        if (plVar6 != (longlong *)0x0) {
          lVar7 = (**(code **)(*plVar6 + 0x148))();
          lVar9 = lVar7 + -0x50;
          if (lVar7 == 0) {
            lVar9 = 0;
          }
        }
        if ((bVar2 == 1) || (pFVar8 = (FVulkanContextArray *)&local_38.field_0x8, bVar2 != 2)) {
          pFVar8 = &local_38;
        }
        *(longlong *)pFVar8 = lVar9;
        bVar10 = bVar10 & ~(~bVar10 + 1);
      } while (bVar10 != 0);
      `FVulkanDynamicRHI::RHIReplaceResources'::__l2::<lambda_1>::operator()
                ((void *)((longlong)this + 0x10),&local_38);
      if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)this + 0x10));
      }
      if (bVar3) {
        FCpuProfilerTrace::OutputEndEvent();
        return;
      }
      return;
    }
    bVar2 = ~bVar10 + 1 & bVar10;
    if ((bVar2 == 1) || (bVar2 != 2)) {
      plVar6 = *(longlong **)&param_1->Contexts;
      if (((bVar2 == 1) || (plVar11 = plVar6, bVar2 != 2)) &&
         ((plVar11 = plVar4, plVar12 = plVar6, bVar2 != 1 && (bVar2 == 2)))) {
        plVar6 = plVar4;
      }
    }
    else {
      plVar6 = *(longlong **)&(param_1->Contexts).field_0x8;
      plVar11 = plVar6;
    }
    if ((plVar6 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Contexts[Pipeline]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                           ,0x118,L""), bVar5)) break;
    bVar10 = bVar10 & ~(~bVar10 + 1);
    plVar4 = plVar11;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ExecuteAndDestruct @ 145ba91b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommandMultiPipe<FRHICommandListBase,`FVulkanDynamicRHI::RHIUpdateTextureReference'::__l5::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  FVulkanContextArray *pFVar8;
  longlong lVar9;
  byte bVar10;
  longlong *plVar11;
  longlong *plVar12;
  FVulkanContextArray local_38;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x20),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
               ,0x112);
  }
  bVar10 = *(byte *)((longlong)this + 0x28);
  plVar12 = (longlong *)0x0;
  plVar4 = (longlong *)0x0;
  while( true ) {
    if (bVar10 == 0) {
      bVar10 = 3;
      local_38._0_8_ = 0;
      local_38._8_8_ = 0;
      do {
        bVar2 = ~bVar10 + 1 & bVar10;
        if ((bVar2 == 1) || (plVar6 = plVar4, bVar2 != 2)) {
          plVar6 = plVar12;
        }
        lVar9 = 0;
        if (plVar6 != (longlong *)0x0) {
          lVar7 = (**(code **)(*plVar6 + 0x148))();
          lVar9 = lVar7 + -0x50;
          if (lVar7 == 0) {
            lVar9 = 0;
          }
        }
        if ((bVar2 == 1) || (pFVar8 = (FVulkanContextArray *)&local_38.field_0x8, bVar2 != 2)) {
          pFVar8 = &local_38;
        }
        *(longlong *)pFVar8 = lVar9;
        bVar10 = bVar10 & ~(~bVar10 + 1);
      } while (bVar10 != 0);
      `FVulkanDynamicRHI::RHIUpdateTextureReference'::__l5::<lambda_1>::operator()
                ((void *)((longlong)this + 0x10),&local_38);
      if (*(FRHIResource **)((longlong)this + 0x10) != (FRHIResource *)0x0) {
        FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x10));
      }
      if (bVar3) {
        FCpuProfilerTrace::OutputEndEvent();
        return;
      }
      return;
    }
    bVar2 = ~bVar10 + 1 & bVar10;
    if ((bVar2 == 1) || (bVar2 != 2)) {
      plVar6 = *(longlong **)&param_1->Contexts;
      if (((bVar2 == 1) || (plVar11 = plVar6, bVar2 != 2)) &&
         ((plVar11 = plVar4, plVar12 = plVar6, bVar2 != 1 && (bVar2 == 2)))) {
        plVar6 = plVar4;
      }
    }
    else {
      plVar6 = *(longlong **)&(param_1->Contexts).field_0x8;
      plVar11 = plVar6;
    }
    if ((plVar6 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Contexts[Pipeline]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                           ,0x118,L""), bVar5)) break;
    bVar10 = bVar10 & ~(~bVar10 + 1);
    plVar4 = plVar11;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ExecuteAndDestruct @ 145ba93e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
TRHILambdaCommandMultiPipe<FRHICommandListBase,`FVulkanDynamicRHI::RHIEndFrame_RenderThread'::__l2::<lambda_2>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  FVulkanCommandListContext **ppFVar8;
  FVulkanCommandListContext *pFVar9;
  byte bVar10;
  longlong *plVar11;
  longlong *plVar12;
  FVulkanCommandListContext *local_28;
  FVulkanCommandListContext *pFStack_20;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
               ,0x112);
  }
  bVar10 = *(byte *)((longlong)this + 0x20);
  plVar12 = (longlong *)0x0;
  plVar4 = (longlong *)0x0;
  while( true ) {
    if (bVar10 == 0) {
      bVar10 = 3;
      local_28 = (FVulkanCommandListContext *)0x0;
      pFStack_20 = (FVulkanCommandListContext *)0x0;
      do {
        bVar2 = ~bVar10 + 1 & bVar10;
        if ((bVar2 == 1) || (plVar6 = plVar4, bVar2 != 2)) {
          plVar6 = plVar12;
        }
        pFVar9 = (FVulkanCommandListContext *)0x0;
        if (plVar6 != (longlong *)0x0) {
          lVar7 = (**(code **)(*plVar6 + 0x148))();
          pFVar9 = (FVulkanCommandListContext *)(lVar7 + -0x50);
          if (lVar7 == 0) {
            pFVar9 = (FVulkanCommandListContext *)0x0;
          }
        }
        if ((bVar2 == 1) || (ppFVar8 = &pFStack_20, bVar2 != 2)) {
          ppFVar8 = &local_28;
        }
        *ppFVar8 = pFVar9;
        pFVar9 = local_28;
        bVar10 = bVar10 & ~(~bVar10 + 1);
      } while (bVar10 != 0);
      if ((local_28->Immediate != (FVulkanCommandListContext *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Context.IsImmediate()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp"
                             ,0x4ad,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      GVulkanRHIDeletionFrameNumber = GVulkanRHIDeletionFrameNumber + 1;
      if (GRHIGlobals.RayTracing.Supported != false) {
        FVulkanRayTracingCompactionRequestHandler::Update
                  (*(FVulkanRayTracingCompactionRequestHandler **)(pFVar9->_padding_ + 0xf58),pFVar9
                  );
      }
      if (bVar3) {
        FCpuProfilerTrace::OutputEndEvent();
        return;
      }
      return;
    }
    bVar2 = ~bVar10 + 1 & bVar10;
    if ((bVar2 == 1) || (bVar2 != 2)) {
      plVar6 = *(longlong **)&param_1->Contexts;
      if (((bVar2 == 1) || (plVar11 = plVar6, bVar2 != 2)) &&
         ((plVar11 = plVar4, plVar12 = plVar6, bVar2 != 1 && (bVar2 == 2)))) {
        plVar6 = plVar4;
      }
    }
    else {
      plVar6 = *(longlong **)&(param_1->Contexts).field_0x8;
      plVar11 = plVar6;
    }
    if ((plVar6 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Contexts[Pipeline]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                           ,0x118,L""), bVar5)) break;
    bVar10 = bVar10 & ~(~bVar10 + 1);
    plVar4 = plVar11;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

