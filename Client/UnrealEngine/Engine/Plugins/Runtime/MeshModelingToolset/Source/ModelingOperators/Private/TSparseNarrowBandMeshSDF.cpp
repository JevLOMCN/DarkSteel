// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 50

// <lambda_invoker_cdecl> @ 14c940f40

bool __cdecl
UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::<lambda_43_>::
<lambda_invoker_cdecl>(void)

{
  return false;
}

// <lambda_invoker_cdecl> @ 14c940f60

bool __cdecl
UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::<lambda_45_>::<lambda_invoker_cdecl>(void)

{
  return false;
}

// operator() @ 14c94ec50

void __thiscall
`UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::compute_intersections'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  int *piVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  char cVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 uVar22;
  longlong *plVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  bool bVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double local_158;
  int *local_150;
  undefined1 local_148;
  double local_140;
  double local_138;
  TVector<double>_u_0 local_130;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100 [8];
  
  dVar31 = (double)*(float *)((longlong)this + 0xc);
  dVar11 = (double)*(float *)((longlong)this + 8);
  dVar5 = (double)*(float *)((longlong)this + 0x10);
  dVar33 = __real_3ff0000000000000 / (double)*(float *)((longlong)this + 0x14);
  if ((-1 < param_1) &&
     (plVar2 = *(longlong **)this, param_1 < *(int *)(*(longlong *)(*plVar2 + 8) + 8))) {
    local_158 = dVar11;
    if (param_1 == ((uint)param_1 / 100) * 100) {
      UE::Core::Private::Function::CheckCallable((void *)plVar2[0x12]);
      pcVar3 = (code *)plVar2[0x12];
      plVar23 = plVar2 + 0x14;
      if ((longlong *)plVar2[0x17] != (longlong *)0x0) {
        plVar23 = (longlong *)plVar2[0x17];
      }
      uVar22 = (**(code **)(*plVar23 + 8))();
      cVar14 = (*pcVar3)(uVar22);
      if (cVar14 == '\x01') {
        **(undefined1 **)((longlong)this + 0x38) = 1;
      }
    }
    if (**(char **)((longlong)this + 0x38) == '\0') {
      local_130._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_130._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_130._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_118._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_118._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_118._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_100[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_100[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_100[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      UE::Geometry::
      TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>::
      GetTriVertices((TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>
                      *)**(undefined8 **)this,param_1,(TVector<double> *)&local_130._s_0,
                     (TVector<double> *)&local_118._s_0,(TVector<double> *)&local_100[0]._s_0);
      bVar30 = false;
      if (*(int *)(*(longlong *)this + 0x7c) == 1) {
        bVar30 = 0.0 < ((double)local_100[0]._8_8_ - local_130._s_0.Y) *
                       (local_118._s_0.Z - local_130._s_0.Z) -
                       (local_118._s_0.Y - local_130._s_0.Y) *
                       ((double)local_100[0]._16_8_ - local_130._s_0.Z);
      }
      iVar24 = *(int *)((longlong)this + 0x1c) + -1;
      dVar7 = (local_118._s_0.Y - dVar31) * dVar33;
      dVar10 = local_130._s_0.X - dVar11;
      dVar8 = (local_118._s_0.Z - dVar5) * dVar33;
      dVar11 = local_118._s_0.X - dVar11;
      dVar12 = (double)local_100[0]._0_8_ - local_158;
      dVar6 = (local_130._s_0.Y - dVar31) * dVar33;
      dVar9 = ((double)local_100[0]._8_8_ - dVar31) * dVar33;
      dVar31 = (local_130._s_0.Z - dVar5) * dVar33;
      dVar32 = dVar7;
      if (dVar6 <= dVar7) {
        dVar32 = dVar6;
      }
      dVar5 = ((double)local_100[0]._16_8_ - dVar5) * dVar33;
      if (dVar9 <= dVar32) {
        dVar32 = dVar9;
      }
      dVar13 = dVar7;
      if (dVar7 <= dVar6) {
        dVar13 = dVar6;
      }
      if (dVar13 <= dVar9) {
        dVar13 = dVar9;
      }
      iVar16 = -((int)ROUND(__real_bfe0000000000000 - (dVar32 + dVar32)) >> 1);
      iVar17 = iVar24;
      if (iVar16 < iVar24) {
        iVar17 = iVar16;
      }
      iVar16 = 0;
      if (0 < iVar17) {
        iVar16 = iVar17;
      }
      iVar17 = (int)ROUND((dVar13 + dVar13) - __real_3fe0000000000000) >> 1;
      dVar32 = dVar8;
      if (dVar31 <= dVar8) {
        dVar32 = dVar31;
      }
      if (iVar17 < iVar24) {
        iVar24 = iVar17;
      }
      if (dVar5 <= dVar32) {
        dVar32 = dVar5;
      }
      iVar17 = 0;
      if (0 < iVar24) {
        iVar17 = iVar24;
      }
      iVar24 = *(int *)((longlong)this + 0x20) + -1;
      dVar13 = dVar8;
      if (dVar8 <= dVar31) {
        dVar13 = dVar31;
      }
      if (dVar13 <= dVar5) {
        dVar13 = dVar5;
      }
      iVar18 = -((int)ROUND(__real_bfe0000000000000 - (dVar32 + dVar32)) >> 1);
      iVar29 = iVar24;
      if (iVar18 < iVar24) {
        iVar29 = iVar18;
      }
      iVar18 = (int)ROUND((dVar13 + dVar13) - __real_3fe0000000000000) >> 1;
      if (iVar18 < iVar24) {
        iVar24 = iVar18;
      }
      iVar18 = 0;
      if (0 < iVar24) {
        iVar18 = iVar24;
      }
      piVar4 = *(int **)((longlong)this + 0x30);
      local_150 = piVar4;
      local_148 = bVar30;
      iVar24 = 0;
      if (0 < iVar29) {
        iVar24 = iVar29;
      }
      for (; iVar24 <= iVar18; iVar24 = iVar24 + 1) {
        if (iVar16 <= iVar17) {
          iVar29 = iVar16;
          do {
            bVar15 = UE::Geometry::PointInTriangle2d
                               ((double)iVar29,(double)iVar24,dVar6,dVar31,dVar7,dVar8,dVar9,dVar5,
                                &local_140,&local_158,&local_138);
            if (bVar15) {
              dVar32 = local_158 * dVar11 * dVar33 + local_140 * dVar10 * dVar33 +
                       local_138 * dVar12 * dVar33;
              iVar25 = -((int)ROUND(__real_bfe0000000000000 - (dVar32 + dVar32)) >> 1);
              if (iVar25 < 0) {
                uVar26 = iVar29 >> 0x1f & 7;
                uVar19 = iVar29 + uVar26;
                uVar27 = iVar24 >> 0x1f & 7;
                uVar20 = iVar24 + uVar27;
                uVar28 = (((int)uVar20 >> 3) * piVar4[1] + ((int)uVar19 >> 3)) * *piVar4;
                uVar21 = 0;
                if ((int)uVar28 < piVar4[8]) {
                  uVar21 = ~uVar28 >> 0x1f;
                }
                if ((uVar21 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                iVar25 = 1;
                if (bVar30 != false) {
                  iVar25 = -1;
                }
                LOCK();
                piVar1 = (int *)(*(longlong *)
                                  (*(longlong *)(piVar4 + 6) + (longlong)(int)uVar28 * 8) +
                                (ulonglong)
                                ((((uVar19 & 7) - uVar26) + ((uVar20 & 7) - uVar27) * 8) * 8) * 4);
                *piVar1 = *piVar1 + iVar25;
                UNLOCK();
              }
              else if (iVar25 < *(int *)((longlong)this + 0x18)) {
                ``UE::Geometry::
                TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
                ::compute_intersections'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
                operator()(&local_150,iVar25,iVar29,iVar24);
              }
            }
            iVar29 = iVar29 + 1;
          } while (iVar29 <= iVar17);
        }
      }
    }
  }
  return;
}

// operator() @ 14c94f210

void __thiscall
`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::compute_intersections'::__l2::
<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  char cVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 uVar24;
  longlong *plVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  bool bVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double local_res20;
  int *local_158;
  undefined1 local_150;
  double local_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  
  plVar3 = *(longlong **)this;
  lVar4 = *plVar3;
  dVar37 = (double)*(float *)((longlong)this + 8);
  dVar38 = (double)*(float *)((longlong)this + 0xc);
  local_res20 = (double)*(float *)((longlong)this + 0x10);
  dVar39 = __real_3ff0000000000000 / (double)*(float *)((longlong)this + 0x14);
  if ((-1 < param_1) && (param_1 < *(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144))) {
    uVar27 = (ulonglong)(param_1 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar4 + 0x148) + (ulonglong)((uint)param_1 >> 9) * 8) +
                           uVar27 * 2) - 1U) < 0xfffe) {
      if (param_1 == ((uint)param_1 / 100) * 100) {
        UE::Core::Private::Function::CheckCallable((void *)plVar3[0x12]);
        pcVar5 = (code *)plVar3[0x12];
        plVar25 = plVar3 + 0x14;
        if ((longlong *)plVar3[0x17] != (longlong *)0x0) {
          plVar25 = (longlong *)plVar3[0x17];
        }
        uVar24 = (**(code **)(*plVar25 + 8))();
        cVar16 = (*pcVar5)(uVar24);
        if (cVar16 == '\x01') {
          **(undefined1 **)((longlong)this + 0x38) = 1;
        }
      }
      if (**(char **)((longlong)this + 0x38) == '\0') {
        bVar34 = false;
        lVar4 = **(longlong **)this;
        lVar6 = *(longlong *)(lVar4 + 0x10);
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
        uVar23 = *(uint *)(lVar4 + uVar27 * 0xc);
        uVar26 = (ulonglong)(uVar23 & 0x1ff);
        lVar7 = *(longlong *)(lVar6 + (ulonglong)(uVar23 >> 9) * 8);
        pdVar1 = (double *)(lVar7 + uVar26 * 0x18);
        local_138 = *pdVar1;
        dStack_130 = pdVar1[1];
        local_128 = *(double *)(lVar7 + 0x10 + uVar26 * 0x18);
        uVar23 = *(uint *)(lVar4 + 4 + uVar27 * 0xc);
        uVar26 = (ulonglong)(uVar23 & 0x1ff);
        lVar7 = *(longlong *)(lVar6 + (ulonglong)(uVar23 >> 9) * 8);
        uVar23 = *(uint *)(lVar4 + 8 + uVar27 * 0xc);
        pdVar1 = (double *)(lVar7 + uVar26 * 0x18);
        local_120 = *pdVar1;
        dStack_118 = pdVar1[1];
        local_110 = *(double *)(lVar7 + 0x10 + uVar26 * 0x18);
        uVar27 = (ulonglong)(uVar23 & 0x1ff);
        lVar4 = *(longlong *)(lVar6 + (ulonglong)(uVar23 >> 9) * 8);
        pdVar1 = (double *)(lVar4 + uVar27 * 0x18);
        local_108 = *pdVar1;
        dStack_100 = pdVar1[1];
        local_f8 = *(double *)(lVar4 + 0x10 + uVar27 * 0x18);
        if (*(int *)((longlong)*(longlong **)this + 0x7c) == 1) {
          bVar34 = 0.0 < (dStack_100 - dStack_130) * (local_110 - local_128) -
                         (dStack_118 - dStack_130) * (local_f8 - local_128);
        }
        piVar8 = *(int **)((longlong)this + 0x30);
        iVar28 = *(int *)((longlong)this + 0x1c) + -1;
        dVar10 = (dStack_118 - dVar38) * dVar39;
        dVar12 = (local_110 - local_res20) * dVar39;
        dVar9 = (dStack_130 - dVar38) * dVar39;
        dVar11 = (dStack_100 - dVar38) * dVar39;
        dVar38 = (local_128 - local_res20) * dVar39;
        dVar14 = local_138 - dVar37;
        dVar36 = dVar10;
        if (dVar9 <= dVar10) {
          dVar36 = dVar9;
        }
        dVar13 = (local_f8 - local_res20) * dVar39;
        dVar15 = local_120 - dVar37;
        dVar37 = local_108 - dVar37;
        if (dVar11 <= dVar36) {
          dVar36 = dVar11;
        }
        dVar35 = dVar10;
        if (dVar10 <= dVar9) {
          dVar35 = dVar9;
        }
        if (dVar35 <= dVar11) {
          dVar35 = dVar11;
        }
        iVar18 = -((int)ROUND(__real_bfe0000000000000 - (dVar36 + dVar36)) >> 1);
        iVar19 = iVar28;
        if (iVar18 < iVar28) {
          iVar19 = iVar18;
        }
        iVar18 = 0;
        if (0 < iVar19) {
          iVar18 = iVar19;
        }
        iVar19 = (int)ROUND((dVar35 + dVar35) - __real_3fe0000000000000) >> 1;
        dVar36 = dVar12;
        if (dVar38 <= dVar12) {
          dVar36 = dVar38;
        }
        if (iVar19 < iVar28) {
          iVar28 = iVar19;
        }
        if (dVar13 <= dVar36) {
          dVar36 = dVar13;
        }
        iVar19 = 0;
        if (0 < iVar28) {
          iVar19 = iVar28;
        }
        iVar28 = *(int *)((longlong)this + 0x20) + -1;
        dVar35 = dVar12;
        if (dVar12 <= dVar38) {
          dVar35 = dVar38;
        }
        if (dVar35 <= dVar13) {
          dVar35 = dVar13;
        }
        iVar20 = -((int)ROUND(__real_bfe0000000000000 - (dVar36 + dVar36)) >> 1);
        iVar33 = iVar28;
        if (iVar20 < iVar28) {
          iVar33 = iVar20;
        }
        iVar20 = (int)ROUND((dVar35 + dVar35) - __real_3fe0000000000000) >> 1;
        if (iVar20 < iVar28) {
          iVar28 = iVar20;
        }
        iVar20 = 0;
        if (0 < iVar28) {
          iVar20 = iVar28;
        }
        local_158 = piVar8;
        local_150 = bVar34;
        iVar28 = 0;
        if (0 < iVar33) {
          iVar28 = iVar33;
        }
        for (; iVar28 <= iVar20; iVar28 = iVar28 + 1) {
          if (iVar18 <= iVar19) {
            iVar33 = iVar18;
            do {
              bVar17 = UE::Geometry::PointInTriangle2d
                                 ((double)iVar33,(double)iVar28,dVar9,dVar38,dVar10,dVar12,dVar11,
                                  dVar13,&local_148,&local_res20,&local_140);
              if (bVar17) {
                dVar36 = local_res20 * dVar15 * dVar39 + local_148 * dVar14 * dVar39 +
                         local_140 * dVar37 * dVar39;
                iVar29 = -((int)ROUND(__real_bfe0000000000000 - (dVar36 + dVar36)) >> 1);
                if (iVar29 < 0) {
                  uVar30 = iVar33 >> 0x1f & 7;
                  uVar21 = iVar33 + uVar30;
                  uVar31 = iVar28 >> 0x1f & 7;
                  uVar22 = iVar28 + uVar31;
                  uVar32 = (((int)uVar22 >> 3) * piVar8[1] + ((int)uVar21 >> 3)) * *piVar8;
                  uVar23 = 0;
                  if ((int)uVar32 < piVar8[8]) {
                    uVar23 = ~uVar32 >> 0x1f;
                  }
                  if ((uVar23 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  iVar29 = 1;
                  if (bVar34 != false) {
                    iVar29 = -1;
                  }
                  LOCK();
                  piVar2 = (int *)(*(longlong *)
                                    (*(longlong *)(piVar8 + 6) + (longlong)(int)uVar32 * 8) +
                                  (ulonglong)
                                  ((((uVar21 & 7) - uVar30) + ((uVar22 & 7) - uVar31) * 8) * 8) * 4)
                  ;
                  *piVar2 = *piVar2 + iVar29;
                  UNLOCK();
                }
                else if (iVar29 < *(int *)((longlong)this + 0x18)) {
                  ``UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::
                  compute_intersections'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
                  operator()(&local_158,iVar29,iVar33,iVar28);
                }
              }
              iVar33 = iVar33 + 1;
            } while (iVar33 <= iVar19);
          }
        }
      }
    }
  }
  return;
}

// operator() @ 14c94f880

void __thiscall
`UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::compute_tri_bboxes'::__l2::<lambda_1>::operator()
          (void *this,int param_1,FVector3i *param_2,FVector3i *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0;
  TVector<double>_u_0 local_88 [5];
  
  local_88[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_88[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_88[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_b8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_b8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_b8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_a0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_a0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_a0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  UE::Geometry::
  TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>::
  GetTriVertices((TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>
                  *)**(undefined8 **)this,param_1,(TVector<double> *)&local_b8._s_0,
                 (TVector<double> *)&local_a0._s_0,(TVector<double> *)&local_88[0]._s_0);
  dVar1 = *(double *)((longlong)this + 0x18);
  dVar2 = *(double *)((longlong)this + 0x20);
  dVar3 = *(double *)((longlong)this + 0x28);
  dVar10 = *(double *)((longlong)this + 0x30);
  iVar8 = *(int *)((longlong)this + 0xc) + -1;
  dVar4 = (local_a0._s_0.X - dVar2) * dVar1;
  dVar5 = (local_b8._s_0.X - dVar2) * dVar1;
  dVar12 = ((double)local_88[0]._0_8_ - dVar2) * dVar1;
  dVar2 = (local_a0._s_0.Y - dVar3) * dVar1;
  dVar9 = dVar4;
  if (dVar5 <= dVar4) {
    dVar9 = dVar5;
  }
  dVar6 = (local_b8._s_0.Y - dVar3) * dVar1;
  dVar13 = ((double)local_88[0]._8_8_ - dVar3) * dVar1;
  dVar3 = (local_b8._s_0.Z - dVar10) * dVar1;
  if (dVar12 <= dVar9) {
    dVar9 = dVar12;
  }
  dVar11 = (local_a0._s_0.Z - dVar10) * dVar1;
  dVar1 = ((double)local_88[0]._16_8_ - dVar10) * dVar1;
  iVar7 = (int)dVar9 - *(int *)((longlong)this + 8);
  dVar10 = dVar2;
  if (dVar6 <= dVar2) {
    dVar10 = dVar6;
  }
  if (iVar7 < iVar8) {
    iVar8 = iVar7;
  }
  if (dVar13 <= dVar10) {
    dVar10 = dVar13;
  }
  iVar7 = 0;
  if (0 < iVar8) {
    iVar7 = iVar8;
  }
  (param_2->field0_0x0)._s_0.X = iVar7;
  iVar8 = *(int *)((longlong)this + 0x10) + -1;
  iVar7 = (int)dVar10 - *(int *)((longlong)this + 8);
  if (iVar7 < iVar8) {
    iVar8 = iVar7;
  }
  iVar7 = 0;
  if (0 < iVar8) {
    iVar7 = iVar8;
  }
  (param_2->field0_0x0)._s_0.Y = iVar7;
  if (dVar4 <= dVar5) {
    dVar4 = dVar5;
  }
  if (dVar2 <= dVar6) {
    dVar2 = dVar6;
  }
  iVar8 = *(int *)((longlong)this + 0x14) + -1;
  dVar10 = dVar11;
  if (dVar11 <= dVar3) {
    dVar10 = dVar3;
  }
  if (dVar3 <= dVar11) {
    dVar11 = dVar3;
  }
  if (dVar4 <= dVar12) {
    dVar4 = dVar12;
  }
  if (dVar2 <= dVar13) {
    dVar2 = dVar13;
  }
  if (dVar10 <= dVar1) {
    dVar10 = dVar1;
  }
  if (dVar1 <= dVar11) {
    dVar11 = dVar1;
  }
  iVar7 = (int)dVar11 - *(int *)((longlong)this + 8);
  if (iVar7 < iVar8) {
    iVar8 = iVar7;
  }
  iVar7 = 0;
  if (0 < iVar8) {
    iVar7 = iVar8;
  }
  (param_2->field0_0x0)._s_0.Z = iVar7;
  iVar8 = *(int *)((longlong)this + 0xc) + -1;
  iVar7 = *(int *)((longlong)this + 8) + 1 + (int)dVar4;
  if (iVar7 < iVar8) {
    iVar8 = iVar7;
  }
  iVar7 = 0;
  if (0 < iVar8) {
    iVar7 = iVar8;
  }
  (param_3->field0_0x0)._s_0.X = iVar7;
  iVar7 = *(int *)((longlong)this + 8) + 1 + (int)dVar2;
  iVar8 = *(int *)((longlong)this + 0x10) + -1;
  if (iVar7 < iVar8) {
    iVar8 = iVar7;
  }
  iVar7 = 0;
  if (0 < iVar8) {
    iVar7 = iVar8;
  }
  (param_3->field0_0x0)._s_0.Y = iVar7;
  iVar7 = *(int *)((longlong)this + 8) + 1 + (int)dVar10;
  iVar8 = *(int *)((longlong)this + 0x14) + -1;
  if (iVar7 < iVar8) {
    iVar8 = iVar7;
  }
  iVar7 = 0;
  if (0 < iVar8) {
    iVar7 = iVar8;
  }
  (param_3->field0_0x0)._s_0.Z = iVar7;
  return;
}

// operator() @ 14c94faf0

void __thiscall
`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::compute_tri_bboxes'::__l2::
<lambda_1>::operator()(void *this,int param_1,FVector3i *param_2,FVector3i *param_3)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  dVar3 = *(double *)((longlong)this + 0x18);
  dVar21 = *(double *)((longlong)this + 0x20);
  dVar19 = *(double *)((longlong)this + 0x28);
  dVar4 = *(double *)((longlong)this + 0x30);
  uVar14 = (ulonglong)(param_1 & 0x1ff);
  lVar6 = *(longlong *)(**(longlong **)this + 0x10);
  lVar7 = *(longlong *)
           (*(longlong *)(**(longlong **)this + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
  uVar5 = *(uint *)(lVar7 + uVar14 * 0xc);
  uVar17 = (ulonglong)(uVar5 & 0x1ff);
  lVar8 = *(longlong *)(lVar6 + (ulonglong)(uVar5 >> 9) * 8);
  pdVar1 = (double *)(lVar8 + uVar17 * 0x18);
  uVar5 = *(uint *)(lVar7 + 4 + uVar14 * 0xc);
  uVar16 = (ulonglong)(uVar5 & 0x1ff);
  dVar12 = (*(double *)(lVar8 + 0x10 + uVar17 * 0x18) - dVar4) * dVar3;
  lVar8 = *(longlong *)(lVar6 + (ulonglong)(uVar5 >> 9) * 8);
  dVar9 = (*pdVar1 - dVar21) * dVar3;
  pdVar2 = (double *)(lVar8 + uVar16 * 0x18);
  uVar5 = *(uint *)(lVar7 + 8 + uVar14 * 0xc);
  dVar11 = (pdVar1[1] - dVar19) * dVar3;
  uVar14 = (ulonglong)(uVar5 & 0x1ff);
  dVar20 = (*(double *)(lVar8 + 0x10 + uVar16 * 0x18) - dVar4) * dVar3;
  lVar6 = *(longlong *)(lVar6 + (ulonglong)(uVar5 >> 9) * 8);
  dVar22 = (*pdVar2 - dVar21) * dVar3;
  pdVar1 = (double *)(lVar6 + uVar14 * 0x18);
  dVar10 = (pdVar2[1] - dVar19) * dVar3;
  iVar15 = *(int *)((longlong)this + 0xc) + -1;
  dVar18 = dVar22;
  if (dVar9 <= dVar22) {
    dVar18 = dVar9;
  }
  dVar4 = (*(double *)(lVar6 + 0x10 + uVar14 * 0x18) - dVar4) * dVar3;
  dVar21 = (*pdVar1 - dVar21) * dVar3;
  dVar3 = (pdVar1[1] - dVar19) * dVar3;
  if (dVar21 <= dVar18) {
    dVar18 = dVar21;
  }
  iVar13 = (int)dVar18 - *(int *)((longlong)this + 8);
  if (iVar13 < iVar15) {
    iVar15 = iVar13;
  }
  if (dVar22 <= dVar9) {
    dVar22 = dVar9;
  }
  dVar19 = dVar10;
  if (dVar11 <= dVar10) {
    dVar19 = dVar11;
  }
  iVar13 = 0;
  if (0 < iVar15) {
    iVar13 = iVar15;
  }
  if (dVar10 <= dVar11) {
    dVar10 = dVar11;
  }
  (param_2->field0_0x0)._s_0.X = iVar13;
  if (dVar22 <= dVar21) {
    dVar22 = dVar21;
  }
  iVar15 = *(int *)((longlong)this + 0x10) + -1;
  if (dVar3 <= dVar19) {
    dVar19 = dVar3;
  }
  if (dVar10 <= dVar3) {
    dVar10 = dVar3;
  }
  dVar3 = dVar20;
  if (dVar20 <= dVar12) {
    dVar3 = dVar12;
  }
  iVar13 = (int)dVar19 - *(int *)((longlong)this + 8);
  if (dVar12 <= dVar20) {
    dVar20 = dVar12;
  }
  if (iVar13 < iVar15) {
    iVar15 = iVar13;
  }
  if (dVar3 <= dVar4) {
    dVar3 = dVar4;
  }
  if (dVar4 <= dVar20) {
    dVar20 = dVar4;
  }
  iVar13 = 0;
  if (0 < iVar15) {
    iVar13 = iVar15;
  }
  (param_2->field0_0x0)._s_0.Y = iVar13;
  iVar15 = *(int *)((longlong)this + 0x14) + -1;
  iVar13 = (int)dVar20 - *(int *)((longlong)this + 8);
  if (iVar13 < iVar15) {
    iVar15 = iVar13;
  }
  iVar13 = 0;
  if (0 < iVar15) {
    iVar13 = iVar15;
  }
  (param_2->field0_0x0)._s_0.Z = iVar13;
  iVar15 = *(int *)((longlong)this + 0xc) + -1;
  iVar13 = *(int *)((longlong)this + 8) + 1 + (int)dVar22;
  if (iVar13 < iVar15) {
    iVar15 = iVar13;
  }
  iVar13 = 0;
  if (0 < iVar15) {
    iVar13 = iVar15;
  }
  (param_3->field0_0x0)._s_0.X = iVar13;
  iVar13 = *(int *)((longlong)this + 8) + 1 + (int)dVar10;
  iVar15 = *(int *)((longlong)this + 0x10) + -1;
  if (iVar13 < iVar15) {
    iVar15 = iVar13;
  }
  iVar13 = 0;
  if (0 < iVar15) {
    iVar13 = iVar15;
  }
  (param_3->field0_0x0)._s_0.Y = iVar13;
  iVar13 = *(int *)((longlong)this + 8) + 1 + (int)dVar3;
  iVar15 = *(int *)((longlong)this + 0x14) + -1;
  if (iVar13 < iVar15) {
    iVar15 = iVar13;
  }
  iVar13 = 0;
  if (0 < iVar15) {
    iVar13 = iVar15;
  }
  (param_3->field0_0x0)._s_0.Z = iVar13;
  return;
}

// operator() @ 14c950380

void __thiscall
`UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::scatter_tris'::__l3::<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  code *pcVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  int iVar15;
  
  piVar1 = (int *)(**(longlong **)((longlong)this + 8) + (longlong)param_1 * 0x18);
  if (((*(int *)(**(longlong **)((longlong)this + 8) + (longlong)param_1 * 0x18) <= piVar1[3]) &&
      (piVar1[1] <= piVar1[4])) && (piVar1[2] <= piVar1[5])) {
    if (param_1 == (param_1 / 100) * 100) {
      lVar7 = *(longlong *)this;
      UE::Core::Private::Function::CheckCallable(*(void **)(lVar7 + 0x90));
      pcVar8 = *(code **)(lVar7 + 0x90);
      plVar14 = (longlong *)(lVar7 + 0xa0);
      if (*(longlong **)(lVar7 + 0xb8) != (longlong *)0x0) {
        plVar14 = *(longlong **)(lVar7 + 0xb8);
      }
      uVar13 = (**(code **)(*plVar14 + 8))();
      uVar12 = (*pcVar8)(uVar13);
      **(undefined1 **)((longlong)this + 0x18) = uVar12;
    }
    if (**(char **)((longlong)this + 0x18) == '\0') {
      iVar2 = *piVar1;
      piVar9 = *(int **)((longlong)this + 0x10);
      iVar3 = piVar1[1];
      iVar4 = piVar1[3];
      iVar5 = piVar1[4];
      iVar6 = piVar1[5];
      for (iVar15 = (int)((piVar1[2] >> 0x1f & 7U) + piVar1[2]) >> 3;
          iVar10 = (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,
          iVar15 <= (int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3; iVar15 = iVar15 + 1) {
        for (; iVar11 = (int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
            iVar10 <= (int)((iVar5 >> 0x1f & 7U) + iVar5) >> 3; iVar10 = iVar10 + 1) {
          for (; iVar11 <= (int)((iVar4 >> 0x1f & 7U) + iVar4) >> 3; iVar11 = iVar11 + 1) {
            LOCK();
            piVar1 = (int *)(*(longlong *)(piVar9 + 6) +
                            (longlong)((iVar15 * piVar9[1] + iVar10) * *piVar9 + iVar11) * 4);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
        }
      }
    }
  }
  return;
}

// operator() @ 14c950500

void __thiscall
`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::scatter_tris'::__l3::
<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  code *pcVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  int iVar15;
  
  piVar1 = (int *)(**(longlong **)((longlong)this + 8) + (longlong)param_1 * 0x18);
  if (((*(int *)(**(longlong **)((longlong)this + 8) + (longlong)param_1 * 0x18) <= piVar1[3]) &&
      (piVar1[1] <= piVar1[4])) && (piVar1[2] <= piVar1[5])) {
    if (param_1 == (param_1 / 100) * 100) {
      lVar7 = *(longlong *)this;
      UE::Core::Private::Function::CheckCallable(*(void **)(lVar7 + 0x90));
      pcVar8 = *(code **)(lVar7 + 0x90);
      plVar14 = (longlong *)(lVar7 + 0xa0);
      if (*(longlong **)(lVar7 + 0xb8) != (longlong *)0x0) {
        plVar14 = *(longlong **)(lVar7 + 0xb8);
      }
      uVar13 = (**(code **)(*plVar14 + 8))();
      uVar12 = (*pcVar8)(uVar13);
      **(undefined1 **)((longlong)this + 0x18) = uVar12;
    }
    if (**(char **)((longlong)this + 0x18) == '\0') {
      iVar2 = *piVar1;
      piVar9 = *(int **)((longlong)this + 0x10);
      iVar3 = piVar1[1];
      iVar4 = piVar1[3];
      iVar5 = piVar1[4];
      iVar6 = piVar1[5];
      for (iVar15 = (int)((piVar1[2] >> 0x1f & 7U) + piVar1[2]) >> 3;
          iVar10 = (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,
          iVar15 <= (int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3; iVar15 = iVar15 + 1) {
        for (; iVar11 = (int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
            iVar10 <= (int)((iVar5 >> 0x1f & 7U) + iVar5) >> 3; iVar10 = iVar10 + 1) {
          for (; iVar11 <= (int)((iVar4 >> 0x1f & 7U) + iVar4) >> 3; iVar11 = iVar11 + 1) {
            LOCK();
            piVar1 = (int *)(*(longlong *)(piVar9 + 6) +
                            (longlong)((iVar15 * piVar9[1] + iVar10) * *piVar9 + iVar11) * 4);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
        }
      }
    }
  }
  return;
}

// operator() @ 14c9508c0

void __thiscall
`UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::compute_signs'::__l5::<lambda_1>::operator()(void *this,int param_1)

{
  code *pcVar1;
  TBasicBlockedDenseGrid3<float,8> *this_00;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  uint *puVar12;
  TBlockData3<float,8> *pTVar13;
  longlong *plVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  int iVar24;
  int iVar25;
  int iVar26;
  uint local_148 [72];
  ulonglong uVar23;
  
  if (param_1 == (param_1 / 10) * 10) {
    lVar15 = *(longlong *)this;
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar15 + 0x90));
    pcVar1 = *(code **)(lVar15 + 0x90);
    plVar14 = (longlong *)(lVar15 + 0xa0);
    if (*(longlong **)(lVar15 + 0xb8) != (longlong *)0x0) {
      plVar14 = *(longlong **)(lVar15 + 0xb8);
    }
    uVar11 = (**(code **)(*plVar14 + 8))();
    cVar8 = (*pcVar1)(uVar11);
    if (cVar8 == '\x01') {
      **(undefined1 **)((longlong)this + 0x28) = 1;
    }
  }
  uVar7 = __xmm_80000000800000008000000080000000;
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (**(char **)((longlong)this + 0x28) == '\0') {
    lVar15 = 2;
    puVar12 = local_148;
    do {
      puVar12[0] = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      puVar12[3] = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[6] = 0;
      puVar12[7] = 0;
      puVar12[8] = 0;
      puVar12[9] = 0;
      puVar12[10] = 0;
      puVar12[0xb] = 0;
      puVar12[0xc] = 0;
      puVar12[0xd] = 0;
      puVar12[0xe] = 0;
      puVar12[0xf] = 0;
      puVar12[0x10] = 0;
      puVar12[0x11] = 0;
      puVar12[0x12] = 0;
      puVar12[0x13] = 0;
      puVar12[0x14] = 0;
      puVar12[0x15] = 0;
      puVar12[0x16] = 0;
      puVar12[0x17] = 0;
      puVar12[0x18] = 0;
      puVar12[0x19] = 0;
      puVar12[0x1a] = 0;
      puVar12[0x1b] = 0;
      puVar12[0x1c] = 0;
      puVar12[0x1d] = 0;
      puVar12[0x1e] = 0;
      puVar12[0x1f] = 0;
      lVar15 = lVar15 + -1;
      puVar12 = puVar12 + 0x20;
    } while (lVar15 != 0);
    iVar26 = 0;
    iVar5 = param_1 / *(int *)((longlong)this + 0xc);
    iVar24 = param_1 % *(int *)((longlong)this + 0xc);
    if (0 < *(int *)((longlong)this + 8)) {
      do {
        this_00 = *(TBasicBlockedDenseGrid3<float,8> **)((longlong)this + 0x18);
        iVar25 = (int)this_00->_padding_;
        pFVar2 = (this_00->Blocks).AllocatorInstance.Data;
        iVar16 = (iVar5 * *(int *)((longlong)&this_00->_padding_ + 4) + iVar24) * iVar25 + iVar26;
        if (*(longlong *)(pFVar2 + (longlong)iVar16 * 0x10) == 0) {
          iVar17 = 0;
          uVar19 = 2;
          lVar15 = 4;
          iVar16 = *(int *)(*(longlong *)this + 0x7c);
          do {
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 - 2])) {
LAB_14c950d0a:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 - 2] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c950d0a;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 - 1])) {
LAB_14c950d36:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 - 1] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c950d36;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19])) {
LAB_14c950d62:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c950d62;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 + 1])) {
LAB_14c950d8e:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 + 1] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c950d8e;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 + 2])) {
LAB_14c950dba:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 + 2] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c950dba;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 + 3])) {
LAB_14c950de6:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 + 3] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c950de6;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 + 4])) {
LAB_14c950e12:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 + 4] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c950e12;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 + 5])) {
LAB_14c950e3e:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 + 5] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c950e3e;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 + 6])) {
LAB_14c950e6a:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 + 6] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c950e6a;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 + 7])) {
LAB_14c950e96:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 + 7] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c950e96;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 + 8])) {
LAB_14c950ec2:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 + 8] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c950ec2;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 + 9])) {
LAB_14c950eee:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 + 9] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c950eee;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 + 10])) {
LAB_14c950f1a:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 + 10] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c950f1a;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 + 0xb])) {
LAB_14c950f46:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 + 0xb] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c950f46;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 + 0xc])) {
LAB_14c950f72:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 + 0xc] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c950f72;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 + 0xd])) {
LAB_14c950f9e:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 + 0xd] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c950f9e;
            }
            uVar19 = uVar19 + 0x10;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          if (iVar17 != 0) {
            iVar16 = *(int *)((longlong)&this_00->_padding_ + 4);
            if (iVar17 == 0x40) {
              lVar15 = (longlong)((iVar5 * iVar16 + iVar24) * iVar25 + iVar26);
              *(uint *)(pFVar2 + lVar15 * 0x10 + 8) =
                   *(uint *)(pFVar2 + lVar15 * 0x10 + 8) & uVar6 ^ uVar7;
              pvVar4 = *(void **)(pFVar2 + lVar15 * 0x10);
              if (pvVar4 != (void *)0x0) {
                *(undefined8 *)(pFVar2 + lVar15 * 0x10) = 0;
                ::operator_delete(pvVar4,0x804);
              }
            }
            else {
              pTVar13 = UE::Geometry::TBasicBlockedDenseGrid3<float,8>::TouchBlockData
                                  (this_00,(iVar5 * iVar16 + iVar24) * iVar25 + iVar26);
              lVar15 = *(longlong *)this;
              uVar19 = 0;
              do {
                uVar22 = uVar19 * 8;
                lVar20 = 8;
                uVar21 = uVar19;
                do {
                  uVar9 = local_148[uVar21];
                  if (*(int *)(lVar15 + 0x7c) == 1) {
                    if (0 < (int)uVar9) {
LAB_14c95102f:
                      (pTVar13->Data).Elements[uVar22] =
                           (float)((uint)(pTVar13->Data).Elements[uVar22] & uVar6 ^ uVar7);
                    }
                  }
                  else if (*(int *)(lVar15 + 0x7c) == 0) {
                    uVar10 = uVar9 & 0x80000001;
                    if ((int)uVar10 < 0) {
                      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                    }
                    if (uVar10 == 1) goto LAB_14c95102f;
                  }
                  iVar25 = uVar21 * 8;
                  if (*(int *)(lVar15 + 0x7c) == 1) {
                    if (0 < (int)uVar9) {
LAB_14c951075:
                      (pTVar13->Data).Elements[iVar25 + 1U] =
                           (float)((uint)(pTVar13->Data).Elements[iVar25 + 1U] & uVar6 ^ uVar7);
                    }
                  }
                  else if (*(int *)(lVar15 + 0x7c) == 0) {
                    uVar10 = uVar9 & 0x80000001;
                    if ((int)uVar10 < 0) {
                      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                    }
                    if (uVar10 == 1) goto LAB_14c951075;
                  }
                  if (*(int *)(lVar15 + 0x7c) == 1) {
                    if (0 < (int)uVar9) {
LAB_14c9510b5:
                      (pTVar13->Data).Elements[iVar25 + 2U] =
                           (float)((uint)(pTVar13->Data).Elements[iVar25 + 2U] & uVar6 ^ uVar7);
                    }
                  }
                  else if (*(int *)(lVar15 + 0x7c) == 0) {
                    uVar10 = uVar9 & 0x80000001;
                    if ((int)uVar10 < 0) {
                      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                    }
                    if (uVar10 == 1) goto LAB_14c9510b5;
                  }
                  if (*(int *)(lVar15 + 0x7c) == 1) {
                    if (0 < (int)uVar9) {
LAB_14c9510f5:
                      (pTVar13->Data).Elements[iVar25 + 3U] =
                           (float)((uint)(pTVar13->Data).Elements[iVar25 + 3U] & uVar6 ^ uVar7);
                    }
                  }
                  else if (*(int *)(lVar15 + 0x7c) == 0) {
                    uVar10 = uVar9 & 0x80000001;
                    if ((int)uVar10 < 0) {
                      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                    }
                    if (uVar10 == 1) goto LAB_14c9510f5;
                  }
                  if (*(int *)(lVar15 + 0x7c) == 1) {
                    if (0 < (int)uVar9) {
LAB_14c951135:
                      (pTVar13->Data).Elements[iVar25 + 4U] =
                           (float)((uint)(pTVar13->Data).Elements[iVar25 + 4U] & uVar6 ^ uVar7);
                    }
                  }
                  else if (*(int *)(lVar15 + 0x7c) == 0) {
                    uVar10 = uVar9 & 0x80000001;
                    if ((int)uVar10 < 0) {
                      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                    }
                    if (uVar10 == 1) goto LAB_14c951135;
                  }
                  if (*(int *)(lVar15 + 0x7c) == 1) {
                    if (0 < (int)uVar9) {
LAB_14c951175:
                      (pTVar13->Data).Elements[iVar25 + 5U] =
                           (float)((uint)(pTVar13->Data).Elements[iVar25 + 5U] & uVar6 ^ uVar7);
                    }
                  }
                  else if (*(int *)(lVar15 + 0x7c) == 0) {
                    uVar10 = uVar9 & 0x80000001;
                    if ((int)uVar10 < 0) {
                      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                    }
                    if (uVar10 == 1) goto LAB_14c951175;
                  }
                  if (*(int *)(lVar15 + 0x7c) == 1) {
                    if (0 < (int)uVar9) {
LAB_14c9511b5:
                      (pTVar13->Data).Elements[iVar25 + 6U] =
                           (float)((uint)(pTVar13->Data).Elements[iVar25 + 6U] & uVar6 ^ uVar7);
                    }
                  }
                  else if (*(int *)(lVar15 + 0x7c) == 0) {
                    uVar10 = uVar9 & 0x80000001;
                    if ((int)uVar10 < 0) {
                      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                    }
                    if (uVar10 == 1) goto LAB_14c9511b5;
                  }
                  if (*(int *)(lVar15 + 0x7c) == 1) {
                    if (0 < (int)uVar9) {
LAB_14c9511f4:
                      (pTVar13->Data).Elements[iVar25 + 7U] =
                           (float)((uint)(pTVar13->Data).Elements[iVar25 + 7U] & uVar6 ^ uVar7);
                    }
                  }
                  else if (*(int *)(lVar15 + 0x7c) == 0) {
                    uVar9 = uVar9 & 0x80000001;
                    if ((int)uVar9 < 0) {
                      uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
                    }
                    if (uVar9 == 1) goto LAB_14c9511f4;
                  }
                  uVar21 = uVar21 + 1;
                  uVar22 = uVar22 + 8;
                  lVar20 = lVar20 + -1;
                } while (lVar20 != 0);
                uVar19 = uVar19 + 8;
              } while (uVar19 != 0x40);
            }
          }
        }
        else {
          pTVar13 = UE::Geometry::TBasicBlockedDenseGrid3<float,8>::TouchBlockData(this_00,iVar16);
          piVar3 = *(int **)((longlong)this + 0x20);
          lVar15 = *(longlong *)this;
          iVar25 = 0;
          lVar20 = *(longlong *)
                    (*(longlong *)(piVar3 + 8) +
                    (longlong)((iVar5 * piVar3[1] + iVar24) * *piVar3 + iVar26) * 0x10);
          do {
            uVar19 = iVar25 * 8;
            lVar18 = 8;
            do {
              uVar22 = uVar19 * 8;
              uVar23 = (ulonglong)uVar22;
              uVar21 = *(int *)(lVar20 + 4 + uVar23 * 4) + local_148[uVar19];
              if (*(int *)(lVar15 + 0x7c) == 1) {
                if (0 < (int)uVar21) {
LAB_14c950a9b:
                  (pTVar13->Data).Elements[uVar23] =
                       (float)((uint)(pTVar13->Data).Elements[uVar23] & uVar6 ^ uVar7);
                }
              }
              else if (*(int *)(lVar15 + 0x7c) == 0) {
                uVar9 = uVar21 & 0x80000001;
                if ((int)uVar9 < 0) {
                  uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
                }
                if (uVar9 == 1) goto LAB_14c950a9b;
              }
              uVar9 = uVar22 + 1;
              uVar21 = *(int *)(lVar20 + 4 + (ulonglong)uVar9 * 4) + uVar21;
              if (*(int *)(lVar15 + 0x7c) == 1) {
                if (0 < (int)uVar21) {
LAB_14c950ae4:
                  (pTVar13->Data).Elements[uVar9] =
                       (float)((uint)(pTVar13->Data).Elements[uVar9] & uVar6 ^ uVar7);
                }
              }
              else if (*(int *)(lVar15 + 0x7c) == 0) {
                uVar10 = uVar21 & 0x80000001;
                if ((int)uVar10 < 0) {
                  uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                }
                if (uVar10 == 1) goto LAB_14c950ae4;
              }
              uVar9 = uVar22 + 2;
              uVar21 = uVar21 + *(int *)(lVar20 + 4 + (ulonglong)uVar9 * 4);
              if (*(int *)(lVar15 + 0x7c) == 1) {
                if (0 < (int)uVar21) {
LAB_14c950b2a:
                  (pTVar13->Data).Elements[uVar9] =
                       (float)((uint)(pTVar13->Data).Elements[uVar9] & uVar6 ^ uVar7);
                }
              }
              else if (*(int *)(lVar15 + 0x7c) == 0) {
                uVar10 = uVar21 & 0x80000001;
                if ((int)uVar10 < 0) {
                  uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                }
                if (uVar10 == 1) goto LAB_14c950b2a;
              }
              uVar9 = uVar22 + 3;
              uVar21 = uVar21 + *(int *)(lVar20 + 4 + (ulonglong)uVar9 * 4);
              if (*(int *)(lVar15 + 0x7c) == 1) {
                if (0 < (int)uVar21) {
LAB_14c950b70:
                  (pTVar13->Data).Elements[uVar9] =
                       (float)((uint)(pTVar13->Data).Elements[uVar9] & uVar6 ^ uVar7);
                }
              }
              else if (*(int *)(lVar15 + 0x7c) == 0) {
                uVar10 = uVar21 & 0x80000001;
                if ((int)uVar10 < 0) {
                  uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                }
                if (uVar10 == 1) goto LAB_14c950b70;
              }
              uVar9 = uVar22 + 4;
              uVar21 = uVar21 + *(int *)(lVar20 + 4 + (ulonglong)uVar9 * 4);
              if (*(int *)(lVar15 + 0x7c) == 1) {
                if (0 < (int)uVar21) {
LAB_14c950bb6:
                  (pTVar13->Data).Elements[uVar9] =
                       (float)((uint)(pTVar13->Data).Elements[uVar9] & uVar6 ^ uVar7);
                }
              }
              else if (*(int *)(lVar15 + 0x7c) == 0) {
                uVar10 = uVar21 & 0x80000001;
                if ((int)uVar10 < 0) {
                  uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                }
                if (uVar10 == 1) goto LAB_14c950bb6;
              }
              uVar9 = uVar22 + 5;
              uVar21 = uVar21 + *(int *)(lVar20 + 4 + (ulonglong)uVar9 * 4);
              if (*(int *)(lVar15 + 0x7c) == 1) {
                if (0 < (int)uVar21) {
LAB_14c950bfc:
                  (pTVar13->Data).Elements[uVar9] =
                       (float)((uint)(pTVar13->Data).Elements[uVar9] & uVar6 ^ uVar7);
                }
              }
              else if (*(int *)(lVar15 + 0x7c) == 0) {
                uVar10 = uVar21 & 0x80000001;
                if ((int)uVar10 < 0) {
                  uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                }
                if (uVar10 == 1) goto LAB_14c950bfc;
              }
              uVar9 = uVar22 + 6;
              uVar21 = uVar21 + *(int *)(lVar20 + 4 + (ulonglong)uVar9 * 4);
              if (*(int *)(lVar15 + 0x7c) == 1) {
                if (0 < (int)uVar21) {
LAB_14c950c42:
                  (pTVar13->Data).Elements[uVar9] =
                       (float)((uint)(pTVar13->Data).Elements[uVar9] & uVar6 ^ uVar7);
                }
              }
              else if (*(int *)(lVar15 + 0x7c) == 0) {
                uVar10 = uVar21 & 0x80000001;
                if ((int)uVar10 < 0) {
                  uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                }
                if (uVar10 == 1) goto LAB_14c950c42;
              }
              uVar22 = uVar22 + 7;
              uVar21 = uVar21 + *(int *)(lVar20 + 4 + (ulonglong)uVar22 * 4);
              iVar16 = *(int *)(lVar15 + 0x7c);
              local_148[uVar19] = uVar21;
              if (iVar16 == 1) {
                if (0 < (int)uVar21) {
LAB_14c950c8b:
                  (pTVar13->Data).Elements[uVar22] =
                       (float)((uint)(pTVar13->Data).Elements[uVar22] & uVar6 ^ uVar7);
                }
              }
              else if (iVar16 == 0) {
                uVar21 = uVar21 & 0x80000001;
                if ((int)uVar21 < 0) {
                  uVar21 = (uVar21 - 1 | 0xfffffffe) + 1;
                }
                if (uVar21 == 1) goto LAB_14c950c8b;
              }
              uVar19 = uVar19 + 1;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            iVar25 = iVar25 + 1;
          } while (iVar25 < 8);
        }
        iVar26 = iVar26 + 1;
      } while (iVar26 < *(int *)((longlong)this + 8));
    }
  }
  return;
}

// operator() @ 14c9512c0

void __thiscall
`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::compute_signs'::__l5::
<lambda_1>::operator()(void *this,int param_1)

{
  code *pcVar1;
  TBasicBlockedDenseGrid3<float,8> *this_00;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  uint *puVar12;
  TBlockData3<float,8> *pTVar13;
  longlong *plVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  int iVar24;
  int iVar25;
  int iVar26;
  uint local_148 [72];
  ulonglong uVar23;
  
  if (param_1 == (param_1 / 10) * 10) {
    lVar15 = *(longlong *)this;
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar15 + 0x90));
    pcVar1 = *(code **)(lVar15 + 0x90);
    plVar14 = (longlong *)(lVar15 + 0xa0);
    if (*(longlong **)(lVar15 + 0xb8) != (longlong *)0x0) {
      plVar14 = *(longlong **)(lVar15 + 0xb8);
    }
    uVar11 = (**(code **)(*plVar14 + 8))();
    cVar8 = (*pcVar1)(uVar11);
    if (cVar8 == '\x01') {
      **(undefined1 **)((longlong)this + 0x28) = 1;
    }
  }
  uVar7 = __xmm_80000000800000008000000080000000;
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (**(char **)((longlong)this + 0x28) == '\0') {
    lVar15 = 2;
    puVar12 = local_148;
    do {
      puVar12[0] = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      puVar12[3] = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[6] = 0;
      puVar12[7] = 0;
      puVar12[8] = 0;
      puVar12[9] = 0;
      puVar12[10] = 0;
      puVar12[0xb] = 0;
      puVar12[0xc] = 0;
      puVar12[0xd] = 0;
      puVar12[0xe] = 0;
      puVar12[0xf] = 0;
      puVar12[0x10] = 0;
      puVar12[0x11] = 0;
      puVar12[0x12] = 0;
      puVar12[0x13] = 0;
      puVar12[0x14] = 0;
      puVar12[0x15] = 0;
      puVar12[0x16] = 0;
      puVar12[0x17] = 0;
      puVar12[0x18] = 0;
      puVar12[0x19] = 0;
      puVar12[0x1a] = 0;
      puVar12[0x1b] = 0;
      puVar12[0x1c] = 0;
      puVar12[0x1d] = 0;
      puVar12[0x1e] = 0;
      puVar12[0x1f] = 0;
      lVar15 = lVar15 + -1;
      puVar12 = puVar12 + 0x20;
    } while (lVar15 != 0);
    iVar26 = 0;
    iVar5 = param_1 / *(int *)((longlong)this + 0xc);
    iVar24 = param_1 % *(int *)((longlong)this + 0xc);
    if (0 < *(int *)((longlong)this + 8)) {
      do {
        this_00 = *(TBasicBlockedDenseGrid3<float,8> **)((longlong)this + 0x18);
        iVar25 = (int)this_00->_padding_;
        pFVar2 = (this_00->Blocks).AllocatorInstance.Data;
        iVar16 = (iVar5 * *(int *)((longlong)&this_00->_padding_ + 4) + iVar24) * iVar25 + iVar26;
        if (*(longlong *)(pFVar2 + (longlong)iVar16 * 0x10) == 0) {
          iVar17 = 0;
          uVar19 = 2;
          lVar15 = 4;
          iVar16 = *(int *)(*(longlong *)this + 0x7c);
          do {
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 - 2])) {
LAB_14c95170a:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 - 2] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c95170a;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 - 1])) {
LAB_14c951736:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 - 1] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c951736;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19])) {
LAB_14c951762:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c951762;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 + 1])) {
LAB_14c95178e:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 + 1] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c95178e;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 + 2])) {
LAB_14c9517ba:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 + 2] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c9517ba;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 + 3])) {
LAB_14c9517e6:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 + 3] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c9517e6;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 + 4])) {
LAB_14c951812:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 + 4] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c951812;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 + 5])) {
LAB_14c95183e:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 + 5] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c95183e;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 + 6])) {
LAB_14c95186a:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 + 6] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c95186a;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 + 7])) {
LAB_14c951896:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 + 7] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c951896;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 + 8])) {
LAB_14c9518c2:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 + 8] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c9518c2;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 + 9])) {
LAB_14c9518ee:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 + 9] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c9518ee;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 + 10])) {
LAB_14c95191a:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 + 10] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c95191a;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 + 0xb])) {
LAB_14c951946:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 + 0xb] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c951946;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 + 0xc])) {
LAB_14c951972:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 + 0xc] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c951972;
            }
            if ((iVar16 == 1) && (0 < (int)local_148[uVar19 + 0xd])) {
LAB_14c95199e:
              iVar17 = iVar17 + 1;
            }
            else if (iVar16 == 0) {
              uVar22 = local_148[uVar19 + 0xd] & 0x80000001;
              if ((int)uVar22 < 0) {
                uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
              }
              if (uVar22 == 1) goto LAB_14c95199e;
            }
            uVar19 = uVar19 + 0x10;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          if (iVar17 != 0) {
            iVar16 = *(int *)((longlong)&this_00->_padding_ + 4);
            if (iVar17 == 0x40) {
              lVar15 = (longlong)((iVar5 * iVar16 + iVar24) * iVar25 + iVar26);
              *(uint *)(pFVar2 + lVar15 * 0x10 + 8) =
                   *(uint *)(pFVar2 + lVar15 * 0x10 + 8) & uVar6 ^ uVar7;
              pvVar4 = *(void **)(pFVar2 + lVar15 * 0x10);
              if (pvVar4 != (void *)0x0) {
                *(undefined8 *)(pFVar2 + lVar15 * 0x10) = 0;
                ::operator_delete(pvVar4,0x804);
              }
            }
            else {
              pTVar13 = UE::Geometry::TBasicBlockedDenseGrid3<float,8>::TouchBlockData
                                  (this_00,(iVar5 * iVar16 + iVar24) * iVar25 + iVar26);
              lVar15 = *(longlong *)this;
              uVar19 = 0;
              do {
                uVar22 = uVar19 * 8;
                lVar20 = 8;
                uVar21 = uVar19;
                do {
                  uVar9 = local_148[uVar21];
                  if (*(int *)(lVar15 + 0x7c) == 1) {
                    if (0 < (int)uVar9) {
LAB_14c951a2f:
                      (pTVar13->Data).Elements[uVar22] =
                           (float)((uint)(pTVar13->Data).Elements[uVar22] & uVar6 ^ uVar7);
                    }
                  }
                  else if (*(int *)(lVar15 + 0x7c) == 0) {
                    uVar10 = uVar9 & 0x80000001;
                    if ((int)uVar10 < 0) {
                      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                    }
                    if (uVar10 == 1) goto LAB_14c951a2f;
                  }
                  iVar25 = uVar21 * 8;
                  if (*(int *)(lVar15 + 0x7c) == 1) {
                    if (0 < (int)uVar9) {
LAB_14c951a75:
                      (pTVar13->Data).Elements[iVar25 + 1U] =
                           (float)((uint)(pTVar13->Data).Elements[iVar25 + 1U] & uVar6 ^ uVar7);
                    }
                  }
                  else if (*(int *)(lVar15 + 0x7c) == 0) {
                    uVar10 = uVar9 & 0x80000001;
                    if ((int)uVar10 < 0) {
                      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                    }
                    if (uVar10 == 1) goto LAB_14c951a75;
                  }
                  if (*(int *)(lVar15 + 0x7c) == 1) {
                    if (0 < (int)uVar9) {
LAB_14c951ab5:
                      (pTVar13->Data).Elements[iVar25 + 2U] =
                           (float)((uint)(pTVar13->Data).Elements[iVar25 + 2U] & uVar6 ^ uVar7);
                    }
                  }
                  else if (*(int *)(lVar15 + 0x7c) == 0) {
                    uVar10 = uVar9 & 0x80000001;
                    if ((int)uVar10 < 0) {
                      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                    }
                    if (uVar10 == 1) goto LAB_14c951ab5;
                  }
                  if (*(int *)(lVar15 + 0x7c) == 1) {
                    if (0 < (int)uVar9) {
LAB_14c951af5:
                      (pTVar13->Data).Elements[iVar25 + 3U] =
                           (float)((uint)(pTVar13->Data).Elements[iVar25 + 3U] & uVar6 ^ uVar7);
                    }
                  }
                  else if (*(int *)(lVar15 + 0x7c) == 0) {
                    uVar10 = uVar9 & 0x80000001;
                    if ((int)uVar10 < 0) {
                      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                    }
                    if (uVar10 == 1) goto LAB_14c951af5;
                  }
                  if (*(int *)(lVar15 + 0x7c) == 1) {
                    if (0 < (int)uVar9) {
LAB_14c951b35:
                      (pTVar13->Data).Elements[iVar25 + 4U] =
                           (float)((uint)(pTVar13->Data).Elements[iVar25 + 4U] & uVar6 ^ uVar7);
                    }
                  }
                  else if (*(int *)(lVar15 + 0x7c) == 0) {
                    uVar10 = uVar9 & 0x80000001;
                    if ((int)uVar10 < 0) {
                      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                    }
                    if (uVar10 == 1) goto LAB_14c951b35;
                  }
                  if (*(int *)(lVar15 + 0x7c) == 1) {
                    if (0 < (int)uVar9) {
LAB_14c951b75:
                      (pTVar13->Data).Elements[iVar25 + 5U] =
                           (float)((uint)(pTVar13->Data).Elements[iVar25 + 5U] & uVar6 ^ uVar7);
                    }
                  }
                  else if (*(int *)(lVar15 + 0x7c) == 0) {
                    uVar10 = uVar9 & 0x80000001;
                    if ((int)uVar10 < 0) {
                      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                    }
                    if (uVar10 == 1) goto LAB_14c951b75;
                  }
                  if (*(int *)(lVar15 + 0x7c) == 1) {
                    if (0 < (int)uVar9) {
LAB_14c951bb5:
                      (pTVar13->Data).Elements[iVar25 + 6U] =
                           (float)((uint)(pTVar13->Data).Elements[iVar25 + 6U] & uVar6 ^ uVar7);
                    }
                  }
                  else if (*(int *)(lVar15 + 0x7c) == 0) {
                    uVar10 = uVar9 & 0x80000001;
                    if ((int)uVar10 < 0) {
                      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                    }
                    if (uVar10 == 1) goto LAB_14c951bb5;
                  }
                  if (*(int *)(lVar15 + 0x7c) == 1) {
                    if (0 < (int)uVar9) {
LAB_14c951bf4:
                      (pTVar13->Data).Elements[iVar25 + 7U] =
                           (float)((uint)(pTVar13->Data).Elements[iVar25 + 7U] & uVar6 ^ uVar7);
                    }
                  }
                  else if (*(int *)(lVar15 + 0x7c) == 0) {
                    uVar9 = uVar9 & 0x80000001;
                    if ((int)uVar9 < 0) {
                      uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
                    }
                    if (uVar9 == 1) goto LAB_14c951bf4;
                  }
                  uVar21 = uVar21 + 1;
                  uVar22 = uVar22 + 8;
                  lVar20 = lVar20 + -1;
                } while (lVar20 != 0);
                uVar19 = uVar19 + 8;
              } while (uVar19 != 0x40);
            }
          }
        }
        else {
          pTVar13 = UE::Geometry::TBasicBlockedDenseGrid3<float,8>::TouchBlockData(this_00,iVar16);
          piVar3 = *(int **)((longlong)this + 0x20);
          lVar15 = *(longlong *)this;
          iVar25 = 0;
          lVar20 = *(longlong *)
                    (*(longlong *)(piVar3 + 8) +
                    (longlong)((iVar5 * piVar3[1] + iVar24) * *piVar3 + iVar26) * 0x10);
          do {
            uVar19 = iVar25 * 8;
            lVar18 = 8;
            do {
              uVar22 = uVar19 * 8;
              uVar23 = (ulonglong)uVar22;
              uVar21 = *(int *)(lVar20 + 4 + uVar23 * 4) + local_148[uVar19];
              if (*(int *)(lVar15 + 0x7c) == 1) {
                if (0 < (int)uVar21) {
LAB_14c95149b:
                  (pTVar13->Data).Elements[uVar23] =
                       (float)((uint)(pTVar13->Data).Elements[uVar23] & uVar6 ^ uVar7);
                }
              }
              else if (*(int *)(lVar15 + 0x7c) == 0) {
                uVar9 = uVar21 & 0x80000001;
                if ((int)uVar9 < 0) {
                  uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
                }
                if (uVar9 == 1) goto LAB_14c95149b;
              }
              uVar9 = uVar22 + 1;
              uVar21 = *(int *)(lVar20 + 4 + (ulonglong)uVar9 * 4) + uVar21;
              if (*(int *)(lVar15 + 0x7c) == 1) {
                if (0 < (int)uVar21) {
LAB_14c9514e4:
                  (pTVar13->Data).Elements[uVar9] =
                       (float)((uint)(pTVar13->Data).Elements[uVar9] & uVar6 ^ uVar7);
                }
              }
              else if (*(int *)(lVar15 + 0x7c) == 0) {
                uVar10 = uVar21 & 0x80000001;
                if ((int)uVar10 < 0) {
                  uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                }
                if (uVar10 == 1) goto LAB_14c9514e4;
              }
              uVar9 = uVar22 + 2;
              uVar21 = uVar21 + *(int *)(lVar20 + 4 + (ulonglong)uVar9 * 4);
              if (*(int *)(lVar15 + 0x7c) == 1) {
                if (0 < (int)uVar21) {
LAB_14c95152a:
                  (pTVar13->Data).Elements[uVar9] =
                       (float)((uint)(pTVar13->Data).Elements[uVar9] & uVar6 ^ uVar7);
                }
              }
              else if (*(int *)(lVar15 + 0x7c) == 0) {
                uVar10 = uVar21 & 0x80000001;
                if ((int)uVar10 < 0) {
                  uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                }
                if (uVar10 == 1) goto LAB_14c95152a;
              }
              uVar9 = uVar22 + 3;
              uVar21 = uVar21 + *(int *)(lVar20 + 4 + (ulonglong)uVar9 * 4);
              if (*(int *)(lVar15 + 0x7c) == 1) {
                if (0 < (int)uVar21) {
LAB_14c951570:
                  (pTVar13->Data).Elements[uVar9] =
                       (float)((uint)(pTVar13->Data).Elements[uVar9] & uVar6 ^ uVar7);
                }
              }
              else if (*(int *)(lVar15 + 0x7c) == 0) {
                uVar10 = uVar21 & 0x80000001;
                if ((int)uVar10 < 0) {
                  uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                }
                if (uVar10 == 1) goto LAB_14c951570;
              }
              uVar9 = uVar22 + 4;
              uVar21 = uVar21 + *(int *)(lVar20 + 4 + (ulonglong)uVar9 * 4);
              if (*(int *)(lVar15 + 0x7c) == 1) {
                if (0 < (int)uVar21) {
LAB_14c9515b6:
                  (pTVar13->Data).Elements[uVar9] =
                       (float)((uint)(pTVar13->Data).Elements[uVar9] & uVar6 ^ uVar7);
                }
              }
              else if (*(int *)(lVar15 + 0x7c) == 0) {
                uVar10 = uVar21 & 0x80000001;
                if ((int)uVar10 < 0) {
                  uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                }
                if (uVar10 == 1) goto LAB_14c9515b6;
              }
              uVar9 = uVar22 + 5;
              uVar21 = uVar21 + *(int *)(lVar20 + 4 + (ulonglong)uVar9 * 4);
              if (*(int *)(lVar15 + 0x7c) == 1) {
                if (0 < (int)uVar21) {
LAB_14c9515fc:
                  (pTVar13->Data).Elements[uVar9] =
                       (float)((uint)(pTVar13->Data).Elements[uVar9] & uVar6 ^ uVar7);
                }
              }
              else if (*(int *)(lVar15 + 0x7c) == 0) {
                uVar10 = uVar21 & 0x80000001;
                if ((int)uVar10 < 0) {
                  uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                }
                if (uVar10 == 1) goto LAB_14c9515fc;
              }
              uVar9 = uVar22 + 6;
              uVar21 = uVar21 + *(int *)(lVar20 + 4 + (ulonglong)uVar9 * 4);
              if (*(int *)(lVar15 + 0x7c) == 1) {
                if (0 < (int)uVar21) {
LAB_14c951642:
                  (pTVar13->Data).Elements[uVar9] =
                       (float)((uint)(pTVar13->Data).Elements[uVar9] & uVar6 ^ uVar7);
                }
              }
              else if (*(int *)(lVar15 + 0x7c) == 0) {
                uVar10 = uVar21 & 0x80000001;
                if ((int)uVar10 < 0) {
                  uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                }
                if (uVar10 == 1) goto LAB_14c951642;
              }
              uVar22 = uVar22 + 7;
              uVar21 = uVar21 + *(int *)(lVar20 + 4 + (ulonglong)uVar22 * 4);
              iVar16 = *(int *)(lVar15 + 0x7c);
              local_148[uVar19] = uVar21;
              if (iVar16 == 1) {
                if (0 < (int)uVar21) {
LAB_14c95168b:
                  (pTVar13->Data).Elements[uVar22] =
                       (float)((uint)(pTVar13->Data).Elements[uVar22] & uVar6 ^ uVar7);
                }
              }
              else if (iVar16 == 0) {
                uVar21 = uVar21 & 0x80000001;
                if ((int)uVar21 < 0) {
                  uVar21 = (uVar21 - 1 | 0xfffffffe) + 1;
                }
                if (uVar21 == 1) goto LAB_14c95168b;
              }
              uVar19 = uVar19 + 1;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            iVar25 = iVar25 + 1;
          } while (iVar25 < 8);
        }
        iVar26 = iVar26 + 1;
      } while (iVar26 < *(int *)((longlong)this + 8));
    }
  }
  return;
}

// operator() @ 14c951cc0

/* WARNING: Removing unreachable block (ram,0x00014c951db4) */

void __thiscall
`UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::update_signs'::__l5::<lambda_1>::operator()(void *this,int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  ulonglong uVar8;
  code *pcVar9;
  uint uVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  uint *puVar16;
  uint uVar17;
  double local_58;
  double local_50;
  double local_48;
  
  plVar15 = *(longlong **)((longlong)this + 8);
  uVar17 = 0;
  uVar13 = 0;
  if (param_1 < (int)plVar15[1]) {
    uVar13 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar10 = __xmm_80000000800000008000000080000000;
  piVar6 = *(int **)((longlong)this + 0x10);
  iVar2 = piVar6[1];
  puVar16 = *(uint **)(*plVar15 + (longlong)param_1 * 8);
  uVar13 = *puVar16;
  iVar3 = *piVar6;
  uVar8 = (longlong)(int)uVar13 / (longlong)iVar3;
  iVar4 = *piVar6;
  uVar5 = *puVar16;
  do {
    puVar16 = puVar16 + 1;
    fVar1 = *(float *)((longlong)this + 0x24);
    local_58 = (double)((float)(int)((uVar17 & 7) + ((int)uVar13 % iVar3) * 8) * fVar1 +
                       *(float *)((longlong)this + 0x18));
    lVar7 = *(longlong *)this;
    local_50 = (double)((float)(int)((uVar17 >> 3 & 0x80000007) +
                                    (int)((longlong)
                                          ((ulonglong)(uint)((int)uVar8 >> 0x1f) << 0x20 |
                                          uVar8 & 0xffffffff) % (longlong)iVar2) * 8) * fVar1 +
                       *(float *)((longlong)this + 0x1c));
    local_48 = (double)((float)(int)((uVar17 >> 6) + ((int)uVar5 / (iVar2 * iVar4)) * 8) * fVar1 +
                       *(float *)((longlong)this + 0x20));
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar7 + 0x10));
    pcVar9 = *(code **)(lVar7 + 0x10);
    plVar15 = (longlong *)(lVar7 + 0x20);
    if (*(longlong **)(lVar7 + 0x38) != (longlong *)0x0) {
      plVar15 = *(longlong **)(lVar7 + 0x38);
    }
    uVar14 = (**(code **)(*plVar15 + 8))();
    cVar12 = (*pcVar9)(uVar14,&local_58);
    if (cVar12 != '\0') {
      *puVar16 = *puVar16 ^ uVar10;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x200);
  return;
}

// operator() @ 14c951e80

/* WARNING: Removing unreachable block (ram,0x00014c951f74) */

void __thiscall
`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::update_signs'::__l5::
<lambda_1>::operator()(void *this,int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  ulonglong uVar8;
  code *pcVar9;
  uint uVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  uint *puVar16;
  uint uVar17;
  double local_58;
  double local_50;
  double local_48;
  
  plVar15 = *(longlong **)((longlong)this + 8);
  uVar17 = 0;
  uVar13 = 0;
  if (param_1 < (int)plVar15[1]) {
    uVar13 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar10 = __xmm_80000000800000008000000080000000;
  piVar6 = *(int **)((longlong)this + 0x10);
  iVar2 = piVar6[1];
  puVar16 = *(uint **)(*plVar15 + (longlong)param_1 * 8);
  uVar13 = *puVar16;
  iVar3 = *piVar6;
  uVar8 = (longlong)(int)uVar13 / (longlong)iVar3;
  iVar4 = *piVar6;
  uVar5 = *puVar16;
  do {
    puVar16 = puVar16 + 1;
    fVar1 = *(float *)((longlong)this + 0x24);
    local_58 = (double)((float)(int)((uVar17 & 7) + ((int)uVar13 % iVar3) * 8) * fVar1 +
                       *(float *)((longlong)this + 0x18));
    lVar7 = *(longlong *)this;
    local_50 = (double)((float)(int)((uVar17 >> 3 & 0x80000007) +
                                    (int)((longlong)
                                          ((ulonglong)(uint)((int)uVar8 >> 0x1f) << 0x20 |
                                          uVar8 & 0xffffffff) % (longlong)iVar2) * 8) * fVar1 +
                       *(float *)((longlong)this + 0x1c));
    local_48 = (double)((float)(int)((uVar17 >> 6) + ((int)uVar5 / (iVar2 * iVar4)) * 8) * fVar1 +
                       *(float *)((longlong)this + 0x20));
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar7 + 0x10));
    pcVar9 = *(code **)(lVar7 + 0x10);
    plVar15 = (longlong *)(lVar7 + 0x20);
    if (*(longlong **)(lVar7 + 0x38) != (longlong *)0x0) {
      plVar15 = *(longlong **)(lVar7 + 0x38);
    }
    uVar14 = (**(code **)(*plVar15 + 8))();
    cVar12 = (*pcVar9)(uVar14,&local_58);
    if (cVar12 != '\0') {
      *puVar16 = *puVar16 ^ uVar10;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x200);
  return;
}

// operator() @ 14c952040

void __thiscall
`UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::make_level_set3_parallel'::__l6::<lambda_1>::operator()(void *this,int *param_1)

{
  uint *puVar1;
  double *pdVar2;
  int *piVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  longlong lVar10;
  TBasicBlockedDenseGrid3<float,8> *this_00;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  code *pcVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  bool bVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  TBlockData3<float,8> *pTVar28;
  TBlockData3<int,8> *pTVar29;
  uint uVar30;
  int iVar31;
  TBasicBlockedDenseGrid3<int,8> *this_01;
  ulonglong uVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  uint *puVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  longlong lVar40;
  longlong lVar41;
  int iVar42;
  double dVar43;
  float fVar44;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  int local_160;
  int iStack_15c;
  int local_128;
  int iStack_124;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  TVector<double>_u_0 local_c8;
  double local_a0;
  double local_88;
  
  lVar10 = *(longlong *)((longlong)this + 0x18);
  local_res18 = *(int *)(*(longlong *)((longlong)this + 0x20) + 0x14);
  uVar4 = *(undefined8 *)(*(longlong *)((longlong)this + 0x20) + 0xc);
  uVar9 = *(uint *)(**(longlong **)((longlong)this + 0x10) + (longlong)*param_1 * 4);
  uVar30 = 0;
  if ((int)uVar9 < *(int *)(lVar10 + 0x30)) {
    uVar30 = ~uVar9 >> 0x1f;
  }
  if ((uVar30 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  lVar10 = *(longlong *)(lVar10 + 0x28);
  this_00 = *(TBasicBlockedDenseGrid3<float,8> **)((longlong)this + 0x20);
  lVar40 = (longlong)(int)uVar9 * 0x10;
  iVar33 = (int)this_00->_padding_;
  iVar38 = *(int *)((longlong)&this_00->_padding_ + 4);
  iVar35 = (int)uVar9 % iVar33;
  iVar25 = (int)uVar9 / (iVar38 * iVar33);
  iVar37 = (int)((longlong)
                 ((ulonglong)(uint)((int)((longlong)(int)uVar9 / (longlong)iVar33) >> 0x1f) << 0x20
                 | (longlong)(int)uVar9 / (longlong)iVar33 & 0xffffffffU) % (longlong)iVar38);
  pTVar28 = UE::Geometry::TBasicBlockedDenseGrid3<float,8>::TouchBlockData
                      (this_00,(iVar25 * iVar38 + iVar37) * iVar33 + iVar35);
  this_01 = (TBasicBlockedDenseGrid3<int,8> *)(*(longlong *)this + 0x100);
  pTVar29 = UE::Geometry::TBasicBlockedDenseGrid3<int,8>::TouchBlockData
                      (this_01,(iVar25 * *(int *)(*(longlong *)this + 0x104) + iVar37) *
                               (int)this_01->_padding_ + iVar35);
  iVar39 = iVar25 * 8;
  local_160 = (int)uVar4;
  iVar33 = iVar35 * 8 + 8;
  iVar38 = iVar37 * 8;
  if (iVar33 < local_160) {
    local_160 = iVar33;
  }
  local_160 = local_160 + -1;
  iStack_15c = (int)((ulonglong)uVar4 >> 0x20);
  puVar36 = *(uint **)(lVar40 + lVar10);
  if (iVar38 + 8 < iStack_15c) {
    iStack_15c = iVar38 + 8;
  }
  uVar9 = *(uint *)(lVar40 + 8 + lVar10);
  uVar32 = (ulonglong)(int)uVar9;
  local_res20 = iStack_15c + -1;
  if (iVar39 + 8 < local_res18) {
    local_res18 = iVar39 + 8;
  }
  local_res18 = local_res18 + -1;
  puVar1 = puVar36 + uVar32;
  while( true ) {
    iVar33 = iVar35 * 8;
    if (*(int *)(lVar40 + 8 + lVar10) != (int)uVar32) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (puVar36 == puVar1) {
      return;
    }
    uVar30 = *puVar36;
    lVar41 = (longlong)(int)uVar30;
    plVar11 = (longlong *)**(longlong **)this;
    plVar12 = (longlong *)plVar11[1];
    uVar27 = 0;
    if ((int)uVar30 < (int)plVar12[1]) {
      uVar27 = ~uVar30 >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    plVar13 = (longlong *)*plVar11;
    lVar14 = *plVar12;
    uVar27 = *(uint *)(lVar14 + lVar41 * 0xc);
    uVar26 = 0;
    if ((int)uVar27 < (int)plVar13[1]) {
      uVar26 = ~uVar27 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    lVar15 = *plVar13;
    local_88 = *(double *)(lVar15 + 0x10 + (longlong)(int)uVar27 * 0x18);
    pdVar2 = (double *)(lVar15 + (longlong)(int)uVar27 * 0x18);
    dVar43 = *pdVar2;
    dVar21 = pdVar2[1];
    plVar12 = (longlong *)*plVar11;
    uVar27 = *(uint *)(lVar14 + 4 + lVar41 * 0xc);
    uVar26 = 0;
    if ((int)uVar27 < (int)plVar12[1]) {
      uVar26 = ~uVar27 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    lVar15 = *plVar12;
    local_a0 = *(double *)(lVar15 + 0x10 + (longlong)(int)uVar27 * 0x18);
    pdVar2 = (double *)(lVar15 + (longlong)(int)uVar27 * 0x18);
    dVar22 = *pdVar2;
    dVar23 = pdVar2[1];
    plVar11 = (longlong *)*plVar11;
    uVar27 = *(uint *)(lVar14 + 8 + lVar41 * 0xc);
    uVar26 = 0;
    if ((int)uVar27 < (int)plVar11[1]) {
      uVar26 = ~uVar27 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) break;
    dVar5 = *(double *)((longlong)this + 0x48);
    dVar6 = *(double *)((longlong)this + 0x30);
    dVar7 = *(double *)((longlong)this + 0x40);
    dVar8 = *(double *)((longlong)this + 0x38);
    lVar14 = *plVar11;
    local_e0._s_0.X = (dVar43 - dVar6) * dVar5;
    pdVar2 = (double *)(lVar14 + (longlong)(int)uVar27 * 0x18);
    dVar43 = *(double *)(lVar14 + 0x10 + (longlong)(int)uVar27 * 0x18);
    local_e0._s_0.Y = (dVar21 - dVar8) * dVar5;
    local_e0._s_0.Z = (local_88 - dVar7) * dVar5;
    local_f8._s_0.X = (dVar22 - dVar6) * dVar5;
    local_f8._s_0.Y = (dVar23 - dVar8) * dVar5;
    local_f8._s_0.Z = (local_a0 - dVar7) * dVar5;
    local_110._s_0.Z = (dVar43 - dVar7) * dVar5;
    local_110._s_0.X = (*pdVar2 - dVar6) * dVar5;
    local_110._s_0.Y = (pdVar2[1] - dVar8) * dVar5;
    piVar3 = (int *)(**(longlong **)((longlong)this + 8) + lVar41 * 0x18);
    uVar4 = *(undefined8 *)(**(longlong **)((longlong)this + 8) + 0x10 + lVar41 * 0x18);
    iVar31 = local_160;
    if (*piVar3 < local_160) {
      iVar31 = *piVar3;
    }
    iVar18 = iVar33;
    if (iVar33 < iVar31) {
      iVar18 = iVar31;
    }
    iVar31 = local_res20;
    if (piVar3[1] < local_res20) {
      iVar31 = piVar3[1];
    }
    iVar19 = iVar38;
    if (iVar38 < iVar31) {
      iVar19 = iVar31;
    }
    iVar31 = local_res18;
    if (piVar3[2] < local_res18) {
      iVar31 = piVar3[2];
    }
    iVar42 = iVar39;
    if (iVar39 < iVar31) {
      iVar42 = iVar31;
    }
    iVar31 = local_160;
    if (piVar3[3] < local_160) {
      iVar31 = piVar3[3];
    }
    if (iVar33 < iVar31) {
      iVar33 = iVar31;
    }
    local_128 = (int)uVar4;
    iVar31 = local_res20;
    if (local_128 < local_res20) {
      iVar31 = local_128;
    }
    iVar20 = iVar38;
    if (iVar38 < iVar31) {
      iVar20 = iVar31;
    }
    iStack_124 = (int)((ulonglong)uVar4 >> 0x20);
    iVar31 = local_res18;
    if (iStack_124 < local_res18) {
      iVar31 = iStack_124;
    }
    local_a0 = dVar43;
    iVar17 = iVar39;
    if (iVar39 < iVar31) {
      iVar17 = iVar31;
    }
    for (; iVar31 = iVar19, iVar42 <= iVar17; iVar42 = iVar42 + 1) {
      for (; iVar31 <= iVar20; iVar31 = iVar31 + 1) {
        if (iVar18 <= iVar33) {
          iVar34 = iVar18;
          do {
            local_c8._s_0.X = (double)iVar34;
            local_c8._s_0.Y = (double)iVar31;
            local_c8._s_0.Z = (double)iVar42;
            dVar43 = UE::Geometry::PointTriangleDistance
                               ((TVector<double> *)&local_c8._s_0,(TVector<double> *)&local_e0._s_0,
                                (TVector<double> *)&local_f8._s_0,(TVector<double> *)&local_110._s_0
                               );
            uVar27 = ((iVar42 + iVar25 * -8) * 8 + iVar37 * -8 + iVar31) * 8 + iVar35 * -8 + iVar34;
            fVar44 = (float)((double)*(float *)((longlong)this + 0x50) * dVar43);
            if (fVar44 < (pTVar28->Data).Elements[uVar27]) {
              (pTVar28->Data).Elements[uVar27] = fVar44;
              (pTVar29->Data).Elements[uVar27] = uVar30;
            }
            iVar34 = iVar34 + 1;
          } while (iVar34 <= iVar33);
        }
      }
    }
    puVar36 = puVar36 + 1;
    uVar32 = (ulonglong)uVar9;
  }
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}

// operator() @ 14c952690

void __thiscall
`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::make_level_set3_parallel'::
__l6::<lambda_1>::operator()(void *this,int *param_1)

{
  uint *puVar1;
  double *pdVar2;
  double *pdVar3;
  int *piVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  longlong lVar10;
  TBasicBlockedDenseGrid3<float,8> *this_00;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  code *pcVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  TBlockData3<float,8> *pTVar22;
  TBlockData3<int,8> *pTVar23;
  TBasicBlockedDenseGrid3<int,8> *this_01;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  ulonglong uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  uint *puVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  longlong lVar37;
  double dVar38;
  float fVar39;
  int local_res10 [2];
  int local_res18;
  int local_res20;
  int local_158;
  int iStack_154;
  int local_110;
  int iStack_10c;
  TVector<double>_u_0 local_108;
  longlong local_e8;
  TVector<double>_u_0 local_e0;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0 [4];
  
  lVar10 = *(longlong *)((longlong)this + 0x18);
  local_res18 = *(int *)(*(longlong *)((longlong)this + 0x20) + 0x14);
  uVar5 = *(undefined8 *)(*(longlong *)((longlong)this + 0x20) + 0xc);
  uVar9 = *(uint *)(**(longlong **)((longlong)this + 0x10) + (longlong)*param_1 * 4);
  uVar19 = 0;
  if ((int)uVar9 < *(int *)(lVar10 + 0x30)) {
    uVar19 = ~uVar9 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  lVar10 = *(longlong *)(lVar10 + 0x28);
  this_00 = *(TBasicBlockedDenseGrid3<float,8> **)((longlong)this + 0x20);
  lVar37 = (longlong)(int)uVar9 * 0x10;
  iVar28 = (int)this_00->_padding_;
  iVar34 = *(int *)((longlong)&this_00->_padding_ + 4);
  iVar30 = (int)uVar9 % iVar28;
  iVar20 = (int)uVar9 / (iVar34 * iVar28);
  iVar33 = (int)((longlong)
                 ((ulonglong)(uint)((int)((longlong)(int)uVar9 / (longlong)iVar28) >> 0x1f) << 0x20
                 | (longlong)(int)uVar9 / (longlong)iVar28 & 0xffffffffU) % (longlong)iVar34);
  local_e8 = lVar37;
  pTVar22 = UE::Geometry::TBasicBlockedDenseGrid3<float,8>::TouchBlockData
                      (this_00,(iVar20 * iVar34 + iVar33) * iVar28 + iVar30);
  this_01 = (TBasicBlockedDenseGrid3<int,8> *)(*(longlong *)this + 0x100);
  pTVar23 = UE::Geometry::TBasicBlockedDenseGrid3<int,8>::TouchBlockData
                      (this_01,(iVar20 * *(int *)(*(longlong *)this + 0x104) + iVar33) *
                               (int)this_01->_padding_ + iVar30);
  iVar36 = iVar20 * 8;
  local_158 = (int)uVar5;
  iVar28 = iVar30 * 8 + 8;
  iVar34 = iVar33 * 8;
  if (iVar28 < local_158) {
    local_158 = iVar28;
  }
  local_158 = local_158 + -1;
  iStack_154 = (int)((ulonglong)uVar5 >> 0x20);
  puVar32 = *(uint **)(lVar37 + lVar10);
  if (iVar34 + 8 < iStack_154) {
    iStack_154 = iVar34 + 8;
  }
  uVar9 = *(uint *)(lVar37 + 8 + lVar10);
  uVar27 = (ulonglong)(int)uVar9;
  local_res20 = iStack_154 + -1;
  if (iVar36 + 8 < local_res18) {
    local_res18 = iVar36 + 8;
  }
  local_res18 = local_res18 + -1;
  puVar1 = puVar32 + uVar27;
  while( true ) {
    iVar28 = iVar30 * 8;
    if (*(int *)(lVar37 + 8 + lVar10) != (int)uVar27) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (puVar32 == puVar1) break;
    dVar38 = *(double *)((longlong)this + 0x48);
    uVar19 = *puVar32;
    dVar6 = *(double *)((longlong)this + 0x30);
    dVar7 = *(double *)((longlong)this + 0x38);
    dVar8 = *(double *)((longlong)this + 0x40);
    uVar27 = (ulonglong)(uVar19 & 0x1ff);
    lVar37 = *(longlong *)
              (*(longlong *)(**(longlong **)this + 0x130) + (ulonglong)(uVar19 >> 9) * 8);
    lVar11 = *(longlong *)(**(longlong **)this + 0x10);
    uVar21 = *(uint *)(lVar37 + uVar27 * 0xc);
    uVar24 = (ulonglong)(uVar21 & 0x1ff);
    lVar12 = *(longlong *)(lVar11 + (ulonglong)(uVar21 >> 9) * 8);
    pdVar2 = (double *)(lVar12 + uVar24 * 0x18);
    uVar21 = *(uint *)(lVar37 + 4 + uVar27 * 0xc);
    uVar25 = (ulonglong)(uVar21 & 0x1ff);
    lVar13 = *(longlong *)(lVar11 + (ulonglong)(uVar21 >> 9) * 8);
    local_b0[0]._0_8_ = (*pdVar2 - dVar6) * dVar38;
    local_b0[0]._8_8_ = (pdVar2[1] - dVar7) * dVar38;
    pdVar2 = (double *)(lVar13 + uVar25 * 0x18);
    uVar21 = *(uint *)(lVar37 + 8 + uVar27 * 0xc);
    uVar27 = (ulonglong)(uVar21 & 0x1ff);
    local_b0[0]._16_8_ = (*(double *)(lVar12 + 0x10 + uVar24 * 0x18) - dVar8) * dVar38;
    lVar37 = *(longlong *)(lVar11 + (ulonglong)(uVar21 >> 9) * 8);
    local_c8._s_0.Z = (*(double *)(lVar13 + 0x10 + uVar25 * 0x18) - dVar8) * dVar38;
    pdVar3 = (double *)(lVar37 + uVar27 * 0x18);
    local_108._s_0.Z = *(double *)(lVar37 + 0x10 + uVar27 * 0x18);
    local_c8._s_0.X = (*pdVar2 - dVar6) * dVar38;
    local_c8._s_0.Y = (pdVar2[1] - dVar7) * dVar38;
    local_e0._s_0.Z = (local_108._s_0.Z - dVar8) * dVar38;
    local_e0._s_0.X = (*pdVar3 - dVar6) * dVar38;
    local_e0._s_0.Y = (pdVar3[1] - dVar7) * dVar38;
    piVar4 = (int *)(**(longlong **)((longlong)this + 8) + (longlong)(int)uVar19 * 0x18);
    uVar5 = *(undefined8 *)
             (**(longlong **)((longlong)this + 8) + 0x10 + (longlong)(int)uVar19 * 0x18);
    iVar35 = local_158;
    if (*piVar4 < local_158) {
      iVar35 = *piVar4;
    }
    iVar16 = iVar28;
    if (iVar28 < iVar35) {
      iVar16 = iVar35;
    }
    iVar35 = local_res20;
    if (piVar4[1] < local_res20) {
      iVar35 = piVar4[1];
    }
    iVar17 = iVar34;
    if (iVar34 < iVar35) {
      iVar17 = iVar35;
    }
    iVar35 = local_res18;
    if (piVar4[2] < local_res18) {
      iVar35 = piVar4[2];
    }
    iVar31 = iVar36;
    if (iVar36 < iVar35) {
      iVar31 = iVar35;
    }
    iVar35 = local_158;
    if (piVar4[3] < local_158) {
      iVar35 = piVar4[3];
    }
    if (iVar28 < iVar35) {
      iVar28 = iVar35;
    }
    local_110 = (int)uVar5;
    iVar35 = local_res20;
    if (local_110 < local_res20) {
      iVar35 = local_110;
    }
    local_res10[0] = iVar34;
    if (iVar34 < iVar35) {
      local_res10[0] = iVar35;
    }
    iStack_10c = (int)((ulonglong)uVar5 >> 0x20);
    iVar35 = local_res18;
    if (iStack_10c < local_res18) {
      iVar35 = iStack_10c;
    }
    iVar26 = local_res10[0];
    lVar37 = local_e8;
    iVar15 = iVar36;
    if (iVar36 < iVar35) {
      iVar15 = iVar35;
    }
    for (; local_e8 = lVar37, iVar31 <= iVar15; iVar31 = iVar31 + 1) {
      iVar35 = iVar17;
      if (iVar17 <= iVar26) {
        do {
          if (iVar16 <= iVar28) {
            iVar29 = iVar16;
            do {
              local_108._s_0.X = (double)iVar29;
              local_108._s_0.Y = (double)iVar35;
              local_108._s_0.Z = (double)iVar31;
              dVar38 = UE::Geometry::PointTriangleDistance
                                 ((TVector<double> *)&local_108._s_0,
                                  (TVector<double> *)&local_b0[0]._s_0,
                                  (TVector<double> *)&local_c8._s_0,
                                  (TVector<double> *)&local_e0._s_0);
              uVar21 = ((iVar31 + iVar20 * -8) * 8 + iVar33 * -8 + iVar35) * 8 + iVar30 * -8 +
                       iVar29;
              fVar39 = (float)((double)*(float *)((longlong)this + 0x50) * dVar38);
              if (fVar39 < (pTVar22->Data).Elements[uVar21]) {
                (pTVar22->Data).Elements[uVar21] = fVar39;
                (pTVar23->Data).Elements[uVar21] = uVar19;
              }
              iVar29 = iVar29 + 1;
              iVar26 = local_res10[0];
            } while (iVar29 <= iVar28);
          }
          iVar35 = iVar35 + 1;
        } while (iVar35 <= iVar26);
      }
      lVar37 = local_e8;
    }
    puVar32 = puVar32 + 1;
    uVar27 = (ulonglong)uVar9;
  }
  return;
}

// operator() @ 14c952be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c953191) */

void __thiscall
`UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::make_level_set3_parallel_spatial'::__l6::<lambda_1>::operator()(void *this,int *param_1)

{
  int *piVar1;
  float fVar2;
  undefined8 uVar3;
  TBasicBlockedDenseGrid3<float,8> *this_00;
  longlong *plVar4;
  longlong lVar5;
  float *pfVar6;
  code *pcVar7;
  uint *puVar8;
  bool bVar9;
  uint uVar10;
  TBasicBlockedDenseGrid3<int,8> *this_01;
  ForElementType<unsigned_int> FVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  TBlockData3<float,8> *pTVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined1 auVar31 [16];
  undefined1 auStack_9a8 [32];
  longlong local_988;
  longlong local_980;
  bool local_978 [4];
  int local_974;
  int local_970;
  int local_968;
  int iStack_964;
  int iStack_960;
  int iStack_95c;
  int local_958;
  int iStack_954;
  longlong *local_950;
  int local_948;
  int local_944;
  int local_940;
  int local_93c;
  int local_938;
  uint local_934;
  TBlockData3<int,8> *local_930;
  undefined8 local_928;
  int local_920;
  uint *local_918;
  longlong local_910;
  longlong local_908;
  uint *local_900;
  TBlockData3<float,8> *local_8f8;
  ulonglong local_8f0 [3];
  double local_8d8;
  double local_8d0;
  double local_8c8;
  longlong local_8b8 [2];
  longlong local_8a8;
  longlong local_898 [3];
  longlong *local_880;
  undefined1 local_878;
  TBlockData3<bool,8> local_868;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_9a8;
  local_928 = *(undefined8 *)(*(longlong *)((longlong)this + 0x20) + 0xc);
  iVar25 = *(int *)(*(longlong *)((longlong)this + 0x20) + 0x14);
  lVar22 = *(longlong *)((longlong)this + 0x18);
  iVar30 = *(int *)(lVar22 + 0x30);
  uVar27 = *(uint *)(**(longlong **)((longlong)this + 0x10) + (longlong)*param_1 * 4);
  uVar20 = 0;
  if ((int)uVar27 < iVar30) {
    uVar20 = ~uVar27 >> 0x1f;
  }
  local_950 = this;
  local_920 = iVar25;
  if ((uVar20 == 0) &&
     (local_988 = (longlong)(int)uVar27, local_980 = (longlong)iVar30,
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar9
     )) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = *(TBasicBlockedDenseGrid3<float,8> **)((longlong)this + 0x20);
  local_908 = *(longlong *)(lVar22 + 0x28);
  local_910 = (longlong)(int)uVar27 << 4;
  iVar30 = (int)this_00->_padding_;
  iVar17 = *(int *)((longlong)&this_00->_padding_ + 4);
  iVar15 = (int)uVar27 % iVar30;
  iVar14 = (int)uVar27 / (iVar17 * iVar30);
  iVar16 = (int)((longlong)
                 ((ulonglong)(uint)((int)((longlong)(int)uVar27 / (longlong)iVar30) >> 0x1f) << 0x20
                 | (longlong)(int)uVar27 / (longlong)iVar30 & 0xffffffffU) % (longlong)iVar17);
  local_970 = iVar15 * 8;
  iVar28 = iVar14 * 8;
  local_974 = iVar16 * 8;
  local_8f8 = UE::Geometry::TBasicBlockedDenseGrid3<float,8>::TouchBlockData
                        (this_00,(iVar14 * iVar17 + iVar16) * iVar30 + iVar15);
  this_01 = (TBasicBlockedDenseGrid3<int,8> *)(*(longlong *)this + 0x100);
  local_930 = UE::Geometry::TBasicBlockedDenseGrid3<int,8>::TouchBlockData
                        (this_01,(iVar16 + iVar14 * *(int *)(*(longlong *)this + 0x104)) *
                                 (int)this_01->_padding_ + iVar15);
  local_978[0] = false;
  UE::Geometry::TBlockData3<bool,8>::TBlockData3<bool,8>(&local_868,local_978,-1);
  iVar30 = iVar16 * 8 + 8;
  iVar15 = iVar15 * 8;
  local_948 = (int)local_928;
  if (iVar15 + 8 < (int)local_928) {
    local_948 = iVar15 + 8;
  }
  local_948 = local_948 + -1;
  local_944 = local_928._4_4_;
  if (iVar30 < local_928._4_4_) {
    local_944 = iVar30;
  }
  local_944 = local_944 + -1;
  puVar21 = *(uint **)(local_910 + local_908);
  if (iVar28 + 8 < iVar25) {
    iVar25 = iVar28 + 8;
  }
  local_934 = *(uint *)(local_910 + 8 + local_908);
  uVar24 = (ulonglong)(int)local_934;
  local_940 = iVar25 + -1;
  uVar27 = 1;
  local_900 = puVar21 + uVar24;
  while( true ) {
    puVar8 = local_900;
    local_918 = puVar21;
    if (*(int *)(local_910 + 8 + local_908) != (int)uVar24) {
      local_978[1] = false;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_978 + 1);
    }
    iVar25 = local_974;
    if (puVar21 == puVar8) {
      uVar20 = 0;
      local_930 = (TBlockData3<int,8> *)((longlong)local_930 - (longlong)local_8f8);
      pTVar18 = local_8f8;
      do {
        pTVar18 = (TBlockData3<float,8> *)&pTVar18->Data;
        if ((local_868.BitArray.NumBits <= (int)uVar20) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar11 = (ForElementType<unsigned_int>)&local_868.BitArray;
        if (local_868.BitArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
        {
          FVar11 = local_868.BitArray.AllocatorInstance.SecondaryData;
        }
        if ((*(uint *)((longlong)FVar11 + (ulonglong)(uVar20 >> 5) * 4) & uVar27) != 0) {
          fVar2 = *(float *)((longlong)this + 0x30);
          pfVar6 = *(float **)((longlong)this + 8);
          local_8c8 = (double)((float)(int)((uVar20 >> 6) + iVar28) * fVar2 + pfVar6[2]);
          local_8d0 = (double)((float)(int)((uVar20 >> 3 & 0x80000007) + iVar25) * fVar2 + pfVar6[1]
                              );
          local_8d8 = (double)((float)(int)((uVar20 & 7) + iVar15) * fVar2 + *pfVar6);
          local_8b8[0] = *(longlong *)((longlong)this + 0x38);
          local_8a8 = 0;
          local_880 = (longlong *)0x0;
          local_878 = 0;
          iVar30 = (**(code **)(**(longlong **)(*(longlong *)this + 8) + 0x20))
                             (*(longlong **)(*(longlong *)this + 8),&local_8d8,local_8f0,local_8b8);
          if (local_8a8 != 0) {
            plVar12 = local_898;
            if (local_880 != (longlong *)0x0) {
              plVar12 = local_880;
            }
            (**(code **)(*plVar12 + 0x10))();
          }
          this = local_950;
          if (iVar30 == -1) {
            ((TStaticArray<float,512,4294967295> *)pTVar18)->Elements[0] =
                 *(float *)((longlong)local_950 + 0x34);
          }
          else {
            auVar31._8_8_ = 0;
            auVar31._0_8_ = local_8f0[0];
            auVar31 = sqrtpd(auVar31,auVar31);
            ((TStaticArray<float,512,4294967295> *)pTVar18)->Elements[0] = (float)auVar31._0_8_;
            *(int *)((longlong)((TStaticArray<float,512,4294967295> *)pTVar18)->Elements +
                    (longlong)local_930) = iVar30;
          }
        }
        uVar20 = uVar20 + 1;
        uVar27 = uVar27 << 1 | (uint)((int)uVar27 < 0);
      } while ((int)uVar20 < 0x200);
      if (local_868.BitArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_868.BitArray.AllocatorInstance.SecondaryData);
      }
      return;
    }
    uVar20 = *puVar21;
    lVar22 = (longlong)(int)uVar20;
    plVar12 = (longlong *)**(longlong **)this;
    plVar4 = (longlong *)plVar12[1];
    iVar25 = (int)plVar4[1];
    uVar10 = 0;
    if ((int)uVar20 < iVar25) {
      uVar10 = ~uVar20 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (local_988 = lVar22, local_980 = (longlong)iVar25,
       bVar9 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar5 = *plVar4;
    uVar20 = *(uint *)(lVar5 + lVar22 * 0xc);
    uVar10 = 0;
    if ((int)uVar20 < *(int *)(*plVar12 + 8)) {
      uVar10 = ~uVar20 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (local_988 = (longlong)(int)uVar20, local_980 = (longlong)*(int *)(*plVar12 + 8),
       bVar9 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar20 = *(uint *)(lVar5 + 4 + lVar22 * 0xc);
    uVar10 = 0;
    if ((int)uVar20 < *(int *)(*plVar12 + 8)) {
      uVar10 = ~uVar20 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (local_988 = (longlong)(int)uVar20, local_980 = (longlong)*(int *)(*plVar12 + 8),
       bVar9 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar20 = *(uint *)(lVar5 + 8 + lVar22 * 0xc);
    uVar10 = 0;
    if ((int)uVar20 < *(int *)(*plVar12 + 8)) {
      uVar10 = ~uVar20 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (local_988 = (longlong)(int)uVar20, local_980 = (longlong)*(int *)(*plVar12 + 8),
       bVar9 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) break;
    piVar1 = (int *)(*(longlong *)local_950[5] + lVar22 * 0x18);
    uVar3 = *(undefined8 *)(*(longlong *)local_950[5] + 0x10 + lVar22 * 0x18);
    iVar25 = local_948;
    if (*piVar1 < local_948) {
      iVar25 = *piVar1;
    }
    local_968 = iVar15;
    if (iVar15 < iVar25) {
      local_968 = iVar25;
    }
    iVar25 = local_944;
    if (piVar1[1] < local_944) {
      iVar25 = piVar1[1];
    }
    iStack_964 = local_974;
    if (local_974 < iVar25) {
      iStack_964 = iVar25;
    }
    iVar25 = local_940;
    if (piVar1[2] < local_940) {
      iVar25 = piVar1[2];
    }
    iVar30 = iVar28;
    if (iVar28 < iVar25) {
      iVar30 = iVar25;
    }
    iVar25 = local_948;
    if (piVar1[3] < local_948) {
      iVar25 = piVar1[3];
    }
    iVar17 = iVar15;
    if (iVar15 < iVar25) {
      iVar17 = iVar25;
    }
    local_958 = (int)uVar3;
    iVar25 = local_944;
    if (local_958 < local_944) {
      iVar25 = local_958;
    }
    local_938 = local_974;
    if (local_974 < iVar25) {
      local_938 = iVar25;
    }
    iStack_954 = (int)((ulonglong)uVar3 >> 0x20);
    iVar25 = local_940;
    if (iStack_954 < local_940) {
      iVar25 = iStack_954;
    }
    iVar16 = iVar28;
    if (iVar28 < iVar25) {
      iVar16 = iVar25;
    }
    _local_958 = CONCAT44(iVar16,local_938);
    iVar25 = local_974;
    iStack_960 = iVar30;
    iStack_95c = iVar17;
    local_93c = iVar17;
    iVar19 = local_968;
    iVar29 = iStack_964;
    iVar23 = iVar17;
    iVar13 = local_938;
    iVar26 = local_938;
    if (iVar30 <= iVar16) {
      do {
        if (iVar29 <= iVar26) {
          do {
            if (iVar19 <= iVar23) {
              do {
                iVar16 = ((((iVar30 + iVar14 * -8) * 8 - iVar25) + iVar29) * 8 - iVar15) + iVar19;
                if (((iVar16 < 0) || (local_868.BitArray.NumBits <= iVar16)) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index>=0 && Index<NumBits",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x5be,L""), iVar25 = local_974, bVar9)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                FVar11 = (ForElementType<unsigned_int>)&local_868.BitArray;
                if (local_868.BitArray.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FVar11 = local_868.BitArray.AllocatorInstance.SecondaryData;
                }
                iVar15 = iVar16;
                if (iVar16 < 0) {
                  iVar15 = iVar16 + 0x1f;
                }
                iVar19 = iVar19 + 1;
                puVar21 = (uint *)((longlong)FVar11 + (longlong)(iVar15 >> 5) * 4);
                *puVar21 = *puVar21 | 1 << ((byte)iVar16 & 0x1f);
                iVar15 = local_970;
              } while (iVar19 <= iVar17);
              iVar19 = local_968;
              iVar23 = local_93c;
              iVar13 = local_958;
            }
            iVar29 = iVar29 + 1;
          } while (iVar29 <= iVar13);
          iVar29 = iStack_964;
          iVar26 = local_938;
          iVar16 = iStack_954;
        }
        iVar30 = iVar30 + 1;
      } while (iVar30 <= iVar16);
    }
    puVar21 = local_918 + 1;
    uVar24 = (ulonglong)local_934;
    this = local_950;
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// operator() @ 14c9532c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c953739) */

void __thiscall
`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::
make_level_set3_parallel_spatial'::__l6::<lambda_1>::operator()(void *this,int *param_1)

{
  int *piVar1;
  uint *puVar2;
  float fVar3;
  undefined8 uVar4;
  longlong lVar5;
  TBasicBlockedDenseGrid3<float,8> *this_00;
  float *pfVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TBasicBlockedDenseGrid3<int,8> *this_01;
  ForElementType<unsigned_int> FVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  TBlockData3<float,8> *pTVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined1 auVar29 [16];
  undefined1 auStack_9a8 [32];
  longlong local_988;
  longlong local_980;
  bool local_978 [4];
  int local_974;
  int local_970;
  int local_96c;
  int local_968;
  int local_964;
  int local_960;
  int iStack_95c;
  int iStack_958;
  int iStack_954;
  int local_950;
  int iStack_94c;
  int local_948;
  int local_944;
  uint local_940;
  TBlockData3<int,8> *local_938;
  longlong *local_930;
  undefined8 local_928;
  int local_920;
  int *local_918;
  longlong local_910;
  longlong local_908;
  int *local_900;
  TBlockData3<float,8> *local_8f8;
  ulonglong local_8f0 [3];
  double local_8d8;
  double local_8d0;
  double local_8c8;
  longlong local_8b8 [2];
  longlong local_8a8;
  longlong local_898 [3];
  longlong *local_880;
  undefined1 local_878;
  TBlockData3<bool,8> local_868;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_9a8;
  local_974 = *(int *)(*(longlong *)((longlong)this + 0x20) + 0x14);
  local_928 = *(undefined8 *)(*(longlong *)((longlong)this + 0x20) + 0xc);
  lVar5 = *(longlong *)((longlong)this + 0x18);
  iVar24 = *(int *)(lVar5 + 0x30);
  uVar25 = *(uint *)(**(longlong **)((longlong)this + 0x10) + (longlong)*param_1 * 4);
  uVar18 = 0;
  if ((int)uVar25 < iVar24) {
    uVar18 = ~uVar25 >> 0x1f;
  }
  local_930 = this;
  local_920 = local_974;
  if ((uVar18 == 0) &&
     (local_988 = (longlong)(int)uVar25, local_980 = (longlong)iVar24,
     bVar8 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar8
     )) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = *(TBasicBlockedDenseGrid3<float,8> **)((longlong)this + 0x20);
  local_908 = *(longlong *)(lVar5 + 0x28);
  local_910 = (longlong)(int)uVar25 << 4;
  iVar24 = (int)this_00->_padding_;
  iVar27 = *(int *)((longlong)&this_00->_padding_ + 4);
  iVar14 = (int)uVar25 % iVar24;
  iVar13 = (int)uVar25 / (iVar27 * iVar24);
  iVar22 = (int)((longlong)
                 ((ulonglong)(uint)((int)((longlong)(int)uVar25 / (longlong)iVar24) >> 0x1f) << 0x20
                 | (longlong)(int)uVar25 / (longlong)iVar24 & 0xffffffffU) % (longlong)iVar27);
  local_970 = iVar22 * 8;
  local_96c = iVar14 * 8;
  iVar26 = iVar13 * 8;
  local_8f8 = UE::Geometry::TBasicBlockedDenseGrid3<float,8>::TouchBlockData
                        (this_00,(iVar13 * iVar27 + iVar22) * iVar24 + iVar14);
  this_01 = (TBasicBlockedDenseGrid3<int,8> *)(*(longlong *)this + 0x100);
  local_938 = UE::Geometry::TBasicBlockedDenseGrid3<int,8>::TouchBlockData
                        (this_01,(iVar22 + iVar13 * *(int *)(*(longlong *)this + 0x104)) *
                                 (int)this_01->_padding_ + iVar14);
  local_978[0] = false;
  UE::Geometry::TBlockData3<bool,8>::TBlockData3<bool,8>(&local_868,local_978,-1);
  iVar14 = iVar14 * 8;
  iVar22 = iVar22 * 8;
  uVar25 = 1;
  local_968 = (int)local_928;
  if (iVar14 + 8 < (int)local_928) {
    local_968 = iVar14 + 8;
  }
  local_968 = local_968 + -1;
  local_964 = local_928._4_4_;
  if (iVar22 + 8 < local_928._4_4_) {
    local_964 = iVar22 + 8;
  }
  local_964 = local_964 + -1;
  piVar19 = *(int **)(local_910 + local_908);
  if (iVar26 + 8 < local_974) {
    local_974 = iVar26 + 8;
  }
  local_940 = *(uint *)(local_910 + 8 + local_908);
  uVar21 = (ulonglong)(int)local_940;
  iVar24 = local_974 + -1;
  local_900 = piVar19 + uVar21;
  local_974 = iVar24;
  while( true ) {
    piVar1 = local_900;
    iVar27 = local_964;
    local_918 = piVar19;
    if (*(int *)(local_910 + 8 + local_908) != (int)uVar21) {
      local_978[1] = false;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_978 + 1);
      iVar22 = local_970;
      iVar24 = local_974;
    }
    iVar28 = local_970;
    if (piVar19 == piVar1) break;
    piVar1 = (int *)(**(longlong **)((longlong)this + 0x28) + (longlong)*piVar19 * 0x18);
    uVar4 = *(undefined8 *)
             (**(longlong **)((longlong)this + 0x28) + 0x10 + (longlong)*piVar19 * 0x18);
    iVar28 = local_968;
    if (*piVar1 < local_968) {
      iVar28 = *piVar1;
    }
    local_960 = iVar14;
    if (iVar14 < iVar28) {
      local_960 = iVar28;
    }
    if (piVar1[1] < iVar27) {
      iVar27 = piVar1[1];
    }
    iStack_95c = iVar22;
    if (iVar22 < iVar27) {
      iStack_95c = iVar27;
    }
    iVar27 = iVar24;
    if (piVar1[2] < iVar24) {
      iVar27 = piVar1[2];
    }
    iVar28 = iVar26;
    if (iVar26 < iVar27) {
      iVar28 = iVar27;
    }
    iVar27 = local_968;
    if (piVar1[3] < local_968) {
      iVar27 = piVar1[3];
    }
    iVar15 = iVar14;
    if (iVar14 < iVar27) {
      iVar15 = iVar27;
    }
    local_950 = (int)uVar4;
    iVar27 = local_964;
    if (local_950 < local_964) {
      iVar27 = local_950;
    }
    local_944 = iVar22;
    if (iVar22 < iVar27) {
      local_944 = iVar27;
    }
    iStack_94c = (int)((ulonglong)uVar4 >> 0x20);
    iVar27 = iVar24;
    if (iStack_94c < iVar24) {
      iVar27 = iStack_94c;
    }
    iVar9 = iVar26;
    if (iVar26 < iVar27) {
      iVar9 = iVar27;
    }
    _local_950 = CONCAT44(iVar9,local_944);
    iStack_958 = iVar28;
    iStack_954 = iVar15;
    local_948 = iVar15;
    iVar27 = iStack_95c;
    iVar17 = local_960;
    iVar12 = local_944;
    iVar23 = local_944;
    iVar20 = iVar15;
    if (iVar28 <= iVar9) {
      do {
        if (iVar27 <= iVar23) {
          do {
            if (iVar17 <= iVar20) {
              do {
                iVar24 = ((((iVar28 + iVar13 * -8) * 8 - iVar22) + iVar27) * 8 - iVar14) + iVar17;
                if (((iVar24 < 0) || (local_868.BitArray.NumBits <= iVar24)) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index>=0 && Index<NumBits",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x5be,L""), iVar22 = local_970, bVar8)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                FVar10 = (ForElementType<unsigned_int>)&local_868.BitArray;
                if (local_868.BitArray.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FVar10 = local_868.BitArray.AllocatorInstance.SecondaryData;
                }
                iVar14 = iVar24;
                if (iVar24 < 0) {
                  iVar14 = iVar24 + 0x1f;
                }
                iVar17 = iVar17 + 1;
                puVar2 = (uint *)((longlong)FVar10 + (longlong)(iVar14 >> 5) * 4);
                *puVar2 = *puVar2 | 1 << ((byte)iVar24 & 0x1f);
                iVar14 = local_96c;
              } while (iVar17 <= iVar15);
              iVar17 = local_960;
              iVar12 = local_950;
              iVar20 = local_948;
            }
            iVar27 = iVar27 + 1;
          } while (iVar27 <= iVar12);
          iVar27 = iStack_95c;
          iVar23 = local_944;
          iVar9 = iStack_94c;
        }
        iVar28 = iVar28 + 1;
        iVar24 = local_974;
      } while (iVar28 <= iVar9);
    }
    piVar19 = local_918 + 1;
    uVar21 = (ulonglong)local_940;
    this = local_930;
  }
  uVar18 = 0;
  local_938 = (TBlockData3<int,8> *)((longlong)local_938 - (longlong)local_8f8);
  pTVar16 = local_8f8;
  do {
    pTVar16 = (TBlockData3<float,8> *)&pTVar16->Data;
    if ((local_868.BitArray.NumBits <= (int)uVar18) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar10 = (ForElementType<unsigned_int>)&local_868.BitArray;
    if (local_868.BitArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_868.BitArray.AllocatorInstance.SecondaryData;
    }
    if ((*(uint *)((longlong)FVar10 + (ulonglong)(uVar18 >> 5) * 4) & uVar25) != 0) {
      fVar3 = *(float *)((longlong)this + 0x30);
      pfVar6 = *(float **)((longlong)this + 8);
      local_8c8 = (double)((float)(int)((uVar18 >> 6) + iVar26) * fVar3 + pfVar6[2]);
      local_8d0 = (double)((float)(int)((uVar18 >> 3 & 0x80000007) + iVar28) * fVar3 + pfVar6[1]);
      local_8d8 = (double)((float)(int)((uVar18 & 7) + iVar14) * fVar3 + *pfVar6);
      local_8b8[0] = *(longlong *)((longlong)this + 0x38);
      local_8a8 = 0;
      local_880 = (longlong *)0x0;
      local_878 = 0;
      iVar24 = (**(code **)(**(longlong **)(*(longlong *)this + 8) + 0x20))
                         (*(longlong **)(*(longlong *)this + 8),&local_8d8,local_8f0,local_8b8);
      if (local_8a8 != 0) {
        plVar11 = local_898;
        if (local_880 != (longlong *)0x0) {
          plVar11 = local_880;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      this = local_930;
      if (iVar24 == -1) {
        ((TStaticArray<float,512,4294967295> *)pTVar16)->Elements[0] =
             *(float *)((longlong)local_930 + 0x34);
      }
      else {
        auVar29._8_8_ = 0;
        auVar29._0_8_ = local_8f0[0];
        auVar29 = sqrtpd(auVar29,auVar29);
        ((TStaticArray<float,512,4294967295> *)pTVar16)->Elements[0] = (float)auVar29._0_8_;
        *(int *)((longlong)((TStaticArray<float,512,4294967295> *)pTVar16)->Elements +
                (longlong)local_938) = iVar24;
      }
    }
    uVar18 = uVar18 + 1;
    uVar25 = uVar25 << 1 | (uint)((int)uVar25 < 0);
  } while ((int)uVar18 < 0x200);
  if (local_868.BitArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_868.BitArray.AllocatorInstance.SecondaryData);
  }
  return;
}

// operator() @ 14c956600

void __thiscall
`UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::compute_intersections'::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  TBasicBlockedDenseGrid3<int,8> *this_00;
  undefined4 *puVar4;
  void *pvVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TBlockData3<int,8> *pTVar9;
  undefined4 *puVar10;
  longlong lVar11;
  
  lVar11 = *(longlong *)((longlong)this + 8);
  uVar8 = 0;
  if (param_1 < *(int *)(lVar11 + 0x20)) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar11 = *(longlong *)(lVar11 + 0x18);
  puVar1 = (undefined8 *)(lVar11 + (longlong)param_1 * 8);
  if (*(longlong *)(lVar11 + (longlong)param_1 * 8) != 0) {
    iVar2 = **(int **)((longlong)this + 8);
    iVar3 = (*(int **)((longlong)this + 8))[1];
    this_00 = *(TBasicBlockedDenseGrid3<int,8> **)this;
    pTVar9 = UE::Geometry::TBasicBlockedDenseGrid3<int,8>::TouchBlockData
                       (this_00,((int)((longlong)
                                       ((ulonglong)
                                        (uint)((int)((longlong)param_1 / (longlong)iVar2) >> 0x1f)
                                        << 0x20 | (longlong)param_1 / (longlong)iVar2 & 0xffffffffU)
                                      % (longlong)iVar3) +
                                (param_1 / (iVar3 * iVar2)) *
                                *(int *)((longlong)&this_00->_padding_ + 4)) *
                                (int)this_00->_padding_ + param_1 % iVar2);
    puVar4 = (undefined4 *)*puVar1;
    lVar11 = 0x200;
    puVar10 = puVar4;
    do {
      *(undefined4 *)((longlong)puVar10 + (longlong)pTVar9 + (4 - (longlong)puVar4)) = *puVar10;
      puVar10 = puVar10 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    pvVar5 = (void *)*puVar1;
    if (pvVar5 != (void *)0x0) {
      *puVar1 = 0;
      ::operator_delete(pvVar5,0x800);
    }
  }
  return;
}

// operator() @ 14c956720

void __thiscall
`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::compute_intersections'::__l2::
<lambda_2>::operator()(void *this,int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  TBasicBlockedDenseGrid3<int,8> *this_00;
  undefined4 *puVar4;
  void *pvVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TBlockData3<int,8> *pTVar9;
  undefined4 *puVar10;
  longlong lVar11;
  
  lVar11 = *(longlong *)((longlong)this + 8);
  uVar8 = 0;
  if (param_1 < *(int *)(lVar11 + 0x20)) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar11 = *(longlong *)(lVar11 + 0x18);
  puVar1 = (undefined8 *)(lVar11 + (longlong)param_1 * 8);
  if (*(longlong *)(lVar11 + (longlong)param_1 * 8) != 0) {
    iVar2 = **(int **)((longlong)this + 8);
    iVar3 = (*(int **)((longlong)this + 8))[1];
    this_00 = *(TBasicBlockedDenseGrid3<int,8> **)this;
    pTVar9 = UE::Geometry::TBasicBlockedDenseGrid3<int,8>::TouchBlockData
                       (this_00,((int)((longlong)
                                       ((ulonglong)
                                        (uint)((int)((longlong)param_1 / (longlong)iVar2) >> 0x1f)
                                        << 0x20 | (longlong)param_1 / (longlong)iVar2 & 0xffffffffU)
                                      % (longlong)iVar3) +
                                (param_1 / (iVar3 * iVar2)) *
                                *(int *)((longlong)&this_00->_padding_ + 4)) *
                                (int)this_00->_padding_ + param_1 % iVar2);
    puVar4 = (undefined4 *)*puVar1;
    lVar11 = 0x200;
    puVar10 = puVar4;
    do {
      *(undefined4 *)((longlong)puVar10 + (longlong)pTVar9 + (4 - (longlong)puVar4)) = *puVar10;
      puVar10 = puVar10 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    pvVar5 = (void *)*puVar1;
    if (pvVar5 != (void *)0x0) {
      *puVar1 = 0;
      ::operator_delete(pvVar5,0x800);
    }
  }
  return;
}

// operator() @ 14c956840

void __thiscall
`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::compute_tri_bboxes'::__l2::
<lambda_2>::operator()(void *this,int param_1)

{
  FVector3i *pFVar1;
  longlong lVar2;
  
  lVar2 = **(longlong **)this;
  if (((-1 < param_1) && (param_1 < *(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(lVar2 + 0x148) + (ulonglong)((uint)param_1 >> 9) * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    pFVar1 = (FVector3i *)(**(longlong **)((longlong)this + 0x10) + (longlong)param_1 * 0x18);
    __l2::<lambda_1>::operator()(*(void **)((longlong)this + 8),param_1,pFVar1,pFVar1 + 1);
    return;
  }
  return;
}

// operator() @ 14c9568c0

void __thiscall
`UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::make_level_set3_parallel_floodfill'::__l4::<lambda_2>::operator()(void *this,int param_1)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  code *pcVar6;
  longlong lVar7;
  double dVar8;
  undefined1 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  longlong *plVar16;
  int iVar17;
  
  fVar2 = *(float *)((longlong)this + 0x2c);
  fVar3 = *(float *)((longlong)this + 0x30);
  fVar4 = *(float *)((longlong)this + 0x34);
  dVar8 = __real_3ff0000000000000 / (double)*(float *)((longlong)this + 0x38);
  if ((-1 < param_1) &&
     (puVar5 = *(undefined8 **)this, param_1 < *(int *)(*(longlong *)*puVar5 + 8))) {
    if (param_1 == ((uint)param_1 / 1000) * 1000) {
      UE::Core::Private::Function::CheckCallable((void *)puVar5[0x12]);
      pcVar6 = (code *)puVar5[0x12];
      plVar16 = puVar5 + 0x14;
      if ((longlong *)puVar5[0x17] != (longlong *)0x0) {
        plVar16 = (longlong *)puVar5[0x17];
      }
      uVar15 = (**(code **)(*plVar16 + 8))();
      uVar9 = (*pcVar6)(uVar15);
      **(undefined1 **)((longlong)this + 8) = uVar9;
    }
    if (**(char **)((longlong)this + 8) == '\0') {
      plVar16 = *(longlong **)**(undefined8 **)this;
      uVar11 = 0;
      if (param_1 < (int)plVar16[1]) {
        uVar11 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar7 = *plVar16;
      iVar17 = *(int *)((longlong)this + 0x28) + -1;
      pdVar1 = (double *)(lVar7 + (longlong)param_1 * 0x18);
      iVar12 = (int)((*(double *)(lVar7 + 0x10 + (longlong)param_1 * 0x18) - (double)fVar4) * dVar8)
      ;
      if (iVar12 < iVar17) {
        iVar17 = iVar12;
      }
      iVar12 = *(int *)((longlong)this + 0x24) + -1;
      iVar13 = (int)((pdVar1[1] - (double)fVar3) * dVar8);
      if (iVar13 < iVar12) {
        iVar12 = iVar13;
      }
      iVar13 = *(int *)((longlong)this + 0x20) + -1;
      iVar14 = (int)((*pdVar1 - (double)fVar2) * dVar8);
      if (iVar14 < iVar13) {
        iVar13 = iVar14;
      }
      iVar14 = 0;
      if (0 < iVar17) {
        iVar14 = iVar17;
      }
      iVar17 = 0;
      if (0 < iVar12) {
        iVar17 = iVar12;
      }
      iVar12 = 0;
      if (0 < iVar13) {
        iVar12 = iVar13;
      }
      UE::Geometry::TBlockedGrid3<bool,8>::
      SetValueWithLock<_UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::make_level_set3_parallel_floodfill_::__l2::<lambda_1>_>
                (*(TBlockedGrid3<bool,8> **)((longlong)this + 0x10),iVar12,iVar17,iVar14,true,
                 *(<lambda_1> **)((longlong)this + 0x18));
    }
  }
  return;
}

// operator() @ 14c956ac0

void __thiscall
`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::
make_level_set3_parallel_floodfill'::__l4::<lambda_2>::operator()(void *this,int param_1)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  longlong *plVar14;
  int iVar15;
  
  plVar5 = *(longlong **)this;
  fVar2 = *(float *)((longlong)this + 0x2c);
  fVar3 = *(float *)((longlong)this + 0x30);
  fVar4 = *(float *)((longlong)this + 0x34);
  lVar6 = *plVar5;
  dVar8 = __real_3ff0000000000000 / (double)*(float *)((longlong)this + 0x38);
  if (((-1 < param_1) && (param_1 < *(int *)(lVar6 + 0x20) * 0x200 + *(int *)(lVar6 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(lVar6 + 0x28) + (ulonglong)((uint)param_1 >> 9) * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    if (param_1 == ((uint)param_1 / 1000) * 1000) {
      UE::Core::Private::Function::CheckCallable((void *)plVar5[0x12]);
      pcVar7 = (code *)plVar5[0x12];
      plVar14 = plVar5 + 0x14;
      if ((longlong *)plVar5[0x17] != (longlong *)0x0) {
        plVar14 = (longlong *)plVar5[0x17];
      }
      uVar13 = (**(code **)(*plVar14 + 8))();
      uVar9 = (*pcVar7)(uVar13);
      **(undefined1 **)((longlong)this + 8) = uVar9;
    }
    if (**(char **)((longlong)this + 8) == '\0') {
      iVar15 = *(int *)((longlong)this + 0x28) + -1;
      lVar6 = *(longlong *)
               (*(longlong *)(**(longlong **)this + 0x10) + (ulonglong)((uint)param_1 >> 9) * 8);
      pdVar1 = (double *)(lVar6 + (ulonglong)(param_1 & 0x1ff) * 0x18);
      iVar10 = (int)((*(double *)(lVar6 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18) -
                     (double)fVar4) * dVar8);
      if (iVar10 < iVar15) {
        iVar15 = iVar10;
      }
      iVar10 = *(int *)((longlong)this + 0x24) + -1;
      iVar11 = (int)((pdVar1[1] - (double)fVar3) * dVar8);
      if (iVar11 < iVar10) {
        iVar10 = iVar11;
      }
      iVar11 = *(int *)((longlong)this + 0x20) + -1;
      iVar12 = (int)((*pdVar1 - (double)fVar2) * dVar8);
      if (iVar12 < iVar11) {
        iVar11 = iVar12;
      }
      iVar12 = 0;
      if (0 < iVar15) {
        iVar12 = iVar15;
      }
      iVar15 = 0;
      if (0 < iVar10) {
        iVar15 = iVar10;
      }
      iVar10 = 0;
      if (0 < iVar11) {
        iVar10 = iVar11;
      }
      UE::Geometry::TBlockedGrid3<bool,8>::
      SetValueWithLock<_UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::make_level_set3_parallel_floodfill_::__l2::<lambda_1>_>
                (*(TBlockedGrid3<bool,8> **)((longlong)this + 0x10),iVar10,iVar15,iVar12,true,
                 *(<lambda_1> **)((longlong)this + 0x18));
    }
  }
  return;
}

// operator() @ 14c956cb0

void __thiscall
`UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::scatter_tris'::__l4::<lambda_2>::operator()(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  code *pcVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined1 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  
  piVar1 = (int *)(**(longlong **)((longlong)this + 8) + (longlong)param_1 * 0x18);
  if (((*(int *)(**(longlong **)((longlong)this + 8) + (longlong)param_1 * 0x18) <= piVar1[3]) &&
      (piVar1[1] <= piVar1[4])) && (piVar1[2] <= piVar1[5])) {
    if (param_1 == (param_1 / 100) * 100) {
      lVar8 = *(longlong *)this;
      UE::Core::Private::Function::CheckCallable(*(void **)(lVar8 + 0x90));
      pcVar9 = *(code **)(lVar8 + 0x90);
      plVar15 = (longlong *)(lVar8 + 0xa0);
      if (*(longlong **)(lVar8 + 0xb8) != (longlong *)0x0) {
        plVar15 = *(longlong **)(lVar8 + 0xb8);
      }
      uVar14 = (**(code **)(*plVar15 + 8))();
      uVar13 = (*pcVar9)(uVar14);
      **(undefined1 **)((longlong)this + 0x18) = uVar13;
    }
    if (**(char **)((longlong)this + 0x18) == '\0') {
      iVar3 = *piVar1;
      piVar10 = *(int **)((longlong)this + 0x10);
      iVar4 = piVar1[1];
      iVar5 = piVar1[3];
      iVar6 = piVar1[4];
      iVar7 = piVar1[5];
      for (iVar16 = (int)((piVar1[2] >> 0x1f & 7U) + piVar1[2]) >> 3;
          iVar11 = (int)((iVar4 >> 0x1f & 7U) + iVar4) >> 3,
          iVar16 <= (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3; iVar16 = iVar16 + 1) {
        for (; iVar12 = (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,
            iVar11 <= (int)((iVar6 >> 0x1f & 7U) + iVar6) >> 3; iVar11 = iVar11 + 1) {
          for (; iVar12 <= (int)((iVar5 >> 0x1f & 7U) + iVar5) >> 3; iVar12 = iVar12 + 1) {
            lVar17 = (longlong)((iVar16 * piVar10[1] + iVar11) * *piVar10 + iVar12);
            lVar8 = *(longlong *)(piVar10 + 10);
            LOCK();
            piVar1 = (int *)(*(longlong *)(piVar10 + 6) + lVar17 * 4);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            *(int *)(*(longlong *)(lVar17 * 0x10 + lVar8) + (longlong)iVar2 * 4) = param_1;
          }
        }
      }
    }
  }
  return;
}

// operator() @ 14c956e70

void __thiscall
`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::scatter_tris'::__l4::
<lambda_2>::operator()(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  code *pcVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined1 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  
  piVar1 = (int *)(**(longlong **)((longlong)this + 8) + (longlong)param_1 * 0x18);
  if (((*(int *)(**(longlong **)((longlong)this + 8) + (longlong)param_1 * 0x18) <= piVar1[3]) &&
      (piVar1[1] <= piVar1[4])) && (piVar1[2] <= piVar1[5])) {
    if (param_1 == (param_1 / 100) * 100) {
      lVar8 = *(longlong *)this;
      UE::Core::Private::Function::CheckCallable(*(void **)(lVar8 + 0x90));
      pcVar9 = *(code **)(lVar8 + 0x90);
      plVar15 = (longlong *)(lVar8 + 0xa0);
      if (*(longlong **)(lVar8 + 0xb8) != (longlong *)0x0) {
        plVar15 = *(longlong **)(lVar8 + 0xb8);
      }
      uVar14 = (**(code **)(*plVar15 + 8))();
      uVar13 = (*pcVar9)(uVar14);
      **(undefined1 **)((longlong)this + 0x18) = uVar13;
    }
    if (**(char **)((longlong)this + 0x18) == '\0') {
      iVar3 = *piVar1;
      piVar10 = *(int **)((longlong)this + 0x10);
      iVar4 = piVar1[1];
      iVar5 = piVar1[3];
      iVar6 = piVar1[4];
      iVar7 = piVar1[5];
      for (iVar16 = (int)((piVar1[2] >> 0x1f & 7U) + piVar1[2]) >> 3;
          iVar11 = (int)((iVar4 >> 0x1f & 7U) + iVar4) >> 3,
          iVar16 <= (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3; iVar16 = iVar16 + 1) {
        for (; iVar12 = (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,
            iVar11 <= (int)((iVar6 >> 0x1f & 7U) + iVar6) >> 3; iVar11 = iVar11 + 1) {
          for (; iVar12 <= (int)((iVar5 >> 0x1f & 7U) + iVar5) >> 3; iVar12 = iVar12 + 1) {
            lVar17 = (longlong)((iVar16 * piVar10[1] + iVar11) * *piVar10 + iVar12);
            lVar8 = *(longlong *)(piVar10 + 10);
            LOCK();
            piVar1 = (int *)(*(longlong *)(piVar10 + 6) + lVar17 * 4);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            *(int *)(*(longlong *)(lVar17 * 0x10 + lVar8) + (longlong)iVar2 * 4) = param_1;
          }
        }
      }
    }
  }
  return;
}

// operator() @ 14c957030

void __thiscall
`UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::update_signs'::__l5::<lambda_2>::operator()(void *this,int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  code *pcVar6;
  void *pvVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  double local_38;
  double local_30;
  double local_28;
  
  piVar4 = *(int **)((longlong)this + 8);
  iVar2 = *piVar4;
  iVar3 = piVar4[1];
  iVar13 = param_1 % iVar2;
  iVar9 = param_1 / (iVar3 * iVar2);
  iVar14 = (int)((longlong)
                 ((ulonglong)(uint)((int)((longlong)param_1 / (longlong)iVar2) >> 0x1f) << 0x20 |
                 (longlong)param_1 / (longlong)iVar2 & 0xffffffffU) % (longlong)iVar3);
  if (*(longlong *)
       (*(longlong *)(piVar4 + 8) + (longlong)((iVar9 * iVar3 + iVar14) * iVar2 + iVar13) * 0x10) ==
      0) {
    fVar1 = *(float *)((longlong)this + 0x1c);
    lVar5 = *(longlong *)this;
    local_38 = (double)((float)(iVar13 * 8) * fVar1 + *(float *)((longlong)this + 0x10)) +
               *(double *)((longlong)this + 0x20);
    local_30 = (double)((float)(iVar14 * 8) * fVar1 + *(float *)((longlong)this + 0x14)) +
               *(double *)((longlong)this + 0x28);
    local_28 = (double)((float)(iVar9 * 8) * fVar1 + *(float *)((longlong)this + 0x18)) +
               *(double *)((longlong)this + 0x30);
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar5 + 0x10));
    pcVar6 = *(code **)(lVar5 + 0x10);
    plVar11 = (longlong *)(lVar5 + 0x20);
    if (*(longlong **)(lVar5 + 0x38) != (longlong *)0x0) {
      plVar11 = *(longlong **)(lVar5 + 0x38);
    }
    uVar10 = (**(code **)(*plVar11 + 8))();
    cVar8 = (*pcVar6)(uVar10,&local_38);
    if (cVar8 != '\0') {
      piVar4 = *(int **)((longlong)this + 8);
      lVar5 = *(longlong *)(piVar4 + 8);
      lVar12 = (longlong)((iVar9 * piVar4[1] + iVar14) * *piVar4 + iVar13);
      *(uint *)(lVar5 + 8 + lVar12 * 0x10) =
           *(uint *)(lVar5 + 8 + lVar12 * 0x10) ^ __xmm_80000000800000008000000080000000;
      pvVar7 = *(void **)(lVar5 + lVar12 * 0x10);
      if (pvVar7 != (void *)0x0) {
        *(undefined8 *)(lVar5 + lVar12 * 0x10) = 0;
        ::operator_delete(pvVar7,0x804);
      }
    }
  }
  return;
}

// operator() @ 14c9571c0

void __thiscall
`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::update_signs'::__l5::
<lambda_2>::operator()(void *this,int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  code *pcVar6;
  void *pvVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  double local_38;
  double local_30;
  double local_28;
  
  piVar4 = *(int **)((longlong)this + 8);
  iVar2 = *piVar4;
  iVar3 = piVar4[1];
  iVar13 = param_1 % iVar2;
  iVar9 = param_1 / (iVar3 * iVar2);
  iVar14 = (int)((longlong)
                 ((ulonglong)(uint)((int)((longlong)param_1 / (longlong)iVar2) >> 0x1f) << 0x20 |
                 (longlong)param_1 / (longlong)iVar2 & 0xffffffffU) % (longlong)iVar3);
  if (*(longlong *)
       (*(longlong *)(piVar4 + 8) + (longlong)((iVar9 * iVar3 + iVar14) * iVar2 + iVar13) * 0x10) ==
      0) {
    fVar1 = *(float *)((longlong)this + 0x1c);
    lVar5 = *(longlong *)this;
    local_38 = (double)((float)(iVar13 * 8) * fVar1 + *(float *)((longlong)this + 0x10)) +
               *(double *)((longlong)this + 0x20);
    local_30 = (double)((float)(iVar14 * 8) * fVar1 + *(float *)((longlong)this + 0x14)) +
               *(double *)((longlong)this + 0x28);
    local_28 = (double)((float)(iVar9 * 8) * fVar1 + *(float *)((longlong)this + 0x18)) +
               *(double *)((longlong)this + 0x30);
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar5 + 0x10));
    pcVar6 = *(code **)(lVar5 + 0x10);
    plVar11 = (longlong *)(lVar5 + 0x20);
    if (*(longlong **)(lVar5 + 0x38) != (longlong *)0x0) {
      plVar11 = *(longlong **)(lVar5 + 0x38);
    }
    uVar10 = (**(code **)(*plVar11 + 8))();
    cVar8 = (*pcVar6)(uVar10,&local_38);
    if (cVar8 != '\0') {
      piVar4 = *(int **)((longlong)this + 8);
      lVar5 = *(longlong *)(piVar4 + 8);
      lVar12 = (longlong)((iVar9 * piVar4[1] + iVar14) * *piVar4 + iVar13);
      *(uint *)(lVar5 + 8 + lVar12 * 0x10) =
           *(uint *)(lVar5 + 8 + lVar12 * 0x10) ^ __xmm_80000000800000008000000080000000;
      pvVar7 = *(void **)(lVar5 + lVar12 * 0x10);
      if (pvVar7 != (void *)0x0) {
        *(undefined8 *)(lVar5 + lVar12 * 0x10) = 0;
        ::operator_delete(pvVar7,0x804);
      }
    }
  }
  return;
}

// operator() @ 14c957d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::make_level_set3_parallel_floodfill'::__l9::<lambda_3>::operator()(void *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  float fVar2;
  int *piVar3;
  int *piVar4;
  TBasicBlockedDenseGrid3<bool,8> *this_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  TBlockData3<bool,8> *pTVar10;
  uint uVar11;
  ForElementType<unsigned_int> FVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *pTVar18;
  uchar *puVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *pTVar24;
  longlong lVar25;
  FVector3i *pFVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_a08 [32];
  int *local_9e8;
  FScriptContainerElement *local_9e0;
  longlong local_9d8;
  longlong local_9d0;
  undefined8 local_9c8;
  ForAnyElementType local_9b8;
  undefined8 local_9b0;
  int local_9a8;
  <lambda_1> local_9a4;
  <lambda_1> local_9a3 [3];
  int local_9a0;
  int local_99c;
  int local_998;
  int local_990;
  uint uStack_98c;
  int local_988;
  int local_980;
  int iStack_97c;
  int local_978;
  int local_970;
  int local_96c;
  longlong *local_968;
  longlong local_960;
  longlong local_958;
  int local_950;
  int local_94c;
  ulonglong local_948;
  ulonglong local_940;
  undefined8 local_938;
  double local_928;
  double local_920;
  double local_918;
  double local_910;
  double local_908;
  double local_900;
  longlong local_8f8 [2];
  longlong local_8e8;
  longlong local_8d8 [3];
  longlong *local_8c0;
  undefined1 local_8b8;
  longlong local_8a8 [2];
  longlong local_898;
  longlong local_888 [3];
  longlong *local_870;
  undefined1 local_868;
  TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_858;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a08;
  plVar14 = *(longlong **)((longlong)this + 0x30);
  iVar21 = 0;
  iVar20 = (int)plVar14[1];
  uVar11 = 0;
  if (param_1 < iVar20) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  local_968 = this;
  if ((uVar11 == 0) &&
     (local_9e8 = (int *)(longlong)param_1, local_9e0 = (FScriptContainerElement *)(longlong)iVar20,
     bVar6 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar6
     )) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  piVar3 = *(int **)((longlong)this + 0x20);
  piVar4 = *(int **)(*plVar14 + (longlong)param_1 * 8);
  iVar20 = *piVar4;
  lVar25 = (longlong)iVar20;
  local_960 = *(longlong *)(*(longlong *)(piVar3 + 8) + lVar25 * 0x10);
  local_958 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x120) + lVar25 * 0x10);
  lVar25 = *(longlong *)(*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x20) + lVar25 * 0x10)
  ;
  uVar23 = (longlong)iVar20 / (longlong)*piVar3;
  local_9a0 = (iVar20 % *piVar3) * 8;
  local_99c = (int)((longlong)((ulonglong)(uint)((int)uVar23 >> 0x1f) << 0x20 | uVar23 & 0xffffffff)
                   % (longlong)piVar3[1]) << 3;
  local_858.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_858.MaxBits = 0;
  local_998 = iVar20 / (piVar3[1] * *piVar3) << 3;
  local_858.NumBits = 0;
  uVar11 = piVar4[0x204] + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar11) {
    local_858.MaxBits = 0x4000;
    if (0x4000 < (int)uVar11) {
      local_858.MaxBits = uVar11;
    }
    TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::Realloc(&local_858,0);
  }
  local_858.NumBits = piVar4[0x204];
  if (local_858.NumBits != 0) {
    pTVar18 = (TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *)(piVar4 + 2);
    if (*(TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> **)(piVar4 + 0x202)
        != (TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
      pTVar18 = *(TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> **)
                 (piVar4 + 0x202);
    }
    FVar12 = (ForElementType<unsigned_int>)&local_858;
    if (local_858.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_858.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)FVar12,pTVar18,(ulonglong)(local_858.NumBits + 0x1fU >> 5) << 2);
  }
  pTVar18 = (TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *)(lVar25 + 8);
  UE::Core::Private::
  BitwiseOperatorImpl<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>,_TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::CombineWithBitwiseXOR<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
            (pTVar18,&local_858,MaintainSize,&local_9a4);
  UE::Core::Private::
  BitwiseOperatorImpl<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>,_TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::CombineWithBitwiseAND<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
            ((TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *)(piVar4 + 2),
             &local_858,MaintainSize,local_9a3);
  iVar20 = 0;
  uVar23 = 0;
  local_9b8.Data = (FScriptContainerElement *)0x0;
  uVar11 = 1;
  local_9b0 = 0;
  if (local_858.NumBits != 0) {
    FVar12 = (ForElementType<unsigned_int>)&local_858;
    if (local_858.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_858.AllocatorInstance.SecondaryData;
    }
    uVar22 = *(uint *)FVar12;
    while (uVar22 == 0) {
      lVar13 = (longlong)iVar20;
      iVar21 = iVar21 + 0x20;
      iVar20 = iVar20 + 1;
      if ((int)((local_858.NumBits - 1U) + ((int)(local_858.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iVar20) {
        uVar23 = (ulonglong)(uint)local_858.NumBits;
        goto LAB_14c957fcd;
      }
      uVar22 = *(uint *)((uchar *)((longlong)FVar12 + 4) + lVar13 * 4);
    }
    uVar11 = -uVar22 & uVar22;
    uVar23 = (ulonglong)uVar11 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_950 = (int)lVar13;
    uVar22 = iVar21 + -1 + local_950;
    uVar23 = (ulonglong)uVar22;
    if (local_858.NumBits < (int)uVar22) {
      uVar23 = (ulonglong)(uint)local_858.NumBits;
    }
  }
LAB_14c957fcd:
  if ((int)uVar23 < local_858.NumBits) {
    uVar22 = 0xffffffff;
    do {
      iVar9 = (int)uVar23;
      if (((iVar9 < 0) || (*(int *)(lVar25 + 0x810) <= iVar9)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar24 = pTVar18;
      if (*(TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> **)
           (lVar25 + 0x808) !=
          (TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
        pTVar24 = *(TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> **)
                   (lVar25 + 0x808);
      }
      iVar7 = iVar9;
      if (iVar9 < 0) {
        iVar7 = iVar9 + 0x1f;
      }
      puVar19 = (pTVar24->AllocatorInstance).InlineData + (longlong)(iVar7 >> 5) * 4;
      *(uint *)puVar19 = *(uint *)puVar19 | 1 << ((byte)uVar23 & 0x1f);
      uVar15 = iVar9 >> 0x1f & 7;
      uVar8 = iVar9 + uVar15;
      local_990 = (uVar8 & 7) - uVar15;
      uStack_98c = (int)uVar8 >> 3 & 0x80000007;
      if ((int)uStack_98c < 0) {
        uStack_98c = (uStack_98c - 1 | 0xfffffff8) + 1;
      }
      lVar13 = *(longlong *)this;
      local_988 = (int)(iVar9 + (iVar9 >> 0x1f & 0x3fU)) >> 6;
      fVar2 = *(float *)(lVar13 + 0x40);
      local_920 = (double)((float)(int)(local_99c + uStack_98c) * fVar2 + *(float *)(lVar13 + 0xc4))
      ;
      local_928 = (double)((float)(local_9a0 + local_990) * fVar2 + *(float *)(lVar13 + 0xc0));
      local_918 = (double)((float)(local_988 + local_998) * fVar2 + *(float *)(lVar13 + 200));
      local_8f8[0] = *(longlong *)((longlong)this + 8);
      local_8e8 = 0;
      local_8c0 = (longlong *)0x0;
      local_8b8 = 0;
      iVar9 = (**(code **)(**(longlong **)(lVar13 + 8) + 0x20))
                        (*(longlong **)(lVar13 + 8),&local_928,&local_948,local_8f8);
      if (local_8e8 != 0) {
        plVar14 = local_8d8;
        if (local_8c0 != (longlong *)0x0) {
          plVar14 = local_8c0;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      if (iVar9 != -1) {
        auVar27._8_8_ = 0;
        auVar27._0_8_ = local_948;
        auVar27 = sqrtpd(auVar27,auVar27);
        *(float *)(local_960 + 4 + uVar23 * 4) = (float)auVar27._0_8_;
        *(int *)(local_958 + 4 + uVar23 * 4) = iVar9;
        if (local_9b8.Data <= (FScriptContainerElement *)&local_990) {
          if ((FScriptContainerElement *)&local_990 <
              local_9b8.Data + (longlong)local_9b0._4_4_ * 0xc) {
            local_9d0 = (longlong)(int)local_9b0;
            local_9c8 = 0xc;
            local_9e8 = &local_990;
            local_9e0 = local_9b8.Data;
            local_9d8 = (longlong)local_9b0._4_4_;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
        }
        iVar9 = (int)local_9b0;
        if ((int)local_9b0 == local_9b0._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&local_9b8,(int *)((longlong)&local_9b0 + 4));
        }
        local_9b0 = CONCAT44(local_9b0._4_4_,iVar9 + 1);
        *(ulonglong *)(local_9b8.Data + (longlong)iVar9 * 0xc) = CONCAT44(uStack_98c,local_990);
        *(int *)(local_9b8.Data + (longlong)iVar9 * 0xc + 8) = local_988;
      }
      uVar22 = uVar22 & ~uVar11;
      FVar12 = (ForElementType<unsigned_int>)&local_858;
      if (local_858.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_858.AllocatorInstance.SecondaryData;
      }
      uVar8 = uVar22 & *(uint *)((longlong)FVar12 + (longlong)iVar20 * 4);
      while (uVar8 == 0) {
        lVar13 = (longlong)iVar20;
        iVar21 = iVar21 + 0x20;
        iVar20 = iVar20 + 1;
        if ((int)((local_858.NumBits - 1U) + ((int)(local_858.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            iVar20) {
          uVar23 = (ulonglong)(uint)local_858.NumBits;
          goto LAB_14c9582b3;
        }
        uVar22 = 0xffffffff;
        uVar8 = *(uint *)((uchar *)((longlong)FVar12 + 4) + lVar13 * 4);
      }
      uVar11 = -uVar8 & uVar8;
      uVar23 = (ulonglong)uVar11 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_94c = (int)lVar13;
      uVar8 = iVar21 + -1 + local_94c;
      uVar23 = (ulonglong)uVar8;
      if (local_858.NumBits < (int)uVar8) {
        uVar23 = (ulonglong)(uint)local_858.NumBits;
      }
LAB_14c9582b3:
      this = local_968;
    } while ((int)uVar23 < local_858.NumBits);
    pFVar1 = local_9e0;
    while (local_9e0 = pFVar1, 0 < (int)local_9b0) {
      local_9e0 = (FScriptContainerElement *)(longlong)(int)local_9b0;
      if ((int)local_9b0 < 1) {
        local_9e8 = (int *)0x0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        pFVar1 = local_9e0;
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_9e0 = pFVar1;
      iVar20 = (int)local_9b0 + -1;
      local_938 = *(undefined8 *)(local_9b8.Data + (longlong)iVar20 * 0xc);
      pFVar1 = local_9b8.Data + (longlong)iVar20 * 0xc;
      local_9a8 = *(int *)(pFVar1 + 8);
      iVar20 = ((int)local_9b0 - iVar20) + -1;
      if (iVar20 != 0) {
        memmove(pFVar1,pFVar1 + 0xc,(longlong)iVar20 * 0xc);
      }
      pFVar26 = IndexUtil::GridOffsets26;
      local_9b0 = CONCAT44(local_9b0._4_4_,(int)local_9b0 + -1);
      local_970 = local_938._4_4_;
      local_96c = (int)local_938;
      iVar20 = local_9a8;
      do {
        local_980 = (pFVar26->field0_0x0)._s_0.X + local_96c;
        uVar11 = local_9a0 + local_980;
        iStack_97c = (pFVar26->field0_0x0)._s_0.Y + local_970;
        iVar9 = local_99c + iStack_97c;
        local_978 = (pFVar26->field0_0x0)._s_0.Z + iVar20;
        iVar21 = local_998 + local_978;
        if ((((local_980 < 0) || (iStack_97c < 0)) ||
            ((local_978 < 0 || ((7 < local_980 || (7 < iStack_97c)))))) || (7 < local_978)) {
          this_00 = (TBasicBlockedDenseGrid3<bool,8> *)local_968[5];
          if (((((-1 < (int)uVar11) && (-1 < iVar9)) && (-1 < iVar21)) &&
              (((int)uVar11 < *(int *)((longlong)&this_00->_padding_ + 4) &&
               (iVar9 < (int)this_00->_padding_)))) &&
             (iVar21 < *(int *)((longlong)&this_00->_padding_ + 4))) {
            uVar22 = uVar11 & 7;
            if ((int)uVar11 < 0) {
              uVar11 = uVar11 + 7;
              uVar22 = uVar22 - 8;
            }
            uVar16 = iVar9 >> 0x1f & 7;
            uVar8 = iVar9 + uVar16;
            uVar17 = iVar21 >> 0x1f & 7;
            uVar15 = iVar21 + uVar17;
            iVar20 = uVar22 + (((uVar8 & 7) - uVar16) + ((uVar15 & 7) - uVar17) * 8) * 8;
            iVar21 = (((int)uVar15 >> 3) * *(int *)((longlong)&this_00->_padding_ + 4) +
                     ((int)uVar8 >> 3)) * (int)this_00->_padding_ + ((int)uVar11 >> 3);
            lpCriticalSection =
                 (LPCRITICAL_SECTION)(**(longlong **)local_968[2] + (longlong)iVar21 * 0x28);
            if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::ReportNotNullPtr();
            }
            EnterCriticalSection(lpCriticalSection);
            pTVar10 = UE::Geometry::TBasicBlockedDenseGrid3<bool,8>::TouchBlockData(this_00,iVar21);
            if (((iVar20 < 0) || ((pTVar10->BitArray).NumBits <= iVar20)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (((iVar20 < 0) || ((pTVar10->BitArray).NumBits <= iVar20)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar12 = (pTVar10->BitArray).AllocatorInstance.SecondaryData;
            if (FVar12 == (ForElementType<unsigned_int>)0x0) {
              iVar21 = iVar20;
              if (iVar20 < 0) {
                iVar21 = iVar20 + 0x1f;
              }
              puVar19 = (pTVar10->BitArray).AllocatorInstance.InlineData +
                        (longlong)(iVar21 >> 5) * 4;
            }
            else {
              iVar21 = iVar20;
              if (iVar20 < 0) {
                iVar21 = iVar20 + 0x1f;
              }
              puVar19 = (uchar *)((longlong)FVar12 + (longlong)(iVar21 >> 5) * 4);
            }
            *(uint *)puVar19 = *(uint *)puVar19 | 1 << ((byte)iVar20 & 0x1f);
            LeaveCriticalSection(lpCriticalSection);
            iVar20 = local_9a8;
          }
        }
        else {
          uVar22 = local_980 + (iStack_97c + local_978 * 8) * 8;
          if ((((int)uVar22 < 0) || (*(int *)(lVar25 + 0x810) <= (int)uVar22)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar24 = pTVar18;
          if (*(TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> **)
               (lVar25 + 0x808) !=
              (TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
            pTVar24 = *(TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> **)
                       (lVar25 + 0x808);
          }
          lVar13 = (longlong)((int)(uVar22 + ((int)uVar22 >> 0x1f & 0x1fU)) >> 5);
          iVar20 = local_9a8;
          if ((*(uint *)((pTVar24->AllocatorInstance).InlineData + lVar13 * 4) >> (uVar22 & 0x1f) &
              1) == 0) {
            if ((((int)uVar22 < 0) || (*(int *)(lVar25 + 0x810) <= (int)uVar22)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar24 = pTVar18;
            if (*(TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> **)
                 (lVar25 + 0x808) !=
                (TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
              pTVar24 = *(TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> **)
                         (lVar25 + 0x808);
            }
            puVar19 = (pTVar24->AllocatorInstance).InlineData + lVar13 * 4;
            *(uint *)puVar19 = *(uint *)puVar19 | 1 << ((byte)uVar22 & 0x1f);
            lVar13 = *local_968;
            fVar2 = *(float *)(lVar13 + 0x40);
            local_910 = (double)((float)(int)uVar11 * fVar2 + *(float *)(lVar13 + 0xc0));
            local_900 = (double)((float)iVar21 * fVar2 + *(float *)(lVar13 + 200));
            local_908 = (double)((float)iVar9 * fVar2 + *(float *)(lVar13 + 0xc4));
            local_8a8[0] = local_968[1];
            local_898 = 0;
            local_870 = (longlong *)0x0;
            local_868 = 0;
            iVar21 = (**(code **)(**(longlong **)(lVar13 + 8) + 0x20))
                               (*(longlong **)(lVar13 + 8),&local_910,&local_940,local_8a8);
            if (local_898 != 0) {
              plVar14 = local_888;
              if (local_870 != (longlong *)0x0) {
                plVar14 = local_870;
              }
              (**(code **)(*plVar14 + 0x10))();
            }
            iVar20 = local_9a8;
            if (iVar21 != -1) {
              auVar28._8_8_ = 0;
              auVar28._0_8_ = local_940;
              auVar27 = sqrtpd(auVar28,auVar28);
              *(float *)(local_960 + 4 + (ulonglong)uVar22 * 4) = (float)auVar27._0_8_;
              *(int *)(local_958 + 4 + (ulonglong)uVar22 * 4) = iVar21;
              if (local_9b8.Data <= (FScriptContainerElement *)&local_980) {
                if ((FScriptContainerElement *)&local_980 <
                    local_9b8.Data + (longlong)local_9b0._4_4_ * 0xc) {
                  local_9d0 = (longlong)(int)local_9b0;
                  local_9c8 = 0xc;
                  local_9e8 = &local_980;
                  local_9e0 = local_9b8.Data;
                  local_9d8 = (longlong)local_9b0._4_4_;
                  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    );
                  if (bVar6) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                }
              }
              iVar20 = (int)local_9b0;
              if ((int)local_9b0 == local_9b0._4_4_) {
                iVar20 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x40c,&local_9b8,(int *)((longlong)&local_9b0 + 4));
              }
              local_9b0 = CONCAT44(local_9b0._4_4_,iVar20 + 1);
              *(ulonglong *)(local_9b8.Data + (longlong)iVar20 * 0xc) =
                   CONCAT44(iStack_97c,local_980);
              *(int *)(local_9b8.Data + (longlong)iVar20 * 0xc + 8) = local_978;
              iVar20 = local_9a8;
            }
          }
        }
        pFVar26 = pFVar26 + 1;
      } while (pFVar26 != (FVector3i *)&DAT_150aa30e8);
      pFVar1 = local_9e0;
    }
  }
  if (local_9b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9b8.Data);
  }
  if (local_858.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_858.AllocatorInstance.SecondaryData);
  }
  return;
}

// operator() @ 14c958860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::
make_level_set3_parallel_floodfill'::__l9::<lambda_3>::operator()(void *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  float fVar2;
  int *piVar3;
  int *piVar4;
  TBasicBlockedDenseGrid3<bool,8> *this_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  TBlockData3<bool,8> *pTVar10;
  uint uVar11;
  ForElementType<unsigned_int> FVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *pTVar18;
  uchar *puVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *pTVar24;
  longlong lVar25;
  FVector3i *pFVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_a08 [32];
  int *local_9e8;
  FScriptContainerElement *local_9e0;
  longlong local_9d8;
  longlong local_9d0;
  undefined8 local_9c8;
  ForAnyElementType local_9b8;
  undefined8 local_9b0;
  int local_9a8;
  <lambda_1> local_9a4;
  <lambda_1> local_9a3 [3];
  int local_9a0;
  int local_99c;
  int local_998;
  int local_990;
  uint uStack_98c;
  int local_988;
  int local_980;
  int iStack_97c;
  int local_978;
  int local_970;
  int local_96c;
  longlong *local_968;
  longlong local_960;
  longlong local_958;
  int local_950;
  int local_94c;
  ulonglong local_948;
  ulonglong local_940;
  undefined8 local_938;
  double local_928;
  double local_920;
  double local_918;
  double local_910;
  double local_908;
  double local_900;
  longlong local_8f8 [2];
  longlong local_8e8;
  longlong local_8d8 [3];
  longlong *local_8c0;
  undefined1 local_8b8;
  longlong local_8a8 [2];
  longlong local_898;
  longlong local_888 [3];
  longlong *local_870;
  undefined1 local_868;
  TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> local_858;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a08;
  plVar14 = *(longlong **)((longlong)this + 0x30);
  iVar21 = 0;
  iVar20 = (int)plVar14[1];
  uVar11 = 0;
  if (param_1 < iVar20) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  local_968 = this;
  if ((uVar11 == 0) &&
     (local_9e8 = (int *)(longlong)param_1, local_9e0 = (FScriptContainerElement *)(longlong)iVar20,
     bVar6 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar6
     )) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  piVar3 = *(int **)((longlong)this + 0x20);
  piVar4 = *(int **)(*plVar14 + (longlong)param_1 * 8);
  iVar20 = *piVar4;
  lVar25 = (longlong)iVar20;
  local_960 = *(longlong *)(*(longlong *)(piVar3 + 8) + lVar25 * 0x10);
  local_958 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x120) + lVar25 * 0x10);
  lVar25 = *(longlong *)(*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x20) + lVar25 * 0x10)
  ;
  uVar23 = (longlong)iVar20 / (longlong)*piVar3;
  local_9a0 = (iVar20 % *piVar3) * 8;
  local_99c = (int)((longlong)((ulonglong)(uint)((int)uVar23 >> 0x1f) << 0x20 | uVar23 & 0xffffffff)
                   % (longlong)piVar3[1]) << 3;
  local_858.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_858.MaxBits = 0;
  local_998 = iVar20 / (piVar3[1] * *piVar3) << 3;
  local_858.NumBits = 0;
  uVar11 = piVar4[0x204] + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar11) {
    local_858.MaxBits = 0x4000;
    if (0x4000 < (int)uVar11) {
      local_858.MaxBits = uVar11;
    }
    TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::Realloc(&local_858,0);
  }
  local_858.NumBits = piVar4[0x204];
  if (local_858.NumBits != 0) {
    pTVar18 = (TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *)(piVar4 + 2);
    if (*(TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> **)(piVar4 + 0x202)
        != (TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
      pTVar18 = *(TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> **)
                 (piVar4 + 0x202);
    }
    FVar12 = (ForElementType<unsigned_int>)&local_858;
    if (local_858.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_858.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)FVar12,pTVar18,(ulonglong)(local_858.NumBits + 0x1fU >> 5) << 2);
  }
  pTVar18 = (TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *)(lVar25 + 8);
  UE::Core::Private::
  BitwiseOperatorImpl<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>,_TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::CombineWithBitwiseXOR<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
            (pTVar18,&local_858,MaintainSize,&local_9a4);
  UE::Core::Private::
  BitwiseOperatorImpl<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>,_TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::CombineWithBitwiseAND<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
            ((TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *)(piVar4 + 2),
             &local_858,MaintainSize,local_9a3);
  iVar20 = 0;
  uVar23 = 0;
  local_9b8.Data = (FScriptContainerElement *)0x0;
  uVar11 = 1;
  local_9b0 = 0;
  if (local_858.NumBits != 0) {
    FVar12 = (ForElementType<unsigned_int>)&local_858;
    if (local_858.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_858.AllocatorInstance.SecondaryData;
    }
    uVar22 = *(uint *)FVar12;
    while (uVar22 == 0) {
      lVar13 = (longlong)iVar20;
      iVar21 = iVar21 + 0x20;
      iVar20 = iVar20 + 1;
      if ((int)((local_858.NumBits - 1U) + ((int)(local_858.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iVar20) {
        uVar23 = (ulonglong)(uint)local_858.NumBits;
        goto LAB_14c958a9d;
      }
      uVar22 = *(uint *)((uchar *)((longlong)FVar12 + 4) + lVar13 * 4);
    }
    uVar11 = -uVar22 & uVar22;
    uVar23 = (ulonglong)uVar11 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_950 = (int)lVar13;
    uVar22 = iVar21 + -1 + local_950;
    uVar23 = (ulonglong)uVar22;
    if (local_858.NumBits < (int)uVar22) {
      uVar23 = (ulonglong)(uint)local_858.NumBits;
    }
  }
LAB_14c958a9d:
  if ((int)uVar23 < local_858.NumBits) {
    uVar22 = 0xffffffff;
    do {
      iVar9 = (int)uVar23;
      if (((iVar9 < 0) || (*(int *)(lVar25 + 0x810) <= iVar9)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar24 = pTVar18;
      if (*(TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> **)
           (lVar25 + 0x808) !=
          (TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
        pTVar24 = *(TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> **)
                   (lVar25 + 0x808);
      }
      iVar7 = iVar9;
      if (iVar9 < 0) {
        iVar7 = iVar9 + 0x1f;
      }
      puVar19 = (pTVar24->AllocatorInstance).InlineData + (longlong)(iVar7 >> 5) * 4;
      *(uint *)puVar19 = *(uint *)puVar19 | 1 << ((byte)uVar23 & 0x1f);
      uVar15 = iVar9 >> 0x1f & 7;
      uVar8 = iVar9 + uVar15;
      local_990 = (uVar8 & 7) - uVar15;
      uStack_98c = (int)uVar8 >> 3 & 0x80000007;
      if ((int)uStack_98c < 0) {
        uStack_98c = (uStack_98c - 1 | 0xfffffff8) + 1;
      }
      lVar13 = *(longlong *)this;
      local_988 = (int)(iVar9 + (iVar9 >> 0x1f & 0x3fU)) >> 6;
      fVar2 = *(float *)(lVar13 + 0x40);
      local_920 = (double)((float)(int)(local_99c + uStack_98c) * fVar2 + *(float *)(lVar13 + 0xc4))
      ;
      local_928 = (double)((float)(local_9a0 + local_990) * fVar2 + *(float *)(lVar13 + 0xc0));
      local_918 = (double)((float)(local_988 + local_998) * fVar2 + *(float *)(lVar13 + 200));
      local_8f8[0] = *(longlong *)((longlong)this + 8);
      local_8e8 = 0;
      local_8c0 = (longlong *)0x0;
      local_8b8 = 0;
      iVar9 = (**(code **)(**(longlong **)(lVar13 + 8) + 0x20))
                        (*(longlong **)(lVar13 + 8),&local_928,&local_948,local_8f8);
      if (local_8e8 != 0) {
        plVar14 = local_8d8;
        if (local_8c0 != (longlong *)0x0) {
          plVar14 = local_8c0;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      if (iVar9 != -1) {
        auVar27._8_8_ = 0;
        auVar27._0_8_ = local_948;
        auVar27 = sqrtpd(auVar27,auVar27);
        *(float *)(local_960 + 4 + uVar23 * 4) = (float)auVar27._0_8_;
        *(int *)(local_958 + 4 + uVar23 * 4) = iVar9;
        if (local_9b8.Data <= (FScriptContainerElement *)&local_990) {
          if ((FScriptContainerElement *)&local_990 <
              local_9b8.Data + (longlong)local_9b0._4_4_ * 0xc) {
            local_9d0 = (longlong)(int)local_9b0;
            local_9c8 = 0xc;
            local_9e8 = &local_990;
            local_9e0 = local_9b8.Data;
            local_9d8 = (longlong)local_9b0._4_4_;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
        }
        iVar9 = (int)local_9b0;
        if ((int)local_9b0 == local_9b0._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&local_9b8,(int *)((longlong)&local_9b0 + 4));
        }
        local_9b0 = CONCAT44(local_9b0._4_4_,iVar9 + 1);
        *(ulonglong *)(local_9b8.Data + (longlong)iVar9 * 0xc) = CONCAT44(uStack_98c,local_990);
        *(int *)(local_9b8.Data + (longlong)iVar9 * 0xc + 8) = local_988;
      }
      uVar22 = uVar22 & ~uVar11;
      FVar12 = (ForElementType<unsigned_int>)&local_858;
      if (local_858.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_858.AllocatorInstance.SecondaryData;
      }
      uVar8 = uVar22 & *(uint *)((longlong)FVar12 + (longlong)iVar20 * 4);
      while (uVar8 == 0) {
        lVar13 = (longlong)iVar20;
        iVar21 = iVar21 + 0x20;
        iVar20 = iVar20 + 1;
        if ((int)((local_858.NumBits - 1U) + ((int)(local_858.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            iVar20) {
          uVar23 = (ulonglong)(uint)local_858.NumBits;
          goto LAB_14c958d83;
        }
        uVar22 = 0xffffffff;
        uVar8 = *(uint *)((uchar *)((longlong)FVar12 + 4) + lVar13 * 4);
      }
      uVar11 = -uVar8 & uVar8;
      uVar23 = (ulonglong)uVar11 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_94c = (int)lVar13;
      uVar8 = iVar21 + -1 + local_94c;
      uVar23 = (ulonglong)uVar8;
      if (local_858.NumBits < (int)uVar8) {
        uVar23 = (ulonglong)(uint)local_858.NumBits;
      }
LAB_14c958d83:
      this = local_968;
    } while ((int)uVar23 < local_858.NumBits);
    pFVar1 = local_9e0;
    while (local_9e0 = pFVar1, 0 < (int)local_9b0) {
      local_9e0 = (FScriptContainerElement *)(longlong)(int)local_9b0;
      if ((int)local_9b0 < 1) {
        local_9e8 = (int *)0x0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        pFVar1 = local_9e0;
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_9e0 = pFVar1;
      iVar20 = (int)local_9b0 + -1;
      local_938 = *(undefined8 *)(local_9b8.Data + (longlong)iVar20 * 0xc);
      pFVar1 = local_9b8.Data + (longlong)iVar20 * 0xc;
      local_9a8 = *(int *)(pFVar1 + 8);
      iVar20 = ((int)local_9b0 - iVar20) + -1;
      if (iVar20 != 0) {
        memmove(pFVar1,pFVar1 + 0xc,(longlong)iVar20 * 0xc);
      }
      pFVar26 = IndexUtil::GridOffsets26;
      local_9b0 = CONCAT44(local_9b0._4_4_,(int)local_9b0 + -1);
      local_970 = local_938._4_4_;
      local_96c = (int)local_938;
      iVar20 = local_9a8;
      do {
        local_980 = (pFVar26->field0_0x0)._s_0.X + local_96c;
        uVar11 = local_9a0 + local_980;
        iStack_97c = (pFVar26->field0_0x0)._s_0.Y + local_970;
        iVar9 = local_99c + iStack_97c;
        local_978 = (pFVar26->field0_0x0)._s_0.Z + iVar20;
        iVar21 = local_998 + local_978;
        if ((((local_980 < 0) || (iStack_97c < 0)) ||
            ((local_978 < 0 || ((7 < local_980 || (7 < iStack_97c)))))) || (7 < local_978)) {
          this_00 = (TBasicBlockedDenseGrid3<bool,8> *)local_968[5];
          if (((((-1 < (int)uVar11) && (-1 < iVar9)) && (-1 < iVar21)) &&
              (((int)uVar11 < *(int *)((longlong)&this_00->_padding_ + 4) &&
               (iVar9 < (int)this_00->_padding_)))) &&
             (iVar21 < *(int *)((longlong)&this_00->_padding_ + 4))) {
            uVar22 = uVar11 & 7;
            if ((int)uVar11 < 0) {
              uVar11 = uVar11 + 7;
              uVar22 = uVar22 - 8;
            }
            uVar16 = iVar9 >> 0x1f & 7;
            uVar8 = iVar9 + uVar16;
            uVar17 = iVar21 >> 0x1f & 7;
            uVar15 = iVar21 + uVar17;
            iVar20 = uVar22 + (((uVar8 & 7) - uVar16) + ((uVar15 & 7) - uVar17) * 8) * 8;
            iVar21 = (((int)uVar15 >> 3) * *(int *)((longlong)&this_00->_padding_ + 4) +
                     ((int)uVar8 >> 3)) * (int)this_00->_padding_ + ((int)uVar11 >> 3);
            lpCriticalSection =
                 (LPCRITICAL_SECTION)(**(longlong **)local_968[2] + (longlong)iVar21 * 0x28);
            if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::ReportNotNullPtr();
            }
            EnterCriticalSection(lpCriticalSection);
            pTVar10 = UE::Geometry::TBasicBlockedDenseGrid3<bool,8>::TouchBlockData(this_00,iVar21);
            if (((iVar20 < 0) || ((pTVar10->BitArray).NumBits <= iVar20)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (((iVar20 < 0) || ((pTVar10->BitArray).NumBits <= iVar20)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar12 = (pTVar10->BitArray).AllocatorInstance.SecondaryData;
            if (FVar12 == (ForElementType<unsigned_int>)0x0) {
              iVar21 = iVar20;
              if (iVar20 < 0) {
                iVar21 = iVar20 + 0x1f;
              }
              puVar19 = (pTVar10->BitArray).AllocatorInstance.InlineData +
                        (longlong)(iVar21 >> 5) * 4;
            }
            else {
              iVar21 = iVar20;
              if (iVar20 < 0) {
                iVar21 = iVar20 + 0x1f;
              }
              puVar19 = (uchar *)((longlong)FVar12 + (longlong)(iVar21 >> 5) * 4);
            }
            *(uint *)puVar19 = *(uint *)puVar19 | 1 << ((byte)iVar20 & 0x1f);
            LeaveCriticalSection(lpCriticalSection);
            iVar20 = local_9a8;
          }
        }
        else {
          uVar22 = local_980 + (iStack_97c + local_978 * 8) * 8;
          if ((((int)uVar22 < 0) || (*(int *)(lVar25 + 0x810) <= (int)uVar22)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar24 = pTVar18;
          if (*(TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> **)
               (lVar25 + 0x808) !=
              (TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
            pTVar24 = *(TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> **)
                       (lVar25 + 0x808);
          }
          lVar13 = (longlong)((int)(uVar22 + ((int)uVar22 >> 0x1f & 0x1fU)) >> 5);
          iVar20 = local_9a8;
          if ((*(uint *)((pTVar24->AllocatorInstance).InlineData + lVar13 * 4) >> (uVar22 & 0x1f) &
              1) == 0) {
            if ((((int)uVar22 < 0) || (*(int *)(lVar25 + 0x810) <= (int)uVar22)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar24 = pTVar18;
            if (*(TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> **)
                 (lVar25 + 0x808) !=
                (TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
              pTVar24 = *(TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> **)
                         (lVar25 + 0x808);
            }
            puVar19 = (pTVar24->AllocatorInstance).InlineData + lVar13 * 4;
            *(uint *)puVar19 = *(uint *)puVar19 | 1 << ((byte)uVar22 & 0x1f);
            lVar13 = *local_968;
            fVar2 = *(float *)(lVar13 + 0x40);
            local_910 = (double)((float)(int)uVar11 * fVar2 + *(float *)(lVar13 + 0xc0));
            local_900 = (double)((float)iVar21 * fVar2 + *(float *)(lVar13 + 200));
            local_908 = (double)((float)iVar9 * fVar2 + *(float *)(lVar13 + 0xc4));
            local_8a8[0] = local_968[1];
            local_898 = 0;
            local_870 = (longlong *)0x0;
            local_868 = 0;
            iVar21 = (**(code **)(**(longlong **)(lVar13 + 8) + 0x20))
                               (*(longlong **)(lVar13 + 8),&local_910,&local_940,local_8a8);
            if (local_898 != 0) {
              plVar14 = local_888;
              if (local_870 != (longlong *)0x0) {
                plVar14 = local_870;
              }
              (**(code **)(*plVar14 + 0x10))();
            }
            iVar20 = local_9a8;
            if (iVar21 != -1) {
              auVar28._8_8_ = 0;
              auVar28._0_8_ = local_940;
              auVar27 = sqrtpd(auVar28,auVar28);
              *(float *)(local_960 + 4 + (ulonglong)uVar22 * 4) = (float)auVar27._0_8_;
              *(int *)(local_958 + 4 + (ulonglong)uVar22 * 4) = iVar21;
              if (local_9b8.Data <= (FScriptContainerElement *)&local_980) {
                if ((FScriptContainerElement *)&local_980 <
                    local_9b8.Data + (longlong)local_9b0._4_4_ * 0xc) {
                  local_9d0 = (longlong)(int)local_9b0;
                  local_9c8 = 0xc;
                  local_9e8 = &local_980;
                  local_9e0 = local_9b8.Data;
                  local_9d8 = (longlong)local_9b0._4_4_;
                  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    );
                  if (bVar6) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                }
              }
              iVar20 = (int)local_9b0;
              if ((int)local_9b0 == local_9b0._4_4_) {
                iVar20 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x40c,&local_9b8,(int *)((longlong)&local_9b0 + 4));
              }
              local_9b0 = CONCAT44(local_9b0._4_4_,iVar20 + 1);
              *(ulonglong *)(local_9b8.Data + (longlong)iVar20 * 0xc) =
                   CONCAT44(iStack_97c,local_980);
              *(int *)(local_9b8.Data + (longlong)iVar20 * 0xc + 8) = local_978;
              iVar20 = local_9a8;
            }
          }
        }
        pFVar26 = pFVar26 + 1;
      } while (pFVar26 != (FVector3i *)&DAT_150aa30e8);
      pFVar1 = local_9e0;
    }
  }
  if (local_9b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9b8.Data);
  }
  if (local_858.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_858.AllocatorInstance.SecondaryData);
  }
  return;
}

// Compute @ 14c979030

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::Compute(TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
          *this,TAxisAlignedBox3<double> *param_1)

{
  TVector<float> *pTVar1;
  double dVar2;
  double dVar3;
  EComputeModes EVar4;
  longlong *plVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  char *pcVar12;
  undefined8 uVar13;
  atomic<unsigned_char> *paVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  double dVar26;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TVector<float>_u_0 local_f8;
  TVector<float>_u_0 local_e8;
  TVector<float>_u_0 local_d8;
  TVector<float>_u_0 local_c8 [12];
  
  dVar24 = (param_1->Min).field0_0x0._s_0.X;
  dVar19 = (param_1->Max).field0_0x0._s_0.X;
  if (((dVar24 <= dVar19) &&
      (dVar2 = (param_1->Max).field0_0x0._s_0.Y, (param_1->Min).field0_0x0._s_0.Y <= dVar2)) &&
     (dVar3 = (param_1->Max).field0_0x0._s_0.Z, (param_1->Min).field0_0x0._s_0.Z <= dVar3)) {
    dVar19 = dVar19 - dVar24;
    dVar26 = dVar2 - (param_1->Min).field0_0x0._s_0.Y;
    dVar23 = dVar3 - (param_1->Min).field0_0x0._s_0.Z;
    dVar24 = dVar19;
    if (dVar19 <= 0.0) {
      dVar24 = 0.0;
    }
    dVar22 = dVar26;
    if (dVar26 <= 0.0) {
      dVar22 = 0.0;
    }
    dVar18 = dVar23;
    if (dVar23 <= 0.0) {
      dVar18 = 0.0;
    }
    if (dVar18 <= dVar22) {
      dVar18 = dVar22;
    }
    if (dVar18 <= dVar24) {
      dVar18 = dVar24;
    }
    iVar11 = _finite(dVar18);
    if (((iVar11 != 0) && (0.0 < this->CellSize)) &&
       ((iVar11 = _finite((double)this->CellSize), iVar11 != 0 &&
        (4 < this->ApproxMaxCellsPerDimension)))) {
      if (this->ApproxMaxCellsPerDimension <= this->ExactBandWidth * 2) {
        local_res10[0] = 0;
        bVar8 = `UE::Geometry::
                TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
                ::Compute'::__l6::<lambda_1>::operator()(local_res10);
        if (!bVar8) {
          iVar11 = this->ApproxMaxCellsPerDimension / 2 + -1;
          iVar16 = 1;
          if (1 < iVar11) {
            iVar16 = iVar11;
          }
          this->ExactBandWidth = iVar16;
        }
      }
      dVar24 = (this->ExpandBounds).field0_0x0._s_0.X;
      dVar22 = (this->ExpandBounds).field0_0x0._s_0.Y;
      dVar18 = (this->ExpandBounds).field0_0x0._s_0.Z;
      dVar19 = dVar24 + dVar24 + dVar19;
      dVar26 = dVar22 + dVar22 + dVar26;
      dVar23 = dVar18 + dVar18 + dVar23;
      if (dVar26 <= dVar19) {
        dVar26 = dVar19;
      }
      if (dVar26 <= dVar23) {
        dVar26 = dVar23;
      }
      if (dVar26 / (double)this->CellSize <=
          (double)(this->ApproxMaxCellsPerDimension + this->ExactBandWidth * -2)) {
LAB_14c979224:
        fVar20 = this->CellSize;
        EVar4 = this->ComputeMode;
        fVar25 = (float)this->ExactBandWidth * fVar20;
        fVar7 = fVar25;
        if ((EVar4 == NarrowBand_SpatialFloodFill) &&
           (fVar7 = (float)this->NarrowBandMaxDistance, (float)this->NarrowBandMaxDistance <= fVar25
           )) {
          fVar7 = fVar25;
        }
        pTVar1 = &this->GridOrigin;
        dVar24 = (param_1->Min).field0_0x0._s_0.Y;
        dVar19 = (param_1->Min).field0_0x0._s_0.Z;
        fVar25 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y * fVar7;
        fVar21 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z * fVar7;
        dVar26 = (this->ExpandBounds).field0_0x0._s_0.Y;
        dVar23 = (this->ExpandBounds).field0_0x0._s_0.Z;
        (pTVar1->field0_0x0)._s_0.X =
             ((float)(param_1->Min).field0_0x0._s_0.X -
             UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X * fVar7) -
             (float)(this->ExpandBounds).field0_0x0._s_0.X;
        (this->GridOrigin).field0_0x0._s_0.Y = ((float)dVar24 - fVar25) - (float)dVar26;
        (this->GridOrigin).field0_0x0._s_0.Z = ((float)dVar19 - fVar21) - (float)dVar23;
        fVar20 = __real_3f800000 / fVar20;
        iVar16 = (int)(((UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X * fVar7 +
                         (float)(param_1->Max).field0_0x0._s_0.X +
                        (float)(this->ExpandBounds).field0_0x0._s_0.X) - (pTVar1->field0_0x0)._s_0.X
                       ) * fVar20) + 1;
        iVar17 = (int)(((UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y * fVar7 +
                         (float)dVar2 + (float)(this->ExpandBounds).field0_0x0._s_0.Y) -
                       (this->GridOrigin).field0_0x0._s_0.Y) * fVar20) + 1;
        iVar11 = (int)(((UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z * fVar7 +
                         (float)dVar3 + (float)(this->ExpandBounds).field0_0x0._s_0.Z) -
                       (this->GridOrigin).field0_0x0._s_0.Z) * fVar20) + 1;
        if (EVar4 == NarrowBand_SpatialFloodFill) {
          if (((this->Spatial ==
                (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
                 *)0x0) || (this->NarrowBandMaxDistance == 0.0)) &&
             (bVar8 = `UE::Geometry::
                      TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
                      ::Compute'::__l21::<lambda_3>::operator()(local_res20), !bVar8)) {
            return false;
          }
          local_f8._0_8_ = *(undefined8 *)&pTVar1->field0_0x0;
          local_f8._s_0.Z = (this->GridOrigin).field0_0x0._s_0.Z;
          make_level_set3_parallel_floodfill
                    (this,(TVector<float> *)&local_f8._s_0,this->CellSize,iVar16,iVar17,iVar11,
                     &this->Grid,this->NarrowBandMaxDistance);
        }
        else {
          fVar20 = (this->GridOrigin).field0_0x0._s_0.Z;
          if (this->Spatial ==
              (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
               *)0x0) {
            local_d8._0_8_ = *(undefined8 *)&pTVar1->field0_0x0;
            local_d8._s_0.Z = fVar20;
            make_level_set3_parallel
                      (this,(TVector<float> *)&local_d8._s_0,this->CellSize,iVar16,iVar17,iVar11,
                       &this->Grid,this->ExactBandWidth);
          }
          else {
            local_e8._0_8_ = *(undefined8 *)&pTVar1->field0_0x0;
            local_e8._s_0.Z = fVar20;
            make_level_set3_parallel_spatial
                      (this,(TVector<float> *)&local_e8._s_0,this->CellSize,iVar16,iVar17,iVar11,
                       &this->Grid,this->ExactBandWidth);
          }
        }
        if (this->bComputeSigns != false) {
          local_c8[0]._0_8_ = *(undefined8 *)&(this->GridOrigin).field0_0x0;
          local_c8[0]._8_4_ = (this->GridOrigin).field0_0x0._s_0.Z;
          update_signs(this,(TVector<float> *)&local_c8[0]._s_0,this->CellSize,iVar16,iVar17,iVar11,
                       &this->Grid,&this->IntersectionsGrid);
        }
        if (this->bWantClosestTriGrid == false) {
          TBasicBlockedDenseGrid3<int,8>::Resize
                    ((TBasicBlockedDenseGrid3<int,8> *)&this->ClosestTriGrid,
                     *(int *)&(this->ClosestTriGrid).field_0xc,
                     *(int *)&(this->ClosestTriGrid).field_0x10,
                     *(int *)&(this->ClosestTriGrid).field_0x14);
        }
        if (this->bWantIntersectionsGrid == false) {
          TBasicBlockedDenseGrid3<int,8>::Resize
                    ((TBasicBlockedDenseGrid3<int,8> *)&this->IntersectionsGrid,
                     *(int *)&(this->IntersectionsGrid).field_0xc,
                     *(int *)&(this->IntersectionsGrid).field_0x10,
                     *(int *)&(this->IntersectionsGrid).field_0x14);
        }
        Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
        pcVar6 = *(code **)&this->CancelF;
        plVar5 = *(longlong **)&(this->CancelF).field_0x28;
        plVar15 = (longlong *)&(this->CancelF).field_0x10;
        if (plVar5 != (longlong *)0x0) {
          plVar15 = plVar5;
        }
        uVar13 = (**(code **)(*plVar15 + 8))();
        cVar9 = (*pcVar6)(uVar13);
        return cVar9 == '\0';
      }
      local_res18[0] = 0;
      bVar8 = `UE::Geometry::
              TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
              ::Compute'::__l9::<lambda_2>::operator()(local_res18);
      if (bVar8) goto LAB_14c979224;
      fVar20 = (float)(dVar26 / (double)(this->ApproxMaxCellsPerDimension +
                                        this->ExactBandWidth * -2));
      this->CellSize = fVar20;
      if ((0.0 < fVar20) && (iVar11 = _finite((double)fVar20), iVar11 != 0)) goto LAB_14c979224;
      pcVar12 = "CellSize > 0 && FMath::IsFinite(CellSize)";
      iVar11 = 0x13d;
      paVar14 = &bGEnsureHasExecuted<_6722460546588737219>;
      goto LAB_14c97952f;
    }
  }
  pcVar12 = "Validate(Bounds)";
  iVar11 = 0x12f;
  paVar14 = &bGEnsureHasExecuted<_6722460546588737233>;
LAB_14c97952f:
  bVar8 = Assert::Private::ExecCheckImplInternal
                    (paVar14,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Implicit\\SparseNarrowBandMeshSDF.h"
                     ,iVar11,pcVar12);
  if (!bVar8) {
    return false;
  }
  pcVar6 = (code *)swi(3);
  uVar10 = (*pcVar6)();
  return (bool)uVar10;
}

// Compute @ 14c979590

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::Compute
          (TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> *this,
          TAxisAlignedBox3<double> *param_1)

{
  TVector<float> *pTVar1;
  double dVar2;
  double dVar3;
  EComputeModes EVar4;
  longlong *plVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  char *pcVar12;
  undefined8 uVar13;
  atomic<unsigned_char> *paVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  double dVar26;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TVector<float>_u_0 local_f8;
  TVector<float>_u_0 local_e8;
  TVector<float>_u_0 local_d8;
  TVector<float>_u_0 local_c8 [12];
  
  dVar24 = (param_1->Min).field0_0x0._s_0.X;
  dVar19 = (param_1->Max).field0_0x0._s_0.X;
  if (((dVar24 <= dVar19) &&
      (dVar2 = (param_1->Max).field0_0x0._s_0.Y, (param_1->Min).field0_0x0._s_0.Y <= dVar2)) &&
     (dVar3 = (param_1->Max).field0_0x0._s_0.Z, (param_1->Min).field0_0x0._s_0.Z <= dVar3)) {
    dVar19 = dVar19 - dVar24;
    dVar26 = dVar2 - (param_1->Min).field0_0x0._s_0.Y;
    dVar23 = dVar3 - (param_1->Min).field0_0x0._s_0.Z;
    dVar24 = dVar19;
    if (dVar19 <= 0.0) {
      dVar24 = 0.0;
    }
    dVar22 = dVar26;
    if (dVar26 <= 0.0) {
      dVar22 = 0.0;
    }
    dVar18 = dVar23;
    if (dVar23 <= 0.0) {
      dVar18 = 0.0;
    }
    if (dVar18 <= dVar22) {
      dVar18 = dVar22;
    }
    if (dVar18 <= dVar24) {
      dVar18 = dVar24;
    }
    iVar11 = _finite(dVar18);
    if (((iVar11 != 0) && (0.0 < this->CellSize)) &&
       ((iVar11 = _finite((double)this->CellSize), iVar11 != 0 &&
        (4 < this->ApproxMaxCellsPerDimension)))) {
      if (this->ApproxMaxCellsPerDimension <= this->ExactBandWidth * 2) {
        local_res10[0] = 0;
        bVar8 = `UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::Compute'::__l6
                ::<lambda_1>::operator()(local_res10);
        if (!bVar8) {
          iVar11 = this->ApproxMaxCellsPerDimension / 2 + -1;
          iVar16 = 1;
          if (1 < iVar11) {
            iVar16 = iVar11;
          }
          this->ExactBandWidth = iVar16;
        }
      }
      dVar24 = (this->ExpandBounds).field0_0x0._s_0.X;
      dVar22 = (this->ExpandBounds).field0_0x0._s_0.Y;
      dVar18 = (this->ExpandBounds).field0_0x0._s_0.Z;
      dVar19 = dVar24 + dVar24 + dVar19;
      dVar26 = dVar22 + dVar22 + dVar26;
      dVar23 = dVar18 + dVar18 + dVar23;
      if (dVar26 <= dVar19) {
        dVar26 = dVar19;
      }
      if (dVar26 <= dVar23) {
        dVar26 = dVar23;
      }
      if (dVar26 / (double)this->CellSize <=
          (double)(this->ApproxMaxCellsPerDimension + this->ExactBandWidth * -2)) {
LAB_14c979784:
        fVar20 = this->CellSize;
        EVar4 = this->ComputeMode;
        fVar25 = (float)this->ExactBandWidth * fVar20;
        fVar7 = fVar25;
        if ((EVar4 == NarrowBand_SpatialFloodFill) &&
           (fVar7 = (float)this->NarrowBandMaxDistance, (float)this->NarrowBandMaxDistance <= fVar25
           )) {
          fVar7 = fVar25;
        }
        pTVar1 = &this->GridOrigin;
        dVar24 = (param_1->Min).field0_0x0._s_0.Y;
        dVar19 = (param_1->Min).field0_0x0._s_0.Z;
        fVar25 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y * fVar7;
        fVar21 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z * fVar7;
        dVar26 = (this->ExpandBounds).field0_0x0._s_0.Y;
        dVar23 = (this->ExpandBounds).field0_0x0._s_0.Z;
        (pTVar1->field0_0x0)._s_0.X =
             ((float)(param_1->Min).field0_0x0._s_0.X -
             UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X * fVar7) -
             (float)(this->ExpandBounds).field0_0x0._s_0.X;
        (this->GridOrigin).field0_0x0._s_0.Y = ((float)dVar24 - fVar25) - (float)dVar26;
        (this->GridOrigin).field0_0x0._s_0.Z = ((float)dVar19 - fVar21) - (float)dVar23;
        fVar20 = __real_3f800000 / fVar20;
        iVar16 = (int)(((UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X * fVar7 +
                         (float)(param_1->Max).field0_0x0._s_0.X +
                        (float)(this->ExpandBounds).field0_0x0._s_0.X) - (pTVar1->field0_0x0)._s_0.X
                       ) * fVar20) + 1;
        iVar17 = (int)(((UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y * fVar7 +
                         (float)dVar2 + (float)(this->ExpandBounds).field0_0x0._s_0.Y) -
                       (this->GridOrigin).field0_0x0._s_0.Y) * fVar20) + 1;
        iVar11 = (int)(((UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z * fVar7 +
                         (float)dVar3 + (float)(this->ExpandBounds).field0_0x0._s_0.Z) -
                       (this->GridOrigin).field0_0x0._s_0.Z) * fVar20) + 1;
        if (EVar4 == NarrowBand_SpatialFloodFill) {
          if (((this->Spatial == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) ||
              (this->NarrowBandMaxDistance == 0.0)) &&
             (bVar8 = `UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::Compute'
                      ::__l21::<lambda_3>::operator()(local_res20), !bVar8)) {
            return false;
          }
          local_f8._0_8_ = *(undefined8 *)&pTVar1->field0_0x0;
          local_f8._s_0.Z = (this->GridOrigin).field0_0x0._s_0.Z;
          make_level_set3_parallel_floodfill
                    (this,(TVector<float> *)&local_f8._s_0,this->CellSize,iVar16,iVar17,iVar11,
                     &this->Grid,this->NarrowBandMaxDistance);
        }
        else {
          fVar20 = (this->GridOrigin).field0_0x0._s_0.Z;
          if (this->Spatial == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
            local_d8._0_8_ = *(undefined8 *)&pTVar1->field0_0x0;
            local_d8._s_0.Z = fVar20;
            make_level_set3_parallel
                      (this,(TVector<float> *)&local_d8._s_0,this->CellSize,iVar16,iVar17,iVar11,
                       &this->Grid,this->ExactBandWidth);
          }
          else {
            local_e8._0_8_ = *(undefined8 *)&pTVar1->field0_0x0;
            local_e8._s_0.Z = fVar20;
            make_level_set3_parallel_spatial
                      (this,(TVector<float> *)&local_e8._s_0,this->CellSize,iVar16,iVar17,iVar11,
                       &this->Grid,this->ExactBandWidth);
          }
        }
        if (this->bComputeSigns != false) {
          local_c8[0]._0_8_ = *(undefined8 *)&(this->GridOrigin).field0_0x0;
          local_c8[0]._8_4_ = (this->GridOrigin).field0_0x0._s_0.Z;
          update_signs(this,(TVector<float> *)&local_c8[0]._s_0,this->CellSize,iVar16,iVar17,iVar11,
                       &this->Grid,&this->IntersectionsGrid);
        }
        if (this->bWantClosestTriGrid == false) {
          TBasicBlockedDenseGrid3<int,8>::Resize
                    ((TBasicBlockedDenseGrid3<int,8> *)&this->ClosestTriGrid,
                     *(int *)&(this->ClosestTriGrid).field_0xc,
                     *(int *)&(this->ClosestTriGrid).field_0x10,
                     *(int *)&(this->ClosestTriGrid).field_0x14);
        }
        if (this->bWantIntersectionsGrid == false) {
          TBasicBlockedDenseGrid3<int,8>::Resize
                    ((TBasicBlockedDenseGrid3<int,8> *)&this->IntersectionsGrid,
                     *(int *)&(this->IntersectionsGrid).field_0xc,
                     *(int *)&(this->IntersectionsGrid).field_0x10,
                     *(int *)&(this->IntersectionsGrid).field_0x14);
        }
        Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
        pcVar6 = *(code **)&this->CancelF;
        plVar5 = *(longlong **)&(this->CancelF).field_0x28;
        plVar15 = (longlong *)&(this->CancelF).field_0x10;
        if (plVar5 != (longlong *)0x0) {
          plVar15 = plVar5;
        }
        uVar13 = (**(code **)(*plVar15 + 8))();
        cVar9 = (*pcVar6)(uVar13);
        return cVar9 == '\0';
      }
      local_res18[0] = 0;
      bVar8 = `UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::Compute'::__l9::
              <lambda_2>::operator()(local_res18);
      if (bVar8) goto LAB_14c979784;
      fVar20 = (float)(dVar26 / (double)(this->ApproxMaxCellsPerDimension +
                                        this->ExactBandWidth * -2));
      this->CellSize = fVar20;
      if ((0.0 < fVar20) && (iVar11 = _finite((double)fVar20), iVar11 != 0)) goto LAB_14c979784;
      pcVar12 = "CellSize > 0 && FMath::IsFinite(CellSize)";
      iVar11 = 0x13d;
      paVar14 = &bGEnsureHasExecuted<_6722460546588737219>;
      goto LAB_14c979a8f;
    }
  }
  pcVar12 = "Validate(Bounds)";
  iVar11 = 0x12f;
  paVar14 = &bGEnsureHasExecuted<_6722460546588737233>;
LAB_14c979a8f:
  bVar8 = Assert::Private::ExecCheckImplInternal
                    (paVar14,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Implicit\\SparseNarrowBandMeshSDF.h"
                     ,iVar11,pcVar12);
  if (!bVar8) {
    return false;
  }
  pcVar6 = (code *)swi(3);
  uVar10 = (*pcVar6)();
  return (bool)uVar10;
}

// compute_intersections @ 14c9889f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::compute_intersections
          (TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> *this,TVector<float> *param_1,
          float param_2,int param_3,int param_4,int param_5,TBlockedGrid3<float,8> *param_6,
          TBlockedGrid3<int,8> *param_7)

{
  bool bVar1;
  int iVar2;
  undefined1 local_res18 [8];
  undefined1 local_d8 [12];
  uint uStack_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [24];
  TArray<TUniquePtr<TStaticArray<std::atomic<int>,512,4294967295>,TDefaultDelete<TStaticArray<std::atomic<int>,512,4294967295>_>_>,TSizedDefaultAllocator<32>_>
  local_90;
  TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> *local_80;
  undefined8 local_78;
  float local_70;
  float local_6c;
  int local_68;
  int local_64;
  int local_60;
  TBlockedGrid3<int,8> *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  
  bVar1 = this->bUseParallel;
  local_b8._0_8_ = *(undefined8 *)&param_6->field_0xc;
  local_a8._16_8_ = 0;
  local_a8._0_8_ = 0;
  local_a8._8_8_ = 0;
  TBlockedGrid3Layout<8>::Resize
            ((TBlockedGrid3Layout<8> *)local_a8,(int)local_b8._0_8_,SUB84(local_b8._0_8_,4),
             *(int *)&param_6->field_0x14);
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  iVar2 = *(int *)&param_6->field_0x8 * *(int *)&param_6->field_0x4 * *(int *)param_6;
  TArray<TUniquePtr<TStaticArray<std::atomic<int>,512,4294967295>,TDefaultDelete<TStaticArray<std::atomic<int>,512,4294967295>_>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(&local_90,iVar2,Default);
  local_b8._0_8_ = local_a8;
  local_b8._8_8_ = param_6;
  local_c8._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<``UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::compute_intersections'::__l2::FAtomicGrid3i::FAtomicGrid3i'::__l2::<lambda_1>,void,int>
       ::Call;
  local_c8._8_8_ = local_b8;
  local_d8._0_8_ = (void **)0x0;
  stack0xffffffffffffff30 =
       (TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> **)((ulonglong)uStack_cc << 0x20);
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar2,1,(TFunctionRef<void___cdecl(int)> *)local_c8,param_4._0_1_,
             (uint)(bVar1 == false),(TArrayView<std::nullptr_t,int> *)local_d8);
  local_70 = (param_1->field0_0x0)._s_0.Z;
  local_78 = *(undefined8 *)&param_1->field0_0x0;
  local_50 = local_a8;
  local_48 = local_res18;
  local_d8._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::compute_intersections'::__l2::<lambda_1>,void,int>
       ::Call;
  unique0x00008e00 = &local_80;
  local_res18[0] = 0;
  local_64 = param_4;
  local_60 = param_5;
  local_58 = param_7;
  local_c8._0_8_ = (void **)0x0;
  local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
  local_80 = this;
  local_6c = param_2;
  local_68 = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed,1,
             (TFunctionRef<void___cdecl(int)> *)local_d8,param_4._0_1_,
             (uint)(this->bUseParallel == false),(TArrayView<std::nullptr_t,int> *)local_c8);
  *(undefined4 *)&param_7->field_0x18 = 0;
  TBasicBlockedDenseGrid3<int,8>::Resize
            ((TBasicBlockedDenseGrid3<int,8> *)param_7,param_3,param_4,param_5);
  local_c8._8_8_ = local_a8;
  local_d8._0_8_ = (void **)0x0;
  local_b8._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::compute_intersections'::__l2::<lambda_2>,void,int>
       ::Call;
  local_b8._8_8_ = local_c8;
  stack0xffffffffffffff30 =
       (TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> **)
       ((ulonglong)stack0xffffffffffffff30 & 0xffffffff00000000);
  local_c8._0_8_ = param_7;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_90.ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)local_b8,
             param_4._0_1_,(uint)(this->bUseParallel == false),
             (TArrayView<std::nullptr_t,int> *)local_d8);
  DestructItems<TUniquePtr<TStaticArray<std::atomic<int>,512,4294967295>,TDefaultDelete<TStaticArray<std::atomic<int>,512,4294967295>_>_>,int>
            ((TUniquePtr<TStaticArray<std::atomic<int>,512,4294967295>,TDefaultDelete<TStaticArray<std::atomic<int>,512,4294967295>_>_>
              *)local_90.AllocatorInstance.Data,local_90.ArrayNum);
  if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
  }
  return;
}

// compute_signs @ 14c988fc0

void __thiscall
UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::compute_signs(TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
                *this,int param_1,int param_2,int param_3,TBlockedGrid3<int,8> *param_4,
               TBlockedGrid3<float,8> *param_5)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  TBlockData3<float,8> *pTVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  *local_res8;
  int iStack_a4;
  TArrayView<std::nullptr_t,int> local_98;
  code *local_88;
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  **local_80;
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  *local_78;
  undefined8 local_70;
  int local_68;
  TBlockedGrid3<float,8> *local_60;
  TBlockedGrid3<int,8> *local_58;
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  **local_50;
  
  uVar5 = __xmm_80000000800000008000000080000000;
  if (this->bUseParallel != false) {
    local_88 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::compute_signs'::__l5::<lambda_1>,void,int>
               ::Call;
    local_80 = &local_78;
    local_70 = *(undefined8 *)param_5;
    local_68 = *(int *)&param_5->field_0x8;
    local_58 = param_4;
    local_50 = &local_res8;
    iStack_a4 = (int)((ulonglong)local_70 >> 0x20);
    local_98.DataPtr = (void **)0x0;
    local_98.ArrayNum = 0;
    local_res8 = (TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
                  *)((ulonglong)this & 0xffffffffffffff00);
    local_60 = param_5;
    local_78 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_68 * iStack_a4,1,
               (TFunctionRef<void___cdecl(int)> *)&local_88,(<lambda_1>)0x0,None,&local_98);
    return;
  }
  uVar17 = 0;
  local_res8 = this;
  if (0 < param_3) {
    do {
      Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
      plVar1 = *(longlong **)&(this->CancelF).field_0x28;
      pcVar2 = *(code **)&this->CancelF;
      plVar11 = (longlong *)&(this->CancelF).field_0x10;
      if (plVar1 != (longlong *)0x0) {
        plVar11 = plVar1;
      }
      uVar8 = (**(code **)(*plVar11 + 8))();
      cVar6 = (*pcVar2)(uVar8);
      if (cVar6 != '\0') {
        return;
      }
      uVar15 = 0;
      if (0 < param_2) {
        do {
          uVar16 = 0;
          uVar14 = 0;
          if (0 < param_1) {
            do {
              uVar13 = (uint)uVar14;
              iVar4 = (int)(uVar14 >> 3);
              lVar12 = (longlong)
                       (int)(((uVar17 >> 3) * *(int *)&param_4->field_0x4 + (uVar15 >> 3)) *
                             *(int *)param_4 + iVar4);
              lVar3 = *(longlong *)(*(longlong *)&param_4->field_0x20 + lVar12 * 0x10);
              if (lVar3 == 0) {
                iVar7 = *(int *)(*(longlong *)&param_4->field_0x20 + 8 + lVar12 * 0x10);
              }
              else {
                iVar7 = *(int *)(lVar3 + 4 +
                                (ulonglong)((uVar13 & 7) + ((uVar15 & 7) + (uVar17 & 7) * 8) * 8) *
                                4);
              }
              uVar16 = uVar16 + iVar7;
              if (local_res8->InsideMode == WindingCount) {
                if (0 < (int)uVar16) {
LAB_14c9891cd:
                  pTVar9 = TBasicBlockedDenseGrid3<float,8>::TouchBlockData
                                     ((TBasicBlockedDenseGrid3<float,8> *)param_5,
                                      ((uVar17 >> 3) * *(int *)&param_5->field_0x4 + (uVar15 >> 3))
                                      * *(int *)param_5 + iVar4);
                  uVar10 = (uVar13 & 7) + ((uVar15 & 7) + (uVar17 & 7) * 8) * 8;
                  (pTVar9->Data).Elements[uVar10] =
                       (float)((uint)(pTVar9->Data).Elements[uVar10] ^ uVar5);
                }
              }
              else if (local_res8->InsideMode == CrossingCount) {
                uVar10 = uVar16 & 0x80000001;
                if ((int)uVar10 < 0) {
                  uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                }
                if (uVar10 == 1) goto LAB_14c9891cd;
              }
              uVar14 = (ulonglong)(uVar13 + 1);
            } while ((int)(uVar13 + 1) < param_1);
          }
          uVar15 = uVar15 + 1;
          this = local_res8;
        } while ((int)uVar15 < param_2);
      }
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < param_3);
  }
  return;
}

// compute_signs @ 14c989290

void __thiscall
UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::compute_signs
          (TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> *this,int param_1,int param_2,
          int param_3,TBlockedGrid3<int,8> *param_4,TBlockedGrid3<float,8> *param_5)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  TBlockData3<float,8> *pTVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> *local_res8;
  int iStack_a4;
  TArrayView<std::nullptr_t,int> local_98;
  code *local_88;
  TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> **local_80;
  TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> *local_78;
  undefined8 local_70;
  int local_68;
  TBlockedGrid3<float,8> *local_60;
  TBlockedGrid3<int,8> *local_58;
  TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> **local_50;
  
  uVar5 = __xmm_80000000800000008000000080000000;
  if (this->bUseParallel != false) {
    local_88 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::compute_signs'::__l5::<lambda_1>,void,int>
               ::Call;
    local_80 = &local_78;
    local_70 = *(undefined8 *)param_5;
    local_68 = *(int *)&param_5->field_0x8;
    local_58 = param_4;
    local_50 = &local_res8;
    iStack_a4 = (int)((ulonglong)local_70 >> 0x20);
    local_98.DataPtr = (void **)0x0;
    local_98.ArrayNum = 0;
    local_res8 = (TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> *)
                 ((ulonglong)this & 0xffffffffffffff00);
    local_60 = param_5;
    local_78 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_68 * iStack_a4,1,
               (TFunctionRef<void___cdecl(int)> *)&local_88,(<lambda_1>)0x0,None,&local_98);
    return;
  }
  uVar17 = 0;
  local_res8 = this;
  if (0 < param_3) {
    do {
      Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
      plVar1 = *(longlong **)&(this->CancelF).field_0x28;
      pcVar2 = *(code **)&this->CancelF;
      plVar11 = (longlong *)&(this->CancelF).field_0x10;
      if (plVar1 != (longlong *)0x0) {
        plVar11 = plVar1;
      }
      uVar8 = (**(code **)(*plVar11 + 8))();
      cVar6 = (*pcVar2)(uVar8);
      if (cVar6 != '\0') {
        return;
      }
      uVar15 = 0;
      if (0 < param_2) {
        do {
          uVar16 = 0;
          uVar14 = 0;
          if (0 < param_1) {
            do {
              uVar13 = (uint)uVar14;
              iVar4 = (int)(uVar14 >> 3);
              lVar12 = (longlong)
                       (int)(((uVar17 >> 3) * *(int *)&param_4->field_0x4 + (uVar15 >> 3)) *
                             *(int *)param_4 + iVar4);
              lVar3 = *(longlong *)(*(longlong *)&param_4->field_0x20 + lVar12 * 0x10);
              if (lVar3 == 0) {
                iVar7 = *(int *)(*(longlong *)&param_4->field_0x20 + 8 + lVar12 * 0x10);
              }
              else {
                iVar7 = *(int *)(lVar3 + 4 +
                                (ulonglong)((uVar13 & 7) + ((uVar15 & 7) + (uVar17 & 7) * 8) * 8) *
                                4);
              }
              uVar16 = uVar16 + iVar7;
              if (local_res8->InsideMode == WindingCount) {
                if (0 < (int)uVar16) {
LAB_14c98949d:
                  pTVar9 = TBasicBlockedDenseGrid3<float,8>::TouchBlockData
                                     ((TBasicBlockedDenseGrid3<float,8> *)param_5,
                                      ((uVar17 >> 3) * *(int *)&param_5->field_0x4 + (uVar15 >> 3))
                                      * *(int *)param_5 + iVar4);
                  uVar10 = (uVar13 & 7) + ((uVar15 & 7) + (uVar17 & 7) * 8) * 8;
                  (pTVar9->Data).Elements[uVar10] =
                       (float)((uint)(pTVar9->Data).Elements[uVar10] ^ uVar5);
                }
              }
              else if (local_res8->InsideMode == CrossingCount) {
                uVar10 = uVar16 & 0x80000001;
                if ((int)uVar10 < 0) {
                  uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                }
                if (uVar10 == 1) goto LAB_14c98949d;
              }
              uVar14 = (ulonglong)(uVar13 + 1);
            } while ((int)(uVar13 + 1) < param_1);
          }
          uVar15 = uVar15 + 1;
          this = local_res8;
        } while ((int)uVar15 < param_2);
      }
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < param_3);
  }
  return;
}

// compute_tri_bboxes @ 14c989560

TArray<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::FTriBBox,TSizedDefaultAllocator<32>_>
* __thiscall
UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::compute_tri_bboxes
          (TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,TArray<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::FTriBBox,TSizedDefaultAllocator<32>_>
                 *__return_storage_ptr__,TVector<float> *param_1,float param_2,int param_3,
          int param_4,int param_5,int param_6)

{
  float fVar1;
  undefined8 uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  <lambda_1> local_res20;
  TArrayView<std::nullptr_t,int> local_a8;
  code *local_98;
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  **local_90;
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  *local_88;
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  **local_80;
  TArray<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::FTriBBox,TSizedDefaultAllocator<32>_>
  *local_78;
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  *local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  double local_58;
  double local_50;
  undefined1 local_48 [16];
  
  dVar5 = __real_3ff0000000000000;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  fVar1 = (param_1->field0_0x0)._s_0.X;
  __return_storage_ptr__->ArrayMax = 0;
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 4);
  dVar4 = (double)(float)((ulonglong)uVar2 >> 0x20);
  __return_storage_ptr__->ArrayNum = 0;
  uVar3 = this->Mesh->SourceTriangles->ArrayNum;
  if ((int)uVar3 < 1) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
  }
  else {
    iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,uVar3,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
    DefaultConstructItems<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::FTriBBox,int>
              ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x18,uVar3);
  }
  local_68 = param_6;
  local_64 = param_3;
  local_60 = param_4;
  local_5c = param_5;
  local_80 = &local_70;
  local_98 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::compute_tri_bboxes'::__l2::<lambda_2>,void,int>
             ::Call;
  local_90 = &local_88;
  local_48._8_4_ = SUB84(dVar4,0);
  local_48._0_8_ = (double)(float)uVar2;
  local_48._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  local_a8.DataPtr = (void **)0x0;
  local_a8.ArrayNum = 0;
  local_88 = this;
  local_78 = __return_storage_ptr__;
  local_70 = this;
  local_58 = dVar5 / (double)param_2;
  local_50 = (double)fVar1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",this->Mesh->SourceTriangles->ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_98,local_res20,None,&local_a8);
  return __return_storage_ptr__;
}

// compute_tri_bboxes @ 14c989710

TArray<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::FTriBBox,TSizedDefaultAllocator<32>_>
* __thiscall
UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::compute_tri_bboxes
          (TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> *this,
          TArray<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::FTriBBox,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,TVector<float> *param_1,float param_2,int param_3,int param_4,
          int param_5,int param_6)

{
  float fVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  <lambda_1> local_res20;
  TArrayView<std::nullptr_t,int> local_a8;
  code *local_98;
  TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> **local_90;
  TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> *local_88;
  TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> **local_80;
  TArray<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::FTriBBox,TSizedDefaultAllocator<32>_>
  *local_78;
  TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> *local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  double local_58;
  double local_50;
  undefined1 local_48 [16];
  
  dVar4 = __real_3ff0000000000000;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  fVar1 = (param_1->field0_0x0)._s_0.X;
  __return_storage_ptr__->ArrayMax = 0;
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 4);
  dVar3 = (double)(float)((ulonglong)uVar2 >> 0x20);
  __return_storage_ptr__->ArrayNum = 0;
  uVar6 = (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed +
          (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  if ((int)uVar6 < 1) {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
  }
  else {
    iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,uVar6,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
    DefaultConstructItems<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::FTriBBox,int>
              ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x18,uVar6);
  }
  local_68 = param_6;
  local_64 = param_3;
  local_60 = param_4;
  local_5c = param_5;
  local_80 = &local_70;
  local_48._8_4_ = SUB84(dVar3,0);
  local_48._0_8_ = (double)(float)uVar2;
  local_48._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_98 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::compute_tri_bboxes'::__l2::<lambda_2>,void,int>
             ::Call;
  local_90 = &local_88;
  local_a8.DataPtr = (void **)0x0;
  local_a8.ArrayNum = 0;
  local_88 = this;
  local_78 = __return_storage_ptr__;
  local_70 = this;
  local_58 = dVar4 / (double)param_2;
  local_50 = (double)fVar1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed,1,
             (TFunctionRef<void___cdecl(int)> *)&local_98,local_res20,None,&local_a8);
  return __return_storage_ptr__;
}

// make_level_set3_parallel @ 14c98a6e0

void __thiscall
UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::make_level_set3_parallel
          (TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,TVector<float> *param_1,float param_2,int param_3,int param_4,int param_5,
          TBlockedGrid3<float,8> *param_6,int param_7)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  TVector<float>_u_0 local_108;
  TArray<int,TSizedDefaultAllocator<32>_> local_f8;
  TArray<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::FTriBBox,TSizedDefaultAllocator<32>_>
  local_e8;
  code *local_d8;
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  **local_d0;
  FTriIDBlockGrid local_c8;
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  *local_90;
  TArray<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::FTriBBox,TSizedDefaultAllocator<32>_>
  *local_88;
  TArray<int,TSizedDefaultAllocator<32>_> *local_80;
  FTriIDBlockGrid *local_78;
  TBlockedGrid3<float,8> *local_70;
  int local_68;
  double local_60;
  double dStack_58;
  double local_50;
  double local_48;
  float local_40;
  
  *(float *)&param_6->field_0x18 = (float)(param_3 + param_4 + param_5) * param_2;
  TBasicBlockedDenseGrid3<float,8>::Resize
            ((TBasicBlockedDenseGrid3<float,8> *)param_6,param_3,param_4,param_5);
  *(undefined4 *)&(this->ClosestTriGrid).field_0x18 = 0xffffffff;
  TBasicBlockedDenseGrid3<int,8>::Resize
            ((TBasicBlockedDenseGrid3<int,8> *)&this->ClosestTriGrid,param_3,param_4,param_5);
  local_108._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_108._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  compute_tri_bboxes(this,&local_e8,(TVector<float> *)&local_108._s_0,param_2,param_3,param_4,
                     param_5,param_7);
  scatter_tris(this,&local_c8,&local_e8,param_3,param_4,param_5);
  FTriIDBlockGrid::GetOccupiedBlockIDs(&local_c8,&local_f8);
  Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
  pcVar1 = *(code **)&this->CancelF;
  plVar2 = *(longlong **)&(this->CancelF).field_0x28;
  plVar5 = (longlong *)&(this->CancelF).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar5 = plVar2;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  cVar3 = (*pcVar1)(uVar4);
  if (cVar3 == '\0') {
    local_88 = &local_e8;
    local_60 = (double)(float)*(undefined8 *)&param_1->field0_0x0;
    dStack_58 = (double)(float)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
    local_d8 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::make_level_set3_parallel'::__l6::<lambda_1>,void,int>
               ::Call;
    local_80 = &local_f8;
    local_d0 = &local_90;
    local_78 = &local_c8;
    local_108._0_8_ = 0;
    local_108._s_0.Z = 0.0;
    local_48 = __real_3ff0000000000000 / (double)param_2;
    local_70 = param_6;
    local_68 = param_7;
    local_50 = (double)(param_1->field0_0x0)._s_0.Z;
    local_90 = this;
    local_40 = param_2;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_f8.ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_d8,
               param_4._0_1_,(uint)(this->bUseParallel == false),
               (TArrayView<std::nullptr_t,int> *)&local_108._s_0);
  }
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_c8.TrisInBlock.AllocatorInstance.Data,
             local_c8.TrisInBlock.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_c8.TrisInBlock.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_c8.TrisInBlock.AllocatorInstance.Data);
  }
  if (local_c8.PerBlockNum.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.PerBlockNum.AllocatorInstance.Data);
  }
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return;
}

// make_level_set3_parallel @ 14c98a930

void __thiscall
UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::make_level_set3_parallel
          (TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> *this,TVector<float> *param_1,
          float param_2,int param_3,int param_4,int param_5,TBlockedGrid3<float,8> *param_6,
          int param_7)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  TVector<float>_u_0 local_108;
  TArray<int,TSizedDefaultAllocator<32>_> local_f8;
  TArray<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::FTriBBox,TSizedDefaultAllocator<32>_>
  local_e8;
  code *local_d8;
  TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> **local_d0;
  FTriIDBlockGrid local_c8;
  TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> *local_90;
  TArray<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::FTriBBox,TSizedDefaultAllocator<32>_>
  *local_88;
  TArray<int,TSizedDefaultAllocator<32>_> *local_80;
  FTriIDBlockGrid *local_78;
  TBlockedGrid3<float,8> *local_70;
  int local_68;
  double local_60;
  double dStack_58;
  double local_50;
  double local_48;
  float local_40;
  
  *(float *)&param_6->field_0x18 = (float)(param_3 + param_4 + param_5) * param_2;
  TBasicBlockedDenseGrid3<float,8>::Resize
            ((TBasicBlockedDenseGrid3<float,8> *)param_6,param_3,param_4,param_5);
  *(undefined4 *)&(this->ClosestTriGrid).field_0x18 = 0xffffffff;
  TBasicBlockedDenseGrid3<int,8>::Resize
            ((TBasicBlockedDenseGrid3<int,8> *)&this->ClosestTriGrid,param_3,param_4,param_5);
  local_108._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_108._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  compute_tri_bboxes(this,&local_e8,(TVector<float> *)&local_108._s_0,param_2,param_3,param_4,
                     param_5,param_7);
  scatter_tris(this,&local_c8,&local_e8,param_3,param_4,param_5);
  FTriIDBlockGrid::GetOccupiedBlockIDs(&local_c8,&local_f8);
  Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
  pcVar1 = *(code **)&this->CancelF;
  plVar2 = *(longlong **)&(this->CancelF).field_0x28;
  plVar5 = (longlong *)&(this->CancelF).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar5 = plVar2;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  cVar3 = (*pcVar1)(uVar4);
  if (cVar3 == '\0') {
    local_88 = &local_e8;
    local_60 = (double)(float)*(undefined8 *)&param_1->field0_0x0;
    dStack_58 = (double)(float)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
    local_d8 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::make_level_set3_parallel'::__l6::<lambda_1>,void,int>
               ::Call;
    local_80 = &local_f8;
    local_d0 = &local_90;
    local_78 = &local_c8;
    local_108._0_8_ = 0;
    local_108._s_0.Z = 0.0;
    local_48 = __real_3ff0000000000000 / (double)param_2;
    local_70 = param_6;
    local_68 = param_7;
    local_50 = (double)(param_1->field0_0x0)._s_0.Z;
    local_90 = this;
    local_40 = param_2;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_f8.ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_d8,
               param_4._0_1_,(uint)(this->bUseParallel == false),
               (TArrayView<std::nullptr_t,int> *)&local_108._s_0);
  }
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_c8.TrisInBlock.AllocatorInstance.Data,
             local_c8.TrisInBlock.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_c8.TrisInBlock.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_c8.TrisInBlock.AllocatorInstance.Data);
  }
  if (local_c8.PerBlockNum.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.PerBlockNum.AllocatorInstance.Data);
  }
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return;
}

// make_level_set3_parallel_floodfill @ 14c98ab80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::make_level_set3_parallel_floodfill
          (TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,TVector<float> *param_1,float param_2,int param_3,int param_4,int param_5,
          TBlockedGrid3<float,8> *param_6,double param_7)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  TBasicBlockedDenseGrid3<int,8> *this_00;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  TArray<UE::Geometry::TBlockData3<bool,8>_*,TSizedDefaultAllocator<32>_> *pTVar10;
  TBlockData3<bool,8> *pTVar11;
  undefined8 uVar12;
  longlong lVar13;
  TBlockData3<bool,8> *pTVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  TBasicBlockedDenseGrid3<bool,8> *pTVar23;
  longlong lVar24;
  TBasicBlockedDenseGrid3<bool,8> *this_01;
  int local_res10;
  char local_res18 [8];
  int local_res20;
  ForAnyElementType local_228;
  undefined8 local_220;
  ForAnyElementType local_218;
  undefined8 local_210;
  TBasicBlockedDenseGrid3<bool,8> local_208;
  TBasicBlockedDenseGrid3<bool,8> local_1d8;
  undefined8 local_1a8;
  undefined8 local_1a0;
  TBasicBlockedDenseGrid3<bool,8> *local_198;
  longlong local_190;
  TArray<UE::FWindowsRecursiveMutex,TSizedDefaultAllocator<32>_> local_188;
  TBasicBlockedDenseGrid3<bool,8> local_178;
  TBasicBlockedDenseGrid3<int,8> *local_148;
  TArray<UE::FWindowsRecursiveMutex,TSizedDefaultAllocator<32>_> *local_140 [2];
  TBasicBlockedDenseGrid3<bool,8> *local_130;
  TArrayView<std::nullptr_t,int> local_128;
  code *local_118;
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  **local_110;
  TArrayView<std::nullptr_t,int> local_108;
  code *local_f8;
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  **local_f0;
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  *local_e8;
  char *local_e0;
  TBasicBlockedDenseGrid3<bool,8> *local_d8;
  TArray<UE::FWindowsRecursiveMutex,TSizedDefaultAllocator<32>_> **local_d0;
  int local_c8;
  int local_c4;
  int local_c0;
  undefined8 local_bc;
  float local_b4;
  float local_b0;
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  *local_a8;
  double local_a0;
  TArray<UE::FWindowsRecursiveMutex,TSizedDefaultAllocator<32>_> **local_98;
  TBasicBlockedDenseGrid3<bool,8> *local_90;
  TBlockedGrid3<float,8> *local_88;
  TBasicBlockedDenseGrid3<bool,8> *local_80;
  ForAnyElementType *local_78;
  FScriptContainerElement local_70 [8];
  TArray<UE::Geometry::TBlockData3<bool,8>_*,TSizedDefaultAllocator<32>_> local_68 [2];
  
  *(float *)&param_6->field_0x18 = (float)(param_3 + param_4 + param_5) * param_2;
  local_res20 = param_3;
  TBasicBlockedDenseGrid3<float,8>::Resize
            ((TBasicBlockedDenseGrid3<float,8> *)param_6,param_3,param_4,param_5);
  local_148 = (TBasicBlockedDenseGrid3<int,8> *)&this->ClosestTriGrid;
  *(undefined4 *)&(this->ClosestTriGrid).field_0x18 = 0xffffffff;
  TBasicBlockedDenseGrid3<int,8>::Resize(local_148,param_3,param_4,param_5);
  local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.ArrayNum = 0;
  local_188.ArrayMax = 0;
  TArray<UE::FWindowsRecursiveMutex,TSizedDefaultAllocator<32>_>::SetNum
            (&local_188,*(int *)&param_6->field_0x4 * *(int *)param_6 * *(int *)&param_6->field_0x8,
             Default);
  local_140[0] = &local_188;
  local_178._padding_ = 0;
  local_178.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Blocks.ArrayNum = 0;
  local_178.Blocks.ArrayMax = 0;
  local_178.DefaultValue = false;
  local_178._padding_ = 0;
  local_178._padding_ = 0;
  TBasicBlockedDenseGrid3<bool,8>::Resize(&local_178,param_3,param_4,param_5);
  local_208._padding_ = 0;
  local_208._padding_ = 0;
  local_208._padding_ = 0;
  local_208.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.Blocks.ArrayNum = 0;
  local_208.Blocks.ArrayMax = 0;
  local_208.DefaultValue = false;
  TBasicBlockedDenseGrid3<bool,8>::Resize(&local_208,param_3,param_4,param_5);
  local_1d8._padding_ = 0;
  local_1d8._padding_ = 0;
  local_1d8._padding_ = 0;
  local_1d8.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Blocks.ArrayNum = 0;
  local_1d8.Blocks.ArrayMax = 0;
  local_1d8.DefaultValue = false;
  TBasicBlockedDenseGrid3<bool,8>::Resize(&local_1d8,param_3,param_4,param_5);
  local_e0 = local_res18;
  local_res18[0] = '\0';
  local_d8 = &local_208;
  local_d0 = local_140;
  local_c4 = param_4;
  local_c0 = param_5;
  local_b4 = (param_1->field0_0x0)._s_0.Z;
  local_bc = *(undefined8 *)&param_1->field0_0x0;
  local_118 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::make_level_set3_parallel_floodfill'::__l4::<lambda_2>,void,int>
              ::Call;
  local_110 = &local_e8;
  local_128.DataPtr = (void **)0x0;
  local_128.ArrayNum = 0;
  local_e8 = this;
  local_c8 = param_3;
  local_b0 = param_2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",this->Mesh->SourceVertices->ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_118,param_5._0_1_,
             (uint)(this->bUseParallel == false),&local_128);
  if (local_res18[0] == '\0') {
    dVar5 = (double)param_2 * ___real_4006a09e667f3bcd;
    pTVar10 = TBlockedGrid3<bool,8>::GetAllocatedBlocks
                        ((TBlockedGrid3<bool,8> *)&local_208,local_68);
    local_res10 = pTVar10->ArrayNum;
    if (local_68[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68[0].AllocatorInstance.Data);
    }
    if (0 < local_res10) {
      pTVar23 = &local_208;
      local_190 = 0;
      local_198 = pTVar23;
      lVar21 = 0;
      do {
        lVar13 = -local_190;
        local_130 = &local_1d8 + lVar13;
        if ((((local_178._padding_._4_4_ == *(int *)((longlong)&local_208._padding_ + lVar21 + 4))
             && ((int)local_178._padding_ == *(int *)((longlong)&local_208._padding_ + lVar21))) &&
            (local_178._padding_._4_4_ == *(int *)((longlong)&local_208._padding_ + lVar21 + 4))) &&
           ((((int)local_178._padding_ == (int)pTVar23->_padding_ &&
             (local_178._padding_._4_4_ == *(int *)((longlong)&local_208._padding_ + lVar21 + 4)))
            && ((int)local_178._padding_ == *(int *)((longlong)&local_208._padding_ + lVar21))))) {
          iVar22 = 0;
          iVar8 = (int)local_178._padding_ * local_178._padding_._4_4_ * (int)local_178._padding_;
          lVar13 = (longlong)iVar8;
          pTVar23 = local_198;
          this_01 = local_130;
          if (0 < iVar8) {
            lVar24 = 0;
            do {
              if ((*(longlong *)
                    (lVar24 + *(longlong *)
                               ((longlong)&local_208.Blocks.AllocatorInstance.Data + lVar21)) != 0)
                 && (pFVar19 = local_178.Blocks.AllocatorInstance.Data + lVar24,
                    *(longlong *)pFVar19 == 0)) {
                pTVar11 = ::operator_new(0x818);
                if (pTVar11 == (TBlockData3<bool,8> *)0x0) {
                  pTVar11 = (TBlockData3<bool,8> *)0x0;
                }
                else {
                  pTVar11 = TBlockData3<bool,8>::TBlockData3<bool,8>
                                      (pTVar11,(bool *)(pFVar19 + 8),iVar22);
                }
                if (pFVar19 == local_70) {
                  if (pTVar11 != (TBlockData3<bool,8> *)0x0) {
                    FVar2 = (pTVar11->BitArray).AllocatorInstance.SecondaryData;
                    pTVar14 = pTVar11;
                    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
                      FMemory::Free((void *)FVar2);
                    }
                    goto LAB_14c98aef8;
                  }
                }
                else {
                  pTVar14 = *(TBlockData3<bool,8> **)pFVar19;
                  *(TBlockData3<bool,8> **)pFVar19 = pTVar11;
                  if (pTVar14 != (TBlockData3<bool,8> *)0x0) {
                    FVar2 = (pTVar14->BitArray).AllocatorInstance.SecondaryData;
                    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
                      FMemory::Free((void *)FVar2);
                    }
LAB_14c98aef8:
                    ::operator_delete(pTVar14,0x818);
                  }
                }
              }
              iVar22 = iVar22 + 1;
              lVar24 = lVar24 + 0x10;
              lVar13 = lVar13 + -1;
              pTVar23 = local_198;
              this_01 = local_130;
            } while (lVar13 != 0);
          }
        }
        else {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\BlockedDenseGrid3.h"
                             ,0x193,L"");
          this_01 = &local_1d8 + lVar13;
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (((((*(int *)&param_6->field_0xc == *(int *)((longlong)&local_208._padding_ + lVar21 + 4)
               ) && (*(int *)&param_6->field_0x10 ==
                     *(int *)((longlong)&local_208._padding_ + lVar21))) &&
             (*(int *)&param_6->field_0x14 == *(int *)((longlong)&local_208._padding_ + lVar21 + 4))
             ) && ((*(int *)param_6 == (int)pTVar23->_padding_ &&
                   (*(int *)&param_6->field_0x4 ==
                    *(int *)((longlong)&local_208._padding_ + lVar21 + 4))))) &&
           (*(int *)&param_6->field_0x8 == *(int *)((longlong)&local_208._padding_ + lVar21))) {
          iVar22 = 0;
          iVar8 = *(int *)&param_6->field_0x4 * *(int *)param_6 * *(int *)&param_6->field_0x8;
          lVar13 = (longlong)iVar8;
          if (0 < iVar8) {
            lVar24 = 0;
            do {
              if (*(longlong *)
                   (lVar24 + *(longlong *)
                              ((longlong)&local_208.Blocks.AllocatorInstance.Data + lVar21)) != 0) {
                TBasicBlockedDenseGrid3<float,8>::TouchBlockData
                          ((TBasicBlockedDenseGrid3<float,8> *)param_6,iVar22);
              }
              iVar22 = iVar22 + 1;
              lVar24 = lVar24 + 0x10;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
          }
        }
        else {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\BlockedDenseGrid3.h"
                             ,0x193,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        this_00 = local_148;
        if (((*(int *)((longlong)&local_148->_padding_ + 4) ==
              *(int *)((longlong)&local_208._padding_ + lVar21 + 4)) &&
            ((int)local_148->_padding_ == *(int *)((longlong)&local_208._padding_ + lVar21))) &&
           ((*(int *)((longlong)&local_148->_padding_ + 4) ==
             *(int *)((longlong)&local_208._padding_ + lVar21 + 4) &&
            (((iVar8 = (int)local_148->_padding_, iVar8 == (int)pTVar23->_padding_ &&
              (iVar22 = *(int *)((longlong)&local_148->_padding_ + 4),
              iVar22 == *(int *)((longlong)&local_208._padding_ + lVar21 + 4))) &&
             (iVar1 = (int)local_148->_padding_,
             iVar1 == *(int *)((longlong)&local_208._padding_ + lVar21))))))) {
          iVar18 = 0;
          iVar22 = iVar1 * iVar8 * iVar22;
          lVar13 = (longlong)iVar22;
          if (0 < iVar22) {
            lVar24 = 0;
            do {
              if (*(longlong *)
                   (lVar24 + *(longlong *)
                              ((longlong)&local_208.Blocks.AllocatorInstance.Data + lVar21)) != 0) {
                TBasicBlockedDenseGrid3<int,8>::TouchBlockData(this_00,iVar18);
              }
              iVar18 = iVar18 + 1;
              lVar24 = lVar24 + 0x10;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
          }
        }
        else {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\BlockedDenseGrid3.h"
                             ,0x193,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        this_01->DefaultValue = false;
        TBasicBlockedDenseGrid3<bool,8>::Resize(this_01,local_res20,param_4,param_5);
        uVar20 = 0;
        local_228.Data = (FScriptContainerElement *)0x0;
        local_220 = 0;
        iVar8 = *(int *)((longlong)&local_208._padding_ + lVar21) *
                *(int *)((longlong)&local_208._padding_ + lVar21 + 4) * (int)pTVar23->_padding_;
        lVar13 = (longlong)iVar8;
        if (0 < iVar8) {
          lVar24 = 0;
          do {
            if (*(longlong *)
                 (lVar24 + *(longlong *)
                            ((longlong)&local_208.Blocks.AllocatorInstance.Data + lVar21)) != 0) {
              uVar9 = 0;
              if ((int)uVar20 < *(int *)((longlong)&local_208.Blocks.ArrayNum + lVar21)) {
                uVar9 = ~uVar20 >> 0x1f;
              }
              if ((uVar9 == 0) &&
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
              local_1a8 = *(undefined8 *)
                           (lVar24 + *(longlong *)
                                      ((longlong)&local_208.Blocks.AllocatorInstance.Data + lVar21))
              ;
              if (((local_228.Data <= (FScriptContainerElement *)&local_1a8) &&
                  ((FScriptContainerElement *)&local_1a8 <
                   local_228.Data + (longlong)local_220._4_4_ * 8)) &&
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
              if ((int)local_220 == local_220._4_4_) {
                iVar8 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&local_228,(int *)((longlong)&local_220 + 4));
                local_220 = CONCAT44(local_220._4_4_,iVar8);
              }
              lVar15 = (longlong)(int)local_220;
              local_220 = CONCAT44(local_220._4_4_,(int)local_220 + 1);
              *(undefined8 *)(local_228.Data + lVar15 * 8) = local_1a8;
            }
            uVar20 = uVar20 + 1;
            lVar24 = lVar24 + 0x10;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        local_98 = local_140;
        local_88 = param_6;
        local_78 = &local_228;
        local_f8 = Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::make_level_set3_parallel_floodfill'::__l9::<lambda_3>,void,int>
                   ::Call;
        local_f0 = &local_a8;
        local_108.DataPtr = (void **)0x0;
        local_108.ArrayNum = 0;
        local_a8 = this;
        local_a0 = dVar5 + param_7;
        local_90 = &local_178;
        local_80 = this_01;
        ParallelForImpl::
        ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                  (L"ParallelFor Task",local_res10,1,(TFunctionRef<void___cdecl(int)> *)&local_f8,
                   param_5._0_1_,(uint)(this->bUseParallel == false),&local_108);
        local_218.Data = (FScriptContainerElement *)0x0;
        lVar13 = 1 - local_190;
        local_190 = lVar13;
        uVar20 = 0;
        local_210 = 0;
        lVar21 = lVar13 * 0x30;
        pTVar23 = &local_208 + lVar13;
        local_198 = pTVar23;
        iVar8 = (int)(&local_208)[lVar13]._padding_ *
                *(int *)((longlong)&(&local_208)[lVar13]._padding_ + 4) * (int)pTVar23->_padding_;
        lVar24 = (longlong)iVar8;
        if (0 < iVar8) {
          lVar15 = 0;
          do {
            if (*(longlong *)((&local_208)[lVar13].Blocks.AllocatorInstance.Data + lVar15) != 0) {
              uVar9 = 0;
              if ((int)uVar20 < (&local_208)[lVar13].Blocks.ArrayNum) {
                uVar9 = ~uVar20 >> 0x1f;
              }
              if ((uVar9 == 0) &&
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
              local_1a0 = *(undefined8 *)
                           ((&local_208)[lVar13].Blocks.AllocatorInstance.Data + lVar15);
              if (((local_218.Data <= (FScriptContainerElement *)&local_1a0) &&
                  ((FScriptContainerElement *)&local_1a0 <
                   local_218.Data + (longlong)local_210._4_4_ * 8)) &&
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
              if ((int)local_210 == local_210._4_4_) {
                iVar8 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&local_218,(int *)((longlong)&local_210 + 4));
                local_210 = CONCAT44(local_210._4_4_,iVar8);
              }
              lVar16 = (longlong)(int)local_210;
              local_210 = CONCAT44(local_210._4_4_,(int)local_210 + 1);
              *(undefined8 *)(local_218.Data + lVar16 * 8) = local_1a0;
            }
            uVar20 = uVar20 + 1;
            lVar15 = lVar15 + 0x10;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
        }
        iVar8 = (int)local_210;
        local_res10 = (int)local_210;
        if (local_218.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.Data);
        }
        Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
        plVar3 = *(longlong **)&(this->CancelF).field_0x28;
        pcVar4 = *(code **)&this->CancelF;
        plVar17 = (longlong *)&(this->CancelF).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar17 = plVar3;
        }
        uVar12 = (**(code **)(*plVar17 + 8))();
        cVar7 = (*pcVar4)(uVar12);
        if (cVar7 != '\0') {
          if (local_228.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_228.Data);
          }
          break;
        }
        if (local_228.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.Data);
        }
      } while (0 < iVar8);
    }
  }
  DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<bool,8>::FBlock3,int>
            ((FBlock3 *)local_1d8.Blocks.AllocatorInstance.Data,local_1d8.Blocks.ArrayNum);
  if ((FBlock3 *)local_1d8.Blocks.AllocatorInstance.Data != (FBlock3 *)0x0) {
    FMemory::Free(local_1d8.Blocks.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<bool,8>::FBlock3,int>
            ((FBlock3 *)local_208.Blocks.AllocatorInstance.Data,local_208.Blocks.ArrayNum);
  if ((FBlock3 *)local_208.Blocks.AllocatorInstance.Data != (FBlock3 *)0x0) {
    FMemory::Free(local_208.Blocks.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<bool,8>::FBlock3,int>
            ((FBlock3 *)local_178.Blocks.AllocatorInstance.Data,local_178.Blocks.ArrayNum);
  if ((FBlock3 *)local_178.Blocks.AllocatorInstance.Data != (FBlock3 *)0x0) {
    FMemory::Free(local_178.Blocks.AllocatorInstance.Data);
  }
  DestructItems<UE::FWindowsRecursiveMutex,int>
            ((FWindowsRecursiveMutex *)local_188.AllocatorInstance.Data,local_188.ArrayNum);
  if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.AllocatorInstance.Data);
  }
  return;
}

// make_level_set3_parallel_floodfill @ 14c98b580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::
make_level_set3_parallel_floodfill
          (TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> *this,TVector<float> *param_1,
          float param_2,int param_3,int param_4,int param_5,TBlockedGrid3<float,8> *param_6,
          double param_7)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  TBasicBlockedDenseGrid3<int,8> *this_00;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  TArray<UE::Geometry::TBlockData3<bool,8>_*,TSizedDefaultAllocator<32>_> *pTVar10;
  TBlockData3<bool,8> *pTVar11;
  undefined8 uVar12;
  longlong lVar13;
  TBlockData3<bool,8> *pTVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  TBasicBlockedDenseGrid3<bool,8> *pTVar23;
  longlong lVar24;
  TBasicBlockedDenseGrid3<bool,8> *this_01;
  int local_res10;
  char local_res18 [8];
  int local_res20;
  ForAnyElementType local_228;
  undefined8 local_220;
  ForAnyElementType local_218;
  undefined8 local_210;
  TBasicBlockedDenseGrid3<bool,8> local_208;
  TBasicBlockedDenseGrid3<bool,8> local_1d8;
  undefined8 local_1a8;
  undefined8 local_1a0;
  TBasicBlockedDenseGrid3<bool,8> *local_198;
  longlong local_190;
  TArray<UE::FWindowsRecursiveMutex,TSizedDefaultAllocator<32>_> local_188;
  TBasicBlockedDenseGrid3<bool,8> local_178;
  TBasicBlockedDenseGrid3<int,8> *local_148;
  TArray<UE::FWindowsRecursiveMutex,TSizedDefaultAllocator<32>_> *local_140 [2];
  TBasicBlockedDenseGrid3<bool,8> *local_130;
  TArrayView<std::nullptr_t,int> local_128;
  code *local_118;
  TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> **local_110;
  TArrayView<std::nullptr_t,int> local_108;
  code *local_f8;
  TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> **local_f0;
  TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> *local_e8;
  char *local_e0;
  TBasicBlockedDenseGrid3<bool,8> *local_d8;
  TArray<UE::FWindowsRecursiveMutex,TSizedDefaultAllocator<32>_> **local_d0;
  int local_c8;
  int local_c4;
  int local_c0;
  undefined8 local_bc;
  float local_b4;
  float local_b0;
  TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> *local_a8;
  double local_a0;
  TArray<UE::FWindowsRecursiveMutex,TSizedDefaultAllocator<32>_> **local_98;
  TBasicBlockedDenseGrid3<bool,8> *local_90;
  TBlockedGrid3<float,8> *local_88;
  TBasicBlockedDenseGrid3<bool,8> *local_80;
  ForAnyElementType *local_78;
  FScriptContainerElement local_70 [8];
  TArray<UE::Geometry::TBlockData3<bool,8>_*,TSizedDefaultAllocator<32>_> local_68 [2];
  
  *(float *)&param_6->field_0x18 = (float)(param_3 + param_4 + param_5) * param_2;
  local_res20 = param_3;
  TBasicBlockedDenseGrid3<float,8>::Resize
            ((TBasicBlockedDenseGrid3<float,8> *)param_6,param_3,param_4,param_5);
  local_148 = (TBasicBlockedDenseGrid3<int,8> *)&this->ClosestTriGrid;
  *(undefined4 *)&(this->ClosestTriGrid).field_0x18 = 0xffffffff;
  TBasicBlockedDenseGrid3<int,8>::Resize(local_148,param_3,param_4,param_5);
  local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.ArrayNum = 0;
  local_188.ArrayMax = 0;
  TArray<UE::FWindowsRecursiveMutex,TSizedDefaultAllocator<32>_>::SetNum
            (&local_188,*(int *)&param_6->field_0x4 * *(int *)param_6 * *(int *)&param_6->field_0x8,
             Default);
  local_140[0] = &local_188;
  local_178._padding_ = 0;
  local_178.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Blocks.ArrayNum = 0;
  local_178.Blocks.ArrayMax = 0;
  local_178.DefaultValue = false;
  local_178._padding_ = 0;
  local_178._padding_ = 0;
  TBasicBlockedDenseGrid3<bool,8>::Resize(&local_178,param_3,param_4,param_5);
  local_208._padding_ = 0;
  local_208._padding_ = 0;
  local_208._padding_ = 0;
  local_208.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.Blocks.ArrayNum = 0;
  local_208.Blocks.ArrayMax = 0;
  local_208.DefaultValue = false;
  TBasicBlockedDenseGrid3<bool,8>::Resize(&local_208,param_3,param_4,param_5);
  local_1d8._padding_ = 0;
  local_1d8._padding_ = 0;
  local_1d8._padding_ = 0;
  local_1d8.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Blocks.ArrayNum = 0;
  local_1d8.Blocks.ArrayMax = 0;
  local_1d8.DefaultValue = false;
  TBasicBlockedDenseGrid3<bool,8>::Resize(&local_1d8,param_3,param_4,param_5);
  local_e0 = local_res18;
  local_res18[0] = '\0';
  local_d8 = &local_208;
  local_d0 = local_140;
  local_c4 = param_4;
  local_c0 = param_5;
  local_b4 = (param_1->field0_0x0)._s_0.Z;
  local_bc = *(undefined8 *)&param_1->field0_0x0;
  local_118 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::make_level_set3_parallel_floodfill'::__l4::<lambda_2>,void,int>
              ::Call;
  local_110 = &local_e8;
  local_128.DataPtr = (void **)0x0;
  local_128.ArrayNum = 0;
  local_e8 = this;
  local_c8 = param_3;
  local_b0 = param_2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed,1,
             (TFunctionRef<void___cdecl(int)> *)&local_118,param_5._0_1_,
             (uint)(this->bUseParallel == false),&local_128);
  if (local_res18[0] == '\0') {
    dVar5 = (double)param_2 * ___real_4006a09e667f3bcd;
    pTVar10 = TBlockedGrid3<bool,8>::GetAllocatedBlocks
                        ((TBlockedGrid3<bool,8> *)&local_208,local_68);
    local_res10 = pTVar10->ArrayNum;
    if (local_68[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68[0].AllocatorInstance.Data);
    }
    if (0 < local_res10) {
      pTVar23 = &local_208;
      local_190 = 0;
      local_198 = pTVar23;
      lVar21 = 0;
      do {
        lVar13 = -local_190;
        local_130 = &local_1d8 + lVar13;
        if ((((local_178._padding_._4_4_ == *(int *)((longlong)&local_208._padding_ + lVar21 + 4))
             && ((int)local_178._padding_ == *(int *)((longlong)&local_208._padding_ + lVar21))) &&
            (local_178._padding_._4_4_ == *(int *)((longlong)&local_208._padding_ + lVar21 + 4))) &&
           ((((int)local_178._padding_ == (int)pTVar23->_padding_ &&
             (local_178._padding_._4_4_ == *(int *)((longlong)&local_208._padding_ + lVar21 + 4)))
            && ((int)local_178._padding_ == *(int *)((longlong)&local_208._padding_ + lVar21))))) {
          iVar22 = 0;
          iVar8 = (int)local_178._padding_ * local_178._padding_._4_4_ * (int)local_178._padding_;
          lVar13 = (longlong)iVar8;
          pTVar23 = local_198;
          this_01 = local_130;
          if (0 < iVar8) {
            lVar24 = 0;
            do {
              if ((*(longlong *)
                    (lVar24 + *(longlong *)
                               ((longlong)&local_208.Blocks.AllocatorInstance.Data + lVar21)) != 0)
                 && (pFVar19 = local_178.Blocks.AllocatorInstance.Data + lVar24,
                    *(longlong *)pFVar19 == 0)) {
                pTVar11 = ::operator_new(0x818);
                if (pTVar11 == (TBlockData3<bool,8> *)0x0) {
                  pTVar11 = (TBlockData3<bool,8> *)0x0;
                }
                else {
                  pTVar11 = TBlockData3<bool,8>::TBlockData3<bool,8>
                                      (pTVar11,(bool *)(pFVar19 + 8),iVar22);
                }
                if (pFVar19 == local_70) {
                  if (pTVar11 != (TBlockData3<bool,8> *)0x0) {
                    FVar2 = (pTVar11->BitArray).AllocatorInstance.SecondaryData;
                    pTVar14 = pTVar11;
                    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
                      FMemory::Free((void *)FVar2);
                    }
                    goto LAB_14c98b8f8;
                  }
                }
                else {
                  pTVar14 = *(TBlockData3<bool,8> **)pFVar19;
                  *(TBlockData3<bool,8> **)pFVar19 = pTVar11;
                  if (pTVar14 != (TBlockData3<bool,8> *)0x0) {
                    FVar2 = (pTVar14->BitArray).AllocatorInstance.SecondaryData;
                    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
                      FMemory::Free((void *)FVar2);
                    }
LAB_14c98b8f8:
                    ::operator_delete(pTVar14,0x818);
                  }
                }
              }
              iVar22 = iVar22 + 1;
              lVar24 = lVar24 + 0x10;
              lVar13 = lVar13 + -1;
              pTVar23 = local_198;
              this_01 = local_130;
            } while (lVar13 != 0);
          }
        }
        else {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\BlockedDenseGrid3.h"
                             ,0x193,L"");
          this_01 = &local_1d8 + lVar13;
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (((((*(int *)&param_6->field_0xc == *(int *)((longlong)&local_208._padding_ + lVar21 + 4)
               ) && (*(int *)&param_6->field_0x10 ==
                     *(int *)((longlong)&local_208._padding_ + lVar21))) &&
             (*(int *)&param_6->field_0x14 == *(int *)((longlong)&local_208._padding_ + lVar21 + 4))
             ) && ((*(int *)param_6 == (int)pTVar23->_padding_ &&
                   (*(int *)&param_6->field_0x4 ==
                    *(int *)((longlong)&local_208._padding_ + lVar21 + 4))))) &&
           (*(int *)&param_6->field_0x8 == *(int *)((longlong)&local_208._padding_ + lVar21))) {
          iVar22 = 0;
          iVar8 = *(int *)param_6 * *(int *)&param_6->field_0x4 * *(int *)&param_6->field_0x8;
          lVar13 = (longlong)iVar8;
          if (0 < iVar8) {
            lVar24 = 0;
            do {
              if (*(longlong *)
                   (lVar24 + *(longlong *)
                              ((longlong)&local_208.Blocks.AllocatorInstance.Data + lVar21)) != 0) {
                TBasicBlockedDenseGrid3<float,8>::TouchBlockData
                          ((TBasicBlockedDenseGrid3<float,8> *)param_6,iVar22);
              }
              iVar22 = iVar22 + 1;
              lVar24 = lVar24 + 0x10;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
          }
        }
        else {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\BlockedDenseGrid3.h"
                             ,0x193,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        this_00 = local_148;
        if (((*(int *)((longlong)&local_148->_padding_ + 4) ==
              *(int *)((longlong)&local_208._padding_ + lVar21 + 4)) &&
            ((int)local_148->_padding_ == *(int *)((longlong)&local_208._padding_ + lVar21))) &&
           ((*(int *)((longlong)&local_148->_padding_ + 4) ==
             *(int *)((longlong)&local_208._padding_ + lVar21 + 4) &&
            (((iVar8 = (int)local_148->_padding_, iVar8 == (int)pTVar23->_padding_ &&
              (iVar22 = *(int *)((longlong)&local_148->_padding_ + 4),
              iVar22 == *(int *)((longlong)&local_208._padding_ + lVar21 + 4))) &&
             (iVar1 = (int)local_148->_padding_,
             iVar1 == *(int *)((longlong)&local_208._padding_ + lVar21))))))) {
          iVar18 = 0;
          iVar8 = iVar22 * iVar1 * iVar8;
          lVar13 = (longlong)iVar8;
          if (0 < iVar8) {
            lVar24 = 0;
            do {
              if (*(longlong *)
                   (lVar24 + *(longlong *)
                              ((longlong)&local_208.Blocks.AllocatorInstance.Data + lVar21)) != 0) {
                TBasicBlockedDenseGrid3<int,8>::TouchBlockData(this_00,iVar18);
              }
              iVar18 = iVar18 + 1;
              lVar24 = lVar24 + 0x10;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
          }
        }
        else {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\BlockedDenseGrid3.h"
                             ,0x193,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        this_01->DefaultValue = false;
        TBasicBlockedDenseGrid3<bool,8>::Resize(this_01,local_res20,param_4,param_5);
        uVar20 = 0;
        local_228.Data = (FScriptContainerElement *)0x0;
        local_220 = 0;
        iVar8 = *(int *)((longlong)&local_208._padding_ + lVar21) *
                *(int *)((longlong)&local_208._padding_ + lVar21 + 4) * (int)pTVar23->_padding_;
        lVar13 = (longlong)iVar8;
        if (0 < iVar8) {
          lVar24 = 0;
          do {
            if (*(longlong *)
                 (lVar24 + *(longlong *)
                            ((longlong)&local_208.Blocks.AllocatorInstance.Data + lVar21)) != 0) {
              uVar9 = 0;
              if ((int)uVar20 < *(int *)((longlong)&local_208.Blocks.ArrayNum + lVar21)) {
                uVar9 = ~uVar20 >> 0x1f;
              }
              if ((uVar9 == 0) &&
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
              local_1a8 = *(undefined8 *)
                           (lVar24 + *(longlong *)
                                      ((longlong)&local_208.Blocks.AllocatorInstance.Data + lVar21))
              ;
              if (((local_228.Data <= (FScriptContainerElement *)&local_1a8) &&
                  ((FScriptContainerElement *)&local_1a8 <
                   local_228.Data + (longlong)local_220._4_4_ * 8)) &&
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
              if ((int)local_220 == local_220._4_4_) {
                iVar8 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&local_228,(int *)((longlong)&local_220 + 4));
                local_220 = CONCAT44(local_220._4_4_,iVar8);
              }
              lVar15 = (longlong)(int)local_220;
              local_220 = CONCAT44(local_220._4_4_,(int)local_220 + 1);
              *(undefined8 *)(local_228.Data + lVar15 * 8) = local_1a8;
            }
            uVar20 = uVar20 + 1;
            lVar24 = lVar24 + 0x10;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        local_98 = local_140;
        local_88 = param_6;
        local_78 = &local_228;
        local_f8 = Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::make_level_set3_parallel_floodfill'::__l9::<lambda_3>,void,int>
                   ::Call;
        local_f0 = &local_a8;
        local_108.DataPtr = (void **)0x0;
        local_108.ArrayNum = 0;
        local_a8 = this;
        local_a0 = dVar5 + param_7;
        local_90 = &local_178;
        local_80 = this_01;
        ParallelForImpl::
        ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                  (L"ParallelFor Task",local_res10,1,(TFunctionRef<void___cdecl(int)> *)&local_f8,
                   param_5._0_1_,(uint)(this->bUseParallel == false),&local_108);
        local_218.Data = (FScriptContainerElement *)0x0;
        lVar13 = 1 - local_190;
        local_190 = lVar13;
        uVar20 = 0;
        local_210 = 0;
        lVar21 = lVar13 * 0x30;
        pTVar23 = &local_208 + lVar13;
        local_198 = pTVar23;
        iVar8 = (int)(&local_208)[lVar13]._padding_ *
                *(int *)((longlong)&(&local_208)[lVar13]._padding_ + 4) * (int)pTVar23->_padding_;
        lVar24 = (longlong)iVar8;
        if (0 < iVar8) {
          lVar15 = 0;
          do {
            if (*(longlong *)((&local_208)[lVar13].Blocks.AllocatorInstance.Data + lVar15) != 0) {
              uVar9 = 0;
              if ((int)uVar20 < (&local_208)[lVar13].Blocks.ArrayNum) {
                uVar9 = ~uVar20 >> 0x1f;
              }
              if ((uVar9 == 0) &&
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
              local_1a0 = *(undefined8 *)
                           ((&local_208)[lVar13].Blocks.AllocatorInstance.Data + lVar15);
              if (((local_218.Data <= (FScriptContainerElement *)&local_1a0) &&
                  ((FScriptContainerElement *)&local_1a0 <
                   local_218.Data + (longlong)local_210._4_4_ * 8)) &&
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
              if ((int)local_210 == local_210._4_4_) {
                iVar8 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&local_218,(int *)((longlong)&local_210 + 4));
                local_210 = CONCAT44(local_210._4_4_,iVar8);
              }
              lVar16 = (longlong)(int)local_210;
              local_210 = CONCAT44(local_210._4_4_,(int)local_210 + 1);
              *(undefined8 *)(local_218.Data + lVar16 * 8) = local_1a0;
            }
            uVar20 = uVar20 + 1;
            lVar15 = lVar15 + 0x10;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
        }
        iVar8 = (int)local_210;
        local_res10 = (int)local_210;
        if (local_218.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.Data);
        }
        Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
        plVar3 = *(longlong **)&(this->CancelF).field_0x28;
        pcVar4 = *(code **)&this->CancelF;
        plVar17 = (longlong *)&(this->CancelF).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar17 = plVar3;
        }
        uVar12 = (**(code **)(*plVar17 + 8))();
        cVar7 = (*pcVar4)(uVar12);
        if (cVar7 != '\0') {
          if (local_228.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_228.Data);
          }
          break;
        }
        if (local_228.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.Data);
        }
      } while (0 < iVar8);
    }
  }
  DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<bool,8>::FBlock3,int>
            ((FBlock3 *)local_1d8.Blocks.AllocatorInstance.Data,local_1d8.Blocks.ArrayNum);
  if ((FBlock3 *)local_1d8.Blocks.AllocatorInstance.Data != (FBlock3 *)0x0) {
    FMemory::Free(local_1d8.Blocks.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<bool,8>::FBlock3,int>
            ((FBlock3 *)local_208.Blocks.AllocatorInstance.Data,local_208.Blocks.ArrayNum);
  if ((FBlock3 *)local_208.Blocks.AllocatorInstance.Data != (FBlock3 *)0x0) {
    FMemory::Free(local_208.Blocks.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<bool,8>::FBlock3,int>
            ((FBlock3 *)local_178.Blocks.AllocatorInstance.Data,local_178.Blocks.ArrayNum);
  if ((FBlock3 *)local_178.Blocks.AllocatorInstance.Data != (FBlock3 *)0x0) {
    FMemory::Free(local_178.Blocks.AllocatorInstance.Data);
  }
  DestructItems<UE::FWindowsRecursiveMutex,int>
            ((FWindowsRecursiveMutex *)local_188.AllocatorInstance.Data,local_188.ArrayNum);
  if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.AllocatorInstance.Data);
  }
  return;
}

// make_level_set3_parallel_spatial @ 14c98bf80

void __thiscall
UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::make_level_set3_parallel_spatial
          (TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,TVector<float> *param_1,float param_2,int param_3,int param_4,int param_5,
          TBlockedGrid3<float,8> *param_6,int param_7)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float fVar6;
  TVector<float>_u_0 local_108;
  TArray<int,TSizedDefaultAllocator<32>_> local_f8;
  TArray<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::FTriBBox,TSizedDefaultAllocator<32>_>
  local_e8;
  code *local_d8;
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  **local_d0;
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  *local_c8;
  TVector<float> *local_c0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_b8;
  FTriIDBlockGrid *local_b0;
  TBlockedGrid3<float,8> *local_a8;
  TArray<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::FTriBBox,TSizedDefaultAllocator<32>_>
  *local_a0;
  float local_98;
  float local_94;
  double local_90;
  FTriIDBlockGrid local_88;
  
  fVar6 = (float)(param_3 + param_4 + param_5) * param_2;
  *(float *)&param_6->field_0x18 = fVar6;
  TBasicBlockedDenseGrid3<float,8>::Resize
            ((TBasicBlockedDenseGrid3<float,8> *)param_6,param_3,param_4,param_5);
  *(undefined4 *)&(this->ClosestTriGrid).field_0x18 = 0xffffffff;
  TBasicBlockedDenseGrid3<int,8>::Resize
            ((TBasicBlockedDenseGrid3<int,8> *)&this->ClosestTriGrid,param_3,param_4,param_5);
  local_108._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_108._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  compute_tri_bboxes(this,&local_e8,(TVector<float> *)&local_108._s_0,param_2,param_3,param_4,
                     param_5,param_7);
  scatter_tris(this,&local_88,&local_e8,param_3,param_4,param_5);
  FTriIDBlockGrid::GetOccupiedBlockIDs(&local_88,&local_f8);
  Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
  pcVar1 = *(code **)&this->CancelF;
  plVar2 = *(longlong **)&(this->CancelF).field_0x28;
  plVar5 = (longlong *)&(this->CancelF).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar5 = plVar2;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  cVar3 = (*pcVar1)(uVar4);
  if (cVar3 == '\0') {
    local_b8 = &local_f8;
    local_d8 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::make_level_set3_parallel_spatial'::__l6::<lambda_1>,void,int>
               ::Call;
    local_b0 = &local_88;
    local_d0 = &local_c8;
    local_a0 = &local_e8;
    local_108._0_8_ = 0;
    local_108._s_0.Z = 0.0;
    local_a8 = param_6;
    local_90 = (double)param_2 * __real_3ff6a09e667f3bcd * (double)param_7;
    local_c8 = this;
    local_c0 = param_1;
    local_98 = param_2;
    local_94 = fVar6;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_f8.ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_d8,
               param_4._0_1_,(uint)(this->bUseParallel == false),
               (TArrayView<std::nullptr_t,int> *)&local_108._s_0);
  }
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_88.TrisInBlock.AllocatorInstance.Data,
             local_88.TrisInBlock.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_88.TrisInBlock.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_88.TrisInBlock.AllocatorInstance.Data);
  }
  if (local_88.PerBlockNum.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.PerBlockNum.AllocatorInstance.Data);
  }
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return;
}

// make_level_set3_parallel_spatial @ 14c98c1d0

void __thiscall
UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::
make_level_set3_parallel_spatial
          (TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> *this,TVector<float> *param_1,
          float param_2,int param_3,int param_4,int param_5,TBlockedGrid3<float,8> *param_6,
          int param_7)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float fVar6;
  TVector<float>_u_0 local_108;
  TArray<int,TSizedDefaultAllocator<32>_> local_f8;
  TArray<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::FTriBBox,TSizedDefaultAllocator<32>_>
  local_e8;
  code *local_d8;
  TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> **local_d0;
  TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> *local_c8;
  TVector<float> *local_c0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_b8;
  FTriIDBlockGrid *local_b0;
  TBlockedGrid3<float,8> *local_a8;
  TArray<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::FTriBBox,TSizedDefaultAllocator<32>_>
  *local_a0;
  float local_98;
  float local_94;
  double local_90;
  FTriIDBlockGrid local_88;
  
  fVar6 = (float)(param_3 + param_4 + param_5) * param_2;
  *(float *)&param_6->field_0x18 = fVar6;
  TBasicBlockedDenseGrid3<float,8>::Resize
            ((TBasicBlockedDenseGrid3<float,8> *)param_6,param_3,param_4,param_5);
  *(undefined4 *)&(this->ClosestTriGrid).field_0x18 = 0xffffffff;
  TBasicBlockedDenseGrid3<int,8>::Resize
            ((TBasicBlockedDenseGrid3<int,8> *)&this->ClosestTriGrid,param_3,param_4,param_5);
  local_108._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_108._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  compute_tri_bboxes(this,&local_e8,(TVector<float> *)&local_108._s_0,param_2,param_3,param_4,
                     param_5,param_7);
  scatter_tris(this,&local_88,&local_e8,param_3,param_4,param_5);
  FTriIDBlockGrid::GetOccupiedBlockIDs(&local_88,&local_f8);
  Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
  pcVar1 = *(code **)&this->CancelF;
  plVar2 = *(longlong **)&(this->CancelF).field_0x28;
  plVar5 = (longlong *)&(this->CancelF).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar5 = plVar2;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  cVar3 = (*pcVar1)(uVar4);
  if (cVar3 == '\0') {
    local_b8 = &local_f8;
    local_d8 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::make_level_set3_parallel_spatial'::__l6::<lambda_1>,void,int>
               ::Call;
    local_b0 = &local_88;
    local_d0 = &local_c8;
    local_a0 = &local_e8;
    local_108._0_8_ = 0;
    local_108._s_0.Z = 0.0;
    local_a8 = param_6;
    local_90 = (double)param_2 * __real_3ff6a09e667f3bcd * (double)param_7;
    local_c8 = this;
    local_c0 = param_1;
    local_98 = param_2;
    local_94 = fVar6;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_f8.ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_d8,
               param_4._0_1_,(uint)(this->bUseParallel == false),
               (TArrayView<std::nullptr_t,int> *)&local_108._s_0);
  }
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_88.TrisInBlock.AllocatorInstance.Data,
             local_88.TrisInBlock.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_88.TrisInBlock.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_88.TrisInBlock.AllocatorInstance.Data);
  }
  if (local_88.PerBlockNum.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.PerBlockNum.AllocatorInstance.Data);
  }
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return;
}

// scatter_tris @ 14c98c420

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FTriIDBlockGrid * __thiscall
UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::scatter_tris(TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
               *this,FTriIDBlockGrid *__return_storage_ptr__,
              TArray<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::FTriBBox,TSizedDefaultAllocator<32>_>
              *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  FScriptContainerElement *local_res8;
  undefined1 local_res20 [8];
  undefined1 local_a8 [12];
  uint uStack_9c;
  undefined1 local_98 [16];
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  *local_88;
  TArray<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::FTriBBox,TSizedDefaultAllocator<32>_>
  *local_80;
  FVector3i_u_0 *local_78;
  FVector3i_u_0 *local_70;
  FVector3i_u_0 local_68;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  TArray<std::atomic<int>,TSizedDefaultAllocator<32>_> local_50;
  
  bVar1 = this->bUseParallel;
  local_res20[0] = 0;
  local_68._0_8_ = 0;
  local_68._s_0.Z = 0;
  iStack_5c = 0;
  iStack_58 = 0;
  iStack_54 = 0;
  TBlockedGrid3Layout<8>::Resize((TBlockedGrid3Layout<8> *)&local_68._s_0,param_2,param_3,param_4);
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  iVar2 = (int)((ulonglong)local_68._0_8_ >> 0x20) * local_68._s_0.Z * (int)local_68._0_8_;
  TArray<std::atomic<int>,TSizedDefaultAllocator<32>_>::SetNum(&local_50,iVar2,Default);
  local_res8 = local_50.AllocatorInstance.Data;
  local_98._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::FScatterCounter::FScatterCounter'::__l2::<lambda_1>,void,int>
       ::Call;
  local_98._8_8_ = &local_res8;
  local_a8._0_8_ = (void **)0x0;
  stack0xffffffffffffff60 =
       (TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
        **)((ulonglong)uStack_9c << 0x20);
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar2,1,(TFunctionRef<void___cdecl(int)> *)local_98,param_4._0_1_,
             (uint)(bVar1 == false),(TArrayView<std::nullptr_t,int> *)local_a8);
  local_78 = &local_68;
  local_70 = (FVector3i_u_0 *)local_res20;
  local_a8._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::scatter_tris'::__l3::<lambda_1>,void,int>
       ::Call;
  unique0x00008e00 = &local_88;
  local_98._0_8_ = (void **)0x0;
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  local_88 = this;
  local_80 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_1->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)local_a8,
             param_4._0_1_,(uint)(this->bUseParallel == false),
             (TArrayView<std::nullptr_t,int> *)local_98);
  bVar1 = this->bUseParallel;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  TBlockedGrid3Layout<8>::Resize
            ((TBlockedGrid3Layout<8> *)__return_storage_ptr__,iStack_5c,iStack_58,iStack_54);
  (__return_storage_ptr__->PerBlockNum).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TrisInBlock).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TrisInBlock).ArrayNum = 0;
  (__return_storage_ptr__->TrisInBlock).ArrayMax = 0;
  (__return_storage_ptr__->PerBlockNum).ArrayNum = 0;
  (__return_storage_ptr__->PerBlockNum).ArrayMax = 0;
  local_a8._0_8_ = __return_storage_ptr__->_padding_;
  iVar2 = (int)((ulonglong)local_a8._0_8_ >> 0x20) * (int)__return_storage_ptr__->_padding_ *
          (int)local_a8._0_8_;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&__return_storage_ptr__->TrisInBlock,iVar2,Default);
  TArray<std::atomic<int>,TSizedDefaultAllocator<32>_>::SetNum
            (&__return_storage_ptr__->PerBlockNum,iVar2,Default);
  local_80 = (TArray<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::FTriBBox,TSizedDefaultAllocator<32>_>
              *)(__return_storage_ptr__->PerBlockNum).AllocatorInstance.Data;
  local_78 = (FVector3i_u_0 *)local_50.AllocatorInstance.Data;
  local_70 = &local_68;
  local_a8._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::FTriIDBlockGrid::FTriIDBlockGrid'::__l2::<lambda_1>,void,int>
       ::Call;
  unique0x00008e00 = &local_88;
  local_98._0_8_ = (void **)0x0;
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  local_88 = (TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
              *)__return_storage_ptr__;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar2,1,(TFunctionRef<void___cdecl(int)> *)local_a8,param_4._0_1_,
             (uint)(bVar1 == false),(TArrayView<std::nullptr_t,int> *)local_98);
  local_70 = (FVector3i_u_0 *)local_res20;
  local_98._0_8_ = (void **)0x0;
  local_a8._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::scatter_tris'::__l4::<lambda_2>,void,int>
       ::Call;
  unique0x00008e00 = &local_88;
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  local_88 = this;
  local_80 = param_1;
  local_78 = (FVector3i_u_0 *)__return_storage_ptr__;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_1->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)local_a8,
             param_4._0_1_,(uint)(this->bUseParallel == false),
             (TArrayView<std::nullptr_t,int> *)local_98);
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// scatter_tris @ 14c98c6e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FTriIDBlockGrid * __thiscall
UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::scatter_tris
          (TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> *this,
          FTriIDBlockGrid *__return_storage_ptr__,
          TArray<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::FTriBBox,TSizedDefaultAllocator<32>_>
          *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  FScriptContainerElement *local_res8;
  undefined1 local_res20 [8];
  undefined1 local_a8 [12];
  uint uStack_9c;
  undefined1 local_98 [16];
  TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> *local_88;
  TArray<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::FTriBBox,TSizedDefaultAllocator<32>_>
  *local_80;
  FVector3i_u_0 *local_78;
  FVector3i_u_0 *local_70;
  FVector3i_u_0 local_68;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  TArray<std::atomic<int>,TSizedDefaultAllocator<32>_> local_50;
  
  bVar1 = this->bUseParallel;
  local_res20[0] = 0;
  local_68._0_8_ = 0;
  local_68._s_0.Z = 0;
  iStack_5c = 0;
  iStack_58 = 0;
  iStack_54 = 0;
  TBlockedGrid3Layout<8>::Resize((TBlockedGrid3Layout<8> *)&local_68._s_0,param_2,param_3,param_4);
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  iVar2 = (int)((ulonglong)local_68._0_8_ >> 0x20) * local_68._s_0.Z * (int)local_68._0_8_;
  TArray<std::atomic<int>,TSizedDefaultAllocator<32>_>::SetNum(&local_50,iVar2,Default);
  local_res8 = local_50.AllocatorInstance.Data;
  local_98._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::FScatterCounter::FScatterCounter'::__l2::<lambda_1>,void,int>
       ::Call;
  local_98._8_8_ = &local_res8;
  local_a8._0_8_ = (void **)0x0;
  stack0xffffffffffffff60 =
       (TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> **)((ulonglong)uStack_9c << 0x20);
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar2,1,(TFunctionRef<void___cdecl(int)> *)local_98,param_4._0_1_,
             (uint)(bVar1 == false),(TArrayView<std::nullptr_t,int> *)local_a8);
  local_78 = &local_68;
  local_70 = (FVector3i_u_0 *)local_res20;
  local_a8._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::scatter_tris'::__l3::<lambda_1>,void,int>
       ::Call;
  unique0x00008e00 = &local_88;
  local_98._0_8_ = (void **)0x0;
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  local_88 = this;
  local_80 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_1->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)local_a8,
             param_4._0_1_,(uint)(this->bUseParallel == false),
             (TArrayView<std::nullptr_t,int> *)local_98);
  bVar1 = this->bUseParallel;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  TBlockedGrid3Layout<8>::Resize
            ((TBlockedGrid3Layout<8> *)__return_storage_ptr__,iStack_5c,iStack_58,iStack_54);
  (__return_storage_ptr__->PerBlockNum).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TrisInBlock).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TrisInBlock).ArrayNum = 0;
  (__return_storage_ptr__->TrisInBlock).ArrayMax = 0;
  (__return_storage_ptr__->PerBlockNum).ArrayNum = 0;
  (__return_storage_ptr__->PerBlockNum).ArrayMax = 0;
  local_a8._0_8_ = __return_storage_ptr__->_padding_;
  iVar2 = (int)((ulonglong)local_a8._0_8_ >> 0x20) * (int)__return_storage_ptr__->_padding_ *
          (int)local_a8._0_8_;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&__return_storage_ptr__->TrisInBlock,iVar2,Default);
  TArray<std::atomic<int>,TSizedDefaultAllocator<32>_>::SetNum
            (&__return_storage_ptr__->PerBlockNum,iVar2,Default);
  local_80 = (TArray<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::FTriBBox,TSizedDefaultAllocator<32>_>
              *)(__return_storage_ptr__->PerBlockNum).AllocatorInstance.Data;
  local_78 = (FVector3i_u_0 *)local_50.AllocatorInstance.Data;
  local_70 = &local_68;
  local_a8._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::FTriIDBlockGrid::FTriIDBlockGrid'::__l2::<lambda_1>,void,int>
       ::Call;
  unique0x00008e00 = &local_88;
  local_98._0_8_ = (void **)0x0;
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  local_88 = (TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> *)__return_storage_ptr__;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar2,1,(TFunctionRef<void___cdecl(int)> *)local_a8,param_4._0_1_,
             (uint)(bVar1 == false),(TArrayView<std::nullptr_t,int> *)local_98);
  local_70 = (FVector3i_u_0 *)local_res20;
  local_98._0_8_ = (void **)0x0;
  local_a8._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::scatter_tris'::__l4::<lambda_2>,void,int>
       ::Call;
  unique0x00008e00 = &local_88;
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  local_88 = this;
  local_80 = param_1;
  local_78 = (FVector3i_u_0 *)__return_storage_ptr__;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_1->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)local_a8,
             param_4._0_1_,(uint)(this->bUseParallel == false),
             (TArrayView<std::nullptr_t,int> *)local_98);
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// update_signs @ 14c98c9a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::update_signs(TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
               *this,TVector<float> *param_1,float param_2,int param_3,int param_4,int param_5,
              TBlockedGrid3<float,8> *param_6,TBlockedGrid3<int,8> *param_7)

{
  bool bVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  <lambda_1> local_res8 [8];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [12];
  uint uStack_bc;
  undefined1 local_b8 [8];
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  ulonglong uStack_90;
  double local_88;
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  *local_80;
  undefined8 local_78;
  float local_70;
  float local_6c;
  int local_68;
  int local_64;
  int local_60;
  TBlockedGrid3<int,8> *local_58;
  undefined1 *local_50;
  <lambda_1> *local_48;
  
  if (*(longlong *)&this->IsInsideFunction == 0) {
    bVar1 = this->bUseParallel;
    local_a8 = 0;
    local_d8._0_8_ = *(undefined8 *)&param_6->field_0xc;
    local_b8 = (undefined1  [8])0x0;
    uStack_b0 = (TBlockedGrid3<float,8> *)0x0;
    TBlockedGrid3Layout<8>::Resize
              ((TBlockedGrid3Layout<8> *)local_b8,(int)local_d8._0_8_,
               (int)((ulonglong)local_d8._0_8_ >> 0x20),*(int *)&param_6->field_0x14);
    local_a0 = (undefined1  [8])0x0;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uStack_90;
    _local_98 = auVar4 << 0x40;
    iVar8 = *(int *)&param_6->field_0x8 * *(int *)&param_6->field_0x4 * *(int *)param_6;
    TArray<TUniquePtr<TStaticArray<std::atomic<int>,512,4294967295>,TDefaultDelete<TStaticArray<std::atomic<int>,512,4294967295>_>_>,TSizedDefaultAllocator<32>_>
    ::SetNum((TArray<TUniquePtr<TStaticArray<std::atomic<int>,512,4294967295>,TDefaultDelete<TStaticArray<std::atomic<int>,512,4294967295>_>_>,TSizedDefaultAllocator<32>_>
              *)local_a0,iVar8,Default);
    local_e8._0_8_ = local_b8;
    local_e8._8_8_ = param_6;
    local_d8._0_8_ =
         Core::Private::Function::
         TFunctionRefCaller<``UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::compute_intersections'::__l2::FAtomicGrid3i::FAtomicGrid3i'::__l2::<lambda_1>,void,int>
         ::Call;
    local_d8._8_8_ = local_e8;
    local_c8._0_8_ = (void **)0x0;
    stack0xffffffffffffff40 =
         (TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
          **)((ulonglong)uStack_bc << 0x20);
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar8,1,(TFunctionRef<void___cdecl(int)> *)local_d8,local_res8[0]
               ,(uint)(bVar1 == false),(TArrayView<std::nullptr_t,int> *)local_c8);
    local_70 = (param_1->field0_0x0)._s_0.Z;
    local_78 = *(undefined8 *)&param_1->field0_0x0;
    local_50 = local_b8;
    local_48 = local_res8;
    local_res8[0] = (<lambda_1>)0x0;
    local_c8._0_8_ =
         Core::Private::Function::
         TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::compute_intersections'::__l2::<lambda_1>,void,int>
         ::Call;
    unique0x00008e00 = &local_80;
    local_64 = param_4;
    local_60 = param_5;
    local_58 = param_7;
    local_e8._0_8_ = (void **)0x0;
    local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
    local_80 = this;
    local_6c = param_2;
    local_68 = param_3;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",this->Mesh->SourceTriangles->ArrayNum,1,
               (TFunctionRef<void___cdecl(int)> *)local_c8,(<lambda_1>)0x0,
               (uint)(this->bUseParallel == false),(TArrayView<std::nullptr_t,int> *)local_e8);
    *(undefined4 *)&param_7->field_0x18 = 0;
    TBasicBlockedDenseGrid3<int,8>::Resize
              ((TBasicBlockedDenseGrid3<int,8> *)param_7,param_3,param_4,param_5);
    local_e8._8_8_ = local_b8;
    local_c8._0_8_ = (void **)0x0;
    local_d8._0_8_ =
         Core::Private::Function::
         TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::compute_intersections'::__l2::<lambda_2>,void,int>
         ::Call;
    local_d8._8_8_ = local_e8;
    stack0xffffffffffffff40 =
         (TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
          **)((ulonglong)stack0xffffffffffffff40 & 0xffffffff00000000);
    local_e8._0_8_ = param_7;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_98._0_4_,1,(TFunctionRef<void___cdecl(int)> *)local_d8,
               local_res8[0],(uint)(this->bUseParallel == false),
               (TArrayView<std::nullptr_t,int> *)local_c8);
    DestructItems<TUniquePtr<TStaticArray<std::atomic<int>,512,4294967295>,TDefaultDelete<TStaticArray<std::atomic<int>,512,4294967295>_>_>,int>
              ((TUniquePtr<TStaticArray<std::atomic<int>,512,4294967295>,TDefaultDelete<TStaticArray<std::atomic<int>,512,4294967295>_>_>
                *)local_a0,local_98._0_4_);
    if (local_a0 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_a0);
    }
    Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
    pcVar2 = *(code **)&this->CancelF;
    plVar3 = *(longlong **)&(this->CancelF).field_0x28;
    plVar7 = (longlong *)&(this->CancelF).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar7 = plVar3;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    cVar5 = (*pcVar2)(uVar6);
    if (cVar5 == '\0') {
      compute_signs(this,param_3,param_4,param_5,param_7,param_6);
    }
  }
  else {
    TBlockedGrid3<float,8>::GetAllocatedBlocks
              (param_6,(TArray<UE::Geometry::TBlockData3<float,8>_*,TSizedDefaultAllocator<32>_> *)
                       local_d8);
    local_a0 = *(undefined1 (*) [8])&param_1->field0_0x0;
    uStack_b0 = (TBlockedGrid3<float,8> *)local_d8;
    local_e8._0_8_ =
         Core::Private::Function::
         TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::update_signs'::__l5::<lambda_1>,void,int>
         ::Call;
    local_e8._8_8_ = local_b8;
    local_c8._0_8_ = (void **)0x0;
    stack0xffffffffffffff40 =
         (TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
          **)((ulonglong)uStack_bc << 0x20);
    local_98._4_4_ = param_2;
    local_98._0_4_ = (param_1->field0_0x0)._s_0.Z;
    local_a8 = param_6;
    local_b8 = (undefined1  [8])this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_d8._8_4_,1,(TFunctionRef<void___cdecl(int)> *)local_e8,
               local_res8[0],(uint)(this->bUseParallel == false),
               (TArrayView<std::nullptr_t,int> *)local_c8);
    Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
    pcVar2 = *(code **)&this->CancelF;
    plVar3 = *(longlong **)&(this->CancelF).field_0x28;
    plVar7 = (longlong *)&(this->CancelF).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar7 = plVar3;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    cVar5 = (*pcVar2)(uVar6);
    if (cVar5 == '\0') {
      local_a8 = *(undefined8 *)&param_1->field0_0x0;
      local_e8._8_8_ = local_b8;
      uStack_b0 = param_6;
      local_88 = (double)param_2 * __real_4010000000000000;
      local_e8._0_8_ =
           Core::Private::Function::
           TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::update_signs'::__l5::<lambda_2>,void,int>
           ::Call;
      local_a0._4_4_ = param_2;
      local_a0._0_4_ = (param_1->field0_0x0)._s_0.Z;
      unique0x100001d6 = SUB84(local_88,0);
      local_98 = (undefined1  [8])local_88;
      unique0x100001da = (int)((ulonglong)local_88 >> 0x20);
      local_b8 = (undefined1  [8])this;
      ParallelFor(*(int *)&param_6->field_0x8 * *(int *)&param_6->field_0x4 * *(int *)param_6,
                  (TFunctionRef<void___cdecl(int)> *)local_e8,this->bUseParallel == false,false);
    }
    if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_d8._0_8_);
    }
  }
  return;
}

// update_signs @ 14c98cdc0

void __thiscall
UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::update_signs
          (TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> *this,TVector<float> *param_1,
          float param_2,int param_3,int param_4,int param_5,TBlockedGrid3<float,8> *param_6,
          TBlockedGrid3<int,8> *param_7)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  <lambda_1> local_res8;
  TVector<float>_u_0 local_a8;
  TArrayView<std::nullptr_t,int> local_98;
  code *local_88;
  TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> **local_80;
  TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> *local_78;
  TVector<float>_u_0 *local_70;
  TBlockedGrid3<float,8> *local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  double local_48;
  
  if (*(longlong *)&this->IsInsideFunction == 0) {
    local_a8._0_8_ = *(undefined8 *)&param_1->field0_0x0;
    local_a8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    compute_intersections
              (this,(TVector<float> *)&local_a8._s_0,param_2,param_3,param_4,param_5,param_6,param_7
              );
    Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
    pcVar1 = *(code **)&this->CancelF;
    plVar2 = *(longlong **)&(this->CancelF).field_0x28;
    plVar5 = (longlong *)&(this->CancelF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar1)(uVar4);
    if (cVar3 == '\0') {
      compute_signs(this,param_3,param_4,param_5,param_7,param_6);
    }
  }
  else {
    TBlockedGrid3<float,8>::GetAllocatedBlocks
              (param_6,(TArray<UE::Geometry::TBlockData3<float,8>_*,TSizedDefaultAllocator<32>_> *)
                       &local_a8._s_0);
    local_60 = *(undefined8 *)&param_1->field0_0x0;
    local_70 = &local_a8;
    local_88 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::update_signs'::__l5::<lambda_1>,void,int>
               ::Call;
    local_80 = &local_78;
    local_98.DataPtr = (void **)0x0;
    local_98.ArrayNum = 0;
    local_58._4_4_ = param_2;
    local_58._0_4_ = (param_1->field0_0x0)._s_0.Z;
    local_68 = param_6;
    local_78 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",(int)local_a8._s_0.Z,1,
               (TFunctionRef<void___cdecl(int)> *)&local_88,local_res8,
               (uint)(this->bUseParallel == false),&local_98);
    Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
    pcVar1 = *(code **)&this->CancelF;
    plVar2 = *(longlong **)&(this->CancelF).field_0x28;
    plVar5 = (longlong *)&(this->CancelF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar1)(uVar4);
    if (cVar3 == '\0') {
      local_68 = *(TBlockedGrid3<float,8> **)&param_1->field0_0x0;
      local_80 = &local_78;
      local_70 = (TVector<float>_u_0 *)param_6;
      local_48 = (double)param_2 * __real_4010000000000000;
      local_88 = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::update_signs'::__l5::<lambda_2>,void,int>
                 ::Call;
      local_60 = CONCAT44(param_2,(param_1->field0_0x0)._s_0.Z);
      local_58._8_4_ = SUB84(local_48,0);
      local_58._0_8_ = local_48;
      local_58._12_4_ = (int)((ulonglong)local_48 >> 0x20);
      local_78 = this;
      ParallelFor(*(int *)&param_6->field_0x8 * *(int *)&param_6->field_0x4 * *(int *)param_6,
                  (TFunctionRef<void___cdecl(int)> *)&local_88,this->bUseParallel == false,false);
    }
    if ((void *)local_a8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
  }
  return;
}

// operator() @ 150574e70

bool __thiscall
`UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::Compute'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6722460546588737228>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6722460546588737228>,
                       &`public:___cdecl_`public:_bool___cdecl_UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::Compute(UE::Geometry::TAxisAlignedBox3<double>)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150574eb0

bool __thiscall
`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::Compute'::__l6::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6722460546588737228>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6722460546588737228>,
                       &`public:___cdecl_`public:_bool___cdecl_UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::Compute(UE::Geometry::TAxisAlignedBox3<double>)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150574f30

bool __thiscall
`UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::Compute'::__l9::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6722460546588737222>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6722460546588737222>,
                       &`public:___cdecl_`public:_bool___cdecl_UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::Compute(UE::Geometry::TAxisAlignedBox3<double>)___ptr64'::`9'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150574f70

bool __thiscall
`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::Compute'::__l9::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6722460546588737222>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6722460546588737222>,
                       &`public:___cdecl_`public:_bool___cdecl_UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::Compute(UE::Geometry::TAxisAlignedBox3<double>)___ptr64'::`9'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150574fb0

bool __thiscall
`UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::Compute'::__l21::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6722460546588737199>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6722460546588737199>,
                       &`public:___cdecl_`public:_bool___cdecl_UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::Compute(UE::Geometry::TAxisAlignedBox3<double>)___ptr64'::`21'::<lambda_3>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150574ff0

bool __thiscall
`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::Compute'::__l21::<lambda_3>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6722460546588737199>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6722460546588737199>,
                       &`public:___cdecl_`public:_bool___cdecl_UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::Compute(UE::Geometry::TAxisAlignedBox3<double>)___ptr64'::`21'::<lambda_3>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

