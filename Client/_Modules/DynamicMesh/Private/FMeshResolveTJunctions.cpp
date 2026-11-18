// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// Apply @ 14c7d9dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall UE::Geometry::FMeshResolveTJunctions::Apply(FMeshResolveTJunctions *this)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  double *pdVar3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar4;
  double dVar5;
  uint uVar6;
  undefined1 *puVar7;
  FScriptContainerElement *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  longlong lVar10;
  longlong lVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  undefined8 uVar17;
  float fVar18;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar19;
  char cVar20;
  bool bVar21;
  undefined1 uVar22;
  uint uVar23;
  undefined8 uVar24;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar25;
  ulonglong uVar26;
  byte bVar27;
  longlong *plVar28;
  longlong lVar29;
  FDynamicMeshAttributeSet *pFVar30;
  ForAnyElementType FVar31;
  uint uVar32;
  ulonglong uVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  uint *puVar37;
  undefined1 *puVar38;
  ulonglong uVar39;
  uint *puVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  float fVar43;
  float fVar44;
  double dVar45;
  double dVar46;
  float fVar47;
  double dVar48;
  float fVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined1 auStack_618 [32];
  uint *local_5f8;
  FScriptContainerElement *local_5f0;
  longlong local_5e8;
  longlong local_5e0;
  undefined8 local_5d8;
  undefined1 local_5c8;
  undefined1 local_5c7;
  undefined1 local_5c6;
  undefined1 local_5c5;
  uint local_5c4;
  ForAnyElementType local_5c0;
  undefined8 local_5b8;
  double local_5b0;
  longlong local_5a8;
  int local_5a0 [2];
  int local_598 [2];
  int local_590 [2];
  uint local_588 [2];
  uint local_580;
  uint local_57c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_578;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_570;
  undefined8 local_550;
  longlong *local_548;
  undefined8 uStack_540;
  TBitArray<FDefaultBitArrayAllocator> *local_538;
  undefined4 uStack_530;
  uint uStack_52c;
  int local_528;
  undefined4 uStack_524;
  int iStack_520;
  undefined4 uStack_51c;
  undefined8 local_518;
  double local_510;
  double dStack_508;
  double local_500;
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  double local_4e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4d8;
  double local_4b8;
  double local_4b0;
  double local_4a8;
  TVector<double>_u_0 local_4a0;
  double local_488;
  int local_480;
  int local_47c;
  int local_478;
  int local_474;
  int local_470 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_468;
  int iStack_460;
  uint uStack_45c;
  undefined1 *local_458;
  undefined4 uStack_450;
  int iStack_44c;
  int local_448;
  undefined4 uStack_444;
  int iStack_440;
  undefined4 uStack_43c;
  int local_438;
  int local_434;
  int local_430;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_428;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_420;
  undefined8 uStack_400;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_3f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3f0;
  undefined8 uStack_3d0;
  undefined1 local_3c8 [4];
  undefined8 local_3c4;
  undefined8 local_3bc;
  undefined8 local_3b4;
  undefined8 local_3a4;
  bool local_39c [20];
  IndexIterator local_388;
  IndexIterator local_378;
  IndexIterator local_368;
  IndexIterator local_358;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_348;
  undefined4 local_30c;
  undefined4 local_2ec;
  undefined1 local_2e8 [32];
  uint *local_2c8;
  uint local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  int local_2b4;
  ForElementType<FSetElementId> local_2a8;
  int local_2a0;
  undefined1 local_298 [48];
  longlong local_268 [3];
  longlong *local_250;
  undefined1 local_248 [48];
  longlong local_218 [3];
  longlong *local_200;
  undefined1 local_1f8 [48];
  IndexEnumerable local_1c8;
  undefined1 local_1b8 [48];
  IndexEnumerable local_188;
  undefined1 local_178 [80];
  undefined1 local_128 [80];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_618;
  iVar36 = 0;
  this->NumSplitEdges = 0;
  if (*(int *)&(this->BoundaryEdges).Elements.field_0x8 ==
      *(int *)&(this->BoundaryEdges).Elements.field_0x34) {
    FDynamicMesh3::BoundaryEdgeIndicesItr(this->Mesh,(FilteredEnumerable *)local_1f8);
    FRefCountVector::FilteredEnumerable::begin
              ((FilteredEnumerable *)local_1f8,
               (FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> *)local_298);
    iVar35 = ((local_1c8.Vector)->RefCounts).CurBlockUsed +
             ((local_1c8.Vector)->RefCounts).CurBlock * 0x200;
    FRefCountVector::IndexIterator::IndexIterator(&local_358,local_1c8.Vector,iVar35,iVar35);
    iVar35 = ((local_1c8.Vector)->RefCounts).CurBlockUsed +
             ((local_1c8.Vector)->RefCounts).CurBlock * 0x200;
    FRefCountVector::IndexIterator::IndexIterator(&local_368,local_1c8.Vector,iVar35,iVar35);
    FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>::
    FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>
              ((FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> *)local_178,
               &local_368,&local_358,(TFunction<bool___cdecl(int)> *)local_1f8);
    if ((int)local_298._8_8_ != local_178._8_4_) {
      do {
        local_5a0[0] = (int)local_298._8_8_;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&this->BoundaryEdges,local_470,(bool *)local_5a0);
        do {
          FRefCountVector::BaseIterator::goto_next((BaseIterator *)local_298);
          if ((int)local_298._8_8_ == local_298._24_4_) break;
          local_598[0] = (int)local_298._8_8_;
          Core::Private::Function::CheckCallable((void *)local_298._32_8_);
          uVar17 = local_298._32_8_;
          plVar28 = local_268;
          if (local_250 != (longlong *)0x0) {
            plVar28 = local_250;
          }
          uVar24 = (**(code **)(*plVar28 + 8))();
          cVar20 = (*(code *)uVar17)(uVar24,local_598);
        } while (cVar20 == '\0');
      } while ((int)local_298._8_8_ != local_178._8_4_);
    }
    if (local_178._32_8_ != 0) {
      plVar28 = (longlong *)(local_178 + 0x30);
      if ((longlong *)local_178._72_8_ != (longlong *)0x0) {
        plVar28 = (longlong *)local_178._72_8_;
      }
      (**(code **)(*plVar28 + 0x10))();
    }
    if ((code *)local_298._32_8_ != (code *)0x0) {
      plVar28 = local_268;
      if (local_250 != (longlong *)0x0) {
        plVar28 = local_250;
      }
      (**(code **)(*plVar28 + 0x10))();
    }
    if (local_1f8._0_8_ != 0) {
      plVar28 = (longlong *)(local_1f8 + 0x10);
      if ((longlong *)local_1f8._40_8_ != (longlong *)0x0) {
        plVar28 = (longlong *)local_1f8._40_8_;
      }
      (**(code **)(*plVar28 + 0x10))();
    }
  }
  else {
    local_5c0.Data = (FScriptContainerElement *)0x0;
    local_5b8 = 0;
    FDynamicMesh3::BoundaryEdgeIndicesItr(this->Mesh,(FilteredEnumerable *)local_1b8);
    FRefCountVector::FilteredEnumerable::begin
              ((FilteredEnumerable *)local_1b8,
               (FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> *)local_248);
    iVar35 = ((local_188.Vector)->RefCounts).CurBlock * 0x200 +
             ((local_188.Vector)->RefCounts).CurBlockUsed;
    FRefCountVector::IndexIterator::IndexIterator(&local_388,local_188.Vector,iVar35,iVar35);
    iVar35 = ((local_188.Vector)->RefCounts).CurBlock * 0x200 +
             ((local_188.Vector)->RefCounts).CurBlockUsed;
    FRefCountVector::IndexIterator::IndexIterator(&local_378,local_188.Vector,iVar35,iVar35);
    FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>::
    FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>
              ((FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> *)local_128,
               &local_378,&local_388,(TFunction<bool___cdecl(int)> *)local_1b8);
    if ((int)local_248._8_8_ != local_128._8_4_) {
      do {
        local_5c4 = (uint)local_248._8_8_;
        if (*(int *)(*(longlong *)
                      ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                      ((local_248._8_8_ & 0xffffffff) >> 9) * 8) + 0xc +
                    (ulonglong)(local_5c4 & 0x1ff) * 0x10) != -1) {
          if (local_5c0.Data <= (FScriptContainerElement *)&local_5c4) {
            if ((FScriptContainerElement *)&local_5c4 <
                local_5c0.Data + (longlong)local_5b8._4_4_ * 4) {
              local_5e0 = (longlong)(int)local_5b8;
              local_5d8 = 4;
              local_5f8 = &local_5c4;
              local_5f0 = local_5c0.Data;
              local_5e8 = (longlong)local_5b8._4_4_;
              bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar21) {
                pcVar12 = (code *)swi(3);
                uVar22 = (*pcVar12)();
                return (bool)uVar22;
              }
            }
          }
          iVar35 = (int)local_5b8;
          if ((int)local_5b8 == local_5b8._4_4_) {
            iVar35 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_5c0,(int *)((longlong)&local_5b8 + 4));
          }
          local_5b8 = CONCAT44(local_5b8._4_4_,iVar35 + 1);
          *(uint *)(local_5c0.Data + (longlong)iVar35 * 4) = local_5c4;
        }
        do {
          FRefCountVector::BaseIterator::goto_next((BaseIterator *)local_248);
          if ((int)local_248._8_8_ == local_248._24_4_) break;
          local_590[0] = (int)local_248._8_8_;
          Core::Private::Function::CheckCallable((void *)local_248._32_8_);
          uVar17 = local_248._32_8_;
          plVar28 = local_218;
          if (local_200 != (longlong *)0x0) {
            plVar28 = local_200;
          }
          uVar24 = (**(code **)(*plVar28 + 8))();
          cVar20 = (*(code *)uVar17)(uVar24,local_590);
        } while (cVar20 == '\0');
      } while ((int)local_248._8_8_ != local_128._8_4_);
    }
    if (local_128._32_8_ != 0) {
      plVar28 = (longlong *)(local_128 + 0x30);
      if ((longlong *)local_128._72_8_ != (longlong *)0x0) {
        plVar28 = (longlong *)local_128._72_8_;
      }
      (**(code **)(*plVar28 + 0x10))();
    }
    if ((code *)local_248._32_8_ != (code *)0x0) {
      plVar28 = local_218;
      if (local_200 != (longlong *)0x0) {
        plVar28 = local_200;
      }
      (**(code **)(*plVar28 + 0x10))();
    }
    if (local_1b8._0_8_ != 0) {
      plVar28 = (longlong *)(local_1b8 + 0x10);
      if ((longlong *)local_1b8._40_8_ != (longlong *)0x0) {
        plVar28 = (longlong *)local_1b8._40_8_;
      }
      (**(code **)(*plVar28 + 0x10))();
    }
    iVar35 = (int)local_5b8;
    pFVar8 = local_5c0.Data + (longlong)(int)local_5b8 * 4;
    FVar31.Data = local_5c0.Data;
    while( true ) {
      if ((int)local_5b8 != iVar35) {
        local_5c8 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_5c8);
      }
      if (FVar31.Data == pFVar8) break;
      local_588[0] = *(uint *)FVar31.Data;
      if (*(int *)&(this->BoundaryEdges).Elements.field_0x8 !=
          *(int *)&(this->BoundaryEdges).Elements.field_0x34) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                  (&this->BoundaryEdges,local_588[0],(int *)local_588);
      }
      FVar31.Data = FVar31.Data + 4;
    }
    if (local_5c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c0.Data);
    }
  }
  pTVar4 = &this->BoundaryEdges;
  local_2e8._0_8_ = 0;
  puVar1 = &(this->BoundaryEdges).Elements.field_0x10;
  local_2e8._8_8_ = 0;
  local_2c8 = (uint *)0x0;
  local_2c0 = 0;
  local_2bc = 0x80;
  local_2b8 = 0xffffffff;
  local_2b4 = 0;
  local_2a8 = (ForElementType<FSetElementId>)0x0;
  local_2a0 = 0;
  local_4d8._padding_._0_4_ = 0;
  local_4d8._padding_._4_4_ = 1;
  local_4d8.UnvisitedBitMask = 0xffffffff;
  local_4d8.CurrentBitIndex = 0;
  local_4d8.BaseBitIndex = 0;
  local_4d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (*(int *)&(this->BoundaryEdges).Elements.field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4d8);
  }
  TStack_570._padding_ = CONCAT44(local_4d8._padding_._4_4_,(undefined4)local_4d8._padding_);
  TStack_570.CurrentBitIndex = local_4d8.CurrentBitIndex;
  TStack_570.UnvisitedBitMask = local_4d8.UnvisitedBitMask;
  TStack_570._28_4_ = local_4d8._28_4_;
  TStack_570.BaseBitIndex = local_4d8.BaseBitIndex;
  TStack_570.Array = local_4d8.Array;
  local_550 = CONCAT44(local_550._4_4_,
                       *(int *)&(this->BoundaryEdges).Elements.field_0x8 -
                       *(int *)&(this->BoundaryEdges).Elements.field_0x34);
  TStack_420.Array = local_4d8.Array;
  uStack_400 = local_550;
  local_578 = pTVar4;
  local_428 = pTVar4;
  TStack_420._padding_ = TStack_570._padding_;
  TStack_420._16_8_ = TStack_570._16_8_;
  TStack_420._24_8_ = TStack_570._24_8_;
  pTVar25 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_348,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                       *(int *)&(this->BoundaryEdges).Elements.field_0x28);
  TStack_570._padding_ = pTVar25->_padding_;
  pTVar16 = pTVar25->Array;
  uVar17._0_4_ = pTVar25->UnvisitedBitMask;
  uVar17._4_4_ = pTVar25->CurrentBitIndex;
  TStack_570.BaseBitIndex = pTVar25->BaseBitIndex;
  TStack_570._28_4_ = *(undefined4 *)&pTVar25->field_0x1c;
  TStack_570.Array = pTVar16;
  TStack_570._16_8_ = uVar17;
  while( true ) {
    pTVar19 = local_428;
    if (*(int *)&(local_428->Elements).field_0x8 - *(int *)&(local_428->Elements).field_0x34 !=
        (int)uStack_400) {
      local_5c7 = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5c7);
    }
    uVar34 = local_2c0;
    if (((TStack_420.CurrentBitIndex == uVar17._4_4_) && (TStack_420.Array == pTVar16)) &&
       (pTVar19 == pTVar4)) break;
    uVar34 = *(uint *)(*(longlong *)&pTVar19->Elements + (longlong)TStack_420.CurrentBitIndex * 0xc)
    ;
    local_518 = *(undefined8 *)
                 (*(longlong *)
                   ((this->Mesh->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar34 >> 9) * 8
                   ) + (ulonglong)(uVar34 & 0x1ff) * 0x10);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_2e8,&local_438,
               (bool *)&local_518);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_2e8,&local_434,
               (bool *)((longlong)&local_518 + 4));
    TStack_420.UnvisitedBitMask = TStack_420.UnvisitedBitMask & ~TStack_420._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_420);
  }
  uVar23 = 1;
  local_528 = 0;
  uStack_52c = 0;
  if (local_2c0 != 0) {
    puVar37 = (uint *)(local_2e8 + 0x10);
    if (local_2c8 != (uint *)0x0) {
      puVar37 = local_2c8;
    }
    uVar32 = *puVar37;
    local_528 = 0;
    while (uVar32 == 0) {
      lVar29 = (longlong)iVar36;
      local_528 = local_528 + 0x20;
      iVar36 = iVar36 + 1;
      uStack_52c = local_2c0;
      if ((int)((local_2c0 - 1) + ((int)(local_2c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar36)
      goto LAB_14c7da4e3;
      uVar32 = puVar37[lVar29 + 1];
    }
    uVar23 = -uVar32 & uVar32;
    uVar39 = (ulonglong)uVar23 * 2 + 1;
    lVar29 = 0x3f;
    if (uVar39 != 0) {
      for (; uVar39 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    local_430 = (int)lVar29;
    uStack_52c = local_430 + -1 + local_528;
    if ((int)local_2c0 < (int)uStack_52c) {
      uStack_52c = local_2c0;
    }
  }
LAB_14c7da4e3:
  local_578 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_2e8;
  uStack_524 = local_30c;
  TStack_570.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_2e8 + 0x10);
  iStack_520 = local_2e8._8_4_ - local_2b4;
  uVar32 = local_2c0 & 0xffffffe0;
  uStack_540 = (double)CONCAT44(uVar23,iVar36);
  uStack_530 = 0xffffffff;
  TStack_570.CurrentBitIndex = uStack_52c;
  TStack_570.UnvisitedBitMask = 0xffffffff;
  TStack_570._padding_ = (longlong)uStack_540;
  iVar36 = (int)local_2c0 >> 5;
  TStack_570._28_4_ = local_30c;
  TStack_570.BaseBitIndex = local_528;
  local_550 = CONCAT44(uStack_51c,iStack_520);
  bVar27 = (byte)local_2c0;
  local_5a8 = CONCAT44(local_5a8._4_4_,local_2c0);
  local_548 = (longlong *)local_578;
  local_538 = TStack_570.Array;
  if (((int)local_2c0 < 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar21)) {
    pcVar12 = (code *)swi(3);
    uVar22 = (*pcVar12)();
    return (bool)uVar22;
  }
  if (uVar34 != local_2c0) {
    puVar37 = (uint *)(local_2e8 + 0x10);
    if (local_2c8 != (uint *)0x0) {
      puVar37 = local_2c8;
    }
    uVar34 = -1 << (bVar27 & 0x1f) & puVar37[iVar36];
    while (uVar34 == 0) {
      lVar29 = (longlong)iVar36;
      uVar32 = uVar32 + 0x20;
      iVar36 = iVar36 + 1;
      if ((int)((local_2c0 - 1) + ((int)(local_2c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar36) {
        local_5a8 = CONCAT44(local_5a8._4_4_,local_2c0);
        uVar34 = local_2c0;
        goto LAB_14c7da60d;
      }
      uVar34 = puVar37[lVar29 + 1];
    }
    uVar39 = (ulonglong)(-uVar34 & uVar34) * 2 + 1;
    lVar29 = 0x3f;
    if (uVar39 != 0) {
      for (; uVar39 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    local_480 = (int)lVar29;
    uVar34 = local_480 + -1 + uVar32;
    if ((int)local_2c0 < (int)uVar34) {
      uVar34 = local_2c0;
    }
    local_5a8 = CONCAT44(local_5a8._4_4_,uVar34);
  }
LAB_14c7da60d:
  uVar50 = SUB84(__real_3fe0000000000000,0);
  uVar51 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
  while( true ) {
    pTVar19 = local_578;
    dVar13 = __real_7fefffffffffffff;
    dVar14 = 0.0;
    pTVar4 = &this->BoundaryEdges;
    if ((int)*(longlong *)((longlong)local_578 + 8) - *(int *)((longlong)local_578 + 0x34) !=
        (int)local_550) {
      local_5c6 = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5c6);
    }
    if (((TStack_570.CurrentBitIndex == uVar34) &&
        (TStack_570.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_2e8 + 0x10))) &&
       (pTVar19 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_2e8)) break;
    uVar34 = *(uint *)(*(longlong *)pTVar19 + (longlong)TStack_570.CurrentBitIndex * 0xc);
    lVar29 = *(longlong *)
              ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar34 >> 9) * 8);
    puVar2 = (undefined8 *)(lVar29 + (ulonglong)(uVar34 & 0x1ff) * 0x18);
    local_548 = (longlong *)*puVar2;
    uStack_540 = (double)puVar2[1];
    local_538 = *(TBitArray<FDefaultBitArrayAllocator> **)
                 (lVar29 + 0x10 + (ulonglong)(uVar34 & 0x1ff) * 0x18);
    FDynamicMesh3::GetVtxBoundaryEdges(this->Mesh,uVar34,(int *)&local_580,(int *)&local_57c);
    iVar36 = *(int *)&(this->BoundaryEdges).Elements.field_0x28;
    local_458 = &(this->BoundaryEdges).Elements.field_0x10;
    iStack_460 = 0;
    local_510 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_508 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_448 = 0;
    uVar34 = 0xffffffff;
    local_500 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uStack_45c = 1;
    local_4e8 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
    local_5b0 = dVar13;
    local_4e0 = 0.0;
    local_4f8 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
    dStack_4f0 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
    iStack_44c = 0;
    if (iVar36 != 0) {
      puVar37 = *(uint **)&(this->BoundaryEdges).Elements.field_0x20;
      puVar40 = (uint *)local_458;
      if (puVar37 != (uint *)0x0) {
        puVar40 = puVar37;
      }
      uVar23 = *puVar40;
      while (uVar23 == 0) {
        lVar29 = (longlong)iStack_460;
        local_448 = local_448 + 0x20;
        iStack_460 = iStack_460 + 1;
        iStack_44c = iVar36;
        if ((int)(iVar36 + -1 + (iVar36 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_460)
        goto LAB_14c7da780;
        uVar23 = puVar40[lVar29 + 1];
      }
      uStack_45c = -uVar23 & uVar23;
      uVar39 = (ulonglong)uStack_45c * 2 + 1;
      lVar29 = 0x3f;
      if (uVar39 != 0) {
        for (; uVar39 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      local_47c = (int)lVar29;
      iStack_44c = local_47c + -1 + local_448;
      if (iVar36 < iStack_44c) {
        iStack_44c = iVar36;
      }
    }
LAB_14c7da780:
    puVar1 = &(this->BoundaryEdges).Elements.field_0x10;
    uStack_444 = local_2ec;
    iStack_440 = *(int *)&(this->BoundaryEdges).Elements.field_0x8 -
                 *(int *)&(this->BoundaryEdges).Elements.field_0x34;
    uVar23 = *(uint *)&(this->BoundaryEdges).Elements.field_0x28;
    TStack_3f0._padding_ = CONCAT44(uStack_45c,iStack_460);
    uStack_450 = 0xffffffff;
    uVar32 = uVar23 & 0xffffffe0;
    TStack_3f0.CurrentBitIndex = iStack_44c;
    TStack_3f0.UnvisitedBitMask = 0xffffffff;
    iVar35 = (int)uVar23 >> 5;
    TStack_3f0._28_4_ = local_2ec;
    TStack_3f0.BaseBitIndex = local_448;
    uStack_3d0 = CONCAT44(uStack_43c,iStack_440);
    local_468 = pTVar4;
    local_3f8 = pTVar4;
    TStack_3f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_458;
    if ((((int)uVar23 < 0) || (iVar36 < (int)uVar23)) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar21)) {
      pcVar12 = (code *)swi(3);
      uVar22 = (*pcVar12)();
      return (bool)uVar22;
    }
    pTVar16 = local_538;
    dVar13 = uStack_540;
    plVar28 = local_548;
    uVar6 = *(uint *)&(this->BoundaryEdges).Elements.field_0x28;
    if (uVar23 != uVar6) {
      puVar7 = *(undefined1 **)&(this->BoundaryEdges).Elements.field_0x20;
      puVar38 = puVar1;
      if (puVar7 != (undefined1 *)0x0) {
        puVar38 = puVar7;
      }
      uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar38 + (longlong)iVar35 * 4);
      while (uVar23 == 0) {
        lVar29 = (longlong)iVar35;
        uVar32 = uVar32 + 0x20;
        iVar35 = iVar35 + 1;
        uVar23 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar35)
        goto LAB_14c7da8c0;
        uVar23 = *(uint *)(puVar38 + lVar29 * 4 + 4);
      }
      uVar39 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar29 = 0x3f;
      if (uVar39 != 0) {
        for (; uVar39 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      local_474 = (int)lVar29;
      uVar23 = local_474 + -1 + uVar32;
      if ((int)uVar6 < (int)uVar23) {
        uVar23 = uVar6;
      }
    }
LAB_14c7da8c0:
    while( true ) {
      pTVar4 = local_3f8;
      if (*(int *)&(local_3f8->Elements).field_0x8 - *(int *)&(local_3f8->Elements).field_0x34 !=
          (int)uStack_3d0) {
        local_5c5 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5c5);
      }
      if (((TStack_3f0.CurrentBitIndex == uVar23) &&
          (TStack_3f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar4 == &this->BoundaryEdges)) break;
      uVar32 = *(uint *)(*(longlong *)&pTVar4->Elements + (longlong)TStack_3f0.CurrentBitIndex * 0xc
                        );
      if ((uVar32 != local_580) && (uVar32 != local_57c)) {
        local_488 = 0.0;
        pFVar8 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
        uVar39 = *(ulonglong *)
                  (*(longlong *)
                    ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar32 >> 9) * 8) + (ulonglong)(uVar32 & 0x1ff) * 0x10);
        uVar26 = (ulonglong)((uint)uVar39 & 0x1ff);
        lVar29 = *(longlong *)(pFVar8 + ((uVar39 & 0xffffffff) >> 9) * 8);
        pdVar3 = (double *)(lVar29 + uVar26 * 0x18);
        dVar48 = *pdVar3;
        dVar45 = pdVar3[1];
        dVar5 = *(double *)(lVar29 + 0x10 + uVar26 * 0x18);
        uVar26 = (ulonglong)((uint)(uVar39 >> 0x20) & 0x1ff);
        lVar29 = *(longlong *)(pFVar8 + (uVar39 >> 0x29) * 8);
        pdVar3 = (double *)(lVar29 + uVar26 * 0x18);
        dVar46 = *pdVar3;
        dVar15 = pdVar3[1];
        local_538 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar29 + 0x10 + uVar26 * 0x18);
        local_4a0._s_0.X = dVar46 - dVar48;
        local_4b8 = (dVar48 + dVar46) * (double)CONCAT44(uVar51,uVar50);
        local_4a0._s_0.Y = dVar15 - dVar45;
        local_4b0 = (dVar45 + dVar15) * (double)CONCAT44(uVar51,uVar50);
        local_4a0._s_0.Z = (double)local_538 - dVar5;
        local_4a8 = (dVar5 + (double)local_538) * (double)CONCAT44(uVar51,uVar50);
        dVar5 = Normalize<double>((TVector<double> *)&local_4a0._s_0,0.0);
        local_488 = dVar5 * (double)CONCAT44(uVar51,uVar50);
        dVar48 = (dVar13 - local_4b0) * local_4a0._s_0.Y +
                 ((double)plVar28 - local_4b8) * local_4a0._s_0.X +
                 ((double)pTVar16 - local_4a8) * local_4a0._s_0.Z;
        if (dVar48 < local_488) {
          if (dVar5 * __real_bfe0000000000000 < dVar48) {
            dVar45 = (double)plVar28 - (dVar48 * local_4a0._s_0.X + local_4b8);
            dVar46 = dVar13 - (dVar48 * local_4a0._s_0.Y + local_4b0);
            dVar5 = (double)pTVar16 - (dVar48 * local_4a0._s_0.Z + local_4a8);
            dVar48 = dVar46 * dVar46 + dVar45 * dVar45;
            goto LAB_14c7daba2;
          }
          dVar48 = (local_4b8 - local_488 * local_4a0._s_0.X) - (double)plVar28;
          dVar45 = (local_4b0 - local_488 * local_4a0._s_0.Y) - dVar13;
          dVar5 = (local_4a8 - local_488 * local_4a0._s_0.Z) - (double)pTVar16;
          dVar48 = dVar45 * dVar45 + dVar48 * dVar48 + dVar5 * dVar5;
        }
        else {
          dVar45 = (local_488 * local_4a0._s_0.Y + local_4b0) - dVar13;
          dVar48 = (local_488 * local_4a0._s_0.X + local_4b8) - (double)plVar28;
          dVar5 = (local_488 * local_4a0._s_0.Z + local_4a8) - (double)pTVar16;
          dVar48 = dVar45 * dVar45 + dVar48 * dVar48;
LAB_14c7daba2:
          dVar48 = dVar48 + dVar5 * dVar5;
        }
        if (dVar48 < local_5b0) {
          local_510 = local_4b8;
          dStack_508 = local_4b0;
          local_500 = local_4a8;
          local_4f8 = local_4a0._s_0.X;
          dStack_4f0 = local_4a0._s_0.Y;
          local_4e8 = local_4a0._s_0.Z;
          uVar34 = uVar32;
          dVar14 = local_488;
          local_5b0 = dVar48;
        }
        uVar50 = SUB84(__real_3fe0000000000000,0);
        uVar51 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
      }
      TStack_3f0.UnvisitedBitMask = TStack_3f0.UnvisitedBitMask & ~TStack_3f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3f0);
    }
    local_4e0 = dVar14;
    if ((uVar34 != 0xffffffff) && (dVar5 = this->DistanceTolerance, local_5b0 <= dVar5 * dVar5)) {
      dVar46 = (double)plVar28 - (local_510 - dVar14 * local_4f8);
      dVar45 = dVar13 - (dStack_508 - dVar14 * dStack_4f0);
      dVar48 = (double)pTVar16 - (local_500 - dVar14 * local_4e8);
      uVar50 = SUB84(__real_3fe0000000000000,0);
      uVar51 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
      if ((dVar5 <= SQRT(dVar45 * dVar45 + dVar46 * dVar46 + dVar48 * dVar48)) &&
         (dVar45 = (double)plVar28 - (dVar14 * local_4f8 + local_510),
         dVar46 = dVar13 - (dVar14 * dStack_4f0 + dStack_508),
         dVar48 = (double)pTVar16 - (dVar14 * local_4e8 + local_500),
         dVar5 <= SQRT(dVar46 * dVar46 + dVar45 * dVar45 + dVar48 * dVar48))) {
        dVar5 = dVar14 - dVar5;
        if (dVar5 <= 0.0) {
          dVar5 = 0.0;
        }
        dVar13 = (dVar13 - dStack_508) * dStack_4f0 + ((double)plVar28 - local_510) * local_4f8 +
                 ((double)pTVar16 - local_500) * local_4e8;
        uVar23 = SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar32 = (uint)((ulonglong)dVar13 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        if ((double)CONCAT44(uVar32,uVar23) < dVar5 || (double)CONCAT44(uVar32,uVar23) == dVar5) {
          dVar14 = (dVar13 / dVar14 + __real_3ff0000000000000) * __real_3fe0000000000000;
          if (0.0 <= dVar14) {
            if (__real_3ff0000000000000 <= dVar14) {
              dVar14 = __real_3ff0000000000000;
            }
          }
          else {
            dVar14 = 0.0;
          }
          local_3c4 = 0xffffffffffffffff;
          local_3bc = 0xffffffffffffffff;
          local_3b4 = 0xffffffffffffffff;
          local_3a4 = 0xffffffffffffffff;
          local_39c[0] = true;
          local_39c[1] = true;
          local_39c[2] = true;
          local_39c[3] = true;
          local_39c[4] = true;
          local_39c[5] = true;
          local_39c[6] = true;
          local_39c[7] = true;
          local_39c[8] = true;
          local_39c[9] = true;
          local_39c[10] = true;
          local_39c[0xb] = true;
          iVar36 = (**(code **)(this->Mesh->_padding_ + 0x30))(this->Mesh,uVar34,local_3c8,dVar14);
          if (iVar36 == 0) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&this->BoundaryEdges,&local_478,local_39c);
            this->NumSplitEdges = this->NumSplitEdges + 1;
          }
        }
      }
    }
    TStack_570.UnvisitedBitMask = TStack_570.UnvisitedBitMask & ~TStack_570._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_570);
    uVar34 = (uint)local_5a8;
  }
  pFVar9 = (this->Mesh->AttributeSet).Ptr;
  if ((pFVar9 != (FDynamicMeshAttributeSet *)0x0) &&
     (iVar36 = (**(code **)(pFVar9->_padding_ + 0xb8))(), 0 < iVar36)) {
    pFVar9 = (this->Mesh->AttributeSet).Ptr;
    pFVar30 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar9 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar30 = pFVar9;
    }
    iVar35 = 0;
    iVar36 = (**(code **)(pFVar30->_padding_ + 0xb8))();
    fVar18 = __real_3f800000;
    local_5a8 = (longlong)iVar36;
    if (0 < local_5a8) {
      local_5b0 = 0.0;
      do {
        dVar14 = local_5b0;
        pFVar9 = (this->Mesh->AttributeSet).Ptr;
        iVar36 = (pFVar9->NormalLayers).Array.ArrayNum;
        if ((iVar35 < iVar36) && (-1 < iVar35)) {
          if (iVar35 < 0) {
            local_5f8 = (uint *)(longlong)iVar35;
            local_5f0 = (FScriptContainerElement *)(longlong)iVar36;
            bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar21) {
              pcVar12 = (code *)swi(3);
              uVar22 = (*pcVar12)();
              return (bool)uVar22;
            }
          }
          lVar29 = *(longlong *)
                    ((pFVar9->NormalLayers).Array.AllocatorInstance.Data + (longlong)dVar14 * 8);
        }
        else {
          lVar29 = 0;
        }
        uVar39 = 0;
        uVar34 = *(int *)(lVar29 + 8) * 0x200 + *(int *)(lVar29 + 0xc);
        if ((uVar34 == 0) ||
           (puVar2 = *(undefined8 **)(lVar29 + 0x10), (ushort)(*(short *)*puVar2 - 1U) < 0xfffe)) {
LAB_14c7daf84:
          uVar23 = (uint)uVar39;
        }
        else {
          uVar39 = 1;
          uVar23 = 1;
          if (1 < (int)uVar34) {
            do {
              uVar26 = (ulonglong)((uint)uVar39 & 0x1ff);
              if ((*(short *)(puVar2[uVar39 >> 9] + uVar26 * 2) != 0) &&
                 (*(short *)(puVar2[uVar39 >> 9] + uVar26 * 2) != -1)) break;
              uVar23 = (uint)uVar39 + 1;
              uVar39 = (ulonglong)uVar23;
            } while ((int)uVar23 < (int)uVar34);
            goto LAB_14c7daf84;
          }
        }
joined_r0x00014c7daf87:
        if (uVar23 != uVar34) {
          while( true ) {
            lVar10 = *(longlong *)(lVar29 + 0x48);
            uVar23 = (int)uVar39 * 3;
            uVar33 = (ulonglong)(uVar23 + 1 >> 9);
            uVar41 = (ulonglong)(uVar23 + 1 & 0x1ff);
            lVar11 = *(longlong *)(lVar10 + (ulonglong)(uVar23 >> 9) * 8);
            uVar26 = (ulonglong)(uVar23 + 2 & 0x1ff);
            uVar42 = (ulonglong)(uVar23 + 2 >> 9);
            fVar44 = *(float *)(lVar11 + (ulonglong)(uVar23 & 0x1ff) * 4);
            fVar47 = *(float *)(*(longlong *)(lVar10 + uVar33 * 8) + uVar41 * 4);
            fVar49 = *(float *)(*(longlong *)(lVar10 + uVar42 * 8) + uVar26 * 4);
            fVar43 = SQRT(fVar44 * fVar44 + fVar47 * fVar47 + fVar49 * fVar49);
            if (fVar43 <= 0.0) {
              fVar49 = 0.0;
              fVar47 = 0.0;
              fVar44 = 0.0;
            }
            else {
              fVar43 = fVar18 / fVar43;
              fVar44 = fVar44 * fVar43;
              fVar47 = fVar47 * fVar43;
              fVar49 = fVar49 * fVar43;
            }
            *(float *)(lVar11 + (ulonglong)(uVar23 & 0x1ff) * 4) = fVar44;
            uVar23 = (int)uVar39 + 1;
            uVar39 = (ulonglong)uVar23;
            *(float *)(*(longlong *)(*(longlong *)(lVar29 + 0x48) + uVar33 * 8) + uVar41 * 4) =
                 fVar47;
            *(float *)(*(longlong *)(*(longlong *)(lVar29 + 0x48) + uVar42 * 8) + uVar26 * 4) =
                 fVar49;
            dVar14 = local_5b0;
            if ((int)uVar34 <= (int)uVar23) break;
            while( true ) {
              uVar26 = (ulonglong)((uint)uVar39 & 0x1ff);
              lVar10 = *(longlong *)(*(longlong *)(lVar29 + 0x10) + (uVar39 >> 9) * 8);
              if ((*(short *)(lVar10 + uVar26 * 2) != 0) && (*(short *)(lVar10 + uVar26 * 2) != -1))
              break;
              uVar23 = (uint)uVar39 + 1;
              uVar39 = (ulonglong)uVar23;
              if ((int)uVar34 <= (int)uVar23) goto joined_r0x00014c7daf87;
            }
          }
          goto joined_r0x00014c7daf87;
        }
        local_5b0 = (double)((longlong)dVar14 + 1);
        iVar35 = iVar35 + 1;
      } while ((longlong)local_5b0 < local_5a8);
    }
  }
  local_2a0 = 0;
  if (local_2a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_2a8);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_2e8);
  return true;
}

