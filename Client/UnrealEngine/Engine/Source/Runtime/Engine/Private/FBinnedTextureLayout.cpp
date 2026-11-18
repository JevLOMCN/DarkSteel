// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// AddElement @ 1488b6fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FBinnedTextureLayout::AddElement
          (FBinnedTextureLayout *this,TIntPoint<int> param_1,TIntPoint<int> *param_2)

{
  TArray<FBinnedTextureLayout::FBin,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TIntPoint<int>_u_0 *pTVar3;
  longlong lVar4;
  code *pcVar5;
  FBinnedTextureLayout *this_00;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  FBinAllocation *pFVar11;
  TIntPoint<int>_u_0 *pTVar12;
  int iVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  ForElementType<FTextureLayout::FTextureLayoutNode> FVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  ulonglong uVar23;
  uint uStackX_14;
  undefined1 auStackY_118 [32];
  undefined1 local_c8;
  undefined1 local_c7 [3];
  uint local_c4;
  TIntPoint<int>_u_0 local_c0;
  TIntPoint<int>_u_0 local_b8;
  TIntPoint<int>_u_0 local_b0;
  int local_a8;
  int iStack_a4;
  FBinnedTextureLayout *local_a0;
  TIntPoint<int>_u_0 local_98;
  TIntPoint<int>_u_0 local_90;
  TIntPoint<int>_u_0 *local_88;
  TIntPoint<int>_u_0 local_80;
  undefined1 local_78;
  FBinAllocation local_70;
  FBinAllocation *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_118;
  iVar16 = (this->Bins).ArrayNum;
  pTVar1 = &this->Bins;
  pFVar15 = (pTVar1->AllocatorInstance).Data;
  uStackX_14 = param_1.field0_0x0._4_4_;
  pFVar21 = pFVar15 + (longlong)iVar16 * 0x40;
  local_a0 = this;
  local_88 = &param_2->field0_0x0;
  while( true ) {
    if ((this->Bins).ArrayNum != iVar16) {
      local_c8 = 0;
      `TCheckedPointerIterator<FBinnedTextureLayout::FBin,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_c8);
    }
    iVar13 = param_1.field0_0x0._0_4_;
    if (pFVar15 == pFVar21) break;
    if ((*(int *)pFVar15 == iVar13) && (*(uint *)(pFVar15 + 4) == uStackX_14)) goto LAB_1488b7172;
    pFVar15 = pFVar15 + 0x40;
  }
  pTVar3 = (TIntPoint<int>_u_0 *)(pTVar1->AllocatorInstance).Data;
  local_50 = (FBinAllocation *)0x0;
  local_48 = 0;
  local_44 = 1;
  local_78 = 0;
  local_80 = param_1.field0_0x0;
  if (((pTVar3 <= &local_80) && (&local_80 < pTVar3 + (longlong)(this->Bins).ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar16 = (this->Bins).ArrayNum;
  piVar2 = &(this->Bins).ArrayMax;
  if (iVar16 == *piVar2) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x840,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Bins).ArrayNum = iVar16 + 1;
  FBin::FBin((FBin *)((pTVar1->AllocatorInstance).Data + (longlong)iVar16 * 0x40),
             (FBin *)&local_80._s_0);
  pFVar11 = &local_70;
  if (local_50 != (FBinAllocation *)0x0) {
    pFVar11 = local_50;
  }
  DestructItems<FBinnedTextureLayout::FBinAllocation,int>(pFVar11,local_48);
  if (local_50 != (FBinAllocation *)0x0) {
    FMemory::Free(local_50);
  }
  iVar16 = (this->Bins).ArrayNum;
  uVar19 = iVar16 - 1;
  uVar8 = 0;
  if ((int)uVar19 < iVar16) {
    uVar8 = ~uVar19 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pFVar15 = (pTVar1->AllocatorInstance).Data + (longlong)((this->Bins).ArrayNum + -1) * 0x40;
LAB_1488b7172:
  if (pFVar15[8] != (FScriptContainerElement)0x0) {
    return false;
  }
  iVar16 = *(int *)(pFVar15 + 0x38);
  pFVar21 = *(FScriptContainerElement **)(pFVar15 + 0x30);
  if (*(FScriptContainerElement **)(pFVar15 + 0x30) == (FScriptContainerElement *)0x0) {
    pFVar21 = pFVar15 + 0x10;
  }
  pFVar22 = pFVar21 + (longlong)iVar16 * 0x20;
  while( true ) {
    if (*(int *)(pFVar15 + 0x38) != iVar16) {
      local_c7[0] = 0;
      `TCheckedPointerIterator<FBinnedTextureLayout::FBinAllocation,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_c7);
    }
    if (pFVar21 == pFVar22) break;
    if (0 < *(int *)(pFVar21 + 0x18)) {
      if ((*(int *)(pFVar21 + 0x18) < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar18 = *(int *)(pFVar21 + 0x18) + -1;
      iVar16 = *(int *)(*(longlong *)(pFVar21 + 0x10) + -4 + (longlong)*(int *)(pFVar21 + 0x18) * 4)
      ;
      *(int *)(pFVar21 + 0x18) = iVar18;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(ForAnyElementType *)(pFVar21 + 0x10),iVar18,(int *)(pFVar21 + 0x1c));
      local_90._4_4_ = (undefined4)((ulonglong)*(undefined8 *)pFVar21 >> 0x20);
      local_90._s_0.X = iVar16 * iVar13 + (int)*(undefined8 *)pFVar21;
      *local_88 = local_90;
      return true;
    }
    pFVar21 = pFVar21 + 0x20;
  }
  iVar16 = (local_a0->MaxSize).field0_0x0._s_0.X / iVar13;
  iVar18 = local_a0->BinSizeTexels / (int)(uStackX_14 * iVar13);
  local_a0 = (FBinnedTextureLayout *)&local_a0->Layout;
  if (iVar18 < iVar16) {
    iVar16 = iVar18;
  }
  iVar18 = 1;
  if (1 < iVar16) {
    iVar18 = iVar16;
  }
  uVar23 = (ulonglong)(uint)(iVar18 * 2);
  local_c0 = (TIntPoint<int>_u_0)0x0;
  local_b8 = (TIntPoint<int>_u_0)0x0;
  local_b0 = (TIntPoint<int>_u_0)0x0;
  local_a8 = 0;
  iStack_a4 = 0;
  do {
    uVar8 = (int)uVar23 / 2;
    uVar23 = (ulonglong)uVar8;
    uVar19 = uVar8 * iVar13;
    if ((uVar19 == 0) || (uStackX_14 == 0)) {
LAB_1488b73d1:
      local_98._4_4_ = local_c0._s_0.Y;
      local_98._s_0.Y = local_98._4_4_ + uStackX_14;
      local_98._s_0.X = local_c0._s_0.X + uVar19;
      local_b8 = local_98;
      local_88->_s_0 = (TIntPoint<int>_u_0_s_0)local_c0;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar23);
      }
      if (iStack_a4 < (int)uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar8,(ForAnyElementType *)&local_b0._s_0,local_a8,&iStack_a4);
      }
      while (local_c4 = uVar8 - 1, 0 < (int)local_c4) {
        if ((((ulonglong)local_b0 <= &local_c4) &&
            (&local_c4 < (uint *)((longlong)local_b0 + (longlong)iStack_a4 * 4))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if (local_a8 == iStack_a4) {
          local_a8 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)&local_b0._s_0,&iStack_a4);
        }
        *(uint *)((longlong)local_b0 + (longlong)local_a8 * 4) = local_c4;
        local_a8 = local_a8 + 1;
        uVar8 = local_c4;
      }
      pTVar3 = (TIntPoint<int>_u_0 *)(pFVar15 + 0x10);
      pTVar12 = *(TIntPoint<int>_u_0 **)(pFVar15 + 0x30);
      if (*(TIntPoint<int>_u_0 **)(pFVar15 + 0x30) == (TIntPoint<int>_u_0 *)0x0) {
        pTVar12 = pTVar3;
      }
      if (((pTVar12 <= &local_c0) && (&local_c0 < pTVar12 + (longlong)*(int *)(pFVar15 + 0x3c) * 4))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar16 = *(int *)(pFVar15 + 0x38);
      if (iVar16 == *(int *)(pFVar15 + 0x3c)) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FBinnedTextureLayout::FBinAllocation>_>
                           (0x820,(ForElementType<FBinnedTextureLayout::FBinAllocation> *)
                                  &pTVar3->_s_0,(int *)(pFVar15 + 0x3c));
      }
      bVar6 = true;
      *(int *)(pFVar15 + 0x38) = iVar16 + 1;
      pTVar12 = *(TIntPoint<int>_u_0 **)(pFVar15 + 0x30);
      if (*(TIntPoint<int>_u_0 **)(pFVar15 + 0x30) == (TIntPoint<int>_u_0 *)0x0) {
        pTVar12 = pTVar3;
      }
      pTVar12 = pTVar12 + (longlong)iVar16 * 4;
      pTVar12->_s_0 = (TIntPoint<int>_u_0_s_0)local_c0;
      pTVar12[1] = local_b8;
      pTVar12[2] = (TIntPoint<int>_u_0)0x0;
      pTVar12[2] = local_b0;
      local_b0 = (TIntPoint<int>_u_0)0x0;
      pTVar12[3]._s_0.X = local_a8;
      *(int *)((longlong)pTVar12 + 0x1c) = iStack_a4;
      local_a8 = 0;
      iStack_a4 = 0;
      goto LAB_1488b75d4;
    }
    uVar20 = uVar19;
    uVar14 = uStackX_14;
    if (*(bool *)((longlong)local_a0 + 0x15) != false) {
      uVar20 = uVar19 + 3 & 0xfffffffc;
      uVar14 = uStackX_14 + 3 & 0xfffffffc;
    }
    uVar9 = FTextureLayout::AddSurfaceInner((FTextureLayout *)local_a0,0,uVar20,uVar14,false);
    if ((uVar9 != 0xffffffff) ||
       (uVar9 = FTextureLayout::AddSurfaceInner((FTextureLayout *)local_a0,0,uVar20,uVar14,true),
       uVar9 != 0xffffffff)) {
      this_00 = local_a0;
      uVar10 = 0;
      if ((int)uVar9 <
          ((TArray<FTextureLayout::FTextureLayoutNode,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>
            *)((longlong)local_a0 + 0x18))->ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FVar17 = (((TArray<FTextureLayout::FTextureLayoutNode,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>
                  *)((longlong)this_00 + 0x18))->AllocatorInstance).SecondaryData;
      if (FVar17 == (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
        FVar17 = (ForElementType<FTextureLayout::FTextureLayoutNode>)((longlong)this_00 + 0x18);
      }
      local_c0._s_0.X._0_2_ =
           *(undefined2 *)((uchar *)((longlong)FVar17 + 8) + (longlong)(int)uVar9 * 0x14);
      lVar4 = (longlong)FVar17 + (longlong)(int)uVar9 * 0x14;
      *(undefined1 *)(lVar4 + 0x10) = 1;
      local_c0._s_0.X._2_2_ = 0;
      local_c0._s_0.Y._0_2_ = *(undefined2 *)(lVar4 + 10);
      local_c0._s_0.Y._2_2_ = 0;
      FTextureLayout::UpdateSize
                ((FTextureLayout *)this_00,*(ushort *)(lVar4 + 8) + uVar20,
                 *(ushort *)(lVar4 + 10) + uVar14);
      goto LAB_1488b73d1;
    }
  } while (1 < (int)uVar8);
  pFVar15[8] = (FScriptContainerElement)0x1;
  bVar6 = false;
LAB_1488b75d4:
  if (local_b0 != (TIntPoint<int>_u_0)0x0) {
    FMemory::Free((void *)local_b0);
  }
  return bVar6;
}

// RemoveElement @ 1488d7470

void __thiscall
FBinnedTextureLayout::RemoveElement(FBinnedTextureLayout *this,TIntRect<int> *param_1)

{
  ForElementType<FBinnedTextureLayout::FBinAllocation> *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FBinnedTextureLayout::FBinAllocation> *pFVar6;
  uchar *puVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  uchar *local_res20;
  int local_48 [2];
  longlong local_40;
  
  iVar5 = (this->Bins).ArrayNum;
  pFVar13 = (FScriptContainerElement *)0x0;
  pFVar8 = (this->Bins).AllocatorInstance.Data;
  pFVar10 = pFVar8 + (longlong)iVar5 * 0x40;
  while( true ) {
    if ((this->Bins).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FBinnedTextureLayout::FBin,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar10) break;
    if ((*(int *)pFVar8 ==
         *(int *)((longlong)&param_1->field0_0x0 + 8) - *(int *)&param_1->field0_0x0) &&
       (*(int *)(pFVar8 + 4) ==
        *(int *)((longlong)&param_1->field0_0x0 + 0xc) -
        *(int *)((longlong)&param_1->field0_0x0 + 4))) goto LAB_1488d74fb;
    pFVar8 = pFVar8 + 0x40;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("MatchingBin",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureLayout.cpp"
                     ,0x5a,L"");
  pFVar8 = pFVar13;
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1488d74fb:
  if ((*(int *)(pFVar8 + 0x38) < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MatchingBin->BinAllocations.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureLayout.cpp"
                         ,0x5b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar9 = 0;
  if (0 < *(int *)(pFVar8 + 0x38)) {
    pFVar1 = (ForElementType<FBinnedTextureLayout::FBinAllocation> *)(pFVar8 + 0x10);
    do {
      uVar12 = ~uVar9 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar9 < *(int *)(pFVar8 + 0x38)) {
        uVar11 = uVar12;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = *(int *)&param_1->field0_0x0;
      pFVar6 = pFVar1;
      if (*(ForElementType<FBinnedTextureLayout::FBinAllocation> **)(pFVar8 + 0x30) !=
          (ForElementType<FBinnedTextureLayout::FBinAllocation> *)0x0) {
        pFVar6 = *(ForElementType<FBinnedTextureLayout::FBinAllocation> **)(pFVar8 + 0x30);
      }
      local_40 = (longlong)(int)uVar9 * 0x20;
      puVar7 = pFVar6->InlineData + local_40;
      local_res20 = puVar7;
      if ((((iVar5 < *(int *)(pFVar13 + 8 + (longlong)pFVar6)) &&
           (iVar2 = *(int *)((longlong)&param_1->field0_0x0 + 8),
           *(int *)(pFVar13 + (longlong)pFVar6) < iVar2)) &&
          (*(int *)((longlong)&param_1->field0_0x0 + 4) < *(int *)(pFVar13 + 0xc + (longlong)pFVar6)
          )) && (*(int *)(pFVar13 + 4 + (longlong)pFVar6) <
                 *(int *)((longlong)&param_1->field0_0x0 + 0xc))) {
        local_48[0] = (iVar5 - *(int *)puVar7) / (iVar2 - iVar5);
        if (((*(int **)(puVar7 + 0x10) <= local_48) &&
            (local_48 < *(int **)(puVar7 + 0x10) + *(int *)(puVar7 + 0x1c))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = *(int *)(puVar7 + 0x18);
        if (iVar5 == *(int *)(puVar7 + 0x1c)) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)(puVar7 + 0x10),(int *)(puVar7 + 0x1c));
        }
        *(int *)(puVar7 + 0x18) = iVar5 + 1;
        *(int *)(*(longlong *)(puVar7 + 0x10) + (longlong)iVar5 * 4) = local_48[0];
        uVar11 = *(int *)(local_res20 + 8) - *(uint *)local_res20;
        if (*(int *)(local_res20 + 0x18) !=
            (int)uVar11 /
            (*(int *)((longlong)&param_1->field0_0x0 + 8) - *(int *)&param_1->field0_0x0)) {
          return;
        }
        bVar4 = FTextureLayout::RemoveElement
                          (&this->Layout,*(uint *)local_res20,*(uint *)(local_res20 + 4),uVar11,
                           *(int *)(local_res20 + 0xc) - *(uint *)(local_res20 + 4));
        if ((!bVar4) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Layout.RemoveElement(BinAllocation.LayoutAllocation.Min.X, BinAllocation.LayoutAllocation.Min.Y, BinAllocation.LayoutAllocation.Width(), BinAllocation.LayoutAllocation.Height())"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureLayout.cpp"
                               ,0x69,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar11 = 0;
        if ((int)uVar9 < *(int *)(pFVar8 + 0x38)) {
          uVar11 = uVar12;
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
        pFVar6 = *(ForElementType<FBinnedTextureLayout::FBinAllocation> **)(pFVar8 + 0x30);
        if (*(ForElementType<FBinnedTextureLayout::FBinAllocation> **)(pFVar8 + 0x30) ==
            (ForElementType<FBinnedTextureLayout::FBinAllocation> *)0x0) {
          pFVar6 = pFVar1;
        }
        puVar7 = pFVar6->InlineData + local_40;
        if (*(void **)(puVar7 + 0x10) != (void *)0x0) {
          FMemory::Free(*(void **)(puVar7 + 0x10));
        }
        iVar5 = *(int *)(pFVar8 + 0x38) + ~uVar9;
        if (iVar5 != 0) {
          memmove(puVar7,(ForElementType<FBinnedTextureLayout::FBinAllocation> *)(puVar7 + 0x20),
                  (longlong)iVar5 << 5);
        }
        *(int *)(pFVar8 + 0x38) = *(int *)(pFVar8 + 0x38) + -1;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FBinnedTextureLayout::FBinAllocation>_>
                  (0x20,8,pFVar1,*(int *)(pFVar8 + 0x38),(int *)(pFVar8 + 0x3c));
        iVar5 = (this->Bins).ArrayNum;
        pFVar8 = (this->Bins).AllocatorInstance.Data;
        pFVar10 = pFVar8 + (longlong)iVar5 * 0x40;
        while( true ) {
          if ((this->Bins).ArrayNum != iVar5) {
            `TCheckedPointerIterator<FBinnedTextureLayout::FBin,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res18);
          }
          if (pFVar8 == pFVar10) break;
          pFVar8[8] = (FScriptContainerElement)0x0;
          pFVar8 = pFVar8 + 0x40;
        }
        return;
      }
      uVar9 = uVar9 + 1;
      pFVar13 = pFVar13 + 0x20;
    } while ((int)uVar9 < *(int *)(pFVar8 + 0x38));
  }
  return;
}

