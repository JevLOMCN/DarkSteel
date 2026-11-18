// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 69

// RHISetShaderParametersShared<FVulkanCommandListContext,FRHIComputeShader> @ 145ad70d0

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __cdecl
UE::RHICore::RHISetShaderParametersShared<FVulkanCommandListContext,FRHIComputeShader>
          (FVulkanCommandListContext *param_1,FRHIComputeShader *param_2,
          TArrayView<unsigned_char_const_,int> *param_3,
          TArrayView<FRHIShaderParameter_const_,int> *param_4,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_5,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_6,bool param_7)

{
  FRHIShaderParameter *pFVar1;
  EType EVar2;
  ushort uVar3;
  FRHIResource *pFVar4;
  FVulkanUnorderedAccessView *pFVar5;
  FVulkanComputePipeline *pFVar6;
  FVulkanUniformBuffer *pFVar7;
  FVulkanComputePipelineDescriptorState *pFVar8;
  FVulkanSamplerState *pFVar9;
  FVulkanShaderResourceView *pFVar10;
  code *pcVar11;
  double dVar12;
  undefined8 uVar13;
  bool bVar14;
  VkDescriptorType VVar15;
  VkImageLayout VVar16;
  FRHIComputeShader *pFVar17;
  FVulkanTexture *this;
  uint uVar18;
  uint uVar19;
  FRHIShaderParameter *pFVar20;
  FRHIShaderParameterResource *pFVar21;
  FRHIShaderParameterResource *pFVar22;
  FName FVar23;
  int local_res20 [2];
  undefined8 local_48;
  LARGE_INTEGER local_40 [3];
  
  if (param_4->ArrayNum != 0) {
    pFVar20 = param_4->DataPtr;
    pFVar1 = pFVar20 + param_4->ArrayNum;
    for (; pFVar20 != pFVar1; pFVar20 = pFVar20 + 1) {
      uVar3 = pFVar20->ByteOffset;
      if ((param_3->ArrayNum <= (int)(uint)uVar3) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FVulkanCommandListContext::RHISetShaderParameter
                (param_1,param_2,(uint)pFVar20->BufferIndex,(uint)pFVar20->BaseIndex,
                 (uint)pFVar20->ByteSize,param_3->DataPtr + uVar3);
    }
  }
  pFVar21 = param_6->DataPtr;
  pFVar22 = pFVar21 + param_6->ArrayNum;
  uVar13 = local_48;
  for (; pFVar21 != pFVar22; pFVar21 = pFVar21 + 1) {
    pFVar4 = pFVar21->Resource;
    if (pFVar4 == (FRHIResource *)0x0) {
LAB_145ad71f5:
      local_48 = 0x9ffffffff;
      uVar13 = local_48;
    }
    else {
      EVar2 = pFVar21->Type;
      if (EVar2 == Texture) {
        (**(code **)(pFVar4->_padding_ + 0x30))(pFVar4);
      }
      else {
        if ((EVar2 != ResourceView) && (EVar2 != UnorderedAccessView)) {
          if (EVar2 == Sampler) {
            (**(code **)(pFVar4->_padding_ + 0x18))(pFVar4);
            goto LAB_145ad72a9;
          }
          if (EVar2 != ResourceCollection) {
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\RHIShaderParametersShared.h"
                                ,0x15,L"Unhandled resource type?");
            if (bVar14) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            goto LAB_145ad71f5;
          }
        }
        (**(code **)(pFVar4->_padding_ + 0x10))(pFVar4);
      }
LAB_145ad72a9:
      local_48._0_4_ = (int)uVar13;
      if (((int)local_48 != -1) &&
         (local_48._4_1_ = (char)((ulonglong)uVar13 >> 0x20), local_48._4_1_ != '\t')) {
        uVar3 = pFVar21->Index;
        local_res20[0] = (int)local_48;
        pFVar6 = param_1->PendingComputeState->CurrentPipeline;
        pFVar17 = (FRHIComputeShader *)0x0;
        if (pFVar6 != (FVulkanComputePipeline *)0x0) {
          pFVar17 = (FRHIComputeShader *)pFVar6->_padding_;
        }
        if ((pFVar17 != param_2) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("PendingComputeState->GetCurrentShader() == ComputeShader",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                                ,0x1a9,L""), bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar8 = param_1->PendingComputeState->CurrentState;
        FPackedUniformBuffers::SetPackedGlobalParameter
                  (&pFVar8->PackedUniformBuffers,(uint)uVar3,4,local_res20,
                   &pFVar8->PackedUniformBuffersDirty);
      }
    }
    local_48 = uVar13;
    uVar13 = local_48;
  }
  if (param_7) {
    pFVar21 = param_5->DataPtr;
    pFVar22 = pFVar21 + param_5->ArrayNum;
    for (; pFVar21 != pFVar22; pFVar21 = pFVar21 + 1) {
      if (pFVar21->Type == UnorderedAccessView) {
        pFVar5 = (FVulkanUnorderedAccessView *)pFVar21->Resource;
        uVar3 = pFVar21->Index;
        if (pFVar5 != (FVulkanUnorderedAccessView *)0x0) {
          pFVar6 = param_1->PendingComputeState->CurrentPipeline;
          pFVar17 = (FRHIComputeShader *)0x0;
          if (pFVar6 != (FVulkanComputePipeline *)0x0) {
            pFVar17 = (FRHIComputeShader *)pFVar6->_padding_;
          }
          if ((pFVar17 != param_2) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PendingComputeState->GetCurrentShader() == ResourceCast(ComputeShaderRHI)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                                  ,0x159,L""), bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          FVulkanPendingComputeState::SetUAVForUBResource
                    (param_1->PendingComputeState,0,(uint)uVar3,pFVar5);
        }
      }
    }
  }
  dVar12 = __real_4170000000000000;
  pFVar21 = param_5->DataPtr;
  pFVar22 = pFVar21 + param_5->ArrayNum;
  do {
    if (pFVar21 == pFVar22) {
      return;
    }
    EVar2 = pFVar21->Type;
    if (EVar2 == Texture) {
      pFVar4 = pFVar21->Resource;
      uVar3 = pFVar21->Index;
      pFVar6 = param_1->PendingComputeState->CurrentPipeline;
      pFVar17 = (FRHIComputeShader *)0x0;
      if (pFVar6 != (FVulkanComputePipeline *)0x0) {
        pFVar17 = (FRHIComputeShader *)pFVar6->_padding_;
      }
      if ((pFVar17 != param_2) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("PendingComputeState->GetCurrentShader() == ComputeShader",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                              ,0x173,L""), bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      this = (FVulkanTexture *)(**(code **)(pFVar4->_padding_ + 0x48))(pFVar4);
      if ((this->FullAspectMask & 6) == 0) {
        bVar14 = FVulkanTexture::SupportsSampling(this);
        VVar16 = (uint)bVar14 * 4 + VK_IMAGE_LAYOUT_GENERAL;
      }
      else {
        VVar16 = VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL;
        if (((this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x2020100000000) ==
            0x2020100000000) {
          VVar16 = VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL;
        }
      }
      FVulkanCommonPipelineDescriptorState::SetTexture
                ((FVulkanCommonPipelineDescriptorState *)param_1->PendingComputeState->CurrentState,
                 '\0',(uint)uVar3,this,VVar16);
      QueryPerformanceCounter(local_40);
      FVar23 = (FName)(double)(float)((double)local_40[0].QuadPart *
                                      FGenericPlatformTime::SecondsPerCycle + dVar12);
      if ((double)FVar23 != (double)pFVar4[0xc].OwnerName) {
        pFVar4[0xc].OwnerName = FVar23;
      }
    }
    else if (EVar2 == ResourceView) {
      pFVar10 = (FVulkanShaderResourceView *)pFVar21->Resource;
      uVar3 = pFVar21->Index;
      if (pFVar10 != (FVulkanShaderResourceView *)0x0) {
        pFVar6 = param_1->PendingComputeState->CurrentPipeline;
        pFVar17 = (FRHIComputeShader *)0x0;
        if (pFVar6 != (FVulkanComputePipeline *)0x0) {
          pFVar17 = (FRHIComputeShader *)pFVar6->_padding_;
        }
        if ((pFVar17 != param_2) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("PendingComputeState->GetCurrentShader() == ResourceCast(ComputeShaderRHI)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                                ,0x189,L""), bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        FVulkanPendingComputeState::SetSRVForUBResource
                  (param_1->PendingComputeState,0,(uint)uVar3,pFVar10);
      }
    }
    else if (EVar2 == UnorderedAccessView) {
      if (!param_7) {
        pFVar5 = (FVulkanUnorderedAccessView *)pFVar21->Resource;
        uVar3 = pFVar21->Index;
        if (pFVar5 != (FVulkanUnorderedAccessView *)0x0) {
          pFVar6 = param_1->PendingComputeState->CurrentPipeline;
          pFVar17 = (FRHIComputeShader *)0x0;
          if (pFVar6 != (FVulkanComputePipeline *)0x0) {
            pFVar17 = (FRHIComputeShader *)pFVar6->_padding_;
          }
          if ((pFVar17 != param_2) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PendingComputeState->GetCurrentShader() == ResourceCast(ComputeShaderRHI)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                                  ,0x159,L""), bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          FVulkanPendingComputeState::SetUAVForUBResource
                    (param_1->PendingComputeState,0,(uint)uVar3,pFVar5);
        }
      }
    }
    else if (EVar2 == Sampler) {
      pFVar9 = (FVulkanSamplerState *)pFVar21->Resource;
      uVar3 = pFVar21->Index;
      pFVar6 = param_1->PendingComputeState->CurrentPipeline;
      pFVar17 = (FRHIComputeShader *)0x0;
      if (pFVar6 != (FVulkanComputePipeline *)0x0) {
        pFVar17 = (FRHIComputeShader *)pFVar6->_padding_;
      }
      if ((pFVar17 != param_2) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("PendingComputeState->GetCurrentShader() == ComputeShader",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                              ,0x19a,L""), bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FVulkanCommonPipelineDescriptorState::SetSamplerState
                ((FVulkanCommonPipelineDescriptorState *)param_1->PendingComputeState->CurrentState,
                 '\0',(uint)uVar3,pFVar9);
    }
    else if (EVar2 == UniformBuffer) {
      pFVar7 = (FVulkanUniformBuffer *)pFVar21->Resource;
      uVar3 = pFVar21->Index;
      pFVar6 = param_1->PendingComputeState->CurrentPipeline;
      pFVar17 = (FRHIComputeShader *)0x0;
      if (pFVar6 != (FVulkanComputePipeline *)0x0) {
        pFVar17 = (FRHIComputeShader *)pFVar6->_padding_;
      }
      if ((pFVar17 != param_2) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("PendingComputeState->GetCurrentShader() == ComputeShader",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                              ,0x246,L""), bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar8 = param_1->PendingComputeState->CurrentState;
      uVar18 = (uint)uVar3;
      if ((uint)uVar3 < (uint)param_2[1]._padding_) {
        VVar15 = FVulkanCommonPipelineDescriptorState::GetDescriptorType
                           ((FVulkanCommonPipelineDescriptorState *)pFVar8,'\0',(uint)uVar3);
        uVar19 = (uint)uVar3;
        if (VVar15 == VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC) {
          FVulkanCommonPipelineDescriptorState::SetUniformBuffer<1>
                    ((FVulkanCommonPipelineDescriptorState *)pFVar8,'\0',uVar19,pFVar7);
        }
        else {
          if ((VVar15 != VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("DescriptorType == VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                                  ,0x263,L""), bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          FVulkanCommonPipelineDescriptorState::SetUniformBuffer<0>
                    ((FVulkanCommonPipelineDescriptorState *)pFVar8,'\0',uVar19,pFVar7);
        }
        if (((int)param_2[1]._padding_ <= (int)uVar18) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (*(char *)(param_2[1]._padding_ + 4 + (longlong)(int)uVar19 * 8) == '\0')
        goto LAB_145ad778f;
      }
      if ((0xf < uVar18) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("BufferIndex < MAX_UNIFORM_BUFFERS_PER_SHADER_STAGE",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                              ,0x272,L""), bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      param_1->BoundUniformBuffers[5][uVar3] = pFVar7;
      param_1->DirtyUniformBuffers[5] =
           param_1->DirtyUniformBuffers[5] | (ushort)(1 << (uVar18 & 0x1f));
    }
    else {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\RHIShaderParametersShared.h"
                          ,0x71,L"Unhandled resource type?");
      if (bVar14) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
LAB_145ad778f:
    pFVar21 = pFVar21 + 1;
  } while( true );
}

// RHISetShaderParametersShared<FVulkanCommandListContext,FRHIGraphicsShader> @ 145ad77d0

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

void __cdecl
UE::RHICore::RHISetShaderParametersShared<FVulkanCommandListContext,FRHIGraphicsShader>
          (FVulkanCommandListContext *param_1,FRHIGraphicsShader *param_2,
          TArrayView<unsigned_char_const_,int> *param_3,
          TArrayView<FRHIShaderParameter_const_,int> *param_4,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_5,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_6,bool param_7)

{
  FRHIShaderParameter *pFVar1;
  EType EVar2;
  ushort uVar3;
  FRHIResource *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIShaderParameter *pFVar7;
  FRHIShaderParameterResource *pFVar8;
  FRHIShaderParameterResource *pFVar9;
  int iVar10;
  wchar_t *pwVar11;
  int local_res20 [2];
  undefined8 local_28;
  
  if (param_4->ArrayNum != 0) {
    pFVar7 = param_4->DataPtr;
    pFVar1 = pFVar7 + param_4->ArrayNum;
    for (; pFVar7 != pFVar1; pFVar7 = pFVar7 + 1) {
      uVar3 = pFVar7->ByteOffset;
      if ((param_3->ArrayNum <= (int)(uint)uVar3) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVulkanCommandListContext::RHISetShaderParameter
                (param_1,param_2,(uint)pFVar7->BufferIndex,(uint)pFVar7->BaseIndex,
                 (uint)pFVar7->ByteSize,param_3->DataPtr + uVar3);
    }
  }
  pFVar8 = param_6->DataPtr;
  pFVar9 = pFVar8 + param_6->ArrayNum;
  for (; pFVar8 != pFVar9; pFVar8 = pFVar8 + 1) {
    pFVar4 = pFVar8->Resource;
    if (pFVar4 == (FRHIResource *)0x0) {
LAB_145ad78fe:
      local_28 = 0x9ffffffff;
    }
    else {
      EVar2 = pFVar8->Type;
      if (EVar2 == Texture) {
        (**(code **)(pFVar4->_padding_ + 0x30))(pFVar4,&local_28);
      }
      else {
        if ((EVar2 != ResourceView) && (EVar2 != UnorderedAccessView)) {
          if (EVar2 == Sampler) {
            (**(code **)(pFVar4->_padding_ + 0x18))(pFVar4,&local_28);
            goto LAB_145ad79b7;
          }
          if (EVar2 != ResourceCollection) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\RHIShaderParametersShared.h"
                               ,0x15,L"Unhandled resource type?");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            goto LAB_145ad78fe;
          }
        }
        (**(code **)(pFVar4->_padding_ + 0x10))(pFVar4,&local_28);
      }
LAB_145ad79b7:
      if (((int)local_28 != -1) && (local_28._4_1_ != '\t')) {
        local_res20[0] = (int)local_28;
        FVulkanCommandListContext::RHISetShaderParameter
                  (param_1,param_2,0,(uint)pFVar8->Index,4,local_res20);
      }
    }
  }
  if (param_7) {
    pFVar8 = param_5->DataPtr;
    pFVar9 = pFVar8 + param_5->ArrayNum;
    for (; pFVar8 != pFVar9; pFVar8 = pFVar8 + 1) {
      if (pFVar8->Type == UnorderedAccessView) {
        if (param_2->field_0xc == '\t') {
          if ((FVulkanUnorderedAccessView *)pFVar8->Resource != (FVulkanUnorderedAccessView *)0x0) {
            FVulkanPendingGfxState::SetUAVForUBResource
                      (param_1->PendingGfxState,'\x01',(uint)pFVar8->Index,
                       (FVulkanUnorderedAccessView *)pFVar8->Resource);
          }
        }
        else {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\RHIShaderParametersShared.h"
                             ,0x26,
                             L"TShaderRHI Can\'t have compute shader to be set. UAVs are not supported on vertex, tessellation and geometry shaders."
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
      }
    }
  }
  pFVar8 = param_5->DataPtr;
  pFVar9 = pFVar8 + param_5->ArrayNum;
  do {
    if (pFVar8 == pFVar9) {
      return;
    }
    EVar2 = pFVar8->Type;
    if (EVar2 == Texture) {
      FVulkanCommandListContext::RHISetShaderTexture
                (param_1,param_2,(uint)pFVar8->Index,(FRHITexture *)pFVar8->Resource);
    }
    else if (EVar2 == ResourceView) {
      FVulkanCommandListContext::RHISetShaderResourceViewParameter
                (param_1,param_2,(uint)pFVar8->Index,(FRHIShaderResourceView *)pFVar8->Resource);
    }
    else if (EVar2 == UnorderedAccessView) {
      if (!param_7) {
        if (param_2->field_0xc != '\t') {
          pwVar11 = 
          L"TShaderRHI Can\'t have compute shader to be set. UAVs are not supported on vertex, tessellation and geometry shaders."
          ;
          iVar10 = 0x26;
          goto LAB_145ad7a81;
        }
        if ((FVulkanUnorderedAccessView *)pFVar8->Resource != (FVulkanUnorderedAccessView *)0x0) {
          FVulkanPendingGfxState::SetUAVForUBResource
                    (param_1->PendingGfxState,'\x01',(uint)pFVar8->Index,
                     (FVulkanUnorderedAccessView *)pFVar8->Resource);
        }
      }
    }
    else if (EVar2 == Sampler) {
      FVulkanCommandListContext::RHISetShaderSampler
                (param_1,param_2,(uint)pFVar8->Index,(FRHISamplerState *)pFVar8->Resource);
    }
    else if (EVar2 == UniformBuffer) {
      FVulkanCommandListContext::RHISetShaderUniformBuffer
                (param_1,param_2,(uint)pFVar8->Index,(FRHIUniformBuffer *)pFVar8->Resource);
    }
    else {
      pwVar11 = L"Unhandled resource type?";
      iVar10 = 0x71;
LAB_145ad7a81:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\RHIShaderParametersShared.h"
                         ,iVar10,pwVar11);
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar8 = pFVar8 + 1;
  } while( true );
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TStatId>_> @ 145ad7b60

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TStatId>_>
          (ushort param_1,ForElementType<TStatId> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 4) {
      iVar8 = 3;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 4) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TStatId>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkImageMemoryBarrier2>_> @ 145ad7c30

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkImageMemoryBarrier2>_>
          (ushort param_1,ForElementType<VkImageMemoryBarrier2> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkImageMemoryBarrier2>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkImageMemoryBarrier>_> @ 145ad7d00

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkImageMemoryBarrier>_>
          (ushort param_1,ForElementType<VkImageMemoryBarrier> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkImageMemoryBarrier>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkMemoryBarrier2>_> @ 145ad7dd0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkMemoryBarrier2>_>
          (ushort param_1,ForElementType<VkMemoryBarrier2> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkMemoryBarrier2>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkMemoryBarrier>_> @ 145ad7ea0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkMemoryBarrier>_>
          (ushort param_1,ForElementType<VkMemoryBarrier> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkMemoryBarrier>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_VkDescriptorType>_> @ 145ad7f70

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_VkDescriptorType>_>
          (ushort param_1,ForElementType<VkDescriptorType> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_VkDescriptorType>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkRect2D>_> @ 145ad8040

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkRect2D>_>
          (uint param_1,uint param_2,int param_3,ForElementType<VkRect2D> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 3) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkRect2D>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkViewport>_> @ 145ad8120

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkViewport>_>
          (uint param_1,uint param_2,int param_3,ForElementType<VkViewport> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 3) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkViewport>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkRect2D>_> @ 145ad8200

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkRect2D>_>
          (uint param_1,uint param_2,ForElementType<VkRect2D> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 3) {
    iVar2 = 2;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkRect2D>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkViewport>_> @ 145ad82c0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkViewport>_>
          (uint param_1,uint param_2,ForElementType<VkViewport> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 3) {
    iVar2 = 2;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkViewport>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkImageMemoryBarrier>_> @ 145ad8380

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkImageMemoryBarrier>_>
          (uint param_1,uint param_2,int param_3,ForElementType<VkImageMemoryBarrier> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkImageMemoryBarrier>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkMemoryBarrier>_> @ 145ad8400

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkMemoryBarrier>_>
          (uint param_1,uint param_2,int param_3,ForElementType<VkMemoryBarrier> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkMemoryBarrier>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkRect2D>_> @ 145ad8480

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkRect2D>_>
          (uint param_1,uint param_2,int param_3,ForElementType<VkRect2D> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkRect2D>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkViewport>_> @ 145ad8500

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkViewport>_>
          (uint param_1,uint param_2,int param_3,ForElementType<VkViewport> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkViewport>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingComputeState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0> @ 145ad8b10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingComputeState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>
          (FVulkanResourceBinder<FVulkanPendingComputeState> *param_1,FRHIShader *param_2,
          ushort *param_3,FVulkanUniformBuffer *(*param_4) [16],FTracker *param_5)

{
  EShaderFrequency EVar1;
  int iVar2;
  FVulkanUniformBuffer *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  FVulkanSamplerState *pFVar6;
  FVulkanUnorderedAccessView *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  FString *pFVar16;
  FRHIUnorderedAccessView **ppFVar17;
  longlong lVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  undefined1 local_134 [4];
  uint local_130;
  FVulkanUniformBuffer *local_128;
  uint local_120;
  undefined4 local_11c;
  undefined4 local_118;
  float local_114;
  uint local_110;
  FString local_108;
  longlong local_f8;
  longlong local_f0;
  uint local_e8;
  longlong *local_e0;
  FString local_d8;
  <lambda_2> local_c8;
  <lambda_1> local_b0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  bVar13 = false;
  bVar10 = false;
  bVar12 = false;
  bVar9 = false;
  local_114 = (float)(double)FApp::CurrentTime;
  local_110 = (uint)param_2->_padding_ & (uint)*param_3;
  if (local_110 == 0) {
    *param_3 = 0;
    return;
  }
  do {
    uVar14 = -local_110 & local_110;
    local_e8 = 0;
    if (uVar14 != 0) {
      for (; (uVar14 >> local_e8 & 1) == 0; local_e8 = local_e8 + 1) {
      }
    }
    uVar21 = 0x20;
    if (uVar14 != 0) {
      uVar21 = local_e8;
    }
    local_110 = local_110 & local_110 - 1;
    local_130 = uVar21;
    if (((int)param_2->_padding_ <= (int)uVar21) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("BufferIndex < SRT.ResourceTableLayoutHashes.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                            ,0x61,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar22 = (longlong)(int)uVar21;
    pFVar3 = (*param_4)[lVar22];
    local_128 = pFVar3;
    local_f8 = lVar22;
    if (pFVar3 == (FVulkanUniformBuffer *)0x0) {
      if (((int)uVar21 < 0) || ((param_2->Debug).UniformBufferNames.ArrayNum <= (int)uVar21)) {
        bVar9 = true;
        pFVar16 = ::FString::FString(&local_90,L"<unknown>");
      }
      else {
        if (((int)uVar21 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        bVar12 = true;
        pFVar16 = ::FName::ToString((FName *)((param_2->Debug).UniformBufferNames.AllocatorInstance.
                                              Data + lVar22 * 8),&local_80);
      }
      pFVar4 = (pFVar16->Data).AllocatorInstance.Data;
      (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar16->Data).ArrayNum = 0;
      (pFVar16->Data).ArrayMax = 0;
      if ((bVar9) &&
         (bVar9 = false, local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if ((bVar12) &&
         (bVar12 = false, local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      Logging::Private::BasicFatalLog
                (&`void___cdecl_UE::RHI::Private::SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingComputeState>&___ptr64,class_FVulkanUniformBuffer*___ptr64_[16],unsigned_short,0>(FVulkanResourceBinder<FVulkanPendingComputeState>&___ptr64,FRHIShader_const&___ptr64,unsigned_short&___ptr64,class_FVulkanUniformBuffer*___ptr64_(&___ptr64)[16],RHIValidation::FTracker*___ptr64)'
                  ::__l15::LOG_Static,(FLogCategoryBase *)&LogRHI);
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      lVar22 = lVar22 * 4;
    }
    else {
      local_120 = ~uVar21 >> 0x1f;
      uVar14 = 0;
      if ((int)local_130 < (int)param_2->_padding_) {
        uVar14 = local_120;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_e0 = &pFVar3->_padding_;
      lVar5 = *local_e0;
      lVar22 = lVar22 * 4;
      uVar21 = local_130;
      local_f0 = lVar22;
      if (*(int *)(lVar5 + 0x88) != *(int *)(lVar22 + param_2->_padding_)) {
        local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.Data.ArrayNum = 0;
        local_108.Data.ArrayMax = 0;
        lVar18 = *(longlong *)(lVar5 + 0x28);
        iVar2 = *(int *)(lVar5 + 0x30);
        lVar22 = lVar18 + (longlong)iVar2 * 4;
        while( true ) {
          if (*(int *)(lVar5 + 0x30) != iVar2) {
            local_134[0] = 0;
            `TCheckedPointerIterator<FRHIUniformBufferResource_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_134);
          }
          uVar21 = local_120;
          uVar14 = local_130;
          if (lVar18 == lVar22) break;
          ::FString::PrintfImpl(&local_d8,L"%s%d");
          iVar20 = local_d8.Data.ArrayNum + -1;
          if (local_d8.Data.ArrayNum == 0) {
            iVar20 = 0;
          }
          ::FString::AppendChars(&local_108,(wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar20);
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          lVar18 = lVar18 + 4;
        }
        local_11c = *(undefined4 *)(lVar5 + 0x30);
        local_118 = *(undefined4 *)(lVar5 + 0x8c);
        uVar15 = 0;
        if ((int)local_130 < (int)param_2->_padding_) {
          uVar15 = local_120;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar22 = local_f8;
        if (((int)uVar14 < 0) || ((param_2->Debug).UniformBufferNames.ArrayNum <= (int)uVar14)) {
          bVar10 = true;
          pFVar16 = ::FString::FString(&local_70,L"<unknown>");
        }
        else {
          if ((uVar21 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          bVar13 = true;
          pFVar16 = ::FName::ToString((FName *)((param_2->Debug).UniformBufferNames.
                                                AllocatorInstance.Data + lVar22 * 8),local_60);
        }
        pFVar4 = (pFVar16->Data).AllocatorInstance.Data;
        (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar16->Data).ArrayNum = 0;
        (pFVar16->Data).ArrayMax = 0;
        if ((bVar10) &&
           (bVar10 = false, local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if ((bVar13) &&
           (bVar13 = false,
           local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
        uVar21 = local_130;
        Logging::Private::BasicFatalLog
                  (&`void___cdecl_UE::RHI::Private::SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingComputeState>&___ptr64,class_FVulkanUniformBuffer*___ptr64_[16],unsigned_short,0>(FVulkanResourceBinder<FVulkanPendingComputeState>&___ptr64,FRHIShader_const&___ptr64,unsigned_short&___ptr64,class_FVulkanUniformBuffer*___ptr64_(&___ptr64)[16],RHIValidation::FTracker*___ptr64)'
                    ::__l28::LOG_Static,(FLogCategoryBase *)&LogRHI);
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        lVar22 = local_f0;
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
      }
    }
    pFVar3 = local_128;
    local_b0.Tracker = &param_5;
    local_b0.CurrentTimeForTextureTimes = &local_114;
    local_b0.Shader = param_2;
    local_b0.Binder = param_1;
    EnumerateUniformBufferResources<FRHITexture,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingComputeState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>_::__l4::<lambda_1>_>
              ((FRHIUniformBuffer *)local_128,uVar21,(uint *)param_2->_padding_,&local_b0);
    local_c8.Tracker = &param_5;
    local_c8.Shader = param_2;
    local_c8.Binder = param_1;
    EnumerateUniformBufferResources<FRHIShaderResourceView,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingComputeState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>_::__l4::<lambda_2>_>
              ((FRHIUniformBuffer *)pFVar3,uVar21,(uint *)param_2->_padding_,&local_c8);
    lVar5 = param_2->_padding_;
    uVar14 = *(uint *)(lVar5 + lVar22);
    lVar22 = local_128->_padding_;
    if (uVar14 != 0) {
      uVar15 = *(uint *)(lVar5 + (ulonglong)uVar14 * 4);
      puVar19 = (uint *)(lVar5 + ((ulonglong)uVar14 + 1) * 4);
      do {
        lVar5 = *(longlong *)(lVar22 + (ulonglong)(uVar15 >> 8 & 0xffff) * 8);
        if ((lVar5 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                                ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (param_1->bBindless == false) {
          FVulkanPendingComputeState::SetSRVForUBResource
                    (param_1->PendingState,param_1->Stage,uVar15 & 0xff,
                     *(FVulkanShaderResourceView **)(lVar5 + 0x30));
        }
        uVar15 = *puVar19;
        puVar19 = puVar19 + 1;
      } while (uVar15 >> 0x18 == uVar21);
    }
    lVar22 = param_2->_padding_;
    lVar5 = local_128->_padding_;
    uVar14 = *(uint *)(lVar22 + (longlong)(int)uVar21 * 4);
    if (uVar14 != 0) {
      uVar15 = *(uint *)(lVar22 + (ulonglong)uVar14 * 4);
      puVar19 = (uint *)(lVar22 + ((ulonglong)uVar14 + 1) * 4);
      do {
        pFVar6 = *(FVulkanSamplerState **)(lVar5 + (ulonglong)(uVar15 >> 8 & 0xffff) * 8);
        if ((pFVar6 == (FVulkanSamplerState *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                                ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (param_1->bBindless == false) {
          FVulkanCommonPipelineDescriptorState::SetSamplerState
                    ((FVulkanCommonPipelineDescriptorState *)param_1->PendingState->CurrentState,
                     (char)param_1->Stage,uVar15 & 0xff,pFVar6);
        }
        uVar15 = *puVar19;
        puVar19 = puVar19 + 1;
      } while (uVar15 >> 0x18 == uVar21);
    }
    lVar22 = param_2->_padding_;
    lVar5 = local_128->_padding_;
    uVar14 = *(uint *)(lVar22 + (longlong)(int)uVar21 * 4);
    if (uVar14 != 0) {
      uVar15 = *(uint *)(lVar22 + (ulonglong)uVar14 * 4);
      puVar19 = (uint *)(lVar22 + ((ulonglong)uVar14 + 1) * 4);
      do {
        pFVar7 = *(FVulkanUnorderedAccessView **)(lVar5 + (ulonglong)(uVar15 >> 8 & 0xffff) * 8);
        if ((pFVar7 == (FVulkanUnorderedAccessView *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                                ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (param_5 != (FTracker *)0x0) {
          EVar1 = param_2->Frequency;
          if ((((EVar1 == SF_Compute) || (EVar1 == SF_NumStandardFrequencies)) ||
              (EVar1 == SF_RayMiss)) || ((EVar1 == SF_RayHitGroup || (EVar1 == SF_RayCallable)))) {
            lVar22 = 0x10;
          }
          else {
            lVar22 = 0;
          }
          ppFVar17 = RHIValidation::FTracker::FUAVTracker::operator[]
                               ((FUAVTracker *)
                                ((longlong)&param_5->UAVTrackers[0].UAVs.AllocatorInstance.Data +
                                lVar22),uVar15 & 0xff);
          *ppFVar17 = (FRHIUnorderedAccessView *)pFVar7;
        }
        if (param_1->bBindless == false) {
          FVulkanPendingComputeState::SetUAVForUBResource
                    (param_1->PendingState,param_1->Stage,uVar15 & 0xff,pFVar7);
        }
        uVar15 = *puVar19;
        puVar19 = puVar19 + 1;
      } while (uVar15 >> 0x18 == uVar21);
    }
    if (local_110 == 0) {
      *param_3 = 0;
      return;
    }
  } while( true );
}

// SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingGfxState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0> @ 145ad9400

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingGfxState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>
          (FVulkanResourceBinder<FVulkanPendingGfxState> *param_1,FRHIShader *param_2,
          ushort *param_3,FVulkanUniformBuffer *(*param_4) [16],FTracker *param_5)

{
  EShaderFrequency EVar1;
  int iVar2;
  FVulkanUniformBuffer *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  FVulkanSamplerState *pFVar6;
  FVulkanUnorderedAccessView *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  FString *pFVar16;
  FRHIUnorderedAccessView **ppFVar17;
  longlong lVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  undefined1 local_134 [4];
  uint local_130;
  FVulkanUniformBuffer *local_128;
  uint local_120;
  undefined4 local_11c;
  undefined4 local_118;
  float local_114;
  uint local_110;
  FString local_108;
  longlong local_f8;
  longlong local_f0;
  uint local_e8;
  longlong *local_e0;
  FString local_d8;
  <lambda_2> local_c8;
  <lambda_1> local_b0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  bVar13 = false;
  bVar10 = false;
  bVar12 = false;
  bVar9 = false;
  local_114 = (float)(double)FApp::CurrentTime;
  local_110 = (uint)param_2->_padding_ & (uint)*param_3;
  if (local_110 == 0) {
    *param_3 = 0;
    return;
  }
  do {
    uVar14 = -local_110 & local_110;
    local_e8 = 0;
    if (uVar14 != 0) {
      for (; (uVar14 >> local_e8 & 1) == 0; local_e8 = local_e8 + 1) {
      }
    }
    uVar21 = 0x20;
    if (uVar14 != 0) {
      uVar21 = local_e8;
    }
    local_110 = local_110 & local_110 - 1;
    local_130 = uVar21;
    if (((int)param_2->_padding_ <= (int)uVar21) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("BufferIndex < SRT.ResourceTableLayoutHashes.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                            ,0x61,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar22 = (longlong)(int)uVar21;
    pFVar3 = (*param_4)[lVar22];
    local_128 = pFVar3;
    local_f8 = lVar22;
    if (pFVar3 == (FVulkanUniformBuffer *)0x0) {
      if (((int)uVar21 < 0) || ((param_2->Debug).UniformBufferNames.ArrayNum <= (int)uVar21)) {
        bVar9 = true;
        pFVar16 = ::FString::FString(&local_90,L"<unknown>");
      }
      else {
        if (((int)uVar21 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        bVar12 = true;
        pFVar16 = ::FName::ToString((FName *)((param_2->Debug).UniformBufferNames.AllocatorInstance.
                                              Data + lVar22 * 8),&local_80);
      }
      pFVar4 = (pFVar16->Data).AllocatorInstance.Data;
      (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar16->Data).ArrayNum = 0;
      (pFVar16->Data).ArrayMax = 0;
      if ((bVar9) &&
         (bVar9 = false, local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if ((bVar12) &&
         (bVar12 = false, local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      Logging::Private::BasicFatalLog
                (&`void___cdecl_UE::RHI::Private::SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingGfxState>&___ptr64,class_FVulkanUniformBuffer*___ptr64_[16],unsigned_short,0>(FVulkanResourceBinder<FVulkanPendingGfxState>&___ptr64,FRHIShader_const&___ptr64,unsigned_short&___ptr64,class_FVulkanUniformBuffer*___ptr64_(&___ptr64)[16],RHIValidation::FTracker*___ptr64)'
                  ::__l15::LOG_Static,(FLogCategoryBase *)&LogRHI);
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      lVar22 = lVar22 * 4;
    }
    else {
      local_120 = ~uVar21 >> 0x1f;
      uVar14 = 0;
      if ((int)local_130 < (int)param_2->_padding_) {
        uVar14 = local_120;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_e0 = &pFVar3->_padding_;
      lVar5 = *local_e0;
      lVar22 = lVar22 * 4;
      uVar21 = local_130;
      local_f0 = lVar22;
      if (*(int *)(lVar5 + 0x88) != *(int *)(lVar22 + param_2->_padding_)) {
        local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.Data.ArrayNum = 0;
        local_108.Data.ArrayMax = 0;
        lVar18 = *(longlong *)(lVar5 + 0x28);
        iVar2 = *(int *)(lVar5 + 0x30);
        lVar22 = lVar18 + (longlong)iVar2 * 4;
        while( true ) {
          if (*(int *)(lVar5 + 0x30) != iVar2) {
            local_134[0] = 0;
            `TCheckedPointerIterator<FRHIUniformBufferResource_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_134);
          }
          uVar21 = local_120;
          uVar14 = local_130;
          if (lVar18 == lVar22) break;
          ::FString::PrintfImpl(&local_d8,L"%s%d");
          iVar20 = local_d8.Data.ArrayNum + -1;
          if (local_d8.Data.ArrayNum == 0) {
            iVar20 = 0;
          }
          ::FString::AppendChars(&local_108,(wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar20);
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          lVar18 = lVar18 + 4;
        }
        local_11c = *(undefined4 *)(lVar5 + 0x30);
        local_118 = *(undefined4 *)(lVar5 + 0x8c);
        uVar15 = 0;
        if ((int)local_130 < (int)param_2->_padding_) {
          uVar15 = local_120;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar22 = local_f8;
        if (((int)uVar14 < 0) || ((param_2->Debug).UniformBufferNames.ArrayNum <= (int)uVar14)) {
          bVar10 = true;
          pFVar16 = ::FString::FString(&local_70,L"<unknown>");
        }
        else {
          if ((uVar21 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          bVar13 = true;
          pFVar16 = ::FName::ToString((FName *)((param_2->Debug).UniformBufferNames.
                                                AllocatorInstance.Data + lVar22 * 8),local_60);
        }
        pFVar4 = (pFVar16->Data).AllocatorInstance.Data;
        (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar16->Data).ArrayNum = 0;
        (pFVar16->Data).ArrayMax = 0;
        if ((bVar10) &&
           (bVar10 = false, local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if ((bVar13) &&
           (bVar13 = false,
           local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
        uVar21 = local_130;
        Logging::Private::BasicFatalLog
                  (&`void___cdecl_UE::RHI::Private::SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingGfxState>&___ptr64,class_FVulkanUniformBuffer*___ptr64_[16],unsigned_short,0>(FVulkanResourceBinder<FVulkanPendingGfxState>&___ptr64,FRHIShader_const&___ptr64,unsigned_short&___ptr64,class_FVulkanUniformBuffer*___ptr64_(&___ptr64)[16],RHIValidation::FTracker*___ptr64)'
                    ::__l28::LOG_Static,(FLogCategoryBase *)&LogRHI);
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        lVar22 = local_f0;
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
      }
    }
    pFVar3 = local_128;
    local_b0.Tracker = &param_5;
    local_b0.CurrentTimeForTextureTimes = &local_114;
    local_b0.Shader = param_2;
    local_b0.Binder = param_1;
    EnumerateUniformBufferResources<FRHITexture,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingGfxState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>_::__l4::<lambda_1>_>
              ((FRHIUniformBuffer *)local_128,uVar21,(uint *)param_2->_padding_,&local_b0);
    local_c8.Tracker = &param_5;
    local_c8.Shader = param_2;
    local_c8.Binder = param_1;
    EnumerateUniformBufferResources<FRHIShaderResourceView,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingGfxState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>_::__l4::<lambda_2>_>
              ((FRHIUniformBuffer *)pFVar3,uVar21,(uint *)param_2->_padding_,&local_c8);
    lVar5 = param_2->_padding_;
    uVar14 = *(uint *)(lVar5 + lVar22);
    lVar22 = local_128->_padding_;
    if (uVar14 != 0) {
      uVar15 = *(uint *)(lVar5 + (ulonglong)uVar14 * 4);
      puVar19 = (uint *)(lVar5 + ((ulonglong)uVar14 + 1) * 4);
      do {
        lVar5 = *(longlong *)(lVar22 + (ulonglong)(uVar15 >> 8 & 0xffff) * 8);
        if ((lVar5 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                                ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (param_1->bBindless == false) {
          FVulkanPendingGfxState::SetSRVForUBResource
                    (param_1->PendingState,(char)param_1->Stage,uVar15 & 0xff,
                     *(FVulkanShaderResourceView **)(lVar5 + 0x30));
        }
        uVar15 = *puVar19;
        puVar19 = puVar19 + 1;
      } while (uVar15 >> 0x18 == uVar21);
    }
    lVar22 = param_2->_padding_;
    lVar5 = local_128->_padding_;
    uVar14 = *(uint *)(lVar22 + (longlong)(int)uVar21 * 4);
    if (uVar14 != 0) {
      uVar15 = *(uint *)(lVar22 + (ulonglong)uVar14 * 4);
      puVar19 = (uint *)(lVar22 + ((ulonglong)uVar14 + 1) * 4);
      do {
        pFVar6 = *(FVulkanSamplerState **)(lVar5 + (ulonglong)(uVar15 >> 8 & 0xffff) * 8);
        if ((pFVar6 == (FVulkanSamplerState *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                                ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (param_1->bBindless == false) {
          FVulkanCommonPipelineDescriptorState::SetSamplerState
                    ((FVulkanCommonPipelineDescriptorState *)param_1->PendingState->CurrentState,
                     (char)param_1->Stage,uVar15 & 0xff,pFVar6);
        }
        uVar15 = *puVar19;
        puVar19 = puVar19 + 1;
      } while (uVar15 >> 0x18 == uVar21);
    }
    lVar22 = param_2->_padding_;
    lVar5 = local_128->_padding_;
    uVar14 = *(uint *)(lVar22 + (longlong)(int)uVar21 * 4);
    if (uVar14 != 0) {
      uVar15 = *(uint *)(lVar22 + (ulonglong)uVar14 * 4);
      puVar19 = (uint *)(lVar22 + ((ulonglong)uVar14 + 1) * 4);
      do {
        pFVar7 = *(FVulkanUnorderedAccessView **)(lVar5 + (ulonglong)(uVar15 >> 8 & 0xffff) * 8);
        if ((pFVar7 == (FVulkanUnorderedAccessView *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                                ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (param_5 != (FTracker *)0x0) {
          EVar1 = param_2->Frequency;
          if ((((EVar1 == SF_Compute) || (EVar1 == SF_NumStandardFrequencies)) ||
              (EVar1 == SF_RayMiss)) || ((EVar1 == SF_RayHitGroup || (EVar1 == SF_RayCallable)))) {
            lVar22 = 0x10;
          }
          else {
            lVar22 = 0;
          }
          ppFVar17 = RHIValidation::FTracker::FUAVTracker::operator[]
                               ((FUAVTracker *)
                                ((longlong)&param_5->UAVTrackers[0].UAVs.AllocatorInstance.Data +
                                lVar22),uVar15 & 0xff);
          *ppFVar17 = (FRHIUnorderedAccessView *)pFVar7;
        }
        if (param_1->bBindless == false) {
          FVulkanPendingGfxState::SetUAVForUBResource
                    (param_1->PendingState,(char)param_1->Stage,uVar15 & 0xff,pFVar7);
        }
        uVar15 = *puVar19;
        puVar19 = puVar19 + 1;
      } while (uVar15 >> 0x18 == uVar21);
    }
    if (local_110 == 0) {
      *param_3 = 0;
      return;
    }
  } while( true );
}

// CanMemoryMapChunkedPSOCache @ 145ae0e30

bool __cdecl UE::Vulkan::CanMemoryMapChunkedPSOCache(void)

{
  return GMemoryMapChunkedPSOCache;
}

// GetPSOBinaryCacheVersionedFolder @ 145ae6f70

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

FString * __cdecl UE::Vulkan::GetPSOBinaryCacheVersionedFolder(FString *__return_storage_ptr__)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FName this;
  FString *pFVar4;
  int iVar5;
  int iVar6;
  undefined1 local_res10 [8];
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::Vulkan::GetPSOBinaryCacheVersionedFolder'::__l2::
             _dynamic_atexit_destructor_for__BinaryCacheVersionKey__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (BinaryCacheVersionKey.Data.ArrayNum < 2) {
    EnterCriticalSection((LPCRITICAL_SECTION)&CacheVersionedFolderCriticalSection);
    if (BinaryCacheVersionKey.Data.ArrayNum < 2) {
      this = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
      pFVar4 = ::FName::ToString((FName *)this,&local_18);
      iVar6 = (pFVar4->Data).ArrayNum;
      iVar5 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      ::FString::AppendChars
                (&BinaryCacheVersionKey,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,iVar5);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      (*FCrc::MemCrc32Func)((GVulkanRHI->Device->GpuProps).pipelineCacheUUID,0x10,0);
      ::FString::PrintfImpl(&local_28,L".%x.%x.%x");
      iVar6 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      ::FString::AppendChars
                (&BinaryCacheVersionKey,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar6);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&CacheVersionedFolderCriticalSection);
    if (BinaryCacheVersionKey.Data.ArrayNum < 2) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!BinaryCacheVersionKey.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                         ,0xab,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar6 = BinaryCacheVersionKey.Data.ArrayNum;
  _Src = BinaryCacheVersionKey.Data.AllocatorInstance;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).ArrayNum = BinaryCacheVersionKey.Data.ArrayNum;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar6,0,(ForAnyElementType *)__return_storage_ptr__,iVar6,piVar1);
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,(longlong)iVar6 * 2);
  }
  return __return_storage_ptr__;
}

// GetRHICacheRootFolder @ 145ae7260

FString * __cdecl UE::Vulkan::GetRHICacheRootFolder(FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  FString *pFVar2;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = FPaths::ProjectSavedDir();
      pTVar3 = &::operator/(&local_18,pFVar2,L"RHICache")->Data;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                (&RHICacheTopFolderPath.Data,pTVar3,8 - (uint)(pTVar3->ArrayNum != 0));
      ::FString::PathAppend(&RHICacheTopFolderPath,L"Vulkan",6);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      atexit(`UE::Vulkan::GetRHICacheRootFolder'::__l2::
             _dynamic_atexit_destructor_for__RHICacheTopFolderPath__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  _Src = RHICacheTopFolderPath.Data.AllocatorInstance;
  iVar4 = RHICacheTopFolderPath.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar4,0,(ForAnyElementType *)__return_storage_ptr__,iVar4,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,(longlong)iVar4 * 2);
  return __return_storage_ptr__;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 145afe690

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<unsigned_int> *param_5,
          int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
  ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<5>::ForElementType<VulkanRHI::FVulkanPageSizeBucket>_> @ 145afe730

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<5>::ForElementType<VulkanRHI::FVulkanPageSizeBucket>_>
          (ushort param_1,ForElementType<VulkanRHI::FVulkanPageSizeBucket> *param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *param_3;
  uVar1 = iVar4 + 1;
  if ((int)uVar1 < iVar4) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (5 < uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMax <= NumInlineElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                       ,0x536,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  *param_3 = 5;
  return iVar4;
}

// ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 145afe7a0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_int> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 3) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_VkTimeDomainKHR>_> @ 145afe880

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_VkTimeDomainKHR>_>
          (uint param_1,uint param_2,int param_3,ForElementType<VkTimeDomainKHR> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = 4;
    uVar7 = (ulonglong)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar3 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_VkTimeDomainKHR>::
    ResizeAllocation(param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_VkTimeDomainKHR>_> @ 145afe950

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_VkTimeDomainKHR>_>
          (uint param_1,uint param_2,ForElementType<VkTimeDomainKHR> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_VkTimeDomainKHR>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// DereferenceIfNecessary<FVulkanPipelineStateCacheManager,FVulkanPipelineStateCacheManager_*_&> @ 145b3b9d0

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

FVulkanPipelineStateCacheManager * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FVulkanPipelineStateCacheManager,FVulkanPipelineStateCacheManager_*_&>
          (FVulkanPipelineStateCacheManager **param_1)

{
  return *param_1;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkRect2D>_> @ 145b40410

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkRect2D>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<VkRect2D> *param_5,
          int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkRect2D>::
  ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkViewport>_> @ 145b404b0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkViewport>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<VkViewport> *param_5,
          int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkViewport>::
  ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FVkRtBLASBuildData>_> @ 145b40550

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FVkRtBLASBuildData>_>
          (uint param_1,uint param_2,ForElementType<FVkRtBLASBuildData> *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_4;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FVkRtBLASBuildData>::
    ResizeAllocation(param_3,uVar2,iVar8,uVar7);
    *param_4 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*>_> @ 145b40620

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*>_>
          (ushort param_1,ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<VkAccelerationStructureBuildGeometryInfoKHR>_> @ 145b407c0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<VkAccelerationStructureBuildGeometryInfoKHR>_>
          (ushort param_1,ForElementType<VkAccelerationStructureBuildGeometryInfoKHR> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<VkAccelerationStructureBuildGeometryInfoKHR>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkAccelerationStructureBuildRangeInfoKHR>_> @ 145b40890

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkAccelerationStructureBuildRangeInfoKHR>_>
          (ushort param_1,ForElementType<VkAccelerationStructureBuildRangeInfoKHR> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<VkAccelerationStructureBuildRangeInfoKHR>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkAccelerationStructureGeometryKHR>_> @ 145b40960

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkAccelerationStructureGeometryKHR>_>
          (ushort param_1,ForElementType<VkAccelerationStructureGeometryKHR> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<VkAccelerationStructureGeometryKHR>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkSparseBufferMemoryBindInfo>_> @ 145b40a30

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkSparseBufferMemoryBindInfo>_>
          (ushort param_1,ForElementType<VkSparseBufferMemoryBindInfo> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<VkSparseBufferMemoryBindInfo>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkSparseImageOpaqueMemoryBindInfo>_> @ 145b40b00

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkSparseImageOpaqueMemoryBindInfo>_>
          (ushort param_1,ForElementType<VkSparseImageOpaqueMemoryBindInfo> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<VkSparseImageOpaqueMemoryBindInfo>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<VkVertexInputAttributeDescription2EXT>_> @ 145b40bd0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<VkVertexInputAttributeDescription2EXT>_>
          (ushort param_1,ForElementType<VkVertexInputAttributeDescription2EXT> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<VkVertexInputAttributeDescription2EXT>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<VkVertexInputAttributeDescription>_> @ 145b40ca0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<VkVertexInputAttributeDescription>_>
          (ushort param_1,ForElementType<VkVertexInputAttributeDescription> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<VkVertexInputAttributeDescription>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<VkVertexInputBindingDescription2EXT>_> @ 145b40d70

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<VkVertexInputBindingDescription2EXT>_>
          (ushort param_1,ForElementType<VkVertexInputBindingDescription2EXT> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<VkVertexInputBindingDescription2EXT>::ResizeAllocation(param_2,uVar2,iVar8,uVar7)
    ;
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<VkVertexInputBindingDescription>_> @ 145b40e40

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<VkVertexInputBindingDescription>_>
          (ushort param_1,ForElementType<VkVertexInputBindingDescription> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<VkVertexInputBindingDescription>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_>_>_> @ 145b40f10

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_>_>_>
          (ushort param_1,
          ForElementType<TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_>_> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_>_>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<11>::ForElementType<VkDescriptorPoolSize>_> @ 145b40fe0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<11>::ForElementType<VkDescriptorPoolSize>_>
          (ushort param_1,ForElementType<VkDescriptorPoolSize> *param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *param_3;
  uVar1 = iVar4 + 1;
  if ((int)uVar1 < iVar4) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0xb < uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMax <= NumInlineElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                       ,0x536,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  *param_3 = 0xb;
  return iVar4;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>_> @ 145b41180

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*> *param_4,int param_5,
          int *param_6)

{
  ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*> _Src;
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  uVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      uVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      uVar1 = (uint)(uVar2 / uVar3);
      if ((int)uVar1 < param_3) {
        uVar1 = 0x7fffffff;
      }
    }
  }
  if (uVar1 != *param_6) {
    *param_6 = uVar1;
    _Src = param_4->SecondaryData;
    if (uVar1 < 9) {
      if (_Src == (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)0x0) {
        return;
      }
      memmove(param_4,(void *)_Src,(longlong)param_5 << 3);
      uVar1 = 0;
      param_5 = 0;
    }
    else if (_Src == (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&param_4->SecondaryData,0,uVar1,uVar3);
      memmove((void *)param_4->SecondaryData,param_4,(longlong)param_5 << 3);
      return;
    }
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&param_4->SecondaryData,param_5,uVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*>_> @ 145b41260

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FVkRtBLASBuildData>_> @ 145b412e0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FVkRtBLASBuildData>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FVkRtBLASBuildData> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FVkRtBLASBuildData>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<VkAccelerationStructureBuildGeometryInfoKHR>_> @ 145b41360

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<VkAccelerationStructureBuildGeometryInfoKHR>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<VkAccelerationStructureBuildGeometryInfoKHR> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<VkAccelerationStructureBuildGeometryInfoKHR>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 145b8f230

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (ushort param_1,ForElementType<unsigned_int> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<VkFence_T_*>_> @ 145b8f2f0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<VkFence_T_*>_>
          (ushort param_1,ForElementType<VkFence_T_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 4) {
      iVar8 = 3;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 4) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<VkFence_T_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FVulkanSyncPoint_*>_> @ 145b8f3c0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FVulkanSyncPoint_*>_>
          (ushort param_1,ForElementType<FVulkanSyncPoint_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 4) {
      iVar8 = 3;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 4) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FVulkanSyncPoint_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHILockTracker::FTextureLockParams>_> @ 145b8f490

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHILockTracker::FTextureLockParams>_>
          (ushort param_1,ForElementType<FRHILockTracker::FTextureLockParams> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FRHILockTracker::FTextureLockParams>::ResizeAllocation(param_2,uVar2,iVar8,uVar7)
    ;
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_>_>_> @ 145b8f560

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_>_>_>
          (ushort param_1,
          ForElementType<TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_>_> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 4) {
      iVar8 = 3;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 4) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_>_>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::RHI::GPUProfiler::FEventStream>_> @ 145b8f630

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::RHI::GPUProfiler::FEventStream>_>
          (ushort param_1,ForElementType<UE::RHI::GPUProfiler::FEventStream> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 4) {
      iVar8 = 3;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 4) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::RHI::GPUProfiler::FEventStream>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_VkFormat>_> @ 145b8f700

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_VkFormat>_>
          (ushort param_1,ForElementType<VkFormat> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_VkFormat>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<VkBufferImageCopy>_> @ 145b8f7d0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<VkBufferImageCopy>_>
          (uint param_1,uint param_2,int param_3,ForElementType<VkBufferImageCopy> *param_4,
          int *param_5,int *param_6)

{
  ForElementType<VkBufferImageCopy> *this;
  int iVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  ForElementType<VkBufferImageCopy> _Src;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  iVar1 = *param_5;
  uVar6 = *param_6;
  uVar8 = iVar1 + param_3;
  *param_5 = uVar8;
  if ((uint)param_3 <= uVar6 - iVar1) {
    return iVar1;
  }
  if ((int)uVar8 < iVar1) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar8);
  }
  uVar7 = (ulonglong)param_1;
  if (uVar8 < 0xd) {
    _Src = param_4->SecondaryData;
    uVar8 = 0xc;
LAB_145b8f88b:
    uVar6 = uVar8;
    if (_Src == (ForElementType<VkBufferImageCopy>)0x0) goto LAB_145b8f8d9;
    memmove(param_4,(void *)_Src,(longlong)iVar1 * 0x38);
    uVar6 = 0;
    iVar5 = 0;
  }
  else {
    uVar4 = (ulonglong)(int)uVar8;
    if (uVar6 < 0xd) {
      uVar6 = 0;
    }
    if (uVar6 == 0) {
      uVar2 = 4;
      if (4 < uVar4) {
        uVar2 = uVar4;
      }
    }
    else {
      uVar2 = (uVar4 * 3 >> 3) + 0x10 + uVar4;
    }
    uVar3 = FMemory::QuantizeSize(uVar7 * uVar2,0);
    uVar6 = (uint)(uVar3 / uVar7);
    this = &param_4->SecondaryData;
    _Src = *this;
    if ((int)uVar6 < (int)uVar8) {
      uVar6 = 0x7fffffff;
    }
    uVar8 = uVar6;
    if (uVar6 < 0xd) goto LAB_145b8f88b;
    iVar5 = iVar1;
    if (_Src == (ForElementType<VkBufferImageCopy>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)this,0,uVar6,uVar7);
      memmove((void *)*this,param_4,(longlong)iVar1 * 0x38);
      goto LAB_145b8f8d9;
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_4->SecondaryData,iVar5,uVar6,uVar7);
  uVar6 = uVar8;
LAB_145b8f8d9:
  *param_6 = uVar6;
  return iVar1;
}

// ReallocGrow<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<VkMemoryToImageCopy>_> @ 145b8f910

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<VkMemoryToImageCopy>_>
          (uint param_1,uint param_2,int param_3,ForElementType<VkMemoryToImageCopy> *param_4,
          int *param_5,int *param_6)

{
  ForElementType<VkMemoryToImageCopy> *this;
  int iVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  ForElementType<VkMemoryToImageCopy> _Src;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  iVar1 = *param_5;
  uVar6 = *param_6;
  uVar8 = iVar1 + param_3;
  *param_5 = uVar8;
  if ((uint)param_3 <= uVar6 - iVar1) {
    return iVar1;
  }
  if ((int)uVar8 < iVar1) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar8);
  }
  uVar7 = (ulonglong)param_1;
  if (uVar8 < 0xd) {
    _Src = param_4->SecondaryData;
    uVar8 = 0xc;
LAB_145b8f9cb:
    uVar6 = uVar8;
    if (_Src == (ForElementType<VkMemoryToImageCopy>)0x0) goto LAB_145b8fa21;
    memmove(param_4,(void *)_Src,(longlong)iVar1 * 0x48);
    uVar6 = 0;
    iVar5 = 0;
  }
  else {
    uVar4 = (ulonglong)(int)uVar8;
    if (uVar6 < 0xd) {
      uVar6 = 0;
    }
    if (uVar6 == 0) {
      uVar2 = 4;
      if (4 < uVar4) {
        uVar2 = uVar4;
      }
    }
    else {
      uVar2 = (uVar4 * 3 >> 3) + 0x10 + uVar4;
    }
    uVar3 = FMemory::QuantizeSize(uVar7 * uVar2,0);
    uVar6 = (uint)(uVar3 / uVar7);
    this = &param_4->SecondaryData;
    _Src = *this;
    if ((int)uVar6 < (int)uVar8) {
      uVar6 = 0x7fffffff;
    }
    uVar8 = uVar6;
    if (uVar6 < 0xd) goto LAB_145b8f9cb;
    iVar5 = iVar1;
    if (_Src == (ForElementType<VkMemoryToImageCopy>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)this,0,uVar6,uVar7);
      memmove((void *)*this,param_4,(longlong)iVar1 * 0x48);
      goto LAB_145b8fa21;
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_4->SecondaryData,iVar5,uVar6,uVar7);
  uVar6 = uVar8;
LAB_145b8fa21:
  *param_6 = uVar6;
  return iVar1;
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHILockTracker::FTextureLockParams>_> @ 145b8fa50

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHILockTracker::FTextureLockParams>_>
          (uint param_1,uint param_2,ForElementType<FRHILockTracker::FTextureLockParams> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FRHILockTracker::FTextureLockParams>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>_> @ 145b8fb10

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// CalculateSubresourceOffset @ 145b9f980

ulong64 __cdecl
UE::VulkanTexture::CalculateSubresourceOffset
          (FRHITextureDesc *param_1,FSubresourceIndex *param_2,ulong64 *param_3,ulong64 *param_4)

{
  EPixelFormat EVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  ulong64 uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulong64 uVar16;
  ulonglong uVar17;
  int iVar18;
  ulong64 uVar15;
  
  uVar15 = 0;
  if ((param_1->Dimension == TextureCube) || (bVar6 = false, param_1->Dimension == TextureCubeArray)
     ) {
    bVar6 = true;
  }
  iVar3 = param_2->ArrayIndex;
  uVar2 = param_1->ArraySize;
  lVar7 = 1;
  iVar4 = param_2->MipIndex;
  if (bVar6) {
    lVar7 = 6;
  }
  iVar5 = param_2->FaceIndex;
  uVar16 = uVar15;
  if (-1 < iVar4) {
    do {
      EVar1 = param_1->Format;
      bVar9 = (byte)uVar15;
      uVar11 = (uint)(param_1->Extent).field0_0x0._s_0.X >> (bVar9 & 0x1f);
      uVar14 = 1;
      if (1 < uVar11) {
        uVar14 = uVar11;
      }
      uVar12 = (uint)(param_1->Extent).field0_0x0._s_0.Y >> (bVar9 & 0x1f);
      uVar11 = 1;
      if (1 < uVar12) {
        uVar11 = uVar12;
      }
      uVar13 = CONCAT44(0 >> (bVar9 & 0x1f),(GPixelFormats[EVar1].BlockSizeY - 1U) + uVar11) /
               (ulonglong)(uint)GPixelFormats[EVar1].BlockSizeY;
      uVar12 = (uint)(param_1->Depth >> (bVar9 & 0x1f));
      uVar11 = 1;
      if (1 < uVar12) {
        uVar11 = uVar12;
      }
      uVar11 = ((GPixelFormats[EVar1].BlockSizeZ - 1U) + uVar11) /
               (uint)GPixelFormats[EVar1].BlockSizeZ;
      iVar18 = (int)(CONCAT44(0 >> (bVar9 & 0x1f),(uVar14 - 1) + GPixelFormats[EVar1].BlockSizeX) /
                    (ulonglong)(uint)GPixelFormats[EVar1].BlockSizeX);
      if (iVar18 == 0) {
        iVar18 = 1;
      }
      if (uVar11 == 0) {
        uVar11 = 1;
      }
      uVar17 = uVar13 & 0xffffffff;
      if ((int)uVar13 == 0) {
        uVar17 = 1;
      }
      uVar13 = (ulonglong)(uint)(iVar18 * GPixelFormats[EVar1].BlockBytes);
      uVar10 = uVar11 * uVar17 * uVar13;
      lVar8 = (ulonglong)uVar2 * lVar7;
      if ((int)uVar15 == iVar4) {
        *param_4 = uVar10;
        *param_3 = uVar13;
        lVar8 = iVar3 * lVar7 + (longlong)iVar5;
      }
      uVar14 = (int)uVar15 + 1;
      uVar15 = (ulong64)uVar14;
      uVar16 = uVar16 + lVar8 * uVar10;
    } while ((int)uVar14 <= iVar4);
  }
  return uVar16;
}

// CalculateTexturePlaneSize @ 145b9fb20

ulong64 __cdecl UE::RHITextureUtils::CalculateTexturePlaneSize(FRHITextureDesc *param_1)

{
  EPixelFormat EVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulong64 uVar10;
  
  uVar6 = 0;
  if (param_1->NumMips != 0) {
    EVar1 = param_1->Format;
    uVar10 = uVar6;
    do {
      bVar3 = (byte)uVar10;
      uVar4 = (uint)(param_1->Extent).field0_0x0._s_0.X >> (bVar3 & 0x1f);
      uVar9 = 1;
      if (1 < uVar4) {
        uVar9 = uVar4;
      }
      uVar5 = (uint)(param_1->Extent).field0_0x0._s_0.Y >> (bVar3 & 0x1f);
      uVar4 = 1;
      if (1 < uVar5) {
        uVar4 = uVar5;
      }
      uVar2 = CONCAT44(0 >> (bVar3 & 0x1f),(uVar4 - 1) + GPixelFormats[EVar1].BlockSizeY) /
              (ulonglong)(uint)GPixelFormats[EVar1].BlockSizeY;
      uVar5 = (uint)(param_1->Depth >> (bVar3 & 0x1f));
      uVar4 = 1;
      if (1 < uVar5) {
        uVar4 = uVar5;
      }
      uVar4 = ((uVar4 - 1) + GPixelFormats[EVar1].BlockSizeZ) /
              (uint)GPixelFormats[EVar1].BlockSizeZ;
      iVar8 = (int)(CONCAT44(0 >> (bVar3 & 0x1f),(uVar9 - 1) + GPixelFormats[EVar1].BlockSizeX) /
                   (ulonglong)(uint)GPixelFormats[EVar1].BlockSizeX);
      if (iVar8 == 0) {
        iVar8 = 1;
      }
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      uVar7 = uVar2 & 0xffffffff;
      if ((int)uVar2 == 0) {
        uVar7 = 1;
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulong64)uVar9;
      uVar6 = uVar6 + (ulonglong)(uint)(iVar8 * GPixelFormats[EVar1].BlockBytes) * (ulonglong)uVar4
                      * uVar7;
    } while (uVar9 < param_1->NumMips);
  }
  return uVar6;
}

// CalculateTextureSize @ 145b9fc60

ulong64 __cdecl UE::RHITextureUtils::CalculateTextureSize(FRHITextureDesc *param_1)

{
  bool bVar1;
  ulong64 uVar2;
  longlong lVar3;
  
  uVar2 = CalculateTexturePlaneSize(param_1);
  lVar3 = 1;
  if ((param_1->Dimension == TextureCube) || (param_1->Dimension == TextureCubeArray)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    lVar3 = 6;
  }
  return lVar3 * (ulonglong)param_1->ArraySize * (ulonglong)param_1->Depth * uVar2;
}

// FillResourceCollectionMemory @ 145ba9630

void __cdecl
UE::RHICore::FillResourceCollectionMemory
          (uint *param_1,TArrayView<FRHIResourceCollectionMember_const_,int> *param_2)

{
  EType EVar1;
  FRHIResource *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIResourceCollectionMember *pFVar5;
  uint uVar6;
  FRHIResourceCollectionMember *pFVar7;
  undefined8 local_res8;
  
  pFVar5 = param_2->DataPtr;
  *param_1 = param_2->ArrayNum;
  pFVar7 = pFVar5 + (int)*(undefined8 *)&param_2->ArrayNum;
  do {
    if (pFVar5 == pFVar7) {
      return;
    }
    param_1 = param_1 + 1;
    EVar1 = pFVar5->Type;
    if (EVar1 == Texture) {
      (**(code **)(pFVar5->Resource->_padding_ + 0x30))(pFVar5->Resource,&local_res8);
LAB_145ba96c8:
      if (((uint)local_res8 == 0xffffffff) || (local_res8._4_1_ == '\t')) goto LAB_145ba96d8;
    }
    else {
      if (EVar1 == TextureReference) {
        pFVar2 = pFVar5->Resource;
        local_res8._0_4_ = *(uint *)&pFVar2[0xd].AtomicFlags;
        local_res8._4_1_ = pFVar2[0xd].ResourceType;
        local_res8._5_1_ = pFVar2[0xd].field_0xd;
        local_res8._6_2_ = pFVar2[0xd]._padding_;
        goto LAB_145ba96c8;
      }
      if (EVar1 == ShaderResourceView) {
        (**(code **)(pFVar5->Resource->_padding_ + 0x10))(pFVar5->Resource,&local_res8);
        goto LAB_145ba96c8;
      }
      local_res8 = 0x9ffffffff;
LAB_145ba96d8:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\RHICoreResourceCollection.h"
                         ,0x30,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (((uint)local_res8 == 0xffffffff) || (uVar6 = (uint)local_res8, local_res8._4_1_ == '\t')) {
      uVar6 = 0;
    }
    *param_1 = uVar6;
    pFVar5 = pFVar5 + 1;
  } while( true );
}

// UpdateGenericResourceCollection @ 145bc0020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::RHICore::UpdateGenericResourceCollection
          (FRHICommandListBase *param_1,FGenericResourceCollection *param_2,uint param_3,
          TArrayView<FRHIResourceCollectionMember_const_,int> *param_4)

{
  undefined1 *puVar1;
  ERHIPipeline EVar2;
  uint uVar3;
  FRHIBuffer *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  FRHIResourceCollectionMember *pFVar10;
  undefined8 uVar11;
  FRHIResourceCollectionMember *pFVar12;
  undefined4 uStack_2c;
  TArrayView<FRHIResourceCollectionMember_const_,int> local_28;
  TArrayView<FRHIResourceCollectionMember_const_,int> local_18;
  
  pFVar10 = param_4->DataPtr;
  uVar11 = *(undefined8 *)&param_4->ArrayNum;
  uVar3 = (uint)param_2->_padding_;
  if (((int)uVar3 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (param_3 < uVar3) {
    iVar8 = (int)uVar11;
    iVar9 = uVar3 - param_3;
    if (iVar8 < (int)(uVar3 - param_3)) {
      iVar9 = iVar8;
    }
    if (iVar9 < iVar8) {
      iVar8 = iVar9;
    }
    iVar9 = 0;
    if (0 < iVar8) {
      iVar9 = iVar8;
    }
    if (iVar9 < 0) {
      pFVar12 = pFVar10;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      local_28.DataPtr = pFVar12;
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      local_28.DataPtr = pFVar10;
      if (iVar9 == 0) {
        return;
      }
    }
    local_28._12_4_ = uStack_2c;
    local_28.ArrayNum = iVar9;
    FRHIResourceCollection::UpdateMembers((FRHIResourceCollection *)param_2,param_3,&local_28);
    pFVar12 = (FRHIResourceCollectionMember *)param_2->_padding_;
    iVar9 = (int)param_2->_padding_;
    if ((iVar9 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = iVar9 * 4;
    pFVar4 = (param_2->Buffer).Reference;
    if (((((GRHICommandList.bLatchedBypass == false) ||
          ((param_1->PersistentState).bImmediate == '\0')) && (param_1->bExecuting != false)) &&
        ((GRHICommandList.bLatchedBypass == false || ((param_1->PersistentState).bImmediate == '\0')
         ))) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsTopOfPipe() || Bypass()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                    ,0x2ed,
                                    L"Buffers may only be locked while recording RHI command lists, not during RHI command list execution."
                                   ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EVar2 = param_1->ActivePipelines;
    if (((EVar2 != None) && ((EVar2 & EVar2 - Graphics) != None)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2a5,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar6 = param_1->ActivePipelines == None;
    if (bVar6) {
      FRHICommandListBase::SwitchPipeline(param_1,Graphics);
    }
    puVar7 = (uint *)(**(code **)(GDynamicRHI->_padding_ + 0x148))
                               (GDynamicRHI,param_1,pFVar4,0,iVar8 + 4,1,pFVar10,uVar11,pFVar12,
                                iVar9);
    if (bVar6) {
      FRHICommandListBase::SwitchPipeline(param_1,None);
    }
    local_18._12_4_ = uStack_2c;
    local_18.ArrayNum = iVar9;
    local_18.DataPtr = pFVar12;
    FillResourceCollectionMemory(puVar7,&local_18);
    pFVar4 = (param_2->Buffer).Reference;
    if (((((GRHICommandList.bLatchedBypass == false) ||
          ((param_1->PersistentState).bImmediate == '\0')) && (param_1->bExecuting != false)) &&
        ((GRHICommandList.bLatchedBypass == false || ((param_1->PersistentState).bImmediate == '\0')
         ))) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsTopOfPipe() || Bypass()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                    ,0x2f5,
                                    L"Buffers may only be unlocked while recording RHI command lists, not during RHI command list execution."
                                   ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EVar2 = param_1->ActivePipelines;
    if (((EVar2 != None) && ((EVar2 & EVar2 - Graphics) != None)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2a5,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (param_1->ActivePipelines == None) {
      FRHICommandListBase::SwitchPipeline(param_1,Graphics);
      (**(code **)(GDynamicRHI->_padding_ + 0x158))(GDynamicRHI,param_1,pFVar4);
      FRHICommandListBase::SwitchPipeline(param_1,None);
    }
    else {
      (**(code **)(GDynamicRHI->_padding_ + 0x158))(GDynamicRHI,param_1,pFVar4);
    }
  }
  return;
}

// DereferenceIfNecessary<FVulkanViewport,FVulkanViewport_*_&> @ 145bc76f0

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

FVulkanViewport * __cdecl
UE::Core::Private::DereferenceIfNecessary<FVulkanViewport,FVulkanViewport_*_&>
          (FVulkanViewport **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>_> @ 145bc88d0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>_>
          (ushort param_1,ForElementType<void_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 7) {
      iVar8 = 6;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 7) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FVulkanSemaphore_*>_> @ 145bc89a0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FVulkanSemaphore_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FVulkanSemaphore_*> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 7) {
      iVar8 = 6;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 7) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FVulkanSemaphore_*>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FVulkanTexture>_>_> @ 145bc8a80

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FVulkanTexture>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TRefCountPtr<FVulkanTexture>_> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 7) {
      iVar8 = 6;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 7) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TRefCountPtr<FVulkanTexture>_>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FVulkanSemaphore_*>_> @ 145bc8b60

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FVulkanSemaphore_*>_>
          (uint param_1,uint param_2,ForElementType<FVulkanSemaphore_*> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 7) {
    iVar2 = 6;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FVulkanSemaphore_*>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FVulkanTexture>_>_> @ 145bc8c20

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FVulkanTexture>_>_>
          (uint param_1,uint param_2,ForElementType<TRefCountPtr<FVulkanTexture>_> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 7) {
    iVar2 = 6;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TRefCountPtr<FVulkanTexture>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>_> @ 145bc8ce0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<void_*> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 7) {
      iVar1 = 6;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

