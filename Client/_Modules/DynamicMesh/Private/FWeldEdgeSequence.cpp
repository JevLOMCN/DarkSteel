// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 8

// operator() @ 14c7bb7d0

EWeldResult __thiscall
`UE::Geometry::FWeldEdgeSequence::CheckForAndCollapseSideTriangles'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  FDynamicMesh3 *pFVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  EMeshResult EVar5;
  int iStackX_c;
  
  uVar4 = UE::Geometry::FDynamicMesh3::FindEdge
                    (*(FDynamicMesh3 **)(*(longlong *)this + 8),param_1,param_2);
  if (uVar4 != 0xffffffff) {
    if (*(char *)(*(longlong *)this + 0x90) == '\0') {
      return Failed_TriangleDeletionDisabled;
    }
    pFVar1 = *(FDynamicMesh3 **)(*(longlong *)this + 8);
    uVar2 = *(undefined8 *)
             (*(longlong *)
               ((pFVar1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar4 >> 9) * 8) + 8 +
             (ulonglong)(uVar4 & 0x1ff) * 0x10);
    EVar5 = UE::Geometry::FDynamicMesh3::RemoveTriangle(pFVar1,(int)uVar2,true,false);
    if (EVar5 != Ok) {
      return Failed_CannotDeleteTriangle;
    }
    iStackX_c = (int)((ulonglong)uVar2 >> 0x20);
    pFVar1 = *(FDynamicMesh3 **)(*(longlong *)this + 8);
    bVar3 = UE::Geometry::FDynamicMesh3::IsTriangle(pFVar1,iStackX_c);
    if (bVar3) {
      EVar5 = UE::Geometry::FDynamicMesh3::RemoveTriangle(pFVar1,iStackX_c,true,false);
      return -(uint)(EVar5 != Ok) & Failed_CannotDeleteTriangle;
    }
  }
  return Ok;
}

// operator() @ 14c7c2ca0

EWeldResult __thiscall
`UE::Geometry::FWeldEdgeSequence::WeldEdgeSequence'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  longlong *plVar4;
  FDynamicMesh3 *this_00;
  undefined8 uVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  EWeldResult EVar14;
  undefined4 in_register_00000084;
  undefined8 local_res8;
  TVector<double>_u_0 local_158 [3];
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined1 local_c0;
  void *local_80;
  void *local_60;
  char local_48;
  
  local_100 = 0;
  local_c0 = 0;
  local_48 = '\0';
  plVar4 = *(longlong **)(*(longlong *)this + 8);
  uVar13 = (**(code **)(*plVar4 + 0xa0))
                     (plVar4,param_1,CONCAT44(in_register_00000084,param_2),
                      *(undefined8 *)(*(longlong *)this + 0x98),local_108);
  if ((uVar13 < 0x1e) && ((0x25000000U >> (uVar13 & 0x1f) & 1) != 0)) {
    uVar13 = UE::Geometry::FDynamicMesh3::FindEdge
                       (*(FDynamicMesh3 **)(*(longlong *)this + 8),param_1,param_2);
    this_00 = *(FDynamicMesh3 **)(*(longlong *)this + 8);
    if ((-1 < (int)uVar13) &&
       ((int)uVar13 <
        (int)((this_00->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
             (this_00->EdgeRefCounts).RefCounts.CurBlockUsed))) {
      if ((ushort)(*(short *)(*(longlong *)
                               ((this_00->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar13 >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 2) - 1U
                  ) < 0xfffe) {
        uVar5 = *(undefined8 *)
                 (*(longlong *)
                   ((this_00->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar13 >> 9) * 8) +
                  8 + (ulonglong)(uVar13 & 0x1ff) * 0x10);
        local_res8 = uVar5;
        UE::Geometry::FDynamicMesh3::RemoveTriangle(this_00,(int)uVar5,true,false);
        if ((int)((ulonglong)uVar5 >> 0x20) != -1) {
          UE::Geometry::FDynamicMesh3::RemoveTriangle
                    (*(FDynamicMesh3 **)(*(longlong *)this + 8),local_res8._4_4_,true,false);
        }
        goto LAB_14c7c2dcd;
      }
    }
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4608660351406309150>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\WeldEdgeSequence.cpp"
                        ,0xe2,"Mesh->IsEdge(Eid)");
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      EVar14 = (*pcVar10)();
      return EVar14;
    }
LAB_14c7c2fbf:
    EVar14 = Failed_Other;
  }
  else {
    if (uVar13 == 0x17) {
      lVar6 = *(longlong *)this;
      if (*(char *)(lVar6 + 0x91) != '\x01') goto LAB_14c7c2fbf;
      dVar3 = *(double *)(lVar6 + 0x98);
      dVar11 = __real_3ff0000000000000 - dVar3;
      pFVar7 = ((*(FDynamicMesh3 **)(lVar6 + 8))->Vertices).Blocks.AllocatorInstance.Data;
      lVar8 = *(longlong *)(pFVar7 + (ulonglong)((uint)param_2 >> 9) * 8);
      pdVar1 = (double *)(lVar8 + (ulonglong)(param_2 & 0x1ff) * 0x18);
      lVar9 = *(longlong *)(pFVar7 + (ulonglong)((uint)param_1 >> 9) * 8);
      pdVar2 = (double *)(lVar9 + (ulonglong)(param_1 & 0x1ff) * 0x18);
      local_158[0]._0_8_ = dVar3 * *pdVar1 + dVar11 * *pdVar2;
      local_158[0]._16_8_ =
           dVar3 * *(double *)(lVar8 + 0x10 + (ulonglong)(param_2 & 0x1ff) * 0x18) +
           dVar11 * *(double *)(lVar9 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
      local_158[0]._8_8_ = dVar3 * pdVar1[1] + dVar11 * pdVar2[1];
      UE::Geometry::FDynamicMesh3::SetVertex
                (*(FDynamicMesh3 **)(lVar6 + 8),param_1,(TVector<double> *)&local_158[0]._s_0,true);
      UE::Geometry::FDynamicMesh3::SetVertex
                (*(FDynamicMesh3 **)(*(longlong *)this + 8),param_2,
                 (TVector<double> *)&local_158[0]._s_0,true);
      local_res8 = *(undefined8 *)this;
      if (0 < param_3) {
        ``UE::Geometry::FWeldEdgeSequence::WeldEdgeSequence'::__l2::<lambda_1>::operator()'::__l15::
        <lambda_1>::operator()(&local_res8,param_3 + -1);
      }
      if (param_3 < *(int *)(*(longlong *)this + 0x70)) {
        ``UE::Geometry::FWeldEdgeSequence::WeldEdgeSequence'::__l2::<lambda_1>::operator()'::__l15::
        <lambda_1>::operator()(&local_res8,param_3);
      }
    }
    else if (uVar13 != 0) goto LAB_14c7c2fbf;
LAB_14c7c2dcd:
    EVar14 = Ok;
  }
  if (local_48 != '\0') {
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
    if (local_80 != (void *)0x0) {
      FMemory::Free(local_80);
    }
  }
  return EVar14;
}

// CheckForAndCollapseSideTriangles @ 14c7e8130

EWeldResult __thiscall
UE::Geometry::FWeldEdgeSequence::CheckForAndCollapseSideTriangles(FWeldEdgeSequence *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  EWeldResult EVar5;
  uint uVar6;
  uint uVar7;
  FWeldEdgeSequence *local_res8;
  
  iVar1 = (this->EdgeSpanToKeep).Vertices.ArrayNum;
  uVar7 = iVar1 - 1;
  uVar6 = 0;
  if ((int)uVar7 < iVar1) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  local_res8 = this;
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  iVar1 = *(int *)((this->EdgeSpanToKeep).Vertices.AllocatorInstance.Data +
                  (longlong)(this->EdgeSpanToKeep).Vertices.ArrayNum * 4 + -4);
  if ((this->EdgeSpanToDiscard).Vertices.ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  EVar5 = `UE::Geometry::FWeldEdgeSequence::CheckForAndCollapseSideTriangles'::__l2::<lambda_1>::
          operator()(&local_res8,*(int *)(this->EdgeSpanToDiscard).Vertices.AllocatorInstance.Data,
                     iVar1);
  if (EVar5 == Ok) {
    if ((this->EdgeSpanToKeep).Vertices.ArrayNum < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
    }
    iVar1 = (this->EdgeSpanToDiscard).Vertices.ArrayNum;
    uVar7 = iVar1 - 1;
    iVar2 = *(int *)(this->EdgeSpanToKeep).Vertices.AllocatorInstance.Data;
    uVar6 = 0;
    if ((int)uVar7 < iVar1) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
    }
    EVar5 = `UE::Geometry::FWeldEdgeSequence::CheckForAndCollapseSideTriangles'::__l2::<lambda_1>::
            operator()(&local_res8,
                       *(int *)((this->EdgeSpanToDiscard).Vertices.AllocatorInstance.Data +
                               (longlong)(this->EdgeSpanToDiscard).Vertices.ArrayNum * 4 + -4),iVar2
                      );
  }
  return EVar5;
}

// CheckInput @ 14c7e8860

EWeldResult __thiscall UE::Geometry::FWeldEdgeSequence::CheckInput(FWeldEdgeSequence *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  uint uVar3;
  FDynamicMesh3 *pFVar4;
  code *pcVar5;
  bool bVar6;
  EWeldResult EVar7;
  atomic<unsigned_char> *paVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  pFVar9 = (this->EdgeSpanToDiscard).Edges.AllocatorInstance.Data;
  iVar10 = (this->EdgeSpanToDiscard).Edges.ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar10 * 4;
  while( true ) {
    if ((this->EdgeSpanToDiscard).Edges.ArrayNum != iVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    uVar3 = *(uint *)pFVar9;
    pFVar4 = this->Mesh;
    if (((int)uVar3 < 0) ||
       ((int)((pFVar4->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
             (pFVar4->EdgeRefCounts).RefCounts.CurBlockUsed) <= (int)uVar3)) {
LAB_14c7e8913:
      iVar10 = 0x2d;
      paVar8 = &bGEnsureHasExecuted<_4608660351406309331>;
      goto LAB_14c7e89c8;
    }
    lVar2 = (ulonglong)(uVar3 >> 9) * 8;
    if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((pFVar4->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.
                                       Data + lVar2) + (ulonglong)(uVar3 & 0x1ff) * 2) - 1U))
    goto LAB_14c7e8913;
    if (*(int *)(*(longlong *)((pFVar4->Edges).Blocks.AllocatorInstance.Data + lVar2) + 0xc +
                (ulonglong)(uVar3 & 0x1ff) * 0x10) != -1) {
      return Failed_EdgesNotBoundaryEdges;
    }
    pFVar9 = pFVar9 + 4;
  }
  pFVar9 = (this->EdgeSpanToKeep).Edges.AllocatorInstance.Data;
  iVar10 = (this->EdgeSpanToKeep).Edges.ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar10 * 4;
  while( true ) {
    if ((this->EdgeSpanToKeep).Edges.ArrayNum != iVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar9 == pFVar1) {
      FEdgeSpan::SetCorrectOrientation(&this->EdgeSpanToDiscard);
      FEdgeSpan::SetCorrectOrientation(&this->EdgeSpanToKeep);
      return Ok;
    }
    uVar3 = *(uint *)pFVar9;
    pFVar4 = this->Mesh;
    if (((int)uVar3 < 0) ||
       ((int)((pFVar4->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
             (pFVar4->EdgeRefCounts).RefCounts.CurBlockUsed) <= (int)uVar3)) break;
    lVar2 = (ulonglong)(uVar3 >> 9) * 8;
    if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((pFVar4->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.
                                       Data + lVar2) + (ulonglong)(uVar3 & 0x1ff) * 2) - 1U)) break;
    if (*(int *)(*(longlong *)((pFVar4->Edges).Blocks.AllocatorInstance.Data + lVar2) + 0xc +
                (ulonglong)(uVar3 & 0x1ff) * 0x10) != -1) {
      return Failed_EdgesNotBoundaryEdges;
    }
    pFVar9 = pFVar9 + 4;
  }
  iVar10 = 0x35;
  paVar8 = &bGEnsureHasExecuted<_4608660351406309323>;
LAB_14c7e89c8:
  bVar6 = Assert::Private::ExecCheckImplInternal
                    (paVar8,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\WeldEdgeSequence.cpp"
                     ,iVar10,"Mesh->IsEdge(Edge)");
  if (!bVar6) {
    return Failed_EdgesNotBoundaryEdges;
  }
  pcVar5 = (code *)swi(3);
  EVar7 = (*pcVar5)();
  return EVar7;
}

// SplitEdgesToEqualizeSpanLengths @ 14c8383e0

EWeldResult __cdecl
UE::Geometry::FWeldEdgeSequence::SplitEdgesToEqualizeSpanLengths
          (FDynamicMesh3 *param_1,FEdgeSpan *param_2,FEdgeSpan *param_3)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint *puVar3;
  double *pdVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  EWeldResult EVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  FEdgeSpan *pFVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  undefined4 uVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  int local_res10;
  undefined1 local_118 [4];
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined4 local_e4;
  double local_c8;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  undefined1 local_b0 [16];
  double local_90;
  
  iVar17 = (param_2->Vertices).ArrayNum;
  pFVar16 = param_3;
  if (iVar17 < (param_3->Vertices).ArrayNum) {
    pFVar16 = param_2;
  }
  iVar17 = iVar17 - (param_3->Vertices).ArrayNum;
  iVar10 = -iVar17;
  local_res10 = 0;
  if (iVar10 < 0) {
    iVar10 = iVar17;
  }
  if (0 < iVar10) {
    uVar24 = (undefined4)__real_3fe0000000000000;
    pTVar1 = &pFVar16->Edges;
    do {
      uVar14 = 0;
      lVar21 = 0;
      uVar20 = 0xffffffff;
      dVar8 = 0.0;
      uVar19 = 0xffffffff;
      lVar18 = -1;
      if (0 < (pFVar16->Edges).ArrayNum) {
        do {
          uVar15 = ~uVar14 >> 0x1f;
          uVar11 = 0;
          if ((int)uVar14 < (pFVar16->Edges).ArrayNum) {
            uVar11 = uVar15;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            EVar12 = (*pcVar7)();
            return EVar12;
          }
          uVar11 = *(uint *)((pTVar1->AllocatorInstance).Data + lVar21 * 4);
          puVar3 = (uint *)(*(longlong *)
                             ((param_1->Edges).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar11 >> 9) * 8) + (ulonglong)(uVar11 & 0x1ff) * 0x10);
          local_c0 = *puVar3;
          uStack_bc = puVar3[1];
          uStack_b8 = puVar3[2];
          uStack_b4 = puVar3[3];
          lVar5 = *(longlong *)
                   ((param_1->Vertices).Blocks.AllocatorInstance.Data +
                   (ulonglong)(local_c0 >> 9) * 8);
          local_c8 = *(double *)(lVar5 + 0x10 + (ulonglong)(local_c0 & 0x1ff) * 0x18);
          pdVar4 = (double *)(lVar5 + (ulonglong)(local_c0 & 0x1ff) * 0x18);
          dVar23 = *pdVar4;
          dVar22 = pdVar4[1];
          uVar11 = 0;
          if ((int)uVar14 < (pFVar16->Edges).ArrayNum) {
            uVar11 = uVar15;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            EVar12 = (*pcVar7)();
            return EVar12;
          }
          uVar11 = *(uint *)((pTVar1->AllocatorInstance).Data + lVar21 * 4);
          local_b0 = *(undefined1 (*) [16])
                      (*(longlong *)
                        ((param_1->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar11 >> 9) * 8) + (ulonglong)(uVar11 & 0x1ff) * 0x10);
          uVar13 = (ulonglong)(local_b0._4_4_ & 0x1ff);
          lVar5 = *(longlong *)
                   ((param_1->Vertices).Blocks.AllocatorInstance.Data + (local_b0._0_8_ >> 0x29) * 8
                   );
          pdVar4 = (double *)(lVar5 + uVar13 * 0x18);
          local_90 = *(double *)(lVar5 + 0x10 + uVar13 * 0x18);
          dVar23 = *pdVar4 - dVar23;
          dVar22 = pdVar4[1] - dVar22;
          dVar23 = dVar22 * dVar22 + dVar23 * dVar23 + (local_90 - local_c8) * (local_90 - local_c8)
          ;
          if (dVar8 < dVar23) {
            uVar19 = 0;
            if ((int)uVar14 < (pFVar16->Edges).ArrayNum) {
              uVar19 = uVar15;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              EVar12 = (*pcVar7)();
              return EVar12;
            }
            uVar20 = *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar21 * 4);
            lVar18 = lVar21;
            uVar19 = uVar14;
            dVar8 = dVar23;
          }
          uVar14 = uVar14 + 1;
          lVar21 = lVar21 + 1;
        } while ((int)uVar14 < (pFVar16->Edges).ArrayNum);
      }
      local_114 = 0xffffffffffffffff;
      local_10c = 0xffffffffffffffff;
      local_104 = 0xffffffffffffffff;
      local_f4 = 0xffffffffffffffff;
      local_ec = 0xffffffffffffffff;
      local_e4 = 0xffffffff;
      iVar17 = (**(code **)(param_1->_padding_ + 0x30))(param_1,uVar20,local_118,uVar24);
      if (iVar17 != 0) {
        return Failed_CannotSplitEdge;
      }
      pFVar6 = (pFVar16->Vertices).AllocatorInstance.Data;
      if (((pFVar6 <= (FScriptContainerElement *)&local_f8) &&
          ((FScriptContainerElement *)&local_f8 <
           pFVar6 + (longlong)(pFVar16->Vertices).ArrayMax * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        EVar12 = (*pcVar7)();
        return EVar12;
      }
      iVar17 = (pFVar16->Vertices).ArrayNum;
      piVar2 = &(pFVar16->Vertices).ArrayMax;
      if (iVar17 == *piVar2) {
        iVar17 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&(pFVar16->Vertices).AllocatorInstance,piVar2);
      }
      pFVar6 = (pFVar16->Vertices).AllocatorInstance.Data;
      (pFVar16->Vertices).ArrayNum = iVar17 + 1;
      pFVar6 = pFVar6 + lVar18 * 4 + 4;
      memmove(pFVar6 + 4,pFVar6,(longlong)(int)((iVar17 - uVar19) + -1) << 2);
      *(undefined4 *)((pFVar16->Vertices).AllocatorInstance.Data + lVar18 * 4 + 4) = local_f8;
      uVar14 = 0;
      if ((int)uVar19 < (pFVar16->Vertices).ArrayNum) {
        uVar14 = ~uVar19 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        EVar12 = (*pcVar7)();
        return EVar12;
      }
      pFVar6 = (pTVar1->AllocatorInstance).Data;
      if (local_114._4_4_ == *(int *)((pFVar16->Vertices).AllocatorInstance.Data + lVar18 * 4)) {
        if (((pFVar6 <= (FScriptContainerElement *)&local_ec) &&
            ((FScriptContainerElement *)&local_ec < pFVar6 + (longlong)(pFVar16->Edges).ArrayMax * 4
            )) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar9)) {
          pcVar7 = (code *)swi(3);
          EVar12 = (*pcVar7)();
          return EVar12;
        }
        iVar17 = (pFVar16->Edges).ArrayNum;
        piVar2 = &(pFVar16->Edges).ArrayMax;
        if (iVar17 == *piVar2) {
          iVar17 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar1->AllocatorInstance,piVar2);
          (pFVar16->Edges).ArrayNum = iVar17;
        }
        (pFVar16->Edges).ArrayNum = iVar17 + 1;
        pFVar6 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar19 * 4;
        memmove(pFVar6 + 4,pFVar6,(longlong)(int)(iVar17 - uVar19) << 2);
        *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar18 * 4) = (undefined4)local_ec;
      }
      else {
        if (((pFVar6 <= (FScriptContainerElement *)&local_ec) &&
            ((FScriptContainerElement *)&local_ec < pFVar6 + (longlong)(pFVar16->Edges).ArrayMax * 4
            )) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar9)) {
          pcVar7 = (code *)swi(3);
          EVar12 = (*pcVar7)();
          return EVar12;
        }
        iVar17 = (pFVar16->Edges).ArrayNum;
        piVar2 = &(pFVar16->Edges).ArrayMax;
        if (iVar17 == *piVar2) {
          iVar17 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar1->AllocatorInstance,piVar2);
          (pFVar16->Edges).ArrayNum = iVar17;
        }
        pFVar6 = (pTVar1->AllocatorInstance).Data;
        (pFVar16->Edges).ArrayNum = iVar17 + 1;
        pFVar6 = pFVar6 + lVar18 * 4 + 4;
        memmove(pFVar6 + 4,pFVar6,(longlong)(int)((iVar17 - uVar19) + -1) << 2);
        *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar18 * 4 + 4) = (undefined4)local_ec;
      }
      local_res10 = local_res10 + 1;
    } while (local_res10 < iVar10);
  }
  return Ok;
}

// SplitSmallerSpan @ 14c838990

EWeldResult __thiscall UE::Geometry::FWeldEdgeSequence::SplitSmallerSpan(FWeldEdgeSequence *this)

{
  EWeldResult EVar1;
  
  EVar1 = SplitEdgesToEqualizeSpanLengths(this->Mesh,&this->EdgeSpanToKeep,&this->EdgeSpanToDiscard)
  ;
  return EVar1;
}

// Weld @ 14c851370

EWeldResult __thiscall UE::Geometry::FWeldEdgeSequence::Weld(FWeldEdgeSequence *this)

{
  EWeldResult EVar1;
  
  EVar1 = CheckInput(this);
  if (EVar1 == Ok) {
    EVar1 = SplitEdgesToEqualizeSpanLengths
                      (this->Mesh,&this->EdgeSpanToKeep,&this->EdgeSpanToDiscard);
    if (EVar1 == Ok) {
      EVar1 = WeldEdgeSequence(this);
      return EVar1;
    }
  }
  return EVar1;
}

// WeldEdgeSequence @ 14c8513b0

EWeldResult __thiscall UE::Geometry::FWeldEdgeSequence::WeldEdgeSequence(FWeldEdgeSequence *this)

{
  FDynamicMesh3 *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  EWeldResult EVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  longlong local_res8;
  FWeldEdgeSequence *local_res10 [2];
  
  iVar16 = (this->EdgeSpanToKeep).Edges.ArrayNum;
  iVar11 = (this->EdgeSpanToDiscard).Edges.ArrayNum;
  if (((iVar11 != iVar16) || ((this->EdgeSpanToDiscard).Vertices.ArrayNum != iVar11 + 1)) ||
     (iVar11 = (this->EdgeSpanToKeep).Vertices.ArrayNum, iVar11 != iVar16 + 1)) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4608660351406309191>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\WeldEdgeSequence.cpp"
                       ,0xb9,
                       "EdgeSpanToDiscard.Edges.Num() == EdgeSpanToKeep.Edges.Num() && EdgeSpanToDiscard.Vertices.Num() == EdgeSpanToDiscard.Edges.Num() + 1 && EdgeSpanToKeep.Vertices.Num() == EdgeSpanToKeep.Edges.Num() + 1"
                      );
    if (!bVar4) {
      return Failed_Other;
    }
    pcVar3 = (code *)swi(3);
    EVar7 = (*pcVar3)();
    return EVar7;
  }
  uVar15 = 0;
  if (0 < iVar11) {
    local_res8 = 0;
    local_res10[0] = this;
    do {
      uVar12 = (this->EdgeSpanToDiscard).Vertices.ArrayNum + ~uVar15;
      uVar6 = 0;
      if ((int)uVar15 < iVar11) {
        uVar6 = ~uVar15 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar7 = (*pcVar3)();
        return EVar7;
      }
      uVar6 = *(uint *)((this->EdgeSpanToKeep).Vertices.AllocatorInstance.Data + local_res8 * 4);
      uVar8 = 0;
      if ((int)uVar12 < (this->EdgeSpanToDiscard).Vertices.ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar7 = (*pcVar3)();
        return EVar7;
      }
      uVar8 = *(uint *)((this->EdgeSpanToDiscard).Vertices.AllocatorInstance.Data +
                       (longlong)(int)uVar12 * 4);
      lVar13 = local_res8;
      uVar14 = uVar15;
      if (uVar6 != uVar8) {
        pFVar1 = this->Mesh;
        if ((((((int)uVar6 < 0) ||
              (iVar16 = (pFVar1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                        (pFVar1->VertexRefCounts).RefCounts.CurBlockUsed, iVar16 <= (int)uVar6)) ||
             (pFVar2 = (pFVar1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
             0xfffd < (ushort)(*(short *)(*(longlong *)(pFVar2 + (ulonglong)(uVar6 >> 9) * 8) +
                                         (ulonglong)(uVar6 & 0x1ff) * 2) - 1U))) ||
            (((int)uVar8 < 0 || (iVar16 <= (int)uVar8)))) ||
           (0xfffd < (ushort)(*(short *)(*(longlong *)(pFVar2 + (ulonglong)(uVar8 >> 9) * 8) +
                                        (ulonglong)(uVar8 & 0x1ff) * 2) - 1U))) {
          bVar4 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4608660351406309091>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\WeldEdgeSequence.cpp"
                             ,0x11d,"Mesh->IsVertex(KeepVid) && Mesh->IsVertex(DiscardVid)");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            EVar7 = (*pcVar3)();
            return EVar7;
          }
        }
        else {
          iVar16 = FDynamicMesh3::FindEdge(pFVar1,uVar6,uVar8);
          bVar4 = false;
          if ((iVar16 != -1) &&
             (iVar16 = (this->EdgeSpanToKeep).Vertices.ArrayNum, (int)uVar15 < iVar16 + -1)) {
            uVar14 = uVar15 + 1;
            uVar9 = 0;
            if ((int)uVar14 < iVar16) {
              uVar9 = ~uVar14 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              EVar7 = (*pcVar3)();
              return EVar7;
            }
            uVar12 = uVar12 - 1;
            uVar9 = *(uint *)((this->EdgeSpanToKeep).Vertices.AllocatorInstance.Data +
                             local_res8 * 4 + 4);
            uVar10 = 0;
            if ((int)uVar12 < (this->EdgeSpanToDiscard).Vertices.ArrayNum) {
              uVar10 = ~uVar12 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              EVar7 = (*pcVar3)();
              return EVar7;
            }
            uVar12 = *(uint *)((this->EdgeSpanToDiscard).Vertices.AllocatorInstance.Data +
                              (longlong)(int)uVar12 * 4);
            if (uVar9 == uVar12) {
              bVar4 = true;
            }
            else {
              pFVar1 = this->Mesh;
              bVar4 = false;
              if (((((int)uVar9 < 0) ||
                   (iVar16 = (pFVar1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                             (pFVar1->VertexRefCounts).RefCounts.CurBlockUsed, iVar16 <= (int)uVar9)
                   ) || (pFVar2 = (pFVar1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
                        0xfffd < (ushort)(*(short *)(*(longlong *)
                                                      (pFVar2 + (ulonglong)(uVar9 >> 9) * 8) +
                                                    (ulonglong)(uVar9 & 0x1ff) * 2) - 1U))) ||
                 ((((int)uVar12 < 0 || (iVar16 <= (int)uVar12)) ||
                  (0xfffd < (ushort)(*(short *)(*(longlong *)(pFVar2 + (ulonglong)(uVar12 >> 9) * 8)
                                               + (ulonglong)(uVar12 & 0x1ff) * 2) - 1U))))) {
                bVar5 = Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_4608660351406309072>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\WeldEdgeSequence.cpp"
                                   ,0x130,
                                   "Mesh->IsVertex(NextKeepVid) && Mesh->IsVertex(NextDiscardVid)");
                if (bVar5) {
                  pcVar3 = (code *)swi(3);
                  EVar7 = (*pcVar3)();
                  return EVar7;
                }
              }
              else {
                iVar16 = FDynamicMesh3::FindEdge(pFVar1,uVar9,uVar12);
                if (iVar16 == -1) {
                  EVar7 = `UE::Geometry::FWeldEdgeSequence::WeldEdgeSequence'::__l2::<lambda_1>::
                          operator()(local_res10,uVar9,uVar12,uVar14);
                  if (EVar7 != Ok) {
                    return EVar7;
                  }
                  bVar4 = true;
                }
              }
            }
          }
          EVar7 = `UE::Geometry::FWeldEdgeSequence::WeldEdgeSequence'::__l2::<lambda_1>::operator()
                            (local_res10,uVar6,uVar8,uVar15);
          if (EVar7 != Ok) {
            return EVar7;
          }
          lVar13 = local_res8 + 1;
          uVar14 = uVar15 + 1;
          if (!bVar4) {
            lVar13 = local_res8;
            uVar14 = uVar15;
          }
        }
      }
      iVar11 = (this->EdgeSpanToKeep).Vertices.ArrayNum;
      local_res8 = lVar13 + 1;
      uVar15 = uVar14 + 1;
    } while ((int)uVar15 < iVar11);
  }
  return Ok;
}

