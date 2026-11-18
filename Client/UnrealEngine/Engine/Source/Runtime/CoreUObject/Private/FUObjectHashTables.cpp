// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// operator() @ 142296900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FUObjectHashTables::ShrinkMaps'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_218;
  undefined1 local_217 [7];
  longlong *local_210;
  int iStack_208;
  uint uStack_204;
  TBitArray<FDefaultBitArrayAllocator> *local_200;
  undefined4 uStack_1f8;
  int iStack_1f4;
  int local_1f0;
  int iStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  longlong *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  undefined8 uStack_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_170;
  int local_150;
  int local_14c;
  int local_148;
  longlong *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  longlong *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  undefined4 local_64;
  undefined4 local_44;
  
  if ((uint)param_1 < 7) {
    switch(param_1) {
    case 0:
      lVar8 = *(longlong *)this;
      if (*(int *)(lVar8 + 0x78) != 0) {
        UE::Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_TBucketMap<int,FSetHashBucket>::Compact(void)___ptr64'::
                    __l3::LOG_Static,(FLogCategoryBase *)&LogObj);
      }
      TSet<TTuple<int,FSetHashBucket>,TDefaultMapHashableKeyFuncs<int,FSetHashBucket,0>,FDefaultSetAllocator>
      ::Compact((TSet<TTuple<int,FSetHashBucket>,TDefaultMapHashableKeyFuncs<int,FSetHashBucket,0>,FDefaultSetAllocator>
                 *)(lVar8 + 0x28));
      lVar8 = *(longlong *)this;
      local_190._padding_._0_4_ = 0;
      local_190._padding_._4_4_ = 1;
      local_190.UnvisitedBitMask = 0xffffffff;
      pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar8 + 0x38);
      local_190.CurrentBitIndex = 0;
      local_190.BaseBitIndex = 0;
      plVar1 = (longlong *)(lVar8 + 0x28);
      local_190.Array = pTVar14;
      if (*(int *)(lVar8 + 0x50) != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_190);
      }
      TStack_1d8._padding_ = CONCAT44(local_190._padding_._4_4_,(undefined4)local_190._padding_);
      uVar10 = *(uint *)(lVar8 + 0x50);
      TStack_1d8.CurrentBitIndex = local_190.CurrentBitIndex;
      TStack_1d8.UnvisitedBitMask = local_190.UnvisitedBitMask;
      TStack_1d8._28_4_ = local_190._28_4_;
      TStack_1d8.BaseBitIndex = local_190.BaseBitIndex;
      TStack_1d8.Array = local_190.Array;
      uStack_1b8 = CONCAT44(uStack_1b8._4_4_,*(int *)(lVar8 + 0x30) - *(int *)(lVar8 + 0x5c));
      iVar13 = (int)uVar10 >> 5;
      uVar11 = uVar10 & 0xffffffe0;
      TStack_138.Array = local_190.Array;
      uStack_118 = uStack_1b8;
      local_1e0 = plVar1;
      local_140 = plVar1;
      TStack_138._padding_ = TStack_1d8._padding_;
      TStack_138._16_8_ = TStack_1d8._16_8_;
      TStack_138._24_8_ = TStack_1d8._24_8_;
      if (((int)uVar10 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar3 = *(uint *)(lVar8 + 0x50);
      if (uVar10 != uVar3) {
        pTVar15 = pTVar14;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar8 + 0x48) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar8 + 0x48);
        }
        uVar10 = -1 << ((byte)uVar10 & 0x1f) &
                 *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
        while (uVar10 == 0) {
          lVar8 = (longlong)iVar13;
          uVar11 = uVar11 + 0x20;
          iVar13 = iVar13 + 1;
          uVar10 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_142296aa0;
          uVar10 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar8 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar10 = (uVar11 - 1) + (int)lVar8;
        if ((int)uVar3 < (int)uVar10) {
          uVar10 = uVar3;
        }
      }
LAB_142296aa0:
      while( true ) {
        plVar5 = local_140;
        if ((int)local_140[1] - *(int *)((longlong)local_140 + 0x34) != (int)uStack_118) {
          `TSparseArray<TSparseSetElement<TTuple<int,FSetHashBucket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (((TStack_138.CurrentBitIndex == uVar10) && (TStack_138.Array == pTVar14)) &&
           (plVar5 == plVar1)) break;
        FSetHashBucket::Shrink
                  ((FSetHashBucket *)((longlong)TStack_138.CurrentBitIndex * 0x20 + *plVar5 + 8));
        TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
      }
      break;
    case 1:
      TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,1>,FDefaultSetAllocator>
      ::Compact((TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,1>,FDefaultSetAllocator>
                 *)(*(longlong *)this + 0x80));
      break;
    case 2:
      lVar8 = *(longlong *)this;
      if (*(int *)(lVar8 + 0x120) != 0) {
        UE::Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_TBucketMap<UObjectBase*___ptr64,FSetHashBucket>::Compact(void)___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogObj);
      }
      TSet<TTuple<UObjectBase_*,FSetHashBucket>,TDefaultMapHashableKeyFuncs<UObjectBase_*,FSetHashBucket,0>,FDefaultSetAllocator>
      ::Compact((TSet<TTuple<UObjectBase_*,FSetHashBucket>,TDefaultMapHashableKeyFuncs<UObjectBase_*,FSetHashBucket,0>,FDefaultSetAllocator>
                 *)(lVar8 + 0xd0));
      lVar8 = *(longlong *)this;
      iStack_208 = 0;
      uStack_204 = 1;
      local_1f0 = 0;
      pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar8 + 0xe0);
      iVar13 = *(int *)(lVar8 + 0xf8);
      plVar1 = (longlong *)(lVar8 + 0xd0);
      iStack_1f4 = 0;
      if (iVar13 != 0) {
        pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar8 + 0xf0);
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar8 + 0xf0) ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar15 = pTVar14;
        }
        uVar10 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
        while (uVar10 == 0) {
          lVar9 = (longlong)iStack_208;
          local_1f0 = local_1f0 + 0x20;
          iStack_208 = iStack_208 + 1;
          iStack_1f4 = iVar13;
          if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_208)
          goto LAB_142296bce;
          uVar10 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar9 * 4 + 4);
        }
        uStack_204 = -uVar10 & uVar10;
        uVar2 = (ulonglong)uStack_204 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_150 = (int)lVar9;
        iStack_1f4 = local_1f0 + -1 + local_150;
        if (iVar13 < iStack_1f4) {
          iStack_1f4 = iVar13;
        }
      }
LAB_142296bce:
      iStack_1ec = local_64;
      iStack_1e8 = *(int *)(lVar8 + 0xd8) - *(int *)(lVar8 + 0x104);
      uVar10 = *(uint *)(lVar8 + 0xf8);
      uVar11 = uVar10 & 0xffffffe0;
      uStack_1f8 = 0xffffffff;
      TStack_108._padding_ = CONCAT44(uStack_204,iStack_208);
      TStack_108.CurrentBitIndex = iStack_1f4;
      TStack_108.UnvisitedBitMask = 0xffffffff;
      iVar12 = (int)uVar10 >> 5;
      TStack_108._28_4_ = local_64;
      TStack_108.BaseBitIndex = local_1f0;
      uStack_e8 = CONCAT44(uStack_1e4,iStack_1e8);
      local_210 = plVar1;
      local_200 = pTVar14;
      local_110 = plVar1;
      TStack_108.Array = pTVar14;
      if ((((int)uVar10 < 0) || (iVar13 < (int)uVar10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar3 = *(uint *)(lVar8 + 0xf8);
      if (uVar10 != uVar3) {
        pTVar15 = pTVar14;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar8 + 0xf0) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar8 + 0xf0);
        }
        uVar10 = -1 << ((byte)uVar10 & 0x1f) &
                 *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
        while (uVar10 == 0) {
          lVar8 = (longlong)iVar12;
          uVar11 = uVar11 + 0x20;
          iVar12 = iVar12 + 1;
          uVar10 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_142296ce0;
          uVar10 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar8 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar10 = (uVar11 - 1) + (int)lVar8;
        if ((int)uVar3 < (int)uVar10) {
          uVar10 = uVar3;
        }
      }
LAB_142296ce0:
      while( true ) {
        plVar5 = local_110;
        if ((int)local_110[1] - *(int *)((longlong)local_110 + 0x34) != (int)uStack_e8) {
          `TSparseArray<TSparseSetElement<TTuple<UObjectBase_*,FSetHashBucket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((TStack_108.CurrentBitIndex == uVar10) && (TStack_108.Array == pTVar14)) &&
           (plVar5 == plVar1)) break;
        FSetHashBucket::Shrink
                  ((FSetHashBucket *)((longlong)TStack_108.CurrentBitIndex * 0x20 + *plVar5 + 8));
        TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
      }
      break;
    case 3:
      lVar8 = *(longlong *)this;
      if (*(int *)(lVar8 + 0x178) != 0) {
        UE::Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_TBucketMap<UClass*___ptr64,FSetHashBucket>::Compact(void)___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogObj);
      }
      TSet<TTuple<UClass_*,FSetHashBucket>,TDefaultMapHashableKeyFuncs<UClass_*,FSetHashBucket,0>,FDefaultSetAllocator>
      ::Compact((TSet<TTuple<UClass_*,FSetHashBucket>,TDefaultMapHashableKeyFuncs<UClass_*,FSetHashBucket,0>,FDefaultSetAllocator>
                 *)(lVar8 + 0x128));
      lVar8 = *(longlong *)this;
      local_170._padding_._0_4_ = 0;
      local_170._padding_._4_4_ = 1;
      local_170.UnvisitedBitMask = 0xffffffff;
      pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar8 + 0x138);
      local_170.CurrentBitIndex = 0;
      local_170.BaseBitIndex = 0;
      plVar1 = (longlong *)(lVar8 + 0x128);
      local_170.Array = pTVar14;
      if (*(int *)(lVar8 + 0x150) != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_170);
      }
      uVar10 = *(uint *)(lVar8 + 0x150);
      TStack_1d8._padding_ = CONCAT44(local_170._padding_._4_4_,(undefined4)local_170._padding_);
      uStack_1b8 = CONCAT44(uStack_1b8._4_4_,*(int *)(lVar8 + 0x130) - *(int *)(lVar8 + 0x15c));
      bVar7 = (byte)uVar10 & 0x1f;
      TStack_1d8.CurrentBitIndex = local_170.CurrentBitIndex;
      TStack_1d8.UnvisitedBitMask = local_170.UnvisitedBitMask;
      TStack_1d8._28_4_ = local_170._28_4_;
      TStack_1d8.BaseBitIndex = local_170.BaseBitIndex;
      local_1b0._padding_._4_4_ = 1 << bVar7;
      local_1b0._padding_._0_4_ = (int)uVar10 >> 5;
      TStack_1d8.Array = local_170.Array;
      local_1b0.BaseBitIndex = uVar10 & 0xffffffe0;
      local_1b0.UnvisitedBitMask = -1 << bVar7;
      TStack_d8.Array = local_170.Array;
      uStack_b8 = uStack_1b8;
      local_1e0 = plVar1;
      local_1b0.Array = pTVar14;
      local_1b0.CurrentBitIndex = uVar10;
      local_e0 = plVar1;
      TStack_d8._padding_ = TStack_1d8._padding_;
      TStack_d8._16_8_ = TStack_1d8._16_8_;
      TStack_d8._24_8_ = TStack_1d8._24_8_;
      if (((int)uVar10 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar10 != *(uint *)(lVar8 + 0x150)) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1b0);
        pTVar14 = local_1b0.Array;
        uVar10 = local_1b0.CurrentBitIndex;
      }
      while( true ) {
        plVar5 = local_e0;
        if ((int)local_e0[1] - *(int *)((longlong)local_e0 + 0x34) != (int)uStack_b8) {
          `TSparseArray<TSparseSetElement<TTuple<UClass_*,FSetHashBucket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_d8.CurrentBitIndex == uVar10) && (TStack_d8.Array == pTVar14)) &&
           (plVar5 == plVar1)) break;
        FSetHashBucket::Shrink
                  ((FSetHashBucket *)((longlong)TStack_d8.CurrentBitIndex * 0x20 + *plVar5 + 8));
        TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
      }
      break;
    case 4:
      TSet<TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::Compact((TSet<TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                 *)(*(longlong *)this + 0x180));
      lVar8 = *(longlong *)this;
      iStack_208 = 0;
      local_1f0 = 0;
      pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar8 + 400);
      iVar13 = *(int *)(lVar8 + 0x1a8);
      plVar1 = (longlong *)(lVar8 + 0x180);
      iStack_1f4 = 0;
      uStack_204 = 1;
      if (iVar13 != 0) {
        pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar8 + 0x1a0);
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar8 + 0x1a0) ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar15 = pTVar14;
        }
        uStack_204 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
        while (uStack_204 == 0) {
          lVar9 = (longlong)iStack_208;
          local_1f0 = local_1f0 + 0x20;
          iStack_208 = iStack_208 + 1;
          iStack_1f4 = iVar13;
          uStack_204 = 1;
          if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_208)
          goto LAB_142296f6f;
          uStack_204 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar9 * 4 + 4);
        }
        uStack_204 = -uStack_204 & uStack_204;
        uVar2 = (ulonglong)uStack_204 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_14c = (int)lVar9;
        iStack_1f4 = local_1f0 + -1 + local_14c;
        if (iVar13 < iStack_1f4) {
          iStack_1f4 = iVar13;
        }
      }
LAB_142296f6f:
      iStack_1ec = local_44;
      iStack_1e8 = *(int *)(lVar8 + 0x188) - *(int *)(lVar8 + 0x1b4);
      uVar10 = *(uint *)(lVar8 + 0x1a8);
      uStack_1f8 = 0xffffffff;
      uVar11 = uVar10 & 0xffffffe0;
      TStack_a8._padding_ = CONCAT44(uStack_204,iStack_208);
      TStack_a8.CurrentBitIndex = iStack_1f4;
      TStack_a8.UnvisitedBitMask = 0xffffffff;
      iVar12 = (int)uVar10 >> 5;
      TStack_a8._28_4_ = local_44;
      TStack_a8.BaseBitIndex = local_1f0;
      uStack_88 = CONCAT44(uStack_1e4,iStack_1e8);
      local_210 = plVar1;
      local_200 = pTVar14;
      local_b0 = plVar1;
      TStack_a8.Array = pTVar14;
      if ((((int)uVar10 < 0) || (iVar13 < (int)uVar10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar3 = *(uint *)(lVar8 + 0x1a8);
      if (uVar10 != uVar3) {
        pTVar15 = pTVar14;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar8 + 0x1a0) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar8 + 0x1a0);
        }
        uVar10 = -1 << ((byte)uVar10 & 0x1f) &
                 *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
        while (uVar10 == 0) {
          lVar8 = (longlong)iVar12;
          uVar11 = uVar11 + 0x20;
          iVar12 = iVar12 + 1;
          uVar10 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_142297090;
          uVar10 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar8 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar10 = (uVar11 - 1) + (int)lVar8;
        if ((int)uVar3 < (int)uVar10) {
          uVar10 = uVar3;
        }
      }
LAB_142297090:
      while( true ) {
        plVar5 = local_b0;
        if ((int)local_b0[1] - *(int *)((longlong)local_b0 + 0x34) != (int)uStack_88) {
          `TSparseArray<TSparseSetElement<TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_218);
        }
        if (((TStack_a8.CurrentBitIndex == uVar10) && (TStack_a8.Array == pTVar14)) &&
           (plVar5 == plVar1)) break;
        lVar8 = *plVar5 + (longlong)TStack_a8.CurrentBitIndex * 0x60;
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Shrink((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(lVar8 + 8));
        uVar11 = *(int *)(lVar8 + 0x10) - *(int *)(lVar8 + 0x3c);
        if (uVar11 < 4) {
          iVar13 = 1;
        }
        else {
          uVar2 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
          lVar9 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          iVar13 = 1 << ((byte)lVar9 & 0x1f);
        }
        if (((0 < (int)uVar11) && (*(int *)(lVar8 + 0x50) < iVar13)) ||
           (iVar13 < *(int *)(lVar8 + 0x50))) {
          *(int *)(lVar8 + 0x50) = iVar13;
          TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>::Rehash
                    ((TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *)(lVar8 + 8))
          ;
        }
        TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
      }
      break;
    case 5:
      lVar8 = *(longlong *)this;
      if (*(int *)(lVar8 + 0x230) != 0) {
        UE::Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_TBucketMap<UPackage*___ptr64,FSetHashBucket>::Compact(void)___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogObj);
      }
      TSet<TTuple<UPackage_*,FSetHashBucket>,TDefaultMapHashableKeyFuncs<UPackage_*,FSetHashBucket,0>,FDefaultSetAllocator>
      ::Compact((TSet<TTuple<UPackage_*,FSetHashBucket>,TDefaultMapHashableKeyFuncs<UPackage_*,FSetHashBucket,0>,FDefaultSetAllocator>
                 *)(lVar8 + 0x1e0));
      lVar8 = *(longlong *)this;
      iStack_208 = 0;
      uStack_204 = 1;
      local_1f0 = 0;
      local_200 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar8 + 0x1f0);
      iVar13 = *(int *)(lVar8 + 0x208);
      plVar1 = (longlong *)(lVar8 + 0x1e0);
      iStack_1f4 = 0;
      if (iVar13 != 0) {
        pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar8 + 0x200);
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar8 + 0x200) ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar14 = local_200;
        }
        uVar10 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
        while (uVar10 == 0) {
          lVar9 = (longlong)iStack_208;
          local_1f0 = local_1f0 + 0x20;
          iStack_208 = iStack_208 + 1;
          iStack_1f4 = iVar13;
          if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_208)
          goto LAB_1422971fe;
          uVar10 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar9 * 4 + 4);
        }
        uStack_204 = -uVar10 & uVar10;
        uVar2 = (ulonglong)uStack_204 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_148 = (int)lVar9;
        iStack_1f4 = local_148 + -1 + local_1f0;
        if (iVar13 < iStack_1f4) {
          iStack_1f4 = iVar13;
        }
      }
LAB_1422971fe:
      uVar10 = *(uint *)(lVar8 + 0x208);
      iStack_1e8 = *(int *)(lVar8 + 0x1e8) - *(int *)(lVar8 + 0x214);
      uVar11 = uVar10 & 0xffffffe0;
      uStack_1f8 = 0xffffffff;
      TStack_1d8.CurrentBitIndex = iStack_1f4;
      TStack_1d8.UnvisitedBitMask = 0xffffffff;
      TStack_1d8._padding_ = CONCAT44(uStack_204,iStack_208);
      iVar13 = (int)uVar10 >> 5;
      TStack_1d8._28_4_ = iStack_1f4;
      TStack_1d8.BaseBitIndex = local_1f0;
      uStack_1b8 = CONCAT44(uStack_1e4,iStack_1e8);
      local_210 = plVar1;
      iStack_1ec = iStack_1f4;
      local_1e0 = plVar1;
      TStack_1d8.Array = local_200;
      if (((int)uVar10 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar3 = *(uint *)(lVar8 + 0x208);
      if (uVar10 != uVar3) {
        pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar8 + 0x1f0);
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar8 + 0x200) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar8 + 0x200);
        }
        uVar10 = -1 << ((byte)uVar10 & 0x1f) &
                 *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
        while (uVar10 == 0) {
          lVar9 = (longlong)iVar13;
          uVar11 = uVar11 + 0x20;
          iVar13 = iVar13 + 1;
          uVar10 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_142297320;
          uVar10 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar9 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar10 = (int)lVar9 + -1 + uVar11;
        if ((int)uVar3 < (int)uVar10) {
          uVar10 = uVar3;
        }
      }
LAB_142297320:
      while( true ) {
        plVar5 = local_1e0;
        if ((int)local_1e0[1] - *(int *)((longlong)local_1e0 + 0x34) != (int)uStack_1b8) {
          `TSparseArray<TSparseSetElement<TTuple<UPackage_*,FSetHashBucket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_217);
        }
        if (((TStack_1d8.CurrentBitIndex == uVar10) &&
            (TStack_1d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(lVar8 + 0x1f0))) &&
           (plVar5 == plVar1)) break;
        FSetHashBucket::Shrink
                  ((FSetHashBucket *)((longlong)TStack_1d8.CurrentBitIndex * 0x20 + *plVar5 + 8));
        TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
      }
      break;
    case 6:
      TSet<TTuple<UObjectBase_*,UPackage_*>,TDefaultMapHashableKeyFuncs<UObjectBase_*,UPackage_*,0>,FDefaultSetAllocator>
      ::Compact((TSet<TTuple<UObjectBase_*,UPackage_*>,TDefaultMapHashableKeyFuncs<UObjectBase_*,UPackage_*,0>,FDefaultSetAllocator>
                 *)(*(longlong *)this + 0x238));
    }
  }
  return;
}

// Get @ 14229cb30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FUObjectHashTables * __cdecl FUObjectHashTables::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)
                 &`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'
                  ::__l2::Singleton,4000);
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.Hash._padding_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.Hash._padding_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.Hash._padding_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.Hash._padding_ = ___xmm_00000000ffffffff0000008000000000;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.Hash._padding_ = _UNK_150631d98;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.Hash._padding_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.Hash._padding_._0_4_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.Hash.ReadOnlyLock = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.HashOuter._0_8_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.HashOuter._8_8_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.HashOuter._32_8_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.HashOuter._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.HashOuter._48_8_ = _UNK_150631d98;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.HashOuter._64_8_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.HashOuter._72_4_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ObjectOuterMap._padding_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ObjectOuterMap._padding_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ObjectOuterMap._padding_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ObjectOuterMap._padding_ = ___xmm_00000000ffffffff0000008000000000;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ObjectOuterMap._padding_ = _UNK_150631d98;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ObjectOuterMap._padding_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ObjectOuterMap._padding_._0_4_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ObjectOuterMap.ReadOnlyLock = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ClassToObjectListMap._padding_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ClassToObjectListMap._padding_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ClassToObjectListMap._padding_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ClassToObjectListMap._padding_ = ___xmm_00000000ffffffff0000008000000000;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ClassToObjectListMap._padding_ = _UNK_150631d98;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ClassToObjectListMap._padding_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ClassToObjectListMap._padding_._0_4_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ClassToObjectListMap.ReadOnlyLock = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ClassToChildListMap._0_8_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ClassToChildListMap._8_8_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ClassToChildListMap._32_8_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ClassToChildListMap._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ClassToChildListMap._48_8_ = _UNK_150631d98;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ClassToChildListMap._64_8_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ClassToChildListMap._72_4_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.AllClassesVersion = (atomic<unsigned___int64>)0x0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.NativeClassesVersion = (atomic<unsigned___int64>)0x0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.PackageToObjectListMap._padding_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.PackageToObjectListMap._padding_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.PackageToObjectListMap._padding_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.PackageToObjectListMap._padding_ = ___xmm_00000000ffffffff0000008000000000;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.PackageToObjectListMap._padding_ = _UNK_150631d98;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.PackageToObjectListMap._padding_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.PackageToObjectListMap._padding_._0_4_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.PackageToObjectListMap.ReadOnlyLock = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ObjectToPackageMap._0_8_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ObjectToPackageMap._8_8_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ObjectToPackageMap._32_8_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ObjectToPackageMap._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ObjectToPackageMap._48_8_ = _UNK_150631d98;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ObjectToPackageMap._64_8_ = 0;
      `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ObjectToPackageMap._72_4_ = 0;
      atexit(`FUObjectHashTables::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'
              ::__l2::Singleton;
    }
  }
  return &`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::
          __l2::Singleton;
}

