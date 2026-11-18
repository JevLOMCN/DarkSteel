// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 19

// operator() @ 14c7bbb40

void __thiscall
`UE::Geometry::FMeshPlaneCut::ComputeVertexSignedDistances'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  code *pcVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  uint uVar17;
  ulonglong uVar18;
  
  lVar10 = *(longlong *)this;
  lVar11 = *(longlong *)(lVar10 + 8);
  if ((-1 < param_1) && (param_1 < *(int *)(lVar11 + 0x20) * 0x200 + *(int *)(lVar11 + 0x24))) {
    uVar18 = (ulonglong)(param_1 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar11 + 0x28) + (ulonglong)((uint)param_1 >> 9) * 8) +
                           uVar18 * 2) - 1U) < 0xfffe) {
      lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + (ulonglong)((uint)param_1 >> 9) * 8);
      plVar12 = *(longlong **)((longlong)this + 8);
      dVar2 = *(double *)(lVar10 + 0x30);
      pdVar1 = (double *)(lVar11 + uVar18 * 0x18);
      dVar14 = *pdVar1;
      dVar15 = pdVar1[1];
      dVar3 = *(double *)(lVar11 + 0x10 + uVar18 * 0x18);
      dVar4 = *(double *)(lVar10 + 0x18);
      uVar17 = 0;
      if (param_1 < (int)plVar12[1]) {
        uVar17 = (uint)~param_1 >> 0x1f;
      }
      dVar5 = *(double *)(lVar10 + 0x10);
      dVar6 = *(double *)(lVar10 + 0x20);
      dVar7 = *(double *)(lVar10 + 0x28);
      dVar8 = *(double *)(lVar10 + 0x38);
      if ((uVar17 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      *(double *)(*plVar12 + (longlong)param_1 * 8) =
           (dVar15 - dVar4) * dVar2 + (dVar14 - dVar5) * dVar7 + (dVar3 - dVar6) * dVar8;
      return;
    }
  }
  plVar12 = *(longlong **)((longlong)this + 8);
  uVar9 = **(undefined8 **)((longlong)this + 0x10);
  uVar17 = 0;
  if (param_1 < (int)plVar12[1]) {
    uVar17 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  *(undefined8 *)(*plVar12 + (longlong)param_1 * 8) = uVar9;
  return;
}

// operator() @ 14c7bd5a0

bool __thiscall
`UE::Geometry::FMeshPlaneCut::ExtractBoundaryLoops'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar1 = *(longlong **)this;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar2 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar2 = plVar1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)plVar1[9] - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        if (*(int *)(*plVar1 + (longlong)iVar3 * 0xc) == param_1) {
          if (iVar3 != -1) {
            return true;
          }
          break;
        }
        iVar3 = *(int *)(*plVar1 + 4 + (longlong)iVar3 * 0xc);
      } while (iVar3 != -1);
    }
  }
  plVar1 = *(longlong **)((longlong)this + 8);
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar2 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar2 = plVar1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)plVar1[9] - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        if (*(int *)(*plVar1 + (longlong)iVar3 * 0xc) == param_1) {
          return true;
        }
        iVar3 = *(int *)(*plVar1 + 4 + (longlong)iVar3 * 0xc);
      } while (iVar3 != -1);
    }
  }
  return false;
}

// operator() @ 14c7d0d40

bool __thiscall
`UE::Geometry::FMeshPlaneCut::SplitEdgesOnlyHelper'::__l2::<lambda_3>::operator()
          (void *this,int param_1,int param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  
  iVar3 = UE::Geometry::FDynamicMesh3::GetTriangleGroup
                    (*(FDynamicMesh3 **)(*(longlong *)this + 8),param_1);
  iVar4 = UE::Geometry::FDynamicMesh3::GetTriangleGroup
                    (*(FDynamicMesh3 **)(*(longlong *)this + 8),param_2);
  if (iVar3 == iVar4) {
    uVar5 = UE::Geometry::FDynamicMesh3::FindEdgeFromTriPair
                      (*(FDynamicMesh3 **)(*(longlong *)this + 8),param_1,param_2);
    plVar1 = *(longlong **)((longlong)this + 8);
    if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
      plVar6 = (longlong *)plVar1[8];
      if ((longlong *)plVar1[8] == (longlong *)0x0) {
        plVar6 = plVar1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar1[9] - 1U & uVar5) * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)(*plVar1 + (longlong)iVar3 * 0xc) == uVar5) goto LAB_14c7d0ddb;
          iVar3 = *(int *)(*plVar1 + 4 + (longlong)iVar3 * 0xc);
        } while (iVar3 != -1);
      }
    }
    bVar2 = true;
  }
  else {
LAB_14c7d0ddb:
    bVar2 = false;
  }
  return bVar2;
}

// CollapseDegenerateEdges @ 14c7e9830

void __thiscall
UE::Geometry::FMeshPlaneCut::CollapseDegenerateEdges
          (FMeshPlaneCut *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,
          bool param_2,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3)

{
  FLocalPlanarSimplify::CollapseDegenerateEdges
            (this->Mesh,param_1,param_2,this->DegenerateEdgeTol,param_3);
  return;
}

// CollapseDegenerateEdges @ 14c7e9860

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FMeshPlaneCut::CollapseDegenerateEdges
          (FMeshPlaneCut *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2)

{
  undefined1 *puVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar5;
  uint *puVar6;
  undefined1 *puVar7;
  FDynamicMesh3 *pFVar8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar9;
  FScriptContainerElement *pFVar10;
  FDynamicMeshAttributeSet *pFVar11;
  code *pcVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar16;
  bool bVar17;
  char cVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  undefined4 uVar26;
  int iVar27;
  undefined1 *puVar28;
  int iVar29;
  uint *puVar30;
  int iVar31;
  double dVar32;
  double dVar33;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined8 local_res20;
  longlong local_138;
  undefined4 uStack_104;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d0 [5];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_78;
  undefined4 local_6c;
  
  uVar15 = _UNK_15060db28;
  uVar14 = ___xmm_ffffffffffffffffffffffffffffffff;
  dVar4 = this->DegenerateEdgeTol;
  local_d0[0] = param_1;
  local_d0[1] = param_2;
LAB_14c7e98a0:
  iVar31 = 0;
  local_138 = 0;
LAB_14c7e98b0:
  pTVar5 = local_d0[local_138];
  iVar27 = 0;
  iVar21 = *(int *)&(pTVar5->Elements).field_0x28;
  puVar1 = &(pTVar5->Elements).field_0x10;
  iVar29 = 0;
  uVar19 = 1;
  iVar20 = 0;
  if (iVar21 != 0) {
    puVar6 = *(uint **)&(pTVar5->Elements).field_0x20;
    puVar30 = (uint *)puVar1;
    if (puVar6 != (uint *)0x0) {
      puVar30 = puVar6;
    }
    uVar25 = *puVar30;
    while (uVar25 == 0) {
      lVar23 = (longlong)iVar27;
      iVar29 = iVar29 + 0x20;
      iVar27 = iVar27 + 1;
      iVar20 = iVar21;
      if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar27) goto LAB_14c7e993d;
      uVar25 = puVar30[lVar23 + 1];
    }
    uVar19 = -uVar25 & uVar25;
    uVar22 = (ulonglong)uVar19 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_res10 = (int)lVar23;
    iVar20 = local_res10 + -1 + iVar29;
    if (iVar21 < iVar20) {
      iVar20 = iVar21;
    }
  }
LAB_14c7e993d:
  uVar25 = *(uint *)&(pTVar5->Elements).field_0x28;
  uVar24 = uVar25 & 0xffffffe0;
  TStack_f8._padding_ = CONCAT44(uVar19,iVar27);
  TStack_f8.CurrentBitIndex = iVar20;
  TStack_f8.UnvisitedBitMask = 0xffffffff;
  iVar27 = (int)uVar25 >> 5;
  TStack_f8._28_4_ = local_6c;
  TStack_f8.BaseBitIndex = iVar29;
  uStack_d8 = CONCAT44(uStack_104,
                       *(int *)&(pTVar5->Elements).field_0x8 -
                       *(int *)&(pTVar5->Elements).field_0x34);
  local_res20 = pTVar5;
  TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar25 < 0) || (iVar21 < (int)uVar25)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar17)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pTVar16 = local_res20;
  uVar19 = *(uint *)&(pTVar5->Elements).field_0x28;
  if (uVar25 != uVar19) {
    puVar7 = *(undefined1 **)&(pTVar5->Elements).field_0x20;
    puVar28 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar28 = puVar7;
    }
    uVar25 = -1 << ((byte)uVar25 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar27 * 4);
    while (uVar25 == 0) {
      lVar23 = (longlong)iVar27;
      uVar24 = uVar24 + 0x20;
      iVar27 = iVar27 + 1;
      uVar25 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
      goto LAB_14c7e9a60;
      uVar25 = *(uint *)(puVar28 + lVar23 * 4 + 4);
    }
    uVar22 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
    lVar23 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_res18 = (int)lVar23;
    uVar25 = local_res18 + -1 + uVar24;
    if ((int)uVar19 < (int)uVar25) {
      uVar25 = uVar19;
    }
  }
LAB_14c7e9a60:
  do {
    if (*(int *)&(pTVar5->Elements).field_0x8 - *(int *)&(pTVar5->Elements).field_0x34 !=
        (int)uStack_d8) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_f8.CurrentBitIndex == uVar25) &&
        (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == pTVar16))
    break;
    pFVar8 = this->Mesh;
    uVar19 = *(uint *)(*(longlong *)&pTVar5->Elements + (longlong)TStack_f8.CurrentBitIndex * 0xc);
    if ((-1 < (int)uVar19) &&
       ((int)uVar19 <
        (int)((pFVar8->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
             (pFVar8->EdgeRefCounts).RefCounts.CurBlockUsed))) {
      if ((ushort)(*(short *)(*(longlong *)
                               ((pFVar8->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 2) - 1U
                  ) < 0xfffe) {
        pTVar9 = *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)
                  (*(longlong *)
                    ((pFVar8->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar19 >> 9) * 8) +
                  (ulonglong)(uVar19 & 0x1ff) * 0x10);
        pFVar10 = (pFVar8->Vertices).Blocks.AllocatorInstance.Data;
        uVar22 = (ulonglong)((uint)pTVar9 & 0x1ff);
        lVar23 = *(longlong *)(pFVar10 + (((ulonglong)pTVar9 & 0xffffffff) >> 9) * 8);
        pdVar2 = (double *)(lVar23 + uVar22 * 0x18);
        local_78 = *(double *)(lVar23 + 0x10 + uVar22 * 0x18);
        uVar22 = (ulonglong)((uint)((ulonglong)pTVar9 >> 0x20) & 0x1ff);
        lVar23 = *(longlong *)(pFVar10 + ((ulonglong)pTVar9 >> 0x29) * 8);
        pdVar3 = (double *)(lVar23 + uVar22 * 0x18);
        dVar13 = *pdVar3 - *pdVar2;
        dVar32 = *(double *)(lVar23 + 0x10 + uVar22 * 0x18) - local_78;
        dVar33 = pdVar3[1] - pdVar2[1];
        if (dVar33 * dVar33 + dVar13 * dVar13 + dVar32 * dVar32 <= dVar4 * dVar4) {
          pFVar11 = (pFVar8->AttributeSet).Ptr;
          local_res20 = pTVar9;
          if ((pFVar11 == (FDynamicMeshAttributeSet *)0x0) ||
             (cVar18 = (**(code **)(pFVar11->_padding_ + 0x90))(pFVar11,(ulonglong)pTVar9 >> 0x20),
             cVar18 == '\0')) {
            uVar26 = (undefined4)local_res20;
          }
          else {
            uVar26 = local_res20._4_4_;
            pFVar11 = (this->Mesh->AttributeSet).Ptr;
            if ((pFVar11 != (FDynamicMeshAttributeSet *)0x0) &&
               (cVar18 = (**(code **)(pFVar11->_padding_ + 0x90))
                                   (pFVar11,(ulonglong)pTVar9 & 0xffffffff), cVar18 != '\0'))
            goto LAB_14c7e9c15;
          }
          local_d0[3] = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0xffffffffffffffff;
          local_a8 = uVar14;
          uStack_a0 = uVar15;
          local_98 = 0xffffffffffffffff;
          iVar21 = (**(code **)(this->Mesh->_padding_ + 0x68))(this->Mesh,uVar26);
          if (iVar21 == 0) {
            iVar31 = iVar31 + 1;
          }
        }
      }
    }
LAB_14c7e9c15:
    TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
  } while( true );
  local_138 = local_138 + 1;
  if (1 < local_138) goto code_r0x00014c7e9c45;
  goto LAB_14c7e98b0;
code_r0x00014c7e9c45:
  if (iVar31 == 0) {
    return;
  }
  goto LAB_14c7e98a0;
}

// ComputeVertexSignedDistances @ 14c7f4090

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FMeshPlaneCut::ComputeVertexSignedDistances
          (FMeshPlaneCut *this,TArray<double,TSizedDefaultAllocator<32>_> *param_1,double param_2)

{
  int iVar1;
  <lambda_1> local_res8;
  double local_res18;
  TArrayView<std::nullptr_t,int> local_48;
  code *local_38;
  FMeshPlaneCut **local_30;
  FMeshPlaneCut *local_28;
  TArray<double,TSizedDefaultAllocator<32>_> *local_20;
  double *local_18;
  
  iVar1 = (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
          (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed;
  local_res18 = param_2;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(param_1,iVar1,Default);
  local_18 = &local_res18;
  local_48.DataPtr = (void **)0x0;
  local_48.ArrayNum = 0;
  local_38 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshPlaneCut::ComputeVertexSignedDistances'::__l2::<lambda_1>,void,int>
             ::Call;
  local_30 = &local_28;
  local_28 = this;
  local_20 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar1,1,(TFunctionRef<void___cdecl(int)> *)&local_38,local_res8,
             None,&local_48);
  return;
}

// Cut @ 14c7fd7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall UE::Geometry::FMeshPlaneCut::Cut(FMeshPlaneCut *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  FOpenBoundary *pFVar10;
  undefined1 auStackY_148 [32];
  TArray<double,TSizedDefaultAllocator<32>_> local_108;
  TUniqueFunction<void___cdecl(DynamicMeshInfo::FEdgeCollapseInfo_const_&)> local_f8;
  undefined1 local_c8 [32];
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  ForElementType<FSetElementId> local_88;
  int local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_148;
  uVar8 = 0;
  local_4c = 0x80;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_9c = 0x80;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_88 = (ForElementType<FSetElementId>)0x0;
  local_80 = 0;
  SplitCrossingEdges(this,true,&local_108,
                     (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_78,
                     (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_c8,
                     (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0,
                     (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0,
                     (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0);
  uVar9 = uVar8;
  iVar6 = local_108.ArrayNum;
  if (0 < local_108.ArrayNum) {
    do {
      uVar7 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        iVar6 = local_108.ArrayNum;
      }
      if (this->PlaneTolerance < *(double *)(local_108.AllocatorInstance.Data + uVar9)) {
        FDynamicMesh3::RemoveVertex(this->Mesh,uVar7,false);
        iVar6 = local_108.ArrayNum;
      }
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar9 = uVar9 + 8;
    } while ((int)(uVar7 + 1) < iVar6);
  }
  if (this->bCollapseDegenerateEdgesOnCut != false) {
    FLocalPlanarSimplify::CollapseDegenerateEdges
              (this->Mesh,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_c8,false,
               this->DegenerateEdgeTol,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0)
    ;
  }
  if (this->bSimplifyAlongNewEdges != false) {
    local_f8._0_8_ = 0;
    local_f8._40_8_ = 0;
    FLocalPlanarSimplify::SimplifyAlongEdges
              (&this->SimplifySettings,this->Mesh,
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_c8,&local_f8);
  }
  iVar6 = (this->OpenBoundaries).ArrayNum;
  piVar1 = &(this->OpenBoundaries).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&(this->OpenBoundaries).AllocatorInstance,piVar1);
  }
  (this->OpenBoundaries).ArrayNum = iVar6 + 1;
  pFVar10 = (FOpenBoundary *)
            ((this->OpenBoundaries).AllocatorInstance.Data + (longlong)iVar6 * 0x30);
  pFVar10->Label = 0;
  *(undefined4 *)&pFVar10->field_0x2a = 0;
  *(undefined2 *)&pFVar10->field_0x2e = 0;
  pFVar10->NormalSign = 1.0;
  (pFVar10->CutLoops).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar10->CutLoops).ArrayNum = 0;
  (pFVar10->CutLoops).ArrayMax = 0;
  (pFVar10->CutSpans).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar10->CutSpans).ArrayNum = 0;
  (pFVar10->CutSpans).ArrayMax = 0;
  pFVar10->CutLoopsFailed = false;
  pFVar10->FoundOpenSpans = false;
  bVar3 = ExtractBoundaryLoops
                    (this,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_c8,
                     (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_78,pFVar10);
  local_80 = 0;
  if (local_88 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88);
  }
  iVar6 = SUB84(local_c8._8_8_,4);
  local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
  if (iVar6 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
  }
  local_98 = 0xffffffff;
  local_94 = 0;
  local_a0 = 0;
  if (0x80 < local_9c) {
    local_9c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar6 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar6 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_44 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  return bVar3;
}

// CutWithoutDelete @ 14c7fdb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FMeshPlaneCut::CutWithoutDelete
          (FMeshPlaneCut *this,bool param_1,float param_2,
          TDynamicMeshScalarTriangleAttribute<int> *param_3,int param_4,bool param_5,bool param_6)

{
  FSmallListSet *pFVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar16;
  bool bVar17;
  undefined1 uVar18;
  short sVar19;
  int iVar20;
  uint uVar21;
  int *piVar22;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar23;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  undefined ***pppuVar24;
  longlong *plVar25;
  longlong lVar26;
  uint *puVar27;
  ForElementType<FSetElementId> FVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  TBitArray<FDefaultBitArrayAllocator> *pTVar35;
  uint *puVar36;
  FOpenBoundary *pFVar37;
  uint *puVar38;
  FDynamicMesh3 *pFVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined1 auStackY_a98 [32];
  bool local_a48;
  undefined1 local_a47;
  undefined1 local_a46;
  undefined1 local_a45;
  uint local_a44;
  ForAnyElementType local_a40;
  undefined8 local_a38;
  uint local_a30;
  undefined1 local_a2c [4];
  undefined8 local_a28;
  uint local_a20 [2];
  undefined8 local_a18;
  longlong *local_a10;
  undefined8 uStack_a08;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_a00;
  uint uStack_9f8;
  uint uStack_9f4;
  int iStack_9f0;
  undefined4 uStack_9ec;
  int local_9e8;
  undefined4 uStack_9e4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_9e0;
  TArray<double,TSizedDefaultAllocator<32>_> local_9c0;
  uint local_9b0 [2];
  int local_9a8;
  int local_9a4;
  int local_9a0;
  uint local_99c;
  int local_998;
  uint local_994;
  uint local_990;
  uint local_98c;
  TDynamicMeshScalarTriangleAttribute<int> *local_988;
  longlong *local_980;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_978;
  undefined8 uStack_958;
  longlong *local_950;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_948;
  undefined8 local_928;
  undefined1 local_920 [4];
  uint local_91c;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined1 local_908 [40];
  int local_8e0;
  undefined4 uStack_8dc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_8d8;
  int local_8b8;
  int local_8b4;
  int local_8b0;
  int local_8ac;
  int local_8a8 [2];
  uint *local_8a0;
  int local_898;
  int local_894;
  uint local_890;
  uint uStack_88c;
  uint uStack_888;
  uint uStack_884;
  undefined1 local_880 [16];
  ulonglong local_870;
  TPairInitializer<int_const_&,int_&&> local_868;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_858;
  undefined8 uStack_838;
  longlong *local_830;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_828;
  undefined8 uStack_808;
  code *local_7f8 [2];
  undefined **local_7e8;
  FDynamicMesh3 *local_7e0;
  uint local_7d8;
  undefined ***local_7d0;
  undefined1 *local_7c8 [2];
  IndexIterator local_7b8;
  uint *local_7a8;
  int *local_7a0;
  FScriptContainerElement *local_798;
  int local_790;
  uint *local_788;
  uint *local_780;
  TVector<double>_u_0 local_778;
  BaseValueIterator local_750;
  BaseValueIterator local_728;
  double local_700;
  double dStack_6f8;
  double local_6f0;
  undefined4 local_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined8 local_6d8;
  undefined4 local_6d0;
  undefined4 uStack_6cc;
  undefined4 uStack_6c8;
  undefined4 uStack_6c4;
  undefined8 local_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_6a8;
  TUniqueFunction<void___cdecl(DynamicMeshInfo::FEdgeCollapseInfo_const_&)> local_688;
  undefined4 local_63c;
  undefined4 local_61c;
  undefined1 local_618 [32];
  uint *local_5f8;
  uint local_5f0;
  undefined4 local_5ec;
  undefined4 local_5e8;
  int local_5e4;
  undefined1 local_5e0 [8];
  ForElementType<FSetElementId> local_5d8;
  int local_5d0;
  undefined1 local_5c8 [32];
  undefined8 local_5a8;
  int local_5a0;
  undefined4 local_59c;
  undefined4 local_598;
  int local_594;
  ForElementType<FSetElementId> local_588;
  int local_580;
  undefined1 local_578 [32];
  undefined8 local_558;
  int local_550;
  undefined4 local_54c;
  undefined4 local_548;
  int local_544;
  ForElementType<FSetElementId> local_538;
  int local_530;
  undefined1 local_528 [32];
  undefined8 local_508;
  int local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  int local_4f4;
  ForElementType<FSetElementId> local_4e8;
  int local_4e0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_4d8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_488;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_438;
  undefined1 local_3e8 [40];
  longlong *local_3c0;
  FSmallListSet *local_3b8;
  ulonglong uStack_3b0;
  int local_3a8;
  int iStack_3a4;
  int iStack_3a0;
  int iStack_39c;
  int local_398;
  undefined4 uStack_394;
  FSmallListSet *local_390;
  ulonglong uStack_388;
  int local_380;
  int iStack_37c;
  int iStack_378;
  int iStack_374;
  int local_370;
  undefined4 uStack_36c;
  undefined1 local_368 [48];
  ValueIterator local_338;
  ValueIterator local_310;
  undefined1 local_2e8 [144];
  undefined1 local_258 [144];
  undefined1 local_1c8 [144];
  undefined1 local_138 [144];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_a98;
  local_9c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_9c0.ArrayNum = 0;
  local_9c0.ArrayMax = 0;
  local_528._0_8_ = 0;
  local_528._8_8_ = 0;
  local_508 = 0;
  local_500 = 0;
  local_4fc = 0x80;
  local_4f8 = 0xffffffff;
  local_4f4 = 0;
  local_4e8 = (ForElementType<FSetElementId>)0x0;
  local_4e0 = 0;
  local_578._0_8_ = 0;
  local_578._8_8_ = 0;
  local_558 = 0;
  local_550 = 0;
  local_54c = 0x80;
  local_548 = 0xffffffff;
  local_544 = 0;
  local_538 = (ForElementType<FSetElementId>)0x0;
  local_530 = 0;
  local_988 = param_3;
  SplitCrossingEdges(this,param_1,&local_9c0,
                     (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_528,
                     (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_578,
                     (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0,
                     (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0,
                     (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0);
  if (((!param_1) && (param_2 != 0.0)) &&
     (bVar17 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<416214916899274963>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\MeshPlaneCut.cpp"
                          ,0xd3,"OffsetVertices == 0.0"), bVar17)) {
    pcVar6 = (code *)swi(3);
    uVar18 = (*pcVar6)();
    return (bool)uVar18;
  }
  if (this->bCollapseDegenerateEdgesOnCut != false) {
    FLocalPlanarSimplify::CollapseDegenerateEdges
              (this->Mesh,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_578,false,
               this->DegenerateEdgeTol,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0)
    ;
  }
  if (this->bSimplifyAlongNewEdges != false) {
    local_688._0_8_ = 0;
    local_688._40_8_ = 0;
    FLocalPlanarSimplify::SimplifyAlongEdges
              (&this->SimplifySettings,this->Mesh,
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_578,&local_688);
  }
  if (param_1) {
    if (param_3 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
      bVar17 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<416214916899274982>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\MeshPlaneCut.cpp"
                          ,0xe6,"TriLabels");
      if (bVar17) {
        pcVar6 = (code *)swi(3);
        uVar18 = (*pcVar6)();
        return (bool)uVar18;
      }
      local_a48 = false;
    }
    else {
      pFVar39 = this->Mesh;
      dVar10 = (double)param_2;
      local_488.Elements._0_8_ = 0;
      local_488.Elements._8_8_ = 0;
      local_488.Elements._32_8_ = 0;
      local_488.Elements._40_4_ = 0;
      local_488.Elements._44_4_ = 0x80;
      local_488.Elements._48_4_ = 0xffffffff;
      dVar11 = dVar10 * (this->PlaneNormal).field0_0x0._s_0.X;
      local_488.Elements._52_4_ = 0;
      local_488.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_488.HashSize = 0;
      dVar12 = dVar10 * (this->PlaneNormal).field0_0x0._s_0.Y;
      dVar10 = dVar10 * (this->PlaneNormal).field0_0x0._s_0.Z;
      FRefCountVector::IndexIterator::IndexIterator
                ((IndexIterator *)(local_880 + 8),&pFVar39->VertexRefCounts,0,
                 (pFVar39->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar39->VertexRefCounts).RefCounts.CurBlockUsed);
      uVar15._4_4_ = (pFVar39->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                     (pFVar39->VertexRefCounts).RefCounts.CurBlockUsed;
      FRefCountVector::IndexIterator::IndexIterator
                (&local_7b8,&pFVar39->VertexRefCounts,uVar15._4_4_,uVar15._4_4_);
      iVar29 = (int)local_870;
      uVar15._4_4_ = param_4;
      uVar33 = local_870;
      while (iVar29 != local_7b8._8_4_) {
        uVar21 = (uint)uVar33;
        local_870 = uVar33;
        if ((int)uVar21 < local_9c0.ArrayNum) {
          uVar31 = 0;
          if ((int)uVar21 < local_9c0.ArrayNum) {
            uVar31 = ~uVar21 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            uVar18 = (*pcVar6)();
            return (bool)uVar18;
          }
          if (this->PlaneTolerance <
              *(double *)(local_9c0.AllocatorInstance.Data + (longlong)(int)uVar21 * 8)) {
            lVar26 = *(longlong *)
                      ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                      ((uVar33 & 0xffffffff) >> 9) * 8);
            pdVar2 = (double *)(lVar26 + (ulonglong)(uVar21 & 0x1ff) * 0x18);
            local_700 = *pdVar2;
            dStack_6f8 = pdVar2[1];
            local_6f0 = *(double *)(lVar26 + 0x10 + (ulonglong)(uVar21 & 0x1ff) * 0x18);
            local_778._s_0.X = local_700 + dVar11;
            local_778._s_0.Y = dStack_6f8 + dVar12;
            local_778._s_0.Z = local_6f0 + dVar10;
            FDynamicMesh3::SetVertex(this->Mesh,uVar21,(TVector<double> *)&local_778._s_0,true);
            FDynamicMesh3::VtxTrianglesItr
                      (this->Mesh,
                       (TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator> *)
                       local_368,uVar21);
            TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
            TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                      ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_2e8,
                       &local_338,&local_310,
                       (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_368);
            TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
            TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                      ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_1c8,
                       &local_310,&local_310,
                       (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_368);
            while (((uVar40 = local_2e8._88_4_, local_2e8._0_8_ != local_1c8._0_8_ ||
                    (local_2e8._8_4_ != local_1c8._8_4_)) ||
                   ((local_2e8._24_4_ != local_1c8._24_4_ || (local_2e8._28_4_ != local_1c8._28_4_))
                   ))) {
              uVar21 = *(uint *)(*(longlong *)
                                  (*(longlong *)&param_3->field_0x20 +
                                  (ulonglong)((uint)local_2e8._88_4_ >> 9) * 8) +
                                (ulonglong)(local_2e8._88_4_ & 0x1ff) * 4);
              local_a20[0] = uVar21;
              if ((int)uVar21 < param_4) {
                local_9b0[0] = uVar21;
                iVar20 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                         ::FindIndexByHash<int>(&local_488,uVar21,(int *)local_9b0);
                iVar29 = uVar15._4_4_;
                if (iVar20 == -1) {
                  local_7a8 = local_a20;
                  local_7a0 = &local_9a8;
                  iVar29 = uVar15._4_4_ + 1;
                  local_9a8 = uVar15._4_4_;
                  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<int_const_&,int_&&>_>
                            (&local_488,&local_868,(bool *)&local_7a8);
                  uVar21 = local_a20[0];
                }
                piVar22 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                          ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                         *)&local_488,uVar21);
                *(int *)(*(longlong *)
                          (*(longlong *)&param_3->field_0x20 + (ulonglong)((uint)uVar40 >> 9) * 8) +
                        (ulonglong)(uVar40 & 0x1ff) * 4) = *piVar22;
                uVar15._4_4_ = iVar29;
              }
              TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                        ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)
                         local_2e8);
            }
            if (local_1c8._96_8_ != 0) {
              plVar25 = (longlong *)(local_1c8 + 0x70);
              if ((longlong *)local_1c8._136_8_ != (longlong *)0x0) {
                plVar25 = (longlong *)local_1c8._136_8_;
              }
              (**(code **)(*plVar25 + 0x10))();
            }
            if (local_2e8._96_8_ != 0) {
              plVar25 = (longlong *)(local_2e8 + 0x70);
              if ((longlong *)local_2e8._136_8_ != (longlong *)0x0) {
                plVar25 = (longlong *)local_2e8._136_8_;
              }
              (**(code **)(*plVar25 + 0x10))();
            }
            if (local_368._0_8_ != 0) {
              plVar25 = (longlong *)(local_368 + 0x10);
              if ((longlong *)local_368._40_8_ != (longlong *)0x0) {
                plVar25 = (longlong *)local_368._40_8_;
              }
              (**(code **)(*plVar25 + 0x10))();
            }
          }
        }
        FRefCountVector::BaseIterator::goto_next((BaseIterator *)(local_880 + 8));
        uVar33 = local_870;
        iVar29 = (int)local_870;
      }
      local_7c8[0] = local_528;
      local_4d8.Elements._0_8_ = 0;
      local_7c8[1] = local_578;
      local_4d8.Elements._8_8_ = 0;
      local_9e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_528 + 0x10);
      local_4d8.Elements._32_8_ = 0;
      local_4d8.Elements._40_4_ = 0;
      local_4d8.Elements._44_4_ = 0x80;
      local_4d8.Elements._48_4_ = 0xffffffff;
      local_4d8.Elements._52_4_ = 0;
      local_4d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_4d8.HashSize = 0;
      local_5c8._0_8_ = 0;
      local_5c8._8_8_ = 0;
      local_5a8 = 0;
      local_5a0 = 0;
      local_59c = 0x80;
      local_598 = 0xffffffff;
      local_594 = 0;
      local_588 = (ForElementType<FSetElementId>)0x0;
      local_580 = 0;
      local_9e0._padding_._0_4_ = 0;
      local_a18 = 1;
      local_9e0._padding_._4_4_ = 1;
      local_9e0.UnvisitedBitMask = 0xffffffff;
      local_9e0.CurrentBitIndex = 0;
      local_9e0.BaseBitIndex = 0;
      if (local_500 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_9e0);
      }
      TStack_978._padding_ = CONCAT44(local_9e0._padding_._4_4_,(undefined4)local_9e0._padding_);
      local_980 = (longlong *)local_528;
      TStack_978.CurrentBitIndex = local_9e0.CurrentBitIndex;
      TStack_978.UnvisitedBitMask = local_9e0.UnvisitedBitMask;
      TStack_978._28_4_ = local_9e0._28_4_;
      TStack_978.BaseBitIndex = local_9e0.BaseBitIndex;
      local_8e0 = local_528._8_4_ - local_4f4;
      local_908._16_8_ = local_9e0.Array;
      uStack_958 = CONCAT44(uStack_8dc,local_8e0);
      TStack_978.Array = local_9e0.Array;
      local_908._0_8_ = local_980;
      local_908._8_8_ = TStack_978._padding_;
      local_908._24_8_ = TStack_978._16_8_;
      local_908._32_8_ = TStack_978._24_8_;
      pTVar23 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_6a8,(TBitArray<FDefaultBitArrayAllocator> *)(local_528 + 0x10),
                           local_500);
      TStack_948._padding_ = pTVar23->_padding_;
      pTVar35 = pTVar23->Array;
      uVar13._0_4_ = pTVar23->UnvisitedBitMask;
      uVar13._4_4_ = pTVar23->CurrentBitIndex;
      TStack_948.BaseBitIndex = pTVar23->BaseBitIndex;
      TStack_948._28_4_ = *(undefined4 *)&pTVar23->field_0x1c;
      TStack_948.Array = pTVar35;
      TStack_948._16_8_ = uVar13;
      while( true ) {
        plVar25 = local_980;
        if ((int)local_980[1] - *(int *)((longlong)local_980 + 0x34) != (int)uStack_958) {
          local_a47 = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_a47);
        }
        if (((TStack_978.CurrentBitIndex == uVar13._4_4_) && (TStack_978.Array == pTVar35)) &&
           (plVar25 == (longlong *)local_528)) break;
        pFVar39 = this->Mesh;
        uVar21 = *(uint *)(*plVar25 + (longlong)TStack_978.CurrentBitIndex * 0xc);
        if ((-1 < (int)uVar21) &&
           ((int)uVar21 <
            (int)((pFVar39->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar39->EdgeRefCounts).RefCounts.CurBlockUsed))) {
          if ((ushort)(*(short *)(*(longlong *)
                                   ((pFVar39->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                   + (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 2
                                 ) - 1U) < 0xfffe) {
            puVar3 = (undefined8 *)
                     (*(longlong *)
                       ((pFVar39->Edges).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 0x10);
            local_918 = *puVar3;
            uStack_910 = puVar3[1];
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_5c8,&local_9a4
                       ,(bool *)&local_918);
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_5c8,&local_9a0
                       ,(bool *)((longlong)&local_918 + 4));
          }
        }
        TStack_978.UnvisitedBitMask = TStack_978.UnvisitedBitMask & ~TStack_978._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_978);
      }
      local_9e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_578 + 0x10);
      local_9e0._padding_._4_4_ = (undefined4)local_a18;
      local_9e0._padding_._0_4_ = 0;
      local_9e0.UnvisitedBitMask = 0xffffffff;
      local_9e0.CurrentBitIndex = 0;
      local_9e0.BaseBitIndex = 0;
      if (local_550 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_9e0);
      }
      TStack_978._padding_ = CONCAT44(local_9e0._padding_._4_4_,(undefined4)local_9e0._padding_);
      local_980 = (longlong *)local_578;
      TStack_978.CurrentBitIndex = local_9e0.CurrentBitIndex;
      TStack_978.UnvisitedBitMask = local_9e0.UnvisitedBitMask;
      TStack_978._28_4_ = local_9e0._28_4_;
      TStack_978.BaseBitIndex = local_9e0.BaseBitIndex;
      local_8e0 = local_578._8_4_ - local_544;
      local_908._16_8_ = local_9e0.Array;
      uStack_958 = CONCAT44(uStack_8dc,local_8e0);
      TStack_978.Array = local_9e0.Array;
      local_908._0_8_ = local_980;
      local_908._8_8_ = TStack_978._padding_;
      local_908._24_8_ = TStack_978._16_8_;
      local_908._32_8_ = TStack_978._24_8_;
      pTVar23 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_6a8,(TBitArray<FDefaultBitArrayAllocator> *)(local_578 + 0x10),
                           local_550);
      TStack_948._padding_ = pTVar23->_padding_;
      pTVar35 = pTVar23->Array;
      uVar14._0_4_ = pTVar23->UnvisitedBitMask;
      uVar14._4_4_ = pTVar23->CurrentBitIndex;
      TStack_948.BaseBitIndex = pTVar23->BaseBitIndex;
      TStack_948._28_4_ = *(undefined4 *)&pTVar23->field_0x1c;
      TStack_948.Array = pTVar35;
      TStack_948._16_8_ = uVar14;
      while( true ) {
        plVar25 = local_980;
        if ((int)local_980[1] - *(int *)((longlong)local_980 + 0x34) != (int)uStack_958) {
          local_a47 = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_a47);
        }
        if (((TStack_978.CurrentBitIndex == uVar14._4_4_) && (TStack_978.Array == pTVar35)) &&
           (plVar25 == (longlong *)local_578)) break;
        pFVar39 = this->Mesh;
        uVar21 = *(uint *)(*plVar25 + (longlong)TStack_978.CurrentBitIndex * 0xc);
        if ((-1 < (int)uVar21) &&
           ((int)uVar21 <
            (int)((pFVar39->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar39->EdgeRefCounts).RefCounts.CurBlockUsed))) {
          if ((ushort)(*(short *)(*(longlong *)
                                   ((pFVar39->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                   + (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 2
                                 ) - 1U) < 0xfffe) {
            puVar3 = (undefined8 *)
                     (*(longlong *)
                       ((pFVar39->Edges).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 0x10);
            local_918 = *puVar3;
            uStack_910 = puVar3[1];
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_5c8,&local_9a4
                       ,(bool *)&local_918);
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_5c8,&local_9a0
                       ,(bool *)((longlong)&local_918 + 4));
          }
        }
        TStack_978.UnvisitedBitMask = TStack_978.UnvisitedBitMask & ~TStack_978._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_978);
      }
      local_8d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_5c8 + 0x10);
      local_8d8.UnvisitedBitMask = 0xffffffff;
      local_a40.Data = (FScriptContainerElement *)0x0;
      local_a38 = 0;
      local_8d8._padding_._0_4_ = 0;
      local_8d8._padding_._4_4_ = (undefined4)local_a18;
      local_8d8.CurrentBitIndex = 0;
      local_8d8.BaseBitIndex = 0;
      if (local_5a0 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_8d8);
      }
      uStack_a08 = CONCAT44(local_8d8._padding_._4_4_,(undefined4)local_8d8._padding_);
      local_a10 = (longlong *)local_5c8;
      uStack_9f4 = local_8d8.CurrentBitIndex;
      uStack_9f8 = local_8d8.UnvisitedBitMask;
      uStack_9ec = local_8d8._28_4_;
      iStack_9f0 = local_8d8.BaseBitIndex;
      local_9e8 = local_5c8._8_4_ - local_594;
      pTStack_a00 = local_8d8.Array;
      local_928 = CONCAT44(uStack_9e4,local_9e8);
      TStack_948.Array = local_8d8.Array;
      local_950 = local_a10;
      TStack_948._padding_ = uStack_a08;
      TStack_948._16_8_ = _uStack_9f8;
      TStack_948._24_8_ = _iStack_9f0;
      pTVar23 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_908,
                           (TBitArray<FDefaultBitArrayAllocator> *)(local_5c8 + 0x10),local_5a0);
      uVar15._0_4_ = pTVar23->UnvisitedBitMask;
      uVar15._4_4_ = pTVar23->CurrentBitIndex;
      iStack_9f0 = pTVar23->BaseBitIndex;
      uStack_9ec = *(undefined4 *)&pTVar23->field_0x1c;
      uStack_a08 = pTVar23->_padding_;
      pTVar35 = pTVar23->Array;
      local_a28 = CONCAT44(local_a28._4_4_,uVar15._4_4_);
      pTStack_a00 = pTVar35;
      _uStack_9f8 = uVar15;
      while( true ) {
        plVar25 = local_950;
        iVar29 = 0;
        if ((int)local_950[1] - *(int *)((longlong)local_950 + 0x34) != (int)local_928) {
          local_a46 = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_a46);
        }
        lVar26 = local_a38;
        if (((TStack_948.CurrentBitIndex == uVar15._4_4_) && (TStack_948.Array == pTVar35)) &&
           (plVar25 == (longlong *)local_5c8)) break;
        pFVar39 = this->Mesh;
        local_a44 = *(uint *)(*plVar25 + (longlong)TStack_948.CurrentBitIndex * 0xc);
        if ((((int)local_a44 < 0) ||
            ((int)((pFVar39->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                  (pFVar39->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)local_a44)) ||
           (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          ((pFVar39->VertexRefCounts).RefCounts.Blocks.
                                           AllocatorInstance.Data + (ulonglong)(local_a44 >> 9) * 8)
                                        + (ulonglong)(local_a44 & 0x1ff) * 2) - 1U))) {
          bVar17 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<416214916899275039>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\MeshPlaneCut.cpp"
                              ,0x11f,"Mesh->IsVertex(VID)");
          if (bVar17) {
            pcVar6 = (code *)swi(3);
            uVar18 = (*pcVar6)();
            return (bool)uVar18;
          }
        }
        else {
          uVar21 = local_a38._4_4_;
          local_a38 = (ulonglong)local_a38._4_4_ << 0x20;
          if ((lVar26 < 0) && (uVar21 != 0)) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&local_a40,0,(int *)((longlong)&local_a38 + 4));
          }
          uVar21 = local_a44;
          local_7e0 = this->Mesh;
          local_7e8 = &
                      ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxTrianglesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__TPairExpandEnumerable_VValueIterator_FSmallListSet_Geometry_UE___45_H_Z__0A__0A__Function_Private_Core_UE__6B_
          ;
          local_7d0 = (undefined ***)0x0;
          local_7f8[0] = Core::Private::Function::
                         TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxTrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex2i,int>
                         ::Call;
          pFVar1 = &local_7e0->VertexEdgeLists;
          local_3e8._0_8_ = 0;
          local_3c0 = (longlong *)0x0;
          local_3b8 = (FSmallListSet *)0x0;
          uStack_3b0 = uStack_3b0 & 0xffffffff00000000;
          local_390 = (FSmallListSet *)0x0;
          uStack_388 = uStack_388 & 0xffffffff00000000;
          local_7d8 = local_a44;
          FSmallListSet::BaseValueIterator::BaseValueIterator(&local_750,pFVar1,local_a44,false);
          local_3b8 = local_750.ListSet;
          uStack_3b0._0_4_ = local_750.ListIndex;
          uStack_3b0._4_4_ = local_750.block_ptr;
          local_398 = local_750.cur_value;
          uStack_394 = local_750._36_4_;
          local_3a8 = local_750.N;
          iStack_3a4 = local_750.iEnd;
          iStack_3a0 = local_750.iCur;
          iStack_39c = local_750.cur_ptr;
          FSmallListSet::BaseValueIterator::BaseValueIterator(&local_728,pFVar1,uVar21,true);
          local_390 = local_728.ListSet;
          uStack_388._0_4_ = local_728.ListIndex;
          uStack_388._4_4_ = local_728.block_ptr;
          local_370 = local_728.cur_value;
          uStack_36c = local_728._36_4_;
          local_380 = local_728.N;
          iStack_37c = local_728.iEnd;
          iStack_378 = local_728.iCur;
          iStack_374 = local_728.cur_ptr;
          TFunction<UE::Geometry::FIndex2i___cdecl(int)>::operator=
                    ((TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_3e8,
                     (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_7f8);
          if (local_7f8[0] != (code *)0x0) {
            pppuVar24 = &local_7e8;
            if (local_7d0 != (undefined ***)0x0) {
              pppuVar24 = local_7d0;
            }
            (*(code *)(*pppuVar24)[2])();
          }
          TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
          TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                    ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_258,
                     (ValueIterator *)&local_3b8,(ValueIterator *)&local_390,
                     (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_3e8);
          TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
          TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                    ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_138,
                     (ValueIterator *)&local_390,(ValueIterator *)&local_390,
                     (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_3e8);
          pTVar16 = local_988;
          while ((((local_258._0_8_ != local_138._0_8_ || (local_258._8_4_ != local_138._8_4_)) ||
                  (local_258._24_4_ != local_138._24_4_)) || (local_258._28_4_ != local_138._28_4_))
                ) {
            local_a30 = (uint)local_258._88_8_;
            if (*(int *)(*(longlong *)
                          (*(longlong *)&pTVar16->field_0x20 +
                          ((local_258._88_8_ & 0xffffffff) >> 9) * 8) +
                        (ulonglong)(local_a30 & 0x1ff) * 4) < param_4) {
              iVar29 = iVar29 + 1;
              TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                        ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)
                         local_258);
            }
            else {
              if (((local_a40.Data <= (FScriptContainerElement *)&local_a30) &&
                  ((FScriptContainerElement *)&local_a30 <
                   local_a40.Data + (longlong)(int)local_a38._4_4_ * 4)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar6 = (code *)swi(3);
                uVar18 = (*pcVar6)();
                return (bool)uVar18;
              }
              uVar15._4_4_ = (int)local_a38;
              if ((int)local_a38 == local_a38._4_4_) {
                uVar15._4_4_ = Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,&local_a40,(int *)((longlong)&local_a38 + 4));
              }
              local_a38 = CONCAT44(local_a38._4_4_,uVar15._4_4_ + 1);
              *(uint *)(local_a40.Data + (longlong)uVar15._4_4_ * 4) = local_a30;
              TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                        ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)
                         local_258);
            }
          }
          uVar15._4_4_ = (uint)local_a28;
          if (local_138._96_8_ != 0) {
            plVar25 = (longlong *)(local_138 + 0x70);
            if ((longlong *)local_138._136_8_ != (longlong *)0x0) {
              plVar25 = (longlong *)local_138._136_8_;
            }
            (**(code **)(*plVar25 + 0x10))();
          }
          if (local_258._96_8_ != 0) {
            plVar25 = (longlong *)(local_258 + 0x70);
            if ((longlong *)local_258._136_8_ != (longlong *)0x0) {
              plVar25 = (longlong *)local_258._136_8_;
            }
            (**(code **)(*plVar25 + 0x10))();
          }
          if (local_3e8._0_8_ != 0) {
            plVar25 = (longlong *)(local_3e8 + 0x10);
            if (local_3c0 != (longlong *)0x0) {
              plVar25 = local_3c0;
            }
            (**(code **)(*plVar25 + 0x10))();
          }
          if (iVar29 < 1) {
            uVar33 = (ulonglong)(int)local_a44;
            uVar21 = 0;
            if ((int)local_a44 < local_9c0.ArrayNum) {
              uVar21 = ~local_a44 >> 0x1f;
            }
            uVar34 = uVar33;
            if (uVar21 == 0) {
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar17) {
                pcVar6 = (code *)swi(3);
                uVar18 = (*pcVar6)();
                return (bool)uVar18;
              }
              uVar34 = (ulonglong)local_a44;
            }
            if (*(double *)(local_9c0.AllocatorInstance.Data + uVar33 * 8) <= this->PlaneTolerance)
            {
              pFVar39 = this->Mesh;
              uVar33 = (ulonglong)((uint)uVar34 & 0x1ff);
              lVar26 = *(longlong *)
                        ((pFVar39->Vertices).Blocks.AllocatorInstance.Data +
                        ((uVar34 & 0xffffffff) >> 9) * 8);
              puVar4 = (undefined4 *)(lVar26 + uVar33 * 0x18);
              uVar40 = *puVar4;
              uVar41 = puVar4[1];
              uVar42 = puVar4[2];
              uVar43 = puVar4[3];
              local_6c0 = *(undefined8 *)(lVar26 + 0x10 + uVar33 * 0x18);
              uVar44 = (undefined4)local_6c0;
              uVar45 = (undefined4)((ulonglong)local_6c0 >> 0x20);
              local_6d0 = uVar40;
              uStack_6cc = uVar41;
              uStack_6c8 = uVar42;
              uStack_6c4 = uVar43;
LAB_14c7fea85:
              dVar8 = (double)CONCAT44(uVar45,uVar44) + dVar10;
              dVar9 = (double)CONCAT44(uVar41,uVar40) + dVar11;
              dVar7 = (double)CONCAT44(uVar43,uVar42) + dVar12;
              sVar19 = _dclass(SUB84(dVar9,0));
              if (((sVar19 < 1) && (sVar19 = _dclass(SUB84(dVar7,0)), sVar19 < 1)) &&
                 (sVar19 = _dclass(SUB84(dVar8,0)), sVar19 < 1)) {
                *(double *)(lVar26 + uVar33 * 0x18) = dVar9;
                *(double *)(lVar26 + 8 + uVar33 * 0x18) = dVar7;
                *(double *)(lVar26 + 0x10 + uVar33 * 0x18) = dVar8;
                FDynamicMesh3::UpdateChangeStamps(pFVar39,true,false);
              }
            }
          }
          else if (0 < (int)local_a38) {
            local_790 = (int)local_a38;
            local_798 = local_a40.Data;
            iVar29 = (**(code **)(this->Mesh->_padding_ + 0x48))
                               (this->Mesh,local_a44,&local_798,local_920);
            if (iVar29 == 0) {
              local_788 = &local_a44;
              local_780 = &local_91c;
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Emplace<TPairInitializer<int_const_&,int_const_&>_>
                        (&local_4d8,(TPairInitializer<int_const_&,int_const_&> *)local_880,
                         (bool *)&local_788);
              pFVar39 = this->Mesh;
              uVar33 = (ulonglong)(local_91c & 0x1ff);
              lVar26 = *(longlong *)
                        ((pFVar39->Vertices).Blocks.AllocatorInstance.Data +
                        (ulonglong)(local_91c >> 9) * 8);
              puVar4 = (undefined4 *)(lVar26 + uVar33 * 0x18);
              uVar40 = *puVar4;
              uVar41 = puVar4[1];
              uVar42 = puVar4[2];
              uVar43 = puVar4[3];
              local_6d8 = *(undefined8 *)(lVar26 + 0x10 + uVar33 * 0x18);
              uVar44 = (undefined4)local_6d8;
              uVar45 = (undefined4)((ulonglong)local_6d8 >> 0x20);
              local_6e8 = uVar40;
              uStack_6e4 = uVar41;
              uStack_6e0 = uVar42;
              uStack_6dc = uVar43;
              goto LAB_14c7fea85;
            }
          }
        }
        TStack_948.UnvisitedBitMask = TStack_948.UnvisitedBitMask & ~TStack_948._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_948);
      }
      local_a48 = true;
      if ((param_5) || (param_6)) {
        local_618._0_8_ = 0;
        local_a28 = 0;
        local_618._8_8_ = 0;
        local_5f8 = (uint *)0x0;
        local_5f0 = 0;
        local_5ec = 0x80;
        local_5e8 = 0xffffffff;
        local_5e4 = 0;
        local_5d8 = (ForElementType<FSetElementId>)0x0;
        local_5d0 = 0;
        do {
          plVar25 = (longlong *)local_7c8[local_a28];
          iVar29 = 0;
          uVar15._4_4_ = (int)plVar25[5];
          pTStack_a00 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar25 + 2);
          iStack_9f0 = 0;
          uVar21 = (uint)local_a18;
          uStack_9f4 = 0;
          if (uVar15._4_4_ != 0) {
            pTVar35 = pTStack_a00;
            if ((TBitArray<FDefaultBitArrayAllocator> *)plVar25[4] !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar35 = (TBitArray<FDefaultBitArrayAllocator> *)plVar25[4];
            }
            uVar31 = *(uint *)(pTVar35->AllocatorInstance).InlineData;
            iVar29 = 0;
            iStack_9f0 = 0;
            while (uVar31 == 0) {
              lVar26 = (longlong)iVar29;
              iStack_9f0 = iStack_9f0 + 0x20;
              iVar29 = iVar29 + 1;
              uStack_9f4 = uVar15._4_4_;
              if ((int)(uVar15._4_4_ + -1 + (uVar15._4_4_ + -1 >> 0x1f & 0x1fU)) >> 5 < iVar29)
              goto LAB_14c7fed11;
              uVar31 = *(uint *)((pTVar35->AllocatorInstance).InlineData + lVar26 * 4 + 4);
            }
            uVar21 = -uVar31 & uVar31;
            uVar33 = (ulonglong)uVar21 * 2 + 1;
            lVar26 = 0x3f;
            if (uVar33 != 0) {
              for (; uVar33 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            local_894 = (int)lVar26;
            uStack_9f4 = local_894 + -1 + iStack_9f0;
            if (uVar15._4_4_ < (int)uStack_9f4) {
              uStack_9f4 = uVar15._4_4_;
            }
          }
LAB_14c7fed11:
          uVar31 = *(uint *)(plVar25 + 5);
          local_9e8 = (int)plVar25[1] - *(int *)((longlong)plVar25 + 0x34);
          uVar30 = uVar31 & 0xffffffe0;
          uStack_a08 = CONCAT44(uVar21,iVar29);
          uStack_9f8 = 0xffffffff;
          uStack_9ec = local_63c;
          TStack_858._padding_ = uStack_a08;
          uVar15._4_4_ = (int)uVar31 >> 5;
          uStack_838 = CONCAT44(uStack_9e4,local_9e8);
          TStack_858.UnvisitedBitMask = 0xffffffff;
          TStack_858.CurrentBitIndex = uStack_9f4;
          TStack_858.BaseBitIndex = iStack_9f0;
          TStack_858._28_4_ = local_63c;
          local_a10 = plVar25;
          local_868.Value = (int *)plVar25;
          TStack_858.Array = pTStack_a00;
          if (((int)uVar31 < 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar17)) {
            pcVar6 = (code *)swi(3);
            uVar18 = (*pcVar6)();
            return (bool)uVar18;
          }
          uVar21 = *(uint *)(plVar25 + 5);
          if (uVar31 != uVar21) {
            pTVar35 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar25 + 2);
            if ((TBitArray<FDefaultBitArrayAllocator> *)plVar25[4] !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar35 = (TBitArray<FDefaultBitArrayAllocator> *)plVar25[4];
            }
            uVar31 = -1 << ((byte)uVar31 & 0x1f) &
                     *(uint *)((pTVar35->AllocatorInstance).InlineData + (longlong)uVar15._4_4_ * 4)
            ;
            while (uVar31 == 0) {
              lVar26 = (longlong)uVar15._4_4_;
              uVar30 = uVar30 + 0x20;
              uVar15._4_4_ = uVar15._4_4_ + 1;
              uVar31 = uVar21;
              if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < uVar15._4_4_)
              goto LAB_14c7fee20;
              uVar31 = *(uint *)((pTVar35->AllocatorInstance).InlineData + lVar26 * 4 + 4);
            }
            uVar33 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
            lVar26 = 0x3f;
            if (uVar33 != 0) {
              for (; uVar33 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            local_898 = (int)lVar26;
            uVar31 = (uVar30 - 1) + local_898;
            if ((int)uVar21 < (int)uVar31) {
              uVar31 = uVar21;
            }
          }
LAB_14c7fee20:
          while( true ) {
            piVar22 = local_868.Value;
            if ((int)*(longlong *)((longlong)local_868.Value + 8) -
                *(int *)((longlong)local_868.Value + 0x34) != (int)uStack_838) {
              local_a45 = 0;
              `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_a45);
            }
            uVar21 = local_5f0;
            if (((TStack_858.CurrentBitIndex == uVar31) &&
                (TStack_858.Array == (TBitArray<FDefaultBitArrayAllocator> *)(plVar25 + 2))) &&
               ((longlong *)piVar22 == plVar25)) break;
            pFVar39 = this->Mesh;
            local_994 = *(uint *)(*(longlong *)piVar22 + (longlong)TStack_858.CurrentBitIndex * 0xc)
            ;
            if (((-1 < (int)local_994) &&
                ((int)local_994 <
                 (int)((pFVar39->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                      (pFVar39->EdgeRefCounts).RefCounts.CurBlockUsed))) &&
               ((ushort)(*(short *)(*(longlong *)
                                     ((pFVar39->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.
                                      Data + (ulonglong)(local_994 >> 9) * 8) +
                                   (ulonglong)(local_994 & 0x1ff) * 2) - 1U) < 0xfffe)) {
              lVar26 = *(longlong *)
                        ((pFVar39->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(local_994 >> 9) * 8);
              puVar27 = (uint *)(lVar26 + (ulonglong)(local_994 & 0x1ff) * 0x10);
              uVar21 = *puVar27;
              uStack_88c = puVar27[1];
              uStack_888 = puVar27[2];
              uStack_884 = puVar27[3];
              uVar33 = *(ulonglong *)(lVar26 + 8 + (ulonglong)(local_994 & 0x1ff) * 0x10);
              local_890 = uVar21;
              if ((longlong)uVar33 < 0) {
                local_99c = *(uint *)(*(longlong *)
                                       (*(longlong *)&local_988->field_0x20 +
                                       ((uVar33 & 0xffffffff) >> 9) * 8) +
                                     (ulonglong)((uint)uVar33 & 0x1ff) * 4);
                if (local_618._8_4_ != local_5e4) {
                  FVar28 = (ForElementType<FSetElementId>)local_5e0;
                  if (local_5d8 != (ForElementType<FSetElementId>)0x0) {
                    FVar28 = local_5d8;
                  }
                  uVar30 = *(uint *)((longlong)FVar28 + (ulonglong)(local_5d0 - 1U & local_99c) * 4)
                  ;
                  while (uVar30 != 0xffffffff) {
                    puVar27 = (uint *)((longlong)(int)uVar30 * 0x60 + local_618._0_8_);
                    if (*puVar27 == local_99c) {
                      if (puVar27 != (uint *)0x0) goto LAB_14c7fefc1;
                      break;
                    }
                    uVar30 = puVar27[0x16];
                  }
                }
                local_8a0 = &local_99c;
                TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                ::EmplaceByHash<TKeyInitializer<int_const_&>_>
                          ((TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                            *)local_618,(uint)&local_998,
                           (TKeyInitializer<int_const_&> *)(ulonglong)local_99c,(bool *)&local_8a0);
                puVar27 = (uint *)((longlong)local_998 * 0x60 + local_618._0_8_);
LAB_14c7fefc1:
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(puVar27 + 2),
                           &local_8ac,(bool *)&local_994);
                if (param_6) {
                  if (local_4d8.Elements._8_4_ != local_4d8.Elements._52_4_) {
                    FVar28 = (ForElementType<FSetElementId>)&local_4d8.Hash;
                    if (local_4d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                      FVar28 = local_4d8.Hash.SecondaryData;
                    }
                    uVar30 = *(uint *)((longlong)FVar28 +
                                      (ulonglong)(local_4d8.HashSize - 1U & uVar21) * 4);
                    while (uVar30 != 0xffffffff) {
                      puVar27 = (uint *)((longlong)(int)uVar30 * 0x10 + local_4d8.Elements._0_8_);
                      if (*puVar27 == uVar21) {
                        puVar38 = puVar27 + 1;
                        if (puVar27 == (uint *)0x0) {
                          puVar38 = (uint *)0x0;
                        }
                        goto LAB_14c7ff052;
                      }
                      uVar30 = puVar27[2];
                    }
                  }
                  puVar38 = (uint *)0x0;
                  if (local_4d8.Elements._8_4_ != local_4d8.Elements._52_4_) {
LAB_14c7ff052:
                    FVar28 = (ForElementType<FSetElementId>)&local_4d8.Hash;
                    if (local_4d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                      FVar28 = local_4d8.Hash.SecondaryData;
                    }
                    uVar21 = *(uint *)((longlong)FVar28 +
                                      (ulonglong)(local_4d8.HashSize - 1U & uStack_88c) * 4);
                    while (uVar21 != 0xffffffff) {
                      puVar27 = (uint *)((longlong)(int)uVar21 * 0x10 + local_4d8.Elements._0_8_);
                      if (*puVar27 == uStack_88c) goto LAB_14c7ff0b0;
                      uVar21 = puVar27[2];
                    }
                  }
                  puVar27 = (uint *)0x0;
LAB_14c7ff0b0:
                  puVar36 = puVar27 + 1;
                  if (puVar27 == (uint *)0x0) {
                    puVar36 = (uint *)0x0;
                  }
                  if (((puVar38 != (uint *)0x0) && (puVar36 != (uint *)0x0)) &&
                     (local_98c = FDynamicMesh3::FindEdge(this->Mesh,*puVar38,*puVar36),
                     -1 < (int)local_98c)) {
                    lVar26 = *(longlong *)
                              ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                              (ulonglong)(local_98c >> 9) * 8);
                    puVar3 = (undefined8 *)(lVar26 + (ulonglong)(local_98c & 0x1ff) * 0x10);
                    local_6b8 = *puVar3;
                    uStack_6b0 = puVar3[1];
                    uVar33 = *(ulonglong *)(lVar26 + 8 + (ulonglong)(local_98c & 0x1ff) * 0x10);
                    if ((longlong)uVar33 < 0) {
                      local_990 = *(uint *)(*(longlong *)
                                             (*(longlong *)&local_988->field_0x20 +
                                             ((uVar33 & 0xffffffff) >> 9) * 8) +
                                           (ulonglong)((uint)uVar33 & 0x1ff) * 4);
                      this_00 = TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                                ::FindOrAddImpl<int_const_&>
                                          ((TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                                            *)local_618,local_990,(int *)&local_990);
                      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                                (this_00,local_8a8,(bool *)&local_98c);
                    }
                  }
                }
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_5c8,
                           &local_8b8,(bool *)&local_890);
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_5c8,
                           &local_8b4,(bool *)&uStack_88c);
              }
            }
            TStack_858.UnvisitedBitMask = TStack_858.UnvisitedBitMask & ~TStack_858._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_858);
          }
          local_a28 = local_a28 + 1;
        } while (local_a28 < 2);
        uVar15._4_4_ = 0;
        local_438.Elements._0_8_ = 0;
        local_438.Elements._8_8_ = 0;
        local_438.Elements._32_8_ = 0;
        local_438.Elements._40_4_ = 0;
        local_438.Elements._44_4_ = 0x80;
        local_438.Elements._48_4_ = 0xffffffff;
        local_438.Elements._52_4_ = 0;
        local_438.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_438.HashSize = 0;
        uStack_9f4 = 0;
        iStack_9f0 = uVar15._4_4_;
        if (local_5f0 == 0) {
LAB_14c7ff2a5:
          uVar31 = (uint)local_a18;
        }
        else {
          puVar27 = (uint *)(local_618 + 0x10);
          if (local_5f8 != (uint *)0x0) {
            puVar27 = local_5f8;
          }
          uVar31 = *puVar27;
          while (uVar31 == 0) {
            lVar26 = (longlong)uVar15._4_4_;
            iStack_9f0 = iStack_9f0 + 0x20;
            uVar15._4_4_ = uVar15._4_4_ + 1;
            uStack_9f4 = local_5f0;
            if ((int)((local_5f0 - 1) + ((int)(local_5f0 - 1) >> 0x1f & 0x1fU)) >> 5 < uVar15._4_4_)
            goto LAB_14c7ff2a5;
            uVar31 = (puVar27 + 1)[lVar26];
          }
          uVar31 = -uVar31 & uVar31;
          uVar33 = (ulonglong)uVar31 * 2 + 1;
          lVar26 = 0x3f;
          if (uVar33 != 0) {
            for (; uVar33 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          local_8b0 = (int)lVar26;
          uStack_9f4 = iStack_9f0 + -1 + local_8b0;
          if ((int)local_5f0 < (int)uStack_9f4) {
            uStack_9f4 = local_5f0;
          }
        }
        local_a10 = (longlong *)local_618;
        pTStack_a00 = (TBitArray<FDefaultBitArrayAllocator> *)(local_618 + 0x10);
        local_9e8 = local_618._8_4_ - local_5e4;
        uVar32 = local_5f0 & 0xffffffe0;
        uStack_9f8 = 0xffffffff;
        uVar30 = -1 << ((byte)local_5f0 & 0x1f);
        uStack_a08 = CONCAT44(uVar31,uVar15._4_4_);
        uStack_9ec = local_61c;
        TStack_828._padding_ = uStack_a08;
        uVar15._4_4_ = (int)local_5f0 >> 5;
        local_a28._4_4_ = (undefined4)((ulonglong)local_a28 >> 0x20);
        local_a28 = CONCAT44(local_a28._4_4_,uVar30);
        uStack_808 = CONCAT44(uStack_9e4,local_9e8);
        TStack_828.UnvisitedBitMask = 0xffffffff;
        TStack_828.CurrentBitIndex = uStack_9f4;
        TStack_828.BaseBitIndex = iStack_9f0;
        TStack_828._28_4_ = local_61c;
        local_830 = local_a10;
        TStack_828.Array = pTStack_a00;
        if ((int)local_5f0 < 0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L"");
          if (bVar17) {
            pcVar6 = (code *)swi(3);
            uVar18 = (*pcVar6)();
            return (bool)uVar18;
          }
          uVar30 = (uint)local_a28;
        }
        if (uVar21 != local_5f0) {
          puVar27 = (uint *)(local_618 + 0x10);
          if (local_5f8 != (uint *)0x0) {
            puVar27 = local_5f8;
          }
          uVar30 = uVar30 & puVar27[uVar15._4_4_];
          while (uVar30 == 0) {
            lVar26 = (longlong)uVar15._4_4_;
            uVar32 = uVar32 + 0x20;
            uVar15._4_4_ = uVar15._4_4_ + 1;
            uVar21 = local_5f0;
            if ((int)((local_5f0 - 1) + ((int)(local_5f0 - 1) >> 0x1f & 0x1fU)) >> 5 < uVar15._4_4_)
            goto LAB_14c7ff3f0;
            uVar30 = (puVar27 + 1)[lVar26];
          }
          uVar33 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
          lVar26 = 0x3f;
          if (uVar33 != 0) {
            for (; uVar33 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          uVar21 = (uVar32 - 1) + (int)lVar26;
          if ((int)local_5f0 < (int)uVar21) {
            uVar21 = local_5f0;
          }
        }
LAB_14c7ff3f0:
        while( true ) {
          plVar25 = local_830;
          if ((int)local_830[1] - *(int *)((longlong)local_830 + 0x34) != (int)uStack_808) {
            `TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_a2c);
          }
          lVar26 = (longlong)TStack_828.CurrentBitIndex;
          if (((TStack_828.CurrentBitIndex == uVar21) &&
              (TStack_828.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_618 + 0x10))) &&
             (plVar25 == (longlong *)local_618)) break;
          lVar5 = *plVar25;
          uVar15._4_4_ = *(int *)(lVar26 * 0x60 + lVar5);
          if (((param_5) || (param_4 <= uVar15._4_4_)) && ((param_6 || (uVar15._4_4_ < param_4)))) {
            iVar29 = (this->OpenBoundaries).ArrayNum;
            piVar22 = &(this->OpenBoundaries).ArrayMax;
            if (iVar29 == *piVar22) {
              iVar29 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x830,&(this->OpenBoundaries).AllocatorInstance,piVar22);
            }
            (this->OpenBoundaries).ArrayNum = iVar29 + 1;
            pFVar37 = (FOpenBoundary *)
                      ((this->OpenBoundaries).AllocatorInstance.Data + (longlong)iVar29 * 0x30);
            *(undefined4 *)&pFVar37->field_0x2a = 0;
            *(undefined2 *)&pFVar37->field_0x2e = 0;
            pFVar37->NormalSign = 1.0;
            (pFVar37->CutLoops).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar37->CutLoops).ArrayNum = 0;
            (pFVar37->CutLoops).ArrayMax = 0;
            (pFVar37->CutSpans).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar37->CutSpans).ArrayNum = 0;
            (pFVar37->CutSpans).ArrayMax = 0;
            pFVar37->CutLoopsFailed = false;
            pFVar37->FoundOpenSpans = false;
            pFVar37->Label = uVar15._4_4_;
            if (param_4 <= uVar15._4_4_) {
              pFVar37->NormalSign = -1.0;
            }
            bVar17 = ExtractBoundaryLoops
                               (this,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                                     (lVar5 + 8 + lVar26 * 0x60),&local_438,pFVar37);
            if ((!bVar17) || (bVar17 = local_a48 == false, local_a48 = true, bVar17)) {
              local_a48 = false;
            }
          }
          TStack_828.UnvisitedBitMask = TStack_828.UnvisitedBitMask & ~TStack_828._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_828);
        }
        local_438.HashSize = 0;
        if (local_438.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_438.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_438.Elements);
        local_5d0 = 0;
        if (local_5d8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_5d8);
        }
        TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_618);
      }
      if (local_a40.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a40.Data);
      }
      local_580 = 0;
      if (local_588 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_588);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_5c8);
      local_4d8.HashSize = 0;
      if (local_4d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_4d8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_4d8.Elements);
      local_488.HashSize = 0;
      if (local_488.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_488.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_488.Elements);
    }
  }
  else {
    local_a48 = true;
  }
  local_530 = 0;
  if (local_538 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_538);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_578);
  local_4e0 = 0;
  if (local_4e8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_4e8);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_528);
  if (local_9c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9c0.AllocatorInstance.Data);
  }
  return local_a48;
}

// ExtractBoundaryLoops @ 14c802af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c802bcc) */
/* WARNING: Removing unreachable block (ram,0x00014c802bdd) */
/* WARNING: Removing unreachable block (ram,0x00014c802be1) */

bool __thiscall
UE::Geometry::FMeshPlaneCut::ExtractBoundaryLoops
          (FMeshPlaneCut *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,FOpenBoundary *param_3)

{
  TArray<UE::Geometry::FEdgeLoop,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<UE::Geometry::FEdgeSpan,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  bool bVar6;
  longlong *plVar7;
  undefined1 auStackY_138 [32];
  undefined1 local_f8 [80];
  undefined4 local_a8;
  undefined4 uStack_a4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTStack_a0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_98;
  longlong *plStack_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  bool local_78;
  ForAnyElementType local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_f8._0_8_ = this->Mesh;
  local_98 = param_2;
  plStack_90 = (longlong *)0x0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80._0_4_ = 0;
  local_80._4_4_ = 0;
  local_78 = false;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  local_a8 = 0x528caed8;
  uStack_a4 = 1;
  pTStack_a0 = param_1;
  local_58 = 0;
  uStack_30 = 0;
  uStack_30 = 0;
  local_58 = 0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_78 = false;
  local_80._0_4_ = 0;
  local_80._4_4_ = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  plStack_90 = (longlong *)0x0;
  uStack_a4 = 1;
  local_a8 = 0x528caed8;
  local_f8._64_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FMeshPlaneCut::ExtractBoundaryLoops'::__l2::<lambda_1>,bool,int>
       ::Call;
  local_f8._48_4_ = ConvertToOpenSpan;
  local_f8._44_4_ = Compute;
  local_f8[0x2a] = false;
  local_f8[0x28] = false;
  local_f8[0x29] = false;
  local_f8._32_4_ = 0;
  local_f8._36_4_ = 0;
  local_f8._24_8_ = (FEdgeSpan *)0x0;
  local_f8._16_4_ = 0;
  local_f8._20_4_ = 0;
  local_f8._8_8_ = (FEdgeLoop *)0x0;
  pTVar1 = &param_3->CutLoops;
  bVar6 = FMeshBoundaryLoops::Compute((FMeshBoundaryLoops *)local_f8);
  if (bVar6) {
    if (pTVar1 != (TArray<UE::Geometry::FEdgeLoop,TSizedDefaultAllocator<32>_> *)(local_f8 + 8)) {
      DestructItems<UE::Geometry::FEdgeLoop,int>
                ((FEdgeLoop *)(pTVar1->AllocatorInstance).Data,(param_3->CutLoops).ArrayNum);
      uVar4 = local_f8._8_8_;
      uVar5 = local_f8._16_4_;
      piVar2 = &(param_3->CutLoops).ArrayMax;
      (param_3->CutLoops).ArrayNum = local_f8._16_4_;
      if ((local_f8._16_4_ == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,local_f8._16_4_,*piVar2,&pTVar1->AllocatorInstance,local_f8._16_4_,piVar2)
        ;
        ConstructItems<UE::Geometry::FEdgeLoop,UE::Geometry::FEdgeLoop,int>
                  ((pTVar1->AllocatorInstance).Data,(FEdgeLoop *)uVar4,uVar5);
      }
    }
    pTVar3 = &param_3->CutSpans;
    if (pTVar3 != (TArray<UE::Geometry::FEdgeSpan,TSizedDefaultAllocator<32>_> *)(local_f8 + 0x18))
    {
      DestructItems<UE::Geometry::FEdgeSpan,int>
                ((FEdgeSpan *)(pTVar3->AllocatorInstance).Data,(param_3->CutSpans).ArrayNum);
      uVar4 = local_f8._24_8_;
      uVar5 = local_f8._32_4_;
      piVar2 = &(param_3->CutSpans).ArrayMax;
      (param_3->CutSpans).ArrayNum = local_f8._32_4_;
      if ((local_f8._32_4_ == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,local_f8._32_4_,*piVar2,&pTVar3->AllocatorInstance,local_f8._32_4_,piVar2)
        ;
        ConstructItems<UE::Geometry::FEdgeSpan,UE::Geometry::FEdgeSpan,int>
                  ((pTVar3->AllocatorInstance).Data,(FEdgeSpan *)uVar4,uVar5);
      }
    }
    param_3->FoundOpenSpans = 0 < (param_3->CutSpans).ArrayNum;
    bVar6 = false;
  }
  else {
    DestructItems<UE::Geometry::FEdgeLoop,int>
              ((FEdgeLoop *)(pTVar1->AllocatorInstance).Data,(param_3->CutLoops).ArrayNum);
    piVar2 = &(param_3->CutLoops).ArrayMax;
    (param_3->CutLoops).ArrayNum = 0;
    if (*piVar2 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
    bVar6 = true;
  }
  param_3->CutLoopsFailed = bVar6;
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if ((code *)local_f8._64_8_ != (code *)0x0) {
    plVar7 = (longlong *)&local_a8;
    if (plStack_90 != (longlong *)0x0) {
      plVar7 = plStack_90;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  DestructItems<UE::Geometry::FEdgeSpan,int>((FEdgeSpan *)local_f8._24_8_,local_f8._32_4_);
  if ((FEdgeSpan *)local_f8._24_8_ != (FEdgeSpan *)0x0) {
    FMemory::Free((void *)local_f8._24_8_);
  }
  DestructItems<UE::Geometry::FEdgeLoop,int>((FEdgeLoop *)local_f8._8_8_,local_f8._16_4_);
  if ((FEdgeLoop *)local_f8._8_8_ != (FEdgeLoop *)0x0) {
    FMemory::Free((void *)local_f8._8_8_);
  }
  return (bool)(bVar6 ^ 1);
}

// HoleFill @ 14c812630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FMeshPlaneCut::HoleFill
          (FMeshPlaneCut *this,
          TFunction<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>___cdecl(UE::Geometry::TGeneralPolygon2<double>_const_&)>
          *param_1,bool param_2,int param_3,int param_4)

{
  int *piVar1;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar2;
  uint *puVar3;
  double dVar4;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  undefined1 uVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  FDynamicMeshAttributeSet *pFVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  FDynamicMesh3 *pFVar22;
  longlong *plVar23;
  uint uVar24;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar25;
  ForAnyElementType FVar27;
  FScriptContainerElement *pFVar28;
  FScriptContainerElement *pFVar29;
  longlong lVar30;
  longlong lVar31;
  undefined1 auStackY_2a8 [32];
  bool local_258;
  undefined1 local_257;
  undefined1 local_256;
  char local_255;
  undefined1 local_254;
  undefined1 local_253 [3];
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_250;
  FScriptContainerElement *local_240;
  int local_238;
  uint local_234;
  FDynamicMeshEditor local_230;
  FMeshPlaneCut *local_228;
  FScriptContainerElement *local_220;
  TFunction<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>___cdecl(UE::Geometry::TGeneralPolygon2<double>_const_&)>
  *local_218;
  TVector<float>_u_0 local_210;
  TVector2<float>_u_0 local_204;
  FScriptContainerElement *local_1f8;
  longlong local_1e8;
  longlong local_1d8 [3];
  longlong *local_1c0;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_1a0;
  TQuaternion<double>_u_0 local_188;
  TVector<double>_u_0 local_168;
  undefined1 local_148 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_140;
  FDynamicMesh3 *local_130;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_128;
  longlong local_118;
  longlong local_108 [3];
  longlong *local_f0;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  ulonglong local_b8;
  FDynamicMeshAttributeSet *pFVar26;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_258 = true;
  local_255 = param_2;
  local_238 = param_3;
  local_228 = this;
  local_218 = param_1;
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->HoleFillTriangles).AllocatorInstance.Data,(this->HoleFillTriangles).ArrayNum);
  piVar1 = &(this->HoleFillTriangles).ArrayMax;
  (this->HoleFillTriangles).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->HoleFillTriangles).AllocatorInstance,0,piVar1);
  }
  dVar12 = __real_3ff0000000000000;
  local_234 = (this->OpenBoundaries).ArrayNum;
  uVar20 = (ulonglong)(int)local_234;
  pFVar29 = (this->OpenBoundaries).AllocatorInstance.Data;
  pFVar28 = pFVar29 + 0x20;
  local_1f8 = pFVar29 + uVar20 * 0x30;
  while( true ) {
    pFVar13 = local_1f8;
    local_240 = pFVar28;
    local_220 = pFVar29;
    if ((this->OpenBoundaries).ArrayNum != (int)uVar20) {
      local_257 = 0;
      `TCheckedPointerIterator<UE::Geometry::FMeshPlaneCut::FOpenBoundary,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(&local_257);
    }
    if (pFVar29 == pFVar13) {
      if (*(longlong *)param_1 != 0) {
        plVar23 = (longlong *)&param_1->field_0x10;
        if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
          plVar23 = *(longlong **)&param_1->field_0x28;
        }
        (**(code **)(*plVar23 + 0x10))();
      }
      return local_258;
    }
    lVar31 = *(longlong *)(pFVar28 + -0x18);
    iVar18 = *(int *)(pFVar28 + -0x10);
    local_250.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    lVar30 = (longlong)iVar18 * 0x40 + lVar31;
    local_250.ArrayNum = 0;
    local_250.ArrayMax = 0;
    pTVar25 = (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar31 + 8);
    iVar17 = 0;
    while( true ) {
      if (*(int *)(pFVar28 + -0x10) != iVar18) {
        local_256 = 0;
        `TCheckedPointerIterator<UE::Geometry::FEdgeLoop,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_256);
        iVar17 = local_250.ArrayNum;
      }
      if (lVar31 == lVar30) break;
      if ((local_250.AllocatorInstance.Data <= pTVar25) &&
         (pTVar25 < (TArray<int,TSizedDefaultAllocator<32>_> *)
                    (local_250.AllocatorInstance.Data + (longlong)local_250.ArrayMax * 0x10))) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar6 = (code *)swi(3);
          uVar15 = (*pcVar6)();
          return (bool)uVar15;
        }
        iVar17 = local_250.ArrayNum;
      }
      if (iVar17 == local_250.ArrayMax) {
        iVar17 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_250.AllocatorInstance,&local_250.ArrayMax);
      }
      local_250.ArrayNum = iVar17 + 1;
      pFVar29 = local_250.AllocatorInstance.Data + (longlong)iVar17 * 0x10;
      *(FScriptContainerElement **)&pFVar29->field_0x0 = (FScriptContainerElement *)0x0;
      iVar17 = pTVar25->ArrayNum;
      pFVar28 = (pTVar25->AllocatorInstance).Data;
      *(int *)(pFVar29 + 8) = iVar17;
      if (iVar17 == 0) {
        *(int *)(pFVar29 + 0xc) = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar17,0,(ForAnyElementType *)pFVar29,iVar17,(int *)(pFVar29 + 0xc));
        memcpy(*(FScriptContainerElement **)&pFVar29->field_0x0,pFVar28,(longlong)iVar17 << 2);
      }
      lVar31 = lVar31 + 0x40;
      pTVar25 = pTVar25 + 4;
      pFVar28 = local_240;
      iVar17 = local_250.ArrayNum;
    }
    if (local_255 != '\0') {
      lVar31 = *(longlong *)(pFVar28 + -8);
      iVar18 = *(int *)pFVar28;
      lVar30 = (longlong)iVar18 * 0x40 + lVar31;
      pTVar25 = (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar31 + 8);
      while( true ) {
        if (*(int *)pFVar28 != iVar18) {
          local_254 = 0;
          `TCheckedPointerIterator<UE::Geometry::FEdgeSpan,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_254);
          iVar17 = local_250.ArrayNum;
        }
        if (lVar31 == lVar30) break;
        if ((local_250.AllocatorInstance.Data <= pTVar25) &&
           (pTVar25 < (TArray<int,TSizedDefaultAllocator<32>_> *)
                      (local_250.AllocatorInstance.Data + (longlong)local_250.ArrayMax * 0x10))) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar14) {
            pcVar6 = (code *)swi(3);
            uVar15 = (*pcVar6)();
            return (bool)uVar15;
          }
          iVar17 = local_250.ArrayNum;
        }
        if (iVar17 == local_250.ArrayMax) {
          iVar17 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_250.AllocatorInstance,&local_250.ArrayMax);
        }
        local_250.ArrayNum = iVar17 + 1;
        pFVar29 = local_250.AllocatorInstance.Data + (longlong)iVar17 * 0x10;
        *(FScriptContainerElement **)&pFVar29->field_0x0 = (FScriptContainerElement *)0x0;
        iVar17 = pTVar25->ArrayNum;
        pFVar28 = (pTVar25->AllocatorInstance).Data;
        *(int *)(pFVar29 + 8) = iVar17;
        if (iVar17 == 0) {
          *(int *)(pFVar29 + 0xc) = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar17,0,(ForAnyElementType *)pFVar29,iVar17,(int *)(pFVar29 + 0xc));
          memcpy(*(FScriptContainerElement **)&pFVar29->field_0x0,pFVar28,(longlong)iVar17 << 2);
        }
        lVar31 = lVar31 + 0x40;
        pTVar25 = pTVar25 + 4;
        pFVar28 = local_240;
        iVar17 = local_250.ArrayNum;
      }
    }
    this = local_228;
    dVar7 = (double)*(float *)(pFVar28 + -0x1c);
    local_1c0 = (longlong *)0x0;
    local_1e8 = *(longlong *)local_218;
    dVar4 = (local_228->PlaneOrigin).field0_0x0._s_0.Z;
    dVar8 = dVar7 * (local_228->PlaneNormal).field0_0x0._s_0.X;
    dVar9 = dVar7 * (local_228->PlaneNormal).field0_0x0._s_0.Y;
    dVar7 = dVar7 * (local_228->PlaneNormal).field0_0x0._s_0.Z;
    local_1b8._s_0.X = dVar8;
    local_1b8._s_0.Y = dVar9;
    dVar10 = (local_228->PlaneOrigin).field0_0x0._s_0.X;
    dVar11 = (local_228->PlaneOrigin).field0_0x0._s_0.Y;
    local_1b8._s_0.Z = dVar7;
    if (local_1e8 != 0) {
      puVar21 = *(undefined8 **)&local_218->field_0x28;
      if (*(undefined8 **)&local_218->field_0x28 == (undefined8 *)0x0) {
        puVar21 = (undefined8 *)&local_218->field_0x10;
      }
      (**(code **)*puVar21)(puVar21,local_1d8);
    }
    local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148 = (undefined1  [8])&___7FPlanarHoleFiller_Geometry_UE__6B_;
    pFVar22 = this->Mesh;
    local_130 = pFVar22;
    local_140.ArrayNum = 0;
    local_140.ArrayMax = 0;
    local_128 = &local_250;
    local_118 = local_1e8;
    local_f0 = (longlong *)0x0;
    if (local_1e8 != 0) {
      plVar23 = local_1d8;
      if (local_1c0 != (longlong *)0x0) {
        plVar23 = local_1c0;
      }
      (**(code **)*plVar23)(plVar23,local_108);
      pFVar22 = this->Mesh;
    }
    local_d0._s_0.X = dVar8;
    local_d0._s_0.Y = dVar9;
    local_d0._s_0.Z = dVar7;
    local_e8._s_0.X = dVar10;
    local_e8._s_0.Y = dVar11;
    local_e8._s_0.Z = dVar4;
    if (local_1e8 != 0) {
      plVar23 = local_1d8;
      if (local_1c0 != (longlong *)0x0) {
        plVar23 = local_1c0;
      }
      (**(code **)(*plVar23 + 0x10))();
      pFVar22 = this->Mesh;
    }
    iVar18 = local_238;
    if (local_238 < 0) {
      iVar18 = pFVar22->GroupIDCounter;
      pFVar22->GroupIDCounter = iVar18 + 1;
    }
    bVar14 = FPlanarHoleFiller::Fill((FPlanarHoleFiller *)local_148,iVar18);
    if ((this->Mesh->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
      local_210._s_0.X = (float)dVar8;
      local_210._s_0.Y = (float)dVar9;
      local_210._s_0.Z = (float)dVar7;
      local_230.Mesh = this->Mesh;
      FDynamicMeshEditor::SetTriangleNormals
                (&local_230,(TArray<int,TSizedDefaultAllocator<32>_> *)(local_148 + 8),
                 (TVector<float> *)&local_210._s_0);
      local_1a0._s_0.X = (this->PlaneOrigin).field0_0x0._s_0.X;
      local_1a0._s_0.Y = (this->PlaneOrigin).field0_0x0._s_0.Y;
      local_1a0._s_0.Z = (this->PlaneOrigin).field0_0x0._s_0.Z;
      local_188._s_0.X = 0.0;
      local_168._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      local_168._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      local_168._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      local_188._s_0.W = dVar12;
      local_188._s_0.Y = 0.0;
      local_188._s_0.Z = 0.0;
      TQuaternion<double>::SetFromTo
                ((TQuaternion<double> *)&local_188._s_0,(TVector<double> *)&local_168._s_0,
                 (TVector<double> *)&local_1b8._s_0);
      iVar18 = (**(code **)(((this->Mesh->AttributeSet).Ptr)->_padding_ + 0xa8))();
      pFVar26 = (FDynamicMeshAttributeSet *)0x0;
      if (0 < iVar18) {
        do {
          local_204 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          FDynamicMeshEditor::SetTriangleUVsFromProjection
                    (&local_230,(TArray<int,TSizedDefaultAllocator<32>_> *)(local_148 + 8),
                     (TFrame3<double> *)&local_1a0._s_0,this->UVScaleFactor,
                     (TVector2<float> *)&local_204._s_0,true,(int)pFVar26);
          uVar24 = (int)pFVar26 + 1;
          pFVar26 = (FDynamicMeshAttributeSet *)(ulonglong)uVar24;
        } while ((int)uVar24 < iVar18);
      }
      pFVar28 = local_240;
      if (-1 < param_4) {
        pFVar26 = (this->Mesh->AttributeSet).Ptr;
        pFVar19 = (FDynamicMeshAttributeSet *)0x0;
        if (pFVar26 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar19 = pFVar26;
        }
        if ((pFVar19->MaterialIDAttrib).Ptr != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
          pTVar5 = (pFVar26->MaterialIDAttrib).Ptr;
          iVar18 = local_140.ArrayNum;
          uVar20 = (ulonglong)local_140.ArrayNum;
          puVar3 = (uint *)((longlong)local_140.AllocatorInstance.Data + uVar20 * 4);
          FVar27.Data = local_140.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar20 != iVar18) {
              local_253[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_253);
            }
            this = local_228;
            pFVar28 = local_240;
            if (FVar27.Data == (FScriptContainerElement *)puVar3) break;
            uVar24 = *(uint *)FVar27.Data;
            FVar27.Data = FVar27.Data + 4;
            *(int *)(*(longlong *)(*(longlong *)&pTVar5->field_0x20 + (ulonglong)(uVar24 >> 9) * 8)
                    + (ulonglong)(uVar24 & 0x1ff) * 4) = param_4;
            uVar20 = local_140._8_8_ & 0xffffffff;
          }
        }
      }
    }
    pTVar2 = &this->HoleFillTriangles;
    pFVar29 = (pTVar2->AllocatorInstance).Data;
    piVar1 = &(this->HoleFillTriangles).ArrayMax;
    if (((pFVar29 <= (FScriptContainerElement *)(local_148 + 8)) &&
        ((FScriptContainerElement *)(local_148 + 8) < pFVar29 + (longlong)*piVar1 * 0x10)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar16)) break;
    iVar18 = (this->HoleFillTriangles).ArrayNum;
    if (iVar18 == *piVar1) {
      iVar18 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    lVar31 = (longlong)iVar18;
    (this->HoleFillTriangles).ArrayNum = iVar18 + 1;
    pFVar29 = (pTVar2->AllocatorInstance).Data;
    *(undefined8 *)(pFVar29 + lVar31 * 0x10) = 0;
    *(FScriptContainerElement **)(pFVar29 + lVar31 * 0x10) = local_140.AllocatorInstance.Data;
    local_140.AllocatorInstance.Data = (void *)0x0;
    *(int *)(pFVar29 + lVar31 * 0x10 + 8) = local_140.ArrayNum;
    *(int *)(pFVar29 + lVar31 * 0x10 + 0xc) = local_140.ArrayMax;
    local_140.ArrayNum = 0;
    local_140.ArrayMax = 0;
    if ((local_258 == false) || (!bVar14)) {
      local_258 = false;
    }
    else {
      local_258 = true;
    }
    local_148 = (undefined1  [8])&___7FPlanarHoleFiller_Geometry_UE__6B_;
    if (local_118 != 0) {
      plVar23 = local_108;
      if (local_f0 != (longlong *)0x0) {
        plVar23 = local_f0;
      }
      (**(code **)(*plVar23 + 0x10))();
    }
    if (local_140.AllocatorInstance.Data != (void *)0x0) {
      FMemory::Free(local_140.AllocatorInstance.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_250.AllocatorInstance.Data,
               local_250.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_250.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_250.AllocatorInstance.Data);
    }
    pFVar29 = local_220 + 0x30;
    pFVar28 = pFVar28 + 0x30;
    uVar20 = (ulonglong)local_234;
    param_1 = local_218;
  }
  pcVar6 = (code *)swi(3);
  uVar15 = (*pcVar6)();
  return (bool)uVar15;
}

// MinimalHoleFill @ 14c81b340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall UE::Geometry::FMeshPlaneCut::MinimalHoleFill(FMeshPlaneCut *this,int param_1)

{
  float fVar1;
  void *pvVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  ForAnyElementType FVar6;
  undefined8 *puVar7;
  FScriptContainerElement *pFVar8;
  TUniquePtr<UE::Geometry::FMeshRegionOperator,TDefaultDelete<UE::Geometry::FMeshRegionOperator>_>
  TVar9;
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  undefined8 *puVar17;
  FScriptContainerElement *pFVar18;
  int *piVar19;
  undefined1 auStackY_2e8 [32];
  bool local_2a8;
  undefined1 local_2a7;
  undefined1 local_2a6 [6];
  FDynamicMesh3 *local_2a0;
  ForAnyElementType local_298;
  int local_290;
  int local_28c;
  ForAnyElementType local_288;
  int local_280;
  int local_27c;
  ForAnyElementType local_278;
  int local_270;
  int local_26c;
  undefined1 local_268;
  int local_260;
  uint local_25c;
  uint local_258;
  FScriptContainerElement *local_250;
  FDynamicMeshEditor local_248;
  FScriptContainerElement *local_240;
  TVector<float>_u_0 local_238;
  FScriptContainerElement *local_228;
  TVector2<float>_u_0 local_220;
  undefined8 *local_218;
  int *local_210;
  FScriptContainerElement *local_208;
  TVector<double>_u_0 local_200;
  TQuaternion<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1c8;
  undefined1 local_1a8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_1a0;
  undefined2 local_190;
  bool local_18e;
  double local_188;
  FDynamicMesh3 *local_180;
  FDynamicMesh3 *local_178;
  ForAnyElementType local_170;
  int local_168;
  int local_164;
  ForAnyElementType local_160;
  int local_158;
  int local_154;
  ForAnyElementType local_150;
  int local_148;
  int local_144;
  bool local_140;
  TUniquePtr<UE::Geometry::FMeshRegionOperator,TDefaultDelete<UE::Geometry::FMeshRegionOperator>_>
  local_138;
  FDynamicMesh3 *pFStack_130;
  ForAnyElementType local_128;
  undefined8 local_120;
  TBitArray<FDefaultBitArrayAllocator> local_118;
  undefined4 local_f8;
  undefined4 local_f4;
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  TBitArray<FDefaultBitArrayAllocator> local_c8;
  undefined4 local_a8;
  undefined4 local_a4;
  void *local_98;
  undefined4 local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  bVar10 = true;
  local_2a8 = true;
  local_260 = param_1;
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->HoleFillTriangles).AllocatorInstance.Data,(this->HoleFillTriangles).ArrayNum);
  piVar19 = &(this->HoleFillTriangles).ArrayMax;
  (this->HoleFillTriangles).ArrayNum = 0;
  local_210 = piVar19;
  if (*piVar19 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->HoleFillTriangles).AllocatorInstance,0,piVar19);
  }
  dVar5 = __real_3f1a36e2eb1c432d;
  dVar4 = __real_3ff0000000000000;
  local_258 = (this->OpenBoundaries).ArrayNum;
  uVar14 = (ulonglong)(int)local_258;
  pFVar18 = (this->OpenBoundaries).AllocatorInstance.Data;
  pFVar15 = pFVar18 + 0x10;
  local_208 = pFVar18 + uVar14 * 0x30;
  do {
    pFVar8 = local_208;
    local_250 = pFVar15;
    local_240 = pFVar18;
    if ((this->OpenBoundaries).ArrayNum != (int)uVar14) {
      local_2a7 = 0;
      `TCheckedPointerIterator<UE::Geometry::FMeshPlaneCut::FOpenBoundary,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(&local_2a7);
    }
    if (pFVar18 == pFVar8) {
      return bVar10;
    }
    iVar13 = (this->HoleFillTriangles).ArrayNum;
    if (iVar13 == *piVar19) {
      iVar13 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&(this->HoleFillTriangles).AllocatorInstance,piVar19);
    }
    (this->HoleFillTriangles).ArrayNum = iVar13 + 1;
    local_228 = (this->HoleFillTriangles).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
    *(undefined8 *)&local_228->field_0x0 = 0;
    *(undefined8 *)&local_228[8].field_0x0 = 0;
    local_200._s_0.X = (this->PlaneOrigin).field0_0x0._s_0.X;
    local_200._s_0.Y = (this->PlaneOrigin).field0_0x0._s_0.Y;
    local_200._s_0.Z = (this->PlaneOrigin).field0_0x0._s_0.Z;
    local_1e8._s_0.X = 0.0;
    local_1c8._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_1c8._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    local_1c8._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_1e8._s_0.W = dVar4;
    local_1e8._s_0.Y = 0.0;
    local_1e8._s_0.Z = 0.0;
    TQuaternion<double>::SetFromTo
              ((TQuaternion<double> *)&local_1e8._s_0,(TVector<double> *)&local_1c8._s_0,
               &this->PlaneNormal);
    local_25c = *(uint *)pFVar15;
    uVar14 = (ulonglong)(int)local_25c;
    puVar17 = *(undefined8 **)(pFVar15 + -8);
    local_218 = puVar17 + uVar14 * 8;
    piVar19 = (int *)(puVar17 + 4);
    while( true ) {
      puVar7 = local_218;
      if (*(int *)pFVar15 != (int)uVar14) {
        local_2a6[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::FEdgeLoop,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_2a6);
      }
      if (puVar17 == puVar7) break;
      local_290 = piVar19[-4];
      lVar16 = (longlong)local_290;
      local_2a0 = (FDynamicMesh3 *)*puVar17;
      pvVar2 = *(void **)(piVar19 + -6);
      local_298.Data = (FScriptContainerElement *)0x0;
      if (local_290 == 0) {
        local_28c = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_290,0,&local_298,local_290,&local_28c);
        memcpy(local_298.Data,pvVar2,lVar16 << 2);
      }
      local_280 = *piVar19;
      lVar16 = (longlong)local_280;
      pvVar2 = *(void **)(piVar19 + -2);
      local_288.Data = (FScriptContainerElement *)0x0;
      if (local_280 == 0) {
        local_27c = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_280,0,&local_288,local_280,&local_27c);
        memcpy(local_288.Data,pvVar2,lVar16 << 2);
      }
      local_270 = piVar19[4];
      lVar16 = (longlong)local_270;
      pvVar2 = *(void **)(piVar19 + 2);
      local_278.Data = (FScriptContainerElement *)0x0;
      if (local_270 == 0) {
        local_26c = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_270,0,&local_278,local_270,&local_26c);
        memcpy(local_278.Data,pvVar2,lVar16 << 2);
      }
      iVar13 = local_290;
      FVar6.Data = local_298.Data;
      local_268 = (undefined1)piVar19[6];
      local_1a8 = (undefined1  [8])&___7FMinimalHoleFiller_Geometry_UE__6B_;
      local_180 = this->Mesh;
      local_178 = local_2a0;
      local_188 = dVar5;
      local_1a0.AllocatorInstance.Data = (void *)0x0;
      local_1a0.ArrayNum = 0;
      local_1a0.ArrayMax = 0;
      local_190._0_1_ = false;
      local_190._1_1_ = true;
      local_18e = true;
      local_170.Data = (FScriptContainerElement *)0x0;
      local_168 = local_290;
      if (local_290 == 0) {
        local_164 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_290,0,&local_170,local_290,&local_164);
        memcpy(local_170.Data,FVar6.Data,(longlong)iVar13 << 2);
      }
      iVar13 = local_280;
      FVar6.Data = local_288.Data;
      local_160.Data = (FScriptContainerElement *)0x0;
      local_158 = local_280;
      if (local_280 == 0) {
        local_154 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_280,0,&local_160,local_280,&local_154);
        memcpy(local_160.Data,FVar6.Data,(longlong)iVar13 << 2);
      }
      iVar13 = local_270;
      FVar6.Data = local_278.Data;
      local_150.Data = (FScriptContainerElement *)0x0;
      local_148 = local_270;
      if (local_270 == 0) {
        local_144 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_270,0,&local_150,local_270,&local_144);
        memcpy(local_150.Data,FVar6.Data,(longlong)iVar13 << 2);
      }
      local_128.Data = (FScriptContainerElement *)0x0;
      local_118.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_118.NumBits = 0;
      local_f4 = 0;
      local_e8 = (ForElementType<FSetElementId>)0x0;
      local_e0 = 0;
      local_d8.Data = (FScriptContainerElement *)0x0;
      local_c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_c8.NumBits = 0;
      local_a4 = 0;
      local_98 = (void *)0x0;
      local_90 = 0;
      local_88.Data = (FScriptContainerElement *)0x0;
      local_140 = (bool)local_268;
      local_138.Ptr = (FMeshRegionOperator *)0x0;
      pFStack_130 = (FDynamicMesh3 *)0x0;
      local_120 = 0;
      local_118.MaxBits = 0x80;
      local_f8 = 0xffffffff;
      local_d0 = 0;
      local_c8.MaxBits = 0x80;
      local_a8 = 0xffffffff;
      local_80._0_4_ = 0;
      local_80._4_4_ = 0;
      if (local_278.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data);
      }
      if (local_288.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.Data);
      }
      if (local_298.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data);
      }
      iVar13 = local_260;
      if (local_260 < 0) {
        iVar13 = this->Mesh->GroupIDCounter;
        this->Mesh->GroupIDCounter = iVar13 + 1;
      }
      bVar10 = FMinimalHoleFiller::Fill((FMinimalHoleFiller *)local_1a8,iVar13);
      pFVar15 = local_228;
      if ((bVar10) && (local_2a8 != false)) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
      if ((local_228 == (FScriptContainerElement *)(local_1a8 + 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        uVar12 = (*pcVar3)();
        return (bool)uVar12;
      }
      lVar16 = (longlong)local_1a0.ArrayNum;
      if (local_1a0.ArrayNum != 0) {
        iVar13 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,local_1a0.ArrayNum,(ForAnyElementType *)pFVar15,(int *)(pFVar15 + 8)
                            ,(int *)(pFVar15 + 0xc));
        memcpy((void *)(*(longlong *)&pFVar15->field_0x0 + (longlong)iVar13 * 4),
               local_1a0.AllocatorInstance.Data,lVar16 << 2);
      }
      if ((this->Mesh->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
        fVar1 = *(float *)(local_250 + -0xc);
        local_238._s_0.X = (float)(this->PlaneNormal).field0_0x0._s_0.X * fVar1;
        local_238._s_0.Y = (float)(this->PlaneNormal).field0_0x0._s_0.Y * fVar1;
        local_238._s_0.Z = (float)(this->PlaneNormal).field0_0x0._s_0.Z * fVar1;
        local_248.Mesh = this->Mesh;
        FDynamicMeshEditor::SetTriangleNormals
                  (&local_248,(TArray<int,TSizedDefaultAllocator<32>_> *)(local_1a8 + 8),
                   (TVector<float> *)&local_238._s_0);
        local_220 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        FDynamicMeshEditor::SetTriangleUVsFromProjection
                  (&local_248,(TArray<int,TSizedDefaultAllocator<32>_> *)(local_1a8 + 8),
                   (TFrame3<double> *)&local_200._s_0,this->UVScaleFactor,
                   (TVector2<float> *)&local_220._s_0,true,0);
      }
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data);
      }
      local_90 = 0;
      if (local_98 != (void *)0x0) {
        FMemory::Free(local_98);
      }
      bVar11 = local_d0._4_4_ != 0;
      local_d0 = (ulonglong)local_d0._4_4_ << 0x20;
      if (bVar11) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&local_d8,0,(int *)((longlong)&local_d0 + 4));
      }
      local_a8 = 0xffffffff;
      local_a4 = 0;
      local_c8.NumBits = 0;
      if (0x80 < (uint)local_c8.MaxBits) {
        local_c8.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_c8,0);
      }
      if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
      }
      if (local_d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data);
      }
      local_e0 = 0;
      if (local_e8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_e8);
      }
      bVar11 = local_120._4_4_ != 0;
      local_120 = (ulonglong)local_120._4_4_ << 0x20;
      if (bVar11) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,&local_128,0,(int *)((longlong)&local_120 + 4));
      }
      local_f8 = 0xffffffff;
      local_f4 = 0;
      local_118.NumBits = 0;
      if (0x80 < (uint)local_118.MaxBits) {
        local_118.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_118,0);
      }
      if (local_118.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_118.AllocatorInstance.SecondaryData);
      }
      if (local_128.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data);
      }
      TVar9.Ptr = local_138.Ptr;
      if (local_138.Ptr != (FMeshRegionOperator *)0x0) {
        FMeshRegionOperator::~FMeshRegionOperator(local_138.Ptr);
        ::operator_delete(TVar9.Ptr,0x6f0);
      }
      if (local_150.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data);
      }
      if (local_160.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data);
      }
      if (local_170.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data);
      }
      if (local_1a0.AllocatorInstance.Data != (void *)0x0) {
        FMemory::Free(local_1a0.AllocatorInstance.Data);
      }
      puVar17 = puVar17 + 8;
      piVar19 = piVar19 + 0x10;
      uVar14 = (ulonglong)local_25c;
      pFVar15 = local_250;
      local_2a8 = bVar10;
    }
    pFVar18 = local_240 + 0x30;
    pFVar15 = pFVar15 + 0x30;
    uVar14 = (ulonglong)local_258;
    piVar19 = local_210;
  } while( true );
}

// SimpleHoleFill @ 14c82e4b0

bool __thiscall UE::Geometry::FMeshPlaneCut::SimpleHoleFill(FMeshPlaneCut *this,int param_1)

{
  float fVar1;
  FDynamicMesh3 *pFVar2;
  void *pvVar3;
  code *pcVar4;
  double dVar5;
  ForAnyElementType FVar6;
  undefined8 *puVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  undefined8 *puVar16;
  FScriptContainerElement *pFVar17;
  int *piVar18;
  bool local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_1c0;
  int local_1b8;
  int local_1b4;
  ForAnyElementType local_1b0;
  int local_1a8;
  int local_1a4;
  ForAnyElementType local_1a0;
  int local_198;
  int local_194;
  undefined1 local_190;
  uint local_188;
  uint local_184;
  FScriptContainerElement *local_180;
  FDynamicMeshEditor local_178;
  FScriptContainerElement *local_170;
  undefined1 local_168 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_160;
  FDynamicMesh3 *local_150;
  FDynamicMesh3 *local_148;
  ForAnyElementType local_140;
  int local_138;
  int local_134;
  ForAnyElementType local_130;
  int local_128;
  int local_124;
  ForAnyElementType local_120;
  int local_118;
  int local_114;
  bool local_110;
  EFillType local_108;
  int local_104;
  TVector<float>_u_0 local_f8;
  FScriptContainerElement *local_e8;
  TVector2<float>_u_0 local_e0;
  undefined8 *local_d8;
  int *local_d0;
  FScriptContainerElement *local_c8;
  TVector<double>_u_0 local_c0;
  TQuaternion<double>_u_0 local_a8;
  TVector<double>_u_0 local_88 [3];
  
  bVar9 = true;
  local_res8 = true;
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->HoleFillTriangles).AllocatorInstance.Data,(this->HoleFillTriangles).ArrayNum);
  piVar18 = &(this->HoleFillTriangles).ArrayMax;
  (this->HoleFillTriangles).ArrayNum = 0;
  local_d0 = piVar18;
  if (*piVar18 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->HoleFillTriangles).AllocatorInstance,0,piVar18);
  }
  dVar5 = __real_3ff0000000000000;
  local_184 = (this->OpenBoundaries).ArrayNum;
  uVar13 = (ulonglong)(int)local_184;
  pFVar17 = (this->OpenBoundaries).AllocatorInstance.Data;
  pFVar14 = pFVar17 + 0x10;
  local_c8 = pFVar17 + uVar13 * 0x30;
  do {
    pFVar8 = local_c8;
    local_180 = pFVar14;
    local_170 = pFVar17;
    if ((this->OpenBoundaries).ArrayNum != (int)uVar13) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FMeshPlaneCut::FOpenBoundary,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res18);
    }
    if (pFVar17 == pFVar8) {
      return bVar9;
    }
    iVar12 = (this->HoleFillTriangles).ArrayNum;
    if (iVar12 == *piVar18) {
      iVar12 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&(this->HoleFillTriangles).AllocatorInstance,piVar18);
    }
    (this->HoleFillTriangles).ArrayNum = iVar12 + 1;
    local_e8 = (this->HoleFillTriangles).AllocatorInstance.Data + (longlong)iVar12 * 0x10;
    *(undefined8 *)&local_e8->field_0x0 = 0;
    *(undefined8 *)&local_e8[8].field_0x0 = 0;
    local_c0._s_0.X = (this->PlaneOrigin).field0_0x0._s_0.X;
    local_c0._s_0.Y = (this->PlaneOrigin).field0_0x0._s_0.Y;
    local_c0._s_0.Z = (this->PlaneOrigin).field0_0x0._s_0.Z;
    local_a8._s_0.X = 0.0;
    local_88[0]._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_88[0]._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    local_88[0]._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_a8._s_0.W = dVar5;
    local_a8._s_0.Y = 0.0;
    local_a8._s_0.Z = 0.0;
    TQuaternion<double>::SetFromTo
              ((TQuaternion<double> *)&local_a8._s_0,(TVector<double> *)&local_88[0]._s_0,
               &this->PlaneNormal);
    local_188 = *(uint *)pFVar14;
    uVar13 = (ulonglong)(int)local_188;
    puVar16 = *(undefined8 **)(pFVar14 + -8);
    local_d8 = puVar16 + uVar13 * 8;
    piVar18 = (int *)(puVar16 + 4);
    while( true ) {
      puVar7 = local_d8;
      if (*(int *)pFVar14 != (int)uVar13) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::FEdgeLoop,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (puVar16 == puVar7) break;
      local_1b8 = piVar18[-4];
      lVar15 = (longlong)local_1b8;
      pFVar2 = (FDynamicMesh3 *)*puVar16;
      pvVar3 = *(void **)(piVar18 + -6);
      local_1c0.Data = (FScriptContainerElement *)0x0;
      if (local_1b8 == 0) {
        local_1b4 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_1b8,0,&local_1c0,local_1b8,&local_1b4);
        memcpy(local_1c0.Data,pvVar3,lVar15 << 2);
      }
      local_1a8 = *piVar18;
      lVar15 = (longlong)local_1a8;
      pvVar3 = *(void **)(piVar18 + -2);
      local_1b0.Data = (FScriptContainerElement *)0x0;
      if (local_1a8 == 0) {
        local_1a4 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_1a8,0,&local_1b0,local_1a8,&local_1a4);
        memcpy(local_1b0.Data,pvVar3,lVar15 << 2);
      }
      local_198 = piVar18[4];
      lVar15 = (longlong)local_198;
      pvVar3 = *(void **)(piVar18 + 2);
      local_1a0.Data = (FScriptContainerElement *)0x0;
      if (local_198 == 0) {
        local_194 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_198,0,&local_1a0,local_198,&local_194);
        memcpy(local_1a0.Data,pvVar3,lVar15 << 2);
      }
      iVar12 = local_1b8;
      FVar6.Data = local_1c0.Data;
      local_190 = (undefined1)piVar18[6];
      local_168 = (undefined1  [8])&___7FSimpleHoleFiller_Geometry_UE__6B_;
      local_150 = this->Mesh;
      local_160.AllocatorInstance.Data = (void *)0x0;
      local_160.ArrayNum = 0;
      local_160.ArrayMax = 0;
      local_140.Data = (FScriptContainerElement *)0x0;
      local_148 = pFVar2;
      local_138 = local_1b8;
      if (local_1b8 == 0) {
        local_134 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_1b8,0,&local_140,local_1b8,&local_134);
        memcpy(local_140.Data,FVar6.Data,(longlong)iVar12 << 2);
      }
      iVar12 = local_1a8;
      FVar6.Data = local_1b0.Data;
      local_130.Data = (FScriptContainerElement *)0x0;
      local_128 = local_1a8;
      if (local_1a8 == 0) {
        local_124 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_1a8,0,&local_130,local_1a8,&local_124);
        memcpy(local_130.Data,FVar6.Data,(longlong)iVar12 << 2);
      }
      iVar12 = local_198;
      FVar6.Data = local_1a0.Data;
      local_120.Data = (FScriptContainerElement *)0x0;
      local_118 = local_198;
      if (local_198 == 0) {
        local_114 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_198,0,&local_120,local_198,&local_114);
        memcpy(local_120.Data,FVar6.Data,(longlong)iVar12 << 2);
      }
      local_108 = TriangleFan;
      local_110 = (bool)local_190;
      local_104 = -1;
      if (local_1a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data);
      }
      if (local_1b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data);
      }
      if (local_1c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data);
      }
      iVar12 = param_1;
      if (param_1 < 0) {
        iVar12 = this->Mesh->GroupIDCounter;
        this->Mesh->GroupIDCounter = iVar12 + 1;
      }
      bVar9 = FSimpleHoleFiller::Fill((FSimpleHoleFiller *)local_168,iVar12);
      pFVar14 = local_e8;
      if ((bVar9) && (local_res8 != false)) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if ((local_e8 == (FScriptContainerElement *)(local_168 + 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        uVar11 = (*pcVar4)();
        return (bool)uVar11;
      }
      lVar15 = (longlong)local_160.ArrayNum;
      if (local_160.ArrayNum != 0) {
        iVar12 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,local_160.ArrayNum,(ForAnyElementType *)pFVar14,(int *)(pFVar14 + 8)
                            ,(int *)(pFVar14 + 0xc));
        memcpy((void *)(*(longlong *)&pFVar14->field_0x0 + (longlong)iVar12 * 4),
               local_160.AllocatorInstance.Data,lVar15 << 2);
      }
      pFVar14 = local_180;
      if ((this->Mesh->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
        fVar1 = *(float *)(local_180 + -0xc);
        local_f8._s_0.X = (float)(this->PlaneNormal).field0_0x0._s_0.X * fVar1;
        local_f8._s_0.Y = (float)(this->PlaneNormal).field0_0x0._s_0.Y * fVar1;
        local_f8._s_0.Z = (float)(this->PlaneNormal).field0_0x0._s_0.Z * fVar1;
        local_178.Mesh = this->Mesh;
        FDynamicMeshEditor::SetTriangleNormals
                  (&local_178,(TArray<int,TSizedDefaultAllocator<32>_> *)(local_168 + 8),
                   (TVector<float> *)&local_f8._s_0);
        local_e0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        FDynamicMeshEditor::SetTriangleUVsFromProjection
                  (&local_178,(TArray<int,TSizedDefaultAllocator<32>_> *)(local_168 + 8),
                   (TFrame3<double> *)&local_c0._s_0,this->UVScaleFactor,
                   (TVector2<float> *)&local_e0._s_0,true,0);
      }
      local_168 = (undefined1  [8])&___7FSimpleHoleFiller_Geometry_UE__6B_;
      if (local_120.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data);
      }
      if (local_130.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data);
      }
      if (local_140.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data);
      }
      if (local_160.AllocatorInstance.Data != (void *)0x0) {
        FMemory::Free(local_160.AllocatorInstance.Data);
      }
      puVar16 = puVar16 + 8;
      uVar13 = (ulonglong)local_188;
      piVar18 = piVar18 + 0x10;
      local_res8 = bVar9;
    }
    pFVar17 = local_170 + 0x30;
    pFVar14 = pFVar14 + 0x30;
    uVar13 = (ulonglong)local_184;
    piVar18 = local_d0;
  } while( true );
}

// SplitCrossingEdges @ 14c8364d0

void __thiscall
UE::Geometry::FMeshPlaneCut::SplitCrossingEdges
          (FMeshPlaneCut *this,TArray<double,TSizedDefaultAllocator<32>_> *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_4,bool param_5)

{
  SplitCrossingEdges(this,param_5,param_1,param_2,param_3,param_4,&this->OnCutVertices,
                     (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0);
  return;
}

// SplitCrossingEdges @ 14c836520

void __thiscall
UE::Geometry::FMeshPlaneCut::SplitCrossingEdges
          (FMeshPlaneCut *this,TArray<double,TSizedDefaultAllocator<32>_> *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3,bool param_4)

{
  SplitCrossingEdges(this,param_4,param_1,param_2,param_3,
                     (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0,
                     &this->OnCutVertices,
                     (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0);
  return;
}

// SplitCrossingEdges @ 14c836560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FMeshPlaneCut::SplitCrossingEdges
          (FMeshPlaneCut *this,bool param_1,TArray<double,TSizedDefaultAllocator<32>_> *param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_4,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_5,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_6,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_7)

{
  uint *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  longlong lVar17;
  byte bVar18;
  longlong *plVar19;
  ForAnyElementType FVar20;
  FDynamicMesh3 *pFVar21;
  ulonglong uVar22;
  ForElementType<FSetElementId> FVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar28;
  ForElementType<unsigned_int> FVar29;
  ulonglong uVar30;
  uint uVar31;
  uint uVar32;
  undefined1 auStackY_2a8 [32];
  <lambda_1> local_268 [4];
  uint local_264;
  int local_260;
  int local_258 [2];
  undefined8 local_250;
  uint local_248 [2];
  uint local_240 [2];
  int local_238 [2];
  int local_230;
  uint uStack_22c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_228;
  undefined4 local_220;
  int iStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  undefined1 local_208 [4];
  undefined8 local_204;
  undefined8 local_1fc;
  undefined8 local_1f4;
  bool local_1e8 [4];
  bool local_1e4 [8];
  undefined8 local_1dc;
  int local_1d4 [3];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1c8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1c0;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  int local_190;
  undefined4 local_18c;
  int local_188;
  undefined8 local_180;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_178;
  TArray<double,TSizedDefaultAllocator<32>_> *local_170;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_168;
  undefined8 local_160;
  int local_150 [2];
  longlong *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_140;
  int local_120 [2];
  TArrayView<std::nullptr_t,int> local_118;
  code *local_108;
  FMeshPlaneCut **local_100;
  FSparseArrayAllocationInfo local_f8;
  FMeshPlaneCut *local_e8;
  TArray<double,TSizedDefaultAllocator<32>_> *local_e0;
  undefined8 *local_d8;
  undefined1 local_c8 [32];
  ForElementType<unsigned_int> local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  FScriptContainerElement local_90 [8];
  ForAnyElementType local_88;
  uint local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_1c8 = param_4;
  local_178 = param_5;
  local_1c0 = param_6;
  local_170 = param_2;
  local_168 = param_3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(param_3);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(param_4);
  if (param_5 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(param_5);
  }
  if (param_6 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(param_6);
  }
  local_180 = 0;
  iVar24 = (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed +
           (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(param_2,iVar24,Default);
  uVar22 = 0;
  local_d8 = &local_180;
  local_118.DataPtr = (void **)0x0;
  local_108 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FMeshPlaneCut::ComputeVertexSignedDistances'::__l2::<lambda_1>,void,int>
              ::Call;
  local_100 = &local_e8;
  local_118.ArrayNum = 0;
  local_e8 = this;
  local_e0 = param_2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar24,1,(TFunctionRef<void___cdecl(int)> *)&local_108,local_268[0]
             ,None,&local_118);
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if ((param_1) &&
     (pFVar21 = this->Mesh, uVar30 = uVar22,
     0 < (int)((pFVar21->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
              (pFVar21->TriangleRefCounts).RefCounts.CurBlockUsed))) {
    do {
      uVar25 = (uint)uVar30;
      if ((-1 < (int)uVar25) &&
         ((int)uVar25 <
          (int)((pFVar21->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar21->TriangleRefCounts).RefCounts.CurBlockUsed))) {
        uVar16 = (ulonglong)(uVar25 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 ((pFVar21->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + (uVar30 >> 9) * 8) + uVar16 * 2) - 1U) < 0xfffe) {
          lVar27 = *(longlong *)
                    ((pFVar21->Triangles).Blocks.AllocatorInstance.Data + (uVar30 >> 9) * 8);
          local_160 = *(undefined8 *)(lVar27 + uVar16 * 0xc);
          uVar31 = *(uint *)(lVar27 + 8 + uVar16 * 0xc);
          lVar27 = (longlong)(int)(uint)local_160;
          uVar32 = 0;
          if ((int)(uint)local_160 < param_2->ArrayNum) {
            uVar32 = ~(uint)local_160 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar15 = *(undefined8 *)((param_2->AllocatorInstance).Data + lVar27 * 8);
          if ((double)CONCAT44((uint)((ulonglong)uVar15 >> 0x20) & uVar11,(uint)uVar15 & uVar10) <
              this->PlaneTolerance) {
            lVar27 = (longlong)(int)local_160._4_4_;
            uVar32 = 0;
            if ((int)local_160._4_4_ < param_2->ArrayNum) {
              uVar32 = ~local_160._4_4_ >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar15 = *(undefined8 *)((param_2->AllocatorInstance).Data + lVar27 * 8);
            if ((double)CONCAT44((uint)((ulonglong)uVar15 >> 0x20) & uVar11,(uint)uVar15 & uVar10) <
                this->PlaneTolerance) {
              uVar32 = 0;
              if ((int)uVar31 < param_2->ArrayNum) {
                uVar32 = ~uVar31 >> 0x1f;
              }
              if ((uVar32 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar15 = *(undefined8 *)
                        ((param_2->AllocatorInstance).Data + (longlong)(int)uVar31 * 8);
              if ((((double)CONCAT44((uint)((ulonglong)uVar15 >> 0x20) & uVar11,
                                     (uint)uVar15 & uVar10) < this->PlaneTolerance) &&
                  (FDynamicMesh3::RemoveTriangle(this->Mesh,uVar25,true,false),
                  param_7 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0)) &&
                 (local_248[0] = uVar25,
                 *(int *)&(param_7->Elements).field_0x8 != *(int *)&(param_7->Elements).field_0x34))
              {
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                          (param_7,uVar25,(int *)local_248);
              }
            }
          }
        }
      }
      pFVar21 = this->Mesh;
      uVar30 = (ulonglong)(uVar25 + 1);
      param_6 = local_1c0;
    } while ((int)(uVar25 + 1) <
             (int)((pFVar21->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                  (pFVar21->TriangleRefCounts).RefCounts.CurBlockUsed));
  }
  local_264 = 0;
  iVar24 = (this->Mesh->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
           (this->Mesh->EdgeRefCounts).RefCounts.CurBlockUsed;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_a8 = (ForElementType<unsigned_int>)0x0;
  local_a0 = 0;
  local_9c = 0x80;
  local_98 = -1;
  local_94 = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_260 = iVar24;
  if (0 < iVar24) {
    uVar30 = 0;
    do {
      pFVar21 = this->Mesh;
      uVar25 = (uint)uVar22;
      if (((-1 < (int)local_264) &&
          ((int)local_264 <
           (int)((pFVar21->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                (pFVar21->EdgeRefCounts).RefCounts.CurBlockUsed))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((pFVar21->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (uVar30 >> 9) * 8) + (ulonglong)(local_264 & 0x1ff) * 2) - 1U) <
          0xfffe)) {
        if (local_c8._8_4_ != local_94) {
          FVar20.Data = local_90;
          if (local_88.Data != (FScriptContainerElement *)0x0) {
            FVar20.Data = local_88.Data;
          }
          for (iVar14 = *(int *)(FVar20.Data + (local_80 - 1 & uVar22) * 4); iVar14 != -1;
              iVar14 = *(int *)(local_c8._0_8_ + (longlong)iVar14 * 0xc + 4)) {
            if (*(uint *)(local_c8._0_8_ + (longlong)iVar14 * 0xc) == uVar25) goto LAB_14c837242;
          }
        }
        if (*(void **)&this->EdgeFilterFunc != (void *)0x0) {
          local_240[0] = uVar25;
          Core::Private::Function::CheckCallable(*(void **)&this->EdgeFilterFunc);
          plVar5 = *(longlong **)&(this->EdgeFilterFunc).field_0x28;
          pcVar8 = *(code **)&this->EdgeFilterFunc;
          plVar19 = (longlong *)&(this->EdgeFilterFunc).field_0x10;
          if (plVar5 != (longlong *)0x0) {
            plVar19 = plVar5;
          }
          uVar15 = (**(code **)(*plVar19 + 8))();
          cVar13 = (*pcVar8)(uVar15,local_240);
          if (cVar13 == '\0') goto LAB_14c837242;
        }
        local_250 = *(undefined8 *)
                     (*(longlong *)
                       ((this->Mesh->Edges).Blocks.AllocatorInstance.Data + (uVar22 >> 9) * 8) +
                     (ulonglong)(uVar25 & 0x1ff) * 0x10);
        uVar32 = (uint)local_250;
        uVar31 = 0;
        if ((int)uVar32 < param_2->ArrayNum) {
          uVar31 = ~uVar32 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar27 = (longlong)(int)local_250._4_4_;
        dVar2 = *(double *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar32 * 8);
        uVar31 = 0;
        if ((int)local_250._4_4_ < param_2->ArrayNum) {
          uVar31 = ~local_250._4_4_ >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        dVar3 = this->PlaneTolerance;
        dVar4 = *(double *)((param_2->AllocatorInstance).Data + lVar27 * 8);
        uVar31 = SUB84(dVar4,0) & uVar10;
        uVar32 = (uint)((ulonglong)dVar4 >> 0x20) & uVar11;
        bVar12 = dVar3 != (double)CONCAT44(uVar32,uVar31);
        bVar7 = (double)CONCAT44(uVar32,uVar31) <= dVar3;
        bVar9 = bVar7 && bVar12;
        if ((double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & uVar11,SUB84(dVar2,0) & uVar10) <
            dVar3) {
          if (!bVar7 || !bVar12) goto LAB_14c837347;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (local_168,&local_1a0,(bool *)&local_264);
          if (param_6 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (param_6,&local_19c,(bool *)&local_250);
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (param_6,&local_198,(bool *)((longlong)&local_250 + 4));
          }
        }
        else if (bVar9) {
LAB_14c837347:
          if (param_6 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (param_6,&local_194,(bool *)(local_248 + ((ulonglong)bVar9 - 2)));
          }
        }
        else {
          if (0.0 < dVar4 * dVar2) goto LAB_14c837242;
          local_204 = 0xffffffffffffffff;
          local_1fc = -1;
          local_1f4 = 0xffffffffffffffff;
          local_1e4[0] = true;
          local_1e4[1] = true;
          local_1e4[2] = true;
          local_1e4[3] = true;
          local_1e4[4] = true;
          local_1e4[5] = true;
          local_1e4[6] = true;
          local_1e4[7] = true;
          local_1dc = 0xffffffffffffffff;
          local_1d4[0] = -1;
          iVar14 = (**(code **)(this->Mesh->_padding_ + 0x30))
                             (this->Mesh,uVar22,local_208,SUB84(dVar2 / (dVar2 - dVar4),0));
          if (iVar14 != 0) {
            local_268[0] = (<lambda_1>)0x0;
            bVar12 = `UE::Geometry::FMeshPlaneCut::SplitCrossingEdges'::__l47::<lambda_2>::
                     operator()(local_268);
            if (!bVar12) goto LAB_14c837242;
          }
          if ((param_7 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) &&
             (*(int *)&(param_7->Elements).field_0x8 != *(int *)&(param_7->Elements).field_0x34)) {
            FVar6 = (param_7->Hash).SecondaryData;
            FVar23 = (ForElementType<FSetElementId>)&param_7->Hash;
            if (FVar6 != (ForElementType<FSetElementId>)0x0) {
              FVar23 = FVar6;
            }
            iVar14 = *(int *)((longlong)FVar23 +
                             (ulonglong)(param_7->HashSize - 1U & (uint)local_1f4) * 4);
            if (iVar14 != -1) {
              do {
                if (*(uint *)(*(longlong *)&param_7->Elements + (longlong)iVar14 * 0xc) ==
                    (uint)local_1f4) {
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                            (param_7,&local_190,local_1e4);
                  break;
                }
                iVar14 = *(int *)(*(longlong *)&param_7->Elements + 4 + (longlong)iVar14 * 0xc);
              } while (iVar14 != -1);
            }
          }
          uVar31 = (uint)local_1dc;
          if ((int)(uint)local_1dc < iVar24) {
            if (local_94 == 0) {
              iVar24 = Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0xc,4,1,(ForAnyElementType *)local_c8,(int *)(local_c8 + 8),
                                  (int *)(local_c8 + 0xc));
              iVar14 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                 ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),1);
              FVar29 = (ForElementType<unsigned_int>)((longlong)local_c8 + 0x10);
              if (local_a8 != (ForElementType<unsigned_int>)0x0) {
                FVar29 = local_a8;
              }
              bVar18 = (byte)iVar14 & 0x1f;
              if (iVar14 < 0) {
                iVar14 = iVar14 + 0x1f;
                bVar18 = bVar18 - 0x20;
              }
              puVar1 = (uint *)((longlong)FVar29 + (longlong)(iVar14 >> 5) * 4);
              *puVar1 = *puVar1 & ~(1 << (bVar18 & 0x1f));
              iVar14 = local_98;
            }
            else {
              local_94 = local_94 + -1;
              iVar14 = *(int *)(local_c8._0_8_ + (longlong)local_98 * 0xc + 4);
              iVar24 = local_98;
              if (local_94 != 0) {
                *(undefined4 *)(local_c8._0_8_ + (longlong)iVar14 * 0xc) = 0xffffffff;
              }
            }
            local_98 = iVar14;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_c8,&local_f8,iVar24);
            if (local_f8.Pointer != (uint *)0x0) {
              *(uint *)local_f8.Pointer = uVar31;
              *(uint *)((longlong)local_f8.Pointer + 4) = 0xffffffff;
            }
            uVar31 = *(uint *)local_f8.Pointer;
            if ((local_c8._8_4_ - local_94 != 1) && (local_c8._8_4_ != local_94)) {
              FVar20.Data = local_90;
              if (local_88.Data != (FScriptContainerElement *)0x0) {
                FVar20.Data = local_88.Data;
              }
              for (iVar24 = *(int *)(FVar20.Data + (ulonglong)(local_80 - 1 & uVar31) * 4);
                  iVar24 != -1; iVar24 = *(int *)(local_c8._0_8_ + (longlong)iVar24 * 0xc + 4)) {
                if (*(uint *)(local_c8._0_8_ + (longlong)iVar24 * 0xc) == uVar31) {
                  if (iVar24 != -1) {
                    *(uint *)(local_c8._0_8_ + (longlong)iVar24 * 0xc) = uVar31;
                    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::RemoveAtUninitialized
                              ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                *)local_c8,local_f8.Index,1);
                    goto LAB_14c83703f;
                  }
                  break;
                }
              }
            }
            uVar26 = 1;
            uVar32 = local_c8._8_4_ - local_94;
            if (3 < uVar32) {
              uVar22 = (ulonglong)((uVar32 >> 1) + 7) * 2 + 1;
              lVar27 = 0x3f;
              if (uVar22 != 0) {
                for (; uVar22 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                }
              }
              local_18c = (undefined4)lVar27;
              uVar26 = 1 << ((byte)lVar27 & 0x1f);
            }
            if (((int)uVar32 < 1) || ((int)uVar26 <= (int)local_80)) {
              uVar31 = local_80 - 1 & uVar31;
              *(uint *)((longlong)local_f8.Pointer + 8) = uVar31;
              FVar20.Data = local_90;
              if (local_88.Data != (FScriptContainerElement *)0x0) {
                FVar20.Data = local_88.Data;
              }
              uVar22 = (longlong)(int)local_80 - 1U & (longlong)(int)uVar31;
              *(uint *)((longlong)local_f8.Pointer + 4) = *(uint *)(FVar20.Data + uVar22 * 4);
              *(int *)(FVar20.Data + uVar22 * 4) = local_f8.Index;
            }
            else {
              local_80 = uVar26;
              if (local_88.Data != (FScriptContainerElement *)0x0) {
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_88,0,0,4);
              }
              if (uVar26 != 0) {
                uVar31 = uVar26;
                if (uVar26 < 2) {
                  if (local_88.Data != (FScriptContainerElement *)0x0) {
                    uVar31 = 0;
                    goto LAB_14c836e4d;
                  }
                }
                else {
LAB_14c836e4d:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_88,0,uVar31,4);
                }
                if (0 < (int)uVar26) {
                  uVar30 = (ulonglong)uVar26;
                  uVar22 = 0;
                  do {
                    FVar20.Data = local_90;
                    if (local_88.Data != (FScriptContainerElement *)0x0) {
                      FVar20.Data = local_88.Data;
                    }
                    uVar16 = uVar22 & (longlong)(int)uVar26 - 1U;
                    uVar22 = uVar22 + 1;
                    *(undefined4 *)(FVar20.Data + uVar16 * 4) = 0xffffffff;
                    uVar30 = uVar30 - 1;
                  } while (uVar30 != 0);
                }
              }
              if (local_80 != 0) {
                pTStack_228 = (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10);
                uStack_22c = 1;
                local_230 = 0;
                iStack_21c = 0;
                iStack_218 = 0;
                if (local_a0 != 0) {
                  FVar29 = (ForElementType<unsigned_int>)((longlong)local_c8 + 0x10);
                  if (local_a8 != (ForElementType<unsigned_int>)0x0) {
                    FVar29 = local_a8;
                  }
                  uVar31 = *(uint *)FVar29;
                  iStack_218 = 0;
                  local_230 = 0;
                  while (uVar31 == 0) {
                    iStack_218 = iStack_218 + 0x20;
                    lVar27 = (longlong)local_230;
                    local_230 = local_230 + 1;
                    if ((int)(local_a0 + -1 + (local_a0 + -1 >> 0x1f & 0x1fU)) >> 5 < local_230)
                    goto LAB_14c836f5f;
                    uVar31 = ((uint *)((longlong)FVar29 + 4))[lVar27];
                  }
                  uStack_22c = -uVar31 & uVar31;
                  uVar22 = (ulonglong)uStack_22c * 2 + 1;
                  lVar27 = 0x3f;
                  if (uVar22 != 0) {
                    for (; uVar22 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                    }
                  }
                  local_188 = (int)lVar27;
                  iStack_21c = iStack_218 + -1 + local_188;
                  if (local_a0 < iStack_21c) {
LAB_14c836f5f:
                    iStack_21c = local_a0;
                  }
                }
                local_220 = 0xffffffff;
                local_148 = (longlong *)local_c8;
                local_140._padding_ = CONCAT44(uStack_22c,local_230);
                local_140.CurrentBitIndex = iStack_21c;
                local_140.UnvisitedBitMask = 0xffffffff;
                local_140._28_4_ = uStack_214;
                local_140.BaseBitIndex = iStack_218;
                local_140.Array = pTStack_228;
                iVar24 = iStack_21c;
                if (iStack_21c < local_a0) {
                  do {
                    lVar27 = *local_148;
                    lVar17 = (longlong)iVar24;
                    uVar31 = local_80 - 1 & *(uint *)(lVar27 + lVar17 * 0xc);
                    *(uint *)(lVar27 + 8 + lVar17 * 0xc) = uVar31;
                    FVar20.Data = local_90;
                    if (local_88.Data != (FScriptContainerElement *)0x0) {
                      FVar20.Data = local_88.Data;
                    }
                    uVar22 = (longlong)(int)local_80 - 1U & (longlong)(int)uVar31;
                    *(undefined4 *)(lVar27 + 4 + lVar17 * 0xc) =
                         *(undefined4 *)(FVar20.Data + uVar22 * 4);
                    *(int *)(FVar20.Data + uVar22 * 4) = iVar24;
                    local_140.UnvisitedBitMask =
                         local_140.UnvisitedBitMask & ~local_140._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_140);
                    iVar24 = local_140.CurrentBitIndex;
                  } while (local_140.CurrentBitIndex < (local_140.Array)->NumBits);
                }
              }
            }
          }
LAB_14c83703f:
          iVar24 = local_260;
          local_258[0] = local_1dc._4_4_;
          if (local_1dc._4_4_ < local_260) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_c8,local_150,
                       (bool *)local_258);
          }
          pTVar28 = local_178;
          if (local_178 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (local_178,local_120,(bool *)&local_264);
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (pTVar28,&local_1b8,(bool *)&local_1dc);
          }
          param_2 = local_170;
          lVar27 = (longlong)(int)local_1fc;
          if ((int)local_1fc < local_170->ArrayNum) {
            if (((int)local_1fc < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar15 = *(undefined8 *)((param_2->AllocatorInstance).Data + lVar27 * 8);
            pTVar28 = local_1c8;
            if ((double)CONCAT44((uint)((ulonglong)uVar15 >> 0x20) & uVar11,(uint)uVar15 & uVar10) <
                this->PlaneTolerance) goto LAB_14c8370fc;
          }
          else {
LAB_14c8370fc:
            pTVar28 = local_1c8;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (local_1c8,&local_1b4,(bool *)((longlong)&local_1dc + 4));
          }
          if (local_1d4[0] != -1) {
            if ((param_7 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) &&
               (*(int *)&(param_7->Elements).field_0x8 != *(int *)&(param_7->Elements).field_0x34))
            {
              FVar6 = (param_7->Hash).SecondaryData;
              FVar23 = (ForElementType<FSetElementId>)&param_7->Hash;
              if (FVar6 != (ForElementType<FSetElementId>)0x0) {
                FVar23 = FVar6;
              }
              iVar14 = *(int *)((longlong)FVar23 +
                               (ulonglong)(param_7->HashSize - 1U & local_1f4._4_4_) * 4);
              if (iVar14 != -1) {
                do {
                  if (*(uint *)(*(longlong *)&param_7->Elements + (longlong)iVar14 * 0xc) ==
                      local_1f4._4_4_) {
                    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                              (param_7,&local_1b0,local_1e4 + 4);
                    break;
                  }
                  iVar14 = *(int *)(*(longlong *)&param_7->Elements + 4 + (longlong)iVar14 * 0xc);
                } while (iVar14 != -1);
              }
            }
            local_238[0] = local_1d4[0];
            if (local_1d4[0] < iVar24) {
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_c8,
                         &local_1ac,(bool *)local_238);
            }
            lVar27 = (longlong)local_1fc._4_4_;
            if (local_1fc._4_4_ < param_2->ArrayNum) {
              if ((local_1fc < 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar15 = *(undefined8 *)((param_2->AllocatorInstance).Data + lVar27 * 8);
              if (this->PlaneTolerance <=
                  (double)CONCAT44((uint)((ulonglong)uVar15 >> 0x20) & uVar11,(uint)uVar15 & uVar10)
                 ) goto LAB_14c837222;
            }
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (pTVar28,&local_1a8,(bool *)local_1d4);
          }
LAB_14c837222:
          param_6 = local_1c0;
          iVar24 = local_260;
          if (local_1c0 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (local_1c0,&local_1a4,local_1e8);
            iVar24 = local_260;
          }
        }
      }
LAB_14c837242:
      local_264 = uVar25 + 1;
      uVar22 = (ulonglong)local_264;
      uVar30 = (ulonglong)local_264;
    } while ((int)local_264 < iVar24);
  }
  local_80 = 0;
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_c8);
  return;
}

// SplitEdgesOnlyHelper @ 14c837380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FMeshPlaneCut::SplitEdgesOnlyHelper
          (FMeshPlaneCut *this,bool param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,bool param_3)

{
  TArray<UE::Geometry::FMeshPlaneCut::FCutResultRegion,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  FDynamicMesh3 *pFVar7;
  FCutResultRegion *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  longlong *plVar12;
  code *pcVar13;
  FMeshPlaneCut *pFVar14;
  undefined4 uVar15;
  bool bVar16;
  undefined1 uVar17;
  char cVar18;
  int iVar19;
  undefined8 uVar20;
  byte bVar21;
  uint uVar22;
  uint *puVar23;
  ulonglong uVar24;
  longlong *plVar25;
  undefined1 *_Src;
  ForElementType<FSetElementId> FVar26;
  int iVar27;
  longlong lVar28;
  uint *puVar29;
  ForAnyElementType FVar30;
  uint uVar31;
  uint uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  FDynamicMesh3 **ppFVar35;
  undefined1 auStackY_408 [32];
  undefined1 local_3b8;
  undefined1 local_3b7;
  undefined1 local_3b6;
  undefined1 local_3b5;
  char local_3b4;
  undefined1 local_3b3 [3];
  TArray<int,TSizedDefaultAllocator<32>_> local_3b0;
  uint local_3a0 [2];
  undefined8 local_398;
  undefined8 local_390;
  undefined4 local_388 [2];
  FMeshPlaneCut *local_380;
  int local_378 [2];
  uint local_370 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_368;
  FDynamicMesh3 **local_360;
  FScriptContainerElement *local_358;
  FMeshConnectedComponents local_350;
  TArray<double,TSizedDefaultAllocator<32>_> local_338;
  FScriptContainerElement *local_328;
  int *piStack_320;
  undefined8 local_318;
  longlong *local_310;
  uint uStack_308;
  uint uStack_304;
  TBitArray<FDefaultBitArrayAllocator> *local_300;
  undefined4 uStack_2f8;
  uint uStack_2f4;
  uint local_2f0;
  uint uStack_2ec;
  int iStack_2e8;
  undefined4 uStack_2e4;
  TArray<UE::Geometry::FMeshPlaneCut::FCutResultRegion,TSizedDefaultAllocator<32>_> *local_2e0;
  int local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  int local_2c0;
  longlong *local_2b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2b0;
  undefined8 uStack_290;
  FScriptContainerElement *local_288;
  int *piStack_280;
  int local_278;
  undefined4 uStack_274;
  code *local_268 [2];
  undefined **local_258;
  FMeshPlaneCut *local_250;
  undefined1 *local_248;
  undefined8 local_240;
  code *local_238 [2];
  undefined **local_228;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **local_220;
  undefined8 local_210;
  TUniqueFunction<void___cdecl(DynamicMeshInfo::FEdgeCollapseInfo_const_&)> local_208;
  undefined1 local_1d8 [32];
  uint *local_1b8;
  uint local_1b0;
  uint local_1ac;
  undefined4 local_1a8;
  int local_1a4;
  FScriptContainerElement local_1a0 [8];
  ForAnyElementType local_198;
  uint local_190;
  undefined1 local_188 [32];
  undefined1 *local_168;
  uint local_160;
  undefined4 local_15c;
  undefined4 local_158;
  int local_154;
  undefined1 local_150 [8];
  ForElementType<FSetElementId> local_148;
  uint local_140;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_138;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_e8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_408;
  uVar33 = 0;
  local_338.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_338.ArrayNum = 0;
  local_338.ArrayMax = 0;
  local_188._0_8_ = (void *)0x0;
  local_188._8_8_ = 0;
  local_168 = (undefined1 *)0x0;
  uVar32 = 0;
  local_160 = 0;
  local_15c = 0x80;
  local_158 = 0xffffffff;
  local_154 = 0;
  local_148 = (ForElementType<FSetElementId>)0x0;
  local_140 = 0;
  local_138.Elements._0_8_ = 0;
  local_138.Elements._8_8_ = 0;
  local_138.Elements._32_8_ = 0;
  local_138.Elements._40_4_ = 0;
  local_138.Elements._44_4_ = 0x80;
  local_138.Elements._48_4_ = 0xffffffff;
  local_138.Elements._52_4_ = 0;
  local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_138.HashSize = 0;
  local_e8.Elements._0_8_ = 0;
  local_e8.Elements._8_8_ = 0;
  local_e8.Elements._32_8_ = 0;
  local_e8.Elements._40_4_ = 0;
  local_e8.Elements._44_4_ = 0x80;
  local_e8.Elements._48_4_ = 0xffffffff;
  local_e8.Elements._52_4_ = 0;
  local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_e8.HashSize = 0;
  local_3b4 = param_3;
  local_380 = this;
  local_368 = param_2;
  SplitCrossingEdges(this,false,&local_338,
                     (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_188,&local_138,
                     &local_e8,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0,param_2)
  ;
  if (param_1) {
    if (this->bSimplifyAlongNewEdges != false) {
      if (param_3) {
        local_3b8 = 0;
        bVar16 = `UE::Geometry::FMeshPlaneCut::SplitEdgesOnlyHelper'::__l9::<lambda_1>::operator()
                           (&local_3b8);
        if (!bVar16) goto LAB_14c83759a;
      }
      FLocalPlanarSimplify::CollapseDegenerateEdges
                (this->Mesh,&local_138,false,this->DegenerateEdgeTol,local_368);
      if (local_368 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
        local_208._0_8_ = 0;
        local_208._40_8_ = 0;
        FLocalPlanarSimplify::SimplifyAlongEdges
                  (&this->SimplifySettings,this->Mesh,&local_138,&local_208);
      }
      else {
        local_210 = 0;
        local_228 = &Core::Private::Function::
                     TFunction_OwnedObject<`UE::Geometry::FMeshPlaneCut::SplitEdgesOnlyHelper'::`14'::<lambda_2>,1,0>
                     ::_vftable_;
        local_220 = &local_368;
        local_238[0] = Core::Private::Function::
                       TFunctionRefCaller<`UE::Geometry::FMeshPlaneCut::SplitEdgesOnlyHelper'::__l14::<lambda_2>,void,DynamicMeshInfo::FEdgeCollapseInfo_const_&>
                       ::Call;
        FLocalPlanarSimplify::SimplifyAlongEdges
                  (&this->SimplifySettings,this->Mesh,&local_138,
                   (TUniqueFunction<void___cdecl(DynamicMeshInfo::FEdgeCollapseInfo_const_&)> *)
                   local_238);
      }
    }
LAB_14c83759a:
    uVar22 = local_140;
    lVar28 = (longlong)(int)local_140;
    local_1d8._0_8_ = (FScriptContainerElement *)0x0;
    local_1d8._8_8_ = 0;
    local_1b8 = (uint *)0x0;
    local_1b0 = 0;
    local_1ac = 0x80;
    local_1a8 = 0xffffffff;
    local_1a4 = 0;
    local_198.Data = (FScriptContainerElement *)0x0;
    local_190 = 0;
    if (1 < local_140) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_198,0,local_140,4)
      ;
    }
    FVar26 = (ForElementType<FSetElementId>)local_150;
    if (local_148 != (ForElementType<FSetElementId>)0x0) {
      FVar26 = local_148;
    }
    FVar30.Data = local_1a0;
    if (local_198.Data != (FScriptContainerElement *)0x0) {
      FVar30.Data = local_198.Data;
    }
    if (uVar22 != 0) {
      memcpy(FVar30.Data,(void *)FVar26,lVar28 << 2);
    }
    local_190 = uVar22;
    uVar15 = local_188._8_4_;
    lVar28 = (longlong)(int)local_188._8_4_;
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_1d8,local_188._8_4_);
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar15,(ForAnyElementType *)local_1d8,(int *)(local_1d8 + 8),
               (int *)(local_1d8 + 0xc));
    local_1a8 = local_158;
    local_1a4 = local_154;
    local_1b0 = 0;
    uVar22 = local_160 + 0x1f & 0xffffffe0;
    if (((int)local_1ac < (int)uVar22) || (0x80 < (int)local_1ac)) {
      local_1ac = 0x80;
      if (0x80 < (int)uVar22) {
        local_1ac = uVar22;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10),0);
    }
    local_1b0 = local_160;
    if (local_160 != 0) {
      _Src = local_188 + 0x10;
      if (local_168 != (undefined1 *)0x0) {
        _Src = local_168;
      }
      puVar23 = (uint *)(local_1d8 + 0x10);
      if (local_1b8 != (uint *)0x0) {
        puVar23 = local_1b8;
      }
      memcpy(puVar23,_Src,(ulonglong)(local_160 + 0x1f >> 5) << 2);
    }
    if (uVar15 != 0) {
      memcpy((void *)local_1d8._0_8_,(void *)local_188._0_8_,lVar28 * 0xc);
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_1d8,&local_138);
    uVar22 = local_1b0;
    local_3b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uStack_304 = 1;
    local_3b0.ArrayNum = 0;
    local_3b0.ArrayMax = 0;
    local_2f0 = 0;
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    uStack_2f4 = local_2f0;
    if (local_1b0 != 0) {
      puVar23 = (uint *)(local_1d8 + 0x10);
      if (local_1b8 != (uint *)0x0) {
        puVar23 = local_1b8;
      }
      uVar31 = *puVar23;
      uVar24 = uVar33;
      uVar34 = uVar33;
      local_2f0 = 0;
      uVar32 = 0;
      while (uVar31 == 0) {
        iVar27 = (int)uVar24;
        local_2f0 = (int)uVar34 + 0x20;
        uVar34 = (ulonglong)local_2f0;
        uVar32 = iVar27 + 1;
        uVar24 = (ulonglong)uVar32;
        uStack_2f4 = local_1b0;
        if ((int)((local_1b0 - 1) + ((int)(local_1b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar32)
        goto LAB_14c83783f;
        uVar31 = (puVar23 + 1)[iVar27];
      }
      uStack_304 = -uVar31 & uVar31;
      uVar24 = (ulonglong)uStack_304 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      local_2d8 = (int)lVar28;
      uStack_2f4 = (int)lVar28 + -1 + local_2f0;
      if ((int)local_1b0 < (int)uStack_2f4) {
        uStack_2f4 = local_1b0;
      }
    }
LAB_14c83783f:
    local_310 = (longlong *)local_1d8;
    uStack_2ec = uStack_2f4;
    uVar31 = local_1b0 & 0xffffffe0;
    local_300 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10);
    uStack_2f8 = 0xffffffff;
    uStack_308 = uVar32;
    iStack_2e8 = local_1d8._8_4_ - local_1a4;
    local_2b8 = (longlong *)local_1d8;
    TStack_2b0._padding_ = CONCAT44(uStack_304,uVar32);
    iVar27 = (int)local_1b0 >> 5;
    bVar21 = (byte)local_1b0;
    TStack_2b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10);
    TStack_2b0.UnvisitedBitMask = 0xffffffff;
    TStack_2b0.CurrentBitIndex = uStack_2f4;
    TStack_2b0.BaseBitIndex = local_2f0;
    TStack_2b0._28_4_ = uStack_2f4;
    uStack_290 = CONCAT44(uStack_2e4,local_1d8._8_4_ - local_1a4);
    if ((int)local_1b0 < 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar16) {
        pcVar13 = (code *)swi(3);
        uVar17 = (*pcVar13)();
        return (bool)uVar17;
      }
      uVar33 = local_3b0._8_8_ & 0xffffffff;
    }
    if (uVar22 != local_1b0) {
      puVar23 = (uint *)(local_1d8 + 0x10);
      if (local_1b8 != (uint *)0x0) {
        puVar23 = local_1b8;
      }
      uVar32 = -1 << (bVar21 & 0x1f) & puVar23[iVar27];
      while (uVar32 == 0) {
        lVar28 = (longlong)iVar27;
        uVar31 = uVar31 + 0x20;
        iVar27 = iVar27 + 1;
        uVar22 = local_1b0;
        if ((int)((local_1b0 - 1) + ((int)(local_1b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
        goto LAB_14c837970;
        uVar32 = (puVar23 + 1)[lVar28];
      }
      uVar24 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
      lVar28 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      local_2c0 = (int)lVar28;
      uVar22 = local_2c0 + -1 + uVar31;
      if ((int)local_1b0 < (int)uVar22) {
        uVar22 = local_1b0;
      }
    }
LAB_14c837970:
    do {
      plVar12 = local_2b8;
      iVar27 = (int)uVar33;
      if ((int)local_2b8[1] - *(int *)((longlong)local_2b8 + 0x34) != (int)uStack_290) {
        local_3b7 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_3b7);
        iVar27 = local_3b0.ArrayNum;
      }
      ppFVar35 = &this->Mesh;
      if (((TStack_2b0.CurrentBitIndex == uVar22) &&
          (TStack_2b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10))) &&
         (plVar12 == (longlong *)local_1d8)) goto LAB_14c837c82;
      ppFVar35 = &this->Mesh;
      uVar32 = *(uint *)(*plVar12 + (longlong)TStack_2b0.CurrentBitIndex * 0xc);
      local_398 = *(ulonglong *)
                   (*(longlong *)
                     (((*ppFVar35)->Edges).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar32 >> 9) * 8) + 8 + (ulonglong)(uVar32 & 0x1ff) * 0x10);
      if ((int)local_398 != -1) {
        if ((local_3b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_398) &&
           ((FScriptContainerElement *)&local_398 <
            local_3b0.AllocatorInstance.Data + (longlong)local_3b0.ArrayMax * 4)) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar16) {
            pcVar13 = (code *)swi(3);
            uVar17 = (*pcVar13)();
            return (bool)uVar17;
          }
          iVar27 = local_3b0.ArrayNum;
        }
        if (iVar27 == local_3b0.ArrayMax) {
          iVar27 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_3b0.AllocatorInstance,&local_3b0.ArrayMax);
        }
        local_3b0.ArrayNum = iVar27 + 1;
        *(uint *)(local_3b0.AllocatorInstance.Data + (longlong)iVar27 * 4) = (uint)local_398;
        pFVar7 = *ppFVar35;
        if ((pFVar7->TriangleGroups).bIsSet == false) {
          local_388[0] = 0xffffffff;
        }
        else {
          if ((-1 < (int)(uint)local_398) &&
             ((int)(uint)local_398 <
              (int)((pFVar7->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                   (pFVar7->TriangleRefCounts).RefCounts.CurBlockUsed))) {
            uVar33 = (local_398 & 0xffffffff) >> 9;
            if ((ushort)(*(short *)(*(longlong *)
                                     ((pFVar7->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance
                                      .Data + uVar33 * 8) + (ulonglong)((uint)local_398 & 0x1ff) * 2
                                   ) - 1U) < 0xfffe) {
              local_388[0] = *(undefined4 *)
                              (*(longlong *)
                                ((pFVar7->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                                uVar33 * 8) + (ulonglong)((uint)local_398 & 0x1ff) * 4);
              goto LAB_14c837b12;
            }
          }
          local_388[0] = 0;
        }
LAB_14c837b12:
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_98,local_378,(bool *)local_388);
        iVar27 = local_3b0.ArrayNum;
      }
      if (local_398._4_4_ != -1) {
        if ((local_3b0.AllocatorInstance.Data <=
             (FScriptContainerElement *)((longlong)&local_398 + 4)) &&
           ((FScriptContainerElement *)((longlong)&local_398 + 4U) <
            local_3b0.AllocatorInstance.Data + (longlong)local_3b0.ArrayMax * 4)) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar16) {
            pcVar13 = (code *)swi(3);
            uVar17 = (*pcVar13)();
            return (bool)uVar17;
          }
          iVar27 = local_3b0.ArrayNum;
        }
        if (iVar27 == local_3b0.ArrayMax) {
          iVar27 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_3b0.AllocatorInstance,&local_3b0.ArrayMax);
        }
        local_3b0.ArrayNum = iVar27 + 1;
        *(uint *)(local_3b0.AllocatorInstance.Data + (longlong)iVar27 * 4) = local_398._4_4_;
        pFVar7 = *ppFVar35;
        if ((pFVar7->TriangleGroups).bIsSet == false) {
          local_388[0] = 0xffffffff;
        }
        else {
          if ((-1 < (longlong)local_398) &&
             ((int)local_398._4_4_ <
              (int)((pFVar7->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                   (pFVar7->TriangleRefCounts).RefCounts.CurBlockUsed))) {
            if ((ushort)(*(short *)(*(longlong *)
                                     ((pFVar7->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance
                                      .Data + (ulonglong)(local_398._4_4_ >> 9) * 8) +
                                   (ulonglong)(local_398._4_4_ & 0x1ff) * 2) - 1U) < 0xfffe) {
              local_388[0] = *(undefined4 *)
                              (*(longlong *)
                                ((pFVar7->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                                (ulonglong)(local_398._4_4_ >> 9) * 8) +
                              (ulonglong)(local_398._4_4_ & 0x1ff) * 4);
              goto LAB_14c837c4d;
            }
          }
          local_388[0] = 0;
        }
LAB_14c837c4d:
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_98,local_378,(bool *)local_388);
      }
      TStack_2b0.UnvisitedBitMask = TStack_2b0.UnvisitedBitMask & ~TStack_2b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2b0);
      uVar33 = local_3b0._8_8_ & 0xffffffff;
    } while( true );
  }
  goto LAB_14c838328;
LAB_14c837c82:
  local_350.Mesh = *ppFVar35;
  local_350.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258 = &Core::Private::Function::
               TFunction_OwnedObject<`UE::Geometry::FMeshPlaneCut::SplitEdgesOnlyHelper'::`2'::<lambda_3>,0,0>
               ::_vftable_;
  local_248 = local_1d8;
  local_350.Components.Array.ArrayNum = 0;
  local_350.Components.Array.ArrayMax = 0;
  local_268[0] = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FMeshPlaneCut::SplitEdgesOnlyHelper'::__l2::<lambda_3>,bool,int,int>
                 ::Call;
  local_240 = 0;
  local_360 = ppFVar35;
  local_250 = this;
  FMeshConnectedComponents::FindTrianglesConnectedToSeeds
            (&local_350,&local_3b0,(TFunction<bool___cdecl(int,int)> *)local_268);
  pTVar1 = &this->ResultRegions;
  piVar4 = &(this->ResultRegions).ArrayMax;
  pFVar8 = (FCutResultRegion *)(pTVar1->AllocatorInstance).Data;
  iVar27 = (this->ResultRegions).ArrayNum;
  local_2e0 = pTVar1;
  if (*piVar4 < 0) {
    DestructItems<UE::Geometry::FMeshPlaneCut::FCutResultRegion,int>(pFVar8,iVar27);
    (this->ResultRegions).ArrayNum = 0;
    if (*piVar4 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&pTVar1->AllocatorInstance,0,piVar4);
    }
  }
  else {
    DestructItems<UE::Geometry::FMeshPlaneCut::FCutResultRegion,int>(pFVar8,iVar27);
    (this->ResultRegions).ArrayNum = 0;
  }
  if (local_350.Components.Array.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(local_350.Components.Array._8_8_ & 0xffffffff);
  }
  if (*piVar4 < local_350.Components.Array.ArrayNum) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,local_350.Components.Array.ArrayNum,&pTVar1->AllocatorInstance,
               (this->ResultRegions).ArrayNum,piVar4);
  }
  piStack_280 = &local_350.Components.Array.ArrayNum;
  local_288 = local_350.Components.Array.AllocatorInstance.Data;
  local_278 = local_350.Components.Array.ArrayNum;
  local_358 = local_350.Components.Array.AllocatorInstance.Data +
              (longlong)local_350.Components.Array.ArrayNum * 8;
  local_328 = local_350.Components.Array.AllocatorInstance.Data;
  piStack_320 = piStack_280;
  local_318 = CONCAT44(uStack_274,local_350.Components.Array.ArrayNum);
  FVar30.Data = local_350.Components.Array.AllocatorInstance.Data;
  while( true ) {
    pFVar9 = local_358;
    local_328 = FVar30.Data;
    if (*piStack_320 != (int)local_318) {
      local_3b6 = 0;
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_3b6);
    }
    pFVar14 = local_380;
    if (FVar30.Data == pFVar9) break;
                    /* WARNING: Load size is inaccurate */
    pFVar9 = *FVar30.Data;
    iVar5 = (*ppFVar35)->GroupIDCounter;
    iVar27 = iVar5 + 1;
    (*ppFVar35)->GroupIDCounter = iVar27;
    puVar29 = *(uint **)pFVar9;
    iVar6 = *(int *)(pFVar9 + 8);
    puVar23 = puVar29 + iVar6;
    while( true ) {
      if (*(int *)(pFVar9 + 8) != iVar6) {
        local_3b5 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_3b5);
      }
      pTVar1 = local_2e0;
      if (puVar29 == puVar23) break;
      pFVar7 = pFVar14->Mesh;
      if ((pFVar7->TriangleGroups).bIsSet != false) {
        *(int *)(*(longlong *)
                  ((pFVar7->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                  (ulonglong)(*puVar29 >> 9) * 8) + (ulonglong)(*puVar29 & 0x1ff) * 4) = iVar5;
        iVar19 = iVar27;
        if (iVar27 < pFVar7->GroupIDCounter) {
          iVar19 = pFVar7->GroupIDCounter;
        }
        pFVar7->GroupIDCounter = iVar19;
      }
      puVar29 = puVar29 + 1;
    }
    iVar27 = local_2e0->ArrayNum;
    if (iVar27 == local_2e0->ArrayMax) {
      iVar27 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_2e0->AllocatorInstance,&local_2e0->ArrayMax);
    }
    pTVar1->ArrayNum = iVar27 + 1;
    lVar28 = (longlong)iVar27;
    pFVar10 = (pTVar1->AllocatorInstance).Data;
    *(undefined4 *)(pFVar10 + lVar28 * 0x18 + 4) = 0;
    pFVar3 = pFVar10 + lVar28 * 0x18 + 8;
    *(undefined8 *)(pFVar10 + lVar28 * 0x18 + 0x10) = 0;
    *(undefined8 *)pFVar3 = 0;
    *(int *)(pFVar10 + lVar28 * 0x18) = iVar5;
    if (pFVar3 != pFVar9) {
      *(undefined8 *)pFVar3 = *(undefined8 *)pFVar9;
      *(undefined8 *)pFVar9 = 0;
      *(undefined4 *)(pFVar3 + 8) = *(undefined4 *)(pFVar9 + 8);
      *(undefined4 *)(pFVar3 + 0xc) = *(undefined4 *)(pFVar9 + 0xc);
      *(undefined8 *)(pFVar9 + 8) = 0;
    }
    FVar30.Data = local_328 + 8;
    local_328 = FVar30.Data;
    ppFVar35 = local_360;
  }
  if (local_3b4 != '\0') {
    pTVar2 = &local_380->ResultSeedTriangles;
    piVar4 = &(local_380->ResultSeedTriangles).ArrayMax;
    (local_380->ResultSeedTriangles).ArrayNum = 0;
    if ((local_380->ResultSeedTriangles).ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar2->AllocatorInstance,0,piVar4);
    }
    uVar24 = (ulonglong)local_3b0.ArrayNum;
    local_380 = (FMeshPlaneCut *)CONCAT44(local_380._4_4_,local_3b0.ArrayNum);
    local_358 = local_3b0.AllocatorInstance.Data + uVar24 * 4;
    uVar33 = uVar24;
    FVar30.Data = local_3b0.AllocatorInstance.Data;
    while( true ) {
      pFVar9 = local_358;
      lVar28 = 0;
      if ((int)uVar24 != (int)uVar33) {
        local_3b3[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_3b3);
      }
      if (FVar30.Data == pFVar9) break;
      local_3a0[0] = *(uint *)FVar30.Data;
      pFVar9 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar9 <= (FScriptContainerElement *)local_3a0) &&
          ((FScriptContainerElement *)local_3a0 < pFVar9 + (longlong)*piVar4 * 4)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar13 = (code *)swi(3);
        uVar17 = (*pcVar13)();
        return (bool)uVar17;
      }
      iVar27 = (pFVar14->ResultSeedTriangles).ArrayNum;
      if (iVar27 == *piVar4) {
        iVar27 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar2->AllocatorInstance,piVar4);
      }
      (pFVar14->ResultSeedTriangles).ArrayNum = iVar27 + 1;
      *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar27 * 4) = local_3a0[0];
      lVar11 = *(longlong *)
                ((pFVar14->Mesh->TriangleEdges).Blocks.AllocatorInstance.Data +
                (ulonglong)(local_3a0[0] >> 9) * 8);
      local_2d0 = *(undefined8 *)(lVar11 + (ulonglong)(local_3a0[0] & 0x1ff) * 0xc);
      local_2c8 = *(undefined4 *)(lVar11 + 8 + (ulonglong)(local_3a0[0] & 0x1ff) * 0xc);
      do {
        uVar32 = *(uint *)((longlong)&local_2d0 + lVar28 * 4);
        if (*(void **)&pFVar14->EdgeFilterFunc == (void *)0x0) {
LAB_14c838090:
          if (local_138.Elements._8_4_ != local_138.Elements._52_4_) {
            FVar26 = (ForElementType<FSetElementId>)&local_138.Hash;
            if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar26 = local_138.Hash.SecondaryData;
            }
            for (iVar27 = *(int *)((longlong)FVar26 +
                                  (ulonglong)(local_138.HashSize - 1U & uVar32) * 4); iVar27 != -1;
                iVar27 = *(int *)(local_138.Elements._0_8_ + 4 + (longlong)iVar27 * 0xc)) {
              if (*(uint *)(local_138.Elements._0_8_ + (longlong)iVar27 * 0xc) == uVar32)
              goto LAB_14c8382a4;
            }
          }
          if (local_e8.Elements._8_4_ != local_e8.Elements._52_4_) {
            FVar26 = (ForElementType<FSetElementId>)&local_e8.Hash;
            if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar26 = local_e8.Hash.SecondaryData;
            }
            for (iVar27 = *(int *)((longlong)FVar26 +
                                  (ulonglong)(local_e8.HashSize - 1U & uVar32) * 4); iVar27 != -1;
                iVar27 = *(int *)(local_e8.Elements._0_8_ + 4 + (longlong)iVar27 * 0xc)) {
              if (*(uint *)(local_e8.Elements._0_8_ + (longlong)iVar27 * 0xc) == uVar32)
              goto LAB_14c8382a4;
            }
          }
          local_390 = *(undefined8 *)
                       (*(longlong *)
                         ((pFVar14->Mesh->Edges).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar32 >> 9) * 8) + 8 + (ulonglong)(uVar32 & 0x1ff) * 0x10);
          pFVar9 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar9 <= (FScriptContainerElement *)&local_390) &&
              ((FScriptContainerElement *)&local_390 < pFVar9 + (longlong)*piVar4 * 4)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar16)) {
            pcVar13 = (code *)swi(3);
            uVar17 = (*pcVar13)();
            return (bool)uVar17;
          }
          iVar27 = (pFVar14->ResultSeedTriangles).ArrayNum;
          if (iVar27 == *piVar4) {
            iVar27 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar2->AllocatorInstance,piVar4);
          }
          (pFVar14->ResultSeedTriangles).ArrayNum = iVar27 + 1;
          *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar27 * 4) =
               (undefined4)local_390;
          pFVar9 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar9 <= (FScriptContainerElement *)((longlong)&local_390 + 4U)) &&
              ((FScriptContainerElement *)((longlong)&local_390 + 4U) <
               pFVar9 + (longlong)*piVar4 * 4)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar16)) {
            pcVar13 = (code *)swi(3);
            uVar17 = (*pcVar13)();
            return (bool)uVar17;
          }
          iVar27 = (pFVar14->ResultSeedTriangles).ArrayNum;
          if (iVar27 == *piVar4) {
            iVar27 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar2->AllocatorInstance,piVar4);
          }
          (pFVar14->ResultSeedTriangles).ArrayNum = iVar27 + 1;
          *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar27 * 4) = local_390._4_4_
          ;
        }
        else {
          local_370[0] = uVar32;
          Core::Private::Function::CheckCallable(*(void **)&pFVar14->EdgeFilterFunc);
          plVar12 = *(longlong **)&(pFVar14->EdgeFilterFunc).field_0x28;
          pcVar13 = *(code **)&pFVar14->EdgeFilterFunc;
          plVar25 = (longlong *)&(pFVar14->EdgeFilterFunc).field_0x10;
          if (plVar12 != (longlong *)0x0) {
            plVar25 = plVar12;
          }
          uVar20 = (**(code **)(*plVar25 + 8))();
          cVar18 = (*pcVar13)(uVar20,local_370);
          if (cVar18 == '\0') goto LAB_14c838090;
        }
LAB_14c8382a4:
        lVar28 = lVar28 + 1;
      } while (lVar28 < 3);
      uVar24 = local_3b0._8_8_ & 0xffffffff;
      FVar30.Data = FVar30.Data + 4;
      uVar33 = (ulonglong)local_380 & 0xffffffff;
    }
  }
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
            (&local_350.Components);
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  if (local_3b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b0.AllocatorInstance.Data);
  }
  local_190 = 0;
  if (local_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1d8);
LAB_14c838328:
  local_e8.HashSize = 0;
  if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8.Elements);
  local_138.HashSize = 0;
  if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_138.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_138.Elements);
  local_140 = 0;
  if (local_148 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_148);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_188);
  if (local_338.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.AllocatorInstance.Data);
  }
  return true;
}

// TransferTriangleLabelsToHoleFillTriangles @ 14c848af0

void __thiscall
UE::Geometry::FMeshPlaneCut::TransferTriangleLabelsToHoleFillTriangles
          (FMeshPlaneCut *this,TDynamicMeshScalarTriangleAttribute<int> *param_1)

{
  uint *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 local_res18 [8];
  longlong local_res20;
  longlong local_58;
  
  iVar2 = (this->OpenBoundaries).ArrayNum;
  if (iVar2 == (this->HoleFillTriangles).ArrayNum) {
    uVar9 = 0;
    if (0 < iVar2) {
      local_58 = 0;
      lVar10 = 0;
      local_res20 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < (this->HoleFillTriangles).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->HoleFillTriangles).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar9 < (this->OpenBoundaries).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->OpenBoundaries).AllocatorInstance.Data;
        puVar8 = *(uint **)(pFVar3 + lVar10);
        iVar2 = *(int *)(pFVar3 + lVar10 + 8);
        puVar1 = puVar8 + iVar2;
        while( true ) {
          if (*(int *)(pFVar3 + lVar10 + 8) != iVar2) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if (puVar8 == puVar1) break;
          uVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          *(undefined4 *)
           (*(longlong *)(*(longlong *)&param_1->field_0x20 + (ulonglong)(uVar7 >> 9) * 8) +
           (ulonglong)(uVar7 & 0x1ff) * 4) = *(undefined4 *)(pFVar4 + local_58);
        }
        uVar9 = uVar9 + 1;
        local_res20 = local_res20 + 1;
        local_58 = local_58 + 0x30;
        lVar10 = lVar10 + 0x10;
      } while ((int)uVar9 < (this->OpenBoundaries).ArrayNum);
    }
  }
  else {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<416214916899275527>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\MeshPlaneCut.cpp"
                       ,0x307,"OpenBoundaries.Num() == HoleFillTriangles.Num()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// operator() @ 150573fe0

bool __thiscall
`UE::Geometry::FMeshPlaneCut::SplitEdgesOnlyHelper'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<416214916899275196>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<416214916899275196>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150574060

bool __thiscall
`UE::Geometry::FMeshPlaneCut::SplitCrossingEdges'::__l47::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<416214916899274891>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<416214916899274891>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

