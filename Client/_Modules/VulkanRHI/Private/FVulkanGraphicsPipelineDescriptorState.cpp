// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 5

// InternalUpdateDescriptorSets<1> @ 145b3e620

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

bool __thiscall
FVulkanGraphicsPipelineDescriptorState::InternalUpdateDescriptorSets<1>
          (FVulkanGraphicsPipelineDescriptorState *this,FVulkanCommandListContext *param_1)

{
  longlong lVar1;
  VkDescriptorSet_T **ppVVar2;
  FVulkanDescriptorSetsLayout *pFVar3;
  FVulkanDescriptorSetCache *this_00;
  undefined8 uVar4;
  code *pcVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uchar *_Dst;
  VkBuffer_T *pVVar10;
  FVulkanDSetsKey *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  TStaticArray<FPackedUniformBuffers,5,4294967295> *pTVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  TStaticArray<unsigned_int,5,4294967295> *pTVar20;
  longlong local_res8;
  FVulkanAllocation local_58;
  
  if ((int)this->_padding_ == 0) {
    return false;
  }
  pTVar15 = &this->PackedUniformBuffers;
  iVar17 = 0;
  local_res8 = 0;
  pTVar20 = &this->PackedUniformBuffersDirty;
  do {
    if (pTVar20->Elements[0] != 0) {
      uVar19 = pTVar15->Elements[0].PackedUniformBuffers.ArrayNum;
      uVar14 = *(uint *)(param_1->_padding_ + 0xdc0);
      VulkanRHI::FVulkanAllocation::FVulkanAllocation(&local_58);
      _Dst = VulkanRHI::FTempBlockAllocator::Alloc
                       (*(FTempBlockAllocator **)(param_1->_padding_ + 0x700),uVar19,uVar14,
                        (FVulkanContextCommon *)param_1,&local_58,(VkDescriptorAddressInfoEXT *)0x0)
      ;
      memcpy(_Dst,pTVar15->Elements[0].PackedUniformBuffers.AllocatorInstance.Data,(ulonglong)uVar19
            );
      if (((int)this->_padding_ <= iVar17) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      uVar14 = local_58.Offset;
      uVar19 = local_58.HandleId;
      lVar1 = this->_padding_;
      uVar13 = (ulonglong)local_58.Size;
      pVVar10 = VulkanRHI::FVulkanAllocation::GetBufferHandle(&local_58);
      bVar7 = FVulkanDescriptorSetWriter::WriteBuffer<8>
                        ((FVulkanDescriptorSetWriter *)(lVar1 + local_res8),0,pVVar10,uVar19,0,
                         uVar13,uVar14);
      *(byte *)&this->_padding_ = (byte)this->_padding_ | bVar7;
      *(byte *)&this->_padding_ = (byte)this->_padding_ | bVar7;
      VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&local_58);
      pTVar20->Elements[0] = 0;
    }
    uVar13 = 0;
    local_res8 = local_res8 + 0x78;
    pTVar15 = (TStaticArray<FPackedUniformBuffers,5,4294967295> *)(pTVar15->Elements + 1);
    iVar17 = iVar17 + 1;
    pTVar20 = (TStaticArray<unsigned_int,5,4294967295> *)(pTVar20->Elements + 1);
  } while (iVar17 < 5);
  if (((int)GMaxRHIFeatureLevel < 2) &&
     (bVar7 = FVulkanCommonPipelineDescriptorState::HasVolatileResources
                        ((FVulkanCommonPipelineDescriptorState *)this), !bVar7)) {
    if ((char)this->_padding_ == '\0') {
      return true;
    }
    ppVVar2 = (VkDescriptorSet_T **)this->_padding_;
    pFVar3 = (FVulkanDescriptorSetsLayout *)this->_padding_;
    this_00 = *(FVulkanDescriptorSetCache **)(this->_padding_ + 0x718);
    pFVar11 = FVulkanCommonPipelineDescriptorState::GetDSetsKey
                        ((FVulkanCommonPipelineDescriptorState *)this);
    FVulkanDescriptorSetCache::GetDescriptorSets
              (this_00,pFVar11,pFVar3,
               (TArray<FVulkanDescriptorSetWriter,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               ppVVar2);
    goto LAB_145b3ea04;
  }
  pTVar6 = GAlwaysWriteDS.Ref;
  if ((char)this->_padding_ == '\0') {
    bVar7 = IsInParallelGameThread();
    if (bVar7) {
LAB_145b3e86d:
      uVar12 = uVar13;
    }
    else {
      bVar7 = IsInGameThread();
      uVar12 = 4;
      if (bVar7) goto LAB_145b3e86d;
    }
    if (*(int *)((longlong)pTVar6->ShadowedValue + uVar12) != 0) goto LAB_145b3e87b;
    bVar7 = false;
  }
  else {
LAB_145b3e87b:
    bVar7 = true;
  }
  bVar7 = FVulkanCommandListContext::AcquirePoolSetAndDescriptorsIfNeeded
                    (param_1,(FVulkanDescriptorSetsLayout *)this->_padding_,bVar7,
                     (VkDescriptorSet_T **)this->_padding_);
  if (!bVar7) {
    return true;
  }
  for (uVar19 = (uint)this->_padding_; uVar19 != 0; uVar19 = uVar19 >> 1) {
    uVar14 = (uint)uVar13;
    if ((uVar19 & 1) != 0) {
      uVar16 = ~uVar14 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar14 < (int)this->_padding_) {
        uVar9 = uVar16;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      uVar4 = *(undefined8 *)(this->_padding_ + (longlong)(int)uVar14 * 8);
      uVar9 = 0;
      if ((int)uVar14 < (int)this->_padding_) {
        uVar9 = uVar16;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      lVar1 = this->_padding_;
      uVar9 = 0;
      lVar18 = (longlong)(int)uVar14 * 0x78;
      if (*(int *)(lVar1 + 0x18 + lVar18) != 0) {
        do {
          uVar13 = (ulonglong)uVar9;
          uVar9 = uVar9 + 1;
          *(undefined8 *)(uVar13 * 0x40 + 0x10 + *(longlong *)(lVar1 + lVar18)) = uVar4;
        } while (uVar9 < *(uint *)(lVar1 + 0x18 + lVar18));
      }
      uVar9 = 0;
      if ((int)uVar14 < (int)this->_padding_) {
        uVar9 = uVar16;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      FVulkanDescriptorSetWriter::CheckAllWritten
                ((FVulkanDescriptorSetWriter *)(this->_padding_ + lVar18));
    }
    uVar13 = (ulonglong)(uVar14 + 1);
  }
  (*VulkanDynamicAPI::vkUpdateDescriptorSets)
            (*(VkDevice_T **)(this->_padding_ + 0x30),(uint)this->_padding_,
             (VkWriteDescriptorSet *)this->_padding_,0,(VkCopyDescriptorSet *)0x0);
LAB_145b3ea04:
  *(undefined1 *)&this->_padding_ = 0;
  return true;
}

// InternalUpdateDescriptorSets<0> @ 145b3eca0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

bool __thiscall
FVulkanGraphicsPipelineDescriptorState::InternalUpdateDescriptorSets<0>
          (FVulkanGraphicsPipelineDescriptorState *this,FVulkanCommandListContext *param_1)

{
  longlong lVar1;
  VkDescriptorSet_T **ppVVar2;
  FVulkanDescriptorSetsLayout *pFVar3;
  FVulkanDescriptorSetCache *this_00;
  undefined8 uVar4;
  code *pcVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uchar *_Dst;
  VkBuffer_T *pVVar10;
  FVulkanDSetsKey *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  TStaticArray<FPackedUniformBuffers,5,4294967295> *pTVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  TStaticArray<unsigned_int,5,4294967295> *pTVar20;
  longlong local_res8;
  FVulkanAllocation local_58;
  
  if ((int)this->_padding_ == 0) {
    return false;
  }
  pTVar15 = &this->PackedUniformBuffers;
  iVar17 = 0;
  local_res8 = 0;
  pTVar20 = &this->PackedUniformBuffersDirty;
  do {
    if (pTVar20->Elements[0] != 0) {
      uVar19 = pTVar15->Elements[0].PackedUniformBuffers.ArrayNum;
      uVar14 = *(uint *)(param_1->_padding_ + 0xdc0);
      VulkanRHI::FVulkanAllocation::FVulkanAllocation(&local_58);
      _Dst = VulkanRHI::FTempBlockAllocator::Alloc
                       (*(FTempBlockAllocator **)(param_1->_padding_ + 0x700),uVar19,uVar14,
                        (FVulkanContextCommon *)param_1,&local_58,(VkDescriptorAddressInfoEXT *)0x0)
      ;
      memcpy(_Dst,pTVar15->Elements[0].PackedUniformBuffers.AllocatorInstance.Data,(ulonglong)uVar19
            );
      if (((int)this->_padding_ <= iVar17) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      uVar14 = local_58.Offset;
      uVar19 = local_58.HandleId;
      lVar1 = this->_padding_;
      uVar13 = (ulonglong)local_58.Size;
      pVVar10 = VulkanRHI::FVulkanAllocation::GetBufferHandle(&local_58);
      bVar7 = FVulkanDescriptorSetWriter::WriteBuffer<6>
                        ((FVulkanDescriptorSetWriter *)(lVar1 + local_res8),0,pVVar10,uVar19,
                         (ulonglong)uVar14,uVar13,0);
      *(byte *)&this->_padding_ = (byte)this->_padding_ | bVar7;
      *(byte *)&this->_padding_ = (byte)this->_padding_ | bVar7;
      VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&local_58);
      pTVar20->Elements[0] = 0;
    }
    uVar13 = 0;
    local_res8 = local_res8 + 0x78;
    pTVar15 = (TStaticArray<FPackedUniformBuffers,5,4294967295> *)(pTVar15->Elements + 1);
    iVar17 = iVar17 + 1;
    pTVar20 = (TStaticArray<unsigned_int,5,4294967295> *)(pTVar20->Elements + 1);
  } while (iVar17 < 5);
  if (((int)GMaxRHIFeatureLevel < 2) &&
     (bVar7 = FVulkanCommonPipelineDescriptorState::HasVolatileResources
                        ((FVulkanCommonPipelineDescriptorState *)this), !bVar7)) {
    if ((char)this->_padding_ == '\0') {
      return true;
    }
    ppVVar2 = (VkDescriptorSet_T **)this->_padding_;
    pFVar3 = (FVulkanDescriptorSetsLayout *)this->_padding_;
    this_00 = *(FVulkanDescriptorSetCache **)(this->_padding_ + 0x718);
    pFVar11 = FVulkanCommonPipelineDescriptorState::GetDSetsKey
                        ((FVulkanCommonPipelineDescriptorState *)this);
    FVulkanDescriptorSetCache::GetDescriptorSets
              (this_00,pFVar11,pFVar3,
               (TArray<FVulkanDescriptorSetWriter,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               ppVVar2);
    goto LAB_145b3f087;
  }
  pTVar6 = GAlwaysWriteDS.Ref;
  if ((char)this->_padding_ == '\0') {
    bVar7 = IsInParallelGameThread();
    if (bVar7) {
LAB_145b3eef0:
      uVar12 = uVar13;
    }
    else {
      bVar7 = IsInGameThread();
      uVar12 = 4;
      if (bVar7) goto LAB_145b3eef0;
    }
    if (*(int *)((longlong)pTVar6->ShadowedValue + uVar12) != 0) goto LAB_145b3eefe;
    bVar7 = false;
  }
  else {
LAB_145b3eefe:
    bVar7 = true;
  }
  bVar7 = FVulkanCommandListContext::AcquirePoolSetAndDescriptorsIfNeeded
                    (param_1,(FVulkanDescriptorSetsLayout *)this->_padding_,bVar7,
                     (VkDescriptorSet_T **)this->_padding_);
  if (!bVar7) {
    return true;
  }
  for (uVar19 = (uint)this->_padding_; uVar19 != 0; uVar19 = uVar19 >> 1) {
    uVar14 = (uint)uVar13;
    if ((uVar19 & 1) != 0) {
      uVar16 = ~uVar14 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar14 < (int)this->_padding_) {
        uVar9 = uVar16;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      uVar4 = *(undefined8 *)(this->_padding_ + (longlong)(int)uVar14 * 8);
      uVar9 = 0;
      if ((int)uVar14 < (int)this->_padding_) {
        uVar9 = uVar16;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      lVar1 = this->_padding_;
      uVar9 = 0;
      lVar18 = (longlong)(int)uVar14 * 0x78;
      if (*(int *)(lVar1 + 0x18 + lVar18) != 0) {
        do {
          uVar13 = (ulonglong)uVar9;
          uVar9 = uVar9 + 1;
          *(undefined8 *)(uVar13 * 0x40 + 0x10 + *(longlong *)(lVar1 + lVar18)) = uVar4;
        } while (uVar9 < *(uint *)(lVar1 + 0x18 + lVar18));
      }
      uVar9 = 0;
      if ((int)uVar14 < (int)this->_padding_) {
        uVar9 = uVar16;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      FVulkanDescriptorSetWriter::CheckAllWritten
                ((FVulkanDescriptorSetWriter *)(this->_padding_ + lVar18));
    }
    uVar13 = (ulonglong)(uVar14 + 1);
  }
  (*VulkanDynamicAPI::vkUpdateDescriptorSets)
            (*(VkDevice_T **)(this->_padding_ + 0x30),(uint)this->_padding_,
             (VkWriteDescriptorSet *)this->_padding_,0,(VkCopyDescriptorSet *)0x0);
LAB_145b3f087:
  *(undefined1 *)&this->_padding_ = 0;
  return true;
}

// FVulkanGraphicsPipelineDescriptorState @ 145b45c50

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */

FVulkanGraphicsPipelineDescriptorState * __thiscall
FVulkanGraphicsPipelineDescriptorState::FVulkanGraphicsPipelineDescriptorState
          (FVulkanGraphicsPipelineDescriptorState *this,FVulkanDevice *param_1,
          FVulkanGraphicsPipelineState *param_2)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  FScriptContainerElement FVar3;
  longlong lVar4;
  ulong64 uVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  EStage EVar9;
  FVulkanGraphicsPipelineDescriptorState *pFVar10;
  FVulkanShader **ppFVar11;
  ulonglong uVar12;
  longlong lVar13;
  FVulkanShaderHeader *pFVar14;
  PSRWLOCK pRVar15;
  longlong *plVar16;
  int iVar17;
  FVulkanShaderHeader *pFVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  uint local_res18;
  FVulkanShaderHeader *local_res20;
  FMemScope local_78;
  FVulkanShaderHeader *local_70 [6];
  
  bVar8 = param_2->bUsesBindless;
  pFVar18 = (FVulkanShaderHeader *)0x0;
  this->_padding_ = (longlong)param_1;
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
  *(bool *)((longlong)&this->_padding_ + 1) = bVar8;
  this->_padding_ = (longlong)&___7FVulkanGraphicsPipelineDescriptorState__6B_;
  *(undefined4 *)&this->_padding_ = 5;
  *(undefined1 *)&this->_padding_ = 1;
  (this->PackedUniformBuffers).Elements[0].PackedUniformBuffers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PackedUniformBuffers).Elements[0].PackedUniformBuffers.ArrayNum = 0;
  (this->PackedUniformBuffers).Elements[0].PackedUniformBuffers.ArrayMax = 0;
  (this->PackedUniformBuffers).Elements[1].PackedUniformBuffers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PackedUniformBuffers).Elements[1].PackedUniformBuffers.ArrayNum = 0;
  (this->PackedUniformBuffers).Elements[1].PackedUniformBuffers.ArrayMax = 0;
  (this->PackedUniformBuffers).Elements[2].PackedUniformBuffers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PackedUniformBuffers).Elements[2].PackedUniformBuffers.ArrayNum = 0;
  (this->PackedUniformBuffers).Elements[2].PackedUniformBuffers.ArrayMax = 0;
  (this->PackedUniformBuffers).Elements[3].PackedUniformBuffers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PackedUniformBuffers).Elements[3].PackedUniformBuffers.ArrayNum = 0;
  (this->PackedUniformBuffers).Elements[3].PackedUniformBuffers.ArrayMax = 0;
  (this->PackedUniformBuffers).Elements[4].PackedUniformBuffers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PackedUniformBuffers).Elements[4].PackedUniformBuffers.ArrayNum = 0;
  (this->PackedUniformBuffers).Elements[4].PackedUniformBuffers.ArrayMax = 0;
  this->GfxPipeline = param_2;
  local_res20 = (FVulkanShaderHeader *)0x0;
  FLLMScope::FLLMScope
            (local_res10,VideoRecording|BackupOOMMemoryPoolPlatform,false,None,Default,true);
  FMemScope::FMemScope(&local_78,VideoRecording|BackupOOMMemoryPoolPlatform,true);
  (this->PackedUniformBuffersMask).Elements[0] = 0;
  (this->PackedUniformBuffersMask).Elements[1] = 0;
  (this->PackedUniformBuffersMask).Elements[2] = 0;
  (this->PackedUniformBuffersMask).Elements[3] = 0;
  (this->PackedUniformBuffersMask).Elements[4] = 0;
  (this->PackedUniformBuffersDirty).Elements[0] = 0;
  (this->PackedUniformBuffersDirty).Elements[1] = 0;
  (this->PackedUniformBuffersDirty).Elements[2] = 0;
  (this->PackedUniformBuffersDirty).Elements[3] = 0;
  (this->PackedUniformBuffersDirty).Elements[4] = 0;
  if (((param_2->Layout == (FVulkanLayout *)0x0) || (param_2->Layout->bIsGfxLayout == false)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InGfxPipeline && InGfxPipeline->Layout && InGfxPipeline->Layout->IsGfxLayout()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                         ,0x12f,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FVulkanGraphicsPipelineDescriptorState *)(*pcVar7)();
    return pFVar10;
  }
  lVar4 = this->_padding_;
  this->_padding_ = (longlong)&param_2->Layout->DescriptorSetLayout;
  *(undefined4 *)&this->_padding_ = 0;
  pRVar15 = (PSRWLOCK)(lVar4 + 0x730);
  local_70[4] = (FVulkanShaderHeader *)0x0;
  local_70[0] = (FVulkanShaderHeader *)0x0;
  local_70[1] = (FVulkanShaderHeader *)0x0;
  local_70[2] = (FVulkanShaderHeader *)0x0;
  local_70[3] = (FVulkanShaderHeader *)0x0;
  EVar9 = ShaderStage::GetStageForFrequency(SF_Vertex);
  if (param_2->ShaderKeys[(int)EVar9] != 0) {
    EVar9 = ShaderStage::GetStageForFrequency(SF_Vertex);
    uVar5 = param_2->ShaderKeys[(int)EVar9];
    pFVar14 = pFVar18;
    if (uVar5 == 0) {
LAB_145b45e99:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("VertexShader",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                         ,0x13c,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar10 = (FVulkanGraphicsPipelineDescriptorState *)(*pcVar7)();
        return pFVar10;
      }
    }
    else {
      AcquireSRWLockShared(pRVar15);
      ppFVar11 = TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                 ::Find((TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                         *)(lVar4 + 0x790),uVar5);
      if (ppFVar11 == (FVulkanShader **)0x0) {
        ReleaseSRWLockShared(pRVar15);
        goto LAB_145b45e99;
      }
      pFVar14 = &(*ppFVar11)[-1].CodeHeader;
      if (*ppFVar11 == (FVulkanShader *)0x0) {
        pFVar14 = pFVar18;
      }
      ReleaseSRWLockShared(pRVar15);
      if (pFVar14 == (FVulkanShaderHeader *)0x0) goto LAB_145b45e99;
    }
    FPackedUniformBuffers::Init
              ((this->PackedUniformBuffers).Elements,
               (FVulkanShaderHeader *)((longlong)(pFVar14 + 2) + 0x20),
               (this->PackedUniformBuffersMask).Elements);
    *(uint *)&this->_padding_ =
         (uint)this->_padding_ | (uint)(*(int *)((longlong)(pFVar14 + 2) + 0x28) != 0);
    local_70[0] = (FVulkanShaderHeader *)((longlong)(pFVar14 + 2) + 0x20);
  }
  EVar9 = ShaderStage::GetStageForFrequency(SF_Pixel);
  uVar5 = param_2->ShaderKeys[(int)EVar9];
  if (uVar5 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0x748));
    ppFVar11 = TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
               ::Find((TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                       *)(lVar4 + 0x880),uVar5);
    if (ppFVar11 == (FVulkanShader **)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x748));
      pFVar14 = pFVar18;
LAB_145b45f51:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                         ,0x147,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar10 = (FVulkanGraphicsPipelineDescriptorState *)(*pcVar7)();
        return pFVar10;
      }
    }
    else {
      pFVar14 = &(*ppFVar11)[-1].CodeHeader;
      if (*ppFVar11 == (FVulkanShader *)0x0) {
        pFVar14 = pFVar18;
      }
      ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x748));
      if (pFVar14 == (FVulkanShaderHeader *)0x0) goto LAB_145b45f51;
    }
    FPackedUniformBuffers::Init
              ((this->PackedUniformBuffers).Elements + 1,
               (FVulkanShaderHeader *)((longlong)(pFVar14 + 2) + 0x20),
               (this->PackedUniformBuffersMask).Elements + 1);
    *(uint *)&this->_padding_ =
         (uint)this->_padding_ | -(uint)(*(int *)((longlong)(pFVar14 + 2) + 0x28) != 0) & 2;
    local_70[1] = (FVulkanShaderHeader *)((longlong)(pFVar14 + 2) + 0x20);
  }
  EVar9 = ShaderStage::GetStageForFrequency(SF_Mesh);
  uVar5 = param_2->ShaderKeys[(int)EVar9];
  if (uVar5 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0x738));
    ppFVar11 = TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
               ::Find((TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                       *)(lVar4 + 0x7e0),uVar5);
    if (ppFVar11 == (FVulkanShader **)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x738));
      pFVar14 = pFVar18;
LAB_145b4600a:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshShader",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                         ,0x153,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar10 = (FVulkanGraphicsPipelineDescriptorState *)(*pcVar7)();
        return pFVar10;
      }
    }
    else {
      pFVar14 = &(*ppFVar11)[-1].CodeHeader;
      if (*ppFVar11 == (FVulkanShader *)0x0) {
        pFVar14 = pFVar18;
      }
      ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x738));
      if (pFVar14 == (FVulkanShaderHeader *)0x0) goto LAB_145b4600a;
    }
    FPackedUniformBuffers::Init
              ((this->PackedUniformBuffers).Elements + 3,
               (FVulkanShaderHeader *)((longlong)(pFVar14 + 2) + 0x20),
               (this->PackedUniformBuffersMask).Elements + 3);
    *(uint *)&this->_padding_ =
         (uint)this->_padding_ | -(uint)(*(int *)((longlong)(pFVar14 + 2) + 0x28) != 0) & 8;
    local_70[3] = (FVulkanShaderHeader *)((longlong)(pFVar14 + 2) + 0x20);
  }
  EVar9 = ShaderStage::GetStageForFrequency(SF_Amplification);
  uVar5 = param_2->ShaderKeys[(int)EVar9];
  if (uVar5 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0x740));
    ppFVar11 = TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
               ::Find((TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                       *)(lVar4 + 0x830),uVar5);
    if (ppFVar11 == (FVulkanShader **)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x740));
      pFVar14 = pFVar18;
LAB_145b460c6:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TaskShader",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                         ,0x15e,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar10 = (FVulkanGraphicsPipelineDescriptorState *)(*pcVar7)();
        return pFVar10;
      }
    }
    else {
      pFVar14 = &(*ppFVar11)[-1].CodeHeader;
      if (*ppFVar11 == (FVulkanShader *)0x0) {
        pFVar14 = pFVar18;
      }
      ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x740));
      if (pFVar14 == (FVulkanShaderHeader *)0x0) goto LAB_145b460c6;
    }
    FPackedUniformBuffers::Init
              ((this->PackedUniformBuffers).Elements + 4,
               (FVulkanShaderHeader *)((longlong)(pFVar14 + 2) + 0x20),
               (this->PackedUniformBuffersMask).Elements + 4);
    *(uint *)&this->_padding_ =
         (uint)this->_padding_ | -(uint)(*(int *)((longlong)(pFVar14 + 2) + 0x28) != 0) & 0x10;
    local_70[4] = (FVulkanShaderHeader *)((longlong)(pFVar14 + 2) + 0x20);
  }
  EVar9 = ShaderStage::GetStageForFrequency(SF_Geometry);
  uVar5 = param_2->ShaderKeys[(int)EVar9];
  if (uVar5 == 0) goto LAB_145b461df;
  pRVar15 = (PSRWLOCK)(lVar4 + 0x750);
  AcquireSRWLockShared(pRVar15);
  ppFVar11 = TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
             ::Find((TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                     *)(lVar4 + 0x8d0),uVar5);
  if (ppFVar11 == (FVulkanShader **)0x0) {
    ReleaseSRWLockShared(pRVar15);
    pFVar14 = pFVar18;
LAB_145b46184:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("GeometryShader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                       ,0x16b,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FVulkanGraphicsPipelineDescriptorState *)(*pcVar7)();
      return pFVar10;
    }
  }
  else {
    pFVar14 = &(*ppFVar11)[-1].CodeHeader;
    if (*ppFVar11 == (FVulkanShader *)0x0) {
      pFVar14 = pFVar18;
    }
    ReleaseSRWLockShared(pRVar15);
    if (pFVar14 == (FVulkanShaderHeader *)0x0) goto LAB_145b46184;
  }
  FPackedUniformBuffers::Init
            ((this->PackedUniformBuffers).Elements + 2,
             (FVulkanShaderHeader *)((longlong)(pFVar14 + 2) + 0x20),
             (this->PackedUniformBuffersMask).Elements + 2);
  *(uint *)&this->_padding_ =
       (uint)this->_padding_ | -(uint)(*(int *)((longlong)(pFVar14 + 2) + 0x28) != 0) & 4;
  local_70[2] = (FVulkanShaderHeader *)((longlong)(pFVar14 + 2) + 0x20);
LAB_145b461df:
  FVulkanCommonPipelineDescriptorState::CreateDescriptorWriteInfos
            ((FVulkanCommonPipelineDescriptorState *)this);
  FRHIResource::AddRef((FRHIResource *)param_2);
  do {
    pFVar14 = local_res20;
    iVar17 = (int)pFVar18;
    pFVar18 = local_70[(longlong)pFVar18];
    if (pFVar18 != (FVulkanShaderHeader *)0x0) {
      local_res18 = (pFVar18->GlobalSamplerInfos).ArrayNum;
      uVar12 = (ulonglong)(int)local_res18;
      pFVar19 = (pFVar18->GlobalSamplerInfos).AllocatorInstance.Data;
      pFVar1 = pFVar19 + uVar12 * 2;
      while( true ) {
        if ((pFVar18->GlobalSamplerInfos).ArrayNum != (int)uVar12) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FVulkanShaderHeader::FGlobalSamplerInfo_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar19 == pFVar1) break;
        FVar3 = *pFVar19;
        lVar4 = *(longlong *)(this->_padding_ + (ulonglong)(byte)pFVar19[1] * 8);
        if ((*(char *)((longlong)&this->_padding_ + 1) != '\0') &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!bUseBindless",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.h"
                               ,0x56,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          pFVar10 = (FVulkanGraphicsPipelineDescriptorState *)(*pcVar7)();
          return pFVar10;
        }
        if (((lVar4 == 0) || (*(longlong *)(lVar4 + 0x18) == 0)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Sampler && Sampler->Sampler != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.h"
                               ,0x57,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          pFVar10 = (FVulkanGraphicsPipelineDescriptorState *)(*pcVar7)();
          return pFVar10;
        }
        if (((int)this->_padding_ <= (int)((ulonglong)pFVar14 & 0xff)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          pFVar10 = (FVulkanGraphicsPipelineDescriptorState *)(*pcVar7)();
          return pFVar10;
        }
        plVar16 = (longlong *)(((ulonglong)pFVar14 & 0xff) * 0x78 + this->_padding_);
        if ((*(uint *)(plVar16 + 3) <= (uint)(byte)FVar3) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("DescriptorIndex < NumWrites",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                               ,0x222,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          pFVar10 = (FVulkanGraphicsPipelineDescriptorState *)(*pcVar7)();
          return pFVar10;
        }
        lVar13 = (ulonglong)(byte)FVar3 * 0x40;
        if ((1 < *(uint *)(*plVar16 + 0x24 + lVar13)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("WriteDescriptors[DescriptorIndex].descriptorType == VK_DESCRIPTOR_TYPE_SAMPLER || WriteDescriptors[DescriptorIndex].descriptorType == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                               ,0x223,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          pFVar10 = (FVulkanGraphicsPipelineDescriptorState *)(*pcVar7)();
          return pFVar10;
        }
        plVar6 = *(longlong **)(lVar13 + 0x28 + *plVar16);
        if ((plVar6 == (longlong *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ImageInfo",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                               ,0x225,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          pFVar10 = (FVulkanGraphicsPipelineDescriptorState *)(*pcVar7)();
          return pFVar10;
        }
        if ((int)GMaxRHIFeatureLevel < 2) {
          piVar2 = (int *)(plVar16[4] + (ulonglong)(byte)FVar3 * 0xc);
          if ((*(int *)(lVar4 + 0x20) == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Sampler.SamplerId > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                                 ,0x22b,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            pFVar10 = (FVulkanGraphicsPipelineDescriptorState *)(*pcVar7)();
            return pFVar10;
          }
          bVar8 = *piVar2 != *(int *)(lVar4 + 0x20);
          if (bVar8) {
            *piVar2 = *(int *)(lVar4 + 0x20);
            *plVar6 = *(longlong *)(lVar4 + 0x18);
          }
          *(byte *)(plVar16 + 8) = *(byte *)(plVar16 + 8) | bVar8;
        }
        else {
          bVar8 = *plVar6 != *(longlong *)(lVar4 + 0x18);
          *plVar6 = *(longlong *)(lVar4 + 0x18);
        }
        *(byte *)&this->_padding_ = (byte)this->_padding_ | bVar8;
        *(byte *)&this->_padding_ = (byte)this->_padding_ | bVar8;
        pFVar19 = pFVar19 + 2;
        uVar12 = (ulonglong)local_res18;
      }
      iVar17 = (int)local_res20;
    }
    pFVar18 = (FVulkanShaderHeader *)(ulonglong)(iVar17 + 1U);
    local_res20 = pFVar18;
    if (4 < (int)(iVar17 + 1U)) {
      FMemScope::~FMemScope(&local_78);
      FLLMScope::~FLLMScope(local_res10);
      return this;
    }
  } while( true );
}

// ~FVulkanGraphicsPipelineDescriptorState @ 145b4dc20

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
FVulkanGraphicsPipelineDescriptorState::~FVulkanGraphicsPipelineDescriptorState
          (FVulkanGraphicsPipelineDescriptorState *this)

{
  int *piVar1;
  longlong lVar2;
  TStaticArray<unsigned_int,5,4294967295> *pTVar3;
  
  this->_padding_ = (longlong)&___7FVulkanGraphicsPipelineDescriptorState__6B_;
  FRHIResource::Release((FRHIResource *)this->GfxPipeline);
  pTVar3 = &this->PackedUniformBuffersMask;
  lVar2 = 5;
  do {
    piVar1 = (int *)(pTVar3 + -1);
    pTVar3 = (TStaticArray<unsigned_int,5,4294967295> *)((longlong)(pTVar3 + -1) + 4);
    lVar2 = lVar2 + -1;
    if (*(void **)(piVar1 + 1) != (void *)0x0) {
      FMemory::Free(*(void **)(piVar1 + 1));
    }
  } while (lVar2 != 0);
  FVulkanCommonPipelineDescriptorState::~FVulkanCommonPipelineDescriptorState
            ((FVulkanCommonPipelineDescriptorState *)this);
  return;
}

// UpdateBindlessDescriptors @ 145b829d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */
/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */

void __thiscall
FVulkanGraphicsPipelineDescriptorState::UpdateBindlessDescriptors
          (FVulkanGraphicsPipelineDescriptorState *this,FVulkanCommandListContext *param_1)

{
  int *piVar1;
  ulonglong *puVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  FVulkanGraphicsPipelineState *pFVar5;
  FVulkanShader *pFVar6;
  FTempBlockAllocator *this_00;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  EStage EVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uchar *_Dst;
  ulong64 uVar15;
  EShaderFrequency EVar16;
  longlong lVar17;
  TArray<VkDescriptorAddressInfoEXT,TSizedDefaultAllocator<32>_> *pTVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  int iVar22;
  undefined1 auStackY_148 [32];
  longlong local_100;
  uint local_f0;
  VkBufferDeviceAddressInfo local_e0;
  FVulkanAllocation local_c8;
  TStaticArray<TArray<VkDescriptorAddressInfoEXT,TSizedDefaultAllocator<32>_>,6,4294967295> local_a8
  ;
  ulonglong local_48 [2];
  
  puVar21 = local_48;
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("bUseBindless",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                       ,0x1d4,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if ((int)this->_padding_ != (int)this->_padding_) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("DSWriteContainer.DescriptorBufferInfo.Num() == DSWriteContainer.DescriptorWrites.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                       ,0x1d7,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if ((int)this->_padding_ != 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("DSWriteContainer.DescriptorImageInfo.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                       ,0x1d8,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar4 = *(undefined8 *)(this->_padding_ + 0xdc0);
  uVar14 = 0;
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
  local_100 = 0;
  do {
    pFVar5 = this->GfxPipeline;
    iVar22 = (int)uVar14;
    if (iVar22 == 0) {
      EVar16 = SF_Vertex;
    }
    else if (iVar22 == 1) {
      EVar16 = SF_Pixel;
    }
    else if (iVar22 == 2) {
      EVar16 = SF_Geometry;
    }
    else if (iVar22 == 3) {
      EVar16 = SF_Mesh;
    }
    else if (iVar22 == 4) {
      EVar16 = SF_Amplification;
    }
    else {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Public\\VulkanCommon.h"
                         ,0x5e,L"Invalid graphic shader stage: %d");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      EVar16 = SF_NumFrequencies;
    }
    EVar10 = ShaderStage::GetStageForFrequency(EVar16);
    pFVar6 = pFVar5->VulkanShaders[(int)EVar10];
    if (pFVar6 != (FVulkanShader *)0x0) {
      uVar13 = (pFVar6->CodeHeader).NumBoundUniformBuffers;
      pTVar18 = local_a8.Elements + uVar14;
      iVar12 = local_a8.Elements[uVar14].ArrayNum;
      piVar1 = &local_a8.Elements[uVar14].ArrayNum;
      if (iVar12 < (int)uVar13) {
        iVar11 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x28,8,uVar13 - iVar12,&pTVar18->AllocatorInstance,piVar1,
                            &local_a8.Elements[uVar14].ArrayMax);
        memset((pTVar18->AllocatorInstance).Data + (longlong)iVar11 * 0x28,0,
               (longlong)(int)(uVar13 - iVar12) * 0x28);
      }
      else {
        if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
        }
        if ((int)uVar13 < iVar12) {
          uVar19 = iVar12 - uVar13;
          if ((int)(uVar19 | uVar13) < 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              );
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          if (uVar19 != 0) {
            pFVar3 = (pTVar18->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x28;
            iVar12 = (*piVar1 - uVar13) - uVar19;
            if (iVar12 != 0) {
              memmove(pFVar3,pFVar3 + (longlong)(int)uVar19 * 0x28,(longlong)iVar12 * 0x28);
            }
            *piVar1 = *piVar1 - uVar19;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,&pTVar18->AllocatorInstance,*piVar1,
                       &local_a8.Elements[uVar14].ArrayMax);
          }
        }
      }
      uVar20 = 0;
      if (1 < (this->PackedUniformBuffersMask).Elements[uVar14]) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("PackedUniformBuffersMask[Stage] <= 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                           ,0x1f2,L"");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if ((this->PackedUniformBuffersMask).Elements[uVar14] != 0) {
        uVar13 = (this->PackedUniformBuffers).Elements[uVar14].PackedUniformBuffers.ArrayNum;
        VulkanRHI::FVulkanAllocation::FVulkanAllocation(&local_c8);
        this_00 = *(FTempBlockAllocator **)(this->_padding_ + 0x700);
        if (*piVar1 < 1) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        local_f0 = (uint)uVar4;
        _Dst = VulkanRHI::FTempBlockAllocator::Alloc
                         (this_00,uVar13,local_f0,(FVulkanContextCommon *)param_1,&local_c8,
                          (VkDescriptorAddressInfoEXT *)(pTVar18->AllocatorInstance).Data);
        memcpy(_Dst,(this->PackedUniformBuffers).Elements[uVar14].PackedUniformBuffers.
                    AllocatorInstance.Data,(longlong)(int)uVar13);
        (this->PackedUniformBuffersDirty).Elements[uVar14] = 0;
        uVar20 = 1;
        VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&local_c8);
      }
      if ((uint)uVar20 < (pFVar6->CodeHeader).NumBoundUniformBuffers) {
        do {
          uVar19 = (uint)uVar20;
          uVar13 = 0;
          if ((int)uVar19 < *piVar1) {
            uVar13 = ~uVar19 >> 0x1f;
          }
          if (uVar13 == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          pFVar7 = (pTVar18->AllocatorInstance).Data;
          pFVar3 = pFVar7 + (longlong)(int)uVar19 * 0x28;
          if (*(int *)(pFVar7 + (longlong)(int)uVar19 * 0x28) != 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("DescriptorAddressInfo.sType == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                               ,0x204,L"");
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          if ((int)this->_padding_ <= iVar22) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          lVar17 = *(longlong *)(local_100 + this->_padding_) + uVar20 * 0x40;
          if (*(uint *)(lVar17 + 0x18) != uVar19) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("WriteDescriptorSet.dstBinding == UBIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                               ,0x207,L"");
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          if (*(int *)(lVar17 + 0x1c) != 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("WriteDescriptorSet.dstArrayElement == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                               ,0x208,L"");
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          if (*(int *)(lVar17 + 0x20) != 1) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("WriteDescriptorSet.descriptorCount == 1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                               ,0x209,L"");
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          if (*(int *)(lVar17 + 0x24) != 6) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("WriteDescriptorSet.descriptorType == VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.cpp"
                               ,0x20a,L"");
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          local_e0.sType = VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO;
          local_e0._4_8_ = 0;
          local_e0.pNext._4_4_ = 0;
          local_e0.buffer._0_4_ = (undefined4)**(undefined8 **)(lVar17 + 0x30);
          local_e0.buffer._4_4_ = (undefined4)((ulonglong)**(undefined8 **)(lVar17 + 0x30) >> 0x20);
          uVar15 = (*VulkanDynamicAPI::vkGetBufferDeviceAddressKHR)
                             (*(VkDevice_T **)(this->_padding_ + 0x30),&local_e0);
          *(undefined4 *)pFVar3 = 0x3b9f9c63;
          uVar20 = (ulonglong)(uVar19 + 1);
          *(ulong64 *)(pFVar3 + 0x10) = uVar15 + *(longlong *)(*(longlong *)(lVar17 + 0x30) + 8);
          *(undefined8 *)(pFVar3 + 0x18) = *(undefined8 *)(*(longlong *)(lVar17 + 0x30) + 0x10);
        } while (uVar19 + 1 < (pFVar6->CodeHeader).NumBoundUniformBuffers);
      }
    }
    local_100 = local_100 + 0x78;
    uVar14 = (ulonglong)(iVar22 + 1U);
  } while ((int)(iVar22 + 1U) < 5);
  FVulkanBindlessDescriptorManager::RegisterUniformBuffers
            (*(FVulkanBindlessDescriptorManager **)(this->_padding_ + 0x728),param_1,
             VK_PIPELINE_BIND_POINT_GRAPHICS,&local_a8);
  lVar17 = 6;
  do {
    puVar2 = puVar21 + -2;
    puVar21 = puVar21 + -2;
    lVar17 = lVar17 + -1;
    if ((void *)*puVar2 != (void *)0x0) {
      FMemory::Free((void *)*puVar2);
    }
  } while (lVar17 != 0);
  return;
}

