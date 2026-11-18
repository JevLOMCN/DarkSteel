// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 9

// operator= @ 1471e1a80

FArchetypeGroups * __thiscall
UE::Mass::FArchetypeGroups::operator=(FArchetypeGroups *this,FArchetypeGroups *param_1)

{
  if (this != param_1) {
    TSparseArray<UE::Mass::FArchetypeGroupID,FDefaultSparseArrayAllocator>::
    Move<TSparseArray<UE::Mass::FArchetypeGroupID,FDefaultSparseArrayAllocator>_>
              (&this->IDContainer,&param_1->IDContainer);
  }
  return this;
}

// operator= @ 1471e1ab0

FArchetypeGroups * __thiscall
UE::Mass::FArchetypeGroups::operator=(FArchetypeGroups *this,FArchetypeGroups *param_1)

{
  TSparseArray<UE::Mass::FArchetypeGroupID,FDefaultSparseArrayAllocator>::operator=
            (&this->IDContainer,&param_1->IDContainer);
  return this;
}

// operator== @ 1471e25b0

bool __thiscall
UE::Mass::FArchetypeGroups::operator==(FArchetypeGroups *this,FArchetypeGroups *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  
  iVar6 = *(int *)&(this->IDContainer).field_0x8;
  if (iVar6 != *(int *)&(param_1->IDContainer).field_0x8) {
    return false;
  }
  iVar8 = 0;
  if (0 < iVar6) {
    lVar11 = 0;
    do {
      if (((iVar8 < 0) || (*(int *)&(this->IDContainer).field_0x28 <= iVar8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      puVar2 = *(undefined1 **)&(this->IDContainer).field_0x20;
      puVar7 = &(this->IDContainer).field_0x10;
      if (puVar2 != (undefined1 *)0x0) {
        puVar7 = puVar2;
      }
      uVar9 = 1 << ((byte)iVar8 & 0x1f);
      iVar6 = iVar8;
      if (iVar8 < 0) {
        iVar6 = iVar8 + 0x1f;
      }
      lVar1 = (longlong)(iVar6 >> 5) * 4;
      uVar10 = uVar9 & *(uint *)(puVar7 + lVar1);
      if (((iVar8 < 0) || (*(int *)&(param_1->IDContainer).field_0x28 <= iVar8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      puVar2 = *(undefined1 **)&(param_1->IDContainer).field_0x20;
      puVar7 = &(param_1->IDContainer).field_0x10;
      if (puVar2 != (undefined1 *)0x0) {
        puVar7 = puVar2;
      }
      if (((uVar10 != 0) != ((*(uint *)(puVar7 + lVar1) & uVar9) != 0)) ||
         ((uVar10 != 0 &&
          (*(int *)(lVar11 + *(longlong *)&this->IDContainer) !=
           *(int *)(lVar11 + *(longlong *)&param_1->IDContainer))))) {
        return false;
      }
      iVar8 = iVar8 + 1;
      lVar11 = lVar11 + 8;
    } while (iVar8 < *(int *)&(this->IDContainer).field_0x8);
  }
  return true;
}

// Add @ 1471eb6c0

void __thiscall
UE::Mass::FArchetypeGroups::Add(FArchetypeGroups *this,FArchetypeGroupHandle param_1)

{
  FSparseArrayAllocationInfo *pFVar1;
  FArchetypeGroupType FVar2;
  uint *puVar3;
  undefined1 *puVar4;
  FArchetypeGroupID FStackX_14;
  FSparseArrayAllocationInfo local_18;
  
  FVar2 = param_1.GroupType.Identifier;
  FStackX_14 = param_1.GroupID.ID;
  if ((-1 < (int)FVar2.Identifier) &&
     ((int)FVar2.Identifier < *(int *)&(this->IDContainer).field_0x28)) {
    puVar4 = *(undefined1 **)&(this->IDContainer).field_0x20;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->IDContainer).field_0x10;
    }
    if ((*(uint *)(puVar4 + (longlong)
                            ((int)(FVar2.Identifier + (FVar2.Identifier >> 0x1f & 0x1f)) >> 5) * 4)
         >> (FVar2.Identifier & 0x1f) & 1) != 0) {
      *(uint *)(*(longlong *)&this->IDContainer + (longlong)(int)FVar2.Identifier * 8) =
           FStackX_14.ID;
      return;
    }
  }
  if ((-1 < (int)FVar2.Identifier) &&
     ((int)FVar2.Identifier < *(int *)&(this->IDContainer).field_0x28)) {
    puVar4 = *(undefined1 **)&(this->IDContainer).field_0x20;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->IDContainer).field_0x10;
    }
    if ((*(uint *)(puVar4 + (longlong)
                            ((int)(FVar2.Identifier + (FVar2.Identifier >> 0x1f & 0x1f)) >> 5) * 4)
         >> (FVar2.Identifier & 0x1f) & 1) != 0) {
      puVar3 = (uint *)(*(longlong *)&this->IDContainer + (longlong)(int)FVar2.Identifier * 8);
      goto LAB_1471eb789;
    }
  }
  pFVar1 = TSparseArrayBase<4,4,FDefaultSparseArrayAllocator>::InsertUninitialized
                     ((TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> *)this,&local_18,
                      FVar2.Identifier);
  puVar3 = pFVar1->Pointer;
LAB_1471eb789:
  if (puVar3 != (uint *)0x0) {
    *puVar3 = FStackX_14.ID;
  }
  return;
}

// Add @ 1471eb7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FArchetypeGroups * __thiscall
UE::Mass::FArchetypeGroups::Add
          (FArchetypeGroups *this,FArchetypeGroups *__return_storage_ptr__,
          FArchetypeGroupHandle param_1)

{
  void *pvVar1;
  int iVar2;
  FSparseArrayAllocationInfo *pFVar3;
  FScriptContainerElement *pFVar4;
  FArchetypeGroupType FVar5;
  undefined1 *puVar6;
  ForElementType<unsigned_int> FVar7;
  FArchetypeGroupID FStackX_1c;
  undefined1 auStackY_a8 [32];
  FSparseArrayAllocationInfo local_78;
  TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_68.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.AllocationFlags._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_68._48_8_ = _UNK_150631d98;
  TSparseArray<UE::Mass::FArchetypeGroupID,FDefaultSparseArrayAllocator>::operator=
            ((TSparseArray<UE::Mass::FArchetypeGroupID,FDefaultSparseArrayAllocator> *)&local_68,
             &this->IDContainer);
  FVar5 = param_1.GroupType.Identifier;
  FStackX_1c = param_1.GroupID.ID;
  if ((int)FVar5.Identifier < 0) {
LAB_1471eb8aa:
    pFVar3 = TSparseArrayBase<4,4,FDefaultSparseArrayAllocator>::InsertUninitialized
                       (&local_68,&local_78,FVar5.Identifier);
    pFVar4 = pFVar3->Pointer;
  }
  else {
    if ((int)FVar5.Identifier < *(int *)&(this->IDContainer).field_0x28) {
      puVar6 = *(undefined1 **)&(this->IDContainer).field_0x20;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(this->IDContainer).field_0x10;
      }
      if ((*(uint *)(puVar6 + (longlong)
                              ((int)(FVar5.Identifier + (FVar5.Identifier >> 0x1f & 0x1f)) >> 5) * 4
                    ) >> (FVar5.Identifier & 0x1f) & 1) != 0) {
        *(uint *)(local_68.Data.AllocatorInstance.Data + (longlong)(int)FVar5.Identifier * 8) =
             FStackX_1c.ID;
        goto LAB_1471eb8c8;
      }
    }
    if (((int)FVar5.Identifier < 0) || (local_68.AllocationFlags.NumBits <= (int)FVar5.Identifier))
    goto LAB_1471eb8aa;
    FVar7 = (ForElementType<unsigned_int>)&local_68.AllocationFlags;
    if (local_68.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FVar7 = local_68.AllocationFlags.AllocatorInstance.SecondaryData;
    }
    if ((*(uint *)((longlong)FVar7 +
                  (longlong)((int)(FVar5.Identifier + (FVar5.Identifier >> 0x1f & 0x1f)) >> 5) * 4)
         >> (FVar5.Identifier & 0x1f) & 1) == 0) goto LAB_1471eb8aa;
    pFVar4 = local_68.Data.AllocatorInstance.Data + (longlong)(int)FVar5.Identifier * 8;
  }
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    *(uint *)pFVar4 = FStackX_1c.ID;
  }
LAB_1471eb8c8:
  *(undefined8 *)&__return_storage_ptr__->IDContainer = 0;
  *(undefined8 *)&(__return_storage_ptr__->IDContainer).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->IDContainer).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->IDContainer).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->IDContainer).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->IDContainer).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->IDContainer).field_0x34 = 0;
  if ((TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> *)__return_storage_ptr__ != &local_68) {
    *(FScriptContainerElement **)&__return_storage_ptr__->IDContainer =
         local_68.Data.AllocatorInstance.Data;
    *(int *)&(__return_storage_ptr__->IDContainer).field_0x8 = local_68.Data.ArrayNum;
    *(int *)&(__return_storage_ptr__->IDContainer).field_0xc = local_68.Data.ArrayMax;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if ((TBitArray<FDefaultBitArrayAllocator> *)&(__return_storage_ptr__->IDContainer).field_0x10 !=
      &local_68.AllocationFlags) {
    if (local_68.AllocationFlags.AllocatorInstance.SecondaryData ==
        (ForElementType<unsigned_int>)0x0) {
      (__return_storage_ptr__->IDContainer).field_0x10 =
           local_68.AllocationFlags.AllocatorInstance.InlineData[0];
      (__return_storage_ptr__->IDContainer).field_0x11 =
           local_68.AllocationFlags.AllocatorInstance.InlineData[1];
      (__return_storage_ptr__->IDContainer).field_0x12 =
           local_68.AllocationFlags.AllocatorInstance.InlineData[2];
      (__return_storage_ptr__->IDContainer).field_0x13 =
           local_68.AllocationFlags.AllocatorInstance.InlineData[3];
      (__return_storage_ptr__->IDContainer).field_0x14 =
           local_68.AllocationFlags.AllocatorInstance.InlineData[4];
      (__return_storage_ptr__->IDContainer).field_0x15 =
           local_68.AllocationFlags.AllocatorInstance.InlineData[5];
      (__return_storage_ptr__->IDContainer).field_0x16 =
           local_68.AllocationFlags.AllocatorInstance.InlineData[6];
      (__return_storage_ptr__->IDContainer).field_0x17 =
           local_68.AllocationFlags.AllocatorInstance.InlineData[7];
      (__return_storage_ptr__->IDContainer).field_0x18 =
           local_68.AllocationFlags.AllocatorInstance.InlineData[8];
      (__return_storage_ptr__->IDContainer).field_0x19 =
           local_68.AllocationFlags.AllocatorInstance.InlineData[9];
      (__return_storage_ptr__->IDContainer).field_0x1a =
           local_68.AllocationFlags.AllocatorInstance.InlineData[10];
      (__return_storage_ptr__->IDContainer).field_0x1b =
           local_68.AllocationFlags.AllocatorInstance.InlineData[0xb];
      (__return_storage_ptr__->IDContainer).field_0x1c =
           local_68.AllocationFlags.AllocatorInstance.InlineData[0xc];
      (__return_storage_ptr__->IDContainer).field_0x1d =
           local_68.AllocationFlags.AllocatorInstance.InlineData[0xd];
      (__return_storage_ptr__->IDContainer).field_0x1e =
           local_68.AllocationFlags.AllocatorInstance.InlineData[0xe];
      (__return_storage_ptr__->IDContainer).field_0x1f =
           local_68.AllocationFlags.AllocatorInstance.InlineData[0xf];
    }
    pvVar1 = *(void **)&(__return_storage_ptr__->IDContainer).field_0x20;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    *(ForElementType<unsigned_int> *)&(__return_storage_ptr__->IDContainer).field_0x20 =
         local_68.AllocationFlags.AllocatorInstance.SecondaryData;
    *(int *)&(__return_storage_ptr__->IDContainer).field_0x28 = local_68.AllocationFlags.NumBits;
    *(int *)&(__return_storage_ptr__->IDContainer).field_0x2c = local_68.AllocationFlags.MaxBits;
    local_68.AllocationFlags.NumBits = 0;
    local_68.AllocationFlags.MaxBits = 0;
    local_68.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  }
  *(int *)&(__return_storage_ptr__->IDContainer).field_0x30 = local_68.FirstFreeIndex;
  *(int *)&(__return_storage_ptr__->IDContainer).field_0x34 = local_68.NumFreeIndices;
  local_68.FirstFreeIndex = -1;
  local_68.NumFreeIndices = 0;
  iVar2 = local_68.Data.ArrayMax;
  local_68.Data._8_8_ = local_68.Data._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&local_68,0,&local_68.Data.ArrayMax);
  }
  iVar2 = local_68.AllocationFlags.MaxBits;
  local_68.AllocationFlags._24_8_ = (ulonglong)(uint)local_68.AllocationFlags.MaxBits << 0x20;
  local_68.FirstFreeIndex = -1;
  local_68.NumFreeIndices = 0;
  if (0x80 < (uint)iVar2) {
    local_68.AllocationFlags.NumBits = 0;
    local_68.AllocationFlags.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68.AllocationFlags,0);
  }
  if (local_68.AllocationFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FMemory::Free((void *)local_68.AllocationFlags.AllocatorInstance.SecondaryData);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// IsShrunk @ 147233030

bool __thiscall UE::Mass::FArchetypeGroups::IsShrunk(FArchetypeGroups *this)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  iVar1 = *(int *)&(this->IDContainer).field_0x8;
  if (iVar1 == 0) {
    return true;
  }
  uVar3 = iVar1 - 1;
  if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)&(this->IDContainer).field_0x28)) {
    puVar2 = *(undefined1 **)&(this->IDContainer).field_0x20;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->IDContainer).field_0x10;
    }
    if ((*(uint *)(puVar2 + (longlong)((int)(uVar3 + ((int)uVar3 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar3 & 0x1f) & 1) != 0) {
      return true;
    }
  }
  return false;
}

// Remove @ 147244240

void __thiscall
UE::Mass::FArchetypeGroups::Remove(FArchetypeGroups *this,FArchetypeGroupType param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if ((-1 < (int)param_1.Identifier) &&
     ((int)param_1.Identifier < *(int *)&(this->IDContainer).field_0x28)) {
    puVar2 = *(undefined1 **)&(this->IDContainer).field_0x20;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->IDContainer).field_0x10;
    }
    if (((*(uint *)(puVar2 + (ulonglong)(param_1.Identifier >> 5) * 4) >>
          (param_1.Identifier & 0x1f) & 1) != 0) &&
       (iVar1 = *(int *)&(this->IDContainer).field_0x8,
       TSparseArrayBase<4,4,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                 ((TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> *)this,param_1.Identifier,1),
       iVar1 - 1U == param_1.Identifier)) {
      TSparseArrayBase<4,4,FDefaultSparseArrayAllocator>::Shrink
                ((TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> *)this);
    }
  }
  return;
}

// Remove @ 1472442c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FArchetypeGroups * __thiscall
UE::Mass::FArchetypeGroups::Remove
          (FArchetypeGroups *this,FArchetypeGroups *__return_storage_ptr__,
          FArchetypeGroupType param_1)

{
  void *pvVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStackY_88 [32];
  TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if ((-1 < (int)param_1.Identifier) &&
     ((int)param_1.Identifier < *(int *)&(this->IDContainer).field_0x28)) {
    puVar3 = *(undefined1 **)&(this->IDContainer).field_0x20;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->IDContainer).field_0x10;
    }
    if ((*(uint *)(puVar3 + (ulonglong)(param_1.Identifier >> 5) * 4) >> (param_1.Identifier & 0x1f)
        & 1) != 0) {
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_58.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_58.AllocationFlags._24_8_ = ___xmm_00000000ffffffff0000008000000000;
      local_58._48_8_ = _UNK_150631d98;
      TSparseArray<UE::Mass::FArchetypeGroupID,FDefaultSparseArrayAllocator>::operator=
                ((TSparseArray<UE::Mass::FArchetypeGroupID,FDefaultSparseArrayAllocator> *)&local_58
                 ,&this->IDContainer);
      TSparseArrayBase<4,4,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                (&local_58,param_1.Identifier,1);
      if (*(int *)&(this->IDContainer).field_0x8 - 1U == param_1.Identifier) {
        TSparseArrayBase<4,4,FDefaultSparseArrayAllocator>::Shrink(&local_58);
      }
      *(undefined8 *)&__return_storage_ptr__->IDContainer = 0;
      *(undefined8 *)&(__return_storage_ptr__->IDContainer).field_0x8 = 0;
      *(undefined8 *)&(__return_storage_ptr__->IDContainer).field_0x20 = 0;
      *(undefined4 *)&(__return_storage_ptr__->IDContainer).field_0x28 = 0;
      *(undefined4 *)&(__return_storage_ptr__->IDContainer).field_0x2c = 0x80;
      *(undefined4 *)&(__return_storage_ptr__->IDContainer).field_0x30 = 0xffffffff;
      *(undefined4 *)&(__return_storage_ptr__->IDContainer).field_0x34 = 0;
      if ((TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> *)__return_storage_ptr__ != &local_58)
      {
        *(FScriptContainerElement **)&__return_storage_ptr__->IDContainer =
             local_58.Data.AllocatorInstance.Data;
        *(int *)&(__return_storage_ptr__->IDContainer).field_0x8 = local_58.Data.ArrayNum;
        *(int *)&(__return_storage_ptr__->IDContainer).field_0xc = local_58.Data.ArrayMax;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if ((TBitArray<FDefaultBitArrayAllocator> *)&(__return_storage_ptr__->IDContainer).field_0x10
          != &local_58.AllocationFlags) {
        if (local_58.AllocationFlags.AllocatorInstance.SecondaryData ==
            (ForElementType<unsigned_int>)0x0) {
          (__return_storage_ptr__->IDContainer).field_0x10 =
               local_58.AllocationFlags.AllocatorInstance.InlineData[0];
          (__return_storage_ptr__->IDContainer).field_0x11 =
               local_58.AllocationFlags.AllocatorInstance.InlineData[1];
          (__return_storage_ptr__->IDContainer).field_0x12 =
               local_58.AllocationFlags.AllocatorInstance.InlineData[2];
          (__return_storage_ptr__->IDContainer).field_0x13 =
               local_58.AllocationFlags.AllocatorInstance.InlineData[3];
          (__return_storage_ptr__->IDContainer).field_0x14 =
               local_58.AllocationFlags.AllocatorInstance.InlineData[4];
          (__return_storage_ptr__->IDContainer).field_0x15 =
               local_58.AllocationFlags.AllocatorInstance.InlineData[5];
          (__return_storage_ptr__->IDContainer).field_0x16 =
               local_58.AllocationFlags.AllocatorInstance.InlineData[6];
          (__return_storage_ptr__->IDContainer).field_0x17 =
               local_58.AllocationFlags.AllocatorInstance.InlineData[7];
          (__return_storage_ptr__->IDContainer).field_0x18 =
               local_58.AllocationFlags.AllocatorInstance.InlineData[8];
          (__return_storage_ptr__->IDContainer).field_0x19 =
               local_58.AllocationFlags.AllocatorInstance.InlineData[9];
          (__return_storage_ptr__->IDContainer).field_0x1a =
               local_58.AllocationFlags.AllocatorInstance.InlineData[10];
          (__return_storage_ptr__->IDContainer).field_0x1b =
               local_58.AllocationFlags.AllocatorInstance.InlineData[0xb];
          (__return_storage_ptr__->IDContainer).field_0x1c =
               local_58.AllocationFlags.AllocatorInstance.InlineData[0xc];
          (__return_storage_ptr__->IDContainer).field_0x1d =
               local_58.AllocationFlags.AllocatorInstance.InlineData[0xd];
          (__return_storage_ptr__->IDContainer).field_0x1e =
               local_58.AllocationFlags.AllocatorInstance.InlineData[0xe];
          (__return_storage_ptr__->IDContainer).field_0x1f =
               local_58.AllocationFlags.AllocatorInstance.InlineData[0xf];
        }
        pvVar1 = *(void **)&(__return_storage_ptr__->IDContainer).field_0x20;
        if (pvVar1 != (void *)0x0) {
          FMemory::Free(pvVar1);
        }
        *(ForElementType<unsigned_int> *)&(__return_storage_ptr__->IDContainer).field_0x20 =
             local_58.AllocationFlags.AllocatorInstance.SecondaryData;
        *(int *)&(__return_storage_ptr__->IDContainer).field_0x28 = local_58.AllocationFlags.NumBits
        ;
        *(int *)&(__return_storage_ptr__->IDContainer).field_0x2c = local_58.AllocationFlags.MaxBits
        ;
        local_58.AllocationFlags.NumBits = 0;
        local_58.AllocationFlags.MaxBits = 0;
        local_58.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0
        ;
      }
      *(int *)&(__return_storage_ptr__->IDContainer).field_0x30 = local_58.FirstFreeIndex;
      *(int *)&(__return_storage_ptr__->IDContainer).field_0x34 = local_58.NumFreeIndices;
      local_58.FirstFreeIndex = -1;
      local_58.NumFreeIndices = 0;
      iVar2 = local_58.Data.ArrayMax;
      local_58.Data._8_8_ = local_58.Data._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,(ForAnyElementType *)&local_58,0,&local_58.Data.ArrayMax);
      }
      iVar2 = local_58.AllocationFlags.MaxBits;
      local_58.FirstFreeIndex = -1;
      local_58.NumFreeIndices = 0;
      local_58.AllocationFlags._24_8_ = (ulonglong)(uint)local_58.AllocationFlags.MaxBits << 0x20;
      if (0x80 < (uint)iVar2) {
        local_58.AllocationFlags.NumBits = 0;
        local_58.AllocationFlags.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_58.AllocationFlags,0);
      }
      if (local_58.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_58.AllocationFlags.AllocatorInstance.SecondaryData);
      }
      if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->IDContainer = 0;
  *(undefined8 *)&(__return_storage_ptr__->IDContainer).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->IDContainer).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->IDContainer).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->IDContainer).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->IDContainer).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->IDContainer).field_0x34 = 0;
  TSparseArray<UE::Mass::FArchetypeGroupID,FDefaultSparseArrayAllocator>::operator=
            (&__return_storage_ptr__->IDContainer,&this->IDContainer);
  return __return_storage_ptr__;
}

// Shrink @ 14724e260

void __thiscall UE::Mass::FArchetypeGroups::Shrink(FArchetypeGroups *this)

{
  undefined1 *puVar1;
  int *piVar2;
  void *_Dst;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  
  iVar8 = *(int *)&(this->IDContainer).field_0x28;
  puVar1 = &(this->IDContainer).field_0x10;
  if (iVar8 == 0) {
LAB_14724e066:
    uVar9 = 0;
  }
  else {
    puVar10 = *(undefined1 **)&(this->IDContainer).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    uVar13 = iVar8 + 0x1fU >> 5;
    uVar11 = (ulonglong)uVar13;
    uVar9 = 0xffffffff >> (-(char)iVar8 & 0x1fU);
    do {
      if (uVar13 == 0) goto LAB_14724e066;
      uVar13 = (int)uVar11 - 1;
      uVar11 = (ulonglong)uVar13;
      uVar12 = uVar9 & *(uint *)(puVar10 + uVar11 * 4);
      uVar9 = 0xffffffff;
    } while (uVar12 == 0);
    uVar11 = (ulonglong)uVar12 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar9 = uVar13 * 0x20 + (int)lVar4;
  }
  if ((int)uVar9 < *(int *)&(this->IDContainer).field_0x8) {
    if (0 < *(int *)&(this->IDContainer).field_0x34) {
      uVar13 = *(uint *)&(this->IDContainer).field_0x30;
      uVar11 = (ulonglong)uVar13;
      lVar4 = *(longlong *)&this->IDContainer;
      while (uVar13 != 0xffffffff) {
        piVar2 = (int *)(lVar4 + (longlong)(int)uVar11 * 8);
        if ((int)uVar11 < (int)uVar9) {
          uVar11 = (ulonglong)(uint)piVar2[1];
        }
        else {
          iVar8 = piVar2[1];
          uVar11 = (ulonglong)iVar8;
          iVar14 = *piVar2;
          if (iVar8 != -1) {
            *(int *)(lVar4 + uVar11 * 8) = iVar14;
          }
          if (iVar14 == -1) {
            puVar10 = &(this->IDContainer).field_0x34;
            *(int *)puVar10 = *(int *)puVar10 + -1;
            *(int *)&(this->IDContainer).field_0x30 = iVar8;
          }
          else {
            *(int *)(lVar4 + 4 + (longlong)iVar14 * 8) = iVar8;
            puVar10 = &(this->IDContainer).field_0x34;
            *(int *)puVar10 = *(int *)puVar10 + -1;
          }
        }
        uVar13 = (uint)uVar11;
      }
    }
    uVar13 = *(int *)&(this->IDContainer).field_0x8 - uVar9;
    if ((-1 < (int)(~uVar9 & ~uVar13)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (uVar13 != 0) {
      _Dst = (void *)(*(longlong *)&this->IDContainer + (longlong)(int)uVar9 * 8);
      iVar8 = (*(int *)&(this->IDContainer).field_0x8 - uVar13) - uVar9;
      if (iVar8 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar13 * 8),(longlong)iVar8 << 3);
      }
      puVar10 = &(this->IDContainer).field_0x8;
      *(uint *)puVar10 = *(int *)puVar10 - uVar13;
    }
    iVar8 = *(int *)&(this->IDContainer).field_0x28;
    iVar14 = iVar8 - uVar9;
    if (((((int)uVar9 < 0) || (iVar14 < 0)) || (*(int *)&(this->IDContainer).field_0x28 < iVar8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x3ee,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar3 = *(int *)&(this->IDContainer).field_0x28;
    if (iVar8 != iVar3) {
      puVar5 = *(uint **)&(this->IDContainer).field_0x20;
      puVar15 = (uint *)puVar1;
      if (puVar5 != (uint *)0x0) {
        puVar15 = puVar5;
      }
      FBitArrayMemory::MemmoveBitsWordOrder(puVar15,uVar9,puVar15,iVar8,(iVar3 - iVar14) - uVar9);
    }
    puVar10 = &(this->IDContainer).field_0x28;
    *(int *)puVar10 = *(int *)puVar10 - iVar14;
    iVar8 = *(int *)&(this->IDContainer).field_0x28;
    uVar13 = iVar8 >> 0x1f & 0x1f;
    uVar9 = iVar8 + uVar13;
    iVar8 = (uVar9 & 0x1f) - uVar13;
    if (iVar8 != 0) {
      puVar10 = *(undefined1 **)&(this->IDContainer).field_0x20;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      *(uint *)(puVar10 + (longlong)((int)uVar9 >> 5) * 4) =
           *(uint *)(puVar10 + (longlong)((int)uVar9 >> 5) * 4) &
           0xffffffffU >> (0x20U - (char)iVar8 & 0x1f);
    }
    TBitArray<FDefaultBitArrayAllocator>::CheckInvariants
              ((TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar8 = *(int *)&(this->IDContainer).field_0x8;
  puVar1 = &(this->IDContainer).field_0xc;
  if (*(int *)puVar1 != iVar8) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar8,(ForAnyElementType *)this,iVar8,(int *)puVar1);
  }
  return;
}

