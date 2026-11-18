// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 2

// Add @ 14a920a80

void __thiscall
`UPoseSearchInteractionSubsystem::RegenerateAllIslands'::__l2::FInteractionSearchContextGroup::Add
          (void *this,FInteractionSearchContext *param_1,int param_2)

{
  ForElementType<int> *pFVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FInteractionSearchContext *pFVar7;
  ForElementType<int> *pFVar8;
  void *pvVar9;
  uint uVar10;
  ForElementType<int> FVar11;
  ulonglong uVar12;
  ForElementType<int> FVar13;
  uint uVar14;
  ulonglong uVar15;
  int *piVar16;
  TKeyInitializer<UObject_const_*_const_&> local_res8;
  UObject *local_res10;
  int local_res18 [2];
  UObject *local_res20;
  UObject **local_58 [3];
  
  iVar6 = (int)param_1->_padding_;
  uVar12 = 0;
  uVar15 = uVar12;
  local_res18[0] = param_2;
  if (0 < iVar6) {
    do {
      uVar14 = (uint)uVar12;
      uVar10 = ~uVar14 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar14 < iVar6) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = param_1;
      if ((FInteractionSearchContext *)param_1->_padding_ != (FInteractionSearchContext *)0x0) {
        pFVar7 = (FInteractionSearchContext *)param_1->_padding_;
      }
      local_res20 = FWeakObjectPtr::Get((FWeakObjectPtr *)(&pFVar7->_padding_ + (int)uVar14));
      if (local_res20 != (UObject *)0x0) {
        uVar5 = ((uint)((ulonglong)local_res20 >> 0x14) & 0xffff ^
                (uint)((ulonglong)local_res20 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        local_res10 = local_res20;
        iVar6 = TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                ::FindIndexByHash<UObject_const_*>(this,uVar5 >> 0x10 ^ uVar5,&local_res10);
        if (iVar6 == -1) {
          iVar6 = (param_1->TickPriorities).ArrayNum;
        }
        else {
          pvVar9 = this;
          if (*(void **)((longlong)this + 0x180) != (void *)0x0) {
            pvVar9 = *(void **)((longlong)this + 0x180);
          }
          pvVar9 = (void *)((longlong)pvVar9 + (longlong)iVar6 * 0x18);
          piVar16 = (int *)((longlong)pvVar9 + 8);
          if (pvVar9 == (void *)0x0) {
            piVar16 = (int *)0x0;
          }
          iVar6 = (param_1->TickPriorities).ArrayNum;
          if (piVar16 != (int *)0x0) {
            uVar5 = 0;
            if ((int)uVar14 < iVar6) {
              uVar5 = uVar10;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar11 = (param_1->TickPriorities).AllocatorInstance.SecondaryData;
            FVar13 = (ForElementType<int>)&param_1->TickPriorities;
            if (FVar11 != (ForElementType<int>)0x0) {
              FVar13 = FVar11;
            }
            iVar6 = *(int *)(uVar15 + (longlong)FVar13);
            if (*(int *)(uVar15 + (longlong)FVar13) < *piVar16) {
              iVar6 = *piVar16;
            }
            *piVar16 = iVar6;
            goto LAB_14a920cb9;
          }
        }
        uVar5 = 0;
        if ((int)uVar14 < iVar6) {
          uVar5 = uVar10;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar11 = (param_1->TickPriorities).AllocatorInstance.SecondaryData;
        if (FVar11 == (ForElementType<int>)0x0) {
          FVar11 = (ForElementType<int>)&param_1->TickPriorities;
        }
        uVar2 = *(undefined4 *)(uVar15 + (longlong)FVar11);
        local_58[0] = &local_res20;
        TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
        ::Emplace<TKeyInitializer<UObject_const_*_const_&>_>(this,&local_res8,(bool *)local_58);
        pvVar9 = this;
        if (*(void **)((longlong)this + 0x180) != (void *)0x0) {
          pvVar9 = *(void **)((longlong)this + 0x180);
        }
        *(undefined4 *)((longlong)pvVar9 + (longlong)(int)local_res8.Key * 0x18 + 8) = uVar2;
      }
LAB_14a920cb9:
      iVar6 = (int)param_1->_padding_;
      uVar12 = (ulonglong)(uVar14 + 1);
      uVar15 = uVar15 + 4;
    } while ((int)(uVar14 + 1) < iVar6);
  }
  pFVar1 = (ForElementType<int> *)((longlong)this + 0x1e0);
  pFVar8 = *(ForElementType<int> **)((longlong)this + 0x220);
  if (*(ForElementType<int> **)((longlong)this + 0x220) == (ForElementType<int> *)0x0) {
    pFVar8 = pFVar1;
  }
  if (((pFVar8 <= (ForElementType<int> *)local_res18) &&
      (local_res18 < pFVar8->InlineData + (longlong)*(int *)((longlong)this + 0x22c) * 4)) &&
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
  iVar6 = *(int *)((longlong)this + 0x228);
  if (iVar6 == *(int *)((longlong)this + 0x22c)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<int>_>
                      (0x404,pFVar1,(int *)((longlong)this + 0x22c));
  }
  *(int *)((longlong)this + 0x228) = iVar6 + 1;
  pFVar8 = *(ForElementType<int> **)((longlong)this + 0x220);
  if (*(ForElementType<int> **)((longlong)this + 0x220) == (ForElementType<int> *)0x0) {
    pFVar8 = pFVar1;
  }
  *(int *)(pFVar8->InlineData + (longlong)iVar6 * 4) = local_res18[0];
  return;
}

// Merge @ 14a92fc80

void __thiscall
`UPoseSearchInteractionSubsystem::RegenerateAllIslands'::__l2::FInteractionSearchContextGroup::Merge
          (void *this,FInteractionSearchContextGroup *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  FInteractionSearchContextGroup *pFVar4;
  ForElementType<int> *pFVar5;
  code *pcVar6;
  ForElementType<int> *pFVar7;
  bool bVar8;
  ForElementType<int> *pFVar9;
  longlong lVar10;
  int *piVar11;
  void *pvVar12;
  int iVar13;
  int iVar14;
  FInteractionSearchContextGroup *pFVar15;
  ForElementType<int> *pFVar16;
  uint uVar17;
  TArray<int,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>_> *pTVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  TKeyInitializer<UObject_const_*_const_&> local_res20;
  undefined1 local_b8 [16];
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  uchar auStack_98 [4];
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  uchar auStack_84 [4];
  int local_80;
  int local_7c;
  ForElementType<int> local_78;
  undefined1 *local_70;
  FInteractionSearchContextGroup *local_68;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> TStack_60;
  undefined8 uStack_40;
  
  puVar1 = &(param_1->AnimContextToTickPriority).field_0x190;
  iVar14 = *(int *)&(param_1->AnimContextToTickPriority).field_0x1a0;
  iStack_a8 = 0;
  uStack_a4 = 1;
  local_90 = 0;
  iStack_94 = 0;
  if (iVar14 != 0) {
    puVar20 = *(uint **)&(param_1->AnimContextToTickPriority).field_0x198;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar17 = *puVar20;
    local_90 = 0;
    while (uVar17 == 0) {
      lVar10 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14a92fd2d;
      uVar17 = puVar20[lVar10 + 1];
    }
    uStack_a4 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uStack_a4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_80 = (int)lVar10;
    iStack_94 = local_90 + -1 + local_80;
    if (iVar14 < iStack_94) {
      iStack_94 = iVar14;
    }
  }
LAB_14a92fd2d:
  uVar17 = *(uint *)&(param_1->AnimContextToTickPriority).field_0x1a0;
  uVar21 = uVar17 & 0xffffffe0;
  iStack_88 = *(int *)&(param_1->AnimContextToTickPriority).field_0x188 -
              *(int *)&(param_1->AnimContextToTickPriority).field_0x1ac;
  auStack_98[0] = 0xff;
  auStack_98[1] = 0xff;
  auStack_98[2] = 0xff;
  auStack_98[3] = 0xff;
  TStack_60._padding_ = CONCAT44(uStack_a4,iStack_a8);
  TStack_60.CurrentBitIndex = iStack_94;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar17 >> 5;
  TStack_60._28_4_ = iStack_94;
  TStack_60.BaseBitIndex = local_90;
  uStack_40 = CONCAT44(auStack_84,iStack_88);
  local_b8._8_8_ = param_1;
  local_a0 = puVar1;
  iStack_8c = iStack_94;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar14 < (int)uVar17)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = *(uint *)&(param_1->AnimContextToTickPriority).field_0x1a0;
  if (uVar17 != uVar3) {
    puVar19 = *(undefined1 **)&(param_1->AnimContextToTickPriority).field_0x198;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar13 * 4);
    while (uVar17 == 0) {
      lVar10 = (longlong)iVar13;
      uVar21 = uVar21 + 0x20;
      iVar13 = iVar13 + 1;
      uVar17 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14a92fe3f;
      uVar17 = *(uint *)(puVar19 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_7c = (int)lVar10;
    uVar17 = local_7c + -1 + uVar21;
    if ((int)uVar3 < (int)uVar17) {
      uVar17 = uVar3;
    }
  }
LAB_14a92fe3f:
  do {
    pFVar15 = local_68;
    if (*(int *)&(local_68->AnimContextToTickPriority).field_0x188 -
        *(int *)&(local_68->AnimContextToTickPriority).field_0x1ac != (int)uStack_40) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UObject_const_*,int>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_60.CurrentBitIndex == uVar17) &&
        (TStack_60.Array == (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)puVar1
        )) && (pFVar15 == param_1)) {
      pTVar18 = (TArray<int,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>_> *)
                (param_1->SearchContextsIndices).AllocatorInstance.SecondaryData.Data;
      iVar14 = (param_1->SearchContextsIndices).ArrayNum;
      if (pTVar18 == (TArray<int,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>_> *)0x0) {
        pTVar18 = &param_1->SearchContextsIndices;
      }
      pFVar7 = &pTVar18->AllocatorInstance;
      while( true ) {
        if ((param_1->SearchContextsIndices).ArrayNum != iVar14) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (pTVar18 ==
            (TArray<int,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>_> *)
            (pFVar7->InlineData + (longlong)iVar14 * 4)) break;
        local_b8._0_4_ = *(undefined4 *)(pTVar18->AllocatorInstance).InlineData;
        pFVar16 = (ForElementType<int> *)((longlong)this + 0x1e0);
        pFVar5 = *(ForElementType<int> **)((longlong)this + 0x220);
        pFVar9 = pFVar16;
        if (pFVar5 != (ForElementType<int> *)0x0) {
          pFVar9 = pFVar5;
        }
        if (pFVar9 <= (ForElementType<int> *)local_b8) {
          pFVar9 = pFVar16;
          if (pFVar5 != (ForElementType<int> *)0x0) {
            pFVar9 = pFVar5;
          }
          if ((local_b8 < pFVar9->InlineData + (longlong)*(int *)((longlong)this + 0x22c) * 4) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
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
        iVar13 = *(int *)((longlong)this + 0x228);
        if (iVar13 == *(int *)((longlong)this + 0x22c)) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<int>_>
                             (0x404,pFVar16,(int *)((longlong)this + 0x22c));
        }
        *(int *)((longlong)this + 0x228) = iVar13 + 1;
        if (*(ForElementType<int> **)((longlong)this + 0x220) != (ForElementType<int> *)0x0) {
          pFVar16 = *(ForElementType<int> **)((longlong)this + 0x220);
        }
        pTVar18 = (TArray<int,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>_> *)
                  ((pTVar18->AllocatorInstance).InlineData + 4);
        *(undefined4 *)(pFVar16->InlineData + (longlong)iVar13 * 4) = local_b8._0_4_;
      }
      return;
    }
    pFVar4 = *(FInteractionSearchContextGroup **)&(pFVar15->AnimContextToTickPriority).field_0x180;
    if (pFVar4 != (FInteractionSearchContextGroup *)0x0) {
      pFVar15 = pFVar4;
    }
    puVar19 = &(pFVar15->AnimContextToTickPriority).field_0x0 +
              (longlong)TStack_60.CurrentBitIndex * 0x18;
    local_78.Data =
         *(int **)(&(pFVar15->AnimContextToTickPriority).field_0x0 +
                  (longlong)TStack_60.CurrentBitIndex * 0x18);
    uVar21 = ((uint)((ulonglong)local_78.Data >> 0x14) & 0xffff ^
             (uint)((ulonglong)local_78.Data >> 4)) * -0x7a143595;
    uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
    iVar13 = TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
             ::FindIndexByHash<UObject_const_*>(this,uVar21 >> 0x10 ^ uVar21,(UObject **)&local_78);
    iVar14 = *(int *)(puVar19 + 8);
    if (iVar13 == -1) {
LAB_14a92ff15:
      local_70 = puVar19;
      TSet<TTuple<UObject_const_*,int>,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
      ::Emplace<TKeyInitializer<UObject_const_*_const_&>_>(this,&local_res20,(bool *)&local_70);
      pvVar12 = this;
      if (*(void **)((longlong)this + 0x180) != (void *)0x0) {
        pvVar12 = *(void **)((longlong)this + 0x180);
      }
      *(int *)((longlong)pvVar12 + (longlong)(int)local_res20.Key * 0x18 + 8) = iVar14;
    }
    else {
      pvVar12 = this;
      if (*(void **)((longlong)this + 0x180) != (void *)0x0) {
        pvVar12 = *(void **)((longlong)this + 0x180);
      }
      pvVar12 = (void *)((longlong)pvVar12 + (longlong)iVar13 * 0x18);
      piVar11 = (int *)((longlong)pvVar12 + 8);
      if (pvVar12 == (void *)0x0) {
        piVar11 = (int *)0x0;
      }
      if (piVar11 == (int *)0x0) goto LAB_14a92ff15;
      if (iVar14 < *piVar11) {
        iVar14 = *piVar11;
      }
      *piVar11 = iVar14;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
              (&TStack_60);
  } while( true );
}

