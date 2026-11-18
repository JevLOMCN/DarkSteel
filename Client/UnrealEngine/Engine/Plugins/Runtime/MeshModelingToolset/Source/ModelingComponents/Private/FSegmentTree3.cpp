// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 8

// <lambda_invoker_cdecl> @ 14cb595b0

int __cdecl
`UE::Geometry::FSegmentTree3::MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (int param_1,TAxisAlignedBox3<double> *param_2)

{
  return param_1 + (param_1 / 3 + (param_1 >> 0x1f) +
                   (int)(((longlong)param_1 / 3 + ((longlong)param_1 >> 0x3f) & 0xffffffffU) >> 0x1f
                        )) * -3;
}

// BuildTopDown @ 14cb75860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FSegmentTree3::BuildTopDown
          (FSegmentTree3 *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  TArray<UE::Geometry::FSegmentTree3::FTreeBox,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  bool bVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  FBoxesSet local_148;
  int local_110;
  FBoxesSet local_108;
  int local_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  TVector<double>_u_0 local_98;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar21 = 0;
  local_148.Boxes.CurBlock = 0;
  local_148.Boxes.CurBlockUsed = 0;
  local_148.Boxes.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Boxes.Blocks.ArrayNum = 0;
  local_148.Boxes.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512>::AddAllocatedBlock(&local_148.Boxes);
  local_148.IndexList.CurBlock = 0;
  local_148.IndexList.CurBlockUsed = 0;
  local_148.IndexList.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.IndexList.Blocks.ArrayNum = 0;
  local_148.IndexList.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_148.IndexList);
  local_148.IBoxCur = 0;
  local_148.IIndicesCur = 0;
  local_108.Boxes.CurBlock = 0;
  local_108.Boxes.CurBlockUsed = 0;
  local_108.Boxes.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Boxes.Blocks.ArrayNum = 0;
  local_108.Boxes.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512>::AddAllocatedBlock(&local_108.Boxes);
  local_108.IndexList.CurBlock = 0;
  local_108.IndexList.CurBlockUsed = 0;
  local_108.IndexList.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.IndexList.Blocks.ArrayNum = 0;
  local_108.IndexList.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_108.IndexList);
  local_108.IBoxCur = 0;
  local_108.IIndicesCur = 0;
  local_98._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_98._s_0.Y = _UNK_150a9e648;
  local_98._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
  uStack_80 = _UNK_150a9e6d8;
  local_78 = ___xmm_ffefffffffffffffffefffffffffffff;
  uStack_70 = _UNK_1508ffb58;
  local_110 = SplitSegmentSetMidpoints
                        (this,param_1,param_2,0,param_3,0,this->TopDownLeafMaxSegmentCount,
                         &local_148,&local_108,(TAxisAlignedBox3<double> *)&local_98._s_0);
  uVar18 = local_148.IIndicesCur;
  iVar14 = local_148.IBoxCur;
  this->SegmentsEnd = local_148.IIndicesCur;
  uVar24 = local_148.Boxes.CurBlockUsed;
  uVar19 = local_148.IBoxCur;
  if (0 < local_108.IBoxCur) {
    do {
      lVar22 = (ulonglong)((uint)uVar21 & 0x1ff) * 0x38;
      lVar26 = *(longlong *)(local_108.Boxes.Blocks.AllocatorInstance.Data + (uVar21 >> 9) * 8);
      puVar3 = (undefined8 *)(lVar26 + 8 + lVar22);
      uStack_c8 = *puVar3;
      uStack_c0 = puVar3[1];
      local_d0 = *(int *)(lVar26 + lVar22) + uVar18;
      uStack_b8 = *(undefined8 *)(lVar26 + 0x18 + lVar22);
      puVar3 = (undefined8 *)(lVar26 + 0x20 + lVar22);
      uVar8 = *puVar3;
      uVar9 = puVar3[1];
      uVar4 = *(undefined8 *)(lVar26 + 0x30 + lVar22);
      uVar17 = local_148.Boxes.CurBlock * 0x200 + uVar24;
      if (uVar19 == uVar17) {
        uVar17 = local_148.Boxes.CurBlock;
        if (uVar24 == 0x200) {
          if (local_148.Boxes.CurBlock == local_148.Boxes.Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512>::AddAllocatedBlock
                      (&local_148.Boxes);
          }
          uVar17 = local_148.Boxes.CurBlock + 1;
          local_148.Boxes.CurBlockUsed = 0;
          local_148.Boxes.CurBlock = uVar17;
          uVar24 = 0;
        }
LAB_14cb75a62:
        lVar22 = (longlong)(int)uVar24 * 0x38;
        lVar26 = *(longlong *)
                  (local_148.Boxes.Blocks.AllocatorInstance.Data + (longlong)(int)uVar17 * 8);
        *(undefined8 *)(lVar26 + lVar22) = CONCAT44(uStack_cc,local_d0);
        ((undefined8 *)(lVar26 + lVar22))[1] = uStack_c8;
        puVar3 = (undefined8 *)(lVar26 + 0x10 + lVar22);
        *puVar3 = uStack_c0;
        puVar3[1] = uStack_b8;
        puVar3 = (undefined8 *)(lVar26 + 0x20 + lVar22);
        *puVar3 = uVar8;
        puVar3[1] = uVar9;
        *(undefined8 *)(lVar26 + 0x30 + lVar22) = uVar4;
        uVar24 = local_148.Boxes.CurBlockUsed + 1;
        local_148.Boxes.CurBlockUsed = uVar24;
      }
      else {
        if (uVar17 < uVar19) {
          TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512>::Resize(&local_148.Boxes,uVar19)
          ;
          uVar17 = local_148.Boxes.CurBlock;
          uVar24 = local_148.Boxes.CurBlockUsed;
          if (local_148.Boxes.CurBlockUsed == 0x200) {
            if (local_148.Boxes.CurBlock == local_148.Boxes.Blocks.ArrayNum - 1U) {
              TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512>::AddAllocatedBlock
                        (&local_148.Boxes);
            }
            local_148.Boxes.CurBlock = local_148.Boxes.CurBlock + 1;
            local_148.Boxes.CurBlockUsed = 0;
            uVar17 = local_148.Boxes.CurBlock;
            uVar24 = 0;
          }
          goto LAB_14cb75a62;
        }
        lVar22 = (ulonglong)(uVar19 & 0x1ff) * 0x38;
        lVar26 = *(longlong *)
                  (local_148.Boxes.Blocks.AllocatorInstance.Data + (ulonglong)(uVar19 >> 9) * 8);
        *(undefined8 *)(lVar26 + lVar22) = CONCAT44(uStack_cc,local_d0);
        ((undefined8 *)(lVar26 + lVar22))[1] = uStack_c8;
        puVar3 = (undefined8 *)(lVar26 + 0x10 + lVar22);
        *puVar3 = uStack_c0;
        puVar3[1] = uStack_b8;
        puVar3 = (undefined8 *)(lVar26 + 0x20 + lVar22);
        *puVar3 = uVar8;
        puVar3[1] = uVar9;
        *(undefined8 *)(lVar26 + 0x30 + lVar22) = uVar4;
        uVar24 = local_148.Boxes.CurBlockUsed;
      }
      uVar17 = (uint)uVar21 + 1;
      uVar21 = (ulonglong)uVar17;
      uVar19 = uVar19 + 1;
    } while ((int)uVar17 < local_108.IBoxCur);
  }
  pTVar1 = &this->TreeBoxes;
  iVar25 = (this->TreeBoxes).ArrayNum;
  piVar2 = &(this->TreeBoxes).ArrayNum;
  uVar24 = local_148.Boxes.CurBlock * 0x200 + uVar24;
  if (iVar25 < (int)uVar24) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,uVar24 - iVar25,&pTVar1->AllocatorInstance,piVar2,&(this->TreeBoxes).ArrayMax)
    ;
  }
  else {
    if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
    }
    if ((int)uVar24 < iVar25) {
      uVar19 = iVar25 - uVar24;
      if (((int)(uVar24 | uVar19) < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (uVar19 != 0) {
        pFVar16 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar24 * 0x38;
        iVar25 = (*piVar2 - uVar19) - uVar24;
        if (iVar25 != 0) {
          memmove(pFVar16,pFVar16 + (longlong)(int)uVar19 * 0x38,(longlong)iVar25 * 0x38);
        }
        *piVar2 = *piVar2 - uVar19;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,&pTVar1->AllocatorInstance,*piVar2,&(this->TreeBoxes).ArrayMax);
      }
    }
  }
  uVar19 = 0;
  lVar26 = (longlong)(int)uVar24;
  if (0 < (int)uVar24) {
    lVar22 = 0;
    do {
      lVar23 = (ulonglong)(uVar19 & 0x1ff) * 0x38;
      lVar6 = *(longlong *)
               (local_148.Boxes.Blocks.AllocatorInstance.Data + (ulonglong)(uVar19 >> 9) * 8);
      uVar8 = *(undefined8 *)(lVar6 + lVar23);
      uVar9 = ((undefined8 *)(lVar6 + lVar23))[1];
      puVar3 = (undefined8 *)(lVar6 + 0x10 + lVar23);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      puVar3 = (undefined8 *)(lVar6 + 0x20 + lVar23);
      uVar12 = *puVar3;
      uVar13 = puVar3[1];
      uVar4 = *(undefined8 *)(lVar6 + 0x30 + lVar23);
      uVar24 = 0;
      if ((int)uVar19 < *piVar2) {
        uVar24 = ~uVar19 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar16 = (pTVar1->AllocatorInstance).Data;
      uVar19 = uVar19 + 1;
      *(undefined8 *)(pFVar16 + lVar22) = uVar8;
      *(undefined8 *)(pFVar16 + lVar22 + 8) = uVar9;
      *(undefined8 *)(pFVar16 + lVar22 + 0x10) = uVar10;
      *(undefined8 *)(pFVar16 + lVar22 + 0x10 + 8) = uVar11;
      *(undefined8 *)(pFVar16 + lVar22 + 0x20) = uVar12;
      *(undefined8 *)(pFVar16 + lVar22 + 0x20 + 8) = uVar13;
      *(undefined8 *)(pFVar16 + lVar22 + 0x30) = uVar4;
      lVar22 = lVar22 + 0x38;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
  }
  if (0 < local_108.IIndicesCur) {
    iVar25 = -uVar18;
    do {
      uVar24 = iVar25 + uVar18;
      uVar24 = *(uint *)(*(longlong *)
                          (local_108.IndexList.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar24 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 4);
      uVar19 = ~uVar24;
      if (-1 < (int)uVar24) {
        uVar19 = uVar24 + iVar14;
      }
      uVar24 = local_148.IndexList.CurBlock * 0x200 + local_148.IndexList.CurBlockUsed;
      iVar20 = uVar19 + 1;
      if (uVar18 == uVar24) {
        if (local_148.IndexList.CurBlockUsed == 0x200) {
          if (local_148.IndexList.CurBlock == local_148.IndexList.Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(&local_148.IndexList);
          }
          local_148.IndexList.CurBlock = local_148.IndexList.CurBlock + 1;
          local_148.IndexList.CurBlockUsed = 0;
        }
        *(int *)(*(longlong *)
                  (local_148.IndexList.Blocks.AllocatorInstance.Data +
                  (longlong)(int)local_148.IndexList.CurBlock * 8) +
                (longlong)(int)local_148.IndexList.CurBlockUsed * 4) = iVar20;
        local_148.IndexList.CurBlockUsed = local_148.IndexList.CurBlockUsed + 1;
      }
      else if (uVar24 < uVar18) {
        TDynamicVector<int,512>::Resize(&local_148.IndexList,uVar18);
        if (local_148.IndexList.CurBlockUsed == 0x200) {
          if (local_148.IndexList.CurBlock == local_148.IndexList.Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(&local_148.IndexList);
          }
          local_148.IndexList.CurBlock = local_148.IndexList.CurBlock + 1;
          local_148.IndexList.CurBlockUsed = 0;
        }
        *(int *)(*(longlong *)
                  (local_148.IndexList.Blocks.AllocatorInstance.Data +
                  (longlong)(int)local_148.IndexList.CurBlock * 8) +
                (longlong)(int)local_148.IndexList.CurBlockUsed * 4) = iVar20;
        local_148.IndexList.CurBlockUsed = local_148.IndexList.CurBlockUsed + 1;
      }
      else {
        *(int *)(*(longlong *)
                  (local_148.IndexList.Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8)
                + (ulonglong)(uVar18 & 0x1ff) * 4) = iVar20;
      }
      uVar18 = uVar18 + 1;
    } while ((int)(iVar25 + uVar18) < local_108.IIndicesCur);
  }
  iVar25 = local_148.IndexList.CurBlock * 0x200 + local_148.IndexList.CurBlockUsed;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->IndexList,iVar25,Default);
  uVar24 = 0;
  if (0 < iVar25) {
    lVar26 = 0;
    do {
      uVar5 = *(undefined4 *)
               (*(longlong *)
                 (local_148.IndexList.Blocks.AllocatorInstance.Data + (ulonglong)(uVar24 >> 9) * 8)
               + (ulonglong)(uVar24 & 0x1ff) * 4);
      uVar18 = 0;
      if ((int)uVar24 < (this->IndexList).ArrayNum) {
        uVar18 = ~uVar24 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar24 = uVar24 + 1;
      *(undefined4 *)((this->IndexList).AllocatorInstance.Data + lVar26 * 4) = uVar5;
      lVar26 = lVar26 + 1;
    } while (lVar26 < iVar25);
  }
  this->RootBoxIndex = local_110 + iVar14;
  TDynamicVector<int,512>::Empty(&local_108.IndexList,0);
  if (local_108.IndexList.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.IndexList.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512>::
  ~TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512>(&local_108.Boxes);
  TDynamicVector<int,512>::Empty(&local_148.IndexList,0);
  if (local_148.IndexList.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.IndexList.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512>::
  ~TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512>(&local_148.Boxes);
  return;
}

// FindNearestSegmentInternal @ 14cb8dc10

void __thiscall
UE::Geometry::FSegmentTree3::FindNearestSegmentInternal
          (FSegmentTree3 *this,int param_1,TVector<double> *param_2,double *param_3,int *param_4,
          FQueryOptions *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  double dVar13;
  ulonglong uVar14;
  bool bVar15;
  char cVar16;
  undefined8 uVar17;
  longlong *plVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  int iVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  uint local_res10 [2];
  
  while( true ) {
    uVar21 = 0;
    if (param_1 < (this->TreeBoxes).ArrayNum) {
      uVar21 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar9 = (this->TreeBoxes).AllocatorInstance.Data;
    iVar8 = (this->IndexList).ArrayNum;
    lVar23 = (longlong)param_1 * 0x38;
    uVar21 = *(uint *)(pFVar9 + lVar23);
    if ((int)uVar21 < this->SegmentsEnd) break;
    uVar20 = 0;
    if ((int)uVar21 < iVar8) {
      uVar20 = ~uVar21 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uVar21 = *(uint *)((this->IndexList).AllocatorInstance.Data + (longlong)(int)uVar21 * 4);
    if ((int)uVar21 < 0) {
      dVar25 = GetBoxDistanceSqr(this,~uVar21,param_2);
      param_1 = ~uVar21;
      if (*param_3 <= dVar25 && dVar25 != *param_3) {
        return;
      }
    }
    else {
      param_1 = uVar21 - 1;
      uVar20 = *(int *)(pFVar9 + lVar23) + 1;
      uVar21 = 0;
      if ((int)uVar20 < (this->IndexList).ArrayNum) {
        uVar21 = ~uVar20 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar21 = *(int *)((this->IndexList).AllocatorInstance.Data + (longlong)(int)uVar20 * 4) - 1;
      dVar25 = GetBoxDistanceSqr(this,param_1,param_2);
      dVar26 = GetBoxDistanceSqr(this,uVar21,param_2);
      if (dVar25 < dVar26) {
        if (*param_3 <= dVar25) {
          return;
        }
        FindNearestSegmentInternal(this,param_1,param_2,param_3,param_4,param_5);
        param_1 = uVar21;
        if (*param_3 <= dVar26) {
          return;
        }
      }
      else {
        if (*param_3 <= dVar26) {
          return;
        }
        FindNearestSegmentInternal(this,uVar21,param_2,param_3,param_4,param_5);
        if (*param_3 <= dVar25) {
          return;
        }
      }
    }
  }
  uVar20 = 0;
  if ((int)uVar21 < iVar8) {
    uVar20 = ~uVar21 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  iVar24 = 1;
  iVar8 = *(int *)((this->IndexList).AllocatorInstance.Data + (longlong)(int)uVar21 * 4);
  if (iVar8 < 1) {
    return;
  }
  uVar21 = (uint)__xmm_80000000000000008000000000000000;
  uVar14 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
  do {
    uVar22 = *(int *)(pFVar9 + lVar23) + iVar24;
    uVar20 = 0;
    if ((int)uVar22 < (this->IndexList).ArrayNum) {
      uVar20 = ~uVar22 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uVar20 = *(uint *)((this->IndexList).AllocatorInstance.Data + (longlong)(int)uVar22 * 4);
    if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14cb8df4e:
      uVar22 = 0;
      if ((int)uVar20 < (this->SegmentList).ArrayNum) {
        uVar22 = ~uVar20 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar11 = (this->SegmentList).AllocatorInstance.Data;
      dVar25 = (param_2->field0_0x0)._s_0.X;
      dVar26 = (param_2->field0_0x0)._s_0.Y;
      dVar27 = (param_2->field0_0x0)._s_0.Z;
      lVar19 = (longlong)(int)uVar20 * 0x40;
      dVar1 = *(double *)(pFVar11 + lVar19 + 8);
      dVar2 = *(double *)(pFVar11 + lVar19 + 0x10);
      dVar3 = *(double *)(pFVar11 + lVar19 + 0x18);
      dVar4 = *(double *)(pFVar11 + lVar19 + 0x20);
      dVar5 = *(double *)(pFVar11 + lVar19 + 0x28);
      dVar6 = *(double *)(pFVar11 + lVar19 + 0x30);
      dVar13 = (dVar26 - dVar2) * dVar5 + (dVar25 - dVar1) * dVar4 + (dVar27 - dVar3) * dVar6;
      dVar7 = *(double *)(pFVar11 + lVar19 + 0x38);
      if (dVar13 < dVar7) {
        if ((double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^ (uint)uVar14,SUB84(dVar7,0) ^ uVar21
                            ) < dVar13) {
          dVar25 = dVar25 - (dVar4 * dVar13 + dVar1);
          dVar26 = dVar26 - (dVar5 * dVar13 + dVar2);
          dVar27 = dVar27 - (dVar6 * dVar13 + dVar3);
          dVar25 = dVar25 * dVar25 + dVar26 * dVar26 + dVar27 * dVar27;
        }
        else {
          dVar26 = (dVar2 - dVar5 * dVar7) - dVar26;
          dVar25 = (dVar1 - dVar4 * dVar7) - dVar25;
          dVar27 = (dVar3 - dVar6 * dVar7) - dVar27;
          dVar25 = dVar25 * dVar25 + dVar26 * dVar26 + dVar27 * dVar27;
        }
      }
      else {
        dVar25 = (dVar4 * dVar7 + dVar1) - dVar25;
        dVar26 = (dVar5 * dVar7 + dVar2) - dVar26;
        dVar27 = (dVar6 * dVar7 + dVar3) - dVar27;
        dVar25 = dVar25 * dVar25 + dVar26 * dVar26 + dVar27 * dVar27;
      }
      if (dVar25 < *param_3) {
        *param_3 = dVar25;
        *param_4 = uVar20;
      }
    }
    else {
      local_res10[0] = uVar20;
      Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
      plVar10 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
      pcVar12 = *(code **)&param_5->TriangleFilterF;
      plVar18 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
      if (plVar10 != (longlong *)0x0) {
        plVar18 = plVar10;
      }
      uVar17 = (**(code **)(*plVar18 + 8))();
      cVar16 = (*pcVar12)(uVar17,local_res10);
      if (cVar16 != '\0') goto LAB_14cb8df4e;
    }
    iVar24 = iVar24 + 1;
    if (iVar8 < iVar24) {
      return;
    }
  } while( true );
}

// FindNearestVisibleSegmentHitByRay @ 14cb8ead0

bool __thiscall
UE::Geometry::FSegmentTree3::FindNearestVisibleSegmentHitByRay
          (FSegmentTree3 *this,TRay<double> *param_1,
          TFunctionRef<bool___cdecl(int,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
          *param_2,FSegment *param_3,FRayNearestSegmentInfo *param_4,FQueryOptions *param_5)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FRayNearestSegmentInfo *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  TFunctionRef<bool___cdecl(int,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
  local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pFVar4 = param_4;
  param_4._0_4_ = 0xffffffff;
  pFVar4->RayParam = 0.0;
  pFVar4->SegmentParam = 0.0;
  pFVar4->SegmentDist = 0.0;
  pFVar4->Metric = 0.0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  dVar1 = param_5->MaxDistance;
  uVar9 = SUB84(dVar1,0);
  uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (__real_47efffffe0000000 <= dVar1) {
    uVar9 = SUB84(__real_47efffffe0000000,0);
    uVar10 = (undefined4)((ulonglong)__real_47efffffe0000000 >> 0x20);
  }
  pFVar4->SegmentParam = 0.5;
  pFVar4->SegmentDist = 1.7976931348623157e+308;
  pFVar4->Metric = 1.7976931348623157e+308;
  pFVar4->RayParam = (double)CONCAT44(uVar10,uVar9);
  local_38._0_8_ = *(undefined8 *)param_2;
  local_38._8_8_ = *(undefined8 *)&param_2->field_0x8;
  FindNearestVisibleSegmentHitByRayInternal
            (this,this->RootBoxIndex,param_1,&local_38,(int *)&param_4,pFVar4,param_5);
  lVar8 = (longlong)(int)(uint)param_4;
  if ((uint)param_4 != 0xffffffff) {
    uVar7 = 0;
    if ((int)(uint)param_4 < (this->SegmentList).ArrayNum) {
      uVar7 = ~(uint)param_4 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    pFVar2 = (this->SegmentList).AllocatorInstance.Data;
    lVar8 = lVar8 * 0x40;
    dVar1 = *(double *)(pFVar2 + lVar8 + 8);
    *(undefined8 *)param_3 = *(undefined8 *)(pFVar2 + lVar8);
    (param_3->Segment).Center.field0_0x0._s_0.X = dVar1;
    dVar1 = *(double *)(pFVar2 + lVar8 + 0x10 + 8);
    (param_3->Segment).Center.field0_0x0._s_0.Y = *(double *)(pFVar2 + lVar8 + 0x10);
    (param_3->Segment).Center.field0_0x0._s_0.Z = dVar1;
    dVar1 = *(double *)(pFVar2 + lVar8 + 0x20 + 8);
    (param_3->Segment).Direction.field0_0x0._s_0.X = *(double *)(pFVar2 + lVar8 + 0x20);
    (param_3->Segment).Direction.field0_0x0._s_0.Y = dVar1;
    dVar1 = *(double *)(pFVar2 + lVar8 + 0x30 + 8);
    (param_3->Segment).Direction.field0_0x0._s_0.Z = *(double *)(pFVar2 + lVar8 + 0x30);
    (param_3->Segment).Extent = dVar1;
    return true;
  }
  return false;
}

// FindNearestVisibleSegmentHitByRayInternal @ 14cb8ec40

void __thiscall
UE::Geometry::FSegmentTree3::FindNearestVisibleSegmentHitByRayInternal
          (FSegmentTree3 *this,int param_1,TRay<double> *param_2,
          TFunctionRef<bool___cdecl(int,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
          *param_3,int *param_4,FRayNearestSegmentInfo *param_5,FQueryOptions *param_6)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  char cVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  TFunctionRef<bool___cdecl(int,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
  *pTVar15;
  int iVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  undefined4 local_res10 [2];
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  longlong local_e8;
  TFunctionRef<bool___cdecl(int,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
  local_e0;
  TFunctionRef<bool___cdecl(int,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
  local_d0;
  TFunctionRef<bool___cdecl(int,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
  local_c0 [8];
  
  uVar13 = 0;
  if (param_1 < (this->TreeBoxes).ArrayNum) {
    uVar13 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (this->TreeBoxes).AllocatorInstance.Data;
  iVar1 = (this->IndexList).ArrayNum;
  lVar14 = (longlong)param_1 * 0x38;
  uVar13 = *(uint *)(pFVar2 + lVar14);
  if ((int)uVar13 < this->SegmentsEnd) {
    uVar12 = 0;
    if ((int)uVar13 < iVar1) {
      uVar12 = ~uVar13 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    dVar19 = __real_3fe0000000000000;
    iVar16 = 1;
    iVar1 = *(int *)((this->IndexList).AllocatorInstance.Data + (longlong)(int)uVar13 * 4);
    if (0 < iVar1) {
      do {
        uVar12 = *(int *)(pFVar2 + lVar14) + iVar16;
        uVar13 = 0;
        if ((int)uVar12 < (this->IndexList).ArrayNum) {
          uVar13 = ~uVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar13 = *(uint *)((this->IndexList).AllocatorInstance.Data + (longlong)(int)uVar12 * 4);
        uVar12 = 0;
        if ((int)uVar13 < (this->SegmentList).ArrayNum) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->SegmentList).AllocatorInstance.Data;
        lVar11 = (longlong)(int)uVar13 * 0x40;
        local_e8 = lVar11;
        dVar18 = TDistRay3Segment3<double>::SquaredDistance
                           (param_2,(TSegment3<double> *)(pFVar3 + lVar11 + 8),&local_120,&local_128
                           );
        dVar20 = local_120;
        dVar8 = local_128;
        uVar12 = 0;
        if ((int)uVar13 < (this->SegmentList).ArrayNum) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        local_100 = local_120 * (param_2->Direction).field0_0x0._s_0.X +
                    (param_2->Origin).field0_0x0._s_0.X;
        local_f8 = local_120 * (param_2->Direction).field0_0x0._s_0.Y +
                   (param_2->Origin).field0_0x0._s_0.Y;
        local_f0 = local_120 * (param_2->Direction).field0_0x0._s_0.Z +
                   (param_2->Origin).field0_0x0._s_0.Z;
        local_110 = local_128 * *(double *)(pFVar3 + lVar11 + 0x28) +
                    *(double *)(pFVar3 + lVar11 + 0x10);
        local_108 = local_128 * *(double *)(pFVar3 + lVar11 + 0x30) +
                    *(double *)(pFVar3 + lVar11 + 0x18);
        local_118 = local_128 * *(double *)(pFVar3 + lVar11 + 0x20) +
                    *(double *)(pFVar3 + lVar11 + 8);
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_res10[0] = *(undefined4 *)((this->SegmentList).AllocatorInstance.Data + local_e8);
        cVar10 = (**(code **)param_3)
                           (*(undefined8 *)&param_3->field_0x8,local_res10,&local_100,&local_118);
        if (cVar10 != '\0') {
          dVar21 = local_f0 - (param_2->Origin).field0_0x0._s_0.Z;
          dVar7 = local_100 - (param_2->Origin).field0_0x0._s_0.X;
          dVar26 = local_f8 - (param_2->Origin).field0_0x0._s_0.Y;
          dVar6 = local_118 - (param_2->Origin).field0_0x0._s_0.X;
          dVar5 = local_110 - (param_2->Origin).field0_0x0._s_0.Y;
          dVar25 = local_108 - (param_2->Origin).field0_0x0._s_0.Z;
          auVar23._0_8_ = dVar21 * dVar5;
          auVar23._8_8_ = 0;
          dVar22 = dVar26 * dVar25 - auVar23._0_8_;
          dVar21 = dVar21 * dVar6 - dVar7 * dVar25;
          dVar5 = dVar7 * dVar5 - dVar26 * dVar6;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = dVar22 * dVar22 + dVar21 * dVar21 + dVar5 * dVar5;
          auVar24 = sqrtpd(auVar23,auVar24);
          dVar22 = auVar24._0_8_ * dVar19;
          if (dVar22 < param_5->Metric) {
            *param_4 = uVar13;
            param_5->RayParam = dVar20;
            param_5->SegmentDist = SQRT(dVar18);
            param_5->SegmentParam = dVar8;
            param_5->Metric = dVar22;
          }
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 <= iVar1);
    }
  }
  else {
    uVar12 = 0;
    if ((int)uVar13 < iVar1) {
      uVar12 = ~uVar13 >> 0x1f;
    }
    dVar19 = param_5->SegmentDist + param_5->SegmentDist;
    if (__real_47efffffe0000000 <= dVar19) {
      dVar19 = __real_47efffffe0000000;
    }
    if ((uVar12 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar13 = *(uint *)((this->IndexList).AllocatorInstance.Data + (longlong)(int)uVar13 * 4);
    if ((int)uVar13 < 0) {
      uVar13 = ~uVar13;
      dVar19 = GetRayBoxIntersectionParam(this,uVar13,param_2,dVar19);
      if (__real_7fefffffffffffff <= dVar19) {
        return;
      }
      local_e0._0_8_ = *(undefined8 *)param_3;
      pTVar15 = &local_e0;
      local_e0._8_8_ = *(undefined8 *)&param_3->field_0x8;
    }
    else {
      uVar17 = *(int *)(pFVar2 + lVar14) + 1;
      uVar12 = 0;
      if ((int)uVar17 < (this->IndexList).ArrayNum) {
        uVar12 = ~uVar17 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar1 = *(int *)((this->IndexList).AllocatorInstance.Data + (longlong)(int)uVar17 * 4);
      dVar20 = GetRayBoxIntersectionParam(this,uVar13 - 1,param_2,dVar19);
      dVar8 = __real_7fefffffffffffff;
      if (dVar20 < __real_7fefffffffffffff) {
        local_d0._0_8_ = *(undefined8 *)param_3;
        local_d0._8_8_ = *(undefined8 *)&param_3->field_0x8;
        FindNearestVisibleSegmentHitByRayInternal
                  (this,uVar13 - 1,param_2,&local_d0,param_4,param_5,param_6);
      }
      dVar19 = GetRayBoxIntersectionParam(this,iVar1 + -1,param_2,dVar19);
      if (dVar8 <= dVar19) {
        return;
      }
      local_c0[0]._0_8_ = *(undefined8 *)param_3;
      pTVar15 = local_c0;
      uVar13 = iVar1 - 1;
      local_c0[0]._8_8_ = *(undefined8 *)&param_3->field_0x8;
    }
    FindNearestVisibleSegmentHitByRayInternal(this,uVar13,param_2,pTVar15,param_4,param_5,param_6);
  }
  return;
}

// GetBoxDistanceSqr @ 14cb94880

double __thiscall
UE::Geometry::FSegmentTree3::GetBoxDistanceSqr
          (FSegmentTree3 *this,int param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  uVar4 = 0;
  if (param_1 < (this->TreeBoxes).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      dVar6 = (double)(*pcVar2)();
      return dVar6;
    }
  }
  pFVar1 = (this->TreeBoxes).AllocatorInstance.Data;
  lVar5 = (longlong)param_1 * 0x38;
  dVar6 = (param_2->field0_0x0)._s_0.Y - *(double *)(pFVar1 + lVar5 + 0x10);
  dVar8 = (param_2->field0_0x0)._s_0.X - *(double *)(pFVar1 + lVar5 + 8);
  dVar7 = (param_2->field0_0x0)._s_0.Z - *(double *)(pFVar1 + lVar5 + 0x18);
  dVar6 = (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          *(double *)(pFVar1 + lVar5 + 0x28);
  dVar8 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          *(double *)(pFVar1 + lVar5 + 0x20);
  dVar7 = (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          *(double *)(pFVar1 + lVar5 + 0x30);
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  if (dVar8 <= 0.0) {
    dVar8 = 0.0;
  }
  if (dVar7 <= 0.0) {
    dVar7 = 0.0;
  }
  return dVar6 * dVar6 + dVar8 * dVar8 + dVar7 * dVar7;
}

// GetRayBoxIntersectionParam @ 14cb99680

double __thiscall
UE::Geometry::FSegmentTree3::GetRayBoxIntersectionParam
          (FSegmentTree3 *this,int param_1,TRay<double> *param_2,double param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  int local_res8 [2];
  EIntersectionType local_res10 [2];
  double local_res18;
  double local_res20;
  TVector<double> local_98;
  TVector<double> local_80;
  TVector<double>_u_0 local_68;
  double local_50;
  double local_48;
  double local_40;
  
  uVar4 = 0;
  if (param_1 < (this->TreeBoxes).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    dVar6 = (double)(*pcVar2)();
    return dVar6;
  }
  dVar7 = __real_7fefffffffffffff;
  pFVar1 = (this->TreeBoxes).AllocatorInstance.Data;
  dVar6 = param_3 + this->BoxEps;
  lVar5 = (longlong)param_1 * 0x38;
  local_res10[0] = Empty;
  local_68._s_0.X = *(double *)(pFVar1 + lVar5 + 8) - (dVar6 + *(double *)(pFVar1 + lVar5 + 0x20));
  local_68._s_0.Y =
       *(double *)(pFVar1 + lVar5 + 0x10) - (dVar6 + *(double *)(pFVar1 + lVar5 + 0x28));
  local_48 = *(double *)(pFVar1 + lVar5 + 0x10) + dVar6 + *(double *)(pFVar1 + lVar5 + 0x28);
  local_res20 = __real_7fefffffffffffff;
  local_50 = *(double *)(pFVar1 + lVar5 + 8) + dVar6 + *(double *)(pFVar1 + lVar5 + 0x20);
  local_68._s_0.Z =
       *(double *)(pFVar1 + lVar5 + 0x18) - (dVar6 + *(double *)(pFVar1 + lVar5 + 0x30));
  local_40 = *(double *)(pFVar1 + lVar5 + 0x18) + dVar6 + *(double *)(pFVar1 + lVar5 + 0x30);
  local_res18 = 0.0;
  TIntrRay3AxisAlignedBox3<double>::DoClipping
            (&local_res18,&local_res20,&param_2->Origin,&param_2->Direction,
             (TAxisAlignedBox3<double> *)&local_68._s_0,true,local_res8,&local_80,&local_98,
             local_res10);
  if (local_res10[0] != Empty) {
    dVar7 = local_res18;
  }
  return dVar7;
}

// SplitSegmentSetMidpoints @ 14cbb3760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UE::Geometry::FSegmentTree3::SplitSegmentSetMidpoints
          (FSegmentTree3 *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,int param_3,
          int param_4,int param_5,int param_6,FBoxesSet *param_7,FBoxesSet *param_8,
          TAxisAlignedBox3<double> *param_9)

{
  uint *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  double dVar21;
  FBoxesSet *pFVar22;
  FBoxesSet *this_00;
  bool bVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  double *pdVar27;
  longlong lVar28;
  undefined8 uVar29;
  longlong lVar30;
  longlong *plVar31;
  uint uVar32;
  FScriptContainerElement *pFVar33;
  uint uVar34;
  longlong lVar35;
  int iVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  int *piVar39;
  longlong lVar40;
  uint uVar41;
  uint uVar42;
  int iVar43;
  ulonglong uVar44;
  TAxisAlignedBox3<double> *pTVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  int local_1c8;
  longlong local_1c0;
  int local_1a0 [2];
  int local_198;
  int local_194;
  double local_190;
  double dStack_188;
  double local_180;
  double dStack_178;
  double local_170;
  double dStack_168;
  double local_160;
  ulonglong local_158;
  longlong local_150;
  FScriptContainerElement *local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  TVector<double>_u_0 local_e0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  
  pTVar45 = param_9;
  pFVar22 = param_7;
  iVar24 = param_4;
  dVar21 = _UNK_150a9e6d8;
  dVar55 = ___xmm_ffefffffffffffff7fefffffffffffff;
  dVar16 = _UNK_150a9e648;
  dVar4 = ___xmm_7fefffffffffffff7fefffffffffffff;
  dVar54 = _UNK_1508ffb58;
  dVar3 = ___xmm_ffefffffffffffffffefffffffffffff;
  uVar37 = (ulonglong)param_3;
  if (param_1->ArrayNum < 1) {
    pdVar27 = &local_110;
    local_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    local_190 = ___xmm_7fefffffffffffff7fefffffffffffff;
    dStack_188 = _UNK_150a9e648;
    pdVar27 = &local_190;
    local_180 = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_178 = _UNK_150a9e6d8;
    local_170 = ___xmm_ffefffffffffffffffefffffffffffff;
    dStack_168 = _UNK_1508ffb58;
  }
  dVar2 = pdVar27[1];
  dVar53 = pdVar27[2];
  dVar17 = pdVar27[3];
  (param_9->Min).field0_0x0._s_0.X = *pdVar27;
  (param_9->Min).field0_0x0._s_0.Y = dVar2;
  dVar2 = pdVar27[4];
  dVar52 = pdVar27[5];
  (param_9->Min).field0_0x0._s_0.Z = dVar53;
  (param_9->Max).field0_0x0._s_0.X = dVar17;
  (param_9->Max).field0_0x0._s_0.Y = dVar2;
  (param_9->Max).field0_0x0._s_0.Z = dVar52;
  if (param_4 <= param_6) {
    param_9._0_4_ = param_7->IIndicesCur;
    uVar25 = param_7->IBoxCur;
    param_7->IBoxCur = uVar25 + 1;
    param_7->IIndicesCur = (uint)param_9 + 1;
    param_6 = uVar25;
    TDynamicVector<int,512>::InsertAt(&param_7->IndexList,&param_4,(uint)param_9);
    if (0 < iVar24) {
      lVar35 = uVar37 * 4;
      uVar42 = param_3;
      do {
        uVar25 = 0;
        if ((int)uVar42 < param_1->ArrayNum) {
          uVar25 = ~uVar42 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar7 = (code *)swi(3);
          iVar24 = (*pcVar7)();
          return iVar24;
        }
        uVar25 = pFVar22->IIndicesCur;
        uVar34 = *(uint *)((param_1->AllocatorInstance).Data + lVar35);
        pFVar22->IIndicesCur = uVar25 + 1;
        uVar32 = (pFVar22->IndexList).CurBlock;
        uVar26 = (pFVar22->IndexList).CurBlockUsed;
        uVar41 = uVar32 * 0x200 + uVar26;
        if (uVar25 == uVar41) {
          if (uVar26 == 0x200) {
            if (uVar32 == (pFVar22->IndexList).Blocks.ArrayNum - 1U) {
              TDynamicVector<int,512>::AddAllocatedBlock(&pFVar22->IndexList);
            }
            (pFVar22->IndexList).CurBlock = (pFVar22->IndexList).CurBlock + 1;
            uVar32 = (pFVar22->IndexList).CurBlock;
            (pFVar22->IndexList).CurBlockUsed = 0;
          }
          *(uint *)(*(longlong *)
                     ((pFVar22->IndexList).Blocks.AllocatorInstance.Data + (longlong)(int)uVar32 * 8
                     ) + (longlong)(int)(pFVar22->IndexList).CurBlockUsed * 4) = uVar34;
          puVar1 = &(pFVar22->IndexList).CurBlockUsed;
          *puVar1 = *puVar1 + 1;
        }
        else if (uVar41 < uVar25) {
          TDynamicVector<int,512>::Resize(&pFVar22->IndexList,uVar25);
          uVar25 = (pFVar22->IndexList).CurBlockUsed;
          if (uVar25 == 0x200) {
            if ((pFVar22->IndexList).CurBlock == (pFVar22->IndexList).Blocks.ArrayNum - 1U) {
              TDynamicVector<int,512>::AddAllocatedBlock(&pFVar22->IndexList);
            }
            (pFVar22->IndexList).CurBlock = (pFVar22->IndexList).CurBlock + 1;
            uVar25 = 0;
            (pFVar22->IndexList).CurBlockUsed = 0;
          }
          *(uint *)(*(longlong *)
                     ((pFVar22->IndexList).Blocks.AllocatorInstance.Data +
                     (longlong)(int)(pFVar22->IndexList).CurBlock * 8) + (longlong)(int)uVar25 * 4)
               = uVar34;
          puVar1 = &(pFVar22->IndexList).CurBlockUsed;
          *puVar1 = *puVar1 + 1;
        }
        else {
          *(uint *)(*(longlong *)
                     ((pFVar22->IndexList).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar25 >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 4) = uVar34;
        }
        uVar25 = 0;
        if ((int)uVar34 < (this->SegmentList).ArrayNum) {
          uVar25 = ~uVar34 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar7 = (code *)swi(3);
          iVar24 = (*pcVar7)();
          return iVar24;
        }
        local_140 = dVar4;
        dStack_138 = dVar16;
        lVar28 = 3;
        pFVar33 = (this->SegmentList).AllocatorInstance.Data + (longlong)(int)uVar34 * 0x40 + 8;
        lVar30 = (longlong)&local_140 - (longlong)pFVar33;
        lVar40 = (longlong)&dStack_128 - (longlong)pFVar33;
        local_130 = dVar55;
        dStack_128 = dVar21;
        dVar2 = *(double *)(pFVar33 + 0x30);
        local_120 = dVar3;
        dStack_118 = dVar54;
        do {
          dVar52 = *(double *)pFVar33 + dVar2 * *(double *)(pFVar33 + 0x18);
          dVar53 = *(double *)pFVar33 - dVar2 * *(double *)(pFVar33 + 0x18);
          dVar17 = dVar52;
          if (dVar53 <= dVar52) {
            dVar17 = dVar53;
          }
          if (dVar52 <= dVar53) {
            dVar52 = dVar53;
          }
          *(double *)(pFVar33 + lVar30) = dVar17;
          *(double *)(pFVar33 + lVar40) = dVar52;
          pFVar33 = pFVar33 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        uVar46 = SUB84(local_140,0);
        uVar48 = (undefined4)((ulonglong)local_140 >> 0x20);
        uVar50 = SUB84(dStack_138,0);
        uVar51 = (undefined4)((ulonglong)dStack_138 >> 0x20);
        uVar42 = uVar42 + 1;
        uVar47 = SUB84(local_130,0);
        uVar49 = (undefined4)((ulonglong)local_130 >> 0x20);
        lVar35 = lVar35 + 4;
        dVar2 = *(double *)&(pTVar45->Min).field0_0x0;
        if (dVar2 <= local_140) {
          uVar46 = SUB84(dVar2,0);
          uVar48 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        dVar2 = *(double *)((longlong)&(pTVar45->Min).field0_0x0 + 8);
        if (dVar2 <= dStack_138) {
          uVar50 = SUB84(dVar2,0);
          uVar51 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        (pTVar45->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar48,uVar46);
        (pTVar45->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar51,uVar50);
        dVar2 = *(double *)((longlong)&(pTVar45->Min).field0_0x0 + 0x10);
        if (dVar2 <= local_130) {
          uVar47 = SUB84(dVar2,0);
          uVar49 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        uVar46 = SUB84(local_120,0);
        uVar48 = (undefined4)((ulonglong)local_120 >> 0x20);
        uVar50 = SUB84(dStack_118,0);
        uVar51 = (undefined4)((ulonglong)dStack_118 >> 0x20);
        dVar2 = (pTVar45->Max).field0_0x0._s_0.X;
        dVar53 = dStack_128;
        if (dStack_128 <= dVar2) {
          dVar53 = dVar2;
        }
        (pTVar45->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar49,uVar47);
        dVar2 = *(double *)((longlong)&(pTVar45->Max).field0_0x0 + 0x10);
        if (dStack_118 <= dVar2) {
          uVar50 = SUB84(dVar2,0);
          uVar51 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        (pTVar45->Max).field0_0x0._s_0.X = dVar53;
        dVar2 = *(double *)((longlong)&(pTVar45->Max).field0_0x0 + 8);
        if (local_120 <= dVar2) {
          uVar46 = SUB84(dVar2,0);
          uVar48 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        (pTVar45->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar51,uVar50);
        (pTVar45->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar48,uVar46);
        uVar25 = param_6;
      } while ((int)(uVar42 - param_3) < iVar24);
    }
    dVar3 = (pTVar45->Max).field0_0x0._s_0.X;
    dVar54 = (pTVar45->Max).field0_0x0._s_0.Z;
    dVar4 = (pTVar45->Max).field0_0x0._s_0.Y;
    uVar34 = (pFVar22->Boxes).CurBlock;
    uVar42 = (pFVar22->Boxes).CurBlockUsed;
    dStack_188 = (dVar3 + (pTVar45->Min).field0_0x0._s_0.X) * __real_3fe0000000000000;
    uVar32 = uVar34 * 0x200 + uVar42;
    local_190 = (double)CONCAT44(local_190._4_4_,(uint)param_9);
    local_160 = (dVar54 - (pTVar45->Min).field0_0x0._s_0.Z) * __real_3fe0000000000000;
    dVar16 = (dVar4 + (pTVar45->Min).field0_0x0._s_0.Y) * __real_3fe0000000000000;
    dVar55 = (dVar54 + (pTVar45->Min).field0_0x0._s_0.Z) * __real_3fe0000000000000;
    dVar3 = (dVar3 - (pTVar45->Min).field0_0x0._s_0.X) * __real_3fe0000000000000;
    dVar54 = (dVar4 - (pTVar45->Min).field0_0x0._s_0.Y) * __real_3fe0000000000000;
    uVar48 = SUB84(dVar54,0);
    uVar49 = (undefined4)((ulonglong)dVar54 >> 0x20);
    uVar46 = SUB84(dVar55,0);
    uVar47 = (undefined4)((ulonglong)dVar55 >> 0x20);
    if (uVar25 == uVar32) {
      if (uVar42 == 0x200) {
        if (uVar34 == (pFVar22->Boxes).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512>::AddAllocatedBlock
                    (&pFVar22->Boxes);
        }
        (pFVar22->Boxes).CurBlock = (pFVar22->Boxes).CurBlock + 1;
        uVar42 = 0;
        uVar34 = (pFVar22->Boxes).CurBlock;
        (pFVar22->Boxes).CurBlockUsed = 0;
      }
    }
    else {
      if (uVar25 <= uVar32) {
        lVar28 = (ulonglong)(uVar25 & 0x1ff) * 0x38;
        lVar35 = *(longlong *)
                  ((pFVar22->Boxes).Blocks.AllocatorInstance.Data + (ulonglong)(uVar25 >> 9) * 8);
        *(double *)(lVar35 + lVar28) = local_190;
        ((double *)(lVar35 + lVar28))[1] = dStack_188;
        auVar13._8_4_ = uVar46;
        auVar13._0_8_ = dVar16;
        auVar13._12_4_ = uVar47;
        *(undefined1 (*) [16])(lVar35 + 0x10 + lVar28) = auVar13;
        auVar9._8_4_ = uVar48;
        auVar9._0_8_ = dVar3;
        auVar9._12_4_ = uVar49;
        *(undefined1 (*) [16])(lVar35 + 0x20 + lVar28) = auVar9;
        *(double *)(lVar35 + 0x30 + lVar28) = local_160;
        return ~uVar25;
      }
      TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512>::Resize(&pFVar22->Boxes,uVar25);
      uVar42 = (pFVar22->Boxes).CurBlockUsed;
      if (uVar42 == 0x200) {
        if ((pFVar22->Boxes).CurBlock == (pFVar22->Boxes).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512>::AddAllocatedBlock
                    (&pFVar22->Boxes);
        }
        (pFVar22->Boxes).CurBlock = (pFVar22->Boxes).CurBlock + 1;
        (pFVar22->Boxes).CurBlockUsed = 0;
        uVar42 = 0;
      }
      uVar34 = (pFVar22->Boxes).CurBlock;
    }
    lVar28 = (longlong)(int)uVar42 * 0x38;
    lVar35 = *(longlong *)
              ((pFVar22->Boxes).Blocks.AllocatorInstance.Data + (longlong)(int)uVar34 * 8);
    *(double *)(lVar35 + lVar28) = local_190;
    ((double *)(lVar35 + lVar28))[1] = dStack_188;
    auVar12._8_4_ = uVar46;
    auVar12._0_8_ = dVar16;
    auVar12._12_4_ = uVar47;
    *(undefined1 (*) [16])(lVar35 + 0x10 + lVar28) = auVar12;
    auVar8._8_4_ = uVar48;
    auVar8._0_8_ = dVar3;
    auVar8._12_4_ = uVar49;
    *(undefined1 (*) [16])(lVar35 + 0x20 + lVar28) = auVar8;
    *(double *)(lVar35 + 0x30 + lVar28) = local_160;
    puVar1 = &(pFVar22->Boxes).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
    return ~uVar25;
  }
  local_1a0[0] = param_5;
  Core::Private::Function::CheckCallable(*(void **)&this->GetSplitAxis);
  plVar5 = *(longlong **)&(this->GetSplitAxis).field_0x28;
  pcVar7 = *(code **)&this->GetSplitAxis;
  plVar31 = (longlong *)&(this->GetSplitAxis).field_0x10;
  if (plVar5 != (longlong *)0x0) {
    plVar31 = plVar5;
  }
  uVar29 = (**(code **)(*plVar31 + 8))();
  uVar48 = (undefined4)__real_7fefffffffffffff;
  uVar49 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  uVar46 = (undefined4)__real_ffefffffffffffff;
  uVar47 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
  uVar25 = (*pcVar7)(uVar29,local_1a0,pTVar45);
  iVar43 = 0;
  uVar44 = (ulonglong)(int)uVar25;
  uVar42 = 0;
  uVar38 = uVar37;
  local_158 = uVar44;
  if (0 < iVar24) {
    lVar35 = (uVar44 + uVar37 * 3) * 8;
    uVar34 = param_3;
    pTVar45 = param_9;
    do {
      uVar32 = uVar42;
      if ((int)uVar34 < param_2->ArrayNum) {
        uVar32 = ~uVar34 >> 0x1f;
      }
      param_9 = pTVar45;
      if (uVar32 == 0) {
        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar23) {
          pcVar7 = (code *)swi(3);
          iVar24 = (*pcVar7)();
          return iVar24;
        }
      }
      pFVar33 = (param_2->AllocatorInstance).Data;
      pTVar45 = param_9;
      if (2 < uVar44) {
        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7a2,L"");
        pTVar45 = param_9;
        if (bVar23) {
          pcVar7 = (code *)swi(3);
          iVar24 = (*pcVar7)();
          return iVar24;
        }
      }
      dVar2 = *(double *)(pFVar33 + lVar35);
      if (dVar2 <= (double)CONCAT44(uVar49,uVar48)) {
        uVar48 = SUB84(dVar2,0);
        uVar49 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      dVar2 = *(double *)(pFVar33 + lVar35);
      if ((double)CONCAT44(uVar47,uVar46) <= dVar2) {
        uVar46 = SUB84(dVar2,0);
        uVar47 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      uVar34 = uVar34 + 1;
      lVar35 = lVar35 + 0x18;
    } while ((int)(uVar34 - param_3) < iVar24);
    uVar38 = (ulonglong)(uint)param_3;
    param_9 = pTVar45;
  }
  dVar53 = __real_3fe0000000000000;
  dVar2 = ((double)CONCAT44(uVar47,uVar46) + (double)CONCAT44(uVar49,uVar48)) *
          __real_3fe0000000000000;
  if ((double)CONCAT44(uVar47,uVar46) - (double)CONCAT44(uVar49,uVar48) <= __real_3e45798ee2308c3a)
  {
    iVar43 = iVar24 / 2;
    iVar24 = iVar24 - iVar43;
  }
  else {
    local_1c8 = iVar24 + -1;
    local_150 = (longlong)local_1c8;
    pTVar45 = param_9;
    if (0 < local_1c8) {
      local_1c0 = 0;
      iVar43 = 0;
      while( true ) {
        uVar44 = local_158;
        uVar34 = iVar43 + (int)uVar38;
        lVar35 = ((int)uVar38 + local_1c0) * 0x18;
        while( true ) {
          uVar32 = uVar42;
          if ((int)uVar34 < param_2->ArrayNum) {
            uVar32 = ~uVar34 >> 0x1f;
          }
          if (uVar32 == 0) {
            bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar23) {
              pcVar7 = (code *)swi(3);
              iVar24 = (*pcVar7)();
              return iVar24;
            }
          }
          pFVar33 = (param_2->AllocatorInstance).Data;
          if (2 < uVar25) {
            bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                ,0x7a2,L"");
            if (bVar23) {
              pcVar7 = (code *)swi(3);
              iVar24 = (*pcVar7)();
              return iVar24;
            }
          }
          if (dVar2 < *(double *)(pFVar33 + uVar44 * 8 + lVar35)) break;
          local_1c0 = local_1c0 + 1;
          iVar43 = iVar43 + 1;
          uVar34 = uVar34 + 1;
          lVar35 = lVar35 + 0x18;
        }
        uVar34 = param_3 + local_1c8;
        lVar28 = (uVar37 + local_150) * 0x18;
        lVar35 = local_150;
        pTVar45 = param_9;
        while( true ) {
          uVar26 = 0;
          uVar32 = uVar26;
          if ((int)uVar34 < param_2->ArrayNum) {
            uVar32 = ~uVar34 >> 0x1f;
          }
          param_9 = pTVar45;
          if (uVar32 == 0) {
            bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar23) {
              pcVar7 = (code *)swi(3);
              iVar24 = (*pcVar7)();
              return iVar24;
            }
          }
          pFVar33 = (param_2->AllocatorInstance).Data;
          pTVar45 = param_9;
          if (2 < uVar25) {
            bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                ,0x7a2,L"");
            pTVar45 = param_9;
            if (bVar23) {
              pcVar7 = (code *)swi(3);
              iVar24 = (*pcVar7)();
              return iVar24;
            }
          }
          if (*(double *)(pFVar33 + local_158 * 8 + lVar28) <= dVar2) break;
          local_1c8 = local_1c8 + -1;
          uVar34 = uVar34 - 1;
          lVar35 = lVar35 + -1;
          lVar28 = lVar28 + -0x18;
        }
        iVar24 = param_4;
        local_150 = lVar35;
        if (lVar35 <= local_1c0) break;
        lVar28 = uVar37 + lVar35;
        uVar32 = (uint)~(param_3 + local_1c8) >> 0x1f;
        uVar34 = uVar26;
        if (param_3 + local_1c8 < param_2->ArrayNum) {
          uVar34 = uVar32;
        }
        param_9 = pTVar45;
        if (uVar34 == 0) {
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar23) {
            pcVar7 = (code *)swi(3);
            iVar24 = (*pcVar7)();
            return iVar24;
          }
        }
        local_148 = (param_2->AllocatorInstance).Data;
        uVar41 = (uint)~(param_3 + iVar43) >> 0x1f;
        uVar34 = uVar26;
        if (param_3 + iVar43 < param_2->ArrayNum) {
          uVar34 = uVar41;
        }
        if (uVar34 == 0) {
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar23) {
            pcVar7 = (code *)swi(3);
            iVar24 = (*pcVar7)();
            return iVar24;
          }
        }
        uVar18 = *(undefined8 *)(local_148 + lVar28 * 0x18 + 8);
        lVar30 = uVar37 + local_1c0;
        pFVar33 = (param_2->AllocatorInstance).Data;
        uVar19 = *(undefined8 *)(pFVar33 + lVar30 * 0x18);
        uVar20 = *(undefined8 *)(pFVar33 + lVar30 * 0x18 + 8);
        uVar29 = *(undefined8 *)(pFVar33 + lVar30 * 0x18 + 0x10);
        *(undefined8 *)(pFVar33 + lVar30 * 0x18) = *(undefined8 *)(local_148 + lVar28 * 0x18);
        *(undefined8 *)(pFVar33 + lVar30 * 0x18 + 8) = uVar18;
        *(undefined8 *)(pFVar33 + lVar30 * 0x18 + 0x10) =
             *(undefined8 *)(local_148 + lVar28 * 0x18 + 0x10);
        *(undefined8 *)(local_148 + lVar28 * 0x18) = uVar19;
        *(undefined8 *)(local_148 + lVar28 * 0x18 + 8) = uVar20;
        *(undefined8 *)(local_148 + lVar28 * 0x18 + 0x10) = uVar29;
        if (local_1c8 + param_3 < param_1->ArrayNum) {
          uVar26 = uVar32;
        }
        if (uVar26 == 0) {
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar23) {
            pcVar7 = (code *)swi(3);
            iVar24 = (*pcVar7)();
            return iVar24;
          }
        }
        pFVar33 = (param_1->AllocatorInstance).Data;
        uVar34 = uVar42;
        if (param_3 + iVar43 < param_1->ArrayNum) {
          uVar34 = uVar41;
        }
        uVar38 = (ulonglong)(uint)param_3;
        if (uVar34 == 0) {
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar23) {
            pcVar7 = (code *)swi(3);
            iVar24 = (*pcVar7)();
            return iVar24;
          }
        }
        pFVar6 = (param_1->AllocatorInstance).Data;
        lVar28 = param_3 + local_1c0;
        uVar46 = *(undefined4 *)(pFVar6 + lVar28 * 4);
        lVar35 = param_3 + lVar35;
        *(undefined4 *)(pFVar6 + lVar28 * 4) = *(undefined4 *)(pFVar33 + lVar35 * 4);
        *(undefined4 *)(pFVar33 + lVar35 * 4) = uVar46;
      }
    }
    iVar24 = iVar24 - iVar43;
    param_9 = pTVar45;
  }
  pFVar22 = param_7;
  iVar36 = param_5 + 1;
  local_e0._0_8_ = dVar4;
  local_e0._s_0.Y = dVar16;
  local_e0._s_0.Z = dVar55;
  dStack_c8 = dVar21;
  local_c0 = dVar3;
  dStack_b8 = dVar54;
  local_198 = SplitSegmentSetMidpoints
                        (this,param_1,param_2,param_3,iVar43,iVar36,param_6,param_7,param_8,pTVar45)
  ;
  this_00 = param_8;
  local_194 = SplitSegmentSetMidpoints
                        (this,param_1,param_2,param_3 + iVar43,iVar24,iVar36,param_6,pFVar22,param_8
                         ,(TAxisAlignedBox3<double> *)&local_e0._s_0);
  uVar46 = SUB84(local_e0._s_0.X,0);
  uVar48 = (undefined4)((ulonglong)local_e0._0_8_ >> 0x20);
  uVar50 = SUB84(local_e0._s_0.Y,0);
  uVar51 = (undefined4)((ulonglong)local_e0._8_8_ >> 0x20);
  uVar47 = SUB84(local_e0._s_0.Z,0);
  uVar49 = (undefined4)((ulonglong)local_e0._16_8_ >> 0x20);
  dVar3 = *(double *)&(pTVar45->Min).field0_0x0;
  if (dVar3 <= local_e0._s_0.X) {
    uVar46 = SUB84(dVar3,0);
    uVar48 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  dVar3 = *(double *)((longlong)&(pTVar45->Min).field0_0x0 + 8);
  if (dVar3 <= local_e0._s_0.Y) {
    uVar50 = SUB84(dVar3,0);
    uVar51 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  (pTVar45->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar48,uVar46);
  dVar3 = *(double *)((longlong)&(pTVar45->Min).field0_0x0 + 0x10);
  if (dVar3 <= local_e0._s_0.Z) {
    uVar47 = SUB84(dVar3,0);
    uVar49 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  (pTVar45->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar51,uVar50);
  uVar46 = SUB84(local_c0,0);
  uVar48 = (undefined4)((ulonglong)local_c0 >> 0x20);
  uVar50 = SUB84(dStack_b8,0);
  uVar51 = (undefined4)((ulonglong)dStack_b8 >> 0x20);
  dVar3 = (pTVar45->Max).field0_0x0._s_0.X;
  dVar54 = dStack_c8;
  if (dStack_c8 <= dVar3) {
    dVar54 = dVar3;
  }
  (pTVar45->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar49,uVar47);
  dVar3 = *(double *)((longlong)&(pTVar45->Max).field0_0x0 + 8);
  if (local_c0 <= dVar3) {
    uVar46 = SUB84(dVar3,0);
    uVar48 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  dVar3 = *(double *)((longlong)&(pTVar45->Max).field0_0x0 + 0x10);
  if (dStack_b8 <= dVar3) {
    uVar50 = SUB84(dVar3,0);
    uVar51 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  (pTVar45->Max).field0_0x0._s_0.X = dVar54;
  (pTVar45->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar48,uVar46);
  (pTVar45->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar51,uVar50);
  uVar25 = this_00->IBoxCur;
  this_00->IBoxCur = uVar25 + 1;
  dVar3 = (pTVar45->Max).field0_0x0._s_0.X;
  dVar54 = (pTVar45->Max).field0_0x0._s_0.Y;
  dVar4 = (pTVar45->Max).field0_0x0._s_0.Z;
  dStack_188 = (dVar3 + (pTVar45->Min).field0_0x0._s_0.X) * dVar53;
  local_190 = (double)CONCAT44(local_190._4_4_,this_00->IIndicesCur);
  dVar16 = (dVar54 + (pTVar45->Min).field0_0x0._s_0.Y) * dVar53;
  dVar55 = (dVar4 + (pTVar45->Min).field0_0x0._s_0.Z) * dVar53;
  dVar3 = (dVar3 - (pTVar45->Min).field0_0x0._s_0.X) * dVar53;
  dVar54 = (dVar54 - (pTVar45->Min).field0_0x0._s_0.Y) * dVar53;
  uVar48 = SUB84(dVar54,0);
  uVar49 = (undefined4)((ulonglong)dVar54 >> 0x20);
  uVar34 = (this_00->Boxes).CurBlock;
  uVar42 = (this_00->Boxes).CurBlockUsed;
  uVar32 = uVar34 * 0x200 + uVar42;
  local_160 = (dVar4 - (pTVar45->Min).field0_0x0._s_0.Z) * dVar53;
  uVar46 = SUB84(dVar55,0);
  uVar47 = (undefined4)((ulonglong)dVar55 >> 0x20);
  if (uVar25 == uVar32) {
    if (uVar42 == 0x200) {
      if (uVar34 == (this_00->Boxes).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512>::AddAllocatedBlock
                  (&this_00->Boxes);
      }
      (this_00->Boxes).CurBlock = (this_00->Boxes).CurBlock + 1;
      uVar34 = (this_00->Boxes).CurBlock;
      (this_00->Boxes).CurBlockUsed = 0;
      uVar42 = 0;
    }
  }
  else {
    if (uVar25 <= uVar32) {
      lVar28 = (ulonglong)(uVar25 & 0x1ff) * 0x38;
      lVar35 = *(longlong *)
                ((this_00->Boxes).Blocks.AllocatorInstance.Data + (ulonglong)(uVar25 >> 9) * 8);
      *(double *)(lVar35 + lVar28) = local_190;
      ((double *)(lVar35 + lVar28))[1] = dStack_188;
      auVar15._8_4_ = uVar46;
      auVar15._0_8_ = dVar16;
      auVar15._12_4_ = uVar47;
      *(undefined1 (*) [16])(lVar35 + 0x10 + lVar28) = auVar15;
      auVar11._8_4_ = uVar48;
      auVar11._0_8_ = dVar3;
      auVar11._12_4_ = uVar49;
      *(undefined1 (*) [16])(lVar35 + 0x20 + lVar28) = auVar11;
      *(double *)(lVar35 + 0x30 + lVar28) = local_160;
      goto LAB_14cbb44f1;
    }
    TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512>::Resize(&this_00->Boxes,uVar25);
    uVar42 = (this_00->Boxes).CurBlockUsed;
    if (uVar42 == 0x200) {
      if ((this_00->Boxes).CurBlock == (this_00->Boxes).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512>::AddAllocatedBlock
                  (&this_00->Boxes);
      }
      (this_00->Boxes).CurBlock = (this_00->Boxes).CurBlock + 1;
      (this_00->Boxes).CurBlockUsed = 0;
      uVar42 = 0;
    }
    uVar34 = (this_00->Boxes).CurBlock;
  }
  lVar28 = (longlong)(int)uVar42 * 0x38;
  lVar35 = *(longlong *)((this_00->Boxes).Blocks.AllocatorInstance.Data + (longlong)(int)uVar34 * 8)
  ;
  *(double *)(lVar35 + lVar28) = local_190;
  ((double *)(lVar35 + lVar28))[1] = dStack_188;
  auVar14._8_4_ = uVar46;
  auVar14._0_8_ = dVar16;
  auVar14._12_4_ = uVar47;
  *(undefined1 (*) [16])(lVar35 + 0x10 + lVar28) = auVar14;
  auVar10._8_4_ = uVar48;
  auVar10._0_8_ = dVar3;
  auVar10._12_4_ = uVar49;
  *(undefined1 (*) [16])(lVar35 + 0x20 + lVar28) = auVar10;
  *(double *)(lVar35 + 0x30 + lVar28) = local_160;
  puVar1 = &(this_00->Boxes).CurBlockUsed;
  *puVar1 = *puVar1 + 1;
LAB_14cbb44f1:
  piVar39 = &this_00->IIndicesCur;
  uVar42 = *piVar39;
  *piVar39 = uVar42 + 1;
  TDynamicVector<int,512>::InsertAt(&this_00->IndexList,&local_198,uVar42);
  uVar42 = *piVar39;
  *piVar39 = uVar42 + 1;
  TDynamicVector<int,512>::InsertAt(&this_00->IndexList,&local_194,uVar42);
  return uVar25;
}

