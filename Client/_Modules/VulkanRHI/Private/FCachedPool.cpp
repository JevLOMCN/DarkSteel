// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 7

// FCachedPool @ 145b44240

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

FCachedPool * __thiscall
FVulkanDescriptorSetCache::FCachedPool::FCachedPool
          (FCachedPool *this,FVulkanDevice *param_1,uint param_2,float *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  
  fVar2 = (float)param_2 * __real_41800000;
  if (0.0 <= fVar2) {
    auVar1 = roundps(ZEXT816(0),ZEXT416((uint)fVar2),1);
    fVar2 = auVar1._0_4_;
  }
  else {
    auVar1 = roundps(ZEXT816(0),ZEXT416((uint)fVar2),2);
    fVar2 = auVar1._0_4_;
  }
  this->SetCapacity = (uint)(longlong)fVar2;
  FVulkanGenericDescriptorPool::FVulkanGenericDescriptorPool(&this->Pool,param_1,param_2,param_3);
  *(undefined8 *)&this->SetsCache = 0;
  *(undefined8 *)&(this->SetsCache).field_0x8 = 0;
  *(undefined8 *)&(this->SetsCache).field_0x20 = 0;
  *(undefined4 *)&(this->SetsCache).field_0x28 = 0;
  *(undefined4 *)&(this->SetsCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->SetsCache).field_0x34 = 0;
  *(undefined4 *)&(this->SetsCache).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SetsCache).field_0x40 = 0;
  *(undefined4 *)&(this->SetsCache).field_0x48 = 0;
  *(undefined8 *)&this->SetCache = 0;
  *(undefined8 *)&(this->SetCache).field_0x8 = 0;
  *(undefined8 *)&(this->SetCache).field_0x20 = 0;
  *(undefined4 *)&(this->SetCache).field_0x28 = 0;
  *(undefined4 *)&(this->SetCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->SetCache).field_0x34 = 0;
  *(undefined4 *)&(this->SetCache).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SetCache).field_0x40 = 0;
  *(undefined4 *)&(this->SetCache).field_0x48 = 0;
  this->RecentFrame = 0;
  this->PoolSizesStatistic[0] = 0;
  this->PoolSizesStatistic[1] = 0;
  this->PoolSizesStatistic[2] = 0;
  this->PoolSizesStatistic[3] = 0;
  this->PoolSizesStatistic[4] = 0;
  this->PoolSizesStatistic[5] = 0;
  this->PoolSizesStatistic[6] = 0;
  this->PoolSizesStatistic[7] = 0;
  this->PoolSizesStatistic[8] = 0;
  this->PoolSizesStatistic[9] = 0;
  this->PoolSizesStatistic[10] = 0;
  return this;
}

// CalcAllocRatio @ 145b5b1a0

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
/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall FVulkanDescriptorSetCache::FCachedPool::CalcAllocRatio(FCachedPool *this)

{
  float fVar1;
  
  fVar1 = (float)(*(int *)&(this->SetCache).field_0x8 - *(int *)&(this->SetCache).field_0x34) /
          (float)(this->Pool).MaxDescriptorSets;
  if (fVar1 < __real_3f000000) {
    if (2 < (byte)LogVulkanRHI._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
    return __real_3f000000;
  }
  return fVar1;
}

// CalcPoolSizesRatio @ 145b5b220

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
FVulkanDescriptorSetCache::FCachedPool::CalcPoolSizesRatio(FCachedPool *this,float *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = *(int *)&(this->SetCache).field_0x8 - *(int *)&(this->SetCache).field_0x34;
  iVar1 = 1;
  if (1 < iVar2) {
    iVar1 = iVar2;
  }
  fVar3 = __real_3f800000 / (float)iVar1;
  *param_1 = (float)this->PoolSizesStatistic[0] * fVar3;
  param_1[1] = (float)this->PoolSizesStatistic[1] * fVar3;
  param_1[2] = (float)this->PoolSizesStatistic[2] * fVar3;
  param_1[3] = (float)this->PoolSizesStatistic[3] * fVar3;
  param_1[4] = (float)this->PoolSizesStatistic[4] * fVar3;
  param_1[5] = (float)this->PoolSizesStatistic[5] * fVar3;
  param_1[6] = (float)this->PoolSizesStatistic[6] * fVar3;
  param_1[7] = (float)this->PoolSizesStatistic[7] * fVar3;
  param_1[8] = (float)this->PoolSizesStatistic[8] * fVar3;
  param_1[9] = (float)this->PoolSizesStatistic[9] * fVar3;
  param_1[10] = (float)this->PoolSizesStatistic[10] * fVar3;
  return;
}

// CanGC @ 145b5b480

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

bool __thiscall FVulkanDescriptorSetCache::FCachedPool::CanGC(FCachedPool *this)

{
  return 3 < GFrameNumberRenderThread - this->RecentFrame;
}

// CreateDescriptorSets @ 145b5ffb0

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

bool __thiscall
FVulkanDescriptorSetCache::FCachedPool::CreateDescriptorSets
          (FCachedPool *this,FVulkanDSetsKey *param_1,FVulkanDescriptorSetsLayout *param_2,
          TArray<FVulkanDescriptorSetWriter,TSizedDefaultAllocator<32>_> *param_3,
          VkDescriptorSet_T **param_4)

{
  TMap<FVulkanDSetKey,VkDescriptorSet_T_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVulkanDSetKey,VkDescriptorSet_T_*,0>_>
  *this_00;
  longlong lVar1;
  FVulkanHashableDescriptorInfo *pFVar2;
  VkDescriptorPool_T *pVVar3;
  VkDescriptorSet_T *pVVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TUniquePtr<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>
  TVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  VkResult VVar11;
  undefined8 *puVar12;
  uint *puVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  VkDescriptorType VVar17;
  ulonglong uVar18;
  uint *puVar19;
  uint uVar20;
  FVulkanDescriptorSetWriter *this_01;
  uint local_128;
  longlong local_120;
  longlong local_118;
  VkDescriptorSet_T *local_110 [6];
  ulonglong local_e0;
  undefined1 local_d8 [8];
  VkDescriptorSetLayout_T *local_d0;
  ulonglong local_c8;
  TDataKeyBase<1> local_c0;
  TDataKeyBase<1> local_a8;
  VkDescriptorSetAllocateInfo local_90;
  TDataKeyBase<1> *local_68;
  VkDescriptorSet_T **local_60;
  TDataKeyBase<1> *local_58;
  VkDescriptorSet_T **local_50;
  
  local_e0 = (ulonglong)(uint)param_3->ArrayNum;
  local_110[0] = (VkDescriptorSet_T *)0x0;
  local_110[1] = (VkDescriptorSet_T *)0x0;
  local_110[2] = (VkDescriptorSet_T *)0x0;
  local_110[3] = (VkDescriptorSet_T *)0x0;
  local_110[4] = (VkDescriptorSet_T *)0x0;
  local_110[5] = (VkDescriptorSet_T *)0x0;
  if ((6 < param_3->ArrayNum) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewSetEntry.NumSets <= NewSetEntry.Sets.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                         ,0x420,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  if (((int)local_e0 < (param_2->LayoutHandles).ArrayNum) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SetsLayout.GetHandles().Num() <= NewSetEntry.NumSets",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                         ,0x421,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  uVar15 = 0;
  local_128 = 0;
  if (0 < (int)local_e0) {
    local_118 = 0;
    local_120 = 0;
    do {
      uVar14 = (uint)uVar15;
      uVar20 = 0;
      if ((int)uVar14 < param_3->ArrayNum) {
        uVar20 = ~uVar14 >> 0x1f;
      }
      if (uVar20 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      this_01 = (FVulkanDescriptorSetWriter *)((param_3->AllocatorInstance).Data + local_118);
      if (this_01->NumWrites == 0) {
        local_110[uVar15] = (VkDescriptorSet_T *)0x0;
        local_128 = uVar14;
      }
      else {
        this_00 = &this->SetCache;
        if (1 < (int)GMaxRHIFeatureLevel) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("UseVulkanDescriptorCache()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                             ,0x203,L"");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
        }
        if (this_01->bIsKeyDirty != false) {
          pFVar2 = this_01->HashableDescriptorInfos;
          uVar20 = (this_01->NumWrites + 1) * 0xc;
          TDataKeyBase<1>::SetData((TDataKeyBase<1> *)&this_01->Key,pFVar2,uVar20);
          uVar20 = (*FCrc::MemCrc32Func)(pFVar2,uVar20,0);
          uVar15 = (ulonglong)local_128;
          *(uint *)&this_01->Key = uVar20;
          this_01->bIsKeyDirty = false;
        }
        iVar10 = TSet<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>,TDefaultMapHashableKeyFuncs<FVulkanDSetKey,VkDescriptorSet_T_*,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FVulkanDSetKey>
                           ((TSet<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>,TDefaultMapHashableKeyFuncs<FVulkanDSetKey,VkDescriptorSet_T_*,0>,FDefaultSetAllocator>
                             *)this_00,*(uint *)&this_01->Key,&this_01->Key);
        if (iVar10 != -1) {
          lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar10 * 0x28;
          puVar12 = (undefined8 *)(lVar1 + 0x18);
          if (lVar1 == 0) {
            puVar12 = (undefined8 *)0x0;
          }
          if (puVar12 != (undefined8 *)0x0) {
            local_110[uVar15] = (VkDescriptorSet_T *)*puVar12;
            local_128 = (uint)uVar15;
            goto LAB_145b60487;
          }
        }
        if (*(int *)&(this->SetCache).field_0x8 - *(int *)&(this->SetCache).field_0x34 ==
            this->SetCapacity) {
          return false;
        }
        uVar20 = 0;
        if ((int)(uint)uVar15 < (param_2->LayoutHandles).ArrayNum) {
          uVar20 = ~uVar14 >> 0x1f;
        }
        local_c8 = uVar15;
        if (uVar20 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
        }
        local_d0 = *(VkDescriptorSetLayout_T **)
                    ((param_2->LayoutHandles).AllocatorInstance.Data + local_120 * 8);
        if ((this->Pool).DescriptorPool == (VkDescriptorPool_T *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("DescriptorPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                             ,0x39f,L"");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
        }
        pVVar3 = (this->Pool).DescriptorPool;
        local_90._28_4_ = 0;
        local_90.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
        local_90._4_8_ = 0;
        local_90.pNext._4_4_ = 0;
        local_90.descriptorPool._0_4_ = SUB84(pVVar3,0);
        local_90.descriptorPool._4_4_ = (undefined4)((ulonglong)pVVar3 >> 0x20);
        local_90.pSetLayouts = &local_d0;
        local_90.descriptorSetCount = 1;
        VVar11 = (*VulkanDynamicAPI::vkAllocateDescriptorSets)
                           (((this->Pool).Device)->Device,&local_90,local_110 + uVar15);
        if (VVar11 != VK_SUCCESS) {
          return false;
        }
        if (1 < (int)GMaxRHIFeatureLevel) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("UseVulkanDescriptorCache()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                             ,0x203,L"");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
        }
        uVar18 = uVar15;
        if (this_01->bIsKeyDirty != false) {
          pFVar2 = this_01->HashableDescriptorInfos;
          uVar20 = (this_01->NumWrites + 1) * 0xc;
          TDataKeyBase<1>::SetData((TDataKeyBase<1> *)&this_01->Key,pFVar2,uVar20);
          uVar20 = (*FCrc::MemCrc32Func)(pFVar2,uVar20,0);
          *(uint *)&this_01->Key = uVar20;
          this_01->bIsKeyDirty = false;
          uVar18 = local_c8;
        }
        local_c0.Hash = *(uint *)&this_01->Key;
        local_c0.Data = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0;
        local_c0.DataStorage.Ptr = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0;
        TDataKeyBase<1>::CopyDataDeep((TDataKeyBase<1> *)&this_01->Key,&local_c0);
        local_68 = &local_c0;
        local_60 = local_110 + uVar15;
        TSet<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>,TDefaultMapHashableKeyFuncs<FVulkanDSetKey,VkDescriptorSet_T_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FVulkanDSetKey_&&,VkDescriptorSet_T_*_&>_>
                  ((TSet<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>,TDefaultMapHashableKeyFuncs<FVulkanDSetKey,VkDescriptorSet_T_*,0>,FDefaultSetAllocator>
                    *)this_00,(TPairInitializer<FVulkanDSetKey_&&,VkDescriptorSet_T_*_&> *)local_d8,
                   (bool *)&local_68);
        TVar7.Ptr = local_c0.DataStorage.Ptr;
        if (local_c0.DataStorage.Ptr != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) {
          pFVar5 = ((local_c0.DataStorage.Ptr)->AllocatorInstance).Data;
          if (pFVar5 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar5);
          }
          ::operator_delete(TVar7.Ptr,0x10);
        }
        pVVar4 = local_110[uVar18];
        uVar18 = 0;
        uVar20 = 0;
        uVar15 = uVar18;
        if (this_01->NumWrites != 0) {
          do {
            uVar14 = (int)uVar15 + 1;
            this_01->WriteDescriptors[uVar15].dstSet = pVVar4;
            uVar15 = (ulonglong)uVar14;
          } while (uVar14 < this_01->NumWrites);
        }
        FVulkanDescriptorSetWriter::CheckAllWritten(this_01);
        puVar19 = this->PoolSizesStatistic;
        do {
          VVar17 = (VkDescriptorType)uVar18;
          uVar14 = uVar20;
          if ((int)param_2->_padding_ != *(int *)((longlong)&param_2->_padding_ + 4)) {
            plVar16 = &param_2->_padding_;
            if ((longlong *)param_2->_padding_ != (longlong *)0x0) {
              plVar16 = (longlong *)param_2->_padding_;
            }
            iVar10 = *(int *)((longlong)plVar16 + ((int)param_2->_padding_ - 1 & uVar18) * 4);
            if (iVar10 != -1) {
              do {
                if (*(VkDescriptorType *)(param_2->_padding_ + (longlong)iVar10 * 0x10) == VVar17) {
                  puVar13 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
                            ::FindChecked(&param_2->_padding_,VVar17);
                  uVar14 = *puVar13;
                  break;
                }
                iVar10 = *(int *)(param_2->_padding_ + 8 + (longlong)iVar10 * 0x10);
              } while (iVar10 != -1);
            }
          }
          *puVar19 = *puVar19 + uVar14;
          uVar18 = (ulonglong)(VVar17 + VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER);
          puVar19 = puVar19 + 1;
        } while ((int)(VVar17 + VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER) < 0xb);
        (*VulkanDynamicAPI::vkUpdateDescriptorSets)
                  (((this->Pool).Device)->Device,this_01->NumWrites,this_01->WriteDescriptors,0,
                   (VkCopyDescriptorSet *)0x0);
      }
LAB_145b60487:
      local_128 = local_128 + 1;
      uVar15 = (ulonglong)local_128;
      local_120 = local_120 + 1;
      local_118 = local_118 + 0x78;
    } while ((int)local_128 < (int)local_e0);
  }
  local_a8.Hash = *(uint *)param_1;
  local_a8.Data = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0;
  local_a8.DataStorage.Ptr = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0;
  TDataKeyBase<1>::CopyDataDeep((TDataKeyBase<1> *)param_1,&local_a8);
  local_58 = &local_a8;
  local_50 = local_110;
  TSet<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>,TDefaultMapHashableKeyFuncs<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FVulkanDSetsKey_&&,FVulkanDescriptorSetCache::FSetsEntry_&&>_>
            ((TSet<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>,TDefaultMapHashableKeyFuncs<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry,0>,FDefaultSetAllocator>
              *)&this->SetsCache,
             (TPairInitializer<FVulkanDSetsKey_&&,FVulkanDescriptorSetCache::FSetsEntry_&&> *)
             (local_d8 + 4),(bool *)&local_58);
  TVar7.Ptr = local_a8.DataStorage.Ptr;
  if (local_a8.DataStorage.Ptr != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar5 = ((local_a8.DataStorage.Ptr)->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    ::operator_delete(TVar7.Ptr,0x10);
  }
  memcpy(param_4,local_110,(longlong)(int)local_e0 << 3);
  this->RecentFrame = GFrameNumberRenderThread;
  return true;
}

// FindDescriptorSets @ 145b677e0

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
FVulkanDescriptorSetCache::FCachedPool::FindDescriptorSets
          (FCachedPool *this,FVulkanDSetsKey *param_1,VkDescriptorSet_T **param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  iVar1 = TSet<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>,TDefaultMapHashableKeyFuncs<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FVulkanDSetsKey>
                    ((TSet<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>,TDefaultMapHashableKeyFuncs<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry,0>,FDefaultSetAllocator>
                      *)&this->SetsCache,*(uint *)param_1,param_1);
  if (iVar1 != -1) {
    lVar2 = (longlong)iVar1 * 0x58 + *(longlong *)&this->SetsCache;
    _Src = (void *)(lVar2 + 0x18);
    if (lVar2 == 0) {
      _Src = (void *)0x0;
    }
    if (_Src != (void *)0x0) {
      memcpy(param_2,_Src,(longlong)*(int *)((longlong)_Src + 0x30) << 3);
      this->RecentFrame = GFrameNumberRenderThread;
      return true;
    }
  }
  return false;
}

// Reset @ 145b79950

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

void __thiscall FVulkanDescriptorSetCache::FCachedPool::Reset(FCachedPool *this)

{
  code *pcVar1;
  bool bVar2;
  VkResult VVar3;
  
  if ((this->Pool).DescriptorPool == (VkDescriptorPool_T *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DescriptorPool != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                       ,0x399,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  VVar3 = (*VulkanDynamicAPI::vkResetDescriptorPool)
                    (((this->Pool).Device)->Device,(this->Pool).DescriptorPool,0);
  if (VVar3 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar3,"VulkanRHI::vkResetDescriptorPool(Device->GetHandle(), DescriptorPool, 0)",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
               ,0x39a);
  }
  TSet<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>,TDefaultMapHashableKeyFuncs<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>,TDefaultMapHashableKeyFuncs<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry,0>,FDefaultSetAllocator>
           *)&this->SetsCache);
  TSet<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>,TDefaultMapHashableKeyFuncs<FVulkanDSetKey,VkDescriptorSet_T_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>,TDefaultMapHashableKeyFuncs<FVulkanDSetKey,VkDescriptorSet_T_*,0>,FDefaultSetAllocator>
           *)&this->SetCache);
  this->PoolSizesStatistic[0] = 0;
  this->PoolSizesStatistic[1] = 0;
  this->PoolSizesStatistic[2] = 0;
  this->PoolSizesStatistic[3] = 0;
  this->PoolSizesStatistic[4] = 0;
  this->PoolSizesStatistic[5] = 0;
  this->PoolSizesStatistic[6] = 0;
  this->PoolSizesStatistic[7] = 0;
  this->PoolSizesStatistic[8] = 0;
  this->PoolSizesStatistic[9] = 0;
  this->PoolSizesStatistic[10] = 0;
  return;
}

