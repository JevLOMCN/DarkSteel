// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 5

// RemoveAndCopyValue @ 145af2fa0

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
TMap<FVulkanBuffer_*,FVulkanPendingBufferLock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVulkanBuffer_*,FVulkanPendingBufferLock,0>_>
::RemoveAndCopyValue
          (TMap<FVulkanBuffer_*,FVulkanPendingBufferLock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVulkanBuffer_*,FVulkanPendingBufferLock,0>_>
           *this,FVulkanBuffer *param_1,FVulkanPendingBufferLock *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined1 *puVar9;
  uint *puVar10;
  uint uVar11;
  
  uVar11 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar9 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar9 = &this->field_0x38;
    }
    uVar11 = *(uint *)(puVar9 + (ulonglong)
                                (*(int *)&this->field_0x48 - 1U & (uVar11 >> 0x10 ^ uVar11)) * 4);
    if (uVar11 != 0xffffffff) {
      lVar5 = *(longlong *)this;
      do {
        lVar1 = (longlong)(int)uVar11 * 0x28;
        if (*(FVulkanBuffer **)(lVar1 + lVar5) == param_1) {
          puVar2 = (undefined8 *)(lVar1 + 8 + lVar5);
          uVar3 = puVar2[1];
          param_2->StagingBuffer = (FStagingBuffer *)*puVar2;
          param_2->Offset = (int)uVar3;
          param_2->Size = (int)((ulonglong)uVar3 >> 0x20);
          uVar3 = *(undefined8 *)(lVar1 + 0x18 + lVar5);
          param_2->LockMode = (int)uVar3;
          param_2->FirstLock = (bool)(char)((ulonglong)uVar3 >> 0x20);
          *(int3 *)&param_2->field_0x15 = (int3)((ulonglong)uVar3 >> 0x28);
          if ((-1 < (int)uVar11) && ((int)uVar11 < *(int *)&this->field_0x28)) {
            puVar9 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar9 = &this->field_0x10;
            }
            if ((*(uint *)(puVar9 + (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) *
                                    4) >> (uVar11 & 0x1f) & 1) != 0) goto LAB_145af30ca;
          }
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
LAB_145af30ca:
          lVar5 = *(longlong *)this;
          puVar9 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar9 = &this->field_0x38;
          }
          puVar10 = (uint *)(puVar9 + (longlong)*(int *)(lVar5 + lVar1 + 0x24) * 4);
          do {
            uVar4 = *puVar10;
            if (uVar4 == 0xffffffff) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash");
              if (bVar7) {
                pcVar6 = (code *)swi(3);
                uVar8 = (*pcVar6)();
                return (bool)uVar8;
              }
            }
            else if (uVar4 == uVar11) {
              *puVar10 = *(uint *)(lVar5 + lVar1 + 0x20);
              TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar11,1);
              return true;
            }
            puVar10 = (uint *)(*(longlong *)this + (longlong)(int)uVar4 * 0x28 + 0x20);
          } while( true );
        }
        uVar11 = *(uint *)(lVar1 + 0x20 + lVar5);
      } while (uVar11 != 0xffffffff);
    }
  }
  return false;
}

// TMap<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_> @ 145b00020

TMap<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
* __thiscall
TMap<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
::
TMap<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
          (TMap<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  return this;
}

// ~TMap<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_> @ 145b047c0

void __thiscall
TMap<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
::
~TMap<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
          (TMap<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVulkanShader_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVulkanShader_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVulkanShader_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// FindAndRemoveChecked @ 145b19e80

ulong64 __thiscall
TMap<void_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,unsigned___int64,0>_>
::FindAndRemoveChecked
          (TMap<void_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,unsigned___int64,0>_>
           *this,void *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  
  uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar5 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar5 = &this->field_0x38;
    }
    uVar7 = *(uint *)(puVar5 + (ulonglong)(*(int *)&this->field_0x48 - 1U & (uVar7 >> 0x10 ^ uVar7))
                               * 4);
    if (uVar7 != 0xffffffff) {
      do {
        if (*(void **)(*(longlong *)this + (longlong)(int)uVar7 * 0x18) == param_1) {
          if (uVar7 == 0xffffffff) goto LAB_145b19f1f;
          goto LAB_145b19f45;
        }
        uVar7 = *(uint *)(*(longlong *)this + 0x10 + (longlong)(int)uVar7 * 0x18);
      } while (uVar7 != 0xffffffff);
    }
  }
  uVar7 = 0xffffffff;
LAB_145b19f1f:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("PairId.IsValidId()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x556,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
LAB_145b19f45:
  uVar4 = *(ulong64 *)((longlong)(int)uVar7 * 0x18 + 8 + *(longlong *)this);
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&this->field_0x28)) {
    puVar5 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar5 = &this->field_0x10;
    }
    if ((*(uint *)(puVar5 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_145b19fb6;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
LAB_145b19fb6:
  lVar6 = *(longlong *)this + (longlong)(int)uVar7 * 0x18;
  puVar5 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar5 = &this->field_0x38;
  }
  puVar8 = (uint *)(puVar5 + (longlong)*(int *)(lVar6 + 0x14) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar7) {
      *puVar8 = *(uint *)(lVar6 + 0x10);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return uVar4;
    }
    puVar8 = (uint *)(*(longlong *)this + (longlong)(int)uVar1 * 0x18 + 0x10);
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}

// TMap<unsigned_char,enum_VkFragmentShadingRateCombinerOpKHR,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,enum_VkFragmentShadingRateCombinerOpKHR,0>_> @ 145b43bf0

TMap<unsigned_char,VkFragmentShadingRateCombinerOpKHR,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,VkFragmentShadingRateCombinerOpKHR,0>_>
* __thiscall
TMap<unsigned_char,enum_VkFragmentShadingRateCombinerOpKHR,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,enum_VkFragmentShadingRateCombinerOpKHR,0>_>
::
TMap<unsigned_char,enum_VkFragmentShadingRateCombinerOpKHR,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,enum_VkFragmentShadingRateCombinerOpKHR,0>_>
          (void *this,
          initializer_list<TPairInitializer<unsigned_char_const_&,VkFragmentShadingRateCombinerOpKHR_const_&>_>
          *param_1)

{
  TPairInitializer<unsigned_char_const_&,VkFragmentShadingRateCombinerOpKHR_const_&> *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  TPairInitializer<unsigned_char_const_&,VkFragmentShadingRateCombinerOpKHR_const_&> *pTVar8;
  ulonglong uVar9;
  byte *pbVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  uint uVar12;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar1 = param_1->_Last;
  uVar7 = 0;
  pTVar8 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0x80;
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  uVar12 = (uint)((longlong)pTVar1 - (longlong)pTVar8 >> 4);
  if (uVar12 == 0) goto joined_r0x000145b43e5d;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(this,uVar12);
  if (uVar12 < 4) {
    uVar12 = 1;
  }
  else {
    uVar5 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((*(int *)((longlong)this + 0x48) != 0) && ((int)uVar12 <= *(int *)((longlong)this + 0x48)))
  goto joined_r0x000145b43e5d;
  *(uint *)((longlong)this + 0x48) = uVar12;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x40),0,0,4);
  }
  if (uVar12 != 0) {
    uVar3 = uVar12;
    if (uVar12 < 2) {
      if (*(longlong *)((longlong)this + 0x40) != 0) {
        uVar3 = 0;
        goto LAB_145b43cd5;
      }
    }
    else {
LAB_145b43cd5:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)((longlong)this + 0x40),0,uVar3,4);
    }
    if (0 < (int)uVar12) {
      uVar9 = (ulonglong)uVar12;
      uVar5 = uVar7;
      do {
        lVar4 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar4 = *(longlong *)((longlong)this + 0x40);
        }
        uVar2 = uVar5 & (longlong)(int)uVar12 - 1U;
        uVar5 = uVar5 + 1;
        *(undefined4 *)(lVar4 + uVar2 * 4) = 0xffffffff;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  if (*(int *)((longlong)this + 0x48) != 0) {
    uVar12 = *(uint *)((longlong)this + 0x28);
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_78 = (uchar *)0x100000000;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar12 != 0) {
      pTVar11 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar11 = pTStack_70;
      }
      uVar3 = *(uint *)(pTVar11->AllocatorInstance).InlineData;
      uVar5 = uVar7;
      while (uVar3 == 0) {
        iVar6 = (int)uVar7;
        uStack_60 = (int)uVar5 + 0x20;
        uVar5 = (ulonglong)uStack_60;
        uVar3 = iVar6 + 1;
        uVar7 = (ulonglong)local_78 >> 0x20;
        local_78 = (uchar *)CONCAT44((int)uVar7,uVar3);
        uVar7 = (ulonglong)uVar3;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar3)
        goto LAB_145b43dcb;
        uVar3 = *(uint *)((pTVar11->AllocatorInstance).InlineData + (longlong)iVar6 * 4 + 4);
      }
      local_78 = (uchar *)CONCAT44(-uVar3 & uVar3,SUB84(local_78,0));
      uVar7 = (ulonglong)(-uVar3 & uVar3) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar12 < (int)uStack_64) {
LAB_145b43dcb:
        uVar7 = (ulonglong)uVar12;
        uStack_64 = uVar12;
      }
    }
    local_68 = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_50._padding_ = (longlong)local_78;
    local_58 = this;
    local_50.Array = pTStack_70;
    if ((int)uVar7 < (int)uVar12) {
      do {
        pbVar10 = (byte *)((longlong)(int)uVar7 * 0x10 + *local_58);
        uVar12 = *(int *)((longlong)this + 0x48) - 1U & (uint)*pbVar10;
        *(uint *)(pbVar10 + 0xc) = uVar12;
        lVar4 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar4 = *(longlong *)((longlong)this + 0x40);
        }
        uVar5 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (ulonglong)uVar12;
        *(undefined4 *)(pbVar10 + 8) = *(undefined4 *)(lVar4 + uVar5 * 4);
        *(int *)(lVar4 + uVar5 * 4) = (int)uVar7;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar7 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x000145b43e5d:
  for (; pTVar8 != pTVar1; pTVar8 = pTVar8 + 1) {
    local_78 = pTVar8->Key;
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)pTVar8->Value;
    TSet<TTuple<unsigned_char,enum_VkFragmentShadingRateCombinerOpKHR>,TDefaultMapHashableKeyFuncs<unsigned_char,enum_VkFragmentShadingRateCombinerOpKHR,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<unsigned_char_const_&,enum_VkFragmentShadingRateCombinerOpKHR_const_&>_>
              (this,(TPairInitializer<unsigned_char_const_&,VkFragmentShadingRateCombinerOpKHR_const_&>
                     *)&stack0x00000008,(bool *)&local_78);
  }
  return this;
}

