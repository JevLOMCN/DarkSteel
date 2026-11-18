// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// operator() @ 14611f9e0

void __thiscall
`UE::MovieScene::FFreeEntityOperation::Commit'::__l2::<lambda_1>::operator()
          (void *this,FMovieSceneEntityID param_1)

{
  ForElementType<UE::MovieScene::FMovieSceneEntityID> FVar1;
  ushort uVar2;
  ForElementType<UE::MovieScene::FMovieSceneEntityID> FVar3;
  TMapBase<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask,0>_>
  *this_00;
  ForElementType<FSetElementId> FVar4;
  void *pvVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  uint *puVar10;
  ForElementType<unsigned_int> this_01;
  ForElementType<UE::MovieScene::FMovieSceneEntityID> FVar11;
  void *_Dst;
  int iVar12;
  longlong lVar13;
  ForElementType<FSetElementId> FVar14;
  longlong lVar15;
  uint uVar16;
  ForElementType<UE::MovieScene::FMovieSceneEntityID> FVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  longlong *plVar21;
  uint uVar22;
  uint uVar23;
  undefined1 local_res8 [8];
  ushort local_res10 [4];
  uint local_res18 [2];
  uint local_res20;
  ushort local_c8 [2];
  undefined4 local_c4;
  undefined2 local_c0;
  longlong local_b8;
  longlong *local_b0;
  ushort *puStack_a8;
  int local_a0;
  int iStack_9c;
  longlong *local_98;
  ushort *puStack_90;
  int local_88;
  int iStack_84;
  longlong *local_80;
  ushort *puStack_78;
  undefined8 local_70;
  longlong *local_68;
  ushort *puStack_60;
  undefined8 local_58;
  
  local_a0 = -1;
  lVar13 = *(longlong *)(*(longlong *)this + 0x20);
  puStack_a8 = local_res10;
  plVar21 = (longlong *)(lVar13 + 0xd0);
  if (*(int *)(lVar13 + 0x118) == 0) {
    iStack_9c = -1;
  }
  else {
    lVar20 = *(longlong *)(lVar13 + 0x110);
    if (*(longlong *)(lVar13 + 0x110) == 0) {
      lVar20 = lVar13 + 0x108;
    }
    iStack_9c = *(int *)(lVar20 + ((longlong)*(int *)(lVar13 + 0x118) - 1U &
                                  (ulonglong)param_1.Value) * 4);
    local_a0 = iStack_9c;
    if (iStack_9c != -1) {
      do {
        iStack_9c = *(int *)(*plVar21 + 4 + (longlong)local_a0 * 0xc);
        if (*(ushort *)(*plVar21 + (longlong)local_a0 * 0xc) == param_1.Value) break;
        local_a0 = iStack_9c;
      } while (iStack_9c != -1);
    }
  }
  local_70 = CONCAT44(iStack_9c,local_a0);
  puStack_78 = puStack_a8;
  local_b0 = plVar21;
  local_80 = plVar21;
  local_res10[0] = param_1.Value;
  iVar9 = local_a0;
  iVar18 = iStack_9c;
  iVar7 = local_a0;
  while (iVar7 != -1) {
    FVar17 = *(ForElementType<UE::MovieScene::FMovieSceneEntityID> *)((longlong)this + 8);
    FVar3 = *(ForElementType<UE::MovieScene::FMovieSceneEntityID> *)((longlong)FVar17 + 0x20);
    FVar11 = FVar17;
    if (FVar3 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
      FVar11 = FVar3;
    }
    FVar1 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)
            (*plVar21 + 2 + (longlong)iVar9 * 0xc);
    if ((ulonglong)FVar11 <= (ulonglong)FVar1) {
      FVar11 = FVar17;
      if (FVar3 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
        FVar11 = FVar3;
      }
      if (((ulonglong)FVar1 <
           (ulonglong)((longlong)FVar11 + (longlong)*(int *)((longlong)FVar17 + 0x2c) * 2)) &&
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
    iVar9 = *(int *)((longlong)FVar17 + 0x28);
    if (iVar9 == *(int *)((longlong)FVar17 + 0x2c)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneEntityID>_>
                        (0x202,(ForElementType<UE::MovieScene::FMovieSceneEntityID> *)FVar17,
                         (int *)((longlong)FVar17 + 0x2c));
    }
    local_70 = CONCAT44(local_70._4_4_,iVar18);
    *(int *)((longlong)FVar17 + 0x28) = iVar9 + 1;
    if (*(ForElementType<UE::MovieScene::FMovieSceneEntityID> *)((longlong)FVar17 + 0x20) !=
        (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
      FVar17 = *(ForElementType<UE::MovieScene::FMovieSceneEntityID> *)((longlong)FVar17 + 0x20);
    }
    *(undefined2 *)((longlong)FVar17 + (longlong)iVar9 * 2) = *(undefined2 *)FVar1;
    if (iVar18 == -1) break;
    do {
      iVar12 = iVar18;
      uVar2 = *(ushort *)(*plVar21 + (longlong)iVar12 * 0xc);
      iVar18 = *(int *)(*plVar21 + 4 + (longlong)iVar12 * 0xc);
      iVar9 = iVar12;
      if (uVar2 == *puStack_78) break;
      iVar9 = iVar18;
    } while (iVar18 != -1);
    local_70 = CONCAT44(iVar18,iVar9);
    iVar7 = iVar18;
    if (uVar2 == *puStack_78) {
      iVar7 = iVar12;
    }
  }
  lVar13 = *(longlong *)((longlong)this + 8);
  iVar18 = *(int *)(lVar13 + 0x28);
  do {
    if (iVar18 == 0) {
      return;
    }
    uVar23 = *(uint *)(lVar13 + 0x28);
    uVar22 = 0;
    local_res20 = uVar23;
    if (0 < (int)uVar23) {
      local_b8 = 0;
      do {
        lVar20 = local_b8;
        lVar13 = *(longlong *)((longlong)this + 8);
        uVar16 = 0;
        if ((int)uVar22 < *(int *)(lVar13 + 0x28)) {
          uVar16 = ~uVar22 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(longlong *)(lVar13 + 0x20) != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20);
        }
        local_c8[0] = *(ushort *)(lVar20 + lVar13);
        lVar13 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x20) + 0x98);
        local_c4 = *(uint *)(lVar13 + (ulonglong)local_c8[0] * 8);
        local_c0 = *(undefined2 *)(lVar13 + 4 + (ulonglong)local_c8[0] * 8);
        uVar16 = local_c4 & 0xffff;
        if (uVar16 == 0xffff) {
          lVar13 = *(longlong *)((longlong)this + 0x10);
          if (((*(ushort **)(lVar13 + 0x50) <= local_c8) &&
              (local_c8 < *(ushort **)(lVar13 + 0x50) + *(int *)(lVar13 + 0x5c))) &&
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
          iVar18 = *(int *)(lVar13 + 0x58);
          if (iVar18 == *(int *)(lVar13 + 0x5c)) {
            iVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x202,(ForAnyElementType *)(lVar13 + 0x50),(int *)(lVar13 + 0x5c));
          }
          *(int *)(lVar13 + 0x58) = iVar18 + 1;
          *(ushort *)(*(longlong *)(lVar13 + 0x50) + (longlong)iVar18 * 2) = local_c8[0];
        }
        else {
          lVar13 = (ulonglong)(local_c4 & 0xffff) * 0x38 +
                   *(longlong *)(*(longlong *)(*(longlong *)this + 0x20) + 8);
          uVar2 = *(ushort *)(*(longlong *)((longlong)this + 0x18) + 0x134);
          if (((uVar2 == 0xffff) || (*(int *)(lVar13 + 0x30) <= (int)(uint)uVar2)) ||
             ((*(uint *)(lVar13 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)) {
            local_res8[0] = 0;
            ``UE::MovieScene::FFreeEntityOperation::Commit'::__l2::<lambda_1>::operator()'::__l13::
            <lambda_1>::operator()(local_res8);
          }
          this_00 = *(TMapBase<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask,0>_>
                      **)((longlong)this + 0x10);
          local_res18[0] = uVar16;
          if (*(int *)&(this_00->Pairs).Elements.field_0x8 !=
              *(int *)&(this_00->Pairs).Elements.field_0x34) {
            FVar4 = (this_00->Pairs).Hash.SecondaryData;
            FVar14 = (ForElementType<FSetElementId>)&(this_00->Pairs).Hash;
            if (FVar4 != (ForElementType<FSetElementId>)0x0) {
              FVar14 = FVar4;
            }
            uVar19 = *(uint *)((longlong)FVar14 +
                              (ulonglong)((this_00->Pairs).HashSize - 1U & uVar16) * 4);
            if (uVar19 != 0xffffffff) {
              do {
                puVar10 = (uint *)((longlong)(int)uVar19 * 0x38 +
                                  *(longlong *)&(this_00->Pairs).Elements);
                if (*puVar10 == uVar16) {
                  if (puVar10 != (uint *)0x0) {
                    this_01 = (ForElementType<unsigned_int>)(puVar10 + 2);
                    goto LAB_14611fd6f;
                  }
                  break;
                }
                uVar19 = puVar10[0xc];
              } while (uVar19 != 0xffffffff);
            }
          }
          this_01 = (ForElementType<unsigned_int>)
                    TMapBase<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask,0>_>
                    ::EmplaceByHash<int>(this_00,uVar16,(int *)local_res18);
LAB_14611fd6f:
          uVar16 = local_c4;
          if (*(bool *)((longlong)this_01 + 0x20) == false) {
            uVar2 = local_c4._2_2_;
            uVar19 = (uint)local_c4._2_2_;
            iVar18 = ((uint)local_c4._2_2_ - *(int *)((longlong)this_01 + 0x18)) + 1;
            if (0 < iVar18) {
              iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                ((TBitArray<FDefaultBitArrayAllocator> *)this_01,iVar18);
              TBitArray<FDefaultBitArrayAllocator>::SetRange
                        ((TBitArray<FDefaultBitArrayAllocator> *)this_01,iVar9,iVar18,false);
            }
            if ((*(int *)((longlong)this_01 + 0x18) <= (int)uVar19) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (*(ForElementType<unsigned_int> *)((longlong)this_01 + 0x10) !=
                (ForElementType<unsigned_int>)0x0) {
              this_01 = *(ForElementType<unsigned_int> *)((longlong)this_01 + 0x10);
            }
            puVar10 = (uint *)((longlong)this_01 + (ulonglong)(uVar2 >> 5) * 4);
            *puVar10 = *puVar10 | 1 << ((byte)(uVar16 >> 0x10) & 0x1f);
            lVar20 = local_b8;
          }
        }
        local_88 = -1;
        lVar13 = *(longlong *)(*(longlong *)this + 0x20);
        puStack_90 = local_c8;
        plVar21 = (longlong *)(lVar13 + 0xd0);
        if (*(int *)(lVar13 + 0x118) == 0) {
          iStack_84 = -1;
        }
        else {
          lVar15 = lVar13 + 0x108;
          if (*(longlong *)(lVar13 + 0x110) != 0) {
            lVar15 = *(longlong *)(lVar13 + 0x110);
          }
          iStack_84 = *(int *)(lVar15 + ((longlong)*(int *)(lVar13 + 0x118) - 1U &
                                        (ulonglong)local_c8[0]) * 4);
          local_88 = iStack_84;
          if (iStack_84 != -1) {
            do {
              iStack_84 = *(int *)(*plVar21 + 4 + (longlong)local_88 * 0xc);
              if (*(ushort *)(*plVar21 + (longlong)local_88 * 0xc) == local_c8[0]) break;
              local_88 = iStack_84;
            } while (iStack_84 != -1);
          }
        }
        local_58 = CONCAT44(iStack_84,local_88);
        puStack_60 = puStack_90;
        local_98 = plVar21;
        local_68 = plVar21;
        lVar13 = local_b8;
        iVar9 = local_88;
        iVar18 = iStack_84;
        iVar7 = local_88;
        while (local_b8 = lVar20, iVar7 != -1) {
          FVar17 = *(ForElementType<UE::MovieScene::FMovieSceneEntityID> *)((longlong)this + 8);
          FVar3 = *(ForElementType<UE::MovieScene::FMovieSceneEntityID> *)((longlong)FVar17 + 0x20);
          FVar11 = FVar17;
          if (FVar3 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
            FVar11 = FVar3;
          }
          FVar1 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)
                  (*plVar21 + 2 + (longlong)iVar9 * 0xc);
          local_b8 = lVar13;
          if ((ulonglong)FVar11 <= (ulonglong)FVar1) {
            FVar11 = FVar17;
            if (FVar3 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
              FVar11 = FVar3;
            }
            if (((ulonglong)FVar1 <
                 (ulonglong)((longlong)FVar11 + (longlong)*(int *)((longlong)FVar17 + 0x2c) * 2)) &&
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
          iVar9 = *(int *)((longlong)FVar17 + 0x28);
          if (iVar9 == *(int *)((longlong)FVar17 + 0x2c)) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneEntityID>_>
                              (0x202,(ForElementType<UE::MovieScene::FMovieSceneEntityID> *)FVar17,
                               (int *)((longlong)FVar17 + 0x2c));
          }
          *(int *)((longlong)FVar17 + 0x28) = iVar9 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar18);
          if (*(ForElementType<UE::MovieScene::FMovieSceneEntityID> *)((longlong)FVar17 + 0x20) !=
              (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
            FVar17 = *(ForElementType<UE::MovieScene::FMovieSceneEntityID> *)
                      ((longlong)FVar17 + 0x20);
          }
          *(undefined2 *)((longlong)FVar17 + (longlong)iVar9 * 2) = *(undefined2 *)FVar1;
          uVar23 = local_res20;
          if (iVar18 == -1) break;
          do {
            iVar12 = iVar18;
            uVar2 = *(ushort *)(*plVar21 + (longlong)iVar12 * 0xc);
            iVar18 = *(int *)(*plVar21 + 4 + (longlong)iVar12 * 0xc);
            iVar9 = iVar12;
            if (uVar2 == *puStack_60) break;
            iVar9 = iVar18;
          } while (iVar18 != -1);
          local_58 = CONCAT44(iVar18,iVar9);
          lVar20 = local_b8;
          lVar13 = local_b8;
          iVar7 = iVar18;
          if (uVar2 == *puStack_60) {
            iVar7 = iVar12;
          }
        }
        local_b8 = local_b8 + 2;
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < (int)uVar23);
    }
    pvVar5 = *(void **)((longlong)this + 8);
    uVar22 = 0;
    if ((int)uVar23 <= *(int *)((longlong)pvVar5 + 0x28)) {
      uVar22 = ~uVar23 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (uVar23 != 0) {
      _Dst = pvVar5;
      if (*(void **)((longlong)pvVar5 + 0x20) != (void *)0x0) {
        _Dst = *(void **)((longlong)pvVar5 + 0x20);
      }
      uVar22 = *(int *)((longlong)pvVar5 + 0x28) - uVar23;
      if ((int)uVar23 < (int)uVar22) {
        uVar22 = uVar23;
      }
      if (uVar22 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst +
                             (longlong)(int)(*(int *)((longlong)pvVar5 + 0x28) - uVar22) * 2),
                (longlong)(int)uVar22 * 2);
      }
      *(int *)((longlong)pvVar5 + 0x28) = *(int *)((longlong)pvVar5 + 0x28) - uVar23;
    }
    lVar13 = *(longlong *)((longlong)this + 8);
    iVar18 = *(int *)(lVar13 + 0x28);
  } while( true );
}

// Commit @ 146127800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FCommitData * __thiscall
UE::MovieScene::FFreeEntityOperation::Commit
          (FFreeEntityOperation *this,FCommitData *__return_storage_ptr__)

{
  ushort *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  ushort uVar7;
  bool bVar8;
  int iVar9;
  FAllocationMask *pFVar10;
  uint *puVar11;
  ForElementType<unsigned_int> this_00;
  FCommitData *pFVar12;
  undefined1 *puVar13;
  ushort *puVar14;
  TArray<UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>_> *pTVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  undefined1 auStack_108 [32];
  FMovieSceneEntityID *local_e8;
  FScriptContainerElement *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  FMovieSceneEntityID local_b8 [2];
  undefined1 local_b4;
  undefined1 local_b3 [3];
  int local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined2 local_a4;
  int *local_a0;
  FScriptContainerElement *local_98;
  FFreeEntityOperation *local_90;
  undefined1 *local_88;
  FCommitData *local_80;
  FBuiltInComponentTypes *local_78;
  undefined1 local_70 [32];
  void *local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_a0 = &(__return_storage_ptr__->EmptyEntities).ArrayMax;
  *(undefined8 *)&__return_storage_ptr__->AllocationsToEntities = 0;
  *(undefined8 *)&(__return_storage_ptr__->AllocationsToEntities).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->AllocationsToEntities).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->AllocationsToEntities).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->AllocationsToEntities).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->AllocationsToEntities).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->AllocationsToEntities).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->AllocationsToEntities).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->AllocationsToEntities).field_0x48 = 0;
  (__return_storage_ptr__->EmptyEntities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->EmptyEntities).ArrayNum = 0;
  *local_a0 = 0;
  local_78 = FBuiltInComponentTypes::Get();
  iVar2 = (this->AllocationsToDestroy).ArrayNum;
  local_88 = local_70;
  local_50 = (void *)0x0;
  local_48 = 0;
  pFVar17 = (this->AllocationsToDestroy).AllocatorInstance.Data;
  local_44 = 0x10;
  pFVar18 = pFVar17 + (longlong)iVar2 * 4;
  local_90 = this;
  local_80 = __return_storage_ptr__;
  while( true ) {
    if ((this->AllocationsToDestroy).ArrayNum != iVar2) {
      local_b4 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_b4);
    }
    if (pFVar17 == pFVar18) break;
    local_b0 = *(int *)pFVar17;
    lVar3 = *(longlong *)
             (*(longlong *)&this->EntityManager->EntityAllocations + (longlong)local_b0 * 8);
    pFVar10 = TMapBase<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask,0>_>
              ::Emplace<int_const_&>
                        ((TMapBase<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask,0>_>
                          *)__return_storage_ptr__,&local_b0);
    pFVar10->bDestroyAllocation = true;
    puVar14 = *(ushort **)(lVar3 + 0x18);
    puVar1 = puVar14 + *(ushort *)(lVar3 + 0xe);
    for (; puVar14 != puVar1; puVar14 = puVar14 + 1) {
      `UE::MovieScene::FFreeEntityOperation::Commit'::__l2::<lambda_1>::operator()
                (&local_90,(FMovieSceneEntityID)*puVar14);
    }
    pFVar17 = pFVar17 + 4;
  }
  pFVar17 = (this->LooseEntitiesToDestroy).AllocatorInstance.Data;
  iVar2 = (this->LooseEntitiesToDestroy).ArrayNum;
  pFVar18 = pFVar17 + (longlong)iVar2 * 2;
  piVar20 = local_a0;
  local_98 = pFVar18;
  do {
    pTVar15 = &__return_storage_ptr__->EmptyEntities;
    if ((this->LooseEntitiesToDestroy).ArrayNum != iVar2) {
      local_b3[0] = 0;
      `TCheckedPointerIterator<UE::MovieScene::FMovieSceneEntityID_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_b3);
    }
    if (pFVar17 == pFVar18) {
      if (local_50 != (void *)0x0) {
        FMemory::Free(local_50);
      }
      return __return_storage_ptr__;
    }
    local_b8[0].Value = *(ushort *)pFVar17;
    lVar3 = *(longlong *)&this->EntityManager->EntityLocations;
    local_a8 = *(uint *)(lVar3 + (ulonglong)local_b8[0].Value * 8);
    local_a4 = *(undefined2 *)(lVar3 + 4 + (ulonglong)local_b8[0].Value * 8);
    uVar21 = local_a8 & 0xffff;
    if (uVar21 == 0xffff) {
      pFVar5 = (pTVar15->AllocatorInstance).Data;
      if ((pFVar5 <= (FScriptContainerElement *)local_b8) &&
         ((FScriptContainerElement *)local_b8 < pFVar5 + (longlong)*piVar20 * 2)) {
        local_d0 = (longlong)(__return_storage_ptr__->EmptyEntities).ArrayNum;
        local_c8 = 2;
        local_e8 = local_b8;
        local_e0 = pFVar5;
        local_d8 = (longlong)*piVar20;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FCommitData *)(*pcVar6)();
          return pFVar12;
        }
      }
      iVar16 = (__return_storage_ptr__->EmptyEntities).ArrayNum;
      if (iVar16 == *piVar20) {
        iVar16 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x202,&pTVar15->AllocatorInstance,piVar20);
      }
      pFVar5 = (pTVar15->AllocatorInstance).Data;
      (__return_storage_ptr__->EmptyEntities).ArrayNum = iVar16 + 1;
      *(ushort *)(pFVar5 + (longlong)iVar16 * 2) = local_b8[0].Value;
    }
    else {
      local_ac = uVar21;
      if (*(int *)&(__return_storage_ptr__->AllocationsToEntities).field_0x8 !=
          *(int *)&(__return_storage_ptr__->AllocationsToEntities).field_0x34) {
        puVar4 = *(undefined1 **)&(__return_storage_ptr__->AllocationsToEntities).field_0x40;
        puVar13 = &(__return_storage_ptr__->AllocationsToEntities).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar13 = puVar4;
        }
        uVar19 = *(uint *)(puVar13 +
                          (ulonglong)
                          (*(int *)&(__return_storage_ptr__->AllocationsToEntities).field_0x48 - 1U
                          & uVar21) * 4);
        if (uVar19 != 0xffffffff) {
          do {
            puVar11 = (uint *)((longlong)(int)uVar19 * 0x38 +
                              *(longlong *)&__return_storage_ptr__->AllocationsToEntities);
            if (*puVar11 == uVar21) {
              if (puVar11 != (uint *)0x0) {
                this_00 = (ForElementType<unsigned_int>)(puVar11 + 2);
                goto LAB_1461279dc;
              }
              break;
            }
            uVar19 = puVar11[0xc];
          } while (uVar19 != 0xffffffff);
        }
      }
      this_00 = (ForElementType<unsigned_int>)
                TMapBase<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask,0>_>
                ::EmplaceByHash<int>
                          ((TMapBase<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask,0>_>
                            *)__return_storage_ptr__,uVar21,(int *)&local_ac);
LAB_1461279dc:
      uVar21 = local_a8;
      if (*(bool *)((longlong)this_00 + 0x20) == false) {
        uVar7 = local_a8._2_2_;
        uVar19 = (uint)local_a8._2_2_;
        iVar16 = ((uint)local_a8._2_2_ - *(int *)((longlong)this_00 + 0x18)) + 1;
        if (0 < iVar16) {
          iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                            ((TBitArray<FDefaultBitArrayAllocator> *)this_00,iVar16);
          TBitArray<FDefaultBitArrayAllocator>::SetRange
                    ((TBitArray<FDefaultBitArrayAllocator> *)this_00,iVar9,iVar16,false);
        }
        if ((*(int *)((longlong)this_00 + 0x18) <= (int)uVar19) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FCommitData *)(*pcVar6)();
          return pFVar12;
        }
        if (*(ForElementType<unsigned_int> *)((longlong)this_00 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          this_00 = *(ForElementType<unsigned_int> *)((longlong)this_00 + 0x10);
        }
        puVar11 = (uint *)((longlong)this_00 + (ulonglong)(uVar7 >> 5) * 4);
        *puVar11 = *puVar11 | 1 << ((byte)(uVar21 >> 0x10) & 0x1f);
        pFVar18 = local_98;
        piVar20 = local_a0;
      }
    }
    `UE::MovieScene::FFreeEntityOperation::Commit'::__l2::<lambda_1>::operator()
              (&local_90,local_b8[0]);
    pFVar17 = pFVar17 + 2;
  } while( true );
}

// MarkAllocationForFree @ 146142c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FFreeEntityOperation::MarkAllocationForFree(FFreeEntityOperation *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res10 [6];
  
  pFVar2 = (this->AllocationsToDestroy).AllocatorInstance.Data;
  local_res10[0] = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2 + (longlong)(this->AllocationsToDestroy).ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->AllocationsToDestroy).ArrayNum;
  piVar1 = &(this->AllocationsToDestroy).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)this,piVar1);
  }
  (this->AllocationsToDestroy).ArrayNum = iVar5 + 1;
  *(int *)((this->AllocationsToDestroy).AllocatorInstance.Data + (longlong)iVar5 * 4) =
       local_res10[0];
  return;
}

// MarkEntityForFree @ 146142d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FFreeEntityOperation::MarkEntityForFree
          (FFreeEntityOperation *this,FMovieSceneEntityID param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ushort local_res10 [12];
  
  pFVar2 = (this->LooseEntitiesToDestroy).AllocatorInstance.Data;
  local_res10[0] = param_1.Value;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2 + (longlong)(this->LooseEntitiesToDestroy).ArrayMax * 2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->LooseEntitiesToDestroy).ArrayNum;
  piVar1 = &(this->LooseEntitiesToDestroy).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x202,&(this->LooseEntitiesToDestroy).AllocatorInstance,piVar1);
  }
  (this->LooseEntitiesToDestroy).ArrayNum = iVar5 + 1;
  *(ushort *)((this->LooseEntitiesToDestroy).AllocatorInstance.Data + (longlong)iVar5 * 2) =
       local_res10[0];
  return;
}

