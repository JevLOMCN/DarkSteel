// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 5

// InternalUpdateDescriptorSets<1> @ 145b3e3d0

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

bool __thiscall
FVulkanComputePipelineDescriptorState::InternalUpdateDescriptorSets<1>
          (FVulkanComputePipelineDescriptorState *this,FVulkanCommandListContext *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uchar *_Dst;
  uint uVar8;
  ulonglong uVar9;
  FVulkanDescriptorSetWriter *this_00;
  FVulkanDescriptorSetWriter *pFVar10;
  undefined1 local_res8 [8];
  FVulkanAllocation local_38;
  
  if ((int)this->_padding_ != 0) {
    uVar9 = 0;
    if (this->PackedUniformBuffersDirty != 0) {
      uVar8 = (this->PackedUniformBuffers).PackedUniformBuffers.ArrayNum;
      uVar1 = *(uint *)(param_1->_padding_ + 0xdc0);
      VulkanRHI::FVulkanAllocation::FVulkanAllocation(&local_38);
      _Dst = VulkanRHI::FTempBlockAllocator::Alloc
                       (*(FTempBlockAllocator **)(param_1->_padding_ + 0x700),uVar8,uVar1,
                        (FVulkanContextCommon *)param_1,&local_38,(VkDescriptorAddressInfoEXT *)0x0)
      ;
      memcpy(_Dst,(this->PackedUniformBuffers).PackedUniformBuffers.AllocatorInstance.Data,
             (ulonglong)uVar8);
      if (((int)this->_padding_ < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      SubmitPackedUniformBuffers<1>((FVulkanDescriptorSetWriter *)this->_padding_,&local_38);
      VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&local_38);
      this->PackedUniformBuffersDirty = 0;
    }
    bVar6 = FVulkanCommandListContext::AcquirePoolSetAndDescriptorsIfNeeded
                      (param_1,(FVulkanDescriptorSetsLayout *)this->_padding_,true,
                       (VkDescriptorSet_T **)this->_padding_);
    if (bVar6) {
      if (((int)this->_padding_ < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      uVar3 = *(undefined8 *)this->_padding_;
      if (((int)this->_padding_ < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      plVar4 = (longlong *)this->_padding_;
      if ((int)plVar4[3] != 0) {
        do {
          uVar8 = (int)uVar9 + 1;
          *(undefined8 *)(uVar9 * 0x40 + 0x10 + *plVar4) = uVar3;
          uVar9 = (ulonglong)uVar8;
        } while (uVar8 < *(uint *)(plVar4 + 3));
      }
      iVar2 = (int)this->_padding_;
      this_00 = (FVulkanDescriptorSetWriter *)this->_padding_;
      pFVar10 = this_00 + iVar2;
      while( true ) {
        if ((int)this->_padding_ != iVar2) {
          `TCheckedPointerIterator<FVulkanDescriptorSetWriter,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res8);
        }
        if (this_00 == pFVar10) break;
        FVulkanDescriptorSetWriter::CheckAllWritten(this_00);
        this_00 = this_00 + 1;
      }
      (*VulkanDynamicAPI::vkUpdateDescriptorSets)
                (*(VkDevice_T **)(this->_padding_ + 0x30),(uint)this->_padding_,
                 (VkWriteDescriptorSet *)this->_padding_,0,(VkCopyDescriptorSet *)0x0);
      return true;
    }
  }
  return false;
}

// InternalUpdateDescriptorSets<0> @ 145b3ea50

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

bool __thiscall
FVulkanComputePipelineDescriptorState::InternalUpdateDescriptorSets<0>
          (FVulkanComputePipelineDescriptorState *this,FVulkanCommandListContext *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uchar *_Dst;
  uint uVar8;
  ulonglong uVar9;
  FVulkanDescriptorSetWriter *this_00;
  FVulkanDescriptorSetWriter *pFVar10;
  undefined1 local_res8 [8];
  FVulkanAllocation local_38;
  
  if ((int)this->_padding_ != 0) {
    uVar9 = 0;
    if (this->PackedUniformBuffersDirty != 0) {
      uVar8 = (this->PackedUniformBuffers).PackedUniformBuffers.ArrayNum;
      uVar1 = *(uint *)(param_1->_padding_ + 0xdc0);
      VulkanRHI::FVulkanAllocation::FVulkanAllocation(&local_38);
      _Dst = VulkanRHI::FTempBlockAllocator::Alloc
                       (*(FTempBlockAllocator **)(param_1->_padding_ + 0x700),uVar8,uVar1,
                        (FVulkanContextCommon *)param_1,&local_38,(VkDescriptorAddressInfoEXT *)0x0)
      ;
      memcpy(_Dst,(this->PackedUniformBuffers).PackedUniformBuffers.AllocatorInstance.Data,
             (ulonglong)uVar8);
      if (((int)this->_padding_ < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      SubmitPackedUniformBuffers<0>((FVulkanDescriptorSetWriter *)this->_padding_,&local_38);
      VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&local_38);
      this->PackedUniformBuffersDirty = 0;
    }
    bVar6 = FVulkanCommandListContext::AcquirePoolSetAndDescriptorsIfNeeded
                      (param_1,(FVulkanDescriptorSetsLayout *)this->_padding_,true,
                       (VkDescriptorSet_T **)this->_padding_);
    if (bVar6) {
      if (((int)this->_padding_ < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      uVar3 = *(undefined8 *)this->_padding_;
      if (((int)this->_padding_ < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      plVar4 = (longlong *)this->_padding_;
      if ((int)plVar4[3] != 0) {
        do {
          uVar8 = (int)uVar9 + 1;
          *(undefined8 *)(uVar9 * 0x40 + 0x10 + *plVar4) = uVar3;
          uVar9 = (ulonglong)uVar8;
        } while (uVar8 < *(uint *)(plVar4 + 3));
      }
      iVar2 = (int)this->_padding_;
      this_00 = (FVulkanDescriptorSetWriter *)this->_padding_;
      pFVar10 = this_00 + iVar2;
      while( true ) {
        if ((int)this->_padding_ != iVar2) {
          `TCheckedPointerIterator<FVulkanDescriptorSetWriter,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res8);
        }
        if (this_00 == pFVar10) break;
        FVulkanDescriptorSetWriter::CheckAllWritten(this_00);
        this_00 = this_00 + 1;
      }
      (*VulkanDynamicAPI::vkUpdateDescriptorSets)
                (*(VkDevice_T **)(this->_padding_ + 0x30),(uint)this->_padding_,
                 (VkWriteDescriptorSet *)this->_padding_,0,(VkCopyDescriptorSet *)0x0);
      return true;
    }
  }
  return false;
}

// FVulkanComputePipelineDescriptorState @ 145b44a50

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

FVulkanComputePipelineDescriptorState * __thiscall
FVulkanComputePipelineDescriptorState::FVulkanComputePipelineDescriptorState
          (FVulkanComputePipelineDescriptorState *this,FVulkanDevice *param_1,
          FVulkanComputePipeline *param_2)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  code *pcVar7;
  byte *pbVar8;
  bool bVar9;
  FVulkanComputePipelineDescriptorState *pFVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  byte *pbVar14;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  longlong local_res18;
  byte *local_res20;
  FMemScope local_58 [3];
  
  bVar9 = param_2->bUsesBindless;
  this->_padding_ = (longlong)param_1;
  uVar11 = 1;
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  piVar2 = &(this->PackedUniformBuffers).PackedUniformBuffers.ArrayNum;
  this->_padding_ = 0;
  piVar1 = &(this->PackedUniformBuffers).PackedUniformBuffers.ArrayMax;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(bool *)((longlong)&this->_padding_ + 1) = bVar9;
  *(undefined1 *)&this->_padding_ = 1;
  (this->PackedUniformBuffers).PackedUniformBuffers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  this->PackedUniformBuffersMask = 0;
  this->PackedUniformBuffersDirty = 0;
  this->ComputePipeline = param_2;
  this->_padding_ = (longlong)&___7FVulkanComputePipelineDescriptorState__6B_;
  FLLMScope::FLLMScope
            (local_res10,VideoRecording|BackupOOMMemoryPoolPlatform,false,None,Default,true);
  FMemScope::FMemScope(local_58,VideoRecording|BackupOOMMemoryPoolPlatform,true);
  lVar12 = param_2->_padding_;
  local_res18 = lVar12;
  if (*(int *)(lVar12 + 0x17c) == 0) {
    uVar11 = 0;
  }
  else {
    if (*piVar2 != 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PackedUniformBuffers.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanResources.h"
                         ,0x43c,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pFVar10 = (FVulkanComputePipelineDescriptorState *)(*pcVar7)();
        return pFVar10;
      }
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,*(int *)(lVar12 + 0x17c),(ForAnyElementType *)&this->PackedUniformBuffers,piVar2,
               piVar1);
  }
  this->PackedUniformBuffersMask = uVar11;
  this->_padding_ = param_2->_padding_ + 0x10;
  *(uint *)&this->_padding_ = (uint)(0 < *(int *)(lVar12 + 0x140));
  FVulkanCommonPipelineDescriptorState::CreateDescriptorWriteInfos
            ((FVulkanCommonPipelineDescriptorState *)this);
  FRHIResource::AddRef((FRHIResource *)&param_2->_padding_);
  pbVar14 = *(byte **)(lVar12 + 0x168);
  iVar4 = *(int *)(lVar12 + 0x170);
  local_res20 = pbVar14 + (longlong)iVar4 * 2;
  while( true ) {
    pbVar8 = local_res20;
    if (*(int *)(lVar12 + 0x170) != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FVulkanShaderHeader::FGlobalSamplerInfo_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pbVar14 == pbVar8) break;
    bVar3 = *pbVar14;
    lVar12 = *(longlong *)(this->_padding_ + (ulonglong)pbVar14[1] * 8);
    if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bUseBindless",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.h"
                         ,0x56,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pFVar10 = (FVulkanComputePipelineDescriptorState *)(*pcVar7)();
        return pFVar10;
      }
    }
    if ((lVar12 == 0) || (*(longlong *)(lVar12 + 0x18) == 0)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sampler && Sampler->Sampler != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.h"
                         ,0x57,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pFVar10 = (FVulkanComputePipelineDescriptorState *)(*pcVar7)();
        return pFVar10;
      }
    }
    if ((int)this->_padding_ < 1) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pFVar10 = (FVulkanComputePipelineDescriptorState *)(*pcVar7)();
        return pFVar10;
      }
    }
    plVar5 = (longlong *)this->_padding_;
    if (*(uint *)(plVar5 + 3) <= (uint)bVar3) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("DescriptorIndex < NumWrites",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                         ,0x222,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pFVar10 = (FVulkanComputePipelineDescriptorState *)(*pcVar7)();
        return pFVar10;
      }
    }
    lVar13 = (ulonglong)bVar3 * 0x40;
    if (1 < *(uint *)(*plVar5 + 0x24 + lVar13)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("WriteDescriptors[DescriptorIndex].descriptorType == VK_DESCRIPTOR_TYPE_SAMPLER || WriteDescriptors[DescriptorIndex].descriptorType == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                         ,0x223,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pFVar10 = (FVulkanComputePipelineDescriptorState *)(*pcVar7)();
        return pFVar10;
      }
    }
    plVar6 = *(longlong **)(*plVar5 + 0x28 + lVar13);
    if (plVar6 == (longlong *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ImageInfo",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                         ,0x225,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pFVar10 = (FVulkanComputePipelineDescriptorState *)(*pcVar7)();
        return pFVar10;
      }
    }
    if ((int)GMaxRHIFeatureLevel < 2) {
      piVar2 = (int *)(plVar5[4] + (ulonglong)bVar3 * 0xc);
      if (*(int *)(lVar12 + 0x20) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Sampler.SamplerId > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                           ,0x22b,L"");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          pFVar10 = (FVulkanComputePipelineDescriptorState *)(*pcVar7)();
          return pFVar10;
        }
      }
      bVar9 = *piVar2 != *(int *)(lVar12 + 0x20);
      if (bVar9) {
        *piVar2 = *(int *)(lVar12 + 0x20);
        *plVar6 = *(longlong *)(lVar12 + 0x18);
      }
      *(byte *)(plVar5 + 8) = *(byte *)(plVar5 + 8) | bVar9;
    }
    else {
      bVar9 = *plVar6 != *(longlong *)(lVar12 + 0x18);
      *plVar6 = *(longlong *)(lVar12 + 0x18);
    }
    *(byte *)&this->_padding_ = (byte)this->_padding_ | bVar9;
    *(byte *)&this->_padding_ = (byte)this->_padding_ | bVar9;
    pbVar14 = pbVar14 + 2;
    lVar12 = local_res18;
  }
  iVar4 = (int)this->_padding_;
  if ((iVar4 != 0) && (iVar4 != 1)) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6310970789499764670>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                       ,0x42,"DSWriter.Num() == 0 || DSWriter.Num() == 1");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FVulkanComputePipelineDescriptorState *)(*pcVar7)();
      return pFVar10;
    }
  }
  FMemScope::~FMemScope(local_58);
  FLLMScope::~FLLMScope(local_res10);
  return this;
}

// ~FVulkanComputePipelineDescriptorState @ 145b4d030

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
FVulkanComputePipelineDescriptorState::~FVulkanComputePipelineDescriptorState
          (FVulkanComputePipelineDescriptorState *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FVulkanComputePipelineDescriptorState__6B_;
  FRHIResource::Release((FRHIResource *)&this->ComputePipeline->_padding_);
  pFVar1 = (this->PackedUniformBuffers).PackedUniformBuffers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVulkanCommonPipelineDescriptorState::~FVulkanCommonPipelineDescriptorState
            ((FVulkanCommonPipelineDescriptorState *)this);
  return;
}

// UpdateBindlessDescriptors @ 145b823d0

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */

void __thiscall
FVulkanComputePipelineDescriptorState::UpdateBindlessDescriptors
          (FVulkanComputePipelineDescriptorState *this,FVulkanCommandListContext *param_1)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  FTempBlockAllocator *this_00;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  uchar *_Dst;
  longlong lVar8;
  FString *pFVar9;
  ulong64 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStackY_168 [32];
  VkBufferDeviceAddressInfo local_108;
  FString local_f0;
  FString local_e0;
  FVulkanAllocation local_d0;
  TStaticArray<TArray<VkDescriptorAddressInfoEXT,TSizedDefaultAllocator<32>_>,6,4294967295> local_a8
  ;
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_168;
  uVar11 = 0;
  if ((*(char *)((longlong)&this->_padding_ + 1) == '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bUseBindless",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((int)this->_padding_ != (int)this->_padding_) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DSWriteContainer.DescriptorBufferInfo.Num() == DSWriteContainer.DescriptorWrites.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                         ,0xee,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((int)this->_padding_ != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DSWriteContainer.DescriptorImageInfo.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                         ,0xef,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_a8.Elements[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Elements[0].ArrayNum = 0;
  local_a8.Elements[0].ArrayMax = 0;
  local_a8.Elements[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Elements[1].ArrayNum = 0;
  local_a8.Elements[1].ArrayMax = 0;
  local_a8.Elements[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Elements[2].ArrayNum = 0;
  local_a8.Elements[2].ArrayMax = 0;
  local_a8.Elements[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Elements[3].ArrayNum = 0;
  local_a8.Elements[3].ArrayMax = 0;
  local_a8.Elements[4].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Elements[4].ArrayNum = 0;
  local_a8.Elements[4].ArrayMax = 0;
  local_a8.Elements[5].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Elements[5].ArrayNum = 0;
  local_a8.Elements[5].ArrayMax = 0;
  lVar12 = this->ComputePipeline->_padding_;
  TArray<VkDescriptorAddressInfoEXT,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (local_a8.Elements,*(int *)(lVar12 + 0x178),Default);
  if ((1 < this->PackedUniformBuffersMask) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PackedUniformBuffersMask <= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                         ,0xfa,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar14 = uVar11;
  if (this->PackedUniformBuffersMask != 0) {
    uVar16 = (this->PackedUniformBuffers).PackedUniformBuffers.ArrayNum;
    uVar2 = *(undefined8 *)(this->_padding_ + 0xdc0);
    VulkanRHI::FVulkanAllocation::FVulkanAllocation(&local_d0);
    this_00 = *(FTempBlockAllocator **)(this->_padding_ + 0x700);
    if ((local_a8.Elements[0].ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    _Dst = VulkanRHI::FTempBlockAllocator::Alloc
                     (this_00,uVar16,(uint)uVar2,(FVulkanContextCommon *)param_1,&local_d0,
                      (VkDescriptorAddressInfoEXT *)local_a8.Elements[0].AllocatorInstance.Data);
    memcpy(_Dst,(this->PackedUniformBuffers).PackedUniformBuffers.AllocatorInstance.Data,
           (longlong)(int)uVar16);
    this->PackedUniformBuffersDirty = 0;
    uVar14 = 1;
    VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&local_d0);
  }
  if ((uint)uVar14 < *(uint *)(lVar12 + 0x178)) {
    do {
      uVar13 = (uint)uVar14;
      uVar16 = 0;
      if ((int)uVar13 < local_a8.Elements[0].ArrayNum) {
        uVar16 = ~uVar13 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar6.Data = local_a8.Elements[0].AllocatorInstance.Data;
      lVar8 = (longlong)(int)uVar13;
      if ((*(int *)&local_a8.Elements[0].AllocatorInstance.Data[lVar8 * 0x28].field_0x0 != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("DescriptorAddressInfo.sType == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                             ,0x10d,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((int)this->_padding_ < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar17 = uVar14 * 0x40 + *(longlong *)this->_padding_;
      if ((*(uint *)(lVar17 + 0x18) != uVar13) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("WriteDescriptorSet.dstBinding == UBIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                             ,0x110,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*(int *)(lVar17 + 0x1c) != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("WriteDescriptorSet.dstArrayElement == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                             ,0x111,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*(int *)(lVar17 + 0x20) != 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("WriteDescriptorSet.descriptorCount == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                             ,0x112,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*(int *)(lVar17 + 0x24) != 6) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("WriteDescriptorSet.descriptorType == VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                             ,0x113,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*(longlong **)(lVar17 + 0x30) == (longlong *)0x0) ||
         (**(longlong **)(lVar17 + 0x30) == 0)) {
        lVar3 = this->ComputePipeline->_padding_;
        if (((int)uVar13 < 0) || (*(int *)(lVar3 + 0xa8) <= (int)uVar13)) {
          uVar16 = (uint)uVar11 | 2;
          pFVar9 = ::FString::FString(&local_f0,L"<unknown>");
        }
        else {
          if (((int)uVar13 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar16 = (uint)uVar11 | 1;
          pFVar9 = ::FName::ToString((FName *)(*(longlong *)(lVar3 + 0xa0) +
                                              (longlong)(int)uVar13 * 8),&local_e0);
        }
        uVar11 = (ulonglong)uVar16;
        pFVar4 = (pFVar9->Data).AllocatorInstance.Data;
        (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar9->Data).ArrayNum = 0;
        (pFVar9->Data).ArrayMax = 0;
        if (((uVar16 & 2) != 0) &&
           (uVar11 = (ulonglong)(uVar16 & 0xfffffffd),
           local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        if (((uVar11 & 1) != 0) &&
           (uVar11 = (ulonglong)((uint)uVar11 & 0xfffffffe),
           local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("WriteDescriptorSet.pBufferInfo && WriteDescriptorSet.pBufferInfo->buffer"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                           ,0x117,
                           L"Missing uniform buffer binding for [%s] at index [%d] of shader [%s].")
        ;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_108.sType = VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO;
      local_108._4_8_ = 0;
      local_108.pNext._4_4_ = 0;
      local_108.buffer._0_4_ = (undefined4)**(undefined8 **)(lVar17 + 0x30);
      local_108.buffer._4_4_ = (undefined4)((ulonglong)**(undefined8 **)(lVar17 + 0x30) >> 0x20);
      uVar10 = (*VulkanDynamicAPI::vkGetBufferDeviceAddressKHR)
                         (*(VkDevice_T **)(this->_padding_ + 0x30),&local_108);
      uVar14 = (ulonglong)(uVar13 + 1);
      *(undefined4 *)&FVar6.Data[(longlong)(int)uVar13 * 0x28].field_0x0 = 0x3b9f9c63;
      *(ulong64 *)(FVar6.Data + lVar8 * 0x28 + 0x10) =
           uVar10 + *(longlong *)(*(longlong *)(lVar17 + 0x30) + 8);
      *(undefined8 *)(FVar6.Data + lVar8 * 0x28 + 0x18) =
           *(undefined8 *)(*(longlong *)(lVar17 + 0x30) + 0x10);
    } while (uVar13 + 1 < *(uint *)(lVar12 + 0x178));
  }
  FVulkanBindlessDescriptorManager::RegisterUniformBuffers
            (*(FVulkanBindlessDescriptorManager **)(this->_padding_ + 0x728),param_1,
             VK_PIPELINE_BIND_POINT_COMPUTE,&local_a8);
  puVar15 = local_48;
  lVar12 = 6;
  do {
    puVar1 = puVar15 + -2;
    puVar15 = puVar15 + -2;
    lVar12 = lVar12 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar12 != 0);
  return;
}

