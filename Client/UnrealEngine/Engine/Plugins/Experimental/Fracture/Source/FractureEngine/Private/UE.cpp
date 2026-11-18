// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FractureEngine
// Functions: 22

// operator() @ 14e802590

bool __thiscall
`UE::FractureEngine::Convex::ComputeConvexHullsNegativeSpace'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  longlong *plVar3;
  FDynamicMesh3 *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  uint uVar16;
  int iVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  int iVar19;
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  undefined4 uStack_94;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  if ((param_1 < 0) || (iVar9 = (**(code **)(**(longlong **)this + 0x60))(), iVar9 <= param_1)) {
    return false;
  }
  lVar12 = *(longlong *)this;
  local_res18 = (uint)~param_1 >> 0x1f;
  uVar10 = 0;
  if (param_1 < *(int *)(lVar12 + 0x18)) {
    uVar10 = local_res18;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  iVar17 = 0;
  iVar19 = 0;
  plVar15 = (longlong *)((longlong)param_1 * 0x50 + *(longlong *)(lVar12 + 0x10));
  uVar10 = 1;
  iVar9 = (int)plVar15[5];
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar15 + 2);
  iVar13 = 0;
  iVar11 = 0;
  if (iVar9 != 0) {
    pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)plVar15[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar15[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar18 = pTVar1;
    }
    uVar16 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) {
        iVar13 = (int)plVar15[5];
        iVar11 = iVar9;
        goto LAB_14e8026d4;
      }
      uVar16 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar12 * 4 + 4);
    }
    iVar13 = (int)plVar15[5];
    uVar10 = -uVar16 & uVar16;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    iVar11 = local_res20 + -1 + iVar19;
    if (iVar13 < iVar11) {
      iVar11 = iVar9;
    }
  }
LAB_14e8026d4:
  uVar16 = *(uint *)(plVar15 + 5);
  uVar14 = uVar16 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uVar10,iVar17);
  TStack_88.CurrentBitIndex = iVar11;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar16 >> 5;
  TStack_88._28_4_ = local_44;
  TStack_88.BaseBitIndex = iVar19;
  uStack_68 = CONCAT44(uStack_94,(int)plVar15[1] - *(int *)((longlong)plVar15 + 0x34));
  TStack_88.Array = pTVar1;
  if ((((int)uVar16 < 0) || (iVar13 < (int)uVar16)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  uVar10 = *(uint *)(plVar15 + 5);
  if (uVar16 != uVar10) {
    pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)plVar15[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar15[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar18 = pTVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) &
             *(uint *)((pTVar18->AllocatorInstance).InlineData + (longlong)iVar9 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar9;
      uVar14 = uVar14 + 0x20;
      iVar9 = iVar9 + 1;
      uVar16 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_14e8027d0;
      uVar16 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar16 = (int)lVar12 + -1 + uVar14;
    if ((int)uVar10 < (int)uVar16) {
      uVar16 = uVar10;
    }
  }
LAB_14e8027d0:
  while( true ) {
    if ((int)plVar15[1] - *(int *)((longlong)plVar15 + 0x34) != (int)uStack_68) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_88.CurrentBitIndex == uVar16) && (TStack_88.Array == pTVar1)) {
      return true;
    }
    plVar3 = *(longlong **)((longlong)this + 0x18);
    uVar10 = *(uint *)(*plVar15 + (longlong)TStack_88.CurrentBitIndex * 0xc);
    uVar14 = 0;
    if (param_1 < (int)plVar3[1]) {
      uVar14 = local_res18;
    }
    if ((uVar14 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pFVar4 = *(FDynamicMesh3 **)((longlong)this + 0x10);
    lVar12 = *plVar3;
    lVar5 = *(longlong *)((longlong)this + 8);
    uVar14 = 0;
    if ((int)uVar10 < *(int *)(lVar5 + 0x18)) {
      uVar14 = ~uVar10 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    ::`anonymous_namespace'::AppendConvexHullToCompactDynamicMesh
              (*(FConvex **)(*(longlong *)(lVar5 + 0x10) + (longlong)(int)uVar10 * 8),pFVar4,
               (TTransform<double> *)((longlong)param_1 * 0x60 + lVar12),true,false,false);
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  pcVar6 = (code *)swi(3);
  uVar8 = (*pcVar6)();
  return (bool)uVar8;
}

// operator() @ 14e802ac0

bool __thiscall
`UE::FractureEngine::Convex::GetConvexHullsAsDynamicMesh'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  longlong *plVar3;
  FDynamicMesh3 *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  longlong *plVar15;
  uint uVar16;
  int iVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  int iVar19;
  ulonglong uVar20;
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_94;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  uVar20 = (ulonglong)param_1;
  if ((param_1 < 0) || (iVar10 = (**(code **)(**(longlong **)this + 0x60))(), iVar10 <= param_1)) {
    return false;
  }
  lVar13 = *(longlong *)this;
  local_res20 = (uint)~param_1 >> 0x1f;
  uVar11 = 0;
  if (param_1 < *(int *)(lVar13 + 0x18)) {
    uVar11 = local_res20;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  iVar17 = 0;
  iVar19 = 0;
  plVar15 = (longlong *)(uVar20 * 0x50 + *(longlong *)(lVar13 + 0x10));
  uVar11 = 1;
  iVar10 = (int)plVar15[5];
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar15 + 2);
  iVar12 = 0;
  if (iVar10 != 0) {
    pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)plVar15[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar15[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar18 = pTVar1;
    }
    uVar16 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      iVar12 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14e802bfd;
      uVar16 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar11 = -uVar16 & uVar16;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar12 = (int)lVar13 + -1 + iVar19;
    if (iVar10 < iVar12) {
      iVar12 = iVar10;
    }
  }
LAB_14e802bfd:
  uVar16 = *(uint *)(plVar15 + 5);
  uVar14 = uVar16 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uVar11,iVar17);
  TStack_88.CurrentBitIndex = iVar12;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_88._28_4_ = local_44;
  TStack_88.BaseBitIndex = iVar19;
  uStack_68 = CONCAT44(uStack_94,(int)plVar15[1] - *(int *)((longlong)plVar15 + 0x34));
  TStack_88.Array = pTVar1;
  if ((((int)uVar16 < 0) || (iVar10 < (int)uVar16)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  uVar11 = *(uint *)(plVar15 + 5);
  if (uVar16 != uVar11) {
    pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)plVar15[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar15[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar18 = pTVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) &
             *(uint *)((pTVar18->AllocatorInstance).InlineData + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar17;
      uVar14 = uVar14 + 0x20;
      iVar17 = iVar17 + 1;
      uVar16 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_14e802d00;
      uVar16 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar16 = (int)lVar13 + -1 + uVar14;
    if ((int)uVar11 < (int)uVar16) {
      uVar16 = uVar11;
    }
  }
LAB_14e802d00:
  while( true ) {
    if ((int)plVar15[1] - *(int *)((longlong)plVar15 + 0x34) != (int)uStack_68) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_88.CurrentBitIndex == uVar16) && (TStack_88.Array == pTVar1)) {
      return true;
    }
    plVar3 = *(longlong **)((longlong)this + 0x10);
    bVar7 = *(bool *)((longlong)this + 0x20);
    uVar11 = *(uint *)(*plVar15 + (longlong)TStack_88.CurrentBitIndex * 0xc);
    uVar14 = 0;
    if ((int)uVar20 < (int)plVar3[1]) {
      uVar14 = local_res20;
    }
    if ((uVar14 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pFVar4 = *(FDynamicMesh3 **)((longlong)this + 0x18);
    lVar13 = *plVar3;
    lVar5 = *(longlong *)((longlong)this + 8);
    uVar14 = 0;
    if ((int)uVar11 < *(int *)(lVar5 + 0x18)) {
      uVar14 = ~uVar11 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) break;
    ::`anonymous_namespace'::AppendConvexHullToCompactDynamicMesh
              (*(FConvex **)(*(longlong *)(lVar5 + 0x10) + (longlong)(int)uVar11 * 8),pFVar4,
               (TTransform<double> *)((longlong)(int)uVar20 * 0x60 + lVar13),true,true,bVar7);
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    uVar20 = (ulonglong)(uint)param_1;
  }
  pcVar6 = (code *)swi(3);
  uVar8 = (*pcVar6)();
  return (bool)uVar8;
}

// operator() @ 14e802e80

bool __thiscall
`UE::FractureEngine::Convex::GetConvexHullsAsDynamicMeshes'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  ForAnyElementType *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  int iVar20;
  longlong *plVar21;
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_8c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  if ((param_1 < 0) || (iVar12 = (**(code **)(**(longlong **)this + 0x60))(), iVar12 <= param_1)) {
    return false;
  }
  lVar15 = *(longlong *)this;
  local_res20 = (uint)~param_1 >> 0x1f;
  uVar13 = 0;
  if (param_1 < *(int *)(lVar15 + 0x18)) {
    uVar13 = local_res20;
  }
  if ((uVar13 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar10 = (*pcVar8)();
    return (bool)uVar10;
  }
  iVar18 = 0;
  plVar21 = (longlong *)((longlong)param_1 * 0x50 + *(longlong *)(lVar15 + 0x10));
  iVar20 = 0;
  iVar12 = (int)plVar21[5];
  pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar21 + 2);
  uVar13 = 1;
  iVar14 = 0;
  if (iVar12 != 0) {
    pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)plVar21[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar21[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar19 = pTVar3;
    }
    uVar17 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
    while (uVar17 == 0) {
      lVar15 = (longlong)iVar18;
      iVar20 = iVar20 + 0x20;
      iVar18 = iVar18 + 1;
      iVar14 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14e802fbd;
      uVar17 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar15 * 4 + 4);
    }
    uVar13 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uVar13 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar14 = (int)lVar15 + -1 + iVar20;
    if (iVar12 < iVar14) {
      iVar14 = iVar12;
    }
  }
LAB_14e802fbd:
  uVar17 = *(uint *)(plVar21 + 5);
  uVar16 = uVar17 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(uVar13,iVar18);
  TStack_80.CurrentBitIndex = iVar14;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar17 >> 5;
  TStack_80._28_4_ = local_3c;
  TStack_80.BaseBitIndex = iVar20;
  uStack_60 = CONCAT44(uStack_8c,(int)plVar21[1] - *(int *)((longlong)plVar21 + 0x34));
  TStack_80.Array = pTVar3;
  if ((((int)uVar17 < 0) || (iVar12 < (int)uVar17)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar10 = (*pcVar8)();
    return (bool)uVar10;
  }
  uVar13 = *(uint *)(plVar21 + 5);
  if (uVar17 != uVar13) {
    pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)plVar21[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar21[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar19 = pTVar3;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) &
             *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      lVar15 = (longlong)iVar18;
      uVar16 = uVar16 + 0x20;
      iVar18 = iVar18 + 1;
      uVar17 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14e8030c0;
      uVar17 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar15 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar17 = (int)lVar15 + -1 + uVar16;
    if ((int)uVar13 < (int)uVar17) {
      uVar17 = uVar13;
    }
  }
LAB_14e8030c0:
  while( true ) {
    if ((int)plVar21[1] - *(int *)((longlong)plVar21 + 0x34) != (int)uStack_60) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_80.CurrentBitIndex == uVar17) && (TStack_80.Array == pTVar3)) {
      return true;
    }
    pFVar4 = *(ForAnyElementType **)((longlong)this + 0x18);
    piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
    uVar13 = *(uint *)(*plVar21 + (longlong)TStack_80.CurrentBitIndex * 0xc);
    iVar12 = *(int *)&pFVar4[1].Data;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x230,8,pFVar4,piVar1);
    }
    *(int *)&pFVar4[1].Data = iVar12 + 1;
    pFVar5 = pFVar4->Data;
    DefaultConstructItems<UE::Geometry::FDynamicMesh3,int>
              ((FDynamicMesh3 *)(pFVar5 + (longlong)iVar12 * 0x230),1);
    plVar6 = *(longlong **)((longlong)this + 0x10);
    bVar9 = *(bool *)((longlong)this + 0x20);
    uVar16 = 0;
    if (param_1 < (int)plVar6[1]) {
      uVar16 = local_res20;
    }
    if ((uVar16 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
    lVar15 = *plVar6;
    lVar7 = *(longlong *)((longlong)this + 8);
    uVar16 = 0;
    if ((int)uVar13 < *(int *)(lVar7 + 0x18)) {
      uVar16 = ~uVar13 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) break;
    ::`anonymous_namespace'::AppendConvexHullToCompactDynamicMesh
              (*(FConvex **)(*(longlong *)(lVar7 + 0x10) + (longlong)(int)uVar13 * 8),
               (FDynamicMesh3 *)(pFVar5 + (longlong)iVar12 * 0x230),
               (TTransform<double> *)((longlong)param_1 * 0x60 + lVar15),true,true,bVar9);
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  pcVar8 = (code *)swi(3);
  uVar10 = (*pcVar8)();
  return (bool)uVar10;
}

// operator() @ 14e803270

bool __thiscall
`UE::FractureEngine::Convex::SimplifyConvexHulls'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  longlong *plVar2;
  ulonglong uVar3;
  FSimplifyHullSettings *pFVar4;
  longlong lVar5;
  FConvex *pFVar6;
  code *pcVar7;
  bool bVar8;
  double dVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  FConvex *this_00;
  longlong lVar16;
  uint uVar17;
  longlong *plVar18;
  uint uVar19;
  int iVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  int iVar22;
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  if ((param_1 < 0) || (iVar13 = (**(code **)(**(longlong **)this + 0x60))(), iVar13 <= param_1)) {
    return false;
  }
  lVar16 = *(longlong *)this;
  bVar8 = true;
  uVar14 = 0;
  if (param_1 < *(int *)(lVar16 + 0x18)) {
    uVar14 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  iVar20 = 0;
  plVar18 = (longlong *)((longlong)param_1 * 0x50 + *(longlong *)(lVar16 + 0x10));
  iVar22 = 0;
  iVar13 = (int)plVar18[5];
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar18 + 2);
  uVar14 = 1;
  iVar15 = 0;
  if (iVar13 != 0) {
    pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)plVar18[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar18[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar21 = pTVar1;
    }
    uVar19 = *(uint *)(pTVar21->AllocatorInstance).InlineData;
    while (uVar19 == 0) {
      lVar16 = (longlong)iVar20;
      iVar22 = iVar22 + 0x20;
      iVar20 = iVar20 + 1;
      iVar15 = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_14e8033ad;
      uVar19 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar16 * 4 + 4);
    }
    uVar14 = -uVar19 & uVar19;
    uVar3 = (ulonglong)uVar14 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_res20 = (int)lVar16;
    iVar15 = iVar22 + -1 + local_res20;
    if (iVar13 < iVar15) {
      iVar15 = iVar13;
    }
  }
LAB_14e8033ad:
  uVar19 = *(uint *)(plVar18 + 5);
  uVar17 = uVar19 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uVar14,iVar20);
  TStack_98.CurrentBitIndex = iVar15;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uVar19 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = iVar22;
  uStack_78 = CONCAT44(uStack_a4,(int)plVar18[1] - *(int *)((longlong)plVar18 + 0x34));
  local_res18 = uVar19;
  TStack_98.Array = pTVar1;
  if ((((int)uVar19 < 0) || (iVar13 < (int)uVar19)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  uVar14 = *(uint *)(plVar18 + 5);
  if (uVar19 != uVar14) {
    pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)plVar18[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar18[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar21 = pTVar1;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) &
             *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar20 * 4);
    while (uVar19 == 0) {
      lVar16 = (longlong)iVar20;
      uVar17 = uVar17 + 0x20;
      iVar20 = iVar20 + 1;
      uVar19 = uVar14;
      local_res18 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
      goto LAB_14e8034b1;
      uVar19 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar16 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar19 = (int)lVar16 + -1 + uVar17;
    local_res18 = uVar19;
    if ((int)uVar14 < (int)uVar19) {
      uVar19 = uVar14;
      local_res18 = uVar14;
    }
  }
LAB_14e8034b1:
  while( true ) {
    if ((int)plVar18[1] - *(int *)((longlong)plVar18 + 0x34) != (int)uStack_78) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_98.CurrentBitIndex == uVar19) && (TStack_98.Array == pTVar1)) {
      return bVar8;
    }
    uVar14 = *(uint *)(*plVar18 + (longlong)TStack_98.CurrentBitIndex * 0xc);
    lVar16 = (longlong)(int)uVar14;
    this_00 = ::operator_new(0xb0);
    if (this_00 != (FConvex *)0x0) {
      ::Chaos::FImplicitObject::FImplicitObject((FImplicitObject *)this_00,3,'\b');
      this_00->_padding_ = (longlong)&___7FConvex_Chaos__6B_;
      (this_00->Planes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->Planes).ArrayNum = 0;
      (this_00->Planes).ArrayMax = 0;
      (this_00->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->Vertices).ArrayNum = 0;
      (this_00->Vertices).ArrayMax = 0;
      (this_00->StructureData).Data.Ptr = (void *)0x0;
      (this_00->StructureData).IndexType = None;
      *(undefined8 *)&this_00->Volume = 0;
      *(undefined8 *)&(this_00->CenterOfMass).field_0x4 = 0;
      *(undefined4 *)&(this_00->LocalBoundingBox).MMin = 0x7f7fffff;
      *(undefined4 *)&(this_00->LocalBoundingBox).MMin.field_0x4 = 0x7f7fffff;
      *(undefined4 *)&(this_00->LocalBoundingBox).MMin.field_0x8 = 0x7f7fffff;
      *(undefined4 *)&(this_00->LocalBoundingBox).MMax = 0xff7fffff;
      *(undefined4 *)&(this_00->LocalBoundingBox).MMax.field_0x4 = 0xff7fffff;
      *(undefined4 *)&(this_00->LocalBoundingBox).MMax.field_0x8 = 0xff7fffff;
      *(undefined8 *)&this_00->UnitMassInertiaTensor = 0x3ff0000000000000;
      *(undefined8 *)&(this_00->UnitMassInertiaTensor).field_0x8 = 0x3ff0000000000000;
      *(undefined8 *)&(this_00->UnitMassInertiaTensor).field_0x10 = 0x3ff0000000000000;
      dVar9 = UE::Math::TQuat<double>::Identity.Y;
      *(double *)&this_00->RotationOfMass = UE::Math::TQuat<double>::Identity.X;
      *(double *)&(this_00->RotationOfMass).field_0x8 = dVar9;
      dVar9 = UE::Math::TQuat<double>::Identity.W;
      *(double *)&(this_00->RotationOfMass).field_0x10 = UE::Math::TQuat<double>::Identity.Z;
      *(double *)&(this_00->RotationOfMass).field_0x18 = dVar9;
      LOCK();
      *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
      UNLOCK();
    }
    pFVar4 = *(FSimplifyHullSettings **)((longlong)this + 0x10);
    lVar5 = *(longlong *)((longlong)this + 8);
    uVar19 = 0;
    if ((int)uVar14 < *(int *)(lVar5 + 0x18)) {
      uVar19 = ~uVar14 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) break;
    bVar10 = UE::FractureEngine::Convex::SimplifyConvexHull
                       (*(FConvex **)(*(longlong *)(lVar5 + 0x10) + lVar16 * 8),this_00,pFVar4);
    lVar5 = *(longlong *)((longlong)this + 8);
    uVar19 = 0;
    if ((int)uVar14 < *(int *)(lVar5 + 0x18)) {
      uVar19 = ~uVar14 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    lVar5 = *(longlong *)(lVar5 + 0x10);
    pFVar6 = *(FConvex **)(lVar5 + lVar16 * 8);
    if (pFVar6 != this_00) {
      *(FConvex **)(lVar5 + lVar16 * 8) = this_00;
      if (this_00 != (FConvex *)0x0) {
        LOCK();
        *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar6 != (FConvex *)0x0) {
        LOCK();
        plVar2 = &pFVar6->_padding_;
        lVar16 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if (((int)lVar16 == 1) && (*(int *)((longlong)&pFVar6->_padding_ + 4) == 0)) {
          (**(code **)pFVar6->_padding_)(pFVar6,1);
        }
      }
    }
    if ((bVar8) && (bVar10)) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if (this_00 != (FConvex *)0x0) {
      LOCK();
      plVar2 = &this_00->_padding_;
      lVar16 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar16 == 1) && (*(int *)((longlong)&this_00->_padding_ + 4) == 0)) {
        (**(code **)this_00->_padding_)(this_00,1);
      }
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    uVar19 = local_res18;
  }
  pcVar7 = (code *)swi(3);
  uVar11 = (*pcVar7)();
  return (bool)uVar11;
}

// operator() @ 14e803970

float __thiscall
`UE::FractureEngine::Convex::SimplifyConvexHull'::__l36::<lambda_1>::operator()
          (void *this,int param_1,bool param_2)

{
  double *pdVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  <lambda_2> local_res8 [8];
  <lambda_2> local_res18 [8];
  int local_res20 [2];
  int local_48 [2];
  longlong *local_40;
  
  uVar8 = 0xffffffff;
  if ((((FConvexStructureData *)(**(longlong **)this + 0x58))->Data).Ptr == (void *)0x0) {
    uVar7 = 0xffffffff;
  }
  else {
    local_res20[1] = 0;
    local_res20[0] = param_1;
    uVar7 = ::Chaos::FConvexStructureData::
            ConstDataOp<_Chaos::FConvexStructureData::GetEdgePlane_::__l2::<lambda_1>,_Chaos::FConvexStructureData::GetEdgePlane_::__l2::<lambda_2>_>
                      ((FConvexStructureData *)(**(longlong **)this + 0x58),
                       (<lambda_1> *)local_res20,local_res18);
  }
  if ((((FConvexStructureData *)(**(longlong **)this + 0x58))->Data).Ptr != (void *)0x0) {
    local_48[1] = 1;
    local_48[0] = param_1;
    uVar8 = ::Chaos::FConvexStructureData::
            ConstDataOp<_Chaos::FConvexStructureData::GetEdgePlane_::__l2::<lambda_1>,_Chaos::FConvexStructureData::GetEdgePlane_::__l2::<lambda_2>_>
                      ((FConvexStructureData *)(**(longlong **)this + 0x58),(<lambda_1> *)local_48,
                       local_res8);
  }
  if (param_2) {
    uVar7 = FDisjointSet::Find(*(FDisjointSet **)((longlong)this + 8),uVar7);
    uVar8 = FDisjointSet::Find(*(FDisjointSet **)((longlong)this + 8),uVar8);
    if (uVar7 == uVar8) {
      return __real_40800000;
    }
  }
  plVar2 = *(longlong **)((longlong)this + 0x10);
  uVar9 = 0;
  if ((int)uVar7 < (int)plVar2[1]) {
    uVar9 = ~uVar7 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    fVar12 = (float)(*pcVar5)();
    return fVar12;
  }
  lVar10 = (longlong)(int)uVar7;
  pdVar1 = (double *)(*plVar2 + lVar10 * 8);
  if (*(double *)((longlong)this + 0x20) < *pdVar1 || *(double *)((longlong)this + 0x20) == *pdVar1)
  {
    local_40 = *(longlong **)((longlong)this + 0x10);
    uVar9 = 0;
    if ((int)uVar8 < (int)local_40[1]) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      fVar12 = (float)(*pcVar5)();
      return fVar12;
    }
    lVar11 = (longlong)(int)uVar8;
    pdVar1 = (double *)(*local_40 + lVar11 * 8);
    if (*(double *)((longlong)this + 0x20) < *pdVar1 ||
        *(double *)((longlong)this + 0x20) == *pdVar1) {
      local_40 = *(longlong **)((longlong)this + 0x18);
      uVar9 = 0;
      if ((int)uVar7 < (int)local_40[1]) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar12 = (float)(*pcVar5)();
        return fVar12;
      }
      plVar2 = *(longlong **)((longlong)this + 0x18);
      lVar3 = *local_40;
      uVar7 = 0;
      if ((int)uVar8 < (int)plVar2[1]) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar12 = (float)(*pcVar5)();
        return fVar12;
      }
      lVar4 = *plVar2;
      return __real_3f800000 -
             (float)(*(double *)(lVar4 + 8 + lVar11 * 0x18) * *(double *)(lVar3 + 8 + lVar10 * 0x18)
                     + *(double *)(lVar4 + lVar11 * 0x18) * *(double *)(lVar3 + lVar10 * 0x18) +
                    *(double *)(lVar4 + 0x10 + lVar11 * 0x18) *
                    *(double *)(lVar3 + 0x10 + lVar10 * 0x18));
    }
  }
  return 0.0;
}

// AbsorbClusterNeighbors @ 14e804280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Private::ClusterMagnet::AbsorbClusterNeighbors
          (TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
           *param_1,FClusterMagnet *param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this;
  FClusterMagnet *this_00;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  longlong lVar8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar9;
  undefined1 *puVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  undefined1 auStackY_158 [32];
  bool local_128;
  undefined1 local_127 [3];
  uint local_124;
  uint local_120 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_118;
  int iStack_110;
  uint uStack_10c;
  undefined1 *local_108;
  undefined4 uStack_100;
  int iStack_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  int local_e8;
  int local_e4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_e0;
  FClusterMagnet *local_d8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_6c = 0x80;
  local_118 = &param_2->Connections;
  local_128 = false;
  local_68 = 0xffffffff;
  local_108 = &(param_2->Connections).Elements.field_0x10;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  iStack_110 = 0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  uStack_10c = 1;
  local_50 = 0;
  local_f8 = 0;
  iVar7 = *(int *)&(param_2->Connections).Elements.field_0x28;
  iStack_fc = local_f8;
  if (iVar7 != 0) {
    puVar14 = *(uint **)&(param_2->Connections).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)local_108;
    }
    uVar13 = *puVar14;
    local_f8 = 0;
    iStack_110 = 0;
    while (uVar13 == 0) {
      lVar8 = (longlong)iStack_110;
      local_f8 = local_f8 + 0x20;
      iStack_110 = iStack_110 + 1;
      iStack_fc = iVar7;
      if ((int)((iVar7 + -1 >> 0x1f & 0x1fU) + iVar7 + -1) >> 5 < iStack_110) goto LAB_14e80436f;
      uVar13 = puVar14[lVar8 + 1];
    }
    uStack_10c = -uVar13 & uVar13;
    uVar1 = (ulonglong)uStack_10c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_e8 = (int)lVar8;
    iStack_fc = local_e8 + -1 + local_f8;
    if (iVar7 < iStack_fc) {
      iStack_fc = iVar7;
    }
  }
LAB_14e80436f:
  iStack_f0 = *(int *)&(param_2->Connections).Elements.field_0x8 -
              *(int *)&(param_2->Connections).Elements.field_0x34;
  puVar15 = &(param_2->Connections).Elements.field_0x10;
  uVar13 = *(uint *)&(param_2->Connections).Elements.field_0x28;
  uStack_100 = 0xffffffff;
  TStack_c8.CurrentBitIndex = iStack_fc;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  TStack_c8._padding_ = CONCAT44(uStack_10c,iStack_110);
  uVar16 = uVar13 & 0xffffffe0;
  iVar12 = (int)uVar13 >> 5;
  TStack_c8._28_4_ = iStack_fc;
  TStack_c8.BaseBitIndex = local_f8;
  uStack_a8 = CONCAT44(uStack_ec,iStack_f0);
  iStack_f4 = iStack_fc;
  local_e0 = local_118;
  local_d8 = param_2;
  local_d0 = local_118;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_108;
  if ((((int)uVar13 < 0) || (iVar7 < (int)uVar13)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  this_00 = local_d8;
  this = local_e0;
  uVar2 = *(uint *)&(param_2->Connections).Elements.field_0x28;
  if (uVar13 != uVar2) {
    puVar10 = *(undefined1 **)&(param_2->Connections).Elements.field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar15;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar12 * 4);
    while (uVar13 == 0) {
      lVar8 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar13 = uVar2;
      if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar12) goto LAB_14e804490;
      uVar13 = *(uint *)(puVar10 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar13 = (int)lVar8 + -1 + uVar16;
    if ((int)uVar2 < (int)uVar13) {
      uVar13 = uVar2;
    }
  }
LAB_14e804490:
  do {
    pTVar9 = local_d0;
    if (*(int *)&(local_d0->Elements).field_0x8 - *(int *)&(local_d0->Elements).field_0x34 !=
        (int)uStack_a8) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_127);
    }
    if (((TStack_c8.CurrentBitIndex == uVar13) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar15)) && (pTVar9 == this)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                (this,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98);
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      iVar7 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar7 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      *(undefined4 *)&param_1->field_0x48 = 0;
      if (*(void **)&param_1->field_0x40 != (void *)0x0) {
        FMemory::Free(*(void **)&param_1->field_0x40);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)param_1);
      return local_128;
    }
    uVar16 = *(uint *)(*(longlong *)&pTVar9->Elements + (longlong)TStack_c8.CurrentBitIndex * 0xc);
    local_124 = uVar16;
    if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
      FVar3 = (param_3->Hash).SecondaryData;
      FVar11 = (ForElementType<FSetElementId>)&param_3->Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar11 = FVar3;
      }
      iVar7 = *(int *)((longlong)FVar11 + (ulonglong)(param_3->HashSize - 1U & uVar16) * 4);
      if (iVar7 != -1) {
        do {
          if (*(uint *)(*(longlong *)&param_3->Elements + (longlong)iVar7 * 0xc) == uVar16) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&this_00->ClusteredNodes,&local_e4,(bool *)&local_124);
            pTVar9 = TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                     ::FindChecked((TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                                    *)param_1,uVar16);
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,pTVar9);
            local_120[0] = uVar16;
            if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                        (param_3,uVar16,(int *)local_120);
            }
            local_128 = true;
            break;
          }
          iVar7 = *(int *)(*(longlong *)&param_3->Elements + 4 + (longlong)iVar7 * 0xc);
        } while (iVar7 != -1);
      }
    }
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  } while( true );
}

// CollectTopNodeConnections @ 14e808b50

void __cdecl
UE::Private::ClusterMagnet::CollectTopNodeConnections
          (FGeometryCollection *param_1,int param_2,int param_3,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_4)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  code *pcVar3;
  FName FVar4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_res20;
  int local_148 [2];
  longlong *local_140;
  int iStack_138;
  uint uStack_134;
  TBitArray<FDefaultBitArrayAllocator> *local_130;
  undefined4 uStack_128;
  int iStack_124;
  int local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  longlong *local_100;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FName local_98 [4];
  undefined4 local_74;
  undefined4 local_54;
  
  iVar11 = 0;
  lVar16 = (longlong)param_2;
  uVar14 = (uint)~param_2 >> 0x1f;
  uVar10 = 0;
  if (param_2 < *(int *)&(param_1->SimulationType).field_0x18) {
    uVar10 = uVar14;
  }
  local_res18 = param_3;
  local_res20 = param_4;
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)(*(longlong *)&(param_1->SimulationType).field_0x10 + lVar16 * 4) == 1) {
    uVar10 = 0;
    if (param_2 < *(int *)&(param_1->TransformToGeometryIndex).field_0x18) {
      uVar10 = uVar14;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar4 = FGeometryCollection::GeometryGroup;
    if (*(int *)(*(longlong *)&(param_1->TransformToGeometryIndex).field_0x10 + lVar16 * 4) != -1) {
      pFVar8 = ::FName::FName(local_98,"Proximity");
      pTVar9 = FManagedArrayCollection::
               GetAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                         ((FManagedArrayCollection *)param_1,*pFVar8,FVar4);
      uVar10 = 0;
      if (param_2 < *(int *)&(param_1->TransformToGeometryIndex).field_0x18) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar10 = *(uint *)(*(longlong *)&(param_1->TransformToGeometryIndex).field_0x10 + lVar16 * 4);
      uVar14 = 0;
      if ((int)uVar10 < *(int *)&pTVar9->field_0x18) {
        uVar14 = ~uVar10 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iStack_138 = 0;
      uStack_134 = 1;
      plVar17 = (longlong *)((longlong)(int)uVar10 * 0x50 + *(longlong *)&pTVar9->field_0x10);
      iVar11 = (int)plVar17[5];
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar17 + 2);
      local_120 = 0;
      iStack_124 = 0;
      if (iVar11 != 0) {
        pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)plVar17[4];
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar17[4] ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar13 = pTVar1;
        }
        uVar10 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
        iStack_138 = 0;
        local_120 = 0;
        while (uVar10 == 0) {
          lVar16 = (longlong)iStack_138;
          local_120 = local_120 + 0x20;
          iStack_138 = iStack_138 + 1;
          iStack_124 = iVar11;
          if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_138)
          goto LAB_14e808d90;
          uVar10 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar16 * 4 + 4);
        }
        uStack_134 = -uVar10 & uVar10;
        uVar2 = (ulonglong)uStack_134 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_110 = (int)lVar16;
        iStack_124 = local_120 + -1 + local_110;
        if (iVar11 < iStack_124) {
          iStack_124 = iVar11;
        }
      }
LAB_14e808d90:
      uVar10 = *(uint *)(plVar17 + 5);
      uStack_11c = local_74;
      iStack_118 = (int)plVar17[1] - *(int *)((longlong)plVar17 + 0x34);
      uVar14 = uVar10 & 0xffffffe0;
      uStack_128 = 0xffffffff;
      TStack_f0._padding_ = CONCAT44(uStack_134,iStack_138);
      TStack_f0.CurrentBitIndex = iStack_124;
      TStack_f0.UnvisitedBitMask = 0xffffffff;
      iVar15 = (int)uVar10 >> 5;
      TStack_f0._28_4_ = local_74;
      TStack_f0.BaseBitIndex = local_120;
      uStack_d0 = CONCAT44(uStack_114,iStack_118);
      local_140 = plVar17;
      local_130 = pTVar1;
      local_100 = plVar17;
      local_f8 = plVar17;
      TStack_f0.Array = pTVar1;
      if ((((int)uVar10 < 0) || (iVar11 < (int)uVar10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar5 = local_100;
      this = local_res20;
      uVar7 = *(uint *)(plVar17 + 5);
      if (uVar10 != uVar7) {
        pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)plVar17[4];
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar17[4] ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar13 = pTVar1;
        }
        uVar10 = -1 << ((byte)uVar10 & 0x1f) &
                 *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
        while (uVar10 == 0) {
          lVar16 = (longlong)iVar15;
          uVar14 = uVar14 + 0x20;
          iVar15 = iVar15 + 1;
          uVar10 = uVar7;
          if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_14e808eb0;
          uVar10 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar16 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_10c = (int)lVar16;
        uVar10 = local_10c + -1 + uVar14;
        if ((int)uVar7 < (int)uVar10) {
          uVar10 = uVar7;
        }
      }
LAB_14e808eb0:
      while( true ) {
        plVar17 = local_f8;
        if ((int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34) != (int)uStack_d0) {
          local_res10[0] = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (((TStack_f0.CurrentBitIndex == uVar10) && (TStack_f0.Array == pTVar1)) &&
           (plVar17 == plVar5)) break;
        uVar14 = *(uint *)(*plVar17 + (longlong)TStack_f0.CurrentBitIndex * 0xc);
        uVar7 = 0;
        if ((int)uVar14 < *(int *)&(param_1->TransformIndex).field_0x18) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_148[0] = FGeometryCollectionClusteringUtility::GetParentOfBoneAtSpecifiedLevel
                                 (param_1,*(int *)(*(longlong *)
                                                    &(param_1->TransformIndex).field_0x10 +
                                                  (longlong)(int)uVar14 * 4),local_res18,false);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                  (this,&local_108,(bool *)local_148);
        TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
      }
      return;
    }
  }
  uVar10 = 0;
  if (param_2 < (int)param_1->_padding_) {
    uVar10 = uVar14;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_134 = 1;
  plVar17 = (longlong *)(lVar16 * 0x50 + param_1->_padding_);
  local_120 = 0;
  iVar15 = (int)plVar17[5];
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar17 + 2);
  iStack_124 = 0;
  if (iVar15 != 0) {
    pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)plVar17[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar17[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
    local_120 = 0;
    while (uVar10 == 0) {
      lVar16 = (longlong)iVar11;
      local_120 = local_120 + 0x20;
      iVar11 = iVar11 + 1;
      iStack_124 = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e80905e;
      uVar10 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar16 * 4 + 4);
    }
    uStack_134 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_134 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_104 = (int)lVar16;
    iStack_124 = local_120 + -1 + local_104;
    if (iVar15 < iStack_124) {
      iStack_124 = iVar15;
    }
  }
LAB_14e80905e:
  uVar10 = *(uint *)(plVar17 + 5);
  uStack_11c = local_54;
  uVar14 = uVar10 & 0xffffffe0;
  iStack_118 = (int)plVar17[1] - *(int *)((longlong)plVar17 + 0x34);
  uStack_128 = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uStack_134,iVar11);
  TStack_c0.CurrentBitIndex = iStack_124;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar10 >> 5;
  TStack_c0._28_4_ = local_54;
  TStack_c0.BaseBitIndex = local_120;
  uStack_a0 = CONCAT44(uStack_114,iStack_118);
  local_140 = plVar17;
  iStack_138 = iVar11;
  local_130 = pTVar1;
  local_c8 = plVar17;
  TStack_c0.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar15 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = *(uint *)(plVar17 + 5);
  if (uVar10 != uVar7) {
    pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)plVar17[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar17[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
    while (uVar10 == 0) {
      lVar16 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar10 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14e809170;
      uVar10 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar16 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar10 = (int)lVar16 + -1 + uVar14;
    if ((int)uVar7 < (int)uVar10) {
      uVar10 = uVar7;
    }
  }
LAB_14e809170:
  while( true ) {
    plVar5 = local_c8;
    if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_c0.CurrentBitIndex == uVar10) && (TStack_c0.Array == pTVar1)) &&
       (plVar5 == plVar17)) break;
    CollectTopNodeConnections
              (param_1,*(int *)(*plVar5 + (longlong)TStack_c0.CurrentBitIndex * 0xc),local_res18,
               local_res20);
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  return;
}

// ComputeConvexHullsNegativeSpace @ 14e809200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::FractureEngine::Convex::ComputeConvexHullsNegativeSpace
          (FManagedArrayCollection *param_1,FSphereCovering *param_2,
          FNegativeSpaceSampleSettings *param_3,bool param_4,TArrayView<int_const_,int> *param_5,
          bool param_6)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  FName FVar4;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  FName *pFVar10;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar11;
  TManagedArray<TRefCountPtr<Chaos::FConvex>_> *pTVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  ulong64 uVar14;
  ulonglong uVar15;
  undefined ***pppuVar16;
  ForAnyElementType FVar17;
  undefined1 auStackY_778 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_748;
  undefined1 local_738 [8];
  FName local_730;
  FNegativeSpaceSampleSettings *local_728;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> local_720;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_6e8;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_6d8;
  TManagedArray<TRefCountPtr<Chaos::FConvex>_> *local_6d0;
  FDynamicMesh3 *local_6c8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_6c0;
  TArray<int,TSizedDefaultAllocator<32>_> local_6b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_6a8;
  FCollectionTransformFacade local_698;
  FDynamicMesh3 local_5a8;
  FCollectionTransformSelectionFacade local_378;
  undefined1 local_108 [48];
  undefined **local_d8;
  code *local_d0;
  undefined ***local_c0;
  double local_b8;
  TDynamicVector<int,512> local_b0;
  TDynamicVector<UE::Math::TVector<double>,512> local_98;
  TDynamicVector<UE::Math::TVector<double>,512> local_80;
  TDynamicVector<int,512> local_68;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_778;
  local_730.ComparisonIndex.Value = 0;
  local_728 = param_3;
  bVar6 = FGeometryCollectionConvexUtility::HasConvexHullData(param_1);
  FVar4 = FTransformCollection::TransformGroup;
  if (!bVar6) {
    return bVar6;
  }
  pFVar10 = ::FName::FName(&local_730,"TransformToConvexIndices");
  pTVar11 = FManagedArrayCollection::
            ModifyAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                      (param_1,*pFVar10,FVar4);
  pTVar12 = FManagedArrayCollection::ModifyAttribute<TRefCountPtr<Chaos::FConvex>_>
                      (param_1,FTransformCollection::ConvexHullAttribute,
                       FTransformCollection::ConvexGroup);
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_5a8);
  GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
            (&local_698,param_1);
  GeometryCollection::Facades::FCollectionTransformSelectionFacade::
  FCollectionTransformSelectionFacade(&local_378,param_1);
  local_748.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_748.ArrayNum = 0;
  local_748.ArrayMax = 0;
  if (!param_4) {
    bVar6 = !param_6;
    if (bVar6) {
      pTVar13 = GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectAll
                          (&local_378,&local_6b8);
    }
    else {
      pTVar13 = GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectLeaf
                          (&local_378,&local_6a8);
    }
    if (&local_748 != pTVar13) {
      if (local_748.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_748.AllocatorInstance.Data);
      }
      local_748.AllocatorInstance.Data = (pTVar13->AllocatorInstance).Data;
      (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_748.ArrayNum = pTVar13->ArrayNum;
      local_748.ArrayMax = pTVar13->ArrayMax;
      pTVar13->ArrayNum = 0;
      pTVar13->ArrayMax = 0;
    }
    if ((bVar6) && (local_6b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_6b8.AllocatorInstance.Data);
    }
    if ((!bVar6) && (local_6a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_6a8.AllocatorInstance.Data);
    }
    goto LAB_14e80941e;
  }
  iVar2 = param_5->ArrayNum;
  if (iVar2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
LAB_14e8093c1:
    iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar2,&local_748.AllocatorInstance,&local_748.ArrayNum,
                       &local_748.ArrayMax);
    memcpy(local_748.AllocatorInstance.Data + (longlong)iVar9 * 4,param_5->DataPtr,
           (longlong)iVar2 << 2);
  }
  else if (iVar2 != 0) goto LAB_14e8093c1;
  if (param_6) {
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::ConvertSelectionToRigidNodes
              (&local_378,&local_748);
  }
LAB_14e80941e:
  GeometryCollection::Facades::FCollectionTransformFacade::ComputeCollectionSpaceTransforms
            (&local_698,&local_6e8);
  iVar2 = local_748.ArrayNum;
  uVar15 = (ulonglong)local_748.ArrayNum;
  local_6c8 = &local_5a8;
  bVar6 = true;
  local_6c0 = &local_6e8;
  pFVar1 = local_748.AllocatorInstance.Data + uVar15 * 4;
  FVar17.Data = local_748.AllocatorInstance.Data;
  local_6d8 = pTVar11;
  local_6d0 = pTVar12;
  while( true ) {
    if ((int)uVar15 != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_738);
    }
    if (FVar17.Data == pFVar1) break;
    bVar8 = `UE::FractureEngine::Convex::ComputeConvexHullsNegativeSpace'::__l2::<lambda_1>::
            operator()(&local_6d8,*(int *)FVar17.Data);
    if ((bVar6) && (bVar8)) {
      uVar15 = local_748._8_8_ & 0xffffffff;
      bVar6 = true;
      FVar17.Data = FVar17.Data + 4;
    }
    else {
      uVar15 = local_748._8_8_ & 0xffffffff;
      bVar6 = false;
      FVar17.Data = FVar17.Data + 4;
    }
  }
  local_108._0_8_ = &___7__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  local_b8 = __real_3e45798ee2308c3a;
  local_d8 = &
             ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  local_108._16_8_ = 0;
  local_d0 = `UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::MakeDefaultSplitAxisFunc'::
             __l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_108._32_8_ =
       Core::Private::Function::
       TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
       ::Call;
  local_108._24_4_ = 3;
  local_c0 = (undefined ***)0x0;
  local_b0.CurBlock = 0;
  local_b0.CurBlockUsed = 0;
  local_b0.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.Blocks.ArrayNum = 0;
  local_b0.Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_b0);
  local_98.CurBlock = 0;
  local_98.CurBlockUsed = 0;
  local_98.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Blocks.ArrayNum = 0;
  local_98.Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_98);
  local_80.CurBlock = 0;
  local_80.CurBlockUsed = 0;
  local_80.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.Blocks.ArrayNum = 0;
  local_80.Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_80);
  local_68.CurBlock = 0;
  local_68.CurBlockUsed = 0;
  local_68.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Blocks.ArrayNum = 0;
  local_68.Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_68);
  local_108._8_8_ = &local_5a8;
  local_50 = -1;
  local_108._16_8_ = 0;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
            ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_108,false);
  local_108._16_8_ = UE::Geometry::FDynamicMesh3::GetChangeStamp((FDynamicMesh3 *)local_108._8_8_);
  local_720.FastWindingCache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_720.FastWindingCache.ArrayNum = 0;
  local_720.FastWindingCache.ArrayMax = 0;
  local_720.FastWindingCacheOffset = 0;
  local_720.FastWindingCacheMeshChangeStamp = 0;
  local_720.Tree = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_108;
  local_720.FWNBeta = __real_4000000000000000;
  local_720.FWNApproxOrder = 2;
  if ((local_50 < 0) ||
     (uVar14 = UE::Geometry::FDynamicMesh3::GetChangeStamp((FDynamicMesh3 *)local_108._8_8_),
     local_108._16_8_ != uVar14)) {
    pTVar5 = local_720.Tree;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(local_720.Tree,false);
    uVar14 = UE::Geometry::FDynamicMesh3::GetChangeStamp(pTVar5->Mesh);
    pTVar5->MeshChangeStamp = uVar14;
  }
  UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::build_fast_winding_cache(&local_720);
  local_720.FastWindingCacheMeshChangeStamp = (local_720.Tree)->MeshChangeStamp;
  UE::Geometry::FSphereCovering::AddNegativeSpace(param_2,&local_720,local_728,true);
  if (local_720.FastWindingCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_720.FastWindingCache.AllocatorInstance.Data);
  }
  UE::Geometry::TDynamicVector<int,512>::Empty(&local_68,0);
  if (local_68.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Blocks.AllocatorInstance.Data);
  }
  UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_80,0);
  if (local_80.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Blocks.AllocatorInstance.Data);
  }
  UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_98,0);
  if (local_98.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Blocks.AllocatorInstance.Data);
  }
  UE::Geometry::TDynamicVector<int,512>::Empty(&local_b0,0);
  if (local_b0.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Blocks.AllocatorInstance.Data);
  }
  if ((code *)local_108._32_8_ != (code *)0x0) {
    pppuVar16 = &local_d8;
    if (local_c0 != (undefined ***)0x0) {
      pppuVar16 = local_c0;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  if (local_6e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e8.AllocatorInstance.Data);
  }
  if (local_748.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_748.AllocatorInstance.Data);
  }
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_5a8);
  return bVar6;
}

// ConvertToLeafSelection @ 14e80bb00

void __cdecl
UE::Private::FractureHelpers::ConvertToLeafSelection
          (FGeometryCollection *param_1,FDataflowTransformSelection *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  bVar2 = FDataflowSelection::IsValidForCollection
                    ((FDataflowSelection *)param_2,(FManagedArrayCollection *)param_1);
  if (!bVar2) {
    FDataflowSelection::AsArrayValidated
              ((FDataflowSelection *)param_2,&local_18,(FManagedArrayCollection *)param_1);
    FDataflowSelection::InitFromArray
              ((FDataflowSelection *)param_2,(FManagedArrayCollection *)param_1,&local_18);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  uVar5 = 0;
  if (0 < *(int *)&param_2->field_0x20) {
    do {
      if ((((int)uVar5 < 0) || (*(int *)&param_2->field_0x20 <= (int)uVar5)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puVar4 = &param_2->field_0x8;
      if (*(undefined1 **)&param_2->field_0x18 != (undefined1 *)0x0) {
        puVar4 = *(undefined1 **)&param_2->field_0x18;
      }
      uVar3 = uVar5;
      if ((int)uVar5 < 0) {
        uVar3 = uVar5 + 0x1f;
      }
      if ((*(uint *)(puVar4 + (longlong)((int)uVar3 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0) {
        SelectLeavesHelper(param_1,param_2,uVar5);
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < *(int *)&param_2->field_0x20);
  }
  return;
}

// GenerateVoronoiSites @ 14e813870

void __cdecl
UE::Private::FractureHelpers::GenerateVoronoiSites
          (TBox<double> *param_1,int param_2,int param_3,int param_4,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  FScriptContainerElement *pFVar11;
  float fVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  
  fVar12 = __real_3f800000;
  iVar16 = (param_3 - param_2) + 1;
  dVar2 = (param_1->Max).field0_0x0._s_0.X;
  dVar3 = (param_1->Max).field0_0x0._s_0.Y;
  dVar4 = (param_1->Max).field0_0x0._s_0.Z;
  dVar5 = (param_1->Min).field0_0x0._s_0.Z;
  dVar6 = (param_1->Min).field0_0x0._s_0.X;
  dVar7 = (param_1->Min).field0_0x0._s_0.Y;
  if (iVar16 < 1) {
    iVar16 = 0;
  }
  else {
    param_4 = param_4 * 0xbb38435 + 0x3619636b;
    iVar16 = (int)(((float)((uint)param_4 >> 9 | 0x3f800000) - __real_3f800000) * (float)iVar16);
  }
  uVar13 = iVar16 + param_2;
  uVar15 = (ulonglong)uVar13;
  uVar17 = param_5->ArrayNum + uVar13;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  piVar1 = &param_5->ArrayMax;
  if (param_5->ArrayMax < (int)uVar17) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar17,&param_5->AllocatorInstance,param_5->ArrayNum,piVar1);
  }
  if (0 < (int)uVar13) {
    do {
      uVar13 = param_4 * 0xbb38435 + 0x3619636b;
      uVar17 = uVar13 * 0xbb38435 + 0x3619636b;
      param_4 = uVar17 * 0xbb38435 + 0x3619636b;
      iVar16 = param_5->ArrayNum;
      dVar8 = (param_1->Min).field0_0x0._s_0.X;
      dVar9 = (param_1->Min).field0_0x0._s_0.Y;
      dVar10 = (param_1->Min).field0_0x0._s_0.Z;
      if (iVar16 == *piVar1) {
        iVar16 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&param_5->AllocatorInstance,piVar1);
      }
      lVar14 = (longlong)iVar16;
      param_5->ArrayNum = iVar16 + 1;
      pFVar11 = (param_5->AllocatorInstance).Data;
      *(double *)(pFVar11 + lVar14 * 0x18) =
           (double)((float)((uint)param_4 >> 9 | 0x3f800000) - fVar12) * (dVar2 - dVar6) + dVar8;
      *(double *)(pFVar11 + lVar14 * 0x18 + 8) =
           (double)((float)(uVar17 >> 9 | 0x3f800000) - fVar12) * (dVar3 - dVar7) + dVar9;
      *(double *)(pFVar11 + lVar14 * 0x18 + 0x10) =
           (double)((float)(uVar13 >> 9 | 0x3f800000) - fVar12) * (dVar4 - dVar5) + dVar10;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  return;
}

// GetConvexHullsAsDynamicMesh @ 14e813d10

bool __cdecl
UE::FractureEngine::Convex::GetConvexHullsAsDynamicMesh
          (FManagedArrayCollection *param_1,FDynamicMesh3 *param_2,bool param_3,
          TArrayView<int_const_,int> *param_4,bool param_5)

{
  int *piVar1;
  FName FVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar7;
  TManagedArray<TRefCountPtr<Chaos::FConvex>_> *pTVar8;
  int iVar9;
  int *piVar10;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_148;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_138;
  TManagedArray<TRefCountPtr<Chaos::FConvex>_> *local_130;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_128;
  FDynamicMesh3 *local_120;
  bool local_118;
  FName local_110;
  FCollectionTransformFacade local_108;
  
  UE::Geometry::FDynamicMesh3::Clear(param_2);
  bVar3 = FGeometryCollectionConvexUtility::HasConvexHullData(param_1);
  FVar2 = FTransformCollection::TransformGroup;
  bVar4 = false;
  if (bVar3) {
    pFVar6 = ::FName::FName(&local_110,"TransformToConvexIndices");
    pTVar7 = FManagedArrayCollection::
             GetAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                       (param_1,*pFVar6,FVar2);
    pTVar8 = FManagedArrayCollection::GetAttribute<TRefCountPtr<Chaos::FConvex>_>
                       (param_1,FTransformCollection::ConvexHullAttribute,
                        FTransformCollection::ConvexGroup);
    GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
              (&local_108,param_1);
    GeometryCollection::Facades::FCollectionTransformFacade::ComputeCollectionSpaceTransforms
              (&local_108,&local_148);
    local_128 = &local_148;
    bVar4 = true;
    local_118 = param_5;
    local_138 = pTVar7;
    local_130 = pTVar8;
    local_120 = param_2;
    if (param_3) {
      piVar10 = param_4->DataPtr;
      piVar1 = piVar10 + param_4->ArrayNum;
      for (; piVar10 != piVar1; piVar10 = piVar10 + 1) {
        bVar3 = `UE::FractureEngine::Convex::GetConvexHullsAsDynamicMesh'::__l2::<lambda_1>::
                operator()(&local_138,*piVar10);
        if ((bVar4) && (bVar3)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
      }
    }
    else {
      iVar9 = 0;
      iVar5 = FManagedArrayCollection::NumElements(param_1,FTransformCollection::TransformGroup);
      if (0 < iVar5) {
        do {
          bVar3 = `UE::FractureEngine::Convex::GetConvexHullsAsDynamicMesh'::__l2::<lambda_1>::
                  operator()(&local_138,iVar9);
          if ((bVar4 == false) || (!bVar3)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          iVar9 = iVar9 + 1;
          iVar5 = FManagedArrayCollection::NumElements(param_1,FTransformCollection::TransformGroup)
          ;
        } while (iVar9 < iVar5);
      }
    }
    if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.AllocatorInstance.Data);
    }
  }
  return bVar4;
}

// GetConvexHullsAsDynamicMeshes @ 14e813ea0

bool __cdecl
UE::FractureEngine::Convex::GetConvexHullsAsDynamicMeshes
          (FManagedArrayCollection *param_1,
          TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> *param_2,bool param_3,
          TArrayView<int_const_,int> *param_4,bool param_5)

{
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  FName FVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar8;
  TManagedArray<TRefCountPtr<Chaos::FConvex>_> *pTVar9;
  int iVar10;
  int *piVar11;
  FName local_res10;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_158;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_148;
  TManagedArray<TRefCountPtr<Chaos::FConvex>_> *local_140;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_138;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> *local_130;
  bool local_128;
  FCollectionTransformFacade local_118;
  
  pFVar2 = (FDynamicMesh3 *)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayMax < 0) {
    DestructItems<UE::Geometry::FDynamicMesh3,int>(pFVar2,param_2->ArrayNum);
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x230,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
  }
  else {
    DestructItems<UE::Geometry::FDynamicMesh3,int>(pFVar2,param_2->ArrayNum);
    param_2->ArrayNum = 0;
  }
  iVar10 = 0;
  bVar4 = FGeometryCollectionConvexUtility::HasConvexHullData(param_1);
  FVar3 = FTransformCollection::TransformGroup;
  bVar5 = false;
  if (bVar4) {
    pFVar7 = ::FName::FName(&local_res10,"TransformToConvexIndices");
    pTVar8 = FManagedArrayCollection::
             GetAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                       (param_1,*pFVar7,FVar3);
    pTVar9 = FManagedArrayCollection::GetAttribute<TRefCountPtr<Chaos::FConvex>_>
                       (param_1,FTransformCollection::ConvexHullAttribute,
                        FTransformCollection::ConvexGroup);
    GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
              (&local_118,param_1);
    GeometryCollection::Facades::FCollectionTransformFacade::ComputeCollectionSpaceTransforms
              (&local_118,&local_158);
    local_138 = &local_158;
    bVar5 = true;
    local_128 = param_5;
    local_148 = pTVar8;
    local_140 = pTVar9;
    local_130 = param_2;
    if (param_3) {
      piVar11 = param_4->DataPtr;
      piVar1 = piVar11 + param_4->ArrayNum;
      for (; piVar11 != piVar1; piVar11 = piVar11 + 1) {
        bVar4 = `UE::FractureEngine::Convex::GetConvexHullsAsDynamicMeshes'::__l2::<lambda_1>::
                operator()(&local_148,*piVar11);
        if ((bVar5) && (bVar4)) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
      }
    }
    else {
      iVar6 = FManagedArrayCollection::NumElements(param_1,FTransformCollection::TransformGroup);
      if (0 < iVar6) {
        do {
          bVar4 = `UE::FractureEngine::Convex::GetConvexHullsAsDynamicMeshes'::__l2::<lambda_1>::
                  operator()(&local_148,iVar10);
          if ((bVar5 == false) || (!bVar4)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          iVar10 = iVar10 + 1;
          iVar6 = FManagedArrayCollection::NumElements(param_1,FTransformCollection::TransformGroup)
          ;
        } while (iVar10 < iVar6);
      }
    }
    if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.AllocatorInstance.Data);
    }
  }
  return bVar5;
}

// GetVoronoiBounds @ 14e815020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBox<double> * __cdecl
UE::Private::FractureHelpers::GetVoronoiBounds
          (TBox<double> *__return_storage_ptr__,TBox<double> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,float param_3,
          float param_4,int param_5,float param_6)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  double dVar16;
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined8 local_78;
  TVector<double>_u_0 local_68;
  double dStack_50;
  double local_48;
  double dStack_40;
  char local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = *(double *)&(param_1->Min).field0_0x0;
  dStack_a0 = (param_1->Min).field0_0x0._s_0.Y;
  local_98 = (param_1->Min).field0_0x0._s_0.Z;
  dStack_90 = (param_1->Max).field0_0x0._s_0.X;
  local_88 = (param_1->Max).field0_0x0._s_0.Y;
  dStack_80 = (param_1->Max).field0_0x0._s_0.Z;
  local_78._0_1_ = param_1->IsValid;
  local_78._1_1_ = param_1->Pad[0];
  local_78._2_1_ = param_1->Pad[1];
  local_78._3_1_ = param_1->Pad[2];
  local_78._4_1_ = param_1->Pad[3];
  local_78._5_1_ = param_1->Pad[4];
  local_78._6_1_ = param_1->Pad[5];
  local_78._7_1_ = param_1->Pad[6];
  if (0 < param_2->ArrayNum) {
    UE::Math::TBox<double>::TBox<double>
              ((TBox<double> *)&local_68._s_0,(TVector<double> *)(param_2->AllocatorInstance).Data,
               param_2->ArrayNum);
    if ((char)local_78 == '\0') {
      if (local_38 != '\0') {
        dStack_a0 = (double)CONCAT44(local_68._12_4_,local_68._8_4_);
        local_98 = local_68._s_0.Z;
        dStack_90 = dStack_50;
        local_88 = local_48;
        dStack_80 = dStack_40;
        goto LAB_14e815114;
      }
    }
    else if (local_38 != '\0') {
      if (dStack_a0 <= (double)CONCAT44(local_68._12_4_,local_68._8_4_)) {
        local_68._8_4_ = SUB84(dStack_a0,0);
        local_68._12_4_ = (undefined4)((ulonglong)dStack_a0 >> 0x20);
      }
      uVar7 = SUB84(local_68._s_0.Z,0);
      uVar15 = (undefined4)((ulonglong)local_68._16_8_ >> 0x20);
      if (local_98 <= local_68._s_0.Z) {
        uVar7 = SUB84(local_98,0);
        uVar15 = (undefined4)((ulonglong)local_98 >> 0x20);
      }
      if (local_a8 <= (double)CONCAT44(local_68._4_4_,local_68._0_4_)) {
        local_68._0_4_ = SUB84(local_a8,0);
        local_68._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
      }
      dStack_a0 = (double)CONCAT44(local_68._12_4_,local_68._8_4_);
      uVar4 = SUB84(dStack_50,0);
      uVar6 = (undefined4)((ulonglong)dStack_50 >> 0x20);
      if (dStack_50 <= dStack_90) {
        uVar4 = SUB84(dStack_90,0);
        uVar6 = (undefined4)((ulonglong)dStack_90 >> 0x20);
      }
      local_98 = (double)CONCAT44(uVar15,uVar7);
      uVar7 = SUB84(local_48,0);
      uVar15 = (undefined4)((ulonglong)local_48 >> 0x20);
      if (local_48 <= local_88) {
        uVar7 = SUB84(local_88,0);
        uVar15 = (undefined4)((ulonglong)local_88 >> 0x20);
      }
      dStack_90 = (double)CONCAT44(uVar6,uVar4);
      uVar4 = SUB84(dStack_40,0);
      uVar6 = (undefined4)((ulonglong)dStack_40 >> 0x20);
      if (dStack_40 <= dStack_80) {
        uVar4 = SUB84(dStack_80,0);
        uVar6 = (undefined4)((ulonglong)dStack_80 >> 0x20);
      }
      local_88 = (double)CONCAT44(uVar15,uVar7);
      dStack_80 = (double)CONCAT44(uVar6,uVar4);
      goto LAB_14e815114;
    }
  }
  local_68._0_4_ = SUB84(local_a8,0);
  local_68._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
LAB_14e815114:
  iVar1 = 0;
  if (7 < param_5) {
    uVar2 = (param_5 - 8U >> 3) + 1;
    uVar3 = (ulonglong)uVar2;
    iVar1 = uVar2 * 8;
    do {
      fVar8 = param_4 * param_6;
      fVar5 = (float)((uint)param_4 & __xmm_7fffffff7fffffff7fffffff7fffffff);
      fVar9 = fVar8 * param_6;
      fVar10 = fVar9 * param_6;
      fVar11 = fVar10 * param_6;
      fVar12 = fVar11 * param_6;
      fVar13 = fVar12 * param_6;
      fVar14 = fVar13 * param_6;
      param_4 = fVar14 * param_6;
      param_3 = param_3 + fVar5 + (float)((uint)fVar8 & __xmm_7fffffff7fffffff7fffffff7fffffff) +
                (float)((uint)fVar9 & __xmm_7fffffff7fffffff7fffffff7fffffff) +
                (float)((uint)fVar10 & __xmm_7fffffff7fffffff7fffffff7fffffff) +
                (float)((uint)fVar11 & __xmm_7fffffff7fffffff7fffffff7fffffff) +
                (float)((uint)fVar12 & __xmm_7fffffff7fffffff7fffffff7fffffff) +
                (float)((uint)fVar13 & __xmm_7fffffff7fffffff7fffffff7fffffff) +
                (float)((uint)fVar14 & __xmm_7fffffff7fffffff7fffffff7fffffff);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (iVar1 < param_5) {
    uVar3 = (ulonglong)(uint)(param_5 - iVar1);
    do {
      param_3 = param_3 + (float)((uint)param_4 & __xmm_7fffffff7fffffff7fffffff7fffffff);
      uVar3 = uVar3 - 1;
      param_4 = param_4 * param_6;
    } while (uVar3 != 0);
  }
  dVar16 = (double)(param_3 + __real_38d1b717);
  (__return_storage_ptr__->Min).field0_0x0._s_0.X =
       (double)CONCAT44(local_68._4_4_,local_68._0_4_) - dVar16;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dStack_a0 - dVar16;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_98 - dVar16;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar16 + dStack_90;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar16 + local_88;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar16 + dStack_80;
  __return_storage_ptr__->IsValid = '\x01';
  return __return_storage_ptr__;
}

// InitializeConnectivity @ 14e815580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
* __cdecl UE::Private::ClusterMagnet::InitializeConnectivity
                    (TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                     *__return_storage_ptr__,
                    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,
                    FGeometryCollection *param_2,int param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 uVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  longlong lVar9;
  TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
  *pTVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  undefined1 auStackY_1c8 [32];
  undefined1 local_198 [4];
  uint local_194;
  int local_190;
  uint local_188 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  int iStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  int local_150;
  undefined1 local_14c [20];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  uint *local_108;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_100;
  undefined1 local_f8 [32];
  void *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  int local_c4;
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_190 = param_3;
  local_14c._12_8_ = param_2;
  FGeometryCollectionProximityUtility::FGeometryCollectionProximityUtility
            ((FGeometryCollectionProximityUtility *)(local_14c + 4),param_2);
  FGeometryCollectionProximityUtility::RequireProximity
            ((FGeometryCollectionProximityUtility *)(local_14c + 4),(FConvexHulls *)0x0);
  puVar1 = &(param_1->Elements).field_0x10;
  *(undefined8 *)__return_storage_ptr__ = 0;
  iStack_178 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  uStack_174 = 1;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  iStack_164 = 0;
  local_160 = iStack_178;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar14 = *puVar15;
    local_160 = 0;
    iStack_178 = 0;
    while (uVar14 == 0) {
      lVar9 = (longlong)iStack_178;
      local_160 = local_160 + 0x20;
      iStack_178 = iStack_178 + 1;
      iStack_164 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iStack_178) goto LAB_14e81567f;
      uVar14 = puVar15[lVar9 + 1];
    }
    uStack_174 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_174 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_150 = (int)lVar9;
    iStack_164 = local_150 + -1 + local_160;
    if (iVar3 < iStack_164) {
      iStack_164 = iVar3;
    }
  }
LAB_14e81567f:
  uVar14 = *(uint *)&(param_1->Elements).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_158 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_168 = 0xffffffff;
  TStack_130._padding_ = CONCAT44(uStack_174,iStack_178);
  TStack_130.CurrentBitIndex = iStack_164;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_130._28_4_ = iStack_164;
  TStack_130.BaseBitIndex = local_160;
  uStack_110 = CONCAT44(uStack_154,iStack_158);
  local_180 = param_1;
  local_170 = puVar1;
  iStack_15c = iStack_164;
  local_138 = param_1;
  TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
               *)(*pcVar5)();
    return pTVar10;
  }
  uVar6 = local_14c._12_8_;
  iVar3 = local_190;
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar14 != uVar4) {
    puVar11 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar9 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar12) goto LAB_14e815790;
      uVar14 = *(uint *)(puVar11 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar14 = (int)lVar9 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_14e815790:
  while( true ) {
    pTVar7 = local_138;
    if (*(int *)&(local_138->Elements).field_0x8 - *(int *)&(local_138->Elements).field_0x34 !=
        (int)uStack_110) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_198);
    }
    if (((TStack_130.CurrentBitIndex == uVar14) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1)
       ) break;
    local_cc = 0x80;
    local_c8 = 0xffffffff;
    local_f8._0_8_ = (FScriptContainerElement *)0x0;
    local_f8._8_8_ = 0;
    local_194 = *(uint *)(*(longlong *)&pTVar7->Elements +
                         (longlong)TStack_130.CurrentBitIndex * 0xc);
    local_d8 = (void *)0x0;
    local_d0 = 0;
    local_c4 = 0;
    local_b8 = (ForElementType<FSetElementId>)0x0;
    local_b0 = 0;
    CollectTopNodeConnections
              ((FGeometryCollection *)uVar6,local_194,iVar3,
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_f8);
    local_188[0] = local_194;
    if (local_f8._8_4_ != local_c4) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_f8,local_194,
                 (int *)local_188);
    }
    local_108 = &local_194;
    local_100 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Intersect
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_f8,
                           &local_a8,param_1);
    TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<int_const_&,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_&&>_>
              ((TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                *)__return_storage_ptr__,
               (TPairInitializer<int_const_&,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_&&>
                *)local_14c,(bool *)&local_108);
    local_a8.HashSize = 0;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8.Elements);
    local_b0 = 0;
    if (local_b8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_b8);
    }
    iVar12 = SUB84(local_f8._8_8_,4);
    local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
    if (iVar12 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
    }
    local_c8 = 0xffffffff;
    local_c4 = 0;
    local_d0 = 0;
    if (0x80 < local_cc) {
      local_cc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
    }
    if (local_d8 != (void *)0x0) {
      FMemory::Free(local_d8);
    }
    if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_f8._0_8_);
    }
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  return __return_storage_ptr__;
}

// ProcessNewlyFracturedBones @ 14e818b80

void __cdecl
UE::Private::FractureHelpers::ProcessNewlyFracturedBones
          (FGeometryCollection *param_1,int param_2,int param_3)

{
  uint *puVar1;
  FName FVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FName *pFVar8;
  TManagedArray<FGuid> *pTVar9;
  FGuid *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  FName local_res20;
  FName local_58;
  FName local_50;
  FName local_48;
  uint local_40;
  FConstructionParameters local_38;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  FGuid local_18;
  
  uVar12 = (ulonglong)param_2;
  if (param_2 != -1) {
    if (-1 < param_3) {
      FFractureEngineMaterials::SetMaterialOnGeometryAfter
                ((FManagedArrayCollection *)param_1,param_2,InternalFaces,param_3);
      FGeometryCollection::ReindexMaterials(param_1);
    }
    FVar2 = FTransformCollection::TransformGroup;
    pFVar8 = ::FName::FName(&local_res20,"GUID");
    bVar5 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_1,*pFVar8,FVar2);
    if (!bVar5) {
      pFVar8 = ::FName::FName(&local_58,"");
      FVar4 = FTransformCollection::TransformGroup;
      local_40 = local_40 & 0xffff0000;
      local_48 = *pFVar8;
      pFVar8 = ::FName::FName(&local_50,"GUID");
      local_38.GroupIndexDependency = local_48;
      FVar2 = *pFVar8;
      local_38.Saved = (bool)(undefined1)local_40;
      local_38.bAllowCircularDependency = (bool)local_40._1_1_;
      local_38._10_2_ = local_40._2_2_;
      bVar5 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_1,FVar2,FVar4);
      if (!bVar5) {
        FManagedArrayCollection::AddNewAttributeImpl<FGuid>
                  ((FManagedArrayCollection *)param_1,FVar2,FVar4,&local_38);
      }
      FManagedArrayCollection::ModifyAttribute<FGuid>
                ((FManagedArrayCollection *)param_1,FVar2,FVar4);
    }
    FVar2 = FTransformCollection::TransformGroup;
    pFVar8 = ::FName::FName(&local_48,"GUID");
    pTVar9 = FManagedArrayCollection::ModifyAttribute<FGuid>
                       ((FManagedArrayCollection *)param_1,*pFVar8,FVar2);
    iVar6 = (**(code **)(*(longlong *)pTVar9 + 0x60))(pTVar9);
    if (param_2 < iVar6) {
      lVar13 = uVar12 << 4;
      do {
        pFVar10 = FGuid::NewGuid(&local_18);
        uVar11 = (uint)uVar12;
        local_28 = pFVar10->A;
        uStack_24 = pFVar10->B;
        uStack_20 = pFVar10->C;
        uStack_1c = pFVar10->D;
        uVar7 = 0;
        if ((int)uVar11 < *(int *)&pTVar9->field_0x18) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar12 = (ulonglong)(uVar11 + 1);
        puVar1 = (uint *)(*(longlong *)&pTVar9->field_0x10 + lVar13);
        *puVar1 = local_28;
        puVar1[1] = uStack_24;
        puVar1[2] = uStack_20;
        puVar1[3] = uStack_1c;
        lVar13 = lVar13 + 0x10;
        iVar6 = (**(code **)(*(longlong *)pTVar9 + 0x60))(pTVar9);
      } while ((int)(uVar11 + 1) < iVar6);
    }
  }
  return;
}

// SelectLeavesHelper @ 14e81b630

void __cdecl
UE::Private::FractureHelpers::SelectLeavesHelper
          (FGeometryCollection *param_1,FDataflowTransformSelection *param_2,int param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  longlong *plVar15;
  undefined1 local_res18 [8];
  longlong *local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (((param_3 < *(int *)&param_2->field_0x20) && (-1 < param_3)) &&
     (param_3 < *(int *)&(param_1->SimulationType).field_0x18)) {
    iVar10 = 0;
    uVar7 = 0;
    if (param_3 < *(int *)&(param_1->SimulationType).field_0x18) {
      uVar7 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(int *)(*(longlong *)&(param_1->SimulationType).field_0x10 + (longlong)param_3 * 4) == 1) {
      FDataflowSelection::SetSelected((FDataflowSelection *)param_2,param_3);
    }
    else {
      FDataflowSelection::SetNotSelected((FDataflowSelection *)param_2,param_3);
      uVar7 = 0;
      if (param_3 < (int)param_1->_padding_) {
        uVar7 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar7 = 1;
      plVar15 = (longlong *)((longlong)param_3 * 0x50 + param_1->_padding_);
      iVar13 = 0;
      iVar3 = (int)plVar15[5];
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar15 + 2);
      iVar8 = 0;
      if (iVar3 != 0) {
        pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)plVar15[4];
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar15[4] ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar14 = pTVar1;
        }
        uVar12 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
        while (uVar12 == 0) {
          lVar9 = (longlong)iVar10;
          iVar13 = iVar13 + 0x20;
          iVar10 = iVar10 + 1;
          iVar8 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e81b7bc;
          uVar12 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar9 * 4 + 4);
        }
        uVar7 = -uVar12 & uVar12;
        uVar2 = (ulonglong)uVar7 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar8 = iVar13 + -1 + (int)lVar9;
        if (iVar3 < iVar8) {
          iVar8 = iVar3;
        }
      }
LAB_14e81b7bc:
      uVar12 = *(uint *)(plVar15 + 5);
      uVar11 = uVar12 & 0xffffffe0;
      TStack_60._padding_ = CONCAT44(uVar7,iVar10);
      TStack_60.CurrentBitIndex = iVar8;
      TStack_60.UnvisitedBitMask = 0xffffffff;
      iVar10 = (int)uVar12 >> 5;
      TStack_60._28_4_ = local_9c;
      TStack_60.BaseBitIndex = iVar13;
      uStack_40 = CONCAT44(uStack_6c,(int)plVar15[1] - *(int *)((longlong)plVar15 + 0x34));
      local_res20 = plVar15;
      TStack_60.Array = pTVar1;
      if (((int)uVar12 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar5 = local_res20;
      uVar7 = *(uint *)(plVar15 + 5);
      if (uVar12 != uVar7) {
        pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)plVar15[4];
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar15[4] ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar14 = pTVar1;
        }
        uVar12 = -1 << ((byte)uVar12 & 0x1f) &
                 *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar10 * 4);
        while (uVar12 == 0) {
          lVar9 = (longlong)iVar10;
          uVar11 = uVar11 + 0x20;
          iVar10 = iVar10 + 1;
          uVar12 = uVar7;
          if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
          goto LAB_14e81b8b0;
          uVar12 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar9 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar12 = (int)lVar9 + -1 + uVar11;
        if ((int)uVar7 < (int)uVar12) {
          uVar12 = uVar7;
        }
      }
LAB_14e81b8b0:
      while( true ) {
        if ((int)plVar15[1] - *(int *)((longlong)plVar15 + 0x34) != (int)uStack_40) {
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((TStack_60.CurrentBitIndex == uVar12) && (TStack_60.Array == pTVar1)) &&
           (plVar15 == plVar5)) break;
        SelectLeavesHelper(param_1,param_2,
                           *(int *)(*plVar15 + (longlong)TStack_60.CurrentBitIndex * 0xc));
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      }
    }
  }
  else {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3803646685427531608>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Fracture\\Source\\FractureEngine\\Private\\FractureEngineFracturing.cpp"
                       ,0xa8,
                       "BoneIdx < InOutTransformSelection.Num() && GeometryCollection.SimulationType.IsValidIndex(BoneIdx)"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// SeparateClusterMagnets @ 14e81cfa0

void __cdecl
UE::Private::ClusterMagnet::SeparateClusterMagnets
          (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
          *param_3,TArray<UE::Private::ClusterMagnet::FClusterMagnet,TSizedDefaultAllocator<32>_>
                   *param_4,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_5)

{
  ulonglong uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res10;
  TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
  *local_res18;
  int local_b8 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  uVar12 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  local_res10 = param_2;
  local_res18 = param_3;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (param_4->ArrayMax < (int)uVar12) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,uVar12,&param_4->AllocatorInstance,param_4->ArrayNum,&param_4->ArrayMax);
  }
  uVar12 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  if ((uint)(*(int *)&(param_5->Elements).field_0x8 - *(int *)&(param_5->Elements).field_0x34) <
      uVar12) {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)param_5,uVar12);
    if (uVar12 < 4) {
      iVar5 = 1;
    }
    else {
      uVar1 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_80 = (undefined4)lVar8;
      iVar5 = 1 << ((byte)lVar8 & 0x1f);
    }
    if ((param_5->HashSize == 0) || (param_5->HashSize < iVar5)) {
      param_5->HashSize = iVar5;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(param_5);
    }
  }
  iVar5 = *(int *)&(param_1->Elements).field_0x28;
  iStack_a8 = 0;
  local_90 = 0;
  uStack_a4 = 1;
  iStack_94 = 0;
  if (iVar5 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)&(param_1->Elements).field_0x10;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar8 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14e81d101;
      uVar12 = puVar14[lVar8 + 1];
    }
    uStack_a4 = -uVar12 & uVar12;
    uVar1 = (ulonglong)uStack_a4 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_7c = (int)lVar8;
    iStack_94 = local_90 + -1 + local_7c;
    if (iVar5 < iStack_94) {
      iStack_94 = iVar5;
    }
  }
LAB_14e81d101:
  local_a0 = &(param_1->Elements).field_0x10;
  uVar12 = *(uint *)&(param_1->Elements).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  iStack_88 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_98 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_a4,iStack_a8);
  TStack_60.CurrentBitIndex = iStack_94;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iStack_94;
  TStack_60.BaseBitIndex = local_90;
  uStack_40 = CONCAT44(uStack_84,iStack_88);
  local_b0 = param_1;
  iStack_8c = iStack_94;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a0;
  if ((((int)uVar12 < 0) || (iVar5 < (int)uVar12)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar9 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar12 != uVar9) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(param_1->Elements).field_0x10;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e81d200;
      uVar12 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_78 = (int)lVar8;
    uVar12 = local_78 + -1 + uVar11;
    if ((int)uVar9 < (int)uVar12) {
      uVar12 = uVar9;
    }
  }
LAB_14e81d200:
  do {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar12) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10)
        ) && (pTVar7 == param_1)) {
      return;
    }
    iVar5 = *(int *)(*(longlong *)&pTVar7->Elements + (longlong)TStack_60.CurrentBitIndex * 0xc);
    pFVar6 = (local_res10->AllocatorInstance).Data;
    pFVar2 = pFVar6 + (longlong)local_res10->ArrayNum * 4;
    for (; local_b8[0] = iVar5, pFVar6 != pFVar2; pFVar6 = pFVar6 + 4) {
      if (*(int *)pFVar6 == iVar5) {
        iVar10 = param_4->ArrayNum;
        if (iVar10 == param_4->ArrayMax) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x8a0,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar10 + 1;
        DefaultConstructItems<UE::Private::ClusterMagnet::FClusterMagnet,int>
                  ((param_4->AllocatorInstance).Data + (longlong)iVar10 * 0xa0,1);
        uVar9 = param_4->ArrayNum - 1;
        uVar11 = 0;
        if ((int)uVar9 < param_4->ArrayNum) {
          uVar11 = ~uVar9 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar10 = param_4->ArrayNum;
        pFVar2 = (param_4->AllocatorInstance).Data;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                   (pFVar2 + (longlong)iVar10 * 0xa0 + -0xa0),&local_74,(bool *)local_b8);
        pTVar7 = TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                 ::FindChecked((TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                                *)local_res18,iVar5);
        this = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
               (pFVar2 + (longlong)iVar10 * 0xa0 + -0x50);
        if (this != pTVar7) {
          Core::Private::
          CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                    ((ForElementType<FSetElementId> *)(pFVar2 + (longlong)iVar10 * 0xa0 + -0x18),
                     (int *)(pFVar2 + (longlong)iVar10 * 0xa0 + -8),&pTVar7->Hash,pTVar7->HashSize);
          iVar5 = *(int *)&(pTVar7->Elements).field_0x8;
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,iVar5);
          Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,iVar5,(ForAnyElementType *)this,
                     (int *)(pFVar2 + (longlong)iVar10 * 0xa0 + -0x48),
                     (int *)(pFVar2 + (longlong)iVar10 * 0xa0 + -0x44));
          puVar13 = &(pTVar7->Elements).field_0x10;
          *(undefined4 *)(pFVar2 + (longlong)iVar10 * 0xa0 + -0x20) =
               *(undefined4 *)&(pTVar7->Elements).field_0x30;
          *(undefined4 *)(pFVar2 + (longlong)iVar10 * 0xa0 + -0x1c) =
               *(undefined4 *)&(pTVar7->Elements).field_0x34;
          if ((TBitArray<FDefaultBitArrayAllocator> *)(pFVar2 + (longlong)iVar10 * 0xa0 + -0x40) !=
              (TBitArray<FDefaultBitArrayAllocator> *)puVar13) {
            TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                      ((TBitArray<FDefaultBitArrayAllocator> *)
                       (pFVar2 + (longlong)iVar10 * 0xa0 + -0x40),
                       (TBitArray<FDefaultBitArrayAllocator> *)puVar13);
          }
          if (iVar5 != 0) {
            memcpy(*(void **)&this->Elements,*(void **)&pTVar7->Elements,(longlong)iVar5 * 0xc);
          }
        }
        goto LAB_14e81d280;
      }
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (param_5,local_70,(bool *)local_b8);
LAB_14e81d280:
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// SetBoneColor @ 14e81d440

void __cdecl
UE::Dataflow::Private::SetBoneColor
          (FManagedArrayCollection *param_1,int param_2,FLinearColor *param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  float *pfVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  FLinearColor *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar10;
  TManagedArray<FLinearColor> *pTVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  FLinearColor *local_res18;
  int local_res20;
  undefined4 uStack_bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  FLinearColor_u_0 local_78 [2];
  undefined4 local_4c;
  
  local_res18 = param_3;
  pTVar10 = FManagedArrayCollection::
            GetAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                      (param_1,FTransformCollection::ChildrenAttribute,
                       FTransformCollection::TransformGroup);
  pTVar11 = FManagedArrayCollection::ModifyAttribute<FLinearColor>
                      (param_1,FGeometryCollection::BoneColorAttribute,
                       FTransformCollection::TransformGroup);
  iVar12 = 0;
  uVar18 = (uint)~param_2 >> 0x1f;
  uVar8 = 0;
  if (param_2 < *(int *)&pTVar10->field_0x18) {
    uVar8 = uVar18;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar17 = (longlong)param_2 * 0x50;
  if (*(int *)(lVar17 + 8 + *(longlong *)&pTVar10->field_0x10) ==
      *(int *)(lVar17 + 0x34 + *(longlong *)&pTVar10->field_0x10)) {
    local_88 = (local_res18->field0_0x0)._s_0.R;
    fStack_84 = (local_res18->field0_0x0)._s_0.G;
    fStack_80 = (local_res18->field0_0x0)._s_0.B;
    fStack_7c = (local_res18->field0_0x0)._s_0.A;
    uVar8 = 0;
    if (param_2 < *(int *)&pTVar11->field_0x18) {
      uVar8 = uVar18;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pfVar2 = (float *)(*(longlong *)&pTVar11->field_0x10 + (longlong)param_2 * 0x10);
    *pfVar2 = local_88;
    pfVar2[1] = fStack_84;
    pfVar2[2] = fStack_80;
    pfVar2[3] = fStack_7c;
  }
  else {
    uVar8 = 0;
    if (param_2 < *(int *)&pTVar10->field_0x18) {
      uVar8 = uVar18;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar8 = 1;
    plVar16 = (longlong *)(*(longlong *)&pTVar10->field_0x10 + lVar17);
    iVar4 = (int)plVar16[5];
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar16 + 2);
    iVar14 = 0;
    iVar9 = 0;
    if (iVar4 != 0) {
      pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)plVar16[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar16[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar15 = pTVar1;
      }
      uVar18 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
      while (uVar18 == 0) {
        lVar17 = (longlong)iVar12;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar12 + 1;
        iVar9 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14e81d62d;
        uVar18 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar17 * 4 + 4);
      }
      uVar8 = -uVar18 & uVar18;
      uVar3 = (ulonglong)uVar8 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_res20 = (int)lVar17;
      iVar9 = iVar14 + -1 + local_res20;
      if (iVar4 < iVar9) {
        iVar9 = iVar4;
      }
    }
LAB_14e81d62d:
    uVar18 = *(uint *)(plVar16 + 5);
    uVar13 = uVar18 & 0xffffffe0;
    TStack_b0._padding_ = CONCAT44(uVar8,iVar12);
    TStack_b0.CurrentBitIndex = iVar9;
    TStack_b0.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar18 >> 5;
    TStack_b0._28_4_ = local_4c;
    TStack_b0.BaseBitIndex = iVar14;
    uStack_90 = CONCAT44(uStack_bc,(int)plVar16[1] - *(int *)((longlong)plVar16 + 0x34));
    TStack_b0.Array = pTVar1;
    if ((((int)uVar18 < 0) || (iVar4 < (int)uVar18)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar6 = local_res18;
    uVar8 = *(uint *)(plVar16 + 5);
    if (uVar18 != uVar8) {
      pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)plVar16[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar16[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar15 = pTVar1;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) &
               *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
      while (uVar18 == 0) {
        lVar17 = (longlong)iVar12;
        uVar13 = uVar13 + 0x20;
        iVar12 = iVar12 + 1;
        uVar18 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14e81d731;
        uVar18 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar17 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar18 = (int)lVar17 + -1 + uVar13;
      if ((int)uVar8 < (int)uVar18) {
        uVar18 = uVar8;
      }
    }
LAB_14e81d731:
    while( true ) {
      if ((int)plVar16[1] - *(int *)((longlong)plVar16 + 0x34) != (int)uStack_90) {
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_b0.CurrentBitIndex == uVar18) && (TStack_b0.Array == pTVar1)) break;
      local_78[0]._0_8_ = *(undefined8 *)&pFVar6->field0_0x0;
      local_78[0]._8_8_ = *(undefined8 *)((longlong)&pFVar6->field0_0x0 + 8);
      SetBoneColor(param_1,*(int *)(*plVar16 + (longlong)TStack_b0.CurrentBitIndex * 0xc),
                   (FLinearColor *)&local_78[0]._s_0);
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
    }
  }
  return;
}

// SetMaterialOnFaceRange @ 14e81f590

void __cdecl
UE::FractureEngineMaterialHelpers::SetMaterialOnFaceRange
          (TManagedArray<bool> *param_1,TManagedArray<int> *param_2,int param_3,int param_4,
          ETargetFaces param_5,int param_6)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  
  uVar6 = (ulonglong)param_3;
  if (param_3 < param_4) {
    bVar2 = (byte)param_3 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar9 = uVar6 * 4;
    do {
      uVar5 = (uint)uVar6;
      if (param_5 == AllFaces) {
LAB_14e81f656:
        uVar4 = 0;
        if ((int)uVar5 < *(int *)&param_2->field_0x18) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(int *)(lVar9 + *(longlong *)&param_2->field_0x10) = param_6;
      }
      else {
        if ((((int)uVar5 < 0) || (*(int *)&param_1->field_0x28 <= (int)uVar5)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &param_1->field_0x10;
        if (*(undefined1 **)&param_1->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&param_1->field_0x20;
        }
        uVar4 = uVar5;
        if ((int)uVar5 < 0) {
          uVar4 = uVar5 + 0x1f;
        }
        if ((param_5 == InternalFaces) ==
            ((*(uint *)(puVar8 + (longlong)((int)uVar4 >> 5) * 4) & uVar7) != 0))
        goto LAB_14e81f656;
      }
      uVar6 = (ulonglong)(uVar5 + 1);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      lVar9 = lVar9 + 4;
    } while ((int)(uVar5 + 1) < param_4);
  }
  return;
}

// SimplifyConvexHull @ 14e820060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
UE::FractureEngine::Convex::SimplifyConvexHull
          (FConvex *param_1,FConvex *param_2,FSimplifyHullSettings *param_3)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  EIndexType EVar8;
  short sVar9;
  TConvexHalfEdgeStructureData<int> *pTVar10;
  code *pcVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  uint uVar17;
  FConvex *pFVar18;
  ForAnyElementType FVar19;
  bool bVar20;
  undefined1 uVar21;
  int iVar22;
  uint uVar23;
  FConvex *pFVar24;
  TVector<float,3> *pTVar25;
  FPlaneData *pFVar26;
  longlong lVar27;
  FPlaneData *pFVar28;
  FPlaneData *pFVar29;
  longlong lVar30;
  uint uVar31;
  FConvex *pFVar32;
  int iVar33;
  uint uVar34;
  FConvex *pFVar35;
  int iVar36;
  uint uVar37;
  FScriptContainerElement *pFVar38;
  uint uVar39;
  ulonglong uVar40;
  FConvex *pFVar41;
  uint uVar42;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar43;
  float fVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  undefined1 auStackY_bb8 [32];
  FDisjointSet local_b68;
  FConvex *local_b58;
  uint local_b50;
  ForAnyElementType local_b48;
  int local_b40;
  int iStack_b3c;
  uint local_b38;
  TArray<double,TSizedDefaultAllocator<32>_> local_b30;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_b20;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_b10;
  <lambda_2> local_b00 [4];
  uint local_afc;
  <lambda_2> local_af8 [4];
  undefined8 local_af4;
  undefined4 local_aec;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_ae8;
  FSimplifyHullSettings *local_ad8;
  float local_ad0;
  float fStack_acc;
  float local_ac8;
  FScriptContainerElement *local_ac0;
  int local_ab8 [2];
  ulonglong local_ab0;
  FIndexPriorityQueue local_aa8;
  int local_a70;
  undefined4 local_a6c;
  int local_a68;
  undefined4 local_a64;
  FConvex *local_a60;
  undefined **local_a58;
  FDynamicMesh3 *local_a50;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_a48;
  FConvex **local_a40;
  FDisjointSet *local_a38;
  TArray<double,TSizedDefaultAllocator<32>_> *local_a30;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_a28;
  double local_a20;
  double local_a18;
  double local_a00;
  double local_9f8;
  double dStack_9f0;
  double local_9e8;
  FDynamicMesh3 local_9d8;
  FDynamicMesh3 local_7a8;
  FConvex local_578;
  FConvex local_4c8;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> local_418;
  undefined1 local_358 [320];
  ESimplificationCollapseModes local_218;
  EGeometricErrorCriteria local_204;
  double local_200;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_bb8;
  if (((param_1 == (FConvex *)0x0) || (param_2 == (FConvex *)0x0)) ||
     ((param_1->StructureData).Data.Ptr == (void *)0x0)) {
    bVar20 = false;
  }
  else {
    pFVar32 = (FConvex *)0x0;
    uVar23 = 0;
    uVar31 = (param_1->Planes).ArrayNum;
    uVar40 = (ulonglong)(int)uVar31;
    pFVar35 = pFVar32;
    pFVar24 = pFVar32;
    uVar42 = uVar23;
    local_b58 = param_1;
    local_b50 = uVar31;
    local_ad8 = param_3;
    local_a60 = param_2;
    if (0 < (int)uVar31) {
      do {
        EVar8 = (param_1->StructureData).IndexType;
        iVar36 = (int)pFVar35;
        if (EVar8 == Small) {
          pFVar29 = ::Chaos::TConvexHalfEdgeStructureData<unsigned_char>::GetPlane
                              ((param_1->StructureData).Data.DataS,iVar36);
          uVar39 = (uint)pFVar29->NumHalfEdges;
        }
        else if (EVar8 == Medium) {
          pFVar28 = ::Chaos::TConvexHalfEdgeStructureData<short>::GetPlane
                              ((param_1->StructureData).Data.DataM,iVar36);
          uVar39 = (int)pFVar28->NumHalfEdges;
        }
        else {
          uVar39 = uVar23;
          if (EVar8 == Large) {
            pFVar26 = ::Chaos::TConvexHalfEdgeStructureData<int>::GetPlane
                                ((param_1->StructureData).Data.DataL,iVar36);
            uVar39 = pFVar26->NumHalfEdges;
          }
        }
        uVar42 = uVar39 - 2;
        if ((int)(uVar39 - 2) < 0) {
          uVar42 = uVar23;
        }
        pFVar35 = (FConvex *)(ulonglong)(iVar36 + 1U);
        uVar42 = (int)pFVar24 + uVar42;
        pFVar24 = (FConvex *)(ulonglong)uVar42;
      } while ((int)(iVar36 + 1U) < (int)uVar31);
    }
    pFVar35 = local_b58;
    if ((param_3->bUseTargetTriangleCount == false) || (param_3->TargetTriangleCount < (int)uVar42))
    {
      if (param_3->SimplifyMethod == MeshQSlim) {
        UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_9d8);
        ::`anonymous_namespace'::AppendConvexHullToCompactDynamicMesh
                  (pFVar35,&local_9d8,(TTransform<double> *)0x0,false,false,false);
        UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
        TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>
                  ((TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *)local_358,
                   &local_9d8);
        local_218 = (ESimplificationCollapseModes)(param_3->bUseExistingVertexPositions != false);
        if (param_3->bUseGeometricTolerance == false) {
          if (param_3->bUseTargetTriangleCount == false) {
            UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
            SimplifyToMaxError((TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *)
                               local_358,param_3->ErrorTolerance * param_3->ErrorTolerance);
          }
          else {
            UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
            SimplifyToTriangleCount
                      ((TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *)local_358
                       ,param_3->TargetTriangleCount);
          }
        }
        else {
          local_200 = param_3->ErrorTolerance;
          local_204 = PredictedPointToProjectionTarget;
          UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_7a8,&local_9d8);
          UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
          TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_418,&local_7a8,true);
          local_a58 = &___7FMeshProjectionTarget_Geometry_UE__6B_;
          local_a50 = &local_7a8;
          local_a48 = &local_418;
          local_358._208_8_ = &local_a58;
          if (param_3->bUseTargetTriangleCount == false) {
            iVar36 = 4;
          }
          else {
            iVar36 = param_3->TargetTriangleCount;
          }
          UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
          SimplifyToTriangleCount
                    ((TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *)local_358,
                     iVar36);
          local_a58 = &___7IProjectionTarget_Geometry_UE__6B_;
          UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
          ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_418);
          UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_7a8);
        }
        local_b10.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b10.ArrayNum = 0;
        local_b10.ArrayMax = 0;
        if (local_9d8.VertexRefCounts.UsedCount < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_9d8.VertexRefCounts.UsedCount);
        }
        pFVar35 = pFVar32;
        if (0 < local_9d8.VertexRefCounts.UsedCount) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,local_9d8.VertexRefCounts.UsedCount,&local_b10.AllocatorInstance,0,
                     &local_b10.ArrayMax);
          pFVar35 = (FConvex *)(local_b10._8_8_ & 0xffffffff);
        }
        iVar36 = local_9d8.VertexRefCounts.RefCounts.CurBlock * 0x200 +
                 local_9d8.VertexRefCounts.RefCounts.CurBlockUsed;
        if (((iVar36 != 0) &&
            (0xfffd < (ushort)(**(short **)
                                 CONCAT44(local_9d8.VertexRefCounts.RefCounts.Blocks.
                                          AllocatorInstance.Data._4_4_,
                                          local_9d8.VertexRefCounts.RefCounts.Blocks.
                                          AllocatorInstance.Data._0_4_) - 1U))) &&
           (pFVar32 = (FConvex *)&DAT_00000001, 1 < iVar36)) {
          do {
            sVar9 = *(short *)(((undefined8 *)
                               CONCAT44(local_9d8.VertexRefCounts.RefCounts.Blocks.AllocatorInstance
                                        .Data._4_4_,
                                        local_9d8.VertexRefCounts.RefCounts.Blocks.AllocatorInstance
                                        .Data._0_4_))[(ulonglong)pFVar32 >> 9] +
                              (ulonglong)((uint)pFVar32 & 0x1ff) * 2);
            if ((sVar9 != 0) && (sVar9 != -1)) break;
            uVar31 = (uint)pFVar32 + 1;
            pFVar32 = (FConvex *)(ulonglong)uVar31;
          } while ((int)uVar31 < iVar36);
        }
        iVar33 = local_9d8.VertexRefCounts.RefCounts.CurBlock * 0x200 +
                 local_9d8.VertexRefCounts.RefCounts.CurBlockUsed;
        if ((int)pFVar32 != iVar33) {
          do {
            uVar40 = (ulonglong)((uint)pFVar32 & 0x1ff);
            local_9e8 = *(double *)
                         (*(longlong *)
                           (local_9d8.Vertices.Blocks.AllocatorInstance.Data +
                           ((ulonglong)pFVar32 >> 9) * 8) + 0x10 + uVar40 * 0x18);
            pdVar1 = (double *)
                     (*(longlong *)
                       (local_9d8.Vertices.Blocks.AllocatorInstance.Data +
                       ((ulonglong)pFVar32 >> 9) * 8) + uVar40 * 0x18);
            local_9f8 = *pdVar1;
            dStack_9f0 = pdVar1[1];
            local_ad0 = (float)local_9f8;
            fStack_acc = (float)dStack_9f0;
            local_ac8 = (float)local_9e8;
            iVar22 = (int)pFVar35;
            if ((local_b10.AllocatorInstance.Data <= (FScriptContainerElement *)&local_ad0) &&
               ((FScriptContainerElement *)&local_ad0 <
                local_b10.AllocatorInstance.Data + (longlong)local_b10.ArrayMax * 0xc)) {
              bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar20) {
                pcVar11 = (code *)swi(3);
                uVar21 = (*pcVar11)();
                return (bool)uVar21;
              }
              iVar22 = local_b10.ArrayNum;
            }
            if (iVar22 == local_b10.ArrayMax) {
              iVar22 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x40c,&local_b10.AllocatorInstance,&local_b10.ArrayMax);
            }
            local_b10.ArrayNum = iVar22 + 1U;
            uVar31 = (uint)pFVar32 + 1;
            pFVar32 = (FConvex *)(ulonglong)uVar31;
            *(ulonglong *)(local_b10.AllocatorInstance.Data + (longlong)iVar22 * 0xc) =
                 CONCAT44(fStack_acc,local_ad0);
            *(float *)(local_b10.AllocatorInstance.Data + (longlong)iVar22 * 0xc + 8) = local_ac8;
            if ((int)uVar31 < iVar36) {
              do {
                sVar9 = *(short *)(*(longlong *)
                                    (CONCAT44(local_9d8.VertexRefCounts.RefCounts.Blocks.
                                              AllocatorInstance.Data._4_4_,
                                              local_9d8.VertexRefCounts.RefCounts.Blocks.
                                              AllocatorInstance.Data._0_4_) +
                                    ((ulonglong)pFVar32 >> 9) * 8) +
                                  (ulonglong)((uint)pFVar32 & 0x1ff) * 2);
                if ((sVar9 != 0) && (sVar9 != -1)) break;
                uVar31 = (uint)pFVar32 + 1;
                pFVar32 = (FConvex *)(ulonglong)uVar31;
              } while ((int)uVar31 < iVar36);
            }
            if ((int)pFVar32 == iVar33) break;
            pFVar35 = (FConvex *)(ulonglong)(iVar22 + 1U);
          } while( true );
        }
        pFVar32 = ::Chaos::FConvex::FConvex
                            (&local_578,&local_b10,(double)*(float *)&local_b58->_padding_,Default);
        ::Chaos::FConvex::operator=(param_2,pFVar32);
        ::Chaos::FConvexStructureData::DestroyDataContainer(&local_578.StructureData);
        if (local_578.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_578.Vertices.AllocatorInstance.Data);
        }
        if (local_578.Planes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_578.Planes.AllocatorInstance.Data);
        }
        ::Chaos::FImplicitObject::~FImplicitObject((FImplicitObject *)&local_578);
        if (local_b10.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b10.AllocatorInstance.Data);
        }
        UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
        ~TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>
                  ((TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *)local_358);
        UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_9d8);
      }
      else if (param_3->SimplifyMethod == AngleTolerance) {
        local_b68.Parents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b68.Parents.ArrayNum = 0;
        local_b68.Parents.ArrayMax = 0;
        FDisjointSet::Init(&local_b68,uVar31);
        local_ae8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_ae8.ArrayNum = 0;
        local_ae8.ArrayMax = 0;
        TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&local_ae8,uVar31,Default);
        local_b30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b30.ArrayNum = 0;
        local_b30.ArrayMax = 0;
        TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_b30,uVar31,Default);
        dVar45 = __real_3fe0000000000000;
        uVar42 = 0;
        pFVar35 = pFVar32;
        pFVar24 = pFVar32;
        pFVar41 = pFVar32;
        local_ab0 = uVar40;
        if (0 < (int)uVar31) {
          do {
            pFVar18 = local_b58;
            uVar39 = (uint)pFVar35;
            uVar37 = ~uVar39 >> 0x1f;
            uVar31 = uVar42;
            if ((int)uVar39 < (local_b58->Planes).ArrayNum) {
              uVar31 = uVar37;
            }
            if ((uVar31 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar11 = (code *)swi(3);
              uVar21 = (*pcVar11)();
              return (bool)uVar21;
            }
            pFVar38 = (pFVar18->Planes).AllocatorInstance.Data;
            fVar44 = *(float *)((longlong)&pFVar41->_padding_ + (longlong)(pFVar38 + 4));
            uVar7 = *(undefined8 *)((longlong)&pFVar41->_padding_ + (longlong)pFVar38);
            dVar15 = (double)(float)((ulonglong)uVar7 >> 0x20);
            uVar31 = uVar42;
            if ((int)uVar39 < (pFVar18->Planes).ArrayNum) {
              uVar31 = uVar37;
            }
            if ((uVar31 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar11 = (code *)swi(3);
              uVar21 = (*pcVar11)();
              return (bool)uVar21;
            }
            uVar31 = uVar42;
            if ((int)uVar39 < local_ae8.ArrayNum) {
              uVar31 = uVar37;
            }
            if ((uVar31 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar11 = (code *)swi(3);
              uVar21 = (*pcVar11)();
              return (bool)uVar21;
            }
            *(double *)(local_ae8.AllocatorInstance.Data + (longlong)pFVar41) = (double)fVar44;
            auVar47._8_4_ = SUB84(dVar15,0);
            auVar47._0_8_ = (double)(float)uVar7;
            auVar47._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
            *(undefined1 (*) [16])(local_ae8.AllocatorInstance.Data + 8 + (longlong)pFVar41) =
                 auVar47;
            if ((local_b58->StructureData).Data.Ptr == (void *)0x0) {
              iVar36 = -1;
            }
            else {
              iVar36 = ::Chaos::FConvexStructureData::GetPlaneVertex
                                 (&local_b58->StructureData,uVar39,0);
            }
            pTVar25 = ::Chaos::FConvex::GetVertex(local_b58,iVar36);
            dVar15 = 0.0;
            iVar36 = 2;
            fVar44 = *(float *)pTVar25;
            fVar2 = *(float *)&pTVar25->field_0x4;
            fVar3 = *(float *)&pTVar25->field_0x8;
            while( true ) {
              pTVar10 = (local_b58->StructureData).Data.DataL;
              uVar31 = uVar23;
              if (pTVar10 != (TConvexHalfEdgeStructureData<int> *)0x0) {
                EVar8 = (local_b58->StructureData).IndexType;
                if (EVar8 == Small) {
                  pFVar29 = ::Chaos::TConvexHalfEdgeStructureData<unsigned_char>::GetPlane
                                      ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar10,uVar39
                                      );
                  uVar31 = (uint)pFVar29->NumHalfEdges;
                }
                else if (EVar8 == Medium) {
                  pFVar28 = ::Chaos::TConvexHalfEdgeStructureData<short>::GetPlane
                                      ((TConvexHalfEdgeStructureData<short> *)pTVar10,uVar39);
                  uVar31 = (int)pFVar28->NumHalfEdges;
                }
                else if (EVar8 == Large) {
                  pFVar26 = ::Chaos::TConvexHalfEdgeStructureData<int>::GetPlane(pTVar10,uVar39);
                  uVar31 = pFVar26->NumHalfEdges;
                }
              }
              if ((int)uVar31 <= iVar36) break;
              if ((local_b58->StructureData).Data.Ptr == (void *)0x0) {
                uVar31 = 0xffffffff;
                pTVar43 = &local_b58->Vertices;
LAB_14e82093a:
                bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar20) {
                  pcVar11 = (code *)swi(3);
                  uVar21 = (*pcVar11)();
                  return (bool)uVar21;
                }
              }
              else {
                uVar31 = ::Chaos::FConvexStructureData::GetPlaneVertex
                                   (&local_b58->StructureData,uVar39,iVar36 + -1);
                pTVar43 = &local_b58->Vertices;
                uVar37 = uVar42;
                if ((int)uVar31 < (local_b58->Vertices).ArrayNum) {
                  uVar37 = ~uVar31 >> 0x1f;
                }
                if (uVar37 == 0) goto LAB_14e82093a;
              }
              lVar27 = (longlong)(int)uVar31;
              pFVar38 = (pTVar43->AllocatorInstance).Data;
              fVar4 = *(float *)(pFVar38 + lVar27 * 0xc);
              fVar5 = *(float *)(pFVar38 + lVar27 * 0xc + 4);
              fVar6 = *(float *)(pFVar38 + lVar27 * 0xc + 8);
              if ((local_b58->StructureData).Data.Ptr == (void *)0x0) {
                pTVar43 = &local_b58->Vertices;
                uVar31 = 0xffffffff;
LAB_14e8209de:
                bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar20) {
                  pcVar11 = (code *)swi(3);
                  uVar21 = (*pcVar11)();
                  return (bool)uVar21;
                }
              }
              else {
                uVar31 = ::Chaos::FConvexStructureData::GetPlaneVertex
                                   (&local_b58->StructureData,uVar39,iVar36);
                pTVar43 = &local_b58->Vertices;
                uVar37 = uVar42;
                if ((int)uVar31 < (local_b58->Vertices).ArrayNum) {
                  uVar37 = ~uVar31 >> 0x1f;
                }
                if (uVar37 == 0) goto LAB_14e8209de;
              }
              dVar49 = (double)fVar6 - (double)fVar3;
              lVar27 = (longlong)(int)uVar31;
              dVar14 = (double)fVar5 - (double)fVar2;
              iVar36 = iVar36 + 1;
              dVar16 = (double)fVar4 - (double)fVar44;
              pFVar38 = (pTVar43->AllocatorInstance).Data;
              dVar50 = (double)*(float *)(pFVar38 + lVar27 * 0xc + 8) - (double)fVar3;
              dVar48 = (double)*(float *)(pFVar38 + lVar27 * 0xc) - (double)fVar44;
              dVar12 = (double)*(float *)(pFVar38 + lVar27 * 0xc + 4) - (double)fVar2;
              dVar51 = dVar16 * dVar50 - dVar49 * dVar48;
              auVar46._0_8_ = dVar14 * dVar50;
              auVar46._8_8_ = 0;
              dVar49 = dVar49 * dVar12 - auVar46._0_8_;
              dVar12 = dVar14 * dVar48 - dVar16 * dVar12;
              auVar13._8_8_ = 0;
              auVar13._0_8_ = dVar49 * dVar49 + dVar51 * dVar51 + dVar12 * dVar12;
              auVar47 = sqrtpd(auVar46,auVar13);
              dVar15 = dVar15 + auVar47._0_8_ * dVar45;
            }
            uVar31 = uVar42;
            if ((int)uVar39 < local_b30.ArrayNum) {
              uVar31 = ~uVar39 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar11 = (code *)swi(3);
              uVar21 = (*pcVar11)();
              return (bool)uVar21;
            }
            *(double *)(local_b30.AllocatorInstance.Data + (longlong)pFVar24 * 8) = dVar15;
            pFVar24 = (FConvex *)((longlong)&pFVar24->_padding_ + 1);
            pFVar35 = (FConvex *)(ulonglong)(uVar39 + 1);
            pFVar41 = (FConvex *)&pFVar41->_padding_;
          } while ((longlong)pFVar24 < (longlong)local_ab0);
          uVar40 = (ulonglong)local_b50;
          param_3 = local_ad8;
        }
        pTVar10 = (local_b58->StructureData).Data.DataL;
        if ((pTVar10 != (TConvexHalfEdgeStructureData<int> *)0x0) &&
           (((EVar8 = (local_b58->StructureData).IndexType, EVar8 == Small || (EVar8 == Medium)) ||
            (EVar8 == Large)))) {
          uVar23 = (pTVar10->Edges).ArrayNum;
        }
        local_aa8.EnableDebugChecks = false;
        local_aa8.nodes.CurBlock = 0;
        local_aa8.nodes.CurBlockUsed = 0;
        local_aa8.nodes.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_aa8.nodes.Blocks.ArrayNum = 0;
        local_aa8.nodes.Blocks.ArrayMax = 0;
        UE::Geometry::TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
        AddAllocatedBlock(&local_aa8.nodes);
        local_aa8.id_to_index.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_aa8.id_to_index.ArrayNum = 0;
        local_aa8.id_to_index.ArrayMax = 0;
        UE::Geometry::TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
        TruncateBlocks(&local_aa8.nodes,1,No);
        local_aa8.nodes.CurBlock = 0;
        local_aa8.nodes.CurBlockUsed = 0;
        if (local_aa8.nodes.Blocks.ArrayNum == 0) {
          UE::Geometry::TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
          AddAllocatedBlock(&local_aa8.nodes);
        }
        local_ab8[0] = -1;
        TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_aa8.id_to_index,local_ab8,uVar23);
        local_a40 = &local_b58;
        local_a20 = param_3->SmallAreaThreshold;
        if (param_3->SmallAreaThreshold <= __real_3f1a36e2eb1c432d) {
          local_a20 = __real_3f1a36e2eb1c432d;
        }
        local_a38 = &local_b68;
        local_aa8.num_nodes = 0;
        local_a30 = &local_b30;
        local_a28 = &local_ae8;
        dVar45 = cos(param_3->AngleThreshold * __real_3f91df46a2529d39);
        dVar15 = __real_3ff0000000000000;
        dVar45 = __real_3ff0000000000000 - dVar45;
        pFVar35 = pFVar32;
        if (0 < (int)uVar23) {
          do {
            iVar36 = (int)pFVar35;
            fVar44 = `UE::FractureEngine::Convex::SimplifyConvexHull'::__l36::<lambda_1>::operator()
                               (&local_a40,iVar36,false);
            if (fVar44 < (float)dVar45) {
              UE::Geometry::FIndexPriorityQueue::Insert(&local_aa8,iVar36,fVar44);
            }
            pFVar35 = (FConvex *)(ulonglong)(iVar36 + 1U);
          } while ((int)(iVar36 + 1U) < (int)uVar23);
          pFVar35 = (FConvex *)(ulonglong)(uint)local_aa8.num_nodes;
        }
        dVar12 = __real_3e45798ee0000000;
        uVar31 = (uint)pFVar35;
        while (0 < (int)uVar31) {
          if (((local_aa8.EnableDebugChecks != false) && ((int)pFVar35 < 1)) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("GetCount() > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                  ,0x92,L""), bVar20)) {
            pcVar11 = (code *)swi(3);
            uVar21 = (*pcVar11)();
            return (bool)uVar21;
          }
          iVar36 = *(int *)(*(longlong *)local_aa8.nodes.Blocks.AllocatorInstance.Data + 0xc);
          UE::Geometry::FIndexPriorityQueue::remove_at_index(&local_aa8,1);
          fVar44 = `UE::FractureEngine::Convex::SimplifyConvexHull'::__l36::<lambda_1>::operator()
                             (&local_a40,iVar36,true);
          if (fVar44 < (float)dVar45) {
            if ((local_b58->StructureData).Data.Ptr == (void *)0x0) {
              uVar31 = 0xffffffff;
LAB_14e820d1b:
              bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar20) {
                pcVar11 = (code *)swi(3);
                uVar21 = (*pcVar11)();
                return (bool)uVar21;
              }
            }
            else {
              local_a6c = 0;
              local_a70 = iVar36;
              uVar31 = ::Chaos::FConvexStructureData::
                       ConstDataOp<_Chaos::FConvexStructureData::GetEdgePlane_::__l2::<lambda_1>,_Chaos::FConvexStructureData::GetEdgePlane_::__l2::<lambda_2>_>
                                 (&local_b58->StructureData,(<lambda_1> *)&local_a70,local_af8);
              uVar23 = uVar42;
              if ((int)uVar31 < local_b68.Parents.ArrayNum) {
                uVar23 = ~uVar31 >> 0x1f;
              }
              if (uVar23 == 0) goto LAB_14e820d1b;
            }
            uVar40 = (ulonglong)(uint)local_b68.Parents.ArrayNum;
            uVar23 = *(uint *)(local_b68.Parents.AllocatorInstance.Data + (longlong)(int)uVar31 * 4)
            ;
            uVar39 = uVar23;
            if (uVar23 != uVar31) {
              do {
                uVar23 = uVar42;
                if ((int)uVar39 < (int)uVar40) {
                  uVar23 = ~uVar39 >> 0x1f;
                }
                if (uVar23 == 0) {
                  bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar20) {
                    pcVar11 = (code *)swi(3);
                    uVar21 = (*pcVar11)();
                    return (bool)uVar21;
                  }
                  uVar40 = local_b68.Parents._8_8_ & 0xffffffff;
                }
                uVar23 = *(uint *)(local_b68.Parents.AllocatorInstance.Data +
                                  (longlong)(int)uVar39 * 4);
                bVar20 = uVar23 != uVar39;
                uVar39 = uVar23;
              } while (bVar20);
            }
            uVar39 = uVar42;
            if ((int)uVar31 < (int)uVar40) {
              uVar39 = ~uVar31 >> 0x1f;
            }
            if (uVar39 == 0) {
              bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar20) {
                pcVar11 = (code *)swi(3);
                uVar21 = (*pcVar11)();
                return (bool)uVar21;
              }
              uVar40 = local_b68.Parents._8_8_ & 0xffffffff;
            }
            uVar39 = *(uint *)(local_b68.Parents.AllocatorInstance.Data + (longlong)(int)uVar31 * 4)
            ;
            while (uVar37 = uVar39, uVar37 != uVar23) {
              uVar39 = uVar42;
              if ((int)uVar31 < (int)uVar40) {
                uVar39 = ~uVar31 >> 0x1f;
              }
              if ((uVar39 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar11 = (code *)swi(3);
                uVar21 = (*pcVar11)();
                return (bool)uVar21;
              }
              *(uint *)(local_b68.Parents.AllocatorInstance.Data + (longlong)(int)uVar31 * 4) =
                   uVar23;
              uVar40 = (ulonglong)local_b68.Parents.ArrayNum;
              uVar31 = uVar42;
              if ((int)uVar37 < local_b68.Parents.ArrayNum) {
                uVar31 = ~uVar37 >> 0x1f;
              }
              if (uVar31 == 0) {
                bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar20) {
                  pcVar11 = (code *)swi(3);
                  uVar21 = (*pcVar11)();
                  return (bool)uVar21;
                }
                uVar40 = local_b68.Parents._8_8_ & 0xffffffff;
              }
              uVar31 = uVar37;
              uVar39 = *(uint *)(local_b68.Parents.AllocatorInstance.Data +
                                (longlong)(int)uVar37 * 4);
            }
            if ((local_b58->StructureData).Data.Ptr == (void *)0x0) {
              uVar31 = 0xffffffff;
LAB_14e820f35:
              bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar20) {
                pcVar11 = (code *)swi(3);
                uVar21 = (*pcVar11)();
                return (bool)uVar21;
              }
            }
            else {
              local_a64 = 1;
              local_a68 = iVar36;
              uVar31 = ::Chaos::FConvexStructureData::
                       ConstDataOp<_Chaos::FConvexStructureData::GetEdgePlane_::__l2::<lambda_1>,_Chaos::FConvexStructureData::GetEdgePlane_::__l2::<lambda_2>_>
                                 (&local_b58->StructureData,(<lambda_1> *)&local_a68,local_b00);
              uVar39 = uVar42;
              if ((int)uVar31 < local_b68.Parents.ArrayNum) {
                uVar39 = ~uVar31 >> 0x1f;
              }
              if (uVar39 == 0) goto LAB_14e820f35;
            }
            uVar40 = (ulonglong)(uint)local_b68.Parents.ArrayNum;
            uVar39 = *(uint *)(local_b68.Parents.AllocatorInstance.Data + (longlong)(int)uVar31 * 4)
            ;
            uVar37 = uVar39;
            if (uVar39 != uVar31) {
              do {
                uVar39 = uVar42;
                if ((int)uVar37 < (int)uVar40) {
                  uVar39 = ~uVar37 >> 0x1f;
                }
                if (uVar39 == 0) {
                  bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar20) {
                    pcVar11 = (code *)swi(3);
                    uVar21 = (*pcVar11)();
                    return (bool)uVar21;
                  }
                  uVar40 = local_b68.Parents._8_8_ & 0xffffffff;
                }
                uVar39 = *(uint *)(local_b68.Parents.AllocatorInstance.Data +
                                  (longlong)(int)uVar37 * 4);
                bVar20 = uVar39 != uVar37;
                uVar37 = uVar39;
              } while (bVar20);
            }
            uVar37 = uVar42;
            if ((int)uVar31 < (int)uVar40) {
              uVar37 = ~uVar31 >> 0x1f;
            }
            if (uVar37 == 0) {
              bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar20) {
                pcVar11 = (code *)swi(3);
                uVar21 = (*pcVar11)();
                return (bool)uVar21;
              }
              uVar40 = local_b68.Parents._8_8_ & 0xffffffff;
            }
            uVar37 = *(uint *)(local_b68.Parents.AllocatorInstance.Data + (longlong)(int)uVar31 * 4)
            ;
            while (uVar34 = uVar37, uVar34 != uVar39) {
              uVar37 = uVar42;
              if ((int)uVar31 < (int)uVar40) {
                uVar37 = ~uVar31 >> 0x1f;
              }
              if ((uVar37 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar11 = (code *)swi(3);
                uVar21 = (*pcVar11)();
                return (bool)uVar21;
              }
              *(uint *)(local_b68.Parents.AllocatorInstance.Data + (longlong)(int)uVar31 * 4) =
                   uVar39;
              uVar40 = (ulonglong)local_b68.Parents.ArrayNum;
              uVar31 = uVar42;
              if ((int)uVar34 < local_b68.Parents.ArrayNum) {
                uVar31 = ~uVar34 >> 0x1f;
              }
              if (uVar31 == 0) {
                bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar20) {
                  pcVar11 = (code *)swi(3);
                  uVar21 = (*pcVar11)();
                  return (bool)uVar21;
                }
                uVar40 = local_b68.Parents._8_8_ & 0xffffffff;
              }
              uVar31 = uVar34;
              uVar37 = *(uint *)(local_b68.Parents.AllocatorInstance.Data +
                                (longlong)(int)uVar34 * 4);
            }
            FDisjointSet::Union(&local_b68,uVar23,uVar39);
            uVar40 = (ulonglong)local_b68.Parents.ArrayNum;
            uVar31 = uVar42;
            if ((int)uVar23 < local_b68.Parents.ArrayNum) {
              uVar31 = ~uVar23 >> 0x1f;
            }
            if (uVar31 == 0) {
              bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar20) {
                pcVar11 = (code *)swi(3);
                uVar21 = (*pcVar11)();
                return (bool)uVar21;
              }
              uVar40 = local_b68.Parents._8_8_ & 0xffffffff;
            }
            uVar31 = *(uint *)(local_b68.Parents.AllocatorInstance.Data + (longlong)(int)uVar23 * 4)
            ;
            uVar37 = uVar31;
            if (uVar31 != uVar23) {
              do {
                uVar31 = uVar42;
                if ((int)uVar37 < (int)uVar40) {
                  uVar31 = ~uVar37 >> 0x1f;
                }
                if (uVar31 == 0) {
                  bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar20) {
                    pcVar11 = (code *)swi(3);
                    uVar21 = (*pcVar11)();
                    return (bool)uVar21;
                  }
                  uVar40 = local_b68.Parents._8_8_ & 0xffffffff;
                }
                uVar31 = *(uint *)(local_b68.Parents.AllocatorInstance.Data +
                                  (longlong)(int)uVar37 * 4);
                bVar20 = uVar31 != uVar37;
                uVar37 = uVar31;
              } while (bVar20);
            }
            uVar37 = uVar42;
            if ((int)uVar23 < (int)uVar40) {
              uVar37 = ~uVar23 >> 0x1f;
            }
            if (uVar37 == 0) {
              bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar20) {
                pcVar11 = (code *)swi(3);
                uVar21 = (*pcVar11)();
                return (bool)uVar21;
              }
              uVar40 = local_b68.Parents._8_8_ & 0xffffffff;
            }
            uVar34 = *(uint *)(local_b68.Parents.AllocatorInstance.Data + (longlong)(int)uVar23 * 4)
            ;
            uVar37 = uVar23;
            while (uVar17 = uVar34, uVar17 != uVar31) {
              uVar34 = uVar42;
              if ((int)uVar37 < (int)uVar40) {
                uVar34 = ~uVar37 >> 0x1f;
              }
              if ((uVar34 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar11 = (code *)swi(3);
                uVar21 = (*pcVar11)();
                return (bool)uVar21;
              }
              *(uint *)(local_b68.Parents.AllocatorInstance.Data + (longlong)(int)uVar37 * 4) =
                   uVar31;
              uVar40 = (ulonglong)local_b68.Parents.ArrayNum;
              uVar37 = uVar42;
              if ((int)uVar17 < local_b68.Parents.ArrayNum) {
                uVar37 = ~uVar17 >> 0x1f;
              }
              if (uVar37 == 0) {
                bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar20) {
                  pcVar11 = (code *)swi(3);
                  uVar21 = (*pcVar11)();
                  return (bool)uVar21;
                }
                uVar40 = local_b68.Parents._8_8_ & 0xffffffff;
              }
              uVar37 = uVar17;
              uVar34 = *(uint *)(local_b68.Parents.AllocatorInstance.Data +
                                (longlong)(int)uVar17 * 4);
            }
            uVar37 = uVar42;
            if ((int)uVar23 < local_ae8.ArrayNum) {
              uVar37 = ~uVar23 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar11 = (code *)swi(3);
              uVar21 = (*pcVar11)();
              return (bool)uVar21;
            }
            FVar19.Data = local_ae8.AllocatorInstance.Data;
            lVar27 = (longlong)(int)uVar23;
            uVar37 = uVar42;
            if ((int)uVar23 < local_b30.ArrayNum) {
              uVar37 = ~uVar23 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar11 = (code *)swi(3);
              uVar21 = (*pcVar11)();
              return (bool)uVar21;
            }
            dVar49 = *(double *)(local_b30.AllocatorInstance.Data + (longlong)(int)uVar23 * 8);
            dVar14 = *(double *)(FVar19.Data + lVar27 * 0x18);
            dVar16 = *(double *)(FVar19.Data + lVar27 * 0x18 + 8);
            dVar48 = *(double *)(FVar19.Data + lVar27 * 0x18 + 0x10);
            uVar37 = uVar42;
            if ((int)uVar39 < local_ae8.ArrayNum) {
              uVar37 = ~uVar39 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar11 = (code *)swi(3);
              uVar21 = (*pcVar11)();
              return (bool)uVar21;
            }
            local_ac0 = local_ae8.AllocatorInstance.Data;
            lVar27 = (longlong)(int)uVar39;
            uVar37 = uVar42;
            if ((int)uVar39 < local_b30.ArrayNum) {
              uVar37 = ~uVar39 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar11 = (code *)swi(3);
              uVar21 = (*pcVar11)();
              return (bool)uVar21;
            }
            dVar50 = *(double *)(local_b30.AllocatorInstance.Data + lVar27 * 8);
            dVar14 = dVar50 * *(double *)(local_ac0 + lVar27 * 0x18) + dVar49 * dVar14;
            dVar16 = dVar50 * *(double *)(local_ac0 + lVar27 * 0x18 + 8) + dVar49 * dVar16;
            local_a00 = dVar50 * *(double *)(local_ac0 + lVar27 * 0x18 + 0x10) + dVar49 * dVar48;
            dVar49 = dVar16 * dVar16 + dVar14 * dVar14 + local_a00 * local_a00;
            if (dVar12 < dVar49) {
              local_a18 = dVar15 / SQRT(dVar49);
              dVar14 = dVar14 * local_a18;
              dVar16 = dVar16 * local_a18;
              local_a00 = local_a18 * local_a00;
            }
            uVar37 = uVar42;
            if ((int)uVar39 < local_b30.ArrayNum) {
              uVar37 = ~uVar39 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar11 = (code *)swi(3);
              uVar21 = (*pcVar11)();
              return (bool)uVar21;
            }
            FVar19.Data = local_b30.AllocatorInstance.Data;
            uVar39 = uVar42;
            if ((int)uVar23 < local_b30.ArrayNum) {
              uVar39 = ~uVar23 >> 0x1f;
            }
            if ((uVar39 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar11 = (code *)swi(3);
              uVar21 = (*pcVar11)();
              return (bool)uVar21;
            }
            dVar49 = *(double *)(local_b30.AllocatorInstance.Data + (longlong)(int)uVar23 * 8);
            dVar48 = *(double *)(FVar19.Data + lVar27 * 8);
            uVar23 = uVar42;
            if ((int)uVar31 < local_ae8.ArrayNum) {
              uVar23 = ~uVar31 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar11 = (code *)swi(3);
              uVar21 = (*pcVar11)();
              return (bool)uVar21;
            }
            lVar27 = (longlong)(int)uVar31;
            *(double *)(local_ae8.AllocatorInstance.Data + lVar27 * 0x18) = dVar14;
            *(double *)(local_ae8.AllocatorInstance.Data + lVar27 * 0x18 + 8) = dVar16;
            *(double *)(local_ae8.AllocatorInstance.Data + lVar27 * 0x18 + 0x10) = local_a00;
            uVar23 = uVar42;
            if ((int)uVar31 < local_b30.ArrayNum) {
              uVar23 = ~uVar31 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar11 = (code *)swi(3);
              uVar21 = (*pcVar11)();
              return (bool)uVar21;
            }
            local_b50 = local_b50 - 1;
            uVar40 = (ulonglong)local_b50;
            *(double *)(local_b30.AllocatorInstance.Data + lVar27 * 8) = dVar49 + dVar48;
          }
          if ((int)uVar40 < local_ad8->TargetTriangleCount) break;
          pFVar35 = (FConvex *)(ulonglong)(uint)local_aa8.num_nodes;
          uVar31 = local_aa8.num_nodes;
        }
        local_b20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b20.ArrayNum = 0;
        local_b20.ArrayMax = 0;
        uVar31 = (local_b58->Vertices).ArrayNum;
        uVar40 = (ulonglong)uVar31;
        local_b38 = uVar31;
        if ((int)uVar31 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum(uVar40);
        }
        if ((int)uVar31 < 1) {
          local_b48.Data = (FScriptContainerElement *)0x0;
          local_b40 = 0;
          iStack_b3c = 0;
          local_af4 = 0xffffffffffffffff;
          local_aec = 0xffffffff;
        }
        else {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,uVar31,&local_b20.AllocatorInstance,0,&local_b20.ArrayMax);
          local_b48.Data = (FScriptContainerElement *)0x0;
          local_b40 = 0;
          iStack_b3c = 0;
          local_af4 = 0xffffffffffffffff;
          local_aec = 0xffffffff;
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,uVar31,&local_b48,0,&iStack_b3c);
          do {
            if (((local_b48.Data <= (FScriptContainerElement *)&local_af4) &&
                ((FScriptContainerElement *)&local_af4 < local_b48.Data + (longlong)iStack_b3c * 0xc
                )) && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar20)) {
              pcVar11 = (code *)swi(3);
              uVar21 = (*pcVar11)();
              return (bool)uVar21;
            }
            if (local_b40 == iStack_b3c) {
              local_b40 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x40c,&local_b48,&iStack_b3c);
            }
            iVar36 = local_b40 + 1;
            *(undefined8 *)(local_b48.Data + (longlong)local_b40 * 0xc) = local_af4;
            *(undefined4 *)(local_b48.Data + (longlong)local_b40 * 0xc + 8) = local_aec;
            uVar40 = uVar40 - 1;
            local_b40 = iVar36;
          } while (uVar40 != 0);
        }
        local_afc = 0;
        if (0 < (longlong)local_ab0) {
          local_ac0 = (FScriptContainerElement *)0x0;
          pFVar35 = pFVar32;
          do {
            pFVar38 = local_ac0;
            uVar23 = (uint)pFVar35;
            uVar31 = uVar42;
            if ((int)uVar23 < local_b68.Parents.ArrayNum) {
              uVar31 = ~uVar23 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar11 = (code *)swi(3);
              uVar21 = (*pcVar11)();
              return (bool)uVar21;
            }
            uVar31 = *(uint *)(local_b68.Parents.AllocatorInstance.Data + (longlong)pFVar38 * 4);
            uVar39 = uVar31;
            if (uVar31 != uVar23) {
              do {
                uVar31 = uVar42;
                if ((int)uVar39 < local_b68.Parents.ArrayNum) {
                  uVar31 = ~uVar39 >> 0x1f;
                }
                if ((uVar31 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar11 = (code *)swi(3);
                  uVar21 = (*pcVar11)();
                  return (bool)uVar21;
                }
                uVar31 = *(uint *)(local_b68.Parents.AllocatorInstance.Data +
                                  (longlong)(int)uVar39 * 4);
                bVar20 = uVar31 != uVar39;
                uVar39 = uVar31;
              } while (bVar20);
            }
            uVar39 = uVar42;
            if ((int)uVar23 < local_b68.Parents.ArrayNum) {
              uVar39 = ~uVar23 >> 0x1f;
            }
            if ((uVar39 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar11 = (code *)swi(3);
              uVar21 = (*pcVar11)();
              return (bool)uVar21;
            }
            pFVar24 = pFVar35;
            for (uVar39 = *(uint *)(local_b68.Parents.AllocatorInstance.Data +
                                   (longlong)(int)uVar23 * 4); uVar39 != uVar31;
                uVar39 = *(uint *)(local_b68.Parents.AllocatorInstance.Data +
                                  (longlong)(int)uVar39 * 4)) {
              uVar34 = (uint)pFVar24;
              uVar37 = uVar42;
              if ((int)uVar34 < local_b68.Parents.ArrayNum) {
                uVar37 = ~uVar34 >> 0x1f;
              }
              if ((uVar37 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar11 = (code *)swi(3);
                uVar21 = (*pcVar11)();
                return (bool)uVar21;
              }
              pFVar24 = (FConvex *)(ulonglong)uVar39;
              *(uint *)(local_b68.Parents.AllocatorInstance.Data + (longlong)(int)uVar34 * 4) =
                   uVar31;
              uVar37 = uVar42;
              if ((int)uVar39 < local_b68.Parents.ArrayNum) {
                uVar37 = ~uVar39 >> 0x1f;
              }
              if ((uVar37 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar11 = (code *)swi(3);
                uVar21 = (*pcVar11)();
                return (bool)uVar21;
              }
            }
            pTVar10 = (local_b58->StructureData).Data.DataL;
            if (pTVar10 != (TConvexHalfEdgeStructureData<int> *)0x0) {
              EVar8 = (local_b58->StructureData).IndexType;
              if (EVar8 == Small) {
                pFVar29 = ::Chaos::TConvexHalfEdgeStructureData<unsigned_char>::GetPlane
                                    ((TConvexHalfEdgeStructureData<unsigned_char> *)pTVar10,uVar23);
                uVar39 = (uint)pFVar29->NumHalfEdges;
              }
              else if (EVar8 == Medium) {
                pFVar28 = ::Chaos::TConvexHalfEdgeStructureData<short>::GetPlane
                                    ((TConvexHalfEdgeStructureData<short> *)pTVar10,uVar23);
                uVar39 = (int)pFVar28->NumHalfEdges;
              }
              else {
                uVar39 = uVar42;
                if (EVar8 == Large) {
                  pFVar26 = ::Chaos::TConvexHalfEdgeStructureData<int>::GetPlane(pTVar10,uVar23);
                  uVar39 = pFVar26->NumHalfEdges;
                }
              }
              local_ad8 = (FSimplifyHullSettings *)((ulonglong)local_ad8 & 0xffffffff00000000);
              pFVar24 = pFVar32;
              local_b50 = uVar39;
              if (0 < (int)uVar39) {
                do {
                  if ((local_b58->StructureData).Data.Ptr == (void *)0x0) {
                    uVar23 = 0xffffffff;
                  }
                  else {
                    uVar23 = ::Chaos::FConvexStructureData::GetPlaneVertex
                                       (&local_b58->StructureData,(int)pFVar35,(int)pFVar24);
                  }
                  uVar39 = ~uVar23 >> 0x1f;
                  lVar27 = (longlong)(int)uVar23 * 0xc;
                  pFVar35 = pFVar32;
                  do {
                    uVar37 = uVar42;
                    if ((int)uVar23 < local_b40) {
                      uVar37 = uVar39;
                    }
                    if ((uVar37 == 0) &&
                       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar20)) {
                      pcVar11 = (code *)swi(3);
                      uVar21 = (*pcVar11)();
                      return (bool)uVar21;
                    }
                    if (*(int *)(local_b48.Data + lVar27) == -1) {
                      uVar37 = uVar42;
                      if ((int)uVar23 < local_b40) {
                        uVar37 = uVar39;
                      }
                      if ((uVar37 == 0) &&
                         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar20)) {
                        pcVar11 = (code *)swi(3);
                        uVar21 = (*pcVar11)();
                        return (bool)uVar21;
                      }
                      *(uint *)(local_b48.Data +
                               (longlong)((longlong)&pFVar35->_padding_ + (longlong)(int)uVar23 * 3)
                               * 4) = uVar31;
                      break;
                    }
                    uVar37 = uVar42;
                    if ((int)uVar23 < local_b40) {
                      uVar37 = uVar39;
                    }
                    if ((uVar37 == 0) &&
                       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar20)) {
                      pcVar11 = (code *)swi(3);
                      uVar21 = (*pcVar11)();
                      return (bool)uVar21;
                    }
                    if (*(uint *)(local_b48.Data + lVar27) == uVar31) break;
                    pFVar35 = (FConvex *)((longlong)&pFVar35->_padding_ + 1);
                    lVar27 = lVar27 + 4;
                  } while ((longlong)pFVar35 < 3);
                  pFVar35 = (FConvex *)(ulonglong)local_afc;
                  uVar39 = (int)local_ad8 + 1;
                  pFVar24 = (FConvex *)(ulonglong)uVar39;
                  local_ad8 = (FSimplifyHullSettings *)CONCAT44(local_ad8._4_4_,uVar39);
                  uVar23 = local_afc;
                } while ((int)uVar39 < (int)local_b50);
              }
            }
            local_afc = uVar23 + 1;
            pFVar35 = (FConvex *)(ulonglong)local_afc;
            local_ac0 = local_ac0 + 1;
          } while ((longlong)local_ac0 < (longlong)local_ab0);
        }
        lVar27 = (longlong)(int)local_b38;
        pFVar35 = pFVar32;
        if (0 < lVar27) {
          do {
            uVar23 = (uint)pFVar32;
            uVar31 = uVar42;
            if ((int)uVar23 < local_b40) {
              uVar31 = ~uVar23 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar11 = (code *)swi(3);
              uVar21 = (*pcVar11)();
              return (bool)uVar21;
            }
            pFVar32 = local_b58;
            if (-1 < *(int *)(local_b48.Data + 8 + (longlong)pFVar35)) {
              uVar31 = uVar42;
              if ((int)uVar23 < (local_b58->Vertices).ArrayNum) {
                uVar31 = ~uVar23 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar11 = (code *)swi(3);
                uVar21 = (*pcVar11)();
                return (bool)uVar21;
              }
              pFVar38 = (FScriptContainerElement *)
                        ((longlong)&pFVar35->_padding_ +
                        (longlong)(pFVar32->Vertices).AllocatorInstance.Data);
              if (((local_b20.AllocatorInstance.Data <= pFVar38) &&
                  (pFVar38 < local_b20.AllocatorInstance.Data + (longlong)local_b20.ArrayMax * 0xc))
                 && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar20)) {
                pcVar11 = (code *)swi(3);
                uVar21 = (*pcVar11)();
                return (bool)uVar21;
              }
              if (local_b20.ArrayNum == local_b20.ArrayMax) {
                local_b20.ArrayNum =
                     Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&local_b20.AllocatorInstance,&local_b20.ArrayMax);
              }
              lVar30 = (longlong)local_b20.ArrayNum;
              local_b20.ArrayNum = local_b20.ArrayNum + 1;
              *(undefined8 *)(local_b20.AllocatorInstance.Data + lVar30 * 0xc) =
                   *(undefined8 *)pFVar38;
              *(undefined4 *)(local_b20.AllocatorInstance.Data + lVar30 * 0xc + 8) =
                   *(undefined4 *)(pFVar38 + 8);
            }
            pFVar32 = (FConvex *)(ulonglong)(uVar23 + 1);
            lVar27 = lVar27 + -1;
            pFVar35 = (FConvex *)((longlong)&pFVar35->_padding_ + 4);
          } while (lVar27 != 0);
        }
        pFVar32 = ::Chaos::FConvex::FConvex
                            (&local_4c8,&local_b20,(double)*(float *)&local_b58->_padding_,Default);
        ::Chaos::FConvex::operator=(local_a60,pFVar32);
        ::Chaos::FConvexStructureData::DestroyDataContainer(&local_4c8.StructureData);
        if (local_4c8.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4c8.Vertices.AllocatorInstance.Data);
        }
        if (local_4c8.Planes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4c8.Planes.AllocatorInstance.Data);
        }
        ::Chaos::FImplicitObject::~FImplicitObject((FImplicitObject *)&local_4c8);
        if (local_b48.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b48.Data);
        }
        if (local_b20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b20.AllocatorInstance.Data);
        }
        if (local_aa8.id_to_index.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_aa8.id_to_index.AllocatorInstance.Data);
        }
        UE::Geometry::TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
        ~TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>(&local_aa8.nodes);
        if (local_b30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b30.AllocatorInstance.Data);
        }
        if (local_ae8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_ae8.AllocatorInstance.Data);
        }
        if (local_b68.Parents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b68.Parents.AllocatorInstance.Data);
        }
      }
    }
    else if (param_2 != local_b58) {
      pFVar24 = ::operator_new(0xb0);
      if (pFVar24 != (FConvex *)0x0) {
        ::Chaos::FImplicitObject::FImplicitObject((FImplicitObject *)pFVar24,3,'\b');
        pFVar24->_padding_ = (longlong)&___7FConvex_Chaos__6B_;
        (pFVar24->Planes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TArray<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_>::
        CopyToEmpty<Chaos::TCorePlane<float,3>,int>
                  (&pFVar24->Planes,(TCorePlane<float,3> *)(pFVar35->Planes).AllocatorInstance.Data,
                   (pFVar35->Planes).ArrayNum,0);
        (pFVar24->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::
        CopyToEmpty<Chaos::TVector<float,3>,int>
                  (&pFVar24->Vertices,(TVector<float,3> *)(pFVar35->Vertices).AllocatorInstance.Data
                   ,(pFVar35->Vertices).ArrayNum,0);
        *(undefined8 *)&(pFVar24->LocalBoundingBox).MMin =
             *(undefined8 *)&(pFVar35->LocalBoundingBox).MMin;
        *(undefined4 *)&(pFVar24->LocalBoundingBox).MMin.field_0x8 =
             *(undefined4 *)&(pFVar35->LocalBoundingBox).MMin.field_0x8;
        *(undefined8 *)&(pFVar24->LocalBoundingBox).MMax =
             *(undefined8 *)&(pFVar35->LocalBoundingBox).MMax;
        *(undefined4 *)&(pFVar24->LocalBoundingBox).MMax.field_0x8 =
             *(undefined4 *)&(pFVar35->LocalBoundingBox).MMax.field_0x8;
        (pFVar24->StructureData).Data.Ptr = (void *)0x0;
        (pFVar24->StructureData).IndexType = None;
        pFVar24->Volume = pFVar35->Volume;
        *(undefined8 *)&pFVar24->CenterOfMass = *(undefined8 *)&pFVar35->CenterOfMass;
        *(undefined4 *)&(pFVar24->CenterOfMass).field_0x8 =
             *(undefined4 *)&(pFVar35->CenterOfMass).field_0x8;
        uVar7 = *(undefined8 *)&(pFVar35->UnitMassInertiaTensor).field_0x8;
        *(undefined8 *)&pFVar24->UnitMassInertiaTensor =
             *(undefined8 *)&pFVar35->UnitMassInertiaTensor;
        *(undefined8 *)&(pFVar24->UnitMassInertiaTensor).field_0x8 = uVar7;
        *(undefined8 *)&(pFVar24->UnitMassInertiaTensor).field_0x10 =
             *(undefined8 *)&(pFVar35->UnitMassInertiaTensor).field_0x10;
        uVar7 = *(undefined8 *)&(pFVar35->RotationOfMass).field_0x8;
        *(undefined8 *)&pFVar24->RotationOfMass = *(undefined8 *)&pFVar35->RotationOfMass;
        *(undefined8 *)&(pFVar24->RotationOfMass).field_0x8 = uVar7;
        uVar7 = *(undefined8 *)&(pFVar35->RotationOfMass).field_0x18;
        *(undefined8 *)&(pFVar24->RotationOfMass).field_0x10 =
             *(undefined8 *)&(pFVar35->RotationOfMass).field_0x10;
        *(undefined8 *)&(pFVar24->RotationOfMass).field_0x18 = uVar7;
        ::Chaos::FConvexStructureData::CopyFrom(&pFVar24->StructureData,&pFVar35->StructureData);
        *(float *)&pFVar24->_padding_ = *(float *)&pFVar35->_padding_;
        pFVar32 = pFVar24;
      }
      ::Chaos::FConvex::operator=(param_2,pFVar32);
    }
    bVar20 = true;
  }
  return bVar20;
}

// SimplifyConvexHulls @ 14e821e60

bool __cdecl
UE::FractureEngine::Convex::SimplifyConvexHulls
          (FManagedArrayCollection *param_1,FSimplifyHullSettings *param_2,bool param_3,
          TArrayView<int_const_,int> *param_4)

{
  int *piVar1;
  FName FVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  int iVar7;
  int *piVar8;
  FName local_28;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_20;
  TManagedArray<TRefCountPtr<Chaos::FConvex>_> *local_18;
  FSimplifyHullSettings *local_10;
  
  bVar3 = FGeometryCollectionConvexUtility::HasConvexHullData(param_1);
  FVar2 = FTransformCollection::TransformGroup;
  bVar4 = false;
  if (bVar3) {
    pFVar6 = ::FName::FName(&local_28,"TransformToConvexIndices");
    local_20 = FManagedArrayCollection::
               ModifyAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                         (param_1,*pFVar6,FVar2);
    local_18 = FManagedArrayCollection::ModifyAttribute<TRefCountPtr<Chaos::FConvex>_>
                         (param_1,FTransformCollection::ConvexHullAttribute,
                          FTransformCollection::ConvexGroup);
    bVar4 = true;
    local_10 = param_2;
    if (param_3) {
      piVar8 = param_4->DataPtr;
      piVar1 = piVar8 + param_4->ArrayNum;
      for (; piVar8 != piVar1; piVar8 = piVar8 + 1) {
        bVar3 = `UE::FractureEngine::Convex::SimplifyConvexHulls'::__l2::<lambda_1>::operator()
                          (&local_20,*piVar8);
        if ((bVar4) && (bVar3)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
      }
    }
    else {
      iVar7 = 0;
      iVar5 = FManagedArrayCollection::NumElements(param_1,FTransformCollection::TransformGroup);
      if (0 < iVar5) {
        do {
          bVar3 = `UE::FractureEngine::Convex::SimplifyConvexHulls'::__l2::<lambda_1>::operator()
                            (&local_20,iVar7);
          if ((bVar4 == false) || (!bVar3)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          iVar7 = iVar7 + 1;
          iVar5 = FManagedArrayCollection::NumElements(param_1,FTransformCollection::TransformGroup)
          ;
        } while (iVar7 < iVar5);
      }
    }
  }
  return bVar4;
}

// UniformFractureProc @ 14e823950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
UE::Private::FractureHelpers::UniformFractureProc
          (TUniquePtr<FGeometryCollection,TDefaultDelete<FGeometryCollection>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,FUniformFractureProcSettings *param_3)

{
  FScriptContainerElement *pFVar1;
  FNoiseSettings *pFVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStackY_2e8 [32];
  undefined1 local_288 [8];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_280;
  double local_270;
  double dStack_268;
  double local_260;
  TArrayView<UE::Math::TVector<double>_const_,int> local_258;
  FScriptContainerElement *local_248;
  int iStack_240;
  undefined4 uStack_23c;
  TArrayView<int_const_,int> local_238;
  TArrayView<UE::Math::TVector<double>_const_,int> local_228;
  TVector<double>_u_0 local_218;
  FPlanarCells local_1f8;
  TOptional<UE::Math::TTransform<double>_> local_188;
  TVector<double>_u_0 local_118;
  double local_100;
  double local_f8;
  double local_f0;
  FVoronoiDiagram local_d8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_280.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_280.ArrayNum = 0;
  local_280.ArrayMax = 0;
  GenerateVoronoiSites
            (&param_3->BBox,param_3->MinVoronoiSites,param_3->MaxVoronoiSites,param_3->RandomSeed,
             &local_280);
  pFVar2 = &param_3->NoiseSettings;
  GetVoronoiBounds((TBox<double> *)&local_118._s_0,&param_3->BBox,&local_280,param_3->Grout,
                   pFVar2->Amplitude,(param_3->NoiseSettings).Octaves,
                   (param_3->NoiseSettings).Persistence);
  dVar8 = (param_3->Transform).Translation.XY.m128d_f64[0];
  dVar9 = (param_3->Transform).Translation.XY.m128d_f64[1];
  iVar13 = local_280.ArrayNum;
  dVar10 = (param_3->Transform).Translation.ZW.m128d_f64[0];
  pFVar14 = local_280.AllocatorInstance.Data + 0x10;
  pFVar3 = local_280.AllocatorInstance.Data + (longlong)local_280.ArrayNum * 0x18;
  local_270 = dVar8;
  dStack_268 = dVar9;
  local_260 = dVar10;
  while( true ) {
    if (local_280.ArrayNum != iVar13) {
      local_288[0] = 0;
      `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_288);
    }
    pFVar1 = pFVar14 + -0x10;
    if (pFVar1 == pFVar3) break;
    *(double *)pFVar1 = *(double *)pFVar1 - dVar8;
    *(double *)(pFVar14 + -8) = *(double *)(pFVar14 + -8) - dVar9;
    *(double *)pFVar14 = *(double *)pFVar14 - dVar10;
    pFVar14 = pFVar14 + 0x18;
  }
  local_118._s_0.X = local_118._s_0.X - dVar8;
  local_118._s_0.Y = local_118._s_0.Y - dVar9;
  iVar13 = local_280.ArrayNum;
  local_258.DataPtr = (TVector<double> *)local_280.AllocatorInstance.Data;
  local_118._s_0.Z = local_118._s_0.Z - dVar10;
  local_100 = local_100 - dVar8;
  local_f8 = local_f8 - dVar9;
  local_f0 = local_f0 - dVar10;
  if (local_280.ArrayNum < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      iVar13 = (*pcVar7)();
      return iVar13;
    }
  }
  local_258.ArrayNum = iVar13;
  FVoronoiDiagram::FVoronoiDiagram
            (&local_d8,&local_258,(TBox<double> *)&local_118._s_0,__real_3fb99999a0000000,
             __real_3f1a36e2e0000000);
  iStack_240 = local_280.ArrayNum;
  local_248 = local_280.AllocatorInstance.Data;
  if (local_280.ArrayNum < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      iVar13 = (*pcVar7)();
      return iVar13;
    }
  }
  local_228._12_4_ = uStack_23c;
  local_228.ArrayNum = iStack_240;
  local_228.DataPtr = (TVector<double> *)local_248;
  FPlanarCells::FPlanarCells(&local_1f8,&local_228,&local_d8);
  local_218._s_0.Z = local_260;
  if ((TOptional<FNoiseSettings> *)pFVar2 != &local_1f8.InternalSurfaceMaterials.NoiseSettings) {
    local_1f8.InternalSurfaceMaterials.NoiseSettings.TypedValue.Amplitude = pFVar2->Amplitude;
    local_1f8.InternalSurfaceMaterials.NoiseSettings.TypedValue.Frequency = pFVar2->Frequency;
    local_1f8.InternalSurfaceMaterials.NoiseSettings.TypedValue.Octaves =
         (param_3->NoiseSettings).Octaves;
    local_1f8.InternalSurfaceMaterials.NoiseSettings.TypedValue.PointSpacing =
         (param_3->NoiseSettings).PointSpacing;
    local_1f8.InternalSurfaceMaterials.NoiseSettings.bIsSet = true;
    local_1f8.InternalSurfaceMaterials.NoiseSettings.TypedValue.Lacunarity =
         (param_3->NoiseSettings).Lacunarity;
    local_1f8.InternalSurfaceMaterials.NoiseSettings.TypedValue.Persistence =
         (param_3->NoiseSettings).Persistence;
  }
  local_188.TypedValue.Rotation.XY.m128d_f64[0] = (param_3->Transform).Rotation.XY.m128d_f64[0];
  local_188.TypedValue.Rotation.XY.m128d_f64[1] = (param_3->Transform).Rotation.XY.m128d_f64[1];
  local_188.TypedValue.Rotation.ZW.m128d_f64[0] = (param_3->Transform).Rotation.ZW.m128d_f64[0];
  local_188.TypedValue.Rotation.ZW.m128d_f64[1] = (param_3->Transform).Rotation.ZW.m128d_f64[1];
  fVar4 = param_3->CollisionSampleSpacing;
  fVar5 = param_3->Grout;
  local_238.DataPtr = (int *)(param_2->AllocatorInstance).Data;
  iVar13 = param_2->ArrayNum;
  bVar11 = param_3->SplitIslands;
  iVar6 = param_3->RandomSeed;
  local_188.TypedValue.Translation.XY.m128d_f64[0] =
       (param_3->Transform).Translation.XY.m128d_f64[0];
  local_188.TypedValue.Translation.XY.m128d_f64[1] =
       (param_3->Transform).Translation.XY.m128d_f64[1];
  local_188.TypedValue.Translation.ZW.m128d_f64[0] =
       (param_3->Transform).Translation.ZW.m128d_f64[0];
  local_188.TypedValue.Translation.ZW.m128d_f64[1] =
       (param_3->Transform).Translation.ZW.m128d_f64[1];
  local_188.TypedValue.Scale3D.XY.m128d_f64[0] = (param_3->Transform).Scale3D.XY.m128d_f64[0];
  local_188.TypedValue.Scale3D.XY.m128d_f64[1] = (param_3->Transform).Scale3D.XY.m128d_f64[1];
  local_188.TypedValue.Scale3D.ZW.m128d_f64[0] = (param_3->Transform).Scale3D.ZW.m128d_f64[0];
  local_188.TypedValue.Scale3D.ZW.m128d_f64[1] = (param_3->Transform).Scale3D.ZW.m128d_f64[1];
  local_188.bIsSet = true;
  if (iVar13 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      iVar13 = (*pcVar7)();
      return iVar13;
    }
  }
  local_238.ArrayNum = iVar13;
  local_218._s_0.X = dVar8;
  local_218._s_0.Y = dVar9;
  iVar13 = CutMultipleWithPlanarCells
                     (&local_1f8,param_1->Ptr,&local_238,(double)fVar5,(double)fVar4,iVar6,
                      &local_188,true,true,(FProgressCancel *)0x0,(TVector<double> *)&local_218._s_0
                      ,bVar11);
  if (iVar13 != -1) {
    ProcessNewlyFracturedBones(param_1->Ptr,iVar13,param_3->InternalMaterialID);
  }
  if (local_1f8.PlaneBoundaryVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.PlaneBoundaryVertices.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             local_1f8.PlaneBoundaries.AllocatorInstance.Data,local_1f8.PlaneBoundaries.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1f8.PlaneBoundaries.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_1f8.PlaneBoundaries.AllocatorInstance.Data);
  }
  if (local_1f8.PlaneCells.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.PlaneCells.AllocatorInstance.Data);
  }
  if (local_1f8.Planes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Planes.AllocatorInstance.Data);
  }
  FVoronoiDiagram::~FVoronoiDiagram(&local_d8);
  if (local_280.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.AllocatorInstance.Data);
  }
  return iVar13;
}

