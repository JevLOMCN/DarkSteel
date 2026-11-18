// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// operator() @ 14c7cef20

void __thiscall
`UE::Geometry::FMeshSnapOpenBoundaries::Apply'::__l67::<lambda_2>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  undefined8 uVar2;
  uint uVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 local_a8 [16];
  double local_98 [2];
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_38;
  
  pcVar4 = *(char **)this;
  if (*pcVar4 == '\0') {
    uVar3 = *(uint *)((longlong)this + 0x10);
    lVar8 = *(longlong *)
             (*(longlong *)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x130) +
             (ulonglong)((uint)param_1 >> 9) * 8);
    local_a8._0_8_ = *(double *)(lVar8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
    local_a8._8_4_ = *(uint *)(lVar8 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
    uVar7 = (uint)((ulonglong)local_a8._0_8_ >> 0x20);
    if ((uint)local_a8._0_8_ == uVar3) {
      iVar10 = 0;
    }
    else if (uVar7 == uVar3) {
      iVar10 = 1;
    }
    else {
      iVar10 = -1;
      if (local_a8._8_4_ == uVar3) {
        iVar10 = 2;
      }
    }
    lVar8 = *(longlong *)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x10);
    uVar9 = (ulonglong)((uint)local_a8._0_8_ & 0x1ff);
    lVar5 = *(longlong *)(lVar8 + ((local_a8._0_8_ & 0xffffffff) >> 9) * 8);
    pdVar1 = (double *)(lVar5 + uVar9 * 0x18);
    local_88._s_0.X = *pdVar1;
    local_88._s_0.Y = pdVar1[1];
    local_88._s_0.Z = *(double *)(lVar5 + 0x10 + uVar9 * 0x18);
    uVar9 = (ulonglong)(uVar7 & 0x1ff);
    lVar5 = *(longlong *)(lVar8 + ((ulonglong)local_a8._0_8_ >> 0x29) * 8);
    pdVar1 = (double *)(lVar5 + uVar9 * 0x18);
    local_70._s_0.X = *pdVar1;
    local_70._s_0.Y = pdVar1[1];
    local_70._s_0.Z = *(double *)(lVar5 + 0x10 + uVar9 * 0x18);
    lVar8 = *(longlong *)(lVar8 + (ulonglong)((uint)local_a8._8_4_ >> 9) * 8);
    pdVar1 = (double *)(lVar8 + (ulonglong)(local_a8._8_4_ & 0x1ff) * 0x18);
    local_58._s_0.X = *pdVar1;
    local_58._s_0.Y = pdVar1[1];
    local_58._s_0.Z = *(double *)(lVar8 + 0x10 + (ulonglong)(local_a8._8_4_ & 0x1ff) * 0x18);
    UE::Geometry::VectorUtil::Normal<double>
              ((TVector<double> *)&local_38._s_0,(TVector<double> *)&local_88._s_0,
               (TVector<double> *)&local_70._s_0,(TVector<double> *)&local_58._s_0);
    uVar6 = *(undefined8 *)((longlong)this + 0x20);
    lVar8 = (longlong)iVar10;
    uVar2 = *(undefined8 *)((longlong)this + 0x28);
    (&local_88)[lVar8]._s_0.X = *(double *)((longlong)this + 0x18);
    *(undefined8 *)((longlong)&local_88 + lVar8 * 0x18 + 8) = uVar6;
    *(undefined8 *)((longlong)&local_88 + lVar8 * 0x18 + 0x10) = uVar2;
    UE::Geometry::VectorUtil::Normal<double>
              ((TVector<double> *)local_a8,(TVector<double> *)&local_88._s_0,
               (TVector<double> *)&local_70._s_0,(TVector<double> *)&local_58._s_0);
    if (0.0 <= (double)CONCAT44(local_a8._12_4_,local_a8._8_4_) * local_38._s_0.Y +
               (double)local_a8._0_8_ * local_38._s_0.X + local_98[0] * local_38._s_0.Z) {
      *pcVar4 = '\0';
      return;
    }
  }
  *pcVar4 = '\x01';
  return;
}

// Apply @ 14c7db160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall UE::Geometry::FMeshSnapOpenBoundaries::Apply(FMeshSnapOpenBoundaries *this)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  FMutex *this_00;
  double *pdVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  atomic<unsigned_char> aVar5;
  undefined1 *puVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FDynamicMesh3 *pFVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar16;
  char cVar17;
  bool bVar18;
  undefined1 uVar19;
  short sVar20;
  undefined8 uVar21;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar22;
  ulonglong uVar23;
  byte bVar24;
  longlong *plVar25;
  longlong lVar26;
  ulonglong uVar27;
  ForAnyElementType FVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  undefined1 *puVar33;
  uint *puVar34;
  uint *puVar35;
  uint uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 *puVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined1 auStack_668 [32];
  uint *local_648;
  FScriptContainerElement *local_640;
  longlong local_638;
  longlong local_630;
  undefined8 local_628;
  char local_618 [8];
  uint local_610 [2];
  ForAnyElementType local_608;
  undefined8 local_600;
  int local_5f4;
  int local_5f0;
  undefined1 *local_5e8;
  double local_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  uint uStack_5c0;
  uint uStack_5bc;
  int local_5b8;
  undefined4 uStack_5b4;
  int iStack_5b0;
  undefined4 uStack_5ac;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_5a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5a0;
  int iStack_580;
  undefined4 uStack_57c;
  int local_578 [2];
  int local_570 [2];
  uint local_568 [2];
  uint local_560;
  uint local_55c;
  int local_558;
  ulonglong local_550;
  double local_548;
  double dStack_540;
  double local_538;
  double local_530;
  double dStack_528;
  double local_520;
  double local_518;
  undefined1 *local_510;
  undefined1 *local_508;
  TBitArray<FDefaultBitArrayAllocator> *local_500;
  undefined8 local_4f8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_4f0;
  int iStack_4e8;
  uint uStack_4e4;
  undefined1 *local_4e0;
  undefined4 uStack_4d8;
  int iStack_4d4;
  int local_4d0;
  undefined4 uStack_4cc;
  int iStack_4c8;
  undefined4 uStack_4c4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_4c0;
  undefined8 uStack_4b8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_4b0;
  uint uStack_4a8;
  int iStack_4a4;
  int iStack_4a0;
  undefined4 uStack_49c;
  int local_498;
  undefined4 uStack_494;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_490;
  double local_470;
  double local_468;
  double local_460;
  TVector<double>_u_0 local_458;
  double local_440;
  int local_438;
  double local_430;
  undefined1 *local_428;
  double local_420;
  double local_418;
  FMeshSnapOpenBoundaries *local_410;
  int local_408;
  int local_404;
  int local_400;
  int local_3fc;
  int local_3f8;
  int local_3f4;
  int local_3f0;
  int local_3ec;
  undefined1 local_3e8 [12];
  uint uStack_3dc;
  TBitArray<FDefaultBitArrayAllocator> *local_3d8;
  undefined8 uStack_3d0;
  longlong local_3c8;
  int iStack_3c0;
  undefined4 uStack_3bc;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_3b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3b0;
  undefined8 uStack_390;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_388;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_380;
  undefined8 uStack_360;
  undefined1 *local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  code *local_330;
  char **local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  char *local_310;
  FMeshSnapOpenBoundaries **local_308;
  uint local_300;
  double local_2f8;
  double local_2f0;
  undefined1 *local_2e8;
  IndexIterator local_2e0;
  IndexIterator local_2d0;
  TRangedForIterator local_2c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_290;
  undefined4 local_254;
  undefined4 local_234;
  undefined4 local_214;
  undefined1 local_208 [32];
  uint *local_1e8;
  uint local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  int local_1d4;
  ForElementType<FSetElementId> local_1c8;
  int local_1c0;
  undefined1 local_1b8 [48];
  longlong local_188 [3];
  longlong *local_170;
  undefined1 local_168 [48];
  IndexEnumerable local_138;
  undefined1 local_128 [80];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_668;
  iVar32 = 0;
  this->NumVertexSnaps = 0;
  if (*(int *)&(this->BoundaryEdges).Elements.field_0x8 ==
      *(int *)&(this->BoundaryEdges).Elements.field_0x34) {
    FDynamicMesh3::BoundaryEdgeIndicesItr(this->Mesh,(FilteredEnumerable *)local_168);
    FRefCountVector::FilteredEnumerable::begin
              ((FilteredEnumerable *)local_168,
               (FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> *)local_1b8);
    iVar31 = ((local_138.Vector)->RefCounts).CurBlockUsed +
             ((local_138.Vector)->RefCounts).CurBlock * 0x200;
    FRefCountVector::IndexIterator::IndexIterator(&local_2e0,local_138.Vector,iVar31,iVar31);
    iVar31 = ((local_138.Vector)->RefCounts).CurBlockUsed +
             ((local_138.Vector)->RefCounts).CurBlock * 0x200;
    FRefCountVector::IndexIterator::IndexIterator(&local_2d0,local_138.Vector,iVar31,iVar31);
    FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>::
    FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>
              ((FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> *)local_128,
               &local_2d0,&local_2e0,(TFunction<bool___cdecl(int)> *)local_168);
    if ((int)local_1b8._8_8_ != local_128._8_4_) {
      do {
        local_578[0] = (int)local_1b8._8_8_;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&this->BoundaryEdges,&local_408,(bool *)local_578);
        do {
          FRefCountVector::BaseIterator::goto_next((BaseIterator *)local_1b8);
          if ((int)local_1b8._8_8_ == local_1b8._24_4_) break;
          local_570[0] = (int)local_1b8._8_8_;
          Core::Private::Function::CheckCallable((void *)local_1b8._32_8_);
          uVar15 = local_1b8._32_8_;
          plVar25 = local_188;
          if (local_170 != (longlong *)0x0) {
            plVar25 = local_170;
          }
          uVar21 = (**(code **)(*plVar25 + 8))();
          cVar17 = (*(code *)uVar15)(uVar21,local_570);
        } while (cVar17 == '\0');
      } while ((int)local_1b8._8_8_ != local_128._8_4_);
    }
    if (local_128._32_8_ != 0) {
      plVar25 = (longlong *)(local_128 + 0x30);
      if ((longlong *)local_128._72_8_ != (longlong *)0x0) {
        plVar25 = (longlong *)local_128._72_8_;
      }
      (**(code **)(*plVar25 + 0x10))();
    }
    if ((code *)local_1b8._32_8_ != (code *)0x0) {
      plVar25 = local_188;
      if (local_170 != (longlong *)0x0) {
        plVar25 = local_170;
      }
      (**(code **)(*plVar25 + 0x10))();
    }
    if (local_168._0_8_ != 0) {
      plVar25 = (longlong *)(local_168 + 0x10);
      if ((longlong *)local_168._40_8_ != (longlong *)0x0) {
        plVar25 = (longlong *)local_168._40_8_;
      }
      (**(code **)(*plVar25 + 0x10))();
    }
  }
  else {
    local_608.Data = (FScriptContainerElement *)0x0;
    puVar40 = &(this->BoundaryEdges).Elements.field_0x10;
    local_600 = 0;
    pTVar1 = &this->BoundaryEdges;
    local_490._padding_._0_4_ = 0;
    local_490._padding_._4_4_ = 1;
    local_490.UnvisitedBitMask = 0xffffffff;
    local_490.CurrentBitIndex = 0;
    local_490.BaseBitIndex = 0;
    local_490.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar40;
    if (*(int *)&(this->BoundaryEdges).Elements.field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_490);
    }
    TStack_5a0._padding_ = CONCAT44(local_490._padding_._4_4_,(undefined4)local_490._padding_);
    TStack_5a0._16_8_ = CONCAT44(local_490.CurrentBitIndex,local_490.UnvisitedBitMask);
    TStack_5a0._24_8_ = CONCAT44(local_490._28_4_,local_490.BaseBitIndex);
    iStack_3c0 = *(int *)&(this->BoundaryEdges).Elements.field_0x8 -
                 *(int *)&(this->BoundaryEdges).Elements.field_0x34;
    TStack_5a0.Array = local_490.Array;
    iStack_580 = iStack_3c0;
    local_3d8 = local_490.Array;
    uStack_3bc = uStack_57c;
    local_5a8 = pTVar1;
    local_3e8._0_8_ = pTVar1;
    unique0x10002de0 = TStack_5a0._padding_;
    uStack_3d0 = TStack_5a0._16_8_;
    local_3c8 = TStack_5a0._24_8_;
    pTVar22 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_290,(TBitArray<FDefaultBitArrayAllocator> *)puVar40,
                         *(int *)&(this->BoundaryEdges).Elements.field_0x28);
    TStack_5a0._padding_ = pTVar22->_padding_;
    TStack_5a0.Array = pTVar22->Array;
    TStack_5a0.UnvisitedBitMask = pTVar22->UnvisitedBitMask;
    TStack_5a0.CurrentBitIndex = pTVar22->CurrentBitIndex;
    TStack_5a0._24_8_ = *(undefined8 *)&pTVar22->BaseBitIndex;
    local_2c0.InitialNum =
         *(int *)&(this->BoundaryEdges).Elements.field_0x8 -
         *(int *)&(this->BoundaryEdges).Elements.field_0x34;
    iStack_580 = local_2c0.InitialNum;
    local_2c0._44_4_ = uStack_57c;
    local_5a8 = pTVar1;
    local_2c0._padding_ = (longlong)pTVar1;
    local_2c0._padding_ = TStack_5a0._padding_;
    local_2c0._padding_ = (longlong)TStack_5a0.Array;
    local_2c0._padding_ = TStack_5a0._16_8_;
    local_2c0._padding_ = TStack_5a0._24_8_;
    bVar18 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForIterator::operator!=((TRangedForIterator *)local_3e8,&local_2c0);
    if (bVar18) {
      do {
        pFVar9 = this->Mesh;
        local_610[0] = *(uint *)(*(longlong *)
                                  (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                   *)local_3e8._0_8_ + (longlong)uStack_3d0._4_4_ * 0xc);
        if (((((int)local_610[0] < 0) ||
             ((int)((pFVar9->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                   (pFVar9->EdgeRefCounts).RefCounts.CurBlockUsed) <= (int)local_610[0])) ||
            (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           ((pFVar9->EdgeRefCounts).RefCounts.Blocks.
                                            AllocatorInstance.Data +
                                           (ulonglong)(local_610[0] >> 9) * 8) +
                                         (ulonglong)(local_610[0] & 0x1ff) * 2) - 1U))) ||
           (*(int *)(*(longlong *)
                      ((pFVar9->Edges).Blocks.AllocatorInstance.Data +
                      (ulonglong)(local_610[0] >> 9) * 8) + 0xc +
                    (ulonglong)(local_610[0] & 0x1ff) * 0x10) != -1)) {
          if (local_608.Data <= (FScriptContainerElement *)local_610) {
            if ((FScriptContainerElement *)local_610 <
                local_608.Data + (longlong)local_600._4_4_ * 4) {
              local_630 = (longlong)(int)local_600;
              local_628 = 4;
              local_648 = local_610;
              local_640 = local_608.Data;
              local_638 = (longlong)local_600._4_4_;
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar18) {
                pcVar10 = (code *)swi(3);
                uVar19 = (*pcVar10)();
                return (bool)uVar19;
              }
            }
          }
          iVar31 = (int)local_600;
          if ((int)local_600 == local_600._4_4_) {
            iVar31 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_608,(int *)((longlong)&local_600 + 4));
          }
          local_600 = CONCAT44(local_600._4_4_,iVar31 + 1);
          *(uint *)(local_608.Data + (longlong)iVar31 * 4) = local_610[0];
        }
        uStack_3d0 = CONCAT44(uStack_3d0._4_4_,(uint)uStack_3d0 & ~uStack_3dc);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_3e8 + 8));
        bVar18 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)local_3e8,&local_2c0);
      } while (bVar18);
    }
    iVar31 = (int)local_600;
    pFVar7 = local_608.Data + (longlong)(int)local_600 * 4;
    FVar28.Data = local_608.Data;
    while( true ) {
      if ((int)local_600 != iVar31) {
        local_618[1] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_618 + 1);
      }
      if (FVar28.Data == pFVar7) break;
      local_568[0] = *(uint *)FVar28.Data;
      if (*(int *)&(this->BoundaryEdges).Elements.field_0x8 !=
          *(int *)&(this->BoundaryEdges).Elements.field_0x34) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                  (pTVar1,local_568[0],(int *)local_568);
      }
      FVar28.Data = FVar28.Data + 4;
    }
    if (local_608.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_608.Data);
    }
  }
  local_4e0 = &(this->BoundaryEdges).Elements.field_0x10;
  local_208._0_8_ = 0;
  local_208._8_8_ = 0;
  pTVar1 = &this->BoundaryEdges;
  local_1e8 = (uint *)0x0;
  local_1e0 = 0;
  uStack_4e4 = 1;
  local_1dc = 0x80;
  local_1d8 = 0xffffffff;
  local_4d0 = 0;
  local_1d4 = 0;
  local_1c8 = (ForElementType<FSetElementId>)0x0;
  local_1c0 = 0;
  iVar31 = *(int *)&(this->BoundaryEdges).Elements.field_0x28;
  iStack_4d4 = 0;
  if (iVar31 != 0) {
    puVar34 = *(uint **)&(this->BoundaryEdges).Elements.field_0x20;
    if (puVar34 == (uint *)0x0) {
      puVar34 = (uint *)local_4e0;
    }
    uVar29 = *puVar34;
    local_4d0 = 0;
    while (uVar29 == 0) {
      lVar26 = (longlong)iVar32;
      local_4d0 = local_4d0 + 0x20;
      iVar32 = iVar32 + 1;
      iStack_4d4 = iVar31;
      if ((int)(iVar31 + -1 + (iVar31 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar32) goto LAB_14c7db6f1;
      uVar29 = puVar34[lVar26 + 1];
    }
    uStack_4e4 = -uVar29 & uVar29;
    uVar4 = (ulonglong)uStack_4e4 * 2 + 1;
    lVar26 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    local_404 = (int)lVar26;
    iStack_4d4 = local_4d0 + -1 + local_404;
    if (iVar31 < iStack_4d4) {
      iStack_4d4 = iVar31;
    }
  }
LAB_14c7db6f1:
  puVar40 = &(this->BoundaryEdges).Elements.field_0x10;
  uStack_4cc = local_254;
  iStack_4c8 = *(int *)&(this->BoundaryEdges).Elements.field_0x8 -
               *(int *)&(this->BoundaryEdges).Elements.field_0x34;
  uVar29 = *(uint *)&(this->BoundaryEdges).Elements.field_0x28;
  TStack_3b0._padding_ = CONCAT44(uStack_4e4,iVar32);
  uVar36 = uVar29 & 0xffffffe0;
  uStack_4d8 = 0xffffffff;
  TStack_3b0.CurrentBitIndex = iStack_4d4;
  TStack_3b0.UnvisitedBitMask = 0xffffffff;
  iVar31 = (int)uVar29 >> 5;
  TStack_3b0._28_4_ = local_254;
  TStack_3b0.BaseBitIndex = local_4d0;
  uStack_390 = CONCAT44(uStack_4c4,iStack_4c8);
  local_4f0 = pTVar1;
  iStack_4e8 = iVar32;
  local_3b8 = pTVar1;
  TStack_3b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_4e0;
  if (((int)uVar29 < 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar18)) {
    pcVar10 = (code *)swi(3);
    uVar19 = (*pcVar10)();
    return (bool)uVar19;
  }
  uVar30 = *(uint *)&(this->BoundaryEdges).Elements.field_0x28;
  if (uVar29 != uVar30) {
    puVar6 = *(undefined1 **)&(this->BoundaryEdges).Elements.field_0x20;
    puVar33 = puVar40;
    if (puVar6 != (undefined1 *)0x0) {
      puVar33 = puVar6;
    }
    uVar29 = -1 << ((byte)uVar29 & 0x1f) & *(uint *)(puVar33 + (longlong)iVar31 * 4);
    while (uVar29 == 0) {
      lVar26 = (longlong)iVar31;
      uVar36 = uVar36 + 0x20;
      iVar31 = iVar31 + 1;
      uVar29 = uVar30;
      if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar31)
      goto LAB_14c7db821;
      uVar29 = *(uint *)(puVar33 + lVar26 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
    lVar26 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    local_400 = (int)lVar26;
    uVar29 = local_400 + -1 + uVar36;
    if ((int)uVar30 < (int)uVar29) {
      uVar29 = uVar30;
    }
  }
LAB_14c7db821:
  while( true ) {
    pTVar16 = local_3b8;
    if (*(int *)&(local_3b8->Elements).field_0x8 - *(int *)&(local_3b8->Elements).field_0x34 !=
        (int)uStack_390) {
      local_618[2] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_618 + 2);
    }
    if (((TStack_3b0.CurrentBitIndex == uVar29) &&
        (TStack_3b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar40)) &&
       (pTVar16 == pTVar1)) break;
    uVar36 = *(uint *)(*(longlong *)&pTVar16->Elements + (longlong)TStack_3b0.CurrentBitIndex * 0xc)
    ;
    local_4f8 = *(undefined8 *)
                 (*(longlong *)
                   ((this->Mesh->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar36 >> 9) * 8
                   ) + (ulonglong)(uVar36 & 0x1ff) * 0x10);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_208,&local_3fc,
               (bool *)&local_4f8);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_208,&local_3f8,
               (bool *)((longlong)&local_4f8 + 4));
    TStack_3b0.UnvisitedBitMask = TStack_3b0.UnvisitedBitMask & ~TStack_3b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3b0);
  }
  bVar18 = true;
  local_430 = this->DistanceTolerance * this->DistanceTolerance;
  local_5f0 = 0;
  local_420 = this->VertexSnapToleranceFactor * local_430 * this->VertexSnapToleranceFactor;
  local_5f4 = this->NumVertexSnaps;
  local_410 = this;
  if (0 < this->MaxIterations) {
    uVar44 = (undefined4)__real_7fefffffffffffff;
    uVar45 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    uVar46 = (undefined4)__real_3fe0000000000000;
    uVar47 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
    do {
      uVar29 = local_1e0;
      if (!bVar18) break;
      iVar32 = 0;
      local_5b8 = 0;
      uStack_5bc = 0;
      uVar36 = 1;
      if (local_1e0 != 0) {
        puVar34 = (uint *)(local_208 + 0x10);
        if (local_1e8 != (uint *)0x0) {
          puVar34 = local_1e8;
        }
        uVar36 = *puVar34;
        while (uVar36 == 0) {
          lVar26 = (longlong)iVar32;
          local_5b8 = local_5b8 + 0x20;
          iVar32 = iVar32 + 1;
          uStack_5bc = local_1e0;
          uVar36 = 1;
          if ((int)((local_1e0 - 1) + ((int)(local_1e0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar32)
          goto LAB_14c7dba33;
          uVar36 = (puVar34 + 1)[lVar26];
        }
        uVar36 = -uVar36 & uVar36;
        uVar4 = (ulonglong)uVar36 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        local_3f4 = (int)lVar26;
        uStack_5bc = local_3f4 + -1 + local_5b8;
        if ((int)local_1e0 < (int)uStack_5bc) {
          uStack_5bc = local_1e0;
        }
      }
LAB_14c7dba33:
      local_5a8 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_208;
      uStack_5b4 = local_214;
      TStack_5a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_208 + 0x10);
      uVar30 = local_1e0 & 0xffffffe0;
      iStack_5b0 = local_208._8_4_ - local_1d4;
      bVar24 = (byte)local_1e0 & 0x1f;
      uStack_5d0 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(uVar36,iVar32);
      TStack_5a0._16_8_ = CONCAT44(uStack_5bc,0xffffffff);
      iVar32 = (int)local_1e0 >> 5;
      uVar36 = -1 << bVar24;
      local_5d8 = CONCAT44(1 << bVar24,iVar32);
      local_5c8._4_4_ = local_1e0;
      local_5c8._0_4_ = uVar36;
      TStack_5a0._padding_ = (longlong)uStack_5d0;
      TStack_5a0._24_8_ = CONCAT44(local_214,local_5b8);
      uStack_57c = uStack_5ac;
      iStack_580 = iStack_5b0;
      uStack_5d0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_208 + 0x10);
      uStack_5c0 = uVar30;
      if (((int)local_1e0 < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar18)) {
        pcVar10 = (code *)swi(3);
        uVar19 = (*pcVar10)();
        return (bool)uVar19;
      }
      if (uVar29 != local_1e0) {
        puVar34 = (uint *)(local_208 + 0x10);
        if (local_1e8 != (uint *)0x0) {
          puVar34 = local_1e8;
        }
        uVar36 = uVar36 & puVar34[iVar32];
        while (uVar36 == 0) {
          uStack_5c0 = uVar30 + 0x20;
          lVar26 = (longlong)iVar32;
          iVar32 = iVar32 + 1;
          uVar4 = (ulonglong)local_5d8 >> 0x20;
          local_5d8 = CONCAT44((int)uVar4,iVar32);
          if ((int)((local_1e0 - 1) + ((int)(local_1e0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar32) {
            local_5c8._4_4_ = local_1e0;
            goto LAB_14c7dbb91;
          }
          uVar36 = (puVar34 + 1)[lVar26];
          local_5c8._0_4_ = 0xffffffff;
          local_5c8._4_4_ = 0;
          uVar30 = uStack_5c0;
        }
        local_5d8 = CONCAT44(-uVar36 & uVar36,(undefined4)local_5d8);
        uVar4 = (ulonglong)(-uVar36 & uVar36) * 2 + 1;
        lVar26 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        local_3f0 = (int)lVar26;
        local_5c8._4_4_ = local_3f0 + -1 + uVar30;
        if ((int)local_1e0 < (int)local_5c8._4_4_) {
          local_5c8._4_4_ = local_1e0;
        }
      }
LAB_14c7dbb91:
      uStack_49c = uStack_5bc;
      iStack_4a0 = uStack_5c0;
      uStack_4b8 = local_5d8;
      pTStack_4b0 = uStack_5d0;
      uStack_4a8 = (uint)local_5c8;
      iStack_4a4 = local_5c8._4_4_;
      uVar15 = _uStack_4a8;
      iStack_4a4 = SUB84(local_5c8,4);
      local_500 = uStack_5d0;
      local_558 = iStack_4a4;
      _uStack_4a8 = uVar15;
      while( true ) {
        iVar32 = local_558;
        pTVar1 = local_5a8;
        puVar40 = &(this->BoundaryEdges).Elements.field_0x10;
        dVar12 = 0.0;
        if (*(int *)&(local_5a8->Elements).field_0x8 - *(int *)&(local_5a8->Elements).field_0x34 !=
            iStack_580) {
          local_618[3] = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_618 + 3);
        }
        if (((TStack_5a0.CurrentBitIndex == iVar32) && (TStack_5a0.Array == local_500)) &&
           (pTVar1 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_208)) break;
        uVar29 = *(uint *)(*(longlong *)&pTVar1->Elements +
                          (longlong)TStack_5a0.CurrentBitIndex * 0xc);
        local_550 = (ulonglong)uVar29;
        lVar26 = *(longlong *)
                  ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar29 >> 9) * 8);
        local_4e0 = *(undefined1 **)(lVar26 + 0x10 + (ulonglong)(uVar29 & 0x1ff) * 0x18);
        pdVar2 = (double *)(lVar26 + (ulonglong)(uVar29 & 0x1ff) * 0x18);
        dVar13 = *pdVar2;
        dVar14 = pdVar2[1];
        local_428 = local_4e0;
        FDynamicMesh3::GetVtxBoundaryEdges(this->Mesh,uVar29,(int *)&local_560,(int *)&local_55c);
        iVar31 = 0;
        iVar32 = *(int *)&(this->BoundaryEdges).Elements.field_0x28;
        local_5e8 = (undefined1 *)CONCAT44(uVar45,uVar44);
        iStack_4a0 = 0;
        local_518 = 0.0;
        local_5e0 = (double)CONCAT44(local_5e0._4_4_,0xffffffff);
        local_538 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_510 = (undefined1 *)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_508 = (undefined1 *)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_530 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
        dStack_528 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
        local_520 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
        local_320 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
        uStack_318 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
        local_548 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_540 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_340 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
        uStack_338 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
        uVar29 = 1;
        iStack_4a4 = 0;
        if (iVar32 != 0) {
          puVar34 = *(uint **)&(this->BoundaryEdges).Elements.field_0x20;
          puVar35 = (uint *)puVar40;
          if (puVar34 != (uint *)0x0) {
            puVar35 = puVar34;
          }
          uVar29 = *puVar35;
          while (uVar29 == 0) {
            lVar26 = (longlong)iVar31;
            iStack_4a0 = iStack_4a0 + 0x20;
            iVar31 = iVar31 + 1;
            uVar29 = 1;
            iStack_4a4 = iVar32;
            if ((int)(iVar32 + -1 + (iVar32 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar31)
            goto LAB_14c7dbd40;
            uVar29 = puVar35[lVar26 + 1];
          }
          uVar29 = -uVar29 & uVar29;
          uVar4 = (ulonglong)uVar29 * 2 + 1;
          lVar26 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          local_3ec = (int)lVar26;
          iStack_4a4 = iStack_4a0 + -1 + local_3ec;
          if (iVar32 < iStack_4a4) {
            iStack_4a4 = iVar32;
          }
        }
LAB_14c7dbd40:
        uVar36 = *(uint *)&(this->BoundaryEdges).Elements.field_0x28;
        local_4c0 = &this->BoundaryEdges;
        local_498 = *(int *)&(this->BoundaryEdges).Elements.field_0x8 -
                    *(int *)&(this->BoundaryEdges).Elements.field_0x34;
        uVar30 = uVar36 & 0xffffffe0;
        uStack_4b8 = CONCAT44(uVar29,iVar31);
        TStack_380._padding_ = uStack_4b8;
        uStack_4a8 = 0xffffffff;
        uStack_49c = local_234;
        uStack_360 = CONCAT44(uStack_494,local_498);
        iVar32 = (int)uVar36 >> 5;
        TStack_380.BaseBitIndex = iStack_4a0;
        TStack_380._28_4_ = local_234;
        TStack_380.UnvisitedBitMask = 0xffffffff;
        TStack_380.CurrentBitIndex = iStack_4a4;
        pTStack_4b0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar40;
        local_388 = local_4c0;
        TStack_380.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar40;
        if (((int)uVar36 < 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar18)) {
          pcVar10 = (code *)swi(3);
          uVar19 = (*pcVar10)();
          return (bool)uVar19;
        }
        puVar6 = local_4e0;
        uVar29 = *(uint *)&(this->BoundaryEdges).Elements.field_0x28;
        if (uVar36 != uVar29) {
          puVar33 = *(undefined1 **)&(this->BoundaryEdges).Elements.field_0x20;
          if (puVar33 != (undefined1 *)0x0) {
            puVar40 = puVar33;
          }
          uVar36 = -1 << ((byte)uVar36 & 0x1f) & *(uint *)(puVar40 + (longlong)iVar32 * 4);
          while (uVar36 == 0) {
            lVar26 = (longlong)iVar32;
            uVar30 = uVar30 + 0x20;
            iVar32 = iVar32 + 1;
            uVar36 = uVar29;
            if ((int)((uVar29 - 1) + ((int)(uVar29 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar32)
            goto LAB_14c7dbe92;
            uVar36 = *(uint *)(puVar40 + lVar26 * 4 + 4);
          }
          uVar4 = (ulonglong)(-uVar36 & uVar36) * 2 + 1;
          lVar26 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          local_438 = (int)lVar26;
          uVar36 = local_438 + -1 + uVar30;
          if ((int)uVar29 < (int)uVar36) {
            uVar36 = uVar29;
          }
        }
LAB_14c7dbe92:
        while( true ) {
          pTVar1 = local_388;
          uVar29 = (uint)((ulonglong)dVar12 >> 0x20);
          if (*(int *)&(local_388->Elements).field_0x8 - *(int *)&(local_388->Elements).field_0x34
              != (int)uStack_360) {
            local_618[4] = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_618 + 4);
          }
          uVar4 = local_550;
          if (((TStack_380.CurrentBitIndex == uVar36) &&
              (TStack_380.Array ==
               (TBitArray<FDefaultBitArrayAllocator> *)&(this->BoundaryEdges).Elements.field_0x10))
             && (pTVar1 == &this->BoundaryEdges)) break;
          uVar29 = *(uint *)(*(longlong *)&pTVar1->Elements +
                            (longlong)TStack_380.CurrentBitIndex * 0xc);
          if ((uVar29 != local_560) && (uVar29 != local_55c)) {
            local_440 = 0.0;
            pFVar7 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
            uVar4 = *(ulonglong *)
                     (*(longlong *)
                       ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar29 >> 9) * 8) + (ulonglong)(uVar29 & 0x1ff) * 0x10);
            uVar27 = (ulonglong)((uint)uVar4 & 0x1ff);
            lVar26 = *(longlong *)(pFVar7 + ((uVar4 & 0xffffffff) >> 9) * 8);
            uVar23 = (ulonglong)((uint)(uVar4 >> 0x20) & 0x1ff);
            pdVar2 = (double *)(lVar26 + uVar27 * 0x18);
            dVar43 = *pdVar2;
            dVar39 = pdVar2[1];
            lVar8 = *(longlong *)(pFVar7 + (uVar4 >> 0x29) * 8);
            dVar38 = *(double *)(lVar26 + 0x10 + uVar27 * 0x18);
            pdVar2 = (double *)(lVar8 + uVar23 * 0x18);
            dVar41 = *pdVar2;
            dVar37 = pdVar2[1];
            local_4e0 = *(undefined1 **)(lVar8 + 0x10 + uVar23 * 0x18);
            local_458._s_0.X = dVar41 - dVar43;
            local_470 = (dVar43 + dVar41) * (double)CONCAT44(uVar47,uVar46);
            local_458._s_0.Y = dVar37 - dVar39;
            local_468 = (dVar39 + dVar37) * (double)CONCAT44(uVar47,uVar46);
            local_458._s_0.Z = (double)local_4e0 - dVar38;
            local_460 = (dVar38 + (double)local_4e0) * (double)CONCAT44(uVar47,uVar46);
            dVar38 = Normalize<double>((TVector<double> *)&local_458._s_0,0.0);
            local_440 = dVar38 * (double)CONCAT44(uVar47,uVar46);
            dVar43 = (dVar14 - local_468) * local_458._s_0.Y +
                     (dVar13 - local_470) * local_458._s_0.X +
                     ((double)puVar6 - local_460) * local_458._s_0.Z;
            if (dVar43 < local_440) {
              if (dVar38 * __real_bfe0000000000000 < dVar43) {
                dVar39 = dVar13 - (local_458._s_0.X * dVar43 + local_470);
                dVar41 = dVar14 - (local_458._s_0.Y * dVar43 + local_468);
                dVar38 = (double)puVar6 - (local_458._s_0.Z * dVar43 + local_460);
              }
              else {
                dVar39 = (local_470 - local_458._s_0.X * local_440) - dVar13;
                dVar41 = (local_468 - local_458._s_0.Y * local_440) - dVar14;
                dVar38 = (local_460 - local_458._s_0.Z * local_440) - (double)puVar6;
              }
              puVar40 = (undefined1 *)(dVar41 * dVar41 + dVar39 * dVar39 + dVar38 * dVar38);
            }
            else {
              dVar39 = (local_458._s_0.Y * local_440 + local_468) - dVar14;
              dVar43 = (local_458._s_0.X * local_440 + local_470) - dVar13;
              dVar38 = (local_458._s_0.Z * local_440 + local_460) - (double)puVar6;
              puVar40 = (undefined1 *)(dVar39 * dVar39 + dVar43 * dVar43 + dVar38 * dVar38);
            }
            if ((double)puVar40 < (double)local_5e8) {
              puVar3 = (undefined8 *)(lVar26 + uVar27 * 0x18);
              local_320 = *puVar3;
              uStack_318 = puVar3[1];
              local_5e0 = (double)CONCAT44(local_5e0._4_4_,uVar29);
              dStack_540 = local_468;
              puVar3 = (undefined8 *)(lVar8 + uVar23 * 0x18);
              local_340 = *puVar3;
              uStack_338 = puVar3[1];
              dStack_528 = local_458._s_0.Y;
              local_510 = *(undefined1 **)(lVar26 + 0x10 + uVar27 * 0x18);
              local_508 = *(undefined1 **)(lVar8 + 0x10 + uVar23 * 0x18);
              local_548 = local_470;
              local_538 = local_460;
              local_530 = local_458._s_0.X;
              local_520 = local_458._s_0.Z;
              dVar12 = local_440;
              local_5e8 = puVar40;
              local_518 = local_440;
            }
            uVar46 = (undefined4)__real_3fe0000000000000;
            uVar47 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
          }
          TStack_380.UnvisitedBitMask = TStack_380.UnvisitedBitMask & ~TStack_380._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_380);
        }
        if ((local_5e0._0_4_ != -1) && ((double)local_5e8 <= local_430)) {
          local_418 = local_548 - local_530 * dVar12;
          local_5e0 = dStack_540 - dStack_528 * dVar12;
          dVar39 = dStack_528 * dVar12 + dStack_540;
          local_5e8 = (undefined1 *)(local_538 - local_520 * dVar12);
          puVar40 = (undefined1 *)(local_520 * dVar12 + local_538);
          dVar41 = local_548 + local_530 * dVar12;
          dVar37 = dVar14 - dVar39;
          dVar43 = dVar13 - dVar41;
          dVar42 = (dVar14 - local_5e0) * (dVar14 - local_5e0) +
                   (dVar13 - local_418) * (dVar13 - local_418) +
                   ((double)puVar6 - (double)local_5e8) * ((double)puVar6 - (double)local_5e8);
          dVar38 = (double)puVar6 - (double)puVar40;
          dVar38 = dVar37 * dVar37 + dVar43 * dVar43 + dVar38 * dVar38;
          local_348 = local_428;
          if ((dVar42 < local_420) || (dVar38 < local_420)) {
            if (dVar38 <= dVar42) {
              local_348 = local_508;
              uVar44 = (undefined4)local_340;
              uVar45 = local_340._4_4_;
              uVar46 = (undefined4)uStack_338;
              uVar47 = uStack_338._4_4_;
            }
            else {
              local_348 = local_510;
              uVar44 = (undefined4)local_320;
              uVar45 = local_320._4_4_;
              uVar46 = (undefined4)uStack_318;
              uVar47 = uStack_318._4_4_;
            }
            dVar38 = (double)CONCAT44(uVar45,uVar44);
            dVar43 = (double)CONCAT44(uVar47,uVar46);
LAB_14c7dc446:
            puVar40 = local_348;
            uVar44 = SUB84(local_348,0);
            uVar29 = (uint)local_550;
            if (__real_3c9cd2b297d889bd <
                (dVar43 - dVar14) * (dVar43 - dVar14) + (dVar38 - dVar13) * (dVar38 - dVar13) +
                ((double)local_348 - (double)puVar6) * ((double)local_348 - (double)puVar6)) {
              if (this->bPreventFlips != false) {
                local_310 = local_618;
                local_308 = &local_410;
                local_328 = &local_310;
                local_330 = Core::Private::Function::
                            TFunctionRefCaller<`UE::Geometry::FMeshSnapOpenBoundaries::Apply'::__l67::<lambda_2>,void,int>
                            ::Call;
                local_618[0] = '\0';
                local_300 = uVar29;
                local_2f8 = dVar38;
                local_2f0 = dVar43;
                local_2e8 = local_348;
                FDynamicMesh3::EnumerateVertexTriangles
                          (this->Mesh,uVar29,(TFunctionRef<void___cdecl(int)> *)&local_330);
                if (local_618[0] != '\0') goto LAB_14c7dc5b4;
              }
              this->NumVertexSnaps = this->NumVertexSnaps + 1;
            }
            pFVar9 = this->Mesh;
            sVar20 = _dclass(SUB84(dVar38,0));
            if (((sVar20 < 1) && (sVar20 = _dclass(SUB84(dVar43,0)), sVar20 < 1)) &&
               (sVar20 = _dclass(uVar44), sVar20 < 1)) {
              lVar26 = *(longlong *)
                        ((pFVar9->Vertices).Blocks.AllocatorInstance.Data +
                        ((uVar4 & 0xffffffff) >> 9) * 8);
              auVar11._8_4_ = SUB84(dVar43,0);
              auVar11._0_8_ = dVar38;
              auVar11._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
              *(undefined1 (*) [16])(lVar26 + (ulonglong)(uVar29 & 0x1ff) * 0x18) = auVar11;
              *(undefined1 **)(lVar26 + 0x10 + (ulonglong)(uVar29 & 0x1ff) * 0x18) = puVar40;
              if ((pFVar9->ChangeStampShape).bIsEnabled != false) {
                this_00 = &(pFVar9->ChangeStampShape).Mutex;
                LOCK();
                bVar18 = this_00->State == (atomic<unsigned_char>)0x0;
                if (bVar18) {
                  this_00->State = (atomic<unsigned_char>)0x1;
                }
                UNLOCK();
                if (!bVar18) {
                  FMutex::LockSlow(this_00);
                }
                puVar34 = &(pFVar9->ChangeStampShape).Value;
                *puVar34 = *puVar34 + 1;
                LOCK();
                aVar5 = this_00->State;
                this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
                UNLOCK();
                if (((byte)aVar5 & 2) != 0) {
                  FMutex::WakeWaitingThread(this_00);
                }
              }
              uVar46 = (undefined4)__real_3fe0000000000000;
              uVar47 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
              goto LAB_14c7dc5c6;
            }
          }
          else {
            dVar38 = dVar13;
            dVar43 = dVar14;
            if (this->bSnapToEdges == false) goto LAB_14c7dc446;
            dVar37 = (dVar14 - dStack_540) * dStack_528 + (dVar13 - local_548) * local_530 +
                     ((double)puVar6 - local_538) * local_520;
            if (dVar37 <= dVar12) {
              uVar36 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
              if ((double)CONCAT44(uVar29 ^ uVar36,
                                   SUB84(dVar12,0) ^ (uint)__xmm_80000000000000008000000000000000)
                  <= dVar37) {
                dVar38 = dVar41;
                dVar43 = dVar39;
                local_348 = puVar40;
                if ((dVar37 < dVar12) &&
                   (uVar30 = SUB84(dVar12,0) ^ (uint)__xmm_80000000000000008000000000000000,
                   uVar29 = uVar29 ^ uVar36, dVar38 = local_418, dVar43 = local_5e0,
                   local_348 = local_5e8,
                   (double)CONCAT44(uVar29,uVar30) <= dVar37 &&
                   dVar37 != (double)CONCAT44(uVar29,uVar30))) {
                  local_348 = (undefined1 *)(local_520 * dVar37 + local_538);
                  dVar38 = local_530 * dVar37 + local_548;
                  dVar43 = dStack_528 * dVar37 + dStack_540;
                }
                goto LAB_14c7dc446;
              }
            }
          }
LAB_14c7dc5b4:
          uVar46 = (undefined4)__real_3fe0000000000000;
          uVar47 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
        }
LAB_14c7dc5c6:
        TStack_5a0.UnvisitedBitMask = TStack_5a0.UnvisitedBitMask & ~TStack_5a0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5a0);
        uVar44 = (undefined4)__real_7fefffffffffffff;
        uVar45 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
      }
      iVar32 = this->NumVertexSnaps;
      bVar18 = local_5f4 < iVar32;
      local_5f0 = local_5f0 + 1;
      local_5f4 = iVar32;
    } while (local_5f0 < this->MaxIterations);
  }
  local_1c0 = 0;
  if (local_1c8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1c8);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_208);
  return true;
}

