// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 15

// operator() @ 1435e6e20

void __thiscall
`UE::Geometry::FGeometrySet3::CollectCurvesNearRay'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  double *pdVar10;
  longlong lVar11;
  undefined8 *puVar12;
  code *pcVar13;
  longlong lVar14;
  bool bVar15;
  char cVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  TVector<double> *pTVar20;
  uint uVar21;
  uint uVar22;
  longlong *plVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  uint local_res18;
  double local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  double local_1b0;
  longlong local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  TVector<double>_u_0 local_188;
  double local_170;
  longlong local_168;
  TVector<double>_u_0 local_160;
  TVector<double>_u_0 local_148;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  TVector<double> local_f8 [7];
  
  lVar8 = *(longlong *)this;
  uVar26 = 0;
  lVar24 = (longlong)param_1;
  uVar21 = (uint)~param_1 >> 0x1f;
  uVar25 = 0;
  uVar17 = uVar25;
  if (param_1 < *(int *)(lVar8 + 0x68)) {
    uVar17 = uVar21;
  }
  if ((uVar17 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  dVar6 = __real_7fefffffffffffff;
  dVar5 = __real_3fe0000000000000;
  lVar8 = *(longlong *)(lVar8 + 0x60);
  uVar29 = SUB84(__real_7fefffffffffffff,0);
  uVar30 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  local_res18 = 0xffffffff;
  uVar31 = 0;
  uVar32 = 0;
  local_168 = (longlong)(*(int *)(lVar8 + 0x10 + lVar24 * 0x48) + -1);
  if (0 < local_168) {
    local_1c0 = 0;
    uVar27 = uVar26;
    local_1a8 = lVar24;
    do {
      lVar14 = local_1c0;
      uVar17 = (uint)uVar27;
      uVar22 = uVar17 + 1;
      uVar18 = uVar25;
      if ((int)uVar22 < *(int *)(lVar8 + 0x10 + lVar24 * 0x48)) {
        uVar18 = ~uVar22 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar1 = lVar14 + 0x18;
      local_1b8 = *(longlong *)(lVar8 + 8 + lVar24 * 0x48);
      uVar18 = uVar25;
      if ((int)uVar17 < *(int *)(lVar8 + 0x10 + lVar24 * 0x48)) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar9 = *(longlong *)(lVar8 + 8 + lVar24 * 0x48);
      dVar2 = *(double *)(lVar14 + 0x20 + local_1b8);
      dVar3 = *(double *)(lVar14 + 0x28 + local_1b8);
      local_148._s_0.X = *(double *)(lVar1 + local_1b8) - *(double *)(lVar9 + local_1c0);
      local_148._s_0.Y = dVar2 - *(double *)(lVar9 + 8 + local_1c0);
      local_130 = 0.0;
      local_160._s_0.X = (*(double *)(lVar1 + local_1b8) + *(double *)(lVar9 + local_1c0)) * dVar5;
      local_160._s_0.Y = (dVar2 + *(double *)(lVar9 + 8 + local_1c0)) * dVar5;
      local_148._s_0.Z = dVar3 - *(double *)(lVar9 + 0x10 + local_1c0);
      local_160._s_0.Z = (dVar3 + *(double *)(lVar9 + 0x10 + local_1c0)) * dVar5;
      local_130 = UE::Geometry::Normalize<double>((TVector<double> *)&local_148._s_0,0.0);
      local_130 = local_130 * dVar5;
      UE::Geometry::TDistRay3Segment3<double>::SquaredDistance
                (*(TRay<double> **)((longlong)this + 8),(TSegment3<double> *)&local_160._s_0,
                 &local_1c8,&local_1b0);
      dVar2 = local_1b0;
      uVar28 = SUB84(local_1c8,0);
      uVar27 = (ulonglong)local_1c8 >> 0x20;
      if (local_1c8 < (double)CONCAT44(uVar30,uVar29)) {
        pdVar10 = *(double **)((longlong)this + 8);
        local_100 = local_1c8 * pdVar10[5] + pdVar10[2];
        local_108 = local_1c8 * pdVar10[4] + pdVar10[1];
        local_110 = local_1c8 * pdVar10[3] + *pdVar10;
        uVar18 = uVar25;
        if ((int)uVar22 < *(int *)(lVar8 + 0x10 + lVar24 * 0x48)) {
          uVar18 = ~uVar22 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        lVar9 = *(longlong *)(lVar8 + 8 + lVar24 * 0x48);
        uVar18 = uVar25;
        if ((int)uVar17 < *(int *)(lVar8 + 0x10 + lVar24 * 0x48)) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        lVar11 = *(longlong *)(lVar8 + 8 + lVar24 * 0x48);
        local_170 = 0.0;
        dVar3 = *(double *)(lVar14 + 0x20 + lVar9);
        dVar4 = *(double *)(lVar14 + 0x28 + lVar9);
        local_188._s_0.X = *(double *)(lVar1 + lVar9) - *(double *)(lVar11 + local_1c0);
        local_188._s_0.Y = dVar3 - *(double *)(lVar11 + 8 + local_1c0);
        local_1a0 = (*(double *)(lVar1 + lVar9) + *(double *)(lVar11 + local_1c0)) * dVar5;
        local_198 = (dVar3 + *(double *)(lVar11 + 8 + local_1c0)) * dVar5;
        local_188._s_0.Z = dVar4 - *(double *)(lVar11 + 0x10 + local_1c0);
        local_190 = (dVar4 + *(double *)(lVar11 + 0x10 + local_1c0)) * dVar5;
        local_170 = UE::Geometry::Normalize<double>((TVector<double> *)&local_188._s_0,0.0);
        local_170 = local_170 * dVar5;
        puVar12 = *(undefined8 **)((longlong)this + 0x10);
        local_128 = local_188._s_0.X * dVar2 + local_1a0;
        local_120 = local_188._s_0.Y * dVar2 + local_198;
        local_118 = local_188._s_0.Z * dVar2 + local_190;
        UE::Core::Private::Function::CheckCallable((void *)*puVar12);
        pcVar13 = (code *)*puVar12;
        plVar23 = (longlong *)puVar12[5];
        if ((longlong *)puVar12[5] == (longlong *)0x0) {
          plVar23 = puVar12 + 2;
        }
        uVar19 = (**(code **)(*plVar23 + 8))();
        cVar16 = (*pcVar13)(uVar19,&local_110,&local_128);
        if (cVar16 != '\0') {
          uVar31 = SUB84(local_1b0,0);
          uVar32 = (undefined4)((ulonglong)local_1b0 >> 0x20);
          uVar29 = uVar28;
          uVar30 = (int)uVar27;
          local_res18 = uVar17;
        }
      }
      lVar14 = local_1a8;
      uVar26 = uVar26 + 1;
      uVar27 = (ulonglong)uVar22;
      local_1c0 = lVar1;
    } while ((longlong)uVar26 < local_168);
    if ((double)CONCAT44(uVar30,uVar29) < dVar6) {
      plVar23 = *(longlong **)((longlong)this + 0x18);
      uVar25 = 0;
      uVar17 = uVar25;
      if (param_1 < (int)plVar23[1]) {
        uVar17 = uVar21;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      *(undefined1 *)(*plVar23 + lVar14) = 1;
      uVar28 = *(undefined4 *)(lVar8 + lVar24 * 0x48);
      plVar23 = *(longlong **)((longlong)this + 0x20);
      uVar17 = uVar25;
      if (param_1 < (int)plVar23[1]) {
        uVar17 = uVar21;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      *(undefined4 *)(*plVar23 + lVar14 * 0x50) = uVar28;
      plVar23 = *(longlong **)((longlong)this + 0x20);
      uVar17 = uVar25;
      if (param_1 < (int)plVar23[1]) {
        uVar17 = uVar21;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      *(undefined1 *)(*plVar23 + 4 + lVar14 * 0x50) = 0;
      pdVar10 = *(double **)((longlong)this + 8);
      dVar5 = pdVar10[3];
      dVar6 = pdVar10[4];
      dVar2 = pdVar10[5];
      dVar3 = *pdVar10;
      dVar4 = pdVar10[1];
      dVar7 = pdVar10[2];
      plVar23 = *(longlong **)((longlong)this + 0x20);
      uVar17 = uVar25;
      if (param_1 < (int)plVar23[1]) {
        uVar17 = uVar21;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar8 = *plVar23;
      *(double *)(lVar8 + 8 + lVar14 * 0x50) = (double)CONCAT44(uVar30,uVar29) * dVar5 + dVar3;
      *(double *)(lVar8 + 0x10 + lVar14 * 0x50) = (double)CONCAT44(uVar30,uVar29) * dVar6 + dVar4;
      *(double *)(lVar8 + 0x18 + lVar14 * 0x50) = (double)CONCAT44(uVar30,uVar29) * dVar2 + dVar7;
      lVar8 = *(longlong *)this;
      if (param_1 < *(int *)(lVar8 + 0x68)) {
        uVar25 = uVar21;
      }
      if ((uVar25 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pTVar20 = UE::Geometry::TPolyline<double,3>::GetSegmentPoint
                          ((TPolyline<double,3> *)(*(longlong *)(lVar8 + 0x60) + 8 + lVar24 * 0x48),
                           local_f8,local_res18,(double)CONCAT44(uVar32,uVar31));
      plVar23 = *(longlong **)((longlong)this + 0x20);
      dVar6 = (pTVar20->field0_0x0)._s_0.X;
      dVar2 = (pTVar20->field0_0x0)._s_0.Y;
      dVar5 = (pTVar20->field0_0x0)._s_0.Z;
      uVar25 = 0;
      uVar17 = uVar25;
      if (param_1 < (int)plVar23[1]) {
        uVar17 = uVar21;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar8 = *plVar23;
      pdVar10 = (double *)(lVar8 + 0x20 + lVar14 * 0x50);
      *pdVar10 = dVar6;
      pdVar10[1] = dVar2;
      *(double *)(lVar8 + 0x30 + lVar14 * 0x50) = dVar5;
      plVar23 = *(longlong **)((longlong)this + 0x20);
      uVar17 = uVar25;
      if (param_1 < (int)plVar23[1]) {
        uVar17 = uVar21;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      *(ulonglong *)(*plVar23 + 0x38 + lVar14 * 0x50) = CONCAT44(uVar30,uVar29);
      plVar23 = *(longlong **)((longlong)this + 0x20);
      uVar17 = uVar25;
      if (param_1 < (int)plVar23[1]) {
        uVar17 = uVar21;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      *(uint *)(*plVar23 + 0x40 + lVar14 * 0x50) = local_res18;
      plVar23 = *(longlong **)((longlong)this + 0x20);
      if (param_1 < (int)plVar23[1]) {
        uVar25 = uVar21;
      }
      if ((uVar25 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      *(ulonglong *)(*plVar23 + 0x48 + lVar14 * 0x50) = CONCAT44(uVar32,uVar31);
    }
  }
  return;
}

// operator() @ 1435e7710

void __thiscall
`UE::Geometry::FGeometrySet3::CollectPointsNearRay'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  double *pdVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  char cVar17;
  uint uVar18;
  double *pdVar19;
  undefined8 uVar20;
  longlong *plVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  double local_98;
  double dStack_90;
  double local_88;
  
  plVar21 = *(longlong **)this;
  lVar22 = (longlong)param_1;
  uVar23 = (uint)~param_1 >> 0x1f;
  uVar18 = 0;
  if (param_1 < (int)plVar21[1]) {
    uVar18 = uVar23;
  }
  if (uVar18 == 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pdVar4 = *(double **)((longlong)this + 8);
  lVar24 = lVar22 * 0x20;
  pdVar19 = (double *)(*plVar21 + 8 + lVar24);
  dVar9 = (pdVar19[1] - pdVar4[1]) * pdVar4[4] + (*pdVar19 - *pdVar4) * pdVar4[3] +
          (pdVar19[2] - pdVar4[2]) * pdVar4[5];
  if (0.0 <= dVar9) {
    local_98 = pdVar4[3] * dVar9 + *pdVar4;
    dStack_90 = pdVar4[4] * dVar9 + pdVar4[1];
    local_88 = pdVar4[5] * dVar9 + pdVar4[2];
  }
  else {
    local_98 = *pdVar4;
    dStack_90 = pdVar4[1];
    local_88 = pdVar4[2];
  }
  puVar5 = *(undefined8 **)((longlong)this + 0x10);
  UE::Core::Private::Function::CheckCallable((void *)*puVar5);
  pcVar8 = (code *)*puVar5;
  plVar21 = puVar5 + 2;
  if ((longlong *)puVar5[5] != (longlong *)0x0) {
    plVar21 = (longlong *)puVar5[5];
  }
  uVar20 = (**(code **)(*plVar21 + 8))();
  cVar17 = (*pcVar8)(uVar20,&local_98,pdVar19);
  if (cVar17 != '\0') {
    plVar21 = *(longlong **)((longlong)this + 0x18);
    uVar18 = 0;
    if (param_1 < (int)plVar21[1]) {
      uVar18 = uVar23;
    }
    if (uVar18 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    *(undefined1 *)(lVar22 + *plVar21) = 1;
    plVar21 = *(longlong **)this;
    uVar18 = 0;
    if (param_1 < (int)plVar21[1]) {
      uVar18 = uVar23;
    }
    if (uVar18 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    plVar6 = *(longlong **)((longlong)this + 0x20);
    uVar3 = *(undefined4 *)(*plVar21 + lVar24);
    uVar18 = 0;
    if (param_1 < (int)plVar6[1]) {
      uVar18 = uVar23;
    }
    if (uVar18 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    *(undefined4 *)(*plVar6 + lVar22 * 0x50) = uVar3;
    plVar21 = *(longlong **)((longlong)this + 0x20);
    uVar18 = 0;
    if (param_1 < (int)plVar21[1]) {
      uVar18 = uVar23;
    }
    if (uVar18 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    *(undefined1 *)(*plVar21 + 4 + lVar22 * 0x50) = 1;
    pdVar4 = *(double **)((longlong)this + 8);
    plVar21 = *(longlong **)((longlong)this + 0x20);
    dVar12 = pdVar4[4];
    dVar1 = pdVar4[3];
    dVar13 = pdVar4[1];
    dVar2 = *pdVar4;
    uVar18 = 0;
    if (param_1 < (int)plVar21[1]) {
      uVar18 = uVar23;
    }
    dVar11 = pdVar4[5] * dVar9 + pdVar4[2];
    if (uVar18 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    lVar7 = *plVar21;
    *(double *)(lVar7 + 8 + lVar22 * 0x50) = dVar9 * dVar1 + dVar2;
    auVar10._8_4_ = SUB84(dVar11,0);
    auVar10._0_8_ = dVar12 * dVar9 + dVar13;
    auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    *(undefined1 (*) [16])(lVar7 + 0x10 + lVar22 * 0x50) = auVar10;
    plVar21 = *(longlong **)this;
    uVar18 = 0;
    if (param_1 < (int)plVar21[1]) {
      uVar18 = uVar23;
    }
    if (uVar18 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    lVar7 = *plVar21;
    plVar21 = *(longlong **)((longlong)this + 0x20);
    puVar5 = (undefined8 *)(lVar7 + 8 + lVar24);
    uVar14 = *puVar5;
    uVar15 = puVar5[1];
    uVar20 = *(undefined8 *)(lVar7 + 0x18 + lVar24);
    uVar18 = 0;
    if (param_1 < (int)plVar21[1]) {
      uVar18 = uVar23;
    }
    if (uVar18 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    lVar24 = *plVar21;
    puVar5 = (undefined8 *)(lVar24 + 0x20 + lVar22 * 0x50);
    *puVar5 = uVar14;
    puVar5[1] = uVar15;
    *(undefined8 *)(lVar24 + 0x30 + lVar22 * 0x50) = uVar20;
    plVar21 = *(longlong **)((longlong)this + 0x20);
    uVar18 = 0;
    if (param_1 < (int)plVar21[1]) {
      uVar18 = uVar23;
    }
    if (uVar18 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    *(double *)(*plVar21 + 0x38 + lVar22 * 0x50) = dVar9;
  }
  return;
}

// operator() @ 1435e8ab0

void __thiscall
`UE::Geometry::FGeometrySet3::FindNearestCurveToRay'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  double *pdVar6;
  longlong lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  char cVar15;
  uint uVar16;
  undefined8 uVar17;
  uint uVar18;
  longlong *plVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  uint local_res18;
  longlong local_1b8;
  double local_1b0;
  longlong local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  TVector<double>_u_0 local_168;
  double local_150;
  longlong local_148;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  
  lVar4 = *(longlong *)this;
  lVar20 = (longlong)param_1;
  uVar18 = 0;
  if (param_1 < *(int *)(lVar4 + 0x68)) {
    uVar18 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  dVar13 = __real_7fefffffffffffff;
  dVar12 = __real_3fe0000000000000;
  lVar4 = *(longlong *)(lVar4 + 0x60);
  local_res18 = 0xffffffff;
  uVar27 = 0;
  uVar28 = 0;
  local_148 = (longlong)(*(int *)(lVar4 + 0x10 + lVar20 * 0x48) + -1);
  if (0 < local_148) {
    lVar22 = 0;
    local_1b8 = 0;
    uVar18 = 0;
    dVar10 = __real_7fefffffffffffff;
    dVar11 = __real_7fefffffffffffff;
    do {
      uVar21 = uVar18 + 1;
      uVar16 = 0;
      if ((int)uVar21 < *(int *)(lVar4 + 0x10 + lVar20 * 0x48)) {
        uVar16 = ~uVar21 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar1 = local_1b8 + 0x18;
      local_1a8 = *(longlong *)(lVar4 + 8 + lVar20 * 0x48);
      uVar16 = 0;
      if ((int)uVar18 < *(int *)(lVar4 + 0x10 + lVar20 * 0x48)) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar5 = *(longlong *)(lVar4 + 8 + lVar20 * 0x48);
      dVar2 = *(double *)(local_1b8 + 0x20 + local_1a8);
      dVar23 = *(double *)(local_1b8 + 0x28 + local_1a8);
      local_128._s_0.X = *(double *)(lVar1 + local_1a8) - *(double *)(local_1b8 + lVar5);
      local_110 = 0.0;
      local_128._s_0.Y = dVar2 - *(double *)(local_1b8 + 8 + lVar5);
      local_140._s_0.X = (*(double *)(local_1b8 + lVar5) + *(double *)(lVar1 + local_1a8)) * dVar12;
      local_140._s_0.Y = (*(double *)(local_1b8 + 8 + lVar5) + dVar2) * dVar12;
      local_128._s_0.Z = dVar23 - *(double *)(local_1b8 + 0x10 + lVar5);
      local_140._s_0.Z = (*(double *)(local_1b8 + 0x10 + lVar5) + dVar23) * dVar12;
      local_110 = UE::Geometry::Normalize<double>((TVector<double> *)&local_128._s_0,0.0);
      local_110 = local_110 * dVar12;
      UE::Geometry::TDistRay3Segment3<double>::SquaredDistance
                (*(TRay<double> **)((longlong)this + 8),(TSegment3<double> *)&local_140._s_0,
                 &local_1b0,&local_1a0);
      dVar23 = local_1a0;
      dVar2 = local_1b0;
      pdVar6 = *(double **)((longlong)this + 8);
      local_f8 = local_1b0 * pdVar6[5] + pdVar6[2];
      local_100 = local_1b0 * pdVar6[4] + pdVar6[1];
      local_108 = local_1b0 * pdVar6[3] + *pdVar6;
      uVar16 = 0;
      if ((int)uVar21 < *(int *)(lVar4 + 0x10 + lVar20 * 0x48)) {
        uVar16 = ~uVar21 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar5 = *(longlong *)(lVar4 + 8 + lVar20 * 0x48);
      uVar16 = 0;
      if ((int)uVar18 < *(int *)(lVar4 + 0x10 + lVar20 * 0x48)) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar7 = *(longlong *)(lVar4 + 8 + lVar20 * 0x48);
      local_150 = 0.0;
      dVar3 = *(double *)(local_1b8 + 0x20 + lVar5);
      dVar26 = *(double *)(local_1b8 + 0x28 + lVar5);
      local_168._s_0.X = *(double *)(lVar1 + lVar5) - *(double *)(local_1b8 + lVar7);
      local_168._s_0.Y = dVar3 - *(double *)(local_1b8 + 8 + lVar7);
      local_180 = (*(double *)(local_1b8 + lVar7) + *(double *)(lVar1 + lVar5)) * dVar12;
      local_178 = (*(double *)(local_1b8 + 8 + lVar7) + dVar3) * dVar12;
      local_168._s_0.Z = dVar26 - *(double *)(local_1b8 + 0x10 + lVar7);
      local_170 = (*(double *)(local_1b8 + 0x10 + lVar7) + dVar26) * dVar12;
      local_150 = UE::Geometry::Normalize<double>((TVector<double> *)&local_168._s_0,0.0);
      local_150 = local_150 * dVar12;
      puVar8 = *(undefined8 **)((longlong)this + 0x10);
      local_198 = local_168._s_0.X * dVar23 + local_180;
      local_190 = local_168._s_0.Y * dVar23 + local_178;
      local_188 = local_168._s_0.Z * dVar23 + local_170;
      UE::Core::Private::Function::CheckCallable((void *)*puVar8);
      pcVar9 = (code *)*puVar8;
      plVar19 = (longlong *)puVar8[5];
      if ((longlong *)puVar8[5] == (longlong *)0x0) {
        plVar19 = puVar8 + 2;
      }
      uVar17 = (**(code **)(*plVar19 + 8))();
      cVar15 = (*pcVar9)(uVar17,&local_108,&local_198);
      if (cVar15 != '\0') {
        pdVar6 = *(double **)((longlong)this + 8);
        dVar26 = (local_198 - *pdVar6) * dVar2 * pdVar6[5] -
                 (local_188 - pdVar6[2]) * dVar2 * pdVar6[3];
        auVar24._0_8_ = (local_190 - pdVar6[1]) * dVar2 * pdVar6[5];
        auVar24._8_8_ = 0;
        dVar23 = (local_188 - pdVar6[2]) * dVar2 * pdVar6[4] - auVar24._0_8_;
        dVar3 = (local_190 - pdVar6[1]) * dVar2 * pdVar6[3] -
                (local_198 - *pdVar6) * dVar2 * pdVar6[4];
        auVar25._8_8_ = 0;
        auVar25._0_8_ = dVar23 * dVar23 + dVar26 * dVar26 + dVar3 * dVar3;
        auVar25 = sqrtpd(auVar24,auVar25);
        dVar23 = auVar25._0_8_ * dVar12;
        if (dVar23 < dVar10) {
          uVar27 = SUB84(local_1a0,0);
          uVar28 = (undefined4)((ulonglong)local_1a0 >> 0x20);
          dVar10 = dVar23;
          dVar11 = dVar2;
          local_res18 = uVar18;
        }
      }
      lVar22 = lVar22 + 1;
      uVar18 = uVar21;
      local_1b8 = lVar1;
    } while (lVar22 < local_148);
    if (dVar10 < dVar13) {
      EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x18));
      if (dVar10 < **(double **)((longlong)this + 0x20)) {
        **(double **)((longlong)this + 0x28) = dVar11;
        **(int **)((longlong)this + 0x30) = param_1;
        **(undefined4 **)((longlong)this + 0x38) = *(undefined4 *)(lVar4 + lVar20 * 0x48);
        **(uint **)((longlong)this + 0x40) = local_res18;
        **(undefined8 **)((longlong)this + 0x48) = CONCAT44(uVar28,uVar27);
        **(double **)((longlong)this + 0x20) = dVar10;
      }
      LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x18));
    }
  }
  return;
}

// operator() @ 1435e9110

void __thiscall
`UE::Geometry::FGeometrySet3::FindNearestPointToRay'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  undefined8 *puVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  double local_78;
  double dStack_70;
  double local_68;
  
  plVar9 = *(longlong **)this;
  uVar7 = 0;
  if (param_1 < (int)plVar9[1]) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pdVar1 = *(double **)((longlong)this + 8);
  lVar10 = *plVar9 + (longlong)param_1 * 0x20;
  dVar4 = (*(double *)(lVar10 + 0x10) - pdVar1[1]) * pdVar1[4] +
          (*(double *)(lVar10 + 8) - *pdVar1) * pdVar1[3] +
          (*(double *)(lVar10 + 0x18) - pdVar1[2]) * pdVar1[5];
  if (0.0 <= dVar4) {
    local_78 = pdVar1[3] * dVar4 + *pdVar1;
    dStack_70 = pdVar1[4] * dVar4 + pdVar1[1];
    local_68 = pdVar1[5] * dVar4 + pdVar1[2];
  }
  else {
    local_78 = *pdVar1;
    dStack_70 = pdVar1[1];
    local_68 = pdVar1[2];
  }
  puVar2 = *(undefined8 **)((longlong)this + 0x10);
  UE::Core::Private::Function::CheckCallable((void *)*puVar2);
  pcVar3 = (code *)*puVar2;
  plVar9 = puVar2 + 2;
  if ((longlong *)puVar2[5] != (longlong *)0x0) {
    plVar9 = (longlong *)puVar2[5];
  }
  uVar8 = (**(code **)(*plVar9 + 8))();
  cVar6 = (*pcVar3)(uVar8,&local_78,lVar10 + 8);
  if (cVar6 != '\0') {
    EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x18));
    if (dVar4 < **(double **)((longlong)this + 0x20)) {
      **(double **)((longlong)this + 0x20) = dVar4;
      **(int **)((longlong)this + 0x28) = param_1;
      plVar9 = *(longlong **)this;
      uVar7 = 0;
      if (param_1 < (int)plVar9[1]) {
        uVar7 = (uint)~param_1 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      **(undefined4 **)((longlong)this + 0x30) = *(undefined4 *)((longlong)param_1 * 0x20 + *plVar9)
      ;
    }
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x18));
  }
  return;
}

// AddCurve @ 1435eca40

/* WARNING: Removing unreachable block (ram,0x0001435ecbf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FGeometrySet3::AddCurve(FGeometrySet3 *this,int param_1,TPolyline<double,3> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  TAxisAlignedBox3<double> *pTVar11;
  longlong lVar12;
  undefined1 *puVar13;
  uint local_res8 [2];
  int local_res10 [4];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  int *local_80;
  uint *local_78;
  TAxisAlignedBox3<double> local_70;
  
  local_res10[0] = param_1;
  if (*(int *)&(this->CurveIDToIndex).field_0x8 != *(int *)&(this->CurveIDToIndex).field_0x34) {
    puVar13 = *(undefined1 **)&(this->CurveIDToIndex).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->CurveIDToIndex).field_0x38;
    }
    iVar8 = *(int *)(puVar13 +
                    (ulonglong)(*(int *)&(this->CurveIDToIndex).field_0x48 - 1U & param_1) * 4);
    if (iVar8 != -1) {
      lVar12 = *(longlong *)&(this->CurveIDToIndex).field_0x0;
      do {
        if (*(int *)(lVar12 + (longlong)iVar8 * 0x10) == param_1) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurveIDToIndex.Contains(CurveID) == false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Spatial\\GeometrySet3.cpp"
                             ,0x21,L"");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        }
        iVar8 = *(int *)(lVar12 + 8 + (longlong)iVar8 * 0x10);
      } while (iVar8 != -1);
    }
  }
  pFVar2 = (this->Curves).AllocatorInstance.Data;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uStack_a8 = _UNK_150a9e648;
  local_90 = ___xmm_ffefffffffffffffffefffffffffffff;
  uStack_88 = _UNK_1508ffb58;
  local_a0 = ___xmm_ffefffffffffffff7fefffffffffffff;
  uStack_98 = _UNK_150a9e6d8;
  if (((pFVar2 <= (FScriptContainerElement *)&local_c8) &&
      ((FScriptContainerElement *)&local_c8 < pFVar2 + (longlong)(this->Curves).ArrayMax * 0x48)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar9 = (this->Curves).ArrayNum;
  piVar1 = &(this->Curves).ArrayMax;
  if (uVar9 == *piVar1) {
    uVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,&(this->Curves).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->Curves).AllocatorInstance.Data;
  (this->Curves).ArrayNum = uVar9 + 1;
  lVar12 = (longlong)(int)uVar9;
  *(undefined4 *)(pFVar2 + lVar12 * 0x48) = (undefined4)local_c8;
  *(undefined8 *)(pFVar2 + lVar12 * 0x48 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar12 * 0x48 + 8) = local_c0;
  *(undefined4 *)(pFVar2 + lVar12 * 0x48 + 0x10) = (undefined4)local_b8;
  *(undefined4 *)(pFVar2 + lVar12 * 0x48 + 0x14) = local_b8._4_4_;
  *(undefined8 *)(pFVar2 + lVar12 * 0x48 + 0x18) = local_b0;
  *(undefined8 *)(pFVar2 + lVar12 * 0x48 + 0x18 + 8) = uStack_a8;
  *(undefined8 *)(pFVar2 + lVar12 * 0x48 + 0x28) = local_a0;
  *(undefined8 *)(pFVar2 + lVar12 * 0x48 + 0x28 + 8) = uStack_98;
  *(undefined8 *)(pFVar2 + lVar12 * 0x48 + 0x38) = local_90;
  *(undefined8 *)(pFVar2 + lVar12 * 0x48 + 0x38 + 8) = uStack_88;
  local_b8 = 0;
  local_c0 = 0;
  uVar10 = 0;
  if ((int)uVar9 < (this->Curves).ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  local_res8[0] = uVar9;
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->Curves).AllocatorInstance.Data;
  lVar12 = (longlong)(int)uVar9;
  pFVar2 = pFVar3 + lVar12 * 0x48 + 8;
  *(int *)(pFVar3 + lVar12 * 0x48) = local_res10[0];
  if (pFVar2 != (FScriptContainerElement *)param_2) {
    iVar8 = (param_2->Vertices).ArrayNum;
    pFVar6 = pFVar2 + 0xc;
    _Src = (param_2->Vertices).AllocatorInstance.Data;
    *(int *)(pFVar2 + 8) = iVar8;
    if ((iVar8 == 0) && (*(int *)pFVar6 == 0)) {
      *(int *)pFVar6 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar8,*(int *)pFVar6,(ForAnyElementType *)pFVar2,iVar8,(int *)pFVar6);
      if (iVar8 != 0) {
        memcpy(*(FScriptContainerElement **)&pFVar2->field_0x0,_Src,(longlong)iVar8 * 0x18);
      }
    }
  }
  pTVar11 = TPolyline<double,3>::GetBounds(param_2,&local_70);
  dVar5 = (pTVar11->Min).field0_0x0._s_0.Y;
  *(double *)(pFVar3 + lVar12 * 0x48 + 0x18) = (pTVar11->Min).field0_0x0._s_0.X;
  *(double *)(pFVar3 + lVar12 * 0x48 + 0x18 + 8) = dVar5;
  dVar5 = (pTVar11->Max).field0_0x0._s_0.X;
  *(double *)(pFVar3 + lVar12 * 0x48 + 0x28) = (pTVar11->Min).field0_0x0._s_0.Z;
  *(double *)(pFVar3 + lVar12 * 0x48 + 0x28 + 8) = dVar5;
  dVar5 = (pTVar11->Max).field0_0x0._s_0.Z;
  local_80 = local_res10;
  local_78 = local_res8;
  *(double *)(pFVar3 + lVar12 * 0x48 + 0x38) = (pTVar11->Max).field0_0x0._s_0.Y;
  *(double *)(pFVar3 + lVar12 * 0x48 + 0x38 + 8) = dVar5;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->CurveIDToIndex,(TPairInitializer<int_const_&,int_const_&> *)(local_res10 + 2),
             (bool *)&local_80);
  return;
}

// AddPoint @ 1435ecd30

void __thiscall
UE::Geometry::FGeometrySet3::AddPoint(FGeometrySet3 *this,int param_1,TVector<double> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  int local_res8 [2];
  int local_res10 [2];
  TPairInitializer<int_const_&,int_const_&> local_res18;
  int *local_48;
  int *local_40;
  int local_38;
  undefined4 uStack_34;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  
  local_res10[0] = param_1;
  if (*(int *)&(this->PointIDToIndex).field_0x8 != *(int *)&(this->PointIDToIndex).field_0x34) {
    puVar7 = *(undefined1 **)&(this->PointIDToIndex).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->PointIDToIndex).field_0x38;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)(*(int *)&(this->PointIDToIndex).field_0x48 - 1U & param_1)
                              * 4);
    if (iVar6 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->PointIDToIndex + (longlong)iVar6 * 0x10) == param_1) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointIDToIndex.Contains(PointID) == false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Spatial\\GeometrySet3.cpp"
                             ,0x19,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        }
        iVar6 = *(int *)(*(longlong *)&this->PointIDToIndex + 8 + (longlong)iVar6 * 0x10);
      } while (iVar6 != -1);
    }
  }
  dStack_30 = (param_2->field0_0x0)._s_0.X;
  dStack_28 = (param_2->field0_0x0)._s_0.Y;
  pFVar2 = (this->Points).AllocatorInstance.Data;
  dStack_20 = (param_2->field0_0x0)._s_0.Z;
  local_38 = local_res10[0];
  if (((pFVar2 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)(this->Points).ArrayMax * 0x20)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_res8[0] = (this->Points).ArrayNum;
  piVar1 = &(this->Points).ArrayMax;
  if (local_res8[0] == *piVar1) {
    local_res8[0] =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x820,(ForAnyElementType *)this,piVar1);
  }
  pFVar3 = (this->Points).AllocatorInstance.Data;
  (this->Points).ArrayNum = local_res8[0] + 1;
  pFVar2 = pFVar3 + (longlong)local_res8[0] * 0x20;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_34,local_38);
  *(double *)(pFVar2 + 8) = dStack_30;
  pFVar3 = pFVar3 + (longlong)local_res8[0] * 0x20 + 0x10;
  *(double *)pFVar3 = dStack_28;
  *(double *)(pFVar3 + 8) = dStack_20;
  local_48 = local_res10;
  local_40 = local_res8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->PointIDToIndex,&local_res18,(bool *)&local_48);
  return;
}

// CollectCurvesNearRay @ 1435f49f0

bool __thiscall
UE::Geometry::FGeometrySet3::CollectCurvesNearRay
          (FGeometrySet3 *this,TRay<double> *param_1,
          TArray<UE::Geometry::FGeometrySet3::FNearest,TSizedDefaultAllocator<32>_> *param_2,
          TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
          *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  <lambda_1> local_a8;
  ForAnyElementType local_a0;
  int local_98 [2];
  ForAnyElementType local_90;
  int local_88 [2];
  TArrayView<std::nullptr_t,int> local_80;
  code *local_70;
  FGeometrySet3 **local_68;
  FGeometrySet3 *local_60;
  TRay<double> *local_58;
  TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
  *local_50;
  ForAnyElementType *local_48;
  ForAnyElementType *local_40;
  
  iVar1 = param_2->ArrayNum;
  uVar13 = 0;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98[0] = 0;
  local_98[1] = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x50,8,(this->Curves).ArrayNum,&local_a0,local_98,local_98 + 1);
  iVar9 = (this->Curves).ArrayNum;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88[0] = 0;
  local_88[1] = 0;
  iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar9,&local_90,local_88,local_88 + 1);
  memset(local_90.Data + iVar7,0,(longlong)iVar9);
  local_48 = &local_90;
  local_40 = &local_a0;
  local_70 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FGeometrySet3::CollectCurvesNearRay'::__l2::<lambda_1>,void,int>
             ::Call;
  local_68 = &local_60;
  local_80.DataPtr = (void **)0x0;
  local_80.ArrayNum = 0;
  local_60 = this;
  local_58 = param_1;
  local_50 = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->Curves).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_70,local_a8,None,&local_80);
  uVar15 = uVar13;
  uVar16 = uVar13;
  iVar9 = local_98[0];
  if (0 < local_98[0]) {
    do {
      uVar14 = (uint)uVar15;
      uVar8 = 0;
      if ((int)uVar14 < local_88[0]) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar9 = local_98[0];
      }
      if (local_90.Data[uVar13] != (FScriptContainerElement)0x0) {
        uVar8 = 0;
        if ((int)uVar14 < iVar9) {
          uVar8 = ~uVar14 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        pFVar2 = (param_2->AllocatorInstance).Data;
        pFVar12 = local_a0.Data + uVar16;
        if (((pFVar2 <= pFVar12) && (pFVar12 < pFVar2 + (longlong)param_2->ArrayMax * 0x50)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar9 = param_2->ArrayNum;
        if (iVar9 == param_2->ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x850,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        lVar10 = (longlong)iVar9;
        param_2->ArrayNum = iVar9 + 1;
        uVar4 = *(undefined8 *)(pFVar12 + 8);
        pFVar2 = (param_2->AllocatorInstance).Data;
        *(undefined8 *)(pFVar2 + lVar10 * 0x50) = *(undefined8 *)pFVar12;
        *(undefined8 *)(pFVar2 + lVar10 * 0x50 + 8) = uVar4;
        uVar4 = *(undefined8 *)(pFVar12 + 0x18);
        *(undefined8 *)(pFVar2 + lVar10 * 0x50 + 0x10) = *(undefined8 *)(pFVar12 + 0x10);
        *(undefined8 *)(pFVar2 + lVar10 * 0x50 + 0x10 + 8) = uVar4;
        uVar4 = *(undefined8 *)(pFVar12 + 0x28);
        *(undefined8 *)(pFVar2 + lVar10 * 0x50 + 0x20) = *(undefined8 *)(pFVar12 + 0x20);
        *(undefined8 *)(pFVar2 + lVar10 * 0x50 + 0x20 + 8) = uVar4;
        uVar4 = *(undefined8 *)(pFVar12 + 0x38);
        *(undefined8 *)(pFVar2 + lVar10 * 0x50 + 0x30) = *(undefined8 *)(pFVar12 + 0x30);
        *(undefined8 *)(pFVar2 + lVar10 * 0x50 + 0x30 + 8) = uVar4;
        uVar4 = *(undefined8 *)(pFVar12 + 0x48);
        *(undefined8 *)(pFVar2 + lVar10 * 0x50 + 0x40) = *(undefined8 *)(pFVar12 + 0x40);
        *(undefined8 *)(pFVar2 + lVar10 * 0x50 + 0x40 + 8) = uVar4;
        iVar9 = local_98[0];
      }
      uVar13 = uVar13 + 1;
      uVar15 = (ulonglong)(uVar14 + 1);
      uVar16 = uVar16 + 0x50;
    } while ((int)(uVar14 + 1) < iVar9);
  }
  iVar9 = param_2->ArrayNum;
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  if (*(longlong *)param_3 != 0) {
    plVar11 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return iVar9 != iVar1;
}

// CollectPointsNearRay @ 1435f4cf0

bool __thiscall
UE::Geometry::FGeometrySet3::CollectPointsNearRay
          (FGeometrySet3 *this,TRay<double> *param_1,
          TArray<UE::Geometry::FGeometrySet3::FNearest,TSizedDefaultAllocator<32>_> *param_2,
          TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
          *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  <lambda_1> local_a8;
  ForAnyElementType local_a0;
  int local_98 [2];
  ForAnyElementType local_90;
  int local_88 [2];
  TArrayView<std::nullptr_t,int> local_80;
  code *local_70;
  FGeometrySet3 **local_68;
  FGeometrySet3 *local_60;
  TRay<double> *local_58;
  TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
  *local_50;
  ForAnyElementType *local_48;
  ForAnyElementType *local_40;
  
  iVar9 = (this->Points).ArrayNum;
  iVar1 = param_2->ArrayNum;
  uVar13 = 0;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98[0] = 0;
  local_98[1] = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x50,8,iVar9,&local_a0,local_98,local_98 + 1);
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88[0] = 0;
  local_88[1] = 0;
  iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar9,&local_90,local_88,local_88 + 1);
  memset(local_90.Data + iVar7,0,(longlong)iVar9);
  local_48 = &local_90;
  local_40 = &local_a0;
  local_70 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FGeometrySet3::CollectPointsNearRay'::__l2::<lambda_1>,void,int>
             ::Call;
  local_68 = &local_60;
  local_80.DataPtr = (void **)0x0;
  local_80.ArrayNum = 0;
  local_60 = this;
  local_58 = param_1;
  local_50 = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar9,1,(TFunctionRef<void___cdecl(int)> *)&local_70,local_a8,None,
             &local_80);
  uVar15 = uVar13;
  uVar16 = uVar13;
  iVar9 = local_98[0];
  if (0 < local_98[0]) {
    do {
      uVar14 = (uint)uVar15;
      uVar8 = 0;
      if ((int)uVar14 < local_88[0]) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar9 = local_98[0];
      }
      if (local_90.Data[uVar13] != (FScriptContainerElement)0x0) {
        uVar8 = 0;
        if ((int)uVar14 < iVar9) {
          uVar8 = ~uVar14 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        pFVar2 = (param_2->AllocatorInstance).Data;
        pFVar12 = local_a0.Data + uVar16;
        if (((pFVar2 <= pFVar12) && (pFVar12 < pFVar2 + (longlong)param_2->ArrayMax * 0x50)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar9 = param_2->ArrayNum;
        if (iVar9 == param_2->ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x850,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        lVar10 = (longlong)iVar9;
        param_2->ArrayNum = iVar9 + 1;
        uVar4 = *(undefined8 *)(pFVar12 + 8);
        pFVar2 = (param_2->AllocatorInstance).Data;
        *(undefined8 *)(pFVar2 + lVar10 * 0x50) = *(undefined8 *)pFVar12;
        *(undefined8 *)(pFVar2 + lVar10 * 0x50 + 8) = uVar4;
        uVar4 = *(undefined8 *)(pFVar12 + 0x18);
        *(undefined8 *)(pFVar2 + lVar10 * 0x50 + 0x10) = *(undefined8 *)(pFVar12 + 0x10);
        *(undefined8 *)(pFVar2 + lVar10 * 0x50 + 0x10 + 8) = uVar4;
        uVar4 = *(undefined8 *)(pFVar12 + 0x28);
        *(undefined8 *)(pFVar2 + lVar10 * 0x50 + 0x20) = *(undefined8 *)(pFVar12 + 0x20);
        *(undefined8 *)(pFVar2 + lVar10 * 0x50 + 0x20 + 8) = uVar4;
        uVar4 = *(undefined8 *)(pFVar12 + 0x38);
        *(undefined8 *)(pFVar2 + lVar10 * 0x50 + 0x30) = *(undefined8 *)(pFVar12 + 0x30);
        *(undefined8 *)(pFVar2 + lVar10 * 0x50 + 0x30 + 8) = uVar4;
        uVar4 = *(undefined8 *)(pFVar12 + 0x48);
        *(undefined8 *)(pFVar2 + lVar10 * 0x50 + 0x40) = *(undefined8 *)(pFVar12 + 0x40);
        *(undefined8 *)(pFVar2 + lVar10 * 0x50 + 0x40 + 8) = uVar4;
        iVar9 = local_98[0];
      }
      uVar13 = uVar13 + 1;
      uVar15 = (ulonglong)(uVar14 + 1);
      uVar16 = uVar16 + 0x50;
    } while ((int)(uVar14 + 1) < iVar9);
  }
  iVar9 = param_2->ArrayNum;
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  if (*(longlong *)param_3 != 0) {
    plVar11 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return iVar9 != iVar1;
}

// FindNearestCurveToRay @ 1435fd540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FGeometrySet3::FindNearestCurveToRay
          (FGeometrySet3 *this,TRay<double> *param_1,FNearest *param_2,
          TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
          *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  undefined1 uVar6;
  TVector<double> *pTVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStackY_148 [32];
  <lambda_1> local_108;
  int local_104;
  int local_100;
  uint local_fc;
  double local_f8;
  double local_f0;
  double local_e8;
  TArrayView<std::nullptr_t,int> local_e0;
  code *local_d0;
  FGeometrySet3 **local_c8;
  FGeometrySet3 *local_c0;
  TRay<double> *local_b8;
  TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
  *local_b0;
  _RTL_CRITICAL_SECTION *local_a8;
  double *local_a0;
  double *local_98;
  uint *local_90;
  int *local_88;
  int *local_80;
  double *local_78;
  TVector<double> local_70;
  _RTL_CRITICAL_SECTION local_58;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_f8 = __real_7fefffffffffffff;
  local_e8 = __real_7fefffffffffffff;
  local_f0 = 0.0;
  local_100 = -1;
  local_fc = 0xffffffff;
  local_104 = -1;
  InitializeCriticalSectionAndSpinCount(&local_58,4000);
  local_a8 = &local_58;
  local_a0 = &local_e8;
  local_98 = &local_f8;
  local_90 = &local_fc;
  local_e0.DataPtr = (void **)0x0;
  local_88 = &local_100;
  local_80 = &local_104;
  local_78 = &local_f0;
  local_d0 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FGeometrySet3::FindNearestCurveToRay'::__l2::<lambda_1>,void,int>
             ::Call;
  local_c8 = &local_c0;
  local_e0.ArrayNum = 0;
  local_c0 = this;
  local_b8 = param_1;
  local_b0 = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->Curves).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_d0,local_108,None,&local_e0);
  bVar11 = local_100 == -1;
  if (!bVar11) {
    param_2->ID = local_100;
    param_2->bIsPoint = false;
    dVar1 = (param_1->Direction).field0_0x0._s_0.Y;
    dVar2 = (param_1->Direction).field0_0x0._s_0.Z;
    dVar3 = (param_1->Origin).field0_0x0._s_0.Y;
    dVar4 = (param_1->Origin).field0_0x0._s_0.Z;
    (param_2->NearestRayPoint).field0_0x0._s_0.X =
         local_f8 * (param_1->Direction).field0_0x0._s_0.X + (param_1->Origin).field0_0x0._s_0.X;
    (param_2->NearestRayPoint).field0_0x0._s_0.Y = local_f8 * dVar1 + dVar3;
    (param_2->NearestRayPoint).field0_0x0._s_0.Z = local_f8 * dVar2 + dVar4;
    lVar9 = (longlong)(int)local_fc;
    uVar10 = 0;
    if ((int)local_fc < (this->Curves).ArrayNum) {
      uVar10 = ~local_fc >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar5 = (code *)swi(3);
        uVar6 = (*pcVar5)();
        return (bool)uVar6;
      }
    }
    pTVar7 = TPolyline<double,3>::GetSegmentPoint
                       ((TPolyline<double,3> *)
                        ((this->Curves).AllocatorInstance.Data + (lVar9 * 9 + 1) * 8),&local_70,
                        local_104,local_f0);
    dVar1 = (pTVar7->field0_0x0)._s_0.Y;
    (param_2->NearestGeoPoint).field0_0x0._s_0.X = (pTVar7->field0_0x0)._s_0.X;
    (param_2->NearestGeoPoint).field0_0x0._s_0.Y = dVar1;
    dVar1 = (pTVar7->field0_0x0)._s_0.Z;
    param_2->RayParam = local_f8;
    param_2->PolySegmentIdx = local_104;
    bVar11 = local_100 == -1;
    param_2->PolySegmentParam = local_f0;
    (param_2->NearestGeoPoint).field0_0x0._s_0.Z = dVar1;
  }
  DeleteCriticalSection(&local_58);
  if (*(longlong *)param_3 != 0) {
    plVar8 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return !bVar11;
}

// FindNearestPointToRay @ 1435fde00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FGeometrySet3::FindNearestPointToRay
          (FGeometrySet3 *this,TRay<double> *param_1,FNearest *param_2,
          TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
          *param_3)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined1 uVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStackY_108 [32];
  <lambda_1> local_c8;
  int local_c4;
  uint local_c0 [2];
  double local_b8;
  TArrayView<std::nullptr_t,int> local_b0;
  code *local_a0;
  FGeometrySet3 **local_98;
  FGeometrySet3 *local_90;
  TRay<double> *local_88;
  TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
  *local_80;
  _RTL_CRITICAL_SECTION *local_78;
  double *local_70;
  uint *local_68;
  int *local_60;
  _RTL_CRITICAL_SECTION local_58;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_b8 = __real_7fefffffffffffff;
  local_c4 = -1;
  local_c0[0] = 0xffffffff;
  InitializeCriticalSectionAndSpinCount(&local_58,4000);
  local_78 = &local_58;
  local_70 = &local_b8;
  local_68 = local_c0;
  local_60 = &local_c4;
  local_b0.DataPtr = (void **)0x0;
  local_a0 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FGeometrySet3::FindNearestPointToRay'::__l2::<lambda_1>,void,int>
             ::Call;
  local_98 = &local_90;
  local_b0.ArrayNum = 0;
  local_90 = this;
  local_88 = param_1;
  local_80 = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->Points).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_a0,local_c8,None,&local_b0);
  bVar12 = local_c4 == -1;
  if (!bVar12) {
    param_2->ID = local_c4;
    param_2->bIsPoint = true;
    dVar2 = (param_1->Direction).field0_0x0._s_0.Y;
    dVar3 = (param_1->Direction).field0_0x0._s_0.Z;
    dVar4 = (param_1->Origin).field0_0x0._s_0.Y;
    dVar5 = (param_1->Origin).field0_0x0._s_0.Z;
    (param_2->NearestRayPoint).field0_0x0._s_0.X =
         local_b8 * (param_1->Direction).field0_0x0._s_0.X + (param_1->Origin).field0_0x0._s_0.X;
    (param_2->NearestRayPoint).field0_0x0._s_0.Y = local_b8 * dVar2 + dVar4;
    (param_2->NearestRayPoint).field0_0x0._s_0.Z = local_b8 * dVar3 + dVar5;
    lVar10 = (longlong)(int)local_c0[0];
    uVar11 = 0;
    if ((int)local_c0[0] < (this->Points).ArrayNum) {
      uVar11 = ~local_c0[0] >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar7 = (code *)swi(3);
        uVar8 = (*pcVar7)();
        return (bool)uVar8;
      }
    }
    pFVar6 = (this->Points).AllocatorInstance.Data;
    pFVar1 = pFVar6 + lVar10 * 0x20 + 8;
    dVar2 = *(double *)(pFVar1 + 8);
    (param_2->NearestGeoPoint).field0_0x0._s_0.X = *(double *)pFVar1;
    (param_2->NearestGeoPoint).field0_0x0._s_0.Y = dVar2;
    dVar2 = *(double *)(pFVar6 + lVar10 * 0x20 + 0x18);
    bVar12 = local_c4 == -1;
    param_2->RayParam = local_b8;
    (param_2->NearestGeoPoint).field0_0x0._s_0.Z = dVar2;
  }
  DeleteCriticalSection(&local_58);
  if (*(longlong *)param_3 != 0) {
    plVar9 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return !bVar12;
}

// RemoveCurve @ 143616f70

void __thiscall UE::Geometry::FGeometrySet3::RemoveCurve(FGeometrySet3 *this,int param_1)

{
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  FScriptContainerElement *_Dst;
  ulonglong uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  this_00 = &this->CurveIDToIndex;
  if (*(int *)&(this->CurveIDToIndex).field_0x8 != *(int *)&(this->CurveIDToIndex).field_0x34) {
    puVar18 = *(undefined1 **)&(this->CurveIDToIndex).field_0x40;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = &(this->CurveIDToIndex).field_0x38;
    }
    iVar10 = *(int *)(puVar18 +
                     (ulonglong)(*(int *)&(this->CurveIDToIndex).field_0x48 - 1U & param_1) * 4);
    if (iVar10 != -1) {
      do {
        piVar11 = (int *)((longlong)iVar10 * 0x10 + *(longlong *)&this_00->field_0x0);
        if (*piVar11 == param_1) {
          puVar14 = (uint *)(piVar11 + 1);
          if (piVar11 == (int *)0x0) {
            puVar14 = (uint *)0x0;
          }
          if (puVar14 != (uint *)0x0) goto LAB_143617014;
          goto LAB_143616fee;
        }
        iVar10 = piVar11[2];
      } while (iVar10 != -1);
    }
  }
  puVar14 = (uint *)0x0;
LAB_143616fee:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("IndexPointer != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Spatial\\GeometrySet3.cpp"
                     ,0x3f,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_143617014:
  uVar2 = *puVar14;
  uVar13 = 0;
  uVar16 = uVar13;
  if ((int)uVar2 < (this->Curves).ArrayNum) {
    uVar16 = ~uVar2 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (this->Curves).AllocatorInstance.Data;
  _Dst = pFVar3 + (longlong)(int)uVar2 * 0x48;
  pvVar4 = *(void **)(pFVar3 + (longlong)(int)uVar2 * 0x48 + 8);
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  iVar10 = (this->Curves).ArrayNum + ~uVar2;
  if (iVar10 != 0) {
    memmove(_Dst,_Dst + 0x48,(longlong)iVar10 * 0x48);
  }
  piVar11 = &(this->Curves).ArrayNum;
  *piVar11 = *piVar11 + -1;
  Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x48,8,&(this->Curves).AllocatorInstance,(this->Curves).ArrayNum,
             &(this->Curves).ArrayMax);
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Remove
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             this_00,param_1);
  uVar7 = 1;
  puVar18 = &(this->CurveIDToIndex).field_0x10;
  uVar16 = *(uint *)&(this->CurveIDToIndex).field_0x28;
  uVar8 = uVar13;
  uVar17 = uVar13;
  if (uVar16 != 0) {
    puVar14 = *(uint **)&(this->CurveIDToIndex).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar18;
    }
    uVar8 = *puVar14;
    while (uVar8 == 0) {
      lVar12 = (longlong)(int)uVar13;
      uVar17 = uVar17 + 0x20;
      uVar13 = uVar13 + 1;
      uVar8 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
      goto LAB_14361714c;
      uVar8 = puVar14[lVar12 + 1];
    }
    uVar7 = -uVar8 & uVar8;
    uVar1 = (ulonglong)uVar7 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    uVar8 = (uVar17 - 1) + local_res18;
    if ((int)uVar16 < (int)uVar8) {
      uVar8 = uVar16;
    }
  }
LAB_14361714c:
  uVar9 = *(uint *)&(this->CurveIDToIndex).field_0x28;
  uVar15 = uVar9 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,uVar13);
  TStack_60.CurrentBitIndex = uVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = uVar17;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->CurveIDToIndex).field_0x8 -
                       *(int *)&(this->CurveIDToIndex).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar18;
  if ((((int)uVar9 < 0) || ((int)uVar16 < (int)uVar9)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar13 = *(uint *)&(this->CurveIDToIndex).field_0x28;
  if (uVar9 != uVar13) {
    puVar19 = *(undefined1 **)&(this->CurveIDToIndex).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar18;
    }
    uVar16 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar10 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar10;
      uVar15 = uVar15 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_143617250;
      uVar16 = *(uint *)(puVar19 + lVar12 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar9 = (int)lVar12 + -1 + uVar15;
    if ((int)uVar13 < (int)uVar9) {
      uVar9 = uVar13;
    }
  }
LAB_143617250:
  while( true ) {
    if (*(int *)&(this->CurveIDToIndex).field_0x8 - *(int *)&(this->CurveIDToIndex).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar18)) break;
    lVar12 = (longlong)TStack_60.CurrentBitIndex * 0x10 + *(longlong *)&this_00->field_0x0;
    iVar10 = *(int *)(lVar12 + 4);
    if ((int)uVar2 < iVar10) {
      *(int *)(lVar12 + 4) = iVar10 + -1;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// RemovePoint @ 1436176b0

void __thiscall UE::Geometry::FGeometrySet3::RemovePoint(FGeometrySet3 *this,int param_1)

{
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  FScriptContainerElement *_Dst;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 local_res10 [8];
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  this_00 = &this->PointIDToIndex;
  if (*(int *)&(this->PointIDToIndex).field_0x8 != *(int *)&(this->PointIDToIndex).field_0x34) {
    puVar15 = *(undefined1 **)&(this->PointIDToIndex).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->PointIDToIndex).field_0x38;
    }
    iVar11 = *(int *)(puVar15 +
                     (ulonglong)(*(int *)&(this->PointIDToIndex).field_0x48 - 1U & param_1) * 4);
    if (iVar11 != -1) {
      do {
        piVar9 = (int *)((longlong)iVar11 * 0x10 + *(longlong *)&this_00->field_0x0);
        if (*piVar9 == param_1) {
          puVar13 = (uint *)(piVar9 + 1);
          if (piVar9 == (int *)0x0) {
            puVar13 = (uint *)0x0;
          }
          if (puVar13 != (uint *)0x0) goto LAB_143617746;
          goto LAB_143617720;
        }
        iVar11 = piVar9[2];
      } while (iVar11 != -1);
    }
  }
  puVar13 = (uint *)0x0;
LAB_143617720:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IndexPointer != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Spatial\\GeometrySet3.cpp"
                     ,0x2d,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_143617746:
  uVar2 = *puVar13;
  uVar12 = 0;
  uVar5 = uVar12;
  if ((int)uVar2 < (this->Points).ArrayNum) {
    uVar5 = ~uVar2 >> 0x1f;
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
  _Dst = (this->Points).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x20;
  iVar11 = (this->Points).ArrayNum + ~uVar2;
  if (iVar11 != 0) {
    memmove(_Dst,_Dst + 0x20,(longlong)iVar11 << 5);
  }
  piVar9 = &(this->Points).ArrayNum;
  *piVar9 = *piVar9 + -1;
  Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,(ForAnyElementType *)this,(this->Points).ArrayNum,&(this->Points).ArrayMax);
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Remove
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             this_00,param_1);
  uVar5 = *(uint *)&(this->PointIDToIndex).field_0x28;
  puVar15 = &(this->PointIDToIndex).field_0x10;
  uVar6 = 1;
  uVar7 = uVar12;
  uVar14 = uVar12;
  if (uVar5 != 0) {
    puVar13 = *(uint **)&(this->PointIDToIndex).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar15;
    }
    uVar7 = *puVar13;
    while (uVar7 == 0) {
      lVar10 = (longlong)(int)uVar12;
      uVar14 = uVar14 + 0x20;
      uVar12 = uVar12 + 1;
      uVar7 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
      goto LAB_14361785d;
      uVar7 = puVar13[lVar10 + 1];
    }
    uVar6 = -uVar7 & uVar7;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar7 = (uVar14 - 1) + (int)lVar10;
    if ((int)uVar5 < (int)uVar7) {
      uVar7 = uVar5;
    }
  }
LAB_14361785d:
  uVar8 = *(uint *)&(this->PointIDToIndex).field_0x28;
  TStack_60._padding_ = CONCAT44(uVar6,uVar12);
  uVar12 = uVar8 & 0xffffffe0;
  TStack_60.CurrentBitIndex = uVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar8 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = uVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->PointIDToIndex).field_0x8 -
                       *(int *)&(this->PointIDToIndex).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar15;
  if ((((int)uVar8 < 0) || ((int)uVar5 < (int)uVar8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = *(uint *)&(this->PointIDToIndex).field_0x28;
  if (uVar8 != uVar5) {
    puVar16 = *(undefined1 **)&(this->PointIDToIndex).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar15;
    }
    uVar14 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar8 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_143617960;
      uVar14 = *(uint *)(puVar16 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar8 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar5 < (int)uVar8) {
      uVar8 = uVar5;
    }
  }
LAB_143617960:
  while( true ) {
    if (*(int *)&(this->PointIDToIndex).field_0x8 - *(int *)&(this->PointIDToIndex).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar8) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar15)) break;
    lVar10 = (longlong)TStack_60.CurrentBitIndex * 0x10 + *(longlong *)&this_00->field_0x0;
    iVar11 = *(int *)(lVar10 + 4);
    if ((int)uVar2 < iVar11) {
      *(int *)(lVar10 + 4) = iVar11 + -1;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Reset @ 1436187c0

void __thiscall UE::Geometry::FGeometrySet3::Reset(FGeometrySet3 *this,bool param_1,bool param_2)

{
  int *piVar1;
  int iVar2;
  FCurve *pFVar3;
  
  if (param_1) {
    (this->Points).ArrayNum = 0;
    if ((this->Points).ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this,0,&(this->Points).ArrayMax);
    }
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &this->PointIDToIndex);
  }
  if (param_2) {
    pFVar3 = (FCurve *)(this->Curves).AllocatorInstance.Data;
    iVar2 = (this->Curves).ArrayNum;
    piVar1 = &(this->Curves).ArrayMax;
    if ((this->Curves).ArrayMax < 0) {
      DestructItems<UE::Geometry::FGeometrySet3::FCurve,int>(pFVar3,iVar2);
      (this->Curves).ArrayNum = 0;
      if (*piVar1 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,0,&(this->Curves).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<UE::Geometry::FGeometrySet3::FCurve,int>(pFVar3,iVar2);
      (this->Curves).ArrayNum = 0;
    }
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &this->CurveIDToIndex);
  }
  return;
}

// UpdateCurve @ 14361eaf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FGeometrySet3::UpdateCurve
          (FGeometrySet3 *this,int param_1,TPolyline<double,3> *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  int iVar18;
  TAxisAlignedBox3<double> *pTVar19;
  uint uVar20;
  uint uVar21;
  int *piVar22;
  longlong lVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  undefined1 *puVar27;
  uint *local_res8;
  TAxisAlignedBox3<double> local_68;
  
  if (*(int *)&(this->CurveIDToIndex).field_0x8 != *(int *)&(this->CurveIDToIndex).field_0x34) {
    puVar27 = *(undefined1 **)&(this->CurveIDToIndex).field_0x40;
    if (puVar27 == (undefined1 *)0x0) {
      puVar27 = &(this->CurveIDToIndex).field_0x38;
    }
    iVar18 = *(int *)(puVar27 +
                     (ulonglong)(*(int *)&(this->CurveIDToIndex).field_0x48 - 1U & param_1) * 4);
    if (iVar18 != -1) {
      do {
        piVar22 = (int *)((longlong)iVar18 * 0x10 + *(longlong *)&this->CurveIDToIndex);
        if (*piVar22 == param_1) {
          local_res8 = (uint *)(piVar22 + 1);
          if (piVar22 == (int *)0x0) {
            local_res8 = (uint *)0x0;
          }
          if (local_res8 == (uint *)0x0) goto LAB_14361eb77;
          goto LAB_14361eb9d;
        }
        iVar18 = piVar22[2];
      } while (iVar18 != -1);
    }
  }
  local_res8 = (uint *)0x0;
LAB_14361eb77:
  bVar17 = ::FDebug::CheckVerifyFailedImpl2
                     ("Index != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Spatial\\GeometrySet3.cpp"
                      ,0x58,L"");
  if (bVar17) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_14361eb9d:
  uVar24 = 0;
  uVar4 = *local_res8;
  uVar20 = 0;
  uVar21 = uVar20;
  if ((int)uVar4 < (this->Curves).ArrayNum) {
    uVar21 = ~uVar4 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar5 = (this->Curves).AllocatorInstance.Data;
  iVar18 = (param_2->Vertices).ArrayNum;
  lVar23 = (longlong)iVar18;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             (pFVar5 + (longlong)(int)uVar4 * 0x48 + 8),iVar18,No);
  uVar26 = uVar24;
  if (0 < iVar18) {
    do {
      uVar25 = (uint)uVar26;
      uVar21 = uVar20;
      if ((int)uVar25 < (param_2->Vertices).ArrayNum) {
        uVar21 = ~uVar25 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (param_2->Vertices).AllocatorInstance.Data;
      pFVar1 = pFVar6 + uVar24;
      uVar9 = *(undefined4 *)pFVar1;
      uVar10 = *(undefined4 *)(pFVar1 + 4);
      uVar11 = *(undefined4 *)(pFVar1 + 8);
      uVar12 = *(undefined4 *)(pFVar1 + 0xc);
      uVar3 = *(undefined8 *)(pFVar6 + uVar24 + 0x10);
      uVar21 = uVar20;
      if ((int)uVar25 < *(int *)(pFVar5 + (longlong)(int)uVar4 * 0x48 + 0x10)) {
        uVar21 = ~uVar25 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar7 = *(longlong *)(pFVar5 + (longlong)(int)uVar4 * 0x48 + 8);
      puVar2 = (undefined4 *)(lVar7 + uVar24);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      puVar2[2] = uVar11;
      puVar2[3] = uVar12;
      *(undefined8 *)(lVar7 + 0x10 + uVar24) = uVar3;
      uVar24 = uVar24 + 0x18;
      lVar23 = lVar23 + -1;
      uVar26 = (ulonglong)(uVar25 + 1);
    } while (lVar23 != 0);
  }
  pTVar19 = TPolyline<double,3>::GetBounds(param_2,&local_68);
  uVar9 = *(undefined4 *)&(pTVar19->Min).field0_0x0;
  uVar10 = *(undefined4 *)((longlong)&(pTVar19->Min).field0_0x0 + 4);
  uVar11 = *(undefined4 *)((longlong)&(pTVar19->Min).field0_0x0 + 8);
  uVar12 = *(undefined4 *)((longlong)&(pTVar19->Min).field0_0x0 + 0xc);
  uVar4 = *local_res8;
  lVar23 = (longlong)(int)uVar4;
  dVar13 = (pTVar19->Min).field0_0x0._s_0.Z;
  dVar14 = (pTVar19->Max).field0_0x0._s_0.X;
  dVar15 = (pTVar19->Max).field0_0x0._s_0.Y;
  dVar16 = (pTVar19->Max).field0_0x0._s_0.Z;
  if ((int)uVar4 < (this->Curves).ArrayNum) {
    uVar20 = ~uVar4 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar1 = (this->Curves).AllocatorInstance.Data;
  pFVar5 = pFVar1 + lVar23 * 0x48 + 0x18;
  *(undefined4 *)pFVar5 = uVar9;
  *(undefined4 *)(pFVar5 + 4) = uVar10;
  *(undefined4 *)(pFVar5 + 8) = uVar11;
  *(undefined4 *)(pFVar5 + 0xc) = uVar12;
  *(double *)(pFVar1 + lVar23 * 0x48 + 0x28) = dVar13;
  *(double *)(pFVar1 + lVar23 * 0x48 + 0x28 + 8) = dVar14;
  *(double *)(pFVar1 + lVar23 * 0x48 + 0x38) = dVar15;
  *(double *)(pFVar1 + lVar23 * 0x48 + 0x38 + 8) = dVar16;
  return;
}

// UpdatePoint @ 14361ee00

void __thiscall
UE::Geometry::FGeometrySet3::UpdatePoint(FGeometrySet3 *this,int param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  int *piVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 *puVar15;
  
  if (*(int *)&(this->PointIDToIndex).field_0x8 != *(int *)&(this->PointIDToIndex).field_0x34) {
    puVar15 = *(undefined1 **)&(this->PointIDToIndex).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->PointIDToIndex).field_0x38;
    }
    iVar11 = *(int *)(puVar15 +
                     (ulonglong)(*(int *)&(this->PointIDToIndex).field_0x48 - 1U & param_1) * 4);
    if (iVar11 != -1) {
      do {
        piVar12 = (int *)((longlong)iVar11 * 0x10 + *(longlong *)&this->PointIDToIndex);
        if (*piVar12 == param_1) {
          puVar13 = (uint *)(piVar12 + 1);
          if (piVar12 == (int *)0x0) {
            puVar13 = (uint *)0x0;
          }
          if (puVar13 == (uint *)0x0) goto LAB_14361ee6e;
          goto LAB_14361ee94;
        }
        iVar11 = piVar12[2];
      } while (iVar11 != -1);
    }
  }
  puVar13 = (uint *)0x0;
LAB_14361ee6e:
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("Index != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Spatial\\GeometrySet3.cpp"
                      ,0x51,L"");
  if (bVar10) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14361ee94:
  uVar3 = *puVar13;
  uVar6 = *(undefined4 *)&param_2->field0_0x0;
  uVar7 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
  uVar8 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
  uVar9 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  uVar14 = 0;
  if ((int)uVar3 < (this->Points).ArrayNum) {
    uVar14 = ~uVar3 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (this->Points).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)(int)uVar3 * 0x20 + 8;
  *(undefined4 *)pFVar1 = uVar6;
  *(undefined4 *)(pFVar1 + 4) = uVar7;
  *(undefined4 *)(pFVar1 + 8) = uVar8;
  *(undefined4 *)(pFVar1 + 0xc) = uVar9;
  *(double *)(pFVar4 + (longlong)(int)uVar3 * 0x20 + 0x18) = dVar2;
  return;
}

