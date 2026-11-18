// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 74

// Emplace<UObject_const_*_const_&> @ 14a8a08b0

FSetElementId __thiscall
TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::Emplace<UObject_const_*_const_&>
          (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
           *this,UObject **param_1,bool *param_2)

{
  undefined1 *this_00;
  int iVar1;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> *pFVar11;
  uint uVar12;
  undefined1 *puVar13;
  char *in_R9;
  bool bVar14;
  FSparseArrayAllocationInfo local_38;
  
  iVar5 = *(int *)&(this->Elements).field_0xac;
  if (iVar5 == 0) {
    iVar4 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
                      (0x10,8,1,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>
                                 *)this,(int *)&(this->Elements).field_0x88,
                       (int *)&(this->Elements).field_0x8c);
    this_00 = &(this->Elements).field_0x90;
    iVar5 = TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::AddUninitialized
                      ((TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)this_00,1);
    puVar13 = *(undefined1 **)&(this->Elements).field_0x98;
    uVar7 = iVar5 >> 0x1f & 0x1f;
    iVar5 = iVar5 + uVar7;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = this_00;
    }
    *(uint *)(puVar13 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar13 + (longlong)(iVar5 >> 5) * 4) &
         ~(1 << (((byte)iVar5 & 0x1f) - (char)uVar7 & 0x1f));
  }
  else {
    pTVar2 = *(TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
               **)&(this->Elements).field_0x80;
    iVar4 = *(int *)&(this->Elements).field_0xa8;
    pTVar6 = this;
    if (pTVar2 != (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                   *)0x0) {
      pTVar6 = pTVar2;
    }
    iVar1 = *(int *)(&(pTVar6->Elements).field_0x4 + (longlong)iVar4 * 0x10);
    iVar5 = iVar5 + -1;
    *(int *)&(this->Elements).field_0xa8 = iVar1;
    *(int *)&(this->Elements).field_0xac = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(&(pTVar6->Elements).field_0x0 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (ulonglong *)0x0) {
    *(ulonglong *)local_38.Pointer = *(ulonglong *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = 0xffffffff;
  }
  uVar9 = *(ulonglong *)local_38.Pointer;
  bVar14 = false;
  uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  iVar5 = *(int *)&(this->Elements).field_0x88;
  iVar4 = *(int *)&(this->Elements).field_0xac;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  if ((iVar5 - iVar4 != 1) && (iVar5 != iVar4)) {
    pFVar11 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
    if (pFVar11 == (ForElementType<FSetElementId> *)0x0) {
      pFVar11 = &this->Hash;
    }
    iVar5 = *(int *)((longlong)pFVar11->InlineData + (ulonglong)(this->HashSize - 1U & uVar7) * 4);
    if (iVar5 != -1) {
      pTVar2 = *(TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                 **)&(this->Elements).field_0x80;
      do {
        pTVar6 = this;
        if (pTVar2 != (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar6 = pTVar2;
        }
        if (*(ulonglong *)(&(pTVar6->Elements).field_0x0 + (longlong)iVar5 * 0x10) == uVar9) {
          bVar14 = iVar5 != -1;
          if (bVar14) {
            pTVar6 = this;
            if (pTVar2 != (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                           *)0x0) {
              pTVar6 = pTVar2;
            }
            *(ulonglong *)(&(pTVar6->Elements).field_0x0 + (longlong)iVar5 * 0x10) = uVar9;
            TSparseArrayBase<16,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar5;
          }
          break;
        }
        pTVar6 = this;
        if (pTVar2 != (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar6 = pTVar2;
        }
        iVar5 = *(int *)(&(pTVar6->Elements).field_0x8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar10 = *(int *)&(this->Elements).field_0x88 - *(int *)&(this->Elements).field_0xac;
    uVar8 = 1;
    if (uVar10 >> 1 != 0) {
      uVar8 = uVar10 >> 1;
    }
    uVar9 = (ulonglong)(uVar8 - 1) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
    uVar8 = 4;
    if ((3 < uVar12) && (uVar8 = uVar12, uVar10 < 4)) {
      uVar8 = 4;
    }
    if (((int)uVar10 < 1) || ((int)uVar8 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & uVar7;
      *(uint *)((longlong)local_38.Pointer + 0xc) = uVar7;
      pFVar11 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
      if (pFVar11 == (ForElementType<FSetElementId> *)0x0) {
        pFVar11 = &this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 8) =
           *(undefined4 *)(pFVar11->InlineData + uVar9 * 4);
      *(int *)(pFVar11->InlineData + uVar9 * 4) = local_38.Index;
    }
    else {
      this->HashSize = uVar8;
      Rehash(this);
    }
  }
  *(int *)param_1 = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<unsigned_int_const_&>_> @ 14a8a0b80

FSetElementId __thiscall
TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::Emplace<TKeyInitializer<unsigned_int_const_&>_>
          (TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
           *this,TKeyInitializer<unsigned_int_const_&> *param_1,bool *param_2)

{
  int iVar1;
  TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int iVar18;
  TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  ForElementType<FSetElementId> *pFVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  char *in_R9;
  bool bVar27;
  FSparseArrayAllocationInfo local_60 [2];
  
  iVar25 = *(int *)&(this->Elements).field_0x203c;
  if (iVar25 == 0) {
    iVar18 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,16>_>_>_>
                       (0x80,0x10,1,
                        (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,16>_>_>
                         *)this,(int *)&(this->Elements).field_0x2010,
                        (int *)&(this->Elements).field_0x2014);
    TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_>::Add
              ((TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)
               &(this->Elements).field_0x2020,false);
  }
  else {
    pTVar2 = *(TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
               **)&(this->Elements).field_0x2000;
    iVar18 = *(int *)&(this->Elements).field_0x2038;
    pTVar19 = this;
    if (pTVar2 != (TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                   *)0x0) {
      pTVar19 = pTVar2;
    }
    iVar1 = *(int *)(&(pTVar19->Elements).field_0x4 + (longlong)iVar18 * 0x80);
    iVar25 = iVar25 + -1;
    *(int *)&(this->Elements).field_0x2038 = iVar1;
    *(int *)&(this->Elements).field_0x203c = iVar25;
    if (iVar25 != 0) {
      *(undefined4 *)(&(pTVar19->Elements).field_0x0 + (longlong)iVar1 * 0x80) = 0xffffffff;
    }
  }
  TSparseArrayBase<128,16,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  ::AllocateIndex((TSparseArrayBase<128,16,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                   *)this,local_60,iVar18);
  if (local_60[0].Pointer != (uint *)0x0) {
    fVar4 = GlobalVectorConstants::Float0001.m128_f32[0];
    fVar7 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar10 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar13 = GlobalVectorConstants::Float0001.m128_f32[3];
    fVar5 = GlobalVectorConstants::FloatZero.m128_f32[0];
    fVar8 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar11 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar14 = GlobalVectorConstants::FloatZero.m128_f32[3];
    fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
    fVar9 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar12 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar15 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(uint *)local_60[0].Pointer = **(uint **)param_2;
    auVar17._8_4_ = SUB84((double)fVar7,0);
    auVar17._0_8_ = (double)fVar4;
    auVar17._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
    *(undefined1 (*) [16])((longlong)local_60[0].Pointer + 0x10) = auVar17;
    *(double *)((longlong)local_60[0].Pointer + 0x20) = (double)fVar10;
    *(double *)((longlong)local_60[0].Pointer + 0x28) = (double)fVar13;
    *(double *)((longlong)local_60[0].Pointer + 0x30) = (double)fVar5;
    *(double *)((longlong)local_60[0].Pointer + 0x38) = (double)fVar8;
    *(double *)((longlong)local_60[0].Pointer + 0x40) = (double)fVar11;
    *(double *)((longlong)local_60[0].Pointer + 0x48) = (double)fVar14;
    *(double *)((longlong)local_60[0].Pointer + 0x50) = (double)fVar6;
    *(double *)((longlong)local_60[0].Pointer + 0x58) = (double)fVar9;
    auVar16._8_4_ = SUB84((double)fVar15,0);
    auVar16._0_8_ = (double)fVar12;
    auVar16._12_4_ = (int)((ulonglong)(double)fVar15 >> 0x20);
    *(undefined1 (*) [16])((longlong)local_60[0].Pointer + 0x60) = auVar16;
    *(uint *)((longlong)local_60[0].Pointer + 0x70) = 0xffffffff;
  }
  iVar25 = *(int *)&(this->Elements).field_0x2010;
  bVar27 = false;
  iVar18 = *(int *)&(this->Elements).field_0x203c;
  uVar26 = *(uint *)local_60[0].Pointer;
  if ((iVar25 - iVar18 != 1) && (iVar25 != iVar18)) {
    pFVar23 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
    if (pFVar23 == (ForElementType<FSetElementId> *)0x0) {
      pFVar23 = &this->Hash;
    }
    iVar25 = *(int *)((longlong)pFVar23->InlineData + (ulonglong)(this->HashSize - 1U & uVar26) * 4)
    ;
    if (iVar25 != -1) {
      pTVar2 = *(TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                 **)&(this->Elements).field_0x2000;
      do {
        pTVar19 = this;
        if (pTVar2 != (TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar19 = pTVar2;
        }
        if (*(uint *)(&(pTVar19->Elements).field_0x0 + (longlong)iVar25 * 0x80) == uVar26) {
          bVar27 = iVar25 != -1;
          if (bVar27) {
            pTVar19 = this;
            if (pTVar2 != (TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                           *)0x0) {
              pTVar19 = pTVar2;
            }
            memmove(&(pTVar19->Elements).field_0x0 + (longlong)iVar25 * 0x80,local_60[0].Pointer,
                    0x70);
            TSparseArrayBase<128,16,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<128,16,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                        *)this,local_60[0].Index,1);
            local_60[0].Index = iVar25;
          }
          break;
        }
        pTVar19 = this;
        if (pTVar2 != (TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar19 = pTVar2;
        }
        iVar25 = *(int *)(&(pTVar19->Elements).field_0x70 + (longlong)iVar25 * 0x80);
      } while (iVar25 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar27;
  }
  if (bVar27 == false) {
    uVar22 = *(int *)&(this->Elements).field_0x2010 - *(int *)&(this->Elements).field_0x203c;
    uVar20 = 1;
    if (uVar22 >> 1 != 0) {
      uVar20 = uVar22 >> 1;
    }
    uVar21 = (ulonglong)(uVar20 - 1) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar24 = 1 << ((byte)lVar3 & 0x1f);
    uVar20 = 0x20;
    if ((0x1f < uVar24) && (uVar20 = uVar24, uVar22 < 4)) {
      uVar20 = 0x20;
    }
    if (((int)uVar22 < 1) || ((int)uVar20 <= this->HashSize)) {
      uVar26 = this->HashSize - 1U & uVar26;
      *(uint *)((longlong)local_60[0].Pointer + 0x74) = uVar26;
      pFVar23 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
      if (pFVar23 == (ForElementType<FSetElementId> *)0x0) {
        pFVar23 = &this->Hash;
      }
      uVar21 = (longlong)this->HashSize - 1U & (longlong)(int)uVar26;
      *(uint *)((longlong)local_60[0].Pointer + 0x70) = *(uint *)(pFVar23->InlineData + uVar21 * 4);
      *(int *)(pFVar23->InlineData + uVar21 * 4) = local_60[0].Index;
    }
    else {
      this->HashSize = uVar20;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_60[0].Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<FName_const_&>_> @ 14a8a0e60

FSetElementId __thiscall
TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
::Emplace<TKeyInitializer<FName_const_&>_>
          (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           *this,TKeyInitializer<FName_const_&> *param_1,bool *param_2)

{
  undefined1 *this_00;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  undefined1 *puVar11;
  char *in_R9;
  int iVar12;
  uint uVar13;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar4 = *(int *)&(this->Elements).field_0x7c;
  if (iVar4 == 0) {
    iVar3 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>_>
                      (0x14,4,1,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>
                                 *)this,(int *)&(this->Elements).field_0x58,
                       (int *)&(this->Elements).field_0x5c);
    this_00 = &(this->Elements).field_0x60;
    iVar4 = TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::AddUninitialized
                      ((TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                       this_00,1);
    puVar11 = *(undefined1 **)&(this->Elements).field_0x68;
    uVar5 = iVar4 >> 0x1f & 0x1f;
    iVar4 = iVar4 + uVar5;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = this_00;
    }
    *(uint *)(puVar11 + (longlong)(iVar4 >> 5) * 4) =
         *(uint *)(puVar11 + (longlong)(iVar4 >> 5) * 4) &
         ~(1 << (((byte)iVar4 & 0x1f) - (char)uVar5 & 0x1f));
  }
  else {
    pTVar1 = *(TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
               **)&(this->Elements).field_0x50;
    iVar3 = *(int *)&(this->Elements).field_0x78;
    pTVar7 = this;
    if (pTVar1 != (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   *)0x0) {
      pTVar7 = pTVar1;
    }
    iVar4 = iVar4 + -1;
    iVar12 = *(int *)((longlong)&pTVar7->Hash + (longlong)iVar3 * 0x14 + -0x7c);
    *(int *)&(this->Elements).field_0x78 = iVar12;
    *(int *)&(this->Elements).field_0x7c = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)&pTVar7->Hash + (longlong)iVar12 * 0x14 + -0x80) = 0xffffffff;
    }
  }
  TSparseArrayBase<20,4,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 0xc) = 0xffffffff;
  }
  lVar2 = *(longlong *)local_48.Pointer;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
  iVar4 = *(int *)&(this->Elements).field_0x58;
  bVar14 = false;
  iVar3 = *(int *)&(this->Elements).field_0x7c;
  uVar5 = uVar5 + (int)((ulonglong)lVar2 >> 0x20);
  iVar12 = local_48.Index;
  if ((iVar4 - iVar3 != 1) && (iVar4 != iVar3)) {
    FVar10 = (this->Hash).SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar4 = *(int *)((longlong)FVar10 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar4 != -1) {
      pTVar1 = *(TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 **)&(this->Elements).field_0x50;
      do {
        pTVar7 = this;
        if (pTVar1 != (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                       *)0x0) {
          pTVar7 = pTVar1;
        }
        if (*(longlong *)((longlong)&pTVar7->Hash + (longlong)iVar4 * 0x14 + -0x80) ==
            *(longlong *)local_48.Pointer) {
          bVar14 = iVar4 != -1;
          if (bVar14) {
            pTVar7 = this;
            if (pTVar1 != (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                           *)0x0) {
              pTVar7 = pTVar1;
            }
            memmove((void *)((longlong)&pTVar7->Hash + (longlong)iVar4 * 0x14 + -0x80),
                    local_48.Pointer,0xc);
            TSparseArrayBase<20,4,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<20,4,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                        *)this,local_48.Index,1);
            iVar12 = iVar4;
          }
          break;
        }
        pTVar7 = this;
        if (pTVar1 != (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                       *)0x0) {
          pTVar7 = pTVar1;
        }
        iVar4 = *(int *)((longlong)&pTVar7->Hash + (longlong)iVar4 * 0x14 + -0x74);
      } while (iVar4 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar9 = *(int *)&(this->Elements).field_0x58 - *(int *)&(this->Elements).field_0x7c;
    uVar6 = 1;
    if (uVar9 >> 1 != 0) {
      uVar6 = uVar9 >> 1;
    }
    uVar8 = (ulonglong)(uVar6 - 1) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar2 & 0x1f);
    uVar6 = 2;
    if ((1 < uVar13) && (uVar6 = uVar13, uVar9 < 4)) {
      uVar6 = 2;
    }
    if (((int)uVar9 < 1) || ((int)uVar6 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)local_48.Pointer + 0x10) = uVar5;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0xc) =
           *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = iVar12;
    }
    else {
      this->HashSize = uVar6;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar12;
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<UObject_const_*_&&>_> @ 14a8a1110

FSetElementId __thiscall
TSet<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<UObject_const_*_&&>_>
          (TSet<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<UObject_const_*_&&> *param_2,bool *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  TSparseSetElement<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>_> *pTVar11;
  int local_res8 [2];
  bool *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar6 * 0x20 + 4 + lVar3);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer ==
      (TSparseSetElement<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>_> *)0x0) {
    pTVar11 = (TSparseSetElement<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>
               *)0x0;
  }
  else {
    uVar4 = **(undefined8 **)param_3;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = 0;
    *(undefined8 *)local_38.Pointer = uVar4;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = 0xffffffff;
    pTVar11 = local_38.Pointer;
  }
  local_res8[0] = local_38.Index;
  bVar5 = TryReplaceExisting(this,(uint)param_2,pTVar11,local_res8,in_stack_00000028);
  if (!bVar5) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & (uint)param_2;
      *(uint *)&pTVar11->field_0x1c = uVar8;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)&pTVar11->field_0x18 = *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_res8[0];
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_> @ 14a8a12b0

FSetElementId __thiscall
TSet<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
          (TSet<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
           *this,uint param_1,TKeyInitializer<unsigned_int_const_&> *param_2,bool *param_3)

{
  int iVar1;
  TSet<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar2;
  longlong lVar3;
  int iVar4;
  TSet<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> *pFVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = *(int *)&(this->Elements).field_0x82c;
  if (iVar9 == 0) {
    iVar4 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>_>
                      (0x20,8,1,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>
                                 *)this,(int *)&(this->Elements).field_0x808,
                       (int *)&(this->Elements).field_0x80c);
    TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_>::Add
              ((TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)
               &(this->Elements).field_0x810,false);
  }
  else {
    pTVar2 = *(TSet<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
               **)&(this->Elements).field_0x800;
    iVar4 = *(int *)&(this->Elements).field_0x828;
    pTVar5 = this;
    if (pTVar2 != (TSet<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                   *)0x0) {
      pTVar5 = pTVar2;
    }
    iVar1 = *(int *)(&(pTVar5->Elements).field_0x4 + (longlong)iVar4 * 0x20);
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x828 = iVar1;
    *(int *)&(this->Elements).field_0x82c = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(&(pTVar5->Elements).field_0x0 + (longlong)iVar1 * 0x20) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (int *)0x0) {
    *(int *)local_38.Pointer = **(int **)param_3;
    ((int *)((longlong)local_38.Pointer + 8))[0] = 0;
    ((int *)((longlong)local_38.Pointer + 8))[1] = 0;
    ((int *)((longlong)local_38.Pointer + 0x10))[0] = -1;
    ((int *)((longlong)local_38.Pointer + 0x10))[1] = 0;
    *(int *)((longlong)local_38.Pointer + 0x18) = -1;
  }
  iVar9 = *(int *)&(this->Elements).field_0x808;
  bVar12 = false;
  iVar4 = *(int *)&(this->Elements).field_0x82c;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    pFVar8 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
    if (pFVar8 == (ForElementType<FSetElementId> *)0x0) {
      pFVar8 = &this->Hash;
    }
    iVar9 = *(int *)((longlong)pFVar8->InlineData +
                    (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar9 != -1) {
      pTVar2 = *(TSet<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                 **)&(this->Elements).field_0x800;
      do {
        pTVar5 = this;
        if (pTVar2 != (TSet<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar5 = pTVar2;
        }
        if (*(int *)(&(pTVar5->Elements).field_0x0 + (longlong)iVar9 * 0x20) ==
            *(int *)local_38.Pointer) {
          bVar12 = iVar9 != -1;
          if (bVar12) {
            pTVar5 = this;
            if (pTVar2 != (TSet<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                           *)0x0) {
              pTVar5 = pTVar2;
            }
            memmove(&(pTVar5->Elements).field_0x0 + (longlong)iVar9 * 0x20,local_38.Pointer,0x18);
            TSparseArrayBase<32,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar9;
          }
          break;
        }
        pTVar5 = this;
        if (pTVar2 != (TSet<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar5 = pTVar2;
        }
        iVar9 = *(int *)(&(pTVar5->Elements).field_0x18 + (longlong)iVar9 * 0x20);
      } while (iVar9 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar12;
  }
  if (bVar12 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x808 - *(int *)&(this->Elements).field_0x82c;
    uVar10 = 1;
    if (uVar7 >> 1 != 0) {
      uVar10 = uVar7 >> 1;
    }
    uVar6 = (ulonglong)(uVar10 - 1) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar3 & 0x1f);
    uVar10 = 0x20;
    if ((0x1f < uVar11) && (uVar10 = uVar11, uVar7 < 4)) {
      uVar10 = 0x20;
    }
    if (((int)uVar7 < 1) || ((int)uVar10 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0x1c) = uVar10;
      pFVar8 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
      if (pFVar8 == (ForElementType<FSetElementId> *)0x0) {
        pFVar8 = &this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(int *)((longlong)local_38.Pointer + 0x18) = *(int *)(pFVar8->InlineData + uVar6 * 4);
      *(int *)(pFVar8->InlineData + uVar6 * 4) = local_38.Index;
    }
    else {
      this->HashSize = uVar10;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<UPoseSearchDatabase_const_*_const_&>_> @ 14a8a1570

FSetElementId __thiscall
TSet<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<UPoseSearchDatabase_const_*_const_&>_>
          (TSet<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<UPoseSearchDatabase_const_*_const_&> *param_2,
          bool *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int local_res8 [2];
  bool *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x70,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x70 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x70 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<112,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<112,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>
       *)0x0) {
    TKeyInitializer<UPoseSearchDatabase_const_*_const_&>::
    operator<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>
              ((TKeyInitializer<UPoseSearchDatabase_const_*_const_&> *)param_3,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x68) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  bVar4 = TryReplaceExisting(this,(uint)param_2,local_38.Pointer,local_res8,in_stack_00000028);
  if (!bVar4) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0x6c) = uVar7;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 0x68) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_res8[0];
  return (FSetElementId)param_1;
}

// FindIndexByHash<unsigned_int> @ 14a8a28d0

int __thiscall
TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::FindIndexByHash<unsigned_int>
          (TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
           *this,uint param_1,uint *param_2)

{
  TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar1;
  TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar2;
  int iVar3;
  ForElementType<FSetElementId> *pFVar4;
  
  if (*(int *)&(this->Elements).field_0x2010 != *(int *)&(this->Elements).field_0x203c) {
    pFVar4 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
    if (pFVar4 == (ForElementType<FSetElementId> *)0x0) {
      pFVar4 = &this->Hash;
    }
    iVar3 = *(int *)((longlong)pFVar4->InlineData + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      pTVar1 = *(TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                 **)&(this->Elements).field_0x2000;
      do {
        pTVar2 = this;
        if (pTVar1 != (TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar2 = pTVar1;
        }
        if (*(uint *)(&(pTVar2->Elements).field_0x0 + (longlong)iVar3 * 0x80) == *param_2) {
          return iVar3;
        }
        pTVar2 = this;
        if (pTVar1 != (TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar2 = pTVar1;
        }
        iVar3 = *(int *)(&(pTVar2->Elements).field_0x70 + (longlong)iVar3 * 0x80);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<unsigned_int> @ 14a8a2960

int __thiscall
TSet<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::FindIndexByHash<unsigned_int>
          (TSet<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
           *this,uint param_1,uint *param_2)

{
  TSet<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar1;
  TSet<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar2;
  int iVar3;
  ForElementType<FSetElementId> *pFVar4;
  
  if (*(int *)&(this->Elements).field_0x808 != *(int *)&(this->Elements).field_0x82c) {
    pFVar4 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
    if (pFVar4 == (ForElementType<FSetElementId> *)0x0) {
      pFVar4 = &this->Hash;
    }
    iVar3 = *(int *)((longlong)pFVar4->InlineData + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      pTVar1 = *(TSet<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                 **)&(this->Elements).field_0x800;
      do {
        pTVar2 = this;
        if (pTVar1 != (TSet<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar2 = pTVar1;
        }
        if (*(uint *)(&(pTVar2->Elements).field_0x0 + (longlong)iVar3 * 0x20) == *param_2) {
          return iVar3;
        }
        pTVar2 = this;
        if (pTVar1 != (TSet<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar2 = pTVar1;
        }
        iVar3 = *(int *)(&(pTVar2->Elements).field_0x18 + (longlong)iVar3 * 0x20);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindOrAddByHash<UE::PoseSearch::FSearchContext::FPoseCandidate_const_&> @ 14a8a4b10

FPoseCandidate * __thiscall
TSet<UE::PoseSearch::FSearchContext::FPoseCandidate,UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidatePoseIdxKeyFunc,FDefaultSetAllocator>
::FindOrAddByHash<UE::PoseSearch::FSearchContext::FPoseCandidate_const_&>
          (TSet<UE::PoseSearch::FSearchContext::FPoseCandidate,UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidatePoseIdxKeyFunc,FDefaultSetAllocator>
           *this,uint param_1,FPoseCandidate *param_2,bool *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong uVar8;
  int iVar9;
  float fVar10;
  FSparseArrayAllocationInfo local_28;
  
  puVar1 = &(this->Elements).field_0x8;
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->Elements + (longlong)iVar5 * 0x14) == param_2->PoseIdx)
        goto LAB_14a8a4b7c;
        iVar5 = *(int *)(*(longlong *)&this->Elements + 0xc + (longlong)iVar5 * 0x14);
      } while (iVar5 != -1);
    }
  }
  iVar5 = -1;
LAB_14a8a4b7c:
  if (param_3 != (bool *)0x0) {
    *param_3 = iVar5 != -1;
  }
  if (iVar5 != -1) {
    return (FPoseCandidate *)(*(longlong *)&this->Elements + (longlong)iVar5 * 0x14);
  }
  iVar5 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar5 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)puVar1,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar5 = iVar5 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0x14);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x14) = 0xffffffff;
    }
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  if (local_28.Pointer != (FPoseCandidate *)0x0) {
    *(undefined8 *)local_28.Pointer = *(undefined8 *)param_2;
    *(EPoseCandidateFlags *)((longlong)local_28.Pointer + 8) = param_2->PoseCandidateFlags;
    ((FPoseCandidate *)((longlong)local_28.Pointer + 0xc))->PoseIdx = -1;
  }
  uVar6 = *(int *)puVar1 - *(int *)&(this->Elements).field_0x34;
  if (3 < uVar6) {
    uVar8 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar9 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar6 < 1) || (iVar9 <= this->HashSize)) {
    fVar10 = (float)(this->HashSize - 1U & param_1);
    (((FPoseCandidate *)((longlong)local_28.Pointer + 0xc))->Cost).TotalCost = fVar10;
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)fVar10;
    ((FPoseCandidate *)((longlong)local_28.Pointer + 0xc))->PoseIdx =
         *(int *)((longlong)FVar7 + uVar8 * 4);
    *(int *)((longlong)FVar7 + uVar8 * 4) = local_28.Index;
  }
  else {
    this->HashSize = iVar9;
    Rehash(this);
  }
  return local_28.Pointer;
}

// TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_> @ 14a8aa170

TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
* __thiscall
TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
::
TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           *this,TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  void *pvVar3;
  ForElementType<FSetElementId> FVar4;
  
  *(undefined8 *)&(this->Elements).field_0x50 = 0;
  *(undefined4 *)&(this->Elements).field_0x58 = 0;
  *(undefined4 *)&(this->Elements).field_0x5c = 4;
  *(undefined8 *)&(this->Elements).field_0x68 = 0;
  *(undefined4 *)&(this->Elements).field_0x70 = 0;
  *(undefined4 *)&(this->Elements).field_0x74 = 0x20;
  *(undefined4 *)&(this->Elements).field_0x78 = 0xffffffff;
  *(undefined4 *)&(this->Elements).field_0x7c = 0;
  (this->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = 0;
  if (this != param_1) {
    if (*(longlong *)&(param_1->Elements).field_0x50 == 0) {
      memmove(this,param_1,0x50);
    }
    pvVar3 = *(void **)&(this->Elements).field_0x50;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    puVar1 = &(param_1->Elements).field_0x60;
    *(undefined8 *)&(this->Elements).field_0x50 = *(undefined8 *)&(param_1->Elements).field_0x50;
    puVar2 = &(this->Elements).field_0x60;
    *(undefined8 *)&(param_1->Elements).field_0x50 = 0;
    *(undefined4 *)&(this->Elements).field_0x58 = *(undefined4 *)&(param_1->Elements).field_0x58;
    *(undefined4 *)&(this->Elements).field_0x5c = *(undefined4 *)&(param_1->Elements).field_0x5c;
    *(undefined4 *)&(param_1->Elements).field_0x58 = 0;
    *(undefined4 *)&(param_1->Elements).field_0x5c = 4;
    if (puVar2 != puVar1) {
      if (*(longlong *)&(param_1->Elements).field_0x68 == 0) {
        *(undefined4 *)puVar2 = *(undefined4 *)puVar1;
      }
      pvVar3 = *(void **)&(this->Elements).field_0x68;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->Elements).field_0x68 = *(undefined8 *)&(param_1->Elements).field_0x68;
      *(undefined8 *)&(param_1->Elements).field_0x68 = 0;
      *(undefined4 *)&(this->Elements).field_0x70 = *(undefined4 *)&(param_1->Elements).field_0x70;
      *(undefined4 *)&(this->Elements).field_0x74 = *(undefined4 *)&(param_1->Elements).field_0x74;
      *(undefined8 *)&(param_1->Elements).field_0x70 = 0;
    }
    *(undefined4 *)&(this->Elements).field_0x78 = *(undefined4 *)&(param_1->Elements).field_0x78;
    *(undefined4 *)&(this->Elements).field_0x7c = *(undefined4 *)&(param_1->Elements).field_0x7c;
    *(undefined4 *)&(param_1->Elements).field_0x78 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x7c = 0;
  }
  if ((param_1->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined8 *)(this->Hash).InlineData = *(undefined8 *)(param_1->Hash).InlineData;
  }
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  (this->Hash).SecondaryData = (param_1->Hash).SecondaryData;
  (param_1->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = param_1->HashSize;
  param_1->HashSize = 0;
  return this;
}

// operator= @ 14a8ae240

TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
* __thiscall
TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
::operator=(TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
            *this,TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                  *param_1)

{
  undefined1 *puVar1;
  undefined1 *this_00;
  uint uVar2;
  int iVar3;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar4;
  ForElementType<FSetElementId> _Dst;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *_Dst_00;
  ForElementType<FSetElementId> _Src;
  uint uVar5;
  
  if (this == param_1) {
    return this;
  }
  uVar2 = param_1->HashSize;
  uVar5 = uVar2;
  if (uVar2 < 3) {
    if ((this->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14a8ae2a4;
    uVar5 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(this->Hash).SecondaryData,0,uVar5,4);
LAB_14a8ae2a4:
  _Src = (param_1->Hash).SecondaryData;
  _Dst = (this->Hash).SecondaryData;
  if (uVar2 != 0) {
    if (_Src == (ForElementType<FSetElementId>)0x0) {
      _Src = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    if (_Dst == (ForElementType<FSetElementId>)0x0) {
      _Dst = (ForElementType<FSetElementId>)&this->Hash;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)(int)uVar2 << 2);
  }
  this->HashSize = uVar2;
  iVar3 = *(int *)&(param_1->Elements).field_0x58;
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::Empty(&this->Elements,iVar3);
  UE::Core::Private::
  ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>_>
            (0x14,4,iVar3,
             (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> *)this,
             (int *)&(this->Elements).field_0x58,(int *)&(this->Elements).field_0x5c);
  puVar1 = &(param_1->Elements).field_0x60;
  this_00 = &(this->Elements).field_0x60;
  *(undefined4 *)&(this->Elements).field_0x78 = *(undefined4 *)&(param_1->Elements).field_0x78;
  *(undefined4 *)&(this->Elements).field_0x7c = *(undefined4 *)&(param_1->Elements).field_0x7c;
  if (this_00 != puVar1) {
    TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
    Assign<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              ((TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)this_00,
               (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)puVar1);
  }
  pTVar4 = *(TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
             **)&(this->Elements).field_0x50;
  _Dst_00 = this;
  if (pTVar4 != (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 *)0x0) {
    _Dst_00 = pTVar4;
  }
  pTVar4 = *(TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
             **)&(param_1->Elements).field_0x50;
  if (pTVar4 != (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 *)0x0) {
    param_1 = pTVar4;
  }
  if (iVar3 != 0) {
    memcpy(_Dst_00,param_1,(longlong)iVar3 * 0x14);
  }
  return this;
}

// Find @ 14a8b8d70

TTuple<FName,int> * __thiscall
TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
::Find(TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
       *this,FName param_1)

{
  longlong lVar1;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar2;
  uint uVar3;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Elements).field_0x58 != *(int *)&(this->Elements).field_0x7c) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1.Number + uVar3) * 4
                    );
    if (iVar6 != -1) {
      pTVar2 = *(TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 **)&(this->Elements).field_0x50;
      do {
        pTVar4 = this;
        if (pTVar2 != (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                       *)0x0) {
          pTVar4 = pTVar2;
        }
        lVar1 = (longlong)iVar6 * 0x14;
        if (*(FName *)((longlong)&pTVar4->Hash + lVar1 + -0x80) == param_1) {
          if (iVar6 == -1) {
            return (TTuple<FName,int> *)0x0;
          }
          if (pTVar2 != (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                         *)0x0) {
            this = pTVar2;
          }
          return (TTuple<FName,int> *)((longlong)&this->Hash + lVar1 + -0x80);
        }
        pTVar4 = this;
        if (pTVar2 != (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                       *)0x0) {
          pTVar4 = pTVar2;
        }
        iVar6 = *(int *)((longlong)&pTVar4->Hash + lVar1 + -0x74);
      } while (iVar6 != -1);
    }
  }
  return (TTuple<FName,int> *)0x0;
}

// Rehash @ 14a8c3f60

void __thiscall
TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::Rehash(TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
         *this)

{
  int *piVar1;
  ForElementType<FSetElementId> *this_00;
  uchar *puVar2;
  uint uVar3;
  ForElementType<FSetElementId> *pFVar4;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> *pFVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  uint local_68;
  uint uStack_64;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> local_40;
  
  piVar1 = &this->HashSize;
  uVar11 = 0;
  uVar7 = *piVar1;
  this_00 = &this->Hash;
  if ((uVar7 != 0) &&
     (TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>::
      ResizeAllocation(this_00,0,uVar7,4), 0 < (int)uVar7)) {
    uVar13 = (ulonglong)uVar7;
    uVar9 = uVar11;
    do {
      pFVar4 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
      pFVar8 = this_00;
      if (pFVar4 != (ForElementType<FSetElementId> *)0x0) {
        pFVar8 = pFVar4;
      }
      uVar6 = (longlong)(int)uVar7 - 1U & uVar9;
      uVar9 = uVar9 + 1;
      puVar2 = pFVar8->InlineData + uVar6 * 4;
      puVar2[0] = 0xff;
      puVar2[1] = 0xff;
      puVar2[2] = 0xff;
      puVar2[3] = 0xff;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (*piVar1 != 0) {
    local_40.Array =
         (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
         &(this->Elements).field_0x90;
    local_68 = 0;
    uVar7 = *(uint *)&(this->Elements).field_0xa0;
    uStack_64 = 1;
    uStack_54 = 0;
    uStack_50 = 0;
    if (uVar7 != 0) {
      puVar15 = *(uint **)&(this->Elements).field_0x98;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)local_40.Array;
      }
      uVar3 = *puVar15;
      uVar9 = uVar11;
      while (uVar3 == 0) {
        iVar10 = (int)uVar11;
        uStack_50 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_50;
        local_68 = iVar10 + 1;
        uVar11 = (ulonglong)local_68;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_68)
        goto LAB_14a8c408b;
        uVar3 = puVar15[(longlong)iVar10 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      uVar11 = (ulonglong)uStack_64 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uStack_54 = (int)lVar14 + -1 + uStack_50;
      uVar11 = (ulonglong)uStack_54;
      if ((int)uVar7 < (int)uStack_54) {
LAB_14a8c408b:
        uVar11 = (ulonglong)uVar7;
        uStack_54 = uVar7;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = uStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = uStack_50;
    if ((int)uVar11 < (int)uVar7) {
      do {
        pTVar5 = *(TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                   **)&(this->Elements).field_0x80;
        lVar14 = (longlong)(int)uVar11;
        pTVar12 = this;
        if (pTVar5 != (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar12 = pTVar5;
        }
        uVar9 = *(ulonglong *)(&(pTVar12->Elements).field_0x0 + lVar14 * 0x10);
        uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar7 = (uVar7 >> 0x10 ^ uVar7) & *piVar1 - 1U;
        *(uint *)(&(pTVar12->Elements).field_0xc + lVar14 * 0x10) = uVar7;
        pFVar4 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
        pFVar8 = this_00;
        if (pFVar4 != (ForElementType<FSetElementId> *)0x0) {
          pFVar8 = pFVar4;
        }
        uVar9 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(&(pTVar12->Elements).field_0x8 + lVar14 * 0x10) =
             *(undefined4 *)(pFVar8->InlineData + uVar9 * 4);
        *(int *)(pFVar8->InlineData + uVar9 * 4) = (int)uVar11;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
                  (&local_40);
        uVar11 = (ulonglong)(uint)local_40.CurrentBitIndex;
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14a8c4170

void __thiscall
TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::Rehash(TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
         *this)

{
  int *piVar1;
  ForElementType<FSetElementId> *this_00;
  uchar *puVar2;
  uint uVar3;
  ForElementType<FSetElementId> *pFVar4;
  TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> *pFVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  uint local_68;
  uint uStack_64;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> local_40;
  
  piVar1 = &this->HashSize;
  uVar10 = 0;
  uVar12 = *piVar1;
  this_00 = &this->Hash;
  if ((uVar12 != 0) &&
     (TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>::
      ResizeAllocation(this_00,0,uVar12,4), 0 < (int)uVar12)) {
    uVar13 = (ulonglong)uVar12;
    uVar8 = uVar10;
    do {
      pFVar4 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
      pFVar7 = this_00;
      if (pFVar4 != (ForElementType<FSetElementId> *)0x0) {
        pFVar7 = pFVar4;
      }
      uVar6 = (longlong)(int)uVar12 - 1U & uVar8;
      uVar8 = uVar8 + 1;
      puVar2 = pFVar7->InlineData + uVar6 * 4;
      puVar2[0] = 0xff;
      puVar2[1] = 0xff;
      puVar2[2] = 0xff;
      puVar2[3] = 0xff;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (*piVar1 != 0) {
    local_40.Array =
         (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)
         &(this->Elements).field_0x2020;
    local_68 = 0;
    uVar12 = *(uint *)&(this->Elements).field_0x2030;
    uStack_64 = 1;
    uStack_54 = 0;
    uStack_50 = 0;
    if (uVar12 != 0) {
      puVar15 = *(uint **)&(this->Elements).field_0x2028;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)local_40.Array;
      }
      uVar3 = *puVar15;
      uVar8 = uVar10;
      while (uVar3 == 0) {
        iVar9 = (int)uVar10;
        uStack_50 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_50;
        local_68 = iVar9 + 1;
        uVar10 = (ulonglong)local_68;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_68)
        goto LAB_14a8c429b;
        uVar3 = puVar15[(longlong)iVar9 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      uVar10 = (ulonglong)uStack_64 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uStack_54 = (int)lVar14 + -1 + uStack_50;
      uVar10 = (ulonglong)uStack_54;
      if ((int)uVar12 < (int)uStack_54) {
LAB_14a8c429b:
        uVar10 = (ulonglong)uVar12;
        uStack_54 = uVar12;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = uStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = uStack_50;
    if ((int)uVar10 < (int)uVar12) {
      do {
        pTVar5 = *(TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                   **)&(this->Elements).field_0x2000;
        pTVar11 = this;
        if (pTVar5 != (TSet<TTuple<unsigned_int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TTransform<double>,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar11 = pTVar5;
        }
        lVar14 = (longlong)(int)uVar10 * 0x80;
        uVar12 = *piVar1 - 1U & *(uint *)(&(pTVar11->Elements).field_0x0 + lVar14);
        *(uint *)(&(pTVar11->Elements).field_0x74 + lVar14) = uVar12;
        pFVar4 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
        pFVar7 = this_00;
        if (pFVar4 != (ForElementType<FSetElementId> *)0x0) {
          pFVar7 = pFVar4;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(&(pTVar11->Elements).field_0x70 + lVar14) =
             *(undefined4 *)(pFVar7->InlineData + uVar8 * 4);
        *(int *)(pFVar7->InlineData + uVar8 * 4) = (int)uVar10;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
                  (&local_40);
        uVar10 = (ulonglong)(uint)local_40.CurrentBitIndex;
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14a8c4350

void __thiscall
TSet<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::Rehash(TSet<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
         *this)

{
  int *piVar1;
  ForElementType<FSetElementId> *this_00;
  uchar *puVar2;
  uint uVar3;
  ForElementType<FSetElementId> *pFVar4;
  TSet<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> *pFVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  TSet<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  uint local_68;
  uint uStack_64;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> local_40;
  
  piVar1 = &this->HashSize;
  uVar10 = 0;
  uVar12 = *piVar1;
  this_00 = &this->Hash;
  if ((uVar12 != 0) &&
     (TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>::
      ResizeAllocation(this_00,0,uVar12,4), 0 < (int)uVar12)) {
    uVar13 = (ulonglong)uVar12;
    uVar8 = uVar10;
    do {
      pFVar4 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
      pFVar7 = this_00;
      if (pFVar4 != (ForElementType<FSetElementId> *)0x0) {
        pFVar7 = pFVar4;
      }
      uVar6 = (longlong)(int)uVar12 - 1U & uVar8;
      uVar8 = uVar8 + 1;
      puVar2 = pFVar7->InlineData + uVar6 * 4;
      puVar2[0] = 0xff;
      puVar2[1] = 0xff;
      puVar2[2] = 0xff;
      puVar2[3] = 0xff;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (*piVar1 != 0) {
    local_40.Array =
         (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)
         &(this->Elements).field_0x810;
    local_68 = 0;
    uVar12 = *(uint *)&(this->Elements).field_0x820;
    uStack_64 = 1;
    uStack_54 = 0;
    uStack_50 = 0;
    if (uVar12 != 0) {
      puVar15 = *(uint **)&(this->Elements).field_0x818;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)local_40.Array;
      }
      uVar3 = *puVar15;
      uVar8 = uVar10;
      while (uVar3 == 0) {
        iVar9 = (int)uVar10;
        uStack_50 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_50;
        local_68 = iVar9 + 1;
        uVar10 = (ulonglong)local_68;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_68)
        goto LAB_14a8c447b;
        uVar3 = puVar15[(longlong)iVar9 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      uVar10 = (ulonglong)uStack_64 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uStack_54 = (int)lVar14 + -1 + uStack_50;
      uVar10 = (ulonglong)uStack_54;
      if ((int)uVar12 < (int)uStack_54) {
LAB_14a8c447b:
        uVar10 = (ulonglong)uVar12;
        uStack_54 = uVar12;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = uStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = uStack_50;
    if ((int)uVar10 < (int)uVar12) {
      do {
        pTVar5 = *(TSet<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                   **)&(this->Elements).field_0x800;
        pTVar11 = this;
        if (pTVar5 != (TSet<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::PoseSearch::FCachedChannel,0>,TInlineSetAllocator<64,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar11 = pTVar5;
        }
        lVar14 = (longlong)(int)uVar10 * 0x20;
        uVar12 = *piVar1 - 1U & *(uint *)(&(pTVar11->Elements).field_0x0 + lVar14);
        *(uint *)(&(pTVar11->Elements).field_0x1c + lVar14) = uVar12;
        pFVar4 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
        pFVar7 = this_00;
        if (pFVar4 != (ForElementType<FSetElementId> *)0x0) {
          pFVar7 = pFVar4;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(&(pTVar11->Elements).field_0x18 + lVar14) =
             *(undefined4 *)(pFVar7->InlineData + uVar8 * 4);
        *(int *)(pFVar7->InlineData + uVar8 * 4) = (int)uVar10;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
                  (&local_40);
        uVar10 = (ulonglong)(uint)local_40.CurrentBitIndex;
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14a8c4530

void __thiscall
TSet<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong *puVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14a8c460c;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14a8c460c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (ulonglong *)
                 ((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x1c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 3) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14a8c46f0

void __thiscall
TSet<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong *puVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14a8c47cc;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14a8c47cc:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (ulonglong *)
                 ((longlong)local_30.CurrentBitIndex * 0x70 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x6c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 0xd) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14a8c48b0

void __thiscall
TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
::Rehash(TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
         *this)

{
  ForElementType<FSetElementId> *this_00;
  int *piVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ForElementType<FSetElementId> FVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar13;
  ulonglong uVar14;
  uint *puVar15;
  uint local_68;
  uint uStack_64;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_40;
  
  this_00 = &this->Hash;
  piVar1 = &this->HashSize;
  uVar6 = *piVar1;
  uVar14 = (ulonglong)uVar6;
  if ((this->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->Hash).SecondaryData,0,0,4);
  }
  uVar12 = 0;
  if ((uVar6 != 0) &&
     (TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
      ResizeAllocation(this_00,0,uVar6,4), 0 < (int)uVar6)) {
    uVar10 = uVar12;
    do {
      FVar3 = (this->Hash).SecondaryData;
      FVar9 = (ForElementType<FSetElementId>)this_00;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar9 = FVar3;
      }
      uVar7 = uVar10 & (longlong)(int)uVar6 - 1U;
      uVar10 = uVar10 + 1;
      *(undefined4 *)((longlong)FVar9 + uVar7 * 4) = 0xffffffff;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  if (*piVar1 != 0) {
    uVar6 = *(uint *)&(this->Elements).field_0x70;
    local_40.Array =
         (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
         &(this->Elements).field_0x60;
    local_68 = 0;
    uStack_64 = 1;
    uStack_54 = 0;
    uStack_50 = 0;
    if (uVar6 != 0) {
      puVar15 = *(uint **)&(this->Elements).field_0x68;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)local_40.Array;
      }
      uVar2 = *puVar15;
      uVar14 = uVar12;
      while (uVar2 == 0) {
        iVar11 = (int)uVar12;
        uStack_50 = (int)uVar14 + 0x20;
        uVar14 = (ulonglong)uStack_50;
        local_68 = iVar11 + 1;
        uVar12 = (ulonglong)local_68;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_68)
        goto LAB_14a8c49fb;
        uVar2 = puVar15[(longlong)iVar11 + 1];
      }
      uStack_64 = -uVar2 & uVar2;
      uVar14 = (ulonglong)uStack_64 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uStack_54 = (int)lVar8 + -1 + uStack_50;
      uVar12 = (ulonglong)uStack_54;
      if ((int)uVar6 < (int)uStack_54) {
LAB_14a8c49fb:
        uVar12 = (ulonglong)uVar6;
        uStack_54 = uVar6;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = uStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = uStack_50;
    if ((int)uVar12 < (int)uVar6) {
      do {
        pTVar4 = *(TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   **)&(this->Elements).field_0x50;
        pTVar13 = this;
        if (pTVar4 != (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                       *)0x0) {
          pTVar13 = pTVar4;
        }
        lVar8 = (longlong)(int)uVar12;
        uVar5 = *(undefined8 *)((longlong)&pTVar13->Hash + lVar8 * 0x14 + -0x80);
        uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
        uVar6 = *piVar1 - 1U & uVar6 + (int)((ulonglong)uVar5 >> 0x20);
        *(uint *)((longlong)&pTVar13->Hash + lVar8 * 0x14 + -0x70) = uVar6;
        FVar3 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)this_00;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar3;
        }
        uVar14 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)((longlong)&pTVar13->Hash + lVar8 * 0x14 + -0x74) =
             *(undefined4 *)((longlong)FVar9 + uVar14 * 4);
        *(int *)((longlong)FVar9 + uVar14 * 4) = (int)uVar12;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
        FindFirstSetBit(&local_40);
        uVar12 = (ulonglong)(uint)local_40.CurrentBitIndex;
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14a8c4ad0

void __thiscall
TSet<UE::PoseSearch::FSearchContext::FPoseCandidate,UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidatePoseIdxKeyFunc,FDefaultSetAllocator>
::Rehash(TSet<UE::PoseSearch::FSearchContext::FPoseCandidate,UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidatePoseIdxKeyFunc,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14a8c4bac;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14a8c4bac:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        uVar7 = *piVar1 - 1U &
                *(uint *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x14);
        lVar4 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x14;
        *(uint *)(lVar4 + 0x10) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Reset @ 14a8c53d0

void __thiscall
TSet<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,*(int *)&(this->Elements).field_0x8);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// TryReplaceExisting @ 14a8ceb60

bool __thiscall
TSet<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  void *_Dst;
  uint uVar14;
  bool bVar15;
  
  iVar13 = *(int *)&(this->Elements).field_0x8;
  bVar15 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar13 - iVar3 != 1) && (iVar13 != iVar3)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar13 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar13 * 0x20 + lVar4) == *(longlong *)param_2) {
          bVar15 = iVar13 != -1;
          if (bVar15) {
            _Dst = (void *)((longlong)iVar13 * 0x20 + lVar4);
            pvVar5 = *(void **)((longlong)_Dst + 8);
            if (pvVar5 != (void *)0x0) {
              FMemory::Free(pvVar5);
            }
            memmove(_Dst,param_2,0x18);
            iVar3 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar4 = *(longlong *)&this->Elements;
            bVar7 = (byte)iVar3 & 0x1f;
            uVar14 = 1 << bVar7 | 1U >> 0x20 - bVar7;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            if (((*(uint *)(puVar11 + lVar2) & uVar14) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x20 + lVar4) = iVar3;
            }
            uVar10 = 0xffffffff;
            *(undefined4 *)((longlong)iVar3 * 0x20 + lVar4) = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            *(undefined4 *)((longlong)iVar3 * 0x20 + 4 + lVar4) = uVar10;
            puVar11 = &(this->Elements).field_0x34;
            *(int *)puVar11 = *(int *)puVar11 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar3;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            *(uint *)(puVar11 + lVar2) = *(uint *)(puVar11 + lVar2) & ~uVar14;
            *param_3 = iVar13;
          }
          break;
        }
        iVar13 = *(int *)((longlong)iVar13 * 0x20 + 0x18 + lVar4);
      } while (iVar13 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// TryReplaceExisting @ 14a8ced90

bool __thiscall
TSet<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  void *_Dst;
  uint uVar13;
  bool bVar14;
  
  iVar12 = *(int *)&(this->Elements).field_0x8;
  bVar14 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar12 - iVar3 != 1) && (iVar12 != iVar3)) {
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar12 = *(int *)((longlong)FVar11 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar12 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar12 * 0x70 + lVar4) == *(longlong *)param_2) {
          bVar14 = iVar12 != -1;
          if (bVar14) {
            _Dst = (void *)((longlong)iVar12 * 0x70 + lVar4);
            *(undefined4 *)((longlong)_Dst + 0x60) = 0;
            if (*(void **)((longlong)_Dst + 0x58) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x58));
            }
            TSparseArray<TSparseSetElement<UE::PoseSearch::FSearchContext::FPoseCandidate>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<UE::PoseSearch::FSearchContext::FPoseCandidate>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<UE::PoseSearch::FSearchContext::FPoseCandidate>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)((longlong)_Dst + 0x18));
            if (*(void **)((longlong)_Dst + 8) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 8));
            }
            memmove(_Dst,param_2,0x68);
            iVar3 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar4 = *(longlong *)&this->Elements;
            bVar6 = (byte)iVar3 & 0x1f;
            uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            if (((*(uint *)(puVar10 + lVar2) & uVar13) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x70 + lVar4) = iVar3;
            }
            uVar9 = 0xffffffff;
            *(undefined4 *)((longlong)iVar3 * 0x70 + lVar4) = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar9 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            *(undefined4 *)((longlong)iVar3 * 0x70 + 4 + lVar4) = uVar9;
            puVar10 = &(this->Elements).field_0x34;
            *(int *)puVar10 = *(int *)puVar10 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar3;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar13;
            *param_3 = iVar12;
          }
          break;
        }
        iVar12 = *(int *)((longlong)iVar12 * 0x70 + 0x68 + lVar4);
      } while (iVar12 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// UnhashElements @ 14a8cf010

void __thiscall
TSet<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14a8cf10b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14a8cf10b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14a8cf200;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14a8cf200:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x20 + 0x1c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// Emplace<TKeyInitializer<unsigned_short_const_&>_> @ 14a8d88a0

FSetElementId __thiscall
TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<unsigned_short_const_&>_>
          (TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<unsigned_short_const_&> *param_1,bool *param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  bool *in_R9;
  TSparseSetElement<TTuple<unsigned_short,unsigned_short>_> *pTVar12;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar3 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar3 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar3 = iVar3 + -1;
    lVar5 = *(longlong *)&this->Elements;
    iVar4 = *(int *)(lVar5 + 4 + (longlong)iVar7 * 0xc);
    *(int *)&(this->Elements).field_0x30 = iVar4;
    *(int *)&(this->Elements).field_0x34 = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar4 * 0xc) = 0xffffffff;
    }
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar7);
  if (local_38.Pointer == (TSparseSetElement<TTuple<unsigned_short,unsigned_short>_> *)0x0) {
    pTVar12 = (TSparseSetElement<TTuple<unsigned_short,unsigned_short>_> *)0x0;
  }
  else {
    uVar1 = **(undefined2 **)param_2;
    *(undefined2 *)((longlong)local_38.Pointer + 2) = 0;
    *(undefined2 *)local_38.Pointer = uVar1;
    *(undefined4 *)((longlong)local_38.Pointer + 4) = 0xffffffff;
    pTVar12 = local_38.Pointer;
  }
  uVar2 = *(ushort *)pTVar12;
  local_res8[0] = local_38.Index;
  bVar6 = TryReplaceExisting(this,(uint)uVar2,pTVar12,local_res8,in_R9);
  if (!bVar6) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= this->HashSize)) {
      uVar9 = this->HashSize - 1U & (uint)uVar2;
      *(uint *)&pTVar12->field_0x8 = uVar9;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (ulonglong)uVar9;
      *(undefined4 *)&pTVar12->field_0x4 = *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<UE::PoseSearch::FHistoricalPoseIndex_const_&,float_&&>_> @ 14a8d8a40

FSetElementId __thiscall
TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<UE::PoseSearch::FHistoricalPoseIndex_const_&,float_&&>_>
          (TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
           *this,TPairInitializer<UE::PoseSearch::FHistoricalPoseIndex_const_&,float_&&> *param_1,
          bool *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  char *in_R9;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar13 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar11 = *(int *)(lVar1 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar11;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar1 + (longlong)iVar11 * 0x18) = 0xffffffff;
    }
  }
  puVar12 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (FHistoricalPoseIndex *)0x0) {
    puVar2 = *(undefined8 **)param_2;
    piVar3 = *(int **)(param_2 + 8);
    *(undefined8 *)local_48.Pointer = *puVar2;
    ((FObjectKey *)((longlong)local_48.Pointer + 4))->ObjectSerialNumber = *(int *)(puVar2 + 1);
    ((FHistoricalPoseIndex *)((longlong)local_48.Pointer + 0xc))->PoseIndex = *piVar3;
    (((FHistoricalPoseIndex *)((longlong)local_48.Pointer + 0xc))->DatabaseKey).ObjectIndex = -1;
  }
  uVar5 = UE::PoseSearch::GetTypeHash(local_48.Pointer);
  iVar10 = *(int *)puVar12;
  bVar14 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  iVar11 = local_48.Index;
  if ((iVar10 - iVar4 != 1) && (iVar10 != iVar4)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar10 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        lVar6 = (longlong)iVar10;
        if (((*(int *)(lVar1 + lVar6 * 0x18) == *(int *)local_48.Pointer) &&
            (*(int *)(lVar1 + 4 + lVar6 * 0x18) ==
             ((FObjectKey *)((longlong)local_48.Pointer + 4))->ObjectIndex)) &&
           (*(int *)(lVar1 + 8 + lVar6 * 0x18) ==
            ((FObjectKey *)((longlong)local_48.Pointer + 4))->ObjectSerialNumber)) {
          bVar14 = iVar10 != -1;
          if (bVar14) {
            memmove((void *)(lVar1 + (longlong)iVar10 * 0x18),local_48.Pointer,0x10);
            TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar11 = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(lVar1 + 0x10 + lVar6 * 0x18);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar8 = *(int *)puVar12 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar13 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      (((FHistoricalPoseIndex *)((longlong)local_48.Pointer + 0xc))->DatabaseKey).ObjectSerialNumber
           = uVar5;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      (((FHistoricalPoseIndex *)((longlong)local_48.Pointer + 0xc))->DatabaseKey).ObjectIndex =
           *(int *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = iVar11;
    }
    else {
      this->HashSize = iVar13;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar11;
  return (FSetElementId)(int)param_1;
}

// FindIndexByHash<UE::PoseSearch::FHistoricalPoseIndex> @ 14a8d9000

int __thiscall
TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
::FindIndexByHash<UE::PoseSearch::FHistoricalPoseIndex>
          (TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
           *this,uint param_1,FHistoricalPoseIndex *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        lVar2 = (longlong)iVar3;
        if (((*(int *)(lVar1 + lVar2 * 0x18) == param_2->PoseIndex) &&
            (*(int *)(lVar1 + 4 + lVar2 * 0x18) == (param_2->DatabaseKey).ObjectIndex)) &&
           (*(int *)(lVar1 + 8 + lVar2 * 0x18) == (param_2->DatabaseKey).ObjectSerialNumber)) {
          return iVar3;
        }
        iVar3 = *(int *)(lVar1 + 0x10 + lVar2 * 0x18);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// Find @ 14a8f7d20

UObject ** __thiscall
TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::Find(TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
       *this,UObject *param_1)

{
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar1;
  longlong lVar2;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar3;
  ForElementType<FSetElementId> *pFVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Elements).field_0x88 != *(int *)&(this->Elements).field_0xac) {
    pFVar4 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
    if (pFVar4 == (ForElementType<FSetElementId> *)0x0) {
      pFVar4 = &this->Hash;
    }
    iVar6 = *(int *)((longlong)pFVar4->InlineData +
                    (ulonglong)(this->HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar6 != -1) {
      pTVar1 = *(TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                 **)&(this->Elements).field_0x80;
      do {
        pTVar3 = this;
        if (pTVar1 != (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar3 = pTVar1;
        }
        lVar2 = (longlong)iVar6 * 0x10;
        if (*(UObject **)(&(pTVar3->Elements).field_0x0 + lVar2) == param_1) {
          if (iVar6 == -1) {
            return (UObject **)0x0;
          }
          if (pTVar1 != (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                         *)0x0) {
            this = pTVar1;
          }
          return (UObject **)(&(this->Elements).field_0x0 + lVar2);
        }
        pTVar3 = this;
        if (pTVar1 != (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar3 = pTVar1;
        }
        iVar6 = *(int *)(&(pTVar3->Elements).field_0x8 + lVar2);
      } while (iVar6 != -1);
    }
  }
  return (UObject **)0x0;
}

// Rehash @ 14a906980

void __thiscall
TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  FHistoricalPoseIndex *pFVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar3 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar5 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14a906a57;
        uVar5 = puVar9[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar3 < iStack_44) {
LAB_14a906a57:
        iStack_44 = iVar3;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        iVar3 = local_30.CurrentBitIndex;
        pFVar2 = (FHistoricalPoseIndex *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18);
        uVar5 = UE::PoseSearch::GetTypeHash(pFVar2);
        uVar5 = uVar5 & *piVar1 - 1U;
        pFVar2[1].DatabaseKey.ObjectSerialNumber = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        pFVar2[1].DatabaseKey.ObjectIndex = *(int *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar3;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// RemoveByIndex @ 14a906c00

void __thiscall
TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
::RemoveByIndex(TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
                *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<FSetElementId> FVar5;
  undefined1 *puVar6;
  int *piVar7;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->Elements).field_0x28)) {
    puVar6 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_14a906c72;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14a906c72:
  lVar1 = *(longlong *)&this->Elements + (longlong)param_1 * 0x18;
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar7 = (int *)((longlong)FVar5 + (longlong)*(int *)(lVar1 + 0x14) * 4);
  while( true ) {
    iVar2 = *piVar7;
    if (iVar2 == -1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iVar2 == param_1) break;
    piVar7 = (int *)(*(longlong *)&this->Elements + (longlong)iVar2 * 0x18 + 0x10);
  }
  *piVar7 = *(int *)(lVar1 + 0x10);
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1,1);
  return;
}

// Reset @ 14a907250

void __thiscall
TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// TryReplaceExisting @ 14a9090c0

bool __thiscall
TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
           *this,uint param_1,TSparseSetElement<TTuple<unsigned_short,unsigned_short>_> *param_2,
          int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  iVar13 = *(int *)&(this->Elements).field_0x8;
  bVar15 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar13 - iVar4 != 1) && (iVar13 != iVar4)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar13 != -1) {
      do {
        if (*(short *)(*(longlong *)&this->Elements + (longlong)iVar13 * 0xc) == *(short *)param_2)
        {
          bVar15 = iVar13 != -1;
          if (bVar15) {
            puVar1 = &(this->Elements).field_0x10;
            *(undefined4 *)(*(longlong *)&this->Elements + (longlong)iVar13 * 0xc) =
                 *(undefined4 *)param_2;
            iVar4 = *param_3;
            lVar5 = *(longlong *)&this->Elements;
            bVar7 = (byte)iVar4 & 0x1f;
            uVar14 = 1 << bVar7 | 1U >> 0x20 - bVar7;
            if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar3 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            if (((*(uint *)(puVar11 + lVar3) & uVar14) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar5 + (longlong)*(int *)&(this->Elements).field_0x30 * 0xc) = iVar4;
            }
            puVar2 = (undefined4 *)(lVar5 + (longlong)iVar4 * 0xc);
            uVar10 = 0xffffffff;
            *puVar2 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar2[1] = uVar10;
            puVar11 = &(this->Elements).field_0x34;
            *(int *)puVar11 = *(int *)puVar11 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar4;
            if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            *(uint *)(puVar11 + lVar3) = *(uint *)(puVar11 + lVar3) & ~uVar14;
            *param_3 = iVar13;
          }
          break;
        }
        iVar13 = *(int *)(*(longlong *)&this->Elements + 4 + (longlong)iVar13 * 0xc);
      } while (iVar13 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// UnhashElements @ 14a909300

void __thiscall
TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14a9093fb;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14a9093fb:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14a9094f0;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14a9094f0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x14 + (longlong)local_60.CurrentBitIndex * 0x18) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// Emplace<UAnimInstance_const_*_const_&> @ 14a910340

FSetElementId __thiscall
TSet<UAnimInstance_const_*,DefaultKeyFuncs<UAnimInstance_const_*,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
::Emplace<UAnimInstance_const_*_const_&>
          (TSet<UAnimInstance_const_*,DefaultKeyFuncs<UAnimInstance_const_*,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           *this,UAnimInstance **param_1,bool *param_2)

{
  undefined1 *this_00;
  int iVar1;
  TSet<UAnimInstance_const_*,DefaultKeyFuncs<UAnimInstance_const_*,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  TSet<UAnimInstance_const_*,DefaultKeyFuncs<UAnimInstance_const_*,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  uint uVar12;
  undefined1 *puVar13;
  char *in_R9;
  bool bVar14;
  FSparseArrayAllocationInfo local_38;
  
  iVar5 = *(int *)&(this->Elements).field_0x834;
  if (iVar5 == 0) {
    iVar4 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
                      (0x10,8,1,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>
                                 *)this,(int *)&(this->Elements).field_0x808,
                       (int *)&(this->Elements).field_0x80c);
    this_00 = &(this->Elements).field_0x810;
    iVar5 = TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::AddUninitialized
                      ((TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                       this_00,1);
    puVar13 = *(undefined1 **)&(this->Elements).field_0x820;
    uVar7 = iVar5 >> 0x1f & 0x1f;
    iVar5 = iVar5 + uVar7;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = this_00;
    }
    *(uint *)(puVar13 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar13 + (longlong)(iVar5 >> 5) * 4) &
         ~(1 << (((byte)iVar5 & 0x1f) - (char)uVar7 & 0x1f));
  }
  else {
    pTVar2 = *(TSet<UAnimInstance_const_*,DefaultKeyFuncs<UAnimInstance_const_*,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
               **)&(this->Elements).field_0x800;
    iVar4 = *(int *)&(this->Elements).field_0x830;
    pTVar6 = this;
    if (pTVar2 != (TSet<UAnimInstance_const_*,DefaultKeyFuncs<UAnimInstance_const_*,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   *)0x0) {
      pTVar6 = pTVar2;
    }
    iVar1 = *(int *)(&(pTVar6->Elements).field_0x4 + (longlong)iVar4 * 0x10);
    iVar5 = iVar5 + -1;
    *(int *)&(this->Elements).field_0x830 = iVar1;
    *(int *)&(this->Elements).field_0x834 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(&(pTVar6->Elements).field_0x0 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,8,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (ulonglong *)0x0) {
    *(ulonglong *)local_38.Pointer = *(ulonglong *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = 0xffffffff;
  }
  uVar9 = *(ulonglong *)local_38.Pointer;
  bVar14 = false;
  uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  iVar5 = *(int *)&(this->Elements).field_0x808;
  iVar4 = *(int *)&(this->Elements).field_0x834;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  if ((iVar5 - iVar4 != 1) && (iVar5 != iVar4)) {
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar5 = *(int *)((longlong)FVar11 + (ulonglong)(this->HashSize - 1U & uVar7) * 4);
    if (iVar5 != -1) {
      pTVar2 = *(TSet<UAnimInstance_const_*,DefaultKeyFuncs<UAnimInstance_const_*,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 **)&(this->Elements).field_0x800;
      do {
        pTVar6 = this;
        if (pTVar2 != (TSet<UAnimInstance_const_*,DefaultKeyFuncs<UAnimInstance_const_*,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                       *)0x0) {
          pTVar6 = pTVar2;
        }
        if (*(ulonglong *)(&(pTVar6->Elements).field_0x0 + (longlong)iVar5 * 0x10) == uVar9) {
          bVar14 = iVar5 != -1;
          if (bVar14) {
            pTVar6 = this;
            if (pTVar2 != (TSet<UAnimInstance_const_*,DefaultKeyFuncs<UAnimInstance_const_*,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                           *)0x0) {
              pTVar6 = pTVar2;
            }
            *(ulonglong *)(&(pTVar6->Elements).field_0x0 + (longlong)iVar5 * 0x10) = uVar9;
            TSparseArrayBase<16,8,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar5;
          }
          break;
        }
        pTVar6 = this;
        if (pTVar2 != (TSet<UAnimInstance_const_*,DefaultKeyFuncs<UAnimInstance_const_*,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                       *)0x0) {
          pTVar6 = pTVar2;
        }
        iVar5 = *(int *)(&(pTVar6->Elements).field_0x8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar10 = *(int *)&(this->Elements).field_0x808 - *(int *)&(this->Elements).field_0x834;
    uVar8 = 1;
    if (uVar10 >> 1 != 0) {
      uVar8 = uVar10 >> 1;
    }
    uVar9 = (ulonglong)(uVar8 - 1) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
    uVar8 = 0x40;
    if ((0x3f < uVar12) && (uVar8 = uVar12, uVar10 < 4)) {
      uVar8 = 0x40;
    }
    if (((int)uVar10 < 1) || ((int)uVar8 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & uVar7;
      *(uint *)((longlong)local_38.Pointer + 0xc) = uVar7;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 8) =
           *(undefined4 *)((longlong)FVar11 + uVar9 * 4);
      *(int *)((longlong)FVar11 + uVar9 * 4) = local_38.Index;
    }
    else {
      this->HashSize = uVar8;
      Rehash(this);
    }
  }
  *(int *)param_1 = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_const_&> @ 14a910620

FSetElementId __thiscall
TSet<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::Emplace<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_const_&>
          (TSet<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
           *this,TWeakObjectPtr<UActorComponent,FWeakObjectPtr> *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  int iVar10;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x10);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer != (TSparseSetElement<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_> *)0x0)
  {
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  uVar9 = (uint)((ulonglong)*(undefined8 *)local_38.Pointer >> 0x20) ^
          (uint)*(undefined8 *)local_38.Pointer;
  bVar4 = TryReplaceExisting(this,uVar9,local_38.Pointer,local_res8,in_R9);
  if (!bVar4) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar10 <= this->HashSize)) {
      uVar9 = this->HashSize - 1U & uVar9;
      *(uint *)((longlong)local_38.Pointer + 0xc) = uVar9;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      *(undefined4 *)((longlong)local_38.Pointer + 8) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4)
      ;
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  (param_1->WeakPtr).ObjectIndex = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<UObject_const_*> @ 14a9107c0

FSetElementId __thiscall
TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::Emplace<UObject_const_*>
          (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
           *this,UObject **param_1,bool *param_2)

{
  int iVar1;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar2;
  longlong lVar3;
  int iVar4;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> *pFVar10;
  uint uVar11;
  int iVar12;
  char *in_R9;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar12 = *(int *)&(this->Elements).field_0x6c;
  if (iVar12 == 0) {
    iVar4 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
                      (0x10,8,1,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>
                                 *)this,(int *)&(this->Elements).field_0x48,
                       (int *)&(this->Elements).field_0x4c);
    TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::Add
              ((TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               &(this->Elements).field_0x50,false);
  }
  else {
    pTVar2 = *(TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
               **)&(this->Elements).field_0x40;
    iVar4 = *(int *)&(this->Elements).field_0x68;
    pTVar5 = this;
    if (pTVar2 != (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                   *)0x0) {
      pTVar5 = pTVar2;
    }
    iVar1 = *(int *)((&pTVar5->Hash)[(longlong)iVar4 + -7].InlineData + 4);
    iVar12 = iVar12 + -1;
    *(int *)&(this->Elements).field_0x68 = iVar1;
    *(int *)&(this->Elements).field_0x6c = iVar12;
    if (iVar12 != 0) {
      pFVar10 = &pTVar5->Hash + (longlong)iVar1 + -7;
      pFVar10->InlineData[0] = 0xff;
      pFVar10->InlineData[1] = 0xff;
      pFVar10->InlineData[2] = 0xff;
      pFVar10->InlineData[3] = 0xff;
    }
  }
  TSparseArrayBase<16,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (ulonglong *)0x0) {
    *(ulonglong *)local_48.Pointer = *(ulonglong *)param_2;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = 0xffffffff;
  }
  uVar8 = *(ulonglong *)local_48.Pointer;
  bVar13 = false;
  uVar6 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  iVar12 = *(int *)&(this->Elements).field_0x48;
  iVar4 = *(int *)&(this->Elements).field_0x6c;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  if ((iVar12 - iVar4 != 1) && (iVar12 != iVar4)) {
    pFVar10 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
    if (pFVar10 == (ForElementType<FSetElementId> *)0x0) {
      pFVar10 = &this->Hash;
    }
    iVar12 = *(int *)((longlong)pFVar10->InlineData + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      pTVar2 = *(TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                 **)&(this->Elements).field_0x40;
      do {
        pTVar5 = this;
        if (pTVar2 != (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar5 = pTVar2;
        }
        if (*(ulonglong *)(&pTVar5->Hash)[(longlong)iVar12 + -7].InlineData == uVar8) {
          bVar13 = iVar12 != -1;
          if (bVar13) {
            pTVar5 = this;
            if (pTVar2 != (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                           *)0x0) {
              pTVar5 = pTVar2;
            }
            *(ulonglong *)(&pTVar5->Hash)[(longlong)iVar12 + -7].InlineData = uVar8;
            TSparseArrayBase<16,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar12;
          }
          break;
        }
        pTVar5 = this;
        if (pTVar2 != (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar5 = pTVar2;
        }
        iVar12 = *(int *)&(&pTVar5->Hash)[(longlong)iVar12 + -7].SecondaryData.Data;
      } while (iVar12 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar9 = *(int *)&(this->Elements).field_0x48 - *(int *)&(this->Elements).field_0x6c;
    uVar7 = 1;
    if (uVar9 >> 1 != 0) {
      uVar7 = uVar9 >> 1;
    }
    uVar8 = (ulonglong)(uVar7 - 1) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar3 & 0x1f);
    uVar7 = 2;
    if ((1 < uVar11) && (uVar7 = uVar11, uVar9 < 4)) {
      uVar7 = 2;
    }
    if (((int)uVar9 < 1) || ((int)uVar7 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)local_48.Pointer + 0xc) = uVar6;
      pFVar10 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
      if (pFVar10 == (ForElementType<FSetElementId> *)0x0) {
        pFVar10 = &this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_48.Pointer + 8) =
           *(undefined4 *)(pFVar10->InlineData + uVar8 * 4);
      *(int *)(pFVar10->InlineData + uVar8 * 4) = local_48.Index;
    }
    else {
      this->HashSize = uVar7;
      Rehash(this);
    }
  }
  *(int *)param_1 = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<UObject_const_*_const_&>_> @ 14a910a40

FSetElementId __thiscall
TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::Emplace<TKeyInitializer<UObject_const_*_const_&>_>
          (TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
           *this,TKeyInitializer<UObject_const_*_const_&> *param_1,bool *param_2)

{
  int iVar1;
  TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar2;
  longlong lVar3;
  int iVar4;
  TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> *pFVar10;
  int iVar11;
  char *in_R9;
  uint uVar12;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar11 = *(int *)&(this->Elements).field_0x1ac;
  if (iVar11 == 0) {
    iVar4 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_>
                      (0x18,8,1,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>
                                 *)this,(int *)&(this->Elements).field_0x188,
                       (int *)&(this->Elements).field_0x18c);
    TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::Add
              ((TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               &(this->Elements).field_0x190,false);
  }
  else {
    pTVar2 = *(TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
               **)&(this->Elements).field_0x180;
    iVar4 = *(int *)&(this->Elements).field_0x1a8;
    pTVar5 = this;
    if (pTVar2 != (TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                   *)0x0) {
      pTVar5 = pTVar2;
    }
    iVar11 = iVar11 + -1;
    iVar1 = *(int *)(&(pTVar5->Elements).field_0x4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x1a8 = iVar1;
    *(int *)&(this->Elements).field_0x1ac = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(&(pTVar5->Elements).field_0x0 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (ulonglong *)0x0) {
    *(ulonglong *)local_48.Pointer = **(ulonglong **)param_2;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  uVar8 = *(ulonglong *)local_48.Pointer;
  bVar13 = false;
  uVar6 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  iVar11 = *(int *)&(this->Elements).field_0x188;
  iVar4 = *(int *)&(this->Elements).field_0x1ac;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  if ((iVar11 - iVar4 != 1) && (iVar11 != iVar4)) {
    pFVar10 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
    if (pFVar10 == (ForElementType<FSetElementId> *)0x0) {
      pFVar10 = &this->Hash;
    }
    iVar11 = *(int *)((longlong)pFVar10->InlineData + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
    if (iVar11 != -1) {
      pTVar2 = *(TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                 **)&(this->Elements).field_0x180;
      do {
        pTVar5 = this;
        if (pTVar2 != (TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar5 = pTVar2;
        }
        if (*(ulonglong *)(&(pTVar5->Elements).field_0x0 + (longlong)iVar11 * 0x18) == uVar8) {
          bVar13 = iVar11 != -1;
          if (bVar13) {
            pTVar5 = this;
            if (pTVar2 != (TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                           *)0x0) {
              pTVar5 = pTVar2;
            }
            memmove(&(pTVar5->Elements).field_0x0 + (longlong)iVar11 * 0x18,local_48.Pointer,0x10);
            TSparseArrayBase<24,8,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar11;
          }
          break;
        }
        pTVar5 = this;
        if (pTVar2 != (TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar5 = pTVar2;
        }
        iVar11 = *(int *)(&(pTVar5->Elements).field_0x10 + (longlong)iVar11 * 0x18);
      } while (iVar11 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar9 = *(int *)&(this->Elements).field_0x188 - *(int *)&(this->Elements).field_0x1ac;
    uVar7 = 1;
    if (uVar9 >> 1 != 0) {
      uVar7 = uVar9 >> 1;
    }
    uVar8 = (ulonglong)(uVar7 - 1) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
    uVar7 = 8;
    if ((7 < uVar12) && (uVar7 = uVar12, uVar9 < 4)) {
      uVar7 = 8;
    }
    if (((int)uVar9 < 1) || ((int)uVar7 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar6;
      pFVar10 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
      if (pFVar10 == (ForElementType<FSetElementId> *)0x0) {
        pFVar10 = &this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_48.Pointer + 0x10) =
           *(undefined4 *)(pFVar10->InlineData + uVar8 * 4);
      *(int *)(pFVar10->InlineData + uVar8 * 4) = local_48.Index;
    }
    else {
      this->HashSize = uVar7;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<UObject_const_*_const_&>_> @ 14a910d10

FSetElementId __thiscall
TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::Emplace<TKeyInitializer<UObject_const_*_const_&>_>
          (TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
           *this,TKeyInitializer<UObject_const_*_const_&> *param_1,bool *param_2)

{
  int iVar1;
  TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar2;
  longlong lVar3;
  int iVar4;
  ulonglong *_Src;
  TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> *pFVar10;
  int iVar11;
  char *in_R9;
  uint uVar12;
  bool bVar13;
  FSparseArrayAllocationInfo local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  
  iVar11 = *(int *)&(this->Elements).field_0x32c;
  if (iVar11 == 0) {
    iVar4 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_>_>
                      (0x30,8,1,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_>
                                 *)this,(int *)&(this->Elements).field_0x308,
                       (int *)&(this->Elements).field_0x30c);
    TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::Add
              ((TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               &(this->Elements).field_0x310,false);
  }
  else {
    pTVar2 = *(TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
               **)&(this->Elements).field_0x300;
    iVar4 = *(int *)&(this->Elements).field_0x328;
    pTVar5 = this;
    if (pTVar2 != (TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                   *)0x0) {
      pTVar5 = pTVar2;
    }
    iVar11 = iVar11 + -1;
    iVar1 = *(int *)(&(pTVar5->Elements).field_0x4 + (longlong)iVar4 * 0x30);
    *(int *)&(this->Elements).field_0x328 = iVar1;
    *(int *)&(this->Elements).field_0x32c = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(&(pTVar5->Elements).field_0x0 + (longlong)iVar1 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                   *)this,&local_68,iVar4);
  _Src = (ulonglong *)0x0;
  if (local_68.Pointer != (ulonglong *)0x0) {
    uStack_54 = 0;
    uStack_50 = 0;
    local_40 = 0;
    local_58 = 0xffffffff;
    uStack_4c = 0x7f7fffff;
    *(ulonglong *)local_68.Pointer = **(ulonglong **)param_2;
    *(ulonglong *)((longlong)local_68.Pointer + 8) = 0xffffffff;
    *(ulonglong *)((longlong)local_68.Pointer + 0x10) = 0x7f7fffff00000000;
    local_48 = 0xffffffff;
    uStack_44 = 0x7f7fffff;
    *(ulonglong *)((longlong)local_68.Pointer + 0x18) = 0x7f7fffffffffffff;
    *(undefined4 *)((longlong)local_68.Pointer + 0x20) = 0;
    *(undefined4 *)((longlong)local_68.Pointer + 0x28) = 0xffffffff;
    _Src = local_68.Pointer;
  }
  uVar8 = *_Src;
  bVar13 = false;
  uVar6 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  iVar11 = *(int *)&(this->Elements).field_0x308;
  iVar4 = *(int *)&(this->Elements).field_0x32c;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  if ((iVar11 - iVar4 != 1) && (iVar11 != iVar4)) {
    pFVar10 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
    if (pFVar10 == (ForElementType<FSetElementId> *)0x0) {
      pFVar10 = &this->Hash;
    }
    iVar11 = *(int *)((longlong)pFVar10->InlineData + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
    if (iVar11 != -1) {
      pTVar2 = *(TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                 **)&(this->Elements).field_0x300;
      do {
        pTVar5 = this;
        if (pTVar2 != (TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar5 = pTVar2;
        }
        if (*(ulonglong *)(&(pTVar5->Elements).field_0x0 + (longlong)iVar11 * 0x30) == uVar8) {
          bVar13 = iVar11 != -1;
          if (bVar13) {
            pTVar5 = this;
            if (pTVar2 != (TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                           *)0x0) {
              pTVar5 = pTVar2;
            }
            memmove(&(pTVar5->Elements).field_0x0 + (longlong)iVar11 * 0x30,_Src,0x28);
            TSparseArrayBase<48,8,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<48,8,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                        *)this,local_68.Index,1);
            local_68.Index = iVar11;
          }
          break;
        }
        pTVar5 = this;
        if (pTVar2 != (TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar5 = pTVar2;
        }
        iVar11 = *(int *)(&(pTVar5->Elements).field_0x28 + (longlong)iVar11 * 0x30);
      } while (iVar11 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar9 = *(int *)&(this->Elements).field_0x308 - *(int *)&(this->Elements).field_0x32c;
    uVar7 = 1;
    if (uVar9 >> 1 != 0) {
      uVar7 = uVar9 >> 1;
    }
    uVar8 = (ulonglong)(uVar7 - 1) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
    uVar7 = 8;
    if ((7 < uVar12) && (uVar7 = uVar12, uVar9 < 4)) {
      uVar7 = 8;
    }
    if (((int)uVar9 < 1) || ((int)uVar7 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)_Src + 0x2c) = uVar6;
      pFVar10 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
      if (pFVar10 == (ForElementType<FSetElementId> *)0x0) {
        pFVar10 = &this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)(_Src + 5) = *(undefined4 *)(pFVar10->InlineData + uVar8 * 4);
      *(int *)(pFVar10->InlineData + uVar8 * 4) = local_68.Index;
    }
    else {
      this->HashSize = uVar7;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_68.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<FName_const_&>_> @ 14a911030

FSetElementId __thiscall
TSet<TTuple<FName,FBoneContainer>,TDefaultMapHashableKeyFuncs<FName,FBoneContainer,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<FName_const_&>_>
          (TSet<TTuple<FName,FBoneContainer>,TDefaultMapHashableKeyFuncs<FName,FBoneContainer,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<FName_const_&> *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x168,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar6 * 0x168 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x168 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<360,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<360,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer != (TSparseSetElement<TTuple<FName,FBoneContainer>_> *)0x0) {
    TKeyInitializer<FName_const_&>::operator<FName,FBoneContainer>_TTuple<FName,FBoneContainer>
              ((TKeyInitializer<FName_const_&> *)param_2,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x160) = 0xffffffff;
  }
  uVar4 = *(undefined8 *)local_38.Pointer;
  local_res8[0] = local_38.Index;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  uVar7 = (int)((ulonglong)uVar4 >> 0x20) + uVar7;
  bVar5 = TryReplaceExisting(this,uVar7,local_38.Pointer,local_res8,in_R9);
  if (!bVar5) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & uVar7;
      *(uint *)((longlong)local_38.Pointer + 0x164) = uVar7;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 0x160) =
           *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<int_&&>_> @ 14a9112b0

FSetElementId __thiscall
TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::EmplaceByHash<TKeyInitializer<int_&&>_>
          (TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
           *this,uint param_1,TKeyInitializer<int_&&> *param_2,bool *param_3)

{
  int iVar1;
  TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar2;
  longlong lVar3;
  int iVar4;
  int *_Src;
  TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> *pFVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  
  iVar10 = *(int *)&(this->Elements).field_0x2ac;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>_>
                      (0x28,4,1,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>
                                 *)this,(int *)&(this->Elements).field_0x288,
                       (int *)&(this->Elements).field_0x28c);
    TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::Add
              ((TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               &(this->Elements).field_0x290,false);
  }
  else {
    pTVar2 = *(TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
               **)&(this->Elements).field_0x280;
    iVar4 = *(int *)&(this->Elements).field_0x2a8;
    pTVar5 = this;
    if (pTVar2 != (TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                   *)0x0) {
      pTVar5 = pTVar2;
    }
    iVar10 = iVar10 + -1;
    iVar1 = *(int *)(&(pTVar5->Elements).field_0x4 + (longlong)iVar4 * 0x28);
    *(int *)&(this->Elements).field_0x2a8 = iVar1;
    *(int *)&(this->Elements).field_0x2ac = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(&(pTVar5->Elements).field_0x0 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,4,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  ::AllocateIndex((TSparseArrayBase<40,4,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                   *)this,&local_58,iVar4);
  _Src = (int *)0x0;
  if (local_58.Pointer != (int *)0x0) {
    uStack_44 = 0;
    uStack_40 = 0;
    local_30 = 0;
    local_48 = 0xffffffff;
    uStack_3c = 0x7f7fffff;
    *(int *)local_58.Pointer = **(int **)param_3;
    ((int *)((longlong)local_58.Pointer + 4))[0] = -1;
    ((int *)((longlong)local_58.Pointer + 4))[1] = 0;
    ((int *)((longlong)local_58.Pointer + 0xc))[0] = 0;
    ((int *)((longlong)local_58.Pointer + 0xc))[1] = 0x7f7fffff;
    local_38 = 0xffffffff;
    uStack_34 = 0x7f7fffff;
    ((int *)((longlong)local_58.Pointer + 0x14))[0] = -1;
    ((int *)((longlong)local_58.Pointer + 0x14))[1] = 0x7f7fffff;
    *(int *)((longlong)local_58.Pointer + 0x1c) = 0;
    *(int *)((longlong)local_58.Pointer + 0x20) = -1;
    _Src = local_58.Pointer;
  }
  iVar10 = *(int *)&(this->Elements).field_0x288;
  bVar12 = false;
  iVar4 = *(int *)&(this->Elements).field_0x2ac;
  if ((iVar10 - iVar4 != 1) && (iVar10 != iVar4)) {
    pFVar9 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
    if (pFVar9 == (ForElementType<FSetElementId> *)0x0) {
      pFVar9 = &this->Hash;
    }
    iVar10 = *(int *)((longlong)pFVar9->InlineData +
                     ((ulonglong)(this->HashSize - 1) & (ulonglong)param_2 & 0xffffffff) * 4);
    if (iVar10 != -1) {
      pTVar2 = *(TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                 **)&(this->Elements).field_0x280;
      do {
        pTVar5 = this;
        if (pTVar2 != (TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar5 = pTVar2;
        }
        if (*(int *)(&(pTVar5->Elements).field_0x0 + (longlong)iVar10 * 0x28) == *_Src) {
          bVar12 = iVar10 != -1;
          if (bVar12) {
            pTVar5 = this;
            if (pTVar2 != (TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                           *)0x0) {
              pTVar5 = pTVar2;
            }
            memmove(&(pTVar5->Elements).field_0x0 + (longlong)iVar10 * 0x28,_Src,0x20);
            TSparseArrayBase<40,4,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<40,4,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                        *)this,local_58.Index,1);
            local_58.Index = iVar10;
          }
          break;
        }
        pTVar5 = this;
        if (pTVar2 != (TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar5 = pTVar2;
        }
        iVar10 = *(int *)(&(pTVar5->Elements).field_0x20 + (longlong)iVar10 * 0x28);
      } while (iVar10 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar12;
  }
  if (bVar12 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x288 - *(int *)&(this->Elements).field_0x2ac;
    uVar8 = 1;
    if (uVar7 >> 1 != 0) {
      uVar8 = uVar7 >> 1;
    }
    uVar6 = (ulonglong)(uVar8 - 1) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar3 & 0x1f);
    uVar8 = 8;
    if ((7 < uVar11) && (uVar8 = uVar11, uVar7 < 4)) {
      uVar8 = 8;
    }
    if (((int)uVar7 < 1) || ((int)uVar8 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & (uint)param_2;
      _Src[9] = uVar8;
      pFVar9 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
      if (pFVar9 == (ForElementType<FSetElementId> *)0x0) {
        pFVar9 = &this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      _Src[8] = *(int *)(pFVar9->InlineData + uVar6 * 4);
      *(int *)(pFVar9->InlineData + uVar6 * 4) = local_58.Index;
    }
    else {
      this->HashSize = uVar8;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_58.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<UPoseSearchDatabase_const_*_&&>_> @ 14a9115a0

FSetElementId __thiscall
TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::EmplaceByHash<TKeyInitializer<UPoseSearchDatabase_const_*_&&>_>
          (TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
           *this,uint param_1,TKeyInitializer<UPoseSearchDatabase_const_*_&&> *param_2,bool *param_3
          )

{
  int iVar1;
  int iVar2;
  TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 in_register_00000014;
  TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar9;
  ForElementType<FSetElementId> *pFVar10;
  uint uVar11;
  uint uVar12;
  int local_res8 [2];
  bool *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0xbec;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_>_>_>
                      (0x2f0,8,1,
                       (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_>_> *)
                       this,(int *)&(this->Elements).field_0xbc8,
                       (int *)&(this->Elements).field_0xbcc);
    TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::Add
              ((TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               &(this->Elements).field_0xbd0,false);
  }
  else {
    pTVar3 = *(TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
               **)&(this->Elements).field_0xbc0;
    iVar6 = *(int *)&(this->Elements).field_0xbe8;
    pTVar9 = this;
    if (pTVar3 != (TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                   *)0x0) {
      pTVar9 = pTVar3;
    }
    iVar1 = iVar1 + -1;
    iVar2 = *(int *)(&(pTVar9->Elements).field_0x4 + (longlong)iVar6 * 0x2f0);
    *(int *)&(this->Elements).field_0xbe8 = iVar2;
    *(int *)&(this->Elements).field_0xbec = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(&(pTVar9->Elements).field_0x0 + (longlong)iVar2 * 0x2f0) = 0xffffffff;
    }
  }
  TSparseArrayBase<752,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  ::AllocateIndex((TSparseArrayBase<752,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_>
       *)0x0) {
    TKeyInitializer<UPoseSearchDatabase_const_*_&&>::
    operator<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>
              ((TKeyInitializer<UPoseSearchDatabase_const_*_&&> *)param_3,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x2e8) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  bVar5 = TryReplaceExisting(this,(uint)param_2,local_38.Pointer,local_res8,in_stack_00000028);
  if (!bVar5) {
    uVar8 = *(int *)&(this->Elements).field_0xbc8 - *(int *)&(this->Elements).field_0xbec;
    uVar12 = 1;
    if (uVar8 >> 1 != 0) {
      uVar12 = uVar8 >> 1;
    }
    uVar7 = (ulonglong)(uVar12 - 1) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
    uVar12 = 2;
    if ((1 < uVar11) && (uVar12 = uVar11, uVar8 < 4)) {
      uVar12 = 2;
    }
    if (((int)uVar8 < 1) || ((int)uVar12 <= this->HashSize)) {
      uVar12 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0x2ec) = uVar12;
      pFVar10 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
      if (pFVar10 == (ForElementType<FSetElementId> *)0x0) {
        pFVar10 = &this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar12;
      *(undefined4 *)((longlong)local_38.Pointer + 0x2e8) =
           *(undefined4 *)(pFVar10->InlineData + uVar7 * 4);
      *(int *)(pFVar10->InlineData + uVar7 * 4) = local_res8[0];
    }
    else {
      this->HashSize = uVar12;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_res8[0];
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<UPoseSearchDatabase_const_*_const_&>_> @ 14a911780

FSetElementId __thiscall
TSet<TTuple<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::EmplaceByHash<TKeyInitializer<UPoseSearchDatabase_const_*_const_&>_>
          (void *this,uint param_1,TKeyInitializer<UPoseSearchDatabase_const_*_const_&> *param_2,
          bool *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 in_register_00000014;
  void *pvVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  if (*(int *)((longlong)this + 0x32c) == 0) {
    iVar3 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_>_>
                      (0xc0,8,1,this,(int *)((longlong)this + 0x308),(int *)((longlong)this + 0x30c)
                      );
    TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::Add
              ((TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               ((longlong)this + 0x310),false);
  }
  else {
    iVar3 = *(int *)((longlong)this + 0x328);
    pvVar7 = this;
    if (*(void **)((longlong)this + 0x300) != (void *)0x0) {
      pvVar7 = *(void **)((longlong)this + 0x300);
    }
    iVar1 = *(int *)((longlong)this + 0x32c) + -1;
    iVar2 = *(int *)((longlong)iVar3 * 0xc0 + 4 + (longlong)pvVar7);
    *(int *)((longlong)this + 0x328) = iVar2;
    *(int *)((longlong)this + 0x32c) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0xc0 + (longlong)pvVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<192,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  ::AllocateIndex(this,&local_38,iVar3);
  if (local_38.Pointer !=
      (TTuple<UPoseSearchDatabase_const_*,_private:_void___cdecl_UPoseSearchInteractionSubsystem::GenerateSearchContexts(float,TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>_&)const_::_2_::FRoledAnimContextInfos>
       *)0x0) {
    TKeyInitializer<UPoseSearchDatabase_const_*_const_&>::
    operator<UPoseSearchDatabase_const_*,_UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::FRoledAnimContextInfos>_TTuple<UPoseSearchDatabase_const_*,_UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::FRoledAnimContextInfos>
              ((TKeyInitializer<UPoseSearchDatabase_const_*_const_&> *)param_3,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0xb8) = 0xffffffff;
  }
  bVar11 = false;
  if ((*(int *)((longlong)this + 0x308) - *(int *)((longlong)this + 0x32c) != 1) &&
     (*(int *)((longlong)this + 0x308) != *(int *)((longlong)this + 0x32c))) {
    lVar8 = *(longlong *)((longlong)this + 0x338);
    if (*(longlong *)((longlong)this + 0x338) == 0) {
      lVar8 = (longlong)this + 0x330;
    }
    iVar3 = *(int *)(lVar8 + ((ulonglong)(*(int *)((longlong)this + 0x340) - 1) &
                             (ulonglong)param_2 & 0xffffffff) * 4);
    if (iVar3 != -1) {
      pvVar7 = *(void **)((longlong)this + 0x300);
      do {
        pvVar4 = this;
        if (pvVar7 != (void *)0x0) {
          pvVar4 = pvVar7;
        }
        if (*(longlong *)((longlong)iVar3 * 0xc0 + (longlong)pvVar4) ==
            *(longlong *)local_38.Pointer) {
          bVar11 = iVar3 != -1;
          if (bVar11) {
            pvVar4 = this;
            if (pvVar7 != (void *)0x0) {
              pvVar4 = pvVar7;
            }
            memmove((void *)((longlong)iVar3 * 0xc0 + (longlong)pvVar4),local_38.Pointer,0xb8);
            TSparseArrayBase<192,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            ::RemoveAtUninitialized(this,local_38.Index,1);
            local_38.Index = iVar3;
          }
          break;
        }
        pvVar4 = this;
        if (pvVar7 != (void *)0x0) {
          pvVar4 = pvVar7;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0xc0 + 0xb8 + (longlong)pvVar4);
      } while (iVar3 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)((longlong)this + 0x308) - *(int *)((longlong)this + 0x32c);
    uVar10 = 1;
    if (uVar6 >> 1 != 0) {
      uVar10 = uVar6 >> 1;
    }
    uVar5 = (ulonglong)(uVar10 - 1) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = 1 << ((byte)lVar8 & 0x1f);
    uVar10 = 2;
    if ((1 < uVar9) && (uVar10 = uVar9, uVar6 < 4)) {
      uVar10 = 2;
    }
    if (((int)uVar6 < 1) || ((int)uVar10 <= *(int *)((longlong)this + 0x340))) {
      uVar10 = *(int *)((longlong)this + 0x340) - 1U & (uint)param_2;
      *(uint *)&((TTuple<UPoseSearchDatabase_const_*,_private:_void___cdecl_UPoseSearchInteractionSubsystem::GenerateSearchContexts(float,TArray<UE::PoseSearch::FInteractionSearchContext,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>_&)const_::_2_::FRoledAnimContextInfos>
                  *)((longlong)local_38.Pointer + 0xb8))->field_0x4 = uVar10;
      lVar8 = *(longlong *)((longlong)this + 0x338);
      if (*(longlong *)((longlong)this + 0x338) == 0) {
        lVar8 = (longlong)this + 0x330;
      }
      uVar5 = (longlong)*(int *)((longlong)this + 0x340) - 1U & (longlong)(int)uVar10;
      *(undefined4 *)((longlong)local_38.Pointer + 0xb8) = *(undefined4 *)(lVar8 + uVar5 * 4);
      *(int *)(lVar8 + uVar5 * 4) = local_38.Index;
    }
    else {
      *(uint *)((longlong)this + 0x340) = uVar10;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<FName_const_&>_> @ 14a911a30

FSetElementId __thiscall
TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::EmplaceByHash<TKeyInitializer<FName_const_&>_>
          (TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
           *this,uint param_1,TKeyInitializer<FName_const_&> *param_2,bool *param_3)

{
  int iVar1;
  TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined4 in_register_00000014;
  longlong lVar13;
  ForElementType<FSetElementId> *pFVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_158;
  longlong local_148 [34];
  
  iVar15 = *(int *)&(this->Elements).field_0x92c;
  if (iVar15 == 0) {
    iVar7 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_>_>_>
                      (0x120,8,1,
                       (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_>_> *)
                       this,(int *)&(this->Elements).field_0x908,
                       (int *)&(this->Elements).field_0x90c);
    TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::Add
              ((TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               &(this->Elements).field_0x910,false);
  }
  else {
    pTVar2 = *(TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
               **)&(this->Elements).field_0x900;
    iVar7 = *(int *)&(this->Elements).field_0x928;
    pTVar10 = this;
    if (pTVar2 != (TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                   *)0x0) {
      pTVar10 = pTVar2;
    }
    iVar15 = iVar15 + -1;
    iVar1 = *(int *)(&(pTVar10->Elements).field_0x4 + (longlong)iVar7 * 0x120);
    *(int *)&(this->Elements).field_0x928 = iVar1;
    *(int *)&(this->Elements).field_0x92c = iVar15;
    if (iVar15 != 0) {
      *(undefined4 *)(&(pTVar10->Elements).field_0x0 + (longlong)iVar1 * 0x120) = 0xffffffff;
    }
  }
  TSparseArrayBase<288,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  ::AllocateIndex((TSparseArrayBase<288,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                   *)this,&local_158,iVar7);
  if (local_158.Pointer != (longlong *)0x0) {
    lVar13 = 2;
    *(longlong *)local_158.Pointer = **(longlong **)param_3;
    plVar8 = (longlong *)((longlong)local_158.Pointer + 8);
    plVar9 = local_148;
    do {
      lVar3 = plVar9[1];
      lVar4 = plVar9[2];
      lVar5 = plVar9[3];
      *plVar8 = *plVar9;
      plVar8[1] = lVar3;
      lVar3 = plVar9[4];
      lVar6 = plVar9[5];
      plVar8[2] = lVar4;
      plVar8[3] = lVar5;
      lVar4 = plVar9[6];
      lVar5 = plVar9[7];
      plVar8[4] = lVar3;
      plVar8[5] = lVar6;
      lVar3 = plVar9[8];
      lVar6 = plVar9[9];
      plVar8[6] = lVar4;
      plVar8[7] = lVar5;
      lVar4 = plVar9[10];
      lVar5 = plVar9[0xb];
      plVar8[8] = lVar3;
      plVar8[9] = lVar6;
      lVar3 = plVar9[0xc];
      lVar6 = plVar9[0xd];
      plVar8[10] = lVar4;
      plVar8[0xb] = lVar5;
      lVar4 = plVar9[0xe];
      lVar5 = plVar9[0xf];
      plVar8[0xc] = lVar3;
      plVar8[0xd] = lVar6;
      plVar8[0xe] = lVar4;
      plVar8[0xf] = lVar5;
      lVar13 = lVar13 + -1;
      plVar8 = plVar8 + 0x10;
      plVar9 = plVar9 + 0x10;
    } while (lVar13 != 0);
    *(longlong *)((longlong)local_158.Pointer + 0x108) = 0;
    *(undefined4 *)((longlong)local_158.Pointer + 0x110) = 0;
    *(undefined4 *)((longlong)local_158.Pointer + 0x114) = 0x20;
    *(undefined4 *)((longlong)local_158.Pointer + 0x118) = 0xffffffff;
  }
  iVar15 = *(int *)&(this->Elements).field_0x908;
  bVar18 = false;
  iVar7 = *(int *)&(this->Elements).field_0x92c;
  if ((iVar15 - iVar7 != 1) && (iVar15 != iVar7)) {
    pFVar14 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
    if (pFVar14 == (ForElementType<FSetElementId> *)0x0) {
      pFVar14 = &this->Hash;
    }
    iVar15 = *(int *)((longlong)pFVar14->InlineData +
                     (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar15 != -1) {
      pTVar2 = *(TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                 **)&(this->Elements).field_0x900;
      do {
        pTVar10 = this;
        if (pTVar2 != (TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar10 = pTVar2;
        }
        if (*(longlong *)(&(pTVar10->Elements).field_0x0 + (longlong)iVar15 * 0x120) ==
            *(longlong *)local_158.Pointer) {
          bVar18 = iVar15 != -1;
          if (bVar18) {
            pTVar10 = this;
            if (pTVar2 != (TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                           *)0x0) {
              pTVar10 = pTVar2;
            }
            memmove(&(pTVar10->Elements).field_0x0 + (longlong)iVar15 * 0x120,local_158.Pointer,
                    0x118);
            TSparseArrayBase<288,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<288,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                        *)this,local_158.Index,1);
            local_158.Index = iVar15;
          }
          break;
        }
        pTVar10 = this;
        if (pTVar2 != (TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar10 = pTVar2;
        }
        iVar15 = *(int *)(&(pTVar10->Elements).field_0x118 + (longlong)iVar15 * 0x120);
      } while (iVar15 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar18;
  }
  if (bVar18 == false) {
    uVar12 = *(int *)&(this->Elements).field_0x908 - *(int *)&(this->Elements).field_0x92c;
    uVar16 = 1;
    if (uVar12 >> 1 != 0) {
      uVar16 = uVar12 >> 1;
    }
    uVar11 = (ulonglong)(uVar16 - 1) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar13 & 0x1f);
    uVar16 = 4;
    if ((3 < uVar17) && (uVar16 = uVar17, uVar12 < 4)) {
      uVar16 = 4;
    }
    if (((int)uVar12 < 1) || ((int)uVar16 <= this->HashSize)) {
      uVar16 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)local_158.Pointer + 0x11c) = uVar16;
      pFVar14 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
      if (pFVar14 == (ForElementType<FSetElementId> *)0x0) {
        pFVar14 = &this->Hash;
      }
      uVar11 = (longlong)this->HashSize - 1U & (longlong)(int)uVar16;
      *(undefined4 *)((longlong)local_158.Pointer + 0x118) =
           *(undefined4 *)(pFVar14->InlineData + uVar11 * 4);
      *(int *)(pFVar14->InlineData + uVar11 * 4) = local_158.Index;
    }
    else {
      this->HashSize = uVar16;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_158.Index;
  return (FSetElementId)param_1;
}

// FindIndexByHash<int> @ 14a912010

int __thiscall
TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::FindIndexByHash<int>
          (TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
           *this,uint param_1,int *param_2)

{
  TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar1;
  TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar2;
  ForElementType<FSetElementId> *pFVar3;
  int iVar4;
  
  if (*(int *)&(this->Elements).field_0x288 != *(int *)&(this->Elements).field_0x2ac) {
    pFVar3 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
    if (pFVar3 == (ForElementType<FSetElementId> *)0x0) {
      pFVar3 = &this->Hash;
    }
    iVar4 = *(int *)((longlong)pFVar3->InlineData + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar4 != -1) {
      pTVar1 = *(TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                 **)&(this->Elements).field_0x280;
      do {
        pTVar2 = this;
        if (pTVar1 != (TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar2 = pTVar1;
        }
        if (*(int *)(&(pTVar2->Elements).field_0x0 + (longlong)iVar4 * 0x28) == *param_2) {
          return iVar4;
        }
        pTVar2 = this;
        if (pTVar1 != (TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar2 = pTVar1;
        }
        iVar4 = *(int *)(&(pTVar2->Elements).field_0x20 + (longlong)iVar4 * 0x28);
      } while (iVar4 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<UObject_const_*> @ 14a9120a0

int __thiscall
TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::FindIndexByHash<UObject_const_*>
          (TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
           *this,uint param_1,UObject **param_2)

{
  TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar1;
  TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar2;
  ForElementType<FSetElementId> *pFVar3;
  int iVar4;
  
  if (*(int *)&(this->Elements).field_0x188 != *(int *)&(this->Elements).field_0x1ac) {
    pFVar3 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
    if (pFVar3 == (ForElementType<FSetElementId> *)0x0) {
      pFVar3 = &this->Hash;
    }
    iVar4 = *(int *)((longlong)pFVar3->InlineData + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar4 != -1) {
      pTVar1 = *(TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                 **)&(this->Elements).field_0x180;
      do {
        pTVar2 = this;
        if (pTVar1 != (TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar2 = pTVar1;
        }
        if (*(UObject **)(&(pTVar2->Elements).field_0x0 + (longlong)iVar4 * 0x18) == *param_2) {
          return iVar4;
        }
        pTVar2 = this;
        if (pTVar1 != (TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar2 = pTVar1;
        }
        iVar4 = *(int *)(&(pTVar2->Elements).field_0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<UObject_const_*> @ 14a912130

int __thiscall
TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::FindIndexByHash<UObject_const_*>
          (TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
           *this,uint param_1,UObject **param_2)

{
  TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar1;
  TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar2;
  int iVar3;
  ForElementType<FSetElementId> *pFVar4;
  
  if (*(int *)&(this->Elements).field_0x308 != *(int *)&(this->Elements).field_0x32c) {
    pFVar4 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
    if (pFVar4 == (ForElementType<FSetElementId> *)0x0) {
      pFVar4 = &this->Hash;
    }
    iVar3 = *(int *)((longlong)pFVar4->InlineData + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      pTVar1 = *(TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                 **)&(this->Elements).field_0x300;
      do {
        pTVar2 = this;
        if (pTVar1 != (TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar2 = pTVar1;
        }
        if (*(UObject **)(&(pTVar2->Elements).field_0x0 + (longlong)iVar3 * 0x30) == *param_2) {
          return iVar3;
        }
        pTVar2 = this;
        if (pTVar1 != (TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar2 = pTVar1;
        }
        iVar3 = *(int *)(&(pTVar2->Elements).field_0x28 + (longlong)iVar3 * 0x30);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<UPoseSearchDatabase_const_*> @ 14a9121c0

int __thiscall
TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::FindIndexByHash<UPoseSearchDatabase_const_*>
          (TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
           *this,uint param_1,UPoseSearchDatabase **param_2)

{
  TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar1;
  TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar2;
  int iVar3;
  ForElementType<FSetElementId> *pFVar4;
  
  if (*(int *)&(this->Elements).field_0xbc8 != *(int *)&(this->Elements).field_0xbec) {
    pFVar4 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
    if (pFVar4 == (ForElementType<FSetElementId> *)0x0) {
      pFVar4 = &this->Hash;
    }
    iVar3 = *(int *)((longlong)pFVar4->InlineData + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      pTVar1 = *(TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                 **)&(this->Elements).field_0xbc0;
      do {
        pTVar2 = this;
        if (pTVar1 != (TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar2 = pTVar1;
        }
        if (*(UPoseSearchDatabase **)(&(pTVar2->Elements).field_0x0 + (longlong)iVar3 * 0x2f0) ==
            *param_2) {
          return iVar3;
        }
        pTVar2 = this;
        if (pTVar1 != (TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar2 = pTVar1;
        }
        iVar3 = *(int *)(&(pTVar2->Elements).field_0x2e8 + (longlong)iVar3 * 0x2f0);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FName> @ 14a912260

int __thiscall
TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::FindIndexByHash<FName>
          (TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
           *this,uint param_1,FName *param_2)

{
  TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar1;
  TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar2;
  int iVar3;
  ForElementType<FSetElementId> *pFVar4;
  
  if (*(int *)&(this->Elements).field_0x908 != *(int *)&(this->Elements).field_0x92c) {
    pFVar4 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
    if (pFVar4 == (ForElementType<FSetElementId> *)0x0) {
      pFVar4 = &this->Hash;
    }
    iVar3 = *(int *)((longlong)pFVar4->InlineData + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      pTVar1 = *(TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                 **)&(this->Elements).field_0x900;
      do {
        pTVar2 = this;
        if (pTVar1 != (TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar2 = pTVar1;
        }
        if (*(FName *)(&(pTVar2->Elements).field_0x0 + (longlong)iVar3 * 0x120) == *param_2) {
          return iVar3;
        }
        pTVar2 = this;
        if (pTVar1 != (TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar2 = pTVar1;
        }
        iVar3 = *(int *)(&(pTVar2->Elements).field_0x118 + (longlong)iVar3 * 0x120);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindOrAddByHash<UE::PoseSearch::FAnimContextInfo_const_*> @ 14a912300

FAnimContextInfo ** __thiscall
TSet<UE::PoseSearch::FAnimContextInfo_const_*,DefaultKeyFuncs<UE::PoseSearch::FAnimContextInfo_const_*,0>,TInlineSetAllocator<32,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::FindOrAddByHash<UE::PoseSearch::FAnimContextInfo_const_*>
          (TSet<UE::PoseSearch::FAnimContextInfo_const_*,DefaultKeyFuncs<UE::PoseSearch::FAnimContextInfo_const_*,0>,TInlineSetAllocator<32,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
           *this,uint param_1,FAnimContextInfo **param_2,bool *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  TSet<UE::PoseSearch::FAnimContextInfo_const_*,DefaultKeyFuncs<UE::PoseSearch::FAnimContextInfo_const_*,0>,TInlineSetAllocator<32,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar3;
  longlong lVar4;
  int iVar5;
  TSet<UE::PoseSearch::FAnimContextInfo_const_*,DefaultKeyFuncs<UE::PoseSearch::FAnimContextInfo_const_*,0>,TInlineSetAllocator<32,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar6;
  int iVar7;
  uint uVar8;
  ForElementType<FSetElementId> *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  FSparseArrayAllocationInfo local_28;
  
  puVar1 = &(this->Elements).field_0x208;
  if (*(int *)puVar1 != *(int *)&(this->Elements).field_0x22c) {
    pFVar9 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
    if (pFVar9 == (ForElementType<FSetElementId> *)0x0) {
      pFVar9 = &this->Hash;
    }
    iVar7 = *(int *)((longlong)pFVar9->InlineData + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar7 != -1) {
      pTVar3 = *(TSet<UE::PoseSearch::FAnimContextInfo_const_*,DefaultKeyFuncs<UE::PoseSearch::FAnimContextInfo_const_*,0>,TInlineSetAllocator<32,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                 **)&(this->Elements).field_0x200;
      do {
        pTVar6 = this;
        if (pTVar3 != (TSet<UE::PoseSearch::FAnimContextInfo_const_*,DefaultKeyFuncs<UE::PoseSearch::FAnimContextInfo_const_*,0>,TInlineSetAllocator<32,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar6 = pTVar3;
        }
        if (*(FAnimContextInfo **)(&(pTVar6->Elements).field_0x0 + (longlong)iVar7 * 0x10) ==
            *param_2) goto LAB_14a9123a5;
        pTVar6 = this;
        if (pTVar3 != (TSet<UE::PoseSearch::FAnimContextInfo_const_*,DefaultKeyFuncs<UE::PoseSearch::FAnimContextInfo_const_*,0>,TInlineSetAllocator<32,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar6 = pTVar3;
        }
        iVar7 = *(int *)(&(pTVar6->Elements).field_0x8 + (longlong)iVar7 * 0x10);
      } while (iVar7 != -1);
    }
  }
  iVar7 = -1;
LAB_14a9123a5:
  puVar13 = &(this->Elements).field_0x22c;
  if (param_3 != (bool *)0x0) {
    *param_3 = iVar7 != -1;
  }
  if (iVar7 == -1) {
    iVar7 = *(int *)puVar13;
    if (iVar7 == 0) {
      iVar5 = UE::Core::Private::
              ReallocGrow<2,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
                        (0x10,8,1,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>
                                   *)this,(int *)puVar1,(int *)&(this->Elements).field_0x20c);
      TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::Add
                ((TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
                 &(this->Elements).field_0x210,false);
    }
    else {
      pTVar3 = *(TSet<UE::PoseSearch::FAnimContextInfo_const_*,DefaultKeyFuncs<UE::PoseSearch::FAnimContextInfo_const_*,0>,TInlineSetAllocator<32,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                 **)&(this->Elements).field_0x200;
      iVar5 = *(int *)&(this->Elements).field_0x228;
      pTVar6 = this;
      if (pTVar3 != (TSet<UE::PoseSearch::FAnimContextInfo_const_*,DefaultKeyFuncs<UE::PoseSearch::FAnimContextInfo_const_*,0>,TInlineSetAllocator<32,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                     *)0x0) {
        pTVar6 = pTVar3;
      }
      iVar2 = *(int *)(&(pTVar6->Elements).field_0x4 + (longlong)iVar5 * 0x10);
      iVar7 = iVar7 + -1;
      *(int *)&(this->Elements).field_0x228 = iVar2;
      *(int *)puVar13 = iVar7;
      if (iVar7 != 0) {
        *(undefined4 *)(&(pTVar6->Elements).field_0x0 + (longlong)iVar2 * 0x10) = 0xffffffff;
      }
    }
    TSparseArrayBase<16,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
    ::AllocateIndex((TSparseArrayBase<16,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                     *)this,&local_28,iVar5);
    if (local_28.Pointer != (FAnimContextInfo **)0x0) {
      *(FAnimContextInfo **)local_28.Pointer = *param_2;
      *(undefined4 *)((longlong)local_28.Pointer + 8) = 0xffffffff;
    }
    uVar8 = *(int *)&(this->Elements).field_0x208 - *(int *)&(this->Elements).field_0x22c;
    uVar12 = 1;
    if (uVar8 >> 1 != 0) {
      uVar12 = uVar8 >> 1;
    }
    uVar10 = (ulonglong)(uVar12 - 1) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
    uVar12 = 0x10;
    if ((0xf < uVar11) && (uVar12 = uVar11, uVar8 < 4)) {
      uVar12 = 0x10;
    }
    if (((int)uVar8 < 1) || ((int)uVar12 <= this->HashSize)) {
      uVar12 = this->HashSize - 1U & param_1;
      *(uint *)((longlong)local_28.Pointer + 0xc) = uVar12;
      pFVar9 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
      if (pFVar9 == (ForElementType<FSetElementId> *)0x0) {
        pFVar9 = &this->Hash;
      }
      uVar10 = (longlong)this->HashSize - 1U & (longlong)(int)uVar12;
      *(undefined4 *)((longlong)local_28.Pointer + 8) =
           *(undefined4 *)(pFVar9->InlineData + uVar10 * 4);
      *(int *)(pFVar9->InlineData + uVar10 * 4) = local_28.Index;
    }
    else {
      this->HashSize = uVar12;
      Rehash(this);
    }
  }
  else {
    pTVar3 = *(TSet<UE::PoseSearch::FAnimContextInfo_const_*,DefaultKeyFuncs<UE::PoseSearch::FAnimContextInfo_const_*,0>,TInlineSetAllocator<32,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
               **)&(this->Elements).field_0x200;
    if (pTVar3 != (TSet<UE::PoseSearch::FAnimContextInfo_const_*,DefaultKeyFuncs<UE::PoseSearch::FAnimContextInfo_const_*,0>,TInlineSetAllocator<32,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                   *)0x0) {
      this = pTVar3;
    }
    local_28.Pointer = &(this->Elements).field_0x0 + (longlong)iVar7 * 0x10;
  }
  return local_28.Pointer;
}

// TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator> @ 14a918720

TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator>
::
TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator>
          (TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator>
           *this,TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator>
                 *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined8 *)&this->Elements = 0;
  *(undefined8 *)&(this->Elements).field_0x8 = 0;
  *(undefined8 *)&(this->Elements).field_0x20 = 0;
  *(undefined4 *)&(this->Elements).field_0x28 = 0;
  *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Elements).field_0x34 = 0;
  (this->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = 0;
  if (this != param_1) {
    TSparseArray<TSparseSetElement<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,0);
    if (*(void **)&this->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&this->Elements);
    }
    _Src = &(param_1->Elements).field_0x10;
    *(undefined8 *)&this->Elements = *(undefined8 *)&param_1->Elements;
    _Dst = &(this->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = 0;
    *(undefined4 *)&(this->Elements).field_0x8 = *(undefined4 *)&(param_1->Elements).field_0x8;
    *(undefined4 *)&(this->Elements).field_0xc = *(undefined4 *)&(param_1->Elements).field_0xc;
    *(undefined8 *)&(param_1->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->Elements).field_0x20 = *(undefined8 *)&(param_1->Elements).field_0x20;
      *(undefined8 *)&(param_1->Elements).field_0x20 = 0;
      *(undefined4 *)&(this->Elements).field_0x28 = *(undefined4 *)&(param_1->Elements).field_0x28;
      *(undefined4 *)&(this->Elements).field_0x2c = *(undefined4 *)&(param_1->Elements).field_0x2c;
      *(undefined8 *)&(param_1->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
  }
  if ((param_1->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->Hash).InlineData = *(undefined4 *)(param_1->Hash).InlineData;
  }
  FVar2 = (this->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->Hash).SecondaryData = (param_1->Hash).SecondaryData;
  (param_1->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = param_1->HashSize;
  param_1->HashSize = 0;
  return this;
}

// operator= @ 14a91b0c0

TSet<UE::PoseSearch::FSearchContext::FPoseCandidate,UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidatePoseIdxKeyFunc,FDefaultSetAllocator>
* __thiscall
TSet<UE::PoseSearch::FSearchContext::FPoseCandidate,UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidatePoseIdxKeyFunc,FDefaultSetAllocator>
::operator=(TSet<UE::PoseSearch::FSearchContext::FPoseCandidate,UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidatePoseIdxKeyFunc,FDefaultSetAllocator>
            *this,TSet<UE::PoseSearch::FSearchContext::FPoseCandidate,UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidatePoseIdxKeyFunc,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  undefined1 *this_00;
  int iVar2;
  
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
    iVar2 = *(int *)&(param_1->Elements).field_0x8;
    TSparseArray<TSparseSetElement<UE::PoseSearch::FSearchContext::FPoseCandidate>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,iVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar2,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
               (int *)&(this->Elements).field_0xc);
    puVar1 = &(param_1->Elements).field_0x10;
    this_00 = &(this->Elements).field_0x10;
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    if (this_00 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar2 != 0) {
      memcpy(*(void **)&this->Elements,*(void **)&param_1->Elements,(longlong)iVar2 * 0x14);
    }
    return this;
  }
  return this;
}

// Rehash @ 14a937f10

void __thiscall
TSet<UE::PoseSearch::FAnimContextInfo_const_*,DefaultKeyFuncs<UE::PoseSearch::FAnimContextInfo_const_*,0>,TInlineSetAllocator<32,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::Rehash(TSet<UE::PoseSearch::FAnimContextInfo_const_*,DefaultKeyFuncs<UE::PoseSearch::FAnimContextInfo_const_*,0>,TInlineSetAllocator<32,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
         *this)

{
  int *piVar1;
  ForElementType<FSetElementId> *this_00;
  uchar *puVar2;
  uint uVar3;
  ForElementType<FSetElementId> *pFVar4;
  TSet<UE::PoseSearch::FAnimContextInfo_const_*,DefaultKeyFuncs<UE::PoseSearch::FAnimContextInfo_const_*,0>,TInlineSetAllocator<32,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> *pFVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  TSet<UE::PoseSearch::FAnimContextInfo_const_*,DefaultKeyFuncs<UE::PoseSearch::FAnimContextInfo_const_*,0>,TInlineSetAllocator<32,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  uint local_68;
  uint uStack_64;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> local_40;
  
  piVar1 = &this->HashSize;
  uVar11 = 0;
  uVar7 = *piVar1;
  this_00 = &this->Hash;
  if ((uVar7 != 0) &&
     (TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>::
      ResizeAllocation(this_00,0,uVar7,4), 0 < (int)uVar7)) {
    uVar13 = (ulonglong)uVar7;
    uVar9 = uVar11;
    do {
      pFVar4 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
      pFVar8 = this_00;
      if (pFVar4 != (ForElementType<FSetElementId> *)0x0) {
        pFVar8 = pFVar4;
      }
      uVar6 = (longlong)(int)uVar7 - 1U & uVar9;
      uVar9 = uVar9 + 1;
      puVar2 = pFVar8->InlineData + uVar6 * 4;
      puVar2[0] = 0xff;
      puVar2[1] = 0xff;
      puVar2[2] = 0xff;
      puVar2[3] = 0xff;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (*piVar1 != 0) {
    local_40.Array =
         (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
         &(this->Elements).field_0x210;
    local_68 = 0;
    uVar7 = *(uint *)&(this->Elements).field_0x220;
    uStack_64 = 1;
    uStack_54 = 0;
    uStack_50 = 0;
    if (uVar7 != 0) {
      puVar15 = *(uint **)&(this->Elements).field_0x218;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)local_40.Array;
      }
      uVar3 = *puVar15;
      uVar9 = uVar11;
      while (uVar3 == 0) {
        iVar10 = (int)uVar11;
        uStack_50 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_50;
        local_68 = iVar10 + 1;
        uVar11 = (ulonglong)local_68;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_68)
        goto LAB_14a93803b;
        uVar3 = puVar15[(longlong)iVar10 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      uVar11 = (ulonglong)uStack_64 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uStack_54 = (int)lVar14 + -1 + uStack_50;
      uVar11 = (ulonglong)uStack_54;
      if ((int)uVar7 < (int)uStack_54) {
LAB_14a93803b:
        uVar11 = (ulonglong)uVar7;
        uStack_54 = uVar7;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = uStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = uStack_50;
    if ((int)uVar11 < (int)uVar7) {
      do {
        pTVar5 = *(TSet<UE::PoseSearch::FAnimContextInfo_const_*,DefaultKeyFuncs<UE::PoseSearch::FAnimContextInfo_const_*,0>,TInlineSetAllocator<32,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                   **)&(this->Elements).field_0x200;
        lVar14 = (longlong)(int)uVar11;
        pTVar12 = this;
        if (pTVar5 != (TSet<UE::PoseSearch::FAnimContextInfo_const_*,DefaultKeyFuncs<UE::PoseSearch::FAnimContextInfo_const_*,0>,TInlineSetAllocator<32,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar12 = pTVar5;
        }
        uVar9 = *(ulonglong *)(&(pTVar12->Elements).field_0x0 + lVar14 * 0x10);
        uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar7 = (uVar7 >> 0x10 ^ uVar7) & *piVar1 - 1U;
        *(uint *)(&(pTVar12->Elements).field_0xc + lVar14 * 0x10) = uVar7;
        pFVar4 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
        pFVar8 = this_00;
        if (pFVar4 != (ForElementType<FSetElementId> *)0x0) {
          pFVar8 = pFVar4;
        }
        uVar9 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(&(pTVar12->Elements).field_0x8 + lVar14 * 0x10) =
             *(undefined4 *)(pFVar8->InlineData + uVar9 * 4);
        *(int *)(pFVar8->InlineData + uVar9 * 4) = (int)uVar11;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
                  (&local_40);
        uVar11 = (ulonglong)(uint)local_40.CurrentBitIndex;
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14a938120

void __thiscall
TSet<UAnimInstance_const_*,DefaultKeyFuncs<UAnimInstance_const_*,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
::Rehash(TSet<UAnimInstance_const_*,DefaultKeyFuncs<UAnimInstance_const_*,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
         *this)

{
  ForElementType<FSetElementId> *this_00;
  int *piVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  TSet<UAnimInstance_const_*,DefaultKeyFuncs<UAnimInstance_const_*,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  TSet<UAnimInstance_const_*,DefaultKeyFuncs<UAnimInstance_const_*,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint *puVar14;
  uint local_68;
  uint uStack_64;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_40;
  
  this_00 = &this->Hash;
  piVar1 = &this->HashSize;
  uVar6 = *piVar1;
  uVar12 = (ulonglong)uVar6;
  if ((this->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->Hash).SecondaryData,0,0,4);
  }
  uVar10 = 0;
  if ((uVar6 != 0) &&
     (TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
      ResizeAllocation(this_00,0,uVar6,4), 0 < (int)uVar6)) {
    uVar8 = uVar10;
    do {
      FVar3 = (this->Hash).SecondaryData;
      FVar7 = (ForElementType<FSetElementId>)this_00;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar7 = FVar3;
      }
      uVar5 = uVar8 & (longlong)(int)uVar6 - 1U;
      uVar8 = uVar8 + 1;
      *(undefined4 *)((longlong)FVar7 + uVar5 * 4) = 0xffffffff;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if (*piVar1 != 0) {
    local_40.Array =
         (TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
         &(this->Elements).field_0x810;
    local_68 = 0;
    uVar6 = *(uint *)&(this->Elements).field_0x828;
    uStack_64 = 1;
    uStack_54 = 0;
    uStack_50 = 0;
    if (uVar6 != 0) {
      puVar14 = *(uint **)&(this->Elements).field_0x820;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)local_40.Array;
      }
      uVar2 = *puVar14;
      uVar12 = uVar10;
      while (uVar2 == 0) {
        iVar9 = (int)uVar10;
        uStack_50 = (int)uVar12 + 0x20;
        uVar12 = (ulonglong)uStack_50;
        local_68 = iVar9 + 1;
        uVar10 = (ulonglong)local_68;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_68)
        goto LAB_14a93826b;
        uVar2 = puVar14[(longlong)iVar9 + 1];
      }
      uStack_64 = -uVar2 & uVar2;
      uVar12 = (ulonglong)uStack_64 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uStack_54 = (int)lVar13 + -1 + uStack_50;
      uVar10 = (ulonglong)uStack_54;
      if ((int)uVar6 < (int)uStack_54) {
LAB_14a93826b:
        uVar10 = (ulonglong)uVar6;
        uStack_54 = uVar6;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = uStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = uStack_50;
    if ((int)uVar10 < (int)uVar6) {
      do {
        pTVar4 = *(TSet<UAnimInstance_const_*,DefaultKeyFuncs<UAnimInstance_const_*,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   **)&(this->Elements).field_0x800;
        lVar13 = (longlong)(int)uVar10;
        pTVar11 = this;
        if (pTVar4 != (TSet<UAnimInstance_const_*,DefaultKeyFuncs<UAnimInstance_const_*,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                       *)0x0) {
          pTVar11 = pTVar4;
        }
        uVar12 = *(ulonglong *)(&(pTVar11->Elements).field_0x0 + lVar13 * 0x10);
        uVar6 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = (uVar6 >> 0x10 ^ uVar6) & *piVar1 - 1U;
        *(uint *)(&(pTVar11->Elements).field_0xc + lVar13 * 0x10) = uVar6;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)this_00;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar12 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(&(pTVar11->Elements).field_0x8 + lVar13 * 0x10) =
             *(undefined4 *)((longlong)FVar7 + uVar12 * 4);
        *(int *)((longlong)FVar7 + uVar12 * 4) = (int)uVar10;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
        FindFirstSetBit(&local_40);
        uVar10 = (ulonglong)(uint)local_40.CurrentBitIndex;
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14a938360

void __thiscall
TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::Rehash(TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
         *this)

{
  ForElementType<FSetElementId> *this_00;
  int *piVar1;
  uchar *puVar2;
  uint uVar3;
  ForElementType<FSetElementId> *pFVar4;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> *pFVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar13;
  ulonglong uVar14;
  uint *puVar15;
  uint local_68;
  uint uStack_64;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> local_40;
  
  piVar1 = &this->HashSize;
  uVar10 = 0;
  uVar8 = *piVar1;
  this_00 = &this->Hash;
  if ((uVar8 != 0) &&
     (TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>::
      ResizeAllocation(this_00,0,uVar8,4), 0 < (int)uVar8)) {
    uVar14 = (ulonglong)uVar8;
    uVar11 = uVar10;
    do {
      pFVar4 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
      pFVar9 = this_00;
      if (pFVar4 != (ForElementType<FSetElementId> *)0x0) {
        pFVar9 = pFVar4;
      }
      uVar7 = (longlong)(int)uVar8 - 1U & uVar11;
      uVar11 = uVar11 + 1;
      puVar2 = pFVar9->InlineData + uVar7 * 4;
      puVar2[0] = 0xff;
      puVar2[1] = 0xff;
      puVar2[2] = 0xff;
      puVar2[3] = 0xff;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  if (*piVar1 != 0) {
    uVar8 = *(uint *)&(this->Elements).field_0x60;
    local_40.Array =
         (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
         &(this->Elements).field_0x50;
    local_68 = 0;
    uStack_64 = 1;
    uStack_54 = 0;
    uStack_50 = 0;
    if (uVar8 != 0) {
      puVar15 = *(uint **)&(this->Elements).field_0x58;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)local_40.Array;
      }
      uVar3 = *puVar15;
      uVar11 = uVar10;
      while (uVar3 == 0) {
        iVar12 = (int)uVar10;
        uStack_50 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_50;
        local_68 = iVar12 + 1;
        uVar10 = (ulonglong)local_68;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_68)
        goto LAB_14a93848b;
        uVar3 = puVar15[(longlong)iVar12 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      uVar10 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uStack_54 = (int)lVar6 + -1 + uStack_50;
      uVar10 = (ulonglong)uStack_54;
      if ((int)uVar8 < (int)uStack_54) {
LAB_14a93848b:
        uVar10 = (ulonglong)uVar8;
        uStack_54 = uVar8;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = uStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = uStack_50;
    if ((int)uVar10 < (int)uVar8) {
      do {
        pTVar5 = *(TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                   **)&(this->Elements).field_0x40;
        iVar12 = (int)uVar10;
        pTVar13 = this;
        if (pTVar5 != (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar13 = pTVar5;
        }
        uVar10 = *(ulonglong *)(&pTVar13->Hash)[(longlong)iVar12 + -7].InlineData;
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar8 = (uVar8 >> 0x10 ^ uVar8) & *piVar1 - 1U;
        *(uint *)((longlong)&(&pTVar13->Hash)[(longlong)iVar12 + -7].SecondaryData.Data + 4) = uVar8
        ;
        pFVar4 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
        pFVar9 = this_00;
        if (pFVar4 != (ForElementType<FSetElementId> *)0x0) {
          pFVar9 = pFVar4;
        }
        uVar10 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)&(&pTVar13->Hash)[(longlong)iVar12 + -7].SecondaryData.Data =
             *(undefined4 *)(pFVar9->InlineData + uVar10 * 4);
        *(int *)(pFVar9->InlineData + uVar10 * 4) = iVar12;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
                  (&local_40);
        uVar10 = (ulonglong)(uint)local_40.CurrentBitIndex;
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14a938570

void __thiscall
TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::Rehash(TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
         *this)

{
  int *piVar1;
  ForElementType<FSetElementId> *this_00;
  uchar *puVar2;
  uint uVar3;
  ForElementType<FSetElementId> *pFVar4;
  TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar5;
  ulonglong uVar6;
  longlong lVar7;
  ForElementType<FSetElementId> *pFVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  uint local_68;
  uint uStack_64;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> local_40;
  
  piVar1 = &this->HashSize;
  uVar11 = 0;
  uVar13 = *piVar1;
  this_00 = &this->Hash;
  if ((uVar13 != 0) &&
     (TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>::
      ResizeAllocation(this_00,0,uVar13,4), 0 < (int)uVar13)) {
    uVar14 = (ulonglong)uVar13;
    uVar9 = uVar11;
    do {
      pFVar4 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
      pFVar8 = this_00;
      if (pFVar4 != (ForElementType<FSetElementId> *)0x0) {
        pFVar8 = pFVar4;
      }
      uVar6 = (longlong)(int)uVar13 - 1U & uVar9;
      uVar9 = uVar9 + 1;
      puVar2 = pFVar8->InlineData + uVar6 * 4;
      puVar2[0] = 0xff;
      puVar2[1] = 0xff;
      puVar2[2] = 0xff;
      puVar2[3] = 0xff;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  if (*piVar1 != 0) {
    local_40.Array =
         (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
         &(this->Elements).field_0x290;
    local_68 = 0;
    uVar13 = *(uint *)&(this->Elements).field_0x2a0;
    uStack_64 = 1;
    uStack_54 = 0;
    uStack_50 = 0;
    if (uVar13 != 0) {
      puVar15 = *(uint **)&(this->Elements).field_0x298;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)local_40.Array;
      }
      uVar3 = *puVar15;
      uVar9 = uVar11;
      while (uVar3 == 0) {
        iVar10 = (int)uVar11;
        uStack_50 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_50;
        local_68 = iVar10 + 1;
        uVar11 = (ulonglong)local_68;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_68)
        goto LAB_14a93869b;
        uVar3 = puVar15[(longlong)iVar10 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      uVar11 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uStack_54 = (int)lVar7 + -1 + uStack_50;
      uVar11 = (ulonglong)uStack_54;
      if ((int)uVar13 < (int)uStack_54) {
LAB_14a93869b:
        uVar11 = (ulonglong)uVar13;
        uStack_54 = uVar13;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = uStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = uStack_50;
    if ((int)uVar11 < (int)uVar13) {
      do {
        pTVar5 = *(TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                   **)&(this->Elements).field_0x280;
        pTVar12 = this;
        if (pTVar5 != (TSet<TTuple<int,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar12 = pTVar5;
        }
        lVar7 = (longlong)(int)uVar11;
        uVar13 = *piVar1 - 1U & *(uint *)(&(pTVar12->Elements).field_0x0 + lVar7 * 0x28);
        *(uint *)(&(pTVar12->Elements).field_0x24 + lVar7 * 0x28) = uVar13;
        pFVar4 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
        pFVar8 = this_00;
        if (pFVar4 != (ForElementType<FSetElementId> *)0x0) {
          pFVar8 = pFVar4;
        }
        uVar9 = (longlong)*piVar1 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(&(pTVar12->Elements).field_0x20 + lVar7 * 0x28) =
             *(undefined4 *)(pFVar8->InlineData + uVar9 * 4);
        *(int *)(pFVar8->InlineData + uVar9 * 4) = (int)uVar11;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
                  (&local_40);
        uVar11 = (ulonglong)(uint)local_40.CurrentBitIndex;
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14a938750

void __thiscall
TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::Rehash(TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
         *this)

{
  int *piVar1;
  ForElementType<FSetElementId> *this_00;
  uchar *puVar2;
  uint uVar3;
  ForElementType<FSetElementId> *pFVar4;
  TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ForElementType<FSetElementId> *pFVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar13;
  ulonglong uVar14;
  uint *puVar15;
  uint local_68;
  uint uStack_64;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> local_40;
  
  piVar1 = &this->HashSize;
  uVar12 = 0;
  uVar8 = *piVar1;
  this_00 = &this->Hash;
  if ((uVar8 != 0) &&
     (TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>::
      ResizeAllocation(this_00,0,uVar8,4), 0 < (int)uVar8)) {
    uVar14 = (ulonglong)uVar8;
    uVar10 = uVar12;
    do {
      pFVar4 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
      pFVar9 = this_00;
      if (pFVar4 != (ForElementType<FSetElementId> *)0x0) {
        pFVar9 = pFVar4;
      }
      uVar6 = (longlong)(int)uVar8 - 1U & uVar10;
      uVar10 = uVar10 + 1;
      puVar2 = pFVar9->InlineData + uVar6 * 4;
      puVar2[0] = 0xff;
      puVar2[1] = 0xff;
      puVar2[2] = 0xff;
      puVar2[3] = 0xff;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  if (*piVar1 != 0) {
    local_40.Array =
         (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
         &(this->Elements).field_0x190;
    local_68 = 0;
    uVar8 = *(uint *)&(this->Elements).field_0x1a0;
    uStack_64 = 1;
    uStack_54 = 0;
    uStack_50 = 0;
    if (uVar8 != 0) {
      puVar15 = *(uint **)&(this->Elements).field_0x198;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)local_40.Array;
      }
      uVar3 = *puVar15;
      uVar10 = uVar12;
      while (uVar3 == 0) {
        iVar11 = (int)uVar12;
        uStack_50 = (int)uVar10 + 0x20;
        uVar10 = (ulonglong)uStack_50;
        local_68 = iVar11 + 1;
        uVar12 = (ulonglong)local_68;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_68)
        goto LAB_14a93887b;
        uVar3 = puVar15[(longlong)iVar11 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      uVar12 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uStack_54 = (int)lVar7 + -1 + uStack_50;
      uVar12 = (ulonglong)uStack_54;
      if ((int)uVar8 < (int)uStack_54) {
LAB_14a93887b:
        uVar12 = (ulonglong)uVar8;
        uStack_54 = uVar8;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = uStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = uStack_50;
    if ((int)uVar12 < (int)uVar8) {
      do {
        pTVar5 = *(TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                   **)&(this->Elements).field_0x180;
        pTVar13 = this;
        if (pTVar5 != (TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar13 = pTVar5;
        }
        lVar7 = (longlong)(int)uVar12;
        uVar10 = *(ulonglong *)(&(pTVar13->Elements).field_0x0 + lVar7 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar8 = (uVar8 >> 0x10 ^ uVar8) & *piVar1 - 1U;
        *(uint *)(&(pTVar13->Elements).field_0x14 + lVar7 * 0x18) = uVar8;
        pFVar4 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
        pFVar9 = this_00;
        if (pFVar4 != (ForElementType<FSetElementId> *)0x0) {
          pFVar9 = pFVar4;
        }
        uVar10 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(&(pTVar13->Elements).field_0x10 + lVar7 * 0x18) =
             *(undefined4 *)(pFVar9->InlineData + uVar10 * 4);
        *(int *)(pFVar9->InlineData + uVar10 * 4) = (int)uVar12;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
                  (&local_40);
        uVar12 = (ulonglong)(uint)local_40.CurrentBitIndex;
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14a938960

void __thiscall
TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::Rehash(TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
         *this)

{
  int *piVar1;
  ForElementType<FSetElementId> *this_00;
  uchar *puVar2;
  uint uVar3;
  ForElementType<FSetElementId> *pFVar4;
  TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ForElementType<FSetElementId> *pFVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar13;
  ulonglong uVar14;
  uint *puVar15;
  uint local_68;
  uint uStack_64;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> local_40;
  
  piVar1 = &this->HashSize;
  uVar12 = 0;
  uVar8 = *piVar1;
  this_00 = &this->Hash;
  if ((uVar8 != 0) &&
     (TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>::
      ResizeAllocation(this_00,0,uVar8,4), 0 < (int)uVar8)) {
    uVar14 = (ulonglong)uVar8;
    uVar10 = uVar12;
    do {
      pFVar4 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
      pFVar9 = this_00;
      if (pFVar4 != (ForElementType<FSetElementId> *)0x0) {
        pFVar9 = pFVar4;
      }
      uVar6 = (longlong)(int)uVar8 - 1U & uVar10;
      uVar10 = uVar10 + 1;
      puVar2 = pFVar9->InlineData + uVar6 * 4;
      puVar2[0] = 0xff;
      puVar2[1] = 0xff;
      puVar2[2] = 0xff;
      puVar2[3] = 0xff;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  if (*piVar1 != 0) {
    local_40.Array =
         (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
         &(this->Elements).field_0x310;
    local_68 = 0;
    uVar8 = *(uint *)&(this->Elements).field_0x320;
    uStack_64 = 1;
    uStack_54 = 0;
    uStack_50 = 0;
    if (uVar8 != 0) {
      puVar15 = *(uint **)&(this->Elements).field_0x318;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)local_40.Array;
      }
      uVar3 = *puVar15;
      uVar10 = uVar12;
      while (uVar3 == 0) {
        iVar11 = (int)uVar12;
        uStack_50 = (int)uVar10 + 0x20;
        uVar10 = (ulonglong)uStack_50;
        local_68 = iVar11 + 1;
        uVar12 = (ulonglong)local_68;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_68)
        goto LAB_14a938a8b;
        uVar3 = puVar15[(longlong)iVar11 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      uVar12 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uStack_54 = (int)lVar7 + -1 + uStack_50;
      uVar12 = (ulonglong)uStack_54;
      if ((int)uVar8 < (int)uStack_54) {
LAB_14a938a8b:
        uVar12 = (ulonglong)uVar8;
        uStack_54 = uVar8;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = uStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = uStack_50;
    if ((int)uVar12 < (int)uVar8) {
      do {
        pTVar5 = *(TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                   **)&(this->Elements).field_0x300;
        pTVar13 = this;
        if (pTVar5 != (TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar13 = pTVar5;
        }
        lVar7 = (longlong)(int)uVar12;
        uVar10 = *(ulonglong *)(&(pTVar13->Elements).field_0x0 + lVar7 * 0x30);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar8 = (uVar8 >> 0x10 ^ uVar8) & *piVar1 - 1U;
        *(uint *)(&(pTVar13->Elements).field_0x2c + lVar7 * 0x30) = uVar8;
        pFVar4 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
        pFVar9 = this_00;
        if (pFVar4 != (ForElementType<FSetElementId> *)0x0) {
          pFVar9 = pFVar4;
        }
        uVar10 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(&(pTVar13->Elements).field_0x28 + lVar7 * 0x30) =
             *(undefined4 *)(pFVar9->InlineData + uVar10 * 4);
        *(int *)(pFVar9->InlineData + uVar10 * 4) = (int)uVar12;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
                  (&local_40);
        uVar12 = (ulonglong)(uint)local_40.CurrentBitIndex;
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14a938b70

void __thiscall
TSet<TTuple<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::Rehash(void *this)

{
  uint *puVar1;
  ForElementType<FSetElementId> *this_00;
  uchar *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ForElementType<FSetElementId> *pFVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  void *pvVar10;
  ulonglong uVar11;
  longlong lVar12;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar13;
  uint local_68;
  uint uStack_64;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> local_40;
  
  puVar1 = (uint *)((longlong)this + 0x340);
  uVar9 = 0;
  uVar5 = *puVar1;
  this_00 = (ForElementType<FSetElementId> *)((longlong)this + 0x330);
  if ((uVar5 != 0) &&
     (TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>::
      ResizeAllocation(this_00,0,uVar5,4), 0 < (int)uVar5)) {
    uVar11 = (ulonglong)uVar5;
    uVar7 = uVar9;
    do {
      pFVar6 = this_00;
      if (*(ForElementType<FSetElementId> **)((longlong)this + 0x338) !=
          (ForElementType<FSetElementId> *)0x0) {
        pFVar6 = *(ForElementType<FSetElementId> **)((longlong)this + 0x338);
      }
      uVar4 = (longlong)(int)uVar5 - 1U & uVar7;
      uVar7 = uVar7 + 1;
      puVar2 = pFVar6->InlineData + uVar4 * 4;
      puVar2[0] = 0xff;
      puVar2[1] = 0xff;
      puVar2[2] = 0xff;
      puVar2[3] = 0xff;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (*puVar1 != 0) {
    local_40.Array =
         (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)((longlong)this + 0x310);
    local_68 = 0;
    uVar5 = *(uint *)((longlong)this + 800);
    uStack_64 = 1;
    uStack_54 = 0;
    uStack_50 = 0;
    if (uVar5 != 0) {
      pTVar13 = *(TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> **)
                 ((longlong)this + 0x318);
      if (*(TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> **)
           ((longlong)this + 0x318) ==
          (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
        pTVar13 = local_40.Array;
      }
      uVar3 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
      uVar7 = uVar9;
      while (uVar3 == 0) {
        iVar8 = (int)uVar9;
        uStack_50 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_50;
        local_68 = iVar8 + 1;
        uVar9 = (ulonglong)local_68;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_68)
        goto LAB_14a938c9b;
        uVar3 = *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar8 * 4 + 4);
      }
      uStack_64 = -uVar3 & uVar3;
      uVar9 = (ulonglong)uStack_64 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uStack_54 = (int)lVar12 + -1 + uStack_50;
      uVar9 = (ulonglong)uStack_54;
      if ((int)uVar5 < (int)uStack_54) {
LAB_14a938c9b:
        uVar9 = (ulonglong)uVar5;
        uStack_54 = uVar5;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = uStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = uStack_50;
    if ((int)uVar9 < (int)uVar5) {
      do {
        pvVar10 = this;
        if (*(void **)((longlong)this + 0x300) != (void *)0x0) {
          pvVar10 = *(void **)((longlong)this + 0x300);
        }
        lVar12 = (longlong)(int)uVar9 * 0xc0;
        uVar5 = ((uint)(*(ulonglong *)(lVar12 + (longlong)pvVar10) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar12 + (longlong)pvVar10) >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar5 = (uVar5 >> 0x10 ^ uVar5) & *puVar1 - 1;
        *(uint *)(lVar12 + 0xbc + (longlong)pvVar10) = uVar5;
        pFVar6 = this_00;
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x338) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar6 = *(ForElementType<FSetElementId> **)((longlong)this + 0x338);
        }
        uVar7 = (longlong)(int)*puVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(lVar12 + 0xb8 + (longlong)pvVar10) =
             *(undefined4 *)(pFVar6->InlineData + uVar7 * 4);
        *(int *)(pFVar6->InlineData + uVar7 * 4) = (int)uVar9;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
                  (&local_40);
        uVar9 = (ulonglong)(uint)local_40.CurrentBitIndex;
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14a938d90

void __thiscall
TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::Rehash(TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
         *this)

{
  int *piVar1;
  ForElementType<FSetElementId> *this_00;
  uchar *puVar2;
  uint uVar3;
  ForElementType<FSetElementId> *pFVar4;
  TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> *pFVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  uint local_68;
  uint uStack_64;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> local_40;
  
  piVar1 = &this->HashSize;
  uVar11 = 0;
  uVar7 = *piVar1;
  this_00 = &this->Hash;
  if ((uVar7 != 0) &&
     (TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>::
      ResizeAllocation(this_00,0,uVar7,4), 0 < (int)uVar7)) {
    uVar13 = (ulonglong)uVar7;
    uVar9 = uVar11;
    do {
      pFVar4 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
      pFVar8 = this_00;
      if (pFVar4 != (ForElementType<FSetElementId> *)0x0) {
        pFVar8 = pFVar4;
      }
      uVar6 = (longlong)(int)uVar7 - 1U & uVar9;
      uVar9 = uVar9 + 1;
      puVar2 = pFVar8->InlineData + uVar6 * 4;
      puVar2[0] = 0xff;
      puVar2[1] = 0xff;
      puVar2[2] = 0xff;
      puVar2[3] = 0xff;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (*piVar1 != 0) {
    local_40.Array =
         (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
         &(this->Elements).field_0xbd0;
    local_68 = 0;
    uVar7 = *(uint *)&(this->Elements).field_0xbe0;
    uStack_64 = 1;
    uStack_54 = 0;
    uStack_50 = 0;
    if (uVar7 != 0) {
      puVar15 = *(uint **)&(this->Elements).field_0xbd8;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)local_40.Array;
      }
      uVar3 = *puVar15;
      uVar9 = uVar11;
      while (uVar3 == 0) {
        iVar10 = (int)uVar11;
        uStack_50 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_50;
        local_68 = iVar10 + 1;
        uVar11 = (ulonglong)local_68;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_68)
        goto LAB_14a938ebb;
        uVar3 = puVar15[(longlong)iVar10 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      uVar11 = (ulonglong)uStack_64 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uStack_54 = (int)lVar14 + -1 + uStack_50;
      uVar11 = (ulonglong)uStack_54;
      if ((int)uVar7 < (int)uStack_54) {
LAB_14a938ebb:
        uVar11 = (ulonglong)uVar7;
        uStack_54 = uVar7;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = uStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = uStack_50;
    if ((int)uVar11 < (int)uVar7) {
      do {
        pTVar5 = *(TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                   **)&(this->Elements).field_0xbc0;
        pTVar12 = this;
        if (pTVar5 != (TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar12 = pTVar5;
        }
        lVar14 = (longlong)(int)uVar11 * 0x2f0;
        uVar9 = *(ulonglong *)(&(pTVar12->Elements).field_0x0 + lVar14);
        uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar7 = (uVar7 >> 0x10 ^ uVar7) & *piVar1 - 1U;
        *(uint *)(&(pTVar12->Elements).field_0x2ec + lVar14) = uVar7;
        pFVar4 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
        pFVar8 = this_00;
        if (pFVar4 != (ForElementType<FSetElementId> *)0x0) {
          pFVar8 = pFVar4;
        }
        uVar9 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(&(pTVar12->Elements).field_0x2e8 + lVar14) =
             *(undefined4 *)(pFVar8->InlineData + uVar9 * 4);
        *(int *)(pFVar8->InlineData + uVar9 * 4) = (int)uVar11;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
                  (&local_40);
        uVar11 = (ulonglong)(uint)local_40.CurrentBitIndex;
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14a938fb0

void __thiscall
TSet<TTuple<FName,FBoneContainer>,TDefaultMapHashableKeyFuncs<FName,FBoneContainer,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,FBoneContainer>,TDefaultMapHashableKeyFuncs<FName,FBoneContainer,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  undefined8 *puVar9;
  uint *puVar10;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14a939087;
        uVar5 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14a939087:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar9 = (undefined8 *)
                 ((longlong)local_40.CurrentBitIndex * 0x168 + *(longlong *)&this->Elements);
        uVar3 = *puVar9;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar9 + 0x164) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 0x2c) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14a939160

void __thiscall
TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::Rehash(TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
         *this)

{
  int *piVar1;
  ForElementType<FSetElementId> *this_00;
  uchar *puVar2;
  uint uVar3;
  ForElementType<FSetElementId> *pFVar4;
  TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ForElementType<FSetElementId> *pFVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar15;
  ulonglong uVar16;
  uint *puVar17;
  uint local_68;
  uint uStack_64;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> local_40;
  
  piVar1 = &this->HashSize;
  uVar13 = 0;
  uVar8 = *piVar1;
  this_00 = &this->Hash;
  if ((uVar8 != 0) &&
     (TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>::
      ResizeAllocation(this_00,0,uVar8,4), 0 < (int)uVar8)) {
    uVar16 = (ulonglong)uVar8;
    uVar11 = uVar13;
    do {
      pFVar4 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
      pFVar10 = this_00;
      if (pFVar4 != (ForElementType<FSetElementId> *)0x0) {
        pFVar10 = pFVar4;
      }
      uVar9 = (longlong)(int)uVar8 - 1U & uVar11;
      uVar11 = uVar11 + 1;
      puVar2 = pFVar10->InlineData + uVar9 * 4;
      puVar2[0] = 0xff;
      puVar2[1] = 0xff;
      puVar2[2] = 0xff;
      puVar2[3] = 0xff;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  if (*piVar1 != 0) {
    local_40.Array =
         (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
         &(this->Elements).field_0x910;
    local_68 = 0;
    uVar8 = *(uint *)&(this->Elements).field_0x920;
    uStack_64 = 1;
    uStack_54 = 0;
    uStack_50 = 0;
    if (uVar8 != 0) {
      puVar17 = *(uint **)&(this->Elements).field_0x918;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)local_40.Array;
      }
      uVar3 = *puVar17;
      uVar11 = uVar13;
      while (uVar3 == 0) {
        iVar12 = (int)uVar13;
        uStack_50 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_50;
        local_68 = iVar12 + 1;
        uVar13 = (ulonglong)local_68;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_68)
        goto LAB_14a93928b;
        uVar3 = puVar17[(longlong)iVar12 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      uVar13 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uStack_54 = (int)lVar7 + -1 + uStack_50;
      uVar13 = (ulonglong)uStack_54;
      if ((int)uVar8 < (int)uStack_54) {
LAB_14a93928b:
        uVar13 = (ulonglong)uVar8;
        uStack_54 = uVar8;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = uStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = uStack_50;
    if ((int)uVar13 < (int)uVar8) {
      do {
        pTVar5 = *(TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                   **)&(this->Elements).field_0x900;
        pTVar15 = this;
        if (pTVar5 != (TSet<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar15 = pTVar5;
        }
        puVar14 = (undefined8 *)(&(pTVar15->Elements).field_0x0 + (longlong)(int)uVar13 * 0x120);
        uVar6 = *puVar14;
        uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar6);
        uVar8 = *piVar1 - 1U & uVar8 + (int)((ulonglong)uVar6 >> 0x20);
        *(uint *)((longlong)puVar14 + 0x11c) = uVar8;
        pFVar4 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
        pFVar10 = this_00;
        if (pFVar4 != (ForElementType<FSetElementId> *)0x0) {
          pFVar10 = pFVar4;
        }
        uVar11 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(puVar14 + 0x23) = *(undefined4 *)(pFVar10->InlineData + uVar11 * 4);
        *(int *)(pFVar10->InlineData + uVar11 * 4) = (int)uVar13;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
                  (&local_40);
        uVar13 = (ulonglong)(uint)local_40.CurrentBitIndex;
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14a939360

void __thiscall
TSet<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::Rehash(TSet<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar7 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14a93943c;
        uVar7 = puVar9[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14a93943c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (undefined8 *)
                 ((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        uVar7 = ((uint)((ulonglong)*puVar8 >> 0x20) ^ (uint)*puVar8) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0xc) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// RehashOrLink @ 14a939500

void __thiscall
TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
::RehashOrLink(TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
               *this,uint param_1,TSparseSetElement<TTuple<FName,int>_> *param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *(int *)&(this->Elements).field_0x58 - *(int *)&(this->Elements).field_0x7c;
  uVar6 = 1;
  if (uVar5 >> 1 != 0) {
    uVar6 = uVar5 >> 1;
  }
  uVar2 = (ulonglong)(uVar6 - 1) * 2 + 1;
  lVar1 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  uVar4 = 1 << ((byte)lVar1 & 0x1f);
  uVar6 = 2;
  if ((1 < uVar4) && (uVar6 = uVar4, uVar5 < 4)) {
    uVar6 = 2;
  }
  if ((0 < (int)uVar5) && (this->HashSize < (int)uVar6)) {
    this->HashSize = uVar6;
    Rehash(this);
    return;
  }
  uVar6 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0x10 = uVar6;
  FVar3 = (this->Hash).SecondaryData;
  if (FVar3 == (ForElementType<FSetElementId>)0x0) {
    FVar3 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar2 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
  *(undefined4 *)&param_2->field_0xc = *(undefined4 *)((longlong)FVar3 + uVar2 * 4);
  *(int *)((longlong)FVar3 + uVar2 * 4) = param_3;
  return;
}

// Reserve @ 14a93a440

void __thiscall
TSet<TTuple<FName,FBoneContainer>,TDefaultMapHashableKeyFuncs<FName,FBoneContainer,0>,FDefaultSetAllocator>
::Reserve(TSet<TTuple<FName,FBoneContainer>,TDefaultMapHashableKeyFuncs<FName,FBoneContainer,0>,FDefaultSetAllocator>
          *this,int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  if ((uint)(*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) <
      (uint)param_1) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)param_1);
    }
    TSparseArrayBase<360,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<360,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,param_1);
    if ((uint)param_1 < 4) {
      iVar3 = 1;
    }
    else {
      uVar1 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar3 = 1 << ((byte)lVar2 & 0x1f);
    }
    if ((this->HashSize == 0) || (this->HashSize < iVar3)) {
      this->HashSize = iVar3;
      Rehash(this);
    }
  }
  return;
}

// Reset @ 14a93a8a0

void __thiscall
TSet<TTuple<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::Reset(void *this)

{
  if (*(int *)((longlong)this + 0x308) != *(int *)((longlong)this + 0x32c)) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
    ::DestroyElements(this,0,*(int *)((longlong)this + 0x308));
    *(undefined4 *)((longlong)this + 0x308) = 0;
    if (*(int *)((longlong)this + 0x30c) < 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_>_>
                (0xc0,8,0,this,0,(int *)((longlong)this + 0x30c));
    }
    *(undefined4 *)((longlong)this + 0x32c) = 0;
    *(undefined4 *)((longlong)this + 800) = 0;
    *(undefined4 *)((longlong)this + 0x328) = 0xffffffff;
  }
  return;
}

// Reset @ 14a93a930

void __thiscall
TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::Reset(TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
        *this)

{
  undefined1 *puVar1;
  
  if (*(int *)&(this->Elements).field_0xbc8 != *(int *)&(this->Elements).field_0xbec) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
    ::DestroyElements(&this->Elements,0,*(int *)&(this->Elements).field_0xbc8);
    puVar1 = &(this->Elements).field_0xbcc;
    *(undefined4 *)&(this->Elements).field_0xbc8 = 0;
    if (*(int *)puVar1 < 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_>_>_>
                (0x2f0,8,0,
                 (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_>_> *)this,0
                 ,(int *)puVar1);
    }
    *(undefined4 *)&(this->Elements).field_0xbec = 0;
    *(undefined4 *)&(this->Elements).field_0xbe0 = 0;
    *(undefined4 *)&(this->Elements).field_0xbe8 = 0xffffffff;
  }
  return;
}

// Reset @ 14a93a9c0

void __thiscall
TSet<TTuple<FName,FBoneContainer>,TDefaultMapHashableKeyFuncs<FName,FBoneContainer,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<FName,FBoneContainer>,TDefaultMapHashableKeyFuncs<FName,FBoneContainer,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<FName,FBoneContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,*(int *)&(this->Elements).field_0x8);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x168,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// TryReplaceExisting @ 14a941930

bool __thiscall
TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::TryReplaceExisting
          (TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
           *this,uint param_1,
          TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar9;
  undefined4 *puVar10;
  ForElementType<FSetElementId> *pFVar11;
  int iVar12;
  void *_Dst;
  undefined1 *puVar13;
  uint uVar14;
  bool bVar15;
  
  iVar12 = *(int *)&(this->Elements).field_0xbc8;
  bVar15 = false;
  iVar2 = *(int *)&(this->Elements).field_0xbec;
  if ((iVar12 - iVar2 != 1) && (iVar12 != iVar2)) {
    pFVar11 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
    if (pFVar11 == (ForElementType<FSetElementId> *)0x0) {
      pFVar11 = &this->Hash;
    }
    iVar12 = *(int *)((longlong)pFVar11->InlineData + (ulonglong)(this->HashSize - 1U & param_1) * 4
                     );
    if (iVar12 != -1) {
      pTVar3 = *(TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                 **)&(this->Elements).field_0xbc0;
      do {
        pTVar9 = this;
        if (pTVar3 != (TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar9 = pTVar3;
        }
        if (*(longlong *)(&(pTVar9->Elements).field_0x0 + (longlong)iVar12 * 0x2f0) ==
            *(longlong *)param_2) {
          bVar15 = iVar12 != -1;
          if (bVar15) {
            pTVar9 = this;
            if (pTVar3 != (TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                           *)0x0) {
              pTVar9 = pTVar3;
            }
            _Dst = &(pTVar9->Elements).field_0x0 + (longlong)iVar12 * 0x2f0;
            *(undefined4 *)((longlong)_Dst + 0x2e0) = 0;
            TSparseArray<TSparseSetElement<TTuple<int,UE::PoseSearch::FSearchResult>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<int,UE::PoseSearch::FSearchResult>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                      ((TSparseArray<TSparseSetElement<TTuple<int,UE::PoseSearch::FSearchResult>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                        *)((longlong)_Dst + 8));
            memmove(_Dst,param_2,0x2e8);
            pTVar3 = *(TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       **)&(this->Elements).field_0xbc0;
            puVar1 = &(this->Elements).field_0xbd0;
            iVar2 = *param_3;
            pTVar9 = this;
            if (pTVar3 != (TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                           *)0x0) {
              pTVar9 = pTVar3;
            }
            bVar5 = (byte)iVar2 & 0x1f;
            uVar14 = 1 << bVar5 | 1U >> 0x20 - bVar5;
            if (((iVar2 < 0) || (*(int *)&(this->Elements).field_0xbe0 <= iVar2)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            puVar13 = *(undefined1 **)&(this->Elements).field_0xbd8;
            if (puVar13 == (undefined1 *)0x0) {
              puVar13 = puVar1;
            }
            if (((*(uint *)(puVar13 + (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4) &
                 uVar14) == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            if (*(int *)&(this->Elements).field_0xbec != 0) {
              *(int *)(&(pTVar9->Elements).field_0x0 +
                      (longlong)*(int *)&(this->Elements).field_0xbe8 * 0x2f0) = iVar2;
            }
            uVar8 = 0xffffffff;
            puVar10 = (undefined4 *)(&(pTVar9->Elements).field_0x0 + (longlong)iVar2 * 0x2f0);
            *puVar10 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0xbec) {
              uVar8 = *(undefined4 *)&(this->Elements).field_0xbe8;
            }
            puVar10[1] = uVar8;
            puVar13 = &(this->Elements).field_0xbec;
            *(int *)puVar13 = *(int *)puVar13 + 1;
            *(int *)&(this->Elements).field_0xbe8 = iVar2;
            if (((iVar2 < 0) || (*(int *)&(this->Elements).field_0xbe0 <= iVar2)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            puVar13 = *(undefined1 **)&(this->Elements).field_0xbd8;
            if (puVar13 == (undefined1 *)0x0) {
              puVar13 = puVar1;
            }
            *(uint *)(puVar13 + (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4) =
                 *(uint *)(puVar13 + (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4) &
                 ~uVar14;
            *param_3 = iVar12;
          }
          break;
        }
        pTVar9 = this;
        if (pTVar3 != (TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar9 = pTVar3;
        }
        iVar12 = *(int *)(&(pTVar9->Elements).field_0x2e8 + (longlong)iVar12 * 0x2f0);
      } while (iVar12 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// TryReplaceExisting @ 14a941bc0

bool __thiscall
TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
::TryReplaceExisting
          (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           *this,uint param_1,TSparseSetElement<TTuple<FName,int>_> *param_2,int *param_3,
          bool *param_4)

{
  int iVar1;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar2;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  
  bVar6 = false;
  iVar4 = *(int *)&(this->Elements).field_0x58;
  iVar1 = *(int *)&(this->Elements).field_0x7c;
  if ((iVar4 - iVar1 != 1) && (iVar4 != iVar1)) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar4 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar4 != -1) {
      pTVar2 = *(TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 **)&(this->Elements).field_0x50;
      do {
        pTVar3 = this;
        if (pTVar2 != (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                       *)0x0) {
          pTVar3 = pTVar2;
        }
        if (*(longlong *)((longlong)&pTVar3->Hash + (longlong)iVar4 * 0x14 + -0x80) ==
            *(longlong *)param_2) {
          bVar6 = iVar4 != -1;
          if (bVar6) {
            pTVar3 = this;
            if (pTVar2 != (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                           *)0x0) {
              pTVar3 = pTVar2;
            }
            memmove((void *)((longlong)&pTVar3->Hash + (longlong)iVar4 * 0x14 + -0x80),param_2,0xc);
            TSparseArrayBase<20,4,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<20,4,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                        *)this,*param_3,1);
            *param_3 = iVar4;
          }
          break;
        }
        pTVar3 = this;
        if (pTVar2 != (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                       *)0x0) {
          pTVar3 = pTVar2;
        }
        iVar4 = *(int *)((longlong)&pTVar3->Hash + (longlong)iVar4 * 0x14 + -0x74);
      } while (iVar4 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar6;
  }
  return bVar6;
}

// TryReplaceExisting @ 14a941cd0

bool __thiscall
TSet<TTuple<FName,FBoneContainer>,TDefaultMapHashableKeyFuncs<FName,FBoneContainer,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FName,FBoneContainer>,TDefaultMapHashableKeyFuncs<FName,FBoneContainer,0>,FDefaultSetAllocator>
           *this,uint param_1,TSparseSetElement<TTuple<FName,FBoneContainer>_> *param_2,int *param_3
          ,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  void *_Dst;
  int iVar12;
  ForElementType<FSetElementId> FVar13;
  uint uVar14;
  bool bVar15;
  
  bVar15 = false;
  iVar12 = *(int *)&(this->Elements).field_0x8;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar12 - iVar3 != 1) && (iVar12 != iVar3)) {
    FVar13 = (this->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar12 = *(int *)((longlong)FVar13 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar12 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar12 * 0x168 + lVar4) == *(longlong *)param_2) {
          bVar15 = iVar12 != -1;
          if (bVar15) {
            _Dst = (void *)((longlong)iVar12 * 0x168 + lVar4);
            FBoneContainer::~FBoneContainer((FBoneContainer *)((longlong)_Dst + 8));
            memmove(_Dst,param_2,0x160);
            iVar3 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar4 = *(longlong *)&this->Elements;
            bVar6 = (byte)iVar3 & 0x1f;
            uVar14 = 1 << bVar6 | 1U >> 0x20 - bVar6;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            if (((*(uint *)(puVar10 + lVar2) & uVar14) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x168 + lVar4) = iVar3;
            }
            uVar9 = 0xffffffff;
            puVar11 = (undefined4 *)((longlong)iVar3 * 0x168 + lVar4);
            *puVar11 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar9 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar11[1] = uVar9;
            puVar10 = &(this->Elements).field_0x34;
            *(int *)puVar10 = *(int *)puVar10 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar3;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar14;
            *param_3 = iVar12;
          }
          break;
        }
        iVar12 = *(int *)((longlong)iVar12 * 0x168 + 0x160 + lVar4);
      } while (iVar12 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// TryReplaceExisting @ 14a941f00

bool __thiscall
TSet<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_> *param_2,int *param_3,
          bool *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  FWeakObjectPtr FVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  ForElementType<FSetElementId> FVar13;
  uint uVar14;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_48;
  longlong local_40;
  
  iVar2 = *(int *)&(this->Elements).field_0x8;
  bVar8 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if (iVar2 - iVar3 != 1) {
    FVar4.ObjectIndex = *(int *)&param_2->field_0x0;
    FVar4.ObjectSerialNumber = *(int *)&param_2->field_0x4;
    if (iVar2 == iVar3) {
      bVar8 = false;
    }
    else {
      FVar13 = (this->Hash).SecondaryData;
      if (FVar13 == (ForElementType<FSetElementId>)0x0) {
        FVar13 = (ForElementType<FSetElementId>)&this->Hash;
      }
      for (iVar2 = *(int *)((longlong)FVar13 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
          iVar2 != -1; iVar2 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar2 * 0x10))
      {
        local_48 = *(FWeakObjectPtr *)(*(longlong *)&this->Elements + (longlong)iVar2 * 0x10);
        local_res8 = FVar4;
        bVar8 = TWeakObjectPtr<UActorComponent_const_,FWeakObjectPtr>::
                UEOpEquals<UActorComponent_const_,bool>
                          ((TWeakObjectPtr<UActorComponent_const_,FWeakObjectPtr> *)&local_48,
                           (TWeakObjectPtr<UActorComponent_const_,FWeakObjectPtr> *)&local_res8);
        if (bVar8) {
          bVar8 = iVar2 != -1;
          if (bVar8) {
            puVar1 = &(this->Elements).field_0x10;
            *(undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar2 * 0x10) =
                 *(undefined8 *)param_2;
            iVar3 = *param_3;
            lVar5 = *(longlong *)&this->Elements;
            bVar7 = (byte)iVar3 & 0x1f;
            uVar14 = 1 << bVar7 | 1U >> 0x20 - bVar7;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              uVar10 = (*pcVar6)();
              return (bool)uVar10;
            }
            puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
            local_40 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = puVar1;
            }
            if (((*(uint *)(puVar12 + local_40) & uVar14) == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              uVar10 = (*pcVar6)();
              return (bool)uVar10;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar5 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x10) = iVar3;
            }
            uVar11 = 0xffffffff;
            *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x10) = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar11 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            *(undefined4 *)(lVar5 + 4 + (longlong)iVar3 * 0x10) = uVar11;
            puVar12 = &(this->Elements).field_0x34;
            *(int *)puVar12 = *(int *)puVar12 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar3;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              uVar10 = (*pcVar6)();
              return (bool)uVar10;
            }
            puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = puVar1;
            }
            *(uint *)(puVar12 + local_40) = *(uint *)(puVar12 + local_40) & ~uVar14;
            *param_3 = iVar2;
          }
          goto LAB_14a941fb2;
        }
      }
      bVar8 = false;
    }
  }
LAB_14a941fb2:
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar8;
  }
  return bVar8;
}

// UnhashElements @ 14a942150

void __thiscall
TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::UnhashElements(TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar5;
  code *pcVar6;
  ForElementType<FSetElementId> *pFVar7;
  bool bVar8;
  longlong lVar9;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> *local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> local_60;
  int local_40;
  
  local_res18 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId> *)0x0) {
    local_res18 = &this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x88 - *(int *)&(this->Elements).field_0xac;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset(local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  puVar1 = &(this->Elements).field_0x90;
  iVar3 = *(int *)&(this->Elements).field_0xa0;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Elements).field_0x98;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar11 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar9 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14a94225b;
      uVar11 = puVar14[lVar9 + 1];
    }
    uStack_84 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14a94225b:
      iStack_74 = iVar3;
    }
  }
  uVar11 = *(uint *)&(this->Elements).field_0xa0;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar12 = (int)uVar11 >> 5;
  uVar15 = uVar11 & 0xffffffe0;
  local_60.Array = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar7 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0xa0;
  if (uVar11 != uVar4) {
    puVar13 = *(undefined1 **)&(this->Elements).field_0x98;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14a942350;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_14a942350:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x88 - *(int *)&(this->Elements).field_0xac != local_40) {
      `TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar11) &&
       (local_60.Array == (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)puVar1))
    break;
    pTVar5 = *(TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
               **)&(this->Elements).field_0x80;
    pTVar10 = this;
    if (pTVar5 != (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                   *)0x0) {
      pTVar10 = pTVar5;
    }
    *(int *)((longlong)pFVar7->InlineData +
            (longlong)
            *(int *)(&(pTVar10->Elements).field_0xc + (longlong)local_60.CurrentBitIndex * 0x10) * 4
            ) = -1;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
              (&local_60);
  }
  return;
}

// UnhashElements @ 14a942400

void __thiscall
TSet<TTuple<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::UnhashElements(void *this)

{
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  void *pvVar6;
  bool bVar7;
  longlong lVar8;
  void *pvVar9;
  uint uVar10;
  int iVar11;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  void *local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> local_60;
  int local_40;
  
  iVar3 = *(int *)((longlong)this + 0x340);
  local_res18 = *(void **)((longlong)this + 0x338);
  if (*(void **)((longlong)this + 0x338) == (void *)0x0) {
    local_res18 = (void *)((longlong)this + 0x330);
  }
  local_40 = *(int *)((longlong)this + 0x308) - *(int *)((longlong)this + 0x32c);
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset(local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  pTVar1 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
           ((longlong)this + 0x310);
  iVar3 = *(int *)((longlong)this + 800);
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    pTVar12 = *(TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> **)
               ((longlong)this + 0x318);
    if (*(TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> **)((longlong)this + 0x318)
        == (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar10 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14a94250b;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uStack_84 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14a94250b:
      iStack_74 = iVar3;
    }
  }
  uVar10 = *(uint *)((longlong)this + 800);
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar11 = (int)uVar10 >> 5;
  uVar13 = uVar10 & 0xffffffe0;
  local_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pvVar6 = local_res18;
  uVar4 = *(uint *)((longlong)this + 800);
  if (uVar10 != uVar4) {
    pTVar12 = *(TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> **)
               ((longlong)this + 0x318);
    if (*(TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> **)((longlong)this + 0x318)
        == (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14a942600;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_14a942600:
  while( true ) {
    if (*(int *)((longlong)this + 0x308) - *(int *)((longlong)this + 0x32c) != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar10) && (local_60.Array == pTVar1)) break;
    pvVar9 = this;
    if (*(void **)((longlong)this + 0x300) != (void *)0x0) {
      pvVar9 = *(void **)((longlong)this + 0x300);
    }
    *(undefined4 *)
     ((longlong)pvVar6 +
     (longlong)*(int *)((longlong)local_60.CurrentBitIndex * 0xc0 + 0xbc + (longlong)pvVar9) * 4) =
         0xffffffff;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
              (&local_60);
  }
  return;
}

// UnhashElements @ 14a9426b0

void __thiscall
TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
::UnhashElements(TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar5;
  code *pcVar6;
  ForElementType<FSetElementId> *pFVar7;
  bool bVar8;
  longlong lVar9;
  TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> *local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> local_60;
  int local_40;
  
  local_res18 = (ForElementType<FSetElementId> *)(this->Hash).SecondaryData.Data;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId> *)0x0) {
    local_res18 = &this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0xbc8 - *(int *)&(this->Elements).field_0xbec;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset(local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  puVar1 = &(this->Elements).field_0xbd0;
  iVar3 = *(int *)&(this->Elements).field_0xbe0;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Elements).field_0xbd8;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar11 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar9 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14a9427bb;
      uVar11 = puVar14[lVar9 + 1];
    }
    uStack_84 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14a9427bb:
      iStack_74 = iVar3;
    }
  }
  uVar11 = *(uint *)&(this->Elements).field_0xbe0;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar12 = (int)uVar11 >> 5;
  uVar15 = uVar11 & 0xffffffe0;
  local_60.Array = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar7 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0xbe0;
  if (uVar11 != uVar4) {
    puVar13 = *(undefined1 **)&(this->Elements).field_0xbd8;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14a9428b0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_14a9428b0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0xbc8 - *(int *)&(this->Elements).field_0xbec != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar11) &&
       (local_60.Array == (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)puVar1))
    break;
    pTVar5 = *(TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
               **)&(this->Elements).field_0xbc0;
    pTVar10 = this;
    if (pTVar5 != (TSet<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>,0>,TInlineSetAllocator<4,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                   *)0x0) {
      pTVar10 = pTVar5;
    }
    *(int *)((longlong)pFVar7->InlineData +
            (longlong)
            *(int *)(&(pTVar10->Elements).field_0x2ec + (longlong)local_60.CurrentBitIndex * 0x2f0)
            * 4) = -1;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
              (&local_60);
  }
  return;
}

// UnhashElements @ 14a942960

void __thiscall
TSet<TTuple<FName,FBoneContainer>,TDefaultMapHashableKeyFuncs<FName,FBoneContainer,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FName,FBoneContainer>,TDefaultMapHashableKeyFuncs<FName,FBoneContainer,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14a942a5b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14a942a5b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14a942b50;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14a942b50:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FBoneContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x168 + 0x164 + *(longlong *)&this->Elements) * 4
     ) = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

