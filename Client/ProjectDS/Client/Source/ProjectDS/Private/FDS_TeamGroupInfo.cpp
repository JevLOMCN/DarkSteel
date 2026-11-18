// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// AddTeamEntityID @ 14ba35f80

void __thiscall
FDS_TeamGroupInfo::AddTeamEntityID
          (FDS_TeamGroupInfo *this,ulong64 param_1,
          TArray<__int64,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar6;
  undefined1 *puVar7;
  ulong64 local_res10;
  undefined1 local_res18 [16];
  void *local_58;
  undefined8 local_50;
  FScriptContainerElement *local_48;
  void **local_40;
  
  pFVar6 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  local_res10 = param_1;
  do {
    if (param_2->ArrayNum != iVar2) {
      `TCheckedPointerIterator<__int64_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar6 == pFVar1) {
      return;
    }
    lVar3 = *(longlong *)pFVar6;
    if (*(int *)&(this->TeamIDMap).field_0x8 != *(int *)&(this->TeamIDMap).field_0x34) {
      puVar4 = *(undefined1 **)&(this->TeamIDMap).field_0x40;
      puVar7 = &(this->TeamIDMap).field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar7 = puVar4;
      }
      iVar5 = *(int *)(puVar7 + ((lVar3 >> 0x20) * 0x17 + lVar3 &
                                (ulonglong)(*(int *)&(this->TeamIDMap).field_0x48 - 1)) * 4);
      if (iVar5 != -1) {
        do {
          if (*(longlong *)((longlong)iVar5 * 0x20 + *(longlong *)&this->TeamIDMap) == lVar3)
          goto LAB_14ba36067;
          iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *(longlong *)&this->TeamIDMap);
        } while (iVar5 != -1);
      }
    }
    local_40 = &local_58;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_48 = pFVar6;
    TSet<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<__int64_const_&,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_&&>_>
              ((TSet<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&this->TeamIDMap,
               (TPairInitializer<__int64_const_&,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_&&>
                *)(local_res18 + 8),(bool *)&local_48);
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
LAB_14ba36067:
    this_00 = TMapBase<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
              ::FindChecked((TMapBase<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
                             *)&this->TeamIDMap,*(long64 *)pFVar6);
    TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned___int64_const_&>
              (this_00,&local_res10);
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// AddTeamGroupData @ 14ba360b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FDS_TeamGroupInfo::AddTeamGroupData
          (TMap<TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>_>
           *param_1,ulong64 param_2)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  ItemCase IVar4;
  void *pvVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  TMap<TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar9;
  bool bVar10;
  int iVar11;
  FDS_TeamGroupInfo *pFVar12;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *this;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  TSparseSetElement<TTuple<TeamType::ItemCase,FDS_TeamGroupInfo>_> *pTVar18;
  uint uVar19;
  uint uVar20;
  ForAnyElementType FVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  uint *puVar24;
  undefined1 auStackY_1b8 [32];
  undefined1 local_178;
  undefined1 local_177 [3];
  int local_174;
  ForAnyElementType local_170;
  uint local_168;
  int local_164;
  void *local_160;
  undefined8 local_158;
  TMap<TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>_>
  *local_150;
  int iStack_148;
  uint uStack_144;
  undefined1 *local_140;
  undefined4 uStack_138;
  int iStack_134;
  int local_130;
  int iStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  int local_120;
  undefined1 local_11c [12];
  ulong64 local_110;
  TMap<TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>_>
  *local_108;
  TMap<TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>_>
  *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  FSparseArrayAllocationInfo local_d0;
  FScriptContainerElement *local_c0;
  void **local_b8;
  ItemCase local_a8;
  undefined1 local_a0 [32];
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ForElementType<FSetElementId> local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  iVar11 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_148 = 0;
  uStack_144 = 1;
  local_130 = 0;
  iStack_134 = iStack_148;
  if (iVar11 != 0) {
    puVar24 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar24 = (uint *)puVar1;
    }
    uVar20 = *puVar24;
    local_130 = 0;
    iStack_148 = 0;
    while (uVar20 == 0) {
      lVar13 = (longlong)iStack_148;
      local_130 = local_130 + 0x20;
      iStack_148 = iStack_148 + 1;
      iStack_134 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_148) goto LAB_14ba3617d;
      uVar20 = puVar24[lVar13 + 1];
    }
    uStack_144 = -uVar20 & uVar20;
    uVar15 = (ulonglong)uStack_144 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_120 = (int)lVar13;
    iStack_134 = local_120 + -1 + local_130;
    if (iVar11 < iStack_134) {
      iStack_134 = iVar11;
    }
  }
LAB_14ba3617d:
  uVar20 = *(uint *)&param_1->field_0x28;
  uVar19 = uVar20 & 0xffffffe0;
  iStack_128 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_138 = 0xffffffff;
  TStack_f8._padding_ = CONCAT44(uStack_144,iStack_148);
  TStack_f8.CurrentBitIndex = iStack_134;
  TStack_f8.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar20 >> 5;
  TStack_f8._28_4_ = iStack_134;
  TStack_f8.BaseBitIndex = local_130;
  uStack_d8 = CONCAT44(uStack_124,iStack_128);
  local_150 = param_1;
  local_140 = puVar1;
  iStack_12c = iStack_134;
  local_11c._4_8_ = param_2;
  local_108 = param_1;
  local_100 = param_1;
  TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar20 < 0) || (iVar11 < (int)uVar20)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = _UNK_150631d98;
  uVar7 = ___xmm_00000000ffffffff0000008000000000;
  uVar3 = *(uint *)&param_1->field_0x28;
  if (uVar20 != uVar3) {
    puVar22 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar22 = puVar1;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar16 * 4);
    while (uVar20 == 0) {
      lVar13 = (longlong)iVar16;
      uVar19 = uVar19 + 0x20;
      iVar16 = iVar16 + 1;
      uVar20 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14ba36281;
      uVar20 = *(uint *)(puVar22 + lVar13 * 4 + 4);
    }
    uVar15 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar20 = (int)lVar13 + -1 + uVar19;
    if ((int)uVar3 < (int)uVar20) {
      uVar20 = uVar3;
    }
  }
LAB_14ba36281:
  do {
    pTVar9 = local_100;
    pTVar18 = (TSparseSetElement<TTuple<TeamType::ItemCase,FDS_TeamGroupInfo>_> *)0x0;
    if (*(int *)&local_100->field_0x8 - *(int *)&local_100->field_0x34 != (int)uStack_d8) {
      `TSparseArray<TSparseSetElement<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_178);
    }
    if (((TStack_f8.CurrentBitIndex == uVar20) &&
        (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == param_1))
    {
      return;
    }
    local_170.Data = (FScriptContainerElement *)0x0;
    lVar13 = *(longlong *)pTVar9;
    lVar14 = (longlong)TStack_f8.CurrentBitIndex * 0x20;
    local_168 = *(uint *)(lVar14 + 0x10 + lVar13);
    lVar17 = (longlong)(int)local_168;
    IVar4 = *(ItemCase *)(lVar14 + lVar13);
    pvVar5 = *(void **)(lVar14 + 8 + lVar13);
    if (local_168 == 0) {
      local_164 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_168,0,&local_170,local_168,&local_164);
      memcpy(local_170.Data,pvVar5,lVar17 << 3);
    }
    iVar11 = UDS_CharInfoData::TeamGroupInfoMap._48_4_;
    if (UDS_CharInfoData::TeamGroupInfoMap._8_4_ != UDS_CharInfoData::TeamGroupInfoMap._52_4_) {
      lVar13 = 0x154cf72c8;
      if (UDS_CharInfoData::TeamGroupInfoMap._64_8_ != 0) {
        lVar13 = UDS_CharInfoData::TeamGroupInfoMap._64_8_;
      }
      for (iVar16 = *(int *)(lVar13 + (ulonglong)
                                      (UDS_CharInfoData::TeamGroupInfoMap._72_4_ - kNeutral & IVar4)
                                      * 4); iVar16 != -1;
          iVar16 = *(int *)((longlong)iVar16 * 0x68 + 0x60 +
                           UDS_CharInfoData::TeamGroupInfoMap._0_8_)) {
        if (*(ItemCase *)((longlong)iVar16 * 0x68 + UDS_CharInfoData::TeamGroupInfoMap._0_8_) ==
            IVar4) {
          if (iVar16 != -1) goto LAB_14ba3652f;
          break;
        }
      }
    }
    local_a0._0_8_ = (FScriptContainerElement *)0x0;
    local_a0._8_8_ = 0;
    local_80 = (void *)0x0;
    local_78 = uVar7;
    uStack_70 = uVar8;
    local_60 = (ForElementType<FSetElementId>)0x0;
    local_58 = 0;
    local_a8 = IVar4;
    if (UDS_CharInfoData::TeamGroupInfoMap._52_4_ == 0) {
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x68,8,1,(ForAnyElementType *)&UDS_CharInfoData::TeamGroupInfoMap,
                          (int *)&UDS_CharInfoData::TeamGroupInfoMap.field_0x8,
                          (int *)&UDS_CharInfoData::TeamGroupInfoMap.field_0xc);
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &UDS_CharInfoData::TeamGroupInfoMap.field_0x10,false);
    }
    else {
      UDS_CharInfoData::TeamGroupInfoMap._52_4_ = UDS_CharInfoData::TeamGroupInfoMap._52_4_ + -1;
      UDS_CharInfoData::TeamGroupInfoMap._48_4_ =
           *(int *)((longlong)(int)UDS_CharInfoData::TeamGroupInfoMap._48_4_ * 0x68 + 4 +
                   UDS_CharInfoData::TeamGroupInfoMap._0_8_);
      if (UDS_CharInfoData::TeamGroupInfoMap._52_4_ != 0) {
        *(undefined4 *)
         ((longlong)(int)UDS_CharInfoData::TeamGroupInfoMap._48_4_ * 0x68 +
         UDS_CharInfoData::TeamGroupInfoMap._0_8_) = 0xffffffff;
      }
    }
    TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&UDS_CharInfoData::TeamGroupInfoMap,&local_d0,iVar11);
    pvVar5 = local_d0.Pointer;
    if (local_d0.Pointer != (TSparseSetElement<TTuple<TeamType::ItemCase,FDS_TeamGroupInfo>_> *)0x0)
    {
      *(ItemCase *)local_d0.Pointer = IVar4;
      *(ItemCase *)((longlong)local_d0.Pointer + 8) = local_a8;
      TSet<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      TSet<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                ((TSet<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)((longlong)local_d0.Pointer + 0x10),
                 (TSet<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)local_a0);
      *(undefined4 *)((longlong)pvVar5 + 0x60) = 0xffffffff;
      pTVar18 = pvVar5;
    }
    uVar19 = *(uint *)pTVar18;
    local_174 = local_d0.Index;
    bVar10 = TSet<TTuple<enum_TeamType::ItemCase,FDS_TeamGroupInfo>,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,FDS_TeamGroupInfo,0>,FDefaultSetAllocator>
             ::TryReplaceExisting
                       (&UDS_CharInfoData::TeamGroupInfoMap,uVar19,pTVar18,&local_174,(bool *)0x0);
    if (!bVar10) {
      TSet<TTuple<enum_TeamType::ItemCase,FDS_TeamGroupInfo>,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,FDS_TeamGroupInfo,0>,FDefaultSetAllocator>
      ::RehashOrLink(&UDS_CharInfoData::TeamGroupInfoMap,uVar19,pTVar18,local_174);
    }
    local_58 = 0;
    if (local_60 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_60);
    }
    TSparseArray<TSparseSetElement<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_a0,0,local_a0._8_4_);
    bVar10 = local_a0._12_4_ != 0;
    local_a0._8_8_ = (ulonglong)(uint)local_a0._12_4_ << 0x20;
    if (bVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_a0,0,(int *)(local_a0 + 0xc));
    }
    uVar19 = local_78._4_4_;
    uStack_70 = 0xffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    if (0x80 < uVar19) {
      local_78 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),0);
    }
    if (local_80 != (void *)0x0) {
      FMemory::Free(local_80);
    }
    if ((FScriptContainerElement *)local_a0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a0._0_8_);
    }
LAB_14ba3652f:
    pFVar12 = TMapBase<enum_TeamType::ItemCase,FDS_TeamGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,FDS_TeamGroupInfo,0>_>
              ::FindChecked(&UDS_CharInfoData::TeamGroupInfoMap,IVar4);
    uVar19 = local_168;
    uVar15 = (ulonglong)(int)local_168;
    local_110 = local_11c._4_8_;
    pFVar2 = local_170.Data + uVar15 * 8;
    FVar21.Data = local_170.Data;
    while( true ) {
      if ((uint)uVar15 != uVar19) {
        `TCheckedPointerIterator<__int64_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_177);
      }
      if (FVar21.Data == pFVar2) break;
      lVar13 = *(longlong *)FVar21.Data;
      if (*(int *)&(pFVar12->TeamIDMap).field_0x8 != *(int *)&(pFVar12->TeamIDMap).field_0x34) {
        puVar22 = *(undefined1 **)&(pFVar12->TeamIDMap).field_0x40;
        puVar23 = &(pFVar12->TeamIDMap).field_0x38;
        if (puVar22 != (undefined1 *)0x0) {
          puVar23 = puVar22;
        }
        iVar11 = *(int *)(puVar23 +
                         ((lVar13 >> 0x20) * 0x17 + lVar13 &
                         (ulonglong)(*(int *)&(pFVar12->TeamIDMap).field_0x48 - 1)) * 4);
        if (iVar11 != -1) {
          do {
            if (*(longlong *)((longlong)iVar11 * 0x20 + *(longlong *)&pFVar12->TeamIDMap) == lVar13)
            goto LAB_14ba36612;
            iVar11 = *(int *)((longlong)iVar11 * 0x20 + 0x18 + *(longlong *)&pFVar12->TeamIDMap);
          } while (iVar11 != -1);
        }
      }
      local_160 = (void *)0x0;
      local_158 = 0;
      local_b8 = &local_160;
      local_c0 = FVar21.Data;
      TSet<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<__int64_const_&,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_&&>_>
                ((TSet<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)&pFVar12->TeamIDMap,
                 (TPairInitializer<__int64_const_&,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_&&>
                  *)local_11c,(bool *)&local_c0);
      if (local_160 != (void *)0x0) {
        FMemory::Free(local_160);
      }
LAB_14ba36612:
      this = TMapBase<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
             ::FindChecked((TMapBase<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
                            *)&pFVar12->TeamIDMap,*(long64 *)FVar21.Data);
      TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned___int64_const_&>
                (this,&local_110);
      uVar15 = (ulonglong)local_168;
      FVar21.Data = FVar21.Data + 8;
    }
    if (local_170.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data);
    }
    TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
    param_1 = local_108;
  } while( true );
}

// GetTeamEntityIDList @ 14ba50790

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __thiscall
FDS_TeamGroupInfo::GetTeamEntityIDList(FDS_TeamGroupInfo *this,long64 param_1)

{
  int iVar1;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FDS_TeamGroupInfo::GetTeamEntityIDList'::__l2::
             _dynamic_atexit_destructor_for__emptyList__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(int *)&(this->TeamIDMap).field_0x8 != *(int *)&(this->TeamIDMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->TeamIDMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->TeamIDMap).field_0x38;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->TeamIDMap).field_0x48 - 1U &
                              (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&this->TeamIDMap) == param_1) {
          pTVar2 = TMapBase<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked((TMapBase<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
                                  *)&this->TeamIDMap,param_1);
          return pTVar2;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + *(longlong *)&this->TeamIDMap);
      } while (iVar1 != -1);
    }
  }
  return &emptyList;
}

// HasEntityID @ 14ba51590

bool __thiscall FDS_TeamGroupInfo::HasEntityID(FDS_TeamGroupInfo *this,ulong64 param_1)

{
  undefined1 *puVar1;
  ulong64 *puVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  ulong64 *puVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&(this->TeamIDMap).field_0x28;
  puVar1 = &(this->TeamIDMap).field_0x10;
  iVar13 = 0;
  uVar8 = 1;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(this->TeamIDMap).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14ba5162e;
      uVar12 = puVar16[lVar11 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar9 = (int)lVar11 + -1 + iVar15;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_14ba5162e:
  uVar12 = *(uint *)&(this->TeamIDMap).field_0x28;
  uVar17 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar13);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->TeamIDMap).field_0x8 - *(int *)&(this->TeamIDMap).field_0x34)
  ;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar8 = *(uint *)&(this->TeamIDMap).field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&(this->TeamIDMap).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      uVar17 = uVar17 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14ba51730;
      uVar12 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar12 = (int)lVar11 + -1 + uVar17;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_14ba51730:
  while( true ) {
    if (*(int *)&(this->TeamIDMap).field_0x8 - *(int *)&(this->TeamIDMap).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar11 = (longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)&this->TeamIDMap;
    puVar10 = *(ulong64 **)(lVar11 + 8);
    puVar2 = puVar10 + *(int *)(lVar11 + 0x10);
    for (; puVar10 != puVar2; puVar10 = puVar10 + 1) {
      if (*puVar10 == param_1) {
        return true;
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return false;
}

// RemoveEntityID @ 14ba66400

void __thiscall FDS_TeamGroupInfo::RemoveEntityID(FDS_TeamGroupInfo *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulong64 *puVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulong64 local_res10;
  undefined1 local_a8 [32];
  longlong local_88;
  TSet<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_80;
  longlong *local_78;
  undefined1 auStack_70 [16];
  uint uStack_60;
  uint uStack_5c;
  longlong local_58;
  TSet<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_50;
  TSet<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_48;
  char local_40;
  char cStack_3f;
  
  local_res10 = param_1;
  TSet<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_a8,
             (TSet<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->TeamIDMap);
  local_40 = '\0';
  cStack_3f = '\0';
  stack0xffffffffffffff98 = local_a8._16_16_;
  local_78 = (longlong *)local_a8._0_8_;
  auStack_70._0_8_ = local_a8._8_8_;
  local_58 = local_88;
  pTStack_50 = pTStack_80;
  uVar7 = local_a8._24_8_ >> 0x20;
  local_48 = (TSet<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->TeamIDMap;
  if (local_a8._28_4_ < *(int *)(local_a8._16_8_ + 0x18)) {
    do {
      puVar9 = (ulonglong *)(*local_78 + 8 + (longlong)(int)uVar7 * 0x20);
      puVar2 = (ulong64 *)*puVar9;
      iVar5 = (int)puVar9[1];
      puVar6 = puVar2;
      if (puVar2 != puVar2 + iVar5) {
LAB_14ba664d4:
        if (*puVar6 != local_res10) goto code_r0x00014ba664d9;
        if (((puVar2 <= &local_res10) && (&local_res10 < puVar2 + *(int *)((longlong)puVar9 + 0xc)))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar1 = (int)puVar9[1];
        if (iVar1 != 0) {
          puVar2 = (ulong64 *)*puVar9;
          iVar5 = 0;
          lVar10 = 0;
          bVar4 = *puVar2 != local_res10;
          uVar8 = local_res10;
          iVar11 = 0;
          do {
            iVar12 = iVar11;
            do {
              lVar10 = lVar10 + 1;
              iVar12 = iVar12 + 1;
              if (iVar1 <= lVar10) break;
            } while (bVar4 == (puVar2[lVar10] != uVar8));
            if (bVar4 != false) {
              if (iVar5 != iVar11) {
                memmove(puVar2 + iVar5,puVar2 + iVar11,(longlong)(iVar12 - iVar11) << 3);
                uVar8 = local_res10;
              }
              iVar5 = iVar5 + (iVar12 - iVar11);
            }
            bVar4 = (bool)(bVar4 ^ 1);
            iVar11 = iVar12;
          } while (lVar10 < iVar1);
          *(int *)(puVar9 + 1) = iVar5;
          goto LAB_14ba665d7;
        }
        goto LAB_14ba665dc;
      }
LAB_14ba665d7:
      if (iVar5 == 0) {
LAB_14ba665dc:
        TSet<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_50,uStack_5c);
        local_40 = '\x01';
      }
      uStack_60 = uStack_60 & ~auStack_70._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_70);
      uVar7 = (ulonglong)uStack_5c;
    } while ((int)uStack_5c < *(int *)(auStack_70._8_8_ + 0x18));
    if ((local_40 != '\0') && (cStack_3f != '\0')) {
      uVar13 = *(int *)&(local_48->Elements).field_0x8 - *(int *)&(local_48->Elements).field_0x34;
      if (uVar13 < 4) {
        iVar5 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar10 & 0x1f);
      }
      if (((0 < (int)uVar13) && (local_48->HashSize < iVar5)) || (iVar5 < local_48->HashSize)) {
        local_48->HashSize = iVar5;
        TSet<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_48);
      }
    }
  }
  return;
code_r0x00014ba664d9:
  puVar6 = puVar6 + 1;
  if (puVar6 == puVar2 + iVar5) goto LAB_14ba665d7;
  goto LAB_14ba664d4;
}

// RemoveTeamEntityID @ 14ba673b0

void __thiscall
FDS_TeamGroupInfo::RemoveTeamEntityID
          (FDS_TeamGroupInfo *this,ulong64 param_1,
          TArray<__int64,TSizedDefaultAllocator<32>_> *param_2)

{
  TMap<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  FScriptContainerElement *pFVar1;
  uint uVar2;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar8;
  ulonglong uVar9;
  ulong64 uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  undefined1 *puVar16;
  int iVar17;
  ulong64 local_res10;
  TArray<__int64,TSizedDefaultAllocator<32>_> *local_res18;
  undefined1 local_res20 [8];
  
  pFVar15 = (param_2->AllocatorInstance).Data;
  uVar2 = param_2->ArrayNum;
  uVar9 = (ulonglong)(int)uVar2;
  pFVar1 = pFVar15 + uVar9 * 8;
  local_res10 = param_1;
  local_res18 = param_2;
LAB_14ba673eb:
  if (local_res18->ArrayNum != (int)uVar9) {
    local_res20[0] = 0;
    `TCheckedPointerIterator<__int64_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res20);
  }
  if (pFVar15 == pFVar1) {
    return;
  }
  lVar11 = *(longlong *)pFVar15;
  this_00 = &this->TeamIDMap;
  if (*(int *)&(this->TeamIDMap).field_0x8 != *(int *)&(this->TeamIDMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->TeamIDMap).field_0x40;
    puVar12 = &(this->TeamIDMap).field_0x38;
    puVar16 = puVar12;
    if (puVar3 != (undefined1 *)0x0) {
      puVar16 = puVar3;
    }
    iVar7 = *(int *)(puVar16 +
                    ((lVar11 >> 0x20) * 0x17 + lVar11 &
                    (ulonglong)(*(int *)&(this->TeamIDMap).field_0x48 - 1)) * 4);
    if (iVar7 != -1) {
LAB_14ba67470:
      if (*(longlong *)((longlong)iVar7 * 0x20 + *(longlong *)&this_00->field_0x0) != lVar11)
      goto code_r0x00014ba6747c;
      pTVar8 = TMapBase<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
               ::FindChecked((TMapBase<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
                              *)this_00,lVar11);
      pFVar4 = (pTVar8->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_res10) &&
          ((FScriptContainerElement *)&local_res10 < pFVar4 + (longlong)pTVar8->ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = pTVar8->ArrayNum;
      if (iVar7 != 0) {
        pFVar4 = (pTVar8->AllocatorInstance).Data;
        iVar17 = 0;
        lVar11 = 0;
        bVar6 = *(ulong64 *)pFVar4 != local_res10;
        uVar10 = local_res10;
        iVar13 = 0;
        do {
          iVar14 = iVar13;
          do {
            lVar11 = lVar11 + 1;
            iVar14 = iVar14 + 1;
            if (iVar7 <= lVar11) break;
          } while (bVar6 == (*(ulong64 *)(pFVar4 + lVar11 * 8) != uVar10));
          if (bVar6 != false) {
            if (iVar17 != iVar13) {
              memmove(pFVar4 + (longlong)iVar17 * 8,pFVar4 + (longlong)iVar13 * 8,
                      (longlong)(iVar14 - iVar13) << 3);
              uVar10 = local_res10;
            }
            iVar17 = iVar17 + (iVar14 - iVar13);
          }
          bVar6 = (bool)(bVar6 ^ 1);
          iVar13 = iVar14;
        } while (lVar11 < iVar7);
        pTVar8->ArrayNum = iVar17;
      }
      pTVar8 = TMapBase<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
               ::FindChecked((TMapBase<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
                              *)this_00,*(long64 *)pFVar15);
      if ((pTVar8->ArrayNum == 0) &&
         (lVar11 = *(longlong *)pFVar15,
         *(int *)&(this->TeamIDMap).field_0x8 != *(int *)&(this->TeamIDMap).field_0x34)) {
        puVar3 = *(undefined1 **)&(this->TeamIDMap).field_0x40;
        if (puVar3 != (undefined1 *)0x0) {
          puVar12 = puVar3;
        }
        iVar7 = *(int *)(puVar12 +
                        ((longlong)*(int *)&(this->TeamIDMap).field_0x48 - 1U &
                        (longlong)((int)((ulonglong)lVar11 >> 0x20) * 0x17 + (int)lVar11)) * 4);
        if (iVar7 == -1) goto LAB_14ba67658;
        do {
          if (*(longlong *)((longlong)iVar7 * 0x20 + *(longlong *)&this_00->field_0x0) == lVar11) {
            TSet<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::RemoveByIndex((TSet<TTuple<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                             *)this_00,iVar7);
            goto LAB_14ba67658;
          }
          iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *(longlong *)&this_00->field_0x0);
        } while (iVar7 != -1);
        pFVar15 = pFVar15 + 8;
        uVar9 = (ulonglong)uVar2;
        goto LAB_14ba673eb;
      }
    }
  }
LAB_14ba67658:
  pFVar15 = pFVar15 + 8;
  uVar9 = (ulonglong)uVar2;
  goto LAB_14ba673eb;
code_r0x00014ba6747c:
  iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *(longlong *)&this_00->field_0x0);
  if (iVar7 == -1) goto code_r0x00014ba67485;
  goto LAB_14ba67470;
code_r0x00014ba67485:
  pFVar15 = pFVar15 + 8;
  uVar9 = (ulonglong)uVar2;
  goto LAB_14ba673eb;
}

// RemoveTeamGroupData @ 14ba676a0

void __cdecl
FDS_TeamGroupInfo::RemoveTeamGroupData
          (TMap<TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>_>
           *param_1,ulong64 param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ItemCase IVar5;
  void *_Src;
  code *pcVar6;
  TMap<TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar7;
  bool bVar8;
  FDS_TeamGroupInfo *this;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  TArray<__int64,TSizedDefaultAllocator<32>_> local_a8;
  TMap<TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar13 = *puVar16;
    while (uVar13 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14ba6773d;
      uVar13 = puVar16[lVar9 + 1];
    }
    uStack_8c = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_7c = (int)lVar9 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14ba6773d:
  uVar13 = *(uint *)&param_1->field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_70 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar13 != uVar4) {
    puVar15 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ba67840;
      uVar13 = *(uint *)(puVar15 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar13 = (int)lVar9 + -1 + uVar12;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_14ba67840:
  do {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar13) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    {
      return;
    }
    lVar9 = *(longlong *)pTVar7;
    lVar10 = (longlong)TStack_60.CurrentBitIndex * 0x20;
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = *(int *)(lVar10 + 0x10 + lVar9);
    lVar14 = (longlong)local_a8.ArrayNum;
    IVar5 = *(ItemCase *)(lVar10 + lVar9);
    _Src = *(void **)(lVar10 + 8 + lVar9);
    if (local_a8.ArrayNum == 0) {
      local_a8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_a8.ArrayNum,0,&local_a8.AllocatorInstance,local_a8.ArrayNum,
                 &local_a8.ArrayMax);
      memcpy(local_a8.AllocatorInstance.Data,_Src,lVar14 << 3);
    }
    if (UDS_CharInfoData::TeamGroupInfoMap._8_4_ != UDS_CharInfoData::TeamGroupInfoMap._52_4_) {
      lVar9 = 0x154cf72c8;
      if (UDS_CharInfoData::TeamGroupInfoMap._64_8_ != 0) {
        lVar9 = UDS_CharInfoData::TeamGroupInfoMap._64_8_;
      }
      for (iVar3 = *(int *)(lVar9 + (ulonglong)
                                    (UDS_CharInfoData::TeamGroupInfoMap._72_4_ - kNeutral & IVar5) *
                                    4); iVar3 != -1;
          iVar3 = *(int *)((longlong)iVar3 * 0x68 + 0x60 + UDS_CharInfoData::TeamGroupInfoMap._0_8_)
          ) {
        if (*(ItemCase *)((longlong)iVar3 * 0x68 + UDS_CharInfoData::TeamGroupInfoMap._0_8_) ==
            IVar5) {
          this = TMapBase<enum_TeamType::ItemCase,FDS_TeamGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,FDS_TeamGroupInfo,0>_>
                 ::FindChecked(&UDS_CharInfoData::TeamGroupInfoMap,IVar5);
          RemoveTeamEntityID(this,param_2,&local_a8);
          if (local_a8.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14ba67942;
          goto LAB_14ba6793d;
        }
      }
    }
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
LAB_14ba6793d:
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
LAB_14ba67942:
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// RemoveTeamGroupData @ 14ba679b0

void __cdecl FDS_TeamGroupInfo::RemoveTeamGroupData(ulong64 param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *local_78;
  longlong lStack_70;
  undefined1 local_68 [16];
  int local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  int local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  TMap<TeamType::ItemCase,FDS_TeamGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TeamType::ItemCase,FDS_TeamGroupInfo,0>_>
  *local_18;
  undefined2 local_10;
  
  TSet<TTuple<enum_TeamType::ItemCase,FDS_TeamGroupInfo>,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,FDS_TeamGroupInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_78,
             (TSet<TTuple<TeamType::ItemCase,FDS_TeamGroupInfo>,TDefaultMapHashableKeyFuncs<TeamType::ItemCase,FDS_TeamGroupInfo,0>,FDefaultSetAllocator>
              *)&UDS_CharInfoData::TeamGroupInfoMap);
  local_18 = &UDS_CharInfoData::TeamGroupInfoMap;
  local_10 = 0;
  stack0xffffffffffffffc8 = local_68;
  local_48 = local_78;
  auStack_40._0_8_ = lStack_70;
  local_28 = local_58;
  uStack_24 = uStack_54;
  uStack_20 = uStack_50;
  uVar3 = local_68._8_8_ >> 0x20;
  if (local_68._12_4_ < *(int *)(local_68._0_8_ + 0x18)) {
    do {
      RemoveEntityID((FDS_TeamGroupInfo *)(*local_48 + 8 + (longlong)(int)uVar3 * 0x68),param_1);
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar3 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar4 = *(int *)&local_18->field_0x8 - *(int *)&local_18->field_0x34;
      if (uVar4 < 4) {
        iVar2 = 1;
      }
      else {
        uVar3 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar2 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar4) && (*(int *)&local_18->field_0x48 < iVar2)) ||
         (iVar2 < *(int *)&local_18->field_0x48)) {
        *(int *)&local_18->field_0x48 = iVar2;
        TSet<TTuple<enum_TeamType::ItemCase,FDS_TeamGroupInfo>,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,FDS_TeamGroupInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

