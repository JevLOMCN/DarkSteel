// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// CheckISPC @ 143a0a870

void __cdecl Chaos::Private::FPBDCollisionSolverJacobiHelper::CheckISPC(void)

{
  return;
}

// SolvePositionNoFriction @ 143a15e90

/* WARNING: Type propagation algorithm not settling */

void __cdecl
Chaos::Private::FPBDCollisionSolverJacobiHelper::SolvePositionNoFriction
          (TArrayView<Chaos::Private::FPBDCollisionSolverJacobi,int> *param_1,float param_2,
          float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  float *pfVar20;
  FSolverBody *pFVar21;
  code *pcVar22;
  uint uVar23;
  bool bVar24;
  FPBDCollisionSolverJacobiManifoldPoints *pFVar25;
  int iVar26;
  longlong lVar27;
  FPBDCollisionSolverJacobi *pFVar28;
  FPBDCollisionSolverJacobi *pFVar29;
  FConstraintSolverBody *pFVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float local_res8;
  float local_res20;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  
  pFVar29 = param_1->DataPtr;
  pFVar28 = pFVar29 + param_1->ArrayNum;
  if (pFVar29 != pFVar28) {
    pFVar25 = &(pFVar29->State).ManifoldPoints;
    pFVar30 = (pFVar29->State).SolverBodies + 1;
    fVar37 = __real_00800000;
    do {
      iVar26 = 0;
      fVar31 = CVars::Chaos_PBDCollisionSolver_JacobiStiffness *
               *(float *)((longlong)(pFVar25 + -1) + 0x2c0);
      local_ec = 0.0;
      local_e8 = 0.0;
      fVar44 = 0.0;
      local_e4 = 0.0;
      fVar41 = 0.0;
      local_res8 = 0.0;
      fVar42 = 0.0;
      local_res20 = 0.0;
      fVar43 = 0.0;
      local_f8 = 0.0;
      local_f4 = 0.0;
      local_f0 = 0.0;
      fVar38 = 0.0;
      fVar32 = 0.0;
      fVar33 = 0.0;
      fVar34 = 0.0;
      fVar35 = 0.0;
      fVar36 = 0.0;
      fVar39 = 0.0;
      fVar40 = 0.0;
      if (0 < (pFVar25->ManifoldPoints).NumElements) {
        lVar27 = 0;
        do {
          if ((*(longlong *)((longlong)(pFVar25 + -1) + 0x2dc) == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\SolverBody.h"
                                  ,0x246,L""), bVar24)) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
          pfVar20 = *(float **)((longlong)(pFVar25 + -1) + 0x2dc);
          if ((pFVar30[-1].Body == (FSolverBody *)0x0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\SolverBody.h"
                                  ,0x246,L""), bVar24)) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
          pFVar21 = pFVar30[-1].Body;
          if (((pFVar25->ManifoldPoints).NumElements <= iVar26) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < NumElements",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                  ,0x68,L""), bVar24)) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
          fVar37 = *(float *)(&(pFVar25->ManifoldPoints).Elements[0].RelativeContactPosition0.
                               field_0x4 + lVar27);
          fVar38 = *(float *)(&(pFVar25->ManifoldPoints).Elements[0].RelativeContactPosition0.
                               field_0x0 + lVar27);
          fVar32 = *(float *)&(pFVar21->State).DQ;
          fVar33 = *(float *)&(pFVar21->State).DQ.field_0x4;
          fVar34 = *(float *)(&(pFVar25->ManifoldPoints).Elements[0].RelativeContactPosition0.
                               field_0x8 + lVar27);
          fVar35 = *(float *)&(pFVar21->State).DQ.field_0x8;
          fVar36 = *(float *)&(pFVar21->State).DQ.field_0x8;
          fVar39 = *(float *)&(pFVar21->State).DQ.field_0x4;
          fVar40 = *(float *)&(pFVar21->State).DQ;
          fVar1 = *(float *)&(pFVar21->State).DP.field_0x8;
          fVar2 = *(float *)&(pFVar21->State).DP;
          fVar3 = *(float *)&(pFVar21->State).DP.field_0x4;
          if (((pFVar25->ManifoldPoints).NumElements <= iVar26) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < NumElements",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                  ,0x68,L""), bVar24)) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
          fVar4 = *(float *)(&(pFVar25->ManifoldPoints).Elements[0].RelativeContactPosition1.
                              field_0x4 + lVar27);
          fVar5 = *(float *)(&(pFVar25->ManifoldPoints).Elements[0].RelativeContactPosition1.
                              field_0x0 + lVar27);
          fVar6 = pfVar20[4];
          fVar7 = pfVar20[5];
          fVar8 = *(float *)(&(pFVar25->ManifoldPoints).Elements[0].RelativeContactPosition1.
                              field_0x8 + lVar27);
          fVar9 = pfVar20[6];
          fVar10 = pfVar20[6];
          fVar11 = pfVar20[5];
          fVar12 = pfVar20[4];
          fVar13 = pfVar20[2];
          fVar14 = *pfVar20;
          fVar15 = pfVar20[1];
          if (((pFVar25->ManifoldPoints).NumElements <= iVar26) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < NumElements",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                  ,0x68,L""), bVar24)) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
          fVar16 = *(float *)(&(pFVar25->ManifoldPoints).Elements[0].ContactNormal.field_0x8 +
                             lVar27);
          fVar17 = *(float *)(&(pFVar25->ManifoldPoints).Elements[0].ContactNormal.field_0x0 +
                             lVar27);
          fVar18 = *(float *)(&(pFVar25->ManifoldPoints).Elements[0].ContactNormal.field_0x4 +
                             lVar27);
          if (((pFVar25->ManifoldPoints).NumElements <= iVar26) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < NumElements",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                  ,0x68,L""), bVar24)) {
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
          uVar23 = __xmm_80000000800000008000000080000000;
          fVar37 = (((fVar37 * fVar32 - fVar38 * fVar33) + fVar1) -
                   ((fVar4 * fVar6 - fVar5 * fVar7) + fVar13)) * fVar16 +
                   *(float *)((longlong)&(pFVar25->ManifoldPoints).Elements[0].ContactDeltaNormal +
                             lVar27) +
                   (((fVar38 * fVar35 - fVar34 * fVar40) + fVar3) -
                   ((fVar5 * fVar9 - fVar8 * fVar12) + fVar15)) * fVar18 +
                   (((fVar34 * fVar39 - fVar37 * fVar36) + fVar2) -
                   ((fVar8 * fVar11 - fVar4 * fVar10) + fVar14)) * fVar17;
          fVar38 = fVar37;
          if ((0.0 < param_3) &&
             (fVar38 = (float)((uint)param_3 ^ __xmm_80000000800000008000000080000000),
             (float)((uint)param_3 ^ __xmm_80000000800000008000000080000000) <= fVar37)) {
            fVar38 = fVar37;
          }
          if (fVar38 < 0.0) {
LAB_143a1621d:
            if (((pFVar25->ManifoldPoints).NumElements <= iVar26) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < NumElements",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                    ,0x60,L""), bVar24)) {
              pcVar22 = (code *)swi(3);
              (*pcVar22)();
              return;
            }
            fVar38 = fVar38 * fVar31 *
                     *(float *)((longlong)&(pFVar25->ManifoldPoints).Elements[0].ContactMassNormal +
                               lVar27);
            if (((pFVar25->ManifoldPoints).NumElements <= iVar26) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < NumElements",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                    ,0x60,L""), bVar24)) {
              pcVar22 = (code *)swi(3);
              (*pcVar22)();
              return;
            }
            iVar19 = (pFVar25->ManifoldPoints).NumElements;
            if (*(float *)((longlong)&(pFVar25->ManifoldPoints).Elements[0].NetPushOutNormal +
                          lVar27) - fVar38 <= 0.0) {
              if ((iVar19 <= iVar26) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x60,L""), bVar24)) {
                pcVar22 = (code *)swi(3);
                (*pcVar22)();
                return;
              }
              fVar38 = *(float *)((longlong)&(pFVar25->ManifoldPoints).Elements[0].NetPushOutNormal
                                 + lVar27);
              if (((pFVar25->ManifoldPoints).NumElements <= iVar26) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x60,L""), bVar24)) {
                pcVar22 = (code *)swi(3);
                (*pcVar22)();
                return;
              }
              *(undefined4 *)
               ((longlong)&(pFVar25->ManifoldPoints).Elements[0].NetPushOutNormal + lVar27) = 0;
            }
            else {
              if ((iVar19 <= iVar26) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x60,L""), bVar24)) {
                pcVar22 = (code *)swi(3);
                (*pcVar22)();
                return;
              }
              *(float *)((longlong)&(pFVar25->ManifoldPoints).Elements[0].NetPushOutNormal + lVar27)
                   = *(float *)((longlong)&(pFVar25->ManifoldPoints).Elements[0].NetPushOutNormal +
                               lVar27) - fVar38;
            }
            fVar37 = __real_00800000;
            fVar38 = (float)((uint)fVar38 ^ uVar23);
            if (__real_00800000 <
                *(float *)((longlong)(pFVar25 + -1) + 0x2d4) *
                *(float *)((longlong)(pFVar25 + -1) + 0x2cc) * ((pFVar30[-1].Body)->State).InvM) {
              if (((pFVar25->ManifoldPoints).NumElements <= iVar26) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x60,L""), bVar24)) {
                pcVar22 = (code *)swi(3);
                (*pcVar22)();
                return;
              }
              fVar32 = fVar38 * ((pFVar30[-1].Body)->State).InvM *
                       *(float *)((longlong)(pFVar25 + -1) + 0x2d4) *
                       *(float *)((longlong)(pFVar25 + -1) + 0x2cc);
              local_ec = local_ec +
                         fVar32 * *(float *)(&(pFVar25->ManifoldPoints).Elements[0].ContactNormal.
                                              field_0x0 + lVar27);
              local_e8 = local_e8 +
                         fVar32 * *(float *)(&(pFVar25->ManifoldPoints).Elements[0].ContactNormal.
                                              field_0x4 + lVar27);
              local_e4 = local_e4 +
                         fVar32 * *(float *)(&(pFVar25->ManifoldPoints).Elements[0].ContactNormal.
                                              field_0x8 + lVar27);
              if (((pFVar25->ManifoldPoints).NumElements <= iVar26) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x60,L""), bVar24)) {
                pcVar22 = (code *)swi(3);
                (*pcVar22)();
                return;
              }
              fVar44 = fVar44 + fVar38 * *(float *)(&(pFVar25->ManifoldPoints).Elements[0].
                                                     ContactNormalAngular0.field_0x0 + lVar27);
              local_f4 = local_f4 +
                         fVar38 * *(float *)(&(pFVar25->ManifoldPoints).Elements[0].
                                              ContactNormalAngular0.field_0x4 + lVar27);
              local_f0 = local_f0 +
                         fVar38 * *(float *)(&(pFVar25->ManifoldPoints).Elements[0].
                                              ContactNormalAngular0.field_0x8 + lVar27);
            }
            if (fVar37 < *(float *)((longlong)(pFVar25 + -1) + 0x2ec) *
                         *(float *)((longlong)(pFVar25 + -1) + 0x2e4) *
                         *(float *)(*(longlong *)((longlong)(pFVar25 + -1) + 0x2dc) + 0x134)) {
              if (((pFVar25->ManifoldPoints).NumElements <= iVar26) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x60,L""), bVar24)) {
                pcVar22 = (code *)swi(3);
                (*pcVar22)();
                return;
              }
              fVar32 = fVar38 * *(float *)(*(longlong *)((longlong)(pFVar25 + -1) + 0x2dc) + 0x134)
                       * *(float *)((longlong)(pFVar25 + -1) + 0x2e4) *
                         *(float *)((longlong)(pFVar25 + -1) + 0x2ec);
              local_res8 = local_res8 -
                           fVar32 * *(float *)&(pFVar25->ManifoldPoints).Elements[iVar26].
                                               ContactNormal;
              local_res20 = local_res20 -
                            fVar32 * *(float *)&(pFVar25->ManifoldPoints).Elements[iVar26].
                                                ContactNormal.field_0x4;
              local_f8 = local_f8 -
                         fVar32 * *(float *)&(pFVar25->ManifoldPoints).Elements[iVar26].
                                             ContactNormal.field_0x8;
              if (((pFVar25->ManifoldPoints).NumElements <= iVar26) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x60,L""), bVar24)) {
                pcVar22 = (code *)swi(3);
                (*pcVar22)();
                return;
              }
              fVar41 = fVar41 - fVar38 * *(float *)&(pFVar25->ManifoldPoints).Elements[iVar26].
                                                    ContactNormalAngular1;
              fVar42 = fVar42 - fVar38 * *(float *)&(pFVar25->ManifoldPoints).Elements[iVar26].
                                                    ContactNormalAngular1.field_0x4;
              fVar43 = fVar43 - fVar38 * *(float *)&(pFVar25->ManifoldPoints).Elements[iVar26].
                                                    ContactNormalAngular1.field_0x8;
            }
          }
          else {
            if (((pFVar25->ManifoldPoints).NumElements <= iVar26) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < NumElements",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                    ,0x60,L""), bVar24)) {
              pcVar22 = (code *)swi(3);
              (*pcVar22)();
              return;
            }
            fVar37 = __real_00800000;
            if (__real_322bcc77 <
                *(float *)((longlong)&(pFVar25->ManifoldPoints).Elements[0].NetPushOutNormal +
                          lVar27)) goto LAB_143a1621d;
          }
          iVar26 = iVar26 + 1;
          lVar27 = lVar27 + 0xbc;
          fVar38 = local_f4;
          fVar32 = local_f0;
          fVar33 = local_ec;
          fVar34 = local_e8;
          fVar35 = local_e4;
          fVar36 = local_res8;
          fVar39 = local_res20;
          fVar40 = local_f8;
        } while (iVar26 < (pFVar25->ManifoldPoints).NumElements);
      }
      pFVar21 = pFVar30[-1].Body;
      if (fVar37 < *(float *)((longlong)(pFVar25 + -1) + 0x2cc) *
                   *(float *)((longlong)(pFVar25 + -1) + 0x2d4) * (pFVar21->State).InvM) {
        fVar31 = *(float *)&(pFVar21->State).DP.field_0x4;
        fVar1 = *(float *)&(pFVar21->State).DP.field_0x8;
        *(float *)&(pFVar21->State).DP = fVar33 + *(float *)&(pFVar21->State).DP;
        *(float *)&(pFVar21->State).DP.field_0x4 = fVar34 + fVar31;
        *(float *)&(pFVar21->State).DP.field_0x8 = fVar35 + fVar1;
        pFVar21 = pFVar30[-1].Body;
        fVar33 = *(float *)&(pFVar21->State).DQ.field_0x4;
        fVar34 = *(float *)&(pFVar21->State).DQ.field_0x8;
        *(float *)&(pFVar21->State).DQ = fVar44 + *(float *)&(pFVar21->State).DQ;
        *(float *)&(pFVar21->State).DQ.field_0x4 = fVar38 + fVar33;
        *(float *)&(pFVar21->State).DQ.field_0x8 = fVar32 + fVar34;
      }
      pfVar20 = *(float **)((longlong)(pFVar25 + -1) + 0x2dc);
      if (fVar37 < *(float *)((longlong)(pFVar25 + -1) + 0x2e4) *
                   *(float *)((longlong)(pFVar25 + -1) + 0x2ec) * pfVar20[0x4d]) {
        *pfVar20 = fVar36 + *pfVar20;
        pfVar20[1] = fVar39 + pfVar20[1];
        pfVar20[2] = fVar40 + pfVar20[2];
        lVar27 = *(longlong *)((longlong)(pFVar25 + -1) + 0x2dc);
        *(float *)(lVar27 + 0x10) = fVar41 + *(float *)(lVar27 + 0x10);
        *(float *)(lVar27 + 0x14) = fVar42 + *(float *)(lVar27 + 0x14);
        *(float *)(lVar27 + 0x18) = fVar43 + *(float *)(lVar27 + 0x18);
      }
      pFVar29 = pFVar29 + 1;
      pFVar25 = (FPBDCollisionSolverJacobiManifoldPoints *)((longlong)(pFVar25 + 1) + 0x44);
      pFVar30 = (FConstraintSolverBody *)((longlong)(pFVar30 + 0x22) + 8);
    } while (pFVar29 != pFVar28);
  }
  return;
}

// SolvePositionWithFriction @ 143a174a0

/* WARNING: Type propagation algorithm not settling */

void __cdecl
Chaos::Private::FPBDCollisionSolverJacobiHelper::SolvePositionWithFriction
          (TArrayView<Chaos::Private::FPBDCollisionSolverJacobi,int> *param_1,float param_2,
          float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  FSolverBody *pFVar23;
  FSolverBody *pFVar24;
  code *pcVar25;
  uint uVar26;
  bool bVar27;
  FManifoldPoint *pFVar28;
  FPBDCollisionSolverJacobi *pFVar29;
  longlong lVar30;
  int iVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  char *pcVar35;
  int iVar36;
  FPBDCollisionSolverJacobi *pFVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float local_res8;
  float local_res20;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  char local_f0 [4];
  float local_ec;
  float local_e0;
  float local_dc;
  
  pFVar37 = param_1->DataPtr;
  pFVar29 = pFVar37 + param_1->ArrayNum;
  do {
    if (pFVar37 == pFVar29) {
      return;
    }
    iVar36 = 0;
    fVar44 = 0.0;
    iVar31 = 0;
    local_f0[0] = '\0';
    local_f0[1] = '\0';
    local_f0[2] = '\0';
    local_f0[3] = '\0';
    local_res8 = 0.0;
    local_res20 = 0.0;
    local_ec = CVars::Chaos_PBDCollisionSolver_JacobiStiffness * (pFVar37->State).Stiffness;
    local_dc = (pFVar37->State).DynamicFriction;
    local_e0 = (pFVar37->State).StaticFriction;
    local_118 = 0.0;
    local_108 = 0.0;
    local_104 = 0.0;
    local_100 = 0.0;
    local_114 = 0.0;
    local_110 = 0.0;
    local_10c = 0.0;
    if (0 < (pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements) {
      pcVar35 = local_f0;
      lVar33 = 0;
      fVar45 = fVar44;
      fVar46 = fVar44;
      fVar47 = fVar44;
      do {
        if (((pFVar37->State).SolverBodies[1].Body == (FSolverBody *)0x0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\SolverBody.h"
                                ,0x246,L""), bVar27)) {
          pcVar25 = (code *)swi(3);
          (*pcVar25)();
          return;
        }
        pFVar23 = (pFVar37->State).SolverBodies[1].Body;
        if (((pFVar37->State).SolverBodies[0].Body == (FSolverBody *)0x0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\SolverBody.h"
                                ,0x246,L""), bVar27)) {
          pcVar25 = (code *)swi(3);
          (*pcVar25)();
          return;
        }
        pFVar24 = (pFVar37->State).SolverBodies[0].Body;
        if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < NumElements",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                ,0x68,L""), bVar27)) {
          pcVar25 = (code *)swi(3);
          (*pcVar25)();
          return;
        }
        fVar42 = *(float *)&(pFVar24->State).DQ.field_0x8;
        fVar41 = *(float *)&(pFVar24->State).DQ.field_0x4;
        fVar38 = *(float *)&(pFVar24->State).DQ;
        fVar39 = *(float *)((longlong)
                            &(pFVar37->State).ManifoldPoints.ManifoldPoints.Elements[0].
                             RelativeContactPosition0.field_0x0 + lVar33);
        fVar40 = *(float *)((longlong)
                            &(((FPBDCollisionSolverJacobiManifoldPoints *)
                              ((pFVar37->State).SolverBodies + 2))->ManifoldPoints).Elements[0].
                             RelativeContactPosition0 + lVar33 + 4U);
        fVar43 = *(float *)((longlong)
                            &(((FPBDCollisionSolverJacobiManifoldPoints *)
                              ((pFVar37->State).SolverBodies + 2))->ManifoldPoints).Elements[0].
                             RelativeContactPosition0 + lVar33 + 8U);
        fVar1 = *(float *)((longlong)
                           &(pFVar37->State).ManifoldPoints.ManifoldPoints.Elements[0].
                            RelativeContactPosition0.field_0x0 + lVar33);
        fVar2 = *(float *)((longlong)
                           &(((FPBDCollisionSolverJacobiManifoldPoints *)
                             ((pFVar37->State).SolverBodies + 2))->ManifoldPoints).Elements[0].
                            RelativeContactPosition0 + lVar33 + 8U);
        fVar3 = *(float *)((longlong)
                           &(((FPBDCollisionSolverJacobiManifoldPoints *)
                             ((pFVar37->State).SolverBodies + 2))->ManifoldPoints).Elements[0].
                            RelativeContactPosition0 + lVar33 + 4U);
        fVar4 = *(float *)&(pFVar24->State).DP.field_0x8;
        fVar5 = *(float *)&(pFVar24->State).DP.field_0x4;
        fVar6 = *(float *)&(pFVar24->State).DP;
        if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < NumElements",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                ,0x68,L""), bVar27)) {
          pcVar25 = (code *)swi(3);
          (*pcVar25)();
          return;
        }
        fVar7 = *(float *)((longlong)
                           &(((FPBDCollisionSolverJacobiManifoldPoints *)
                             ((pFVar37->State).SolverBodies + 2))->ManifoldPoints).Elements[0].
                            RelativeContactPosition1 + lVar33 + 4U);
        fVar8 = *(float *)((longlong)
                           &(((FPBDCollisionSolverJacobiManifoldPoints *)
                             ((pFVar37->State).SolverBodies + 2))->ManifoldPoints).Elements[0].
                            RelativeContactPosition1 + lVar33);
        fVar9 = *(float *)&(pFVar23->State).DQ;
        fVar10 = *(float *)&(pFVar23->State).DQ.field_0x4;
        fVar11 = *(float *)((longlong)((pFVar37->State).SolverBodies + 3) + lVar33);
        fVar12 = *(float *)&(pFVar23->State).DQ.field_0x8;
        fVar13 = *(float *)&(pFVar23->State).DQ.field_0x8;
        fVar14 = *(float *)&(pFVar23->State).DQ.field_0x4;
        fVar15 = *(float *)&(pFVar23->State).DQ;
        fVar16 = *(float *)&(pFVar23->State).DP.field_0x8;
        fVar17 = *(float *)&(pFVar23->State).DP;
        fVar18 = *(float *)&(pFVar23->State).DP.field_0x4;
        if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < NumElements",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                ,0x68,L""), bVar27)) {
          pcVar25 = (code *)swi(3);
          (*pcVar25)();
          return;
        }
        fVar19 = *(float *)((longlong)((pFVar37->State).SolverBodies + 3) + lVar33 + 0xc);
        fVar20 = *(float *)((longlong)((pFVar37->State).SolverBodies + 3) + lVar33 + 4);
        fVar21 = *(float *)((longlong)((pFVar37->State).SolverBodies + 3) + lVar33 + 8);
        if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < NumElements",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                ,0x68,L""), bVar27)) {
          pcVar25 = (code *)swi(3);
          (*pcVar25)();
          return;
        }
        uVar26 = __xmm_80000000800000008000000080000000;
        fVar41 = (((fVar41 * fVar43 - fVar42 * fVar3) + fVar6) -
                 ((fVar11 * fVar14 - fVar7 * fVar13) + fVar17)) * fVar20 +
                 *(float *)((longlong)((pFVar37->State).SolverBodies + 4) + lVar33 + 0x10) +
                 (((fVar42 * fVar39 - fVar38 * fVar2) + fVar5) -
                 ((fVar8 * fVar12 - fVar11 * fVar15) + fVar18)) * fVar21 +
                 (((fVar38 * fVar40 - fVar41 * fVar1) + fVar4) -
                 ((fVar7 * fVar9 - fVar8 * fVar10) + fVar16)) * fVar19;
        fVar42 = fVar41;
        if ((0.0 < param_3) &&
           (fVar42 = (float)((uint)param_3 ^ __xmm_80000000800000008000000080000000),
           (float)((uint)param_3 ^ __xmm_80000000800000008000000080000000) <= fVar41)) {
          fVar42 = fVar41;
        }
        if (fVar42 < 0.0) {
LAB_143a17849:
          if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < NumElements",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                  ,0x60,L""), bVar27)) {
            pcVar25 = (code *)swi(3);
            (*pcVar25)();
            return;
          }
          fVar42 = fVar42 * local_ec *
                   *(float *)((longlong)
                              &(pFVar37->State).ManifoldPoints.ManifoldPoints.Elements[0].
                               ContactMassNormal + lVar33);
          if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < NumElements",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                  ,0x60,L""), bVar27)) {
            pcVar25 = (code *)swi(3);
            (*pcVar25)();
            return;
          }
          iVar22 = (pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements;
          if (*(float *)((longlong)
                         &(pFVar37->State).ManifoldPoints.ManifoldPoints.Elements[0].
                          NetPushOutNormal + lVar33) - fVar42 <= 0.0) {
            if ((iVar22 <= iVar31) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < NumElements",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                    ,0x60,L""), bVar27)) {
              pcVar25 = (code *)swi(3);
              (*pcVar25)();
              return;
            }
            fVar42 = *(float *)((longlong)
                                &(pFVar37->State).ManifoldPoints.ManifoldPoints.Elements[0].
                                 NetPushOutNormal + lVar33);
            if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < NumElements",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                    ,0x60,L""), bVar27)) {
              pcVar25 = (code *)swi(3);
              (*pcVar25)();
              return;
            }
            *(undefined4 *)
             ((longlong)&(pFVar37->State).ManifoldPoints.ManifoldPoints.Elements[0].NetPushOutNormal
             + lVar33) = 0;
          }
          else {
            if ((iVar22 <= iVar31) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < NumElements",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                    ,0x60,L""), bVar27)) {
              pcVar25 = (code *)swi(3);
              (*pcVar25)();
              return;
            }
            *(float *)((longlong)
                       &(pFVar37->State).ManifoldPoints.ManifoldPoints.Elements[0].NetPushOutNormal
                      + lVar33) =
                 *(float *)((longlong)
                            &(pFVar37->State).ManifoldPoints.ManifoldPoints.Elements[0].
                             NetPushOutNormal + lVar33) - fVar42;
          }
          fVar41 = __real_00800000;
          fVar42 = (float)((uint)fVar42 ^ uVar26);
          lVar30 = (longlong)iVar31;
          if (__real_00800000 <
              (pFVar37->State).SolverBodies[0].State.ShockPropagationScale *
              (pFVar37->State).SolverBodies[0].State.InvMScale *
              (((pFVar37->State).SolverBodies[0].Body)->State).InvM) {
            if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < NumElements",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                    ,0x60,L""), bVar27)) {
              pcVar25 = (code *)swi(3);
              (*pcVar25)();
              return;
            }
            fVar38 = fVar42 * (((pFVar37->State).SolverBodies[0].Body)->State).InvM *
                     (pFVar37->State).SolverBodies[0].State.ShockPropagationScale *
                     (pFVar37->State).SolverBodies[0].State.InvMScale;
            local_res8 = local_res8 +
                         fVar38 * *(float *)((longlong)((pFVar37->State).SolverBodies + 3) +
                                            lVar33 + 4);
            local_res20 = local_res20 +
                          fVar38 * *(float *)((longlong)((pFVar37->State).SolverBodies + 3) +
                                             lVar33 + 8);
            local_118 = local_118 +
                        fVar38 * *(float *)((longlong)((pFVar37->State).SolverBodies + 3) +
                                           lVar33 + 0xc);
            if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < NumElements",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                    ,0x60,L""), bVar27)) {
              pcVar25 = (code *)swi(3);
              (*pcVar25)();
              return;
            }
            local_114 = local_114 +
                        fVar42 * *(float *)((longlong)((pFVar37->State).SolverBodies + 5) +
                                           lVar33 + 8);
            local_110 = local_110 +
                        fVar42 * *(float *)((longlong)((pFVar37->State).SolverBodies + 5) +
                                           lVar33 + 0xc);
            local_10c = local_10c +
                        fVar42 * *(float *)((longlong)((pFVar37->State).SolverBodies + 5) +
                                           lVar33 + 0x10);
          }
          if (fVar41 < (pFVar37->State).SolverBodies[1].State.InvMScale *
                       (pFVar37->State).SolverBodies[1].State.ShockPropagationScale *
                       (((pFVar37->State).SolverBodies[1].Body)->State).InvM) {
            if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < NumElements",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                    ,0x60,L""), bVar27)) {
              pcVar25 = (code *)swi(3);
              (*pcVar25)();
              return;
            }
            fVar38 = fVar42 * (((pFVar37->State).SolverBodies[1].Body)->State).InvM *
                     (pFVar37->State).SolverBodies[1].State.ShockPropagationScale *
                     (pFVar37->State).SolverBodies[1].State.InvMScale;
            local_108 = local_108 -
                        fVar38 * *(float *)((longlong)(pFVar37->State).SolverBodies +
                                           lVar30 * 0xbc + 0x4c);
            local_104 = local_104 -
                        fVar38 * *(float *)((longlong)(pFVar37->State).SolverBodies +
                                           lVar30 * 0xbc + 0x50);
            local_100 = local_100 -
                        fVar38 * *(float *)((longlong)(pFVar37->State).SolverBodies +
                                           lVar30 * 0xbc + 0x54);
            if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < NumElements",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                    ,0x60,L""), bVar27)) {
              pcVar25 = (code *)swi(3);
              (*pcVar25)();
              return;
            }
            fVar45 = fVar45 - fVar42 * *(float *)((longlong)(pFVar37->State).SolverBodies +
                                                 lVar30 * 0xbc + 0xa4);
            fVar46 = fVar46 - fVar42 * *(float *)((longlong)(pFVar37->State).SolverBodies +
                                                 lVar30 * 0xbc + 0xa8);
            fVar44 = fVar44 - fVar42 * *(float *)((longlong)(pFVar37->State).SolverBodies +
                                                 lVar30 * 0xbc + 0xac);
          }
          if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < NumElements",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                  ,0x60,L""), bVar27)) {
            pcVar25 = (code *)swi(3);
            (*pcVar25)();
            return;
          }
          fVar47 = fVar47 + *(float *)((longlong)
                                       &(pFVar37->State).ManifoldPoints.ManifoldPoints.Elements[0].
                                        NetPushOutNormal + lVar33);
        }
        else {
          if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < NumElements",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                  ,0x60,L""), bVar27)) {
            pcVar25 = (code *)swi(3);
            (*pcVar25)();
            return;
          }
          fVar41 = __real_00800000;
          if (__real_322bcc77 <
              *(float *)((longlong)
                         &(pFVar37->State).ManifoldPoints.ManifoldPoints.Elements[0].
                          NetPushOutNormal + lVar33)) goto LAB_143a17849;
        }
        if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < NumElements",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                ,0x60,L""), bVar27)) {
          pcVar25 = (code *)swi(3);
          (*pcVar25)();
          return;
        }
        if (*(float *)((longlong)
                       &(pFVar37->State).ManifoldPoints.ManifoldPoints.Elements[0].NetPushOutNormal
                      + lVar33) == 0.0) {
          if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < NumElements",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                  ,0x60,L""), bVar27)) {
            pcVar25 = (code *)swi(3);
            (*pcVar25)();
            return;
          }
          if (*(float *)((longlong)
                         &(pFVar37->State).ManifoldPoints.ManifoldPoints.Elements[0].
                          NetPushOutTangentU + lVar33) != 0.0) goto LAB_143a17cda;
          if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < NumElements",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                  ,0x60,L""), bVar27)) {
            pcVar25 = (code *)swi(3);
            (*pcVar25)();
            return;
          }
          if (*(float *)((longlong)
                         &(pFVar37->State).ManifoldPoints.ManifoldPoints.Elements[0].
                          NetPushOutTangentV + lVar33) != 0.0) goto LAB_143a17cda;
        }
        else {
LAB_143a17cda:
          *pcVar35 = '\x01';
          iVar36 = iVar36 + 1;
        }
        iVar22 = (pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements;
        iVar31 = iVar31 + 1;
        lVar33 = lVar33 + 0xbc;
        pcVar35 = pcVar35 + 1;
      } while (iVar31 < iVar22);
      if (0 < iVar36) {
        uVar32 = 0;
        fVar47 = fVar47 / (float)iVar36;
        if (0 < iVar22) {
          pcVar35 = local_f0;
          uVar34 = uVar32;
          local_fc = fVar44;
          local_f8 = fVar45;
          local_f4 = fVar46;
          do {
            iVar31 = (int)uVar32;
            if (*pcVar35 != '\0') {
              if (((pFVar37->State).SolverBodies[1].Body == (FSolverBody *)0x0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\SolverBody.h"
                                      ,0x246,L""), bVar27)) {
                pcVar25 = (code *)swi(3);
                (*pcVar25)();
                return;
              }
              pFVar23 = (pFVar37->State).SolverBodies[1].Body;
              if (((pFVar37->State).SolverBodies[0].Body == (FSolverBody *)0x0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\SolverBody.h"
                                      ,0x246,L""), bVar27)) {
                pcVar25 = (code *)swi(3);
                (*pcVar25)();
                return;
              }
              pFVar24 = (pFVar37->State).SolverBodies[0].Body;
              if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x68,L""), bVar27)) {
                pcVar25 = (code *)swi(3);
                (*pcVar25)();
                return;
              }
              fVar44 = *(float *)((longlong)
                                  &(((FPBDCollisionSolverJacobiManifoldPoints *)
                                    ((pFVar37->State).SolverBodies + 2))->ManifoldPoints).Elements
                                   [0].RelativeContactPosition0 + uVar34 + 4);
              fVar42 = *(float *)((longlong)
                                  &(pFVar37->State).ManifoldPoints.ManifoldPoints.Elements[0].
                                   RelativeContactPosition0.field_0x0 + uVar34);
              fVar41 = *(float *)&(pFVar24->State).DQ;
              fVar38 = *(float *)&(pFVar24->State).DQ.field_0x4;
              fVar39 = *(float *)((longlong)
                                  &(((FPBDCollisionSolverJacobiManifoldPoints *)
                                    ((pFVar37->State).SolverBodies + 2))->ManifoldPoints).Elements
                                   [0].RelativeContactPosition0 + uVar34 + 8);
              fVar40 = *(float *)&(pFVar24->State).DQ.field_0x8;
              fVar43 = *(float *)&(pFVar24->State).DQ.field_0x8;
              fVar1 = *(float *)&(pFVar24->State).DQ.field_0x4;
              fVar2 = *(float *)&(pFVar24->State).DQ;
              fVar3 = *(float *)&(pFVar24->State).DP.field_0x8;
              fVar4 = *(float *)&(pFVar24->State).DP;
              fVar5 = *(float *)&(pFVar24->State).DP.field_0x4;
              if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x68,L""), bVar27)) {
                pcVar25 = (code *)swi(3);
                (*pcVar25)();
                return;
              }
              fVar6 = *(float *)((longlong)
                                 &(((FPBDCollisionSolverJacobiManifoldPoints *)
                                   ((pFVar37->State).SolverBodies + 2))->ManifoldPoints).Elements[0]
                                  .RelativeContactPosition1 + uVar34 + 4);
              fVar7 = *(float *)((longlong)
                                 &(((FPBDCollisionSolverJacobiManifoldPoints *)
                                   ((pFVar37->State).SolverBodies + 2))->ManifoldPoints).Elements[0]
                                  .RelativeContactPosition1 + uVar34);
              fVar8 = *(float *)((longlong)((pFVar37->State).SolverBodies + 3) + uVar34);
              fVar41 = ((fVar44 * fVar41 - fVar42 * fVar38) + fVar3) -
                       ((fVar6 * *(float *)&(pFVar23->State).DQ -
                        fVar7 * *(float *)&(pFVar23->State).DQ.field_0x4) +
                       *(float *)&(pFVar23->State).DP.field_0x8);
              fVar44 = ((fVar39 * fVar1 - fVar44 * fVar43) + fVar4) -
                       ((fVar8 * *(float *)&(pFVar23->State).DQ.field_0x4 -
                        fVar6 * *(float *)&(pFVar23->State).DQ.field_0x8) +
                       *(float *)&(pFVar23->State).DP);
              fVar42 = ((fVar42 * fVar40 - fVar39 * fVar2) + fVar5) -
                       ((fVar7 * *(float *)&(pFVar23->State).DQ.field_0x8 -
                        fVar8 * *(float *)&(pFVar23->State).DQ) +
                       *(float *)&(pFVar23->State).DP.field_0x4);
              if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x68,L""), bVar27)) {
                pcVar25 = (code *)swi(3);
                (*pcVar25)();
                return;
              }
              fVar38 = *(float *)((longlong)((pFVar37->State).SolverBodies + 4) + uVar34);
              fVar39 = *(float *)((longlong)((pFVar37->State).SolverBodies + 3) + uVar34 + 0x10);
              fVar40 = *(float *)((longlong)((pFVar37->State).SolverBodies + 3) + uVar34 + 0x14);
              if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x68,L""), bVar27)) {
                pcVar25 = (code *)swi(3);
                (*pcVar25)();
                return;
              }
              fVar43 = *(float *)((longlong)((pFVar37->State).SolverBodies + 4) + uVar34 + 0x14);
              if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x68,L""), bVar27)) {
                pcVar25 = (code *)swi(3);
                (*pcVar25)();
                return;
              }
              fVar1 = *(float *)((longlong)((pFVar37->State).SolverBodies + 4) + uVar34 + 4);
              fVar2 = *(float *)((longlong)((pFVar37->State).SolverBodies + 4) + uVar34 + 8);
              fVar3 = *(float *)((longlong)((pFVar37->State).SolverBodies + 4) + uVar34 + 0xc);
              if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x68,L""), bVar27)) {
                pcVar25 = (code *)swi(3);
                (*pcVar25)();
                return;
              }
              fVar4 = *(float *)((longlong)((pFVar37->State).SolverBodies + 5) + uVar34);
              if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x60,L""), bVar27)) {
                pcVar25 = (code *)swi(3);
                (*pcVar25)();
                return;
              }
              fVar5 = local_ec;
              uVar26 = __xmm_80000000800000008000000080000000;
              fVar38 = (float)((uint)(local_ec *
                                      *(float *)((longlong)
                                                 &(pFVar37->State).ManifoldPoints.ManifoldPoints.
                                                  Elements[0].ContactMassTangentU + uVar34) *
                                     (fVar41 * fVar38 + fVar43 + fVar44 * fVar39 + fVar42 * fVar40))
                              ^ __xmm_80000000800000008000000080000000);
              if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x60,L""), bVar27)) {
                pcVar25 = (code *)swi(3);
                (*pcVar25)();
                return;
              }
              fVar42 = (float)((uint)(fVar5 * *(float *)((longlong)
                                                         &(pFVar37->State).ManifoldPoints.
                                                          ManifoldPoints.Elements[0].
                                                          ContactMassTangentV + uVar34) *
                                     (fVar44 * fVar1 + fVar42 * fVar2 + fVar41 * fVar3 + fVar4)) ^
                              uVar26);
              if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x60,L""), bVar27)) {
                pcVar25 = (code *)swi(3);
                (*pcVar25)();
                return;
              }
              *(float *)((longlong)
                         &(pFVar37->State).ManifoldPoints.ManifoldPoints.Elements[0].
                          NetPushOutTangentU + uVar34) =
                   fVar38 + *(float *)((longlong)
                                       &(pFVar37->State).ManifoldPoints.ManifoldPoints.Elements[0].
                                        NetPushOutTangentU + uVar34);
              if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x60,L""), bVar27)) {
                pcVar25 = (code *)swi(3);
                (*pcVar25)();
                return;
              }
              *(float *)((longlong)
                         &(pFVar37->State).ManifoldPoints.ManifoldPoints.Elements[0].
                          NetPushOutTangentV + uVar34) =
                   fVar42 + *(float *)((longlong)
                                       &(pFVar37->State).ManifoldPoints.ManifoldPoints.Elements[0].
                                        NetPushOutTangentV + uVar34);
              if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x60,L""), bVar27)) {
                pcVar25 = (code *)swi(3);
                (*pcVar25)();
                return;
              }
              bVar27 = __real_38d1b717 <= fVar47;
              *(undefined4 *)
               ((longlong)
                &(pFVar37->State).ManifoldPoints.ManifoldPoints.Elements[0].StaticFrictionRatio +
               uVar34) = 0x3f800000;
              iVar36 = (pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements;
              if (bVar27) {
                fVar44 = fVar47 * local_e0;
                if ((iVar36 <= iVar31) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index < NumElements",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                        ,0x60,L""), bVar27)) {
                  pcVar25 = (code *)swi(3);
                  (*pcVar25)();
                  return;
                }
                fVar41 = *(float *)((longlong)
                                    &(pFVar37->State).ManifoldPoints.ManifoldPoints.Elements[0].
                                     NetPushOutTangentV + uVar34);
                if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index < NumElements",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                        ,0x60,L""), bVar27)) {
                  pcVar25 = (code *)swi(3);
                  (*pcVar25)();
                  return;
                }
                fVar39 = *(float *)((longlong)
                                    &(pFVar37->State).ManifoldPoints.ManifoldPoints.Elements[0].
                                     NetPushOutTangentU + uVar34);
                fVar41 = fVar39 * fVar39 + fVar41 * fVar41;
                if (fVar44 * fVar44 < fVar41) {
                  fVar39 = (__real_3f800000 / SQRT(fVar41)) * fVar47 * local_dc;
                  pFVar28 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                            ::operator[](&(pFVar37->State).ManifoldPoints.ManifoldPoints,iVar31);
                  fVar41 = fVar39 * pFVar28->NetPushOutTangentU;
                  pFVar28 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                            ::operator[](&(pFVar37->State).ManifoldPoints.ManifoldPoints,iVar31);
                  fVar44 = fVar39 * pFVar28->NetPushOutTangentV;
                  pFVar28 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                            ::operator[](&(pFVar37->State).ManifoldPoints.ManifoldPoints,iVar31);
                  fVar38 = fVar41 - (pFVar28->NetPushOutTangentU - fVar38);
                  pFVar28 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                            ::operator[](&(pFVar37->State).ManifoldPoints.ManifoldPoints,iVar31);
                  fVar42 = fVar44 - (pFVar28->NetPushOutTangentV - fVar42);
                  pFVar28 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                            ::operator[](&(pFVar37->State).ManifoldPoints.ManifoldPoints,iVar31);
                  pFVar28->NetPushOutTangentU = fVar41;
                  pFVar28 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                            ::operator[](&(pFVar37->State).ManifoldPoints.ManifoldPoints,iVar31);
                  pFVar28->NetPushOutTangentV = fVar44;
                  pFVar28 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                            ::operator[](&(pFVar37->State).ManifoldPoints.ManifoldPoints,iVar31);
                  pFVar28->StaticFrictionRatio = fVar39;
                }
              }
              else {
                if ((iVar36 <= iVar31) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index < NumElements",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                        ,0x60,L""), bVar27)) {
                  pcVar25 = (code *)swi(3);
                  (*pcVar25)();
                  return;
                }
                fVar38 = fVar38 - *(float *)((longlong)
                                             &(pFVar37->State).ManifoldPoints.ManifoldPoints.
                                              Elements[0].NetPushOutTangentU + uVar34);
                if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index < NumElements",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                        ,0x60,L""), bVar27)) {
                  pcVar25 = (code *)swi(3);
                  (*pcVar25)();
                  return;
                }
                fVar42 = fVar42 - *(float *)((longlong)
                                             &(pFVar37->State).ManifoldPoints.ManifoldPoints.
                                              Elements[0].NetPushOutTangentV + uVar34);
                if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index < NumElements",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                        ,0x60,L""), bVar27)) {
                  pcVar25 = (code *)swi(3);
                  (*pcVar25)();
                  return;
                }
                *(undefined4 *)
                 ((longlong)
                  &(pFVar37->State).ManifoldPoints.ManifoldPoints.Elements[0].NetPushOutTangentU +
                 uVar34) = 0;
                if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index < NumElements",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                        ,0x60,L""), bVar27)) {
                  pcVar25 = (code *)swi(3);
                  (*pcVar25)();
                  return;
                }
                *(undefined4 *)
                 ((longlong)
                  &(pFVar37->State).ManifoldPoints.ManifoldPoints.Elements[0].NetPushOutTangentV +
                 uVar34) = 0;
                if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index < NumElements",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                        ,0x60,L""), bVar27)) {
                  pcVar25 = (code *)swi(3);
                  (*pcVar25)();
                  return;
                }
                *(undefined4 *)
                 ((longlong)
                  &(pFVar37->State).ManifoldPoints.ManifoldPoints.Elements[0].StaticFrictionRatio +
                 uVar34) = 0;
              }
              if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x60,L""), bVar27)) {
                pcVar25 = (code *)swi(3);
                (*pcVar25)();
                return;
              }
              fVar44 = *(float *)((longlong)((pFVar37->State).SolverBodies + 3) + uVar34 + 0x10);
              fVar41 = *(float *)((longlong)((pFVar37->State).SolverBodies + 3) + uVar34 + 0x14);
              fVar39 = *(float *)((longlong)((pFVar37->State).SolverBodies + 4) + uVar34);
              if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x60,L""), bVar27)) {
                pcVar25 = (code *)swi(3);
                (*pcVar25)();
                return;
              }
              fVar40 = fVar42 * *(float *)((longlong)((pFVar37->State).SolverBodies + 4) +
                                          uVar34 + 0xc) + fVar38 * fVar39;
              fVar39 = (pFVar37->State).SolverBodies[0].State.ShockPropagationScale *
                       (pFVar37->State).SolverBodies[0].State.InvMScale *
                       (((pFVar37->State).SolverBodies[0].Body)->State).InvM;
              fVar43 = fVar42 * *(float *)((longlong)((pFVar37->State).SolverBodies + 4) +
                                          uVar34 + 8) + fVar38 * fVar41;
              fVar41 = fVar42 * *(float *)((longlong)((pFVar37->State).SolverBodies + 4) +
                                          uVar34 + 4) + fVar38 * fVar44;
              if (__real_00800000 < fVar39) {
                local_res8 = local_res8 + fVar41 * fVar39;
                local_res20 = local_res20 + fVar39 * fVar43;
                local_118 = local_118 + fVar39 * fVar40;
                if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index < NumElements",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                        ,0x60,L""), bVar27)) {
                  pcVar25 = (code *)swi(3);
                  (*pcVar25)();
                  return;
                }
                fVar44 = *(float *)((longlong)((pFVar37->State).SolverBodies + 5) + uVar34 + 0x14);
                fVar45 = *(float *)((longlong)((pFVar37->State).SolverBodies + 6) + uVar34);
                fVar46 = *(float *)((longlong)((pFVar37->State).SolverBodies + 6) + uVar34 + 4);
                if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index < NumElements",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                        ,0x60,L""), bVar27)) {
                  pcVar25 = (code *)swi(3);
                  (*pcVar25)();
                  return;
                }
                local_114 = local_114 +
                            fVar42 * *(float *)((longlong)((pFVar37->State).SolverBodies + 6) +
                                               uVar34 + 8) + fVar38 * fVar44;
                local_110 = local_110 +
                            fVar42 * *(float *)((longlong)((pFVar37->State).SolverBodies + 6) +
                                               uVar34 + 0xc) + fVar38 * fVar45;
                local_10c = local_10c +
                            fVar42 * *(float *)((longlong)((pFVar37->State).SolverBodies + 6) +
                                               uVar34 + 0x10) + fVar38 * fVar46;
                fVar45 = local_f8;
                fVar46 = local_f4;
              }
              fVar39 = (pFVar37->State).SolverBodies[1].State.ShockPropagationScale *
                       (pFVar37->State).SolverBodies[1].State.InvMScale *
                       (((pFVar37->State).SolverBodies[1].Body)->State).InvM;
              fVar44 = local_fc;
              if (__real_00800000 < fVar39) {
                local_108 = local_108 - fVar41 * fVar39;
                local_104 = local_104 - fVar39 * fVar43;
                local_100 = local_100 - fVar39 * fVar40;
                if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index < NumElements",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                        ,0x60,L""), bVar27)) {
                  pcVar25 = (code *)swi(3);
                  (*pcVar25)();
                  return;
                }
                fVar44 = *(float *)((longlong)((pFVar37->State).SolverBodies + 7) + uVar34 + 8);
                fVar41 = *(float *)((longlong)
                                    &(pFVar37->State).ManifoldPoints.ManifoldPoints.Elements[0].
                                     ContactTangentUAngular1.field_0x4 + uVar34);
                fVar39 = *(float *)((longlong)
                                    &(pFVar37->State).ManifoldPoints.ManifoldPoints.Elements[0].
                                     ContactTangentUAngular1.field_0x8 + uVar34);
                if (((pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements <= iVar31) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index < NumElements",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                        ,0x60,L""), bVar27)) {
                  pcVar25 = (code *)swi(3);
                  (*pcVar25)();
                  return;
                }
                fVar45 = fVar45 - (fVar42 * *(float *)((longlong)
                                                       &(pFVar37->State).ManifoldPoints.
                                                        ManifoldPoints.Elements[0].
                                                        ContactTangentVAngular1.field_0x0 + uVar34)
                                  + fVar38 * fVar44);
                fVar46 = fVar46 - (fVar42 * *(float *)((longlong)
                                                       &(pFVar37->State).ManifoldPoints.
                                                        ManifoldPoints.Elements[0].
                                                        ContactTangentVAngular1.field_0x4 + uVar34)
                                  + fVar38 * fVar41);
                local_fc = local_fc -
                           (fVar42 * *(float *)((longlong)
                                                &(pFVar37->State).ManifoldPoints.ManifoldPoints.
                                                 Elements[0].ContactTangentVAngular1.field_0x8 +
                                               uVar34) + fVar38 * fVar39);
                fVar44 = local_fc;
                local_f8 = fVar45;
                local_f4 = fVar46;
              }
            }
            uVar32 = (ulonglong)(iVar31 + 1U);
            pcVar35 = pcVar35 + 1;
            uVar34 = uVar34 + 0xbc;
            fVar41 = __real_00800000;
          } while ((int)(iVar31 + 1U) < (pFVar37->State).ManifoldPoints.ManifoldPoints.NumElements);
        }
        pFVar23 = (pFVar37->State).SolverBodies[0].Body;
        if (fVar41 < (pFVar37->State).SolverBodies[0].State.ShockPropagationScale *
                     (pFVar37->State).SolverBodies[0].State.InvMScale * (pFVar23->State).InvM) {
          fVar47 = *(float *)&(pFVar23->State).DP.field_0x4;
          fVar42 = *(float *)&(pFVar23->State).DP.field_0x8;
          *(float *)&(pFVar23->State).DP = local_res8 + *(float *)&(pFVar23->State).DP;
          *(float *)&(pFVar23->State).DP.field_0x4 = local_res20 + fVar47;
          *(float *)&(pFVar23->State).DP.field_0x8 = local_118 + fVar42;
          pFVar23 = (pFVar37->State).SolverBodies[0].Body;
          fVar47 = *(float *)&(pFVar23->State).DQ.field_0x4;
          fVar42 = *(float *)&(pFVar23->State).DQ.field_0x8;
          *(float *)&(pFVar23->State).DQ = local_114 + *(float *)&(pFVar23->State).DQ;
          *(float *)&(pFVar23->State).DQ.field_0x4 = local_110 + fVar47;
          *(float *)&(pFVar23->State).DQ.field_0x8 = local_10c + fVar42;
        }
        pFVar23 = (pFVar37->State).SolverBodies[1].Body;
        if (fVar41 < (pFVar37->State).SolverBodies[1].State.InvMScale *
                     (pFVar37->State).SolverBodies[1].State.ShockPropagationScale *
                     (pFVar23->State).InvM) {
          fVar47 = *(float *)&(pFVar23->State).DP.field_0x4;
          fVar42 = *(float *)&(pFVar23->State).DP.field_0x8;
          *(float *)&(pFVar23->State).DP = local_108 + *(float *)&(pFVar23->State).DP;
          *(float *)&(pFVar23->State).DP.field_0x4 = local_104 + fVar47;
          *(float *)&(pFVar23->State).DP.field_0x8 = local_100 + fVar42;
          pFVar23 = (pFVar37->State).SolverBodies[1].Body;
          fVar47 = *(float *)&(pFVar23->State).DQ.field_0x4;
          fVar42 = *(float *)&(pFVar23->State).DQ.field_0x8;
          *(float *)&(pFVar23->State).DQ = fVar45 + *(float *)&(pFVar23->State).DQ;
          *(float *)&(pFVar23->State).DQ.field_0x4 = fVar46 + fVar47;
          *(float *)&(pFVar23->State).DQ.field_0x8 = fVar44 + fVar42;
        }
      }
    }
    pFVar37 = pFVar37 + 1;
  } while( true );
}

// SolveVelocity @ 143a188e0

/* WARNING: Type propagation algorithm not settling */

void __cdecl
Chaos::Private::FPBDCollisionSolverJacobiHelper::SolveVelocity
          (TArrayView<Chaos::Private::FPBDCollisionSolverJacobi,int> *param_1,float param_2,
          bool param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  FSolverBody *pFVar22;
  FSolverBody *pFVar23;
  longlong lVar24;
  longlong lVar25;
  code *pcVar26;
  bool bVar27;
  FPBDCollisionSolverJacobiManifoldPoints *pFVar28;
  int iVar29;
  longlong lVar30;
  FPBDCollisionSolverJacobi *pFVar31;
  FConstraintSolverBody *pFVar32;
  FPBDCollisionSolverJacobi *pFVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float local_res8;
  float local_res20;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  
  pFVar33 = param_1->DataPtr;
  pFVar31 = pFVar33 + param_1->ArrayNum;
  if (pFVar33 != pFVar31) {
    pFVar28 = &(pFVar33->State).ManifoldPoints;
    pFVar32 = (pFVar33->State).SolverBodies + 1;
    fVar41 = __real_00800000;
    do {
      iVar29 = 0;
      fVar34 = CVars::Chaos_PBDCollisionSolver_JacobiStiffness *
               *(float *)((longlong)(pFVar28 + -1) + 0x2c0);
      iVar21 = (pFVar28->ManifoldPoints).NumElements;
      local_e8 = 0.0;
      local_e4 = 0.0;
      fVar37 = 0.0;
      local_e0 = 0.0;
      local_f8 = 0.0;
      fVar38 = 0.0;
      local_f4 = 0.0;
      fVar40 = 0.0;
      local_f0 = 0.0;
      fVar43 = 0.0;
      local_res8 = 0.0;
      fVar44 = 0.0;
      local_res20 = 0.0;
      fVar45 = 0.0;
      local_ec = 0.0;
      fVar46 = 0.0;
      fVar47 = 0.0;
      fVar36 = 0.0;
      fVar35 = 0.0;
      fVar39 = 0.0;
      fVar42 = 0.0;
      if (0 < iVar21) {
        lVar30 = 0;
        if ((iVar21 < 1) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < NumElements",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                ,0x68,L""), bVar27)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        do {
          if (0.0 < *(float *)((longlong)&(pFVar28->ManifoldPoints).Elements[0].NetPushOutNormal +
                              lVar30)) {
LAB_143a18a7c:
            if (((pFVar28->ManifoldPoints).NumElements <= iVar29) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < NumElements",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                    ,0x60,L""), bVar27)) {
              pcVar26 = (code *)swi(3);
              (*pcVar26)();
              return;
            }
            pFVar22 = pFVar32[-1].Body;
            fVar41 = (__real_bf800000 / param_2) *
                     *(float *)((longlong)&(pFVar28->ManifoldPoints).Elements[0].NetPushOutNormal +
                               lVar30);
            if (0.0 <= fVar41) {
              fVar41 = 0.0;
            }
            if (((pFVar28->ManifoldPoints).NumElements <= iVar29) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < NumElements",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                    ,0x68,L""), bVar27)) {
              pcVar26 = (code *)swi(3);
              (*pcVar26)();
              return;
            }
            pFVar23 = pFVar32[-1].Body;
            fVar36 = *(float *)(&(pFVar28->ManifoldPoints).Elements[0].RelativeContactPosition0.
                                 field_0x4 + lVar30);
            fVar35 = *(float *)(&(pFVar28->ManifoldPoints).Elements[0].RelativeContactPosition0.
                                 field_0x0 + lVar30);
            fVar39 = *(float *)(&(pFVar28->ManifoldPoints).Elements[0].RelativeContactPosition0.
                                 field_0x8 + lVar30);
            fVar42 = *(float *)&(pFVar23->State).W.field_0x4;
            fVar37 = *(float *)&(pFVar23->State).W;
            fVar38 = *(float *)&(pFVar23->State).W.field_0x8;
            fVar40 = *(float *)&(pFVar23->State).W.field_0x8;
            fVar43 = *(float *)&(pFVar23->State).W.field_0x4;
            fVar44 = *(float *)&(pFVar23->State).W;
            fVar2 = *(float *)&(pFVar22->State).V.field_0x8;
            fVar3 = *(float *)&(pFVar22->State).V;
            fVar4 = *(float *)&(pFVar22->State).V.field_0x4;
            lVar24 = *(longlong *)((longlong)(pFVar28 + -1) + 0x2dc);
            if (((pFVar28->ManifoldPoints).NumElements <= iVar29) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < NumElements",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                    ,0x68,L""), bVar27)) {
              pcVar26 = (code *)swi(3);
              (*pcVar26)();
              return;
            }
            lVar25 = *(longlong *)((longlong)(pFVar28 + -1) + 0x2dc);
            fVar5 = *(float *)(&(pFVar28->ManifoldPoints).Elements[0].RelativeContactPosition1.
                                field_0x4 + lVar30);
            fVar6 = *(float *)(&(pFVar28->ManifoldPoints).Elements[0].RelativeContactPosition1.
                                field_0x0 + lVar30);
            fVar7 = *(float *)(&(pFVar28->ManifoldPoints).Elements[0].RelativeContactPosition1.
                                field_0x8 + lVar30);
            fVar8 = *(float *)(lVar25 + 0x34);
            fVar9 = *(float *)(lVar25 + 0x30);
            fVar10 = *(float *)(lVar25 + 0x38);
            fVar11 = *(float *)(lVar25 + 0x38);
            fVar12 = *(float *)(lVar25 + 0x34);
            fVar13 = *(float *)(lVar25 + 0x30);
            fVar14 = *(float *)(lVar24 + 0x28);
            fVar15 = *(float *)(lVar24 + 0x20);
            fVar16 = *(float *)(lVar24 + 0x24);
            if (((pFVar28->ManifoldPoints).NumElements <= iVar29) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < NumElements",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                    ,0x68,L""), bVar27)) {
              pcVar26 = (code *)swi(3);
              (*pcVar26)();
              return;
            }
            fVar17 = *(float *)(&(pFVar28->ManifoldPoints).Elements[0].ContactNormal.field_0x4 +
                               lVar30);
            fVar18 = *(float *)(&(pFVar28->ManifoldPoints).Elements[0].ContactNormal.field_0x0 +
                               lVar30);
            fVar19 = *(float *)(&(pFVar28->ManifoldPoints).Elements[0].ContactNormal.field_0x8 +
                               lVar30);
            if (((pFVar28->ManifoldPoints).NumElements <= iVar29) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < NumElements",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                    ,0x68,L""), bVar27)) {
              pcVar26 = (code *)swi(3);
              (*pcVar26)();
              return;
            }
            fVar20 = *(float *)((longlong)
                                &(pFVar28->ManifoldPoints).Elements[0].ContactTargetVelocityNormal +
                               lVar30);
            if (((pFVar28->ManifoldPoints).NumElements <= iVar29) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < NumElements",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                    ,0x60,L""), bVar27)) {
              pcVar26 = (code *)swi(3);
              (*pcVar26)();
              return;
            }
            fVar36 = fVar34 * *(float *)((longlong)
                                         &(pFVar28->ManifoldPoints).Elements[0].ContactMassNormal +
                                        lVar30) *
                     (fVar20 - ((((fVar35 * fVar38 - fVar39 * fVar44) + fVar4) -
                                ((fVar6 * fVar10 - fVar7 * fVar13) + fVar16)) * fVar17 +
                                (((fVar39 * fVar43 - fVar36 * fVar40) + fVar3) -
                                ((fVar7 * fVar12 - fVar5 * fVar11) + fVar15)) * fVar18 +
                               (((fVar36 * fVar37 - fVar35 * fVar42) + fVar2) -
                               ((fVar5 * fVar9 - fVar6 * fVar8) + fVar14)) * fVar19));
            if (((pFVar28->ManifoldPoints).NumElements <= iVar29) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < NumElements",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                    ,0x60,L""), bVar27)) {
              pcVar26 = (code *)swi(3);
              (*pcVar26)();
              return;
            }
            fVar35 = fVar36 + *(float *)((longlong)
                                         &(pFVar28->ManifoldPoints).Elements[0].NetImpulseNormal +
                                        lVar30);
            if (fVar35 < fVar41) {
              fVar36 = (fVar36 - fVar35) + fVar41;
            }
            if (((pFVar28->ManifoldPoints).NumElements <= iVar29) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < NumElements",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                    ,0x60,L""), bVar27)) {
              pcVar26 = (code *)swi(3);
              (*pcVar26)();
              return;
            }
            *(float *)((longlong)&(pFVar28->ManifoldPoints).Elements[0].NetImpulseNormal + lVar30) =
                 fVar36 + *(float *)((longlong)
                                     &(pFVar28->ManifoldPoints).Elements[0].NetImpulseNormal +
                                    lVar30);
            if (((pFVar28->ManifoldPoints).NumElements <= iVar29) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < NumElements",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                    ,0x60,L""), bVar27)) {
              pcVar26 = (code *)swi(3);
              (*pcVar26)();
              return;
            }
            fVar35 = fVar36 * *(float *)(&(pFVar28->ManifoldPoints).Elements[0].ContactNormal.
                                          field_0x0 + lVar30);
            fVar41 = *(float *)((longlong)(pFVar28 + -1) + 0x2cc) *
                     *(float *)((longlong)(pFVar28 + -1) + 0x2d4) * ((pFVar32[-1].Body)->State).InvM
            ;
            fVar39 = fVar36 * *(float *)(&(pFVar28->ManifoldPoints).Elements[0].ContactNormal.
                                          field_0x4 + lVar30);
            fVar42 = fVar36 * *(float *)(&(pFVar28->ManifoldPoints).Elements[0].ContactNormal.
                                          field_0x8 + lVar30);
            if (__real_00800000 < fVar41) {
              local_e8 = local_e8 + fVar41 * fVar35;
              local_e4 = local_e4 + fVar41 * fVar39;
              local_e0 = local_e0 + fVar41 * fVar42;
              if (((pFVar28->ManifoldPoints).NumElements <= iVar29) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x60,L""), bVar27)) {
                pcVar26 = (code *)swi(3);
                (*pcVar26)();
                return;
              }
              local_res8 = local_res8 +
                           fVar36 * *(float *)(&(pFVar28->ManifoldPoints).Elements[0].
                                                ContactNormalAngular0.field_0x0 + lVar30);
              local_res20 = local_res20 +
                            fVar36 * *(float *)(&(pFVar28->ManifoldPoints).Elements[0].
                                                 ContactNormalAngular0.field_0x4 + lVar30);
              local_ec = local_ec +
                         fVar36 * *(float *)(&(pFVar28->ManifoldPoints).Elements[0].
                                              ContactNormalAngular0.field_0x8 + lVar30);
            }
            fVar41 = *(float *)((longlong)(pFVar28 + -1) + 0x2e4) *
                     *(float *)((longlong)(pFVar28 + -1) + 0x2ec) *
                     *(float *)(*(longlong *)((longlong)(pFVar28 + -1) + 0x2dc) + 0x134);
            fVar37 = local_f8;
            fVar38 = local_f4;
            fVar40 = local_f0;
            fVar43 = local_res8;
            fVar44 = local_res20;
            if (__real_00800000 < fVar41) {
              local_f8 = local_f8 - fVar41 * fVar35;
              local_f4 = local_f4 - fVar41 * fVar39;
              local_f0 = local_f0 - fVar41 * fVar42;
              if (((pFVar28->ManifoldPoints).NumElements <= iVar29) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x60,L""), bVar27)) {
                pcVar26 = (code *)swi(3);
                (*pcVar26)();
                return;
              }
              fVar45 = fVar45 - fVar36 * *(float *)(&(pFVar28->ManifoldPoints).Elements[0].
                                                     ContactNormalAngular1.field_0x0 + lVar30);
              fVar46 = fVar46 - fVar36 * *(float *)(&(pFVar28->ManifoldPoints).Elements[0].
                                                     ContactNormalAngular1.field_0x4 + lVar30);
              fVar47 = fVar47 - fVar36 * *(float *)(&(pFVar28->ManifoldPoints).Elements[0].
                                                     ContactNormalAngular1.field_0x8 + lVar30);
              fVar37 = local_f8;
              fVar38 = local_f4;
              fVar40 = local_f0;
            }
          }
          else {
            if (((pFVar28->ManifoldPoints).NumElements <= iVar29) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < NumElements",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                    ,0x68,L""), bVar27)) {
              pcVar26 = (code *)swi(3);
              (*pcVar26)();
              return;
            }
            pfVar1 = (float *)((longlong)&(pFVar28->ManifoldPoints).Elements[0].ContactDeltaNormal +
                              lVar30);
            if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) goto LAB_143a18a7c;
          }
          iVar29 = iVar29 + 1;
          lVar30 = lVar30 + 0xbc;
          fVar36 = local_ec;
          fVar35 = local_e8;
          fVar39 = local_e4;
          fVar42 = local_e0;
          fVar41 = __real_00800000;
        } while (iVar29 < (pFVar28->ManifoldPoints).NumElements);
      }
      pFVar22 = pFVar32[-1].Body;
      if (fVar41 < *(float *)((longlong)(pFVar28 + -1) + 0x2cc) *
                   *(float *)((longlong)(pFVar28 + -1) + 0x2d4) * (pFVar22->State).InvM) {
        fVar34 = *(float *)&(pFVar22->State).V.field_0x4;
        fVar2 = *(float *)&(pFVar22->State).V.field_0x8;
        *(float *)&(pFVar22->State).V = fVar35 + *(float *)&(pFVar22->State).V;
        *(float *)&(pFVar22->State).V.field_0x4 = fVar39 + fVar34;
        *(float *)&(pFVar22->State).V.field_0x8 = fVar42 + fVar2;
        fVar35 = *(float *)&(pFVar22->State).W.field_0x4;
        fVar39 = *(float *)&(pFVar22->State).W.field_0x8;
        *(float *)&(pFVar22->State).W = fVar43 + *(float *)&(pFVar22->State).W;
        *(float *)&(pFVar22->State).W.field_0x4 = fVar44 + fVar35;
        *(float *)&(pFVar22->State).W.field_0x8 = fVar36 + fVar39;
      }
      lVar30 = *(longlong *)((longlong)(pFVar28 + -1) + 0x2dc);
      if (fVar41 < *(float *)((longlong)(pFVar28 + -1) + 0x2e4) *
                   *(float *)((longlong)(pFVar28 + -1) + 0x2ec) * *(float *)(lVar30 + 0x134)) {
        *(float *)(lVar30 + 0x20) = fVar37 + *(float *)(lVar30 + 0x20);
        *(float *)(lVar30 + 0x24) = fVar38 + *(float *)(lVar30 + 0x24);
        *(float *)(lVar30 + 0x28) = fVar40 + *(float *)(lVar30 + 0x28);
        *(float *)(lVar30 + 0x30) = fVar45 + *(float *)(lVar30 + 0x30);
        *(float *)(lVar30 + 0x34) = fVar46 + *(float *)(lVar30 + 0x34);
        *(float *)(lVar30 + 0x38) = fVar47 + *(float *)(lVar30 + 0x38);
      }
      pFVar33 = pFVar33 + 1;
      pFVar28 = (FPBDCollisionSolverJacobiManifoldPoints *)((longlong)(pFVar28 + 1) + 0x44);
      pFVar32 = (FConstraintSolverBody *)((longlong)(pFVar32 + 0x22) + 8);
    } while (pFVar33 != pFVar31);
  }
  return;
}

