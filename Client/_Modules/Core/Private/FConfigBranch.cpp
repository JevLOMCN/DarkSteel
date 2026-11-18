// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 26

// <lambda_invoker_cdecl> @ 141842610

void __cdecl
`FConfigBranch::Shrink'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FConfigFile *param_1,FString *param_2)

{
  TMap<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
  *this;
  undefined1 *puVar1;
  code *pcVar2;
  TMap<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
  *pTVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 auStackX_8 [8];
  undefined4 uStackX_10;
  int iStackX_18;
  LARGE_INTEGER LStackX_20;
  undefined4 uStack_ec;
  LARGE_INTEGER aLStack_e8 [2];
  longlong *plStack_d8;
  undefined1 auStack_d0 [16];
  uint uStack_c0;
  uint uStack_bc;
  longlong lStack_b8;
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  *pTStack_b0;
  FConfigFile *pFStack_a8;
  undefined2 uStack_a0;
  TMap<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
  *pTStack_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined1 auStack_68 [32];
  longlong lStack_48;
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  *pTStack_40;
  
  bVar4 = IsInGameThread();
  if (bVar4) {
    QueryPerformanceCounter(&LStackX_20);
    GConfigShrinkTime =
         GConfigShrinkTime +
         (__real_c170000000000000 -
         (double)LStackX_20.QuadPart * FGenericPlatformTime::SecondsPerCycle);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
            *)param_1);
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)auStack_68,
             (TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
              *)param_1);
  uVar6 = 1;
  uStack_a0 = 0;
  stack0xffffffffffffff38 = auStack_68._16_16_;
  plStack_d8 = (longlong *)auStack_68._0_8_;
  auStack_d0._0_8_ = auStack_68._8_8_;
  lStack_b8 = lStack_48;
  pTStack_b0 = pTStack_40;
  uVar8 = auStack_68._24_8_ >> 0x20;
  pFStack_a8 = param_1;
  if (auStack_68._28_4_ < *(int *)(auStack_68._16_8_ + 0x18)) {
    do {
      TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
      ::Shrink((TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                *)(*plStack_d8 + 0x10 + (longlong)(int)uVar8 * 0x110));
      uStack_c0 = uStack_c0 & ~auStack_d0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_d0);
      uVar8 = (ulonglong)uStack_bc;
    } while ((int)uStack_bc < *(int *)(auStack_d0._8_8_ + 0x18));
    if (((char)uStack_a0 != '\0') && (uStack_a0._1_1_ != '\0')) {
      uVar11 = (int)pFStack_a8->_padding_ - *(int *)((longlong)&pFStack_a8->_padding_ + 4);
      if (uVar11 < 4) {
        iVar5 = 1;
      }
      else {
        uVar8 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uStackX_10 = (undefined4)lVar9;
        iVar5 = 1 << ((byte)lVar9 & 0x1f);
      }
      if (((0 < (int)uVar11) && ((int)pFStack_a8->_padding_ < iVar5)) ||
         (iVar5 < (int)pFStack_a8->_padding_)) {
        *(int *)&pFStack_a8->_padding_ = iVar5;
        TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                  *)pFStack_a8);
      }
    }
  }
  this = &param_1->PerObjectConfigArrayOfStructKeys;
  TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
            *)this);
  iVar12 = 0;
  puVar1 = &(param_1->PerObjectConfigArrayOfStructKeys).field_0x10;
  iVar5 = *(int *)&(param_1->PerObjectConfigArrayOfStructKeys).field_0x28;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar5 != 0) {
    puVar15 = *(uint **)&(param_1->PerObjectConfigArrayOfStructKeys).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_141892b2e;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar8 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStackX_18 = (int)lVar9;
    iVar7 = iVar14 + -1 + iStackX_18;
    if (iVar5 < iVar7) {
      iVar7 = iVar5;
    }
  }
LAB_141892b2e:
  uVar11 = *(uint *)&(param_1->PerObjectConfigArrayOfStructKeys).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uVar6,iVar12);
  TStack_90.CurrentBitIndex = iVar7;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar5 = (int)uVar11 >> 5;
  TStack_90._28_4_ = iVar7;
  TStack_90.BaseBitIndex = iVar14;
  uStack_70 = CONCAT44(uStack_ec,
                       *(int *)&(param_1->PerObjectConfigArrayOfStructKeys).field_0x8 -
                       *(int *)&(param_1->PerObjectConfigArrayOfStructKeys).field_0x34);
  pTStack_98 = this;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (((int)uVar11 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar6 = *(uint *)&(param_1->PerObjectConfigArrayOfStructKeys).field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&(param_1->PerObjectConfigArrayOfStructKeys).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar5 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar5;
      uVar10 = uVar10 + 0x20;
      iVar5 = iVar5 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar5) goto LAB_141892c40;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar8 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_141892c40:
  while( true ) {
    pTVar3 = pTStack_98;
    if (*(int *)(&pTStack_98->field_0x0 + 8) - *(int *)(&pTStack_98->field_0x0 + 0x34) !=
        (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if (((TStack_90.CurrentBitIndex == uVar11) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar3 == this))
    break;
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    Shrink((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
            *)((longlong)TStack_90.CurrentBitIndex * 0x68 + *(longlong *)&pTVar3->field_0x0 + 0x10))
    ;
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  bVar4 = IsInGameThread();
  if (bVar4) {
    QueryPerformanceCounter(aLStack_e8);
    GConfigShrinkTime =
         GConfigShrinkTime +
         (double)aLStack_e8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x000141892cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  return;
}

// <lambda_invoker_cdecl> @ 141842620

void __cdecl
`FConfigBranch::Shrink'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (FConfigCommandStream *param_1,FString *param_2)

{
  longlong *plVar1;
  TMap<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
  *this;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  FConfigCommandStream *pFVar6;
  TMap<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 auStackX_10 [8];
  undefined1 auStackX_18 [8];
  int iStackX_20;
  uint uStack_148;
  undefined4 uStack_114;
  LARGE_INTEGER LStack_108;
  LARGE_INTEGER LStack_100;
  TMap<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
  *pTStack_f8;
  int iStack_f0;
  uint uStack_ec;
  undefined1 *puStack_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  FConfigCommandStream *pFStack_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TMap<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
  *pTStack_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 uStack_4c;
  
  bVar8 = IsInGameThread();
  if (bVar8) {
    QueryPerformanceCounter(&LStack_108);
    GConfigShrinkTime =
         GConfigShrinkTime +
         (__real_c170000000000000 -
         (double)LStack_108.QuadPart * FGenericPlatformTime::SecondsPerCycle);
  }
  TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
            *)param_1);
  iVar4 = (int)param_1->_padding_;
  plVar1 = &param_1->_padding_;
  iVar13 = 0;
  uStack_148 = 1;
  iVar14 = 0;
  iVar17 = 0;
  uVar9 = 1;
  iVar10 = 0;
  if (iVar4 != 0) {
    plVar15 = (longlong *)param_1->_padding_;
    if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
      plVar15 = plVar1;
    }
    uVar9 = (uint)*plVar15;
    iVar17 = 0;
    while (uVar9 == 0) {
      lVar11 = (longlong)iVar14;
      iVar17 = iVar17 + 0x20;
      iVar14 = iVar14 + 1;
      uVar9 = 1;
      iVar10 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_141892592;
      uVar9 = *(uint *)((longlong)plVar15 + lVar11 * 4 + 4);
    }
    uVar9 = -uVar9 & uVar9;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iStackX_20 = (int)lVar11;
    iVar10 = iVar17 + -1 + iStackX_20;
    if (iVar4 < iVar10) {
      iVar10 = iVar4;
    }
  }
LAB_141892592:
  uVar12 = (uint)param_1->_padding_;
  uVar19 = uVar12 & 0xffffffe0;
  TStack_c0._padding_ = CONCAT44(uVar9,iVar14);
  TStack_c0.CurrentBitIndex = iVar10;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar12 >> 5;
  TStack_c0._28_4_ = uStack_4c;
  TStack_c0.BaseBitIndex = iVar17;
  uStack_a0 = CONCAT44(uStack_114,
                       (int)param_1->_padding_ - *(int *)((longlong)&param_1->_padding_ + 4));
  pFStack_c8 = param_1;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar9 = (uint)param_1->_padding_;
  if (uVar12 != uVar9) {
    plVar15 = (longlong *)param_1->_padding_;
    if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
      plVar15 = plVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)((longlong)plVar15 + (longlong)iVar14 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar14;
      uVar19 = uVar19 + 0x20;
      iVar14 = iVar14 + 1;
      uVar12 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1418926b0;
      uVar12 = *(uint *)((longlong)plVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar12 = (int)lVar11 + -1 + uVar19;
    if ((int)uVar9 < (int)uVar12) {
      uVar12 = uVar9;
    }
  }
LAB_1418926b0:
  while( true ) {
    pFVar6 = pFStack_c8;
    if ((int)pFStack_c8->_padding_ - *(int *)((longlong)&pFStack_c8->_padding_ + 4) !=
        (int)uStack_a0) {
      auStackX_10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_10);
    }
    if (((TStack_c0.CurrentBitIndex == uVar12) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) && (pFVar6 == param_1))
    break;
    TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
    ::Shrink((TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
              *)((longlong)TStack_c0.CurrentBitIndex * 0xb8 + pFVar6->_padding_ + 0x10));
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  this = &param_1->PerObjectConfigArrayOfStructKeys;
  TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
            *)this);
  iVar4 = *(int *)&(param_1->PerObjectConfigArrayOfStructKeys).field_0x28;
  puVar2 = &(param_1->PerObjectConfigArrayOfStructKeys).field_0x10;
  iStack_d8 = 0;
  iStack_dc = 0;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(param_1->PerObjectConfigArrayOfStructKeys).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar2;
    }
    uVar9 = *puVar18;
    iStack_d8 = 0;
    while (uVar9 == 0) {
      lVar11 = (longlong)iVar13;
      iStack_d8 = iStack_d8 + 0x20;
      iVar13 = iVar13 + 1;
      iStack_dc = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_141892791;
      uVar9 = puVar18[lVar11 + 1];
    }
    uStack_148 = -uVar9 & uVar9;
    uVar3 = (ulonglong)uStack_148 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iStack_dc = iStack_d8 + -1 + (int)lVar11;
    if (iVar4 < iStack_dc) {
      iStack_dc = iVar4;
    }
  }
LAB_141892791:
  uStack_ec = uStack_148;
  iStack_d0 = *(int *)&(param_1->PerObjectConfigArrayOfStructKeys).field_0x8 -
              *(int *)&(param_1->PerObjectConfigArrayOfStructKeys).field_0x34;
  uVar9 = *(uint *)&(param_1->PerObjectConfigArrayOfStructKeys).field_0x28;
  uStack_e0 = 0xffffffff;
  uVar12 = uVar9 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uStack_148,iVar13);
  TStack_90.CurrentBitIndex = iStack_dc;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar9 >> 5;
  TStack_90._28_4_ = iVar10;
  TStack_90.BaseBitIndex = iStack_d8;
  uStack_70 = CONCAT44(uStack_cc,iStack_d0);
  pTStack_f8 = this;
  iStack_f0 = iVar13;
  puStack_e8 = puVar2;
  iStack_d4 = iVar10;
  pTStack_98 = this;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar9 < 0) || (iVar4 < (int)uVar9)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar19 = *(uint *)&(param_1->PerObjectConfigArrayOfStructKeys).field_0x28;
  if (uVar9 != uVar19) {
    puVar16 = *(undefined1 **)&(param_1->PerObjectConfigArrayOfStructKeys).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar2;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
    while (uVar9 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar9 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_141892890;
      uVar9 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar9 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar19 < (int)uVar9) {
      uVar9 = uVar19;
    }
  }
LAB_141892890:
  while( true ) {
    pTVar7 = pTStack_98;
    if (*(int *)(&pTStack_98->field_0x0 + 8) - *(int *)(&pTStack_98->field_0x0 + 0x34) !=
        (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_18);
    }
    if (((TStack_90.CurrentBitIndex == uVar9) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar7 == this))
    break;
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    Shrink((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
            *)((longlong)TStack_90.CurrentBitIndex * 0x68 + *(longlong *)&pTVar7->field_0x0 + 0x10))
    ;
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  bVar8 = IsInGameThread();
  if (bVar8) {
    QueryPerformanceCounter(&LStack_100);
    GConfigShrinkTime =
         GConfigShrinkTime +
         (double)LStack_100.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
  }
  return;
}

// FConfigBranch @ 1418539c0

FConfigBranch * __thiscall FConfigBranch::FConfigBranch(FConfigBranch *this,FConfigFile *param_1)

{
  this->bIsSafeUnloaded = false;
  this->bIsHierarchical = false;
  this->bAllowedToRemove = true;
  this->ReplayMethod = NoReplay;
  (this->IniName).ComparisonIndex = 0;
  (this->IniName).Number = 0;
  (this->IniPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IniPath).Data.ArrayNum = 0;
  (this->IniPath).Data.ArrayMax = 0;
  (this->Platform).ComparisonIndex = 0;
  (this->Platform).Number = 0;
  (this->SourceEngineConfigDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceEngineConfigDir).Data.ArrayNum = 0;
  (this->SourceEngineConfigDir).Data.ArrayMax = 0;
  (this->SourceProjectConfigDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceProjectConfigDir).Data.ArrayNum = 0;
  (this->SourceProjectConfigDir).Data.ArrayMax = 0;
  (this->Hierarchy)._padding_ = 0;
  (this->Hierarchy)._padding_ = 0;
  (this->Hierarchy)._padding_ = 0;
  *(undefined4 *)&(this->Hierarchy)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->Hierarchy)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->Hierarchy)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->Hierarchy)._padding_ + 4) = 0;
  (this->Hierarchy)._padding_ = 0;
  *(undefined4 *)&(this->Hierarchy)._padding_ = 0;
  (this->Hierarchy).KeyGen = 0x200000;
  *(undefined8 *)&this->StaticLayers = 0;
  *(undefined8 *)&(this->StaticLayers).field_0x8 = 0;
  *(undefined8 *)&(this->StaticLayers).field_0x20 = 0;
  *(undefined4 *)&(this->StaticLayers).field_0x28 = 0;
  *(undefined4 *)&(this->StaticLayers).field_0x2c = 0x80;
  *(undefined4 *)&(this->StaticLayers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StaticLayers).field_0x34 = 0;
  *(undefined8 *)&(this->StaticLayers).field_0x40 = 0;
  *(undefined4 *)&(this->StaticLayers).field_0x48 = 0;
  (this->DynamicLayers)._padding_ =
       (longlong)&___7__TDoubleLinkedList_PEAVFConfigCommandStream____6B_;
  (this->DynamicLayers).HeadNode = (TDoubleLinkedListNode *)0x0;
  (this->DynamicLayers).TailNode = (TDoubleLinkedListNode *)0x0;
  (this->DynamicLayers).ListSize = 0;
  (this->SavedLayer)._padding_ = 0;
  (this->SavedLayer)._padding_ = 0;
  (this->SavedLayer)._padding_ = 0;
  *(undefined4 *)&(this->SavedLayer)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->SavedLayer)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->SavedLayer)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->SavedLayer)._padding_ + 4) = 0;
  (this->SavedLayer)._padding_ = 0;
  *(undefined4 *)&(this->SavedLayer)._padding_ = 0;
  *(undefined8 *)&(this->SavedLayer).PerObjectConfigArrayOfStructKeys = 0;
  *(undefined8 *)&(this->SavedLayer).PerObjectConfigArrayOfStructKeys.field_0x8 = 0;
  *(undefined8 *)&(this->SavedLayer).PerObjectConfigArrayOfStructKeys.field_0x20 = 0;
  *(undefined4 *)&(this->SavedLayer).PerObjectConfigArrayOfStructKeys.field_0x28 = 0;
  *(undefined4 *)&(this->SavedLayer).PerObjectConfigArrayOfStructKeys.field_0x2c = 0x80;
  *(undefined4 *)&(this->SavedLayer).PerObjectConfigArrayOfStructKeys.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SavedLayer).PerObjectConfigArrayOfStructKeys.field_0x34 = 0;
  *(undefined8 *)&(this->SavedLayer).PerObjectConfigArrayOfStructKeys.field_0x40 = 0;
  *(undefined4 *)&(this->SavedLayer).PerObjectConfigArrayOfStructKeys.field_0x48 = 0;
  (this->SavedLayer).Branch = (FConfigBranch *)0x0;
  (this->SavedLayer).Tag.ComparisonIndex = 0;
  (this->SavedLayer).Tag.Number = 0;
  (this->SavedLayer).bPythonConfigParserMode = '\0';
  (this->SavedLayer).bIsSavedConfigFile = '\0';
  (this->SavedLayer).bNeverSafeUnload = '\0';
  (this->SavedLayer).Filename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedLayer).Filename.Data.ArrayNum = 0;
  (this->SavedLayer).Filename.Data.ArrayMax = 0;
  FConfigFile::FConfigFile(&this->CombinedStaticLayers);
  FConfigFile::FConfigFile(&this->FinalCombinedLayers);
  (this->CommandLineOverrides)._padding_ = 0;
  (this->CommandLineOverrides)._padding_ = 0;
  (this->CommandLineOverrides)._padding_ = 0;
  *(undefined4 *)&(this->CommandLineOverrides)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->CommandLineOverrides)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->CommandLineOverrides)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->CommandLineOverrides)._padding_ + 4) = 0;
  (this->CommandLineOverrides)._padding_ = 0;
  *(undefined4 *)&(this->CommandLineOverrides)._padding_ = 0;
  *(undefined8 *)&(this->CommandLineOverrides).PerObjectConfigArrayOfStructKeys = 0;
  *(undefined8 *)&(this->CommandLineOverrides).PerObjectConfigArrayOfStructKeys.field_0x8 = 0;
  *(undefined8 *)&(this->CommandLineOverrides).PerObjectConfigArrayOfStructKeys.field_0x20 = 0;
  *(undefined4 *)&(this->CommandLineOverrides).PerObjectConfigArrayOfStructKeys.field_0x28 = 0;
  *(undefined4 *)&(this->CommandLineOverrides).PerObjectConfigArrayOfStructKeys.field_0x2c = 0x80;
  *(undefined4 *)&(this->CommandLineOverrides).PerObjectConfigArrayOfStructKeys.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->CommandLineOverrides).PerObjectConfigArrayOfStructKeys.field_0x34 = 0;
  *(undefined8 *)&(this->CommandLineOverrides).PerObjectConfigArrayOfStructKeys.field_0x40 = 0;
  *(undefined4 *)&(this->CommandLineOverrides).PerObjectConfigArrayOfStructKeys.field_0x48 = 0;
  (this->CommandLineOverrides).Branch = (FConfigBranch *)0x0;
  (this->CommandLineOverrides).Tag.ComparisonIndex = 0;
  (this->CommandLineOverrides).Tag.Number = 0;
  (this->CommandLineOverrides).bPythonConfigParserMode = '\0';
  (this->CommandLineOverrides).bIsSavedConfigFile = '\0';
  (this->CommandLineOverrides).bNeverSafeUnload = '\0';
  (this->CommandLineOverrides).Filename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->CommandLineOverrides).Filename.Data.ArrayNum = 0;
  (this->CommandLineOverrides).Filename.Data.ArrayMax = 0;
  (this->InMemoryFile)._padding_ = 0;
  (this->InMemoryFile)._padding_ = 0;
  (this->InMemoryFile)._padding_ = 0;
  *(undefined4 *)&(this->InMemoryFile)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->InMemoryFile)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->InMemoryFile)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->InMemoryFile)._padding_ + 4) = 0;
  (this->InMemoryFile)._padding_ = 0;
  *(undefined4 *)&(this->InMemoryFile)._padding_ = 0;
  (this->InMemoryFile).Name.ComparisonIndex = 0;
  (this->InMemoryFile).Name.Number = 0;
  (this->InMemoryFile).PlatformName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InMemoryFile).PlatformName.Data.ArrayNum = 0;
  (this->InMemoryFile).PlatformName.Data.ArrayMax = 0;
  (this->InMemoryFile).Tag.ComparisonIndex = 0;
  (this->InMemoryFile).Tag.Number = 0;
  (this->InMemoryFile).CommandlineOptions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InMemoryFile).CommandlineOptions.ArrayNum = 0;
  (this->InMemoryFile).CommandlineOptions.ArrayMax = 0;
  *(undefined8 *)&(this->InMemoryFile).PerObjectConfigArrayOfStructKeys = 0;
  *(undefined8 *)&(this->InMemoryFile).PerObjectConfigArrayOfStructKeys.field_0x8 = 0;
  *(undefined8 *)&(this->InMemoryFile).PerObjectConfigArrayOfStructKeys.field_0x20 = 0;
  (this->InMemoryFile).Branch = (FConfigBranch *)0x0;
  *(undefined4 *)&(this->InMemoryFile).PerObjectConfigArrayOfStructKeys.field_0x28 = 0;
  *(undefined4 *)&(this->InMemoryFile).PerObjectConfigArrayOfStructKeys.field_0x2c = 0x80;
  *(undefined4 *)&(this->InMemoryFile).PerObjectConfigArrayOfStructKeys.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InMemoryFile).PerObjectConfigArrayOfStructKeys.field_0x34 = 0;
  *(undefined8 *)&(this->InMemoryFile).PerObjectConfigArrayOfStructKeys.field_0x40 = 0;
  *(undefined4 *)&(this->InMemoryFile).PerObjectConfigArrayOfStructKeys.field_0x48 = 0;
  (this->InMemoryFile).ChangeTracker = (FConfigCommandStream *)0x0;
  FConfigFile::operator=(&this->InMemoryFile,param_1);
  (this->RuntimeChanges)._padding_ = 0;
  (this->RuntimeChanges)._padding_ = 0;
  (this->RuntimeChanges)._padding_ = 0;
  *(undefined4 *)&(this->RuntimeChanges)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->RuntimeChanges)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->RuntimeChanges)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->RuntimeChanges)._padding_ + 4) = 0;
  (this->RuntimeChanges)._padding_ = 0;
  *(undefined4 *)&(this->RuntimeChanges)._padding_ = 0;
  *(undefined8 *)&(this->RuntimeChanges).PerObjectConfigArrayOfStructKeys = 0;
  *(undefined8 *)&(this->RuntimeChanges).PerObjectConfigArrayOfStructKeys.field_0x8 = 0;
  *(undefined8 *)&(this->RuntimeChanges).PerObjectConfigArrayOfStructKeys.field_0x20 = 0;
  *(undefined4 *)&(this->RuntimeChanges).PerObjectConfigArrayOfStructKeys.field_0x28 = 0;
  *(undefined4 *)&(this->RuntimeChanges).PerObjectConfigArrayOfStructKeys.field_0x2c = 0x80;
  *(undefined4 *)&(this->RuntimeChanges).PerObjectConfigArrayOfStructKeys.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RuntimeChanges).PerObjectConfigArrayOfStructKeys.field_0x34 = 0;
  *(undefined8 *)&(this->RuntimeChanges).PerObjectConfigArrayOfStructKeys.field_0x40 = 0;
  *(undefined4 *)&(this->RuntimeChanges).PerObjectConfigArrayOfStructKeys.field_0x48 = 0;
  (this->RuntimeChanges).Branch = (FConfigBranch *)0x0;
  (this->RuntimeChanges).Tag.ComparisonIndex = 0;
  (this->RuntimeChanges).Tag.Number = 0;
  (this->RuntimeChanges).bPythonConfigParserMode = '\0';
  (this->RuntimeChanges).bIsSavedConfigFile = '\0';
  (this->RuntimeChanges).bNeverSafeUnload = '\0';
  (this->RuntimeChanges).Filename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeChanges).Filename.Data.ArrayNum = 0;
  (this->RuntimeChanges).Filename.Data.ArrayMax = 0;
  this->ReplayMethod = NoReplay;
  (this->SavedLayer).Branch = this;
  (this->CombinedStaticLayers).Branch = this;
  (this->FinalCombinedLayers).Branch = this;
  (this->CommandLineOverrides).Branch = this;
  (this->InMemoryFile).Branch = this;
  if (GUseNewSaveTracking != 0) {
    (this->InMemoryFile).ChangeTracker = &this->SavedLayer;
  }
  return this;
}

// FConfigBranch @ 141853d90

FConfigBranch * __thiscall FConfigBranch::FConfigBranch(FConfigBranch *this)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  this->bAllowedToRemove = true;
  this->ReplayMethod = NoReplay;
  (this->IniName).ComparisonIndex = 0;
  (this->IniName).Number = 0;
  (this->IniPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IniPath).Data.ArrayNum = 0;
  (this->IniPath).Data.ArrayMax = 0;
  (this->Platform).ComparisonIndex = 0;
  (this->Platform).Number = 0;
  (this->SourceEngineConfigDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceEngineConfigDir).Data.ArrayNum = 0;
  (this->SourceEngineConfigDir).Data.ArrayMax = 0;
  (this->SourceProjectConfigDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceProjectConfigDir).Data.ArrayNum = 0;
  (this->SourceProjectConfigDir).Data.ArrayMax = 0;
  this->bIsSafeUnloaded = false;
  (this->Hierarchy)._padding_ = 0;
  (this->Hierarchy)._padding_ = 0;
  (this->Hierarchy)._padding_ = 0;
  *(undefined4 *)&(this->Hierarchy)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->Hierarchy)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->Hierarchy)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->Hierarchy)._padding_ + 4) = 0;
  (this->Hierarchy)._padding_ = 0;
  *(undefined4 *)&(this->Hierarchy)._padding_ = 0;
  (this->Hierarchy).KeyGen = 0x200000;
  *(undefined8 *)&this->StaticLayers = 0;
  *(undefined8 *)&(this->StaticLayers).field_0x8 = 0;
  *(undefined8 *)&(this->StaticLayers).field_0x20 = 0;
  *(undefined4 *)&(this->StaticLayers).field_0x28 = 0;
  *(undefined4 *)&(this->StaticLayers).field_0x2c = 0x80;
  *(undefined4 *)&(this->StaticLayers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StaticLayers).field_0x34 = 0;
  *(undefined8 *)&(this->StaticLayers).field_0x40 = 0;
  *(undefined4 *)&(this->StaticLayers).field_0x48 = 0;
  (this->DynamicLayers)._padding_ =
       (longlong)&___7__TDoubleLinkedList_PEAVFConfigCommandStream____6B_;
  (this->DynamicLayers).HeadNode = (TDoubleLinkedListNode *)0x0;
  (this->DynamicLayers).TailNode = (TDoubleLinkedListNode *)0x0;
  (this->DynamicLayers).ListSize = 0;
  (this->SavedLayer)._padding_ = 0;
  (this->SavedLayer)._padding_ = 0;
  (this->SavedLayer)._padding_ = 0;
  *(undefined4 *)&(this->SavedLayer)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->SavedLayer)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->SavedLayer)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->SavedLayer)._padding_ + 4) = 0;
  (this->SavedLayer)._padding_ = 0;
  *(undefined4 *)&(this->SavedLayer)._padding_ = 0;
  *(undefined8 *)&(this->SavedLayer).PerObjectConfigArrayOfStructKeys = 0;
  *(undefined8 *)&(this->SavedLayer).PerObjectConfigArrayOfStructKeys.field_0x8 = 0;
  *(undefined8 *)&(this->SavedLayer).PerObjectConfigArrayOfStructKeys.field_0x20 = 0;
  *(undefined4 *)&(this->SavedLayer).PerObjectConfigArrayOfStructKeys.field_0x28 = 0;
  *(undefined4 *)&(this->SavedLayer).PerObjectConfigArrayOfStructKeys.field_0x2c = 0x80;
  *(undefined4 *)&(this->SavedLayer).PerObjectConfigArrayOfStructKeys.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SavedLayer).PerObjectConfigArrayOfStructKeys.field_0x34 = 0;
  *(undefined8 *)&(this->SavedLayer).PerObjectConfigArrayOfStructKeys.field_0x40 = 0;
  *(undefined4 *)&(this->SavedLayer).PerObjectConfigArrayOfStructKeys.field_0x48 = 0;
  (this->SavedLayer).Branch = (FConfigBranch *)0x0;
  (this->SavedLayer).Tag.ComparisonIndex = 0;
  (this->SavedLayer).Tag.Number = 0;
  (this->SavedLayer).bPythonConfigParserMode = '\0';
  (this->SavedLayer).bIsSavedConfigFile = '\0';
  (this->SavedLayer).bNeverSafeUnload = '\0';
  (this->SavedLayer).Filename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedLayer).Filename.Data.ArrayNum = 0;
  (this->SavedLayer).Filename.Data.ArrayMax = 0;
  FConfigFile::FConfigFile(&this->CombinedStaticLayers);
  FConfigFile::FConfigFile(&this->FinalCombinedLayers);
  (this->CommandLineOverrides)._padding_ = 0;
  (this->CommandLineOverrides)._padding_ = 0;
  (this->CommandLineOverrides)._padding_ = 0;
  *(undefined4 *)&(this->CommandLineOverrides)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->CommandLineOverrides)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->CommandLineOverrides)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->CommandLineOverrides)._padding_ + 4) = 0;
  (this->CommandLineOverrides)._padding_ = 0;
  *(undefined4 *)&(this->CommandLineOverrides)._padding_ = 0;
  *(undefined8 *)&(this->CommandLineOverrides).PerObjectConfigArrayOfStructKeys = 0;
  *(undefined8 *)&(this->CommandLineOverrides).PerObjectConfigArrayOfStructKeys.field_0x8 = 0;
  *(undefined8 *)&(this->CommandLineOverrides).PerObjectConfigArrayOfStructKeys.field_0x20 = 0;
  *(undefined4 *)&(this->CommandLineOverrides).PerObjectConfigArrayOfStructKeys.field_0x28 = 0;
  *(undefined4 *)&(this->CommandLineOverrides).PerObjectConfigArrayOfStructKeys.field_0x2c = 0x80;
  *(undefined4 *)&(this->CommandLineOverrides).PerObjectConfigArrayOfStructKeys.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->CommandLineOverrides).PerObjectConfigArrayOfStructKeys.field_0x34 = 0;
  *(undefined8 *)&(this->CommandLineOverrides).PerObjectConfigArrayOfStructKeys.field_0x40 = 0;
  *(undefined4 *)&(this->CommandLineOverrides).PerObjectConfigArrayOfStructKeys.field_0x48 = 0;
  (this->CommandLineOverrides).Branch = (FConfigBranch *)0x0;
  (this->CommandLineOverrides).Tag.ComparisonIndex = 0;
  (this->CommandLineOverrides).Tag.Number = 0;
  (this->CommandLineOverrides).bPythonConfigParserMode = '\0';
  (this->CommandLineOverrides).bIsSavedConfigFile = '\0';
  (this->CommandLineOverrides).bNeverSafeUnload = '\0';
  (this->CommandLineOverrides).Filename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->CommandLineOverrides).Filename.Data.ArrayNum = 0;
  (this->CommandLineOverrides).Filename.Data.ArrayMax = 0;
  FConfigFile::FConfigFile(&this->InMemoryFile);
  (this->RuntimeChanges)._padding_ = 0;
  (this->RuntimeChanges)._padding_ = 0;
  (this->RuntimeChanges)._padding_ = 0;
  *(undefined4 *)&(this->RuntimeChanges)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->RuntimeChanges)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->RuntimeChanges)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->RuntimeChanges)._padding_ + 4) = 0;
  (this->RuntimeChanges)._padding_ = 0;
  *(undefined4 *)&(this->RuntimeChanges)._padding_ = 0;
  *(undefined8 *)&(this->RuntimeChanges).PerObjectConfigArrayOfStructKeys = 0;
  *(undefined8 *)&(this->RuntimeChanges).PerObjectConfigArrayOfStructKeys.field_0x8 = 0;
  *(undefined8 *)&(this->RuntimeChanges).PerObjectConfigArrayOfStructKeys.field_0x20 = 0;
  *(undefined4 *)&(this->RuntimeChanges).PerObjectConfigArrayOfStructKeys.field_0x28 = 0;
  *(undefined4 *)&(this->RuntimeChanges).PerObjectConfigArrayOfStructKeys.field_0x2c = 0x80;
  *(undefined4 *)&(this->RuntimeChanges).PerObjectConfigArrayOfStructKeys.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RuntimeChanges).PerObjectConfigArrayOfStructKeys.field_0x34 = 0;
  *(undefined8 *)&(this->RuntimeChanges).PerObjectConfigArrayOfStructKeys.field_0x40 = 0;
  *(undefined4 *)&(this->RuntimeChanges).PerObjectConfigArrayOfStructKeys.field_0x48 = 0;
  (this->RuntimeChanges).Branch = (FConfigBranch *)0x0;
  (this->RuntimeChanges).Tag.ComparisonIndex = 0;
  (this->RuntimeChanges).Tag.Number = 0;
  (this->RuntimeChanges).bPythonConfigParserMode = '\0';
  (this->RuntimeChanges).bIsSavedConfigFile = '\0';
  (this->RuntimeChanges).bNeverSafeUnload = '\0';
  (this->RuntimeChanges).Filename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeChanges).Filename.Data.ArrayNum = 0;
  (this->RuntimeChanges).Filename.Data.ArrayMax = 0;
  if (DefaultReplayMethod == -1) {
    pwVar2 = FCommandLine::Get();
    bVar1 = FParse::Value(pwVar2,L"ConfigReplayMethod=",&DefaultReplayMethod);
    if (!bVar1) {
      DefaultReplayMethod = GDefaultReplayMethod;
    }
  }
  if (DefaultReplayMethod == 0) {
    this->ReplayMethod = NoReplay;
  }
  else if (DefaultReplayMethod == 1) {
    this->ReplayMethod = DynamicLayerReplay;
  }
  else {
    this->ReplayMethod = FullReplay;
  }
  (this->SavedLayer).Branch = this;
  (this->CombinedStaticLayers).Branch = this;
  (this->FinalCombinedLayers).Branch = this;
  (this->CommandLineOverrides).Branch = this;
  (this->InMemoryFile).Branch = this;
  if (GUseNewSaveTracking != 0) {
    (this->InMemoryFile).ChangeTracker = &this->SavedLayer;
  }
  this->InactiveTimer = -1.0;
  return this;
}

// ~FConfigBranch @ 141857040

void __thiscall FConfigBranch::~FConfigBranch(FConfigBranch *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  FConfigCommandStream::~FConfigCommandStream(&this->RuntimeChanges);
  FConfigFile::~FConfigFile(&this->InMemoryFile);
  FConfigCommandStream::~FConfigCommandStream(&this->CommandLineOverrides);
  FConfigFile::~FConfigFile(&this->FinalCombinedLayers);
  FConfigFile::~FConfigFile(&this->CombinedStaticLayers);
  FConfigCommandStream::~FConfigCommandStream(&this->SavedLayer);
  TDoubleLinkedList<FConfigCommandStream_*>::~TDoubleLinkedList<FConfigCommandStream_*>
            (&this->DynamicLayers);
  *(undefined4 *)&(this->StaticLayers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StaticLayers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStream>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStream>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStream>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StaticLayers);
  *(undefined4 *)&(this->Hierarchy)._padding_ = 0;
  pvVar1 = (void *)(this->Hierarchy)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FUtf8String>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FUtf8String>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FUtf8String>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Hierarchy);
  pFVar2 = (this->SourceProjectConfigDir).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SourceEngineConfigDir).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->IniPath).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// AddDynamicLayerStringToHierarchy @ 14185c8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FConfigBranch::AddDynamicLayerStringToHierarchy
          (FConfigBranch *this,FString *param_1,FString *param_2,FName param_3,
          DynamicLayerPriority param_4,FConfigModificationTracker *param_5)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  TDoubleLinkedListNode *pTVar7;
  FName FVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  bool bVar11;
  FConfigModificationTracker *pFVar12;
  bool bVar13;
  undefined1 uVar14;
  FConfigCommandStream *pFVar15;
  TDoubleLinkedListNode *pTVar16;
  TDoubleLinkedListNode *pTVar17;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>
  *this_01;
  FConfigSection *this_02;
  longlong lVar18;
  wchar_t *pwVar19;
  int iVar20;
  FConfigCommandStream *pFVar21;
  uint uVar22;
  longlong lVar23;
  int iVar24;
  longlong *plVar25;
  uint uVar26;
  FString *pFVar27;
  FName local_res20;
  undefined1 auStackY_428 [32];
  undefined1 local_3d7 [3];
  FLLMScope local_3d4;
  FConfigModificationTracker *local_3d0;
  int local_3c8;
  int local_3c4;
  undefined1 local_3c0 [16];
  FMemScope local_3b0;
  FString local_3a8;
  FString local_398;
  FConfigCommandStream *local_388;
  int iStack_380;
  uint uStack_37c;
  longlong *local_378;
  undefined4 uStack_370;
  int iStack_36c;
  int local_368;
  undefined4 uStack_364;
  int iStack_360;
  undefined4 uStack_35c;
  FConfigCommandStream *local_358;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_350;
  undefined8 uStack_330;
  FScriptContainerElement *local_328;
  int iStack_320;
  undefined4 uStack_31c;
  TStringView<wchar_t> local_318 [2];
  undefined4 local_2ec;
  undefined1 local_2e8 [80];
  undefined1 local_298 [64];
  void *local_258;
  undefined4 local_250;
  FConfigBranch *local_248;
  FName local_240;
  undefined2 local_237;
  uchar local_235;
  ForAnyElementType local_230;
  undefined8 local_228;
  undefined1 local_218 [64];
  void *local_1d8;
  int local_1d0 [2];
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1c8;
  void *local_188;
  undefined4 local_180;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_178;
  void *local_138;
  undefined4 local_130;
  undefined1 local_128;
  undefined1 local_118 [144];
  void *local_88;
  undefined4 local_80;
  ForAnyElementType local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_428;
  local_3d0 = param_5;
  local_res20 = param_3;
  local_3c0._8_8_ = param_1;
  FLLMScope::FLLMScope(&local_3d4,ConfigSystem,false,None,Default,true);
  FMemScope::FMemScope(&local_3b0,ConfigSystem,true);
  if (this->bIsSafeUnloaded != false) {
    SafeReload(this);
  }
  pFVar21 = (FConfigCommandStream *)0x0;
  bVar11 = false;
  local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.Data.ArrayNum = 0;
  local_3a8.Data.ArrayMax = 0;
  local_398.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_398.Data.ArrayNum = 0;
  local_398.Data.ArrayMax = 0;
  CalculateDiff((FConfigCommandStream *)local_118,&this->FinalCombinedLayers,&this->InMemoryFile,
                &local_398,&local_3a8);
  local_2e8._0_8_ = 0;
  local_2e8._8_8_ = 0;
  local_2e8._32_8_ = 0;
  local_2e8._40_4_ = 0;
  local_2e8._44_4_ = 0x80;
  local_2e8._48_4_ = 0xffffffff;
  local_2e8._52_4_ = 0;
  local_2e8._64_8_ = (void *)0x0;
  local_2e8._72_4_ = 0;
  local_298._0_8_ = 0;
  local_298._8_8_ = 0;
  local_298._32_8_ = 0;
  local_298._40_4_ = 0;
  local_298._44_4_ = 0x80;
  local_298._48_4_ = 0xffffffff;
  local_298._52_4_ = 0;
  local_258 = (void *)0x0;
  local_250 = 0;
  local_248 = (FConfigBranch *)0x0;
  local_240.ComparisonIndex.Value = 0;
  local_240.Number = 0;
  local_237._0_1_ = '\0';
  local_237._1_1_ = '\0';
  local_235 = '\0';
  local_230.Data = (FScriptContainerElement *)0x0;
  local_228._0_4_ = 0;
  local_228._4_4_ = 0;
  if (this->ReplayMethod == NoReplay) {
    pFVar21 = (FConfigCommandStream *)local_2e8;
    bVar11 = true;
  }
  else {
    pFVar15 = ::operator_new(200);
    if (pFVar15 != (FConfigCommandStream *)0x0) {
      pFVar15->_padding_ = 0;
      pFVar15->_padding_ = 0;
      pFVar15->_padding_ = 0;
      *(undefined4 *)&pFVar15->_padding_ = 0;
      *(undefined4 *)((longlong)&pFVar15->_padding_ + 4) = 0x80;
      *(undefined4 *)&pFVar15->_padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar15->_padding_ + 4) = 0;
      pFVar15->_padding_ = 0;
      *(undefined4 *)&pFVar15->_padding_ = 0;
      *(undefined8 *)&pFVar15->PerObjectConfigArrayOfStructKeys = 0;
      *(undefined8 *)&(pFVar15->PerObjectConfigArrayOfStructKeys).field_0x8 = 0;
      *(undefined8 *)&(pFVar15->PerObjectConfigArrayOfStructKeys).field_0x20 = 0;
      *(undefined4 *)&(pFVar15->PerObjectConfigArrayOfStructKeys).field_0x28 = 0;
      *(undefined4 *)&(pFVar15->PerObjectConfigArrayOfStructKeys).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar15->PerObjectConfigArrayOfStructKeys).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar15->PerObjectConfigArrayOfStructKeys).field_0x34 = 0;
      *(undefined8 *)&(pFVar15->PerObjectConfigArrayOfStructKeys).field_0x40 = 0;
      *(undefined4 *)&(pFVar15->PerObjectConfigArrayOfStructKeys).field_0x48 = 0;
      pFVar15->Branch = (FConfigBranch *)0x0;
      (pFVar15->Tag).ComparisonIndex = 0;
      (pFVar15->Tag).Number = 0;
      pFVar15->bPythonConfigParserMode = '\0';
      pFVar15->bIsSavedConfigFile = '\0';
      pFVar15->bNeverSafeUnload = '\0';
      (pFVar15->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar15->Filename).Data.ArrayNum = 0;
      (pFVar15->Filename).Data.ArrayMax = 0;
      pFVar21 = pFVar15;
    }
    pFVar21->Priority = param_4;
    ::FString::operator=(&pFVar21->Filename,param_1);
    pTVar16 = (this->DynamicLayers).HeadNode;
    if (pTVar16 != (TDoubleLinkedListNode *)0x0) {
      do {
        if (pFVar21->Priority < pTVar16->Value->Priority) {
          pTVar17 = ::operator_new(0x18);
          if (pTVar17 != (TDoubleLinkedListNode *)0x0) {
            pTVar17->Value = pFVar21;
            pTVar17->NextNode = (TDoubleLinkedListNode *)0x0;
            pTVar17->PrevNode = (TDoubleLinkedListNode *)0x0;
            pTVar7 = (this->DynamicLayers).HeadNode;
            if (pTVar16 == pTVar7) {
              if (pTVar7 == (TDoubleLinkedListNode *)0x0) {
                (this->DynamicLayers).TailNode = pTVar17;
                (this->DynamicLayers).HeadNode = pTVar17;
              }
              else {
                pTVar17->NextNode = pTVar7;
                ((this->DynamicLayers).HeadNode)->PrevNode = pTVar17;
                (this->DynamicLayers).HeadNode = pTVar17;
              }
            }
            else {
              pTVar17->PrevNode = pTVar16->PrevNode;
              pTVar17->NextNode = pTVar16;
              pTVar16->PrevNode->NextNode = pTVar17;
              pTVar16->PrevNode = pTVar17;
            }
            (**(code **)((this->DynamicLayers)._padding_ + 8))
                      (&this->DynamicLayers,(this->DynamicLayers).ListSize + 1);
          }
          goto LAB_14185cbd8;
        }
        pTVar16 = pTVar16->NextNode;
      } while (pTVar16 != (TDoubleLinkedListNode *)0x0);
    }
    pTVar16 = ::operator_new(0x18);
    if (pTVar16 != (TDoubleLinkedListNode *)0x0) {
      pTVar16->Value = pFVar21;
      pTVar16->NextNode = (TDoubleLinkedListNode *)0x0;
      pTVar16->PrevNode = (TDoubleLinkedListNode *)0x0;
      pTVar17 = (this->DynamicLayers).TailNode;
      if (pTVar17 == (TDoubleLinkedListNode *)0x0) {
        (this->DynamicLayers).HeadNode = pTVar16;
      }
      else {
        pTVar17->NextNode = pTVar16;
        pTVar16->PrevNode = (this->DynamicLayers).TailNode;
      }
      (this->DynamicLayers).TailNode = pTVar16;
      (**(code **)((this->DynamicLayers)._padding_ + 8))
                (&this->DynamicLayers,(this->DynamicLayers).ListSize + 1);
    }
    bVar11 = true;
  }
LAB_14185cbd8:
  pFVar21->bNeverSafeUnload = '\x01';
  pFVar21->Tag = local_res20;
  local_328 = (param_2->Data).AllocatorInstance.Data;
  iVar20 = (param_2->Data).ArrayNum;
  iVar24 = 0;
  iStack_320 = iVar20 + -1;
  if (iVar20 == 0) {
    iStack_320 = iVar24;
  }
  local_318[0]._12_4_ = uStack_31c;
  local_318[0].Size = iStack_320;
  local_318[0].DataPtr = (wchar_t *)local_328;
  FillFileFromBuffer<FConfigCommandStream>(pFVar21,local_318,true,param_1);
  if (param_5 != (FConfigModificationTracker *)0x0) {
    if (param_5->bTrackModifiedSections != false) {
      iVar20 = (int)pFVar21->_padding_;
      plVar1 = &pFVar21->_padding_;
      uStack_37c = 1;
      local_368 = 0;
      iStack_36c = 0;
      if (iVar20 != 0) {
        plVar25 = (longlong *)pFVar21->_padding_;
        if ((longlong *)pFVar21->_padding_ == (longlong *)0x0) {
          plVar25 = plVar1;
        }
        uVar22 = (uint)*plVar25;
        while (uVar22 == 0) {
          lVar18 = (longlong)iVar24;
          local_368 = local_368 + 0x20;
          iVar24 = iVar24 + 1;
          iStack_36c = iVar20;
          if ((int)(iVar20 + -1 + (iVar20 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar24) goto LAB_14185ccae;
          uVar22 = *(uint *)((longlong)plVar25 + lVar18 * 4 + 4);
        }
        uStack_37c = -uVar22 & uVar22;
        uVar3 = (ulonglong)uStack_37c * 2 + 1;
        lVar18 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_3c8 = (int)lVar18;
        iStack_36c = local_368 + -1 + local_3c8;
        if (iVar20 < iStack_36c) {
          iStack_36c = iVar20;
        }
      }
LAB_14185ccae:
      uVar22 = (uint)pFVar21->_padding_;
      uStack_364 = local_2ec;
      uVar26 = uVar22 & 0xffffffe0;
      iStack_360 = (int)pFVar21->_padding_ - *(int *)((longlong)&pFVar21->_padding_ + 4);
      uStack_370 = 0xffffffff;
      TStack_350._padding_ = CONCAT44(uStack_37c,iVar24);
      TStack_350.CurrentBitIndex = iStack_36c;
      TStack_350.UnvisitedBitMask = 0xffffffff;
      iVar20 = (int)uVar22 >> 5;
      TStack_350._28_4_ = local_2ec;
      TStack_350.BaseBitIndex = local_368;
      uStack_330 = CONCAT44(uStack_35c,iStack_360);
      local_388 = pFVar21;
      iStack_380 = iVar24;
      local_378 = plVar1;
      local_358 = pFVar21;
      TStack_350.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
      if (((int)uVar22 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        uVar14 = (*pcVar10)();
        return (bool)uVar14;
      }
      uVar6 = (uint)pFVar21->_padding_;
      if (uVar22 != uVar6) {
        plVar25 = plVar1;
        if ((longlong *)pFVar21->_padding_ != (longlong *)0x0) {
          plVar25 = (longlong *)pFVar21->_padding_;
        }
        uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)((longlong)plVar25 + (longlong)iVar20 * 4);
        while (uVar22 == 0) {
          lVar18 = (longlong)iVar20;
          uVar26 = uVar26 + 0x20;
          iVar20 = iVar20 + 1;
          uVar22 = uVar6;
          if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
          goto LAB_14185cdb0;
          uVar22 = *(uint *)((longlong)plVar25 + lVar18 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_3c4 = (int)lVar18;
        uVar22 = (uVar26 - 1) + local_3c4;
        if ((int)uVar6 < (int)uVar22) {
          uVar22 = uVar6;
        }
      }
LAB_14185cdb0:
      while( true ) {
        pFVar15 = local_358;
        if ((int)local_358->_padding_ - *(int *)((longlong)&local_358->_padding_ + 4) !=
            (int)uStack_330) {
          local_3d7[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3d7);
        }
        if (((TStack_350.CurrentBitIndex == uVar22) &&
            (TStack_350.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) &&
           (param_1 = (FString *)local_3c0._8_8_, param_5 = local_3d0, pFVar15 == pFVar21)) break;
        pFVar27 = (FString *)((longlong)TStack_350.CurrentBitIndex * 0xb8 + pFVar15->_padding_);
        FVar8 = this->IniName;
        uVar26 = ::GetTypeHash(FVar8.ComparisonIndex.Value);
        pFVar12 = local_3d0;
        this_00 = TMapBase<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
                  ::FindOrAddImpl<FName_const_&>
                            ((TMapBase<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
                              *)&local_3d0->ModifiedSectionsPerBranch,uVar26 + FVar8.Number,
                             &this->IniName);
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  (this_00,(FString *)local_3c0,(bool *)pFVar27);
        iVar20 = (pFVar27->Data).ArrayNum;
        if (iVar20 == 0) {
          pwVar19 = L"";
          iVar20 = 0;
        }
        else {
          pwVar19 = (wchar_t *)(pFVar27->Data).AllocatorInstance.Data;
          iVar20 = iVar20 + -1;
        }
        uVar26 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar20,pwVar19);
        iVar20 = TSet<TTuple<FString,FConfigModificationTracker::FCVarTracker>,TDefaultMapHashableKeyFuncs<FString,FConfigModificationTracker::FCVarTracker,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>
                           ((TSet<TTuple<FString,FConfigModificationTracker::FCVarTracker>,TDefaultMapHashableKeyFuncs<FString,FConfigModificationTracker::FCVarTracker,0>,FDefaultSetAllocator>
                             *)&pFVar12->CVars,uVar26,pFVar27);
        if (iVar20 == -1) {
          lVar18 = 0;
        }
        else {
          lVar18 = (longlong)iVar20 * 0x70 + *(longlong *)&pFVar12->CVars;
        }
        lVar23 = lVar18 + 0x10;
        if (lVar18 == 0) {
          lVar23 = 0;
        }
        if (lVar23 != 0) {
          local_218._0_8_ = 0;
          local_218._32_8_ = 0;
          local_218._40_4_ = 0;
          local_218._52_4_ = 0;
          local_1d8 = (void *)0x0;
          local_1d0[0] = 0;
          local_1c8._0_8_ = 0;
          local_1c8._32_8_ = 0;
          local_1c8._40_4_ = 0;
          local_1c8._52_4_ = 0;
          local_188 = (void *)0x0;
          local_180 = 0;
          local_178._0_8_ = 0;
          local_178._32_8_ = 0;
          local_178._40_4_ = 0;
          local_178._52_4_ = 0;
          local_138 = (void *)0x0;
          local_130 = 0;
          local_218._8_8_ = 0;
          local_218._44_4_ = 0x80;
          local_218._48_4_ = 0xffffffff;
          local_1c8._8_8_ = 0;
          local_1c8._44_4_ = 0x80;
          local_1c8._48_4_ = 0xffffffff;
          local_178._8_8_ = 0;
          local_178._44_4_ = 0x80;
          local_178._48_4_ = 0xffffffff;
          local_128 = 1;
          if ((TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_218 !=
              (TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)(pFVar27 + 1)) {
            UE::Core::Private::
            CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                      ((ForElementType<FSetElementId> *)(local_218 + 0x38),local_1d0,
                       (ForElementType<FSetElementId> *)&pFVar27[4].Data.ArrayNum,
                       pFVar27[5].Data.ArrayNum);
            TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_218,
                        (TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)(pFVar27 + 1));
          }
          FVar8 = local_res20;
          uVar26 = ::GetTypeHash(local_res20.ComparisonIndex.Value);
          this_01 = TMapBase<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>,0>_>
                    ::FindOrAddImpl<FName_const_&>
                              ((TMapBase<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>,0>_>
                                *)(lVar23 + 8),uVar26 + FVar8.Number,&local_res20);
          FVar8 = this->IniName;
          uVar26 = ::GetTypeHash(FVar8.ComparisonIndex.Value);
          this_02 = TMapBase<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>
                    ::FindOrAddImpl<FName_const_&>
                              ((TMapBase<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>
                                *)this_01,uVar26 + FVar8.Number,&this->IniName);
          TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
          ::Append<FDefaultSetAllocator>
                    ((TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                      *)this_02,
                     (TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                      *)local_218);
          local_130 = 0;
          if (local_138 != (void *)0x0) {
            FMemory::Free(local_138);
          }
          TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_178);
          local_180 = 0;
          if (local_188 != (void *)0x0) {
            FMemory::Free(local_188);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_1c8);
          local_1d0[0] = 0;
          if (local_1d8 != (void *)0x0) {
            FMemory::Free(local_1d8);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_218);
        }
        TStack_350.UnvisitedBitMask = TStack_350.UnvisitedBitMask & ~TStack_350._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_350);
      }
    }
    if (param_5->bTrackLoadedFiles != false) {
      pFVar9 = (param_5->LoadedFiles).AllocatorInstance.Data;
      if (((pFVar9 <= param_1) &&
          (param_1 < pFVar9 + (longlong)(param_5->LoadedFiles).ArrayMax * 0x10)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar10 = (code *)swi(3);
        uVar14 = (*pcVar10)();
        return (bool)uVar14;
      }
      iVar20 = (param_5->LoadedFiles).ArrayNum;
      piVar2 = &(param_5->LoadedFiles).ArrayMax;
      if (iVar20 == *piVar2) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(param_5->LoadedFiles).AllocatorInstance,piVar2);
      }
      (param_5->LoadedFiles).ArrayNum = iVar20 + 1;
      ::FString::FString((FString *)
                         ((param_5->LoadedFiles).AllocatorInstance.Data + (longlong)iVar20 * 0x10),
                         param_1);
    }
  }
  if ((bVar11) &&
     ((int)(this->CommandLineOverrides)._padding_ -
      *(int *)((longlong)&(this->CommandLineOverrides)._padding_ + 4) < 1)) {
    FConfigFile::ApplyFile(&this->FinalCombinedLayers,pFVar21);
    FConfigFile::ApplyFile(&this->InMemoryFile,pFVar21);
  }
  else {
    FConfigFile::operator=(&this->FinalCombinedLayers,&this->CombinedStaticLayers);
    for (pTVar16 = (this->DynamicLayers).HeadNode; pTVar16 != (TDoubleLinkedListNode *)0x0;
        pTVar16 = pTVar16->NextNode) {
      FConfigFile::ApplyFile(&this->FinalCombinedLayers,pTVar16->Value);
    }
    FConfigFile::ApplyFile(&this->FinalCombinedLayers,&this->CommandLineOverrides);
    bVar4 = (this->InMemoryFile).field_0x50;
    FConfigFile::operator=(&this->InMemoryFile,&this->FinalCombinedLayers);
    bVar5 = (this->InMemoryFile).field_0x50;
    (this->InMemoryFile).field_0x50 = (bVar4 & 0xf0 ^ bVar5) & 0x10 ^ bVar5;
  }
  FConfigFile::ApplyFile(&this->InMemoryFile,(FConfigCommandStream *)local_118);
  FConfigFile::Shrink(&this->FinalCombinedLayers);
  FConfigFile::Shrink(&this->InMemoryFile);
  if (local_230.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data);
  }
  local_250 = 0;
  if (local_258 != (void *)0x0) {
    FMemory::Free(local_258);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_298);
  local_2e8._72_4_ = 0;
  if ((void *)local_2e8._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2e8._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_2e8);
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  local_80 = 0;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_118 + 0x50));
  local_118._72_4_ = 0;
  if ((void *)local_118._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_118._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_118);
  FMemScope::~FMemScope(&local_3b0);
  FLLMScope::~FLLMScope(&local_3d4);
  return true;
}

// AddDynamicLayerToHierarchy @ 14185d350

bool __thiscall
FConfigBranch::AddDynamicLayerToHierarchy
          (FConfigBranch *this,FString *param_1,FConfigModificationTracker *param_2,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_4)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  bool bVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_> local_48;
  FDynamicLayerInfo local_38;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar1 = DoesConfigFileExistWrapper
                    (pwVar3,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0,
                     param_3,param_4);
  bVar2 = false;
  if (bVar1) {
    local_38.Filename.Data.ArrayNum = (param_1->Data).ArrayNum;
    lVar4 = (longlong)local_38.Filename.Data.ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_38.Filename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Filename.Data.ArrayNum == 0) {
      local_38.Filename.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Filename.Data.ArrayNum,0,(ForAnyElementType *)&local_38,
                 local_38.Filename.Data.ArrayNum,&local_38.Filename.Data.ArrayMax);
      memcpy(local_38.Filename.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
    }
    local_38.Tag.ComparisonIndex.Value = 0;
    local_38.Tag.Number = 0;
    local_38.Priority = 0;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_48.AllocatorInstance,1,&local_48.ArrayMax);
    ConstructItems<FDynamicLayerInfo,FDynamicLayerInfo,int>
              (local_48.AllocatorInstance.Data,&local_38,1);
    bVar2 = AddDynamicLayersToHierarchy(this,&local_48,param_2,param_3,param_4,false);
    DestructItems<FDynamicLayerInfo,int>
              ((FDynamicLayerInfo *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    if ((FDynamicLayerInfo *)local_48.AllocatorInstance.Data != (FDynamicLayerInfo *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (local_38.Filename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Filename.Data.AllocatorInstance.Data);
    }
  }
  return bVar2;
}

// AddDynamicLayersToHierarchy @ 14185d4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FConfigBranch::AddDynamicLayersToHierarchy
          (FConfigBranch *this,TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_> *param_1,
          FConfigModificationTracker *param_2,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_4,bool param_5)

{
  int *piVar1;
  FName *pFVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  TDoubleLinkedListNode *pTVar6;
  FName FVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  FConfigModificationTracker *pFVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  FConfigCommandStream *pFVar15;
  ulonglong uVar16;
  FConfigCommandStream *pFVar17;
  TDoubleLinkedListNode *pTVar18;
  TDoubleLinkedListNode *pTVar19;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>
  *this_01;
  FConfigSection *this_02;
  longlong lVar20;
  longlong lVar21;
  wchar_t *pwVar22;
  int iVar23;
  uint uVar24;
  FString *pFVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  ForAnyElementType FVar28;
  longlong *plVar29;
  TBitArray<FDefaultBitArrayAllocator> *pTVar30;
  longlong *plVar31;
  TBitArray<FDefaultBitArrayAllocator> *pTVar32;
  undefined1 auStackY_4f8 [32];
  undefined1 local_4a7;
  undefined1 local_4a6;
  undefined1 local_4a5 [5];
  FConfigCommandStream *local_4a0;
  ForAnyElementType local_498;
  undefined8 local_490;
  undefined1 local_488 [4];
  uint local_484;
  FLLMScope local_480;
  uint local_47c;
  FConfigCommandStream *local_478;
  int iStack_470;
  uint uStack_46c;
  TBitArray<FDefaultBitArrayAllocator> *local_468;
  undefined4 uStack_460;
  int iStack_45c;
  int local_458;
  undefined4 uStack_454;
  int iStack_450;
  undefined4 uStack_44c;
  FConfigModificationTracker *local_448;
  FScriptContainerElement *local_440;
  int local_438;
  undefined1 local_434 [20];
  FConfigCommandStream *local_420;
  FName *local_418;
  FName local_410;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_408;
  TBitArray<FDefaultBitArrayAllocator> *local_400;
  TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_> *local_3f8;
  FScriptContainerElement *local_3f0;
  FMemScope local_3e8;
  FConfigBranch *local_3e0;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  int local_398;
  FConfigCommandStream *local_390;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_388;
  undefined8 uStack_368;
  FConfigCommandStream *local_360;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_358;
  undefined8 uStack_338;
  FString local_330;
  FString local_320;
  FString local_310 [2];
  undefined4 local_2e4;
  undefined4 local_2c4;
  undefined1 local_2b8 [80];
  undefined1 local_268 [64];
  void *local_228;
  undefined4 local_220;
  FConfigBranch *local_218;
  FName local_210;
  undefined2 local_207;
  uchar local_205;
  ForAnyElementType local_200;
  undefined8 local_1f8;
  FConfigCommandStream local_1e8;
  FConfigCommandStream local_118;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4f8;
  local_408 = param_4;
  local_448 = param_2;
  local_434._12_8_ = param_3;
  local_3f8 = param_1;
  local_3e0 = this;
  FLLMScope::FLLMScope(&local_480,ConfigSystem,false,None,Default,true);
  FMemScope::FMemScope(&local_3e8,ConfigSystem,true);
  if (this->bIsSafeUnloaded != false) {
    SafeReload(this);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pwVar22 = FCommandLine::Get();
    bDumpIniLoadInfo = FParse::Param(pwVar22,L"dumpiniloads");
    _Init_thread_footer(&::_TSS0);
  }
  local_2b8._0_8_ = 0;
  bVar10 = false;
  local_2b8._8_8_ = 0;
  local_2b8._32_8_ = 0;
  local_2b8._40_4_ = 0;
  local_2b8._44_4_ = 0x80;
  local_2b8._48_4_ = 0xffffffff;
  local_2b8._52_4_ = 0;
  local_2b8._64_8_ = (void *)0x0;
  local_2b8._72_4_ = 0;
  local_268._0_8_ = 0;
  local_268._8_8_ = 0;
  local_268._32_8_ = 0;
  local_268._40_4_ = 0;
  local_268._44_4_ = 0x80;
  local_268._48_4_ = 0xffffffff;
  local_268._52_4_ = 0;
  local_228 = (void *)0x0;
  local_220 = 0;
  local_218 = (FConfigBranch *)0x0;
  local_210.ComparisonIndex.Value = 0;
  local_210.Number = 0;
  local_207._0_1_ = '\0';
  local_207._1_1_ = '\0';
  local_205 = '\0';
  local_200.Data = (FScriptContainerElement *)0x0;
  local_1f8._0_4_ = 0;
  local_1f8._4_4_ = 0;
  if (param_5) {
    local_3d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3d8.Data.ArrayNum = 0;
    local_3d8.Data.ArrayMax = 0;
    local_3c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3c8.Data.ArrayNum = 0;
    local_3c8.Data.ArrayMax = 0;
    pFVar15 = CalculateDiff(&local_1e8,&this->FinalCombinedLayers,&this->InMemoryFile,&local_3c8,
                            &local_3d8);
    FConfigCommandStream::operator=((FConfigCommandStream *)local_2b8,pFVar15);
    FConfigCommandStream::~FConfigCommandStream(&local_1e8);
  }
  local_47c = param_1->ArrayNum;
  uVar16 = (ulonglong)(int)local_47c;
  pFVar26 = (param_1->AllocatorInstance).Data;
  local_498.Data = (FScriptContainerElement *)0x0;
  local_490 = 0;
  local_3f0 = pFVar26 + uVar16 * 0x20;
  do {
    while( true ) {
      pFVar8 = local_3f0;
      local_440 = pFVar26;
      if (param_1->ArrayNum != (int)uVar16) {
        local_4a7 = 0;
        `TCheckedPointerIterator<FDynamicLayerInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_4a7);
      }
      if (pFVar26 == pFVar8) {
        if ((0 < (int)local_490) || (param_5)) {
          if (((int)(this->CommandLineOverrides)._padding_ !=
               *(int *)((longlong)&(this->CommandLineOverrides)._padding_ + 4)) &&
             (this->ReplayMethod == NoReplay)) {
            ::FName::ToString(&this->IniName,&local_320);
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("CommandLineOverrides.Num() == 0 || ReplayMethod != EBranchReplayMethod::NoReplay"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ConfigCacheIni.cpp"
                                ,0xdda,
                                L"The branch (%s) with commandline overrides must not have ReplayMethod of NoReplay!"
                               );
            if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_320.Data.AllocatorInstance.Data);
            }
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              uVar13 = (*pcVar9)();
              return (bool)uVar13;
            }
          }
          if (((bVar10) || (param_5)) ||
             ((int)(this->CommandLineOverrides)._padding_ !=
              *(int *)((longlong)&(this->CommandLineOverrides)._padding_ + 4))) {
            FConfigFile::operator=(&this->FinalCombinedLayers,&this->CombinedStaticLayers);
            if (5 < (byte)LogConfig._0_1_) {
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
            }
            for (pTVar18 = (this->DynamicLayers).HeadNode; pTVar18 != (TDoubleLinkedListNode *)0x0;
                pTVar18 = pTVar18->NextNode) {
              FConfigFile::ApplyFile(&this->FinalCombinedLayers,pTVar18->Value);
            }
            FConfigFile::ApplyFile(&this->FinalCombinedLayers,&this->CommandLineOverrides);
            bVar3 = (this->InMemoryFile).field_0x50;
            FConfigFile::operator=(&this->InMemoryFile,&this->FinalCombinedLayers);
            bVar4 = (this->InMemoryFile).field_0x50;
            (this->InMemoryFile).field_0x50 = (bVar3 & 0xf0 ^ bVar4) & 0x10 ^ bVar4;
          }
          else {
            iVar14 = (int)local_490;
            pFVar26 = local_498.Data + (longlong)(int)local_490 * 8;
            FVar28.Data = local_498.Data;
            while( true ) {
              if ((int)local_490 != iVar14) {
                `TCheckedPointerIterator<FConfigCommandStream_*,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_488);
              }
              if (FVar28.Data == pFVar26) break;
              pFVar15 = *(FConfigCommandStream **)FVar28.Data;
              if (5 < (byte)LogConfig._0_1_) {
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
              }
              FConfigFile::ApplyFile(&this->FinalCombinedLayers,pFVar15);
              FConfigFile::ApplyFile(&this->InMemoryFile,pFVar15);
              FVar28.Data = FVar28.Data + 8;
            }
          }
          FConfigFile::ApplyFile(&this->InMemoryFile,(FConfigCommandStream *)local_2b8);
          FConfigFile::Shrink(&this->FinalCombinedLayers);
          FConfigFile::Shrink(&this->InMemoryFile);
        }
        if (local_498.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_498.Data);
        }
        if (local_200.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.Data);
        }
        local_220 = 0;
        if (local_228 != (void *)0x0) {
          FMemory::Free(local_228);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_268);
        local_2b8._72_4_ = 0;
        if ((void *)local_2b8._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_2b8._64_8_);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_2b8);
        FMemScope::~FMemScope(&local_3e8);
        FLLMScope::~FLLMScope(&local_480);
        return false;
      }
      if ((3 < (byte)LogConfig._0_1_) && (bDumpIniLoadInfo != false)) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
      }
      if (5 < (byte)LogConfig._0_1_) {
        ::FName::ToString(&this->IniName,local_310);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
        if (local_310[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_310[0].Data.AllocatorInstance.Data);
        }
      }
      if (*(int *)(pFVar26 + 8) == 0) {
        pwVar22 = L"";
      }
      else {
        pwVar22 = *(wchar_t **)&pFVar26->field_0x0;
      }
      bVar12 = DoesConfigFileExistWrapper
                         (pwVar22,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                                  0x0,
                          (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                          local_434._12_8_,local_408);
      if (!bVar12) break;
      if ((3 < (byte)LogConfig._0_1_) && (bDumpIniLoadInfo != false)) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
      }
      pFVar15 = (FConfigCommandStream *)0x0;
      if (((int)local_490 == 0) && (!param_5)) {
        local_3b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3b8.Data.ArrayNum = 0;
        local_3b8.Data.ArrayMax = 0;
        local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3a8.Data.ArrayNum = 0;
        local_3a8.Data.ArrayMax = 0;
        pFVar17 = CalculateDiff(&local_118,&this->FinalCombinedLayers,&this->InMemoryFile,&local_3a8
                                ,&local_3b8);
        FConfigCommandStream::operator=((FConfigCommandStream *)local_2b8,pFVar17);
        FConfigCommandStream::~FConfigCommandStream(&local_118);
        if (5 < (byte)LogConfig._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
        }
      }
      pFVar17 = ::operator_new(200);
      if (pFVar17 != (FConfigCommandStream *)0x0) {
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = 0;
        *(undefined4 *)&pFVar17->_padding_ = 0;
        *(undefined4 *)((longlong)&pFVar17->_padding_ + 4) = 0x80;
        *(undefined4 *)&pFVar17->_padding_ = 0xffffffff;
        *(undefined4 *)((longlong)&pFVar17->_padding_ + 4) = 0;
        pFVar17->_padding_ = 0;
        *(undefined4 *)&pFVar17->_padding_ = 0;
        *(undefined8 *)&pFVar17->PerObjectConfigArrayOfStructKeys = 0;
        *(undefined8 *)&(pFVar17->PerObjectConfigArrayOfStructKeys).field_0x8 = 0;
        *(undefined8 *)&(pFVar17->PerObjectConfigArrayOfStructKeys).field_0x20 = 0;
        *(undefined4 *)&(pFVar17->PerObjectConfigArrayOfStructKeys).field_0x28 = 0;
        *(undefined4 *)&(pFVar17->PerObjectConfigArrayOfStructKeys).field_0x2c = 0x80;
        *(undefined4 *)&(pFVar17->PerObjectConfigArrayOfStructKeys).field_0x30 = 0xffffffff;
        *(undefined4 *)&(pFVar17->PerObjectConfigArrayOfStructKeys).field_0x34 = 0;
        *(undefined8 *)&(pFVar17->PerObjectConfigArrayOfStructKeys).field_0x40 = 0;
        *(undefined4 *)&(pFVar17->PerObjectConfigArrayOfStructKeys).field_0x48 = 0;
        pFVar17->Branch = (FConfigBranch *)0x0;
        (pFVar17->Tag).ComparisonIndex = 0;
        (pFVar17->Tag).Number = 0;
        pFVar17->bPythonConfigParserMode = '\0';
        pFVar17->bIsSavedConfigFile = '\0';
        pFVar17->bNeverSafeUnload = '\0';
        (pFVar17->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar17->Filename).Data.ArrayNum = 0;
        (pFVar17->Filename).Data.ArrayMax = 0;
        pFVar15 = pFVar17;
      }
      local_4a0 = pFVar15;
      FillFileFromDisk<FConfigCommandStream>(pFVar15,(FString *)pFVar26,true);
      local_4a0->Priority = *(ushort *)(pFVar26 + 0x18);
      ::FString::operator=(&local_4a0->Filename,(FString *)pFVar26);
      local_418 = (FName *)(pFVar26 + 0x10);
      local_4a0->Tag = *(FName *)(pFVar26 + 0x10);
      if (((local_498.Data <= (FScriptContainerElement *)&local_4a0) &&
          ((FScriptContainerElement *)&local_4a0 < local_498.Data + (longlong)local_490._4_4_ * 8))
         && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar12)) {
        pcVar9 = (code *)swi(3);
        uVar13 = (*pcVar9)();
        return (bool)uVar13;
      }
      iVar14 = (int)local_490;
      if ((int)local_490 == local_490._4_4_) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_498,(int *)((longlong)&local_490 + 4));
      }
      local_490 = CONCAT44(local_490._4_4_,iVar14 + 1);
      *(FConfigCommandStream **)(local_498.Data + (longlong)iVar14 * 8) = local_4a0;
      if (this->ReplayMethod == NoReplay) {
        if (5 < (byte)LogConfig._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
        }
      }
      else {
        pTVar18 = (this->DynamicLayers).HeadNode;
        if (pTVar18 != (TDoubleLinkedListNode *)0x0) {
          do {
            if (local_4a0->Priority < pTVar18->Value->Priority) {
              if (5 < (byte)LogConfig._0_1_) {
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
              }
              pTVar19 = ::operator_new(0x18);
              if (pTVar19 != (TDoubleLinkedListNode *)0x0) {
                pTVar19->Value = local_4a0;
                pTVar19->NextNode = (TDoubleLinkedListNode *)0x0;
                pTVar19->PrevNode = (TDoubleLinkedListNode *)0x0;
                pTVar6 = (this->DynamicLayers).HeadNode;
                if (pTVar18 == pTVar6) {
                  if (pTVar6 == (TDoubleLinkedListNode *)0x0) {
                    (this->DynamicLayers).TailNode = pTVar19;
                  }
                  else {
                    pTVar19->NextNode = pTVar6;
                    ((this->DynamicLayers).HeadNode)->PrevNode = pTVar19;
                  }
                  (this->DynamicLayers).HeadNode = pTVar19;
                }
                else {
                  pTVar19->PrevNode = pTVar18->PrevNode;
                  pTVar19->NextNode = pTVar18;
                  pTVar18->PrevNode->NextNode = pTVar19;
                  pTVar18->PrevNode = pTVar19;
                }
                (**(code **)((this->DynamicLayers)._padding_ + 8))(&this->DynamicLayers);
              }
              bVar10 = true;
              goto LAB_14185dbc8;
            }
            pTVar18 = pTVar18->NextNode;
          } while (pTVar18 != (TDoubleLinkedListNode *)0x0);
        }
        if (5 < (byte)LogConfig._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
        }
        pTVar18 = ::operator_new(0x18);
        if (pTVar18 != (TDoubleLinkedListNode *)0x0) {
          pTVar18->Value = local_4a0;
          pTVar18->NextNode = (TDoubleLinkedListNode *)0x0;
          pTVar18->PrevNode = (TDoubleLinkedListNode *)0x0;
          pTVar19 = (this->DynamicLayers).TailNode;
          if (pTVar19 == (TDoubleLinkedListNode *)0x0) {
            (this->DynamicLayers).HeadNode = pTVar18;
          }
          else {
            pTVar19->NextNode = pTVar18;
            pTVar18->PrevNode = (this->DynamicLayers).TailNode;
          }
          (this->DynamicLayers).TailNode = pTVar18;
          (**(code **)((this->DynamicLayers)._padding_ + 8))(&this->DynamicLayers);
        }
      }
LAB_14185dbc8:
      iVar14 = 0;
      if (param_2 != (FConfigModificationTracker *)0x0) {
        if (param_2->bTrackModifiedSections != false) {
          if (5 < (byte)LogConfig._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
          }
          pFVar15 = local_4a0;
          iVar23 = (int)local_4a0->_padding_;
          pTVar32 = (TBitArray<FDefaultBitArrayAllocator> *)&local_4a0->_padding_;
          local_420 = local_4a0;
          uStack_46c = 1;
          local_458 = 0;
          iStack_45c = 0;
          if (iVar23 != 0) {
            plVar31 = (longlong *)pTVar32;
            if ((longlong *)local_4a0->_padding_ != (longlong *)0x0) {
              plVar31 = (longlong *)local_4a0->_padding_;
            }
            uVar27 = (uint)*plVar31;
            while (uVar27 == 0) {
              lVar20 = (longlong)iVar14;
              local_458 = local_458 + 0x20;
              iVar14 = iVar14 + 1;
              iStack_45c = iVar23;
              if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14)
              goto LAB_14185dc8d;
              uVar27 = *(uint *)((longlong)plVar31 + lVar20 * 4 + 4);
            }
            uStack_46c = -uVar27 & uVar27;
            uVar16 = (ulonglong)uStack_46c * 2 + 1;
            lVar20 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            local_398 = (int)lVar20;
            iStack_45c = local_398 + -1 + local_458;
            if (iVar23 < iStack_45c) {
              iStack_45c = iVar23;
            }
          }
LAB_14185dc8d:
          uVar27 = (uint)local_4a0->_padding_;
          uStack_454 = local_2e4;
          iStack_450 = (int)local_4a0->_padding_ - *(int *)((longlong)&local_4a0->_padding_ + 4);
          local_478 = local_4a0;
          uVar24 = uVar27 & 0xffffffe0;
          TStack_358._padding_ = CONCAT44(uStack_46c,iVar14);
          uStack_460 = 0xffffffff;
          TStack_358.CurrentBitIndex = iStack_45c;
          TStack_358.UnvisitedBitMask = 0xffffffff;
          local_360 = local_4a0;
          iVar23 = (int)uVar27 >> 5;
          TStack_358._28_4_ = local_2e4;
          TStack_358.BaseBitIndex = local_458;
          uStack_338 = CONCAT44(uStack_44c,iStack_450);
          local_484 = uVar27;
          iStack_470 = iVar14;
          local_468 = pTVar32;
          local_400 = pTVar32;
          TStack_358.Array = pTVar32;
          if (((int)uVar27 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar12)) {
            pcVar9 = (code *)swi(3);
            uVar13 = (*pcVar9)();
            return (bool)uVar13;
          }
          uVar5 = (uint)pFVar15->_padding_;
          if (uVar27 != uVar5) {
            plVar31 = (longlong *)pFVar15->_padding_;
            plVar29 = (longlong *)pTVar32;
            if (plVar31 != (longlong *)0x0) {
              plVar29 = plVar31;
            }
            uVar27 = -1 << ((byte)uVar27 & 0x1f) &
                     *(uint *)((longlong)plVar29 + (longlong)iVar23 * 4);
            while (uVar27 == 0) {
              lVar20 = (longlong)iVar23;
              uVar24 = uVar24 + 0x20;
              iVar23 = iVar23 + 1;
              uVar27 = uVar5;
              local_484 = uVar5;
              if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
              goto LAB_14185dda1;
              uVar27 = *(uint *)((longlong)plVar29 + lVar20 * 4 + 4);
            }
            uVar16 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
            lVar20 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            local_438 = (int)lVar20;
            uVar27 = local_438 + -1 + uVar24;
            local_484 = uVar27;
            if ((int)uVar5 < (int)uVar27) {
              uVar27 = uVar5;
              local_484 = uVar5;
            }
          }
LAB_14185dda1:
          while( true ) {
            pFVar15 = local_360;
            if ((int)local_360->_padding_ - *(int *)((longlong)&local_360->_padding_ + 4) !=
                (int)uStack_338) {
              local_4a6 = 0;
              `TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_4a6);
            }
            if (((TStack_358.CurrentBitIndex == uVar27) && (TStack_358.Array == pTVar32)) &&
               (pFVar26 = local_440, param_1 = local_3f8, param_2 = local_448, pFVar15 == local_420)
               ) break;
            pFVar25 = (FString *)((longlong)TStack_358.CurrentBitIndex * 0xb8 + pFVar15->_padding_);
            FVar7 = this->IniName;
            uVar24 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
            pFVar11 = local_448;
            this_00 = TMapBase<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
                      ::FindOrAddImpl<FName_const_&>
                                ((TMapBase<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
                                  *)&local_448->ModifiedSectionsPerBranch,FVar7.Number + uVar24,
                                 &this->IniName);
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                      (this_00,(FString *)local_434,(bool *)pFVar25);
            if (5 < (byte)LogConfig._0_1_) {
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
            }
            iVar14 = (pFVar25->Data).ArrayNum;
            if (iVar14 == 0) {
              pwVar22 = L"";
              iVar14 = 0;
            }
            else {
              pwVar22 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
              iVar14 = iVar14 + -1;
            }
            uVar24 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar22);
            iVar14 = TSet<TTuple<FString,FConfigModificationTracker::FCVarTracker>,TDefaultMapHashableKeyFuncs<FString,FConfigModificationTracker::FCVarTracker,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<FString>
                               ((TSet<TTuple<FString,FConfigModificationTracker::FCVarTracker>,TDefaultMapHashableKeyFuncs<FString,FConfigModificationTracker::FCVarTracker,0>,FDefaultSetAllocator>
                                 *)&pFVar11->CVars,uVar24,pFVar25);
            if (iVar14 != -1) {
              lVar21 = (longlong)iVar14 * 0x70 + *(longlong *)&pFVar11->CVars;
              lVar20 = lVar21 + 0x10;
              if (lVar21 == 0) {
                lVar20 = 0;
              }
              if (lVar20 != 0) {
                if (5 < (byte)LogConfig._0_1_) {
                  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
                }
                pFVar2 = local_418;
                FVar7 = *local_418;
                uVar27 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
                this_01 = TMapBase<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>,0>_>
                          ::FindOrAddImpl<FName_const_&>
                                    ((TMapBase<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>,0>_>
                                      *)(lVar20 + 8),FVar7.Number + uVar27,pFVar2);
                FVar7 = this->IniName;
                uVar27 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
                this_02 = TMapBase<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>
                          ::FindOrAddImpl<FName_const_&>
                                    ((TMapBase<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>
                                      *)this_01,FVar7.Number + uVar27,&this->IniName);
                iVar14 = pFVar25[3].Data.ArrayNum;
                local_468 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar25 + 2);
                pFVar15 = (FConfigCommandStream *)(pFVar25 + 1);
                uStack_46c = 1;
                iStack_470 = 0;
                local_458 = 0;
                iStack_45c = 0;
                if (iVar14 != 0) {
                  pTVar32 = (TBitArray<FDefaultBitArrayAllocator> *)
                            pFVar25[3].Data.AllocatorInstance.Data;
                  pTVar30 = local_468;
                  if (pTVar32 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                    pTVar30 = pTVar32;
                  }
                  uVar27 = (uint)*(longlong *)(pTVar30->AllocatorInstance).InlineData;
                  local_458 = 0;
                  while (uVar27 == 0) {
                    lVar20 = (longlong)iStack_470;
                    local_458 = local_458 + 0x20;
                    iStack_470 = iStack_470 + 1;
                    iStack_45c = iVar14;
                    if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_470)
                    goto LAB_14185df8d;
                    uVar27 = *(uint *)((longlong)(pTVar30->AllocatorInstance).InlineData +
                                      lVar20 * 4 + 4);
                  }
                  uStack_46c = -uVar27 & uVar27;
                  uVar16 = (ulonglong)uStack_46c * 2 + 1;
                  lVar20 = 0x3f;
                  if (uVar16 != 0) {
                    for (; uVar16 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                    }
                  }
                  local_434._4_4_ = (undefined4)lVar20;
                  iStack_45c = local_458 + -1 + local_434._4_4_;
                  if (iVar14 < iStack_45c) {
                    iStack_45c = iVar14;
                  }
                }
LAB_14185df8d:
                uStack_454 = local_2c4;
                iStack_450 = pFVar25[1].Data.ArrayNum -
                             *(int *)((longlong)&pFVar25[4].Data.AllocatorInstance.Data + 4);
                uVar24 = pFVar25[3].Data.ArrayNum;
                TStack_388._padding_ = CONCAT44(uStack_46c,iStack_470);
                uVar27 = uVar24 & 0xffffffe0;
                uStack_460 = 0xffffffff;
                TStack_388.CurrentBitIndex = iStack_45c;
                TStack_388.UnvisitedBitMask = 0xffffffff;
                iVar14 = (int)uVar24 >> 5;
                TStack_388._28_4_ = local_2c4;
                TStack_388.BaseBitIndex = local_458;
                uStack_368 = CONCAT44(uStack_44c,iStack_450);
                local_478 = pFVar15;
                local_390 = pFVar15;
                TStack_388.Array = local_468;
                if (((int)uVar24 < 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x7af,L""), bVar12)) {
                  pcVar9 = (code *)swi(3);
                  uVar13 = (*pcVar9)();
                  return (bool)uVar13;
                }
                uVar5 = pFVar25[3].Data.ArrayNum;
                if (uVar24 != uVar5) {
                  pTVar32 = (TBitArray<FDefaultBitArrayAllocator> *)
                            pFVar25[3].Data.AllocatorInstance.Data;
                  pTVar30 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar25 + 2);
                  if (pTVar32 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                    pTVar30 = pTVar32;
                  }
                  uVar24 = -1 << ((byte)uVar24 & 0x1f) &
                           *(uint *)((pTVar30->AllocatorInstance).InlineData + (longlong)iVar14 * 4)
                  ;
                  while (uVar24 == 0) {
                    lVar20 = (longlong)iVar14;
                    uVar27 = uVar27 + 0x20;
                    iVar14 = iVar14 + 1;
                    uVar24 = uVar5;
                    if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
                    goto LAB_14185e090;
                    uVar24 = *(uint *)((pTVar30->AllocatorInstance).InlineData + lVar20 * 4 + 4);
                  }
                  uVar16 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
                  lVar20 = 0x3f;
                  if (uVar16 != 0) {
                    for (; uVar16 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                    }
                  }
                  local_434._8_4_ = (undefined4)lVar20;
                  uVar24 = (uVar27 - 1) + local_434._8_4_;
                  if ((int)uVar5 < (int)uVar24) {
                    uVar24 = uVar5;
                  }
                }
LAB_14185e090:
                while( true ) {
                  pFVar17 = local_390;
                  if ((int)local_390->_padding_ - *(int *)((longlong)&local_390->_padding_ + 4) !=
                      (int)uStack_368) {
                    local_4a5[0] = 0;
                    `TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_4a5);
                  }
                  if (((TStack_388.CurrentBitIndex == uVar24) &&
                      (TStack_388.Array == (TBitArray<FDefaultBitArrayAllocator> *)(pFVar25 + 2)))
                     && (pTVar32 = local_400, this = local_3e0, uVar27 = local_484,
                        pFVar17 == pFVar15)) break;
                  pFVar2 = (FName *)(pFVar17->_padding_ +
                                    (longlong)TStack_388.CurrentBitIndex * 0x28);
                  if (5 < (byte)LogConfig._0_1_) {
                    ::FName::ToString(pFVar2,&local_330);
                    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
                    if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_330.Data.AllocatorInstance.Data);
                    }
                  }
                  FVar7 = *pFVar2;
                  local_410 = FVar7;
                  if ((int)this_02->_padding_ != *(int *)((longlong)&this_02->_padding_ + 4)) {
                    uVar27 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
                    TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                    ::RemoveImpl<FName>((TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                                         *)this_02,FVar7.Number + uVar27,&local_410);
                  }
                  TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                  ::Emplace<FName_const_&,FConfigValue_const_&>
                            ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                              *)this_02,pFVar2,(FConfigValue *)(pFVar2 + 1));
                  TStack_388.UnvisitedBitMask =
                       TStack_388.UnvisitedBitMask & ~TStack_388._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_388);
                }
              }
            }
            TStack_358.UnvisitedBitMask = TStack_358.UnvisitedBitMask & ~TStack_358._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_358);
          }
        }
        if (param_2->bTrackLoadedFiles != false) {
          pFVar8 = (param_2->LoadedFiles).AllocatorInstance.Data;
          if (((pFVar8 <= pFVar26) &&
              (pFVar26 < pFVar8 + (longlong)(param_2->LoadedFiles).ArrayMax * 0x10)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar9 = (code *)swi(3);
            uVar13 = (*pcVar9)();
            return (bool)uVar13;
          }
          iVar14 = (param_2->LoadedFiles).ArrayNum;
          piVar1 = &(param_2->LoadedFiles).ArrayMax;
          if (iVar14 == *piVar1) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&(param_2->LoadedFiles).AllocatorInstance,piVar1);
          }
          (param_2->LoadedFiles).ArrayNum = iVar14 + 1;
          ::FString::FString((FString *)
                             ((param_2->LoadedFiles).AllocatorInstance.Data +
                             (longlong)iVar14 * 0x10),(FString *)pFVar26);
        }
      }
LAB_14185e271:
      pFVar26 = pFVar26 + 0x20;
      uVar16 = (ulonglong)local_47c;
    }
    if ((byte)LogConfig._0_1_ < 6) goto LAB_14185e271;
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
    uVar16 = (ulonglong)local_47c;
    pFVar26 = pFVar26 + 0x20;
  } while( true );
}

// AddDynamicLayersToHierarchy @ 14185e560

/* WARNING: Removing unreachable block (ram,0x00014185e739) */

bool __thiscall
FConfigBranch::AddDynamicLayersToHierarchy
          (FConfigBranch *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,FName param_2,
          DynamicLayerPriority param_3,FConfigModificationTracker *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_> local_68;
  FDynamicLayerInfo local_58;
  
  uVar1 = param_1->ArrayNum;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar1,&local_68.AllocatorInstance,0,&local_68.ArrayMax);
  }
  iVar2 = param_1->ArrayNum;
  pFVar9 = (param_1->AllocatorInstance).Data;
  pFVar10 = pFVar9 + (longlong)iVar2 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar9 == pFVar10) break;
    _Src = *(void **)pFVar9;
    local_58.Filename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar3 = *(int *)(pFVar9 + 8);
    local_58.Filename.Data.ArrayNum = iVar3;
    if (iVar3 == 0) {
      local_58.Filename.Data.ArrayNum = 0;
      local_58.Filename.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,0,(ForAnyElementType *)&local_58,iVar3,&local_58.Filename.Data.ArrayMax);
      memcpy(local_58.Filename.Data.AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
    }
    local_58.Tag = param_2;
    local_58.Priority = param_3;
    if (((local_68.AllocatorInstance.Data <= &local_58) &&
        (&local_58 <
         (FDynamicLayerInfo *)(local_68.AllocatorInstance.Data + (longlong)local_68.ArrayMax * 0x20)
        )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if (local_68.ArrayNum == local_68.ArrayMax) {
      local_68.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,&local_68.AllocatorInstance,&local_68.ArrayMax);
    }
    lVar7 = (longlong)local_68.ArrayNum;
    local_68.ArrayNum = local_68.ArrayNum + 1;
    pFVar8 = local_68.AllocatorInstance.Data + lVar7 * 0x20;
    *(undefined8 *)&pFVar8->field_0x0 = 0;
    *(FScriptContainerElement **)&pFVar8->field_0x0 = local_58.Filename.Data.AllocatorInstance.Data;
    local_58.Filename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar8 + 8) = local_58.Filename.Data.ArrayNum;
    *(int *)(pFVar8 + 0xc) = local_58.Filename.Data.ArrayMax;
    local_58.Filename.Data.ArrayNum = 0;
    local_58.Filename.Data.ArrayMax = 0;
    *(FName *)(pFVar8 + 0x10) = local_58.Tag;
    *(ushort *)(pFVar8 + 0x18) = local_58.Priority;
    pFVar9 = pFVar9 + 0x10;
  }
  bVar5 = AddDynamicLayersToHierarchy
                    (this,&local_68,param_4,
                     (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0,
                     (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0,false);
  DestructItems<FDynamicLayerInfo,int>
            ((FDynamicLayerInfo *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if ((FDynamicLayerInfo *)local_68.AllocatorInstance.Data != (FDynamicLayerInfo *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return bVar5;
}

// Delete @ 141868aa0

bool __thiscall FConfigBranch::Delete(FConfigBranch *this)

{
  bool bVar1;
  
  if ((this->IniPath).Data.ArrayNum != 0) {
    bVar1 = DeleteConfigFileWrapper((wchar_t *)(this->IniPath).Data.AllocatorInstance.Data);
    return bVar1;
  }
  bVar1 = DeleteConfigFileWrapper(L"");
  return bVar1;
}

// Dump @ 14186a440

void __thiscall FConfigBranch::Dump(FConfigBranch *this,FOutputDevice *param_1)

{
  undefined1 *puVar1;
  TMap<FString,FConfigCommandStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  TDoubleLinkedListNode *pTVar6;
  code *pcVar7;
  TMap<FString,FConfigCommandStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>_>
  *pTVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res18 [8];
  int local_res20;
  FString local_a8;
  TMap<FString,FConfigCommandStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>_>
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
  TMap<FString,FConfigCommandStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  ::FName::ToString(&this->IniName,&local_a8);
  FOutputDevice::LogfImpl(param_1,L"FConfigBranch %s");
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  FOutputDevice::Log(param_1,L"Static Layers:");
  iStack_90 = 0;
  puVar1 = &(this->StaticLayers).field_0x10;
  iVar4 = *(int *)&(this->StaticLayers).field_0x28;
  pTVar2 = &this->StaticLayers;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->StaticLayers).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar10 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14186a53d;
      uVar13 = puVar15[lVar10 + 1];
    }
    uStack_8c = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    iStack_7c = local_78 + -1 + local_res20;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_14186a53d:
  uVar13 = *(uint *)&(this->StaticLayers).field_0x28;
  iStack_70 = *(int *)&(this->StaticLayers).field_0x8 - *(int *)&(this->StaticLayers).field_0x34;
  uVar12 = uVar13 & 0xffffffe0;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = pTVar2;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = pTVar2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&(this->StaticLayers).field_0x28;
  if (uVar13 != uVar5) {
    puVar14 = *(undefined1 **)&(this->StaticLayers).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14186a640;
      uVar13 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar5 < (int)uVar13) {
      uVar13 = uVar5;
    }
  }
LAB_14186a640:
  while( true ) {
    pTVar8 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStream>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_60.CurrentBitIndex == uVar13) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    FOutputDevice::LogfImpl(param_1,L"  %s: %d sections");
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  FOutputDevice::Log(param_1,L"Dynamic Layers:");
  for (pTVar6 = (this->DynamicLayers).HeadNode; pTVar6 != (TDoubleLinkedListNode *)0x0;
      pTVar6 = pTVar6->NextNode) {
    FOutputDevice::LogfImpl(param_1,L"  %s: %d sections");
  }
  return;
}

// Flush @ 14186feb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FConfigBranch::Flush(FConfigBranch *this)

{
  undefined1 *puVar1;
  bool bVar2;
  IFileManager *pIVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  int iVar6;
  undefined1 auStackY_1a8 [32];
  FString FStack_178;
  TArray<FString,TSizedDefaultAllocator<32>_> TStack_168;
  int aiStack_158 [2];
  FString FStack_150;
  undefined1 auStack_138 [32];
  void *pvStack_118;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  void *pvStack_f8;
  undefined4 uStack_f0;
  undefined1 auStack_e8 [144];
  void *pvStack_58;
  undefined4 uStack_50;
  ForAnyElementType FStack_30;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((this->InMemoryFile).Dirty != true || (bool)(this->InMemoryFile).NoSave) {
    return;
  }
  bVar2 = AreWritesAllowedGlobally();
  if (!bVar2) {
    return;
  }
  FStack_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_178.Data.ArrayNum = 0;
  FStack_178.Data.ArrayMax = 0;
  if (GUseNewSaveTracking == 1) {
    bVar2 = BuildOutputString<FConfigCommandStream>(&FStack_178,&this->SavedLayer);
LAB_14188dbf6:
    if (bVar2 != false) goto LAB_14188dd6a;
  }
  else {
    if (GUseNewSaveTracking == 2) {
      CalculateDiff((FConfigCommandStream *)auStack_e8,&this->FinalCombinedLayers,
                    &this->InMemoryFile,&FStack_150,&FStack_150);
      bVar2 = BuildOutputString<FConfigCommandStream>
                        (&FStack_178,(FConfigCommandStream *)auStack_e8);
      if (FStack_30.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_30.Data);
      }
      uStack_50 = 0;
      if (pvStack_58 != (void *)0x0) {
        FMemory::Free(pvStack_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(auStack_e8 + 0x50));
      auStack_e8._72_4_ = 0;
      if ((void *)auStack_e8._64_8_ != (void *)0x0) {
        FMemory::Free((void *)auStack_e8._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)auStack_e8);
      goto LAB_14188dbf6;
    }
    FStack_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_150.Data.ArrayNum = 0;
    FStack_150.Data.ArrayMax = 0;
    auStack_138._0_8_ = (FScriptContainerElement *)0x0;
    auStack_138._8_8_ = 0;
    pvStack_118 = (void *)0x0;
    uStack_110 = 0;
    uStack_10c = 0x80;
    uStack_108 = 0xffffffff;
    uStack_104 = 0;
    pvStack_f8 = (void *)0x0;
    uStack_f0 = 0;
    TStack_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_168.ArrayNum = 0;
    TStack_168.ArrayMax = 0;
    aiStack_158[0] = 0x7fffffff;
    bVar2 = FConfigFile::IsADefaultIniWrite(&this->InMemoryFile,&this->IniPath,aiStack_158);
    FConfigFile::WriteToStringInternal
              (&this->InMemoryFile,&FStack_178,bVar2,aiStack_158[0],
               (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)auStack_138,&TStack_168);
    DestructItems<FString,int>((FString *)TStack_168.AllocatorInstance.Data,TStack_168.ArrayNum);
    if (TStack_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_168.AllocatorInstance.Data);
    }
    uStack_f0 = 0;
    if (pvStack_f8 != (void *)0x0) {
      FMemory::Free(pvStack_f8);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)auStack_138,0,auStack_138._8_4_);
    iVar6 = SUB84(auStack_138._8_8_,4);
    auStack_138._8_8_ = auStack_138._8_8_ & 0xffffffff00000000;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)auStack_138,0,(int *)(auStack_138 + 0xc));
    }
    uStack_108 = 0xffffffff;
    uStack_104 = 0;
    uStack_110 = 0;
    if (0x80 < uStack_10c) {
      uStack_10c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_138 + 0x10),0);
    }
    if (pvStack_118 != (void *)0x0) {
      FMemory::Free(pvStack_118);
    }
    if ((FScriptContainerElement *)auStack_138._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)auStack_138._0_8_);
    }
    if (FStack_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_150.Data.AllocatorInstance.Data);
    }
LAB_14188dd6a:
    iVar6 = FStack_178.Data.ArrayNum + -1;
    if (FStack_178.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    if (0 < iVar6) {
      pFVar4 = ::FString::FString(&FStack_150,L";METADATA=(Diff=true, UseCommands=true)\r\n");
      ::FString::ConcatFF((FString *)&TStack_168,pFVar4,&FStack_178);
      if (FStack_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_178.Data.AllocatorInstance.Data);
      }
      FStack_178.Data.AllocatorInstance.Data = TStack_168.AllocatorInstance.Data;
      FStack_178.Data.ArrayNum = TStack_168.ArrayNum;
      FStack_178.Data.ArrayMax = TStack_168.ArrayMax;
      TStack_168.ArrayNum = 0;
      TStack_168.ArrayMax = 0;
      TStack_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (FStack_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_150.Data.AllocatorInstance.Data);
      }
      if ((this->IniPath).Data.ArrayNum == 0) {
        SaveConfigFileWrapper(L"",&FStack_178);
      }
      else {
        SaveConfigFileWrapper((wchar_t *)(this->IniPath).Data.AllocatorInstance.Data,&FStack_178);
      }
      goto LAB_14188de34;
    }
  }
  pIVar3 = IFileManager::Get();
  if ((this->IniPath).Data.ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(this->IniPath).Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar3 + 0x38))(pIVar3,pwVar5,0,0);
LAB_14188de34:
  if (FStack_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_178.Data.AllocatorInstance.Data);
  }
  return;
}

// GetStaticLayer @ 141876ac0

FConfigCommandStream * __thiscall
FConfigBranch::GetStaticLayer(FConfigBranch *this,FString *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FConfigCommandStream *pFVar8;
  size_t sVar9;
  longlong lVar10;
  wchar_t *_Str;
  uint uVar11;
  uint uVar12;
  FString *this_00;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar1 = &(this->StaticLayers).field_0x10;
  iVar13 = 0;
  iVar7 = *(int *)&(this->StaticLayers).field_0x28;
  iVar15 = 0;
  uVar5 = 1;
  iVar6 = 0;
  if (iVar7 != 0) {
    puVar16 = *(uint **)&(this->StaticLayers).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar6 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_141876b6d;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar5 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar6 = (int)lVar10 + -1 + iVar15;
    if (iVar7 < iVar6) {
      iVar6 = iVar7;
    }
  }
LAB_141876b6d:
  uVar12 = *(uint *)&(this->StaticLayers).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar5,iVar13);
  TStack_60.CurrentBitIndex = iVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar6;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->StaticLayers).field_0x8 -
                       *(int *)&(this->StaticLayers).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar7 < (int)uVar12)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FConfigCommandStream *)(*pcVar3)();
    return pFVar8;
  }
  uVar5 = *(uint *)&(this->StaticLayers).field_0x28;
  if (uVar12 != uVar5) {
    puVar14 = *(undefined1 **)&(this->StaticLayers).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_141876c70;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_141876c70:
  do {
    if (*(int *)&(this->StaticLayers).field_0x8 - *(int *)&(this->StaticLayers).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStream>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return (FConfigCommandStream *)0x0;
    }
    this_00 = (FString *)
              ((longlong)TStack_60.CurrentBitIndex * 0xe0 + *(longlong *)&this->StaticLayers);
    if ((param_1->Data).ArrayNum == 0) {
      _Str = L"";
LAB_141876cbd:
      sVar9 = wcslen(_Str);
      iVar7 = ::FString::Find(this_00,_Str,(int)sVar9,IgnoreCase,FromStart,-1);
      if (iVar7 != -1) {
        return (FConfigCommandStream *)(this_00 + 1);
      }
    }
    else {
      _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) goto LAB_141876cbd;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// InitFiles @ 141878920

void __thiscall FConfigBranch::InitFiles(FConfigBranch *this)

{
  (this->CombinedStaticLayers).Branch = this;
  (this->SavedLayer).Branch = this;
  (this->FinalCombinedLayers).Branch = this;
  (this->CommandLineOverrides).Branch = this;
  (this->InMemoryFile).Branch = this;
  if (GUseNewSaveTracking != 0) {
    (this->InMemoryFile).ChangeTracker = &this->SavedLayer;
  }
  return;
}

// MergeStaticLayersUpTo @ 14187dc50

bool __thiscall
FConfigBranch::MergeStaticLayersUpTo(FConfigBranch *this,FString *param_1,FConfigFile *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  size_t sVar9;
  longlong lVar10;
  wchar_t *_Str;
  uint uVar11;
  uint uVar12;
  FString *this_00;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar1 = &(this->StaticLayers).field_0x10;
  iVar15 = 0;
  iVar8 = *(int *)&(this->StaticLayers).field_0x28;
  iVar13 = 0;
  uVar6 = 1;
  iVar7 = 0;
  if (iVar8 != 0) {
    puVar16 = *(uint **)&(this->StaticLayers).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar15;
      iVar13 = iVar13 + 0x20;
      iVar15 = iVar15 + 1;
      iVar7 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14187dcfd;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar6 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar7 = (int)lVar10 + -1 + iVar13;
    if (iVar8 < iVar7) {
      iVar7 = iVar8;
    }
  }
LAB_14187dcfd:
  uVar12 = *(uint *)&(this->StaticLayers).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar15);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->StaticLayers).field_0x8 -
                       *(int *)&(this->StaticLayers).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar8 < (int)uVar12)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar6 = *(uint *)&(this->StaticLayers).field_0x28;
  if (uVar12 != uVar6) {
    puVar14 = *(undefined1 **)&(this->StaticLayers).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar15 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar15;
      uVar11 = uVar11 + 0x20;
      iVar15 = iVar15 + 1;
      uVar12 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14187de00;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar6 < (int)uVar12) {
      uVar12 = uVar6;
    }
  }
LAB_14187de00:
  do {
    if (*(int *)&(this->StaticLayers).field_0x8 - *(int *)&(this->StaticLayers).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStream>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return false;
    }
    this_00 = (FString *)
              ((longlong)TStack_60.CurrentBitIndex * 0xe0 + *(longlong *)&this->StaticLayers);
    if ((param_1->Data).ArrayNum == 0) {
      _Str = L"";
LAB_14187de4e:
      sVar9 = wcslen(_Str);
      iVar8 = ::FString::Find(this_00,_Str,(int)sVar9,IgnoreCase,FromStart,-1);
      if (iVar8 != -1) {
        return true;
      }
    }
    else {
      _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) goto LAB_14187de4e;
    }
    FConfigFile::ApplyFile(param_2,(FConfigCommandStream *)(this_00 + 1));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// MergeStaticLayersUpToAndIncluding @ 14187ded0

bool __thiscall
FConfigBranch::MergeStaticLayersUpToAndIncluding
          (FConfigBranch *this,FString *param_1,FConfigFile *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  size_t sVar9;
  longlong lVar10;
  wchar_t *_Str;
  uint uVar11;
  uint uVar12;
  FString *this_00;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar1 = &(this->StaticLayers).field_0x10;
  iVar15 = 0;
  iVar8 = *(int *)&(this->StaticLayers).field_0x28;
  iVar13 = 0;
  uVar6 = 1;
  iVar7 = 0;
  if (iVar8 != 0) {
    puVar16 = *(uint **)&(this->StaticLayers).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar15;
      iVar13 = iVar13 + 0x20;
      iVar15 = iVar15 + 1;
      iVar7 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14187df7d;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar6 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar7 = (int)lVar10 + -1 + iVar13;
    if (iVar8 < iVar7) {
      iVar7 = iVar8;
    }
  }
LAB_14187df7d:
  uVar12 = *(uint *)&(this->StaticLayers).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar15);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->StaticLayers).field_0x8 -
                       *(int *)&(this->StaticLayers).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar8 < (int)uVar12)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar6 = *(uint *)&(this->StaticLayers).field_0x28;
  if (uVar12 != uVar6) {
    puVar14 = *(undefined1 **)&(this->StaticLayers).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar15 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar15;
      uVar11 = uVar11 + 0x20;
      iVar15 = iVar15 + 1;
      uVar12 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14187e080;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar6 < (int)uVar12) {
      uVar12 = uVar6;
    }
  }
LAB_14187e080:
  do {
    if (*(int *)&(this->StaticLayers).field_0x8 - *(int *)&(this->StaticLayers).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStream>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return false;
    }
    this_00 = (FString *)
              ((longlong)TStack_60.CurrentBitIndex * 0xe0 + *(longlong *)&this->StaticLayers);
    FConfigFile::ApplyFile(param_2,(FConfigCommandStream *)(this_00 + 1));
    if ((param_1->Data).ArrayNum == 0) {
      _Str = L"";
LAB_14187e0dc:
      sVar9 = wcslen(_Str);
      iVar8 = ::FString::Find(this_00,_Str,(int)sVar9,IgnoreCase,FromStart,-1);
      if (iVar8 != -1) {
        return true;
      }
    }
    else {
      _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) goto LAB_14187e0dc;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// ReapplyLayers @ 141887070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FConfigBranch::ReapplyLayers(FConfigBranch *this)

{
  FConfigFile *this_00;
  FConfigFile *this_01;
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  TDoubleLinkedListNode *pTVar5;
  code *pcVar6;
  TMap<FString,FConfigCommandStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>_>
  *pTVar7;
  FConfigBranch *pFVar8;
  TMap<FString,FConfigCommandStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>_>
  *pTVar9;
  bool bVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8 [8];
  TMap<FString,FConfigCommandStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>_>
  *local_1a0;
  int iStack_198;
  uint uStack_194;
  undefined1 *local_190;
  undefined4 uStack_188;
  int iStack_184;
  int local_180;
  int iStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  int local_170;
  TMap<FString,FConfigCommandStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>_>
  *local_168;
  FConfigBranch *local_160;
  FString local_158;
  FString local_148;
  TMap<FString,FConfigCommandStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>_>
  *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  undefined1 local_108 [144];
  void *local_78;
  undefined4 local_70;
  ForAnyElementType local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  this_00 = &this->FinalCombinedLayers;
  local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.Data.ArrayNum = 0;
  local_158.Data.ArrayMax = 0;
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Data.ArrayNum = 0;
  local_148.Data.ArrayMax = 0;
  local_160 = this;
  CalculateDiff((FConfigCommandStream *)local_108,this_00,&this->InMemoryFile,&local_148,&local_158)
  ;
  this_01 = &this->CombinedStaticLayers;
  FConfigFile::Cleanup(this_01);
  FConfigFile::Cleanup(this_00);
  FConfigFile::Cleanup(&this->InMemoryFile);
  puVar1 = &(this->StaticLayers).field_0x10;
  local_180 = 0;
  iVar3 = *(int *)&(this->StaticLayers).field_0x28;
  local_1a0 = &this->StaticLayers;
  iStack_198 = 0;
  uStack_194 = 1;
  iStack_184 = iStack_198;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->StaticLayers).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar14 = *puVar16;
    iStack_198 = 0;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_198;
      local_180 = local_180 + 0x20;
      iStack_198 = iStack_198 + 1;
      iStack_184 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_198) goto LAB_14188719f;
      uVar14 = puVar16[lVar11 + 1];
    }
    uStack_194 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_194 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_170 = (int)lVar11;
    iStack_184 = local_180 + -1 + local_170;
    if (iVar3 < iStack_184) {
      iStack_184 = iVar3;
    }
  }
LAB_14188719f:
  iStack_178 = *(int *)&(this->StaticLayers).field_0x8 - *(int *)&(this->StaticLayers).field_0x34;
  uVar14 = *(uint *)&(this->StaticLayers).field_0x28;
  TStack_130._padding_ = CONCAT44(uStack_194,iStack_198);
  uStack_188 = 0xffffffff;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_130.CurrentBitIndex = iStack_184;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_130._28_4_ = iStack_184;
  TStack_130.BaseBitIndex = local_180;
  uStack_110 = CONCAT44(uStack_174,iStack_178);
  local_190 = puVar1;
  iStack_17c = iStack_184;
  local_168 = local_1a0;
  local_138 = local_1a0;
  TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar7 = local_168;
  uVar4 = *(uint *)&(this->StaticLayers).field_0x28;
  if (uVar14 != uVar4) {
    puVar15 = *(undefined1 **)&(this->StaticLayers).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1418872b0;
      uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_1418872b0:
  while( true ) {
    pTVar9 = local_138;
    if (*(int *)&local_138->field_0x8 - *(int *)&local_138->field_0x34 != (int)uStack_110) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStream>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1a8);
    }
    if (((TStack_130.CurrentBitIndex == uVar14) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar7))
    break;
    FConfigFile::ApplyFile
              (this_01,(FConfigCommandStream *)
                       (*(longlong *)pTVar9 + (longlong)TStack_130.CurrentBitIndex * 0xe0 + 0x10));
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  FConfigFile::operator=(this_00,this_01);
  pFVar8 = local_160;
  for (pTVar5 = (local_160->DynamicLayers).HeadNode; pTVar5 != (TDoubleLinkedListNode *)0x0;
      pTVar5 = pTVar5->NextNode) {
    FConfigFile::ApplyFile(this_00,pTVar5->Value);
  }
  FConfigFile::ApplyFile(this_00,&pFVar8->CommandLineOverrides);
  FConfigFile::operator=(&pFVar8->InMemoryFile,this_00);
  FConfigFile::ApplyFile(&pFVar8->InMemoryFile,(FConfigCommandStream *)local_108);
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  local_70 = 0;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_108 + 0x50));
  local_108._72_4_ = 0;
  if ((void *)local_108._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_108._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_108);
  return;
}

// RemoveDynamicLayerFromHierarchy @ 14188a810

bool __thiscall
FConfigBranch::RemoveDynamicLayerFromHierarchy
          (FConfigBranch *this,FString *param_1,FConfigModificationTracker *param_2)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  longlong lVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_18.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar2 = (longlong)local_18.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_28.AllocatorInstance,1,&local_28.ArrayMax);
  ConstructItems<FString,FString,int>(local_28.AllocatorInstance.Data,&local_18,1);
  bVar1 = RemoveDynamicLayersFromHierarchy(this,&local_28,param_2);
  DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// RemoveDynamicLayersFromHierarchy @ 14188a940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FConfigBranch::RemoveDynamicLayersFromHierarchy
          (FConfigBranch *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          FConfigModificationTracker *param_2)

{
  TDoubleLinkedList<FConfigCommandStream_*> *this_00;
  byte bVar1;
  byte bVar2;
  uint uVar3;
  FConfigCommandStream *pFVar4;
  FName FVar5;
  longlong lVar6;
  TDoubleLinkedListNode *pTVar7;
  code *pcVar8;
  FConfigBranch *pFVar9;
  undefined8 uVar10;
  FScriptContainerElement *pFVar11;
  FConfigCommandStream *pFVar12;
  undefined1 uVar13;
  int iVar14;
  ulonglong uVar15;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_01;
  longlong lVar16;
  TDoubleLinkedListNode *pTVar17;
  uint uVar18;
  int iVar19;
  longlong *plVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  bool bVar23;
  undefined1 auStackY_258 [32];
  undefined1 local_228;
  undefined1 local_227 [3];
  FLLMScope local_224;
  uint local_220;
  FConfigModificationTracker *local_218;
  TDoubleLinkedListNode *local_210;
  FConfigBranch *local_208;
  FScriptContainerElement *local_200;
  int local_1f8;
  int local_1f4;
  undefined1 local_1f0 [16];
  TArray<FString,TSizedDefaultAllocator<32>_> *local_1e0;
  FScriptContainerElement *local_1d8;
  FMemScope local_1d0;
  FString local_1c8;
  FString local_1b8;
  FConfigCommandStream *local_1a8;
  int iStack_1a0;
  uint uStack_19c;
  longlong *local_198;
  undefined4 uStack_190;
  int iStack_18c;
  int local_188;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  FConfigCommandStream *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  FString local_148 [2];
  undefined4 local_11c;
  undefined1 local_118 [144];
  void *local_88;
  undefined4 local_80;
  ForAnyElementType local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_218 = param_2;
  local_208 = this;
  local_1e0 = param_1;
  FLLMScope::FLLMScope(&local_224,ConfigSystem,false,None,Default,true);
  FMemScope::FMemScope(&local_1d0,ConfigSystem,true);
  if (this->bIsSafeUnloaded != false) {
    SafeReload(this);
  }
  if (this->ReplayMethod == NoReplay) {
    if (2 < (byte)LogConfig._0_1_) {
      ::FName::ToString(&this->IniName,local_148);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
      if (local_148[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148[0].Data.AllocatorInstance.Data);
      }
    }
    bVar23 = false;
  }
  else {
    local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.Data.ArrayNum = 0;
    local_1c8.Data.ArrayMax = 0;
    local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.Data.ArrayNum = 0;
    local_1b8.Data.ArrayMax = 0;
    CalculateDiff((FConfigCommandStream *)local_118,&this->FinalCombinedLayers,&this->InMemoryFile,
                  &local_1b8,&local_1c8);
    local_220 = param_1->ArrayNum;
    uVar15 = (ulonglong)(int)local_220;
    pFVar21 = (param_1->AllocatorInstance).Data;
    local_1d8 = pFVar21 + uVar15 * 0x10;
LAB_14188aa77:
    while( true ) {
      pFVar11 = local_1d8;
      iVar19 = 0;
      local_200 = pFVar21;
      if (param_1->ArrayNum != (int)uVar15) {
        local_228 = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_228);
      }
      if (pFVar21 == pFVar11) break;
      pTVar17 = (this->DynamicLayers).HeadNode;
      local_210 = pTVar17;
      if (pTVar17 == (TDoubleLinkedListNode *)0x0) goto LAB_14188adff;
      do {
        iVar14 = (pTVar17->Value->Filename).Data.ArrayNum;
        local_210 = pTVar17;
        if (iVar14 == *(int *)(pFVar21 + 8)) {
          if (1 < iVar14) {
            iVar14 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)(pTVar17->Value->Filename).Data.AllocatorInstance.Data,
                                *(wchar_t **)pFVar21);
            bVar23 = iVar14 == 0;
            goto LAB_14188aae1;
          }
LAB_14188ab07:
          if ((param_2 == (FConfigModificationTracker *)0x0) ||
             (param_2->bTrackModifiedSections == false)) goto LAB_14188ad6e;
          pFVar4 = pTVar17->Value;
          iStack_1a0 = 0;
          iVar14 = (int)pFVar4->_padding_;
          local_198 = &pFVar4->_padding_;
          uStack_19c = 1;
          iStack_18c = iStack_1a0;
          local_188 = iStack_1a0;
          if (iVar14 == 0) goto LAB_14188abb0;
          plVar20 = local_198;
          if ((longlong *)pFVar4->_padding_ != (longlong *)0x0) {
            plVar20 = (longlong *)pFVar4->_padding_;
          }
          uVar18 = (uint)*plVar20;
          iStack_1a0 = iVar19;
          local_188 = iVar19;
          if (uVar18 != 0) goto LAB_14188ab88;
          goto LAB_14188ab70;
        }
        bVar23 = *(int *)(pFVar21 + 8) + iVar14 == 1;
LAB_14188aae1:
        if (bVar23) goto LAB_14188ab07;
        pTVar17 = pTVar17->NextNode;
      } while (pTVar17 != (TDoubleLinkedListNode *)0x0);
      pFVar21 = pFVar21 + 0x10;
      uVar15 = (ulonglong)local_220;
      local_210 = pTVar17;
    }
    FConfigFile::operator=(&this->FinalCombinedLayers,&this->CombinedStaticLayers);
    for (pTVar17 = (this->DynamicLayers).HeadNode; pTVar17 != (TDoubleLinkedListNode *)0x0;
        pTVar17 = pTVar17->NextNode) {
      FConfigFile::ApplyFile(&this->FinalCombinedLayers,pTVar17->Value);
    }
    FConfigFile::ApplyFile(&this->FinalCombinedLayers,&this->CommandLineOverrides);
    bVar1 = (this->InMemoryFile).field_0x50;
    FConfigFile::operator=(&this->InMemoryFile,&this->FinalCombinedLayers);
    bVar2 = (this->InMemoryFile).field_0x50;
    (this->InMemoryFile).field_0x50 = (bVar1 & 0xf0 ^ bVar2) & 0x10 ^ bVar2;
    FConfigFile::Shrink(&this->FinalCombinedLayers);
    FConfigFile::Shrink(&this->InMemoryFile);
    FConfigFile::ApplyFile(&this->InMemoryFile,(FConfigCommandStream *)local_118);
    bVar23 = true;
    if (local_60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data);
    }
    local_80 = 0;
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_118 + 0x50));
    local_118._72_4_ = 0;
    if ((void *)local_118._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_118._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_118);
  }
  FMemScope::~FMemScope(&local_1d0);
  FLLMScope::~FLLMScope(&local_224);
  return bVar23;
  while (uVar18 = *(uint *)((longlong)plVar20 + (longlong)iVar19 * 4 + 4), iVar19 = iStack_1a0,
        uVar18 == 0) {
LAB_14188ab70:
    local_188 = local_188 + 0x20;
    iStack_1a0 = iVar19 + 1;
    iStack_18c = iVar14;
    if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1a0) goto LAB_14188abb0;
  }
LAB_14188ab88:
  uStack_19c = -uVar18 & uVar18;
  uVar15 = (ulonglong)uStack_19c * 2 + 1;
  lVar16 = 0x3f;
  if (uVar15 != 0) {
    for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
    }
  }
  local_1f8 = (int)lVar16;
  iStack_18c = local_188 + -1 + local_1f8;
  if (iVar14 < iStack_18c) {
    iStack_18c = iVar14;
  }
LAB_14188abb0:
  uVar18 = (uint)pFVar4->_padding_;
  uStack_184 = local_11c;
  iStack_180 = (int)pFVar4->_padding_ - *(int *)((longlong)&pFVar4->_padding_ + 4);
  uVar22 = uVar18 & 0xffffffe0;
  TStack_170._padding_ = CONCAT44(uStack_19c,iStack_1a0);
  uStack_190 = 0xffffffff;
  TStack_170.CurrentBitIndex = iStack_18c;
  TStack_170.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar18 >> 5;
  TStack_170._28_4_ = local_11c;
  TStack_170.BaseBitIndex = local_188;
  uStack_150 = CONCAT44(uStack_17c,iStack_180);
  local_1f0._8_8_ = pFVar4;
  local_1a8 = pFVar4;
  local_178 = pFVar4;
  TStack_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_198;
  if ((((int)uVar18 < 0) || (iVar14 < (int)uVar18)) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar23)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return (bool)uVar13;
  }
  uVar10 = local_1f0._8_8_;
  pFVar9 = local_208;
  uVar3 = (uint)pFVar4->_padding_;
  if (uVar18 != uVar3) {
    plVar20 = &pFVar4->_padding_;
    if ((longlong *)pFVar4->_padding_ != (longlong *)0x0) {
      plVar20 = (longlong *)pFVar4->_padding_;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)((longlong)plVar20 + (longlong)iVar19 * 4);
    while (uVar18 == 0) {
      lVar16 = (longlong)iVar19;
      uVar22 = uVar22 + 0x20;
      iVar19 = iVar19 + 1;
      uVar18 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14188acd0;
      uVar18 = *(uint *)((longlong)plVar20 + lVar16 * 4 + 4);
    }
    uVar15 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_1f4 = (int)lVar16;
    uVar18 = local_1f4 + -1 + uVar22;
    if ((int)uVar3 < (int)uVar18) {
      uVar18 = uVar3;
    }
  }
LAB_14188acd0:
  while( true ) {
    pFVar12 = local_178;
    if ((int)local_178->_padding_ - *(int *)((longlong)&local_178->_padding_ + 4) != (int)uStack_150
       ) {
      local_227[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_227);
    }
    lVar16 = (longlong)TStack_170.CurrentBitIndex;
    if (((TStack_170.CurrentBitIndex == uVar18) &&
        (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)&pFVar4->_padding_)) &&
       (pTVar17 = local_210, this = local_208, pFVar21 = local_200, param_1 = local_1e0,
       pFVar12 == (FConfigCommandStream *)uVar10)) break;
    FVar5 = pFVar9->IniName;
    lVar6 = pFVar12->_padding_;
    uVar22 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
    this_01 = TMapBase<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
              ::FindOrAddImpl<FName_const_&>
                        ((TMapBase<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
                          *)&local_218->ModifiedSectionsPerBranch,uVar22 + FVar5.Number,
                         &pFVar9->IniName);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (this_01,(FString *)local_1f0,(bool *)(lVar16 * 0xb8 + lVar6));
    TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
  }
LAB_14188ad6e:
  this_00 = &this->DynamicLayers;
  if ((this->DynamicLayers).ListSize == 1) {
    TDoubleLinkedList<FConfigCommandStream_*>::Empty(this_00);
    uVar15 = (ulonglong)local_220;
    pFVar21 = pFVar21 + 0x10;
    param_2 = local_218;
  }
  else {
    pTVar7 = (this->DynamicLayers).HeadNode;
    if (pTVar17 == pTVar7) {
      pTVar7 = pTVar7->NextNode;
      (this->DynamicLayers).HeadNode = pTVar7;
      pTVar7->PrevNode = (TDoubleLinkedListNode *)0x0;
    }
    else {
      pTVar7 = (this->DynamicLayers).TailNode;
      if (pTVar17 == pTVar7) {
        pTVar7 = pTVar7->PrevNode;
        (this->DynamicLayers).TailNode = pTVar7;
        pTVar7->NextNode = (TDoubleLinkedListNode *)0x0;
      }
      else {
        pTVar17->NextNode->PrevNode = pTVar17->PrevNode;
        pTVar17->PrevNode->NextNode = pTVar17->NextNode;
      }
    }
    ::operator_delete(pTVar17,0x18);
    (**(code **)(this_00->_padding_ + 8))(this_00,(this->DynamicLayers).ListSize + -1);
    param_2 = local_218;
LAB_14188adff:
    pFVar21 = pFVar21 + 0x10;
    uVar15 = (ulonglong)local_220;
  }
  goto LAB_14188aa77;
}

// RemoveSection @ 14188b9e0

bool __thiscall FConfigBranch::RemoveSection(FConfigBranch *this,wchar_t *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  TDoubleLinkedListNode *pTVar3;
  FConfigCommandStream *this_00;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType FVar6;
  TMap<FString,FConfigCommandStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>_>
  *pTVar7;
  TMap<FString,FConfigCommandStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>_>
  *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  ForElementType<unsigned_int> FVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  undefined1 local_res18 [8];
  int local_res20;
  FString local_b8;
  ForElementType<unsigned_int> local_a8;
  TMap<FString,FConfigCommandStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TMap<FString,FConfigCommandStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>_>
  *local_70;
  TMap<FString,FConfigCommandStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar14 = 0;
  iVar17 = 0;
  ::FString::FString(&local_b8,param_1);
  local_a8 = (ForElementType<unsigned_int>)&(this->StaticLayers).field_0x10;
  iStack_98 = 0;
  iVar16 = *(int *)&(this->StaticLayers).field_0x28;
  local_a0 = &this->StaticLayers;
  uStack_94 = 1;
  local_80 = 0;
  iVar11 = 0;
  iStack_84 = 0;
  if (iVar16 != 0) {
    puVar19 = *(uint **)&(this->StaticLayers).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)local_a8;
    }
    uVar20 = *puVar19;
    while (uVar20 == 0) {
      lVar15 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) {
        iVar11 = *(int *)&(this->StaticLayers).field_0x28;
        iStack_84 = iVar16;
        goto LAB_14188baa7;
      }
      uVar20 = (puVar19 + 1)[lVar15];
    }
    iVar11 = *(int *)&(this->StaticLayers).field_0x28;
    uStack_94 = -uVar20 & uVar20;
    uVar1 = (ulonglong)uStack_94 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res20 = (int)lVar15;
    iStack_84 = local_res20 + -1 + local_80;
    if (iVar11 < iStack_84) {
      iStack_84 = iVar16;
    }
  }
LAB_14188baa7:
  uVar20 = *(uint *)&(this->StaticLayers).field_0x28;
  uVar21 = uVar20 & 0xffffffe0;
  iStack_78 = *(int *)&(this->StaticLayers).field_0x8 - *(int *)&(this->StaticLayers).field_0x34;
  uStack_88 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_60.CurrentBitIndex = iStack_84;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar20 >> 5;
  TStack_60._28_4_ = iStack_84;
  TStack_60.BaseBitIndex = local_80;
  uStack_40 = CONCAT44(uStack_74,iStack_78);
  local_90 = (undefined1 *)local_a8;
  iStack_7c = iStack_84;
  local_70 = local_a0;
  local_68 = local_a0;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a8;
  if ((((int)uVar20 < 0) || (iVar11 < (int)uVar20)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  pTVar7 = local_70;
  uVar2 = *(int *)((longlong)local_a8 + 0x18);
  if (uVar20 != uVar2) {
    FVar18 = *(ForElementType<unsigned_int> *)((longlong)local_a8 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_a8 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar18 = local_a8;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)((longlong)FVar18 + (longlong)iVar16 * 4);
    while (uVar20 == 0) {
      lVar15 = (longlong)iVar16;
      uVar21 = uVar21 + 0x20;
      iVar16 = iVar16 + 1;
      uVar20 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14188bbd0;
      uVar20 = *(uint *)((undefined1 *)((longlong)FVar18 + 4) + lVar15 * 4);
    }
    uVar1 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar20 = (int)lVar15 + -1 + uVar21;
    if ((int)uVar2 < (int)uVar20) {
      uVar20 = uVar2;
    }
  }
LAB_14188bbd0:
  while( true ) {
    pTVar8 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStream>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_60.CurrentBitIndex == uVar20) &&
        ((ForElementType<unsigned_int>)TStack_60.Array == local_a8)) && (pTVar8 == pTVar7)) break;
    lVar15 = *(longlong *)pTVar8 + (longlong)TStack_60.CurrentBitIndex * 0xe0;
    if (*(int *)(lVar15 + 0x18) == *(int *)(lVar15 + 0x44)) {
      iVar16 = 0;
    }
    else {
      iVar16 = local_b8.Data.ArrayNum + -1;
      FVar6.Data = local_b8.Data.AllocatorInstance.Data;
      if (local_b8.Data.ArrayNum == 0) {
        iVar16 = 0;
        FVar6.Data = (FScriptContainerElement *)L"";
      }
      uVar21 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,(wchar_t *)FVar6.Data);
      iVar16 = TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
               ::RemoveImpl<FString>
                         ((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                           *)(lVar15 + 0x10),uVar21,&local_b8);
    }
    iVar17 = iVar17 + iVar16;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  for (pTVar3 = (this->DynamicLayers).HeadNode; pTVar3 != (TDoubleLinkedListNode *)0x0;
      pTVar3 = pTVar3->NextNode) {
    this_00 = pTVar3->Value;
    if ((int)this_00->_padding_ == *(int *)((longlong)&this_00->_padding_ + 4)) {
      iVar16 = 0;
    }
    else {
      iVar16 = local_b8.Data.ArrayNum + -1;
      pFVar5 = local_b8.Data.AllocatorInstance.Data;
      if (local_b8.Data.ArrayNum == 0) {
        iVar16 = 0;
        pFVar5 = (FScriptContainerElement *)L"";
      }
      uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,(wchar_t *)pFVar5);
      iVar16 = TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
               ::RemoveImpl<FString>
                         ((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                           *)this_00,uVar20,&local_b8);
    }
    iVar17 = iVar17 + iVar16;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if ((int)(this->InMemoryFile)._padding_ == *(int *)((longlong)&(this->InMemoryFile)._padding_ + 4)
     ) {
    iVar16 = 0;
  }
  else {
    iVar16 = local_b8.Data.ArrayNum + -1;
    FVar6.Data = local_b8.Data.AllocatorInstance.Data;
    if (local_b8.Data.ArrayNum == 0) {
      iVar16 = 0;
      FVar6.Data = (FScriptContainerElement *)L"";
    }
    uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,(wchar_t *)FVar6.Data);
    iVar16 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
             ::RemoveImpl<FString>
                       ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                         *)&this->InMemoryFile,uVar20,&local_b8);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  AcquireSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if ((int)(this->CombinedStaticLayers)._padding_ ==
      *(int *)((longlong)&(this->CombinedStaticLayers)._padding_ + 4)) {
    iVar11 = 0;
  }
  else {
    iVar11 = local_b8.Data.ArrayNum + -1;
    FVar6.Data = local_b8.Data.AllocatorInstance.Data;
    if (local_b8.Data.ArrayNum == 0) {
      iVar11 = 0;
      FVar6.Data = (FScriptContainerElement *)L"";
    }
    uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar6.Data);
    iVar11 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
             ::RemoveImpl<FString>
                       ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                         *)&this->CombinedStaticLayers,uVar20,&local_b8);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if ((int)(this->SavedLayer)._padding_ == *(int *)((longlong)&(this->SavedLayer)._padding_ + 4)) {
    iVar12 = 0;
  }
  else {
    iVar12 = local_b8.Data.ArrayNum + -1;
    FVar6.Data = local_b8.Data.AllocatorInstance.Data;
    if (local_b8.Data.ArrayNum == 0) {
      iVar12 = 0;
      FVar6.Data = (FScriptContainerElement *)L"";
    }
    uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,(wchar_t *)FVar6.Data);
    iVar12 = TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
             ::RemoveImpl<FString>
                       ((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                         *)&this->SavedLayer,uVar20,&local_b8);
  }
  if ((int)(this->CommandLineOverrides)._padding_ ==
      *(int *)((longlong)&(this->CommandLineOverrides)._padding_ + 4)) {
    iVar13 = 0;
  }
  else {
    iVar13 = local_b8.Data.ArrayNum + -1;
    FVar6.Data = local_b8.Data.AllocatorInstance.Data;
    if (local_b8.Data.ArrayNum == 0) {
      iVar13 = 0;
      FVar6.Data = (FScriptContainerElement *)L"";
    }
    uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)FVar6.Data);
    iVar13 = TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
             ::RemoveImpl<FString>
                       ((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                         *)&this->CommandLineOverrides,uVar20,&local_b8);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if ((int)(this->FinalCombinedLayers)._padding_ !=
      *(int *)((longlong)&(this->FinalCombinedLayers)._padding_ + 4)) {
    iVar14 = local_b8.Data.ArrayNum + -1;
    FVar6.Data = local_b8.Data.AllocatorInstance.Data;
    if (local_b8.Data.ArrayNum == 0) {
      iVar14 = 0;
      FVar6.Data = (FScriptContainerElement *)L"";
    }
    uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,(wchar_t *)FVar6.Data);
    iVar14 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
             ::RemoveImpl<FString>
                       ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                         *)&this->FinalCombinedLayers,uVar20,&local_b8);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return 0 < iVar14 + iVar17 + iVar16 + iVar11 + iVar12 + iVar13;
}

// RemoveTagsFromHierarchy @ 14188c270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConfigBranch::RemoveTagsFromHierarchy
          (FConfigBranch *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          FConfigModificationTracker *param_2)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  longlong lVar5;
  TDoubleLinkedListNode *pTVar6;
  FString *pFVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  FString local_18;
  
  pTVar6 = (this->DynamicLayers).HeadNode;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  if (pTVar6 != (TDoubleLinkedListNode *)0x0) {
    do {
      pFVar4 = (FName *)(param_1->AllocatorInstance).Data;
      pFVar1 = pFVar4 + param_1->ArrayNum;
      if (pFVar4 != pFVar1) {
        do {
          if (*pFVar4 == pTVar6->Value->Tag) {
            if (5 < (byte)LogConfig._0_1_) {
              ::FName::ToString(&pTVar6->Value->Tag,&local_18);
              ::FName::ToString(&this->IniName,&local_28);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
              if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_28.Data.AllocatorInstance.Data);
              }
              if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_18.Data.AllocatorInstance.Data);
              }
            }
            pFVar7 = &pTVar6->Value->Filename;
            if (((local_38.AllocatorInstance.Data <= pFVar7) &&
                (pFVar7 < local_38.AllocatorInstance.Data + (longlong)local_38.ArrayMax * 0x10)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (local_38.ArrayNum == local_38.ArrayMax) {
              local_38.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_38.AllocatorInstance,&local_38.ArrayMax);
            }
            lVar5 = (longlong)local_38.ArrayNum;
            local_38.ArrayNum = local_38.ArrayNum + 1;
            ::FString::FString((FString *)(local_38.AllocatorInstance.Data + lVar5 * 0x10),pFVar7);
            break;
          }
          pFVar4 = pFVar4 + 1;
        } while (pFVar4 != pFVar1);
      }
      pTVar6 = pTVar6->NextNode;
    } while (pTVar6 != (TDoubleLinkedListNode *)0x0);
    if (0 < local_38.ArrayNum) {
      RemoveDynamicLayersFromHierarchy(this,&local_38,param_2);
    }
  }
  DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// RunOnEachCommandStream @ 14188cf60

void __thiscall
FConfigBranch::RunOnEachCommandStream
          (FConfigBranch *this,
          TFunction<void___cdecl(FConfigCommandStream_&,FString_const_&)> *param_1)

{
  undefined1 *puVar1;
  TMap<FString,FConfigCommandStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FConfigCommandStream *pFVar6;
  code *pcVar7;
  FConfigBranch *pFVar8;
  TMap<FString,FConfigCommandStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>_>
  *pTVar9;
  bool bVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  TDoubleLinkedListNode *pTVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 local_d8 [8];
  TMap<FString,FConfigCommandStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  FConfigBranch *local_98;
  TMap<FString,FConfigCommandStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  FString local_60;
  FString local_50;
  
  iStack_c8 = 0;
  puVar1 = &(this->StaticLayers).field_0x10;
  iVar4 = *(int *)&(this->StaticLayers).field_0x28;
  pTVar2 = &this->StaticLayers;
  uStack_c4 = 1;
  local_b0 = 0;
  iStack_b4 = 0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->StaticLayers).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar18 = *puVar20;
    while (uVar18 == 0) {
      lVar12 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      iStack_b4 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_14188d00d;
      uVar18 = puVar20[lVar12 + 1];
    }
    uStack_c4 = -uVar18 & uVar18;
    uVar3 = (ulonglong)uStack_c4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_a0 = (int)lVar12;
    iStack_b4 = local_b0 + -1 + local_a0;
    if (iVar4 < iStack_b4) {
      iStack_b4 = iVar4;
    }
  }
LAB_14188d00d:
  uVar18 = *(uint *)&(this->StaticLayers).field_0x28;
  iStack_a8 = *(int *)&(this->StaticLayers).field_0x8 - *(int *)&(this->StaticLayers).field_0x34;
  uVar17 = uVar18 & 0xffffffe0;
  uStack_b8 = 0xffffffff;
  TStack_88._padding_ = CONCAT44(uStack_c4,iStack_c8);
  TStack_88.CurrentBitIndex = iStack_b4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar18 >> 5;
  TStack_88._28_4_ = iStack_b4;
  TStack_88.BaseBitIndex = local_b0;
  uStack_68 = CONCAT44(uStack_a4,iStack_a8);
  local_d0 = pTVar2;
  local_c0 = puVar1;
  iStack_ac = iStack_b4;
  local_98 = this;
  local_90 = pTVar2;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar4 < (int)uVar18)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&(this->StaticLayers).field_0x28;
  if (uVar18 != uVar5) {
    puVar19 = *(undefined1 **)&(this->StaticLayers).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      lVar12 = (longlong)iVar15;
      uVar17 = uVar17 + 0x20;
      iVar15 = iVar15 + 1;
      uVar18 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14188d110;
      uVar18 = *(uint *)(puVar19 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar18 = (int)lVar12 + -1 + uVar17;
    if ((int)uVar5 < (int)uVar18) {
      uVar18 = uVar5;
    }
  }
LAB_14188d110:
  while( true ) {
    pTVar9 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStream>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_d8);
    }
    pFVar8 = local_98;
    if (((TStack_88.CurrentBitIndex == uVar18) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2))
    break;
    lVar12 = (longlong)TStack_88.CurrentBitIndex * 0xe0 + *(longlong *)pTVar9;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar7 = *(code **)param_1;
    plVar13 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar13 = (longlong *)&param_1->field_0x10;
    }
    uVar11 = (**(code **)(*plVar13 + 8))();
    (*pcVar7)(uVar11,lVar12 + 0x10,lVar12);
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  pTVar16 = (local_98->DynamicLayers).HeadNode;
  if (pTVar16 != (TDoubleLinkedListNode *)0x0) {
    do {
      pFVar6 = pTVar16->Value;
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar7 = *(code **)param_1;
      plVar13 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar13 = (longlong *)&param_1->field_0x10;
      }
      uVar11 = (**(code **)(*plVar13 + 8))();
      (*pcVar7)(uVar11,pFVar6,&pFVar6->Filename);
      pTVar16 = pTVar16->NextNode;
    } while (pTVar16 != (TDoubleLinkedListNode *)0x0);
  }
  ::FString::FString(&local_60,L"SavedLayer");
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  plVar13 = (longlong *)&param_1->field_0x10;
  pcVar7 = *(code **)param_1;
  plVar14 = plVar13;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar14 = *(longlong **)&param_1->field_0x28;
  }
  uVar11 = (**(code **)(*plVar14 + 8))();
  (*pcVar7)(uVar11,&pFVar8->SavedLayer,&local_60);
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_50,L"CommandLineOverrides");
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar7 = *(code **)param_1;
  plVar14 = plVar13;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar14 = *(longlong **)&param_1->field_0x28;
  }
  uVar11 = (**(code **)(*plVar14 + 8))();
  (*pcVar7)(uVar11,&pFVar8->CommandLineOverrides,&local_50);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if (*(longlong *)param_1 != 0) {
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar13 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  return;
}

// RunOnEachFile @ 14188d2b0

void __thiscall
FConfigBranch::RunOnEachFile
          (FConfigBranch *this,TFunction<void___cdecl(FConfigFile_&,FString_const_&)> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  FString local_28;
  
  ::FString::FString(&local_28,L"CombinedStaticLayers");
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  plVar4 = (longlong *)&param_1->field_0x10;
  pcVar1 = *(code **)param_1;
  plVar3 = plVar4;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar3 = *(longlong **)&param_1->field_0x28;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&this->CombinedStaticLayers,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"FinalCombinedLayers");
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = plVar4;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar3 = *(longlong **)&param_1->field_0x28;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&this->FinalCombinedLayers,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"InMemoryFile");
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = plVar4;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar3 = *(longlong **)&param_1->field_0x28;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&this->InMemoryFile,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (*(longlong *)param_1 != 0) {
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return;
}

// SafeReload @ 14188d3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014188d6cd) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FConfigBranch::SafeReload(FConfigBranch *this)

{
  FConfigCommandStream *pFVar1;
  TDoubleLinkedListNode *pTVar2;
  FScriptContainerElement *_Src;
  TDoubleLinkedListNode *pTVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  int iVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  TDoubleLinkedListNode *pTVar10;
  int iVar11;
  undefined1 auStackY_328 [32];
  TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_> local_2d8;
  FLLMScope local_2c8 [2];
  FDynamicLayerInfo local_2c0;
  FString local_2a0;
  LARGE_INTEGER local_290;
  LARGE_INTEGER local_288;
  FMemScope local_280;
  FString local_278;
  FString local_268;
  FString local_258;
  FConfigContext local_248;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_328;
  FLLMScope::FLLMScope(local_2c8,ConfigSystem,false,None,Default,true);
  FMemScope::FMemScope(&local_280,ConfigSystem,true);
  QueryPerformanceCounter(&local_290);
  pFVar6 = ::FName::ToString(&this->Platform,&local_278);
  FConfigContext::FConfigContext(&local_248,GConfig,true,pFVar6,(FConfigFile *)0x0);
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  iVar7 = (this->IniPath).Data.ArrayNum;
  iVar11 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar11 = 0;
  }
  local_248.Branch = this;
  ::FString::AssignRange
            (&local_248.DestIniFilename,(wchar_t *)(this->IniPath).Data.AllocatorInstance.Data,
             iVar11);
  pFVar6 = ::FName::ToString(&this->IniName,&local_268);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  local_2a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a0.Data.ArrayNum = 0;
  local_2a0.Data.ArrayMax = 0;
  FConfigContext::Load(&local_248,pwVar8,&local_2a0);
  if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
  }
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  pTVar10 = (this->DynamicLayers).HeadNode;
  local_2d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d8.ArrayNum = 0;
  local_2d8.ArrayMax = 0;
  if (pTVar10 == (TDoubleLinkedListNode *)0x0) {
LAB_14188d785:
    if ((this->DynamicLayers).ListSize == 0) goto LAB_14188d7b0;
  }
  else {
    do {
      pFVar1 = pTVar10->Value;
      pTVar2 = pTVar10->NextNode;
      if (pFVar1->bNeverSafeUnload == '\0') {
        iVar7 = (pFVar1->Filename).Data.ArrayNum;
        _Src = (pFVar1->Filename).Data.AllocatorInstance.Data;
        local_2c0.Filename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2c0.Filename.Data.ArrayNum = iVar7;
        if (iVar7 == 0) {
          local_2c0.Filename.Data.ArrayNum = 0;
          local_2c0.Filename.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar7,0,(ForAnyElementType *)&local_2c0,iVar7,
                     &local_2c0.Filename.Data.ArrayMax);
          memcpy(local_2c0.Filename.Data.AllocatorInstance.Data,_Src,(longlong)iVar7 * 2);
        }
        local_2c0.Tag = pFVar1->Tag;
        local_2c0.Priority = pFVar1->Priority;
        if (((local_2d8.AllocatorInstance.Data <= &local_2c0) &&
            (&local_2c0 <
             (FDynamicLayerInfo *)
             (local_2d8.AllocatorInstance.Data + (longlong)local_2d8.ArrayMax * 0x20))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (local_2d8.ArrayNum == local_2d8.ArrayMax) {
          local_2d8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&local_2d8.AllocatorInstance,&local_2d8.ArrayMax);
        }
        lVar9 = (longlong)local_2d8.ArrayNum * 0x20;
        local_2d8.ArrayNum = local_2d8.ArrayNum + 1;
        *(undefined8 *)&local_2d8.AllocatorInstance.Data[lVar9].field_0x0 = 0;
        *(FScriptContainerElement **)&local_2d8.AllocatorInstance.Data[lVar9].field_0x0 =
             local_2c0.Filename.Data.AllocatorInstance.Data;
        *(int *)(local_2d8.AllocatorInstance.Data + lVar9 + 8) = local_2c0.Filename.Data.ArrayNum;
        *(int *)(local_2d8.AllocatorInstance.Data + lVar9 + 0xc) = local_2c0.Filename.Data.ArrayMax;
        *(FName *)(local_2d8.AllocatorInstance.Data + lVar9 + 0x10) = local_2c0.Tag;
        *(ushort *)(local_2d8.AllocatorInstance.Data + lVar9 + 0x18) = local_2c0.Priority;
        local_2c0.Filename.Data.ArrayNum = 0;
        local_2c0.Filename.Data.ArrayMax = 0;
        local_2c0.Filename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if ((this->DynamicLayers).ListSize == 1) {
          pTVar10->PrevNode = (TDoubleLinkedListNode *)0x0;
          iVar7 = 0;
          pTVar10->NextNode = (TDoubleLinkedListNode *)0x0;
          (this->DynamicLayers).TailNode = (TDoubleLinkedListNode *)0x0;
          (this->DynamicLayers).HeadNode = (TDoubleLinkedListNode *)0x0;
        }
        else {
          pTVar3 = (this->DynamicLayers).HeadNode;
          if (pTVar10 == pTVar3) {
            pTVar3 = pTVar3->NextNode;
            (this->DynamicLayers).HeadNode = pTVar3;
            pTVar3->PrevNode = (TDoubleLinkedListNode *)0x0;
          }
          else {
            pTVar3 = (this->DynamicLayers).TailNode;
            if (pTVar10 == pTVar3) {
              pTVar3 = pTVar3->PrevNode;
              (this->DynamicLayers).TailNode = pTVar3;
              pTVar3->NextNode = (TDoubleLinkedListNode *)0x0;
            }
            else {
              pTVar10->NextNode->PrevNode = pTVar10->PrevNode;
              pTVar10->PrevNode->NextNode = pTVar10->NextNode;
            }
          }
          pTVar10->PrevNode = (TDoubleLinkedListNode *)0x0;
          pTVar10->NextNode = (TDoubleLinkedListNode *)0x0;
          iVar7 = (this->DynamicLayers).ListSize + -1;
        }
        (**(code **)((this->DynamicLayers)._padding_ + 8))(&this->DynamicLayers,iVar7);
      }
      pTVar10 = pTVar2;
    } while (pTVar2 != (TDoubleLinkedListNode *)0x0);
    if (local_2d8.ArrayNum < 1) goto LAB_14188d785;
  }
  AddDynamicLayersToHierarchy
            (this,&local_2d8,(FConfigModificationTracker *)0x0,
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0,
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0,true);
LAB_14188d7b0:
  if (4 < (byte)LogConfig._0_1_) {
    QueryPerformanceCounter(&local_288);
    ::FName::ToString(&this->IniName,&local_258);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<FDynamicLayerInfo,int>
            ((FDynamicLayerInfo *)local_2d8.AllocatorInstance.Data,local_2d8.ArrayNum);
  if ((FDynamicLayerInfo *)local_2d8.AllocatorInstance.Data != (FDynamicLayerInfo *)0x0) {
    FMemory::Free(local_2d8.AllocatorInstance.Data);
  }
  FConfigContext::~FConfigContext(&local_248);
  FMemScope::~FMemScope(&local_280);
  FLLMScope::~FLLMScope(local_2c8);
  return;
}

// SafeUnload @ 14188d8b0

void __thiscall FConfigBranch::SafeUnload(FConfigBranch *this)

{
  undefined1 *puVar1;
  TMap<FString,FConfigCommandStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>_>
  *this_00;
  int iVar2;
  TDoubleLinkedListNode *pTVar3;
  FConfigCommandStream *this_01;
  bool bVar4;
  int *piVar5;
  
  this->bIsSafeUnloaded = true;
  FConfigFile::Cleanup(&this->InMemoryFile);
  FConfigFile::Cleanup(&this->CombinedStaticLayers);
  FConfigFile::Cleanup(&this->FinalCombinedLayers);
  this_00 = &this->StaticLayers;
  bVar4 = 1 < *(int *)&(this->StaticLayers).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FString,FConfigCommandStream>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,FConfigCommandStream>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStream>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStream>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->StaticLayers).field_0x8);
  puVar1 = &(this->StaticLayers).field_0xc;
  *(undefined4 *)&(this->StaticLayers).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xe0,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->StaticLayers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StaticLayers).field_0x34 = 0;
  iVar2 = *(int *)&(this->StaticLayers).field_0x2c;
  *(undefined4 *)&(this->StaticLayers).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->StaticLayers).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->StaticLayers).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->StaticLayers).field_0x48 = 1;
    TSet<TTuple<FString,FConfigCommandStream>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,FConfigCommandStream>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>,FDefaultSetAllocator>
              *)this_00);
  }
  for (pTVar3 = (this->DynamicLayers).HeadNode; pTVar3 != (TDoubleLinkedListNode *)0x0;
      pTVar3 = pTVar3->NextNode) {
    this_01 = pTVar3->Value;
    if (this_01->bNeverSafeUnload == '\0') {
      bVar4 = 1 < (int)this_01->_padding_;
      if (!bVar4) {
        TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                          *)this_01);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_01,0,(int)this_01->_padding_);
      piVar5 = (int *)((longlong)&this_01->_padding_ + 4);
      *(undefined4 *)&this_01->_padding_ = 0;
      if (*piVar5 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xb8,8,0,(ForAnyElementType *)this_01,0,piVar5);
      }
      *(undefined4 *)&this_01->_padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&this_01->_padding_ + 4) = 0;
      iVar2 = *(int *)((longlong)&this_01->_padding_ + 4);
      *(undefined4 *)&this_01->_padding_ = 0;
      if ((iVar2 < 0) || (0x80 < iVar2)) {
        *(undefined4 *)((longlong)&this_01->_padding_ + 4) = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&this_01->_padding_,0);
      }
      if (bVar4) {
        *(int *)&this_01->_padding_ = 1;
        TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                  *)this_01);
      }
    }
  }
  return;
}

// Shrink @ 141892400

void __thiscall FConfigBranch::Shrink(FConfigBranch *this)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_P6AXAEAVFConfigFile__AEBVFString___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = `FConfigBranch::Shrink'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(FConfigFile_&,FString_const_&),void,FConfigFile_&,FString_const_&>
                ::Call;
  RunOnEachFile(this,(TFunction<void___cdecl(FConfigFile_&,FString_const_&)> *)local_38);
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_P6AXAEAVFConfigCommandStream__AEBVFString___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = `FConfigBranch::Shrink'::__l2::<lambda_2>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(FConfigCommandStream_&,FString_const_&),void,FConfigCommandStream_&,FString_const_&>
                ::Call;
  RunOnEachCommandStream
            (this,(TFunction<void___cdecl(FConfigCommandStream_&,FString_const_&)> *)local_38);
  return;
}

