// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// FGeometryFingerprint @ 1424732b0

/* WARNING: Type propagation algorithm not settling */

FGeometryFingerprint * __thiscall
UE::Slate::FPreprocessedGlyphGeometry::FGeometryFingerprint::FGeometryFingerprint
          (FGeometryFingerprint *this,Shape *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  FGeometryFingerprint *pFVar11;
  longlong lVar12;
  longlong lVar13;
  TSet<TTuple<int,int>,DefaultKeyFuncs<TTuple<int,int>,0>,FDefaultSetAllocator> *this_00;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  Contour *pCVar20;
  undefined8 *puVar21;
  uint uVar22;
  ulonglong uVar23;
  TTuple<int,int> local_res18;
  TTuple<int,int> local_res20;
  longlong local_98;
  double local_88;
  double local_80;
  
  uVar23 = 0;
  piVar1 = &(this->Contours).ArrayNum;
  (this->Contours).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  piVar2 = &(this->Contours).ArrayMax;
  *piVar2 = 0;
  lVar14 = (longlong)(param_1->contours)._Mypair._Myval2._Mylast -
           (longlong)(param_1->contours)._Mypair._Myval2._Myfirst;
  lVar14 = lVar14 / 6 + (lVar14 >> 0x3f);
  uVar17 = (lVar14 >> 2) - (lVar14 >> 0x3f);
  iVar18 = (int)uVar17;
  if (iVar18 < 1) {
    if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar17 & 0xffffffff);
    }
  }
  else {
    iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x50,8,iVar18,(ForAnyElementType *)this,piVar1,piVar2);
    DefaultConstructItems<TSet<TTuple<int,int>,DefaultKeyFuncs<TTuple<int,int>,0>,FDefaultSetAllocator>,int>
              ((this->Contours).AllocatorInstance.Data + (longlong)iVar10 * 0x50,iVar18);
  }
  dVar8 = __real_4000000000000000;
  dVar7 = __real_3fe0000000000000;
  pCVar20 = (param_1->contours)._Mypair._Myval2._Myfirst;
  lVar13 = (longlong)(param_1->contours)._Mypair._Myval2._Mylast - (longlong)pCVar20;
  lVar14 = lVar13 >> 0x3f;
  if (lVar13 / 0x18 + lVar14 != lVar14) {
    local_98 = 0;
    do {
      puVar3 = *(undefined8 **)((longlong)&(pCVar20->edges)._Mypair._Myval2 + local_98 + 8);
      for (puVar21 = *(undefined8 **)((longlong)&(pCVar20->edges)._Mypair._Myval2 + local_98);
          puVar21 != puVar3; puVar21 = puVar21 + 1) {
        (**(code **)(*(longlong *)*puVar21 + 0x20))((longlong *)*puVar21,&local_88,0);
        uVar17 = 0;
        uVar19 = (int)ROUND(local_88 * dVar8 + dVar7) >> 1;
        iVar18 = (int)ROUND(local_80 * dVar8 + dVar7) >> 1;
        local_res20._0_4_ = uVar19;
        local_res20._4_4_ = iVar18;
        if (uVar23 != 0) {
          do {
            uVar16 = (uint)uVar17;
            uVar22 = 0;
            if ((int)uVar16 < *piVar1) {
              uVar22 = ~uVar16 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              pFVar11 = (FGeometryFingerprint *)(*pcVar6)();
              return pFVar11;
            }
            pFVar4 = (this->Contours).AllocatorInstance.Data;
            lVar14 = (longlong)(int)uVar16 * 0x50;
            if (*(int *)(pFVar4 + lVar14 + 8) != *(int *)(pFVar4 + lVar14 + 0x34)) {
              pFVar5 = *(FScriptContainerElement **)(pFVar4 + lVar14 + 0x38 + 8);
              pFVar15 = pFVar4 + lVar14 + 0x38;
              if (pFVar5 != (FScriptContainerElement *)0x0) {
                pFVar15 = pFVar5;
              }
              iVar10 = *(int *)(pFVar15 +
                               (ulonglong)
                               (*(int *)(pFVar4 + lVar14 + 0x48) - 1U &
                               (uVar19 * 0x40 + -0x61c88647 + iVar18 + (uVar19 >> 2) ^ uVar19)) * 4)
              ;
              if (iVar10 != -1) {
                lVar13 = *(longlong *)(pFVar4 + lVar14);
                do {
                  lVar12 = (longlong)iVar10;
                  if ((*(uint *)(lVar13 + lVar12 * 0x10) == uVar19) &&
                     (*(int *)(lVar13 + 4 + lVar12 * 0x10) == iVar18)) {
                    if (iVar10 != -1) {
                      uVar22 = 0;
                      if ((int)uVar16 < *piVar1) {
                        uVar22 = ~uVar16 >> 0x1f;
                      }
                      if ((uVar22 == 0) &&
                         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar9)) {
                        pcVar6 = (code *)swi(3);
                        pFVar11 = (FGeometryFingerprint *)(*pcVar6)();
                        return pFVar11;
                      }
                      this_00 = (TSet<TTuple<int,int>,DefaultKeyFuncs<TTuple<int,int>,0>,FDefaultSetAllocator>
                                 *)((this->Contours).AllocatorInstance.Data + lVar14);
                      if (*(int *)&(this_00->Elements).field_0x8 !=
                          *(int *)&(this_00->Elements).field_0x34) {
                        TSet<TTuple<int,int>,DefaultKeyFuncs<TTuple<int,int>,0>,FDefaultSetAllocator>
                        ::RemoveImpl<TTuple<int,int>_>
                                  (this_00,(uVar19 >> 2) + uVar19 * 0x40 + -0x61c88647 + iVar18 ^
                                           uVar19,&local_res20);
                      }
                      goto LAB_14247363f;
                    }
                    break;
                  }
                  iVar10 = *(int *)(lVar13 + 8 + lVar12 * 0x10);
                } while (iVar10 != -1);
              }
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < uVar23);
        }
        uVar22 = (uint)uVar23;
        uVar19 = 0;
        if ((int)uVar22 < *piVar1) {
          uVar19 = ~uVar22 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          pFVar11 = (FGeometryFingerprint *)(*pcVar6)();
          return pFVar11;
        }
        TSet<TTuple<int,int>,DefaultKeyFuncs<TTuple<int,int>,0>,FDefaultSetAllocator>::
        Emplace<TTuple<int,int>_const_&>
                  ((TSet<TTuple<int,int>,DefaultKeyFuncs<TTuple<int,int>,0>,FDefaultSetAllocator> *)
                   ((this->Contours).AllocatorInstance.Data + (longlong)(int)uVar22 * 0x50),
                   &local_res18,(bool *)&local_res20);
LAB_14247363f:
      }
      pCVar20 = (param_1->contours)._Mypair._Myval2._Myfirst;
      local_98 = local_98 + 0x18;
      uVar23 = uVar23 + 1;
    } while (uVar23 < (ulonglong)
                      (((longlong)(param_1->contours)._Mypair._Myval2._Mylast - (longlong)pCVar20) /
                      0x18));
  }
  return this;
}

// operator== @ 14247a4f0

bool __thiscall
UE::Slate::FPreprocessedGlyphGeometry::FGeometryFingerprint::operator==
          (FGeometryFingerprint *this,FGeometryFingerprint *param_1)

{
  bool bVar1;
  
  bVar1 = OneWayMatch(this,param_1);
  if (bVar1) {
    bVar1 = OneWayMatch(param_1,this);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// operator!= @ 14247a830

bool __thiscall
UE::Slate::FPreprocessedGlyphGeometry::FGeometryFingerprint::operator!=
          (FGeometryFingerprint *this,FGeometryFingerprint *param_1)

{
  bool bVar1;
  
  bVar1 = OneWayMatch(this,param_1);
  if (bVar1) {
    bVar1 = OneWayMatch(param_1,this);
    if (bVar1) {
      return false;
    }
  }
  return true;
}

// OneWayMatch @ 14249d730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __cdecl
UE::Slate::FPreprocessedGlyphGeometry::FGeometryFingerprint::OneWayMatch
          (FGeometryFingerprint *param_1,FGeometryFingerprint *param_2)

{
  uint uVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  ForElementType<bool> FVar10;
  ulonglong uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  FScriptContainerElement *pFVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  uint *puVar20;
  uint uVar21;
  longlong lVar22;
  undefined1 auStackY_188 [32];
  undefined1 local_158;
  undefined1 local_157 [3];
  uint local_154;
  uint local_150;
  FGeometryFingerprint *local_148;
  FScriptContainerElement *local_140;
  TBitArray<FDefaultBitArrayAllocator> *local_138;
  int local_130;
  int local_12c;
  FGeometryFingerprint *local_128;
  FScriptContainerElement *local_120;
  FScriptContainerElement *local_118;
  int iStack_110;
  uint uStack_10c;
  TBitArray<FDefaultBitArrayAllocator> *local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  int local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  FScriptContainerElement *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  undefined4 local_9c;
  ForElementType<bool> local_98;
  int local_50 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  uVar15 = (param_1->Contours).ArrayNum;
  if (uVar15 != (param_2->Contours).ArrayNum) {
    return false;
  }
  local_98.SecondaryData = (ForElementType<bool>)0x0;
  local_50[0] = 0;
  local_50[1] = 0x40;
  local_148 = param_2;
  local_128 = param_1;
  if ((int)uVar15 < 1) {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
  }
  else {
    iVar8 = Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_>
                      (1,1,uVar15,&local_98,local_50,local_50 + 1);
    FVar10 = (ForElementType<bool>)&local_98;
    if (local_98.SecondaryData != (ForElementType<bool>)0x0) {
      FVar10 = local_98.SecondaryData;
    }
    memset((void *)((longlong)iVar8 + (longlong)FVar10),0,(longlong)(int)uVar15);
  }
  local_150 = (param_1->Contours).ArrayNum;
  uVar11 = (ulonglong)(int)local_150;
  pFVar18 = (param_1->Contours).AllocatorInstance.Data;
  local_120 = pFVar18 + uVar11 * 0x50;
  pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar18 + 0x10);
LAB_14249d810:
  pFVar13 = local_120;
  local_140 = pFVar18;
  local_138 = pTVar19;
  if ((param_1->Contours).ArrayNum != (int)uVar11) {
    local_158 = 0;
    `TCheckedPointerIterator<TSet<TTuple<int,int>,DefaultKeyFuncs<TTuple<int,int>,0>,FDefaultSetAllocator>_const_,int,0>
    ::operator!='::__l2::<lambda_1>::operator()(&local_158);
  }
  if (pFVar18 == pFVar13) {
    bVar5 = true;
LAB_14249dc50:
    if (local_98.SecondaryData == (ForElementType<bool>)0x0) {
      return bVar5;
    }
    FMemory::Free((void *)local_98.SecondaryData);
    return bVar5;
  }
  uVar15 = *(uint *)&pTVar19->NumBits;
  iStack_110 = 0;
  local_f8 = 0;
  uVar21 = 0xffffffff;
  uStack_10c = 1;
  uStack_fc = 0;
  if (uVar15 != 0) {
    pTVar2 = *(TBitArray<FDefaultBitArrayAllocator> **)
              &((FScriptContainerElement *)((longlong)&pTVar19->AllocatorInstance + 0x10))->
               field_0x0;
    pTVar17 = pTVar19;
    if (pTVar2 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar17 = pTVar2;
    }
    uVar14 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
    while (uVar14 == 0) {
      lVar12 = (longlong)iStack_110;
      local_f8 = local_f8 + 0x20;
      iStack_110 = iStack_110 + 1;
      uStack_fc = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_110)
      goto LAB_14249d8c0;
      uVar14 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar12 * 4 + 4);
    }
    uStack_10c = -uVar14 & uVar14;
    uVar11 = (ulonglong)uStack_10c * 2 + 1;
    lVar12 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_130 = (int)lVar12;
    uStack_fc = local_f8 + -1 + local_130;
    if ((int)uVar15 < (int)uStack_fc) {
      uStack_fc = uVar15;
    }
  }
LAB_14249d8c0:
  uStack_f4 = local_9c;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_f0 = pTVar19[0xffffffffffffffff].NumBits -
              *(int *)(pTVar19[1].AllocatorInstance.InlineData + 4);
  TStack_e0._padding_ = CONCAT44(uStack_10c,iStack_110);
  uStack_100 = 0xffffffff;
  TStack_e0.CurrentBitIndex = uStack_fc;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  iVar8 = (int)uVar15 >> 5;
  TStack_e0._28_4_ = local_9c;
  TStack_e0.BaseBitIndex = local_f8;
  uStack_c0 = CONCAT44(uStack_ec,iStack_f0);
  local_154 = uVar15;
  local_118 = pFVar18;
  local_108 = pTVar19;
  local_e8 = pFVar18;
  TStack_e0.Array = pTVar19;
  if (((int)uVar15 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar16 = *(uint *)&pTVar19->NumBits;
  if (uVar15 != uVar16) {
    pTVar2 = *(TBitArray<FDefaultBitArrayAllocator> **)
              &((FScriptContainerElement *)((longlong)&pTVar19->AllocatorInstance + 0x10))->
               field_0x0;
    pTVar17 = pTVar19;
    if (pTVar2 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar17 = pTVar2;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) &
             *(uint *)((longlong)&pTVar17->AllocatorInstance + (longlong)iVar8 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar8;
      uVar14 = uVar14 + 0x20;
      iVar8 = iVar8 + 1;
      uVar15 = uVar16;
      local_154 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_14249d9e0;
      uVar15 = *(uint *)((longlong)&pTVar17->AllocatorInstance + lVar12 * 4 + 4);
    }
    uVar11 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_12c = (int)lVar12;
    uVar15 = local_12c + -1 + uVar14;
    local_154 = uVar15;
    if ((int)uVar16 < (int)uVar15) {
      uVar15 = uVar16;
      local_154 = uVar16;
    }
  }
LAB_14249d9e0:
  do {
    pFVar18 = local_e8;
    if (*(int *)(local_e8 + 8) - *(int *)(local_e8 + 0x34) != (int)uStack_c0) {
      local_157[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_157);
    }
    if (((TStack_e0.CurrentBitIndex == uVar15) && (TStack_e0.Array == pTVar19)) &&
       (pFVar18 == local_140)) break;
    iVar8 = (param_2->Contours).ArrayNum;
    bVar5 = false;
    puVar20 = (uint *)((longlong)TStack_e0.CurrentBitIndex * 0x10 + *(longlong *)pFVar18);
    lVar12 = 0;
    uVar15 = 0;
    if (iVar8 < 1) {
LAB_14249dc4a:
      bVar5 = false;
      goto LAB_14249dc50;
    }
    lVar22 = 0;
    do {
      uVar16 = ~uVar15 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar15 < iVar8) {
        uVar14 = uVar16;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      uVar14 = *puVar20;
      uVar1 = puVar20[1];
      pFVar18 = (local_148->Contours).AllocatorInstance.Data + lVar22;
      if (*(int *)(pFVar18 + 8) != *(int *)(pFVar18 + 0x34)) {
        pFVar13 = pFVar18 + 0x38;
        if (*(FScriptContainerElement **)(pFVar18 + 0x40) != (FScriptContainerElement *)0x0) {
          pFVar13 = *(FScriptContainerElement **)(pFVar18 + 0x40);
        }
        iVar8 = *(int *)(pFVar13 +
                        (ulonglong)
                        (*(int *)(pFVar18 + 0x48) - 1U &
                        (uVar14 * 0x40 + uVar1 + (uVar14 >> 2) + 0x9e3779b9 ^ uVar14)) * 4);
        if (iVar8 != -1) {
          lVar3 = *(longlong *)pFVar18;
          do {
            lVar9 = (longlong)iVar8;
            if ((*(uint *)(lVar3 + lVar9 * 0x10) == uVar14) &&
               (*(uint *)(lVar3 + 4 + lVar9 * 0x10) == uVar1)) {
              if ((iVar8 != -1) && (bVar5 = true, uVar15 != uVar21)) {
                if (-1 < (int)uVar21) goto LAB_14249dc4a;
                uVar21 = 0;
                if ((int)uVar15 < local_50[0]) {
                  uVar21 = uVar16;
                }
                if ((uVar21 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
                FVar10 = (ForElementType<bool>)&local_98;
                if (local_98.SecondaryData != (ForElementType<bool>)0x0) {
                  FVar10 = local_98.SecondaryData;
                }
                if (*(char *)(lVar12 + (longlong)FVar10) != '\0') goto LAB_14249dc4a;
                uVar21 = 0;
                if ((int)uVar15 < local_50[0]) {
                  uVar21 = uVar16;
                }
                if ((uVar21 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
                FVar10 = (ForElementType<bool>)&local_98;
                if (local_98.SecondaryData != (ForElementType<bool>)0x0) {
                  FVar10 = local_98.SecondaryData;
                }
                *(undefined1 *)(lVar12 + (longlong)FVar10) = 1;
                uVar21 = uVar15;
              }
              break;
            }
            iVar8 = *(int *)(lVar3 + 8 + lVar9 * 0x10);
          } while (iVar8 != -1);
        }
      }
      uVar15 = uVar15 + 1;
      lVar12 = lVar12 + 1;
      lVar22 = lVar22 + 0x50;
      iVar8 = (local_148->Contours).ArrayNum;
    } while ((int)uVar15 < iVar8);
    if (!bVar5) goto LAB_14249dc4a;
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
    pTVar19 = local_138;
    param_2 = local_148;
    uVar15 = local_154;
  } while( true );
  pFVar18 = local_140 + 0x50;
  pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)&pTVar19[2].AllocatorInstance.SecondaryData;
  uVar11 = (ulonglong)local_150;
  param_1 = local_128;
  goto LAB_14249d810;
}

