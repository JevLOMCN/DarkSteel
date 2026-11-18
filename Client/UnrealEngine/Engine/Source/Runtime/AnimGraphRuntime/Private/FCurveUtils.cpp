// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 2

// BuildUnsorted<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> @ 1463f1da0

void __cdecl
UE::Anim::FCurveUtils::BuildUnsorted<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
          (TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *param_1,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 local_res8 [8];
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_res10;
  int local_res18;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = *(int *)((longlong)&param_1->_padding_ + 4);
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  iVar14 = 0;
  *(undefined4 *)&param_1->_padding_ = 0;
  local_res10 = param_2;
  if (iVar11 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)param_1,0,piVar1);
  }
  *(undefined1 *)&param_1->_padding_ = 0;
  uVar16 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if (*piVar1 < (int)uVar16) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar16,(ForAnyElementType *)param_1,(int)param_1->_padding_,piVar1);
  }
  iVar11 = *(int *)&param_2->field_0x28;
  puVar2 = &param_2->field_0x10;
  uVar16 = 1;
  iVar17 = 0;
  iVar10 = 0;
  if (iVar11 != 0) {
    puVar19 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar19 = (uint *)puVar2;
    }
    uVar15 = *puVar19;
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar14;
      iVar17 = iVar17 + 0x20;
      iVar14 = iVar14 + 1;
      iVar10 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1463f1eaf;
      uVar15 = puVar19[lVar12 + 1];
    }
    uVar16 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uVar16 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    iVar10 = iVar17 + -1 + local_res18;
    if (iVar11 < iVar10) {
      iVar10 = iVar11;
    }
  }
LAB_1463f1eaf:
  uVar15 = *(uint *)&param_2->field_0x28;
  uVar20 = uVar15 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar16,iVar14);
  TStack_60.CurrentBitIndex = iVar10;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar15 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar17;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar15 < 0) || (iVar11 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar8 = local_res10;
  uVar16 = *(uint *)&param_2->field_0x28;
  if (uVar15 != uVar16) {
    puVar18 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar18 = puVar2;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar14;
      uVar20 = uVar20 + 0x20;
      iVar14 = iVar14 + 1;
      uVar15 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_1463f1fb0;
      uVar15 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar15 = (int)lVar12 + -1 + uVar20;
    if ((int)uVar16 < (int)uVar15) {
      uVar15 = uVar16;
    }
  }
LAB_1463f1fb0:
  while( true ) {
    if (*(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar12 = (longlong)TStack_60.CurrentBitIndex;
    if (((TStack_60.CurrentBitIndex == uVar15) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (param_2 == pTVar8))
    break;
    lVar5 = *(longlong *)param_2;
    iVar11 = (int)param_1->_padding_;
    if (iVar11 == *piVar1) {
      iVar11 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,(ForAnyElementType *)param_1,piVar1);
    }
    lVar13 = (longlong)iVar11;
    *(int *)&param_1->_padding_ = iVar11 + 1;
    lVar6 = param_1->_padding_;
    uVar4 = *(undefined4 *)(lVar5 + 8 + lVar12 * 0x14);
    *(undefined8 *)(lVar6 + lVar13 * 0x10) = *(undefined8 *)(lVar5 + lVar12 * 0x14);
    *(undefined4 *)(lVar6 + 8 + lVar13 * 0x10) = uVar4;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    *(undefined1 *)(lVar6 + 0xc + lVar13 * 0x10) = 0;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Filter<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> @ 1463f56d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Anim::FCurveUtils::Filter<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
          (TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *param_1,
          FCurveFilter *param_2)

{
  ECurveFilterMode EVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  FIdentityFunctor local_res10;
  
  EVar1 = param_2->FilterMode;
  if (EVar1 != None) {
    if ((EVar1 != DisallowAll) && ((EVar1 != AllowOnlyFiltered || ((int)param_2->_padding_ != 0))))
    {
      if ((char)param_1->_padding_ == '\0') {
        AlgoImpl::
        IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>::FElementSortPredicate>
                  ((FCurveElement *)param_1->_padding_,(int)param_1->_padding_,local_res10,
                   (FElementSortPredicate)local_res10);
        *(undefined1 *)&param_1->_padding_ = 1;
      }
      if ((char)param_2->_padding_ == '\0') {
        AlgoImpl::
        IntroSortInternal<UE::Anim::FCurveFilterElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveFilterElement>::FElementSortPredicate>
                  ((FCurveFilterElement *)param_2->_padding_,(int)param_2->_padding_,local_res10,
                   (FElementSortPredicate)local_res10);
        *(undefined1 *)&param_2->_padding_ = 1;
      }
      lVar8 = (longlong)(int)param_2->_padding_;
      uVar10 = 0;
      uVar11 = (uint)param_1->_padding_;
      uVar12 = 0;
      lVar13 = 0;
      lVar14 = 0;
      lVar15 = 0;
      do {
        while( true ) {
          while( true ) {
            if ((uVar10 == uVar11) && (lVar13 < lVar8)) {
              return;
            }
            if ((lVar13 == lVar8) && ((int)uVar10 < (int)uVar11)) {
              do {
                EVar1 = param_2->FilterMode;
                if ((EVar1 == None) ||
                   (((EVar1 != DisallowAll && (EVar1 != AllowOnlyFiltered)) &&
                    (EVar1 == DisallowFiltered)))) {
                  uVar10 = uVar10 + 1;
                }
                else {
                  TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_>::RemoveAt
                            ((TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_> *)param_1,
                             uVar10,No);
                  uVar11 = (uint)param_1->_padding_;
                }
              } while ((int)uVar10 < (int)uVar11);
              return;
            }
            if ((uVar10 == uVar11) && (lVar13 == lVar8)) {
              return;
            }
            uVar6 = 0;
            if ((int)uVar10 < (int)param_1->_padding_) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar2 = param_1->_padding_;
            uVar6 = 0;
            if ((int)uVar12 < (int)param_2->_padding_) {
              uVar6 = ~uVar12 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar2 = *(longlong *)(lVar2 + lVar15);
            lVar3 = *(longlong *)(param_2->_padding_ + lVar14);
            if (lVar2 == lVar3) break;
            iVar7 = (int)lVar2 - (int)lVar3;
            if (iVar7 == 0) {
              iVar7 = (int)((ulonglong)lVar2 >> 0x20) - (int)((ulonglong)lVar3 >> 0x20);
            }
            if (iVar7 < 0) {
              EVar1 = param_2->FilterMode;
              if ((EVar1 == None) ||
                 (((EVar1 != DisallowAll && (EVar1 != AllowOnlyFiltered)) &&
                  (EVar1 == DisallowFiltered)))) {
                uVar10 = uVar10 + 1;
                lVar15 = lVar15 + 0x10;
              }
              else {
                TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_>::RemoveAt
                          ((TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_> *)param_1,
                           uVar10,No);
                uVar11 = (uint)param_1->_padding_;
              }
            }
            else {
              uVar12 = uVar12 + 1;
              lVar13 = lVar13 + 1;
              lVar14 = lVar14 + 0xc;
            }
          }
          bVar9 = *(byte *)(param_2->_padding_ + 8 + lVar14);
          if ((bVar9 & 1) == 0) break;
LAB_1463f58eb:
          uVar12 = uVar12 + 1;
          lVar13 = lVar13 + 1;
          TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_>::RemoveAt
                    ((TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_> *)param_1,uVar10,
                     No);
          uVar11 = (uint)param_1->_padding_;
          lVar14 = lVar14 + 0xc;
        }
        EVar1 = param_2->FilterMode;
        if (EVar1 != None) {
          if (EVar1 != DisallowAll) {
            if (EVar1 == AllowOnlyFiltered) {
              bVar9 = bVar9 >> 1;
            }
            else {
              if (EVar1 != DisallowFiltered) goto LAB_1463f58eb;
              bVar9 = ~(bVar9 >> 1);
            }
            if ((bVar9 & 1) != 0) goto LAB_1463f5917;
          }
          goto LAB_1463f58eb;
        }
LAB_1463f5917:
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 1;
        uVar10 = uVar10 + 1;
        lVar15 = lVar15 + 0x10;
        lVar14 = lVar14 + 0xc;
      } while( true );
    }
    iVar7 = *(int *)((longlong)&param_1->_padding_ + 4);
    *(undefined4 *)&param_1->_padding_ = 0;
    if (iVar7 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)param_1,0,(int *)((longlong)&param_1->_padding_ + 4))
      ;
      return;
    }
  }
  return;
}

