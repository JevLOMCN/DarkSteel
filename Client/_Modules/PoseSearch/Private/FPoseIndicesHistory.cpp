// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 2

// operator== @ 14a8e4a50

bool __thiscall
UE::PoseSearch::FPoseIndicesHistory::operator==
          (FPoseIndicesHistory *this,FPoseIndicesHistory *param_1)

{
  FHistoricalPoseIndex *pFVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  uint *puVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  FPoseIndicesHistory *pFStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_38;
  uint uStack_34;
  uint uStack_30;
  int iStack_2c;
  
  if (*(int *)&(this->IndexToTime).field_0x8 - *(int *)&(this->IndexToTime).field_0x34 ==
      *(int *)&(param_1->IndexToTime).field_0x8 - *(int *)&(param_1->IndexToTime).field_0x34) {
    uVar7 = *(uint *)&(this->IndexToTime).field_0x28;
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->IndexToTime).field_0x10;
    pfVar13 = (float *)0x0;
    uStack_48 = 0;
    uStack_44 = 1;
    pfVar11 = pfVar13;
    uStack_30 = uStack_48;
    if (uVar7 != 0) {
      puVar10 = *(uint **)&(this->IndexToTime).field_0x20;
      pfVar11 = (float *)(ulonglong)uVar7;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)TStack_70.Array;
      }
      uVar6 = *puVar10;
      pfVar9 = pfVar13;
      pfVar12 = pfVar13;
      uStack_30 = 0;
      uStack_48 = 0;
      while (uVar6 == 0) {
        iVar8 = (int)pfVar9;
        uStack_30 = (int)pfVar12 + 0x20;
        pfVar12 = (float *)(ulonglong)uStack_30;
        uStack_48 = iVar8 + 1;
        pfVar9 = (float *)(ulonglong)uStack_48;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_48)
        goto LAB_14a9038a9;
        uVar6 = puVar10[(longlong)iVar8 + 1];
      }
      uStack_44 = -uVar6 & uVar6;
      uVar3 = (ulonglong)uStack_44 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uVar6 = (uStack_30 - 1) + (int)lVar4;
      if ((int)uVar7 < (int)uVar6) {
        uVar6 = uVar7;
      }
      pfVar11 = (float *)(ulonglong)uVar6;
    }
LAB_14a9038a9:
    uStack_38 = 0xffffffff;
    uStack_34 = (uint)pfVar11;
    iStack_2c = TStack_70.CurrentBitIndex;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    TStack_70._28_4_ = TStack_70.CurrentBitIndex;
    TStack_70.BaseBitIndex = uStack_30;
    pFStack_50 = this;
    puStack_40 = (undefined1 *)TStack_70.Array;
    TStack_70._padding_._0_4_ = uStack_48;
    TStack_70._padding_._4_4_ = uStack_44;
    TStack_70.CurrentBitIndex = uStack_34;
    if ((int)uStack_34 < (int)uVar7) {
      do {
        lVar4 = *(longlong *)&this->IndexToTime;
        pFVar1 = (FHistoricalPoseIndex *)(lVar4 + (longlong)(int)pfVar11 * 0x18);
        uVar7 = PoseSearch::GetTypeHash(pFVar1);
        iVar8 = TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
                ::FindIndexByHash<UE::PoseSearch::FHistoricalPoseIndex>
                          ((TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
                            *)param_1,uVar7,pFVar1);
        if (iVar8 == -1) goto LAB_14a90399b;
        lVar2 = *(longlong *)&param_1->IndexToTime + (longlong)iVar8 * 0x18;
        pfVar9 = (float *)(lVar2 + 0xc);
        if (lVar2 == 0) {
          pfVar9 = pfVar13;
        }
        if ((pfVar9 == (float *)0x0) ||
           (*(float *)(lVar4 + 0xc + (longlong)(int)pfVar11 * 0x18) != *pfVar9)) goto LAB_14a90399b;
        TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
        pfVar11 = (float *)(ulonglong)(uint)TStack_70.CurrentBitIndex;
      } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
    }
    bVar5 = true;
  }
  else {
LAB_14a90399b:
    bVar5 = false;
  }
  return bVar5;
}

// Update @ 14a909e50

void __thiscall
UE::PoseSearch::FPoseIndicesHistory::Update
          (FPoseIndicesHistory *this,FSearchResult *param_1,float param_2,float param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 local_res20 [2];
  TPairInitializer<UE::PoseSearch::FHistoricalPoseIndex_const_&,float_&&> local_c8;
  undefined4 *local_b8;
  longlong *local_a8;
  undefined1 auStack_a0 [16];
  uint uStack_90;
  uint uStack_8c;
  longlong local_88;
  TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
  *pTStack_80;
  TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
  *local_78;
  char local_70;
  char cStack_6f;
  float local_68;
  FHistoricalPoseIndex *local_64;
  undefined1 local_58 [32];
  longlong local_38;
  TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
  *pTStack_30;
  
  if (param_3 <= 0.0) {
    TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
             *)this);
  }
  else {
    TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_58,
               (TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
                *)this);
    local_70 = '\0';
    cStack_6f = '\0';
    stack0xffffffffffffff68 = local_58._16_16_;
    local_a8 = (longlong *)local_58._0_8_;
    auStack_a0._0_8_ = local_58._8_8_;
    local_88 = local_38;
    pTStack_80 = pTStack_30;
    uVar4 = local_58._24_8_ >> 0x20;
    uVar5 = local_58._28_4_;
    local_78 = (TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
                *)this;
    if ((int)uVar5 < *(int *)(local_58._16_8_ + 0x18)) {
      do {
        *(float *)(*local_a8 + 0xc + (longlong)(int)uVar5 * 0x18) =
             param_2 + *(float *)(*local_a8 + 0xc + (longlong)(int)uVar4 * 0x18);
        if (param_3 < *(float *)(*local_a8 + 0xc + (longlong)(int)uVar5 * 0x18)) {
          TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_80,(int)uVar4);
          local_70 = '\x01';
        }
        uStack_90 = uStack_90 & ~auStack_a0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_a0);
        uVar4 = (ulonglong)uStack_8c;
        uVar5 = uStack_8c;
      } while ((int)uStack_8c < *(int *)(auStack_a0._8_8_ + 0x18));
      if ((local_70 != '\0') && (cStack_6f != '\0')) {
        uVar5 = *(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34;
        if (uVar5 < 4) {
          iVar3 = 1;
        }
        else {
          uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
          lVar1 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar3 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((0 < (int)uVar5) && (local_78->HashSize < iVar3)) || (iVar3 < local_78->HashSize)) {
          local_78->HashSize = iVar3;
          TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
          ::Rehash(local_78);
        }
      }
    }
    if ((*(int *)param_1 != -1) &&
       (bVar2 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                           &param_1->field_0x4,(void *)0x0), !bVar2)) {
      local_68 = *(float *)param_1;
      local_c8.Value = (float *)FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1->field_0x4);
      local_c8.Key = (FHistoricalPoseIndex *)0x0;
      if ((UObject *)local_c8.Value != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable((UObject *)local_c8.Value);
        }
        local_c8.Key = (FHistoricalPoseIndex *)0x0;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable((UObject *)local_c8.Value);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_c8,(FObjectPtr)&local_c8.Value);
      }
      local_64 = local_c8.Key;
      local_c8.Value = &local_68;
      local_res20[0] = 0;
      local_b8 = local_res20;
      TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::PoseSearch::FHistoricalPoseIndex_const_&,float_&&>_>
                ((TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
                  *)this,&local_c8,(bool *)&local_c8.Value);
    }
  }
  return;
}

