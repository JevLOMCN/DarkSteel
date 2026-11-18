// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 7

// ~FDynamicGraph @ 14c89a130

void __thiscall UE::Geometry::FDynamicGraph::~FDynamicGraph(FDynamicGraph *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FDynamicGraph_Geometry_UE__6B_;
  TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512>::
  ~TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512>(&this->edges);
  TDynamicVector<int,512>::Empty(&(this->edges_refcount).FreeIndices,0);
  pFVar1 = (this->edges_refcount).FreeIndices.Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<unsigned_short,512>::Empty(&(this->edges_refcount).RefCounts,0);
  pFVar1 = (this->edges_refcount).RefCounts.Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSmallListSet::~FSmallListSet(&this->vertex_edges);
  TDynamicVector<int,512>::Empty(&(this->vertices_refcount).FreeIndices,0);
  pFVar1 = (this->vertices_refcount).FreeIndices.Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<unsigned_short,512>::Empty(&(this->vertices_refcount).RefCounts,0);
  pFVar1 = (this->vertices_refcount).RefCounts.Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// CheckValidity @ 14c8c5720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c8c5815) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014c8c5819 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool __thiscall
UE::Geometry::FDynamicGraph::CheckValidity(FDynamicGraph *this,EValidityCheckFailMode param_1)

{
  FSmallListSet *pFVar1;
  FRefCountVector *pFVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  FSmallListSet *pFVar10;
  undefined1 *puVar11;
  short sVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  undefined ***pppuVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  BaseIterator local_f0;
  IndexIterator local_e0;
  uint local_d0;
  BaseValueIterator local_c8;
  FSmallListSet *local_98;
  undefined8 uStack_90;
  undefined **local_88;
  undefined1 *puStack_80;
  int local_78;
  undefined4 uStack_74;
  undefined ***pppuStack_70;
  undefined1 local_68 [16];
  undefined **local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_88 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity_FDynamicGraph_Geometry_UE__UEBA_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  puStack_80 = local_100;
  local_98 = (FSmallListSet *)
             Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FDynamicGraph::CheckValidity'::__l2::<lambda_1>,void,bool>
             ::Call;
  local_100[0] = 1;
  pppuStack_70 = (undefined ***)0x0;
  if (param_1 == Check) {
    local_58 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity_FDynamicGraph_Geometry_UE__UEBA_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_98 = (FSmallListSet *)
               Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FDynamicGraph::CheckValidity'::__l5::<lambda_2>,void,bool>
               ::Call;
  }
  else {
    if (param_1 != Ensure) goto LAB_14c8c581f;
    local_58 = &
               ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity_FDynamicGraph_Geometry_UE__UEBA_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_98 = (FSmallListSet *)
               Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FDynamicGraph::CheckValidity'::__l9::<lambda_3>,void,bool>
               ::Call;
  }
  local_88 = local_58;
  uStack_50 = local_100;
  puVar11 = uStack_50;
  uVar19 = CONCAT44(uStack_74,local_78);
  local_78 = (int)local_48;
  uStack_74 = local_48._4_4_;
  pppuStack_70 = (undefined ***)0x0;
  uStack_40 = 0;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity_FDynamicGraph_Geometry_UE__UEBA_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uStack_50 = puStack_80;
  local_68._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FDynamicGraph::CheckValidity'::__l2::<lambda_1>,void,bool>
       ::Call;
  local_68._8_8_ = uStack_90;
  puStack_80 = puVar11;
  local_48 = uVar19;
  (*(code *)PTR_Destroy_1528cfd18)();
LAB_14c8c581f:
  pFVar2 = &this->edges_refcount;
  FRefCountVector::IndexIterator::IndexIterator
            ((IndexIterator *)&local_f0,pFVar2,0,
             (pFVar2->RefCounts).CurBlock * 0x200 + (this->edges_refcount).RefCounts.CurBlockUsed);
  iVar20 = (pFVar2->RefCounts).CurBlock * 0x200 + (this->edges_refcount).RefCounts.CurBlockUsed;
  FRefCountVector::IndexIterator::IndexIterator(&local_e0,pFVar2,iVar20,iVar20);
  uVar19 = CONCAT44(local_f0.LastIndex,local_f0.Index);
  while (local_f0.Index != local_e0._8_4_) {
    uVar18 = (uint)uVar19;
    if ((((int)uVar18 < 0) ||
        ((int)((pFVar2->RefCounts).CurBlock * 0x200 + (this->edges_refcount).RefCounts.CurBlockUsed)
         <= (int)uVar18)) ||
       (uVar22 = uVar19 >> 9 & 0x7fffff,
       0xfffd < (ushort)(*(short *)(*(longlong *)
                                     ((this->edges_refcount).RefCounts.Blocks.AllocatorInstance.Data
                                     + uVar22 * 8) + (ulonglong)(uVar18 & 0x1ff) * 2) - 1U))) {
      local_118[0] = 0;
      uVar22 = uVar19 >> 9 & 0x7fffff;
    }
    else {
      local_118[0] = 1;
    }
    Core::Private::Function::CheckCallable(local_98);
    pFVar1 = local_98;
    pppuVar17 = &local_88;
    if (pppuStack_70 != (undefined ***)0x0) {
      pppuVar17 = pppuStack_70;
    }
    uVar16 = (*(code *)(*pppuVar17)[1])();
    (*(code *)pFVar1)(uVar16,local_118);
    lVar3 = uVar22 * 8;
    uVar19 = (ulonglong)(uVar18 & 0x1ff);
    sVar12 = *(short *)(*(longlong *)
                         ((this->edges_refcount).RefCounts.Blocks.AllocatorInstance.Data + lVar3) +
                       uVar19 * 2);
    if (sVar12 == -1) {
      sVar12 = 0;
    }
    local_110[0] = sVar12 == 1;
    Core::Private::Function::CheckCallable(local_98);
    pFVar1 = local_98;
    pppuVar17 = &local_88;
    if (pppuStack_70 != (undefined ***)0x0) {
      pppuVar17 = pppuStack_70;
    }
    uVar16 = (*(code *)(*pppuVar17)[1])();
    (*(code *)pFVar1)(uVar16,local_110);
    if ((((int)uVar18 < 0) ||
        ((int)((pFVar2->RefCounts).CurBlock * 0x200 + (this->edges_refcount).RefCounts.CurBlockUsed)
         <= (int)uVar18)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((this->edges_refcount).RefCounts.Blocks.AllocatorInstance.
                                       Data + lVar3) + uVar19 * 2) - 1U))) {
      local_e0._0_8_ = 0xffffffffffffffff;
    }
    else {
      lVar3 = *(longlong *)((this->edges).Blocks.AllocatorInstance.Data + lVar3);
      local_e0._0_8_ =
           CONCAT44(*(undefined4 *)(lVar3 + 4 + uVar19 * 0xc),*(undefined4 *)(lVar3 + uVar19 * 0xc))
      ;
    }
    uVar18 = (uint)local_e0._0_8_;
    if ((((int)uVar18 < 0) ||
        ((int)((this->vertices_refcount).RefCounts.CurBlock * 0x200 +
              (this->vertices_refcount).RefCounts.CurBlockUsed) <= (int)uVar18)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((this->vertices_refcount).RefCounts.Blocks.AllocatorInstance.
                                       Data + ((local_e0._0_8_ & 0xffffffff) >> 9) * 8) +
                                    (ulonglong)(uVar18 & 0x1ff) * 2) - 1U))) {
      local_f8[0] = 0;
    }
    else {
      local_f8[0] = 1;
    }
    Core::Private::Function::CheckCallable(local_98);
    pFVar1 = local_98;
    pppuVar17 = &local_88;
    if (pppuStack_70 != (undefined ***)0x0) {
      pppuVar17 = pppuStack_70;
    }
    uVar16 = (*(code *)(*pppuVar17)[1])();
    (*(code *)pFVar1)(uVar16,local_f8);
    uVar9 = local_e0._4_4_;
    if ((((longlong)local_e0._0_8_ < 0) ||
        ((int)((this->vertices_refcount).RefCounts.CurBlock * 0x200 +
              (this->vertices_refcount).RefCounts.CurBlockUsed) <= (int)local_e0._4_4_)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((this->vertices_refcount).RefCounts.Blocks.AllocatorInstance.
                                       Data + (ulonglong)((uint)local_e0._4_4_ >> 9) * 8) +
                                    (ulonglong)(local_e0._4_4_ & 0x1ff) * 2) - 1U))) {
      local_108[0] = 0;
    }
    else {
      local_108[0] = 1;
    }
    Core::Private::Function::CheckCallable(local_98);
    pFVar1 = local_98;
    pppuVar17 = &local_88;
    if (pppuStack_70 != (undefined ***)0x0) {
      pppuVar17 = pppuStack_70;
    }
    uVar16 = (*(code *)(*pppuVar17)[1])();
    (*(code *)pFVar1)(uVar16,local_108);
    local_110[0] = (int)uVar18 < (int)uVar9;
    Core::Private::Function::CheckCallable(local_98);
    pFVar1 = local_98;
    pppuVar17 = &local_88;
    if (pppuStack_70 != (undefined ***)0x0) {
      pppuVar17 = pppuStack_70;
    }
    uVar16 = (*(code *)(*pppuVar17)[1])();
    (*(code *)pFVar1)(uVar16,local_110);
    FRefCountVector::BaseIterator::goto_next(&local_f0);
    uVar19 = CONCAT44(local_f0.LastIndex,local_f0.Index);
  }
  uVar19 = 0;
  if (((this->vertices_refcount).FreeIndices.CurBlock * 0x200 +
       (this->vertices_refcount).FreeIndices.CurBlockUsed == 0) &&
     (0 < (this->vertices_refcount).UsedCount)) {
    do {
      uVar18 = (uint)uVar19;
      if (((int)uVar18 < 0) ||
         (((int)((this->vertices_refcount).RefCounts.CurBlock * 0x200 +
                (this->vertices_refcount).RefCounts.CurBlockUsed) <= (int)uVar18 ||
          (0xfffd < (ushort)(*(short *)(*(longlong *)
                                         ((this->vertices_refcount).RefCounts.Blocks.
                                          AllocatorInstance.Data + (uVar19 >> 9) * 8) +
                                       (ulonglong)(uVar18 & 0x1ff) * 2) - 1U))))) {
        local_108[0] = 0;
      }
      else {
        local_108[0] = 1;
      }
      Core::Private::Function::CheckCallable(local_98);
      pFVar1 = local_98;
      pppuVar17 = &local_88;
      if (pppuStack_70 != (undefined ***)0x0) {
        pppuVar17 = pppuStack_70;
      }
      uVar16 = (*(code *)(*pppuVar17)[1])();
      (*(code *)pFVar1)(uVar16,local_108);
      uVar19 = (ulonglong)(uVar18 + 1);
    } while ((int)(uVar18 + 1) < (this->vertices_refcount).UsedCount);
  }
  FRefCountVector::IndexIterator::IndexIterator
            ((IndexIterator *)&local_f0,&this->vertices_refcount,0,
             (this->vertices_refcount).RefCounts.CurBlock * 0x200 +
             (this->vertices_refcount).RefCounts.CurBlockUsed);
  local_d0 = (this->vertices_refcount).RefCounts.CurBlock * 0x200 +
             (this->vertices_refcount).RefCounts.CurBlockUsed;
  if (local_f0.Index != local_d0) {
    local_e0._0_8_ = CONCAT44(local_f0.LastIndex,local_f0.Index);
    pFVar1 = &this->vertex_edges;
    do {
      iVar20 = local_f0.Index;
      if (((local_f0.Index < 0) ||
          ((int)((this->vertices_refcount).RefCounts.CurBlock * 0x200 +
                (this->vertices_refcount).RefCounts.CurBlockUsed) <= local_f0.Index)) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((this->vertices_refcount).RefCounts.Blocks.
                                         AllocatorInstance.Data +
                                        (ulonglong)((uint)local_f0.Index >> 9) * 8) +
                                      (ulonglong)(local_e0._0_4_ & 0x1ff) * 2) - 1U))) {
        local_108[0] = 0;
      }
      else {
        local_108[0] = 1;
      }
      Core::Private::Function::CheckCallable(local_98);
      pFVar10 = local_98;
      pppuVar17 = &local_88;
      if (pppuStack_70 != (undefined ***)0x0) {
        pppuVar17 = pppuStack_70;
      }
      uVar16 = (*(code *)(*pppuVar17)[1])();
      (*(code *)pFVar10)(uVar16,local_108);
      FSmallListSet::BaseValueIterator::BaseValueIterator(&local_c8,pFVar1,iVar20,false);
      while (((iVar15 = local_c8.cur_value, local_c8.ListSet != pFVar1 ||
              (local_c8.ListIndex != iVar20)) || ((local_c8.iCur != -1 || (local_c8.cur_ptr != -1)))
             )) {
        if (((local_c8.cur_value < 0) ||
            ((int)((this->edges_refcount).RefCounts.CurBlock * 0x200 +
                  (this->edges_refcount).RefCounts.CurBlockUsed) <= local_c8.cur_value)) ||
           (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          ((this->edges_refcount).RefCounts.Blocks.AllocatorInstance
                                           .Data + (ulonglong)((uint)local_c8.cur_value >> 9) * 8) +
                                        (ulonglong)(local_c8.cur_value & 0x1ff) * 2) - 1U))) {
          local_f8[0] = 0;
        }
        else {
          local_f8[0] = 1;
        }
        Core::Private::Function::CheckCallable(local_98);
        pFVar10 = local_98;
        pppuVar17 = &local_88;
        if (pppuStack_70 != (undefined ***)0x0) {
          pppuVar17 = pppuStack_70;
        }
        uVar16 = (*(code *)(*pppuVar17)[1])();
        (*(code *)pFVar10)(uVar16,local_f8);
        lVar3 = (ulonglong)((uint)iVar15 >> 9) * 8;
        lVar4 = (ulonglong)(iVar15 & 0x1ff) * 0xc;
        lVar5 = *(longlong *)((this->edges).Blocks.AllocatorInstance.Data + lVar3);
        if ((*(uint *)(lVar5 + lVar4) == iVar20) || (*(uint *)(lVar5 + 4 + lVar4) == iVar20)) {
          local_110[0] = 1;
        }
        else {
          local_110[0] = 0;
        }
        Core::Private::Function::CheckCallable(local_98);
        pFVar10 = local_98;
        pppuVar17 = &local_88;
        if (pppuStack_70 != (undefined ***)0x0) {
          pppuVar17 = pppuStack_70;
        }
        uVar16 = (*(code *)(*pppuVar17)[1])();
        (*(code *)pFVar10)(uVar16,local_110);
        lVar3 = *(longlong *)((this->edges).Blocks.AllocatorInstance.Data + lVar3);
        uVar18 = *(uint *)(lVar3 + lVar4);
        uVar21 = *(uint *)(lVar3 + 4 + lVar4);
        uVar14 = uVar21;
        if ((uVar18 != iVar20) && (uVar14 = 0xffffffff, uVar21 == iVar20)) {
          uVar14 = uVar18;
        }
        uVar18 = uVar14;
        if (iVar20 < (int)uVar14) {
          uVar18 = iVar20;
        }
        uVar21 = uVar14;
        if ((int)uVar14 < iVar20) {
          uVar21 = iVar20;
        }
        FSmallListSet::BaseValueIterator::BaseValueIterator
                  ((BaseValueIterator *)local_68,pFVar1,uVar18,false);
        while (((((FSmallListSet *)local_68._0_8_ != pFVar1 || (local_68._8_4_ != uVar18)) ||
                ((int)uStack_50 != -1)) || (uStack_50._4_4_ != -1))) {
          uVar13 = (uint)local_48;
          if (*(uint *)(*(longlong *)
                         ((this->edges).Blocks.AllocatorInstance.Data +
                         ((local_48 & 0xffffffff) >> 9) * 8) + 4 + (ulonglong)(uVar13 & 0x1ff) * 0xc
                       ) == uVar21) goto LAB_14c8c5df3;
          FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_68);
        }
        uVar13 = 0xffffffff;
LAB_14c8c5df3:
        local_118[0] = uVar13 != 0xffffffff;
        Core::Private::Function::CheckCallable(local_98);
        pFVar10 = local_98;
        pppuVar17 = &local_88;
        if (pppuStack_70 != (undefined ***)0x0) {
          pppuVar17 = pppuStack_70;
        }
        uVar16 = (*(code *)(*pppuVar17)[1])();
        (*(code *)pFVar10)(uVar16,local_118);
        local_118[0] = uVar13 == local_c8.cur_value;
        Core::Private::Function::CheckCallable(local_98);
        pFVar10 = local_98;
        pppuVar17 = &local_88;
        if (pppuStack_70 != (undefined ***)0x0) {
          pppuVar17 = pppuStack_70;
        }
        uVar16 = (*(code *)(*pppuVar17)[1])();
        (*(code *)pFVar10)(uVar16,local_118);
        uVar18 = iVar20;
        if ((int)uVar14 < iVar20) {
          uVar18 = uVar14;
        }
        uVar21 = iVar20;
        if (iVar20 < (int)uVar14) {
          uVar21 = uVar14;
        }
        FSmallListSet::BaseValueIterator::BaseValueIterator
                  ((BaseValueIterator *)local_68,pFVar1,uVar18,false);
        while ((((FSmallListSet *)local_68._0_8_ != pFVar1 || (local_68._8_4_ != uVar18)) ||
               (((int)uStack_50 != -1 || (uStack_50._4_4_ != -1))))) {
          uVar14 = (uint)local_48;
          if (*(uint *)(*(longlong *)
                         ((this->edges).Blocks.AllocatorInstance.Data +
                         ((local_48 & 0xffffffff) >> 9) * 8) + 4 + (ulonglong)(uVar14 & 0x1ff) * 0xc
                       ) == uVar21) goto LAB_14c8c5ed0;
          FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_68);
        }
        uVar14 = 0xffffffff;
LAB_14c8c5ed0:
        local_118[0] = uVar14 != 0xffffffff;
        Core::Private::Function::CheckCallable(local_98);
        pFVar10 = local_98;
        pppuVar17 = &local_88;
        if (pppuStack_70 != (undefined ***)0x0) {
          pppuVar17 = pppuStack_70;
        }
        uVar16 = (*(code *)(*pppuVar17)[1])();
        (*(code *)pFVar10)(uVar16,local_118);
        local_118[0] = uVar14 == local_c8.cur_value;
        Core::Private::Function::CheckCallable(local_98);
        pFVar10 = local_98;
        pppuVar17 = &local_88;
        if (pppuStack_70 != (undefined ***)0x0) {
          pppuVar17 = pppuStack_70;
        }
        uVar16 = (*(code *)(*pppuVar17)[1])();
        (*(code *)pFVar10)(uVar16,local_118);
        FSmallListSet::BaseValueIterator::GotoNext(&local_c8);
      }
      uVar19 = (ulonglong)(local_e0._0_4_ & 0x1ff);
      lVar3 = (ulonglong)((uint)iVar20 >> 9) * 8;
      uVar18 = (uint)*(ushort *)
                      (*(longlong *)
                        ((this->vertices_refcount).RefCounts.Blocks.AllocatorInstance.Data + lVar3)
                      + uVar19 * 2);
      if (uVar18 == 0xffff) {
        uVar18 = 0;
      }
      uVar21 = *(uint *)(*(longlong *)
                          ((this->vertex_edges).ListHeads.Blocks.AllocatorInstance.Data + lVar3) +
                        uVar19 * 4);
      if (uVar21 == 0xffffffff) {
        iVar15 = 0;
      }
      else {
        iVar15 = *(int *)(*(longlong *)
                           ((this->vertex_edges).ListBlocks.Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 4);
      }
      local_118[0] = uVar18 == iVar15 + 1U;
      Core::Private::Function::CheckCallable(local_98);
      pFVar10 = local_98;
      pppuVar17 = &local_88;
      if (pppuStack_70 != (undefined ***)0x0) {
        pppuVar17 = pppuStack_70;
      }
      uVar16 = (*(code *)(*pppuVar17)[1])();
      (*(code *)pFVar10)(uVar16,local_118);
      local_f0.Index = iVar20 + 1;
      if (local_f0.Index < local_f0.LastIndex) {
        pFVar6 = ((local_f0.Vector)->RefCounts).Blocks.AllocatorInstance.Data;
        do {
          lVar3 = (ulonglong)(local_f0.Index & 0x1ff) * 2;
          if ((*(short *)(lVar3 + *(longlong *)(pFVar6 + (ulonglong)((uint)local_f0.Index >> 9) * 8)
                         ) != 0) &&
             (*(short *)(lVar3 + *(longlong *)(pFVar6 + (ulonglong)((uint)local_f0.Index >> 9) * 8))
              != -1)) break;
          local_f0.Index = local_f0.Index + 1;
        } while (local_f0.Index < local_f0.LastIndex);
      }
      local_e0._4_4_ = local_f0.LastIndex;
      local_e0._0_4_ = local_f0.Index;
    } while (local_f0.Index != local_d0);
  }
  pcVar7 = *(code **)(this->_padding_ + 0x18);
  local_68._0_8_ = local_98;
  uStack_40 = 0;
  if (local_98 != (FSmallListSet *)0x0) {
    pppuVar17 = &local_88;
    if (pppuStack_70 != (undefined ***)0x0) {
      pppuVar17 = pppuStack_70;
    }
    (*(code *)**pppuVar17)(pppuVar17,&local_58);
  }
  (*pcVar7)(this,local_68);
  uVar8 = local_100[0];
  if (local_98 != (FSmallListSet *)0x0) {
    pppuVar17 = &local_88;
    if (pppuStack_70 != (undefined ***)0x0) {
      pppuVar17 = pppuStack_70;
    }
    (*(code *)(*pppuVar17)[2])();
  }
  return (bool)uVar8;
}

// FindEdge @ 14c8e6400

int __thiscall UE::Geometry::FDynamicGraph::FindEdge(FDynamicGraph *this,int param_1,int param_2)

{
  int iVar1;
  BaseValueIterator local_38;
  
  iVar1 = param_2;
  if (param_1 < param_2) {
    iVar1 = param_1;
  }
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  FSmallListSet::BaseValueIterator::BaseValueIterator(&local_38,&this->vertex_edges,iVar1,false);
  while ((((local_38.ListSet != &this->vertex_edges || (local_38.ListIndex != iVar1)) ||
          (local_38.iCur != -1)) || (local_38.cur_ptr != -1))) {
    if (*(int *)(*(longlong *)
                  ((this->edges).Blocks.AllocatorInstance.Data +
                  ((local_38._32_8_ & 0xffffffff) >> 9) * 8) + 4 +
                (ulonglong)(local_38.cur_value & 0x1ff) * 0xc) == param_2) {
      return local_38.cur_value;
    }
    FSmallListSet::BaseValueIterator::GotoNext(&local_38);
  }
  return -1;
}

// VtxVerticesItr @ 14c9260e0

MappedValueEnumerable * __thiscall
UE::Geometry::FDynamicGraph::VtxVerticesItr
          (FDynamicGraph *this,MappedValueEnumerable *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  MappedValueEnumerable *pMVar3;
  undefined4 uStack_44;
  code *local_38 [2];
  undefined **local_28;
  undefined8 local_20;
  FDynamicGraph *pFStack_18;
  undefined8 local_10;
  
  if (((param_1 < 0) ||
      ((int)((this->vertices_refcount).RefCounts.CurBlock * 0x200 +
            (this->vertices_refcount).RefCounts.CurBlockUsed) <= param_1)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((this->vertices_refcount).RefCounts.Blocks.AllocatorInstance.
                                     Data + (ulonglong)((uint)param_1 >> 9) * 8) +
                                  (ulonglong)(param_1 & 0x1ff) * 2) - 1U))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("vertices_refcount.IsValid(VID)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Curve\\DynamicGraph.h"
                       ,0x7c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pMVar3 = (MappedValueEnumerable *)(*pcVar1)();
      return pMVar3;
    }
  }
  local_28 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxVerticesItr_FDynamicGraph_Geometry_UE__QEBA_AVMappedValueEnumerable_FSmallListSet_45_H_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20._4_4_ = uStack_44;
  local_20._0_4_ = param_1;
  local_38[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicGraph::VtxVerticesItr'::__l2::<lambda_1>,int,int>
                ::Call;
  local_10 = 0;
  pFStack_18 = this;
  FSmallListSet::MappedValues
            (&this->vertex_edges,__return_storage_ptr__,param_1,
             (TFunction<int___cdecl(int)> *)local_38);
  return __return_storage_ptr__;
}

// add_edge @ 14c9263e0

int __thiscall
UE::Geometry::FDynamicGraph::add_edge(FDynamicGraph *this,int param_1,int param_2,int param_3)

{
  uint *puVar1;
  TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512> *this_00;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  
  iVar4 = param_1;
  if (param_1 <= param_2) {
    iVar4 = param_2;
    param_2 = param_1;
  }
  uVar5 = FRefCountVector::Allocate(&this->edges_refcount);
  this_00 = &this->edges;
  uVar2 = this_00->CurBlock;
  uVar9 = (this->edges).CurBlockUsed;
  uVar6 = uVar2 * 0x200 + uVar9;
  if (uVar5 == uVar6) {
    if (uVar9 == 0x200) {
      if (uVar2 == (this->edges).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512>::AddAllocatedBlock(this_00);
      }
      this_00->CurBlock = this_00->CurBlock + 1;
      uVar2 = this_00->CurBlock;
      uVar9 = 0;
      (this->edges).CurBlockUsed = 0;
    }
  }
  else {
    if (uVar5 <= uVar6) {
      uVar8 = (ulonglong)(uVar5 & 0x1ff);
      lVar3 = *(longlong *)
               ((this->edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8);
      *(int *)(lVar3 + uVar8 * 0xc) = param_2;
      *(int *)(lVar3 + 4 + uVar8 * 0xc) = iVar4;
      *(int *)(lVar3 + 8 + uVar8 * 0xc) = param_3;
      goto LAB_14c9264db;
    }
    TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512>::Resize(this_00,uVar5);
    uVar9 = (this->edges).CurBlockUsed;
    if (uVar9 == 0x200) {
      if (this_00->CurBlock == (this->edges).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512>::AddAllocatedBlock(this_00);
      }
      this_00->CurBlock = this_00->CurBlock + 1;
      uVar9 = 0;
      (this->edges).CurBlockUsed = 0;
    }
    uVar2 = this_00->CurBlock;
  }
  lVar7 = (longlong)(int)uVar9;
  lVar3 = *(longlong *)((this->edges).Blocks.AllocatorInstance.Data + (longlong)(int)uVar2 * 8);
  *(int *)(lVar3 + lVar7 * 0xc) = param_2;
  *(int *)(lVar3 + 4 + lVar7 * 0xc) = iVar4;
  *(int *)(lVar3 + 8 + lVar7 * 0xc) = param_3;
  puVar1 = &(this->edges).CurBlockUsed;
  *puVar1 = *puVar1 + 1;
LAB_14c9264db:
  FSmallListSet::Insert(&this->vertex_edges,param_2,uVar5);
  FSmallListSet::Insert(&this->vertex_edges,iVar4,uVar5);
  return uVar5;
}

// append_new_split_vertex @ 14c926d90

int __thiscall
UE::Geometry::FDynamicGraph::append_new_split_vertex(FDynamicGraph *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Curve\\DynamicGraph.h"
                     ,0x1da,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return -1;
}

// subclass_validity_checks @ 14c935060

void __thiscall
UE::Geometry::FDynamicGraph::subclass_validity_checks
          (FDynamicGraph *this,TFunction<void___cdecl(bool)> *param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x00014c935078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

