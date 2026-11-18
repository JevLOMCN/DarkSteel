// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 3

// ~FVulkanDescriptorPoolSetContainer @ 145b4d3a0

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
FVulkanDescriptorPoolSetContainer::~FVulkanDescriptorPoolSetContainer
          (FVulkanDescriptorPoolSetContainer *this)

{
  TMap<unsigned_int,FVulkanTypedDescriptorPoolSet_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanTypedDescriptorPoolSet_*,0>_>
  *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  void *pvVar4;
  FVulkanDescriptorPool *this_01;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  this_00 = &this->TypedDescriptorPools;
  iVar14 = 0;
  iVar3 = *(int *)&(this->TypedDescriptorPools).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->TypedDescriptorPools).field_0x10
  ;
  iVar16 = 0;
  uVar9 = 1;
  iVar10 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->TypedDescriptorPools).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)TStack_60.Array;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar10 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145b4d43e;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar9 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iVar10 = local_res10 + -1 + iVar16;
    if (iVar3 < iVar10) {
      iVar10 = iVar3;
    }
  }
LAB_145b4d43e:
  uVar13 = *(uint *)&(this->TypedDescriptorPools).field_0x28;
  puVar1 = &(this->TypedDescriptorPools).field_0x10;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar10;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar9,iVar14);
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iVar10;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->TypedDescriptorPools).field_0x8 -
                       *(int *)&(this->TypedDescriptorPools).field_0x34);
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = *(uint *)&(this->TypedDescriptorPools).field_0x28;
  if (uVar13 != uVar9) {
    puVar15 = *(undefined1 **)&(this->TypedDescriptorPools).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145b4d540;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar9 < (int)uVar13) {
      uVar13 = uVar9;
    }
  }
LAB_145b4d540:
  while( true ) {
    if (*(int *)&(this->TypedDescriptorPools).field_0x8 -
        *(int *)&(this->TypedDescriptorPools).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVulkanTypedDescriptorPoolSet_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pvVar4 = *(void **)(*(longlong *)&this_00->field_0x0 + 8 +
                       (longlong)TStack_60.CurrentBitIndex * 0x18);
    if (pvVar4 != (void *)0x0) {
      puVar7 = *(undefined8 **)((longlong)pvVar4 + 0x18);
      while (puVar7 != (undefined8 *)0x0) {
        this_01 = (FVulkanDescriptorPool *)*puVar7;
        puVar5 = (undefined8 *)puVar7[1];
        if (this_01 != (FVulkanDescriptorPool *)0x0) {
          FVulkanDescriptorPool::~FVulkanDescriptorPool(this_01);
          ::operator_delete(this_01,0x28);
        }
        ::operator_delete(puVar7,0x10);
        puVar7 = puVar5;
      }
      *(undefined4 *)((longlong)pvVar4 + 0x10) = 0;
      ::operator_delete(pvVar4,0x28);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TSet<TTuple<unsigned_int,FVulkanTypedDescriptorPoolSet_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanTypedDescriptorPoolSet_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,FVulkanTypedDescriptorPoolSet_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanTypedDescriptorPoolSet_*,0>,FDefaultSetAllocator>
           *)this_00);
  *(undefined4 *)&(this->TypedDescriptorPools).field_0x48 = 0;
  pvVar4 = *(void **)&(this->TypedDescriptorPools).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVulkanTypedDescriptorPoolSet_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVulkanTypedDescriptorPoolSet_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVulkanTypedDescriptorPoolSet_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  return;
}

// AcquireTypedPoolSet @ 145b566f0

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

FVulkanTypedDescriptorPoolSet * __thiscall
FVulkanDescriptorPoolSetContainer::AcquireTypedPoolSet
          (FVulkanDescriptorPoolSetContainer *this,FVulkanDescriptorSetsLayout *param_1)

{
  longlong lVar1;
  int iVar2;
  FVulkanTypedDescriptorPoolSet *pFVar3;
  FVulkanDescriptorPool *this_00;
  FVulkanDevice *pFVar4;
  FVulkanDevice *pFVar5;
  FVulkanDevice *pFVar6;
  undefined1 *puVar7;
  uint local_res8 [2];
  TPairInitializer<unsigned_int_const_&,FVulkanTypedDescriptorPoolSet_*_const_&> local_res10;
  uint *local_38;
  FVulkanTypedDescriptorPoolSet ***local_30;
  
  local_res8[0] = *(uint *)((longlong)&param_1->_padding_ + 4);
  if (*(int *)&(this->TypedDescriptorPools).field_0x8 !=
      *(int *)&(this->TypedDescriptorPools).field_0x34) {
    puVar7 = *(undefined1 **)&(this->TypedDescriptorPools).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->TypedDescriptorPools).field_0x38;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->TypedDescriptorPools).field_0x48 - 1U & local_res8[0]
                              ) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->TypedDescriptorPools + (longlong)iVar2 * 0x18;
        if (*(uint *)(*(longlong *)&this->TypedDescriptorPools + (longlong)iVar2 * 0x18) ==
            local_res8[0]) {
          if ((lVar1 != 0) &&
             (local_res10.Value = *(FVulkanTypedDescriptorPoolSet ***)(lVar1 + 8),
             (FVulkanTypedDescriptorPoolSet *)local_res10.Value !=
             (FVulkanTypedDescriptorPoolSet *)0x0)) {
            return (FVulkanTypedDescriptorPoolSet *)local_res10.Value;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  pFVar3 = ::operator_new(0x28);
  if (pFVar3 == (FVulkanTypedDescriptorPoolSet *)0x0) {
    pFVar3 = (FVulkanTypedDescriptorPoolSet *)0x0;
  }
  else {
    pFVar4 = this->Device;
    pFVar3->Layout = param_1;
    pFVar6 = (FVulkanDevice *)0x0;
    pFVar3->Device = pFVar4;
    pFVar3->PoolsCount = 0;
    pFVar3->PoolListHead = (TList<FVulkanDescriptorPool_*> *)0x0;
    pFVar3->PoolListCurrent = (TList<FVulkanDescriptorPool_*> *)0x0;
    this_00 = ::operator_new(0x28);
    pFVar4 = pFVar6;
    if (this_00 != (FVulkanDescriptorPool *)0x0) {
      pFVar4 = (FVulkanDevice *)
               FVulkanDescriptorPool::FVulkanDescriptorPool
                         (this_00,pFVar3->Device,pFVar3->Layout,0x20);
    }
    if (pFVar3->PoolListCurrent == (TList<FVulkanDescriptorPool_*> *)0x0) {
      pFVar5 = ::operator_new(0x10);
      if (pFVar5 != (FVulkanDevice *)0x0) {
        (pFVar5->GlobalSamplers).Elements[0] = (FVulkanSamplerState *)pFVar4;
        (pFVar5->GlobalSamplers).Elements[1] = (FVulkanSamplerState *)0x0;
        pFVar6 = pFVar5;
      }
      pFVar3->PoolListHead = (TList<FVulkanDescriptorPool_*> *)pFVar6;
      pFVar3->PoolListCurrent = (TList<FVulkanDescriptorPool_*> *)pFVar6;
      pFVar3->PoolsCount = pFVar3->PoolsCount + 1;
    }
    else {
      pFVar5 = ::operator_new(0x10);
      if (pFVar5 != (FVulkanDevice *)0x0) {
        (pFVar5->GlobalSamplers).Elements[0] = (FVulkanSamplerState *)pFVar4;
        (pFVar5->GlobalSamplers).Elements[1] = (FVulkanSamplerState *)0x0;
        pFVar6 = pFVar5;
      }
      pFVar3->PoolListCurrent->Next = (TList<FVulkanDescriptorPool_*> *)pFVar6;
      pFVar3->PoolListCurrent = pFVar3->PoolListCurrent->Next;
      pFVar3->PoolsCount = pFVar3->PoolsCount + 1;
    }
  }
  local_38 = local_res8;
  local_30 = &local_res10.Value;
  local_res10.Value = (FVulkanTypedDescriptorPoolSet **)pFVar3;
  TSet<TTuple<unsigned_int,FVulkanTypedDescriptorPoolSet_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanTypedDescriptorPoolSet_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,FVulkanTypedDescriptorPoolSet_*_const_&>_>
            ((TSet<TTuple<unsigned_int,FVulkanTypedDescriptorPoolSet_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanTypedDescriptorPoolSet_*,0>,FDefaultSetAllocator>
              *)&this->TypedDescriptorPools,&local_res10,(bool *)&local_38);
  return (FVulkanTypedDescriptorPoolSet *)local_res10.Value;
}

// Reset @ 145b79ae0

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

void __thiscall FVulkanDescriptorPoolSetContainer::Reset(FVulkanDescriptorPoolSetContainer *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  VkResult VVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->TypedDescriptorPools).field_0x28;
  puVar1 = &(this->TypedDescriptorPools).field_0x10;
  iVar14 = 0;
  uVar8 = 1;
  iVar16 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->TypedDescriptorPools).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    iVar16 = 0;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145b79b7e;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar8 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iVar9 = local_res10 + -1 + iVar16;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_145b79b7e:
  uVar13 = *(uint *)&(this->TypedDescriptorPools).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar14);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->TypedDescriptorPools).field_0x8 -
                       *(int *)&(this->TypedDescriptorPools).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->TypedDescriptorPools).field_0x28;
  if (uVar13 != uVar8) {
    puVar15 = *(undefined1 **)&(this->TypedDescriptorPools).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145b79c80;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
    }
  }
LAB_145b79c80:
  while( true ) {
    if (*(int *)&(this->TypedDescriptorPools).field_0x8 -
        *(int *)&(this->TypedDescriptorPools).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVulkanTypedDescriptorPoolSet_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar11 = *(longlong *)
              (*(longlong *)&this->TypedDescriptorPools + 8 +
              (longlong)TStack_60.CurrentBitIndex * 0x18);
    for (plVar4 = *(longlong **)(lVar11 + 0x18); plVar4 != (longlong *)0x0;
        plVar4 = (longlong *)plVar4[1]) {
      plVar5 = (longlong *)*plVar4;
      if (((VkDescriptorPool_T *)plVar5[4] != (VkDescriptorPool_T *)0x0) &&
         (VVar10 = (*VulkanDynamicAPI::vkResetDescriptorPool)
                             (*(VkDevice_T **)(*plVar5 + 0x30),(VkDescriptorPool_T *)plVar5[4],0),
         VVar10 != VK_SUCCESS)) {
        VulkanRHI::VerifyVulkanResult
                  (VVar10,"VulkanRHI::vkResetDescriptorPool(Device->GetHandle(), DescriptorPool, 0)"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                   ,0x74);
      }
      *(undefined4 *)((longlong)plVar5 + 0xc) = 0;
    }
    *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar11 + 0x18);
    TStack_60._padding_._4_4_ = (uint)((ulonglong)TStack_60._padding_ >> 0x20);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

