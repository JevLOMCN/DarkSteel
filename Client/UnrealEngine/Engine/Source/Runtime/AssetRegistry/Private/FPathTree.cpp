// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 13

// FPathTree @ 142b4e3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPathTree * __thiscall FPathTree::FPathTree(FPathTree *this)

{
  undefined8 uVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  FName *pFVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  int iVar15;
  uint uVar16;
  FName *_Src;
  undefined8 *puVar17;
  ulonglong uVar18;
  uint *puVar19;
  int iVar20;
  void *pvVar21;
  undefined1 auStackY_108 [32];
  FSparseArrayAllocationInfo local_d0;
  undefined4 local_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  FPathTree *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a8;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_50;
  ulonglong local_40;
  ulonglong local_38;
  
  pvVar21 = ThreadLocalStoragePointer;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  puVar14 = &(this->ParentPathToChildPaths).field_0x10;
  _Src = (FName *)0x0;
  *(undefined8 *)&this->ParentPathToChildPaths = 0;
  *(undefined4 *)&(this->ParentPathToChildPaths).field_0x8 = 0;
  *(undefined4 *)&(this->ParentPathToChildPaths).field_0xc = 0;
  *(undefined8 *)&(this->ParentPathToChildPaths).field_0x20 = 0;
  *(undefined4 *)&(this->ParentPathToChildPaths).field_0x28 = 0;
  *(undefined4 *)&(this->ParentPathToChildPaths).field_0x2c = 0x80;
  *(undefined4 *)&(this->ParentPathToChildPaths).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ParentPathToChildPaths).field_0x34 = 0;
  *(undefined8 *)&(this->ParentPathToChildPaths).field_0x40 = 0;
  *(undefined4 *)&(this->ParentPathToChildPaths).field_0x48 = 0;
  *(undefined8 *)&this->ChildPathToParentPath = 0;
  *(undefined8 *)&(this->ChildPathToParentPath).field_0x8 = 0;
  *(undefined8 *)&(this->ChildPathToParentPath).field_0x20 = 0;
  *(undefined4 *)&(this->ChildPathToParentPath).field_0x28 = 0;
  *(undefined4 *)&(this->ChildPathToParentPath).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChildPathToParentPath).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChildPathToParentPath).field_0x34 = 0;
  *(undefined8 *)&(this->ChildPathToParentPath).field_0x40 = 0;
  *(undefined4 *)&(this->ChildPathToParentPath).field_0x48 = 0;
  puVar10 = &(this->ParentPathToChildPaths).field_0x8;
  if ((*(int *)(*(longlong *)((longlong)pvVar21 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&PathRoot,"/");
    _Init_thread_footer(&::_TSS0);
  }
  FVar2 = PathRoot;
  local_88._16_8_ = 0;
  local_88._24_8_ = 0;
  local_50.InlineData[0] = '\0';
  local_50.InlineData[1] = '\0';
  local_50.InlineData[2] = '\0';
  local_50.InlineData[3] = '\0';
  local_50._padding_ = 0;
  local_40 = 0;
  local_88._0_8_ = (void *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_50.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uVar3 = ::GetTypeHash(PathRoot.ComparisonIndex.Value);
  iVar15 = *(int *)&(this->ParentPathToChildPaths).field_0x34;
  uVar3 = FVar2.Number + uVar3;
  if (*(int *)puVar10 != iVar15) {
    puVar9 = *(undefined1 **)&(this->ParentPathToChildPaths).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->ParentPathToChildPaths).field_0x38;
    }
    uVar11 = *(uint *)(puVar9 + (ulonglong)
                                (*(int *)&(this->ParentPathToChildPaths).field_0x48 - 1U & uVar3) *
                                4);
    if (uVar11 != 0xffffffff) {
      do {
        pFVar8 = (FName *)((longlong)(int)uVar11 * 0x60 + *(longlong *)&this->ParentPathToChildPaths
                          );
        if (*pFVar8 == PathRoot) {
          if (pFVar8 != (FName *)0x0) goto LAB_142b4ea18;
          break;
        }
        uVar11 = pFVar8[0xb].ComparisonIndex.Value;
      } while (uVar11 != 0xffffffff);
    }
  }
  if (iVar15 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,8,1,(ForAnyElementType *)this,(int *)puVar10,
                       (int *)&(this->ParentPathToChildPaths).field_0xc);
    iVar15 = *(int *)&(this->ParentPathToChildPaths).field_0x28;
    iVar20 = (int)((iVar15 >> 0x1f & 0x1fU) + iVar15) >> 5;
    if ((iVar15 == 0) || (iVar20 != (int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5)) {
      iVar5 = *(int *)&(this->ParentPathToChildPaths).field_0x2c;
      if (iVar5 < iVar15 + 1) {
        uVar11 = iVar5 + 0x1fU >> 5;
        uVar16 = iVar15 + 0x20U >> 5;
        if (uVar16 < 5) {
          iVar5 = 4;
        }
        else {
          uVar12 = (ulonglong)uVar16;
          if (uVar11 < 5) {
            uVar11 = 0;
          }
          if (uVar11 == 0) {
            uVar18 = 4;
            if (4 < uVar12) {
              uVar18 = uVar12;
            }
          }
          else {
            uVar18 = ((ulonglong)uVar16 * 3 >> 3) + 0x10 + uVar12;
          }
          uVar6 = FMemory::QuantizeSize(uVar18 * 4,0);
          iVar5 = (int)(uVar6 >> 2);
          if (iVar5 < (int)uVar16) {
            iVar5 = 0x7fffffff;
          }
        }
        *(int *)&(this->ParentPathToChildPaths).field_0x2c = iVar5 << 5;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)puVar14,
                   *(int *)&(this->ParentPathToChildPaths).field_0x28);
      }
      puVar10 = &(this->ParentPathToChildPaths).field_0x28;
      *(int *)puVar10 = *(int *)puVar10 + 1;
      iVar5 = *(int *)&(this->ParentPathToChildPaths).field_0x28;
      uVar16 = iVar5 >> 0x1f & 0x1f;
      uVar11 = iVar5 + uVar16;
      iVar5 = (uVar11 & 0x1f) - uVar16;
      if (iVar5 != 0) {
        puVar10 = *(undefined1 **)&(this->ParentPathToChildPaths).field_0x20;
        puVar9 = puVar14;
        if (puVar10 != (undefined1 *)0x0) {
          puVar9 = puVar10;
        }
        *(uint *)(puVar9 + (longlong)((int)uVar11 >> 5) * 4) =
             *(uint *)(puVar9 + (longlong)((int)uVar11 >> 5) * 4) &
             0xffffffffU >> (0x20U - (char)iVar5 & 0x1f);
      }
    }
    else {
      *(int *)&(this->ParentPathToChildPaths).field_0x28 = iVar15 + 1;
    }
    puVar10 = *(undefined1 **)&(this->ParentPathToChildPaths).field_0x20;
    if (puVar10 != (undefined1 *)0x0) {
      puVar14 = puVar10;
    }
    *(uint *)(puVar14 + (longlong)iVar20 * 4) =
         *(uint *)(puVar14 + (longlong)iVar20 * 4) & ~(1 << ((byte)iVar15 & 0x1f));
  }
  else {
    iVar4 = *(int *)&(this->ParentPathToChildPaths).field_0x30;
    lVar13 = *(longlong *)&this->ParentPathToChildPaths;
    iVar20 = *(int *)((longlong)iVar4 * 0x60 + 4 + lVar13);
    *(int *)&(this->ParentPathToChildPaths).field_0x30 = iVar20;
    *(int *)&(this->ParentPathToChildPaths).field_0x34 = iVar15 + -1;
    if (iVar15 + -1 != 0) {
      *(undefined4 *)((longlong)iVar20 * 0x60 + lVar13) = 0xffffffff;
    }
  }
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_d0,iVar4);
  pvVar21 = local_d0.Pointer;
  if (local_d0.Pointer != (FName *)0x0) {
    *(FName *)local_d0.Pointer = PathRoot;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
               ((longlong)local_d0.Pointer + 8),
               (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_88);
    (((FName *)((longlong)pvVar21 + 0x58))->ComparisonIndex).Value = 0xffffffff;
    _Src = pvVar21;
  }
  iVar20 = local_d0.Index;
  iVar15 = *(int *)&(this->ParentPathToChildPaths).field_0x8;
  iVar4 = *(int *)&(this->ParentPathToChildPaths).field_0x34;
  if ((iVar15 - iVar4 != 1) && (iVar15 != iVar4)) {
    puVar14 = *(undefined1 **)&(this->ParentPathToChildPaths).field_0x40;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->ParentPathToChildPaths).field_0x38;
    }
    iVar15 = *(int *)(puVar14 +
                     (ulonglong)(*(int *)&(this->ParentPathToChildPaths).field_0x48 - 1U & uVar3) *
                     4);
    if (iVar15 != -1) {
      lVar13 = *(longlong *)&this->ParentPathToChildPaths;
      do {
        if (*(FName *)((longlong)iVar15 * 0x60 + lVar13) == *_Src) {
          if (iVar15 != -1) {
            pvVar21 = (void *)((longlong)iVar15 * 0x60 + lVar13);
            *(undefined4 *)((longlong)pvVar21 + 0x50) = 0;
            if (*(void **)((longlong)pvVar21 + 0x48) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)pvVar21 + 0x48));
            }
            TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)((longlong)pvVar21 + 8));
            memmove(pvVar21,_Src,0x58);
            TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,iVar20,1);
            iVar20 = iVar15;
          }
          if (iVar15 != -1) goto LAB_142b4ea18;
          break;
        }
        iVar15 = *(int *)((longlong)iVar15 * 0x60 + 0x58 + lVar13);
      } while (iVar15 != -1);
    }
  }
  uVar16 = 1;
  uVar11 = *(int *)&(this->ParentPathToChildPaths).field_0x8 -
           *(int *)&(this->ParentPathToChildPaths).field_0x34;
  if (3 < uVar11) {
    uVar12 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar16 = 1 << ((byte)lVar13 & 0x1f);
  }
  if (((int)uVar11 < 1) || ((int)uVar16 <= *(int *)&(this->ParentPathToChildPaths).field_0x48)) {
    uVar3 = *(int *)&(this->ParentPathToChildPaths).field_0x48 - 1U & uVar3;
    _Src[0xb].Number = uVar3;
    puVar14 = *(undefined1 **)&(this->ParentPathToChildPaths).field_0x40;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->ParentPathToChildPaths).field_0x38;
    }
    uVar12 = (longlong)*(int *)&(this->ParentPathToChildPaths).field_0x48 - 1U &
             (longlong)(int)uVar3;
    _Src[0xb].ComparisonIndex.Value = *(uint *)(puVar14 + uVar12 * 4);
    *(int *)(puVar14 + uVar12 * 4) = iVar20;
    goto LAB_142b4ea18;
  }
  *(uint *)&(this->ParentPathToChildPaths).field_0x48 = uVar16;
  if (*(longlong *)&(this->ParentPathToChildPaths).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->ParentPathToChildPaths).field_0x40,0,0,4);
  }
  if (uVar16 != 0) {
    uVar3 = uVar16;
    if (uVar16 < 2) {
      if (*(longlong *)&(this->ParentPathToChildPaths).field_0x40 != 0) {
        uVar3 = 0;
        goto LAB_142b4e831;
      }
    }
    else {
LAB_142b4e831:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->ParentPathToChildPaths).field_0x40,0,uVar3,4);
    }
    if (0 < (int)uVar16) {
      uVar18 = (ulonglong)uVar16;
      uVar12 = 0;
      do {
        puVar14 = *(undefined1 **)&(this->ParentPathToChildPaths).field_0x40;
        puVar10 = &(this->ParentPathToChildPaths).field_0x38;
        if (puVar14 != (undefined1 *)0x0) {
          puVar10 = puVar14;
        }
        uVar7 = uVar12 & (longlong)(int)uVar16 - 1U;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(puVar10 + uVar7 * 4) = 0xffffffff;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  if (*(int *)&(this->ParentPathToChildPaths).field_0x48 != 0) {
    iVar15 = *(int *)&(this->ParentPathToChildPaths).field_0x28;
    local_d0.Pointer = &(this->ParentPathToChildPaths).field_0x10;
    local_d0._4_4_ = 1;
    local_d0.Index = 0;
    iStack_bc = 0;
    iStack_b8 = 0;
    if (iVar15 != 0) {
      puVar19 = *(uint **)&(this->ParentPathToChildPaths).field_0x20;
      if (puVar19 == (uint *)0x0) {
        puVar19 = local_d0.Pointer;
      }
      uVar3 = *puVar19;
      iStack_b8 = 0;
      local_d0.Index = 0;
      while (uVar3 == 0) {
        iStack_b8 = iStack_b8 + 0x20;
        lVar13 = (longlong)local_d0.Index;
        local_d0.Index = local_d0.Index + 1;
        if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < local_d0.Index)
        goto LAB_142b4e939;
        uVar3 = puVar19[lVar13 + 1];
      }
      local_d0._4_4_ = -uVar3 & uVar3;
      uVar12 = (ulonglong)(uint)local_d0._4_4_ * 2 + 1;
      lVar13 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iStack_bc = (int)lVar13 + -1 + iStack_b8;
      if (iVar15 < iStack_bc) {
LAB_142b4e939:
        iStack_bc = iVar15;
      }
    }
    local_c0 = 0xffffffff;
    local_a8._padding_ = CONCAT44(local_d0._4_4_,local_d0.Index);
    local_a8.CurrentBitIndex = iStack_bc;
    local_a8.UnvisitedBitMask = 0xffffffff;
    local_a8._28_4_ = uStack_b4;
    local_a8.BaseBitIndex = iStack_b8;
    iVar4 = iStack_bc;
    local_b0 = this;
    local_a8.Array = local_d0.Pointer;
    if (iStack_bc < iVar15) {
      do {
        puVar17 = (undefined8 *)
                  ((longlong)iVar4 * 0x60 + *(longlong *)&local_b0->ParentPathToChildPaths);
        uVar1 = *puVar17;
        uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
        uVar3 = *(int *)&(this->ParentPathToChildPaths).field_0x48 - 1U &
                uVar3 + (int)((ulonglong)uVar1 >> 0x20);
        *(uint *)((longlong)puVar17 + 0x5c) = uVar3;
        puVar14 = *(undefined1 **)&(this->ParentPathToChildPaths).field_0x40;
        puVar10 = &(this->ParentPathToChildPaths).field_0x38;
        if (puVar14 != (undefined1 *)0x0) {
          puVar10 = puVar14;
        }
        uVar12 = (longlong)*(int *)&(this->ParentPathToChildPaths).field_0x48 - 1U &
                 (longlong)(int)uVar3;
        *(undefined4 *)(puVar17 + 0xb) = *(undefined4 *)(puVar10 + uVar12 * 4);
        *(int *)(puVar10 + uVar12 * 4) = iVar4;
        local_a8.UnvisitedBitMask = local_a8.UnvisitedBitMask & ~local_a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a8);
        iVar4 = local_a8.CurrentBitIndex;
      } while (local_a8.CurrentBitIndex < (local_a8.Array)->NumBits);
    }
  }
LAB_142b4ea18:
  local_40 = local_40 & 0xffffffff00000000;
  if (local_50.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_50.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)local_88,0);
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((void *)local_88._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return this;
}

// operator() @ 142b50770

bool __thiscall
`FPathTree::CachePath'::__l2::<lambda_1>::operator()(void *this,TStringView<wchar_t> *param_1)

{
  longlong *plVar1;
  TSet<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  *this_00;
  ForElementType<FName> FVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  TSparseSetElement<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>
  *this_01;
  FName *pFVar10;
  ForElementType<FName> FVar11;
  longlong lVar12;
  ForElementType<FSetElementId> FVar13;
  int iVar14;
  TSparseSetElement<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>
  *pTVar15;
  uint uVar16;
  longlong lVar17;
  int local_res8 [2];
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  TKeyInitializer<FName_const_&> local_a0;
  FName local_98;
  longlong *local_90;
  FName *local_88;
  FSparseArrayAllocationInfo local_80;
  wchar_t *local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  
  local_68 = *(wchar_t **)((longlong)this + 0x18);
  uStack_60 = *(undefined8 *)((longlong)this + 0x20);
  iVar9 = param_1->Size;
  iVar14 = (int)*(undefined8 *)((longlong)this + 0x20);
  if (iVar9 == iVar14) {
    local_58 = local_68;
    uStack_50 = uStack_60;
    if ((iVar9 == 0) || (iVar14 == 0)) {
LAB_142b507c3:
      if (iVar9 == iVar14) {
        return true;
      }
      goto LAB_142b507db;
    }
    iVar7 = iVar14;
    if (iVar9 < iVar14) {
      iVar7 = iVar9;
    }
    iVar7 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,local_68,(longlong)iVar7);
    if (iVar7 == 0) goto LAB_142b507c3;
  }
  else {
LAB_142b507db:
    local_a8 = Root;
    if (iVar9 == 0) goto LAB_142b5080b;
  }
  local_48 = param_1->DataPtr;
  uStack_40 = *(undefined8 *)&param_1->Size;
  pFVar10 = ::FName::FName(&local_98,(int)*(undefined8 *)&param_1->Size,local_48,FNAME_Add);
  local_a8 = *pFVar10;
LAB_142b5080b:
  plVar1 = *(longlong **)((longlong)this + 0x10);
  lVar17 = *(longlong *)this;
  lVar12 = *plVar1;
  uVar8 = ::GetTypeHash((FNameEntryId)(uint)lVar12);
  pTVar15 = (TSparseSetElement<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>
             *)0x0;
  uVar8 = uVar8 + (int)((ulonglong)lVar12 >> 0x20);
  if (*(int *)(lVar17 + 0x58) != *(int *)(lVar17 + 0x84)) {
    lVar12 = *(longlong *)(lVar17 + 0x90);
    if (*(longlong *)(lVar17 + 0x90) == 0) {
      lVar12 = lVar17 + 0x88;
    }
    iVar9 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar17 + 0x98) - 1U & uVar8) * 4);
    if (iVar9 != -1) {
      do {
        lVar12 = *(longlong *)(lVar17 + 0x50) + (longlong)iVar9 * 0x18;
        if (*(longlong *)(*(longlong *)(lVar17 + 0x50) + (longlong)iVar9 * 0x18) == *plVar1) {
          if (lVar12 != 0) goto LAB_142b508b4;
          break;
        }
        iVar9 = *(int *)(lVar12 + 0x10);
      } while (iVar9 != -1);
    }
  }
  local_88 = &local_a8;
  local_90 = plVar1;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  EmplaceByHash<TPairInitializer<FName_const_&,FName_const_&>_>
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)(lVar17 + 0x50),(uint)local_res10,
             (TPairInitializer<FName_const_&,FName_const_&> *)(ulonglong)uVar8,(bool *)&local_90);
LAB_142b508b4:
  FVar4 = local_a8;
  uVar8 = ::GetTypeHash(local_a8.ComparisonIndex.Value);
  this_00 = *(TSet<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              **)this;
  uVar8 = FVar4.Number + uVar8;
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    FVar13 = (this_00->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&this_00->Hash;
    }
    uVar16 = *(uint *)((longlong)FVar13 + (ulonglong)(this_00->HashSize - 1U & uVar8) * 4);
    if (uVar16 != 0xffffffff) {
      do {
        pFVar10 = (FName *)((longlong)(int)uVar16 * 0x60 + *(longlong *)&this_00->Elements);
        if (*pFVar10 == local_a8) {
          this_01 = (TSparseSetElement<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>
                     *)(pFVar10 + 1);
          if (pFVar10 == (FName *)0x0) {
            this_01 = pTVar15;
          }
          if (this_01 !=
              (TSparseSetElement<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>
               *)0x0) {
            TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                      ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this_01,
                       &local_res18,*(bool **)((longlong)this + 0x10));
            return false;
          }
          break;
        }
        uVar16 = pFVar10[0xb].ComparisonIndex.Value;
      } while (uVar16 != 0xffffffff);
    }
  }
  local_a0.Key = &local_a8;
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this_00,&local_80);
  if (local_80.Pointer !=
      (TSparseSetElement<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>
       *)0x0) {
    TKeyInitializer<FName_const_&>::
    operator<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
              (&local_a0,local_80.Pointer);
    *(undefined4 *)((longlong)local_80.Pointer + 0x58) = 0xffffffff;
    pTVar15 = local_80.Pointer;
  }
  local_res8[0] = local_80.Index;
  bVar5 = TSet<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(this_00,uVar8,pTVar15,local_res8,(bool *)0x0);
  lVar17 = (longlong)local_res8[0];
  if (!bVar5) {
    TSet<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::RehashOrLink(this_00,uVar8,pTVar15,local_res8[0]);
  }
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
             (lVar17 * 0x60 + *(longlong *)&this_00->Elements + 8),&local_res20,
             *(bool **)((longlong)this + 0x10));
  FVar2 = *(ForElementType<FName> *)((longlong)this + 8);
  FVar11 = *(ForElementType<FName> *)((longlong)FVar2 + 0x80);
  if (*(ForElementType<FName> *)((longlong)FVar2 + 0x80) == (ForElementType<FName>)0x0) {
    FVar11 = FVar2;
  }
  if ((((ulonglong)FVar11 <= &local_a8) &&
      (&local_a8 < (FName *)((longlong)FVar11 + (longlong)*(int *)((longlong)FVar2 + 0x8c) * 8))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  iVar9 = *(int *)((longlong)FVar2 + 0x88);
  if (iVar9 == *(int *)((longlong)FVar2 + 0x8c)) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                      (0x408,(ForElementType<FName> *)FVar2,(int *)((longlong)FVar2 + 0x8c));
  }
  *(int *)((longlong)FVar2 + 0x88) = iVar9 + 1;
  FVar11 = *(ForElementType<FName> *)((longlong)FVar2 + 0x80);
  if (*(ForElementType<FName> *)((longlong)FVar2 + 0x80) == (ForElementType<FName>)0x0) {
    FVar11 = FVar2;
  }
  *(FName *)((longlong)FVar11 + (longlong)iVar9 * 8) = local_a8;
  **(FName **)((longlong)this + 0x10) = local_a8;
  return true;
}

// CachePath @ 142b55400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPathTree::CachePath(FPathTree *this,FName param_1,TFunctionRef<void___cdecl(FName)> *param_2)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  ForElementType<FName> FVar7;
  undefined1 *puVar8;
  FName *pFVar9;
  TSparseSetElement<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>
  *pTVar10;
  ForElementType<FName> FVar11;
  int iVar12;
  ulonglong uVar13;
  FName local_res10 [2];
  undefined1 auStackY_a38 [32];
  undefined1 local_9e8 [4];
  int local_9e4 [3];
  wchar_t *local_9d8;
  int iStack_9d0;
  undefined4 uStack_9cc;
  FName local_9c8;
  ForElementType<FName> local_9c0;
  FSparseArrayAllocationInfo local_9b8;
  code *local_9a8;
  FPathTree **local_9a0;
  TStringView<wchar_t> local_998;
  FPathTree *local_988;
  ForElementType<FName> *local_980;
  FName *local_978;
  wchar_t *local_970;
  undefined8 uStack_968;
  undefined1 local_958 [24];
  undefined8 uStack_940;
  void *local_938;
  undefined4 local_930;
  uint local_92c;
  undefined4 local_928;
  undefined4 local_924;
  ForElementType<FSetElementId> local_920;
  ulonglong local_910;
  ForElementType<FName> local_908;
  uint local_880;
  int local_87c;
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1035];
  wchar_t local_42 [5];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a38;
  if (param_1 == (FName)0x0) {
LAB_142b559a1:
    bVar3 = false;
  }
  else {
    local_res10[0] = param_1;
    uVar5 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    if (*(int *)&(this->ParentPathToChildPaths).field_0x8 !=
        *(int *)&(this->ParentPathToChildPaths).field_0x34) {
      puVar8 = *(undefined1 **)&(this->ParentPathToChildPaths).field_0x40;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(this->ParentPathToChildPaths).field_0x38;
      }
      iVar12 = *(int *)(puVar8 + (ulonglong)
                                 (*(int *)&(this->ParentPathToChildPaths).field_0x48 - 1U &
                                 param_1.Number + uVar5) * 4);
      if (iVar12 != -1) {
        do {
          if (*(FName *)((longlong)iVar12 * 0x60 + *(longlong *)&this->ParentPathToChildPaths) ==
              param_1) goto LAB_142b559a1;
          iVar12 = *(int *)((longlong)iVar12 * 0x60 + 0x58 +
                           *(longlong *)&this->ParentPathToChildPaths);
        } while (iVar12 != -1);
      }
    }
    local_878.Base = local_858;
    local_878.CurPos = local_858;
    local_878.End = local_42;
    local_878.bIsDynamic = false;
    local_878.bIsExternal = false;
    ::FName::AppendString(local_res10,&local_878);
    local_9d8 = local_878.Base;
    iVar12 = (int)((longlong)local_878.CurPos - (longlong)local_878.Base >> 1);
    iStack_9d0 = iVar12;
    if ((iVar12 < 2) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PathView.Len() >= 2",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PathTree.cpp"
                           ,0x26,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pTVar10 = (TSparseSetElement<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>
               *)0x0;
    if ((iVar12 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if ((*local_9d8 != L'/') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PathView [0] == \'/\'",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PathTree.cpp"
                           ,0x27,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if (((iVar12 + -1 < 0) || (iVar12 <= iVar12 + -1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if ((local_9d8[(longlong)iVar12 + -1] == L'/') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PathView[PathView.Len() - 1] != \'/\'",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PathTree.cpp"
                           ,0x28,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&Root,"/");
      _Init_thread_footer(&::_TSS0);
    }
    local_908.SecondaryData = (ForElementType<FName>)0x0;
    local_87c = 0x10;
    local_880 = 0;
    uVar5 = 0;
    if ((&local_908 <= (ForElementType<FName> *)local_res10) &&
       (local_res10 < &local_908.SecondaryData)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      uVar5 = local_880;
      if (local_880 == local_87c) {
        uVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                          (0x408,&local_908,&local_87c);
      }
    }
    FVar2 = local_res10[0];
    local_880 = uVar5 + 1;
    local_920.InlineData[0] = '\0';
    local_920.InlineData[1] = '\0';
    local_920.InlineData[2] = '\0';
    local_920.InlineData[3] = '\0';
    local_920._padding_ = 0;
    FVar7 = (ForElementType<FName>)&local_908;
    if (local_908.SecondaryData != (ForElementType<FName>)0x0) {
      FVar7 = local_908.SecondaryData;
    }
    local_958._16_8_ = 0;
    uStack_940 = 0;
    local_910 = 0;
    local_958._0_8_ = (FScriptContainerElement *)0x0;
    local_958._8_8_ = 0;
    *(FName *)((longlong)FVar7 + (longlong)(int)uVar5 * 8) = local_res10[0];
    local_938 = (void *)0x0;
    local_930 = 0;
    local_92c = 0x80;
    local_928 = 0xffffffff;
    local_924 = 0;
    local_920.SecondaryData = (ForElementType<FSetElementId>)0x0;
    uVar5 = ::GetTypeHash(local_res10[0].ComparisonIndex.Value);
    uVar5 = FVar2.Number + uVar5;
    if (*(int *)&(this->ParentPathToChildPaths).field_0x8 !=
        *(int *)&(this->ParentPathToChildPaths).field_0x34) {
      puVar8 = *(undefined1 **)&(this->ParentPathToChildPaths).field_0x40;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(this->ParentPathToChildPaths).field_0x38;
      }
      uVar6 = *(uint *)(puVar8 + (ulonglong)
                                 (*(int *)&(this->ParentPathToChildPaths).field_0x48 - 1U & uVar5) *
                                 4);
      if (uVar6 != 0xffffffff) {
        do {
          pFVar9 = (FName *)((longlong)(int)uVar6 * 0x60 +
                            *(longlong *)&this->ParentPathToChildPaths);
          if (*pFVar9 == local_res10[0]) {
            if (pFVar9 != (FName *)0x0) goto LAB_142b55835;
            break;
          }
          uVar6 = pFVar9[0xb].ComparisonIndex.Value;
        } while (uVar6 != 0xffffffff);
      }
    }
    TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,&local_9b8);
    if (local_9b8.Pointer !=
        (TSparseSetElement<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>
         *)0x0) {
      *(FName *)local_9b8.Pointer = local_res10[0];
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                 ((longlong)local_9b8.Pointer + 8),
                 (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_958);
      *(undefined4 *)((longlong)local_9b8.Pointer + 0x58) = 0xffffffff;
      pTVar10 = local_9b8.Pointer;
    }
    local_9e4[0] = local_9b8.Index;
    bVar3 = TSet<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            ::TryReplaceExisting
                      ((TSet<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                        *)this,uVar5,pTVar10,local_9e4,(bool *)0x0);
    if (!bVar3) {
      TSet<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::RehashOrLink((TSet<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)this,uVar5,pTVar10,local_9e4[0]);
    }
LAB_142b55835:
    local_910 = local_910 & 0xffffffff00000000;
    if (local_920.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_920.SecondaryData);
    }
    iVar12 = SUB84(local_958._8_8_,4);
    local_958._8_8_ = local_958._8_8_ & 0xffffffff00000000;
    if (iVar12 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_958,0,(int *)(local_958 + 0xc));
    }
    local_924 = 0;
    local_930 = 0;
    local_928 = 0xffffffff;
    if (0x80 < local_92c) {
      local_92c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_958 + 0x10),0);
    }
    if (local_938 != (void *)0x0) {
      FMemory::Free(local_938);
    }
    if ((FScriptContainerElement *)local_958._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_958._0_8_);
    }
    local_998._12_4_ = uStack_9cc;
    local_998.Size = iStack_9d0;
    local_9c8 = local_res10[0];
    local_980 = &local_908;
    local_978 = &local_9c8;
    local_9a0 = &local_988;
    local_9a8 = UE::Core::Private::Function::
                TFunctionRefCaller<`FPathTree::CachePath'::__l2::<lambda_1>,bool,TStringView<wchar_t>_>
                ::Call;
    local_970 = local_9d8;
    local_998.DataPtr = local_9d8;
    local_988 = this;
    uStack_968 = local_998._8_8_;
    FPathViews::IterateAncestors
              (&local_998,(TFunctionRef<bool___cdecl(TStringView<wchar_t>)> *)&local_9a8);
    uVar5 = local_880;
    uVar13 = (ulonglong)(int)local_880;
    FVar7 = (ForElementType<FName>)&local_908;
    if (local_908.SecondaryData != (ForElementType<FName>)0x0) {
      FVar7 = local_908.SecondaryData;
    }
    FVar11 = (ForElementType<FName>)((longlong)FVar7 + uVar13 * 8);
    while( true ) {
      if ((uint)uVar13 != uVar5) {
        `TCheckedPointerIterator<FName,int,1>::operator!='::__l2::<lambda_1>::operator()(local_9e8);
      }
      if (FVar11 == FVar7) break;
      local_9c0 = *(ForElementType<FName> *)((longlong)FVar11 + -8);
      FVar11 = (ForElementType<FName>)((longlong)FVar11 + -8);
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_9c0);
      uVar13 = (ulonglong)local_880;
    }
    if (local_908.SecondaryData != (ForElementType<FName>)0x0) {
      FMemory::Free((void *)local_908.SecondaryData);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
    bVar3 = true;
  }
  return bVar3;
}

// EnsureAdditionalCapacity @ 142b581d0

void __thiscall FPathTree::EnsureAdditionalCapacity(FPathTree *this,int param_1)

{
  TSet<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
             *)this,(*(int *)&(this->ParentPathToChildPaths).field_0x8 -
                    *(int *)&(this->ParentPathToChildPaths).field_0x34) + param_1);
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::Reserve
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)&this->ChildPathToParentPath,
             (*(int *)&(this->ChildPathToParentPath).field_0x8 -
             *(int *)&(this->ChildPathToParentPath).field_0x34) + param_1);
  return;
}

// EnumerateAllPaths @ 142b58210

void __thiscall
FPathTree::EnumerateAllPaths(FPathTree *this,TFunctionRef<bool___cdecl(FName)> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined8 local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->ParentPathToChildPaths).field_0x28;
  puVar1 = &(this->ParentPathToChildPaths).field_0x10;
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->ParentPathToChildPaths).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142b582ad;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_142b582ad:
  uVar11 = *(uint *)&(this->ParentPathToChildPaths).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ParentPathToChildPaths).field_0x8 -
                       *(int *)&(this->ParentPathToChildPaths).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)&(this->ParentPathToChildPaths).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->ParentPathToChildPaths).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142b583b0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_142b583b0:
  while( true ) {
    if (*(int *)&(this->ParentPathToChildPaths).field_0x8 -
        *(int *)&(this->ParentPathToChildPaths).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_res20 = *(undefined8 *)
                   ((longlong)TStack_60.CurrentBitIndex * 0x60 +
                   *(longlong *)&this->ParentPathToChildPaths);
    cVar6 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res20);
    if (cVar6 == '\0') {
      return;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// EnumerateSubPaths @ 142b58440

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPathTree::EnumerateSubPaths
          (FPathTree *this,FName param_1,TFunctionRef<bool___cdecl(FName)> *param_2,bool param_3)

{
  ulonglong uVar1;
  uint uVar2;
  FName FVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar10;
  FName *pFVar11;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  undefined1 auStack_11b8 [32];
  wchar_t *local_1198;
  char local_1188;
  undefined1 local_1187 [3];
  int local_1184;
  int local_1180;
  FName local_1178;
  FName local_1170;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_1168;
  int iStack_1160;
  uint uStack_115c;
  undefined1 *local_1158;
  undefined4 uStack_1150;
  int iStack_114c;
  int local_1148;
  undefined4 uStack_1144;
  int iStack_1140;
  undefined4 uStack_113c;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_1138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1130;
  undefined8 uStack_1110;
  TFunctionRef<bool___cdecl(FName)> local_1108;
  FName local_10f8 [4];
  undefined4 local_10d4;
  TStringBuilderBase<wchar_t> local_10c8;
  wchar_t local_10a8 [1035];
  wchar_t local_892 [5];
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_11b8;
  if (param_1 != (FName)0x0) {
    local_1188 = param_3;
    pTVar10 = TMapBase<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
              ::Find((TMapBase<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                      *)this,param_1);
    if (pTVar10 != (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0) {
LAB_142b5856b:
      iVar9 = *(int *)&(pTVar10->Elements).field_0x28;
      iStack_1160 = 0;
      uStack_115c = 1;
      local_1148 = 0;
      iStack_114c = 0;
      if (iVar9 != 0) {
        puVar18 = *(uint **)&(pTVar10->Elements).field_0x20;
        if (puVar18 == (uint *)0x0) {
          puVar18 = (uint *)&(pTVar10->Elements).field_0x10;
        }
        uVar16 = *puVar18;
        local_1148 = 0;
        while (uVar16 == 0) {
          lVar13 = (longlong)iStack_1160;
          local_1148 = local_1148 + 0x20;
          iStack_1160 = iStack_1160 + 1;
          iStack_114c = iVar9;
          if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1160)
          goto LAB_142b58602;
          uVar16 = puVar18[lVar13 + 1];
        }
        uStack_115c = -uVar16 & uVar16;
        uVar1 = (ulonglong)uStack_115c * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_1184 = (int)lVar13;
        iStack_114c = local_1148 + -1 + local_1184;
        if (iVar9 < iStack_114c) {
          iStack_114c = iVar9;
        }
      }
LAB_142b58602:
      local_1158 = &(pTVar10->Elements).field_0x10;
      uVar16 = *(uint *)&(pTVar10->Elements).field_0x28;
      uStack_1144 = local_10d4;
      uVar15 = uVar16 & 0xffffffe0;
      iStack_1140 = *(int *)&(pTVar10->Elements).field_0x8 - *(int *)&(pTVar10->Elements).field_0x34
      ;
      uStack_1150 = 0xffffffff;
      TStack_1130._padding_ = CONCAT44(uStack_115c,iStack_1160);
      TStack_1130.CurrentBitIndex = iStack_114c;
      TStack_1130.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar16 >> 5;
      TStack_1130._28_4_ = local_10d4;
      TStack_1130.BaseBitIndex = local_1148;
      uStack_1110 = CONCAT44(uStack_113c,iStack_1140);
      local_1168 = pTVar10;
      local_1138 = pTVar10;
      TStack_1130.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1158;
      if ((((int)uVar16 < 0) || (iVar9 < (int)uVar16)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      cVar5 = local_1188;
      uVar2 = *(uint *)&(pTVar10->Elements).field_0x28;
      if (uVar16 != uVar2) {
        puVar17 = *(undefined1 **)&(pTVar10->Elements).field_0x20;
        if (puVar17 == (undefined1 *)0x0) {
          puVar17 = &(pTVar10->Elements).field_0x10;
        }
        uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
        while (uVar16 == 0) {
          lVar13 = (longlong)iVar14;
          uVar15 = uVar15 + 0x20;
          iVar14 = iVar14 + 1;
          uVar16 = uVar2;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_142b58720;
          uVar16 = *(uint *)(puVar17 + lVar13 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_1180 = (int)lVar13;
        uVar16 = local_1180 + -1 + uVar15;
        if ((int)uVar2 < (int)uVar16) {
          uVar16 = uVar2;
        }
      }
LAB_142b58720:
      do {
        pTVar12 = local_1138;
        if (*(int *)&(local_1138->Elements).field_0x8 - *(int *)&(local_1138->Elements).field_0x34
            != (int)uStack_1110) {
          local_1187[0] = 0;
          `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1187);
        }
        if (((TStack_1130.CurrentBitIndex == uVar16) &&
            (TStack_1130.Array ==
             (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar10->Elements).field_0x10)) &&
           (pTVar12 == pTVar10)) {
          return true;
        }
        pFVar11 = (FName *)((longlong)TStack_1130.CurrentBitIndex * 0x10 +
                           *(longlong *)&pTVar12->Elements);
        pTVar12 = TMapBase<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                  ::Find((TMapBase<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                          *)this,*pFVar11);
        if (pTVar12 == (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0) {
          local_888.Base = local_868;
          local_888.bIsDynamic = false;
          local_888.bIsExternal = false;
          local_888.CurPos = local_868;
          local_888.End = local_52;
          ::FName::AppendString(pFVar11,&local_888);
          if (local_888.End < local_888.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_888,1);
          }
          *local_888.CurPos = L'\0';
          local_1198 = local_888.Base;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ParentPathToChildPaths.Find(ChildPath) != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PathTree.cpp"
                             ,0xe9,L"PathTree integrity failure, expected to contain %s");
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
        }
        local_1170 = *pFVar11;
        cVar8 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_1170);
        if (cVar8 == '\0') {
          return true;
        }
        if (cVar5 != '\0') {
          local_1108._0_8_ = *(undefined8 *)param_2;
          local_1108._8_8_ = *(undefined8 *)&param_2->field_0x8;
          EnumerateSubPaths(this,*pFVar11,&local_1108,true);
        }
        TStack_1130.UnvisitedBitMask = TStack_1130.UnvisitedBitMask & ~TStack_1130._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1130);
      } while( true );
    }
    local_10c8.Base = local_10a8;
    local_10c8.CurPos = local_10a8;
    local_10c8.bIsDynamic = false;
    local_10c8.bIsExternal = false;
    local_10c8.End = local_892;
    local_1178 = param_1;
    ::FName::AppendString(&local_1178,&local_10c8);
    iVar9 = (int)((longlong)local_10c8.CurPos - (longlong)local_10c8.Base >> 1);
    if ((iVar9 == 0) || (local_10c8.CurPos[-1] != L'/')) {
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10c8);
    }
    else {
      if ((iVar9 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount <= Len()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                             ,0xe8,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      local_10c8.CurPos = local_10c8.CurPos + -1;
      pFVar11 = ::FName::FName(local_10f8,
                               (int)((longlong)local_10c8.CurPos - (longlong)local_10c8.Base >> 1),
                               local_10c8.Base,FNAME_Add);
      FVar3 = *pFVar11;
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10c8);
      if ((FVar3 != param_1) &&
         (pTVar10 = TMapBase<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                    ::Find((TMapBase<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                            *)this,FVar3),
         pTVar10 != (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0))
      goto LAB_142b5856b;
    }
  }
  return false;
}

// GetAllPaths @ 142b58b80

bool __thiscall
FPathTree::GetAllPaths
          (FPathTree *this,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_res10;
  code *local_18;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> **local_10;
  
  if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(param_1);
    *(undefined4 *)&(param_1->Elements).field_0x8 = 0;
    if (*(int *)&(param_1->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)param_1,0,(int *)&(param_1->Elements).field_0xc);
    }
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
    *(undefined4 *)&(param_1->Elements).field_0x28 = 0;
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
  }
  local_10 = &local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FPathTree::GetAllPaths'::__l2::<lambda_1>,bool,FName>::Call;
  local_res10 = param_1;
  EnumerateAllPaths(this,(TFunctionRef<bool___cdecl(FName)> *)&local_18);
  return 0 < *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
}

// GetSubPaths @ 142b59b50

bool __thiscall
FPathTree::GetSubPaths
          (FPathTree *this,FName param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_res18 [2];
  code *local_18;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> **local_10;
  
  iVar1 = *(int *)&(param_2->Elements).field_0x8;
  local_10 = local_res18;
  iVar2 = *(int *)&(param_2->Elements).field_0x34;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FPathTree::GetSubPaths'::__l2::<lambda_1>,bool,FName>::Call;
  local_res18[0] = param_2;
  bVar3 = EnumerateSubPaths(this,param_1,(TFunctionRef<bool___cdecl(FName)> *)&local_18,param_3);
  if ((bVar3) &&
     (iVar1 - iVar2 <
      *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34)) {
    return true;
  }
  return false;
}

// NormalizePackagePath @ 142b5d010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __cdecl FPathTree::NormalizePackagePath(FName param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FName FVar4;
  FName *pFVar5;
  undefined8 in_RDX;
  undefined1 auStack_888 [32];
  FName local_868;
  FName local_860;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_888;
  local_858.Base = local_838;
  local_858.CurPos = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.End = local_22;
  ::FName::AppendString(&local_868,&local_858);
  iVar3 = (int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1);
  if ((iVar3 == 0) || (local_858.CurPos[-1] != L'/')) {
    *(undefined8 *)param_1 = in_RDX;
  }
  else {
    if ((iVar3 < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount <= Len()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                           ,0xe8,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FName)(*pcVar1)();
      return FVar4;
    }
    local_858.CurPos = local_858.CurPos + -1;
    pFVar5 = ::FName::FName(&local_860,
                            (int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1),
                            local_858.Base,FNAME_Add);
    *(FName *)param_1 = *pFVar5;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return param_1;
}

// PathExists @ 142b5e200

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FPathTree::PathExists(FPathTree *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar4;
  int iVar5;
  ForAnyElementType FVar6;
  int iVar7;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  
  if (param_1 == (FName)0x0) {
    return false;
  }
  local_res10 = param_1;
  pTVar4 = TMapBase<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
           ::Find((TMapBase<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                   *)this,param_1);
  if (pTVar4 != (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0)
  goto LAB_142b5e31b;
  ::FName::ToString(&local_res10,&local_28);
  iVar7 = local_28.Data.ArrayNum + -2;
  if (local_28.Data.ArrayNum == 0) {
    iVar7 = -1;
  }
  iVar5 = local_28.Data.ArrayNum + -1;
  if (iVar7 < 0) {
code_r0x000142b5e285:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                       ,0x107,
                       L"String index out of bounds: Index %i from a string with a length of %i");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    if (local_28.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    if (iVar5 <= iVar7) goto code_r0x000142b5e285;
  }
  if (*(short *)(local_28.Data.AllocatorInstance.Data + (longlong)iVar7 * 2) == 0x2f) {
    iVar7 = local_28.Data.ArrayNum + -2;
    if (local_28.Data.ArrayNum == 0) {
      iVar7 = -1;
    }
    ::FString::RemoveAt(&local_28,iVar7,No);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar6.Data = local_28.Data.AllocatorInstance.Data;
    }
    ::FName::FName(local_res18,(wchar_t *)FVar6.Data);
    local_res10 = local_res18[0];
    pTVar4 = TMapBase<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
             ::Find((TMapBase<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                     *)this,local_res18[0]);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
LAB_142b5e31b:
  return pTVar4 != (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0;
}

// RemovePath @ 142b637e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPathTree::RemovePath(FPathTree *this,FName param_1,TFunctionRef<void___cdecl(FName)> *param_2)

{
  undefined8 uVar1;
  FName FVar2;
  code *pcVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar4;
  int iVar5;
  longlong *plVar6;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar13;
  ulonglong uVar14;
  byte bVar15;
  longlong lVar16;
  uint *puVar17;
  ForAnyElementType FVar18;
  undefined1 *puVar19;
  int iVar20;
  int iVar21;
  FName *pFVar22;
  uint uVar23;
  uint uVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  FName local_res10 [2];
  undefined1 auStackY_a58 [32];
  FIdentityFunctor local_a18;
  undefined1 local_a17 [3];
  int local_a14;
  uint local_a10;
  uint local_a0c;
  uint local_a08;
  uint uStack_a04;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_a00;
  undefined4 local_9f8;
  uint uStack_9f4;
  uint uStack_9f0;
  undefined4 uStack_9ec;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *local_9e8;
  int local_9e0;
  int local_9dc;
  undefined8 *local_9d8;
  TFunctionRef<void___cdecl(FName)> *local_9d0;
  FIdentityFunctor *local_9c8;
  FName local_9c0;
  FName local_9b8;
  FName local_9b0;
  FName local_9a8;
  FName local_9a0;
  FName local_998;
  longlong *local_990;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_988;
  longlong *local_968;
  uint uStack_960;
  uint uStack_95c;
  TBitArray<FDefaultBitArrayAllocator> *local_958;
  undefined4 uStack_950;
  uint uStack_94c;
  uint local_948;
  undefined4 uStack_944;
  int iStack_940;
  undefined4 uStack_93c;
  longlong *local_938;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_930;
  undefined8 uStack_910;
  code *local_908;
  undefined8 **local_900;
  undefined4 local_8dc;
  undefined1 local_8d8 [32];
  uint *local_8b8;
  uint local_8b0;
  undefined4 local_8ac;
  int local_8a8;
  uint local_8a4;
  FScriptContainerElement local_8a0 [8];
  ForAnyElementType local_898;
  uint local_890;
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  ulonglong uVar29;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_a58;
  if (param_1 == (FName)0x0) {
    return false;
  }
  local_res10[0] = param_1;
  local_9d0 = param_2;
  pTVar13 = TMapBase<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
            ::Find((TMapBase<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                    *)this,param_1);
  if (pTVar13 == (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0) {
    local_888.Base = local_868;
    local_888.bIsDynamic = false;
    local_888.bIsExternal = false;
    local_888.CurPos = local_868;
    local_888.End = local_52;
    ::FName::AppendString(local_res10,&local_888);
    iVar10 = (int)((longlong)local_888.CurPos - (longlong)local_888.Base >> 1);
    lVar16 = (longlong)iVar10;
    if (1 < iVar10) {
      iVar10 = 1;
    }
    iVar21 = 0;
    if (0 < iVar10) {
      iVar21 = iVar10;
    }
    if ((iVar21 == 1) &&
       (iVar10 = FGenericPlatformStricmp::Strnicmp(L"/",local_888.Base + (lVar16 - iVar21),1),
       iVar10 == 0)) {
      if (local_888.End < local_888.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_888,1);
      }
      *local_888.CurPos = L'\0';
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!PathString.ToView().EndsWith(L\"/\")",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PathTree.cpp"
                         ,0x61,L"Path tree arguments should not have trailing slashes: %s");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
    return false;
  }
  local_9d8 = (undefined8 *)local_8d8;
  uVar29 = 0;
  uVar27 = 0;
  local_900 = &local_9d8;
  local_908 = UE::Core::Private::Function::
              TFunctionRefCaller<`FPathTree::GetSubPaths'::__l2::<lambda_1>,bool,FName>::Call;
  local_8d8._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *)0x0;
  local_8d8._8_4_ = 0;
  local_8d8._12_4_ = 0;
  local_8b8 = (uint *)0x0;
  local_8b0 = 0;
  local_8ac = 0x80;
  local_8a8 = -1;
  local_8a4 = 0;
  local_898.Data = (FScriptContainerElement *)0x0;
  local_890 = 0;
  EnumerateSubPaths(this,local_res10[0],(TFunctionRef<bool___cdecl(FName)> *)&local_908,true);
  local_9c8 = &local_a18;
  local_a10 = local_8d8._8_4_ - local_8a4;
  local_a0c = local_8a4;
  local_a14 = local_8d8._8_4_;
  if (0 < (int)local_a10) {
    uVar23 = local_a10;
    uVar24 = local_8a4;
    pTVar7 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *)local_8d8._0_8_;
    pTVar4 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *)local_8d8._0_8_;
    iVar10 = local_8a8;
    iVar21 = local_8d8._8_4_;
    if (local_8a4 != 0) {
      while (iVar5 = iVar10, local_9e8 = pTVar7, local_a0c = uVar24, iVar5 != -1) {
        iVar10 = pTVar4[iVar5]._s_1.NextFreeIndex;
        param_2 = local_9d0;
        pTVar7 = local_9e8;
        if (iVar5 < (int)uVar23) {
          bVar15 = (byte)iVar21 & 0x1f;
          uVar23 = 1 << bVar15 | 1U >> 0x20 - bVar15;
          iVar20 = iVar21;
          do {
            uVar23 = uVar23 >> 1 | (uint)((uVar23 & 1) != 0) << 0x1f;
            iVar21 = iVar20 + -1;
            if (((iVar21 < 0) || ((int)local_8b0 <= iVar21)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar3 = (code *)swi(3);
              uVar9 = (*pcVar3)();
              return (bool)uVar9;
            }
            puVar17 = (uint *)(local_8d8 + 0x10);
            if (local_8b8 != (uint *)0x0) {
              puVar17 = local_8b8;
            }
            iVar11 = iVar21;
            if (iVar21 < 0) {
              iVar11 = iVar20 + 0x1e;
            }
            iVar20 = iVar21;
          } while ((puVar17[iVar11 >> 5] & uVar23) == 0);
          memmove(pTVar4 + iVar5,local_9e8 + iVar21,0x10);
          if (((iVar5 < 0) || ((int)local_8b0 <= iVar5)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return (bool)uVar9;
          }
          puVar17 = (uint *)(local_8d8 + 0x10);
          if (local_8b8 != (uint *)0x0) {
            puVar17 = local_8b8;
          }
          iVar20 = iVar5;
          if (iVar5 < 0) {
            iVar20 = iVar5 + 0x1f;
          }
          puVar17[iVar20 >> 5] = puVar17[iVar20 >> 5] | 1 << ((byte)iVar5 & 0x1f);
          uVar23 = local_a10;
          param_2 = local_9d0;
          uVar24 = local_a0c;
          pTVar7 = local_9e8;
          pTVar4 = local_9e8;
        }
      }
      uVar12 = 0;
      if (local_a14 <= (int)local_8d8._8_4_) {
        uVar12 = ~(uVar24 | uVar23) >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      iVar10 = (local_8d8._8_4_ - uVar23) - uVar24;
      if (iVar10 != 0) {
        memmove((FScriptContainerElement *)(local_8d8._0_8_ + (longlong)(int)uVar23 * 0x10),
                (FScriptContainerElement *)(local_8d8._0_8_ + (longlong)(int)uVar23 * 0x10) +
                (longlong)(int)uVar24 * 0x10,(longlong)iVar10 << 4);
      }
      local_8d8._8_4_ = local_8d8._8_4_ - uVar24;
      TBitArray<FDefaultBitArrayAllocator>::RemoveAt
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_8d8 + 0x10),uVar23,uVar24);
      local_8a4 = 0;
      local_8a8 = -1;
      if (local_8d8._12_4_ != local_8d8._8_4_) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,local_8d8._8_4_,(ForAnyElementType *)local_8d8,local_8d8._8_4_,
                   (int *)(local_8d8 + 0xc));
      }
    }
    uVar1 = local_8d8._0_8_;
    iVar10 = local_8d8._8_4_ - local_8a4;
    if ((iVar10 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FElementCompareClass<_FPathTree::RemovePath_::__l2::<lambda_1>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *)uVar1,iVar10,local_a18,
               (FElementCompareClass<_public:_bool___cdecl_FPathTree::RemovePath(FName,TFunctionRef<void___cdecl(FName)>)_::_2_::<lambda_1>_>
                *)&local_9c8);
  }
  uVar23 = local_890;
  uVar28 = (ulonglong)local_890;
  if (local_898.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_898,0,0,4);
  }
  if (uVar23 == 0) goto LAB_142b63d3a;
  uVar24 = uVar23;
  if (uVar23 < 2) {
    if (local_898.Data != (FScriptContainerElement *)0x0) {
      uVar24 = 0;
      goto LAB_142b63ce6;
    }
  }
  else {
LAB_142b63ce6:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_898,0,uVar24,4);
  }
  if (0 < (int)uVar23) {
    uVar26 = uVar29;
    do {
      FVar18.Data = local_8a0;
      if (local_898.Data != (FScriptContainerElement *)0x0) {
        FVar18.Data = local_898.Data;
      }
      uVar14 = (longlong)(int)uVar23 - 1U & uVar26;
      uVar26 = uVar26 + 1;
      *(undefined4 *)(FVar18.Data + uVar14 * 4) = 0xffffffff;
      uVar28 = uVar28 - 1;
    } while (uVar28 != 0);
  }
LAB_142b63d3a:
  if (local_890 != 0) {
    uStack_a04 = 1;
    local_a08 = 0;
    pTStack_a00 = (TBitArray<FDefaultBitArrayAllocator> *)(local_8d8 + 0x10);
    uStack_9f4 = 0;
    uStack_9f0 = 0;
    uVar28 = uVar29;
    if (local_8b0 != 0) {
      puVar17 = (uint *)(local_8d8 + 0x10);
      if (local_8b8 != (uint *)0x0) {
        puVar17 = local_8b8;
      }
      uVar23 = *puVar17;
      uVar26 = uVar29;
      while (uVar23 == 0) {
        uStack_9f0 = (int)uVar26 + 0x20;
        uVar26 = (ulonglong)uStack_9f0;
        iVar10 = (int)uVar28;
        local_a08 = iVar10 + 1;
        uVar28 = (ulonglong)local_a08;
        if ((int)((local_8b0 - 1) + ((int)(local_8b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_a08)
        goto LAB_142b63dff;
        uVar23 = (puVar17 + 1)[iVar10];
      }
      uStack_a04 = -uVar23 & uVar23;
      uVar28 = (ulonglong)uStack_a04 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_9e0 = (int)lVar16;
      uStack_9f4 = (uStack_9f0 - 1) + local_9e0;
      uVar28 = (ulonglong)uStack_9f4;
      if ((int)local_8b0 < (int)uStack_9f4) {
LAB_142b63dff:
        uVar28 = (ulonglong)local_8b0;
        uStack_9f4 = local_8b0;
      }
    }
    local_9f8 = 0xffffffff;
    local_990 = (longlong *)local_8d8;
    local_988._padding_ = CONCAT44(uStack_a04,local_a08);
    local_988.CurrentBitIndex = uStack_9f4;
    local_988.UnvisitedBitMask = 0xffffffff;
    local_988._28_4_ = uStack_9ec;
    local_988.BaseBitIndex = uStack_9f0;
    local_988.Array = pTStack_a00;
    if ((int)uVar28 < (int)local_8b0) {
      do {
        puVar25 = (undefined8 *)((longlong)(int)uVar28 * 0x10 + *local_990);
        uVar1 = *puVar25;
        uVar23 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
        uVar23 = local_890 - 1 & uVar23 + (int)((ulonglong)uVar1 >> 0x20);
        *(uint *)((longlong)puVar25 + 0xc) = uVar23;
        FVar18.Data = local_8a0;
        if (local_898.Data != (FScriptContainerElement *)0x0) {
          FVar18.Data = local_898.Data;
        }
        uVar26 = (longlong)(int)local_890 - 1U & (longlong)(int)uVar23;
        *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(FVar18.Data + uVar26 * 4);
        *(int *)(FVar18.Data + uVar26 * 4) = (int)uVar28;
        local_988.UnvisitedBitMask = local_988.UnvisitedBitMask & ~local_988._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_988);
        uVar28 = (ulonglong)(uint)local_988.CurrentBitIndex;
      } while (local_988.CurrentBitIndex < (local_988.Array)->NumBits);
    }
  }
  uVar23 = local_8b0;
  uStack_95c = 1;
  uStack_94c = uVar27;
  local_948 = uVar27;
  if (local_8b0 != 0) {
    puVar17 = (uint *)(local_8d8 + 0x10);
    if (local_8b8 != (uint *)0x0) {
      puVar17 = local_8b8;
    }
    uVar24 = *puVar17;
    uVar28 = uVar29;
    while (uVar24 == 0) {
      iVar10 = (int)uVar29;
      local_948 = (int)uVar28 + 0x20;
      uVar28 = (ulonglong)local_948;
      uVar27 = iVar10 + 1;
      uVar29 = (ulonglong)uVar27;
      uStack_94c = local_8b0;
      if ((int)((local_8b0 - 1) + ((int)(local_8b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar27)
      goto LAB_142b63f32;
      uVar24 = (puVar17 + 1)[iVar10];
    }
    uStack_95c = -uVar24 & uVar24;
    uVar29 = (ulonglong)uStack_95c * 2 + 1;
    lVar16 = 0x3f;
    if (uVar29 != 0) {
      for (; uVar29 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_9dc = (int)lVar16;
    uStack_94c = local_9dc + -1 + local_948;
    if ((int)local_8b0 < (int)uStack_94c) {
      uStack_94c = local_8b0;
    }
  }
LAB_142b63f32:
  local_968 = (longlong *)local_8d8;
  uStack_944 = local_8dc;
  local_958 = (TBitArray<FDefaultBitArrayAllocator> *)(local_8d8 + 0x10);
  iStack_940 = local_8d8._8_4_ - local_8a4;
  uVar24 = local_8b0 & 0xffffffe0;
  uStack_950 = 0xffffffff;
  TStack_930.CurrentBitIndex = uStack_94c;
  TStack_930.UnvisitedBitMask = 0xffffffff;
  TStack_930._padding_ = CONCAT44(uStack_95c,uVar27);
  iVar10 = (int)local_8b0 >> 5;
  TStack_930._28_4_ = local_8dc;
  TStack_930.BaseBitIndex = local_948;
  uStack_910 = CONCAT44(uStack_93c,iStack_940);
  bVar15 = (byte)local_8b0;
  uStack_960 = uVar27;
  local_938 = local_968;
  TStack_930.Array = local_958;
  if (((int)local_8b0 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  if (uVar23 != local_8b0) {
    puVar17 = (uint *)(local_8d8 + 0x10);
    if (local_8b8 != (uint *)0x0) {
      puVar17 = local_8b8;
    }
    uVar27 = -1 << (bVar15 & 0x1f) & puVar17[iVar10];
    while (uVar27 == 0) {
      lVar16 = (longlong)iVar10;
      uVar24 = uVar24 + 0x20;
      iVar10 = iVar10 + 1;
      uVar23 = local_8b0;
      if ((int)((local_8b0 - 1) + ((int)(local_8b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_142b6403c;
      uVar27 = (puVar17 + 1)[lVar16];
    }
    uVar29 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar29 != 0) {
      for (; uVar29 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar23 = (int)lVar16 + -1 + uVar24;
    if ((int)local_8b0 < (int)uVar23) {
      uVar23 = local_8b0;
    }
  }
LAB_142b6403c:
  while( true ) {
    plVar6 = local_938;
    if ((int)local_938[1] - *(int *)((longlong)local_938 + 0x34) != (int)uStack_910) {
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_a17);
    }
    FVar2 = local_res10[0];
    if (((TStack_930.CurrentBitIndex == uVar23) &&
        (TStack_930.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_8d8 + 0x10))) &&
       (plVar6 == (longlong *)local_8d8)) break;
    pFVar22 = (FName *)((longlong)TStack_930.CurrentBitIndex * 0x10 + *plVar6);
    FVar2 = *pFVar22;
    local_9c0 = FVar2;
    if (*(int *)&(this->ParentPathToChildPaths).field_0x8 !=
        *(int *)&(this->ParentPathToChildPaths).field_0x34) {
      uVar27 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      TSet<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                           *)this,FVar2.Number + uVar27,&local_9c0);
    }
    FVar2 = *pFVar22;
    local_9b8 = FVar2;
    if (*(int *)&(this->ChildPathToParentPath).field_0x8 !=
        *(int *)&(this->ChildPathToParentPath).field_0x34) {
      uVar27 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
      RemoveImpl<FName>((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                         *)&this->ChildPathToParentPath,FVar2.Number + uVar27,&local_9b8);
    }
    local_9b0 = *pFVar22;
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_9b0);
    TStack_930.UnvisitedBitMask = TStack_930.UnvisitedBitMask & ~TStack_930._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_930);
  }
  uVar27 = ::GetTypeHash(local_res10[0].ComparisonIndex.Value);
  if (*(int *)&(this->ChildPathToParentPath).field_0x8 !=
      *(int *)&(this->ChildPathToParentPath).field_0x34) {
    puVar19 = *(undefined1 **)&(this->ChildPathToParentPath).field_0x40;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = &(this->ChildPathToParentPath).field_0x38;
    }
    iVar10 = *(int *)(puVar19 +
                     (ulonglong)
                     (*(int *)&(this->ChildPathToParentPath).field_0x48 - 1U & FVar2.Number + uVar27
                     ) * 4);
    if (iVar10 != -1) {
      do {
        lVar16 = *(longlong *)&this->ChildPathToParentPath + (longlong)iVar10 * 0x18;
        if (*(FName *)(*(longlong *)&this->ChildPathToParentPath + (longlong)iVar10 * 0x18) == FVar2
           ) {
          pFVar22 = (FName *)(lVar16 + 8);
          if (lVar16 == 0) {
            pFVar22 = (FName *)0x0;
          }
          if (pFVar22 != (FName *)0x0) {
            pTVar13 = TMapBase<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                      ::Find((TMapBase<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                              *)this,*pFVar22);
            TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
                      (pTVar13,local_res10[0]);
          }
          break;
        }
        iVar10 = *(int *)(lVar16 + 0x10);
      } while (iVar10 != -1);
    }
  }
  FVar2 = local_res10[0];
  local_9a8 = local_res10[0];
  if (*(int *)&(this->ParentPathToChildPaths).field_0x8 !=
      *(int *)&(this->ParentPathToChildPaths).field_0x34) {
    uVar27 = ::GetTypeHash(local_res10[0].ComparisonIndex.Value);
    TSet<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                         *)this,FVar2.Number + uVar27,&local_9a8);
  }
  FVar2 = local_res10[0];
  local_9a0 = local_res10[0];
  if (*(int *)&(this->ChildPathToParentPath).field_0x8 !=
      *(int *)&(this->ChildPathToParentPath).field_0x34) {
    uVar27 = ::GetTypeHash(local_res10[0].ComparisonIndex.Value);
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    RemoveImpl<FName>((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                       *)&this->ChildPathToParentPath,FVar2.Number + uVar27,&local_9a0);
  }
  local_998 = local_res10[0];
  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_998);
  local_890 = 0;
  if (local_898.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_898.Data);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_8d8);
  return true;
}

// Shrink @ 142b6ba90

void __thiscall FPathTree::Shrink(FPathTree *this)

{
  TSet<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            *)this);
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::Shrink
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)&this->ChildPathToParentPath);
  return;
}

// GetAllocatedSize @ 142b933b0

ulong64 __thiscall FPathTree::GetAllocatedSize(FPathTree *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  uint *puVar15;
  ulong64 uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  uVar6 = *(uint *)&(this->ParentPathToChildPaths).field_0x48;
  if (uVar6 < 2) {
    lVar9 = 0;
  }
  else {
    lVar9 = (longlong)(int)uVar6 << 2;
  }
  uVar6 = *(uint *)&(this->ChildPathToParentPath).field_0x48;
  if (uVar6 < 2) {
    lVar13 = 0;
  }
  else {
    lVar13 = (longlong)(int)uVar6 << 2;
  }
  puVar1 = &(this->ParentPathToChildPaths).field_0x10;
  iVar3 = *(int *)&(this->ParentPathToChildPaths).field_0x28;
  uVar6 = 1;
  iVar12 = 0;
  uVar16 = lVar13 + (ulonglong)
                    ((*(int *)&(this->ChildPathToParentPath).field_0x2c + 0x1fU >> 5) << 2) +
           (longlong)*(int *)&(this->ChildPathToParentPath).field_0xc * 0x18 +
           (longlong)*(int *)&(this->ParentPathToChildPaths).field_0xc * 0x60 +
           lVar9 + (ulonglong)
                   ((*(int *)&(this->ParentPathToChildPaths).field_0x2c + 0x1fU >> 5) << 2);
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->ParentPathToChildPaths).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar12) goto LAB_142b934bd;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar7 = iVar14 + -1 + local_res10;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_142b934bd:
  uVar11 = *(uint *)&(this->ParentPathToChildPaths).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ParentPathToChildPaths).field_0x8 -
                       *(int *)&(this->ParentPathToChildPaths).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar16 = (*pcVar4)();
    return uVar16;
  }
  uVar6 = *(uint *)&(this->ParentPathToChildPaths).field_0x28;
  if (uVar11 != uVar6) {
    puVar8 = *(undefined1 **)&(this->ParentPathToChildPaths).field_0x20;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar8 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar12) goto LAB_142b935c0;
      uVar11 = *(uint *)(puVar8 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_142b935c0:
  while( true ) {
    if (*(int *)&(this->ParentPathToChildPaths).field_0x8 -
        *(int *)&(this->ParentPathToChildPaths).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar9 = (longlong)TStack_60.CurrentBitIndex * 0x60 + *(longlong *)&this->ParentPathToChildPaths;
    if (*(uint *)(lVar9 + 0x50) < 2) {
      lVar13 = 0;
    }
    else {
      lVar13 = (longlong)(int)*(uint *)(lVar9 + 0x50) << 2;
    }
    uVar16 = uVar16 + (longlong)*(int *)(lVar9 + 0x14) * 0x10 +
                      (ulonglong)((*(int *)(lVar9 + 0x34) + 0x1fU >> 5) << 2) + lVar13;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return uVar16;
}

