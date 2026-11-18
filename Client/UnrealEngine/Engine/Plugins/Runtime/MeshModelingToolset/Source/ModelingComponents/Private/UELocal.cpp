// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 3

// operator() @ 14cad5a10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UELocal::FindPolylineSelfIntersection'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double dVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  TVector2<double>_u_0 *pTVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  TVector2<double>_u_0 *this_00;
  char cVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  undefined1 in_XMM4 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM5 [16];
  TVector2<double>_u_0 local_1c8;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double local_188;
  double local_180;
  TVector2<double>_u_0 local_178;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  double local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  
  plVar3 = *(longlong **)this;
  uVar16 = param_1 + 1;
  uVar17 = 0;
  if ((int)uVar16 < (int)plVar3[1]) {
    uVar17 = ~uVar16 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar18 = *plVar3;
  plVar3 = *(longlong **)this;
  uVar17 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar17 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  UE::Geometry::TSegment2<double>::TSegment2<double>
            ((TSegment2<double> *)&local_1c8._s_0,
             (TVector2<double> *)((longlong)param_1 * 0x10 + *plVar3),
             (TVector2<double> *)((longlong)(int)uVar16 * 0x10 + lVar18));
  dVar12 = dStack_1b0;
  dVar11 = local_1b8;
  uVar17 = param_1 + 2;
  if ((int)uVar17 < **(int **)((longlong)this + 8) + -1) {
    uVar16 = param_1 + 3;
    lVar18 = (longlong)(int)uVar17 << 4;
    do {
      dVar9 = __real_3fe0000000000000;
      dVar8 = __real_3ff0000000000000;
      if (**(char **)((longlong)this + 0x10) != '\0') {
        return;
      }
      plVar3 = *(longlong **)this;
      uVar14 = 0;
      if ((int)uVar16 < (int)plVar3[1]) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar4 = *plVar3;
      plVar3 = *(longlong **)this;
      uVar14 = 0;
      if ((int)uVar17 < (int)plVar3[1]) {
        uVar14 = ~uVar17 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar5 = *plVar3;
      dVar1 = *(double *)(lVar4 + 0x10 + lVar18);
      dVar2 = *(double *)(lVar4 + 0x18 + lVar18);
      local_190 = dVar1 - *(double *)(lVar5 + lVar18);
      local_188 = dVar2 - *(double *)(lVar5 + 8 + lVar18);
      dVar1 = (*(double *)(lVar5 + lVar18) + dVar1) * dVar9;
      dVar9 = (*(double *)(lVar5 + 8 + lVar18) + dVar2) * dVar9;
      dStack_198 = dVar9;
      local_1a0 = dVar1;
      auVar24._0_8_ = local_190 * local_190 + local_188 * local_188;
      auVar24._8_8_ = 0;
      auVar24 = sqrtpd(in_XMM4,auVar24);
      if (auVar24._0_8_ <= 0.0) {
        local_188 = 0.0;
        local_190 = 0.0;
        auVar24 = ZEXT816(0);
      }
      else {
        dVar8 = dVar8 / auVar24._0_8_;
        local_188 = dVar8 * local_188;
        local_190 = dVar8 * local_190;
      }
      dVar2 = local_188;
      dVar8 = local_190;
      in_XMM4._8_8_ = auVar24._8_8_;
      in_XMM4._0_8_ = auVar24._0_8_ * __real_3fe0000000000000;
      cVar15 = (local_1a8 == 0.0) + (in_XMM4._0_8_ == 0.0);
      local_180 = in_XMM4._0_8_;
      if (cVar15 == '\x02') {
        dVar19 = (dVar9 - local_1c8._s_0.Y) * (dVar9 - local_1c8._s_0.Y) +
                 (dVar1 - local_1c8._s_0.X) * (dVar1 - local_1c8._s_0.X);
LAB_14cad5dbf:
        if (dVar19 <= 0.0) {
LAB_14cad5efa:
          if (**(char **)((longlong)this + 0x10) == '\0') {
            LOCK();
            bVar13 = **(char **)((longlong)this + 0x10) == '\0';
            if (bVar13) {
              **(char **)((longlong)this + 0x10) = '\x01';
            }
            UNLOCK();
            if (bVar13) {
              local_118 = 0;
              local_110 = 0;
              local_178._s_0.X = local_1c8._s_0.X;
              local_178._s_0.Y = local_1c8._s_0.Y;
              local_168 = local_1b8;
              dStack_160 = dStack_1b0;
              local_130 = local_180;
              local_128 = ___xmm_3e45798ee2308c3a0000000000000000;
              uStack_120 = _UNK_1529129e8;
              local_158 = local_1a8;
              local_150 = dVar1;
              dStack_148 = dVar9;
              local_140 = dVar8;
              dStack_138 = dVar2;
              UE::Geometry::TIntrSegment2Segment2<double>::Find
                        ((TIntrSegment2Segment2<double> *)&local_178._s_0);
              puVar6 = *(undefined8 **)((longlong)this + 0x18);
              *puVar6 = local_108;
              puVar6[1] = uStack_100;
              **(undefined8 **)((longlong)this + 0x20) = CONCAT44(uVar17,param_1);
              return;
            }
          }
        }
      }
      else {
        if (cVar15 == '\x01') {
          this_00 = &local_1c8;
          pTVar10 = (TVector2<double>_u_0 *)&local_1a0;
          if (local_1a8 == 0.0) {
            this_00 = (TVector2<double>_u_0 *)&local_1a0;
            pTVar10 = &local_1c8;
          }
          dVar19 = UE::Geometry::TSegment2<double>::DistanceSquared
                             ((TSegment2<double> *)&this_00->_s_0,(TVector2<double> *)&pTVar10->_s_0
                             );
          goto LAB_14cad5dbf;
        }
        dVar23 = dVar9 - local_1c8._s_0.Y;
        dVar22 = dVar1 - local_1c8._s_0.X;
        dVar19 = dVar11 * local_188 - dVar12 * local_190;
        if (__real_3cb0000000000000 <
            (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
          in_XMM5._0_8_ = __real_3ff0000000000000 / dVar19;
          in_XMM5._8_8_ = 0;
          dVar19 = (dVar22 * local_188 - dVar23 * local_190) * in_XMM5._0_8_;
          if ((local_1a8 <
               (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
             (dVar19 = (dVar22 * dVar12 - dVar23 * dVar11) * in_XMM5._0_8_,
             in_XMM4._0_8_ <
             (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)))
          goto LAB_14cad5f13;
          goto LAB_14cad5efa;
        }
        auVar21._0_8_ = dVar22 * dVar22 + dVar23 * dVar23;
        auVar21._8_8_ = 0;
        auVar24 = sqrtpd(in_XMM5,auVar21);
        if (auVar24._0_8_ <= 0.0) {
          dVar19 = 0.0;
          dVar20 = 0.0;
        }
        else {
          dVar19 = __real_3ff0000000000000 / auVar24._0_8_;
          dVar20 = dVar22 * dVar19;
          dVar19 = dVar23 * dVar19;
        }
        in_XMM5._0_8_ = dVar19 * local_190;
        in_XMM5._8_8_ = 0;
        dVar19 = dVar20 * local_188 - in_XMM5._0_8_;
        if ((double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3cb0000000000000) {
          dVar19 = dVar22 * dVar11 + dVar23 * dVar12;
          if ((dVar19 - in_XMM4._0_8_ <= local_1a8) &&
             ((double)CONCAT44((uint)((ulonglong)local_1a8 >> 0x20) ^
                               __xmm_80000000000000008000000000000000._4_4_,
                               SUB84(local_1a8,0) ^ (uint)__xmm_80000000000000008000000000000000) <=
              dVar19 + in_XMM4._0_8_)) goto LAB_14cad5efa;
        }
      }
LAB_14cad5f13:
      uVar17 = uVar17 + 1;
      uVar16 = uVar16 + 1;
      lVar18 = lVar18 + 0x10;
    } while ((int)uVar17 < **(int **)((longlong)this + 8) + -1);
  }
  return;
}

// FindPolylineSegmentIntersection @ 14cb09c70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UELocal::FindPolylineSegmentIntersection
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
          TSegment2<double> *param_2,TVector2<double> *param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  double dVar17;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar18 [16];
  TVector2<double>_u_0 local_198;
  double local_188;
  double dStack_180;
  double local_178;
  TVector2<double>_u_0 local_168;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  double local_f8;
  double dStack_f0;
  
  dVar8 = __real_3cb0000000000000;
  dVar7 = __real_3fe0000000000000;
  dVar6 = __real_3ff0000000000000;
  iVar16 = param_1->ArrayNum + -1;
  if (0 < iVar16) {
    lVar14 = 0;
    uVar13 = 0;
    do {
      uVar15 = uVar13 + 1;
      uVar12 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      uVar12 = 0;
      if ((int)uVar13 < param_1->ArrayNum) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      dVar1 = *(double *)(pFVar3 + lVar14 + 0x10);
      dVar2 = *(double *)(pFVar3 + lVar14 + 0x18);
      dVar17 = dVar1 - *(double *)(pFVar4 + lVar14);
      dStack_180 = dVar2 - *(double *)(pFVar4 + lVar14 + 8);
      dVar1 = (*(double *)(pFVar4 + lVar14) + dVar1) * dVar7;
      dVar2 = (*(double *)(pFVar4 + lVar14 + 8) + dVar2) * dVar7;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = dVar17 * dVar17 + dStack_180 * dStack_180;
      auVar18 = sqrtpd(unaff_XMM8,auVar18);
      if (auVar18._0_8_ <= 0.0) {
        local_188 = 0.0;
        dStack_180 = 0.0;
        auVar18 = ZEXT816(0);
      }
      else {
        local_188 = dVar6 / auVar18._0_8_;
        dStack_180 = local_188 * dStack_180;
        local_188 = local_188 * dVar17;
      }
      dVar9 = dStack_180;
      dVar17 = local_188;
      unaff_XMM8._8_8_ = auVar18._8_8_;
      unaff_XMM8._0_8_ = auVar18._0_8_ * dVar7;
      local_198._s_0.X = dVar1;
      local_198._s_0.Y = dVar2;
      local_178 = unaff_XMM8._0_8_;
      bVar10 = UE::Geometry::TSegment2<double>::Intersects
                         (param_2,(TSegment2<double> *)&local_198._s_0,dVar8,0.0);
      if (bVar10) {
        local_168._s_0.X = (param_2->Center).field0_0x0._s_0.X;
        local_168._s_0.Y = (param_2->Center).field0_0x0._s_0.Y;
        local_158 = (param_2->Direction).field0_0x0._s_0.X;
        dStack_150 = (param_2->Direction).field0_0x0._s_0.Y;
        local_108 = 0;
        local_148 = param_2->Extent;
        local_118 = ___xmm_3e45798ee2308c3a0000000000000000;
        uStack_110 = _UNK_1529129e8;
        local_100 = 0;
        local_140 = dVar1;
        local_138 = dVar2;
        local_130 = dVar17;
        local_128 = dVar9;
        local_120 = unaff_XMM8._0_8_;
        UE::Geometry::TIntrSegment2Segment2<double>::Find
                  ((TIntrSegment2Segment2<double> *)&local_168._s_0);
        (param_3->field0_0x0)._s_0.X = local_f8;
        (param_3->field0_0x0)._s_0.Y = dStack_f0;
        *param_4 = uVar13;
        return true;
      }
      lVar14 = lVar14 + 0x10;
      uVar13 = uVar15;
    } while ((int)uVar15 < iVar16);
  }
  return false;
}

// GetLoopRepresentativeVerts @ 14cb98280

FIndex2i __cdecl
UELocal::GetLoopRepresentativeVerts(TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FIndex2i FVar4;
  longlong *in_RDX;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  iVar1 = (int)in_RDX[1];
  if ((iVar1 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    FVar4.field0_0x0 = (FIndex2i_u_0)(*pcVar2)();
    return (FIndex2i)FVar4.field0_0x0;
  }
  uVar5 = iVar1 - 2;
  iVar9 = *(int *)*in_RDX;
  uVar6 = 0;
  if ((int)uVar5 < (int)in_RDX[1]) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    FVar4.field0_0x0 = (FIndex2i_u_0)(*pcVar2)();
    return (FIndex2i)FVar4.field0_0x0;
  }
  uVar6 = 1;
  iVar7 = *(int *)(*in_RDX + (longlong)(int)uVar5 * 4);
  if (((int)in_RDX[1] < 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    FVar4.field0_0x0 = (FIndex2i_u_0)(*pcVar2)();
    return (FIndex2i)FVar4.field0_0x0;
  }
  if (*(int *)(*in_RDX + 4) < iVar7) {
    iVar7 = *(int *)(*in_RDX + 4);
  }
  if (1 < iVar1 + -1) {
    lVar8 = 4;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (int)in_RDX[1]) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        FVar4.field0_0x0 = (FIndex2i_u_0)(*pcVar2)();
        return (FIndex2i)FVar4.field0_0x0;
      }
      if (*(int *)(lVar8 + *in_RDX) < iVar9) {
        uVar5 = 0;
        if ((int)uVar6 < (int)in_RDX[1]) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          FVar4.field0_0x0 = (FIndex2i_u_0)(*pcVar2)();
          return (FIndex2i)FVar4.field0_0x0;
        }
        iVar9 = *(int *)(lVar8 + *in_RDX);
        uVar5 = 0;
        if ((int)(uVar6 + 1) < (int)in_RDX[1]) {
          uVar5 = ~(uVar6 + 1) >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          FVar4.field0_0x0 = (FIndex2i_u_0)(*pcVar2)();
          return (FIndex2i)FVar4.field0_0x0;
        }
        iVar7 = *(int *)(lVar8 + 4 + *in_RDX);
        uVar5 = 0;
        if ((int)(uVar6 - 1) < (int)in_RDX[1]) {
          uVar5 = -uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          FVar4.field0_0x0 = (FIndex2i_u_0)(*pcVar2)();
          return (FIndex2i)FVar4.field0_0x0;
        }
        if (*(int *)(lVar8 + -4 + *in_RDX) < iVar7) {
          iVar7 = *(int *)(lVar8 + -4 + *in_RDX);
        }
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 4;
    } while ((int)uVar6 < iVar1 + -1);
  }
  *(int *)((longlong)&(param_1->AllocatorInstance).Data + 4) = iVar7;
  *(int *)&(param_1->AllocatorInstance).Data = iVar9;
  return (FIndex2i)(FIndex2i_u_0)param_1;
}

