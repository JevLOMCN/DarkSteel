// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 4

// ExpandToOneRingNeighbors_FindNeighborsHelper<0,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> @ 14ce23980

void __thiscall
UE::Geometry::FMeshEdgeSelection::
ExpandToOneRingNeighbors_FindNeighborsHelper<0,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
          (FMeshEdgeSelection *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,TFunctionRef<bool___cdecl(int)> *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar9;
  bool bVar10;
  longlong lVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  FSmallListSet *pFVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  undefined1 local_c8 [4];
  uint local_c4;
  undefined1 local_c0 [24];
  int iStack_a8;
  int iStack_a4;
  uint local_a0;
  int iStack_98;
  undefined4 uStack_94;
  int local_90;
  int local_8c;
  undefined8 local_88;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  undefined4 local_34;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  local_c0._8_4_ = 0;
  local_a0 = 0;
  local_c0._12_4_ = 1;
  iStack_a4 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar17 = *puVar16;
    while (uVar17 == 0) {
      lVar11 = (longlong)(int)local_c0._8_4_;
      local_a0 = local_a0 + 0x20;
      local_c0._8_4_ = local_c0._8_4_ + 1;
      iStack_a4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_c0._8_4_)
      goto LAB_14ce23a2f;
      uVar17 = puVar16[lVar11 + 1];
    }
    local_c0._12_4_ = -uVar17 & uVar17;
    uVar2 = (ulonglong)(uint)local_c0._12_4_ * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_90 = (int)lVar11;
    iStack_a4 = (local_a0 - 1) + local_90;
    if (iVar3 < iStack_a4) {
      iStack_a4 = iVar3;
    }
  }
LAB_14ce23a2f:
  uVar17 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_98 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar18 = uVar17 & 0xffffffe0;
  iStack_a8 = -1;
  TStack_78._padding_ = CONCAT44(local_c0._12_4_,local_c0._8_4_);
  TStack_78.CurrentBitIndex = iStack_a4;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar17 >> 5;
  TStack_78._28_4_ = local_34;
  TStack_78.BaseBitIndex = local_a0;
  uStack_58 = CONCAT44(uStack_94,iStack_98);
  local_c0._0_8_ = param_1;
  local_c0._16_8_ = puVar1;
  local_80 = param_1;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar17 != uVar4) {
    puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar13;
      uVar18 = uVar18 + 0x20;
      iVar13 = iVar13 + 1;
      uVar17 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14ce23b40;
      uVar17 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_8c = (int)lVar11;
    uVar17 = local_8c + -1 + uVar18;
    if ((int)uVar4 < (int)uVar17) {
      uVar17 = uVar4;
    }
  }
LAB_14ce23b40:
  do {
    pTVar9 = local_80;
    if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
        (int)uStack_58) {
      local_c8[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_c8);
    }
    if (((TStack_78.CurrentBitIndex == uVar17) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == param_1))
    {
      return;
    }
    uVar18 = *(uint *)(*(longlong *)&pTVar9->Elements + (longlong)TStack_78.CurrentBitIndex * 0xc);
    lVar11 = 0;
    local_88 = *(undefined8 *)
                (*(longlong *)
                  ((this->Mesh->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8)
                + (ulonglong)(uVar18 & 0x1ff) * 0x10);
    do {
      iVar3 = *(int *)((longlong)&local_88 + lVar11 * 4);
      pFVar14 = &this->Mesh->VertexEdgeLists;
      FSmallListSet::BaseValueIterator::BaseValueIterator
                ((BaseValueIterator *)local_c0,pFVar14,iVar3,false);
      while ((((FSmallListSet *)local_c0._0_8_ != pFVar14 || (local_c0._8_4_ != iVar3)) ||
             ((iStack_a8 != -1 || (iStack_a4 != -1))))) {
        local_c4 = local_a0;
        if (*(int *)&(this->Selected).Elements.field_0x8 !=
            *(int *)&(this->Selected).Elements.field_0x34) {
          FVar5 = (this->Selected).Hash.SecondaryData;
          FVar12 = (ForElementType<FSetElementId>)&(this->Selected).Hash;
          if (FVar5 != (ForElementType<FSetElementId>)0x0) {
            FVar12 = FVar5;
          }
          iVar13 = *(int *)((longlong)FVar12 +
                           (ulonglong)((this->Selected).HashSize - 1U & local_a0) * 4);
          if (iVar13 != -1) {
            lVar6 = *(longlong *)&(this->Selected).Elements;
            do {
              if (*(uint *)(lVar6 + (longlong)iVar13 * 0xc) == local_a0) goto LAB_14ce23cd0;
              iVar13 = *(int *)(lVar6 + 4 + (longlong)iVar13 * 0xc);
            } while (iVar13 != -1);
          }
        }
        pFVar7 = (param_2->AllocatorInstance).Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_c4) &&
            ((FScriptContainerElement *)&local_c4 < pFVar7 + (longlong)param_2->ArrayMax * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar13 = param_2->ArrayNum;
        if (iVar13 == param_2->ArrayMax) {
          iVar13 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar13 + 1;
        *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_c4;
LAB_14ce23cd0:
        FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_c0);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < 2);
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  } while( true );
}

// ExpandToOneRingNeighbors_Helper<0> @ 14ce23d30

void __thiscall
UE::Geometry::FMeshEdgeSelection::ExpandToOneRingNeighbors_Helper<0>
          (FMeshEdgeSelection *this,int param_1,TFunctionRef<bool___cdecl(int)> *param_2)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  code *pcVar4;
  FMeshEdgeSelection *pFVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ForElementType<FSetElementId> FVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  FSmallListSet *pFVar15;
  char local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_d8;
  int local_c8;
  undefined1 local_c4 [4];
  uint local_c0 [2];
  FMeshEdgeSelection *local_b8;
  ulonglong local_b0;
  FScriptContainerElement *local_a8;
  ulonglong uStack_a0;
  BaseValueIterator local_98;
  int local_70;
  int local_6c;
  undefined8 local_68;
  TFunctionRef<bool___cdecl(int)> local_60 [2];
  
  if (0 < param_1) {
    local_60[0]._0_8_ = *(undefined8 *)param_2;
    local_60[0]._8_8_ = *(undefined8 *)&param_2->field_0x8;
    local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.ArrayNum = 0;
    local_d8.ArrayMax = 0;
    local_b8 = this;
    ExpandToOneRingNeighbors_FindNeighborsHelper<0,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
              (this,&this->Selected,&local_d8,local_60);
    if (param_1 == 1) {
      iVar9 = local_d8.ArrayNum;
      uVar10 = (ulonglong)local_d8.ArrayNum;
      pFVar1 = local_d8.AllocatorInstance.Data + uVar10 * 4;
      FVar14.Data = local_d8.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar10 != iVar9) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_c4);
        }
        if (FVar14.Data == pFVar1) break;
        local_c0[0] = *(uint *)FVar14.Data;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&this->Selected,&local_70,(bool *)local_c0);
        uVar10 = local_d8._8_8_ & 0xffffffff;
        FVar14.Data = FVar14.Data + 4;
      }
    }
    else {
      `UE::Geometry::FMeshEdgeSelection::ExpandToOneRingNeighbors_Helper<0>'::__l2::<lambda_1>::
      operator()(&local_b8,&local_d8);
      local_a8 = (FScriptContainerElement *)0x0;
      uStack_a0 = 0;
      if (1 < param_1) {
        local_b0 = (ulonglong)(param_1 - 1);
        do {
          uVar10 = uStack_a0;
          FVar14.Data = local_d8.AllocatorInstance.Data;
          uVar11 = 0;
          iVar9 = local_d8.ArrayNum;
          local_d8.AllocatorInstance.Data = local_a8;
          local_a8 = FVar14.Data;
          uStack_a0._0_4_ = local_d8.ArrayNum;
          uStack_a0._4_4_ = local_d8.ArrayMax;
          local_d8._8_8_ = uVar10 & 0xffffffff00000000;
          if (((longlong)uVar10 < 0) && ((int)(uVar10 >> 0x20) != 0)) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&local_d8.AllocatorInstance,0,&local_d8.ArrayMax);
            uVar11 = local_d8._8_8_ & 0xffffffff;
          }
          pFVar1 = FVar14.Data + (longlong)iVar9 * 4;
          for (; FVar14.Data != pFVar1; FVar14.Data = FVar14.Data + 4) {
            pFVar15 = &this->Mesh->VertexEdgeLists;
            local_68 = *(undefined8 *)
                        (*(longlong *)
                          ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                          (ulonglong)(*(uint *)FVar14.Data >> 9) * 8) +
                        (ulonglong)(*(uint *)FVar14.Data & 0x1ff) * 0x10);
            iVar9 = (int)local_68;
            FSmallListSet::BaseValueIterator::BaseValueIterator(&local_98,pFVar15,iVar9,false);
            while ((((local_98.ListSet != pFVar15 || (local_98.ListIndex != iVar9)) ||
                    (local_98.iCur != -1)) || (local_98.cur_ptr != -1))) {
              local_c8 = local_98.cur_value;
              if (*(int *)&(this->Selected).Elements.field_0x8 !=
                  *(int *)&(this->Selected).Elements.field_0x34) {
                FVar2 = (this->Selected).Hash.SecondaryData;
                FVar12 = (ForElementType<FSetElementId>)&(this->Selected).Hash;
                if (FVar2 != (ForElementType<FSetElementId>)0x0) {
                  FVar12 = FVar2;
                }
                iVar7 = *(int *)((longlong)FVar12 +
                                ((ulonglong)((this->Selected).HashSize - 1) &
                                local_98._32_8_ & 0xffffffff) * 4);
                if (iVar7 != -1) {
                  lVar3 = *(longlong *)&(this->Selected).Elements;
                  do {
                    if (*(int *)(lVar3 + (longlong)iVar7 * 0xc) == local_c8) goto LAB_14ce24001;
                    iVar7 = *(int *)(lVar3 + 4 + (longlong)iVar7 * 0xc);
                  } while (iVar7 != -1);
                }
              }
              if (((local_d8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_c8) &&
                  ((FScriptContainerElement *)&local_c8 <
                   local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayMax * 4)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar7 = local_d8.ArrayNum;
              if (local_d8.ArrayNum == local_d8.ArrayMax) {
                iVar7 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
              }
              local_d8.ArrayNum = iVar7 + 1;
              *(int *)(local_d8.AllocatorInstance.Data + (longlong)iVar7 * 4) = local_c8;
LAB_14ce24001:
              FSmallListSet::BaseValueIterator::GotoNext(&local_98);
            }
            iVar9 = local_68._4_4_;
            pFVar15 = &this->Mesh->VertexEdgeLists;
            FSmallListSet::BaseValueIterator::BaseValueIterator
                      (&local_98,pFVar15,local_68._4_4_,false);
            while (((local_98.ListSet != pFVar15 || (local_98.ListIndex != iVar9)) ||
                   ((local_98.iCur != -1 || (local_98.cur_ptr != -1))))) {
              local_c8 = local_98.cur_value;
              if (*(int *)&(this->Selected).Elements.field_0x8 !=
                  *(int *)&(this->Selected).Elements.field_0x34) {
                FVar2 = (this->Selected).Hash.SecondaryData;
                FVar12 = (ForElementType<FSetElementId>)&(this->Selected).Hash;
                if (FVar2 != (ForElementType<FSetElementId>)0x0) {
                  FVar12 = FVar2;
                }
                iVar7 = *(int *)((longlong)FVar12 +
                                ((ulonglong)((this->Selected).HashSize - 1) &
                                local_98._32_8_ & 0xffffffff) * 4);
                if (iVar7 != -1) {
                  lVar3 = *(longlong *)&(this->Selected).Elements;
                  do {
                    if (*(int *)(lVar3 + (longlong)iVar7 * 0xc) == local_c8) goto LAB_14ce24147;
                    iVar7 = *(int *)(lVar3 + 4 + (longlong)iVar7 * 0xc);
                  } while (iVar7 != -1);
                }
              }
              if (((local_d8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_c8) &&
                  ((FScriptContainerElement *)&local_c8 <
                   local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayMax * 4)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar7 = local_d8.ArrayNum;
              if (local_d8.ArrayNum == local_d8.ArrayMax) {
                iVar7 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
              }
              local_d8.ArrayNum = iVar7 + 1;
              *(int *)(local_d8.AllocatorInstance.Data + (longlong)iVar7 * 4) = local_c8;
LAB_14ce24147:
              FSmallListSet::BaseValueIterator::GotoNext(&local_98);
            }
            uVar11 = local_d8._8_8_ & 0xffffffff;
          }
          uVar13 = 0;
          if (0 < (int)uVar11) {
            do {
              pFVar5 = local_b8;
              uVar8 = 0;
              if ((int)uVar13 < (int)uVar11) {
                uVar8 = ~uVar13 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        (&pFVar5->Selected,&local_6c,
                         (bool *)(local_d8.AllocatorInstance.Data + (longlong)(int)uVar13 * 4));
              uVar8 = local_d8.ArrayNum;
              if (local_res20 != '\0') {
                uVar8 = 0;
                if ((int)uVar13 < local_d8.ArrayNum) {
                  uVar8 = ~uVar13 >> 0x1f;
                }
                if (uVar8 == 0) {
                  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar6) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                }
                iVar9 = (local_d8.ArrayNum - uVar13) + -1;
                if (1 < iVar9) {
                  iVar9 = 1;
                }
                uVar8 = local_d8.ArrayNum;
                if (iVar9 != 0) {
                  memmove(local_d8.AllocatorInstance.Data + (longlong)(int)uVar13 * 4,
                          local_d8.AllocatorInstance.Data +
                          (longlong)(local_d8.ArrayNum - iVar9) * 4,(longlong)iVar9 << 2);
                  uVar8 = local_d8.ArrayNum;
                }
                local_d8.ArrayNum = uVar8 - 1;
                uVar13 = uVar13 - 1;
                uVar8 = uVar8 - 1;
              }
              uVar11 = (ulonglong)uVar8;
              uVar13 = uVar13 + 1;
            } while ((int)uVar13 < (int)uVar8);
          }
          local_b0 = local_b0 - 1;
        } while (local_b0 != 0);
        local_b0 = 0;
      }
      if (local_a8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8);
      }
    }
    if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 14ce27b10

void __thiscall
`UE::Geometry::FMeshEdgeSelection::ExpandToOneRingNeighbors_Helper<0>'::__l2::<lambda_1>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char local_res10;
  int local_res18 [4];
  
  uVar7 = 0;
  iVar6 = param_1->ArrayNum;
  if (0 < iVar6) {
    do {
      lVar1 = *(longlong *)this;
      uVar8 = ~uVar7 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = uVar8;
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
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(lVar1 + 8),local_res18,
                 (bool *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar7 * 4));
      if (local_res10 != '\0') {
        uVar5 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar5 = uVar8;
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
        pFVar2 = (param_1->AllocatorInstance).Data;
        iVar6 = param_1->ArrayNum + ~uVar7;
        if (1 < iVar6) {
          iVar6 = 1;
        }
        if (iVar6 != 0) {
          memmove(pFVar2 + (longlong)(int)uVar7 * 4,
                  pFVar2 + (longlong)(param_1->ArrayNum - iVar6) * 4,(longlong)iVar6 << 2);
        }
        param_1->ArrayNum = param_1->ArrayNum + -1;
        uVar7 = uVar7 - 1;
      }
      iVar6 = param_1->ArrayNum;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar6);
  }
  return;
}

// ContractByBorderEdges @ 14ce64c80

void __thiscall
UE::Geometry::FMeshEdgeSelection::ContractByBorderEdges(FMeshEdgeSelection *this,int param_1)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 *puVar5;
  ForElementType<FSetElementId> FVar6;
  code *pcVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  int iVar9;
  longlong lVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  uint uVar15;
  FSmallListSet *pFVar16;
  undefined1 *puVar17;
  uint *puVar18;
  bool bVar19;
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20 [2];
  uint local_118 [2];
  ForAnyElementType local_110;
  undefined8 local_108;
  ulonglong local_100;
  int local_f8;
  int local_f4;
  undefined8 local_f0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  BaseValueIterator local_88;
  undefined4 local_44;
  
  local_110.Data = (FScriptContainerElement *)0x0;
  local_108 = 0;
  if (0 < param_1) {
    this_00 = &this->Selected;
    local_100 = (ulonglong)(uint)param_1;
    do {
      puVar17 = &(this->Selected).Elements.field_0x10;
      bVar19 = (longlong)local_108 < 0;
      local_108 = local_108 & 0xffffffff00000000;
      if (bVar19) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_110,0,(int *)((longlong)&local_108 + 4));
      }
      iVar9 = *(int *)&(this->Selected).Elements.field_0x28;
      uStack_dc = 1;
      local_c8 = 0;
      iStack_cc = 0;
      iStack_e0 = 0;
      if (iVar9 != 0) {
        puVar4 = *(uint **)&(this->Selected).Elements.field_0x20;
        puVar18 = (uint *)puVar17;
        if (puVar4 != (uint *)0x0) {
          puVar18 = puVar4;
        }
        uVar15 = *puVar18;
        local_c8 = 0;
        while (uVar15 == 0) {
          lVar10 = (longlong)iStack_e0;
          local_c8 = local_c8 + 0x20;
          iStack_e0 = iStack_e0 + 1;
          iStack_cc = iVar9;
          if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) goto LAB_14ce64d7e;
          uVar15 = puVar18[lVar10 + 1];
        }
        uStack_dc = -uVar15 & uVar15;
        uVar2 = (ulonglong)uStack_dc * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_f8 = (int)lVar10;
        iStack_cc = local_c8 + -1 + local_f8;
        if (iVar9 < iStack_cc) {
          iStack_cc = iVar9;
        }
      }
LAB_14ce64d7e:
      uVar15 = *(uint *)&(this->Selected).Elements.field_0x28;
      uStack_c4 = local_44;
      uVar14 = uVar15 & 0xffffffe0;
      iStack_c0 = *(int *)&(this->Selected).Elements.field_0x8 -
                  *(int *)&(this->Selected).Elements.field_0x34;
      TStack_b0._padding_ = CONCAT44(uStack_dc,iStack_e0);
      uStack_d0 = 0xffffffff;
      TStack_b0.CurrentBitIndex = iStack_cc;
      TStack_b0.UnvisitedBitMask = 0xffffffff;
      iVar12 = (int)uVar15 >> 5;
      TStack_b0._28_4_ = local_44;
      TStack_b0.BaseBitIndex = local_c8;
      uStack_90 = CONCAT44(uStack_bc,iStack_c0);
      local_res18 = uVar15;
      local_e8 = this_00;
      local_d8 = puVar17;
      local_b8 = this_00;
      TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar17;
      if ((((int)uVar15 < 0) || (iVar9 < (int)uVar15)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar19)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar3 = *(uint *)&(this->Selected).Elements.field_0x28;
      if (uVar15 != uVar3) {
        puVar5 = *(undefined1 **)&(this->Selected).Elements.field_0x20;
        if (puVar5 != (undefined1 *)0x0) {
          puVar17 = puVar5;
        }
        uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar12 * 4);
        while (uVar15 == 0) {
          lVar10 = (longlong)iVar12;
          uVar14 = uVar14 + 0x20;
          iVar12 = iVar12 + 1;
          uVar15 = uVar3;
          local_res18 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_14ce64ea0;
          uVar15 = *(uint *)(puVar17 + lVar10 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_f4 = (int)lVar10;
        uVar15 = local_f4 + -1 + uVar14;
        local_res18 = uVar15;
        if ((int)uVar3 < (int)uVar15) {
          uVar15 = uVar3;
          local_res18 = uVar3;
        }
      }
LAB_14ce64ea0:
      while( true ) {
        pTVar8 = local_b8;
        if (*(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34 !=
            (int)uStack_90) {
          local_res10[0] = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        FVar13.Data = local_110.Data;
        if (((TStack_b0.CurrentBitIndex == uVar15) &&
            (TStack_b0.Array ==
             (TBitArray<FDefaultBitArrayAllocator> *)&(this->Selected).Elements.field_0x10)) &&
           (pTVar8 == this_00)) break;
        local_118[0] = *(uint *)(*(longlong *)&pTVar8->Elements +
                                (longlong)TStack_b0.CurrentBitIndex * 0xc);
        lVar10 = 0;
        local_f0 = *(undefined8 *)
                    (*(longlong *)
                      ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                      (ulonglong)(local_118[0] >> 9) * 8) + (ulonglong)(local_118[0] & 0x1ff) * 0x10
                    );
        do {
          iVar9 = *(int *)((longlong)&local_f0 + lVar10 * 4);
          pFVar16 = &this->Mesh->VertexEdgeLists;
          bVar19 = false;
          FSmallListSet::BaseValueIterator::BaseValueIterator(&local_88,pFVar16,iVar9,false);
          uVar15 = local_118[0];
          while ((((local_88.ListSet != pFVar16 || (local_88.ListIndex != iVar9)) ||
                  (local_88.iCur != -1)) || (local_88.cur_ptr != -1))) {
            if (local_88.cur_value != uVar15) {
              if (*(int *)&(this->Selected).Elements.field_0x8 !=
                  *(int *)&(this->Selected).Elements.field_0x34) {
                FVar6 = (this->Selected).Hash.SecondaryData;
                FVar11 = (ForElementType<FSetElementId>)&(this->Selected).Hash;
                if (FVar6 != (ForElementType<FSetElementId>)0x0) {
                  FVar11 = FVar6;
                }
                iVar12 = *(int *)((longlong)FVar11 +
                                 ((ulonglong)((this->Selected).HashSize - 1) &
                                 local_88._32_8_ & 0xffffffff) * 4);
                if (iVar12 != -1) {
                  do {
                    if (*(uint *)(*(longlong *)&this_00->Elements + (longlong)iVar12 * 0xc) ==
                        local_88.cur_value) goto LAB_14ce64fa8;
                    iVar12 = *(int *)(*(longlong *)&this_00->Elements + 4 + (longlong)iVar12 * 0xc);
                  } while (iVar12 != -1);
                }
              }
              bVar19 = true;
            }
LAB_14ce64fa8:
            FSmallListSet::BaseValueIterator::GotoNext(&local_88);
          }
          if (bVar19) {
            if (((local_110.Data <= (FScriptContainerElement *)local_118) &&
                ((FScriptContainerElement *)local_118 <
                 local_110.Data + (longlong)local_108._4_4_ * 4)) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), uVar15 = local_118[0], bVar19)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar9 = (int)local_108;
            if ((int)local_108 == local_108._4_4_) {
              iVar9 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_110,(int *)((longlong)&local_108 + 4));
              uVar15 = local_118[0];
            }
            local_108 = CONCAT44(local_108._4_4_,iVar9 + 1);
            *(uint *)(local_110.Data + (longlong)iVar9 * 4) = uVar15;
            break;
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < 2);
        TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
        uVar15 = local_res18;
      }
      lVar10 = (longlong)(int)local_108;
      if (((int)local_108 < 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar19)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar1 = FVar13.Data + lVar10 * 4;
      for (; FVar13.Data != pFVar1; FVar13.Data = FVar13.Data + 4) {
        local_res20[0] = *(uint *)FVar13.Data;
        if (*(int *)&(this->Selected).Elements.field_0x8 !=
            *(int *)&(this->Selected).Elements.field_0x34) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                    (this_00,local_res20[0],(int *)local_res20);
        }
      }
      local_100 = local_100 - 1;
    } while (local_100 != 0);
    local_100 = 0;
  }
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  return;
}

