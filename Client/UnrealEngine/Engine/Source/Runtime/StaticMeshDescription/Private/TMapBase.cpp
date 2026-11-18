// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StaticMeshDescription
// Functions: 8

// FindOrAddImpl<FTriangleID_const_&> @ 144367a10

FVertexInfo * __thiscall
TMapBase<FTriangleID,FVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTriangleID,FVertexInfo,0>_>
::FindOrAddImpl<FTriangleID_const_&>
          (TMapBase<FTriangleID,FVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTriangleID,FVertexInfo,0>_>
           *this,uint param_1,FTriangleID *param_2)

{
  FTriangleID FVar1;
  FTriangleID *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FTriangleID *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    FVar1 = *(FTriangleID *)
             ((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (FVar1 != (FTriangleID)0xffffffff) {
      do {
        pFVar2 = (FTriangleID *)((longlong)(int)FVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements)
        ;
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FTriangleID *)0x0) {
            return (FVertexInfo *)(pFVar2 + 2);
          }
          break;
        }
        FVar1 = pFVar2[0xc];
      } while (FVar1 != (FTriangleID)0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FTriangleID,FVertexInfo>,TDefaultMapHashableKeyFuncs<FTriangleID,FVertexInfo,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FTriangleID_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FTriangleID_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FVertexInfo *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 8);
}

// FindOrAddImpl<FVertexID> @ 144367ac0

FVertexID * __thiscall
TMapBase<FVertexID,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexID,FVertexID,0>_>
::FindOrAddImpl<FVertexID>
          (TMapBase<FVertexID,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexID,FVertexID,0>_>
           *this,uint param_1,FVertexID *param_2)

{
  FVertexID FVar1;
  FVertexID *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FVertexID *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    FVar1 = *(FVertexID *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4)
    ;
    if (FVar1 != (FVertexID)0xffffffff) {
      do {
        pFVar2 = (FVertexID *)((longlong)(int)FVar1 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FVertexID *)0x0) {
            return pFVar2 + 1;
          }
          break;
        }
        FVar1 = pFVar2[2];
      } while (FVar1 != (FVertexID)0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FVertexID,FVertexID>,TDefaultMapHashableKeyFuncs<FVertexID,FVertexID,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FVertexID_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FVertexID_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FVertexID *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x10 + 4);
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 144368990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
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
  TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
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
  uVar10 = 0;
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
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar13 == 0) goto LAB_144368c46;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar13);
  uVar14 = 1;
  if (3 < uVar13) {
    uVar12 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_120 = (undefined4)lVar11;
    uVar14 = 1 << ((byte)lVar11 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar14 <= (int)local_50)) goto LAB_144368c46;
  local_50 = uVar14;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar13 = 0;
        goto LAB_144368aa5;
      }
    }
    else {
LAB_144368aa5:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar16 = (ulonglong)uVar14;
      uVar12 = uVar10;
      do {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar8 = uVar12 & (longlong)(int)uVar14 - 1U;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(FVar9.Data + uVar8 * 4) = 0xffffffff;
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
      uVar13 = *(uint *)FVar18;
      uVar12 = uVar10;
      while (uVar13 == 0) {
        uStack_150 = (int)uVar12 + 0x20;
        uVar12 = (ulonglong)uStack_150;
        iVar17 = (int)uVar10;
        local_168 = iVar17 + 1;
        uVar10 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_144368ba2;
        uVar13 = ((uint *)((longlong)FVar18 + 4))[iVar17];
      }
      uStack_164 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_164 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_11c = (int)lVar11;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar10 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_144368ba2:
        uVar10 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_114._4_8_ = local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar10 < (int)local_70) {
      do {
        puVar15 = (undefined8 *)((longlong)(int)uVar10 * 0x10 + *(longlong *)local_114._4_8_);
        uVar4 = *puVar15;
        uVar13 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
        uVar13 = local_50 - 1 & uVar13 + (int)((ulonglong)uVar4 >> 0x20);
        *(uint *)((longlong)puVar15 + 0xc) = uVar13;
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar12 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(FVar9.Data + uVar12 * 4);
        *(int *)(FVar9.Data + uVar12 * 4) = (int)uVar10;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar10 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_144368c46:
  iVar17 = 0;
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (*piVar1 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar13,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  local_c8 = iVar17;
  iStack_cc = 0;
  uStack_dc = 1;
  if (iVar3 != 0) {
    puVar19 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_140.Array;
    }
    uVar13 = *puVar19;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      local_c8 = local_c8 + 0x20;
      iVar17 = iVar17 + 1;
      iStack_cc = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_144368cee;
      uVar13 = puVar19[lVar11 + 1];
    }
    uStack_dc = -uVar13 & uVar13;
    uVar10 = (ulonglong)uStack_dc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_118 = (int)lVar11;
    iStack_cc = local_c8 + -1 + local_118;
    if (iVar3 < iStack_cc) {
      iStack_cc = iVar3;
    }
  }
LAB_144368cee:
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
  if (iStack_cc < iVar3) {
    do {
      lVar20 = (longlong)TStack_140.CurrentBitIndex;
      lVar11 = *(longlong *)
                (*(longlong *)&(this->Pairs).Elements + (longlong)TStack_140.CurrentBitIndex * 0x18)
      ;
      uVar13 = ::GetTypeHash((FNameEntryId)(uint)lVar11);
      if (local_98._8_4_ != local_64) {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        for (iVar17 = *(int *)(FVar9.Data +
                              (ulonglong)(local_50 - 1 & (int)((ulonglong)lVar11 >> 0x20) + uVar13)
                              * 4); iVar17 != -1;
            iVar17 = *(int *)(local_98._0_8_ + (longlong)iVar17 * 0x10 + 8)) {
          if (*(longlong *)(local_98._0_8_ + (longlong)iVar17 * 0x10) == lVar11) goto LAB_144368e6e;
        }
      }
      pFVar2 = (FScriptContainerElement *)(*(longlong *)&(this->Pairs).Elements + lVar20 * 0x18);
      pFVar5 = (param_1->AllocatorInstance).Data;
      if (((pFVar5 <= pFVar2) && (pFVar2 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar17 = (*pcVar6)();
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
           *(undefined8 *)pFVar2;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
                 (FName *)local_114,
                 (bool *)(*(longlong *)&(this->Pairs).Elements +
                         (longlong)TStack_140.CurrentBitIndex * 0x18));
LAB_144368e6e:
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

// FindChecked @ 14437cb30

FName * __thiscall
TMapBase<int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FName,0>_>::FindChecked
          (TMapBase<int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FName,0>_> *this,
          int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
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
        lVar1 = lVar2 + (longlong)iVar5 * 0x14;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x14) == param_1) {
          if (lVar1 != 0) {
            return (FName *)(lVar1 + 4);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0xc);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar4) {
    return (FName *)&DAT_00000004;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FName *)(*pcVar3)();
  return pFVar6;
}

// FindChecked @ 14437cbd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<float> * __thiscall
TMapBase<UE::Math::TVector2<float>,UE::Math::TVector<float>,FDefaultSetAllocator,FNTBGroupKeyFuncs>
::FindChecked(TMapBase<UE::Math::TVector2<float>,UE::Math::TVector<float>,FDefaultSetAllocator,FNTBGroupKeyFuncs>
              *this,TVector2<float> param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TVector<float> *pTVar5;
  longlong lVar6;
  uint local_res8;
  uint local_resc;
  TVector2<float>_u_0 local_res10;
  TVector2<float>_u_0 local_res18;
  
  local_res10._0_4_ = param_1.field0_0x0._0_4_;
  if (__real_322bcc77 < (float)(local_res10._0_4_ & (uint)___xmm_7fffffff7fffffff7fffffff7fffffff))
  {
    local_res8 = local_res10._0_4_;
  }
  else {
    local_res8 = 0;
  }
  local_res10._4_4_ = param_1.field0_0x0._4_4_;
  if (__real_322bcc77 < (float)(local_res10._4_4_ & (uint)___xmm_7fffffff7fffffff7fffffff7fffffff))
  {
    local_resc = local_res10._4_4_;
  }
  else {
    local_resc = 0;
  }
  local_res10 = param_1.field0_0x0;
  local_res18 = param_1.field0_0x0;
  uVar3 = (*FCrc::MemCrc32Func)(&local_res8,8,0);
  iVar4 = TSet<TTuple<UE::Math::TVector2<float>,UE::Math::TVector<float>_>,FNTBGroupKeyFuncs,FDefaultSetAllocator>
          ::FindIndexByHash<UE::Math::TVector2<float>_>
                    (&this->Pairs,uVar3,(TVector2<float> *)&local_res18._s_0);
  if ((iVar4 != -1) &&
     (lVar6 = (longlong)iVar4 * 0x1c + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (TVector<float> *)(lVar6 + 8);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TVector<float> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar5 = (TVector<float> *)(*pcVar1)();
  return pTVar5;
}

// FindChecked @ 14437ccc0

FVertexInfo * __thiscall
TMapBase<FTriangleID,FVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTriangleID,FVertexInfo,0>_>
::FindChecked(TMapBase<FTriangleID,FVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTriangleID,FVertexInfo,0>_>
              *this,FTriangleID *param_1)

{
  code *pcVar1;
  bool bVar2;
  FTriangleID FVar3;
  FVertexInfo *pFVar4;
  ForElementType<FSetElementId> FVar5;
  FTriangleID *pFVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    FVar3 = *(FTriangleID *)
             ((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & (uint)*param_1) * 4);
    if (FVar3 != (FTriangleID)0xffffffff) {
      do {
        pFVar6 = (FTriangleID *)((longlong)(int)FVar3 * 0x38 + *(longlong *)&(this->Pairs).Elements)
        ;
        if (*pFVar6 == *param_1) {
          if (pFVar6 != (FTriangleID *)0x0) {
            return (FVertexInfo *)(pFVar6 + 2);
          }
          break;
        }
        FVar3 = pFVar6[0xc];
      } while (FVar3 != (FTriangleID)0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FVertexInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FVertexInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14437cd60

FVertexID * __thiscall
TMapBase<FVertexID,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexID,FVertexID,0>_>
::FindChecked(TMapBase<FVertexID,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexID,FVertexID,0>_>
              *this,FVertexID *param_1)

{
  code *pcVar1;
  bool bVar2;
  FVertexID FVar3;
  ForElementType<FSetElementId> FVar4;
  FVertexID *pFVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    FVar3 = *(FVertexID *)
             ((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & (uint)*param_1) * 4);
    if (FVar3 != (FVertexID)0xffffffff) {
      do {
        pFVar5 = (FVertexID *)((longlong)(int)FVar3 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar5 == *param_1) {
          if (pFVar5 != (FVertexID *)0x0) {
            return pFVar5 + 1;
          }
          break;
        }
        FVar3 = pFVar5[2];
      } while (FVar3 != (FVertexID)0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FVertexID *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pFVar5 = (FVertexID *)(*pcVar1)();
  return pFVar5;
}

// FindChecked @ 14437ce00

TVector2<double> * __thiscall
TMapBase<FVertexInstanceID,UE::Math::TVector2<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexInstanceID,UE::Math::TVector2<double>,0>_>
::FindChecked(TMapBase<FVertexInstanceID,UE::Math::TVector2<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexInstanceID,UE::Math::TVector2<double>,0>_>
              *this,FVertexInstanceID *param_1)

{
  code *pcVar1;
  bool bVar2;
  FVertexInstanceID FVar3;
  TVector2<double> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  FVertexInstanceID *pFVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    FVar3 = *(FVertexInstanceID *)
             ((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & (uint)*param_1) * 4);
    if (FVar3 != (FVertexInstanceID)0xffffffff) {
      do {
        pFVar6 = (FVertexInstanceID *)
                 ((longlong)(int)FVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar6 == *param_1) {
          if (pFVar6 != (FVertexInstanceID *)0x0) {
            return (TVector2<double> *)(pFVar6 + 2);
          }
          break;
        }
        FVar3 = pFVar6[6];
      } while (FVar3 != (FVertexInstanceID)0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TVector2<double> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TVector2<double> *)(*pcVar1)();
  return pTVar4;
}

