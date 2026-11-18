// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 10

// FindChecked @ 145ae5170

TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_> * __thiscall
TMapBase<unsigned_int,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>,0>_>
::FindChecked(TMapBase<unsigned_int,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>,0>_>
              *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(uint *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>
                    *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_> *)
           &DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_> *)
           (*pcVar3)();
  return pTVar6;
}

// FindOrAddImpl<VulkanRHI::FDeviceMemoryBlockKey_const_&> @ 145af95c0

FDeviceMemoryBlock * __thiscall
TMapBase<VulkanRHI::FDeviceMemoryBlockKey,VulkanRHI::FDeviceMemoryBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<VulkanRHI::FDeviceMemoryBlockKey,VulkanRHI::FDeviceMemoryBlock,0>_>
::FindOrAddImpl<VulkanRHI::FDeviceMemoryBlockKey_const_&>
          (TMapBase<VulkanRHI::FDeviceMemoryBlockKey,VulkanRHI::FDeviceMemoryBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<VulkanRHI::FDeviceMemoryBlockKey,VulkanRHI::FDeviceMemoryBlock,0>_>
           *this,uint param_1,FDeviceMemoryBlockKey *param_2)

{
  uint *puVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [2];
  FDeviceMemoryBlockKey *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar2 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar1 = (uint *)((longlong)(int)uVar2 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if ((*puVar1 == param_2->MemoryTypeIndex) &&
           (*(ulong64 *)(puVar1 + 2) == param_2->BlockSize)) {
          if ((uVar2 != 0xffffffff) && (puVar1 != (uint *)0x0)) {
            return (FDeviceMemoryBlock *)(puVar1 + 4);
          }
          break;
        }
        uVar2 = puVar1[0xc];
      } while (uVar2 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<VulkanRHI::FDeviceMemoryBlockKey,VulkanRHI::FDeviceMemoryBlock>,TDefaultMapHashableKeyFuncs<VulkanRHI::FDeviceMemoryBlockKey,VulkanRHI::FDeviceMemoryBlock,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<VulkanRHI::FDeviceMemoryBlockKey_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<VulkanRHI::FDeviceMemoryBlockKey_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FDeviceMemoryBlock *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 0x10);
}

// FindOrAddImpl<TRefCountPtr<FVulkanSyncPoint>_> @ 145af9690

TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<TRefCountPtr<FVulkanSyncPoint>_>
          (TMapBase<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,TRefCountPtr<FVulkanSyncPoint> *param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  TRefCountPtr<FVulkanSyncPoint> *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((FVulkanSyncPoint *)*plVar2 == param_2->Reference) {
          if (plVar2 != (longlong *)0x0) {
            return (TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_> *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TRefCountPtr<FVulkanSyncPoint>_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TRefCountPtr<FVulkanSyncPoint>_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindChecked @ 145b1a060

/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

uint * __thiscall
TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
::FindChecked(void *this,VkDescriptorType param_1)

{
  code *pcVar1;
  bool bVar2;
  VkDescriptorType VVar3;
  uint *puVar4;
  VkDescriptorType *pVVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    VVar3 = *(VkDescriptorType *)
             (lVar6 + (ulonglong)
                      (*(int *)((longlong)this + 0x48) - VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER &
                      param_1) * 4);
    if (VVar3 != ~VK_DESCRIPTOR_TYPE_SAMPLER) {
      do {
        pVVar5 = (VkDescriptorType *)((longlong)(int)VVar3 * 0x10 + *(longlong *)this);
        if (*pVVar5 == param_1) {
          if (pVVar5 != (VkDescriptorType *)0x0) {
            return pVVar5 + 1;
          }
          break;
        }
        VVar3 = pVVar5[2];
      } while (VVar3 != ~VK_DESCRIPTOR_TYPE_SAMPLER);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (uint *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  puVar4 = (uint *)(*pcVar1)();
  return puVar4;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 145b3e170

void __thiscall
TMapBase<unsigned___int64,FVulkanPipelineSize,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanPipelineSize,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<unsigned___int64,FVulkanPipelineSize,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanPipelineSize,0>_>
           *this,TArray<FVulkanPipelineSize,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar12 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar12,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar12 = 1;
  iVar13 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar14;
    while (uVar4 == 0) {
      lVar9 = (longlong)iVar10;
      iVar13 = iVar13 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_145b3e252;
      uVar4 = puVar14[lVar9 + 1];
    }
    uVar12 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar12 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar13;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_145b3e252:
  TStack_40._padding_ = CONCAT44(uVar12,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar13;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar11 = (FScriptContainerElement *)
                (*(longlong *)&(this->Pairs).Elements + 8 +
                (longlong)TStack_40.CurrentBitIndex * 0x20);
      if (((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + (longlong)*piVar1 * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      uVar7 = *(undefined8 *)(pFVar11 + 8);
      pFVar5 = (param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      *(undefined8 *)pFVar5 = *(undefined8 *)pFVar11;
      *(undefined8 *)(pFVar5 + 8) = uVar7;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 145b67500

FVulkanComputePipeline ** __thiscall
TMapBase<unsigned___int64,FVulkanComputePipeline_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanComputePipeline_*,0>_>
::Find(TMapBase<unsigned___int64,FVulkanComputePipeline_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanComputePipeline_*,0>_>
       *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FVulkanComputePipeline **ppFVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          ppFVar4 = (FVulkanComputePipeline **)0x0;
          if (lVar1 != 0) {
            ppFVar4 = (FVulkanComputePipeline **)(lVar1 + 8);
          }
          return ppFVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FVulkanComputePipeline **)0x0;
}

// Find @ 145b67580

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

FVulkanShader ** __thiscall
TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
::Find(TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
       *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FVulkanShader **ppFVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          ppFVar4 = (FVulkanShader **)0x0;
          if (lVar1 != 0) {
            ppFVar4 = (FVulkanShader **)(lVar1 + 8);
          }
          return ppFVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FVulkanShader **)0x0;
}

// Find @ 145b67600

FVulkanPipelineSize * __thiscall
TMapBase<unsigned___int64,FVulkanPipelineSize,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanPipelineSize,0>_>
::Find(TMapBase<unsigned___int64,FVulkanPipelineSize,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanPipelineSize,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  FVulkanPipelineSize *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FVulkanPipelineSize *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pFVar3 = (FVulkanPipelineSize *)(puVar2 + 1);
          }
          return pFVar3;
        }
        iVar1 = (int)puVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (FVulkanPipelineSize *)0x0;
}

// FindChecked @ 145b67670

FBinarySemaphoreSignalInfo * __thiscall
TMapBase<VkSemaphore_T_*,FBinarySemaphoreSignalInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<VkSemaphore_T_*,FBinarySemaphoreSignalInfo,0>_>
::FindChecked(TMapBase<VkSemaphore_T_*,FBinarySemaphoreSignalInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<VkSemaphore_T_*,FBinarySemaphoreSignalInfo,0>_>
              *this,VkSemaphore_T *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FBinarySemaphoreSignalInfo *pFVar4;
  ForElementType<FSetElementId> FVar5;
  longlong *plVar6;
  uint uVar7;
  
  uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((VkSemaphore_T *)*plVar6 == param_1) {
          if (plVar6 != (longlong *)0x0) {
            return (FBinarySemaphoreSignalInfo *)(plVar6 + 1);
          }
          break;
        }
        iVar3 = (int)plVar6[3];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FBinarySemaphoreSignalInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FBinarySemaphoreSignalInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 145b67740

/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

uint * __thiscall
TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
::FindChecked(void *this,VkDescriptorType param_1)

{
  code *pcVar1;
  bool bVar2;
  VkDescriptorType VVar3;
  uint *puVar4;
  VkDescriptorType *pVVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    VVar3 = *(VkDescriptorType *)
             (lVar6 + (ulonglong)
                      (*(int *)((longlong)this + 0x48) - VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER &
                      param_1) * 4);
    if (VVar3 != ~VK_DESCRIPTOR_TYPE_SAMPLER) {
      do {
        pVVar5 = (VkDescriptorType *)((longlong)(int)VVar3 * 0x10 + *(longlong *)this);
        if (*pVVar5 == param_1) {
          if (pVVar5 != (VkDescriptorType *)0x0) {
            return pVVar5 + 1;
          }
          break;
        }
        VVar3 = pVVar5[2];
      } while (VVar3 != ~VK_DESCRIPTOR_TYPE_SAMPLER);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (uint *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  puVar4 = (uint *)(*pcVar1)();
  return puVar4;
}

