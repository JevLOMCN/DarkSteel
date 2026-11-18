// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 14

// SetUniformBuffer<1> @ 145ad88b0

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
FVulkanCommonPipelineDescriptorState::SetUniformBuffer<1>
          (FVulkanCommonPipelineDescriptorState *this,uchar param_1,uint param_2,
          FVulkanUniformBuffer *param_3)

{
  uint uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  VkBuffer_T *pVVar6;
  uint uVar7;
  
  if (param_3->UniformViewSRV == (FRHIShaderResourceView *)0x0) {
    if ((int)param_3->_padding_ != *(int *)(param_3->_padding_ + 0x8c)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LayoutConstantBufferSize == Layout->ConstantBufferSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0x4de,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar7 = (uint)param_3->_padding_;
  }
  else {
    uVar7 = 0x4000;
  }
  if ((this->DSWriter).ArrayNum <= (int)(uint)param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (this->DSWriter).AllocatorInstance.Data;
  uVar1 = (param_3->Allocation).Offset;
  uVar2 = (param_3->Allocation).HandleId;
  pVVar6 = VulkanRHI::FVulkanAllocation::GetBufferHandle(&param_3->Allocation);
  bVar5 = FVulkanDescriptorSetWriter::WriteBuffer<8>
                    ((FVulkanDescriptorSetWriter *)(pFVar3 + (ulonglong)param_1 * 0x78),param_2,
                     pVVar6,uVar2,0,(ulonglong)uVar7,uVar1);
  this->bIsResourcesDirty = (bool)(this->bIsResourcesDirty | bVar5);
  this->bIsDSetsKeyDirty = (bool)(this->bIsDSetsKeyDirty | bVar5);
  return;
}

// SetUniformBuffer<0> @ 145ad89e0

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
FVulkanCommonPipelineDescriptorState::SetUniformBuffer<0>
          (FVulkanCommonPipelineDescriptorState *this,uchar param_1,uint param_2,
          FVulkanUniformBuffer *param_3)

{
  uint uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  VkBuffer_T *pVVar6;
  uint uVar7;
  
  if (param_3->UniformViewSRV == (FRHIShaderResourceView *)0x0) {
    if ((int)param_3->_padding_ != *(int *)(param_3->_padding_ + 0x8c)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LayoutConstantBufferSize == Layout->ConstantBufferSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0x4de,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar7 = (uint)param_3->_padding_;
  }
  else {
    uVar7 = 0x4000;
  }
  if ((this->DSWriter).ArrayNum <= (int)(uint)param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (this->DSWriter).AllocatorInstance.Data;
  uVar1 = (param_3->Allocation).Offset;
  uVar2 = (param_3->Allocation).HandleId;
  pVVar6 = VulkanRHI::FVulkanAllocation::GetBufferHandle(&param_3->Allocation);
  bVar5 = FVulkanDescriptorSetWriter::WriteBuffer<6>
                    ((FVulkanDescriptorSetWriter *)(pFVar3 + (ulonglong)param_1 * 0x78),param_2,
                     pVVar6,uVar2,(ulonglong)uVar1,(ulonglong)uVar7,0);
  this->bIsResourcesDirty = (bool)(this->bIsResourcesDirty | bVar5);
  this->bIsDSetsKeyDirty = (bool)(this->bIsDSetsKeyDirty | bVar5);
  return;
}

// GetDescriptorType @ 145ae66b0

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

VkDescriptorType __thiscall
FVulkanCommonPipelineDescriptorState::GetDescriptorType
          (FVulkanCommonPipelineDescriptorState *this,uchar param_1,uint param_2)

{
  FVulkanDescriptorSetsLayout *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  VkDescriptorType VVar5;
  uint uVar6;
  
  pFVar1 = this->DescriptorSetsLayout;
  if ((int)pFVar1->_padding_ <= (int)(uint)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      VVar5 = (*pcVar3)();
      return VVar5;
    }
  }
  lVar2 = pFVar1->_padding_;
  uVar6 = 0;
  if ((int)param_2 < *(int *)(lVar2 + 8 + (ulonglong)param_1 * 0x18)) {
    uVar6 = ~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      VVar5 = (*pcVar3)();
      return VVar5;
    }
  }
  return *(VkDescriptorType *)
          (*(longlong *)(lVar2 + (ulonglong)param_1 * 0x18) + 4 + (longlong)(int)param_2 * 0x18);
}

// SetSamplerState @ 145af45e0

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
FVulkanCommonPipelineDescriptorState::SetSamplerState
          (FVulkanCommonPipelineDescriptorState *this,uchar param_1,uint param_2,
          FVulkanSamplerState *param_3)

{
  uint *puVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  
  if (this->bUseBindless != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bUseBindless",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.h"
                       ,0x56,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((param_3 == (FVulkanSamplerState *)0x0) || (param_3->Sampler == (VkSampler_T *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sampler && Sampler->Sampler != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.h"
                       ,0x57,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->DSWriter).ArrayNum <= (int)(uint)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar5 = (this->DSWriter).AllocatorInstance.Data + (ulonglong)param_1 * 0x78;
  if (*(uint *)(pFVar5 + 0x18) <= param_2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DescriptorIndex < NumWrites",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                       ,0x222,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar6 = (ulonglong)param_2 * 0x40;
  if (1 < *(uint *)(lVar6 + 0x24 + *(longlong *)pFVar5)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("WriteDescriptors[DescriptorIndex].descriptorType == VK_DESCRIPTOR_TYPE_SAMPLER || WriteDescriptors[DescriptorIndex].descriptorType == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                       ,0x223,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  plVar2 = *(longlong **)(lVar6 + 0x28 + *(longlong *)pFVar5);
  if (plVar2 == (longlong *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ImageInfo",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                       ,0x225,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((int)GMaxRHIFeatureLevel < 2) {
    puVar1 = (uint *)(*(longlong *)(pFVar5 + 0x20) + (ulonglong)param_2 * 0xc);
    if (param_3->SamplerId == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sampler.SamplerId > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                         ,0x22b,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    bVar4 = *puVar1 != param_3->SamplerId;
    if (bVar4) {
      *puVar1 = param_3->SamplerId;
      *plVar2 = (longlong)param_3->Sampler;
    }
    pFVar5[0x40] = (FScriptContainerElement)((byte)pFVar5[0x40] | bVar4);
  }
  else {
    bVar4 = (VkSampler_T *)*plVar2 != param_3->Sampler;
    *plVar2 = (longlong)param_3->Sampler;
  }
  this->bIsResourcesDirty = (bool)(this->bIsResourcesDirty | bVar4);
  this->bIsDSetsKeyDirty = (bool)(this->bIsDSetsKeyDirty | bVar4);
  return;
}

// SetTexture @ 145af48b0

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
FVulkanCommonPipelineDescriptorState::SetTexture
          (FVulkanCommonPipelineDescriptorState *this,uchar param_1,uint param_2,
          FVulkanTexture *param_3,VkImageLayout param_4)

{
  FVulkanView *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  
  if (this->bUseBindless != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bUseBindless",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.h"
                       ,0x46,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((param_3 == (FVulkanTexture *)0x0) || (param_3->PartialView == (FVulkanView *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Texture && Texture->PartialView",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.h"
                       ,0x47,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar5 = (**(code **)(param_3->_padding_ + 0x20))(param_3);
  if (((GPixelFormats[*(byte *)(lVar5 + 0x33)].Capabilities & TextureSample) == None) ||
     ((param_3->ImageUsageFlags & 4) == 0)) {
    if ((this->DSWriter).ArrayNum <= (int)(uint)param_1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = param_3->PartialView;
    pFVar2 = (this->DSWriter).AllocatorInstance.Data;
    if ((pFVar1->Storage).TypeIndex != '\x02') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    bVar4 = FVulkanDescriptorSetWriter::WriteTextureView<3>
                      ((FVulkanDescriptorSetWriter *)(pFVar2 + (ulonglong)param_1 * 0x78),param_2,
                       (FTextureView *)&pFVar1->Storage,param_4);
  }
  else {
    if ((this->DSWriter).ArrayNum <= (int)(uint)param_1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = param_3->PartialView;
    pFVar2 = (this->DSWriter).AllocatorInstance.Data;
    if ((pFVar1->Storage).TypeIndex != '\x02') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    bVar4 = FVulkanDescriptorSetWriter::WriteTextureView<2>
                      ((FVulkanDescriptorSetWriter *)(pFVar2 + (ulonglong)param_1 * 0x78),param_2,
                       (FTextureView *)&pFVar1->Storage,param_4);
  }
  this->bIsResourcesDirty = (bool)(this->bIsResourcesDirty | bVar4);
  this->bIsDSetsKeyDirty = (bool)(this->bIsDSetsKeyDirty | bVar4);
  return;
}

// ~FVulkanCommonPipelineDescriptorState @ 145b4cd80

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
FVulkanCommonPipelineDescriptorState::~FVulkanCommonPipelineDescriptorState
          (FVulkanCommonPipelineDescriptorState *this)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FVulkanCommonPipelineDescriptorState__6B_;
  puVar1 = *(undefined8 **)&(this->DSetsKey).field_0x10;
  if (puVar1 != (undefined8 *)0x0) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    ::operator_delete(puVar1,0x10);
  }
  DestructItems<FVulkanDescriptorSetWriter,int>
            ((FVulkanDescriptorSetWriter *)(this->DSWriter).AllocatorInstance.Data,
             (this->DSWriter).ArrayNum);
  pFVar2 = (this->DSWriter).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DynamicOffsets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DescriptorSetHandles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FVulkanDescriptorSetWriteContainer::~FVulkanDescriptorSetWriteContainer(&this->DSWriteContainer);
  return;
}

// Bind @ 145b57740

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
/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */

void __thiscall
FVulkanCommonPipelineDescriptorState::Bind
          (FVulkanCommonPipelineDescriptorState *this,VkCommandBuffer_T *param_1,
          VkPipelineLayout_T *param_2,VkPipelineBindPoint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineBindPoint_VkPipelineLayout_T_ptr_uint_uint_VkDescriptorSet_T_ptr_ptr_uint_uint_ptr
  *p_Var6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  
  if (this->bUseBindless == false) {
    uVar2 = this->UsedSetsMask;
    if (uVar2 != 0) {
      uVar8 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
      uVar9 = 0x20;
      if (uVar2 != 0) {
        uVar9 = uVar8;
      }
      uVar1 = (ulonglong)uVar2 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      if ((uint)(this->DescriptorSetHandles).ArrayNum < (uint)lVar4) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("FirstSet + NumSets <= (uint32)DescriptorSetHandles.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.h"
                           ,0x8c,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      p_Var6 = VulkanDynamicAPI::vkCmdBindDescriptorSets;
      uVar2 = (this->DynamicOffsets).ArrayNum;
      pFVar3 = (this->DynamicOffsets).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar9 < (this->DescriptorSetHandles).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      (*p_Var6)(param_1,param_3,param_2,uVar9,(uint)lVar4 - uVar9,
                (VkDescriptorSet_T **)
                ((this->DescriptorSetHandles).AllocatorInstance.Data + (longlong)(int)uVar9 * 8),
                uVar2,(uint *)pFVar3);
    }
  }
  return;
}

// CreateDescriptorWriteInfos @ 145b60580

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
FVulkanCommonPipelineDescriptorState::CreateDescriptorWriteInfos
          (FVulkanCommonPipelineDescriptorState *this)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  ushort uVar3;
  FVulkanDescriptorSetsLayout *pFVar4;
  FVulkanSamplerState *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  TArray<VkDescriptorType,TSizedDefaultAllocator<32>_> *pTVar14;
  uint uVar15;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar16;
  int iVar17;
  FVulkanHashableDescriptorInfo *pFVar18;
  uint *puVar19;
  longlong lVar20;
  VkWriteDescriptorSet *local_res10;
  VkDescriptorImageInfo *local_res18;
  VkDescriptorBufferInfo *local_res20;
  VkWriteDescriptorSetAccelerationStructureKHR *local_88;
  FScriptContainerElement *local_80;
  FScriptContainerElement *local_78;
  ForAnyElementType local_58;
  int local_50 [4];
  
  if (((this->DSWriteContainer).DescriptorWrites.ArrayNum != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("DSWriteContainer.DescriptorWrites.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                         ,0x47,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((1 << ((byte)this->MaxNumSets & 0x1f)) - 1U < this->UsedSetsMask) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("UsedSetsMask <= (uint32)(((uint32)1 << MaxNumSets) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                         ,0x48,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar13 = 0;
  if (this->MaxNumSets != 0) {
    do {
      pFVar4 = this->DescriptorSetsLayout;
      iVar17 = (int)(&pFVar4->_padding_)[(ulonglong)uVar13 * 4];
      if (iVar17 != 0) {
        if ((int)GMaxRHIFeatureLevel < 2) {
          iVar17 = iVar17 + 1;
          iVar9 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,iVar17,(ForAnyElementType *)&this->DSWriteContainer,
                             &(this->DSWriteContainer).HashableDescriptorInfo.ArrayNum,
                             &(this->DSWriteContainer).HashableDescriptorInfo.ArrayMax);
          memset((this->DSWriteContainer).HashableDescriptorInfo.AllocatorInstance.Data +
                 (longlong)iVar9 * 0xc,0,(longlong)iVar17 * 0xc);
        }
        iVar17 = (int)(&pFVar4->_padding_)[(ulonglong)uVar13 * 4];
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40,8,iVar17,
                           &(this->DSWriteContainer).DescriptorWrites.AllocatorInstance,
                           &(this->DSWriteContainer).DescriptorWrites.ArrayNum,
                           &(this->DSWriteContainer).DescriptorWrites.ArrayMax);
        memset((this->DSWriteContainer).DescriptorWrites.AllocatorInstance.Data +
               (longlong)iVar9 * 0x40,0,(longlong)iVar17 << 6);
        uVar3 = (ushort)(&pFVar4->_padding_)[(ulonglong)uVar13 * 4];
        iVar17 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x18,8,(uint)uVar3,
                            &(this->DSWriteContainer).DescriptorImageInfo.AllocatorInstance,
                            &(this->DSWriteContainer).DescriptorImageInfo.ArrayNum,
                            &(this->DSWriteContainer).DescriptorImageInfo.ArrayMax);
        memset((this->DSWriteContainer).DescriptorImageInfo.AllocatorInstance.Data +
               (longlong)iVar17 * 0x18,0,(ulonglong)uVar3 * 0x18);
        uVar3 = *(ushort *)((longlong)&pFVar4->_padding_ + (ulonglong)uVar13 * 0x20 + 2);
        iVar17 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x18,8,(uint)uVar3,
                            &(this->DSWriteContainer).DescriptorBufferInfo.AllocatorInstance,
                            &(this->DSWriteContainer).DescriptorBufferInfo.ArrayNum,
                            &(this->DSWriteContainer).DescriptorBufferInfo.ArrayMax);
        memset((this->DSWriteContainer).DescriptorBufferInfo.AllocatorInstance.Data +
               (longlong)iVar17 * 0x18,0,(ulonglong)uVar3 * 0x18);
        uVar10 = (uint)*(ushort *)((longlong)&pFVar4->_padding_ + (ulonglong)uVar13 * 0x20 + 4);
        iVar17 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x20,8,uVar10,
                            &(this->DSWriteContainer).AccelerationStructureWrites.AllocatorInstance,
                            &(this->DSWriteContainer).AccelerationStructureWrites.ArrayNum,
                            &(this->DSWriteContainer).AccelerationStructureWrites.ArrayMax);
        memset((this->DSWriteContainer).AccelerationStructureWrites.AllocatorInstance.Data +
               (longlong)iVar17 * 0x20,0,(ulonglong)uVar10 << 5);
        uVar10 = (uint)*(ushort *)((longlong)&pFVar4->_padding_ + (ulonglong)uVar13 * 0x20 + 4);
        iVar17 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,uVar10,
                            &(this->DSWriteContainer).AccelerationStructures.AllocatorInstance,
                            &(this->DSWriteContainer).AccelerationStructures.ArrayNum,
                            &(this->DSWriteContainer).AccelerationStructures.ArrayMax);
        memset((this->DSWriteContainer).AccelerationStructures.AllocatorInstance.Data +
               (longlong)iVar17 * 8,0,(ulonglong)uVar10 << 3);
        if ((0xfe < (int)(&pFVar4->_padding_)[(ulonglong)uVar13 * 4]) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("StageInfo.Types.Num() < 255",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                               ,0x5c,
                               L"Need more bits for BindingToDynamicOffsetMap (currently 8)! Requires %d descriptor bindings in a set!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,(int)(&pFVar4->_padding_)[(ulonglong)uVar13 * 4],
                   &(this->DSWriteContainer).BindingToDynamicOffsetMap.AllocatorInstance,
                   &(this->DSWriteContainer).BindingToDynamicOffsetMap.ArrayNum,
                   &(this->DSWriteContainer).BindingToDynamicOffsetMap.ArrayMax);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < this->MaxNumSets);
  }
  puVar19 = &this->MaxNumSets;
  pTVar16 = &(this->DSWriteContainer).BindingToDynamicOffsetMap;
  memset((pTVar16->AllocatorInstance).Data,0xff,
         (longlong)(this->DSWriteContainer).BindingToDynamicOffsetMap.ArrayNum);
  piVar1 = &(this->DSWriter).ArrayNum;
  if ((*piVar1 != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("DSWriter.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                         ,0x62,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar13 = this->MaxNumSets;
  iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x78,8,uVar13,&(this->DSWriter).AllocatorInstance,piVar1,
                      &(this->DSWriter).ArrayMax);
  DefaultConstructItems<FVulkanDescriptorSetWriter,int>
            ((this->DSWriter).AllocatorInstance.Data + (longlong)iVar17 * 0x78,uVar13);
  pFVar5 = (this->Device->GlobalSamplers).Elements[1];
  lVar11 = (**(code **)(((GBlackTexture->TextureRHI).Reference)->_padding_ + 0x48))();
  lVar11 = *(longlong *)(lVar11 + 0x150);
  if ((*(char *)(lVar11 + 0x30) != '\x02') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar18 = (FVulkanHashableDescriptorInfo *)0x0;
  if ((int)GMaxRHIFeatureLevel < 2) {
    pFVar18 = (FVulkanHashableDescriptorInfo *)
              (this->DSWriteContainer).HashableDescriptorInfo.AllocatorInstance.Data;
  }
  local_res10 = (VkWriteDescriptorSet *)
                (this->DSWriteContainer).DescriptorWrites.AllocatorInstance.Data;
  uVar13 = *puVar19;
  local_res18 = (VkDescriptorImageInfo *)
                (this->DSWriteContainer).DescriptorImageInfo.AllocatorInstance.Data;
  local_res20 = (VkDescriptorBufferInfo *)
                (this->DSWriteContainer).DescriptorBufferInfo.AllocatorInstance.Data;
  local_88 = (VkWriteDescriptorSetAccelerationStructureKHR *)
             (this->DSWriteContainer).AccelerationStructureWrites.AllocatorInstance.Data;
  local_80 = (this->DSWriteContainer).AccelerationStructures.AllocatorInstance.Data;
  local_78 = (pTVar16->AllocatorInstance).Data;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50[0] = 0;
  local_50[1] = 0;
  iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,uVar13,&local_58,local_50,local_50 + 1);
  memset(local_58.Data + (longlong)iVar17 * 4,0,(longlong)(int)uVar13 << 2);
  iVar17 = 0;
  uVar13 = 0;
  if (*puVar19 != 0) {
    do {
      pTVar14 = (TArray<VkDescriptorType,TSizedDefaultAllocator<32>_> *)
                (&this->DescriptorSetsLayout->_padding_ + (ulonglong)uVar13 * 4);
      if (pTVar14->ArrayNum != 0) {
        uVar15 = ~uVar13 >> 0x1f;
        uVar10 = 0;
        if ((int)uVar13 < local_50[0]) {
          uVar10 = uVar15;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar20 = (longlong)(int)uVar13;
        *(int *)(local_58.Data + lVar20 * 4) = iVar17;
        uVar10 = 0;
        if ((int)uVar13 < (this->DSWriter).ArrayNum) {
          uVar10 = uVar15;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar10 = FVulkanDescriptorSetWriter::SetupDescriptorWrites
                           ((FVulkanDescriptorSetWriter *)
                            ((this->DSWriter).AllocatorInstance.Data + lVar20 * 0x78),pTVar14,
                            pFVar18,local_res10,local_res18,local_res20,(uchar *)local_78,local_88,
                            (VkAccelerationStructureKHR_T **)local_80,pFVar5,
                            (FTextureView *)(lVar11 + 0x18));
        iVar17 = iVar17 + uVar10;
        if (pFVar18 != (FVulkanHashableDescriptorInfo *)0x0) {
          pFVar18 = pFVar18 + pTVar14->ArrayNum;
          *(undefined8 *)pFVar18 = 0xffffffffffffffff;
          pFVar4 = this->DescriptorSetsLayout;
          uVar10 = 0;
          if ((int)uVar13 < (pFVar4->LayoutHandleIds).ArrayNum) {
            uVar10 = uVar15;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (pFVar18->Layout).LayoutId =
               *(uint *)((pFVar4->LayoutHandleIds).AllocatorInstance.Data + lVar20 * 4);
          pFVar18 = pFVar18 + 1;
        }
        local_res10 = local_res10 + pTVar14->ArrayNum;
        local_res18 = local_res18 + (ushort)pTVar14[1].ArrayNum;
        local_res20 = local_res20 + *(ushort *)((longlong)&pTVar14[1].ArrayNum + 2);
        uVar12 = (ulonglong)(ushort)pTVar14[1].ArrayMax;
        local_88 = local_88 + uVar12;
        local_78 = local_78 + pTVar14->ArrayNum;
        local_80 = local_80 + uVar12 * 8;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *puVar19);
  }
  pTVar2 = &this->DynamicOffsets;
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar17,&pTVar2->AllocatorInstance,&(this->DynamicOffsets).ArrayNum,
                     &(this->DynamicOffsets).ArrayMax);
  memset((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 4,0,(longlong)iVar17 << 2);
  uVar10 = 0;
  uVar13 = 0;
  if (this->MaxNumSets != 0) {
    do {
      uVar13 = 0;
      if ((int)uVar10 < local_50[0]) {
        uVar13 = ~uVar10 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar11 = (longlong)(int)uVar10;
      uVar13 = *(uint *)(local_58.Data + lVar11 * 4);
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      uVar15 = 0;
      if ((int)uVar10 < (this->DSWriter).ArrayNum) {
        uVar15 = ~uVar10 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar10 = uVar10 + 1;
      *(FScriptContainerElement **)((this->DSWriter).AllocatorInstance.Data + lVar11 * 0x78 + 0x10)
           = pFVar6 + (ulonglong)uVar13 * 4;
      uVar13 = this->MaxNumSets;
    } while (uVar10 < uVar13);
  }
  iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,8,uVar13,&(this->DescriptorSetHandles).AllocatorInstance,
                      &(this->DescriptorSetHandles).ArrayNum,&(this->DescriptorSetHandles).ArrayMax)
  ;
  memset((this->DescriptorSetHandles).AllocatorInstance.Data + (longlong)iVar17 * 8,0,
         (longlong)(int)uVar13 << 3);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// GetDSetsKey @ 145b69220

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

FVulkanDSetsKey * __thiscall
FVulkanCommonPipelineDescriptorState::GetDSetsKey(FVulkanCommonPipelineDescriptorState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FVulkanDSetsKey *pFVar4;
  uint uVar5;
  
  if (1 < (int)GMaxRHIFeatureLevel) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UseVulkanDescriptorCache()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.h"
                       ,0x25,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FVulkanDSetsKey *)(*pcVar2)();
      return pFVar4;
    }
  }
  if (this->bIsDSetsKeyDirty != false) {
    pFVar1 = (this->DSWriteContainer).HashableDescriptorInfo.AllocatorInstance.Data;
    uVar5 = (this->DSWriteContainer).HashableDescriptorInfo.ArrayNum * 0xc;
    TDataKeyBase<1>::SetData((TDataKeyBase<1> *)&this->DSetsKey,pFVar1,uVar5);
    uVar5 = (*FCrc::MemCrc32Func)(pFVar1,uVar5,0);
    *(uint *)&this->DSetsKey = uVar5;
    this->bIsDSetsKeyDirty = false;
  }
  return &this->DSetsKey;
}

// HasVolatileResources @ 145b6b7f0

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

bool __thiscall
FVulkanCommonPipelineDescriptorState::HasVolatileResources
          (FVulkanCommonPipelineDescriptorState *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->DSWriter).ArrayNum;
  pFVar2 = (this->DSWriter).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((this->DSWriter).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FVulkanDescriptorSetWriter_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2[0x41] != (FScriptContainerElement)0x0) {
      return true;
    }
    pFVar2 = pFVar2 + 0x78;
  }
  return false;
}

// Reset @ 145b79a00

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
FVulkanCommonPipelineDescriptorState::Reset(FVulkanCommonPipelineDescriptorState *this)

{
  int iVar1;
  FVulkanDescriptorSetWriter *this_00;
  FVulkanDescriptorSetWriter *pFVar2;
  undefined1 local_res8 [8];
  
  iVar1 = (this->DSWriter).ArrayNum;
  this_00 = (FVulkanDescriptorSetWriter *)(this->DSWriter).AllocatorInstance.Data;
  pFVar2 = this_00 + iVar1;
  while( true ) {
    if ((this->DSWriter).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FVulkanDescriptorSetWriter,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar2) break;
    FVulkanDescriptorSetWriter::Reset(this_00);
    this_00 = this_00 + 1;
  }
  return;
}

// SetInputAttachment @ 145b7b6b0

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
FVulkanCommonPipelineDescriptorState::SetInputAttachment
          (FVulkanCommonPipelineDescriptorState *this,uchar param_1,uint param_2,
          FTextureView *param_3,VkImageLayout param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bUseBindless != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bUseBindless",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.h"
                       ,0x5d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->DSWriter).ArrayNum <= (int)(uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FVulkanDescriptorSetWriter::WriteTextureView<10>
                    ((FVulkanDescriptorSetWriter *)
                     ((this->DSWriter).AllocatorInstance.Data + (ulonglong)param_1 * 0x78),param_2,
                     param_3,param_4);
  this->bIsResourcesDirty = (bool)(this->bIsResourcesDirty | bVar2);
  this->bIsDSetsKeyDirty = (bool)(this->bIsDSetsKeyDirty | bVar2);
  return;
}

// SetSRV @ 145b7c4c0

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
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FVulkanCommonPipelineDescriptorState::SetSRV
          (FVulkanCommonPipelineDescriptorState *this,bool param_1,uchar param_2,uint param_3,
          FVulkanShaderResourceView *param_4)

{
  char cVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  VkImageLayout VVar6;
  FRHIBuffer *pFVar7;
  FRHITexture *pFVar8;
  FVulkanTexture *pFVar9;
  ERHIAccess EVar10;
  uint uVar11;
  
  uVar4 = (ulonglong)param_2;
  if (this->bUseBindless != false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bUseBindless",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                       ,0x273,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  cVar1 = param_4->field_0x68;
  if (cVar1 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                       ,0x278,L"Attempt to bind a null SRV.");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    uVar11 = (uint)param_2;
    if (cVar1 == '\x01') {
      if ((this->DSWriter).ArrayNum <= (int)uVar11) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (this->DSWriter).AllocatorInstance.Data;
      if (param_4->field_0x68 != '\x01') {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      bVar5 = FVulkanDescriptorSetWriter::WriteBufferView<4>
                        ((FVulkanDescriptorSetWriter *)(pFVar2 + uVar4 * 0x78),param_3,
                         (FTypedBufferView *)&param_4->field_0x50);
      this->bIsResourcesDirty = (bool)(this->bIsResourcesDirty | bVar5);
      this->bIsDSetsKeyDirty = (bool)(this->bIsDSetsKeyDirty | bVar5);
    }
    else if (cVar1 == '\x02') {
      pFVar8 = FRHIView::GetTexture((FRHIView *)param_4);
      pFVar9 = (FVulkanTexture *)(**(code **)(pFVar8->_padding_ + 0x48))(pFVar8);
      EVar10 = SRVGraphics;
      if (param_1) {
        EVar10 = SRVCompute;
      }
      VVar6 = FVulkanPipelineBarrier::GetDefaultLayout(pFVar9,EVar10);
      if ((this->DSWriter).ArrayNum <= (int)uVar11) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (this->DSWriter).AllocatorInstance.Data;
      if (param_4->field_0x68 != '\x02') {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      bVar5 = FVulkanDescriptorSetWriter::WriteTextureView<2>
                        ((FVulkanDescriptorSetWriter *)(pFVar2 + uVar4 * 0x78),param_3,
                         (FTextureView *)&param_4->field_0x50,VVar6);
      this->bIsResourcesDirty = (bool)(this->bIsResourcesDirty | bVar5);
      this->bIsDSetsKeyDirty = (bool)(this->bIsDSetsKeyDirty | bVar5);
    }
    else if (cVar1 == '\x03') {
      pFVar7 = FRHIView::GetBuffer((FRHIView *)param_4);
      if ((pFVar7[1]._padding_ & 0x20) == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ResourceCast(SRV->GetBuffer())->GetBufferUsageFlags() & VK_BUFFER_USAGE_STORAGE_BUFFER_BIT) == VK_BUFFER_USAGE_STORAGE_BUFFER_BIT"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                           ,0x289,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((this->DSWriter).ArrayNum <= (int)uVar11) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (this->DSWriter).AllocatorInstance.Data;
      if (param_4->field_0x68 != '\x03') {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      bVar5 = FVulkanDescriptorSetWriter::WriteBuffer<7>
                        ((FVulkanDescriptorSetWriter *)(pFVar2 + uVar4 * 0x78),param_3,
                         *(VkBuffer_T **)&param_4->field_0x50,*(uint *)&param_4->field_0x58,
                         (ulonglong)*(uint *)&param_4->field_0x5c,
                         (ulonglong)*(uint *)&param_4->field_0x60,0);
      this->bIsResourcesDirty = (bool)(this->bIsResourcesDirty | bVar5);
      this->bIsDSetsKeyDirty = (bool)(this->bIsDSetsKeyDirty | bVar5);
    }
    else if (cVar1 == '\x04') {
      if ((this->DSWriter).ArrayNum <= (int)uVar11) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (this->DSWriter).AllocatorInstance.Data;
      if (param_4->field_0x68 != '\x04') {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      bVar5 = FVulkanDescriptorSetWriter::WriteAccelerationStructure
                        ((FVulkanDescriptorSetWriter *)(pFVar2 + uVar4 * 0x78),param_3,
                         *(VkAccelerationStructureKHR_T **)&param_4->field_0x50);
      this->bIsResourcesDirty = (bool)(this->bIsResourcesDirty | bVar5);
      this->bIsDSetsKeyDirty = (bool)(this->bIsDSetsKeyDirty | bVar5);
    }
  }
  return;
}

// SetUAV @ 145b7cca0

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
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FVulkanCommonPipelineDescriptorState::SetUAV
          (FVulkanCommonPipelineDescriptorState *this,bool param_1,uchar param_2,uint param_3,
          FVulkanUnorderedAccessView *param_4)

{
  char cVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  VkImageLayout VVar6;
  FRHIBuffer *pFVar7;
  FRHITexture *pFVar8;
  FVulkanTexture *pFVar9;
  uint uVar10;
  
  uVar4 = (ulonglong)param_2;
  if (this->bUseBindless != false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bUseBindless",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                       ,0x295,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  cVar1 = param_4->field_0x68;
  if (cVar1 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                       ,0x29a,L"Attempt to bind a null UAV.");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    uVar10 = (uint)param_2;
    if (cVar1 == '\x01') {
      if ((this->DSWriter).ArrayNum <= (int)uVar10) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (this->DSWriter).AllocatorInstance.Data;
      if (param_4->field_0x68 != '\x01') {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      bVar5 = FVulkanDescriptorSetWriter::WriteBufferView<5>
                        ((FVulkanDescriptorSetWriter *)(pFVar2 + uVar4 * 0x78),param_3,
                         (FTypedBufferView *)&param_4->field_0x50);
      this->bIsResourcesDirty = (bool)(this->bIsResourcesDirty | bVar5);
      this->bIsDSetsKeyDirty = (bool)(this->bIsDSetsKeyDirty | bVar5);
    }
    else if (cVar1 == '\x02') {
      pFVar8 = FRHIView::GetTexture((FRHIView *)param_4);
      pFVar9 = (FVulkanTexture *)(**(code **)(pFVar8->_padding_ + 0x48))(pFVar8);
      VVar6 = FVulkanPipelineBarrier::GetDefaultLayout(pFVar9,((param_1 ^ 1) + 1) * 0x400);
      if ((this->DSWriter).ArrayNum <= (int)uVar10) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (this->DSWriter).AllocatorInstance.Data;
      if (param_4->field_0x68 != '\x02') {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      bVar5 = FVulkanDescriptorSetWriter::WriteTextureView<3>
                        ((FVulkanDescriptorSetWriter *)(pFVar2 + uVar4 * 0x78),param_3,
                         (FTextureView *)&param_4->field_0x50,VVar6);
      this->bIsResourcesDirty = (bool)(this->bIsResourcesDirty | bVar5);
      this->bIsDSetsKeyDirty = (bool)(this->bIsDSetsKeyDirty | bVar5);
    }
    else if (cVar1 == '\x03') {
      pFVar7 = FRHIView::GetBuffer((FRHIView *)param_4);
      if ((pFVar7[1]._padding_ & 0x20) == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ResourceCast(UAV->GetBuffer())->GetBufferUsageFlags() & VK_BUFFER_USAGE_STORAGE_BUFFER_BIT) == VK_BUFFER_USAGE_STORAGE_BUFFER_BIT"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                           ,0x2ab,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((this->DSWriter).ArrayNum <= (int)uVar10) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (this->DSWriter).AllocatorInstance.Data;
      if (param_4->field_0x68 != '\x03') {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      bVar5 = FVulkanDescriptorSetWriter::WriteBuffer<7>
                        ((FVulkanDescriptorSetWriter *)(pFVar2 + uVar4 * 0x78),param_3,
                         *(VkBuffer_T **)&param_4->field_0x50,*(uint *)&param_4->field_0x58,
                         (ulonglong)*(uint *)&param_4->field_0x5c,
                         (ulonglong)*(uint *)&param_4->field_0x60,0);
      this->bIsResourcesDirty = (bool)(this->bIsResourcesDirty | bVar5);
      this->bIsDSetsKeyDirty = (bool)(this->bIsDSetsKeyDirty | bVar5);
    }
    else if (cVar1 == '\x04') {
      if ((this->DSWriter).ArrayNum <= (int)uVar10) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (this->DSWriter).AllocatorInstance.Data;
      if (param_4->field_0x68 != '\x04') {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      bVar5 = FVulkanDescriptorSetWriter::WriteAccelerationStructure
                        ((FVulkanDescriptorSetWriter *)(pFVar2 + uVar4 * 0x78),param_3,
                         *(VkAccelerationStructureKHR_T **)&param_4->field_0x50);
      this->bIsResourcesDirty = (bool)(this->bIsResourcesDirty | bVar5);
      this->bIsDSetsKeyDirty = (bool)(this->bIsDSetsKeyDirty | bVar5);
    }
  }
  return;
}

