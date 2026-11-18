// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 5

// Emplace<int_const_&> @ 14dc2c570

FClothSimulData * __thiscall
TMapBase<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
::Emplace<int_const_&>
          (TMapBase<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
           *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  void *_Dst;
  TKeyInitializer<int_const_&> local_res8;
  FSparseArrayAllocationInfo local_38;
  
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_1;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x110,0x10,1,(ForAnyElementType *)this,
                       (int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar6 = iVar6 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x110 + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x110 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<272,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<272,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (TSparseSetElement<TTuple<int,FClothSimulData>_> *)0x0) {
    TKeyInitializer<int_const_&>::operator<int,FClothSimulData>_TTuple<int,FClothSimulData>
              (&local_res8,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x100) = 0xffffffff;
  }
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x8;
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x34;
  uVar2 = *(uint *)local_38.Pointer;
  if ((iVar6 - iVar4 != 1) && (iVar6 != iVar4)) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & uVar2) * 4);
    if (iVar6 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        if (*(uint *)((longlong)iVar6 * 0x110 + lVar3) == uVar2) {
          if (iVar6 != -1) {
            _Dst = (void *)((longlong)iVar6 * 0x110 + lVar3);
            if (*(void **)((longlong)_Dst + 0x20) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x20));
            }
            if (*(void **)((longlong)_Dst + 0x10) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x10));
            }
            memmove(_Dst,local_38.Pointer,0x100);
            TSparseArrayBase<272,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<272,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar6;
          }
          if (iVar6 != -1) goto LAB_14dc2c713;
          break;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x110 + 0x100 + lVar3);
      } while (iVar6 != -1);
    }
  }
  TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,uVar2,local_38.Pointer,local_38.Index);
LAB_14dc2c713:
  return (FClothSimulData *)
         (*(longlong *)&(this->Pairs).Elements + 0x10 + (longlong)local_38.Index * 0x110);
}

// Emplace<FName_const_&> @ 14dc2c740

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
::Emplace<FName_const_&>
          (TMapBase<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
           *this,FName *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  longlong lVar9;
  TKeyInitializer<FName_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  local_res8.Key = param_1;
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_18);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_> *)
      0x0) {
    TKeyInitializer<FName_const_&>::
    operator<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x58) = 0xffffffff;
  }
  uVar1 = *(undefined8 *)local_18.Pointer;
  local_res8.Key._0_4_ = local_18.Index;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar4 = uVar4 + (int)((ulonglong)uVar1 >> 0x20);
  bVar3 = TSet<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar4,local_18.Pointer,(int *)&local_res8,(bool *)0x0);
  lVar9 = (longlong)(int)local_res8.Key;
  if (!bVar3) {
    uVar7 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
    if (uVar7 < 4) {
      iVar5 = 1;
    }
    else {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar5 <= (this->Pairs).HashSize)) {
      uVar4 = (this->Pairs).HashSize - 1U & uVar4;
      *(uint *)((longlong)local_18.Pointer + 0x5c) = uVar4;
      FVar8 = (this->Pairs).Hash.SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
      }
      uVar6 = (longlong)(this->Pairs).HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_18.Pointer + 0x58) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = (int)local_res8.Key;
    }
    else {
      (this->Pairs).HashSize = iVar5;
      TSet<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::Rehash(&this->Pairs);
    }
  }
  return (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar9 * 0x60);
}

// EmplaceByHash<int_const_&> @ 14dc2d740

FClothSimulData * __thiscall
TMapBase<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
::EmplaceByHash<int_const_&>
          (TMapBase<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  TKeyInitializer<int_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x110,0x10,1,(ForAnyElementType *)this,
                       (int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x110 + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x110 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<272,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<272,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<int,FClothSimulData>_> *)0x0) {
    TKeyInitializer<int_const_&>::operator<int,FClothSimulData>_TTuple<int,FClothSimulData>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x100) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (FClothSimulData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x110 + 0x10);
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 14dc2eb00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  int iVar17;
  ForElementType<unsigned_int> FVar18;
  uint *puVar19;
  longlong lVar20;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  undefined1 local_114 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar9 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar12 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar12 == 0) goto LAB_14dc2edb6;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar12);
  uVar13 = 1;
  if (3 < uVar12) {
    uVar11 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_120 = (undefined4)lVar10;
    uVar13 = 1 << ((byte)lVar10 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar13 <= (int)local_50)) goto LAB_14dc2edb6;
  local_50 = uVar13;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar13 != 0) {
    uVar12 = uVar13;
    if (uVar13 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar12 = 0;
        goto LAB_14dc2ec15;
      }
    }
    else {
LAB_14dc2ec15:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar12,4);
    }
    if (0 < (int)uVar13) {
      uVar16 = (ulonglong)uVar13;
      uVar11 = uVar9;
      do {
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar7 = uVar11 & (longlong)(int)uVar13 - 1U;
        uVar11 = uVar11 + 1;
        *(undefined4 *)(FVar8.Data + uVar7 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    if (local_70 != 0) {
      FVar18 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_78;
      }
      uVar12 = *(uint *)FVar18;
      uVar11 = uVar9;
      while (uVar12 == 0) {
        uStack_150 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_150;
        iVar17 = (int)uVar9;
        local_168 = iVar17 + 1;
        uVar9 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_14dc2ed12;
        uVar12 = ((uint *)((longlong)FVar18 + 4))[iVar17];
      }
      uStack_164 = -uVar12 & uVar12;
      uVar9 = (ulonglong)uStack_164 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_11c = (int)lVar10;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar9 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_14dc2ed12:
        uVar9 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_114._4_8_ = local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar9 < (int)local_70) {
      do {
        puVar15 = (undefined8 *)((longlong)(int)uVar9 * 0x10 + *(longlong *)local_114._4_8_);
        uVar3 = *puVar15;
        uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar12 = local_50 - 1 & uVar12 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar15 + 0xc) = uVar12;
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar11 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(FVar8.Data + uVar11 * 4);
        *(int *)(FVar8.Data + uVar11 * 4) = (int)uVar9;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar9 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_14dc2edb6:
  iVar17 = 0;
  uVar12 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (*piVar1 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar12,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x28;
  local_c8 = iVar17;
  iStack_cc = 0;
  uStack_dc = 1;
  if (iVar2 != 0) {
    puVar19 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_140.Array;
    }
    uVar12 = *puVar19;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar17;
      local_c8 = local_c8 + 0x20;
      iVar17 = iVar17 + 1;
      iStack_cc = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14dc2ee5e;
      uVar12 = puVar19[lVar10 + 1];
    }
    uStack_dc = -uVar12 & uVar12;
    uVar9 = (ulonglong)uStack_dc * 2 + 1;
    lVar10 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_118 = (int)lVar10;
    iStack_cc = local_c8 + -1 + local_118;
    if (iVar2 < iStack_cc) {
      iStack_cc = iVar2;
    }
  }
LAB_14dc2ee5e:
  uStack_d0 = 0xffffffff;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,iVar17);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  iStack_e0 = iVar17;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = iStack_cc;
  if (iStack_cc < iVar2) {
    do {
      lVar20 = (longlong)TStack_140.CurrentBitIndex;
      lVar10 = *(longlong *)
                ((longlong)TStack_140.CurrentBitIndex * 0x20 + *(longlong *)&(this->Pairs).Elements)
      ;
      uVar12 = ::GetTypeHash((FNameEntryId)(uint)lVar10);
      if (local_98._8_4_ != local_64) {
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        for (iVar17 = *(int *)(FVar8.Data +
                              (ulonglong)(local_50 - 1 & (int)((ulonglong)lVar10 >> 0x20) + uVar12)
                              * 4); iVar17 != -1;
            iVar17 = *(int *)(local_98._0_8_ + (longlong)iVar17 * 0x10 + 8)) {
          if (*(longlong *)(local_98._0_8_ + (longlong)iVar17 * 0x10) == lVar10) goto LAB_14dc2efd9;
        }
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      pFVar14 = (FScriptContainerElement *)(*(longlong *)&(this->Pairs).Elements + lVar20 * 0x20);
      if (((pFVar4 <= pFVar14) && (pFVar14 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar17 = (*pcVar5)();
        return iVar17;
      }
      iVar17 = param_1->ArrayNum;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar17 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar17 * 8) =
           *(undefined8 *)pFVar14;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
                 (FName *)local_114,
                 (bool *)((longlong)TStack_140.CurrentBitIndex * 0x20 +
                         *(longlong *)&(this->Pairs).Elements));
LAB_14dc2efd9:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar17 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar17;
}

// Find @ 14dc47da0

TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>
* __thiscall
TMapBase<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>,0>_>
::Find(TMapBase<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>
  *pTVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          pTVar5 = (TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>
                    *)0x0;
          if (lVar1 != 0) {
            pTVar5 = (TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>
                      *)(lVar1 + 8);
          }
          return pTVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>
          *)0x0;
}

