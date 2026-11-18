// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 54

// Append @ 14ae619e0

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryFilterStep>::Append
          (TStepExecuterBase<Metasound::IFrontendQueryFilterStep> *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_3)

{
  undefined1 *puVar1;
  FFrontendQueryKey *pFVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ForElementType<Metasound::FFrontendQueryEntry> FVar9;
  ForElementType<Metasound::FFrontendQueryEntry> FVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  undefined1 local_res10 [8];
  TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
  *local_res18;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar4 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar17 = 0;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar13 = *puVar14;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      iVar16 = iVar16 + 0x20;
      iVar17 = iVar17 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14ae61a8d;
      uVar13 = puVar14[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar8 = (int)lVar11 + -1 + iVar16;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_14ae61a8d:
  uVar13 = *(uint *)&(param_1->Elements).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar7,iVar17);
  TStack_68.CurrentBitIndex = iVar8;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iVar8;
  TStack_68.BaseBitIndex = iVar16;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  local_res18 = param_2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar17 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      uVar12 = uVar12 + 0x20;
      iVar17 = iVar17 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14ae61b90;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14ae61b90:
  do {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_48) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_68.CurrentBitIndex == uVar13) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    pFVar2 = (FFrontendQueryKey *)
             (*(longlong *)&param_1->Elements + (longlong)TStack_68.CurrentBitIndex * 0x28);
    FVar9 = (ForElementType<Metasound::FFrontendQueryEntry>)
            TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
            ::Find(local_res18,pFVar2);
    if ((FVar9 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) &&
       (0 < *(int *)((longlong)FVar9 + 0xb8))) {
      FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)
               TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
               ::Find(param_3,pFVar2);
      if (FVar10 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)
                 TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                 ::Emplace<Metasound::FFrontendQueryKey_const_&>(param_3,pFVar2);
      }
      if ((FVar10 == FVar9) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar4 = *(int *)((longlong)FVar9 + 0xb8);
      if (iVar4 != 0) {
        iVar17 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                           (0xb0,8,iVar4,(ForElementType<Metasound::FFrontendQueryEntry> *)FVar10,
                            (int *)((longlong)FVar10 + 0xb8),(int *)((longlong)FVar10 + 0xbc));
        if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0) !=
            (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar9 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0);
        }
        if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar10 + 0xb0) !=
            (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar10 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar10 + 0xb0);
        }
        ConstructItems<Metasound::FFrontendQueryEntry,Metasound::FFrontendQueryEntry,int>
                  ((void *)((longlong)iVar17 * 0xb0 + (longlong)FVar10),(FFrontendQueryEntry *)FVar9
                   ,iVar4);
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// Append @ 14ae61cf0

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryLimitStep>::Append
          (TStepExecuterBase<Metasound::IFrontendQueryLimitStep> *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_3)

{
  undefined1 *puVar1;
  FFrontendQueryKey *pFVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ForElementType<Metasound::FFrontendQueryEntry> FVar9;
  ForElementType<Metasound::FFrontendQueryEntry> FVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  undefined1 local_res10 [8];
  TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
  *local_res18;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar4 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar17 = 0;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar13 = *puVar14;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      iVar16 = iVar16 + 0x20;
      iVar17 = iVar17 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14ae61d9d;
      uVar13 = puVar14[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar8 = (int)lVar11 + -1 + iVar16;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_14ae61d9d:
  uVar13 = *(uint *)&(param_1->Elements).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar7,iVar17);
  TStack_68.CurrentBitIndex = iVar8;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iVar8;
  TStack_68.BaseBitIndex = iVar16;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  local_res18 = param_2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar17 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      uVar12 = uVar12 + 0x20;
      iVar17 = iVar17 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14ae61ea0;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14ae61ea0:
  do {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_48) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_68.CurrentBitIndex == uVar13) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    pFVar2 = (FFrontendQueryKey *)
             (*(longlong *)&param_1->Elements + (longlong)TStack_68.CurrentBitIndex * 0x28);
    FVar9 = (ForElementType<Metasound::FFrontendQueryEntry>)
            TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
            ::Find(local_res18,pFVar2);
    if ((FVar9 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) &&
       (0 < *(int *)((longlong)FVar9 + 0xb8))) {
      FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)
               TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
               ::Find(param_3,pFVar2);
      if (FVar10 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)
                 TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                 ::Emplace<Metasound::FFrontendQueryKey_const_&>(param_3,pFVar2);
      }
      if ((FVar10 == FVar9) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar4 = *(int *)((longlong)FVar9 + 0xb8);
      if (iVar4 != 0) {
        iVar17 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                           (0xb0,8,iVar4,(ForElementType<Metasound::FFrontendQueryEntry> *)FVar10,
                            (int *)((longlong)FVar10 + 0xb8),(int *)((longlong)FVar10 + 0xbc));
        if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0) !=
            (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar9 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0);
        }
        if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar10 + 0xb0) !=
            (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar10 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar10 + 0xb0);
        }
        ConstructItems<Metasound::FFrontendQueryEntry,Metasound::FFrontendQueryEntry,int>
                  ((void *)((longlong)iVar17 * 0xb0 + (longlong)FVar10),(FFrontendQueryEntry *)FVar9
                   ,iVar4);
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// Append @ 14ae62000

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryMapStep>::Append
          (TStepExecuterBase<Metasound::IFrontendQueryMapStep> *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_3)

{
  undefined1 *puVar1;
  FFrontendQueryKey *pFVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ForElementType<Metasound::FFrontendQueryEntry> FVar9;
  ForElementType<Metasound::FFrontendQueryEntry> FVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  undefined1 local_res10 [8];
  TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
  *local_res18;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar4 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar17 = 0;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar13 = *puVar14;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      iVar16 = iVar16 + 0x20;
      iVar17 = iVar17 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14ae620ad;
      uVar13 = puVar14[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar8 = (int)lVar11 + -1 + iVar16;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_14ae620ad:
  uVar13 = *(uint *)&(param_1->Elements).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar7,iVar17);
  TStack_68.CurrentBitIndex = iVar8;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iVar8;
  TStack_68.BaseBitIndex = iVar16;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  local_res18 = param_2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar17 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      uVar12 = uVar12 + 0x20;
      iVar17 = iVar17 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14ae621b0;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14ae621b0:
  do {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_48) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_68.CurrentBitIndex == uVar13) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    pFVar2 = (FFrontendQueryKey *)
             (*(longlong *)&param_1->Elements + (longlong)TStack_68.CurrentBitIndex * 0x28);
    FVar9 = (ForElementType<Metasound::FFrontendQueryEntry>)
            TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
            ::Find(local_res18,pFVar2);
    if ((FVar9 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) &&
       (0 < *(int *)((longlong)FVar9 + 0xb8))) {
      FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)
               TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
               ::Find(param_3,pFVar2);
      if (FVar10 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)
                 TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                 ::Emplace<Metasound::FFrontendQueryKey_const_&>(param_3,pFVar2);
      }
      if ((FVar10 == FVar9) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar4 = *(int *)((longlong)FVar9 + 0xb8);
      if (iVar4 != 0) {
        iVar17 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                           (0xb0,8,iVar4,(ForElementType<Metasound::FFrontendQueryEntry> *)FVar10,
                            (int *)((longlong)FVar10 + 0xb8),(int *)((longlong)FVar10 + 0xbc));
        if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0) !=
            (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar9 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0);
        }
        if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar10 + 0xb0) !=
            (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar10 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar10 + 0xb0);
        }
        ConstructItems<Metasound::FFrontendQueryEntry,Metasound::FFrontendQueryEntry,int>
                  ((void *)((longlong)iVar17 * 0xb0 + (longlong)FVar10),(FFrontendQueryEntry *)FVar9
                   ,iVar4);
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// Append @ 14ae62310

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryMultiMapStep>::Append
          (TStepExecuterBase<Metasound::IFrontendQueryMultiMapStep> *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_3)

{
  undefined1 *puVar1;
  FFrontendQueryKey *pFVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ForElementType<Metasound::FFrontendQueryEntry> FVar9;
  ForElementType<Metasound::FFrontendQueryEntry> FVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  undefined1 local_res10 [8];
  TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
  *local_res18;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar4 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar17 = 0;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar13 = *puVar14;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      iVar16 = iVar16 + 0x20;
      iVar17 = iVar17 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14ae623bd;
      uVar13 = puVar14[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar8 = (int)lVar11 + -1 + iVar16;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_14ae623bd:
  uVar13 = *(uint *)&(param_1->Elements).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar7,iVar17);
  TStack_68.CurrentBitIndex = iVar8;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iVar8;
  TStack_68.BaseBitIndex = iVar16;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  local_res18 = param_2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar17 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      uVar12 = uVar12 + 0x20;
      iVar17 = iVar17 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14ae624c0;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14ae624c0:
  do {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_48) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_68.CurrentBitIndex == uVar13) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    pFVar2 = (FFrontendQueryKey *)
             (*(longlong *)&param_1->Elements + (longlong)TStack_68.CurrentBitIndex * 0x28);
    FVar9 = (ForElementType<Metasound::FFrontendQueryEntry>)
            TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
            ::Find(local_res18,pFVar2);
    if ((FVar9 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) &&
       (0 < *(int *)((longlong)FVar9 + 0xb8))) {
      FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)
               TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
               ::Find(param_3,pFVar2);
      if (FVar10 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)
                 TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                 ::Emplace<Metasound::FFrontendQueryKey_const_&>(param_3,pFVar2);
      }
      if ((FVar10 == FVar9) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar4 = *(int *)((longlong)FVar9 + 0xb8);
      if (iVar4 != 0) {
        iVar17 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                           (0xb0,8,iVar4,(ForElementType<Metasound::FFrontendQueryEntry> *)FVar10,
                            (int *)((longlong)FVar10 + 0xb8),(int *)((longlong)FVar10 + 0xbc));
        if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0) !=
            (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar9 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0);
        }
        if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar10 + 0xb0) !=
            (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar10 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar10 + 0xb0);
        }
        ConstructItems<Metasound::FFrontendQueryEntry,Metasound::FFrontendQueryEntry,int>
                  ((void *)((longlong)iVar17 * 0xb0 + (longlong)FVar10),(FFrontendQueryEntry *)FVar9
                   ,iVar4);
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// Append @ 14ae62620

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryReduceStep>::Append
          (TStepExecuterBase<Metasound::IFrontendQueryReduceStep> *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_3)

{
  undefined1 *puVar1;
  FFrontendQueryKey *pFVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ForElementType<Metasound::FFrontendQueryEntry> FVar9;
  ForElementType<Metasound::FFrontendQueryEntry> FVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  undefined1 local_res10 [8];
  TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
  *local_res18;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar4 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar17 = 0;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar13 = *puVar14;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      iVar16 = iVar16 + 0x20;
      iVar17 = iVar17 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14ae626cd;
      uVar13 = puVar14[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar8 = (int)lVar11 + -1 + iVar16;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_14ae626cd:
  uVar13 = *(uint *)&(param_1->Elements).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar7,iVar17);
  TStack_68.CurrentBitIndex = iVar8;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iVar8;
  TStack_68.BaseBitIndex = iVar16;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  local_res18 = param_2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar17 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      uVar12 = uVar12 + 0x20;
      iVar17 = iVar17 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14ae627d0;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14ae627d0:
  do {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_48) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_68.CurrentBitIndex == uVar13) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    pFVar2 = (FFrontendQueryKey *)
             (*(longlong *)&param_1->Elements + (longlong)TStack_68.CurrentBitIndex * 0x28);
    FVar9 = (ForElementType<Metasound::FFrontendQueryEntry>)
            TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
            ::Find(local_res18,pFVar2);
    if ((FVar9 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) &&
       (0 < *(int *)((longlong)FVar9 + 0xb8))) {
      FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)
               TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
               ::Find(param_3,pFVar2);
      if (FVar10 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)
                 TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                 ::Emplace<Metasound::FFrontendQueryKey_const_&>(param_3,pFVar2);
      }
      if ((FVar10 == FVar9) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar4 = *(int *)((longlong)FVar9 + 0xb8);
      if (iVar4 != 0) {
        iVar17 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                           (0xb0,8,iVar4,(ForElementType<Metasound::FFrontendQueryEntry> *)FVar10,
                            (int *)((longlong)FVar10 + 0xb8),(int *)((longlong)FVar10 + 0xbc));
        if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0) !=
            (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar9 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0);
        }
        if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar10 + 0xb0) !=
            (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar10 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar10 + 0xb0);
        }
        ConstructItems<Metasound::FFrontendQueryEntry,Metasound::FFrontendQueryEntry,int>
                  ((void *)((longlong)iVar17 * 0xb0 + (longlong)FVar10),(FFrontendQueryEntry *)FVar9
                   ,iVar4);
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// Append @ 14ae62930

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryScoreStep>::Append
          (TStepExecuterBase<Metasound::IFrontendQueryScoreStep> *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_3)

{
  undefined1 *puVar1;
  FFrontendQueryKey *pFVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ForElementType<Metasound::FFrontendQueryEntry> FVar9;
  ForElementType<Metasound::FFrontendQueryEntry> FVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  undefined1 local_res10 [8];
  TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
  *local_res18;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar4 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar17 = 0;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar13 = *puVar14;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      iVar16 = iVar16 + 0x20;
      iVar17 = iVar17 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14ae629dd;
      uVar13 = puVar14[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar8 = (int)lVar11 + -1 + iVar16;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_14ae629dd:
  uVar13 = *(uint *)&(param_1->Elements).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar7,iVar17);
  TStack_68.CurrentBitIndex = iVar8;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iVar8;
  TStack_68.BaseBitIndex = iVar16;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  local_res18 = param_2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar17 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      uVar12 = uVar12 + 0x20;
      iVar17 = iVar17 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14ae62ae0;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14ae62ae0:
  do {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_48) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_68.CurrentBitIndex == uVar13) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    pFVar2 = (FFrontendQueryKey *)
             (*(longlong *)&param_1->Elements + (longlong)TStack_68.CurrentBitIndex * 0x28);
    FVar9 = (ForElementType<Metasound::FFrontendQueryEntry>)
            TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
            ::Find(local_res18,pFVar2);
    if ((FVar9 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) &&
       (0 < *(int *)((longlong)FVar9 + 0xb8))) {
      FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)
               TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
               ::Find(param_3,pFVar2);
      if (FVar10 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)
                 TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                 ::Emplace<Metasound::FFrontendQueryKey_const_&>(param_3,pFVar2);
      }
      if ((FVar10 == FVar9) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar4 = *(int *)((longlong)FVar9 + 0xb8);
      if (iVar4 != 0) {
        iVar17 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                           (0xb0,8,iVar4,(ForElementType<Metasound::FFrontendQueryEntry> *)FVar10,
                            (int *)((longlong)FVar10 + 0xb8),(int *)((longlong)FVar10 + 0xbc));
        if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0) !=
            (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar9 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0);
        }
        if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar10 + 0xb0) !=
            (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar10 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar10 + 0xb0);
        }
        ConstructItems<Metasound::FFrontendQueryEntry,Metasound::FFrontendQueryEntry,int>
                  ((void *)((longlong)iVar17 * 0xb0 + (longlong)FVar10),(FFrontendQueryEntry *)FVar9
                   ,iVar4);
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// Append @ 14ae62c40

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQuerySortStep>::Append
          (TStepExecuterBase<Metasound::IFrontendQuerySortStep> *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_3)

{
  undefined1 *puVar1;
  FFrontendQueryKey *pFVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ForElementType<Metasound::FFrontendQueryEntry> FVar9;
  ForElementType<Metasound::FFrontendQueryEntry> FVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  undefined1 local_res10 [8];
  TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
  *local_res18;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar4 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar17 = 0;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar13 = *puVar14;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      iVar16 = iVar16 + 0x20;
      iVar17 = iVar17 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14ae62ced;
      uVar13 = puVar14[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar8 = (int)lVar11 + -1 + iVar16;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_14ae62ced:
  uVar13 = *(uint *)&(param_1->Elements).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar7,iVar17);
  TStack_68.CurrentBitIndex = iVar8;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iVar8;
  TStack_68.BaseBitIndex = iVar16;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  local_res18 = param_2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar17 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      uVar12 = uVar12 + 0x20;
      iVar17 = iVar17 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14ae62df0;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14ae62df0:
  do {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_48) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_68.CurrentBitIndex == uVar13) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    pFVar2 = (FFrontendQueryKey *)
             (*(longlong *)&param_1->Elements + (longlong)TStack_68.CurrentBitIndex * 0x28);
    FVar9 = (ForElementType<Metasound::FFrontendQueryEntry>)
            TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
            ::Find(local_res18,pFVar2);
    if ((FVar9 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) &&
       (0 < *(int *)((longlong)FVar9 + 0xb8))) {
      FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)
               TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
               ::Find(param_3,pFVar2);
      if (FVar10 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)
                 TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                 ::Emplace<Metasound::FFrontendQueryKey_const_&>(param_3,pFVar2);
      }
      if ((FVar10 == FVar9) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar4 = *(int *)((longlong)FVar9 + 0xb8);
      if (iVar4 != 0) {
        iVar17 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                           (0xb0,8,iVar4,(ForElementType<Metasound::FFrontendQueryEntry> *)FVar10,
                            (int *)((longlong)FVar10 + 0xb8),(int *)((longlong)FVar10 + 0xbc));
        if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0) !=
            (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar9 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0);
        }
        if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar10 + 0xb0) !=
            (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar10 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar10 + 0xb0);
        }
        ConstructItems<Metasound::FFrontendQueryEntry,Metasound::FFrontendQueryEntry,int>
                  ((void *)((longlong)iVar17 * 0xb0 + (longlong)FVar10),(FFrontendQueryEntry *)FVar9
                   ,iVar4);
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// Append @ 14ae62f50

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryStreamStep>::Append
          (TStepExecuterBase<Metasound::IFrontendQueryStreamStep> *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_3)

{
  undefined1 *puVar1;
  FFrontendQueryKey *pFVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ForElementType<Metasound::FFrontendQueryEntry> FVar9;
  ForElementType<Metasound::FFrontendQueryEntry> FVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  undefined1 local_res10 [8];
  TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
  *local_res18;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar4 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar17 = 0;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar13 = *puVar14;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      iVar16 = iVar16 + 0x20;
      iVar17 = iVar17 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14ae62ffd;
      uVar13 = puVar14[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar8 = (int)lVar11 + -1 + iVar16;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_14ae62ffd:
  uVar13 = *(uint *)&(param_1->Elements).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar7,iVar17);
  TStack_68.CurrentBitIndex = iVar8;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iVar8;
  TStack_68.BaseBitIndex = iVar16;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  local_res18 = param_2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar17 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      uVar12 = uVar12 + 0x20;
      iVar17 = iVar17 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14ae63100;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14ae63100:
  do {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_48) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_68.CurrentBitIndex == uVar13) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    pFVar2 = (FFrontendQueryKey *)
             (*(longlong *)&param_1->Elements + (longlong)TStack_68.CurrentBitIndex * 0x28);
    FVar9 = (ForElementType<Metasound::FFrontendQueryEntry>)
            TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
            ::Find(local_res18,pFVar2);
    if ((FVar9 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) &&
       (0 < *(int *)((longlong)FVar9 + 0xb8))) {
      FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)
               TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
               ::Find(param_3,pFVar2);
      if (FVar10 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)
                 TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                 ::Emplace<Metasound::FFrontendQueryKey_const_&>(param_3,pFVar2);
      }
      if ((FVar10 == FVar9) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar4 = *(int *)((longlong)FVar9 + 0xb8);
      if (iVar4 != 0) {
        iVar17 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                           (0xb0,8,iVar4,(ForElementType<Metasound::FFrontendQueryEntry> *)FVar10,
                            (int *)((longlong)FVar10 + 0xb8),(int *)((longlong)FVar10 + 0xbc));
        if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0) !=
            (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar9 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0);
        }
        if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar10 + 0xb0) !=
            (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar10 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar10 + 0xb0);
        }
        ConstructItems<Metasound::FFrontendQueryEntry,Metasound::FFrontendQueryEntry,int>
                  ((void *)((longlong)iVar17 * 0xb0 + (longlong)FVar10),(FFrontendQueryEntry *)FVar9
                   ,iVar4);
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// Append @ 14ae63260

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryTransformStep>::Append
          (TStepExecuterBase<Metasound::IFrontendQueryTransformStep> *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_3)

{
  undefined1 *puVar1;
  FFrontendQueryKey *pFVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ForElementType<Metasound::FFrontendQueryEntry> FVar9;
  ForElementType<Metasound::FFrontendQueryEntry> FVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  undefined1 local_res10 [8];
  TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
  *local_res18;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar4 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar17 = 0;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar13 = *puVar14;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      iVar16 = iVar16 + 0x20;
      iVar17 = iVar17 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14ae6330d;
      uVar13 = puVar14[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar8 = (int)lVar11 + -1 + iVar16;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_14ae6330d:
  uVar13 = *(uint *)&(param_1->Elements).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar7,iVar17);
  TStack_68.CurrentBitIndex = iVar8;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iVar8;
  TStack_68.BaseBitIndex = iVar16;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  local_res18 = param_2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar17 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      uVar12 = uVar12 + 0x20;
      iVar17 = iVar17 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14ae63410;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14ae63410:
  do {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_48) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_68.CurrentBitIndex == uVar13) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    pFVar2 = (FFrontendQueryKey *)
             (*(longlong *)&param_1->Elements + (longlong)TStack_68.CurrentBitIndex * 0x28);
    FVar9 = (ForElementType<Metasound::FFrontendQueryEntry>)
            TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
            ::Find(local_res18,pFVar2);
    if ((FVar9 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) &&
       (0 < *(int *)((longlong)FVar9 + 0xb8))) {
      FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)
               TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
               ::Find(param_3,pFVar2);
      if (FVar10 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)
                 TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                 ::Emplace<Metasound::FFrontendQueryKey_const_&>(param_3,pFVar2);
      }
      if ((FVar10 == FVar9) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar4 = *(int *)((longlong)FVar9 + 0xb8);
      if (iVar4 != 0) {
        iVar17 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                           (0xb0,8,iVar4,(ForElementType<Metasound::FFrontendQueryEntry> *)FVar10,
                            (int *)((longlong)FVar10 + 0xb8),(int *)((longlong)FVar10 + 0xbc));
        if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0) !=
            (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar9 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0);
        }
        if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar10 + 0xb0) !=
            (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar10 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar10 + 0xb0);
        }
        ConstructItems<Metasound::FFrontendQueryEntry,Metasound::FFrontendQueryEntry,int>
                  ((void *)((longlong)iVar17 * 0xb0 + (longlong)FVar10),(FFrontendQueryEntry *)FVar9
                   ,iVar4);
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// CanProcessRemovals @ 14ae65d10

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryFilterStep>::
CanProcessRemovals(TStepExecuterBase<Metasound::IFrontendQueryFilterStep> *this)

{
  return true;
}

// CanProcessRemovals @ 14ae65d20

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryLimitStep>::
CanProcessRemovals(TStepExecuterBase<Metasound::IFrontendQueryLimitStep> *this)

{
  return true;
}

// CanProcessRemovals @ 14ae65d30

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryMapStep>::
CanProcessRemovals(TStepExecuterBase<Metasound::IFrontendQueryMapStep> *this)

{
  return true;
}

// CanProcessRemovals @ 14ae65d40

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryMultiMapStep>::
CanProcessRemovals(TStepExecuterBase<Metasound::IFrontendQueryMultiMapStep> *this)

{
  return true;
}

// CanProcessRemovals @ 14ae65d50

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryReduceStep>::
CanProcessRemovals(TStepExecuterBase<Metasound::IFrontendQueryReduceStep> *this)

{
  return true;
}

// CanProcessRemovals @ 14ae65d60

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryScoreStep>::
CanProcessRemovals(TStepExecuterBase<Metasound::IFrontendQueryScoreStep> *this)

{
  return true;
}

// CanProcessRemovals @ 14ae65d70

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQuerySortStep>::
CanProcessRemovals(TStepExecuterBase<Metasound::IFrontendQuerySortStep> *this)

{
  return true;
}

// CanProcessRemovals @ 14ae65d80

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryStreamStep>::
CanProcessRemovals(TStepExecuterBase<Metasound::IFrontendQueryStreamStep> *this)

{
  return true;
}

// CanProcessRemovals @ 14ae65d90

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryTransformStep>::
CanProcessRemovals(TStepExecuterBase<Metasound::IFrontendQueryTransformStep> *this)

{
  return true;
}

// CanProduceEntries @ 14ae65dd0

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryFilterStep>::
CanProduceEntries(TStepExecuterBase<Metasound::IFrontendQueryFilterStep> *this)

{
  return false;
}

// CanProduceEntries @ 14ae65de0

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryLimitStep>::
CanProduceEntries(TStepExecuterBase<Metasound::IFrontendQueryLimitStep> *this)

{
  return false;
}

// CanProduceEntries @ 14ae65df0

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryMapStep>::
CanProduceEntries(TStepExecuterBase<Metasound::IFrontendQueryMapStep> *this)

{
  return false;
}

// CanProduceEntries @ 14ae65e00

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryMultiMapStep>::
CanProduceEntries(TStepExecuterBase<Metasound::IFrontendQueryMultiMapStep> *this)

{
  return false;
}

// CanProduceEntries @ 14ae65e10

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryReduceStep>::
CanProduceEntries(TStepExecuterBase<Metasound::IFrontendQueryReduceStep> *this)

{
  return false;
}

// CanProduceEntries @ 14ae65e20

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryScoreStep>::
CanProduceEntries(TStepExecuterBase<Metasound::IFrontendQueryScoreStep> *this)

{
  return false;
}

// CanProduceEntries @ 14ae65e30

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQuerySortStep>::
CanProduceEntries(TStepExecuterBase<Metasound::IFrontendQuerySortStep> *this)

{
  return false;
}

// CanProduceEntries @ 14ae65e40

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryStreamStep>::
CanProduceEntries(TStepExecuterBase<Metasound::IFrontendQueryStreamStep> *this)

{
  return false;
}

// CanProduceEntries @ 14ae65e50

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryTransformStep>::
CanProduceEntries(TStepExecuterBase<Metasound::IFrontendQueryTransformStep> *this)

{
  return false;
}

// IsDependentOnPartitionComposition @ 14ae7a3e0

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryFilterStep>::
IsDependentOnPartitionComposition(TStepExecuterBase<Metasound::IFrontendQueryFilterStep> *this)

{
  return false;
}

// IsDependentOnPartitionComposition @ 14ae7a3f0

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryLimitStep>::
IsDependentOnPartitionComposition(TStepExecuterBase<Metasound::IFrontendQueryLimitStep> *this)

{
  return false;
}

// IsDependentOnPartitionComposition @ 14ae7a400

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryMapStep>::
IsDependentOnPartitionComposition(TStepExecuterBase<Metasound::IFrontendQueryMapStep> *this)

{
  return false;
}

// IsDependentOnPartitionComposition @ 14ae7a410

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryMultiMapStep>::
IsDependentOnPartitionComposition(TStepExecuterBase<Metasound::IFrontendQueryMultiMapStep> *this)

{
  return false;
}

// IsDependentOnPartitionComposition @ 14ae7a420

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryReduceStep>::
IsDependentOnPartitionComposition(TStepExecuterBase<Metasound::IFrontendQueryReduceStep> *this)

{
  return false;
}

// IsDependentOnPartitionComposition @ 14ae7a430

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryScoreStep>::
IsDependentOnPartitionComposition(TStepExecuterBase<Metasound::IFrontendQueryScoreStep> *this)

{
  return false;
}

// IsDependentOnPartitionComposition @ 14ae7a440

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQuerySortStep>::
IsDependentOnPartitionComposition(TStepExecuterBase<Metasound::IFrontendQuerySortStep> *this)

{
  return false;
}

// IsDependentOnPartitionComposition @ 14ae7a450

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryStreamStep>::
IsDependentOnPartitionComposition(TStepExecuterBase<Metasound::IFrontendQueryStreamStep> *this)

{
  return false;
}

// IsDependentOnPartitionComposition @ 14ae7a460

bool __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryTransformStep>::
IsDependentOnPartitionComposition(TStepExecuterBase<Metasound::IFrontendQueryTransformStep> *this)

{
  return false;
}

// Merge @ 14ae7c8b0

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryFilterStep>::Merge
          (TStepExecuterBase<Metasound::IFrontendQueryFilterStep> *this,FIncremental *param_1,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_2)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSound::BaseQueryStep::Merge");
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryFilterStep>::Merge(Metasound::FFrontendQueryStep::FIncremental&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId502,"MetaSound::BaseQueryStep::Merge",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
               ,0x1f6);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryFilterStep>::Merge(Metasound::FFrontendQueryStep::FIncremental&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId502);
  }
  cVar3 = (**(code **)(this->_padding_ + 0x18))(this);
  if ((cVar3 != '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsDependentOnPartitionComposition()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
                         ,0x202,
                         L"Incorrect merge function called on step which is dependent upon merge composition"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  Remove(this,&param_1->ActiveRemovalKeys,&param_1->ActiveRemovalSelection,param_2);
  Append(this,&param_1->ActiveKeys,&param_1->ActiveSelection,param_2);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// Merge @ 14ae7c9d0

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryLimitStep>::Merge
          (TStepExecuterBase<Metasound::IFrontendQueryLimitStep> *this,FIncremental *param_1,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_2)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSound::BaseQueryStep::Merge");
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryLimitStep>::Merge(Metasound::FFrontendQueryStep::FIncremental&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId502,"MetaSound::BaseQueryStep::Merge",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
               ,0x1f6);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryLimitStep>::Merge(Metasound::FFrontendQueryStep::FIncremental&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId502);
  }
  cVar3 = (**(code **)(this->_padding_ + 0x18))(this);
  if ((cVar3 != '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsDependentOnPartitionComposition()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
                         ,0x202,
                         L"Incorrect merge function called on step which is dependent upon merge composition"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  Remove(this,&param_1->ActiveRemovalKeys,&param_1->ActiveRemovalSelection,param_2);
  Append(this,&param_1->ActiveKeys,&param_1->ActiveSelection,param_2);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// Merge @ 14ae7caf0

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryMapStep>::Merge
          (TStepExecuterBase<Metasound::IFrontendQueryMapStep> *this,FIncremental *param_1,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_2)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSound::BaseQueryStep::Merge");
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryMapStep>::Merge(Metasound::FFrontendQueryStep::FIncremental&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId502,"MetaSound::BaseQueryStep::Merge",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
               ,0x1f6);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryMapStep>::Merge(Metasound::FFrontendQueryStep::FIncremental&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId502);
  }
  cVar3 = (**(code **)(this->_padding_ + 0x18))(this);
  if ((cVar3 != '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsDependentOnPartitionComposition()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
                         ,0x202,
                         L"Incorrect merge function called on step which is dependent upon merge composition"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  Remove(this,&param_1->ActiveRemovalKeys,&param_1->ActiveRemovalSelection,param_2);
  Append(this,&param_1->ActiveKeys,&param_1->ActiveSelection,param_2);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// Merge @ 14ae7cc10

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryMultiMapStep>::Merge
          (TStepExecuterBase<Metasound::IFrontendQueryMultiMapStep> *this,FIncremental *param_1,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_2)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSound::BaseQueryStep::Merge");
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryMultiMapStep>::Merge(Metasound::FFrontendQueryStep::FIncremental&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId502,"MetaSound::BaseQueryStep::Merge",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
               ,0x1f6);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryMultiMapStep>::Merge(Metasound::FFrontendQueryStep::FIncremental&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId502);
  }
  cVar3 = (**(code **)(this->_padding_ + 0x18))(this);
  if ((cVar3 != '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsDependentOnPartitionComposition()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
                         ,0x202,
                         L"Incorrect merge function called on step which is dependent upon merge composition"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  Remove(this,&param_1->ActiveRemovalKeys,&param_1->ActiveRemovalSelection,param_2);
  Append(this,&param_1->ActiveKeys,&param_1->ActiveSelection,param_2);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// Merge @ 14ae7cd30

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryReduceStep>::Merge
          (TStepExecuterBase<Metasound::IFrontendQueryReduceStep> *this,FIncremental *param_1,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_2)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSound::BaseQueryStep::Merge");
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryReduceStep>::Merge(Metasound::FFrontendQueryStep::FIncremental&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId502,"MetaSound::BaseQueryStep::Merge",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
               ,0x1f6);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryReduceStep>::Merge(Metasound::FFrontendQueryStep::FIncremental&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId502);
  }
  cVar3 = (**(code **)(this->_padding_ + 0x18))(this);
  if ((cVar3 != '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsDependentOnPartitionComposition()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
                         ,0x202,
                         L"Incorrect merge function called on step which is dependent upon merge composition"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  Remove(this,&param_1->ActiveRemovalKeys,&param_1->ActiveRemovalSelection,param_2);
  Append(this,&param_1->ActiveKeys,&param_1->ActiveSelection,param_2);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// Merge @ 14ae7ce50

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryScoreStep>::Merge
          (TStepExecuterBase<Metasound::IFrontendQueryScoreStep> *this,FIncremental *param_1,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_2)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSound::BaseQueryStep::Merge");
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryScoreStep>::Merge(Metasound::FFrontendQueryStep::FIncremental&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId502,"MetaSound::BaseQueryStep::Merge",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
               ,0x1f6);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryScoreStep>::Merge(Metasound::FFrontendQueryStep::FIncremental&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId502);
  }
  cVar3 = (**(code **)(this->_padding_ + 0x18))(this);
  if ((cVar3 != '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsDependentOnPartitionComposition()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
                         ,0x202,
                         L"Incorrect merge function called on step which is dependent upon merge composition"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  Remove(this,&param_1->ActiveRemovalKeys,&param_1->ActiveRemovalSelection,param_2);
  Append(this,&param_1->ActiveKeys,&param_1->ActiveSelection,param_2);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// Merge @ 14ae7cf70

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQuerySortStep>::Merge
          (TStepExecuterBase<Metasound::IFrontendQuerySortStep> *this,FIncremental *param_1,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_2)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSound::BaseQueryStep::Merge");
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQuerySortStep>::Merge(Metasound::FFrontendQueryStep::FIncremental&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId502,"MetaSound::BaseQueryStep::Merge",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
               ,0x1f6);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQuerySortStep>::Merge(Metasound::FFrontendQueryStep::FIncremental&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId502);
  }
  cVar3 = (**(code **)(this->_padding_ + 0x18))(this);
  if ((cVar3 != '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsDependentOnPartitionComposition()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
                         ,0x202,
                         L"Incorrect merge function called on step which is dependent upon merge composition"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  Remove(this,&param_1->ActiveRemovalKeys,&param_1->ActiveRemovalSelection,param_2);
  Append(this,&param_1->ActiveKeys,&param_1->ActiveSelection,param_2);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// Merge @ 14ae7d090

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryStreamStep>::Merge
          (TStepExecuterBase<Metasound::IFrontendQueryStreamStep> *this,FIncremental *param_1,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_2)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSound::BaseQueryStep::Merge");
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryStreamStep>::Merge(Metasound::FFrontendQueryStep::FIncremental&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId502,"MetaSound::BaseQueryStep::Merge",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
               ,0x1f6);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryStreamStep>::Merge(Metasound::FFrontendQueryStep::FIncremental&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId502);
  }
  cVar3 = (**(code **)(this->_padding_ + 0x18))(this);
  if ((cVar3 != '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsDependentOnPartitionComposition()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
                         ,0x202,
                         L"Incorrect merge function called on step which is dependent upon merge composition"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  Remove(this,&param_1->ActiveRemovalKeys,&param_1->ActiveRemovalSelection,param_2);
  Append(this,&param_1->ActiveKeys,&param_1->ActiveSelection,param_2);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// Merge @ 14ae7d1b0

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryTransformStep>::Merge
          (TStepExecuterBase<Metasound::IFrontendQueryTransformStep> *this,FIncremental *param_1,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_2)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSound::BaseQueryStep::Merge");
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryTransformStep>::Merge(Metasound::FFrontendQueryStep::FIncremental&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId502,"MetaSound::BaseQueryStep::Merge",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
               ,0x1f6);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryTransformStep>::Merge(Metasound::FFrontendQueryStep::FIncremental&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId502);
  }
  cVar3 = (**(code **)(this->_padding_ + 0x18))(this);
  if ((cVar3 != '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsDependentOnPartitionComposition()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
                         ,0x202,
                         L"Incorrect merge function called on step which is dependent upon merge composition"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  Remove(this,&param_1->ActiveRemovalKeys,&param_1->ActiveRemovalSelection,param_2);
  Append(this,&param_1->ActiveKeys,&param_1->ActiveSelection,param_2);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// Remove @ 14ae838d0

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryFilterStep>::Remove
          (TStepExecuterBase<Metasound::IFrontendQueryFilterStep> *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  code *pcVar6;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  ForElementType<Metasound::FFrontendQueryEntry> FVar9;
  int *piVar10;
  longlong lVar11;
  int iVar12;
  ForElementType<Metasound::FFrontendQueryEntry> FVar13;
  ForElementType<Metasound::FFrontendQueryEntry> FVar14;
  uint uVar15;
  ForElementType<Metasound::FFrontendQueryEntry> FVar16;
  uint uVar17;
  uint *puVar18;
  undefined1 *puVar19;
  int iVar20;
  FFrontendQueryKey *pFVar21;
  int iVar22;
  int iVar23;
  ForElementType<Metasound::FFrontendQueryEntry> FVar24;
  longlong lVar25;
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
  *this_00;
  FKeyForward local_res10;
  undefined1 local_e7;
  undefined1 local_e6 [2];
  uint local_e4;
  int local_e0;
  int local_dc;
  ForElementType<Metasound::FFrontendQueryEntry> local_d8;
  ForElementType<Metasound::FFrontendQueryEntry> local_d0;
  uint local_c8;
  longlong local_c0;
  int *local_b8;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  ForElementType<Metasound::FFrontendQueryEntry> local_78;
  FFrontendQueryKey *local_70;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar23 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_a8 = 0;
  local_90 = 0;
  uStack_a4 = 1;
  iStack_94 = 0;
  if (iVar23 != 0) {
    puVar18 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar17 = *puVar18;
    while (uVar17 == 0) {
      lVar11 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar23;
      if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14ae8397d;
      uVar17 = puVar18[lVar11 + 1];
    }
    uStack_a4 = -uVar17 & uVar17;
    uVar4 = (ulonglong)uStack_a4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_80 = (int)lVar11;
    iStack_94 = local_80 + -1 + local_90;
    if (iVar23 < iStack_94) {
      iStack_94 = iVar23;
    }
  }
LAB_14ae8397d:
  uVar17 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_88 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar15 = uVar17 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uStack_98 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_94;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar17 >> 5;
  TStack_60._28_4_ = iStack_94;
  TStack_60.BaseBitIndex = local_90;
  uStack_40 = CONCAT44(uStack_84,iStack_88);
  local_e4 = uVar17;
  local_b0 = param_1;
  local_a0 = puVar1;
  iStack_8c = iStack_94;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar23 < (int)uVar17)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar17 != uVar5) {
    puVar19 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar12 * 4);
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar17 = uVar5;
      local_e4 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ae83a81;
      uVar17 = *(uint *)(puVar19 + lVar11 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_7c = (int)lVar11;
    uVar17 = local_7c + -1 + uVar15;
    local_e4 = uVar17;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
      local_e4 = uVar5;
    }
  }
LAB_14ae83a81:
  local_res10 = SUB81(param_1,0);
  do {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      local_e7 = 0;
      `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_e7);
    }
    if (((TStack_60.CurrentBitIndex == uVar17) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10)
        ) && (pTVar7 == param_1)) {
      return;
    }
    pFVar21 = (FFrontendQueryKey *)
              (*(longlong *)&pTVar7->Elements + (longlong)TStack_60.CurrentBitIndex * 0x28);
    local_70 = pFVar21;
    uVar17 = Algo::
             BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                       (&param_3->Pairs,pFVar21,local_res10,
                        (TLess<Metasound::FFrontendQueryKey_const_&>)local_res10);
    if (uVar17 != 0xffffffff) {
      uVar15 = 0;
      if ((int)uVar17 < (param_3->Pairs).ArrayNum) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar24 = (ForElementType<Metasound::FFrontendQueryEntry>)
               ((longlong)(param_3->Pairs).AllocatorInstance.Data +
               (longlong)(int)uVar17 * 0xe0 + 0x20);
      if (FVar24 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        local_d8 = (ForElementType<Metasound::FFrontendQueryEntry>)
                   TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   ::Find(param_2,pFVar21);
        FVar14 = FVar24;
        if (local_d8 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          local_b8 = (int *)((longlong)local_d8 + 0xb8);
          local_dc = *local_b8;
          if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)local_d8 + 0xb0) !=
              (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
            local_d8 = *(ForElementType<Metasound::FFrontendQueryEntry> *)
                        ((longlong)local_d8 + 0xb0);
          }
          FVar13 = (ForElementType<Metasound::FFrontendQueryEntry>)
                   ((longlong)local_dc * 0xb0 + (longlong)local_d8);
          local_d0 = FVar24;
          local_78 = FVar13;
          while( true ) {
            FVar16 = local_d8;
            if (*local_b8 != local_dc) {
              local_e6[0] = 0;
              `TCheckedPointerIterator<Metasound::FFrontendQueryEntry_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_e6);
            }
            pFVar21 = local_70;
            FVar14 = local_d0;
            if (FVar16 == FVar13) break;
            FVar14 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar24 + 0xb0);
            FVar9 = FVar24;
            if (FVar14 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              FVar9 = FVar14;
            }
            if ((ulonglong)FVar9 <= (ulonglong)FVar16) {
              FVar9 = FVar24;
              if (FVar14 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                FVar9 = FVar14;
              }
              if (((ulonglong)FVar16 <
                   (ulonglong)((longlong)*(int *)((longlong)FVar24 + 0xbc) * 0xb0 + (longlong)FVar9)
                  ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            lVar11 = (longlong)*(int *)((longlong)FVar24 + 0xb8);
            if (*(int *)((longlong)FVar24 + 0xb8) != 0) {
              FVar14 = FVar24;
              if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar24 + 0xb0) !=
                  (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                FVar14 = *(ForElementType<Metasound::FFrontendQueryEntry> *)
                          ((longlong)FVar24 + 0xb0);
              }
              iVar23 = 0;
              lVar25 = 0;
              local_e0 = 0;
              bVar8 = ((*(int *)((longlong)FVar16 + 0xc) != *(int *)((longlong)FVar14 + 0xc) ||
                       *(int *)((longlong)FVar16 + 4) != *(int *)((longlong)FVar14 + 4)) ||
                      *(int *)((longlong)FVar14 + 8) != *(int *)((longlong)FVar16 + 8)) ||
                      *(int *)FVar16 != *(int *)FVar14;
              local_c0 = lVar11;
              iVar12 = 0;
              do {
                lVar25 = lVar25 + 1;
                iVar20 = iVar12 + 1;
                if (lVar25 < lVar11) {
                  iVar22 = *(int *)FVar16;
                  piVar2 = (int *)((longlong)FVar16 + 4);
                  piVar3 = (int *)((longlong)FVar16 + 8);
                  local_c8 = (uint)bVar8;
                  piVar10 = (int *)(lVar25 * 0xb0 + 8 + (longlong)FVar14);
                  do {
                    FVar16 = local_d8;
                    iVar23 = local_e0;
                    if (local_c8 !=
                        (((iVar22 != piVar10[-2] || *piVar2 != piVar10[-1]) ||
                         *(int *)((longlong)local_d8 + 0xc) != piVar10[1]) || *piVar3 != *piVar10))
                    break;
                    iVar20 = iVar20 + 1;
                    lVar25 = lVar25 + 1;
                    piVar10 = piVar10 + 0x2c;
                  } while (lVar25 < lVar11);
                }
                iVar22 = iVar20 - iVar12;
                if (bVar8 == false) {
                  DestructItems<Metasound::FFrontendQueryEntry,int>
                            ((FFrontendQueryEntry *)((longlong)iVar12 * 0xb0 + (longlong)FVar14),
                             iVar22);
                  lVar11 = local_c0;
                }
                else {
                  if (iVar23 != iVar12) {
                    memmove((int *)((longlong)iVar23 * 0xb0 + (longlong)FVar14),
                            (int *)((longlong)iVar12 * 0xb0 + (longlong)FVar14),
                            (longlong)iVar22 * 0xb0);
                    lVar11 = local_c0;
                  }
                  iVar23 = iVar23 + iVar22;
                  local_e0 = iVar23;
                }
                bVar8 = (bool)(bVar8 ^ 1);
                iVar12 = iVar20;
              } while (lVar25 < lVar11);
              *(int *)((longlong)FVar24 + 0xb8) = iVar23;
              FVar13 = local_78;
            }
            local_d8 = (ForElementType<Metasound::FFrontendQueryEntry>)((longlong)FVar16 + 0xb0);
          }
        }
        if (*(int *)((longlong)FVar14 + 0xb8) == 0) {
          uVar17 = Algo::
                   BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                             (&param_3->Pairs,pFVar21,local_res10,
                              (TLess<Metasound::FFrontendQueryKey_const_&>)local_res10);
          if (uVar17 != 0xffffffff) {
            uVar15 = 0;
            if ((int)uVar17 < (param_3->Pairs).ArrayNum) {
              uVar15 = ~uVar17 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            this_00 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                       *)((param_3->Pairs).AllocatorInstance.Data + (longlong)(int)uVar17 * 0xe0);
            UE::Core::Private::Tuple::
            TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
            ::
            ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                      (this_00);
            iVar23 = (param_3->Pairs).ArrayNum + ~uVar17;
            if (iVar23 != 0) {
              memmove(this_00,this_00 + 1,(longlong)iVar23 * 0xe0);
            }
            piVar2 = &(param_3->Pairs).ArrayNum;
            *piVar2 = *piVar2 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xe0,8,(ForAnyElementType *)param_3,(param_3->Pairs).ArrayNum,
                       &(param_3->Pairs).ArrayMax);
          }
        }
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    uVar17 = local_e4;
  } while( true );
}

// Remove @ 14ae83f30

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryLimitStep>::Remove
          (TStepExecuterBase<Metasound::IFrontendQueryLimitStep> *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  code *pcVar6;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  ForElementType<Metasound::FFrontendQueryEntry> FVar9;
  int *piVar10;
  longlong lVar11;
  int iVar12;
  ForElementType<Metasound::FFrontendQueryEntry> FVar13;
  ForElementType<Metasound::FFrontendQueryEntry> FVar14;
  uint uVar15;
  ForElementType<Metasound::FFrontendQueryEntry> FVar16;
  uint uVar17;
  uint *puVar18;
  undefined1 *puVar19;
  int iVar20;
  FFrontendQueryKey *pFVar21;
  int iVar22;
  int iVar23;
  ForElementType<Metasound::FFrontendQueryEntry> FVar24;
  longlong lVar25;
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
  *this_00;
  FKeyForward local_res10;
  undefined1 local_e7;
  undefined1 local_e6 [2];
  uint local_e4;
  int local_e0;
  int local_dc;
  ForElementType<Metasound::FFrontendQueryEntry> local_d8;
  ForElementType<Metasound::FFrontendQueryEntry> local_d0;
  uint local_c8;
  longlong local_c0;
  int *local_b8;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  ForElementType<Metasound::FFrontendQueryEntry> local_78;
  FFrontendQueryKey *local_70;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar23 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_a8 = 0;
  local_90 = 0;
  uStack_a4 = 1;
  iStack_94 = 0;
  if (iVar23 != 0) {
    puVar18 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar17 = *puVar18;
    while (uVar17 == 0) {
      lVar11 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar23;
      if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14ae83fdd;
      uVar17 = puVar18[lVar11 + 1];
    }
    uStack_a4 = -uVar17 & uVar17;
    uVar4 = (ulonglong)uStack_a4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_80 = (int)lVar11;
    iStack_94 = local_80 + -1 + local_90;
    if (iVar23 < iStack_94) {
      iStack_94 = iVar23;
    }
  }
LAB_14ae83fdd:
  uVar17 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_88 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar15 = uVar17 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uStack_98 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_94;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar17 >> 5;
  TStack_60._28_4_ = iStack_94;
  TStack_60.BaseBitIndex = local_90;
  uStack_40 = CONCAT44(uStack_84,iStack_88);
  local_e4 = uVar17;
  local_b0 = param_1;
  local_a0 = puVar1;
  iStack_8c = iStack_94;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar23 < (int)uVar17)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar17 != uVar5) {
    puVar19 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar12 * 4);
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar17 = uVar5;
      local_e4 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ae840e1;
      uVar17 = *(uint *)(puVar19 + lVar11 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_7c = (int)lVar11;
    uVar17 = local_7c + -1 + uVar15;
    local_e4 = uVar17;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
      local_e4 = uVar5;
    }
  }
LAB_14ae840e1:
  local_res10 = SUB81(param_1,0);
  do {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      local_e7 = 0;
      `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_e7);
    }
    if (((TStack_60.CurrentBitIndex == uVar17) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10)
        ) && (pTVar7 == param_1)) {
      return;
    }
    pFVar21 = (FFrontendQueryKey *)
              (*(longlong *)&pTVar7->Elements + (longlong)TStack_60.CurrentBitIndex * 0x28);
    local_70 = pFVar21;
    uVar17 = Algo::
             BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                       (&param_3->Pairs,pFVar21,local_res10,
                        (TLess<Metasound::FFrontendQueryKey_const_&>)local_res10);
    if (uVar17 != 0xffffffff) {
      uVar15 = 0;
      if ((int)uVar17 < (param_3->Pairs).ArrayNum) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar24 = (ForElementType<Metasound::FFrontendQueryEntry>)
               ((longlong)(param_3->Pairs).AllocatorInstance.Data +
               (longlong)(int)uVar17 * 0xe0 + 0x20);
      if (FVar24 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        local_d8 = (ForElementType<Metasound::FFrontendQueryEntry>)
                   TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   ::Find(param_2,pFVar21);
        FVar14 = FVar24;
        if (local_d8 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          local_b8 = (int *)((longlong)local_d8 + 0xb8);
          local_dc = *local_b8;
          if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)local_d8 + 0xb0) !=
              (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
            local_d8 = *(ForElementType<Metasound::FFrontendQueryEntry> *)
                        ((longlong)local_d8 + 0xb0);
          }
          FVar13 = (ForElementType<Metasound::FFrontendQueryEntry>)
                   ((longlong)local_dc * 0xb0 + (longlong)local_d8);
          local_d0 = FVar24;
          local_78 = FVar13;
          while( true ) {
            FVar16 = local_d8;
            if (*local_b8 != local_dc) {
              local_e6[0] = 0;
              `TCheckedPointerIterator<Metasound::FFrontendQueryEntry_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_e6);
            }
            pFVar21 = local_70;
            FVar14 = local_d0;
            if (FVar16 == FVar13) break;
            FVar14 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar24 + 0xb0);
            FVar9 = FVar24;
            if (FVar14 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              FVar9 = FVar14;
            }
            if ((ulonglong)FVar9 <= (ulonglong)FVar16) {
              FVar9 = FVar24;
              if (FVar14 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                FVar9 = FVar14;
              }
              if (((ulonglong)FVar16 <
                   (ulonglong)((longlong)*(int *)((longlong)FVar24 + 0xbc) * 0xb0 + (longlong)FVar9)
                  ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            lVar11 = (longlong)*(int *)((longlong)FVar24 + 0xb8);
            if (*(int *)((longlong)FVar24 + 0xb8) != 0) {
              FVar14 = FVar24;
              if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar24 + 0xb0) !=
                  (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                FVar14 = *(ForElementType<Metasound::FFrontendQueryEntry> *)
                          ((longlong)FVar24 + 0xb0);
              }
              iVar23 = 0;
              lVar25 = 0;
              local_e0 = 0;
              bVar8 = ((*(int *)((longlong)FVar16 + 0xc) != *(int *)((longlong)FVar14 + 0xc) ||
                       *(int *)((longlong)FVar16 + 4) != *(int *)((longlong)FVar14 + 4)) ||
                      *(int *)((longlong)FVar14 + 8) != *(int *)((longlong)FVar16 + 8)) ||
                      *(int *)FVar16 != *(int *)FVar14;
              local_c0 = lVar11;
              iVar12 = 0;
              do {
                lVar25 = lVar25 + 1;
                iVar20 = iVar12 + 1;
                if (lVar25 < lVar11) {
                  iVar22 = *(int *)FVar16;
                  piVar2 = (int *)((longlong)FVar16 + 4);
                  piVar3 = (int *)((longlong)FVar16 + 8);
                  local_c8 = (uint)bVar8;
                  piVar10 = (int *)(lVar25 * 0xb0 + 8 + (longlong)FVar14);
                  do {
                    FVar16 = local_d8;
                    iVar23 = local_e0;
                    if (local_c8 !=
                        (((iVar22 != piVar10[-2] || *piVar2 != piVar10[-1]) ||
                         *(int *)((longlong)local_d8 + 0xc) != piVar10[1]) || *piVar3 != *piVar10))
                    break;
                    iVar20 = iVar20 + 1;
                    lVar25 = lVar25 + 1;
                    piVar10 = piVar10 + 0x2c;
                  } while (lVar25 < lVar11);
                }
                iVar22 = iVar20 - iVar12;
                if (bVar8 == false) {
                  DestructItems<Metasound::FFrontendQueryEntry,int>
                            ((FFrontendQueryEntry *)((longlong)iVar12 * 0xb0 + (longlong)FVar14),
                             iVar22);
                  lVar11 = local_c0;
                }
                else {
                  if (iVar23 != iVar12) {
                    memmove((int *)((longlong)iVar23 * 0xb0 + (longlong)FVar14),
                            (int *)((longlong)iVar12 * 0xb0 + (longlong)FVar14),
                            (longlong)iVar22 * 0xb0);
                    lVar11 = local_c0;
                  }
                  iVar23 = iVar23 + iVar22;
                  local_e0 = iVar23;
                }
                bVar8 = (bool)(bVar8 ^ 1);
                iVar12 = iVar20;
              } while (lVar25 < lVar11);
              *(int *)((longlong)FVar24 + 0xb8) = iVar23;
              FVar13 = local_78;
            }
            local_d8 = (ForElementType<Metasound::FFrontendQueryEntry>)((longlong)FVar16 + 0xb0);
          }
        }
        if (*(int *)((longlong)FVar14 + 0xb8) == 0) {
          uVar17 = Algo::
                   BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                             (&param_3->Pairs,pFVar21,local_res10,
                              (TLess<Metasound::FFrontendQueryKey_const_&>)local_res10);
          if (uVar17 != 0xffffffff) {
            uVar15 = 0;
            if ((int)uVar17 < (param_3->Pairs).ArrayNum) {
              uVar15 = ~uVar17 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            this_00 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                       *)((param_3->Pairs).AllocatorInstance.Data + (longlong)(int)uVar17 * 0xe0);
            UE::Core::Private::Tuple::
            TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
            ::
            ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                      (this_00);
            iVar23 = (param_3->Pairs).ArrayNum + ~uVar17;
            if (iVar23 != 0) {
              memmove(this_00,this_00 + 1,(longlong)iVar23 * 0xe0);
            }
            piVar2 = &(param_3->Pairs).ArrayNum;
            *piVar2 = *piVar2 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xe0,8,(ForAnyElementType *)param_3,(param_3->Pairs).ArrayNum,
                       &(param_3->Pairs).ArrayMax);
          }
        }
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    uVar17 = local_e4;
  } while( true );
}

// Remove @ 14ae84590

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryMapStep>::Remove
          (TStepExecuterBase<Metasound::IFrontendQueryMapStep> *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  code *pcVar6;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  ForElementType<Metasound::FFrontendQueryEntry> FVar9;
  int *piVar10;
  longlong lVar11;
  int iVar12;
  ForElementType<Metasound::FFrontendQueryEntry> FVar13;
  ForElementType<Metasound::FFrontendQueryEntry> FVar14;
  uint uVar15;
  ForElementType<Metasound::FFrontendQueryEntry> FVar16;
  uint uVar17;
  uint *puVar18;
  undefined1 *puVar19;
  int iVar20;
  FFrontendQueryKey *pFVar21;
  int iVar22;
  int iVar23;
  ForElementType<Metasound::FFrontendQueryEntry> FVar24;
  longlong lVar25;
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
  *this_00;
  FKeyForward local_res10;
  undefined1 local_e7;
  undefined1 local_e6 [2];
  uint local_e4;
  int local_e0;
  int local_dc;
  ForElementType<Metasound::FFrontendQueryEntry> local_d8;
  ForElementType<Metasound::FFrontendQueryEntry> local_d0;
  uint local_c8;
  longlong local_c0;
  int *local_b8;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  ForElementType<Metasound::FFrontendQueryEntry> local_78;
  FFrontendQueryKey *local_70;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar23 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_a8 = 0;
  local_90 = 0;
  uStack_a4 = 1;
  iStack_94 = 0;
  if (iVar23 != 0) {
    puVar18 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar17 = *puVar18;
    while (uVar17 == 0) {
      lVar11 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar23;
      if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14ae8463d;
      uVar17 = puVar18[lVar11 + 1];
    }
    uStack_a4 = -uVar17 & uVar17;
    uVar4 = (ulonglong)uStack_a4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_80 = (int)lVar11;
    iStack_94 = local_80 + -1 + local_90;
    if (iVar23 < iStack_94) {
      iStack_94 = iVar23;
    }
  }
LAB_14ae8463d:
  uVar17 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_88 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar15 = uVar17 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uStack_98 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_94;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar17 >> 5;
  TStack_60._28_4_ = iStack_94;
  TStack_60.BaseBitIndex = local_90;
  uStack_40 = CONCAT44(uStack_84,iStack_88);
  local_e4 = uVar17;
  local_b0 = param_1;
  local_a0 = puVar1;
  iStack_8c = iStack_94;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar23 < (int)uVar17)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar17 != uVar5) {
    puVar19 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar12 * 4);
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar17 = uVar5;
      local_e4 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ae84741;
      uVar17 = *(uint *)(puVar19 + lVar11 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_7c = (int)lVar11;
    uVar17 = local_7c + -1 + uVar15;
    local_e4 = uVar17;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
      local_e4 = uVar5;
    }
  }
LAB_14ae84741:
  local_res10 = SUB81(param_1,0);
  do {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      local_e7 = 0;
      `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_e7);
    }
    if (((TStack_60.CurrentBitIndex == uVar17) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10)
        ) && (pTVar7 == param_1)) {
      return;
    }
    pFVar21 = (FFrontendQueryKey *)
              (*(longlong *)&pTVar7->Elements + (longlong)TStack_60.CurrentBitIndex * 0x28);
    local_70 = pFVar21;
    uVar17 = Algo::
             BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                       (&param_3->Pairs,pFVar21,local_res10,
                        (TLess<Metasound::FFrontendQueryKey_const_&>)local_res10);
    if (uVar17 != 0xffffffff) {
      uVar15 = 0;
      if ((int)uVar17 < (param_3->Pairs).ArrayNum) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar24 = (ForElementType<Metasound::FFrontendQueryEntry>)
               ((longlong)(param_3->Pairs).AllocatorInstance.Data +
               (longlong)(int)uVar17 * 0xe0 + 0x20);
      if (FVar24 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        local_d8 = (ForElementType<Metasound::FFrontendQueryEntry>)
                   TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   ::Find(param_2,pFVar21);
        FVar14 = FVar24;
        if (local_d8 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          local_b8 = (int *)((longlong)local_d8 + 0xb8);
          local_dc = *local_b8;
          if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)local_d8 + 0xb0) !=
              (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
            local_d8 = *(ForElementType<Metasound::FFrontendQueryEntry> *)
                        ((longlong)local_d8 + 0xb0);
          }
          FVar13 = (ForElementType<Metasound::FFrontendQueryEntry>)
                   ((longlong)local_dc * 0xb0 + (longlong)local_d8);
          local_d0 = FVar24;
          local_78 = FVar13;
          while( true ) {
            FVar16 = local_d8;
            if (*local_b8 != local_dc) {
              local_e6[0] = 0;
              `TCheckedPointerIterator<Metasound::FFrontendQueryEntry_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_e6);
            }
            pFVar21 = local_70;
            FVar14 = local_d0;
            if (FVar16 == FVar13) break;
            FVar14 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar24 + 0xb0);
            FVar9 = FVar24;
            if (FVar14 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              FVar9 = FVar14;
            }
            if ((ulonglong)FVar9 <= (ulonglong)FVar16) {
              FVar9 = FVar24;
              if (FVar14 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                FVar9 = FVar14;
              }
              if (((ulonglong)FVar16 <
                   (ulonglong)((longlong)*(int *)((longlong)FVar24 + 0xbc) * 0xb0 + (longlong)FVar9)
                  ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            lVar11 = (longlong)*(int *)((longlong)FVar24 + 0xb8);
            if (*(int *)((longlong)FVar24 + 0xb8) != 0) {
              FVar14 = FVar24;
              if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar24 + 0xb0) !=
                  (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                FVar14 = *(ForElementType<Metasound::FFrontendQueryEntry> *)
                          ((longlong)FVar24 + 0xb0);
              }
              iVar23 = 0;
              lVar25 = 0;
              local_e0 = 0;
              bVar8 = ((*(int *)((longlong)FVar16 + 0xc) != *(int *)((longlong)FVar14 + 0xc) ||
                       *(int *)((longlong)FVar16 + 4) != *(int *)((longlong)FVar14 + 4)) ||
                      *(int *)((longlong)FVar14 + 8) != *(int *)((longlong)FVar16 + 8)) ||
                      *(int *)FVar16 != *(int *)FVar14;
              local_c0 = lVar11;
              iVar12 = 0;
              do {
                lVar25 = lVar25 + 1;
                iVar20 = iVar12 + 1;
                if (lVar25 < lVar11) {
                  iVar22 = *(int *)FVar16;
                  piVar2 = (int *)((longlong)FVar16 + 4);
                  piVar3 = (int *)((longlong)FVar16 + 8);
                  local_c8 = (uint)bVar8;
                  piVar10 = (int *)(lVar25 * 0xb0 + 8 + (longlong)FVar14);
                  do {
                    FVar16 = local_d8;
                    iVar23 = local_e0;
                    if (local_c8 !=
                        (((iVar22 != piVar10[-2] || *piVar2 != piVar10[-1]) ||
                         *(int *)((longlong)local_d8 + 0xc) != piVar10[1]) || *piVar3 != *piVar10))
                    break;
                    iVar20 = iVar20 + 1;
                    lVar25 = lVar25 + 1;
                    piVar10 = piVar10 + 0x2c;
                  } while (lVar25 < lVar11);
                }
                iVar22 = iVar20 - iVar12;
                if (bVar8 == false) {
                  DestructItems<Metasound::FFrontendQueryEntry,int>
                            ((FFrontendQueryEntry *)((longlong)iVar12 * 0xb0 + (longlong)FVar14),
                             iVar22);
                  lVar11 = local_c0;
                }
                else {
                  if (iVar23 != iVar12) {
                    memmove((int *)((longlong)iVar23 * 0xb0 + (longlong)FVar14),
                            (int *)((longlong)iVar12 * 0xb0 + (longlong)FVar14),
                            (longlong)iVar22 * 0xb0);
                    lVar11 = local_c0;
                  }
                  iVar23 = iVar23 + iVar22;
                  local_e0 = iVar23;
                }
                bVar8 = (bool)(bVar8 ^ 1);
                iVar12 = iVar20;
              } while (lVar25 < lVar11);
              *(int *)((longlong)FVar24 + 0xb8) = iVar23;
              FVar13 = local_78;
            }
            local_d8 = (ForElementType<Metasound::FFrontendQueryEntry>)((longlong)FVar16 + 0xb0);
          }
        }
        if (*(int *)((longlong)FVar14 + 0xb8) == 0) {
          uVar17 = Algo::
                   BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                             (&param_3->Pairs,pFVar21,local_res10,
                              (TLess<Metasound::FFrontendQueryKey_const_&>)local_res10);
          if (uVar17 != 0xffffffff) {
            uVar15 = 0;
            if ((int)uVar17 < (param_3->Pairs).ArrayNum) {
              uVar15 = ~uVar17 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            this_00 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                       *)((param_3->Pairs).AllocatorInstance.Data + (longlong)(int)uVar17 * 0xe0);
            UE::Core::Private::Tuple::
            TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
            ::
            ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                      (this_00);
            iVar23 = (param_3->Pairs).ArrayNum + ~uVar17;
            if (iVar23 != 0) {
              memmove(this_00,this_00 + 1,(longlong)iVar23 * 0xe0);
            }
            piVar2 = &(param_3->Pairs).ArrayNum;
            *piVar2 = *piVar2 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xe0,8,(ForAnyElementType *)param_3,(param_3->Pairs).ArrayNum,
                       &(param_3->Pairs).ArrayMax);
          }
        }
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    uVar17 = local_e4;
  } while( true );
}

// Remove @ 14ae84bf0

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryMultiMapStep>::Remove
          (TStepExecuterBase<Metasound::IFrontendQueryMultiMapStep> *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  code *pcVar6;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  ForElementType<Metasound::FFrontendQueryEntry> FVar9;
  int *piVar10;
  longlong lVar11;
  int iVar12;
  ForElementType<Metasound::FFrontendQueryEntry> FVar13;
  ForElementType<Metasound::FFrontendQueryEntry> FVar14;
  uint uVar15;
  ForElementType<Metasound::FFrontendQueryEntry> FVar16;
  uint uVar17;
  uint *puVar18;
  undefined1 *puVar19;
  int iVar20;
  FFrontendQueryKey *pFVar21;
  int iVar22;
  int iVar23;
  ForElementType<Metasound::FFrontendQueryEntry> FVar24;
  longlong lVar25;
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
  *this_00;
  FKeyForward local_res10;
  undefined1 local_e7;
  undefined1 local_e6 [2];
  uint local_e4;
  int local_e0;
  int local_dc;
  ForElementType<Metasound::FFrontendQueryEntry> local_d8;
  ForElementType<Metasound::FFrontendQueryEntry> local_d0;
  uint local_c8;
  longlong local_c0;
  int *local_b8;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  ForElementType<Metasound::FFrontendQueryEntry> local_78;
  FFrontendQueryKey *local_70;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar23 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_a8 = 0;
  local_90 = 0;
  uStack_a4 = 1;
  iStack_94 = 0;
  if (iVar23 != 0) {
    puVar18 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar17 = *puVar18;
    while (uVar17 == 0) {
      lVar11 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar23;
      if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14ae84c9d;
      uVar17 = puVar18[lVar11 + 1];
    }
    uStack_a4 = -uVar17 & uVar17;
    uVar4 = (ulonglong)uStack_a4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_80 = (int)lVar11;
    iStack_94 = local_80 + -1 + local_90;
    if (iVar23 < iStack_94) {
      iStack_94 = iVar23;
    }
  }
LAB_14ae84c9d:
  uVar17 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_88 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar15 = uVar17 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uStack_98 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_94;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar17 >> 5;
  TStack_60._28_4_ = iStack_94;
  TStack_60.BaseBitIndex = local_90;
  uStack_40 = CONCAT44(uStack_84,iStack_88);
  local_e4 = uVar17;
  local_b0 = param_1;
  local_a0 = puVar1;
  iStack_8c = iStack_94;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar23 < (int)uVar17)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar17 != uVar5) {
    puVar19 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar12 * 4);
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar17 = uVar5;
      local_e4 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ae84da1;
      uVar17 = *(uint *)(puVar19 + lVar11 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_7c = (int)lVar11;
    uVar17 = local_7c + -1 + uVar15;
    local_e4 = uVar17;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
      local_e4 = uVar5;
    }
  }
LAB_14ae84da1:
  local_res10 = SUB81(param_1,0);
  do {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      local_e7 = 0;
      `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_e7);
    }
    if (((TStack_60.CurrentBitIndex == uVar17) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10)
        ) && (pTVar7 == param_1)) {
      return;
    }
    pFVar21 = (FFrontendQueryKey *)
              (*(longlong *)&pTVar7->Elements + (longlong)TStack_60.CurrentBitIndex * 0x28);
    local_70 = pFVar21;
    uVar17 = Algo::
             BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                       (&param_3->Pairs,pFVar21,local_res10,
                        (TLess<Metasound::FFrontendQueryKey_const_&>)local_res10);
    if (uVar17 != 0xffffffff) {
      uVar15 = 0;
      if ((int)uVar17 < (param_3->Pairs).ArrayNum) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar24 = (ForElementType<Metasound::FFrontendQueryEntry>)
               ((longlong)(param_3->Pairs).AllocatorInstance.Data +
               (longlong)(int)uVar17 * 0xe0 + 0x20);
      if (FVar24 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        local_d8 = (ForElementType<Metasound::FFrontendQueryEntry>)
                   TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   ::Find(param_2,pFVar21);
        FVar14 = FVar24;
        if (local_d8 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          local_b8 = (int *)((longlong)local_d8 + 0xb8);
          local_dc = *local_b8;
          if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)local_d8 + 0xb0) !=
              (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
            local_d8 = *(ForElementType<Metasound::FFrontendQueryEntry> *)
                        ((longlong)local_d8 + 0xb0);
          }
          FVar13 = (ForElementType<Metasound::FFrontendQueryEntry>)
                   ((longlong)local_dc * 0xb0 + (longlong)local_d8);
          local_d0 = FVar24;
          local_78 = FVar13;
          while( true ) {
            FVar16 = local_d8;
            if (*local_b8 != local_dc) {
              local_e6[0] = 0;
              `TCheckedPointerIterator<Metasound::FFrontendQueryEntry_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_e6);
            }
            pFVar21 = local_70;
            FVar14 = local_d0;
            if (FVar16 == FVar13) break;
            FVar14 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar24 + 0xb0);
            FVar9 = FVar24;
            if (FVar14 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              FVar9 = FVar14;
            }
            if ((ulonglong)FVar9 <= (ulonglong)FVar16) {
              FVar9 = FVar24;
              if (FVar14 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                FVar9 = FVar14;
              }
              if (((ulonglong)FVar16 <
                   (ulonglong)((longlong)*(int *)((longlong)FVar24 + 0xbc) * 0xb0 + (longlong)FVar9)
                  ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            lVar11 = (longlong)*(int *)((longlong)FVar24 + 0xb8);
            if (*(int *)((longlong)FVar24 + 0xb8) != 0) {
              FVar14 = FVar24;
              if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar24 + 0xb0) !=
                  (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                FVar14 = *(ForElementType<Metasound::FFrontendQueryEntry> *)
                          ((longlong)FVar24 + 0xb0);
              }
              iVar23 = 0;
              lVar25 = 0;
              local_e0 = 0;
              bVar8 = ((*(int *)((longlong)FVar16 + 0xc) != *(int *)((longlong)FVar14 + 0xc) ||
                       *(int *)((longlong)FVar16 + 4) != *(int *)((longlong)FVar14 + 4)) ||
                      *(int *)((longlong)FVar14 + 8) != *(int *)((longlong)FVar16 + 8)) ||
                      *(int *)FVar16 != *(int *)FVar14;
              local_c0 = lVar11;
              iVar12 = 0;
              do {
                lVar25 = lVar25 + 1;
                iVar20 = iVar12 + 1;
                if (lVar25 < lVar11) {
                  iVar22 = *(int *)FVar16;
                  piVar2 = (int *)((longlong)FVar16 + 4);
                  piVar3 = (int *)((longlong)FVar16 + 8);
                  local_c8 = (uint)bVar8;
                  piVar10 = (int *)(lVar25 * 0xb0 + 8 + (longlong)FVar14);
                  do {
                    FVar16 = local_d8;
                    iVar23 = local_e0;
                    if (local_c8 !=
                        (((iVar22 != piVar10[-2] || *piVar2 != piVar10[-1]) ||
                         *(int *)((longlong)local_d8 + 0xc) != piVar10[1]) || *piVar3 != *piVar10))
                    break;
                    iVar20 = iVar20 + 1;
                    lVar25 = lVar25 + 1;
                    piVar10 = piVar10 + 0x2c;
                  } while (lVar25 < lVar11);
                }
                iVar22 = iVar20 - iVar12;
                if (bVar8 == false) {
                  DestructItems<Metasound::FFrontendQueryEntry,int>
                            ((FFrontendQueryEntry *)((longlong)iVar12 * 0xb0 + (longlong)FVar14),
                             iVar22);
                  lVar11 = local_c0;
                }
                else {
                  if (iVar23 != iVar12) {
                    memmove((int *)((longlong)iVar23 * 0xb0 + (longlong)FVar14),
                            (int *)((longlong)iVar12 * 0xb0 + (longlong)FVar14),
                            (longlong)iVar22 * 0xb0);
                    lVar11 = local_c0;
                  }
                  iVar23 = iVar23 + iVar22;
                  local_e0 = iVar23;
                }
                bVar8 = (bool)(bVar8 ^ 1);
                iVar12 = iVar20;
              } while (lVar25 < lVar11);
              *(int *)((longlong)FVar24 + 0xb8) = iVar23;
              FVar13 = local_78;
            }
            local_d8 = (ForElementType<Metasound::FFrontendQueryEntry>)((longlong)FVar16 + 0xb0);
          }
        }
        if (*(int *)((longlong)FVar14 + 0xb8) == 0) {
          uVar17 = Algo::
                   BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                             (&param_3->Pairs,pFVar21,local_res10,
                              (TLess<Metasound::FFrontendQueryKey_const_&>)local_res10);
          if (uVar17 != 0xffffffff) {
            uVar15 = 0;
            if ((int)uVar17 < (param_3->Pairs).ArrayNum) {
              uVar15 = ~uVar17 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            this_00 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                       *)((param_3->Pairs).AllocatorInstance.Data + (longlong)(int)uVar17 * 0xe0);
            UE::Core::Private::Tuple::
            TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
            ::
            ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                      (this_00);
            iVar23 = (param_3->Pairs).ArrayNum + ~uVar17;
            if (iVar23 != 0) {
              memmove(this_00,this_00 + 1,(longlong)iVar23 * 0xe0);
            }
            piVar2 = &(param_3->Pairs).ArrayNum;
            *piVar2 = *piVar2 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xe0,8,(ForAnyElementType *)param_3,(param_3->Pairs).ArrayNum,
                       &(param_3->Pairs).ArrayMax);
          }
        }
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    uVar17 = local_e4;
  } while( true );
}

// Remove @ 14ae85250

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryReduceStep>::Remove
          (TStepExecuterBase<Metasound::IFrontendQueryReduceStep> *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  code *pcVar6;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  ForElementType<Metasound::FFrontendQueryEntry> FVar9;
  int *piVar10;
  longlong lVar11;
  int iVar12;
  ForElementType<Metasound::FFrontendQueryEntry> FVar13;
  ForElementType<Metasound::FFrontendQueryEntry> FVar14;
  uint uVar15;
  ForElementType<Metasound::FFrontendQueryEntry> FVar16;
  uint uVar17;
  uint *puVar18;
  undefined1 *puVar19;
  int iVar20;
  FFrontendQueryKey *pFVar21;
  int iVar22;
  int iVar23;
  ForElementType<Metasound::FFrontendQueryEntry> FVar24;
  longlong lVar25;
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
  *this_00;
  FKeyForward local_res10;
  undefined1 local_e7;
  undefined1 local_e6 [2];
  uint local_e4;
  int local_e0;
  int local_dc;
  ForElementType<Metasound::FFrontendQueryEntry> local_d8;
  ForElementType<Metasound::FFrontendQueryEntry> local_d0;
  uint local_c8;
  longlong local_c0;
  int *local_b8;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  ForElementType<Metasound::FFrontendQueryEntry> local_78;
  FFrontendQueryKey *local_70;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar23 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_a8 = 0;
  local_90 = 0;
  uStack_a4 = 1;
  iStack_94 = 0;
  if (iVar23 != 0) {
    puVar18 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar17 = *puVar18;
    while (uVar17 == 0) {
      lVar11 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar23;
      if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14ae852fd;
      uVar17 = puVar18[lVar11 + 1];
    }
    uStack_a4 = -uVar17 & uVar17;
    uVar4 = (ulonglong)uStack_a4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_80 = (int)lVar11;
    iStack_94 = local_80 + -1 + local_90;
    if (iVar23 < iStack_94) {
      iStack_94 = iVar23;
    }
  }
LAB_14ae852fd:
  uVar17 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_88 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar15 = uVar17 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uStack_98 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_94;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar17 >> 5;
  TStack_60._28_4_ = iStack_94;
  TStack_60.BaseBitIndex = local_90;
  uStack_40 = CONCAT44(uStack_84,iStack_88);
  local_e4 = uVar17;
  local_b0 = param_1;
  local_a0 = puVar1;
  iStack_8c = iStack_94;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar23 < (int)uVar17)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar17 != uVar5) {
    puVar19 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar12 * 4);
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar17 = uVar5;
      local_e4 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ae85401;
      uVar17 = *(uint *)(puVar19 + lVar11 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_7c = (int)lVar11;
    uVar17 = local_7c + -1 + uVar15;
    local_e4 = uVar17;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
      local_e4 = uVar5;
    }
  }
LAB_14ae85401:
  local_res10 = SUB81(param_1,0);
  do {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      local_e7 = 0;
      `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_e7);
    }
    if (((TStack_60.CurrentBitIndex == uVar17) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10)
        ) && (pTVar7 == param_1)) {
      return;
    }
    pFVar21 = (FFrontendQueryKey *)
              (*(longlong *)&pTVar7->Elements + (longlong)TStack_60.CurrentBitIndex * 0x28);
    local_70 = pFVar21;
    uVar17 = Algo::
             BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                       (&param_3->Pairs,pFVar21,local_res10,
                        (TLess<Metasound::FFrontendQueryKey_const_&>)local_res10);
    if (uVar17 != 0xffffffff) {
      uVar15 = 0;
      if ((int)uVar17 < (param_3->Pairs).ArrayNum) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar24 = (ForElementType<Metasound::FFrontendQueryEntry>)
               ((longlong)(param_3->Pairs).AllocatorInstance.Data +
               (longlong)(int)uVar17 * 0xe0 + 0x20);
      if (FVar24 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        local_d8 = (ForElementType<Metasound::FFrontendQueryEntry>)
                   TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   ::Find(param_2,pFVar21);
        FVar14 = FVar24;
        if (local_d8 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          local_b8 = (int *)((longlong)local_d8 + 0xb8);
          local_dc = *local_b8;
          if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)local_d8 + 0xb0) !=
              (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
            local_d8 = *(ForElementType<Metasound::FFrontendQueryEntry> *)
                        ((longlong)local_d8 + 0xb0);
          }
          FVar13 = (ForElementType<Metasound::FFrontendQueryEntry>)
                   ((longlong)local_dc * 0xb0 + (longlong)local_d8);
          local_d0 = FVar24;
          local_78 = FVar13;
          while( true ) {
            FVar16 = local_d8;
            if (*local_b8 != local_dc) {
              local_e6[0] = 0;
              `TCheckedPointerIterator<Metasound::FFrontendQueryEntry_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_e6);
            }
            pFVar21 = local_70;
            FVar14 = local_d0;
            if (FVar16 == FVar13) break;
            FVar14 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar24 + 0xb0);
            FVar9 = FVar24;
            if (FVar14 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              FVar9 = FVar14;
            }
            if ((ulonglong)FVar9 <= (ulonglong)FVar16) {
              FVar9 = FVar24;
              if (FVar14 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                FVar9 = FVar14;
              }
              if (((ulonglong)FVar16 <
                   (ulonglong)((longlong)*(int *)((longlong)FVar24 + 0xbc) * 0xb0 + (longlong)FVar9)
                  ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            lVar11 = (longlong)*(int *)((longlong)FVar24 + 0xb8);
            if (*(int *)((longlong)FVar24 + 0xb8) != 0) {
              FVar14 = FVar24;
              if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar24 + 0xb0) !=
                  (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                FVar14 = *(ForElementType<Metasound::FFrontendQueryEntry> *)
                          ((longlong)FVar24 + 0xb0);
              }
              iVar23 = 0;
              lVar25 = 0;
              local_e0 = 0;
              bVar8 = ((*(int *)((longlong)FVar16 + 0xc) != *(int *)((longlong)FVar14 + 0xc) ||
                       *(int *)((longlong)FVar16 + 4) != *(int *)((longlong)FVar14 + 4)) ||
                      *(int *)((longlong)FVar14 + 8) != *(int *)((longlong)FVar16 + 8)) ||
                      *(int *)FVar16 != *(int *)FVar14;
              local_c0 = lVar11;
              iVar12 = 0;
              do {
                lVar25 = lVar25 + 1;
                iVar20 = iVar12 + 1;
                if (lVar25 < lVar11) {
                  iVar22 = *(int *)FVar16;
                  piVar2 = (int *)((longlong)FVar16 + 4);
                  piVar3 = (int *)((longlong)FVar16 + 8);
                  local_c8 = (uint)bVar8;
                  piVar10 = (int *)(lVar25 * 0xb0 + 8 + (longlong)FVar14);
                  do {
                    FVar16 = local_d8;
                    iVar23 = local_e0;
                    if (local_c8 !=
                        (((iVar22 != piVar10[-2] || *piVar2 != piVar10[-1]) ||
                         *(int *)((longlong)local_d8 + 0xc) != piVar10[1]) || *piVar3 != *piVar10))
                    break;
                    iVar20 = iVar20 + 1;
                    lVar25 = lVar25 + 1;
                    piVar10 = piVar10 + 0x2c;
                  } while (lVar25 < lVar11);
                }
                iVar22 = iVar20 - iVar12;
                if (bVar8 == false) {
                  DestructItems<Metasound::FFrontendQueryEntry,int>
                            ((FFrontendQueryEntry *)((longlong)iVar12 * 0xb0 + (longlong)FVar14),
                             iVar22);
                  lVar11 = local_c0;
                }
                else {
                  if (iVar23 != iVar12) {
                    memmove((int *)((longlong)iVar23 * 0xb0 + (longlong)FVar14),
                            (int *)((longlong)iVar12 * 0xb0 + (longlong)FVar14),
                            (longlong)iVar22 * 0xb0);
                    lVar11 = local_c0;
                  }
                  iVar23 = iVar23 + iVar22;
                  local_e0 = iVar23;
                }
                bVar8 = (bool)(bVar8 ^ 1);
                iVar12 = iVar20;
              } while (lVar25 < lVar11);
              *(int *)((longlong)FVar24 + 0xb8) = iVar23;
              FVar13 = local_78;
            }
            local_d8 = (ForElementType<Metasound::FFrontendQueryEntry>)((longlong)FVar16 + 0xb0);
          }
        }
        if (*(int *)((longlong)FVar14 + 0xb8) == 0) {
          uVar17 = Algo::
                   BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                             (&param_3->Pairs,pFVar21,local_res10,
                              (TLess<Metasound::FFrontendQueryKey_const_&>)local_res10);
          if (uVar17 != 0xffffffff) {
            uVar15 = 0;
            if ((int)uVar17 < (param_3->Pairs).ArrayNum) {
              uVar15 = ~uVar17 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            this_00 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                       *)((param_3->Pairs).AllocatorInstance.Data + (longlong)(int)uVar17 * 0xe0);
            UE::Core::Private::Tuple::
            TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
            ::
            ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                      (this_00);
            iVar23 = (param_3->Pairs).ArrayNum + ~uVar17;
            if (iVar23 != 0) {
              memmove(this_00,this_00 + 1,(longlong)iVar23 * 0xe0);
            }
            piVar2 = &(param_3->Pairs).ArrayNum;
            *piVar2 = *piVar2 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xe0,8,(ForAnyElementType *)param_3,(param_3->Pairs).ArrayNum,
                       &(param_3->Pairs).ArrayMax);
          }
        }
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    uVar17 = local_e4;
  } while( true );
}

// Remove @ 14ae858b0

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryScoreStep>::Remove
          (TStepExecuterBase<Metasound::IFrontendQueryScoreStep> *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  code *pcVar6;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  ForElementType<Metasound::FFrontendQueryEntry> FVar9;
  int *piVar10;
  longlong lVar11;
  int iVar12;
  ForElementType<Metasound::FFrontendQueryEntry> FVar13;
  ForElementType<Metasound::FFrontendQueryEntry> FVar14;
  uint uVar15;
  ForElementType<Metasound::FFrontendQueryEntry> FVar16;
  uint uVar17;
  uint *puVar18;
  undefined1 *puVar19;
  int iVar20;
  FFrontendQueryKey *pFVar21;
  int iVar22;
  int iVar23;
  ForElementType<Metasound::FFrontendQueryEntry> FVar24;
  longlong lVar25;
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
  *this_00;
  FKeyForward local_res10;
  undefined1 local_e7;
  undefined1 local_e6 [2];
  uint local_e4;
  int local_e0;
  int local_dc;
  ForElementType<Metasound::FFrontendQueryEntry> local_d8;
  ForElementType<Metasound::FFrontendQueryEntry> local_d0;
  uint local_c8;
  longlong local_c0;
  int *local_b8;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  ForElementType<Metasound::FFrontendQueryEntry> local_78;
  FFrontendQueryKey *local_70;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar23 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_a8 = 0;
  local_90 = 0;
  uStack_a4 = 1;
  iStack_94 = 0;
  if (iVar23 != 0) {
    puVar18 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar17 = *puVar18;
    while (uVar17 == 0) {
      lVar11 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar23;
      if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14ae8595d;
      uVar17 = puVar18[lVar11 + 1];
    }
    uStack_a4 = -uVar17 & uVar17;
    uVar4 = (ulonglong)uStack_a4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_80 = (int)lVar11;
    iStack_94 = local_80 + -1 + local_90;
    if (iVar23 < iStack_94) {
      iStack_94 = iVar23;
    }
  }
LAB_14ae8595d:
  uVar17 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_88 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar15 = uVar17 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uStack_98 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_94;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar17 >> 5;
  TStack_60._28_4_ = iStack_94;
  TStack_60.BaseBitIndex = local_90;
  uStack_40 = CONCAT44(uStack_84,iStack_88);
  local_e4 = uVar17;
  local_b0 = param_1;
  local_a0 = puVar1;
  iStack_8c = iStack_94;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar23 < (int)uVar17)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar17 != uVar5) {
    puVar19 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar12 * 4);
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar17 = uVar5;
      local_e4 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ae85a61;
      uVar17 = *(uint *)(puVar19 + lVar11 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_7c = (int)lVar11;
    uVar17 = local_7c + -1 + uVar15;
    local_e4 = uVar17;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
      local_e4 = uVar5;
    }
  }
LAB_14ae85a61:
  local_res10 = SUB81(param_1,0);
  do {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      local_e7 = 0;
      `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_e7);
    }
    if (((TStack_60.CurrentBitIndex == uVar17) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10)
        ) && (pTVar7 == param_1)) {
      return;
    }
    pFVar21 = (FFrontendQueryKey *)
              (*(longlong *)&pTVar7->Elements + (longlong)TStack_60.CurrentBitIndex * 0x28);
    local_70 = pFVar21;
    uVar17 = Algo::
             BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                       (&param_3->Pairs,pFVar21,local_res10,
                        (TLess<Metasound::FFrontendQueryKey_const_&>)local_res10);
    if (uVar17 != 0xffffffff) {
      uVar15 = 0;
      if ((int)uVar17 < (param_3->Pairs).ArrayNum) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar24 = (ForElementType<Metasound::FFrontendQueryEntry>)
               ((longlong)(param_3->Pairs).AllocatorInstance.Data +
               (longlong)(int)uVar17 * 0xe0 + 0x20);
      if (FVar24 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        local_d8 = (ForElementType<Metasound::FFrontendQueryEntry>)
                   TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   ::Find(param_2,pFVar21);
        FVar14 = FVar24;
        if (local_d8 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          local_b8 = (int *)((longlong)local_d8 + 0xb8);
          local_dc = *local_b8;
          if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)local_d8 + 0xb0) !=
              (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
            local_d8 = *(ForElementType<Metasound::FFrontendQueryEntry> *)
                        ((longlong)local_d8 + 0xb0);
          }
          FVar13 = (ForElementType<Metasound::FFrontendQueryEntry>)
                   ((longlong)local_dc * 0xb0 + (longlong)local_d8);
          local_d0 = FVar24;
          local_78 = FVar13;
          while( true ) {
            FVar16 = local_d8;
            if (*local_b8 != local_dc) {
              local_e6[0] = 0;
              `TCheckedPointerIterator<Metasound::FFrontendQueryEntry_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_e6);
            }
            pFVar21 = local_70;
            FVar14 = local_d0;
            if (FVar16 == FVar13) break;
            FVar14 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar24 + 0xb0);
            FVar9 = FVar24;
            if (FVar14 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              FVar9 = FVar14;
            }
            if ((ulonglong)FVar9 <= (ulonglong)FVar16) {
              FVar9 = FVar24;
              if (FVar14 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                FVar9 = FVar14;
              }
              if (((ulonglong)FVar16 <
                   (ulonglong)((longlong)*(int *)((longlong)FVar24 + 0xbc) * 0xb0 + (longlong)FVar9)
                  ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            lVar11 = (longlong)*(int *)((longlong)FVar24 + 0xb8);
            if (*(int *)((longlong)FVar24 + 0xb8) != 0) {
              FVar14 = FVar24;
              if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar24 + 0xb0) !=
                  (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                FVar14 = *(ForElementType<Metasound::FFrontendQueryEntry> *)
                          ((longlong)FVar24 + 0xb0);
              }
              iVar23 = 0;
              lVar25 = 0;
              local_e0 = 0;
              bVar8 = ((*(int *)((longlong)FVar16 + 0xc) != *(int *)((longlong)FVar14 + 0xc) ||
                       *(int *)((longlong)FVar16 + 4) != *(int *)((longlong)FVar14 + 4)) ||
                      *(int *)((longlong)FVar14 + 8) != *(int *)((longlong)FVar16 + 8)) ||
                      *(int *)FVar16 != *(int *)FVar14;
              local_c0 = lVar11;
              iVar12 = 0;
              do {
                lVar25 = lVar25 + 1;
                iVar20 = iVar12 + 1;
                if (lVar25 < lVar11) {
                  iVar22 = *(int *)FVar16;
                  piVar2 = (int *)((longlong)FVar16 + 4);
                  piVar3 = (int *)((longlong)FVar16 + 8);
                  local_c8 = (uint)bVar8;
                  piVar10 = (int *)(lVar25 * 0xb0 + 8 + (longlong)FVar14);
                  do {
                    FVar16 = local_d8;
                    iVar23 = local_e0;
                    if (local_c8 !=
                        (((iVar22 != piVar10[-2] || *piVar2 != piVar10[-1]) ||
                         *(int *)((longlong)local_d8 + 0xc) != piVar10[1]) || *piVar3 != *piVar10))
                    break;
                    iVar20 = iVar20 + 1;
                    lVar25 = lVar25 + 1;
                    piVar10 = piVar10 + 0x2c;
                  } while (lVar25 < lVar11);
                }
                iVar22 = iVar20 - iVar12;
                if (bVar8 == false) {
                  DestructItems<Metasound::FFrontendQueryEntry,int>
                            ((FFrontendQueryEntry *)((longlong)iVar12 * 0xb0 + (longlong)FVar14),
                             iVar22);
                  lVar11 = local_c0;
                }
                else {
                  if (iVar23 != iVar12) {
                    memmove((int *)((longlong)iVar23 * 0xb0 + (longlong)FVar14),
                            (int *)((longlong)iVar12 * 0xb0 + (longlong)FVar14),
                            (longlong)iVar22 * 0xb0);
                    lVar11 = local_c0;
                  }
                  iVar23 = iVar23 + iVar22;
                  local_e0 = iVar23;
                }
                bVar8 = (bool)(bVar8 ^ 1);
                iVar12 = iVar20;
              } while (lVar25 < lVar11);
              *(int *)((longlong)FVar24 + 0xb8) = iVar23;
              FVar13 = local_78;
            }
            local_d8 = (ForElementType<Metasound::FFrontendQueryEntry>)((longlong)FVar16 + 0xb0);
          }
        }
        if (*(int *)((longlong)FVar14 + 0xb8) == 0) {
          uVar17 = Algo::
                   BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                             (&param_3->Pairs,pFVar21,local_res10,
                              (TLess<Metasound::FFrontendQueryKey_const_&>)local_res10);
          if (uVar17 != 0xffffffff) {
            uVar15 = 0;
            if ((int)uVar17 < (param_3->Pairs).ArrayNum) {
              uVar15 = ~uVar17 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            this_00 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                       *)((param_3->Pairs).AllocatorInstance.Data + (longlong)(int)uVar17 * 0xe0);
            UE::Core::Private::Tuple::
            TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
            ::
            ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                      (this_00);
            iVar23 = (param_3->Pairs).ArrayNum + ~uVar17;
            if (iVar23 != 0) {
              memmove(this_00,this_00 + 1,(longlong)iVar23 * 0xe0);
            }
            piVar2 = &(param_3->Pairs).ArrayNum;
            *piVar2 = *piVar2 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xe0,8,(ForAnyElementType *)param_3,(param_3->Pairs).ArrayNum,
                       &(param_3->Pairs).ArrayMax);
          }
        }
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    uVar17 = local_e4;
  } while( true );
}

// Remove @ 14ae85f10

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQuerySortStep>::Remove
          (TStepExecuterBase<Metasound::IFrontendQuerySortStep> *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  code *pcVar6;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  ForElementType<Metasound::FFrontendQueryEntry> FVar9;
  int *piVar10;
  longlong lVar11;
  int iVar12;
  ForElementType<Metasound::FFrontendQueryEntry> FVar13;
  ForElementType<Metasound::FFrontendQueryEntry> FVar14;
  uint uVar15;
  ForElementType<Metasound::FFrontendQueryEntry> FVar16;
  uint uVar17;
  uint *puVar18;
  undefined1 *puVar19;
  int iVar20;
  FFrontendQueryKey *pFVar21;
  int iVar22;
  int iVar23;
  ForElementType<Metasound::FFrontendQueryEntry> FVar24;
  longlong lVar25;
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
  *this_00;
  FKeyForward local_res10;
  undefined1 local_e7;
  undefined1 local_e6 [2];
  uint local_e4;
  int local_e0;
  int local_dc;
  ForElementType<Metasound::FFrontendQueryEntry> local_d8;
  ForElementType<Metasound::FFrontendQueryEntry> local_d0;
  uint local_c8;
  longlong local_c0;
  int *local_b8;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  ForElementType<Metasound::FFrontendQueryEntry> local_78;
  FFrontendQueryKey *local_70;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar23 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_a8 = 0;
  local_90 = 0;
  uStack_a4 = 1;
  iStack_94 = 0;
  if (iVar23 != 0) {
    puVar18 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar17 = *puVar18;
    while (uVar17 == 0) {
      lVar11 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar23;
      if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14ae85fbd;
      uVar17 = puVar18[lVar11 + 1];
    }
    uStack_a4 = -uVar17 & uVar17;
    uVar4 = (ulonglong)uStack_a4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_80 = (int)lVar11;
    iStack_94 = local_80 + -1 + local_90;
    if (iVar23 < iStack_94) {
      iStack_94 = iVar23;
    }
  }
LAB_14ae85fbd:
  uVar17 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_88 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar15 = uVar17 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uStack_98 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_94;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar17 >> 5;
  TStack_60._28_4_ = iStack_94;
  TStack_60.BaseBitIndex = local_90;
  uStack_40 = CONCAT44(uStack_84,iStack_88);
  local_e4 = uVar17;
  local_b0 = param_1;
  local_a0 = puVar1;
  iStack_8c = iStack_94;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar23 < (int)uVar17)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar17 != uVar5) {
    puVar19 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar12 * 4);
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar17 = uVar5;
      local_e4 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ae860c1;
      uVar17 = *(uint *)(puVar19 + lVar11 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_7c = (int)lVar11;
    uVar17 = local_7c + -1 + uVar15;
    local_e4 = uVar17;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
      local_e4 = uVar5;
    }
  }
LAB_14ae860c1:
  local_res10 = SUB81(param_1,0);
  do {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      local_e7 = 0;
      `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_e7);
    }
    if (((TStack_60.CurrentBitIndex == uVar17) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10)
        ) && (pTVar7 == param_1)) {
      return;
    }
    pFVar21 = (FFrontendQueryKey *)
              (*(longlong *)&pTVar7->Elements + (longlong)TStack_60.CurrentBitIndex * 0x28);
    local_70 = pFVar21;
    uVar17 = Algo::
             BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                       (&param_3->Pairs,pFVar21,local_res10,
                        (TLess<Metasound::FFrontendQueryKey_const_&>)local_res10);
    if (uVar17 != 0xffffffff) {
      uVar15 = 0;
      if ((int)uVar17 < (param_3->Pairs).ArrayNum) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar24 = (ForElementType<Metasound::FFrontendQueryEntry>)
               ((longlong)(param_3->Pairs).AllocatorInstance.Data +
               (longlong)(int)uVar17 * 0xe0 + 0x20);
      if (FVar24 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        local_d8 = (ForElementType<Metasound::FFrontendQueryEntry>)
                   TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   ::Find(param_2,pFVar21);
        FVar14 = FVar24;
        if (local_d8 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          local_b8 = (int *)((longlong)local_d8 + 0xb8);
          local_dc = *local_b8;
          if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)local_d8 + 0xb0) !=
              (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
            local_d8 = *(ForElementType<Metasound::FFrontendQueryEntry> *)
                        ((longlong)local_d8 + 0xb0);
          }
          FVar13 = (ForElementType<Metasound::FFrontendQueryEntry>)
                   ((longlong)local_dc * 0xb0 + (longlong)local_d8);
          local_d0 = FVar24;
          local_78 = FVar13;
          while( true ) {
            FVar16 = local_d8;
            if (*local_b8 != local_dc) {
              local_e6[0] = 0;
              `TCheckedPointerIterator<Metasound::FFrontendQueryEntry_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_e6);
            }
            pFVar21 = local_70;
            FVar14 = local_d0;
            if (FVar16 == FVar13) break;
            FVar14 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar24 + 0xb0);
            FVar9 = FVar24;
            if (FVar14 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              FVar9 = FVar14;
            }
            if ((ulonglong)FVar9 <= (ulonglong)FVar16) {
              FVar9 = FVar24;
              if (FVar14 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                FVar9 = FVar14;
              }
              if (((ulonglong)FVar16 <
                   (ulonglong)((longlong)*(int *)((longlong)FVar24 + 0xbc) * 0xb0 + (longlong)FVar9)
                  ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            lVar11 = (longlong)*(int *)((longlong)FVar24 + 0xb8);
            if (*(int *)((longlong)FVar24 + 0xb8) != 0) {
              FVar14 = FVar24;
              if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar24 + 0xb0) !=
                  (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                FVar14 = *(ForElementType<Metasound::FFrontendQueryEntry> *)
                          ((longlong)FVar24 + 0xb0);
              }
              iVar23 = 0;
              lVar25 = 0;
              local_e0 = 0;
              bVar8 = ((*(int *)((longlong)FVar16 + 0xc) != *(int *)((longlong)FVar14 + 0xc) ||
                       *(int *)((longlong)FVar16 + 4) != *(int *)((longlong)FVar14 + 4)) ||
                      *(int *)((longlong)FVar14 + 8) != *(int *)((longlong)FVar16 + 8)) ||
                      *(int *)FVar16 != *(int *)FVar14;
              local_c0 = lVar11;
              iVar12 = 0;
              do {
                lVar25 = lVar25 + 1;
                iVar20 = iVar12 + 1;
                if (lVar25 < lVar11) {
                  iVar22 = *(int *)FVar16;
                  piVar2 = (int *)((longlong)FVar16 + 4);
                  piVar3 = (int *)((longlong)FVar16 + 8);
                  local_c8 = (uint)bVar8;
                  piVar10 = (int *)(lVar25 * 0xb0 + 8 + (longlong)FVar14);
                  do {
                    FVar16 = local_d8;
                    iVar23 = local_e0;
                    if (local_c8 !=
                        (((iVar22 != piVar10[-2] || *piVar2 != piVar10[-1]) ||
                         *(int *)((longlong)local_d8 + 0xc) != piVar10[1]) || *piVar3 != *piVar10))
                    break;
                    iVar20 = iVar20 + 1;
                    lVar25 = lVar25 + 1;
                    piVar10 = piVar10 + 0x2c;
                  } while (lVar25 < lVar11);
                }
                iVar22 = iVar20 - iVar12;
                if (bVar8 == false) {
                  DestructItems<Metasound::FFrontendQueryEntry,int>
                            ((FFrontendQueryEntry *)((longlong)iVar12 * 0xb0 + (longlong)FVar14),
                             iVar22);
                  lVar11 = local_c0;
                }
                else {
                  if (iVar23 != iVar12) {
                    memmove((int *)((longlong)iVar23 * 0xb0 + (longlong)FVar14),
                            (int *)((longlong)iVar12 * 0xb0 + (longlong)FVar14),
                            (longlong)iVar22 * 0xb0);
                    lVar11 = local_c0;
                  }
                  iVar23 = iVar23 + iVar22;
                  local_e0 = iVar23;
                }
                bVar8 = (bool)(bVar8 ^ 1);
                iVar12 = iVar20;
              } while (lVar25 < lVar11);
              *(int *)((longlong)FVar24 + 0xb8) = iVar23;
              FVar13 = local_78;
            }
            local_d8 = (ForElementType<Metasound::FFrontendQueryEntry>)((longlong)FVar16 + 0xb0);
          }
        }
        if (*(int *)((longlong)FVar14 + 0xb8) == 0) {
          uVar17 = Algo::
                   BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                             (&param_3->Pairs,pFVar21,local_res10,
                              (TLess<Metasound::FFrontendQueryKey_const_&>)local_res10);
          if (uVar17 != 0xffffffff) {
            uVar15 = 0;
            if ((int)uVar17 < (param_3->Pairs).ArrayNum) {
              uVar15 = ~uVar17 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            this_00 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                       *)((param_3->Pairs).AllocatorInstance.Data + (longlong)(int)uVar17 * 0xe0);
            UE::Core::Private::Tuple::
            TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
            ::
            ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                      (this_00);
            iVar23 = (param_3->Pairs).ArrayNum + ~uVar17;
            if (iVar23 != 0) {
              memmove(this_00,this_00 + 1,(longlong)iVar23 * 0xe0);
            }
            piVar2 = &(param_3->Pairs).ArrayNum;
            *piVar2 = *piVar2 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xe0,8,(ForAnyElementType *)param_3,(param_3->Pairs).ArrayNum,
                       &(param_3->Pairs).ArrayMax);
          }
        }
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    uVar17 = local_e4;
  } while( true );
}

// Remove @ 14ae86570

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryStreamStep>::Remove
          (TStepExecuterBase<Metasound::IFrontendQueryStreamStep> *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  code *pcVar6;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  ForElementType<Metasound::FFrontendQueryEntry> FVar9;
  int *piVar10;
  longlong lVar11;
  int iVar12;
  ForElementType<Metasound::FFrontendQueryEntry> FVar13;
  ForElementType<Metasound::FFrontendQueryEntry> FVar14;
  uint uVar15;
  ForElementType<Metasound::FFrontendQueryEntry> FVar16;
  uint uVar17;
  uint *puVar18;
  undefined1 *puVar19;
  int iVar20;
  FFrontendQueryKey *pFVar21;
  int iVar22;
  int iVar23;
  ForElementType<Metasound::FFrontendQueryEntry> FVar24;
  longlong lVar25;
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
  *this_00;
  FKeyForward local_res10;
  undefined1 local_e7;
  undefined1 local_e6 [2];
  uint local_e4;
  int local_e0;
  int local_dc;
  ForElementType<Metasound::FFrontendQueryEntry> local_d8;
  ForElementType<Metasound::FFrontendQueryEntry> local_d0;
  uint local_c8;
  longlong local_c0;
  int *local_b8;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  ForElementType<Metasound::FFrontendQueryEntry> local_78;
  FFrontendQueryKey *local_70;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar23 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_a8 = 0;
  local_90 = 0;
  uStack_a4 = 1;
  iStack_94 = 0;
  if (iVar23 != 0) {
    puVar18 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar17 = *puVar18;
    while (uVar17 == 0) {
      lVar11 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar23;
      if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14ae8661d;
      uVar17 = puVar18[lVar11 + 1];
    }
    uStack_a4 = -uVar17 & uVar17;
    uVar4 = (ulonglong)uStack_a4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_80 = (int)lVar11;
    iStack_94 = local_80 + -1 + local_90;
    if (iVar23 < iStack_94) {
      iStack_94 = iVar23;
    }
  }
LAB_14ae8661d:
  uVar17 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_88 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar15 = uVar17 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uStack_98 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_94;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar17 >> 5;
  TStack_60._28_4_ = iStack_94;
  TStack_60.BaseBitIndex = local_90;
  uStack_40 = CONCAT44(uStack_84,iStack_88);
  local_e4 = uVar17;
  local_b0 = param_1;
  local_a0 = puVar1;
  iStack_8c = iStack_94;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar23 < (int)uVar17)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar17 != uVar5) {
    puVar19 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar12 * 4);
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar17 = uVar5;
      local_e4 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ae86721;
      uVar17 = *(uint *)(puVar19 + lVar11 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_7c = (int)lVar11;
    uVar17 = local_7c + -1 + uVar15;
    local_e4 = uVar17;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
      local_e4 = uVar5;
    }
  }
LAB_14ae86721:
  local_res10 = SUB81(param_1,0);
  do {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      local_e7 = 0;
      `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_e7);
    }
    if (((TStack_60.CurrentBitIndex == uVar17) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10)
        ) && (pTVar7 == param_1)) {
      return;
    }
    pFVar21 = (FFrontendQueryKey *)
              (*(longlong *)&pTVar7->Elements + (longlong)TStack_60.CurrentBitIndex * 0x28);
    local_70 = pFVar21;
    uVar17 = Algo::
             BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                       (&param_3->Pairs,pFVar21,local_res10,
                        (TLess<Metasound::FFrontendQueryKey_const_&>)local_res10);
    if (uVar17 != 0xffffffff) {
      uVar15 = 0;
      if ((int)uVar17 < (param_3->Pairs).ArrayNum) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar24 = (ForElementType<Metasound::FFrontendQueryEntry>)
               ((longlong)(param_3->Pairs).AllocatorInstance.Data +
               (longlong)(int)uVar17 * 0xe0 + 0x20);
      if (FVar24 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        local_d8 = (ForElementType<Metasound::FFrontendQueryEntry>)
                   TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   ::Find(param_2,pFVar21);
        FVar14 = FVar24;
        if (local_d8 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          local_b8 = (int *)((longlong)local_d8 + 0xb8);
          local_dc = *local_b8;
          if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)local_d8 + 0xb0) !=
              (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
            local_d8 = *(ForElementType<Metasound::FFrontendQueryEntry> *)
                        ((longlong)local_d8 + 0xb0);
          }
          FVar13 = (ForElementType<Metasound::FFrontendQueryEntry>)
                   ((longlong)local_dc * 0xb0 + (longlong)local_d8);
          local_d0 = FVar24;
          local_78 = FVar13;
          while( true ) {
            FVar16 = local_d8;
            if (*local_b8 != local_dc) {
              local_e6[0] = 0;
              `TCheckedPointerIterator<Metasound::FFrontendQueryEntry_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_e6);
            }
            pFVar21 = local_70;
            FVar14 = local_d0;
            if (FVar16 == FVar13) break;
            FVar14 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar24 + 0xb0);
            FVar9 = FVar24;
            if (FVar14 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              FVar9 = FVar14;
            }
            if ((ulonglong)FVar9 <= (ulonglong)FVar16) {
              FVar9 = FVar24;
              if (FVar14 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                FVar9 = FVar14;
              }
              if (((ulonglong)FVar16 <
                   (ulonglong)((longlong)*(int *)((longlong)FVar24 + 0xbc) * 0xb0 + (longlong)FVar9)
                  ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            lVar11 = (longlong)*(int *)((longlong)FVar24 + 0xb8);
            if (*(int *)((longlong)FVar24 + 0xb8) != 0) {
              FVar14 = FVar24;
              if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar24 + 0xb0) !=
                  (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                FVar14 = *(ForElementType<Metasound::FFrontendQueryEntry> *)
                          ((longlong)FVar24 + 0xb0);
              }
              iVar23 = 0;
              lVar25 = 0;
              local_e0 = 0;
              bVar8 = ((*(int *)((longlong)FVar16 + 0xc) != *(int *)((longlong)FVar14 + 0xc) ||
                       *(int *)((longlong)FVar16 + 4) != *(int *)((longlong)FVar14 + 4)) ||
                      *(int *)((longlong)FVar14 + 8) != *(int *)((longlong)FVar16 + 8)) ||
                      *(int *)FVar16 != *(int *)FVar14;
              local_c0 = lVar11;
              iVar12 = 0;
              do {
                lVar25 = lVar25 + 1;
                iVar20 = iVar12 + 1;
                if (lVar25 < lVar11) {
                  iVar22 = *(int *)FVar16;
                  piVar2 = (int *)((longlong)FVar16 + 4);
                  piVar3 = (int *)((longlong)FVar16 + 8);
                  local_c8 = (uint)bVar8;
                  piVar10 = (int *)(lVar25 * 0xb0 + 8 + (longlong)FVar14);
                  do {
                    FVar16 = local_d8;
                    iVar23 = local_e0;
                    if (local_c8 !=
                        (((iVar22 != piVar10[-2] || *piVar2 != piVar10[-1]) ||
                         *(int *)((longlong)local_d8 + 0xc) != piVar10[1]) || *piVar3 != *piVar10))
                    break;
                    iVar20 = iVar20 + 1;
                    lVar25 = lVar25 + 1;
                    piVar10 = piVar10 + 0x2c;
                  } while (lVar25 < lVar11);
                }
                iVar22 = iVar20 - iVar12;
                if (bVar8 == false) {
                  DestructItems<Metasound::FFrontendQueryEntry,int>
                            ((FFrontendQueryEntry *)((longlong)iVar12 * 0xb0 + (longlong)FVar14),
                             iVar22);
                  lVar11 = local_c0;
                }
                else {
                  if (iVar23 != iVar12) {
                    memmove((int *)((longlong)iVar23 * 0xb0 + (longlong)FVar14),
                            (int *)((longlong)iVar12 * 0xb0 + (longlong)FVar14),
                            (longlong)iVar22 * 0xb0);
                    lVar11 = local_c0;
                  }
                  iVar23 = iVar23 + iVar22;
                  local_e0 = iVar23;
                }
                bVar8 = (bool)(bVar8 ^ 1);
                iVar12 = iVar20;
              } while (lVar25 < lVar11);
              *(int *)((longlong)FVar24 + 0xb8) = iVar23;
              FVar13 = local_78;
            }
            local_d8 = (ForElementType<Metasound::FFrontendQueryEntry>)((longlong)FVar16 + 0xb0);
          }
        }
        if (*(int *)((longlong)FVar14 + 0xb8) == 0) {
          uVar17 = Algo::
                   BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                             (&param_3->Pairs,pFVar21,local_res10,
                              (TLess<Metasound::FFrontendQueryKey_const_&>)local_res10);
          if (uVar17 != 0xffffffff) {
            uVar15 = 0;
            if ((int)uVar17 < (param_3->Pairs).ArrayNum) {
              uVar15 = ~uVar17 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            this_00 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                       *)((param_3->Pairs).AllocatorInstance.Data + (longlong)(int)uVar17 * 0xe0);
            UE::Core::Private::Tuple::
            TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
            ::
            ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                      (this_00);
            iVar23 = (param_3->Pairs).ArrayNum + ~uVar17;
            if (iVar23 != 0) {
              memmove(this_00,this_00 + 1,(longlong)iVar23 * 0xe0);
            }
            piVar2 = &(param_3->Pairs).ArrayNum;
            *piVar2 = *piVar2 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xe0,8,(ForAnyElementType *)param_3,(param_3->Pairs).ArrayNum,
                       &(param_3->Pairs).ArrayMax);
          }
        }
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    uVar17 = local_e4;
  } while( true );
}

// Remove @ 14ae86bd0

void __thiscall
Metasound::FrontendQueryPrivate::TStepExecuterBase<Metasound::IFrontendQueryTransformStep>::Remove
          (TStepExecuterBase<Metasound::IFrontendQueryTransformStep> *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  code *pcVar6;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  ForElementType<Metasound::FFrontendQueryEntry> FVar9;
  int *piVar10;
  longlong lVar11;
  int iVar12;
  ForElementType<Metasound::FFrontendQueryEntry> FVar13;
  ForElementType<Metasound::FFrontendQueryEntry> FVar14;
  uint uVar15;
  ForElementType<Metasound::FFrontendQueryEntry> FVar16;
  uint uVar17;
  uint *puVar18;
  undefined1 *puVar19;
  int iVar20;
  FFrontendQueryKey *pFVar21;
  int iVar22;
  int iVar23;
  ForElementType<Metasound::FFrontendQueryEntry> FVar24;
  longlong lVar25;
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
  *this_00;
  FKeyForward local_res10;
  undefined1 local_e7;
  undefined1 local_e6 [2];
  uint local_e4;
  int local_e0;
  int local_dc;
  ForElementType<Metasound::FFrontendQueryEntry> local_d8;
  ForElementType<Metasound::FFrontendQueryEntry> local_d0;
  uint local_c8;
  longlong local_c0;
  int *local_b8;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  ForElementType<Metasound::FFrontendQueryEntry> local_78;
  FFrontendQueryKey *local_70;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar23 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_a8 = 0;
  local_90 = 0;
  uStack_a4 = 1;
  iStack_94 = 0;
  if (iVar23 != 0) {
    puVar18 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar17 = *puVar18;
    while (uVar17 == 0) {
      lVar11 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar23;
      if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14ae86c7d;
      uVar17 = puVar18[lVar11 + 1];
    }
    uStack_a4 = -uVar17 & uVar17;
    uVar4 = (ulonglong)uStack_a4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_80 = (int)lVar11;
    iStack_94 = local_80 + -1 + local_90;
    if (iVar23 < iStack_94) {
      iStack_94 = iVar23;
    }
  }
LAB_14ae86c7d:
  uVar17 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_88 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar15 = uVar17 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uStack_98 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_94;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar17 >> 5;
  TStack_60._28_4_ = iStack_94;
  TStack_60.BaseBitIndex = local_90;
  uStack_40 = CONCAT44(uStack_84,iStack_88);
  local_e4 = uVar17;
  local_b0 = param_1;
  local_a0 = puVar1;
  iStack_8c = iStack_94;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar23 < (int)uVar17)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar17 != uVar5) {
    puVar19 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar12 * 4);
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar17 = uVar5;
      local_e4 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ae86d81;
      uVar17 = *(uint *)(puVar19 + lVar11 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_7c = (int)lVar11;
    uVar17 = local_7c + -1 + uVar15;
    local_e4 = uVar17;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
      local_e4 = uVar5;
    }
  }
LAB_14ae86d81:
  local_res10 = SUB81(param_1,0);
  do {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      local_e7 = 0;
      `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_e7);
    }
    if (((TStack_60.CurrentBitIndex == uVar17) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10)
        ) && (pTVar7 == param_1)) {
      return;
    }
    pFVar21 = (FFrontendQueryKey *)
              (*(longlong *)&pTVar7->Elements + (longlong)TStack_60.CurrentBitIndex * 0x28);
    local_70 = pFVar21;
    uVar17 = Algo::
             BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                       (&param_3->Pairs,pFVar21,local_res10,
                        (TLess<Metasound::FFrontendQueryKey_const_&>)local_res10);
    if (uVar17 != 0xffffffff) {
      uVar15 = 0;
      if ((int)uVar17 < (param_3->Pairs).ArrayNum) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar24 = (ForElementType<Metasound::FFrontendQueryEntry>)
               ((longlong)(param_3->Pairs).AllocatorInstance.Data +
               (longlong)(int)uVar17 * 0xe0 + 0x20);
      if (FVar24 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        local_d8 = (ForElementType<Metasound::FFrontendQueryEntry>)
                   TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   ::Find(param_2,pFVar21);
        FVar14 = FVar24;
        if (local_d8 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          local_b8 = (int *)((longlong)local_d8 + 0xb8);
          local_dc = *local_b8;
          if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)local_d8 + 0xb0) !=
              (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
            local_d8 = *(ForElementType<Metasound::FFrontendQueryEntry> *)
                        ((longlong)local_d8 + 0xb0);
          }
          FVar13 = (ForElementType<Metasound::FFrontendQueryEntry>)
                   ((longlong)local_dc * 0xb0 + (longlong)local_d8);
          local_d0 = FVar24;
          local_78 = FVar13;
          while( true ) {
            FVar16 = local_d8;
            if (*local_b8 != local_dc) {
              local_e6[0] = 0;
              `TCheckedPointerIterator<Metasound::FFrontendQueryEntry_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_e6);
            }
            pFVar21 = local_70;
            FVar14 = local_d0;
            if (FVar16 == FVar13) break;
            FVar14 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar24 + 0xb0);
            FVar9 = FVar24;
            if (FVar14 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              FVar9 = FVar14;
            }
            if ((ulonglong)FVar9 <= (ulonglong)FVar16) {
              FVar9 = FVar24;
              if (FVar14 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                FVar9 = FVar14;
              }
              if (((ulonglong)FVar16 <
                   (ulonglong)((longlong)*(int *)((longlong)FVar24 + 0xbc) * 0xb0 + (longlong)FVar9)
                  ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            lVar11 = (longlong)*(int *)((longlong)FVar24 + 0xb8);
            if (*(int *)((longlong)FVar24 + 0xb8) != 0) {
              FVar14 = FVar24;
              if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar24 + 0xb0) !=
                  (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                FVar14 = *(ForElementType<Metasound::FFrontendQueryEntry> *)
                          ((longlong)FVar24 + 0xb0);
              }
              iVar23 = 0;
              lVar25 = 0;
              local_e0 = 0;
              bVar8 = ((*(int *)((longlong)FVar16 + 0xc) != *(int *)((longlong)FVar14 + 0xc) ||
                       *(int *)((longlong)FVar16 + 4) != *(int *)((longlong)FVar14 + 4)) ||
                      *(int *)((longlong)FVar14 + 8) != *(int *)((longlong)FVar16 + 8)) ||
                      *(int *)FVar16 != *(int *)FVar14;
              local_c0 = lVar11;
              iVar12 = 0;
              do {
                lVar25 = lVar25 + 1;
                iVar20 = iVar12 + 1;
                if (lVar25 < lVar11) {
                  iVar22 = *(int *)FVar16;
                  piVar2 = (int *)((longlong)FVar16 + 4);
                  piVar3 = (int *)((longlong)FVar16 + 8);
                  local_c8 = (uint)bVar8;
                  piVar10 = (int *)(lVar25 * 0xb0 + 8 + (longlong)FVar14);
                  do {
                    FVar16 = local_d8;
                    iVar23 = local_e0;
                    if (local_c8 !=
                        (((iVar22 != piVar10[-2] || *piVar2 != piVar10[-1]) ||
                         *(int *)((longlong)local_d8 + 0xc) != piVar10[1]) || *piVar3 != *piVar10))
                    break;
                    iVar20 = iVar20 + 1;
                    lVar25 = lVar25 + 1;
                    piVar10 = piVar10 + 0x2c;
                  } while (lVar25 < lVar11);
                }
                iVar22 = iVar20 - iVar12;
                if (bVar8 == false) {
                  DestructItems<Metasound::FFrontendQueryEntry,int>
                            ((FFrontendQueryEntry *)((longlong)iVar12 * 0xb0 + (longlong)FVar14),
                             iVar22);
                  lVar11 = local_c0;
                }
                else {
                  if (iVar23 != iVar12) {
                    memmove((int *)((longlong)iVar23 * 0xb0 + (longlong)FVar14),
                            (int *)((longlong)iVar12 * 0xb0 + (longlong)FVar14),
                            (longlong)iVar22 * 0xb0);
                    lVar11 = local_c0;
                  }
                  iVar23 = iVar23 + iVar22;
                  local_e0 = iVar23;
                }
                bVar8 = (bool)(bVar8 ^ 1);
                iVar12 = iVar20;
              } while (lVar25 < lVar11);
              *(int *)((longlong)FVar24 + 0xb8) = iVar23;
              FVar13 = local_78;
            }
            local_d8 = (ForElementType<Metasound::FFrontendQueryEntry>)((longlong)FVar16 + 0xb0);
          }
        }
        if (*(int *)((longlong)FVar14 + 0xb8) == 0) {
          uVar17 = Algo::
                   BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                             (&param_3->Pairs,pFVar21,local_res10,
                              (TLess<Metasound::FFrontendQueryKey_const_&>)local_res10);
          if (uVar17 != 0xffffffff) {
            uVar15 = 0;
            if ((int)uVar17 < (param_3->Pairs).ArrayNum) {
              uVar15 = ~uVar17 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            this_00 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                       *)((param_3->Pairs).AllocatorInstance.Data + (longlong)(int)uVar17 * 0xe0);
            UE::Core::Private::Tuple::
            TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
            ::
            ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                      (this_00);
            iVar23 = (param_3->Pairs).ArrayNum + ~uVar17;
            if (iVar23 != 0) {
              memmove(this_00,this_00 + 1,(longlong)iVar23 * 0xe0);
            }
            piVar2 = &(param_3->Pairs).ArrayNum;
            *piVar2 = *piVar2 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xe0,8,(ForAnyElementType *)param_3,(param_3->Pairs).ArrayNum,
                       &(param_3->Pairs).ArrayMax);
          }
        }
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    uVar17 = local_e4;
  } while( true );
}

